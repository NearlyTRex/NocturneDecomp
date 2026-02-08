#pragma once

// Forward declarations
struct CClothList;
struct CDeformableModelInstance;
struct CKeyFramedModelInstance;
struct CMotionController;
struct CRuleList;
struct CVector3f;

// Dependencies
#include "system/basetypes.h"
#include "types/unions/UActorPropertyCallback.h"

// Union: UActorPropertyData
typedef union UActorPropertyData {
    int* v_int_ptr;
    float* v_float_ptr;
    struct CVector3f* v_vector_ptr;
    char* v_string_ptr;
    uint* v_uint_ptr;
    struct CKeyFramedModelInstance* v_kfm_ptr;
    struct CDeformableModelInstance* v_dfm_ptr;
    struct CMotionController* v_motion_ptr;
    struct CClothList* v_clothlist_ptr;
    struct CRuleList* v_rulelist_ptr;
    UActorPropertyCallback v_callback_ptr;
    void* v_ptr;
} UActorPropertyData;

