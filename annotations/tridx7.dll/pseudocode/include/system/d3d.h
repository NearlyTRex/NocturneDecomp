#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/ddraw.h"
#include "system/unknwn.h"
#include "system/winnt.h"

// =============================================================================
// D3D - System Header
// =============================================================================

// Forward declarations
struct IDirect3DDevice3;
struct IDirect3DMaterial3;
struct IDirect3DTexture2;
struct IDirect3DViewport3;
struct IDirectDrawSurface;
struct IUnknown;

// Typedef: D3DCOLOR
// Unsigned Integer (compiler-specific size)
typedef DWORD D3DCOLOR;

// Typedef: D3DLIGHTSTATETYPE
// Unsigned Integer (compiler-specific size)
typedef DWORD D3DLIGHTSTATETYPE;

// Typedef: D3DMATERIALHANDLE
// Unsigned Integer (compiler-specific size)
typedef DWORD D3DMATERIALHANDLE;

// Typedef: D3DPRIMITIVETYPE
// Unsigned Integer (compiler-specific size)
typedef DWORD D3DPRIMITIVETYPE;

// Structure: D3DRECT
typedef struct D3DRECT {
    LONG x1;
    LONG y1;
    LONG x2;
    LONG y2;
} D3DRECT;

// Typedef: D3DRENDERSTATETYPE
// Unsigned Integer (compiler-specific size)
typedef DWORD D3DRENDERSTATETYPE;

// Typedef: D3DTEXTUREHANDLE
// Unsigned Integer (compiler-specific size)
typedef DWORD D3DTEXTUREHANDLE;

// Typedef: D3DTEXTURESTAGESTATETYPE
// Unsigned Integer (compiler-specific size)
typedef DWORD D3DTEXTURESTAGESTATETYPE;

// Typedef: D3DTRANSFORMSTATETYPE
// Unsigned Integer (compiler-specific size)
typedef DWORD D3DTRANSFORMSTATETYPE;

// Typedef: D3DVALUE
// Compiler-defined 'float' IEEE 754 floating-point type (32-bit / 4-byte format, aligned-length is 4-bytes)
typedef float D3DVALUE;

// Structure: D3DCOLORVALUE
typedef struct D3DCOLORVALUE {
    D3DVALUE r;
    D3DVALUE g;
    D3DVALUE b;
    D3DVALUE a;
} D3DCOLORVALUE;

// Structure: D3DLVERTEX
typedef struct D3DLVERTEX {
    D3DVALUE x;
    D3DVALUE y;
    D3DVALUE z;
    DWORD dwReserved;
    D3DCOLOR color;
    D3DCOLOR specular;
    D3DVALUE tu;
    D3DVALUE tv;
} D3DLVERTEX;

// Structure: D3DMATERIAL
typedef struct D3DMATERIAL {
    DWORD dwSize;
    D3DCOLORVALUE diffuse;
    D3DCOLORVALUE ambient;
    D3DCOLORVALUE specular;
    D3DCOLORVALUE emissive;
    D3DVALUE power;
    D3DMATERIALHANDLE hTexture;
    DWORD dwRampSize;
} D3DMATERIAL;

// Structure: D3DMATRIX
typedef struct D3DMATRIX {
    D3DVALUE _11;
    D3DVALUE _12;
    D3DVALUE _13;
    D3DVALUE _14;
    D3DVALUE _21;
    D3DVALUE _22;
    D3DVALUE _23;
    D3DVALUE _24;
    D3DVALUE _31;
    D3DVALUE _32;
    D3DVALUE _33;
    D3DVALUE _34;
    D3DVALUE _41;
    D3DVALUE _42;
    D3DVALUE _43;
    D3DVALUE _44;
} D3DMATRIX;

// Structure: D3DTLVERTEX
typedef struct D3DTLVERTEX {
    D3DVALUE sx;
    D3DVALUE sy;
    D3DVALUE sz;
    D3DVALUE rhw;
    D3DCOLOR color;
    D3DCOLOR specular;
    D3DVALUE tu;
    D3DVALUE tv;
} D3DTLVERTEX;

