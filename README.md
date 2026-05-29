# Monitoramento de Missão Espacial

Projeto desenvolvido em linguagem C para simular o monitoramento básico de uma nave espacial durante uma missão.

## Funcionalidades

* Inserção de dados da nave:

  * Temperatura
  * Nível de energia
  * Status da comunicação

* Visualização do status atual da missão

* Análise automática dos dados com alertas para:

  * Superaquecimento
  * Baixo nível de bateria
  * Falha de comunicação

* Geração de relatório em arquivo `.csv`

## Estrutura do Projeto

* `Monitoramento_Espacial.c` → código principal do sistema
* `relatorio.csv` → arquivo gerado automaticamente com os dados da missão
