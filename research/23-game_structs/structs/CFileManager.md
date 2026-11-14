# CFileManager

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 1280020 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit |
|---|---|---:|
| `file_ptr` | `_FILE*` | 0x0 |
| `tracked_file_count` | `int` | 0x4 |
| `file_entries` | `char[10000][128]` | 0x8 |
| `operation_mode` | `int` | 0x138808 |
| `batch_mode` | `int` | 0x13880c |
| `vtable` | `CFileManager_vtable*` | 0x138810 |