// Structure: D3DVECTOR
typedef struct D3DVECTOR {
    D3DVALUE x;
    D3DVALUE y;
    D3DVALUE z;
} D3DVECTOR;

// Structure: D3DLIGHT2
typedef struct D3DLIGHT2 {
    DWORD dwSize;
    DWORD dltType;
    D3DCOLORVALUE dcvColor;
    D3DVECTOR dvPosition;
    D3DVECTOR dvDirection;
    D3DVALUE dvRange;
    D3DVALUE dvFalloff;
    D3DVALUE dvAttenuation0;
    D3DVALUE dvAttenuation1;
    D3DVALUE dvAttenuation2;
    D3DVALUE dvTheta;
    D3DVALUE dvPhi;
    DWORD dwFlags;
} D3DLIGHT2;

// Structure: D3DVERTEX
typedef struct D3DVERTEX {
    D3DVALUE x;
    D3DVALUE y;
    D3DVALUE z;
    D3DVALUE nx;
    D3DVALUE ny;
    D3DVALUE nz;
    D3DVALUE tu;
    D3DVALUE tv;
} D3DVERTEX;

// Typedef: D3DVERTEXTYPE
// Unsigned Integer (compiler-specific size)
typedef DWORD D3DVERTEXTYPE;

// Structure: D3DVIEWPORT
typedef struct D3DVIEWPORT {
    DWORD dwSize;
    DWORD dwX;
    DWORD dwY;
    DWORD dwWidth;
    DWORD dwHeight;
    D3DVALUE dvScaleX;
    D3DVALUE dvScaleY;
    D3DVALUE dvMaxX;
    D3DVALUE dvMaxY;
    D3DVALUE dvMinZ;
    D3DVALUE dvMaxZ;
} D3DVIEWPORT;

// Structure: D3DVIEWPORT2
typedef struct D3DVIEWPORT2 {
    DWORD dwSize;
    DWORD dwX;
    DWORD dwY;
    DWORD dwWidth;
    DWORD dwHeight;
    D3DVALUE dvClipX;
    D3DVALUE dvClipY;
    D3DVALUE dvClipWidth;
    D3DVALUE dvClipHeight;
    D3DVALUE dvMinZ;
    D3DVALUE dvMaxZ;
} D3DVIEWPORT2;

// Structure: IDirect3D3
typedef struct IDirect3D3 {
    struct IDirect3D3_vtable* vtable;
} IDirect3D3;

// Function Definition: IDirect3D3_CreateDevice
typedef HRESULT IDirect3D3_CreateDevice(struct IDirect3D3* this_ptr, GUID* guid, struct IDirectDrawSurface* surface, struct IDirect3DDevice3** device, struct IUnknown* outer);

// Function Definition: IDirect3D3_CreateLight
typedef HRESULT IDirect3D3_CreateLight(struct IDirect3D3* this_ptr, struct IUnknown** light, struct IUnknown* outer);

// Function Definition: IDirect3D3_CreateMaterial
typedef HRESULT IDirect3D3_CreateMaterial(struct IDirect3D3* this_ptr, struct IDirect3DMaterial3** material, struct IUnknown* outer);

// Function Definition: IDirect3D3_CreateVertexBuffer
typedef HRESULT IDirect3D3_CreateVertexBuffer(struct IDirect3D3* this_ptr, void* desc, struct IUnknown** vertex_buffer, DWORD flags, struct IUnknown* outer);

// Function Definition: IDirect3D3_CreateViewport
typedef HRESULT IDirect3D3_CreateViewport(struct IDirect3D3* this_ptr, struct IDirect3DViewport3** viewport, struct IUnknown* outer);

// Function Definition: IDirect3D3_EnumDevices
typedef HRESULT IDirect3D3_EnumDevices(struct IDirect3D3* this_ptr, void* callback, void* context);

