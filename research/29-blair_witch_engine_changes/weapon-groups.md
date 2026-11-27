# Weapon groups

`CInventory::isWeaponInCategory` (nocedit 0x004ffe70) puts each weapon class in a numbered
group. The groups are the weapon keys': `CGame::processKeyboardControls` (nocedit 0x004dc3e0)
calls `selectWeapon(nullptr, group, 1)` for each weapon key, and next/previous weapon use group
5, any weapon. Scripts select a weapon by class, stepping group 5 (`CScript::step`, nocedit
0x0055a810), so no script names a group number.

| Key | Nocturne, BW1 group | Nocturne's binding label | BW2 group | BW2's binding label |
|---|---|---|---|---|
| 1 | 0: `CGun` | Select pistol weapons | 0: `CGun` | Select Revolver |
| 2 | 1: `CShotgun`, `CCrossbow`, `CTommyGun`, `CElephantGun` (BW1 and BW2 add `CRifle`) | Select assault weapons | 3: `CMelee` but the crosses | Select Sword / Axe |
| 3 | 2: `CFlameThrower`, `CLightGun` (BW1 adds `CLightPis`) | Select flame weapons | 6: `CSimpleCross`, `CCross` | Select Cross |
| 4 | 4: `CDynamite` (BW1 and BW2 add `CFlashlight`) | Select grenade weapons | none | none |
| 5 | 3: `CMelee` | Select melee weapons | none | none |

- BW1's flashlight is in group 4 for its key, not as dynamite. BW1 binds that key (DIK_5) with
  no row on its bindings page, and Doc's frame selects her flashlight by itself
  (`CDoc::processFrame`).
- BW3 reads the group from the weapon's own field (+0x574), set by each weapon's constructor
  (bw3 0x004dd310).
- Each class the groups list derives straight from `CWeapon` (each `staticInit` registration),
  but BW2's `CMeleeAxe`, `CCross` and `CSimpleCross`, which derive from `CMelee`: BW2's melee
  group leaves the two crosses out by name, so still no weapon is in two groups.
- The HUD read the groups too: a group-3 (melee) weapon shows no count, BW2's group 6 too, and a
  group 0 or 1 weapon's description names its rounds (`renderAllItems`, nocedit 0x00500690).

The recreation keeps the HUD's two uses as each `[[weapons.weapon]]`'s `counted` and
`names_rounds`. The key a weapon answers to comes with `selectWeapon`.

## What each game can hold

From each game's give-weapons cheat (`CGame::processCheatCodes`) and its registered classes:

- **Nocturne**: every weapon class it registers.
- **BW1**: Nocturne's guns, the rifle, the light gun and the Baron's weapon by its cheats; Doc's
  light pistol and flashlight by its missions.
- **BW2**: the revolver (`CGun`), `CMelee`, `CMeleeAxe`, the cross and the lantern (a box). It
  still registers Nocturne's other weapon classes, but nothing reaches them.
- **BW3**: only its own weapons (`CFlintlock`, `CBlunderbus`, the staffs, crosses, `CExorcism`,
  `CStorm`, `CBindEvil`, `CDisease`, `CHeal`, `CSps`); its cheat's `CCrossbow` isn't registered.
