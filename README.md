# Choice-satisfaction-model

## Information, entropy and the paradox of choice: A model for understanding human choice behavior

**Abstract**: ‎‎Choice overload, commonly referred to as the paradox of choice, occurs when individuals feel overwhelmed by an excessive number of options. While it is often assumed that having more choices is advantageous, experimental evidence suggests that a larger selection can complicate the decision-making process, making it harder to choose. Consequently, choice satisfaction may diminish when the costs of making a choice outweigh its benefits, indicating that satisfaction follows an inverted U-shaped relationship with the size of the choice set. However, the theoretical underpinnings of this phenomenon remain underexplored. Here, we present an intuitive theoretical framework based on relative entropy and effective information to elucidate the inverted U-shaped relationship between satisfaction and choice set size. We begin by positing that individuals assign a probability distribution to a choice set based on their preferences, characterized by an observed Shannon entropy. We then define a maximum entropy that corresponds to a worst-case scenario where individuals are indifferent among options, leading to equal probabilities for all alternatives. We hypothesized that satisfaction is related to the probability of identifying an ideal choice within the set. By comparing observed entropy to maximum entropy, we derive the effective information of choice probabilities, demonstrating that this metric reflects satisfaction with the options available. There exists an optimal point at which choice satisfaction is maximized relative to the size of the choice set. For smaller choice sets, individuals can more easily identify their best option, resulting in a sharper probability distribution around the preferred choice and, consequently, minimum entropy, which signifies maximum information and satisfaction. Conversely, in larger choice sets, individuals struggle to compare and evaluate all alternatives, leading to missed opportunities and increased entropy. This smooth probability distribution ultimately reduces choice satisfaction, thereby producing the observed inverted U-shaped trend. Our intuitive approach enhances the understanding of the theoretical underpinnings of the paradox of choice, with significant implications for social, marketing, and economic policy-making.

## Usage

- These codes reproduce the data used to generate the model predictions presented in the manuscript. Specifically, ```numerical_example.cpp``` replicates the inverted-U relationship between choice satisfaction and choice set size using the numerical probabilities reported in Table 2, as illustrated in Fig. 4. Meanwhile, ```analytical_example.cpp``` reproduces choice satisfaction as a function of the optimal set size and missed choices, as shown in Figs. 5-7.

#### Compilation

- Compile and execute either of the scripts with the following syntax:

```
g++ -std=c++11 file_name.cpp
./a.out
```

#### Requirements

- C++11,
- g++ compiler.

## Citation

- Madadi Asl, M., Hajian, K., Ramezani, S., Torabi, R. & Sadeghi, M. (2026) Information, entropy and the paradox of choice: A model for understanding human choice behavior.