// Function Definition: IDirect3D3_EnumZBufferFormats
typedef HRESULT IDirect3D3_EnumZBufferFormats(struct IDirect3D3* this_ptr, GUID* guid, void* callback, void* context);

// Function Definition: IDirect3D3_EvictManagedTextures
typedef HRESULT IDirect3D3_EvictManagedTextures(struct IDirect3D3* this_ptr);

// Function Definition: IDirect3D3_FindDevice
typedef HRESULT IDirect3D3_FindDevice(struct IDirect3D3* this_ptr, void* find_data, void* find_result);

// Structure: IDirect3D3_vtable
#pragma pack(push, 1)
typedef struct IDirect3D3_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
    IDirect3D3_EnumDevices* EnumDevices;
    IDirect3D3_CreateLight* CreateLight;
    IDirect3D3_CreateMaterial* CreateMaterial;
    IDirect3D3_CreateViewport* CreateViewport;
    IDirect3D3_FindDevice* FindDevice;
    IDirect3D3_CreateDevice* CreateDevice;
    IDirect3D3_CreateVertexBuffer* CreateVertexBuffer;
    IDirect3D3_EnumZBufferFormats* EnumZBufferFormats;
    IDirect3D3_EvictManagedTextures* EvictManagedTextures;
} IDirect3D3_vtable;
#pragma pack(pop)

// Structure: IDirect3DDevice3
typedef struct IDirect3DDevice3 {
    struct IDirect3DDevice3_vtable* vtable;
} IDirect3DDevice3;

// Function Definition: IDirect3DDevice3_AddViewport
typedef HRESULT IDirect3DDevice3_AddViewport(struct IDirect3DDevice3* this_ptr, struct IDirect3DViewport3* viewport);

// Function Definition: IDirect3DDevice3_Begin
typedef HRESULT IDirect3DDevice3_Begin(struct IDirect3DDevice3* this_ptr, D3DPRIMITIVETYPE primitive_type, D3DVERTEXTYPE vertex_type, DWORD flags);

// Function Definition: IDirect3DDevice3_BeginIndexed
typedef HRESULT IDirect3DDevice3_BeginIndexed(struct IDirect3DDevice3* this_ptr, D3DPRIMITIVETYPE primitive_type, D3DVERTEXTYPE vertex_type, void* vertices, DWORD vertex_count, DWORD flags);

// Function Definition: IDirect3DDevice3_BeginScene
typedef HRESULT IDirect3DDevice3_BeginScene(struct IDirect3DDevice3* this_ptr);

// Function Definition: IDirect3DDevice3_ComputeSphereVisibility
typedef HRESULT IDirect3DDevice3_ComputeSphereVisibility(struct IDirect3DDevice3* this_ptr, struct D3DVECTOR* centers, D3DVALUE* radii, DWORD count, DWORD flags, DWORD* return_values);

// Function Definition: IDirect3DDevice3_DeleteViewport
typedef HRESULT IDirect3DDevice3_DeleteViewport(struct IDirect3DDevice3* this_ptr, struct IDirect3DViewport3* viewport);

// Function Definition: IDirect3DDevice3_DrawIndexedPrimitive
typedef HRESULT IDirect3DDevice3_DrawIndexedPrimitive(struct IDirect3DDevice3* this_ptr, D3DPRIMITIVETYPE primitive_type, D3DVERTEXTYPE vertex_type, void* vertices, DWORD vertex_count, WORD* indices, DWORD index_count, DWORD flags);

// Function Definition: IDirect3DDevice3_DrawIndexedPrimitiveStrided
typedef HRESULT IDirect3DDevice3_DrawIndexedPrimitiveStrided(struct IDirect3DDevice3* this_ptr, D3DPRIMITIVETYPE primitive_type, D3DVERTEXTYPE vertex_type, void* vertex_array, DWORD vertex_count, WORD* indices, DWORD index_count, DWORD flags);

