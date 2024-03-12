# Projeto de IoT com Arduino e Node-RED 🌐🛠️

Este repositório contém a solução desenvolvida para o trabalho de Edge Computing, que consiste na integração de sensores com o Arduino e o NODE-RED para comunicação e visualização de dados em tempo real.

## 👥 Integrantes

- **Matheus Farias** (RM554254)
- **Miguel Parrado** (RM554007)
- **Pedro Henrique** (RM553988)
- **Vitor Pinheiro** (RM553693)

## Descrição do Projeto 📝

O projeto visa criar uma solução de IoT utilizando o Arduino para a leitura de dados de sensores (ultrassônico, DHT11 e LDR) e o NODE-RED para a visualização desses dados em dashboards interativos. Os sensores são responsáveis por coletar informações ambientais, como distância, temperatura, umidade e luminosidade, e transmiti-las para o NODE-RED por meio da comunicação serial.

## 🛠️ Componentes do Projeto

- **Arduino:** O código no Arduino é responsável pela leitura dos sensores e envio dos dados pela porta serial.
- **Sensores:**
  - Sensor Ultrassônico: Mede a distância em centímetros.
  - Sensor DHT11: Mede temperatura e umidade relativa do ar.
  - LDR (Light Dependent Resistor): Mede a intensidade luminosa do ambiente.
- **NODE-RED:** O fluxo no NODE-RED recebe os dados da porta serial, processa-os e exibe-os em dashboards personalizados.

## Instruções de Uso 🚀

1. Carregue o código no Arduino e conecte os sensores conforme especificado.
2. Execute o NODE-RED e importe o fluxo fornecido.
3. Conecte o Arduino ao computador e configure a porta serial no Serial In do NODE-RED.
4. Inicie o fluxo no NODE-RED e observe os dados dos sensores sendo exibidos nos dashboards.

## Observações ℹ️

- Certifique-se de ter instalado as bibliotecas necessárias no Arduino e no NODE-RED.
- Verifique as configurações de comunicação serial para garantir que os dados estejam sendo transmitidos corretamente.
- Caso ocorram problemas, consulte a documentação fornecida ou entre em contato com os integrantes do grupo.


