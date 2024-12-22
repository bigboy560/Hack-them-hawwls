// 6) Christmas Lights Toggle:
// A mall is decorating with a set of Christmas lights that should alternate between "on" and "off."

#include <stdio.h>

void decorate_lights(int num_lights) {
    int i;
    int lights[num_lights];
    for (i = 0; i < num_lights; i++) {
        lights[i] = 0; 
    }
    for (i = 0; i < num_lights; i++) {
        lights[i] = 1; 
        printf("Light %d: %s\n", i + 1, lights[i] == 1 ? "On" : "Off");
    }
}

int main() {
    int num_lights;
    printf("Enter the number of lights: ");
    scanf("%d", &num_lights);
    decorate_lights(num_lights);
    return 0;
}