// Function Definition: IDirect3DDevice3_DrawIndexedPrimitiveVB
typedef HRESULT IDirect3DDevice3_DrawIndexedPrimitiveVB(struct IDirect3DDevice3* this_ptr, D3DPRIMITIVETYPE primitive_type, struct IUnknown* vertex_buffer, WORD* indices, DWORD index_count, DWORD flags);

// Function Definition: IDirect3DDevice3_DrawPrimitive
typedef HRESULT IDirect3DDevice3_DrawPrimitive(struct IDirect3DDevice3* this_ptr, D3DPRIMITIVETYPE primitive_type, D3DVERTEXTYPE vertex_type, void* vertices, DWORD vertex_count, DWORD flags);

// Function Definition: IDirect3DDevice3_DrawPrimitiveStrided
typedef HRESULT IDirect3DDevice3_DrawPrimitiveStrided(struct IDirect3DDevice3* this_ptr, D3DPRIMITIVETYPE primitive_type, D3DVERTEXTYPE vertex_type, void* vertex_array, DWORD vertex_count, DWORD flags);

// Function Definition: IDirect3DDevice3_DrawPrimitiveVB
typedef HRESULT IDirect3DDevice3_DrawPrimitiveVB(struct IDirect3DDevice3* this_ptr, D3DPRIMITIVETYPE primitive_type, struct IUnknown* vertex_buffer, DWORD start_vertex, DWORD vertex_count, DWORD flags);

// Function Definition: IDirect3DDevice3_End
typedef HRESULT IDirect3DDevice3_End(struct IDirect3DDevice3* this_ptr, DWORD flags);

// Function Definition: IDirect3DDevice3_EndScene
typedef HRESULT IDirect3DDevice3_EndScene(struct IDirect3DDevice3* this_ptr);

// Function Definition: IDirect3DDevice3_EnumTextureFormats
typedef HRESULT IDirect3DDevice3_EnumTextureFormats(struct IDirect3DDevice3* this_ptr, void* callback, void* context);

// Function Definition: IDirect3DDevice3_GetCaps
typedef HRESULT IDirect3DDevice3_GetCaps(struct IDirect3DDevice3* this_ptr, void* hw_desc, void* hel_desc);

// Function Definition: IDirect3DDevice3_GetClipStatus
typedef HRESULT IDirect3DDevice3_GetClipStatus(struct IDirect3DDevice3* this_ptr, void* clip_status);

// Function Definition: IDirect3DDevice3_GetCurrentViewport
typedef HRESULT IDirect3DDevice3_GetCurrentViewport(struct IDirect3DDevice3* this_ptr, struct IDirect3DViewport3** viewport);

// Function Definition: IDirect3DDevice3_GetDirect3D
typedef HRESULT IDirect3DDevice3_GetDirect3D(struct IDirect3DDevice3* this_ptr, struct IDirect3D3** d3d);

// Function Definition: IDirect3DDevice3_GetLightState
typedef HRESULT IDirect3DDevice3_GetLightState(struct IDirect3DDevice3* this_ptr, D3DLIGHTSTATETYPE state, DWORD* value);

// Function Definition: IDirect3DDevice3_GetRenderState
typedef HRESULT IDirect3DDevice3_GetRenderState(struct IDirect3DDevice3* this_ptr, D3DRENDERSTATETYPE state, DWORD* value);

// Function Definition: IDirect3DDevice3_GetRenderTarget
typedef HRESULT IDirect3DDevice3_GetRenderTarget(struct IDirect3DDevice3* this_ptr, struct IDirectDrawSurface** surface);

// Function Definition: IDirect3DDevice3_GetStats
typedef HRESULT IDirect3DDevice3_GetStats(struct IDirect3DDevice3* this_ptr, void* stats);

// Function Definition: IDirect3DDevice3_GetTexture
typedef HRESULT IDirect3DDevice3_GetTexture(struct IDirect3DDevice3* this_ptr, DWORD stage, struct IDirect3DTexture2** texture);

