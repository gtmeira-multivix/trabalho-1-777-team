
# Estruturas de Dados - Trabalho 1

O objetivo deste trabalho é implementar um parser de expressões matemáticas. Seu parser deve suportar, no mínimo, as operações a seguir:

* Soma
* Subtração
* Multiplicação
* Divisão
* Potenciação

Devem ser respeitadas as precedências dos operadores (primeiro potenciação, depois multiplicação e divisão e, por último, soma e subtração), a associatividade dos operadores (potenciação associatividade à direita, os demais associatividade à esquerda) e deve ser suportado o uso de parênteses para alterar a ordem das operações.

Seu programa deve começar solicitando que o usuário digite uma expressão. Então, deve-se exibir a expressão em [Notação Polonesa Reversa (RPN)](https://en.wikipedia.org/wiki/Reverse_Polish_notation) e o valor final da expressão:

```
Digite uma expressão:
3+4*2/(1-5)^2^3
Expressão em notação polonesa reversa:
3.00 4.00 2.00 * 1.00 5.00 - 2.00 3.00 ^ ^ / +

Resultado final: 3.00
```

Sugere-se que o trabalho seja feito em três partes, nessa ordem:

1) **Implementação das estruturas de dados:** comece implementando uma fila e uma pilha. Ambas as estruturas devem ser capazes de armazenar instâncias do tipo `Token`.
2) **Conversão para notação polonesa reversa:** com as estruturas criadas, aloque uma pilha de operadores e uma fila de saída e utilize-as na implementação do [Algoritmo Shunting Yard](https://en.wikipedia.org/wiki/Shunting-yard_algorithm). Ao final da conversão, exiba o resultado em RPN.
3) **Cálculo do valor final da expressão:** utilizando a expressão RPN, utilize uma pilha para obter o valor final da expressão.

## Código auxiliar
É fornecido junto com o trabalho um código auxiliar que realiza a separação dos tokens, bem como uma sugestão de funções a serem implementadas nas estruturas de dados do problema. O uso do código auxiliar não é obrigatório.

## Entrega
O trabalho deve ser entregue até as **23:59 do dia 06/10 (sábado)**. A entrega deve ser feita através do GitHub. 
**Não serão aceitos trabalhos com atraso nem enviados por e-mail.**

## Grupo
O trabalho pode ser feito em grupos de até 3 pessoas. Preencha abaixo o nome dos integrantes do grupo:

1) �lvaro Armani Tozatto - 1713812
2) Jorge Mares Gobbi - 1714665

