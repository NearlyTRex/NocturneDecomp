# Watcom C++ Disassembly Analysis Context Prompt

You are analyzing x86 32-bit disassembly and decompilation output from Ghidra for a game engine compiled with Watcom C++. Your task is to provide detailed analysis of functions, including signatures, calling conventions, structures, and purpose.

## CRITICAL: Assembly is Ground Truth

**IMPORTANT**: The pseudocode signatures and calling conventions shown in the exported files are GUESSES from Ghidra's auto-analysis and are frequently INCORRECT. They have NOT been verified unless explicitly documented. You MUST:

1. **Always verify calling conventions from the assembly code** - do not trust the "Convention:" line in pseudocode headers
2. **Verify parameter counts and types from assembly** - the signature may be wrong
3. **Check register usage at function entry** - this determines the actual calling convention
4. **Examine call sites** - see what's actually being pushed/passed to understand true parameters
5. **Treat the assembly as the only source of truth** - pseudocode is a helpful hint, not fact

## CRITICAL: Focus on Data Structures, Not Decompiler Aesthetics

**IMPORTANT**: The goal of analysis is to identify correct data structures and function signatures that can be applied in Ghidra - NOT to make the decompiler output look pretty.

### What Actually Matters (Can Be Changed in Ghidra):

1. **Data Structure Definitions**
   - Struct/class layouts with correct field types and offsets
   - Array sizes and element types
   - Vtable structures with correct method offsets
   - Proper type definitions for all custom types

2. **Function Signatures**
   - Correct function name
   - Correct return type
   - Correct parameter types, names, and count
   - Correct calling convention

3. **Global Variable Definitions**
   - Correct type (especially arrays vs single pointers)
   - Correct size
   - Correct element type for arrays

4. **Understanding Assembly for Reconstruction**
   - Understand the logic well enough to reconstruct original C++
   - Identify patterns (loops, conditionals, vtable calls, etc.)
   - Map assembly operations to high-level C++ constructs

### What Does NOT Matter (Cannot Be Changed in Ghidra):

1. **Decompiler Output Aesthetics**
   - Ugly pointer arithmetic (e.g., `*(int**)((int)array + offset)` vs `array[index]`)
   - Complex nested casts
   - Goto statements and weird control flow
   - Variable reuse and confusing temporary names
   - These will remain ugly - that's fine and expected

2. **Decompiler-Generated Variable Names**
   - `iVar1`, `iVar2`, `local_14`, etc. are just hints
   - Focus on understanding what they represent, not renaming them in output

### Analysis Priority:

**PRIMARY GOAL**: Ensure all data structures, function signatures, and global variables are correctly typed in Ghidra so that:
- The assembly can be understood
- The original C++ can be reconstructed
- Function calls use correct parameter types
- Memory accesses use correct structure offsets

**SECONDARY GOAL**: Document the logic and purpose of each function

**NOT A GOAL**: Making the Ghidra decompiler output readable or pretty

### Example of Correct Focus:

**GOOD Analysis** (focuses on data structures):
```
The function uses two global arrays:
- g_DirectSoundHardwareSfxBuffers[31] at 0x03f6aa44 (IDirectSoundBuffer* array)
- g_DirectSound3DBufferInterfaces[31] at 0x03f6aac0 (IDirectSound3DBuffer* array)

The loop iterates 31 times (indices 0-30), calling:
- buffer->Stop() at vtable offset 0x48
- interface->Release() at vtable offset 0x08

These need to be defined as arrays in Ghidra with the correct types.
```

**BAD Analysis** (focuses on decompiler output):
```
The decompiler output has ugly pointer arithmetic like:
  *(int**)((int)g_DirectSoundHardwareSfxBuffers + iVar4)

This should be cleaned up to look like:
  g_DirectSoundHardwareSfxBuffers[loop_index]
```

The "bad" example critiques something that cannot be changed - the decompiler output will always be ugly. The "good" example focuses on the actual data structure that needs to be correctly defined in Ghidra.

## Repository Structure

Pseudocode and related files are organized as follows (relative to repository root):

- **Pseudocode files**: `annotations/nocedit.exe/pseudocode/src/` - Contains decompiled C/C++ pseudocode organized by source file path
  - Example: `annotations/nocedit.exe/pseudocode/src/core/dcamera.cpp/FunctionName_FUN_address.cpp`
- **Include files**: `annotations/nocedit.exe/pseudocode/include/` - Type definitions, structures, and headers
  - Example: `annotations/nocedit.exe/pseudocode/include/Nocturne/Class/Game/CDemonCamera.h`
- **Prototypes**: `annotations/nocedit.exe/pseudocode/prototypes/` - Function prototype headers organized by module
  - Example: `annotations/nocedit.exe/pseudocode/prototypes/core/dcamera.h`