// Function Definition: IDirect3DDevice3_GetTextureStageState
typedef HRESULT IDirect3DDevice3_GetTextureStageState(struct IDirect3DDevice3* this_ptr, DWORD stage, D3DTEXTURESTAGESTATETYPE state, DWORD* value);

// Function Definition: IDirect3DDevice3_GetTransform
typedef HRESULT IDirect3DDevice3_GetTransform(struct IDirect3DDevice3* this_ptr, D3DTRANSFORMSTATETYPE transform_type, struct D3DMATRIX* matrix);

// Function Definition: IDirect3DDevice3_Index
typedef HRESULT IDirect3DDevice3_Index(struct IDirect3DDevice3* this_ptr, WORD vertex_index);

// Function Definition: IDirect3DDevice3_MultiplyTransform
typedef HRESULT IDirect3DDevice3_MultiplyTransform(struct IDirect3DDevice3* this_ptr, D3DTRANSFORMSTATETYPE transform_type, struct D3DMATRIX* matrix);

// Function Definition: IDirect3DDevice3_NextViewport
typedef HRESULT IDirect3DDevice3_NextViewport(struct IDirect3DDevice3* this_ptr, struct IDirect3DViewport3* ref_viewport, struct IDirect3DViewport3** next_viewport, DWORD flags);

// Function Definition: IDirect3DDevice3_SetClipStatus
typedef HRESULT IDirect3DDevice3_SetClipStatus(struct IDirect3DDevice3* this_ptr, void* clip_status);

// Function Definition: IDirect3DDevice3_SetCurrentViewport
typedef HRESULT IDirect3DDevice3_SetCurrentViewport(struct IDirect3DDevice3* this_ptr, struct IDirect3DViewport3* viewport);

// Function Definition: IDirect3DDevice3_SetLightState
typedef HRESULT IDirect3DDevice3_SetLightState(struct IDirect3DDevice3* this_ptr, D3DLIGHTSTATETYPE state, DWORD value);

// Function Definition: IDirect3DDevice3_SetRenderState
typedef HRESULT IDirect3DDevice3_SetRenderState(struct IDirect3DDevice3* this_ptr, D3DRENDERSTATETYPE state, DWORD value);

// Function Definition: IDirect3DDevice3_SetRenderTarget
typedef HRESULT IDirect3DDevice3_SetRenderTarget(struct IDirect3DDevice3* this_ptr, struct IDirectDrawSurface* surface, DWORD flags);

// Function Definition: IDirect3DDevice3_SetTexture
typedef HRESULT IDirect3DDevice3_SetTexture(struct IDirect3DDevice3* this_ptr, DWORD stage, struct IDirect3DTexture2* texture);

// Function Definition: IDirect3DDevice3_SetTextureStageState
typedef HRESULT IDirect3DDevice3_SetTextureStageState(struct IDirect3DDevice3* this_ptr, DWORD stage, D3DTEXTURESTAGESTATETYPE state, DWORD value);

// Function Definition: IDirect3DDevice3_SetTransform
typedef HRESULT IDirect3DDevice3_SetTransform(struct IDirect3DDevice3* this_ptr, D3DTRANSFORMSTATETYPE transform_type, struct D3DMATRIX* matrix);

// Function Definition: IDirect3DDevice3_ValidateDevice
typedef HRESULT IDirect3DDevice3_ValidateDevice(struct IDirect3DDevice3* this_ptr, DWORD* pass_count);

// Function Definition: IDirect3DDevice3_Vertex
typedef HRESULT IDirect3DDevice3_Vertex(struct IDirect3DDevice3* this_ptr, void* vertex);

