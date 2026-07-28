#pragma once

// Forward declarations
struct CVector3i;
struct SMRGLPrimitiveTriangle;

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
// Ghidra size: 0xf18 (3864 bytes)
#pragma pack(push, 1)
typedef struct CBodyPart {
    CDemonActor base; // 0x0
    int render_in_background; // 0x150
    CBoundingBox3D bounding_box; // 0x154
    int vertex_count; // 0x16c
    struct CVector3i* vertices; // 0x170
    struct CVector3i* normals; // 0x174
    int tri_count; // 0x178
    struct SMRGLPrimitiveTriangle* faces; // 0x17c
    int* face_texture_indices; // 0x180
    int texture_count; // 0x184
    SMRGLTextureBasic textures[10]; // 0x188
    CVector3f initial_velocity; // 0x278
    int attached_model_count; // 0x284
    SBodyPartModel attached_models[3]; // 0x288
    int fire_count; // 0x744
    SBodyPartFire fires[2]; // 0x748
    int dont_use_normals; // 0xc98
    int transparent_geometry_flag; // 0xc9c
    int blood_type; // 0xca0
    float physics_timer; // 0xca4
    int render_alpha; // 0xca8
    int dont_pick_me_up; // 0xcac
    int fire_time_remaining; // 0xcb0
    CBox physics_box; // 0xcb4
    float ground_height; // 0xf0c
    struct CDemonActor* carried_by_actor; // 0xf10
    int is_visible; // 0xf14
} CBodyPart;
#pragma pack(pop)