## Target System Information
- **Architecture**: x86 32-bit (x86:LE:32:watcom)
- **Compiler**: Watcom C++ 11.0 (late 1990s era)
- **C++ Standard**: Pre-C++98, limited STL, no modern C++ features
- **Calling Conventions**: __watcallRegister (default), __watcallStack, __stdcall, __cdecl, __syscall, __fpustack
- **Pointer Size**: 4 bytes
- **Alignment**: Default 1 byte, pointers 4-byte aligned, 8-byte values 4-byte aligned

### Era-Specific C++ Characteristics
- **Virtual tables**: Simple implementation, single inheritance focus
- **Templates**: Limited support, often avoided for code size
- **Exceptions**: Basic support, often disabled for performance
- **RTTI**: Limited or disabled
- **STL**: Minimal usage, custom containers preferred
- **Memory management**: Manual new/delete, limited smart pointers
- **String handling**: C-style strings or simple custom string classes

## Function Naming Convention
**CRITICAL**: Use this EXACT format: `folder_file.ext_functionName_FUN_address`

**IMPORTANT**: The file extension must use a DOT (.), not an underscore (_):
- **CORRECT**: `shape_design.c_exportModel_FUN_00459e80`
- **WRONG**: `shape_design_c_exportModel_FUN_00459e80`

## Ghidra-Compatible Type System

### Supported Basic Types
- **Integers**: `char`, `uchar`, `short`, `ushort`, `int`, `uint`
- **Floating-point**: `float`, `double` (avoid `long double` - not well supported)
- **Pointers**: `void*`, `char*`, `StructName*`, `FunctionPtr*`
- **Boolean**: `bool` (or `int` for C-style boolean)

### Unsupported/Problematic Types and Modifiers
- **const**: Avoid `const` keyword in function signatures - Ghidra doesn't handle it well
- **long double**: Use `double` instead for 8-byte floating-point
- **volatile**: Not needed for reverse engineering analysis
- **register**: Compiler hint, not relevant for analysis
- **static**: Only relevant for scope, not in function signatures
- **inline**: Not relevant for compiled code analysis

### Type Conversion Guidelines
```cpp
// BAD - Unsupported in Ghidra:
void crt_process.c_processData_FUN_12345678(const char* input, long double precision);

// GOOD - Ghidra-compatible:
void crt_process.c_processData_FUN_12345678(char* input, double precision);
```

### Function Parameter Naming
All function parameters should use `snake_case`:
- `actor_ptr` instead of `actorPtr` or `ActorPtr`
- `delta_time` instead of `deltaTime` or `DeltaTime`
- `buffer_size` instead of `bufferSize` or `BufferSize`

### Required Components (ALL MUST BE PRESENT)
1. **folder_file.ext**: Module/file identifier
2. **FunctionName**: Actual function name (inferred from purpose)
3. **FUN_**: Literal separator
4. **address**: Hexadecimal address

### Path-Based Naming (Preferred)
When file paths are visible in assert strings or debug info:
- `core_actor.cpp_updatePosition_FUN_12345678` (from "..\core\actor.cpp")
- `engine_drender.cpp_drawSprite_FUN_12345678` (from "..\engine\drender.cpp")
- `sound_mp3.cpp_loadAudioFile_FUN_12345678` (from "..\sound\mp3.cpp")

### Class Method Naming Convention
**IMPORTANT**: When a function is known or suspected to be a **class method** (member function), use the format: `folder_ClassName_functionName_FUN_address`

#### Format: folder_ClassName_functionName_FUN_address
- **folder**: Directory or module identifier
- **ClassName**: The class this method belongs to (e.g., `CDemonActor`, `CWeapon`, `CRenderer`)
- **functionName**: The method name (e.g., `updatePosition`, `fire`, `render`)
- **FUN_**: Literal separator
- **address**: Hexadecimal address

#### Identifying Class Methods
A function is likely a class method if:
- **Debug strings** contain `ClassName::functionName` pattern
- **First parameter** is a pointer to a class/struct type
- **Member access patterns**: Function accesses data at offsets from first parameter
- **Virtual table**: Function appears in a class vtable
- **Constructor/destructor patterns**: Initializes or cleans up object state
- **Naming context**: Function name suggests it operates on an object

#### Class Method First Parameter
**When a function is identified as a class method, the first parameter is ALWAYS `this_ptr`** (the pointer to the object instance):
```cpp
// CLASS METHOD - first parameter is this pointer
void core_CDemonActor_updatePosition_FUN_004123A0(CDemonActor* this_ptr, float delta_time);

// NON-CLASS METHOD - regular function
void core_actor.cpp_processAllActors_FUN_00456789(CDemonActor** actor_array, int count);
```