// Structure: IDirect3DDevice3_vtable
#pragma pack(push, 1)
typedef struct IDirect3DDevice3_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
    IDirect3DDevice3_GetCaps* GetCaps;
    IDirect3DDevice3_GetStats* GetStats;
    IDirect3DDevice3_AddViewport* AddViewport;
    IDirect3DDevice3_DeleteViewport* DeleteViewport;
    IDirect3DDevice3_NextViewport* NextViewport;
    IDirect3DDevice3_EnumTextureFormats* EnumTextureFormats;
    IDirect3DDevice3_BeginScene* BeginScene;
    IDirect3DDevice3_EndScene* EndScene;
    IDirect3DDevice3_GetDirect3D* GetDirect3D;
    IDirect3DDevice3_SetCurrentViewport* SetCurrentViewport;
    IDirect3DDevice3_GetCurrentViewport* GetCurrentViewport;
    IDirect3DDevice3_SetRenderTarget* SetRenderTarget;
    IDirect3DDevice3_GetRenderTarget* GetRenderTarget;
    IDirect3DDevice3_Begin* Begin;
    IDirect3DDevice3_BeginIndexed* BeginIndexed;
    IDirect3DDevice3_Vertex* Vertex;
    IDirect3DDevice3_Index* Index;
    IDirect3DDevice3_End* End;
    IDirect3DDevice3_GetRenderState* GetRenderState;
    IDirect3DDevice3_SetRenderState* SetRenderState;
    IDirect3DDevice3_GetLightState* GetLightState;
    IDirect3DDevice3_SetLightState* SetLightState;
    IDirect3DDevice3_SetTransform* SetTransform;
    IDirect3DDevice3_GetTransform* GetTransform;
    IDirect3DDevice3_MultiplyTransform* MultiplyTransform;
    IDirect3DDevice3_DrawPrimitive* DrawPrimitive;
    IDirect3DDevice3_DrawIndexedPrimitive* DrawIndexedPrimitive;
    IDirect3DDevice3_SetClipStatus* SetClipStatus;
    IDirect3DDevice3_GetClipStatus* GetClipStatus;
    IDirect3DDevice3_DrawPrimitiveStrided* DrawPrimitiveStrided;
    IDirect3DDevice3_DrawIndexedPrimitiveStrided* DrawIndexedPrimitiveStrided;
    IDirect3DDevice3_DrawPrimitiveVB* DrawPrimitiveVB;
    IDirect3DDevice3_DrawIndexedPrimitiveVB* DrawIndexedPrimitiveVB;
    IDirect3DDevice3_ComputeSphereVisibility* ComputeSphereVisibility;
    IDirect3DDevice3_GetTexture* GetTexture;
    IDirect3DDevice3_SetTexture* SetTexture;
    IDirect3DDevice3_GetTextureStageState* GetTextureStageState;
    IDirect3DDevice3_SetTextureStageState* SetTextureStageState;
    IDirect3DDevice3_ValidateDevice* ValidateDevice;
} IDirect3DDevice3_vtable;
#pragma pack(pop)

// Structure: IDirect3DMaterial3
typedef struct IDirect3DMaterial3 {
    struct IDirect3DMaterial3_vtable* vtable;
} IDirect3DMaterial3;

// Function Definition: IDirect3DMaterial3_GetHandle
typedef HRESULT IDirect3DMaterial3_GetHandle(struct IDirect3DMaterial3* this_ptr, struct IDirect3DDevice3* device, D3DMATERIALHANDLE* handle);

// Function Definition: IDirect3DMaterial3_GetMaterial
typedef HRESULT IDirect3DMaterial3_GetMaterial(struct IDirect3DMaterial3* this_ptr, struct D3DMATERIAL* material);

// Function Definition: IDirect3DMaterial3_SetMaterial
typedef HRESULT IDirect3DMaterial3_SetMaterial(struct IDirect3DMaterial3* this_ptr, struct D3DMATERIAL* material);

// Structure: IDirect3DMaterial3_vtable
#pragma pack(push, 1)
typedef struct IDirect3DMaterial3_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
    IDirect3DMaterial3_SetMaterial* SetMaterial;
    IDirect3DMaterial3_GetMaterial* GetMaterial;
    IDirect3DMaterial3_GetHandle* GetHandle;
} IDirect3DMaterial3_vtable;
#pragma pack(pop)

