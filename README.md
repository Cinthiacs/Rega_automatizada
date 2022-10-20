# Rega_automatizada
Projeto 2° sem Engenharia de Computação.

# Sobre o projeto

#Tema trabalhado: "Água".

Projeto com o propósito de automatizar a irrigação de uma plantação caseira,possibilitando aferir a irrigação do solo, através de um sensor de umidade, onde está conectado ao microcontrolador Arduino UNO, foi feita a programação HIGH para sensor seco, ligando o led vermelho, em sequencia o led amarelo para enviar energia para o relé e acionar a bomba, e else (caso contrário) para úmido, ligando o led verde encerrando o ciclo.

O sensor de umidade está ligado a um comparador para que haja a aferição correta da umidade do solo.
Quando a umidade do solo estiver baixa, irá acender o led vermelho, indicando que irá acontecer a irrigação, o arduino irá mandar um sinal elétrico para o módulo relé para que acione a bomba d´água, recebendo 127V, então em seguida o led amarelo, para indicar que a bomba d´água foi acionada, e assim que o sensor receber a irrigação adequada irá acender o led verde, para indicar que a irrigação está adequada e desligar a bomba d´água.

# Tecnologias utilizadas:
- Linguagem C.


# Como executar o projeto:


```bash
# clonar repositório
git clone https://github.com/Cinthiacs/Rega_automatizada.git

# Abrir ponte_levadiça
Copiar o código e executar em uma IDE Arduino.

# Video pitch exemplificando o projeto:
https://youtu.be/SiPStwmjtIQ

```
# Autora

Cinthia Cavalheiro Silverio.

www.linkedin.com/in/cinthia-cavalheiro-silverio-482667219
