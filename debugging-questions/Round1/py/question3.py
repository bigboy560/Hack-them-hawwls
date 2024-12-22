# 3) Gift Exchange Logic:
# Santa is organizing a gift exchange among friends. Each friend has a gift they want to give to another friend. 
# The program is supposed to ensure that no one gives a gift to themselves, but there’s a bug 
# that causes some friends to exchange gifts with themselves.

def gift_exchange(friends, gifts):
    for i in range(len(friends)):
        
        if friends[i] != gifts[i]:
            print(f"{friends[i]} gives a gift to {gifts[i]}")
        else:
            print(f"{friends[i]} cannot give a gift to themselves!")

friends = ["Alice", "Bob", "Charlie", "Daisy"]
gifts = ["Bob", "Charlie", "Alice", "Daisy"]
gift_exchange(friends, gifts)
