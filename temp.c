let x = 2;

declare function assert(arg: boolean): void;
declare function strc(arg: any): string;
function assert_fn(arg: boolean, expression: string) {
    if(!arg) throw new Error(`"${expression}" was false`);
}
// #define assert(arg) assert_fn(arg, #arg)
assert(x == 1)

// #define strc(s) #s
strc(Hello "World")
// Hi strc(1)
strc(x == 1)
strc(x > 1)
strc(x+1)
strc(fooooo + 1 > y && z == x)

// #define foo 1 2
foo x

// #define concat(a,b) a##b
concat(prefix_,name)
concat(1,2)


// Line escapes
// boo bar foo \
hi foo// aaaaa
huh

00001000

// macro comments erase newline, object macros have an extra space char after value
// due to usually removing the whole line but when we leave // behind it sticks infront
// indirection trick to stringify macro value doesn't work

__LINE__

//#define DEBUG
//#if DEBUG
console.log('debug')
//#endif
hi

//#define FOO(a,b) 1
FOO(1,2) x

// different bug with macros that either don't pass arguments and/or don't accept any

//xxxxdefine BOO() x