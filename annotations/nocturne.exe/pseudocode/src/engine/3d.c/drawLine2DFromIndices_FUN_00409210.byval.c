// Name: engine_3d.c_drawLine2DFromIndices_FUN_00409210
// Address: 00409210
// Address Range: [[00409210, 00409282]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00409210(int vertex_index1,int vertex_index2)

#include "nocturne.h"

void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00409210(int vertex_index1,int vertex_index2)
{
__asm {
        mov EDI,dword ptr [ESP + 0x6c]
        lea EAX,[EDI*0x4 + 0x0]
        sub EAX,EDI
        mov ECX,0xc
        shl EAX,0x4
        mov EDI,ESP
        lea ESI,[g_SRenderVertex_ARRAY_005c5014 + EAX]
        rep movsd
        mov EDI,dword ptr [ESP + 0x70]
        lea EAX,[EDI*0x4 + 0x0]
        sub EAX,EDI
        mov ECX,0xc
        shl EAX,0x4
        lea EDI,[ESP + 0x30]
        lea ESI,[g_SRenderVertex_ARRAY_005c5014 + EAX]
        rep movsd
        mov ECX,0xc
        sub ESP,0x30
        lea ESI,[ESP + 0x60]
        mov EDI,ESP
        rep movsd
        mov ECX,0xc
        sub ESP,0x30
        lea ESI,[ESP + 0x60]
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00409290
}
}
