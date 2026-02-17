#pragma once

// Forward declarations
struct CVector3i;
struct SInputFace;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CBox.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SBodyPartFire.h"
#include "types/structs/SBodyPartModel.h"
#include "types/structs/SMRGLTextureBasic.h"

// Structure: CBodyPart
// Ghidra size: 0xf30 (3888 bytes)
typedef struct CBodyPart {
    CDemonActor base; // 0x0
    int render_in_background; // 0x158
    CBoundingBox3D bounding_box; // 0x15c
    int vertex_count; // 0x174
    struct CVector3i* vertices; // 0x178
    struct CVector3i* normals; // 0x17c
    int tri_count; // 0x180
    struct SInputFace* faces; // 0x184
    int* face_texture_indices; // 0x188
    int texture_count; // 0x18c
    SMRGLTextureBasic textures[10]; // 0x190
    CVector3f initial_velocity; // 0x280
    int attached_model_count; // 0x28c
    SBodyPartModel attached_models[3]; // 0x290
    int fire_count; // 0x74c
    SBodyPartFire fires[2]; // 0x750
    int dont_use_normals; // 0xcb0
    int transparent_geometry_flag; // 0xcb4
    int blood_type; // 0xcb8
    float physics_timer; // 0xcbc
    int render_alpha; // 0xcc0
    int dont_pick_me_up; // 0xcc4
    int fire_time_remaining; // 0xcc8
    CBox physics_box; // 0xccc
    float ground_height; // 0xf24
    struct CDemonActor* carried_by_actor; // 0xf28
    int is_visible; // 0xf2c
} CBodyPart;

