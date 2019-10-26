t = int(input().strip())
while t:
	t -= 1


	n = int(input().strip())

	m = None
	for i in range(len(n) - 1):
		if n[i] > n[i + 1]:
			m = n[:i] + n[i + 1:]
			break
	if m:
		print(int(m))
	else:
		print(int(n[:-1]))
