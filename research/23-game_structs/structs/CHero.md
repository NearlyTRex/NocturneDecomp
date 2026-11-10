# CHero

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 130004 | fields | — |
| nocturne | 129596 | fields | — |
| bw1 | unsized | placeholder | — |
| blairwitch2 | unsized | placeholder | — |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CCharacter` | 0x0 | 0x0 |  |  |  |
| `invincibility_timer` | `float` | 0xbe24 | 0xbc8c |  |  |  |
| `control_type` | `EHeroControlType` | 0xbe28 | 0xbc90 |  |  |  |
| `player_input` | `SPlayerInput` | 0xbe2c | 0xbc94 |  |  |  |
| `path_map` | `CPathMap` | 0xbe58 | 0xbcc0 |  |  |  |
| `aim_mode` | `EAimMode` | 0x1f734 | 0x1f59c |  |  |  |
| `inventory` | `CInventory` | 0x1f738 | 0x1f5a0 |  |  |  |
| `is_wearing_gas_mask` | `EGasMaskState` | 0x1fb98 | 0x1fa00 |  |  |  |
| `door_to_open` | `CDoor*` | 0x1fb9c | 0x1fa04 |  |  |  |
| `object_to_pick_up` | `CDemonActor*` | 0x1fba0 | 0x1fa08 |  |  |  |
| `pushed_object` | `CBoxActor*` | 0x1fba4 | 0x1fa0c |  |  |  |
| `lever_to_pull` | `CLever*` | 0x1fba8 | 0x1fa10 |  |  |  |
| `ladder_to_climb` | `CLadder*` | 0x1fbac | 0x1fa14 |  |  |  |
| `nearby_interactive_actor` | `CDemonActor*` | 0x1fbb0 | 0x1fa18 |  |  |  |
| `target_actor` | `CDemonActor*` | 0x1fbb4 | 0x1fa1c |  |  |  |
| `target_position` | `CVector3f` | 0x1fbb8 | 0x1fa20 |  |  |  |
| `target_orientation` | `UOrientationVector` | 0x1fbc4 | 0x1fa2c |  |  |  |
| `ai_task` | `EHeroTask` | 0x1fbd0 | 0x1fa38 |  |  |  |
