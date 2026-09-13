# Annotation standards

Naming and typing conventions for everything recorded in the Ghidra databases. These names reach
the generated headers, the decompiled tree and every `.keep` file, so they are the project's most
widely-shared interface — and the hardest thing to change later.

[watcom-abi.md](watcom-abi.md) covers reading the disassembly these names describe;
[sibling-binaries.md](sibling-binaries.md) covers transferring a name between binaries rather than
coining a new one, which is almost always the better move.

## Function names

```
folder_file.ext_functionName_FUN_address
```

Every component is required:

| Component | Rule |
|---|---|
| `folder` | Module or category identifier |
| `file.ext` | Source file name **with a dot before the extension** |
| `functionName` | camelCase |
| `FUN_` | Literal separator |
| `address` | Hexadecimal address |

The extension separator is a dot, not an underscore: `shape_design.c_exportModel_FUN_00459e80`, not
`shape_design_c_exportModel_FUN_00459e80`.

### Choosing the folder and file

In priority order:

**1. From a path in the binary.** Assert strings and debug information carry original source paths;
use them directly. `"..\core\actor.cpp"` gives `core_actor.cpp_updatePosition_FUN_004123A0`, and
`"..\engine\drender.cpp"` gives `engine_drender.cpp_drawSprite_FUN_00456789`.

**2. C runtime functions** go under `crt` with the real library function name. Watcom's extensions
count — `splitpath`, `stricmp` and friends. These usually come in clusters of wrappers around one
real implementation, so designate one as the official entry point and mark the rest internal:

```
crt_stdio.c_printf_FUN_00401234
crt_string.c_stricmp_FUN_0045314
crt_stdio.c_printfInternal_FUN_00401567      // wrapper
```

**3. Compiler runtime** — `crt_runtime.c_startupInit_FUN_00401234`,
`crt_except.c_throwException_FUN_00409ABC`.

**4. Windows API** — `crt_kernel32.c_getCurrentTime_FUN_00401234`.

**5. Game engine modules**, grouped by purpose: `core`, `engine` (rendering), `physics`, `sound`,
`input`, `ui`, `ai`, `network`, `script`, `asset`.

### Class methods

When a function is a member function, the class replaces the file component:

```
folder_ClassName_functionName_FUN_address
```

```cpp
// Class method
void core_CDemonActor_updatePosition_FUN_004123A0(CDemonActor *this_ptr, float delta_time);
int  engine_CWeapon_fire_FUN_00456789(CWeapon *this_ptr, CVector3 *target_pos);

// Free function — keeps the file component
void core_actor.cpp_initActorSystem_FUN_00401000(void);
CDemonActor *engine_factory.cpp_createActor_FUN_00402000(int actor_type);
```