// Structure: IDirect3DTexture2
typedef struct IDirect3DTexture2 {
    struct IDirect3DTexture2_vtable* vtable;
} IDirect3DTexture2;

// Function Definition: IDirect3DTexture2_GetHandle
typedef HRESULT IDirect3DTexture2_GetHandle(struct IDirect3DTexture2* this_ptr, struct IDirect3DDevice3* device, D3DTEXTUREHANDLE* handle);

// Function Definition: IDirect3DTexture2_Load
typedef HRESULT IDirect3DTexture2_Load(struct IDirect3DTexture2* this_ptr, struct IDirect3DTexture2* src_texture);

// Function Definition: IDirect3DTexture2_PaletteChanged
typedef HRESULT IDirect3DTexture2_PaletteChanged(struct IDirect3DTexture2* this_ptr, DWORD start, DWORD count);

// Structure: IDirect3DTexture2_vtable
#pragma pack(push, 1)
typedef struct IDirect3DTexture2_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
    IDirect3DTexture2_GetHandle* GetHandle;
    IDirect3DTexture2_PaletteChanged* PaletteChanged;
    IDirect3DTexture2_Load* Load;
} IDirect3DTexture2_vtable;
#pragma pack(pop)

// Structure: IDirect3DViewport3
typedef struct IDirect3DViewport3 {
    struct IDirect3DViewport3_vtable* vtable;
} IDirect3DViewport3;

// Function Definition: IDirect3DViewport3_AddLight
typedef HRESULT IDirect3DViewport3_AddLight(struct IDirect3DViewport3* this_ptr, struct IUnknown* light);

// Function Definition: IDirect3DViewport3_Clear
typedef HRESULT IDirect3DViewport3_Clear(struct IDirect3DViewport3* this_ptr, DWORD count, struct D3DRECT* rects, DWORD flags);

// Function Definition: IDirect3DViewport3_Clear2
typedef HRESULT IDirect3DViewport3_Clear2(struct IDirect3DViewport3* this_ptr, DWORD count, struct D3DRECT* rects, DWORD flags, D3DCOLOR color, D3DVALUE z, DWORD stencil);

// Function Definition: IDirect3DViewport3_DeleteLight
typedef HRESULT IDirect3DViewport3_DeleteLight(struct IDirect3DViewport3* this_ptr, struct IUnknown* light);

// Function Definition: IDirect3DViewport3_GetBackground
typedef HRESULT IDirect3DViewport3_GetBackground(struct IDirect3DViewport3* this_ptr, D3DMATERIALHANDLE* material, BOOL* valid);

// Function Definition: IDirect3DViewport3_GetBackgroundDepth
typedef HRESULT IDirect3DViewport3_GetBackgroundDepth(struct IDirect3DViewport3* this_ptr, struct IDirectDrawSurface** surface, BOOL* valid);

// Function Definition: IDirect3DViewport3_GetBackgroundDepth2
typedef HRESULT IDirect3DViewport3_GetBackgroundDepth2(struct IDirect3DViewport3* this_ptr, struct IDirectDrawSurface** surface, BOOL* valid);

// Function Definition: IDirect3DViewport3_GetViewport
typedef HRESULT IDirect3DViewport3_GetViewport(struct IDirect3DViewport3* this_ptr, struct D3DVIEWPORT* data);

// Function Definition: IDirect3DViewport3_GetViewport2
typedef HRESULT IDirect3DViewport3_GetViewport2(struct IDirect3DViewport3* this_ptr, struct D3DVIEWPORT2* data);

// Function Definition: IDirect3DViewport3_Initialize
typedef HRESULT IDirect3DViewport3_Initialize(struct IDirect3DViewport3* this_ptr, struct IDirect3D3* d3d);

// Function Definition: IDirect3DViewport3_LightElements
typedef HRESULT IDirect3DViewport3_LightElements(struct IDirect3DViewport3* this_ptr, DWORD element_count, void* data);

