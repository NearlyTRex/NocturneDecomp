# nocturne.exe struct layout corrections

Derived from nocedit.exe -> nocturne.exe matched method pairs. Offsets below are **nocedit's**; the edit makes nocturne's copy.

Boundaries are bracketed, not exact: an offset is only observed where matched code touched it, so each edit says *between* two known fields. Confirm against the `.asm` before cutting.

112 classes need correction, in 17 shift-groups.

## Summary — group by total shift

| total shift | classes | likely root |
|---|---|---|
| `-0x8` (-8 bytes) | 53 | `CDemonActor` (smallest in group) |
| `-0x198` (-408 bytes) | 38 | `CCharacter` (smallest in group) |
| `-0x10` (-16 bytes) | 3 | `CFlameCan` (smallest in group) |
| `-0x6540` (-25920 bytes) | 2 | `CDeformableModel` (smallest in group) |
| `-0x5340` (-21312 bytes) | 2 | `CKeyFramedModel` (smallest in group) |
| `+0x100` (+256 bytes) | 2 | `CDemonCamera` (smallest in group) |
| `+0x0` (+0 bytes) | 2 | `CDirectSoundDevice` (smallest in group) |
| `-0x18` (-24 bytes) | 1 | `CBodyPart` (smallest in group) |
| `-0xc` (-12 bytes) | 1 | `CConveyor` (smallest in group) |
| `-0x34` (-52 bytes) | 1 | `CDemonMission` (smallest in group) |
| `-0x3e8` (-1000 bytes) | 1 | `CDemonSet` (smallest in group) |
| `-0x54d8` (-21720 bytes) | 1 | `CMimic` (smallest in group) |
| `-0x64` (-100 bytes) | 1 | `CPickList` (smallest in group) |
| `-0x28` (-40 bytes) | 1 | `CSfxSample` (smallest in group) |
| `-0x4` (-4 bytes) | 1 | `CSfxSlot` (smallest in group) |
| `-0xa818` (-43032 bytes) | 1 | `CSvetlana` (smallest in group) |
| `-0xfb58` (-64344 bytes) | 1 | `CVampireBoss` (smallest in group) |

## Per-group detail

### shift `-0x8` (-8 bytes) — 53 class(es)

Representative: **CDemonActor** (nocedit 344 bytes -> nocturne 336 bytes), 14 observations over 20 methods, purity 1.00.

| change | between | and | support |
|---|---|---|---|
| remove 8 bytes | `vtable._ub : CDemonActor_vtable* @ 0x154` | `vtable._ub : CDemonActor_vtable* @ 0x154` | 10 |

Same shift, so almost certainly the same underlying member — fix the root and re-derive before touching the rest:

- `CActorDestination` (nocedit 500 bytes, 32 obs)
- `CAmmo` (nocedit 796 bytes, 16 obs)
- `CAmmoBox` (nocedit 844 bytes, 25 obs)
- `CAnvil` (nocedit 836 bytes, 15 obs)
- `CBaronWeapon` (nocedit 1404 bytes, 27 obs)
- `CBarrier` (nocedit 560 bytes, 12 obs)
- `CBat` (nocedit 904 bytes, 44 obs)
- `CBoxActor` (nocedit 1644 bytes, 100 obs)
- `CChain` (nocedit 1400 bytes, 95 obs)
- `CCrate` (nocedit 764 bytes, 30 obs)
- `CCurtain` (nocedit 416568 bytes, 128 obs)
- `CDemonActor` (nocedit 344 bytes, 14 obs)
- `CDoor` (nocedit 2528 bytes, 165 obs)
- `CDrip` (nocedit 828 bytes, 63 obs)
- `CDynamite` (nocedit 1420 bytes, 27 obs)
- `CEmitter` (nocedit 1172 bytes, 114 obs)
- `CEventList` (nocedit 20812 bytes, 18 obs)
- `CFilmProjector` (nocedit 996 bytes, 36 obs)
- `CFilmReel` (nocedit 796 bytes, 8 obs)
- `CFlame` (nocedit 676 bytes, 77 obs)
- `CFlameThrower` (nocedit 1416 bytes, 11 obs)
- `CFlashlight` (nocedit 1400 bytes, 8 obs)
- `CFlies` (nocedit 10784 bytes, 36 obs)
- `CFrankenstienMachine` (nocedit 1180 bytes, 52 obs)
- `CGame` (nocedit 2764 bytes, 8 obs)
- `CGlass` (nocedit 2880 bytes, 123 obs)
- `CGrave` (nocedit 944 bytes, 38 obs)
- `CHealthItem` (nocedit 732 bytes, 9 obs)
- `CInventory` (nocedit 1120 bytes, 32 obs)
- `CLadder` (nocedit 768 bytes, 20 obs)
- `CLever` (nocedit 2068 bytes, 89 obs)
- `CLightActor` (nocedit 13944 bytes, 38 obs)
- `CLightCone` (nocedit 556 bytes, 18 obs)
- `CLightGun` (nocedit 1424 bytes, 18 obs)
- `CMansionPuzzleCircle` (nocedit 5396 bytes, 145 obs)
- `CMarquee` (nocedit 444 bytes, 55 obs)
- `CMelee` (nocedit 1740 bytes, 51 obs)
- `CPendulum` (nocedit 1092 bytes, 98 obs)
- `CPlatform` (nocedit 1836 bytes, 58 obs)
- `CScript` (nocedit 1152 bytes, 54 obs)
- `CShovel` (nocedit 1400 bytes, 8 obs)
- `CSimBox` (nocedit 1484 bytes, 38 obs)
- `CSpike` (nocedit 1376 bytes, 86 obs)
- `CStairs` (nocedit 2612 bytes, 19 obs)
- `CTommyGun` (nocedit 1412 bytes, 11 obs)
- `CTrap` (nocedit 732 bytes, 16 obs)
- `CTrash` (nocedit 808 bytes, 47 obs)
- `CTrigger` (nocedit 880 bytes, 95 obs)
- `CTurret` (nocedit 2236 bytes, 90 obs)
- `CVehicle` (nocedit 4216 bytes, 81 obs)
- `CWaterActor` (nocedit 176696 bytes, 142 obs)
- `CWayPoint` (nocedit 1368 bytes, 20 obs)
- `CWeapon` (nocedit 1400 bytes, 72 obs)


