# CÓDIGO DE EXEMPLO PARA O MÓDULO 1 - IA EMBARCADA

## 1. INTRODUÇÃO:

### 1.1: OBJETIVOS:
O objetivo foi analizar o impacto que modelos de IA simples apresentam na temperatura e, consequentemente, na performance da CPU.

### 1.2: Metodologia:
Foi comparado o aumento de temperatura no processador para: um código que não faz nada, só mede a temperatura do processador, um código com 2 tasks em execução (freeRTOS), e um código com 1 task em execução (cujo papel é medir a temperatura do processador), e uma IA rodando inferência. Comparamos o resultado para analizar, comparativamente, o impacto de rodar inferência em microcontroladores.

### 1.3: Da organização do repositório:
Neste repositório, em src, main.cpp consiste somente no código da etapa de IA. Porém, a pasta "other codes" contêm os demais códigos, das outras duas etapas. Tirando isso, vale ressaltar que todo o framework visto neste repositório foi tirado de https://github.com/atomic14/tensorflow-lite-esp32 , que consiste em um tutorial compreensivo para embarcar modelos tensorflow lite para a esp32.

## 2. Resultados:


## 3. Conclusão:
