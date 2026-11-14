# CHostage

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 129776 | fields | 129776 |
| nocturne | 129368 | fields | 129368 |
| bw1 | 130720 | fields | 130720 |
| blairwitch2 | 149296 | fields | 149296 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CNPC` | 0x0 | 0x0 | 0x0 | 0x0 |
| `rescue_distance` | `float` | 0x1f708 | 0x1f570 | 0x1fab8 | 0x24348 |
| `rescue_condition` | `char[100]` | 0x1f70c | 0x1f574 | 0x1fabc | 0x2434c |
| `rescue_event` | `char[32]` | 0x1f770 | 0x1f5d8 | 0x1fb20 | 0x243b0 |
| `hero_found_me_event` | `char[100]` | 0x1f790 | 0x1f5f8 | 0x1fb40 | 0x243d0 |
| `hero_left_me_event` | `char[100]` | 0x1f7f4 | 0x1f65c | 0x1fba4 | 0x24434 |
| `hero_came_back_event` | `char[100]` | 0x1f858 | 0x1f6c0 | 0x1fc08 | 0x24498 |
| `get_eaten_event` | `char[100]` | 0x1f8bc | 0x1f724 | 0x1fc6c | 0x244fc |
| `going_to_sit_down_event` | `char[100]` | 0x1f920 | 0x1f788 | 0x1fcd0 | 0x24560 |
| `sit_down_event` | `char[100]` | 0x1f984 | 0x1f7ec | 0x1fd34 | 0x245c4 |
| `damage_sound` | `char[100]` | 0x1f9e8 | 0x1f850 | 0x1fd98 | 0x24628 |
| `die_sound` | `char[100]` | 0x1fa4c | 0x1f8b4 | 0x1fdfc | 0x2468c |
| `sfx_handle` | `uint` | 0x1fab0 | 0x1f918 | 0x1fe60 | 0x246f0 |
| `follow_state` | `int` | 0x1fab4 | 0x1f91c | 0x1fe64 | 0x246f4 |
| `hostage_type` | `int` | 0x1fab8 | 0x1f920 | 0x1fe68 | 0x246f8 |
| `hostage_state` | `int` | 0x1fabc | 0x1f924 | 0x1fe6c | 0x246fc |
| `goal_way_point` | `CDemonActor*` | 0x1fac0 | 0x1f928 | 0x1fe70 | 0x24700 |
| `sit_down_way_point` | `CDemonActor*` | 0x1fac4 | 0x1f92c | 0x1fe74 | 0x24704 |
| `next_way_point` | `CDemonActor*` | 0x1fac8 | 0x1f930 | 0x1fe78 | 0x24708 |
| `bone_indices` | `int[4]` | 0x1facc | 0x1f934 | 0x1fe7c | 0x2470c |
| `no_shadows_when_saved` | `int` | 0x1fadc | 0x1f944 | 0x1fe8c | 0x2471c |
| `gun_raise_progress` | `float` | 0x1fae0 | 0x1f948 | 0x1fe90 | 0x24720 |
| `gun_blend_weight` | `float` | 0x1fae4 | 0x1f94c | 0x1fe94 | 0x24724 |
| `grabber` | `CDemonActor*` | 0x1fae8 | 0x1f950 | 0x1fe98 | 0x24728 |
| `grabber_flee_timer` | `float` | 0x1faec | 0x1f954 | 0x1fe9c | 0x2472c |
