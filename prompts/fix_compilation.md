# Fix Decompiled Function Compilation Errors

You are fixing compilation errors in Ghidra-decompiled C/C++ pseudocode for a game binary (`nocedit.exe`, Watcom C++ 11.0, x86 32-bit). Your goal is to produce a `.keep` file that compiles cleanly and is semantically faithful to what the assembly is actually doing.

## Rules

### File Handling
- **NEVER modify the original `.cpp`/`.c` file.** Create or update a `.keep.cpp`/`.keep.c` file alongside it.
- **Match the original file extension.** If the original is `.c`, create `.keep.c`. If `.cpp`, create `.keep.cpp`. Do NOT upgrade `.c` to `.cpp`.
- The `.keep` file replaces the original for compilation — the build system picks it up automatically.
- Path: same directory and base name, with `.keep.cpp`/`.keep.c` extension.

### Fidelity Requirements
- **Assembly is ground truth.** When the decompiler output is ambiguous or wrong, consult the `.asm` file (same directory, same base name) to understand what the code actually does.
- Keep the function signature identical (name, calling convention, parameters, return type) unless the assembly proves it wrong.
- Keep variable names from the original where possible.
- Keep the overall structure (control flow, variable declarations) as close to the original as possible.
- Only change what is necessary to make it compile and be semantically correct.
- Do NOT add comments explaining the fix unless the logic is genuinely non-obvious.
- Do NOT refactor, rename variables for style, or "improve" the code beyond what's needed.

### Header Comment
- Preserve the `// Name:` and `// Address:` lines from the original.
- Add `// MANUAL RECONSTRUCTION` after the `// Address:` line. This is required for all `.keep` files.
- Preserve `// Address Range:`, `// Convention:`, `// Signature:` if present (they go after `// MANUAL RECONSTRUCTION`).
- The file must `#include "nocturne.h"`.

## Common Error Patterns and Fixes

### 1. Pointer-to-float cast (`C-style cast from 'SomeType *' to 'float' is not allowed`)

**Cause:** Ghidra misinterprets a pointer dereference as a cast. The assembly is loading a float from a struct field via pointer arithmetic, but the decompiler lost track of types.

**Fix:** Check the `.asm` file to see what memory is being accessed. Replace the cast with the correct struct field access or pointer dereference:
```cpp
// BROKEN (decompiler artifact):
fVar1 = (float)this_ptr;

// FIXED (assembly shows: FLD dword ptr [EAX + 0x10]):
fVar1 = *(float *)((int)this_ptr + 0x10);
// Or if the struct field is known:
fVar1 = this_ptr->position.x;
```

### 2. Double return splitting (`SUB84`/`CONCAT44`/`._0_4_`/`._4_4_`)

**Cause:** Functions returning `double` via EAX:EDX (Watcom convention). Ghidra splits the 8-byte return into two 4-byte halves and reconstructs with `CONCAT44`.

**Fix:** These are handled by `intrinsics.h` macros. If compilation fails, check whether the variable types match. Common issue: a variable declared as `int` being used with `._0_4_` — change its type:
```cpp
// BROKEN:
int iVar1;
iVar1._0_4_ = some_value;  // can't subfield an int

// FIXED:
ulonglong iVar1;
iVar1._0_4_ = some_value;
```

### 3. Format string errors (`format specifies type 'X' but argument has type 'Y'`)

**Cause:** Ghidra inserts `SUB84(__BITCAST_UINT64(dVar), 0)` to pass doubles to printf-family functions. The decompiler is splitting the 64-bit double into two 32-bit pushes (which is what the assembly does), but the format string expects one `%f` per double.

**Fix:** Replace the split-push pattern with a direct double pass:
```cpp
// BROKEN (decompiler splits the double push):
_fprintf(file, "%f", SUB84(__BITCAST_UINT64(dVar1), 0),
         (int)((ulonglong)dVar1 >> 0x20));

// FIXED (one double argument per %f):
_fprintf(file, "%f", (double)this_ptr->value);
```

### 4. `ADJ()` pointer adjustment issues

**Cause:** Ghidra uses offset pointer types (e.g., `CAmmo_ptr_158`) when the decompiler tracks a pointer into the middle of a struct. `ADJ()` adjusts back to the base. Compilation fails when the offset pointer type isn't properly defined.

**Fix:** If the ADJ infrastructure works, keep it. If it causes type errors, replace with explicit pointer arithmetic:
```cpp
// If ADJ(pCVar2)->field fails to compile:
((BaseType *)((char *)pCVar2 - OFFSET))->field
```

### 5. Array type not assignable (`array type 'byte[4]' is not assignable`)

**Cause:** Ghidra tries to assign to an array variable directly.

**Fix:** Use `memcpy` or assign element-by-element:
```cpp
// BROKEN:
byte local_arr[4] = some_expr;

// FIXED:
memcpy(local_arr, &some_expr, 4);
```

### 6. Called object type is not a function (`called object type 'float' is not a function`)

**Cause:** Ghidra confused a function pointer stored in a struct with a float field.

**Fix:** Check the assembly for an indirect CALL. Cast to the correct function pointer type:
```cpp
// BROKEN:
result = field_value(args);  // field_value is typed as float

// FIXED (assembly shows: CALL dword ptr [EAX + 0x1c]):
result = ((int (*)(int))*(void **)((int)vtable + 0x1c))(args);
```

### 7. Cannot cast from float to pointer type

**Cause:** Decompiler has wrong type for a local variable — it's actually a pointer, not a float.

**Fix:** Change the variable declaration from float to the correct pointer type, guided by assembly.