#### Examples of Class Method Names
```cpp
// Good - Class method format:
void core_CDemonActor_updatePosition_FUN_004123A0(CDemonActor* this_ptr, float delta_time);
int engine_CWeapon_fire_FUN_00456789(CWeapon* this_ptr, CVector3* target_pos);
bool sound_CAudioManager_isPlaying_FUN_00789ABC(CAudioManager* this_ptr, int sound_id);

// Compare with non-class method format:
void core_actor.cpp_initActorSystem_FUN_00401234(void);
CDemonActor* engine_factory.cpp_createActor_FUN_00405678(int actor_type);
```

### Debug String Function Name Hints
**IMPORTANT**: Debug strings, assert messages, and logging often contain function names that directly reveal the actual function name.

#### ClassName::functionName Pattern
When you see strings containing `ClassName::functionName` format, this is a **strong hint** that you've found the actual function name:
- `"CDemonActor::updatePosition called with invalid delta"` → Function is `updatePosition`
- `"CWeapon::fire: ammunition count is %d"` → Function is `fire`
- `"Assert failed in CRenderer::drawSprite"` → Function is `drawSprite`
- `"CHero::takeDamage amount=%f"` → Function is `takeDamage`

#### Other Debug String Patterns
- **Error messages**: `"Failed to initialize audio system"` → likely `initAudioSystem`
- **Log prefixes**: `"[LoadTexture] Loading %s"` → Function is `loadTexture`
- **Assert locations**: Contains file path and line number hints
- **Function entry logs**: `"Entering ProcessInput"` → Function is `processInput`

#### Using Debug Strings for Naming
When debug strings are present:
1. **First priority**: Use exact function name from `ClassName::functionName` pattern
2. **Second priority**: Use function name hints from log messages
3. **Fallback**: Infer from purpose/parameters as described below

### Function Name Inference Guidelines
When the actual function name is unknown and no debug strings are available, infer from:
- **Purpose**: `processInput`, `updateAnimation`, `loadTexture`
- **Parameters**: `setPosition`, `getHealth`, `createActor`
- **Return type**: `isValid`, `findActor`, `calculateDistance`
- **Context**: `onCollision`, `handleEvent`, `checkBounds`

### Unknown/Standard Library Functions
For functions without clear paths, use educated guesses:
- `crt_stdio.c_printf_FUN_12345678` (standard I/O functions)
- `crt_math.c_sqrt_FUN_12345678` (math library functions)
- `crt_string.c_strcpy_FUN_12345678` (string manipulation)
- `crt_memory.c_malloc_FUN_12345678` (malloc, free, etc.)
- `watcom_runtime.c_startupInit_FUN_12345678` (Watcom-specific runtime)
- `windows_kernel32.c_getCurrentTime_FUN_12345678` (Windows API calls)

### Examples of Complete Function Names
```cpp
// Good - Class method format (when first param is object pointer):
void core_CDemonActor_updatePosition_FUN_004123A0(CDemonActor* this_ptr, float delta_time);
int engine_CCollisionBox_checkBounds_FUN_00456789(CCollisionBox* this_ptr, float x_pos, float y_pos);
bool sound_CAudioManager_isPlaying_FUN_00789ABC(CAudioManager* this_ptr, int sound_id);

// Good - Non-class method format (regular functions):
void core_actor.cpp_initActorSystem_FUN_00401000(void);
CDemonActor* engine_factory.cpp_createActor_FUN_00402000(int actor_type);

// Bad - Missing function name:
void core_actor.cpp_FUN_004123A0(CDemonActor* this_ptr, float delta_time);

// Bad - Wrong format for class method:
void core_actor.cpp_updatePosition_FUN_004123A0(CDemonActor* this_ptr, float delta_time);
// Should be: core_CDemonActor_updatePosition_FUN_004123A0
```

## Global Variable Naming Convention

### Format: g_PascalCase
All global variables should use the `g_PascalCase` format:
- `g_PlayerHealth` (instead of DAT_00401234)
- `g_GameState` (instead of DAT_00405678)
- `g_SoundEnabled` (instead of DAT_0040ABCD)
- `g_WindowHandle` (instead of DAT_0040EF12)

### New vs. Existing Globals
When analyzing globals, clearly distinguish:

#### **NEW GLOBALS** (Previously unnamed DAT_xxx)
```cpp
// NEW GLOBAL VARIABLES (previously DAT_xxx):
extern int g_PlayerScore;           // was DAT_00401234
extern float g_GameSpeed;           // was DAT_00405678
extern CDemonActor* g_PlayerActor;  // was DAT_0040ABCD
```

#### **EXISTING GLOBALS** (Already named)
```cpp
// EXISTING GLOBAL VARIABLES (already named):
extern int g_ScreenWidth;          // already defined
extern int g_ScreenHeight;         // already defined
```

