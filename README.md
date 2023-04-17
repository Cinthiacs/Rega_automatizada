# Rega_automatizada
Projeto 2° sem Engenharia de Computação.

# Sobre o projeto

#Tema trabalhado: "Água".

<div align="center">
  <img width= "411" alt="IMG_20230202_113442" src="https://github.com/Cinthiacs/Rega_automatizada/blob/main/regaAuto.png">
</div>

* Este é um projeto simples de controle de umidade para um dispositivo Arduino. 
* Ele utiliza um sensor de umidade conectado ao pino 5 e um atuador conectado ao pino 6 para manter o nível de umidade desejado. 
* O sensor de umidade está ligado a um comparador para que haja a aferição correta da umidade do solo.

* O programa verifica o estado do sensor de umidade e controla o atuador de acordo com o valor lido.

* Quando a umidade do solo estiver baixa, irá acender o led vermelho, indicando que irá acontecer a irrigação, o arduino irá mandar um sinal elétrico para o módulo relé para que acione a bomba d´água, recebendo 127V, então em seguida o led amarelo, para indicar que a bomba d´água foi acionada, e assim que o sensor receber a irrigação adequada irá acender o led verde, para indicar que a irrigação está adequada e desligar a bomba d´água. 



### Configurações de Pinagem

Para executar este código, você precisará conectar os seguintes componentes:

* Sensor de Umidade: Pino 5 (entrada).
* Atuador: Pino 6 (saída).
* LED Vermelho: Pino 2 (saída).
* LED Amarelo: Pino 3 (saída).
* LED Verde: Pino 4 (saída).

### Instalação
Para instalar o código, siga estes passos:

```bash
clonar repositório
git clone https://github.com/Cinthiacs/Rega_automatizada.git
```
1. Copie o código do arquivo regaAuto.ino e cole-o no seu projeto.
3. Compile e carregue o código no seu dispositivo Arduino.

### Como Funciona
 * O código começa configurando a velocidade da porta serial e as configurações dos pinos para entrada ou saída. Em seguida, o programa entra no loop principal.

* No loop, o programa verifica o estado do sensor de umidade e determina se ele está seco ou úmido. Se estiver seco, os LEDs vermelho e amarelo são ativados e o atuador é ligado em baixa. Se estiver úmido, o LED verde é ativado e o atuador é desligado em alta.

### Contribuição
Se você encontrar problemas com este código ou tiver sugestões de melhoria, por favor, abra uma issue ou um pull request neste repositório.


### Video pitch exemplificando o projeto:
https://youtu.be/SiPStwmjtIQ

### Autora

Cinthia Cavalheiro.
