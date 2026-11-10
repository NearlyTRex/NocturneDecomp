# SBoneGuyBox

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 72 | fields | 72 |
| nocturne | 72 | fields | 72 |
| bw1 | 72 | placeholder | 72 |
| blairwitch2 | 72 | placeholder | 72 |
| bw3 | 72 | placeholder | 72 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `pos` | `CVector3f` | 0x0 | 0x0 |  |  |  |
| `orient` | `CVector3f` | 0xc | 0xc |  |  |  |
| `dest_orient` | `CQuaternion4f` | 0x18 | 0x18 |  |  |  |
| `start_orient` | `CQuaternion4f` | 0x28 | 0x28 |  |  |  |
| `source_pos` | `CVector3f` | 0x38 | 0x38 |  |  |  |
| `body_part` | `CBodyPart*` | 0x44 | 0x44 |  |  |  |
