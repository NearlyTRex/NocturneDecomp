#pragma once

// Forward declarations
struct CMatrix3x3d;
struct CObj;
struct CPoly;
struct CPolyIntersectResult;
struct CVec;
struct CVector2d;
struct CVector3d;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CPoly_allVerticesHaveAttribFlags.h"
#include "types/funcdefs/CPoly_clearVertexStateFlags.h"
#include "types/funcdefs/CPoly_computeNormal.h"
#include "types/funcdefs/CPoly_computePlaneDistance.h"
#include "types/funcdefs/CPoly_containsPoint2D.h"
#include "types/funcdefs/CPoly_copyFrom.h"
#include "types/funcdefs/CPoly_flipNormal.h"
#include "types/funcdefs/CPoly_getBounds.h"
#include "types/funcdefs/CPoly_getCentroid.h"
#include "types/funcdefs/CPoly_getMaterialId.h"
#include "types/funcdefs/CPoly_hasCentroidIntersection.h"
#include "types/funcdefs/CPoly_hasColinearEdge.h"
#include "types/funcdefs/CPoly_hasEdgeIntersection.h"
#include "types/funcdefs/CPoly_hasSeamlessEdge.h"
#include "types/funcdefs/CPoly_hasSharedEdge.h"
#include "types/funcdefs/CPoly_init.h"
#include "types/funcdefs/CPoly_intersectPoly.h"
#include "types/funcdefs/CPoly_isValid.h"
#include "types/funcdefs/CPoly_projectUVPlanar.h"
#include "types/funcdefs/CPoly_rayIntersect.h"
#include "types/funcdefs/CPoly_rayPlaneIntersect.h"
#include "types/funcdefs/CPoly_restoreVertexPositions.h"
#include "types/funcdefs/CPoly_restoreVertexPositionsWithFlag.h"
#include "types/funcdefs/CPoly_saveVertexPositions.h"
#include "types/funcdefs/CPoly_saveVertexPositionsWithFlag.h"
#include "types/funcdefs/CPoly_scale.h"
#include "types/funcdefs/CPoly_setMaterialId.h"
#include "types/funcdefs/CPoly_setVertexAttribFlags.h"
#include "types/funcdefs/CPoly_setVertexStateFlagFromAttrib.h"
#include "types/funcdefs/CPoly_setVertexStateFlagIfCondition.h"
#include "types/funcdefs/CPoly_setVertexStateFlagToAttrib.h"
#include "types/funcdefs/CPoly_setVertexStateFlags.h"
#include "types/funcdefs/CPoly_toggleVertexAttribFlags.h"
#include "types/funcdefs/CPoly_transform.h"
#include "types/funcdefs/CPoly_translate.h"

// Structure: CPoly_vtable
// Ghidra size: 0x8c (140 bytes)
typedef struct CPoly_vtable {
    CPoly_init* init; // 0x0
    CPoly_copyFrom* copyFrom; // 0x4
    CPoly_translate* translate; // 0x8
    CPoly_scale* scale; // 0xc
    CPoly_transform* transform; // 0x10
    CPoly_allVerticesHaveAttribFlags* allVerticesHaveFlags; // 0x14
    CPoly_setVertexAttribFlags* setVertexAttribFlags; // 0x18
    CPoly_toggleVertexAttribFlags* toggleVertexAttribFlags; // 0x1c
    CPoly_setVertexStateFlags* setVertexStateFlags; // 0x20
    CPoly_setVertexStateFlagIfCondition* setVertexStateFlagIfCondition; // 0x24
    CPoly_setVertexStateFlagFromAttrib* setVertexStateFlagFromAttrib; // 0x28
    CPoly_clearVertexStateFlags* clearVertexStateFlags; // 0x2c
    CPoly_setVertexStateFlagToAttrib* setVertexStateFlagToAttrib; // 0x30
    CPoly_saveVertexPositions* saveVertexPositions; // 0x34
    CPoly_saveVertexPositionsWithFlag* saveVertexPositionsWithFlag; // 0x38
    CPoly_restoreVertexPositions* restoreVertexPositions; // 0x3c
    CPoly_restoreVertexPositionsWithFlag* restoreVertexPositionsWithFlag; // 0x40
    CPoly_computeNormal* computeNormal; // 0x44
    CPoly_flipNormal* flipNormal; // 0x48
    CPoly_projectUVPlanar* projectUVPlanar; // 0x4c
    CPoly_setMaterialId* setMaterialId; // 0x50
    CPoly_getMaterialId* getMaterialId; // 0x54
    CPoly_getBounds* getBounds; // 0x58
    CPoly_intersectPoly* intersectPoly; // 0x5c
    CPoly_rayIntersect* rayIntersect; // 0x60
    CPoly_containsPoint2D* containsPoint2D; // 0x64
    CPoly_rayPlaneIntersect* rayPlaneIntersect; // 0x68
    CPoly_getCentroid* getCentroid; // 0x6c
    CPoly_hasSharedEdge* hasSharedEdge; // 0x70
    CPoly_hasSeamlessEdge* hasSeamlessEdge; // 0x74
    CPoly_hasCentroidIntersection* hasCentroidIntersection; // 0x78
    CPoly_hasColinearEdge* hasColinearEdge; // 0x7c
    CPoly_hasEdgeIntersection* hasEdgeIntersection; // 0x80
    CPoly_computePlaneDistance* computePlaneDistance; // 0x84
    CPoly_isValid* isValid; // 0x88
} CPoly_vtable;

