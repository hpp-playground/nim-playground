proc sumTillNegative(x: varargs[int]): int {.discardable.} =
  for i in x:
    if i < 0:
      return
    result = result + i

echo sumTillNegative() # echos 0
sumTillNegative(3, 4, 5) # echos 12
sumTillNegative(3, 4 , -1 , 6) # echos 7