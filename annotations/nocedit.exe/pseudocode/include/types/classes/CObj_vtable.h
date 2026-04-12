#pragma once

// Forward declarations
struct CMatrix3x3d;
struct CObj;
struct CPoly;
struct CVec;
struct CVector2d;
struct CVector3d;
struct CVert;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CObj_addPolygons.h"
#include "types/funcdefs/CObj_addVertices.h"
#include "types/funcdefs/CObj_allocatePolygons.h"
#include "types/funcdefs/CObj_allocateVertices.h"
#include "types/funcdefs/CObj_appendTo.h"
#include "types/funcdefs/CObj_clearStateFlags.h"
#include "types/funcdefs/CObj_computeBoundingBox.h"
#include "types/funcdefs/CObj_computeCoplanarAdjacency.h"
#include "types/funcdefs/CObj_containsPolygon.h"
#include "types/funcdefs/CObj_containsVertex.h"
#include "types/funcdefs/CObj_copyFrom.h"
#include "types/funcdefs/CObj_findAndRemovePolygon.h"
#include "types/funcdefs/CObj_findAndRemovePolygonsUsingVertex.h"
#include "types/funcdefs/CObj_findAndRemoveVertex.h"
#include "types/funcdefs/CObj_findCoplanarPolygon.h"
#include "types/funcdefs/CObj_findPolygonIndex.h"
#include "types/funcdefs/CObj_findVertexIndex.h"
#include "types/funcdefs/CObj_flipAllPolyNormals.h"
#include "types/funcdefs/CObj_flipPolyNormalsWithFlag.h"
#include "types/funcdefs/CObj_free.h"
#include "types/funcdefs/CObj_getPolygon.h"
#include "types/funcdefs/CObj_getVertex.h"
#include "types/funcdefs/CObj_hasPolyWithMaterial.h"
#include "types/funcdefs/CObj_init.h"
#include "types/funcdefs/CObj_isClosedManifold.h"
#include "types/funcdefs/CObj_isValid.h"
#include "types/funcdefs/CObj_projectAllPlanarUVs.h"
#include "types/funcdefs/CObj_projectPlanarUVsWithFlag.h"
#include "types/funcdefs/CObj_removeInvalidPolygons.h"
#include "types/funcdefs/CObj_removePolygon.h"
#include "types/funcdefs/CObj_removePolygonsAtVertex.h"
#include "types/funcdefs/CObj_removePolygonsByFlag.h"
#include "types/funcdefs/CObj_removeTJunctions.h"
#include "types/funcdefs/CObj_removeUnusedVertices.h"
#include "types/funcdefs/CObj_removeVertex.h"
#include "types/funcdefs/CObj_removeVerticesByFlag.h"
#include "types/funcdefs/CObj_reset.h"
#include "types/funcdefs/CObj_restoreVertexPositions.h"
#include "types/funcdefs/CObj_restoreVertexPositionsWithFlag.h"
#include "types/funcdefs/CObj_saveVertexPositions.h"
#include "types/funcdefs/CObj_saveVertexPositionsWithFlag.h"
#include "types/funcdefs/CObj_scale.h"
#include "types/funcdefs/CObj_scaleMasked.h"
#include "types/funcdefs/CObj_setAllPolyMaterialIds.h"
#include "types/funcdefs/CObj_setPolyMaterialIdsWithFlag.h"
#include "types/funcdefs/CObj_setStateFlagFromAttrib.h"
#include "types/funcdefs/CObj_setStateFlagIfCondition.h"
#include "types/funcdefs/CObj_setStateFlagToAttrib.h"
#include "types/funcdefs/CObj_setStateFlags.h"
#include "types/funcdefs/CObj_transform.h"
#include "types/funcdefs/CObj_transformMasked.h"
#include "types/funcdefs/CObj_translate.h"
#include "types/funcdefs/CObj_translateMasked.h"
#include "types/funcdefs/CObj_updatePolyFlagsFromVerts.h"
#include "types/funcdefs/CObj_weldVertices.h"

