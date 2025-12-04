#pragma once

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

