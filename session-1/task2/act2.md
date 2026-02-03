
## Compilation activities

You are given the source code file: hello.c

1. **Compile the source code using gcc**

  `gcc hello.c`

The result is an executable file: a.out

Run the executable file

  `./a.out`

2. **Compile to a named executable**

  `gcc hello.c -o hello`

The result is an executable file: hello

Run the executable file

  `./hello`

3. **Compile to object code and then link to an executable in 2 stages**

  `gcc -c hello.c`

The intermediate result is an object code file: hello.o

  `gcc hello.o -o hello`

The final result is an executable file we can run: hello

  `./hello`

4. **What is object code?**

We can look inside the object code using the linux utility objdump.
We can use it as a "disassembler" to display object file

  `objdump -d hello.o`

Do you recognise this from COMP1860?

The object code is an intermediate form that cannot itself be executed.
It requires linking to the standard C libraries and any other included libraries.

5. **What is executable code?**

We can similarly look in the executable file to see the final linked form.

  `objdump -d hello`

This final executable form contains all the information necessary to execute on the machine.

Can you recognise the part of this file relating to our source code?

6. **Comparison to Python byte code**

Compare the Python byte-code to the C machine code to see the differences.

Look at the size of the files. Hint: you can use

  `ls -al` 
  
in a folder to view details about the file.
