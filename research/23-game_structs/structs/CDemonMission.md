# CDemonMission

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 10192 | fields | 10192 |
| nocturne | 10140 | fields | 10140 |
| bw1 | 29216 | fields | — |
| blairwitch2 | 17212 | fields | — |
| bw3 | 29216 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `current_set_index` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `is_in_editor` | `int` | 0x4 | 0x4 | 0x1008 | 0x1008 | 0x1008 |
| `mission_version_num` | `int` | 0x8 | 0x8 | 0x100c | 0x100c | 0x100c |
| `has_inventory_actors` | `int` | 0xc | 0xc | 0x1010 | 0x1010 | 0x1010 |
| `current_camera_index` | `int` | 0x10 |  |  |  |  |
| `viewport` | `SWindowRect` | 0x14 |  |  |  |  |
| `show_3d_viewport` | `int` | 0x24 |  |  |  |  |
| `selected_actor` | `CDemonActor*` | 0x28 |  |  |  |  |
| `hovered_actor` | `CDemonActor*` | 0x2c |  |  |  |  |
| `render_sky_in_editor` | `int` | 0x30 |  |  |  |  |
| `render_water_in_editor` | `int` | 0x34 |  |  |  |  |
| `full_light_in_editor` | `int` | 0x38 |  |  |  |  |
| `skip_gore_load_flag` | `int` | 0x3c |  |  |  |  |
| `show_waypoint_coverage` | `int` | 0x40 |  |  |  |  |
| `mission_name` | `char[256]` | 0x44 | 0x10 | 0x1018 | 0x1014 | 0x133c |
| `num_sets` | `int` | 0x144 | 0x110 | 0x4 | 0x4 | 0x4 |
| `set_names` | `char[4][256]` | 0x148 | 0x114 | 0x8 | 0x8 | 0x8 |
| `first_actor` | `CDemonActor*` | 0x548 | 0x514 | 0x1118 | 0x1114 | 0x143c |
| `last_actor` | `CDemonActor*` | 0x54c | 0x518 | 0x111c | 0x1118 | 0x1440 |
| `pending_teleport` | `CLocation` | 0x550 | 0x51c | 0x1120 | 0x111c | 0x1444 |
| `delete_queue_count` | `int` | 0x560 | 0x52c | 0x1130 | 0x112c | 0x1018 |
| `delete_queue_actors` | `CDemonActor*[100]` | 0x564 | 0x530 | 0x1134 | 0x1130 | 0x101c |
| `delete_queue_flags` | `uint[100]` | 0x6f4 | 0x6c0 | 0x12c4 | 0x12c0 | 0x11ac |
| `actors_prepared` | `int` | 0x884 | 0x850 |  |  |  |
| `next_inventory_actor` | `CDemonActor*` | 0x888 | 0x854 | 0x1458 | 0x1454 | 0x1458 |
| `actor_lookup_count` | `int` | 0x88c | 0x858 | 0x145c | 0x1458 | 0x145c |
| `actor_lookup_table` | `CDemonActor*[2000]` | 0x890 | 0x85c | 0x1460 | 0x145c | 0x1460 |
| `teleport_requested` | `int` |  |  | 0x1014 |  | 0x1014 |
| `prepared_set_index` | `int` |  |  | 0x1454 | 0x1450 | 0x1454 |
