# Choice-satisfaction-model

## Information, entropy and the paradox of choice: A model for understanding human choice behavior

**Abstract**: Choice overload occurs when individuals feel overwhelmed by‎ excessive alternatives during decision making. ‎‎‎‎Although larger choice sets are often assumed to be more satisfying‎, ‎behavioral evidence demonstrates an inverted U-shaped relationship between satisfaction and choice set size. ‎‎‎‎‎The theoretical underpinnings of this phenomenon‎, ‎however‎, ‎remains insufficiently understood‎. ‎Here‎, ‎we develop a framework grounded in relative entropy and effective information to explain this behavior‎. ‎We hypothesize that satisfaction depends on the probability of finding an ideal option within a choice set‎ ‎and propose that it is determined by the informational structure of choice probabilities relative to a baseline state of indifference among options‎. ‎As the number of alternatives increases‎, ‎discrimination between items becomes increasingly difficult‎, ‎reducing the effective information associated with preferences‎. ‎Small to moderately sized sets, in contrast, allow efficient comparison and identification of preferred options, thereby maximizing both effective information and satisfaction. ‎Beyond a critical set size‎, ‎cognitive limitations impair comparison‎, ‎increase uncertainty, and lead to missed opportunities, resulting in decreased satisfaction. ‎This mechanism naturally produces the experimentally observed inverted U-shaped dependence of satisfaction on choice set size. ‎To test the model‎, ‎we conducted a behavioral experiment in which participants selected items from sets of varying‎‎ cardinalities‎. ‎The experimental results closely matched model predictions‎, suggesting that effective information provides a robust metric for choice satisfaction‎. ‎‎These findings offer a principled theoretical account of the paradox of choice and carry broader implications for consumer psychology and human decision-making behavior.

## Usage

- These codes reproduce the data used to generate the model predictions presented in the manuscript. Specifically, ```numerical_example.cpp``` replicates the inverted U-shaped relationship between satisfaction and choice set size using the numerical probabilities reported in Table 2, as illustrated in Fig. 4. Meanwhile, ```analytical_example.cpp``` reproduces choice satisfaction as a function of the optimal set size and missed choices, as shown in Figs. 5-8.

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
