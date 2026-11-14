# SPodManageRecord

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 924 | fields | — |
| nocturne | 924 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `base_name` | `char[256]` | 0x0 | 0x0 |
| `pod_name` | `char[260]` | 0x100 | 0x100 |
| `network_path` | `char[260]` | 0x204 | 0x204 |
| `checked_out_by` | `char[100]` | 0x308 | 0x308 |
| `status_description` | `char*` | 0x36c | 0x36c |
| `comparison_result` | `int` | 0x370 | 0x370 |
| `is_mounted` | `int` | 0x374 | 0x374 |
| `action_index` | `int` | 0x378 | 0x378 |
| `count_newer_local` | `int` | 0x37c | 0x37c |
| `count_older_local` | `int` | 0x380 | 0x380 |
| `count_missing_local` | `int` | 0x384 | 0x384 |
| `count_different` | `int` | 0x388 | 0x388 |
| `count_in_sync` | `int` | 0x38c | 0x38c |
| `total_file_count` | `int` | 0x390 | 0x390 |
| `timestamp` | `uint` | 0x394 | 0x394 |
| `file_size` | `uint` | 0x398 | 0x398 |