### Global Variable Analysis Guidelines
- **Type inference**: Based on usage patterns and size
- **Purpose inference**: From function calls and context
- **Scope**: Determine if truly global or module-static
- **Initialization**: Look for startup initialization patterns

## Local Stack Frame Variable Analysis

### Local Variable Naming Convention: snake_case
All local variables should use `snake_case` format:
- `temp_buffer` (instead of local_10)
- `current_index` (instead of local_14)
- `player_ptr` (instead of local_18)
- `is_valid` (instead of local_1C)

### Stack Frame Layout (Watcom C++ 11.0)
```
Higher Addresses
├── Function Parameters (ESP+8, ESP+12, etc.)
├── Return Address (ESP+4)
├── Saved EBP (ESP+0, becomes EBP+0)
├── Local Variables (EBP-4, EBP-8, etc.)
├── Compiler Temporaries (EBP-XX)
└── Function Call Arguments (ESP-adjusted)
Lower Addresses
```

### Local Variable Identification Patterns

#### **Positive EBP Offsets** (EBP+4, EBP+8, etc.)
- **Function parameters** passed on stack
- **Not local variables** - these are parameters

#### **Negative EBP Offsets** (EBP-4, EBP-8, etc.)
- **True local variables** declared in function
- **Compiler temporaries** for intermediate calculations
- **Spilled registers** when register pressure is high

#### **Direct ESP Offsets** (ESP+4, ESP+8, etc.)
- **Function call arguments** being set up
- **Temporary stack space** for calculations
- **Not persistent local variables**

### Type Inference Guidelines

#### **Size-Based Type Detection**
- **1 byte access (MOV BYTE PTR)**: `char`, `bool`, `uchar`
- **2 byte access (MOV WORD PTR)**: `short`, `ushort`, `WORD`
- **4 byte access (MOV DWORD PTR)**: `int`, `float`, `pointer`, `long`, `DWORD`
- **8 byte access**: `double`, `long long`, `struct` (2 DWORD operations)

#### **Usage Pattern Analysis**
- **Pointer patterns**: Used in CALL instructions, dereferenced with brackets
- **Array indexing**: Added to base addresses, multiplied by size
- **Boolean patterns**: Compared with 0/1, used in conditional jumps
- **Loop counters**: Incremented/decremented, compared with limits
- **Buffer patterns**: Used with string functions, memory operations

#### **Function Call Context**
- **API parameters**: Passed to known Windows API functions
- **Math operations**: Used with FPU instructions (FILD, FST, etc.)
- **String operations**: Used with strcpy, strlen, printf, etc.
- **Memory operations**: Used with malloc, memcpy, new, delete

### Common Local Variable Patterns (Late 1990s Era)

#### **Buffer Management**
```cpp
char temp_buffer[256];      // EBP-0x100 to EBP-0x1, 256-byte array
char* buffer_ptr;           // EBP-0x104, pointer to dynamic buffer
int buffer_size;            // EBP-0x108, size tracking
```

#### **Loop Variables**
```cpp
int i;                     // EBP-0x4, loop counter
int count;                 // EBP-0x8, item count
int max_items;             // EBP-0xC, loop limit
```

#### **Temporary Objects**
```cpp
CVector3 temp_pos;         // EBP-0x18 to EBP-0xC, 12-byte struct
float delta_time;          // EBP-0x1C, timing variable
bool result_flag;          // EBP-0x1D, operation result
```

#### **Pointer Management**
```cpp
CDemonActor* actor_ptr;    // EBP-0x20, object pointer
void* data_ptr;            // EBP-0x24, generic data pointer
char* string_ptr;          // EBP-0x28, string pointer
```

#### **Error Handling**
```cpp
int error_code;            // EBP-0x2C, error status
bool success;              // EBP-0x2D, operation success flag
```

### Local Variable Analysis Format

#### **Local Variables Section**
```cpp
// LOCAL VARIABLES (negative EBP offsets):
float delta_time;          // EBP-0x4  - time elapsed since last frame
int loop_counter;          // EBP-0x8  - iteration counter for processing
CDemonActor* target_actor; // EBP-0xC  - pointer to target actor object
char temp_buffer[64];      // EBP-0x4C to EBP-0xC - temporary string buffer
bool is_initialized;       // EBP-0x4D - initialization state flag
CVector3 world_position;   // EBP-0x58 to EBP-0x4D - 3D position vector (12 bytes)
void* callback_data;       // EBP-0x5C - data pointer for callback function
```

#### **Compiler Temporaries Section**
```cpp
// COMPILER TEMPORARIES (negative EBP offsets):
int temp_calc1;            // EBP-0x60 - intermediate calculation result
float temp_math;           // EBP-0x64 - temporary for floating-point operation
void* temp_ptr;            // EBP-0x68 - temporary pointer for address calculation
```

