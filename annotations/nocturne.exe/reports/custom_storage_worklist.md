# nocturne.exe — CUSTOM_STORAGE signature worklist

37 functions whose signatures cannot be transferred from `nocedit.exe` by any
tool, and have to be set by hand in the Ghidra UI. This is everything left in
the nocedit -> nocturne signature drift set: `apply` and `review` are both empty.

Generated 2026-08-16 from the export of that date.

## Why these cannot be automated

These functions use Watcom conventions where Ghidra cannot derive parameter and
return locations from the convention name alone — the storage is pinned to
specific registers, FPU stack slots, or stack offsets, and is recorded on the
function as **custom storage**. `apply_sibling_signatures.py` is deliberately
gated off them: it writes signatures with `DYNAMIC_STORAGE_FORMAL_PARAMS`, which
re-derives storage from the convention and would silently discard the assignment.
A declaration alone is not enough, so a ledger entry would report success and
leave the function wrong.

**31 of the 37 already have the correct declaration.** For those, nothing about the
name, return type, parameter types or parameter names changes — the *only* work is
ticking **Use Custom Storage** and filling in the storage column. Each entry below
says which case it is, so you never retype a signature that is already right.

Every pair is corroborated by `sibling_verified_mapping.json` — the address
mapping pairs the same two addresses that the name match pairs, for all 37.

## How to apply one entry

1. Open `nocturne.exe` in Ghidra and go to the address (`G`).
2. Right-click the function signature in the Listing -> **Edit Function...**
3. Tick **Use Custom Storage**. Ghidra will not let you set per-parameter
   storage until this is on, and turning it *off* again discards everything
   you set here.
4. Check the **Calling Convention** matches the entry.
5. Set the return storage (entries returning `void` have none).
6. For each parameter, click its **Storage** cell to open the Storage Address
   Editor and assign the location.

`Stack[0xN]` means a stack varnode at offset `0xN` — in the Storage Address
Editor choose **Stack** and enter the offset. Register entries (`EAX`, `ST0`,
`AX`, ...) choose **Register** and pick that register by name.

Entries marked `DECLARATION ALSO CHANGES` need the types/names set as well; the
rest are storage-only.

## Do not copy these two — the authority is wrong

Both carry `INVALID` storage in `nocedit.exe` itself, so nocedit's annotation is
the defect, not nocturne's missing one. Copying either would propagate a broken
signature into the second binary. Fix nocedit first, then re-run the comparison.

- **`gmtime_r`** — nocedit `00607690`, nocturne `0056d340`
  - nocedit: `__cdecl undefined1 crt_time.c_gmtime_r_FUN_00607690(time_t days, time_t seconds, time_t timezone_offset, undefined1 result)  /* CUSTOM_STORAGE */`
  - parameter `result` has INVALID storage and type `undefined1` — this is the `tm`
    output pointer, and it stays unresolvable until a `tm` struct exists in
    the type database. Known blocker carried over from the CRT signature work.
  - return storage is INVALID. Derive both from the assembly at nocedit
    `00607690` before touching nocturne.
- **`ReadFileBytesMaybe`** — nocedit `0060e930`, nocturne `005733e0`
  - nocedit: `undefined1 crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930(void)  /* CUSTOM_STORAGE */`
  - return storage is INVALID and the calling convention is unset. Derive both from the assembly at nocedit
    `0060e930` before touching nocturne.

## Checklist

