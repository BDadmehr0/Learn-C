# سلام, دنیا!

## معرفی

زبان برنامه‌نویسی C یک زبان برنامه‌نویسی همه‌منظوره است که به نحوه کار ماشین‌ها نزدیک است. درک چگونگی کار با حافظه کامپیوتر یکی از جنبه‌های مهم زبان برنامه‌نویسی C است. اگرچه C می‌تواند به عنوان "سخت برای یادگیری" در نظر گرفته شود،اما در واقع C یک زبان بسیار ساده با قابلیت‌های بسیار قدرتمند است.

زبان C یک زبان بسیار رایج است و در بسیاری از برنامه‌ها مانند ویندوز، مفسر پایتون، گیت و بسیاری دیگر استفاده شده است.

زبان C یک زبان کامپایل‌شونده است، به این معنی که برای اجرای آن، کامپایلر (برای مثال، GCC یا ویژوال استودیو) باید کدی را که نوشته‌ایم پردازش کند و سپس یک فایل اجرایی ایجاد کند. این فایل سپس قابل اجراست و کاری را که ما برای برنامه در نظر گرفته‌ایم انجام خواهد داد.

## Our First Program

Every C program uses libraries, which give the ability to execute necessary functions. For example, the most basic function called `printf`, which prints to the screen, is defined in the `stdio.h` header file.

To add the ability to run the `printf` command to our program, we must add the following include directive to the first line of the code:

```c
#include <stdio.h>
```

The second part of the code is the actual code that we are going to write. The first code that will run will always reside in the main function.

```c

int main() {
  // ... our code goes here
}
```

The int keyword indicates that the function main will return an integer - a simple number. The number returned by the function indicates whether the program we wrote worked correctly. If we want to say that our code ran successfully, we will return the number 0. A number greater than 0 will mean that the program we wrote failed.

For this tutorial, we will return 0 to indicate that our program was successful:

```c

return 0;
```

Notice that every statement in C must end with a semicolon so that the compiler knows that a new statement has started.

Last but not least, we will need to call the function printf to print our sentence.
