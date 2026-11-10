# CPod

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 408 | fields | 408 |
| nocturne | 408 | fields | 408 |
| bw1 | 408 | fields | 408 |
| blairwitch2 | 408 | fields | 408 |
| bw3 | 408 | fields | 408 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `pod_file_count` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `pod_files` | `CPodFile*[100]` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `vtable` | `CPod_vtable*` | 0x194 | 0x194 | 0x194 | 0x194 | 0x194 |
