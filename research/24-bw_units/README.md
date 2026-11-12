# Blair Witch translation units

Watcom keeps no debug information, so a BW function's unit comes from evidence:
`__FILE__` asserts, init-table `staticInit`s, the sibling mapping, and strings.
`assign_virtual_units.py` filed the remaining functions under placeholder folders
(`unkafter_`, `unkaddr_`, `unkclass_`). Applying the rules below gave every BW
function a real folder and unit: 862 renames, 239 / 319 / 304 in bw1 / bw2 /
bw3.

## Rules

| Rule | Evidence |
|---|---|
| inside | A unit is one unbroken run. A function between two functions of one unit, with no other unit between them, belongs to it. An inline copy of another class's method keeps its class's unit, as arrdtor copies do. |
| class | A method whose class's other methods sit in one unit next to it belongs there. |
| nocedit | A class nocedit files in a unit keeps that unit, unless it is already in one of the class's nocedit units (`CDemonSet` spans set/setcolid/setdir). |
| sibling | Another BW build files the class in a unit that build asserts. For an actor, the unit's stem must also match the class. |
| stem | This build asserts a file named for the class: the class name, its first 8 characters (only over a guessed unit, and never a stem nocedit gives another class), or its `era_stem`. Examples: `construc.cpp` for CConstruct, `demnfolk.cpp` for CDemnfolk, `mini3d.cpp` for CMini3D. |
| factory | An actor's `staticInit`, `factoryFuncX` and the methods and unnamed functions after them are one unit, CX's. |
| assert | bw3 asserts `..\core\tawiscara.cpp` and `..\core\zombiepriest.cpp`. The virtual `tawiscar`/`zombprie`/`zombiepr` were truncated guesses. |
| user | bw2's CAudioRecPuzzle, CExamplePuzzle and CChemPuzzle are `bmppuzzl.cpp`, as in bw1 and bw3. |
| tail / head | A run with no class evidence is the tail of the unit before it. If that unit is a short run (≤2) whose stem breaks the order, the run is the head of the next unit, unless that would give the next unit a second `staticInit`. |

## Findings

- **bw2 filed every actor's `staticInit`/`factoryFunc` pair under the next unit's
  name** (`core_cow.cpp_factoryFuncConveyor`, `core_crate.cpp_factoryFuncZombieCow`, …),
  and CConstruct's body under `conveyor`. Each pair now sits with its class.
- **CYow (bw1, bw3) and CSpawner (bw3)** were filed under `xform.cpp` and
  `special.cpp`. Each is its own unit, opened by its `staticInit`.
- **Stray inits** belong to the unit after them: bw3's `alphabit` init is
  `bmppuzzl.cpp`'s, and the `memdbg`/`turret` inits are `trstream.cpp`'s.
- **CAudioRecPuzzle and CChemPuzzle** are `bmppuzzl.cpp` in all three builds.
- **A `staticInit` heads its unit**: all 156 in nocedit are their unit's first
  function. The ones that weren't were misnamed:
  - mini3d's, named minecar's;
  - main.c's, named script's;
  - mimic's, named meshlod's;
  - inv's, named alphabit's (bw3);
  - nocturne's `engine_console.cpp`, named `core_console.cpp`.

  Functions named for a unit that sit before its `staticInit` are the tail of the
  unit before (event.cpp before filmreel.cpp, doc.cpp before dog.cpp, set.cpp before
  setcolid.cpp).
- **The one Watcom `memset`/`memcpy` pair in the game range** sits between event.cpp
  and filmreel.cpp. In the BW builds, the five blocks after `memcpy` were split off as
  functions. They are `memcpy`'s jump-table cases (`jmp [eax*4+…]`), and those
  functions are deleted. The function after them is an FPU string copy (`crt_watcom.c`).
- **The `engine_matrix.c` block inside drender** is drender's. nocedit has
  `CDemonRenderer_matrixPush` there, and the real `matrix.c` sits next to
  `litecone.cpp`.

## Link order

Units link sorted by basename, ignoring the folder. Out-of-order runs found most
of the misfiled units above. What is left is the build's own layout, and
`scripts/Python/check_tu_alignment_skip.txt` records it:

- bw2 and bw3 append their own files, unsorted, after the sorted list (after
  `zombie.cpp` and `zombiepriest.cpp`): `appended:<program>:<tu>`.
- BW inserted `fldnotes.cpp` (asserted) before `flattn.cpp`, whose `staticInit`
  is nocedit's. It also inserted `thehand.cpp` (CTheHand, `thehand.dfm`) after
  `tommygun.cpp`.
- nocturne's own four exceptions (chain, snddx, ncursfx, terrain) are unchanged.

## Enforced on export

The functions export runs `check_tu_alignment.gate` and fails on a TU that:

- sits in a placeholder folder (`unk*`);
- isn't an 8.3 name (skip-listed: bw3's two asserted long names and two CRT names).

`--allow-tu-name-violations` exports anyway. Link order is a regularity, not a
guarantee, so it doesn't fail the export. `check_tu_alignment.py <program>`
reports it as information, along with the gate's checks and contiguity.

## Checking

```
python3 scripts/Python/check_tu_alignment.py bw1.exe blairwitch2.exe bw3.exe
```
