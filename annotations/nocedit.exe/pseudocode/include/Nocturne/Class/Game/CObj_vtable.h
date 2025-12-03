#pragma once

// Structure: CObj_vtable
// Ghidra size: 0xdc (220 bytes)
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
    void* field_160; // 0xa0
    void* field_164; // 0xa4
    void* field_168; // 0xa8
    void* field_172; // 0xac
    void* field_176; // 0xb0
    void* field_180; // 0xb4
    void* field_184; // 0xb8
    void* field_188; // 0xbc
    void* field_192; // 0xc0
    void* field_196; // 0xc4
    void* field_200; // 0xc8
    void* field_204; // 0xcc
    void* field_208; // 0xd0
    void* field_212; // 0xd4
    void* field_216; // 0xd8
} CObj_vtable;

