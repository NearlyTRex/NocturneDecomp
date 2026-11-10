# CHero

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 130004 | fields | — |
| nocturne | 129596 | fields | — |
| bw1 | 130988 | fields | — |
| blairwitch2 | 153152 | fields | — |
| bw3 | 134092 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CCharacter` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `invincibility_timer` | `float` | 0xbe24 | 0xbc8c | 0xc1d0 | 0x10a60 | 0xcdcc |
| `control_type` | `EHeroControlType` | 0xbe28 | 0xbc90 | 0xc1d4 | 0x10a64 | 0xcdd0 |
| `player_input` | `SPlayerInput` | 0xbe2c | 0xbc94 |  |  |  |
| `path_map` | `CPathMap` | 0xbe58 | 0xbcc0 |  |  |  |
| `aim_mode` | `EAimMode` | 0x1f734 | 0x1f59c |  |  |  |
| `inventory` | `CInventory` | 0x1f738 | 0x1f5a0 |  |  |  |
| `is_wearing_gas_mask` | `EGasMaskState` | 0x1fb98 | 0x1fa00 |  |  |  |
| `door_to_open` | `CDoor*` | 0x1fb9c | 0x1fa04 | 0x1ff74 | 0x25604 | 0x20b94 |
| `object_to_pick_up` | `CDemonActor*` | 0x1fba0 | 0x1fa08 | 0x1ff78 | 0x25608 | 0x20b98 |
| `pushed_object` | `CBoxActor*` | 0x1fba4 | 0x1fa0c | 0x1ff7c | 0x2560c | 0x20b9c |
| `lever_to_pull` | `CLever*` | 0x1fba8 | 0x1fa10 | 0x1ff80 | 0x25610 | 0x20ba0 |
| `ladder_to_climb` | `CLadder*` | 0x1fbac | 0x1fa14 | 0x1ff84 | 0x25614 | 0x20ba4 |
| `nearby_interactive_actor` | `CDemonActor*` | 0x1fbb0 | 0x1fa18 | 0x1ff88 | 0x25618 | 0x20ba8 |
| `target_actor` | `CDemonActor*` | 0x1fbb4 | 0x1fa1c | 0x1ff8c | 0x2561c | 0x20bac |
| `target_position` | `CVector3f` | 0x1fbb8 | 0x1fa20 | 0x1ff90 |  | 0x20bb0 |
| `target_orientation` | `UOrientationVector` | 0x1fbc4 | 0x1fa2c | 0x1ff9c |  | 0x20bbc |
| `ai_task` | `EHeroTask` | 0x1fbd0 | 0x1fa38 | 0x1ffa8 |  | 0x20bc8 |
| `inventories` | `CInventory[3]` |  |  |  | 0x2437c |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0xbe24+0x3ac, 0xc1d8+0x13d9c
- **blairwitch2**: 0xbe24+0x4c3c, 0x10a68+0x13914, 0x255e8+0x1c, 0x25620+0x20
- **bw3**: 0xbe24+0xfa8, 0xcdd4+0x13dc0