| | nocturne | function | TU | nocedit | work |
|---|---|---|---|---|---|
| [ ] | `004f4bb0` | `CPackedBitmap_writePBMFile` | `cockpit_pkbitmap.cpp` | `0054b5c0` | storage only |
| [ ] | `004f4c80` | `CPackedBitmap_readPBMFile` | `cockpit_pkbitmap.cpp` | `0054b690` | storage only |
| [ ] | `0041e5e0` | `CBoxActor_process` | `core_boxactor.cpp` | `004219e0` | storage only |
| [ ] | `0042c4c0` | `CChain_renderTransparent` | `core_chain.cpp` | `004308f0` | storage only |
| [ ] | `00425cc0` | `CCharacter_renderCollision` | `core_charactr.cpp` | `00429b40` | storage only |
| [ ] | `00429220` | `CCharacter_updateCarriedObjects` | `core_charactr.cpp` | `0042d090` | storage only |
| [ ] | `0044ab60` | `buildAndRenderTrianglePrimitive` | `core_dcube.cpp` | `004566e0` | storage only |
| [ ] | `0044d060` | `CDemonGlobe_renderCoronaTextured` | `core_dglobe.cpp` | `004715e0` | storage only |
| [ ] | `0044f430` | `CDemonLight_renderLightBloomQuad` | `core_dlight.cpp` | `00473a20` | storage only |
| [ ] | `0044f9b0` | `CDemonLight_renderLightGlowSprites` | `core_dlight.cpp` | `00473f90` | storage only |
| [ ] | `00450520` | `CDemonLight_renderVolumetricLightShaft` | `core_dlight.cpp` | `00474ad0` | storage only |
| [ ] | `00450c90` | `CDemonLight_renderRadialVolumetricScattering` | `core_dlight.cpp` | `00475210` | storage only |
| [ ] | `00451350` | `CDemonLight_renderExternalVolumetricShafts` | `core_dlight.cpp` | `004758d0` | storage only |
| [ ] | `004574e0` | `CDemonPart_renderFaces` | `core_dpart.cpp` | `004828b0` | storage only |
| [ ] | `00469390` | `CDemonRaytrace_renderCubeForPVS` | `core_dtrace.cpp` | `00497500` | storage only |
| [ ] | `0046e9f0` | `CDemonTriangle_render` | `core_dtri.cpp` | `0049cbd0` | storage only |
| [ ] | `004853c0` | `CGlassParticle_render` | `core_fire.cpp` | `004c1ef0` | storage only |
| [ ] | `00489990` | `CPopcorn_render` | `core_fire.cpp` | `004c64c0` | storage only |
| [ ] | `00489d00` | `CRainDrop_render` | `core_fire.cpp` | `004c6830` | storage only |
| [ ] | `0048d5d0` | `CFlame_renderTransparent` | `core_flame.cpp` | `004ca110` | storage only |
| [ ] | `0048f490` | `CFlies_renderOpaque` | `core_flies.cpp` | `004cc300` | storage only |
| [ ] | `004c1dd0` | `drawWeaponIconBackground` | `core_inv.cpp` | `00500050` | storage only |
| [ ] | `004d77f0` | `CMirror_renderMirrorQuad` | `core_mirror.cpp` | `00522670` | storage only |
| [ ] | `005159a0` | `C3DSLight_renderVolumetricSphere` | `core_setutil.cpp` | `00587b50` | storage only |
| [ ] | `00535900` | `CStranger_processFrame` | `core_stranger.cpp` | `005bb960` | storage only |
| [ ] | `00548100` | `CTrigger_renderTransparent` | `core_trigger.cpp` | `005e00d0` | storage only |
| [ ] | `0056eed8` | `installExceptionHandler` | `crt_exception.c` | `0060aba8` | storage + declaration |
| [ ] | `00568b00` | `AllocateFromFreeList` | `crt_heap.c` | `00609410` | storage + declaration |
| [ ] | `0056afe8` | `ResizeBlockInPlace` | `crt_heap.c` | `006097b8` | storage + declaration |
| [ ] | `0056bf9f` | `dispatch_divide` | `crt_math.c` | `00606aaf` | storage + declaration |
| [ ] | `0056c403` | `pentiumFdivpWorkaround` | `crt_math.c` | `00606f13` | storage + declaration |
| [!] | `0056d340` | `gmtime_r` | `crt_time.c` | `00607690` | blocked |
| [ ] | `00565c12` | `integer_power` | `crt_unknown.c` | `005ffeb2` | storage + declaration |
| [!] | `005733e0` | `ReadFileBytesMaybe` | `crt_unknown.c` | `0060e930` | blocked |
| [ ] | `004bda80` | `CIniFile_setInteger` | `engine_ini.cpp` | `004fbc90` | storage only |
| [ ] | `004bdb20` | `CIniFile_setFloatValue` | `engine_ini.cpp` | `004fbd30` | storage only |
| [ ] | `00521830` | `parseWavFile` | `sound_sndmain.cpp` | `005a3fe0` | storage only |

