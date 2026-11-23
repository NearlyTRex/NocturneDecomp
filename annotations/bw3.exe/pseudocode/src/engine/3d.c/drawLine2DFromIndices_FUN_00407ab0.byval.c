// Name: engine_3d.c_drawLine2DFromIndices_FUN_00407ab0
// Address: 00407ab0
// Address Range: [[00407ab0, 00407b22]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00407ab0(int vertex_index1,int vertex_index2)

#include "nocturne.h"

void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00407ab0(int vertex_index1,int vertex_index2)
{
__asm {
        mov EDI,dword ptr [ESP + 0x6c]
        lea EAX,[EDI*0x4 + 0x0]
        sub EAX,EDI
        mov ECX,0xc
        shl EAX,0x4
        mov EDI,ESP
        lea ESI,[EAX + 0x60b014]
        rep movsd
        mov EDI,dword ptr [ESP + 0x70]
        lea EAX,[EDI*0x4 + 0x0]
        sub EAX,EDI
        mov ECX,0xc
        shl EAX,0x4
        lea EDI,[ESP + 0x30]
        lea ESI,[EAX + 0x60b014]
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
        call engine_3d_c_clipAndDrawLine2D_FUN_00407b30
}
}
