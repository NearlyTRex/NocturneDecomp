# Actor class hierarchy across builds

The `CDemonActor` tree and its virtual-method contract in nocedit.exe, nocturne.exe
(retail), bw1.exe, blairwitch2.exe and bw3.exe.

| File | Contents |
|------|----------|
| `hierarchy.md` | The class tree, with which builds register each class |
| `virtual_methods.md` | Every virtual slot: method, nocedit signature, slot index per build, how it was placed, parameter verdicts; then the slots a build added |
| `classes.md` | Per class and build: parent, table length, the slots it overrides |
| `hierarchy.json` | `hierarchy.md` and `classes.md` data, machine-readable |
| `added_slot_names.json` | Names and prototypes for slots the BW builds added, each with the fact that settles it |

The first four are generated; regenerate them rather than edit (see below).
`added_slot_names.json` is maintained by hand, and it is the baseline for naming more added
slots. Only names whose basis settles them go in; every other added slot stays `vfuncN`. The
struct and naming tools read it (`build_vtable_structs.py`, `name_vtable_slot_functions.py`), and
`virtual_methods.md` renders it.

## How each claim is established

- **Parents** come from each build's `registerActorClass(self, name, factory, version, n, parent)`
  calls in `staticInit`. This is the program's own record of its tree, not an inference.
  Every call in all five builds parses: each tree has one root, `CDemonActor`, and no
  parent is left unresolved.
- **Slot meaning** comes from aligning each class's table to nocedit's. Anchors are verified
  function pairs, and gaps of equal size are forced. A slot no anchor reaches is placed only
  when every class sharing it agrees on its method (`H` in `virtual_methods.md`). Slots
  still unplaced after that are listed as new, never named.
- **Parameters** come from `verify_sibling_signatures`, which checks a method's stack bytes
  against how the target's callers push arguments. `u` means no call site could be
  measured. That's common for virtuals, which are reached through the table, so `u` is
  not a doubt about the signature.

## CONFIRMED

- **No class shared with nocedit changes parent in any build.** Retail registers the same 113
  classes as nocedit. bw1 adds 14 classes, bw2 adds 29 and drops `CCurtain`, and bw3 adds 66
  and drops 44. Every added class hangs off an existing base, so its inherited slots keep the
  base's meaning and signature.
- **No slot method has a parameter conflict in any build.**
- **Retail places every slot of all 112 tabled classes.** nocedit's extra seven
  `CDemonActor` slots (`onAreaDeleted`, `onActorDeleted` and the five editor methods
  `processInEditor` … `addFilesToExtract`) are later editor-build additions; retail never
  had them.
- **The Blair Witch games added virtuals to the base classes** (table in
  `virtual_methods.md`, "Slots with no reference method"):

  | Build | CDemonActor | CCharacter | CHero | CWeapon |
  |---|---|---|---|---|
  | bw1 | 2, before `process` | — | 4, after `reset` | — |
  | bw2 | 4: two before `setup`, two before `process` | 1 | 5 | — |
  | bw3 | 2, before `process` | — | — | 1 |

  All of them are empty stubs in the base class. The positions are confirmed by
  `CDemonSet_processActors`, which calls `process` through the table at `+0x4` in nocedit
  and retail, `+0xc` in bw1/bw3 and `+0x14` in bw2. Its later `+0xbc` call shifts the same
  way, to `+0xc4` and `+0xcc`.
- **bw2's `chain.cpp` was built against bw1's `CDemonActor`.** `CChain`'s table has 54 slots,
  under a 56-slot parent. Its ctor stores that table, so the label is right; the code is
  stale. A `process` call at `+0x14` on a `CChain` reaches a different method. The contract
  marks it `stale_layout` and keeps it out of the hierarchy vote.

- **The added slots have names where their code settles them.** That's 11 in bw1, 31 in bw2 and 9
  in bw3, listed in `added_slot_names.json`. Highlights:
  - CDemonActor `markResourcesInUse` in bw1/bw3.
  - CHero's `toggleGoggles`, `canReachPickup`, `doHeroAction` and `canDoHeroAction`.
  - bw2's CBasicEnemy state machine (`processStates`, the per-state handlers, `startBurn`).
- **bw3's CHero slots 80–83 are nocedit's CHero methods** (`createDefaultWeapon`, `drawWeapon`,
  `isWeaponDrawn`, `reset`). The contract could not show it, because CPrye, bw3's only tabled class
  under CHero, does not exist in nocedit.
- **An empty virtual can point at another function's last `RET`.** CPod's slot 1 is its
  destructor's own `RET` in every BW build, as are CCross's slots 0–1 in bw2. The vtable scan now
  counts a slot aimed at a `RET` in code, and those tables start at the address their constructor
  stores; before, they started one or two slots late.

## DON'T RE-CHASE

- A function filling several slots of one table is a folded stub, such as the shared
  `return 0`. It pairs with one method on the other side, so it never anchors an alignment.
  Anchoring on it pinned bw1's `drop` and `renderTransparent` to the wrong slots
  (`sibling_match.lcs_anchors`).
- `CDemonActor`'s own table can't tell `process` from the new BW slots: slots 1–5 are all
  stubs. Its descendants' overrides place them.
- A slot's method is its vtable struct field's name, never the function's. A folded stub carries
  one name for all its slots. nocedit's CCharacter fills `isGrabbable`, `canBeGrabbed`,
  `getGrabbed` and `canBeAttracted` with one `return 0`, which is now named
  `CCharacter_returnZero`. The overrides in that family are named correctly.
- A registration whose name prints as `(char *)0x…` or as `"…" + n` is still a registration.
  bw2's `CHero` is the first form; dropping it turned its 15 children into roots.

## Regenerating

```sh
# per build: slot contract against nocedit, and per-pair signature verdicts
python3 scripts/Python/derive_vtable_contract.py --program bw1.exe \
    --mapping annotations/bw1.exe/reports/sibling_mapping_from_nocedit.json \
    --out-json annotations/bw1.exe/reports/actor_vtable_contract.json
python3 scripts/Python/verify_sibling_signatures.py \
    annotations/bw1.exe/reports/sibling_mapping_from_nocedit.json --out bw1_sigs.json
# (retail uses annotations/nocturne.exe/reports/sibling_verified_mapping.json)

python3 scripts/Python/actor_hierarchy_report.py --out-dir research/22-actor_class_hierarchy \
    --contract nocturne.exe=… --contract bw1.exe=… --contract blairwitch2.exe=… --contract bw3.exe=… \
    --sigs nocturne.exe=… --sigs bw1.exe=… --sigs blairwitch2.exe=… --sigs bw3.exe=…
```
