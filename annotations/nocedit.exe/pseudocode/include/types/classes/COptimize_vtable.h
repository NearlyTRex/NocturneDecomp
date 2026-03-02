#pragma once

// Forward declarations
struct CComplexPolygon;
struct CObj;
struct COptimize;
struct CPoly;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/COptimize_addComplexPolygon.h"
#include "types/funcdefs/COptimize_cleanup.h"
#include "types/funcdefs/COptimize_findCoplanarPolygons.h"
#include "types/funcdefs/COptimize_getCoplanarAngleThreshold.h"
#include "types/funcdefs/COptimize_getCoplanarDistanceThreshold.h"
#include "types/funcdefs/COptimize_getMaxPolygonSides.h"
#include "types/funcdefs/COptimize_getWeldThreshold.h"
#include "types/funcdefs/COptimize_optimize.h"
#include "types/funcdefs/COptimize_optimizeComplex.h"
#include "types/funcdefs/COptimize_setCoplanarAngleThreshold.h"
#include "types/funcdefs/COptimize_setCoplanarDistanceThreshold.h"
#include "types/funcdefs/COptimize_setGeometry.h"
#include "types/funcdefs/COptimize_setMaxPolygonSides.h"
#include "types/funcdefs/COptimize_setWeldThreshold.h"
#include "types/funcdefs/COptimize_splitToConvex.h"

// Structure: COptimize_vtable
// Ghidra size: 0x3c (60 bytes)
typedef struct COptimize_vtable {
    COptimize_cleanup* cleanup; // 0x0
    COptimize_setWeldThreshold* setWeldThreshold; // 0x4
    COptimize_getWeldThreshold* getWeldThreshold; // 0x8
    COptimize_setCoplanarAngleThreshold* setCoplanarAngleThreshold; // 0xc
    COptimize_getCoplanarAngleThreshold* getCoplanarAngleThreshold; // 0x10
    COptimize_setCoplanarDistanceThreshold* setCoplanarDistanceThreshold; // 0x14
    COptimize_getCoplanarDistanceThreshold* getCoplanarDistanceThreshold; // 0x18
    COptimize_setMaxPolygonSides* setMaxPolygonSides; // 0x1c
    COptimize_getMaxPolygonSides* getMaxPolygonSides; // 0x20
    COptimize_setGeometry* setGeometry; // 0x24
    COptimize_optimize* optimize; // 0x28
    COptimize_optimizeComplex* optimizeComplex; // 0x2c
    COptimize_findCoplanarPolygons* findCoplanarPolygons; // 0x30
    COptimize_splitToConvex* splitToConvex; // 0x34
    COptimize_addComplexPolygon* addComplexPolygon; // 0x38
} COptimize_vtable;