### shift `-0x198` (-408 bytes) — 38 class(es)

Representative: **CCharacter** (nocedit 48676 bytes -> nocturne 48268 bytes), 575 observations over 69 methods, purity 1.00.

| change | between | and | support |
|---|---|---|---|
| remove 8 bytes | `base.vtable._ub : CDemonActor_vtable* @ 0x154` | `base.vtable._ub : CDemonActor_vtable* @ 0x154` | 513 |
| remove 400 bytes | `flames : CFlame[50] @ 0x33cc` | `sfx_handle : uint @ 0xb7d4` | 35 |

Same shift, so almost certainly the same underlying member — fix the root and re-derive before touching the rest:

- `CArmour` (nocedit 48928 bytes, 22 obs)
- `CBaron` (nocedit 130260 bytes, 37 obs)
- `CBassPlayer` (nocedit 128784 bytes, 8 obs)
- `CBatCreature` (nocedit 48900 bytes, 114 obs)
- `CBatman` (nocedit 49016 bytes, 144 obs)
- `CBiggs` (nocedit 52432 bytes, 50 obs)
- `CBride` (nocedit 48876 bytes, 142 obs)
- `CBugs` (nocedit 104952 bytes, 168 obs)
- `CCharacter` (nocedit 48676 bytes, 575 obs)
- `CColonel` (nocedit 130028 bytes, 34 obs)
- `CDraculaBride` (nocedit 49132 bytes, 239 obs)
- `CDrone` (nocedit 48852 bytes, 76 obs)
- `CDrummer` (nocedit 128784 bytes, 11 obs)
- `CEnemy` (nocedit 48828 bytes, 88 obs)
- `CGabriella` (nocedit 391816 bytes, 385 obs)
- `CGargoyle` (nocedit 48920 bytes, 170 obs)
- `CGhoul` (nocedit 48952 bytes, 366 obs)
- `CHaystack` (nocedit 130028 bytes, 47 obs)
- `CHero` (nocedit 130004 bytes, 153 obs)
- `CHostage` (nocedit 129776 bytes, 263 obs)
- `CHotDemon` (nocedit 48880 bytes, 78 obs)
- `CIcePick` (nocedit 130052 bytes, 54 obs)
- `CImp` (nocedit 48884 bytes, 174 obs)
- `CLarva` (nocedit 48840 bytes, 75 obs)
- `CMobster` (nocedit 49044 bytes, 318 obs)
- `CMoloch` (nocedit 142232 bytes, 100 obs)
- `CNPC` (nocedit 128776 bytes, 40 obs)
- `CPassenger` (nocedit 132168 bytes, 52 obs)
- `CScat` (nocedit 130048 bytes, 131 obs)
- `CSentinel` (nocedit 48836 bytes, 98 obs)
- `CSmiley` (nocedit 48896 bytes, 154 obs)
- `CStranger` (nocedit 130672 bytes, 441 obs)
- `CSuccubus` (nocedit 61288 bytes, 28 obs)
- `CTVBat` (nocedit 49396 bytes, 118 obs)
- `CWerewolf` (nocedit 48900 bytes, 214 obs)
- `CZombie` (nocedit 49068 bytes, 424 obs)
- `CZombieCow` (nocedit 48880 bytes, 84 obs)
- `CZombieDog` (nocedit 48840 bytes, 59 obs)