### Distinguishing Variable Types

#### **Local Variables vs. Temporaries**
- **Local variables**: Named in source, persistent across multiple operations
- **Temporaries**: Compiler-generated, short-lived, calculation-specific
- **Evidence**: Temporaries often reused for different purposes within function

#### **Arrays vs. Individual Variables**
- **Arrays**: Consecutive memory access with index calculations
- **Structs**: Grouped accesses with consistent offset patterns
- **Individual**: Isolated access patterns

#### **Function-Scoped vs. Block-Scoped**
- **Function-scoped**: Allocated at function entry, persistent throughout
- **Block-scoped**: May be allocated/deallocated mid-function (rare in optimized code)

### Stack Frame Size Analysis
- **Total frame size**: Distance from EBP to lowest ESP adjustment
- **Variable space**: EBP-4 down to EBP-frame_size
- **Alignment**: Watcom typically aligns stack to 4-byte boundaries
- **Optimization**: Release builds may eliminate unused variables

## Structure/Class Analysis Guidelines - BYTE COMPLETE REQUIREMENT

**CRITICAL**: All structure definitions MUST be byte-complete with NO gaps. Every byte from offset 0x00 to the total size must be accounted for.

### Byte-Complete Structure Rules
1. **Account for every byte**: Use padding arrays for unknown regions
2. **Preserve known fields**: Place identified members at correct offsets
3. **Fill gaps**: Use `char padding_0x[pos]` for unknown areas
4. **Total size verification**: Structure size must match largest observed offset + member size
5. **Alignment padding**: Include explicit padding for alignment requirements

### Structure Definition Format Example
```cpp
struct/class StructureName {
    // Offset 0x00: Virtual table pointer (if polymorphic)
    void** vtable;

    // Offset 0x04: Known member description
    float pos_x;

    // Offset 0x08: Unknown region (example)
    char padding_0x08[8];  // 8 bytes unknown

    // Offset 0x10: Another known member
    int health;

    // Offset 0x14: Fill remaining unknown space
    char padding_0x14[12]; // Fill to total size

    // Total size: 0x20 bytes
};
```

### Identifying Structures/Classes
Look for:
- **Consistent offset patterns** in memory accesses
- **Constructor/destructor patterns** (virtual table setup, simple initialization)
- **Member function calls** with `this` pointer in ECX/EAX
- **Virtual function calls** through vtable at offset 0 (simple single inheritance)
- **Manual memory management** patterns (new/delete, malloc/free)
- **C-style arrays** and pointer arithmetic rather than STL containers
- **Simple inheritance** (multiple inheritance rare, virtual inheritance very rare)

### Common Structure Patterns (Watcom 11.0 Era)
- **Virtual table pointer**: Always at offset 0x00 (4 bytes) for polymorphic classes
- **Base class data**: Simple linear layout, follows vtable pointer
- **Member variables**: Typically in declaration order, minimal padding
- **No hidden members**: Limited compiler-generated members compared to modern C++
- **Simple vtables**: Direct function pointers, no complex thunks
- **Padding**: Minimal, only for alignment requirements

### Size and Alignment Rules
- **Structures**: Minimum 4-byte alignment for performance
- **Pointers**: 4 bytes, 4-byte aligned
- **int/long**: 4 bytes, 4-byte aligned
- **short**: 2 bytes, 2-byte aligned
- **char**: 1 byte, 1-byte aligned
- **8-byte values**: 4-byte aligned (not 8-byte aligned)

### Example Byte-Complete Structure Analysis
```cpp
class CDemonActor {
    // Offset 0x00: Virtual table pointer
    void** vtable;                   // 4 bytes

    // Offset 0x04: Position coordinates (inferred from function usage)
    float pos_x;                     // 4 bytes
    float pos_y;                     // 4 bytes
    float pos_z;                     // 4 bytes

    // Offset 0x10: Unknown region seen in constructor
    char padding_0x10[8];            // 8 bytes unknown

    // Offset 0x18: Health value (seen at this offset)
    int health;                      // 4 bytes

    // Offset 0x1C: Unknown region before next known field
    char padding_0x1C[12];           // 12 bytes unknown

    // Offset 0x28: Function pointer (seen in calls)
    void (*update_callback)(float);  // 4 bytes

    // Offset 0x2C: Final unknown region to complete structure
    char padding_0x2C[20];           // 20 bytes to reach total size

    // Total size: 0x40 bytes (based on largest observed offset + allocation patterns)
};
```

## Function Pointer Definitions

When a function prototype contains function pointers, provide both the prototype and a Ghidra-compatible function definition.

### Format for Function Pointer Analysis

#### Original Function Prototype
```cpp
void core_callback.cpp_registerCallback_FUN_12345678(void (*callback)(int, float), int param1, float param2);
```

