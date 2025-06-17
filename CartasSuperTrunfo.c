#include <stdio.h>
# Dados fixos das cartas
carta1 = {
    "Estado": "A",
    "Código": "A01",
    "Nome da Cidade": "São Paulo",
    "População": 12325000,
    "Área (km²)": 1521.11,
    "PIB (bilhões de R$)": 699.28,
    "Número de Pontos Turísticos": 50
}

carta2 = {
    "Estado": "B",
    "Código": "B02",
    "Nome da Cidade": "Rio de Janeiro",
    "População": 6748000,
    "Área (km²)": 1200.25,
    "PIB (bilhões de R$)": 300.50,
    "Número de Pontos Turísticos": 30
}

def exibir_carta(carta):
    print("-" * 40)
    for chave, valor in carta.items():
        print(f"{chave}: {valor}")
    print("-" * 40)

# Exibição das cartas fixas
print("Carta 1 (fixa):")
exibir_carta(carta1)

print("\nCarta 2 (fixa):")
exibir_carta(carta2)

# Cadastro de novas cartas via entrada do usuário
cartas = []
for i in range(2):
    print(f"\nCadastro da Carta {i + 1}")
    carta = {}
    carta["Código"] = input("Código: ")
    carta["Nome da Cidade"] = input("Nome da Cidade: ")
    carta["População"] = int(input("População: "))
    carta["PIB (bilhões de R$)"] = float(input("PIB (bilhões de R$): "))
    carta["Número de Pontos Turísticos"] = int(input("Número de Pontos Turísticos: "))
    carta["Área (km²)"] = float(input("Área (km²): "))
    carta["Estado"] = input("Estado (sigla): ")
    cartas.append(carta)

# Exibindo as cartas cadastradas pelo usuário
print("\nCartas cadastradas:")
for i, carta in enumerate(cartas):
    print(f"\nCarta {i + 1} (cadastrada):")
    exibir_carta(carta)
