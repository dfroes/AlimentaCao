# AlimentaCão: Proposta de Automação de Comedouro para Cães com prototipação por Arduíno e Web Service

A Internet das Coisas (Internet of Things – IoT) está presente a muito tempo em nossas vidas, mas apenas nos últimos anos que foi possível presenciá-la e possuí-la em nossas mãos. Com o objetivo de melhorar processos e de facilitar ações do dia a dia, novos produtos inteligentes surgem a cada dia e ganham mais espaço no mercado nas mais diversas áreas. Baseado neste fato, nota-se que essa inteligência ainda não é tão presente no mercado Pet, onde algumas ações podem ser facilitadas por essa tecnologia, como a alimentação, práticas de atividades, entre outras. Ao mesmo tempo em que essas facilidades tecnológicas ainda não estão tão presentes no mundo Pet, este mercado possui uma grande demanda e é superaquecido, fazendo com que qualquer novidade seja algo muito atraente para os consumidores donos de animais de estimação.
Além disso, estas inovações não facilitam apenas a vida dos donos, mas também a do Pet. Principalmente em períodos em que os donos estão fora de casa à trabalho ou viajando, muitos animais ficam sem comida e mais inativos, causando problemas de saúde ao Pet. Sendo assim, estes dispositivos contribuem para o bem-estar do animal independente da situação.
#### Assista o vídeo do projeto: https://www.youtube.com/watch?v=QMDgRJchOsQ


<div align="center">
<img src="https://user-images.githubusercontent.com/54864164/119915180-57614b80-bf38-11eb-8d21-655f05140f70.png" width="700px" />
</div>

## Materiais e Componentes


<div align="center">
<img src="https://user-images.githubusercontent.com/54864164/119914233-22ec9000-bf36-11eb-9f57-933a97609352.png" width="300px" />
</div>

### Placa Arduino Uno R3

O Arduino Uno R3, é o mais popular entre suas variações, pois além do preço acessível, possui uma grande quantidade de entradas e saídas, facilitando o estudo e criação de projeto de pequeno e médio porte. 
Ele possui 14 entradas e saídas digitais, sendo seis delas analógicas e seis liberadas para configuração Pulse With Modulation (~). Possui também um microcontrolador Atmega328 com velocidade de 16MHz, 32Kb de memória de armazenamento, 2Kb de momória de execução para aplicativos. Possui a operação da placa em 5V, mas pode ser alimentada por fontes externas que entregam de 7V a 12V.





<div align="center">
<img src="https://user-images.githubusercontent.com/54864164/119914666-187ec600-bf37-11eb-8929-8bc7fedc250a.png" width="300px" />
</div>

### Placa Protoboard 400 pontos

A placa de Ensaio (ou mais conhecida como Protoboard), é uma das ferramentas que facilitam a montagem e testes de circuitos eletrônicos. Uma grande facilitadora quando a solda dos componentes é um recurso escasso.





<div align="center">
<img src="https://user-images.githubusercontent.com/54864164/119914610-f9803400-bf36-11eb-9d5d-2b6ba963519b.png" width="300px" />
</div>

### Jumpers

Os jumpers são fios que possuem suas extremidades rígidas com o intuito de encaixar na protoboard, facilitando a conexão dos componentes sem a necessidade de solda.





<div align="center">
<img src="https://user-images.githubusercontent.com/54864164/119914700-2e8c8680-bf37-11eb-89b1-2ae59eb54d31.png" width="300px" />
</div>

### Sensor de Distância Ultrassônico HC-SR04

O Sensor de Distância Ultrassônico HC-SR04, com sua ótima precisão de 3m, é capaz de medir distâncias entre 2 e 4cm. Ele calcula esta distância a partir da fórmula (Tempo ECHO em nível alto * Velocidade do som)/2. Este sensor é alimentado com 5V DC, possui uma corrente equivalente a 2mA e um ângulo de ação de 15º. Além disso, possui pinos VCC, Trigger, ECHO e GND para medição.





<div align="center">
<img src="https://user-images.githubusercontent.com/54864164/119914721-38ae8500-bf37-11eb-938c-0e1cd6c85192.png" width="300px" />
</div>

### Micro Servo Motor 9g

