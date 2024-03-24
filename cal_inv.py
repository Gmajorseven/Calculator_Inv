#Insert data of investment
name = input("Enter the name of asset: ")
cap = int(input("Capital: "))
rk = float(input("%Risk: "))
pr = float(input("Price: "))
sl = float(input("Stoploss: "))

#Calculate
def calculate():
    value_rk = cap * rk
    value_gap = pr - sl
    result = value_rk / (value_gap / pr)
    return result

#Calculate size of investment
value = calculate() / pr
loss = cap * rk

#Display
print(name)
print("If loss, You''ll loss: % 10.2f " % loss)
print("You can buy: % 19.2f " % calculate())
print("Amount of asset: % 0.8f " % value)