`[!]` = blocked, see the section above.

## Entries

### cockpit_pkbitmap.cpp

#### `004f4bb0`  —  CPackedBitmap_writePBMFile

| | |
|---|---|
| nocturne | `cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_004f4bb0` |
| nocedit  | `cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0` (`0054b5c0`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_004f4bb0(CPackedBitmap* this_ptr, _FILE* file_handle)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CPackedBitmap*         this_ptr               storage Stack[0x4]
    1  _FILE*                 file_handle            storage Stack[0x8]
```

#### `004f4c80`  —  CPackedBitmap_readPBMFile

| | |
|---|---|
| nocturne | `cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80` |
| nocedit  | `cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690` (`0054b690`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80(CPackedBitmap* this_ptr, _FILE* file_handle, int skip_data_load)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CPackedBitmap*         this_ptr               storage Stack[0x4]
    1  _FILE*                 file_handle            storage Stack[0x8]
    2  int                    skip_data_load         storage Stack[0xc]
```

### core_boxactor.cpp

#### `0041e5e0`  —  CBoxActor_process

| | |
|---|---|
| nocturne | `core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0` |
| nocedit  | `core_boxactor.cpp_CBoxActor_process_FUN_004219e0` (`004219e0`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0(CBoxActor* this_ptr, float delta_time)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CBoxActor*             this_ptr               storage Stack[0x4]
    1  float                  delta_time             storage Stack[0x8]
```

### core_chain.cpp

#### `0042c4c0`  —  CChain_renderTransparent

| | |
|---|---|
| nocturne | `core_chain.cpp_CChain_renderTransparent_FUN_0042c4c0` |
| nocedit  | `core_chain.cpp_CChain_renderTransparent_FUN_004308f0` (`004308f0`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl int core_chain.cpp_CChain_renderTransparent_FUN_0042c4c0(CChain* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : int                        storage EAX
  Parameters:
    0  CChain*                this_ptr               storage Stack[0x4]
```

### core_charactr.cpp

#### `00425cc0`  —  CCharacter_renderCollision

| | |
|---|---|
| nocturne | `core_charactr.cpp_CCharacter_renderCollision_FUN_00425cc0` |
| nocedit  | `core_charactr.cpp_CCharacter_renderCollision_FUN_00429b40` (`00429b40`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_charactr.cpp_CCharacter_renderCollision_FUN_00425cc0(CCharacter* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CCharacter*            this_ptr               storage Stack[0x4]
```

#### `00429220`  —  CCharacter_updateCarriedObjects

| | |
|---|---|
| nocturne | `core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220` |
| nocedit  | `core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_0042d090` (`0042d090`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220(CCharacter* this_ptr, float delta_time)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CCharacter*            this_ptr               storage Stack[0x4]
    1  float                  delta_time             storage Stack[0x8]
```

### core_dcube.cpp

#### `0044ab60`  —  buildAndRenderTrianglePrimitive

| | |
|---|---|
| nocturne | `core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60` |
| nocedit  | `core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_004566e0` (`004566e0`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60(CVector3f** triangle_vertex_pointers, CVector3f* vertex_buffer)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CVector3f**            triangle_vertex_pointers storage Stack[0x4]
    1  CVector3f*             vertex_buffer          storage Stack[0x8]
```

### core_dglobe.cpp

#### `0044d060`  —  CDemonGlobe_renderCoronaTextured

| | |
|---|---|
| nocturne | `core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0044d060` |
| nocedit  | `core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0` (`004715e0`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0044d060(CDemonGlobe* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CDemonGlobe*           this_ptr               storage Stack[0x4]
```

### core_dlight.cpp

#### `0044f430`  —  CDemonLight_renderLightBloomQuad

| | |
|---|---|
| nocturne | `core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430` |
| nocedit  | `core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20` (`00473a20`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430(CDemonLight* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CDemonLight*           this_ptr               storage Stack[0x4]
```

#### `0044f9b0`  —  CDemonLight_renderLightGlowSprites

| | |
|---|---|
| nocturne | `core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_0044f9b0` |
| nocedit  | `core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90` (`00473f90`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_0044f9b0(CDemonLight* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CDemonLight*           this_ptr               storage Stack[0x4]
```

#### `00450520`  —  CDemonLight_renderVolumetricLightShaft

| | |
|---|---|
| nocturne | `core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520` |
| nocedit  | `core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0` (`00474ad0`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520(CDemonLight* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CDemonLight*           this_ptr               storage Stack[0x4]
```

#### `00450c90`  —  CDemonLight_renderRadialVolumetricScattering

| | |
|---|---|
| nocturne | `core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00450c90` |
| nocedit  | `core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210` (`00475210`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00450c90(CDemonLight* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CDemonLight*           this_ptr               storage Stack[0x4]
```

#### `00451350`  —  CDemonLight_renderExternalVolumetricShafts

| | |
|---|---|
| nocturne | `core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350` |
| nocedit  | `core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0` (`004758d0`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350(CDemonLight* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CDemonLight*           this_ptr               storage Stack[0x4]
```

### core_dpart.cpp

#### `004574e0`  —  CDemonPart_renderFaces

| | |
|---|---|
| nocturne | `core_dpart.cpp_CDemonPart_renderFaces_FUN_004574e0` |
| nocedit  | `core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0` (`004828b0`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_dpart.cpp_CDemonPart_renderFaces_FUN_004574e0(CDemonPart* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CDemonPart*            this_ptr               storage Stack[0x4]
```

### core_dtrace.cpp

#### `00469390`  —  CDemonRaytrace_renderCubeForPVS

| | |
|---|---|
| nocturne | `core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390` |
| nocedit  | `core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500` (`00497500`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(CDemonRaytrace* this_ptr, int grid_x, int grid_y, int grid_z, int render_mode)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CDemonRaytrace*        this_ptr               storage Stack[0x4]
    1  int                    grid_x                 storage Stack[0x8]
    2  int                    grid_y                 storage Stack[0xc]
    3  int                    grid_z                 storage Stack[0x10]
    4  int                    render_mode            storage Stack[0x14]
```

### core_dtri.cpp

#### `0046e9f0`  —  CDemonTriangle_render

| | |
|---|---|
| nocturne | `core_dtri.cpp_CDemonTriangle_render_FUN_0046e9f0` |
| nocedit  | `core_dtri.cpp_CDemonTriangle_render_FUN_0049cbd0` (`0049cbd0`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_dtri.cpp_CDemonTriangle_render_FUN_0046e9f0(CDemonTriangle* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CDemonTriangle*        this_ptr               storage Stack[0x4]
```

### core_fire.cpp

#### `004853c0`  —  CGlassParticle_render

| | |
|---|---|
| nocturne | `core_fire.cpp_CGlassParticle_render_FUN_004853c0` |
| nocedit  | `core_fire.cpp_CGlassParticle_render_FUN_004c1ef0` (`004c1ef0`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_fire.cpp_CGlassParticle_render_FUN_004853c0(CGlassParticle* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CGlassParticle*        this_ptr               storage Stack[0x4]
```

#### `00489990`  —  CPopcorn_render

| | |
|---|---|
| nocturne | `core_fire.cpp_CPopcorn_render_FUN_00489990` |
| nocedit  | `core_fire.cpp_CPopcorn_render_FUN_004c64c0` (`004c64c0`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_fire.cpp_CPopcorn_render_FUN_00489990(CPopcorn* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CPopcorn*              this_ptr               storage Stack[0x4]
```

#### `00489d00`  —  CRainDrop_render

| | |
|---|---|
| nocturne | `core_fire.cpp_CRainDrop_render_FUN_00489d00` |
| nocedit  | `core_fire.cpp_CRainDrop_render_FUN_004c6830` (`004c6830`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_fire.cpp_CRainDrop_render_FUN_00489d00(CRainDrop* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CRainDrop*             this_ptr               storage Stack[0x4]
```

### core_flame.cpp

#### `0048d5d0`  —  CFlame_renderTransparent

| | |
|---|---|
| nocturne | `core_flame.cpp_CFlame_renderTransparent_FUN_0048d5d0` |
| nocedit  | `core_flame.cpp_CFlame_renderTransparent_FUN_004ca110` (`004ca110`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl int core_flame.cpp_CFlame_renderTransparent_FUN_0048d5d0(CFlame* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : int                        storage EAX
  Parameters:
    0  CFlame*                this_ptr               storage Stack[0x4]
```

### core_flies.cpp

#### `0048f490`  —  CFlies_renderOpaque

| | |
|---|---|
| nocturne | `core_flies.cpp_CFlies_renderOpaque_FUN_0048f490` |
| nocedit  | `core_flies.cpp_CFlies_renderOpaque_FUN_004cc300` (`004cc300`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl int core_flies.cpp_CFlies_renderOpaque_FUN_0048f490(CFlies* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : int                        storage EAX
  Parameters:
    0  CFlies*                this_ptr               storage Stack[0x4]
```

### core_inv.cpp

#### `004c1dd0`  —  drawWeaponIconBackground

| | |
|---|---|
| nocturne | `core_inv.cpp_drawWeaponIconBackground_FUN_004c1dd0` |
| nocedit  | `core_inv.cpp_drawWeaponIconBackground_FUN_00500050` (`00500050`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_inv.cpp_drawWeaponIconBackground_FUN_004c1dd0(int x1, int y1, int x2, int y2, int alpha)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  int                    x1                     storage Stack[0x4]
    1  int                    y1                     storage Stack[0x8]
    2  int                    x2                     storage Stack[0xc]
    3  int                    y2                     storage Stack[0x10]
    4  int                    alpha                  storage Stack[0x14]
```

### core_mirror.cpp

#### `004d77f0`  —  CMirror_renderMirrorQuad

| | |
|---|---|
| nocturne | `core_mirror.cpp_CMirror_renderMirrorQuad_FUN_004d77f0` |
| nocedit  | `core_mirror.cpp_CMirror_renderMirrorQuad_FUN_00522670` (`00522670`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl int core_mirror.cpp_CMirror_renderMirrorQuad_FUN_004d77f0(CMirror* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : int                        storage EAX
  Parameters:
    0  CMirror*               this_ptr               storage Stack[0x4]
```

### core_setutil.cpp

#### `005159a0`  —  C3DSLight_renderVolumetricSphere

| | |
|---|---|
| nocturne | `core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_005159a0` |
| nocedit  | `core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50` (`00587b50`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_005159a0(C3DSLight* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  C3DSLight*             this_ptr               storage Stack[0x4]
```

### core_stranger.cpp

#### `00535900`  —  CStranger_processFrame

| | |
|---|---|
| nocturne | `core_stranger.cpp_CStranger_processFrame_FUN_00535900` |
| nocedit  | `core_stranger.cpp_CStranger_processFrame_FUN_005bb960` (`005bb960`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void core_stranger.cpp_CStranger_processFrame_FUN_00535900(CStranger* this_ptr, float delta_time)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CStranger*             this_ptr               storage Stack[0x4]
    1  float                  delta_time             storage Stack[0x8]
```

### core_trigger.cpp

#### `00548100`  —  CTrigger_renderTransparent

| | |
|---|---|
| nocturne | `core_trigger.cpp_CTrigger_renderTransparent_FUN_00548100` |
| nocedit  | `core_trigger.cpp_CTrigger_renderTransparent_FUN_005e00d0` (`005e00d0`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl int core_trigger.cpp_CTrigger_renderTransparent_FUN_00548100(CTrigger* this_ptr)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : int                        storage EAX
  Parameters:
    0  CTrigger*              this_ptr               storage Stack[0x4]
```

### crt_exception.c

#### `0056eed8`  —  installExceptionHandler

| | |
|---|---|
| nocturne | `crt_exception.c_installExceptionHandler_FUN_0056eed8` |
| nocedit  | `crt_exception.c_installExceptionHandler_FUN_0060aba8` (`0060aba8`) |
| verdict  | NO_SIGNATURE |

```
DECLARATION ALSO CHANGES
  CURRENT:  __cdecl undefined1 crt_exception.c_installExceptionHandler_FUN_0056eed8(void)
  SET TO:   __cdecl void crt_exception.c_installExceptionHandler_FUN_0056eed8(ExceptionFrame* pExceptionFrame)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  ExceptionFrame*        pExceptionFrame        storage EAX
```

### crt_heap.c

#### `00568b00`  —  AllocateFromFreeList

| | |
|---|---|
| nocturne | `crt_heap.c_AllocateFromFreeList_FUN_00568b00` |
| nocedit  | `crt_heap.c_AllocateFromFreeList_FUN_00609410` (`00609410`) |
| verdict  | NO_SIGNATURE |

```
DECLARATION ALSO CHANGES
  CURRENT:  __watcallRegister undefined1 crt_heap.c_AllocateFromFreeList_FUN_00568b00(void)
  SET TO:   __watcallRegister void* crt_heap.c_AllocateFromFreeList_FUN_00568b00(ulong size, HeapBlock* free_block, ushort ds_segment)

  Use Custom Storage : ON
  Calling Convention : __watcallRegister
  Return             : void*                      storage EAX
  Parameters:
    0  ulong                  size                   storage EAX
    1  HeapBlock*             free_block             storage EDX
    2  ushort                 ds_segment             storage Stack[0x4]
```

#### `0056afe8`  —  ResizeBlockInPlace

| | |
|---|---|
| nocturne | `crt_heap.c_ResizeBlockInPlace_FUN_0056afe8` |
| nocedit  | `crt_heap.c_ResizeBlockInPlace_FUN_006097b8` (`006097b8`) |
| verdict  | NO_SIGNATURE |

```
DECLARATION ALSO CHANGES
  CURRENT:  __watcallRegister undefined1 crt_heap.c_ResizeBlockInPlace_FUN_0056afe8(void)
  SET TO:   __watcallRegister int crt_heap.c_ResizeBlockInPlace_FUN_0056afe8(ushort segment, void* ptr, ulong new_size, ulong* pExtraNeeded)

  Use Custom Storage : ON
  Calling Convention : __watcallRegister
  Return             : int                        storage EAX
  Parameters:
    0  ushort                 segment                storage AX
    1  void*                  ptr                    storage EDX
    2  ulong                  new_size               storage EBX
    3  ulong*                 pExtraNeeded           storage ECX
```

### crt_math.c

#### `0056bf9f`  —  dispatch_divide

| | |
|---|---|
| nocturne | `crt_math.c_dispatch_divide_FUN_0056bf9f` |
| nocedit  | `crt_math.c_dispatch_divide_FUN_00606aaf` (`00606aaf`) |
| verdict  | NO_SIGNATURE |

```
DECLARATION ALSO CHANGES
  CURRENT:  __watcallRegister undefined1 crt_math.c_dispatch_divide_FUN_0056bf9f(void)
  SET TO:   __watcallRegister float10 crt_math.c_dispatch_divide_FUN_0056bf9f(void)

  Use Custom Storage : ON
  Calling Convention : __watcallRegister
  Return             : float10                    storage ST0
  Parameters         : none
```

#### `0056c403`  —  pentiumFdivpWorkaround

| | |
|---|---|
| nocturne | `crt_math.c_pentiumFdivpWorkaround_FUN_0056c403` |
| nocedit  | `crt_math.c_pentiumFdivpWorkaround_FUN_00606f13` (`00606f13`) |
| verdict  | PARAMS_LOST |

```
DECLARATION ALSO CHANGES
  CURRENT:  __fpustack_safe void crt_math.c_pentiumFdivpWorkaround_FUN_0056c403(void)
  SET TO:   __fpustack_safe float10 crt_math.c_pentiumFdivpWorkaround_FUN_0056c403(float10 dividend, float10 divisor)

  Use Custom Storage : ON
  Calling Convention : __fpustack_safe
  Return             : float10                    storage ST0
  Parameters:
    0  float10                dividend               storage ST2
    1  float10                divisor                storage ST3
```

### crt_time.c

#### `0056d340`  —  gmtime_r

> **BLOCKED** — the authority carries INVALID storage. Do not copy; see above.

| | |
|---|---|
| nocturne | `crt_time.c_gmtime_r_FUN_0056d340` |
| nocedit  | `crt_time.c_gmtime_r_FUN_00607690` (`00607690`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl undefined1 crt_time.c_gmtime_r_FUN_0056d340(time_t days, time_t seconds, time_t timezone_offset, undefined1 result)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : undefined1                 storage INVALID
  Parameters:
    0  time_t                 days                   storage Stack[0x4]
    1  time_t                 seconds                storage Stack[0x8]
    2  time_t                 timezone_offset        storage Stack[0xc]
    3  undefined1             result                 storage INVALID
```

### crt_unknown.c

#### `00565c12`  —  integer_power

| | |
|---|---|
| nocturne | `crt_unknown.c_integer_power_FUN_00565c12` |
| nocedit  | `crt_math.c_integer_power_FUN_005ffeb2` (`005ffeb2`) |
| verdict  | PARAMS_LOST |
| TU       | differs — nocedit files this under `crt_math.c` |

```
DECLARATION ALSO CHANGES
  CURRENT:  __fpureg void crt_unknown.c_integer_power_FUN_00565c12(void)
  SET TO:   __fpureg float10 crt_math.c_integer_power_FUN_00565c12(float10 base, ushort exponent)

  Use Custom Storage : ON
  Calling Convention : __fpureg
  Return             : float10                    storage ST0
  Parameters:
    0  float10                base                   storage Stack[0x8]
    1  ushort                 exponent               storage Stack[0x14]
```

#### `005733e0`  —  ReadFileBytesMaybe

> **BLOCKED** — the authority carries INVALID storage. Do not copy; see above.

| | |
|---|---|
| nocturne | `crt_unknown.c_ReadFileBytesMaybe_FUN_005733e0` |
| nocedit  | `crt_unknown.c_ReadFileBytesMaybe_FUN_0060e930` (`0060e930`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  undefined1 crt_unknown.c_ReadFileBytesMaybe_FUN_005733e0(void)

  Use Custom Storage : ON
  Calling Convention : <unset in nocedit - derive from the asm>
  Return             : undefined1                 storage INVALID
  Parameters         : none
```

### engine_ini.cpp

#### `004bda80`  —  CIniFile_setInteger

| | |
|---|---|
| nocturne | `engine_ini.cpp_CIniFile_setInteger_FUN_004bda80` |
| nocedit  | `engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90` (`004fbc90`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void engine_ini.cpp_CIniFile_setInteger_FUN_004bda80(CIniFile* this_ptr, char* key, int value)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CIniFile*              this_ptr               storage Stack[0x4]
    1  char*                  key                    storage Stack[0x8]
    2  int                    value                  storage Stack[0xc]
```

#### `004bdb20`  —  CIniFile_setFloatValue

| | |
|---|---|
| nocturne | `engine_ini.cpp_CIniFile_setFloatValue_FUN_004bdb20` |
| nocedit  | `engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30` (`004fbd30`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl void engine_ini.cpp_CIniFile_setFloatValue_FUN_004bdb20(CIniFile* this_ptr, char* key, float value)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : void                       storage (none - void)
  Parameters:
    0  CIniFile*              this_ptr               storage Stack[0x4]
    1  char*                  key                    storage Stack[0x8]
    2  float                  value                  storage Stack[0xc]
```

### sound_sndmain.cpp

#### `00521830`  —  parseWavFile

| | |
|---|---|
| nocturne | `sound_sndmain.cpp_parseWavFile_FUN_00521830` |
| nocedit  | `sound_sndmain.cpp_parseWavFile_FUN_005a3fe0` (`005a3fe0`) |
| verdict  | STORAGE_LOST |

```
DECLARATION ALREADY CORRECT - set the storage only, change nothing else
  __cdecl int sound_sndmain.cpp_parseWavFile_FUN_00521830(_FILE* file_handle, int* file_offset_ptr, CSfxSample* sfx_sample)

  Use Custom Storage : ON
  Calling Convention : __cdecl
  Return             : int                        storage EAX
  Parameters:
    0  _FILE*                 file_handle            storage Stack[0x4]
    1  int*                   file_offset_ptr        storage Stack[0x8]
    2  CSfxSample*            sfx_sample             storage Stack[0xc]
```

## Regenerating this list

```bash
python3 scripts/Python/compare_sibling_signatures.py --show 0 \
    --verdict STORAGE_LOST --verdict NO_SIGNATURE --verdict PARAMS_LOST
```

The full report, with the per-row evidence, is written to
`annotations/nocturne.exe/reports/sibling_signature_drift.txt`. When a row here is
done it drops out of that report on the next export — the report is the source of
truth for what remains; this file is just the instructions.