### shift `-0x10` (-16 bytes) — 3 class(es)

Representative: **CFlameCan** (nocedit 1512 bytes -> nocturne 1496 bytes), 34 observations over 5 methods, purity 1.00.

| change | between | and | support |
|---|---|---|---|
| remove 8 bytes | `base.vtable._ub : CDemonActor_vtable* @ 0x154` | `base.vtable._ub : CDemonActor_vtable* @ 0x154` | 21 |
| remove 8 bytes | `flame.base.location.position.y : float @ 0x364` | `flame.flame_size.x : float @ 0x498` | 13 |

Same shift, so almost certainly the same underlying member — fix the root and re-derive before touching the rest:

- `CCrossbow` (nocedit 2080 bytes, 27 obs)
- `CCryptVessel` (nocedit 2036 bytes, 135 obs)
- `CFlameCan` (nocedit 1512 bytes, 34 obs)


### shift `-0x6540` (-25920 bytes) — 2 class(es)

Representative: **CDeformableModel** (nocedit 36864 bytes -> nocturne 10944 bytes), 40 observations over 24 methods, purity 1.00.

| change | between | and | support |
|---|---|---|---|
| remove 25920 bytes | `num_parts : int @ 0x7140` | `num_parts : int @ 0x7140` | 40 |

Same shift, so almost certainly the same underlying member — fix the root and re-derive before touching the rest:

- `CBoneGuy` (nocedit 50404 bytes, 82 obs)
- `CDeformableModel` (nocedit 36864 bytes, 40 obs)


### shift `-0x5340` (-21312 bytes) — 2 class(es)

Representative: **CKeyFramedModel** (nocedit 22232 bytes -> nocturne 920 bytes), 32 observations over 14 methods, purity 1.00.

| change | between | and | support |
|---|---|---|---|
| remove 21312 bytes | `part_count : int @ 0x5584` | `part_count : int @ 0x5584` | 32 |

Same shift, so almost certainly the same underlying member — fix the root and re-derive before touching the rest:

- `CCloth` (nocedit 261744 bytes, 88 obs)
- `CKeyFramedModel` (nocedit 22232 bytes, 32 obs)


### shift `+0x100` (+256 bytes) — 2 class(es)

Representative: **CDemonCamera** (nocedit 5320 bytes -> nocturne 5576 bytes), 17 observations over 31 methods, purity 1.00.

| change | between | and | support |
|---|---|---|---|
| add 256 bytes | `base.position.f.x : float @ 0x4` | `base.position.f.x : float @ 0x4` | 7 |

Same shift, so almost certainly the same underlying member — fix the root and re-derive before touching the rest:

- `CDemonCamera` (nocedit 5320 bytes, 17 obs)
- `CDemonLight` (nocedit 12204 bytes, 16 obs)


### shift `+0x0` (+0 bytes) — 2 class(es)

Representative: **CDirectSoundDevice** (nocedit 4 bytes -> nocturne 4 bytes), 8 observations over 16 methods, purity 1.00.

_No confidently-bracketed boundary; shift is known but its location is not._

Same shift, so almost certainly the same underlying member — fix the root and re-derive before touching the rest:

- `CDirectSoundDevice` (nocedit 4 bytes, 8 obs)
- `CMoon` (nocedit 22240 bytes, 11 obs)


### shift `-0x18` (-24 bytes) — 1 class(es)

Representative: **CBodyPart** (nocedit 3888 bytes -> nocturne 3864 bytes), 173 observations over 16 methods, purity 1.00.

| change | between | and | support |
|---|---|---|---|
| remove 8 bytes | `base.vtable._ub : CDemonActor_vtable* @ 0x154` | `base.vtable._ub : CDemonActor_vtable* @ 0x154` | 127 |
| remove 16 bytes | `fires : SBodyPartFire[2] @ 0x750` | `dont_use_normals : int @ 0xcb0` | 44 |


### shift `-0xc` (-12 bytes) — 1 class(es)

Representative: **CConveyor** (nocedit 2144 bytes -> nocturne 2132 bytes), 25 observations over 3 methods, purity 1.00.

| change | between | and | support |
|---|---|---|---|
| remove 12 bytes | `base.base.vtable._ub : CDemonActor_vtable* @ 0x154` | `size.x : float @ 0x72c` | 23 |


### shift `-0x34` (-52 bytes) — 1 class(es)

Representative: **CDemonMission** (nocedit 10192 bytes -> nocturne 10140 bytes), 50 observations over 18 methods, purity 1.00.

