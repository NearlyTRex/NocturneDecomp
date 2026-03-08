#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/enums/EBugsState.h"
#include "types/structs/SBug.h"
#include "types/structs/SSwarmVertex.h"

// Structure: CBugs
// Ghidra size: 0x199f8 (104952 bytes)
typedef struct CBugs {
    CEnemy base; // 0x0
    EBugsState state; // 0xbebc
    int count; // 0xbec0
    SBug bugs[400]; // 0xbec4
    int model_count; // 0x122c4
    CKeyFramedModelInstance models[4]; // 0x122c8
    float ground_heights[12][12]; // 0x128b8
    struct CDemonActor* swarm_target; // 0x12af8
    struct CKeyFramedModelInstance* deformable_model_ptr; // 0x12afc
    CMatrix3x4f model_world_matrix; // 0x12b00
    int lod_index; // 0x12b30
    int swarm_vertex_count; // 0x12b34
    SSwarmVertex swarm_vertices[700]; // 0x12b38
    int allow_chase; // 0x19898
    int allow_swarm; // 0x1989c
    char allow_chase_event[100]; // 0x198a0
    char allow_swarm_event[100]; // 0x19904
    char animate_event[100]; // 0x19968
    CBoundingBox3D bounds; // 0x199cc
    int grid_cell_x; // 0x199e4
    int grid_cell_z; // 0x199e8
    float grid_origin_x; // 0x199ec
    float grid_origin_z; // 0x199f0
    float damage_timer; // 0x199f4
} CBugs;

