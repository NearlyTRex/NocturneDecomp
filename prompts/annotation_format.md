# Reverse Engineering Annotation Standards

## Function Naming Convention

### Required Format
```
folder_file.ext_functionName_FUN_address
```

All components are **MANDATORY**:
- `folder`: Module/category identifier
- `file.ext`: Source file name with extension
- `functionName`: **camelCase** function name
- `FUN_`: Literal separator
- `address`: Hexadecimal memory address

### Folder and File Classification

#### 1. Path-Based Naming (Highest Priority)
When debug information or assert strings contain file paths, use them directly:
```cpp
// From assert: "..\core\actor.cpp"
core_actor.cpp_updatePosition_FUN_004123A0

// From assert: "..\engine\drender.cpp"
engine_drender.cpp_drawSprite_FUN_00456789
```

#### 2. C Runtime Library Functions
For standard C library functions, use `crt` folder with the actual library function name. But since there are often a fair amount of wrapper functions around these, try to designate one as the official and others as internal. Also keep in mind Watcom has some custom additions to the C standard library like splitpath or stricmp.

```cpp
// Standard C functions
crt_stdio.c_printf_FUN_00401234
crt_string.c_strcpy_FUN_00405678

// Watcom extensions
crt_string.c_stricmp_FUN_0045314
crt_stdlib.c_splitpath_FUN_0045324

// Wrapper functions (mark as internal)
crt_stdio.c_printfInternal_FUN_00401567
```

#### 3. Compiler-Specific Runtime
```cpp
crt_runtime.c_startupInit_FUN_00401234
crt_except.c_throwException_FUN_00409ABC
```

#### 4. Windows API Functions
```cpp
crt_kernel32.c_getCurrentTime_FUN_00401234
crt_user32.c_createWindow_FUN_00405678
```

#### 5. Game Engine Modules
Group by logical purpose:
- `core` - Core game systems
- `engine` - Rendering/graphics
- `physics` - Physics simulation
- `sound` - Audio systems
- `input` - Input handling
- `ui` - User interface
- `ai` - Artificial intelligence
- `network` - Networking
- `script` - Scripting system
- `asset` - Asset management

### Function Name Requirements
- **camelCase**: First letter lowercase, subsequent words capitalized
- **Descriptive**: Infer from purpose when unknown

```cpp
// ✅ CORRECT
updatePosition, calculateDistance, isPlayerAlive, setHealthValue

// ❌ INCORRECT
UpdatePosition    // PascalCase
update_position   // snake_case
```

## Global Variable Naming Convention

### Required Format: `g_PascalCase`
```cpp
g_PlayerHealth      // ✅ CORRECT
g_GameState        // ✅ CORRECT
g_WindowHandle     // ✅ CORRECT

g_player_health    // ❌ snake_case
g_playerhealth     // ❌ no word separation
PlayerHealth       // ❌ missing prefix
```

## Structure, Enum, and Type Naming Convention

### Format: PascalCase (No Prefixes)
```cpp
struct StructureName     // Plain structures
class ClassName          // Classes
enum EnumName           // Enumerations
typedef TypedefName     // Type definitions
```

### Function Pointer Types
```cpp
// Function pointer type definition
typedef ReturnType (*FunctionPointerName)(param_types...);

// Examples:
typedef void (*UpdateCallback)(float deltaTime);
typedef bool (*CollisionCheck)(CollisionBox* box1, CollisionBox* box2);
typedef int (*CompareFunction)(const void* a, const void* b);
```

## Examples

### Complete Function Names
```cpp
// Game engine functions
core_actor.cpp_updatePosition_FUN_004123A0
engine_render.cpp_drawSprite_FUN_00456789
physics_collision.cpp_checkBounds_FUN_00789ABC
sound_manager.cpp_playSound_FUN_00ABCDEF

// C runtime functions
crt_stdio.c_printf_FUN_00401234
crt_math.c_calculateSine_FUN_00405678
```

### Global Variables
```cpp
extern int g_PlayerScore;
extern float g_GameSpeed;
extern DemonActor* g_PlayerActor;
extern bool g_SoundEnabled;
```

### Types and Structures
```cpp
class DemonActor {
    // ...
};

struct CollisionBox {
    // ...
};

enum GameState {
    GameStateMenu,
    GameStatePlaying,
    GameStatePaused
};

typedef void (*EventHandler)(int eventType, void* data);
```

## Quality Control Checklist

Before submitting analysis, verify:
- [ ] Function name uses exact `folder_file.ext_functionName_FUN_address` format
- [ ] Function name is in camelCase
- [ ] Folder/file classification follows hierarchy
- [ ] Global variables use `g_PascalCase` format
- [ ] Structures, enums, and typedefs use PascalCase (no prefixes)
- [ ] Function pointer types are descriptively named in PascalCase
- [ ] Names are descriptive and inferred from context when actual names unknown