// Function Definition: IDirect3DViewport3_NextLight
typedef HRESULT IDirect3DViewport3_NextLight(struct IDirect3DViewport3* this_ptr, struct IUnknown* ref_light, struct IUnknown** next_light, DWORD flags);

// Function Definition: IDirect3DViewport3_SetBackground
typedef HRESULT IDirect3DViewport3_SetBackground(struct IDirect3DViewport3* this_ptr, D3DMATERIALHANDLE material);

// Function Definition: IDirect3DViewport3_SetBackgroundDepth
typedef HRESULT IDirect3DViewport3_SetBackgroundDepth(struct IDirect3DViewport3* this_ptr, struct IDirectDrawSurface* surface);

// Function Definition: IDirect3DViewport3_SetBackgroundDepth2
typedef HRESULT IDirect3DViewport3_SetBackgroundDepth2(struct IDirect3DViewport3* this_ptr, struct IDirectDrawSurface* surface);

// Function Definition: IDirect3DViewport3_SetViewport
typedef HRESULT IDirect3DViewport3_SetViewport(struct IDirect3DViewport3* this_ptr, struct D3DVIEWPORT* data);

// Function Definition: IDirect3DViewport3_SetViewport2
typedef HRESULT IDirect3DViewport3_SetViewport2(struct IDirect3DViewport3* this_ptr, struct D3DVIEWPORT2* data);

// Function Definition: IDirect3DViewport3_TransformVertices
typedef HRESULT IDirect3DViewport3_TransformVertices(struct IDirect3DViewport3* this_ptr, DWORD vertex_count, void* data, DWORD flags, DWORD* offscreen);

// Structure: IDirect3DViewport3_vtable
#pragma pack(push, 1)
typedef struct IDirect3DViewport3_vtable {
    IUnknown_QueryInterface* QueryInterface;
    IUnknown_AddRef* AddRef;
    IUnknown_Release* Release;
    IDirect3DViewport3_Initialize* Initialize;
    IDirect3DViewport3_GetViewport* GetViewport;
    IDirect3DViewport3_SetViewport* SetViewport;
    IDirect3DViewport3_TransformVertices* TransformVertices;
    IDirect3DViewport3_LightElements* LightElements;
    IDirect3DViewport3_SetBackground* SetBackground;
    IDirect3DViewport3_GetBackground* GetBackground;
    IDirect3DViewport3_SetBackgroundDepth* SetBackgroundDepth;
    IDirect3DViewport3_GetBackgroundDepth* GetBackgroundDepth;
    IDirect3DViewport3_Clear* Clear;
    IDirect3DViewport3_AddLight* AddLight;
    IDirect3DViewport3_DeleteLight* DeleteLight;
    IDirect3DViewport3_NextLight* NextLight;
    IDirect3DViewport3_GetViewport2* GetViewport2;
    IDirect3DViewport3_SetViewport2* SetViewport2;
    IDirect3DViewport3_SetBackgroundDepth2* SetBackgroundDepth2;
    IDirect3DViewport3_GetBackgroundDepth2* GetBackgroundDepth2;
    IDirect3DViewport3_Clear2* Clear2;
} IDirect3DViewport3_vtable;
#pragma pack(pop)

// Typedef: LPDIRECT3D3
// pointer to IDirect3D3
typedef struct IDirect3D3* LPDIRECT3D3;

// Typedef: LPDIRECT3DDEVICE3
// pointer to IDirect3DDevice3
typedef struct IDirect3DDevice3* LPDIRECT3DDEVICE3;

// Typedef: LPDIRECT3DMATERIAL3
// pointer to IDirect3DMaterial3
typedef struct IDirect3DMaterial3* LPDIRECT3DMATERIAL3;

// Typedef: LPDIRECT3DTEXTURE2
// pointer to IDirect3DTexture2
typedef struct IDirect3DTexture2* LPDIRECT3DTEXTURE2;

// Typedef: LPDIRECT3DVIEWPORT3
// pointer to IDirect3DViewport3
typedef struct IDirect3DViewport3* LPDIRECT3DVIEWPORT3;

