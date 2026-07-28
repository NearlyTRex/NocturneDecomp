#pragma once

// Forward declarations
struct CDeformableModelInstance;
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
// Ghidra size: 0x19860 (104544 bytes)
#pragma pack(push, 1)
typedef struct CBugs {
    CEnemy base; // 0x0
    EBugsState state; // 0xbd24
    int count; // 0xbd28
    SBug bugs[400]; // 0xbd2c
    int model_count; // 0x1212c
    CKeyFramedModelInstance models[4]; // 0x12130
    float ground_heights[12][12]; // 0x12720
    struct CDemonActor* swarm_target; // 0x12960
    struct CDeformableModelInstance* deformable_model_ptr; // 0x12964
    CMatrix3x4f model_world_matrix; // 0x12968
    int lod_index; // 0x12998
    int swarm_vertex_count; // 0x1299c
    SSwarmVertex swarm_vertices[700]; // 0x129a0
    int allow_chase; // 0x19700
    int allow_swarm; // 0x19704
    char allow_chase_event[100]; // 0x19708
    char allow_swarm_event[100]; // 0x1976c
    char animate_event[100]; // 0x197d0
    CBoundingBox3D bounds; // 0x19834
    int grid_cell_x; // 0x1984c
    int grid_cell_z; // 0x19850
    float grid_origin_x; // 0x19854
    float grid_origin_z; // 0x19858
    float damage_timer; // 0x1985c
} CBugs;
#pragma pack(pop)

