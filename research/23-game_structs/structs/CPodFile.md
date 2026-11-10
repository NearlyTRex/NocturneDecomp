# CPodFile

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 1068 | fields | 1068 |
| nocturne | 540 | fields | 540 |
| bw1 | 1068 | fields | 1068 |
| blairwitch2 | 1068 | fields | 1068 |
| bw3 | 1068 | fields | 1068 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `pod_format_version` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `filename` | `char[256]` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `timestamp` | `uint` | 0x104 | 0x104 | 0x104 | 0x104 | 0x104 |
| `description` | `char[256]` | 0x108 | 0x108 | 0x108 | 0x108 | 0x108 |
| `author_info` | `char[256]` | 0x208 |  | 0x208 | 0x208 | 0x208 |
| `copyright_info` | `char[256]` | 0x308 |  | 0x308 | 0x308 | 0x308 |
| `mount_priority` | `int` | 0x408 |  | 0x408 | 0x408 | 0x408 |
| `format_flags` | `uint` | 0x40c |  | 0x40c | 0x40c | 0x40c |
| `file_count` | `int` | 0x410 | 0x208 | 0x410 | 0x410 | 0x410 |
| `directory_entries` | `CPodDirectoryEntry*` | 0x414 | 0x20c | 0x414 | 0x414 | 0x414 |
| `file_data_buffer` | `char*` | 0x418 | 0x210 | 0x418 | 0x418 | 0x418 |
| `audit_count` | `int` | 0x41c | 0x214 | 0x41c | 0x41c | 0x41c |
| `total_file_size` | `uint` | 0x420 | 0x218 | 0x420 | 0x420 | 0x420 |
| `dependency_count` | `int` | 0x424 |  | 0x424 | 0x424 | 0x424 |
| `dependency_records_offset` | `uint` | 0x428 |  | 0x428 | 0x428 | 0x428 |
