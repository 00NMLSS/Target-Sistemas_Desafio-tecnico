def count_letter_a(text):

  lowercase_text = text.lower()
  count = lowercase_text.count('a')
  found = count > 0

  return found, count

# Digitar a string
str_analisada = input("Insira a string: ")

# Contar aparições de 'a'
found, count = count_letter_a(str_analisada)

# Resultante
if found:
  print(f"A letra 'a' foi encontrada {count}x na string.")
else:
  print("A letra 'a' não foi encontrada nesta string.")