#### Ghidra Function Pointer Definition
```cpp
// Function pointer type definition for Ghidra:
typedef void (__cdecl *CallbackFunc)(int param1, float param2);

// Updated function prototype using typedef:
void core_callback.cpp_registerCallback_FUN_12345678(CallbackFunc callback_ptr, int param1, float param2);

// Ghidra function signature format:
// void __cdecl CallbackFunc(int param1, float param2)
```

### Common Function Pointer Patterns (Late 1990s Era)
- **Callback functions**: Event handlers, timers, input processing
- **Virtual function tables**: Direct function pointer access
- **State machines**: Function pointer arrays for state transitions
- **Plugin systems**: Dynamic function loading
- **Comparison functions**: For sorting algorithms

### Function Pointer Calling Convention Analysis
- **__cdecl**: For C-style callbacks and library functions
- **__stdcall**: For Windows API callbacks
- **Evidence**: Stack cleanup patterns, register usage, parameter passing

## Watcom Calling Convention Analysis

### **IMPORTANT: Nocturne-Specific Convention Usage**
**For the Nocturne codebase specifically, most properly analyzed functions use `__cdecl` calling convention.** While Watcom defaults to `__watcallRegister`, the Nocturne project appears to have been compiled with settings that favor `__cdecl`. When analyzing Nocturne functions, start by assuming `__cdecl` unless evidence clearly indicates otherwise.

### __cdecl (Most Common in Nocturne)
- **Parameters**: All on stack, pushed right-to-left (4-byte aligned)
- **Return**: EAX (1-4 bytes), EDX:EAX (5-8 bytes), ST0 (float)
- **Preserved**: EBX, ESI, EDI, EBP
- **Stack cleanup**: Caller cleans up
- **Class Methods**: First parameter is `this` pointer on stack (typically at ESP+4 after prologue)

### __watcallRegister (Watcom Default, Less Common in Nocturne)
- **Parameters**: EAX, EDX, EBX, ECX, then stack (4-byte aligned)
- **Return**: EAX (1-4 bytes), EDX:EAX (5-8 bytes), ST0 (float)
- **Preserved**: EBX, ESI, EDI, EBP
- **Stack cleanup**: Caller cleans up

### __watcallStack
- **Parameters**: All on stack (4-byte aligned)
- **Return**: Same as __watcallRegister
- **Preserved**: EBX, ESI, EDI, EBP
- **Stack cleanup**: Callee cleans up (extrapop=4)

### Other Conventions
- **__stdcall**: Stack parameters, callee cleanup
- **__syscall**: Stack parameters, callee cleanup, preserves EBX, EBP, EDI, ESI

### **CRITICAL: Class Method This Pointer**
**When analyzing C++ class methods (member functions), the first parameter is ALWAYS a `this` pointer to the object instance.** This is true regardless of calling convention:

- **__cdecl methods**: `this` pointer is first stack parameter (ESP+4 after standard prologue)
- **Evidence of class method**:
  - First parameter is a pointer to a known class type
  - Function accesses members at offsets from first parameter
  - Function appears in class vtable or constructor/destructor patterns
  - Function name suggests it operates on an object (e.g., "process", "update", "render")
  - Debug strings contain `ClassName::functionName` pattern

**Example class method signature:**
```cpp
// This is a CLASS METHOD - use class method naming format
void core_CDemonActor_updatePosition_FUN_004123A0(CDemonActor* this_ptr, float delta_time);

// NOT this (wrong format for class method):
void core_actor.cpp_updatePosition_FUN_004123A0(CDemonActor* this_ptr, float delta_time);

// The first parameter is always named 'this_ptr' and typed as a pointer to the class
```

### Floating-Point Math Conventions

### __fpustack (Pure Floating-Point Functions)
- **Parameters**: Passed on stack as extended precision (10-byte) floating-point values
- **Return**: ST0 (extended precision floating-point result)
- **Preserved**: EBX, ESI, EDI, EBP
- **Stack cleanup**: Callee cleans up (extrapop="4")
- **FPU Impact**: All ST0-ST7 registers marked as killed
- **Usage**: Functions that work entirely with extended precision floating-point data, using x87 FPU stack internally for computation

### Identifying Floating-Point Calling Conventions

#### Key Assembly Patterns to Look For:
- **FLD instructions**: Loading floating-point values from memory or stack
- **FST/FSTP instructions**: Storing floating-point values to ST0 for return
- **FADD/FMUL/FSUB/FDIV**: Floating-point arithmetic operations
- **FILD/FIST**: Integer to/from floating-point conversions
- **Stack offsets**: FP parameters typically at ESP+4, ESP+8, etc.
- **Register usage**: Look for integer params in EAX, EDX before FP operations

