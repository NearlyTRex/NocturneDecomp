# Complete Model File Format Table - Nocturne Game

Based on analysis of actual game files in `/home/aryie/Downloads/Nocturne/Game/Nocturne/`:

## Summary Statistics

**KFM Files (223 total):**
- 190 Text format (ASCII, version 8)
- 31 Binary format (type 0x04)
- 2 Binary format (type 0x03)
- 0 Binary format (type 0x20) ← **Not found in game!**

**DFM Files (78 total):**
- 78 Text format (ASCII, version 7)

**Other Files:**
- SKL files: Text format (skeleton definitions)
- GEO files: Binary format (type 0x04, geometry/raytrace data)
- THM files: Binary format (RGB texture/thumbnail data)
- ZTH files: Binary format (compressed Z-buffer thumbnails)
- PTH files: Text format (pathfinding data)

## Detailed Format Descriptions

| Extension | Format | Type Code | Structure | Purpose | Usage | Loaded By | Count in Game |
|-----------|--------|-----------|-----------|---------|-------|-----------|---------------|
| **.KFM** (Text) | ASCII | N/A | Version 8<br>vertexCount,polyCount,textureCount,partCount,frameCount<br>vertex list<br>polygon list<br>texture list | Keyframed model source format | **BOTH** game and editor | `CKeyFramedModel::readTextModel` (annotations/nocedit.exe/pseudocode/src/core/dmodel.cpp/CKeyFramedModel_readTextModel_FUN_00477110.cpp:12) | **190** |
| **.KFM** (Binary) | Binary | **0x04** | Type 0x04 header<br>Vertex count<br>Poly count<br>Frame count<br>Serialized geometry | Compiled keyframed model | **BOTH** game and editor | `CKeyFramedModel::readBinaryModel` (annotations/nocedit.exe/pseudocode/src/core/dmodel.cpp/CKeyFramedModel_readBinaryModel_FUN_00476f20.cpp:15) | **31** |
| **.KFM** (Binary) | Binary | **0x03** | Unknown structure (similar to 0x04?) | Unknown purpose | Game (rare) | Unknown | **2** (OGATER1.KFM, QUESTION.KFM) |
| **.KFM** (MRGL) | Binary | **0x20** | SMRGLKeyframeModel (344 bytes)<br>Keyframe filenames<br>Frame pointers | MRGL animation interpolation system | **EDITOR ONLY** | `loadAndInterpolateKeyframes` (annotations/nocedit.exe/pseudocode/src/engine/keyframe.c/loadAndInterpolateKeyframes_FUN_00501d40.c:17) | **0** ← Not found in game! |
| **.DFM** | ASCII | N/A | Version 7<br>lodCount,textureSetCount,textureCount,boneCount,partCount<br>LOD list<br>Skeleton file reference<br>Part list | Deformable model (skinned/skeletal) | **BOTH** game and editor | Unknown (likely similar to KFM text loading) | **78** |
| **.SKL** | ASCII | N/A | Version 3<br>boneCount,frameCount<br>Bone hierarchy<br>Animation keyframes | Skeleton/bone animation data | **BOTH** game and editor | Unknown (referenced by DFM files) | Many in DATA/ |
| **.GEO** | Binary | **0x04** | Type 0x04 header<br>Raytrace geometry<br>Collision data<br>Spatial subdivision | Level geometry and collision | Game runtime | `CDemonRaytrace::loadAndSyncWithGeoFile` (annotations/nocedit.exe/pseudocode/src/core/dtrace.cpp/CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0.cpp:15) | 2 in DATA/ (CASTLE.GEO, SPEAK.GEO) |
| **.THM** | Binary | N/A | RGB color data (4 bytes/pixel)<br>768000 pixels<br>Various dimensions (1000x768, 1024x750, etc) | Thumbnail/texture atlas for set | Game runtime | Unknown (loaded with sets) | 2 in DATA/ (CASTLE.THM, SPEAK.THM) |
| **.ZTH** | Binary | N/A | Z-buffer/depth thumbnail data<br>Compressed or indexed format<br>CZThumb structure (40 bytes) | Compressed Z-buffer for set culling/LOD | Game runtime | `saveZBufferTable` (annotations/nocedit.exe/pseudocode/src/core/setdir.cpp/saveZBufferTable_2_FUN_005751d0.cpp) | 2 in DATA/ (CASTLE.ZTH, SPEAK.ZTH) |
| **.PTH** | ASCII | N/A | Pathfinding waypoint data | AI navigation paths | Game runtime | Unknown | Multiple in DATA/ |

## Key Findings

### 1. Text KFM Files ARE Used by Game!

