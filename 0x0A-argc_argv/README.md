How to use arguments passed to your program
What are two prototypes of main that you know of, and in which case do you use one or the other
How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters
0-whatsmyname.c	:prints its name, followed by a new line.
                If you rename the program, it will print the new name, without having to compile it again
1-args.c        :prints the number of arguments passed into it.
2-args.c	:prints all arguments it receives.
                All arguments should be printed, including the first one
                Only print one argument per line, ending with a new line
3-mul.c	        :multiplies two numbers.
                print the result of the multiplication, followed by a new line
                it assumes that the two numbers and result of the multiplication can be stored in an integer
                 If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1
4-add.c	        :program that adds positive numbers.
                Print the result, followed by a new line
                If no number is passed to the program, print 0, followed by a new line
                If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