O servo motor micro, é um componente que permite a movimentação de outras partes ou de peças acopladas à sua haste móvel. Ele possui velocidade sem carga de aproximadamente 0,36 segundos para uma semi-volta (equivalente a 180º), além de contar com um torque máximo de até 1.6kg/cm, tudo isso operando à uma voltagem de 4,8V. Sua voltagem pode variar de 4,8V até 6V e sua corrente elétrica em operação é menor que 500mA. Seu cabo de conexão possui o comprimento de 180mm, suas dimensões são de 22 x 12,5 x 29,5 e possui um peso de 9g.



## Lógica, Estrutura, Circuito Elétrico e Conexão MQTT

### Fluxograma do Sistema

<div align="center">
<img src="https://user-images.githubusercontent.com/54864164/119915593-3a794800-bf39-11eb-9376-5429c0905adf.png" width="700px" />
</div>



### Protótipo do Projeto 

<div align="center">
<img src="https://user-images.githubusercontent.com/54864164/119915713-76aca880-bf39-11eb-96ab-395dfdca4487.png" width="600px" />
</div>



### Circuito Elétrico

<div align="center">
<img src="https://user-images.githubusercontent.com/54864164/119915717-790f0280-bf39-11eb-993d-11e08a87de32.png" width="600px" />
</div>



### Conexão MQTT

<div align="center">
<img src="https://user-images.githubusercontent.com/54864164/119918156-4fa4a580-bf3e-11eb-8350-bf0661333a26.jpeg" width="600px" />
</div>


## Softwares Utilizados para o Desenvolvimento do Projeto

### Arduino IDE

<div align="center">
<img src="https://user-images.githubusercontent.com/54864164/119918168-559a8680-bf3e-11eb-8915-a7850bd9a3da.png" width="200px" />
</div>

 é uma aplicatição de plataforma cruzada, escrito em funções de C e C ++. É usado para escrever e fazer upload de programas em placas compatíveis com Arduino, mas também, com a ajuda de núcleos de terceiros, outras placas de desenvolvimento de fornecedores. (Fonte: Wikipedia)

### hiveMQ

<div align="center">
<img src="https://user-images.githubusercontent.com/54864164/119918170-56cbb380-bf3e-11eb-8d86-a925ec6e60f0.png" width="200px" />
</div>

HiveMQ é uma plataforma de mensagens baseada em MQTT projetada para o movimento bidirecional rápido, eficiente e confiável de dados entre o dispositivo e a nuvem. (Fonte: LinkedIn HiveMQ)

### Node-RED

<div align="center">
<img src="https://user-images.githubusercontent.com/54864164/119918173-56cbb380-bf3e-11eb-9e2d-9fc5b74ae9ed.png" width="200px" />
</div>

Node-RED é uma ferramenta de desenvolvimento baseada em fluxo para programação visual desenvolvida originalmente pela IBM para conectar dispositivos de hardware, APIs e serviços online como parte da Internet das Coisas. (Fonte: Wikipedia)

### Fritzing

<div align="center">
<img src="https://user-images.githubusercontent.com/54864164/119918174-57644a00-bf3e-11eb-8e9a-c2404534f2b8.png" width="200px" />
</div>

Fritzing é uma iniciativa de código aberto para desenvolver um software tipo CAD amador para design de hardware eletrônico, para apoiar designers e artistas prontos para deixar de experimentar um protótipo e construir um circuito mais permanente com uma Placa de Circuito Impresso. (Fonte: Wikipedia)



## Resultados

Os resultados obtidos no projeto foram de total sucesso. Todas as conexões e montagens foram feitas com muita dedicação para chegarmos ao resultado esperado e a entrega ser como foi definida inicialmente.
	Com base nas pesquisas a partir da proposta do projeto, foi notada a necessidade de objetos inteligentes no mercado PET. Com isso, o desenvolvimento de um comedouro automatizado foi de grande utilidade para os consumidores deste nicho, pois traz resultados quantitativos, apresentado o estado atual do recipiente, podendo estar cheio ou vazio.
Durante seu funcionamento, o protótipo se comportou da forma esperada, executando todas as suas funcionalidades estipuladas anteriormente.
Para obter esses resultados, foram executados diversos testes:

#### Velocidade da abertura da porta de liberação do alimento (que consequentemente define a quantidade).
#### Distância em centímetros inversamente proporcional ao estado do recipiente (quanto menor o valor em centímetros, maior a quantidade de comida no recipiente).
#### Angulação correta do Servo Motor par abranger toda a completude da abertura da porta de libertação do alimento.
#### Angulação da estrutura do projeto, a qual tem a função de despejar a comida para fora.









