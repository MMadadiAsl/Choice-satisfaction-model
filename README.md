# Choice-satisfaction-model

## Information, entropy and the paradox of choice: A model for understanding human choice behavior

**Abstract**: Choice overload occurs when individuals feel overwhelmed by excessive alternatives during decision making‎. ‎Although larger choice sets are often assumed to be more satisfying‎, ‎behavioral evidence reveals an inverted U-shaped relationship between satisfaction and choice set size‎. However, quantitative frameworks linking information processing to choice satisfaction remain underdeveloped‎. ‎Here‎, ‎we develop a simple framework based on relative entropy and effective information to explain this behavior‎. ‎We propose that satisfaction depends on the probability of finding an ideal option within a choice set and is determined by the informational structure of preferential choice probabilities relative to a baseline state of indifference‎. ‎‎Small to moderately sized sets ‎allow efficient comparison and identification of preferred options‎, ‎thereby maximizing both effective information and satisfaction‎. ‎As the number of alternatives increases‎, ‎cognitive limitations ‎increase uncertainty‎, leading to reduced effective information and satisfaction. ‎This mechanism naturally produces the experimentally observed inverted U-shaped dependence of satisfaction on choice set size‎. Behavioral experiments across varying choice set sizes closely matched model predictions, suggesting that effective information provides a robust metric for choice satisfaction‎. These findings offer a principled theoretical account of the paradox of choice and carry broader implications for consumer psychology and human choice behavior.

## Usage

- These codes reproduce the data used to generate the model predictions presented in the manuscript. Specifically, ```numerical_example - Fig4.cpp``` replicates the inverted U-shaped relationship between satisfaction and choice set size using the numerical probabilities reported in Table 2, as illustrated in Fig. 4. ```analytical_example.cpp``` reproduces choice satisfaction as a function of the optimal set size and missed choices, as shown in Figs. 5-7. Meanwhile, ```numerical_example - Fig8A1.cpp``` and ```numerical_example - Fig8A2.cpp``` reproduce the results presented in Fig. 8A1 and A2.

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