### 8. `const` qualifier discards (`assigning to 'char *' from 'const char *'`)

**Fix:** Remove `const` from the source (Ghidra types don't use `const`), or cast:
```cpp
ptr = (char *)"string literal";
```

### 9. Sign mismatch pointer conversion (`converts between pointers to integer types with different sign`)

**Fix:** Add explicit cast:
```cpp
int_ptr = (int *)uint_ptr;
```

### 10. Undeclared identifier

**Cause:** A global, type, or function used in the code isn't declared in `nocturne.h` or its includes.

**Fix:** Check if it's a typo from the decompiler. If it's a real symbol, add an extern declaration at the top of the `.keep.cpp` (after the include). If it's a Ghidra artifact variable name like `in_stack_XXXXXXXX`, check the assembly to understand what it actually is (usually a function parameter the decompiler missed).

### 11. Syntax errors from decompiler artifacts

**Cause:** Ghidra occasionally produces syntactically invalid C++ (unbalanced parens, stray tokens, etc.)

**Fix:** Consult the assembly and reconstruct the statement. Keep it as close to the original structure as possible.

## Workflow

1. **Read the original `.cpp` file** to understand the function and see the compilation error.
2. **Read the `.asm` file** (same base name, `.asm` extension) to understand what the assembly actually does. The `.asm` format is:
   ```
        INSTRUCTION  ; ADDRESS
   ```
3. **Identify the minimal fix** — change only what's needed to compile.
4. **Write the `.keep.cpp` file** with the fix applied.
5. **Verify compilation** by running:
   ```
   clang++ -m32 -mmmx -fasm-blocks -fsyntax-only -std=gnu++11 \
     -Wno-everything -Warray-bounds -Wformat -Wformat-overflow \
     -Werror=format -Werror=format-overflow \
     -Wincompatible-pointer-types -Wint-conversion \
     -Wreturn-type -Wtautological-compare \
     -I annotations/nocedit.exe/pseudocode/include \
     path/to/file.keep.cpp
   ```

## Type System Reference

### Supported types
`char`, `uchar`, `short`, `ushort`, `int`, `uint`, `float`, `double`, `bool`, `void *`

Avoid: `const`, `long double`, `volatile`, `register`, `static`, `inline`

### Ghidra intrinsics (defined in `system/intrinsics.h`)
- `CONCAT44(hi, lo)` — assemble two 32-bit values into a 64-bit value
- `SUB84(val, offset)` — extract 4 bytes from an 8-byte value at byte offset
- `__BITCAST_DOUBLE(uint64)` — reinterpret uint64 bits as double
- `__BITCAST_UINT64(double)` — reinterpret double bits as uint64
- `ADJ(ptr)` — adjust an offset pointer back to its base struct
- `CARRY4(a, b)`, `SBORROW4(a, b)`, `SCARRY4(a, b)` — overflow/borrow detection
- `ZEXT14(x)`, `ZEXT48(x)` — zero extension

## Example: Before and After

### Original `.cpp` (fails to compile):
```cpp
// Name: core_gore.cpp_CBloodPool_save_FUN_004ed1c0
// Address: 004ed1c0
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ed1c0(CBloodPool *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ed1c0(CBloodPool *this_ptr,_FILE *file_handle)
{
  double dVar1;
  double dVar2;
  int iVar3;

  dVar1 = (double)(this_ptr->position).y;
  dVar2 = (double)(this_ptr->position).x;
  _fprintf(file_handle,"%f,%f,%f\n",SUB84(__BITCAST_UINT64(dVar2),0),(int)((ulonglong)dVar2 >> 0x20),
             SUB84(__BITCAST_UINT64(dVar1),0),(int)((ulonglong)dVar1 >> 0x20),(double)(this_ptr->position).z);
  _fprintf(file_handle,"%d,%d\n",this_ptr->expired,this_ptr->blood_type);
  iVar3 = _fprintf(file_handle,"%d,%f,%d,%d,%d\n",this_ptr->texture_variant,
                     SUB84(__BITCAST_UINT64((double)this_ptr->age),0),(int)((ulonglong)(double)this_ptr->age >> 0x20),
                     (this_ptr->position_fixed).x,(this_ptr->position_fixed).y,
                     (this_ptr->position_fixed).z);
  return iVar3;
}
```

### Fixed `.keep.cpp`:
```cpp
// Name: core_gore.cpp_CBloodPool_save_FUN_004ed1c0
// Address: 004ed1c0
// MANUAL RECONSTRUCTION
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ed1c0(CBloodPool *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ed1c0(CBloodPool *this_ptr,_FILE *file_handle)
{
  int iVar3;

  _fprintf(file_handle,"%f,%f,%f\n",
           (double)(this_ptr->position).x,
           (double)(this_ptr->position).y,
           (double)(this_ptr->position).z);
  _fprintf(file_handle,"%d,%d\n",this_ptr->expired,this_ptr->blood_type);
  iVar3 = _fprintf(file_handle,"%d,%f,%d,%d,%d\n",
                   this_ptr->texture_variant,
                   (double)this_ptr->age,
                   (this_ptr->position_fixed).x,
                   (this_ptr->position_fixed).y,
                   (this_ptr->position_fixed).z);
  return iVar3;
}
```

**What changed:** The `SUB84(__BITCAST_UINT64(dVar), 0) / (int)((ulonglong)dVar >> 0x20)` split-push pattern was collapsed back to single `(double)` arguments. The assembly pushes 8 bytes per `%f` (two 32-bit pushes for one double), and the decompiler exposed the raw push mechanics. The `.keep` restores the semantic intent. Unused variables `dVar1`/`dVar2` were removed.
