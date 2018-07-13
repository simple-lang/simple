# Variables And Their Operations.
Variables are  placeholders for values which can be strings, array / List, number, boolean etc.

## Declaring varibles in simple-lang.
In simple-lang, variables are defined without any prefix. I mean, we don't have to add a prefix like JavaScript's`let` or C's `int` etc. We have different variable types or do I say data structures that enable us determine the type ofvariable we're declaring. We have:
+ string
+ number
+ List
+ boolean
Below, is a code block that shows the variable declaration of all listed variable types.
```
name = "simple-lang" # String variable declaration.
age = 1 # Number variable declaration.
List = ["s", "I", "M", "P", "L", "E"] # List type declaration.
fake = False # boolean.
```
The above declaration methods for variables are referred to as low-level variable declaration. These are limited to certain functionalities and method.

## Declaring variables in higher-level order.
The string declared in a low level order, has no functionality but the one declared using the high-order method.
```
# Declaring string using the higher-level order.
name = new String("Abdulazeez") # This is more secure and matured.
list = new List(["s","i","m","p","l","e"])
```
> Note that, variable declared using the new* classical method are open to certain functions. The list can add a  new  value using the .pop() method bit cannot do that when declared in a low-level style.
## Some String methods.
To use strings declared by high-order style, we need to know the various methods attached to them. Let's check them out.

# Arithmetic Operations. ( +, -, /, * )
In simple-lang, basic / normal arithmetical operations can be carried out. That is, addition (+), subtraction(-), division(/) and multiplication(*).
The addition symbol is also used for concatenating strings. I mean, adding two different strings together in a simple file e,g
```
display "SIMPLE" + "-" + "LANG".
```
But, the subtraction does no function in simple strings and can only be used mathematically for now:
> We intend to add functionalities for the *minus* operator so we can use it in sorting e.g lower - higher.
The examples folder, contains basic example. But lets see the operators in action:
```
<!-- Remember, we added string concatenation example above.-->

#Adding two numbers:
display 1 + 2 # displays 3.
# Subtracting numbers:
display 4 - 2 # displays 2.
#multiplying numbers.
display 2 * 4 # displays 8.
#Dividing numbers.
display 10 / 2 # displays 5
```

## Increment and Decrement operators.
In SIMPLE-LANG, we also have the increment **(++)** and the decrement __(--)__. These operators, are very useful in *loops*. Let's see them in action:
```
n = 1

do {
	display " "+n + " "
	n++
} while  n < 10 

```
The above example, increases the  value of __n__ if it is less than (<) 10.

## variable  value replacements and addition .
Take for example, we have a variable, *a* which hold the value of 9. Traditionally, we can do this as `n = n + 1`.That is, n is equal to the current value of n + 1 ( n = 9 + 1). But, we can do this in a more simpler form: `n += 1`. The **=** represents n. The same applies to other arithmetical methods.

### Replacing a variable's value.
In this case, we're referrinh to the **list** variable type. Using the *+=* operator, replaces the current value of the list with the new one passed. Let's look at an example.
```
myList = ["yam", "beans", "Mac"]
# display myList returns - yam, beans and Mac
myList += ["bread", "butter", "jam"]
# display myList returns - bread, butter and jam.
# Total replacements just took place.
```
Don't worry, we'll discuss List in a later chapter entirely, discussing how to add, remove, get keys and reverse list.
