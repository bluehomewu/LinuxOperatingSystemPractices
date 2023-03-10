# ShellPractice HW2
## User Guide

How to use HW2 program
---
1. Download the HW2 program
2. Turn on the terminal
3. Change directory to the HW2 program
4. Use the command to run the program
5. Follow the `Linux-Week04-03-08.txt`  example to input the command

Here's the part of the `Linux-Week04-03-08.txt` example:  
And I also place File2 for test data in the HW2 folder.  
I tested the program with File1 and File2.  

```
Example 1 : > ./MySort -o asc -r are/'must be' < File1
And so must be fools
Pigs must be fat
Roses must be red
Violets must be blue

Example 2 : > ./MySort -r blue/red -r red/green -r fat/'terribly small in size' < File1.  # replacements are done in parallel
Roses are green
Violets are red
Pigs are terribly small in size
And so are fools
```

## Bugs:
> Here's the bugs I found, and I can't fix it. So I note at here.
1. Repeat replacement  
  When running example 2, will get repeat replacement on second line.  
  So `Violets are red` will be `Violets are green`  
  For example:  
  ```shell
  $ ./MySort -r blue/red -r red/green -r fat/'terribly small in size' < File1
Roses are green
Violets are green
Pigs are terribly small in size
And so are fools
  ```

  But in ClassNotes, The output the boss gave us should be like this.
  ```shell
  $ ./MySort -r blue/red -r red/green -r fat/'terribly small in size' < File1.  # replacements are done in parallel
Roses are green
Violets are red
Pigs are terribly small in size
And so are fools
  ```


## Thanks
Thanks TAs check my HW.  
And I also place homework program to GitHub, but repo is private.  
I guess it's more convenient for you to check my homework.  
If you have any questions, please feel free to contact me.  
<p align="">
<a href="https://github.com/bluehomewu"> <img src="https://img.shields.io/badge/-Github-000?style=flat&logo=Github&logoColor=white" /></a>
<a href="mailto:bluehome.wu@gmail.com"> <img src="https://img.shields.io/badge/-Gmail-c14438?style=flat&logo=Gmail&logoColor=white" /></p></a>