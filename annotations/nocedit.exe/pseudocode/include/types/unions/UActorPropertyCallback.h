#pragma once

// Forward declarations
struct CActorProperty;
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CActorPropertyActionFunc.h"
#include "types/funcdefs/CActorPropertyDisplayFunc.h"
#include "types/funcdefs/CActorPropertyFilterFunc.h"
#include "types/funcdefs/CActorPropertyValidatorFunc.h"

// Union: UActorPropertyCallback
typedef union UActorPropertyCallback {
    CActorPropertyActionFunc* v_action_func;
    CActorPropertyDisplayFunc* v_display_func;
    CActorPropertyValidatorFunc* v_validator_func;
    CActorPropertyFilterFunc* v_filter_func;
} UActorPropertyCallback;

