# CBaron

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 130260 | fields | 130260 |
| nocturne | 129852 | fields | 129852 |
| bw1 | 131244 | fields | 131244 |
| blairwitch2 | 153408 | fields | 153408 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CHero` | 0x0 | 0x0 | 0x0 | 0x0 |
| `summon_event` | `char[100]` | 0x1fbd4 | 0x1fa3c | 0x1ffac | 0x25640 |
| `go_away_event` | `char[100]` | 0x1fc38 | 0x1faa0 | 0x20010 | 0x256a4 |
| `head_rotation` | `CVector3f` | 0x1fc9c | 0x1fb04 | 0x20074 | 0x25708 |
| `head_blend_weight` | `float` | 0x1fca8 | 0x1fb10 | 0x20080 | 0x25714 |
| `target_actor` | `CDemonActor*` | 0x1fcac | 0x1fb14 | 0x20084 | 0x25718 |
| `new_attack` | `int` | 0x1fcb0 | 0x1fb18 | 0x20088 | 0x2571c |
| `left_hand_pos` | `CVector3f` | 0x1fcb4 | 0x1fb1c | 0x2008c | 0x25720 |
| `right_hand_pos` | `CVector3f` | 0x1fcc0 | 0x1fb28 | 0x20098 | 0x2572c |
| `summoned` | `int` | 0x1fccc | 0x1fb34 | 0x200a4 | 0x25738 |
| `shell_visible` | `int` | 0x1fcd0 | 0x1fb38 | 0x200a8 | 0x2573c |