| change | between | and | support |
|---|---|---|---|
| remove 8 bytes | `set_names : char[4][256] @ 0x148` | `set_names : char[4][256] @ 0x148` | 19 |
| remove 44 bytes | `set_names : char[4][256] @ 0x148` | `first_actor : CDemonActor* @ 0x548` | 24 |


### shift `-0x3e8` (-1000 bytes) — 1 class(es)

Representative: **CDemonSet** (nocedit 1447532 bytes -> nocturne 1446532 bytes), 364 observations over 72 methods, purity 1.00.

| change | between | and | support |
|---|---|---|---|
| remove 8 bytes | `cameras : C3DSCamera[250] @ 0x4` | `cameras : C3DSCamera[250] @ 0x4` | 23 |
| remove 992 bytes | `cameras : C3DSCamera[250] @ 0x4` | `light_count : int @ 0x19a2c` | 331 |


### shift `-0x54d8` (-21720 bytes) — 1 class(es)

Representative: **CMimic** (nocedit 313944 bytes -> nocturne 292224 bytes), 100 observations over 10 methods, purity 1.00.

| change | between | and | support |
|---|---|---|---|
| remove 8 bytes | `base.base.base.vtable._ub : CDemonActor_vtable* @ 0x154` | `base.base.base.vtable._ub : CDemonActor_vtable* @ 0x154` | 45 |
| remove 400 bytes | `base.base.ai_detection_range_max : float @ 0x2de8` | `base.speed : float @ 0xbe24` | 17 |
| remove 21312 bytes | `cloth.model.model_filename : char[256] @ 0xbf84` | `cloth.vertices : SClothVertex[800] @ 0x1165c` | 38 |


### shift `-0x64` (-100 bytes) — 1 class(es)

Representative: **CPickList** (nocedit 936 bytes -> nocturne 836 bytes), 43 observations over 4 methods, purity 1.00.

| change | between | and | support |
|---|---|---|---|
| remove 100 bytes | `character_width : int @ 0x174` | `character_width : int @ 0x174` | 43 |


### shift `-0x28` (-40 bytes) — 1 class(es)

Representative: **CSfxSample** (nocedit 384 bytes -> nocturne 344 bytes), 18 observations over 6 methods, purity 1.00.

| change | between | and | support |
|---|---|---|---|
| remove 40 bytes | `buffer_id : int @ 0x158` | `buffer_id : int @ 0x158` | 18 |


### shift `-0x4` (-4 bytes) — 1 class(es)

Representative: **CSfxSlot** (nocedit 296 bytes -> nocturne 292 bytes), 76 observations over 9 methods, purity 1.00.

| change | between | and | support |
|---|---|---|---|
| remove 4 bytes | `hardware_buffer_handle : int @ 0x70` | `hardware_buffer_handle : int @ 0x70` | 69 |


### shift `-0xa818` (-43032 bytes) — 1 class(es)

Representative: **CSvetlana** (nocedit 653528 bytes -> nocturne 610496 bytes), 47 observations over 6 methods, purity 1.00.

| change | between | and | support |
|---|---|---|---|
| remove 8 bytes | `base.base.base.vtable._ub : CDemonActor_vtable* @ 0x154` | `base.base.base.vtable._ub : CDemonActor_vtable* @ 0x154` | 18 |
| remove 400 bytes | `base.base.grabbed_by : CDemonActor* @ 0x2598` | `base.invincibility_timer : float @ 0xbe24` | 11 |
| remove 21312 bytes | `cape_cloth.model.model_filename : char[256] @ 0x1fbdc` | `hair_cloth.model.model_filename : char[256] @ 0x5fa4c` | 3 |
| remove 21312 bytes | `hair_cloth.model.model_filename : char[256] @ 0x5fa4c` | `sfx_handle : uint @ 0x9f8bc` | 11 |


### shift `-0xfb58` (-64344 bytes) — 1 class(es)

Representative: **CVampireBoss** (nocedit 846112 bytes -> nocturne 781768 bytes), 200 observations over 14 methods, purity 1.00.

| change | between | and | support |
|---|---|---|---|
| remove 8 bytes | `base.base.base.vtable._ub : CDemonActor_vtable* @ 0x154` | `base.base.base.vtable._ub : CDemonActor_vtable* @ 0x154` | 79 |
| remove 400 bytes | `base.base.ai_detection_range_max : float @ 0x2de8` | `model.motion_controller.motion_list_ptr : CMotionList* @ 0xbebc` | 20 |
| remove 63936 bytes | `skirt_cloth.model.model_filename : char[256] @ 0x8de50` | `form : int @ 0xcdcc0` | 85 |