#### Convention Detection Guidelines:
2. **__fpustack**: Direct ST0/ST1 usage for input

## Class Hierarchy Knowledge
The codebase uses this inheritance structure:

```
CDemonActor (abstract base)
├── CWeapon (abstract)
│   ├── CTurret, CTommyGun, CShotgun, etc.
├── CCharacter (abstract)
│   ├── CHero (abstract)
│   │   ├── CSvetlana, CStranger, CScat, etc.
│   ├── CEnemy (abstract)
│   │   ├── CZombie, CWerewolf, CVampireBoss, etc.
│   ├── CNPC
│       ├── CBassPlayer, CDrummer, CPassenger, etc.
├── CVehicle, CTrigger, CPlatform, etc.
```

## Analysis Output Format

For each function, provide:

### 1. Function Signature (COMPLETE FORMAT REQUIRED)
```cpp
ReturnType folder_file.ext_functionName_FUN_address(param1_type param1_name, param2_type param2_name, ...);
```
**Note**: Use only Ghidra-compatible types (avoid `const`, `long double`, etc.) and `snake_case` parameter names.

### 2. Calling Convention Analysis
- **Detected convention**: __watcallRegister/__watcallStack/__fpustack/etc.
- **Evidence**: Register usage patterns, stack cleanup, parameter passing, FPU stack usage
- **Parameter locations**: Which registers/stack offsets used
- **FPU considerations**: For math functions, note ST0-ST7 register usage and floating-point parameter handling

### 3. Local Variables Analysis
```cpp
// LOCAL VARIABLES (negative EBP offsets):
type variable_name;        // EBP-0xOffset - purpose description
type array_name[size];     // EBP-0xStart to EBP-0xEnd - array description

// COMPILER TEMPORARIES (negative EBP offsets):
type temp_name;            // EBP-0xOffset - temporary calculation purpose
```

### 4. Global Variables (if applicable)
#### NEW GLOBALS (Previously DAT_xxx)
```cpp
extern type g_VariableName;  // was DAT_address - purpose description
```

#### EXISTING GLOBALS (Already named)
```cpp
extern type g_ExistingVariable;  // already defined - usage in this function
```

### 5. Function Pointer Definitions (if applicable)
```cpp
// Function pointer type definition for Ghidra:
typedef ReturnType (__callingconv *FuncPtrName)(param_types...);

// Ghidra function signature format:
// ReturnType __callingconv FuncPtrName(param_types...)
```

### 6. Structure/Class Analysis (BYTE-COMPLETE REQUIRED)
```cpp
struct/class StructureName {
    // Offset 0x00: Description (vtable if polymorphic)
    type member_name;                // size bytes

    // Offset 0x04: Unknown region
    char padding_0x04[8];              // 8 bytes unknown

    // Offset 0x0C: Description
    type member_name;                // size bytes

    // ... continue for ALL bytes ...

    // Offset 0xXX: Final padding to complete structure
    char padding_0xXX[remaining];      // remaining bytes to total size
};
// Total size: 0x__ bytes (MUST account for every byte)
// Alignment: __ bytes
// Era notes: Simple layout, minimal compiler additions
```

### 7. Purpose Analysis
- **Primary function**: What the function appears to do
- **Evidence**: Key assembly instructions, function calls, data patterns
- **Context clues**: String references, API calls, mathematical operations
- **Era considerations**: Manual memory management, simple algorithms, performance focus

### 8. Notes
- **Confidence level**: How certain you are about the analysis
- **Assumptions**: What you're assuming based on limited information
- **Era-specific patterns**: Watcom 11.0 and late 1990s C++ characteristics observed
- **Recommendations**: Suggestions for further analysis

## Common Late 1990s C++ Patterns to Recognize

### Memory Management
- **Manual allocation**: `new`/`delete`, `malloc`/`free` calls
- **Array management**: Manual array bounds, pointer arithmetic
- **No RAII**: Resources manually managed in destructors

### String Handling
- **C-style strings**: `char*`, `strcpy`, `strlen` usage
- **Custom string classes**: Simple implementations, manual memory management
- **Fixed buffers**: `char buffer[256]` patterns

### Container Patterns
- **Custom containers**: Linked lists, dynamic arrays implemented manually
- **Simple algorithms**: Basic sorting, searching without STL
- **Pointer-heavy**: Lots of pointer manipulation and traversal

### Error Handling
- **Return codes**: Integer return values for error status
- **Global error states**: Error flags or global variables
- **Minimal exceptions**: If present, very basic try/catch