Contrary to what the code analysis suggested, **text .KFM files are the DOMINANT format** in the actual game (190 text vs 31 binary).

The code check we found:
```c
if (toupper(filename[extension+1]) == 'T') {
    displayErrorAndQuit("modelStruct not supported");
}
```

This rejects files with `.TXT`, `.TMP`, etc. extensions - NOT `.KFM` files! The check is on the **second character** of the extension (position [extension+1]), which would be 'T' in ".TXT" but 'K' in ".KFM".

### 2. SMRGLKeyframeModel (Type 0x20) is Editor-Only

**Type 0x20 files do not exist in the shipped game.** This system was analyzed from the editor executable (nocedit.exe) and represents development/import functionality for MRGL-based animations. The game itself uses CKeyFramedModel exclusively.

### 3. Two Model Systems Coexist

| System | Files | Purpose |
|--------|-------|---------|
| **CKeyFramedModel** | .KFM (text/binary type 0x04) | Static and keyframe-animated models |
| **Deformable Models** | .DFM (text) + .SKL (text) | Skeletal/skinned character models |
| **SMRGLKeyframeModel** | ⚠️ Type 0x20 (editor only) | MRGL animation interpolation (not in game) |

### 4. Binary Type Codes

From getMRGLSize_FUN_00528700.c:42-44 and game file analysis:

- **Type 0x03**: Unknown (2 files: OGATER1.KFM, QUESTION.KFM) - needs investigation
- **Type 0x04**: Standard model/geometry data (31 KFM files, all .GEO files)
- **Type 0x20**: MRGL keyframe animation (0 files in game - editor only!)

### 5. Processing Pipeline

**Static Models (KFM):**
1. Load .KFM (text or binary)
2. Parse into CKeyFramedModel (22232 bytes)
3. Upload textures to renderer
4. Submit geometry to rendering pipeline

**Animated Characters (DFM):**
1. Load .DFM (text) - model geometry with LODs
2. Load .SKL (text) - skeleton hierarchy and animations
3. Bind mesh to skeleton
4. Deform vertices based on bone transforms
5. Submit to renderer

**Level Geometry:**
1. Load .GEO (binary type 0x04)
2. Build raytrace acceleration structures
3. Setup collision detection
4. Render static environment

## Resolution of Previous Confusion

### The ".T" Extension Check

The code at annotations/nocedit.exe/pseudocode/src/engine/model.c/loadModelFile_FUN_00527ec0.c:75-78:

```c
iVar4 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)pcVar5[1]);
if (iVar4 == 0x54) {  // 'T'
    pSVar2 = engine_boss_c_modelStructNotSupported_FUN_0041db80((SMRGLHeaderExtended *)filename);
    return pSVar2;
}
```

This checks `pcVar5[1]` which is the **second character of the extension**, not the first! For ".KFM", this is 'K'. For ".TXT", this is 'T'. So it **rejects .TXT files but ALLOWS .KFM files**, regardless of whether they're text or binary format!

### Type 0x20 Mystery Solved

Type 0x20 (SMRGLKeyframeModel) exists in the **editor codebase** but **not in game data**. This explains why we found extensive code for it but zero actual files. The editor has import/export functionality that the game doesn't need.

## File Locations

- **MODELS/**: All .KFM and .DFM model files
- **DATA/**: .SKL skeleton files, .GEO geometry, .PTH pathfinding, set thumbnails (.THM/.ZTH)
- **WORLD/**: .MSN mission files, .SCR script files

## Set File Trios (GEO + THM + ZTH)

Each level/set has three associated files:

| Set Name | .GEO (Geometry) | .THM (Thumbnail) | .ZTH (Z-Thumbnail) | Purpose |
|----------|-----------------|------------------|--------------------|---------|
| CASTLE | 12 MB | 3.0 MB (768000 pixels) | 1.8 MB | Castle level |
| SPEAK | Unknown | 3.0 MB (768000 pixels) | 180 KB | Speakeasy level |

**File Relationship:**
- **.GEO**: Contains 3D geometry, collision data, and spatial subdivision for raycasting
- **.THM**: RGB color thumbnail/texture atlas (4 bytes per pixel: RGB + padding)
- **.ZTH**: Compressed Z-buffer data for the set (used for culling, LOD, or occlusion)

The THM files are large uncompressed RGB bitmaps (likely 1000x768 or 1024x750) used for rendering or previewing the set. The ZTH files are much smaller compressed representations of depth information.

---

This comprehensive analysis shows that:
1. Text formats ARE used by the game extensively
2. Type 0x20 is editor-only (not in shipped game)
3. Three model systems exist: KFM (static/keyframe), DFM+SKL (skeletal), and GEO (level geometry)
4. The example_files/ directory contains files matching actual game formats
