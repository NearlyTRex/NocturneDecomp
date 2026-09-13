# The target binary: Watcom C++ 11.0 on x86

Reference for reading the disassembly — what the compiler does, what the conventions look like, and
how to get a struct layout right. [decompiler-artifacts.md](decompiler-artifacts.md) covers what
Ghidra does *wrong* with this output; this is what the output actually is.

| | |
|---|---|
| Architecture | x86 32-bit (`x86:LE:32:watcom`) |
| Compiler | Watcom C++ 11.0, late 1990s |
| Language | Pre-C++98 — limited STL, no modern features |
| Pointer size | 4 bytes |
| Alignment | 1 byte default; pointers 4-byte aligned; 8-byte values 4-byte aligned, **not** 8 |

The era shows in the code. Virtual tables are simple and single-inheritance-focused. Templates are
largely avoided for code size, exceptions are basic and often disabled, RTTI is limited or off, and
the STL is barely used in favour of hand-written containers. Memory is managed manually with
`new`/`delete` and `malloc`/`free`, strings are C strings or a simple custom class, and the math
routines are hand-optimized for 3D graphics.

## Calling conventions

Watcom's default is `__watcallRegister`, but **this codebase is overwhelmingly `__cdecl`** — the
project was built with settings that favour it. Start from `__cdecl` and look for evidence
otherwise.

The convention line in an exported pseudocode header is Ghidra's guess and is frequently wrong. So
are the parameter count and types. The registers at function entry, and what call sites actually
push, are what decide it.

| Convention | Parameters | Return | Stack cleanup |
|---|---|---|---|
| `__cdecl` | All on stack, right to left, 4-byte aligned | EAX; EDX:EAX for 5–8 bytes; ST0 for float | Caller |
| `__watcallRegister` | EAX, EDX, EBX, ECX, then stack | Same | Caller |
| `__watcallStack` | All on stack | Same | Callee (`extrapop=4`) |
| `__stdcall` | Stack | EAX | Callee |
| `__syscall` | Stack | EAX | Callee; preserves EBX, EBP, EDI, ESI |
| `__fpustack` | Stack, as 10-byte extended precision | ST0 | Callee (`extrapop=4`) |

EBX, ESI, EDI and EBP are preserved across all of them. `__fpustack` marks ST0–ST7 as killed; it is
used by functions that work entirely in extended-precision floating point and keep everything on
the x87 stack.

The floating-point tells are `FLD` for loads, `FST`/`FSTP` for the return through ST0,
`FADD`/`FMUL`/`FSUB`/`FDIV` for arithmetic, and `FILD`/`FIST` for integer conversion. Floating-point
parameters sit at `ESP+4`, `ESP+8` and so on, with integer parameters often in EAX/EDX ahead of
them.

Some conventions need `CUSTOM_STORAGE` in Ghidra to model correctly — the FPU ones in particular,
where operands live in ST0/ST1 rather than anywhere the standard storage model can express.

### Class methods

A member function's first parameter is always the object pointer, regardless of convention. Under
`__cdecl` it is the first stack parameter, at `ESP+4` after a standard prologue. By project
convention it is named `this_ptr` and typed as a pointer to the class.

A function is likely a method when the first parameter is a pointer to a class type and the body
accesses data at offsets from it, when it appears in a vtable, when it has constructor or
destructor shape, or when a debug string contains `ClassName::functionName`.

## Stack frames

```
Higher addresses
├── Function parameters        (EBP+8, EBP+12, …)
├── Return address             (EBP+4)
├── Saved EBP                  (EBP+0)
├── Local variables            (EBP-4, EBP-8, …)
├── Compiler temporaries       (EBP-XX)
└── Outgoing call arguments    (ESP-adjusted)
Lower addresses
```

- **Positive EBP offsets** are parameters, not locals.
- **Negative EBP offsets** are true locals, compiler temporaries, and spilled registers.
- **Direct ESP offsets** are outgoing call arguments and scratch space, not persistent locals.

Total frame size is the distance from EBP to the lowest ESP adjustment. Watcom aligns the stack to
4 bytes.