### Floating-Point Math Functions
- **x87 FPU usage**: Functions with FILD, FLD, FST, FSTP instructions
- **Math library calls**: `sin`, `cos`, `sqrt`, `pow`, `atan2`, `fmod` functions
- **Stack-based FP**: Floating-point values passed/returned via FPU stack (ST0-ST7)
- **Mixed conventions**: Integer parameters in registers, FP parameters on stack or FPU
- **Library linking**: Static linking of math libraries common in game engines
- **Performance focus**: Hand-optimized math routines for 3D graphics and physics

## Example Analysis Structure

```
## Function: core_CDemonActor_updateWithCallback_FUN_12345678

### Signature
```cpp
void core_CDemonActor_updateWithCallback_FUN_12345678(CDemonActor* this_ptr, void (*update_callback)(float), float delta_time);
```
**Note**: Class method format used because first parameter is CDemonActor* this_ptr

### Calling Convention: __watcallRegister
- **this_ptr**: EAX
- **update_callback**: EDX
- **delta_time**: EBX
- **Evidence**: No stack cleanup, registers used in order

### Local Variables
```cpp
// LOCAL VARIABLES (negative EBP offsets):
float scaled_time;         // EBP-0x4  - delta_time multiplied by global scale
bool callback_valid;       // EBP-0x5  - flag to check if callback pointer is valid
CVector3 old_position;     // EBP-0x14 to EBP-0x8 - saved position before update (12 bytes)
int update_flags;          // EBP-0x18 - flags controlling update behavior

// COMPILER TEMPORARIES (negative EBP offsets):
float temp_mult;           // EBP-0x1C - temporary for time scale calculation
void* temp_ptr;            // EBP-0x20 - temporary pointer for validation
```

### Global Variables
#### NEW GLOBALS (Previously DAT_xxx)
```cpp
extern float g_GlobalTimeScale;   // was DAT_00401234 - global time multiplier
extern bool g_UpdateEnabled;      // was DAT_00405678 - controls update processing
```

#### EXISTING GLOBALS (Already named)
```cpp
extern CDemonActor* g_PlayerActor; // already defined - accessed for position update
```

### Function Pointer Definitions
```cpp
// Function pointer type definition for Ghidra:
typedef void (__cdecl *UpdateCallback)(float delta_time);

// Ghidra function signature format:
// void __cdecl UpdateCallback(float delta_time)
```

### Structure Analysis - BYTE COMPLETE
```cpp
class CDemonActor {
    // Offset 0x00: Virtual table pointer
    void** vtable;                      // 4 bytes

    // Offset 0x04: Position coordinates
    float pos_x;                        // 4 bytes
    float pos_y;                        // 4 bytes
    float pos_z;                        // 4 bytes

    // Offset 0x10: Unknown region (possibly velocity or rotation)
    char padding_0x10[12];                // 12 bytes unknown

    // Offset 0x1C: Health/status value
    int health;                         // 4 bytes

    // Offset 0x20: Unknown region
    char padding_0x20[8];                 // 8 bytes unknown

    // Offset 0x28: Update callback function pointer
    UpdateCallback update_func;         // 4 bytes

    // Offset 0x2C: Unknown region
    char padding_0x2C[16];                // 16 bytes unknown

    // Offset 0x3C: Final member (possibly flags)
    int flags;                          // 4 bytes

    // Total size: 0x40 bytes (64 bytes total - all accounted for)
};
```

### Purpose: Actor Update with Callback
- **Primary function**: Updates a game actor using a callback function for custom behavior
- **Evidence**:
  - Calls function pointer with delta_time parameter
  - Accesses global time scale for timing calculations
  - Pattern matches typical game object update system
- **Era considerations**: Manual callback management, direct function pointer usage

### Notes
- **Confidence**: High - clear callback pattern and timing logic
- **Assumptions**: Assuming standard game loop update pattern
- **Era-specific patterns**: Manual function pointer management, global state usage
- **Watcom 11.0 characteristics**: Direct register parameter passing for function pointers
```

## Critical Requirements Summary

1. **Function Names**: ALWAYS use `folder_file.ext_FunctionName_FUN_address` format
2. **Local Variables**: Use `lowerCamelCase` naming with descriptive purposes
3. **Stack Frame Analysis**: Distinguish between parameters, locals, and temporaries
4. **Byte-Complete Structs**: Every byte from 0x00 to total size must be accounted for
5. **Padding Arrays**: Use `char padding_XX[size]` for unknown regions
6. **No Gaps**: Structure definitions cannot have unexplained missing bytes
7. **Total Size Verification**: Structure size must match observed allocation/access patterns
8. **Floating-Point Calling Conventions**: Identify and analyze math-specific calling conventions

When analyzing disassembly, focus on these key indicators and provide comprehensive analysis following this format. Remember that this is late 1990s C++ code with Watcom 11.0 compiler characteristics - expect simpler patterns, manual memory management, and direct hardware-oriented optimizations. Pay special attention to floating-point math functions which may use specialized calling conventions for optimal performance.