// Structure: CObj_vtable
// Ghidra size: 0xdc (220 bytes)
#pragma pack(push, 1)
typedef struct CObj_vtable {
    CObj_reset* reset; // 0x0
    CObj_isValid* isValid; // 0x4
    CObj_init* init; // 0x8
    CObj_allocatePolygons* allocatePolygons; // 0xc
    CObj_addPolygons* addPolygons; // 0x10
    CObj_allocateVertices* allocateVertices; // 0x14
    CObj_addVertices* addVertices; // 0x18
    CObj_free* free; // 0x1c
    CObj_copyFrom* copyFrom; // 0x20
    CObj_appendTo* appendTo; // 0x24
    CObj_translate* translate; // 0x28
    CObj_translateMasked* translateMasked; // 0x2c
    CObj_transform* transform; // 0x30
    CObj_transformMasked* transformMasked; // 0x34
    CObj_scale* scale; // 0x38
    CObj_scaleMasked* scaleMasked; // 0x3c
    CObj_removePolygon* removePolygon; // 0x40
    CObj_findAndRemovePolygon* findAndRemovePolygon; // 0x44
    CObj_removePolygonsAtVertex* removePolygonsAtVertex; // 0x48
    CObj_findAndRemovePolygonsUsingVertex* findAndRemovePolygonsUsingVertex; // 0x4c
    CObj_removePolygonsByFlag* removePolygonsByFlag; // 0x50
    CObj_removeVertex* removeVertex; // 0x54
    CObj_findAndRemoveVertex* findAndRemoveVertex; // 0x58
    CObj_removeVerticesByFlag* removeVerticesByFlag; // 0x5c
    CObj_findVertexIndex* findVertexIndex; // 0x60
    CObj_getVertex* getVertex; // 0x64
    CObj_containsVertex* containsVertex; // 0x68
    CObj_findPolygonIndex* findPolygonIndex; // 0x6c
    CObj_getPolygon* getPolygon; // 0x70
    CObj_containsPolygon* containsPolygon; // 0x74
    CObj_setStateFlags* setStateFlags; // 0x78
    CObj_setStateFlagIfCondition* setStateFlagIfCondition; // 0x7c
    CObj_setStateFlagFromAttrib* setStateFlagFromAttrib; // 0x80
    CObj_clearStateFlags* clearStateFlags; // 0x84
    CObj_setStateFlagToAttrib* setStateFlagToAttrib; // 0x88
    CObj_updatePolyFlagsFromVerts* updatePolyFlagsFromVerts; // 0x8c
    CObj_saveVertexPositions* saveVertexPositions; // 0x90
    CObj_saveVertexPositionsWithFlag* saveVertexPositionsWithFlag; // 0x94
    CObj_restoreVertexPositions* restoreVertexPositions; // 0x98
    CObj_restoreVertexPositionsWithFlag* restoreVertexPositionsWithFlag; // 0x9c
    CObj_computeCoplanarAdjacency* computeCoplanarAdjacency; // 0xa0
    CObj_flipAllPolyNormals* flipAllPolyNormals; // 0xa4
    CObj_flipPolyNormalsWithFlag* flipPolyNormalsWithFlag; // 0xa8
    CObj_projectAllPlanarUVs* projectAllPlanarUVs; // 0xac
    CObj_projectPlanarUVsWithFlag* projectPlanarUVsWithFlag; // 0xb0
    CObj_setAllPolyMaterialIds* setAllPolyMaterialIds; // 0xb4
    CObj_setPolyMaterialIdsWithFlag* setPolyMaterialIdsWithFlag; // 0xb8
    CObj_computeBoundingBox* computeBoundingBox; // 0xbc
    CObj_isClosedManifold* isClosedManifold; // 0xc0
    CObj_hasPolyWithMaterial* hasPolyWithMaterial; // 0xc4
    CObj_weldVertices* weldVertices; // 0xc8
    CObj_removeUnusedVertices* removeUnusedVertices; // 0xcc
    CObj_removeInvalidPolygons* removeInvalidPolygons; // 0xd0
    CObj_removeTJunctions* removeTJunctions; // 0xd4
    CObj_findCoplanarPolygon* findCoplanarPolygon; // 0xd8
} CObj_vtable;
#pragma pack(pop)