Locals and temporaries are distinguishable in practice: a local is named in the source and persists
across several operations, while a temporary is compiler-generated, short-lived, and frequently
reused for an unrelated purpose later in the same function. That reuse is the root of
[§13](decompiler-artifacts.md#13--stack-slot-reuse), and it is why Ghidra's one-type-per-slot model
produces impossible casts.

### Inferring a type from the access

| Access width | Candidates |
|---|---|
| 1 byte (`MOV BYTE PTR`) | `char`, `uchar`, `bool` |
| 2 bytes (`MOV WORD PTR`) | `short`, `ushort` |
| 4 bytes (`MOV DWORD PTR`) | `int`, `float`, pointer |
| 8 bytes (two dword operations) | `double`, `long long`, struct |

Then narrow by use: pointers are dereferenced and passed to `CALL`s; array indices get multiplied by
an element size and added to a base; booleans are compared against 0/1 and drive conditional jumps;
counters are incremented and compared against a limit; buffers go to string and memory functions.
The callee is often the strongest signal — a slot passed to a known API, to `strcpy`, to `malloc`,
or loaded with `FLD` tells you what it is regardless of how Ghidra typed it.

## Structures and classes

Watcom's layout is simple: the vtable pointer at offset 0 for polymorphic classes, base class data
immediately after it, members in declaration order, and padding only where alignment requires it.
There are no hidden compiler-generated members beyond the vtable pointer, and vtables are direct
function pointer tables with no complex thunks.

| Type | Size | Alignment |
|---|---|---|
| pointer | 4 | 4 |
| `int` / `long` | 4 | 4 |
| `short` | 2 | 2 |
| `char` | 1 | 1 |
| `double` / 8-byte values | 8 | **4** |

Structures are 4-byte aligned overall.

### Layouts must be byte-complete

**Every byte from offset 0 to the total size is accounted for.** A struct definition with an
unexplained gap is not a partial answer; it is a layout that will silently mis-place every field
after the gap the moment somebody fills it in wrong.

Unknown regions get an explicit padding array named for where they start, so the next person can
see exactly what is unresolved and how much of it there is:

```cpp
class CDemonActor {
    void** vtable;                   // 0x00  4 bytes
    float pos_x;                     // 0x04
    float pos_y;                     // 0x08
    float pos_z;                     // 0x0C
    char padding_0x10[12];           // 0x10  unknown — possibly velocity or rotation
    int health;                      // 0x1C
    char padding_0x20[8];            // 0x20  unknown
    UpdateCallback update_func;      // 0x28
    char padding_0x2C[16];           // 0x2C  unknown
    int flags;                       // 0x3C
};                                   // total 0x40
```

The total size has to match the observed allocation and access patterns — the largest observed
offset plus that member's size, corroborated against whatever allocates the object.

Ghidra's own view of a struct's size is recorded in the generated headers as a
`Ghidra size: 0x<N>` annotation, which is what [§18](decompiler-artifacts.md#18--magic-numbers-with-symbolic-equivalents)
checks a `sizeof` substitution against.

### Recognizing one

- Consistent offset patterns across many accesses to the same base.
- Constructor/destructor shape — vtable setup, then field initialization.
- Member calls with the object pointer as the first argument.
- Virtual calls through the vtable at offset 0.
- Manual `new`/`delete` around it.
- C-style arrays and pointer arithmetic rather than containers.

## Class hierarchy

```
CDemonActor (abstract base)
├── CWeapon (abstract)
│   └── CTurret, CTommyGun, CShotgun, …
├── CCharacter (abstract)
│   ├── CHero (abstract)
│   │   └── CSvetlana, CStranger, CScat, …
│   ├── CEnemy (abstract)
│   │   └── CZombie, CWerewolf, CVampireBoss, …
│   └── CNPC
│       └── CBassPlayer, CDrummer, CPassenger, …
└── CVehicle, CTrigger, CPlatform, …
```

`CObj`, `CPoly` and `CCameraView` exist only in the editor build — see
[sibling-binaries.md](sibling-binaries.md).

## What is worth fixing

The point of analysis is a correct database, not readable decompiler output. Those are different
goals and only one of them is achievable.

**Fixable in Ghidra, and worth the effort:**

- Struct and class layouts — field types, offsets, array sizes and element types, vtable structures.
- Function signatures — name, return type, parameter types and count, calling convention.
- Global variable definitions — type, size, and especially array-versus-single-pointer.

**Not fixable, and not worth commenting on:** the shape of the decompiler's output. Ugly pointer
arithmetic (`*(int**)((int)array + offset)` where `array[index]` would read better), nested casts,
gotos, odd control flow, `iVar1`/`local_14` naming. These stay ugly. The names are hints about what
a slot holds, nothing more.

So an observation like "this loop iterates 31 times over `g_DirectSoundHardwareSfxBuffers`, calling
`Stop()` at vtable offset 0x48 and `Release()` at 0x08, which means the global is an
`IDirectSoundBuffer *[31]`" is actionable — it names a type to define. An observation that the
pointer arithmetic around that array is hard to read is not.

The one case where output shape does matter is a `.keep` file, because that is hand-written and
compiled. See [keep-files.md](keep-files.md).