The first parameter of a method is **always** named `this_ptr` and typed as a pointer to the class.
See [watcom-abi.md](watcom-abi.md#class-methods) for identifying one from the assembly.

### Finding the real name

Debug strings often contain it outright. A `ClassName::functionName` pattern anywhere in the
function's strings is a strong answer:

- `"CDemonActor::updatePosition called with invalid delta"` → `updatePosition`
- `"CWeapon::fire: ammunition count is %d"` → `fire`
- `"Assert failed in CRenderer::drawSprite"` → `drawSprite`

Weaker but still useful: log prefixes (`"[LoadTexture] Loading %s"` → `loadTexture`), entry traces
(`"Entering ProcessInput"` → `processInput`), and error text (`"Failed to initialize audio system"`
→ probably `initAudioSystem`).

Failing all of that, infer from purpose (`processInput`, `updateAnimation`), from the parameters
(`setPosition`, `createActor`), from the return type (`isValid`, `findActor`,
`calculateDistance`), or from context (`onCollision`, `handleEvent`, `checkBounds`).

## Global variables

Format is `g_PascalCase` — `g_PlayerHealth`, `g_GameState`, `g_WindowHandle`. Not `g_player_health`,
not `g_playerhealth`, not a bare `PlayerHealth`.

### Names must be collision-resistant

A global name is a permanent identifier in a namespace of thousands — `nocedit.exe` alone has ~2657
named globals. The failure mode is naming a global after **the shape of the idiom that touches it**
instead of after **evidence unique to that address**. Idiom-shaped names are magnets: the next zero
constant, the next scratch slot, the next dirty flag will fit the same name equally well, and the
result is either a duplicate or a near-synonym. **Two addresses that both plausibly deserve the same
name is a defect being introduced.**

These tokens describe patterns that recur at dozens of addresses, and are never sufficient on their
own:

> `Zero`, `One`, `Scratch`, `Temp`, `Dummy`, `Saved`, `Spill`, `Flag`, `Count`, `Counter`, `Index`,
> `Buffer`, `Data`, `Value`, `State`, `Ptr`, `Result`, `Enabled`, `Current`

They may appear *in* a name. They may not be the part that distinguishes it.

Every name needs two things:

1. **An owner** — the subsystem, module or class it belongs to. The codebase already works this way:
   `g_Moon*`, `g_Cloth*`, `g_Course*`, `g_Actor*`, `g_ViewportStack*`, `g_MatrixStack*`,
   `g_WaveIn*`/`g_WaveOut*`, `g_DirectSound*`, `g_CameraShake*`, `g_FireEffect*`.
2. **A discriminator** — the fact that makes *this* address different from every other instance of
   the same idiom. Which routine consumes it, which channel or axis or colour component it carries,
   which buffer it feeds, what its single initialised value is.

```
BAD:   g_ZeroQword            fits every zero constant in the binary
BAD:   g_FpuPopScratch        fits every FSTP dump slot in the binary
BAD:   g_RasterZeroQword      prefix collides with engine/3d.c's g_Rasterizer* family
GOOD:  g_BufferFillZeroQword  the qword the three special.cpp fill loops broadcast
GOOD:  g_BufferFillFpuPopST0  the ST0 dump that terminates those same loops
```

**The self-test:** if a second, unrelated address met tomorrow would also fit this name, the name is
too generic. Add the discriminator now, not after the collision.

### Verify the prefix before joining a family

An owner prefix that already exists **belongs to whichever translation unit established it**.
Joining that family asserts the new global lives there too, so check where the existing members are
actually referenced:

```sh
# What does this prefix family already contain?
grep -rhoE "\bg_Rast[A-Za-z0-9_]*" annotations/*/pseudocode/ | sort -u

# Which TU owns it?
grep -rl "g_RasterizerEdgeArray" annotations/nocedit.exe/pseudocode/src/ --include=*.asm \
  | sed 's|.*/src/||' | cut -d/ -f1-2 | sort -u
```

`g_Rasterizer*` looks like the obvious prefix for a software-rasterizer global in
`engine/special.cpp` — but all five existing members are `engine/3d.c` statics, so adopting it would
file the global under the wrong translation unit.

**Do not extend an unverified family.** `g_SavedRegisterEAX`/`EBX`/`ECX`/`EDX` in nocedit's
`globals_680000.cpp` have **zero xrefs anywhere in the binary** — they were named from adjacency to
nearby rasterizer statics, not from evidence. Extending such a family propagates the original guess
and lends it false weight.

### Checks before proposing a name

Run these against **both** binaries. A global's name must be identical across the sibling pair, so a
collision in either one is a collision.

```sh
# 1. Is the exact name taken?
grep -rn "g_ProposedName" annotations/*/pseudocode/include/globals/

# 2. Is the prefix family taken, and by which TU?
grep -rhoE "\bg_Prefix[A-Za-z0-9_]*" annotations/*/pseudocode/ | sort -u

# 3. Read the namespace being added to, before adding to it
grep -rhoE "\bg_[A-Za-z0-9_]+" annotations/nocedit.exe/pseudocode/src/<tu>/*.asm | sort -u
```

When reporting globals, keep newly-named ones separate from ones that already had names — the first
group is a claim needing evidence, the second is context.

## Types

Structures, classes, enums and typedefs are PascalCase with no prefix:

```cpp
struct CollisionBox { … };
class  DemonActor   { … };
enum   GameState { GameStateMenu, GameStatePlaying, GameStatePaused };
```

Function pointer types are PascalCase and descriptive:

```cpp
typedef void (*UpdateCallback)(float delta_time);
typedef bool (*CollisionCheck)(CollisionBox *box1, CollisionBox *box2);
typedef int  (*CompareFunction)(const void *a, const void *b);
```

When a prototype takes a function pointer, define the typedef alongside it rather than inlining the
type, and give the Ghidra function-definition form too:

```cpp
typedef void (__cdecl *CallbackFunc)(int param1, float param2);
void core_callback.cpp_registerCallback_FUN_12345678(CallbackFunc callback_ptr, int p1, float p2);
// Ghidra function signature: void __cdecl CallbackFunc(int param1, float param2)
```

The common shapes in this era are event and timer callbacks, vtable entries, function-pointer
arrays driving state machines, and comparison functions for sorts. The convention is evidence-based
— stack cleanup and register use tell you whether a callback is `__cdecl` or `__stdcall`.

### What Ghidra accepts

Use: `char`, `uchar`, `short`, `ushort`, `int`, `uint`, `float`, `double`, `bool`, and pointers.

Avoid: `const` (Ghidra handles it poorly in signatures), `long double` (use `double`), and
`volatile`, `register`, `static` and `inline`, none of which mean anything for this purpose.

```cpp
// Not usable
void crt_process.c_processData_FUN_12345678(const char *input, long double precision);
// Usable
void crt_process.c_processData_FUN_12345678(char *input, double precision);
```

## Identifier casing

| Kind | Case | Example |
|---|---|---|
| Function name | camelCase | `updatePosition`, `calculateDistance`, `isPlayerAlive` |
| Parameter | snake_case | `actor_ptr`, `delta_time`, `buffer_size` |
| Local variable | snake_case | `temp_buffer`, `current_index`, `is_valid` |
| Global | `g_` + PascalCase | `g_PlayerHealth` |
| Struct / class / enum / typedef | PascalCase | `CollisionBox`, `GameState` |

Method first parameters are `this_ptr` regardless.

## Checklist

- Function name is exactly `folder_file.ext_functionName_FUN_address`, or
  `folder_ClassName_functionName_FUN_address` for a method, with a dot before the extension.
- The function name is camelCase and descriptive — inferred from context where the real name is
  unknown, taken from a debug string where one exists.
- Folder and file follow the classification order above.
- Globals are `g_PascalCase`, with an owner prefix and a discriminator, checked against both
  binaries for name and prefix-family collisions.
- Types are PascalCase with no prefix; function pointer types are named, not inlined.
- Parameters and locals are snake_case; a method's first parameter is `this_ptr`.
- No `const`, `long double`, `volatile`, `register`, `static` or `inline` in a signature.
- Struct layouts are byte-complete — see
  [watcom-abi.md](watcom-abi.md#layouts-must-be-byte-complete).
