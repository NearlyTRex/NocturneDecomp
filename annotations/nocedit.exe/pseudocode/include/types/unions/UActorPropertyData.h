#pragma once

// Forward declarations
struct CActorProperty;
struct CClothList;
struct CDeformableModelInstance;
struct CDemonActor;
struct CKeyFramedModelInstance;
struct CMotionController;
struct CRuleList;
struct CVector3f;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CActorPropertyActionFunc.h"
#include "types/funcdefs/CActorPropertyDisplayFunc.h"
#include "types/funcdefs/CActorPropertyFilterFunc.h"
#include "types/funcdefs/CActorPropertyValidatorFunc.h"
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
    CActorPropertyActionFunc* v_action_func_ptr;
    CActorPropertyDisplayFunc* v_display_func_ptr;
    CActorPropertyValidatorFunc* v_validator_func_ptr;
    CActorPropertyFilterFunc* v_filter_func_ptr;
    void* v_ptr;
} UActorPropertyData;

