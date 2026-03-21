// Name: engine_3d.c_drawLine2DFromIndices_FUN_00407cf0
// Address: 00407cf0
// Address Range: [[00407cf0, 00407d62] [0060e850, 0060e901]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00407cf0(int vertex_index1,int vertex_index2)

#include "nocturne.h"

void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00407cf0(int vertex_index1,int vertex_index2)
{
__asm {
        mov EDI,dword ptr [ESP + 0x6c]
        lea EAX,[EDI*0x4 + 0x0]
        sub EAX,EDI
        mov ECX,0xc
        shl EAX,0x4
        mov EDI,ESP
        lea ESI,[g_RenderVertexBuffer + EAX]
        rep movsd
        mov EDI,dword ptr [ESP + 0x70]
        lea EAX,[EDI*0x4 + 0x0]
        sub EAX,EDI
        mov ECX,0xc
        shl EAX,0x4
        lea EDI,[ESP + 0x30]
        lea ESI,[g_RenderVertexBuffer + EAX]
        rep movsd
        jmp 0x0060e850
    LAB_00407d43:
        rep movsd
        jmp LAB_0060e8a9
    LAB_00407d53:
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        add ESP,0x60
        pop EDI
        pop ESI
        ret
        mov ECX,0xc
        sub ESP,0x30
        lea ESI,[ESP + 0x60]
        mov EDI,ESP
        mov ECX,dword ptr [ESI]
        mov dword ptr [EDI],ECX
        mov ECX,dword ptr [ESI + 0x4]
        mov dword ptr [EDI + 0x4],ECX
        mov ECX,dword ptr [ESI + 0x8]
        mov dword ptr [EDI + 0x8],ECX
        mov ECX,dword ptr [ESI + 0xc]
        mov dword ptr [EDI + 0xc],ECX
        mov ECX,dword ptr [ESI + 0x10]
        mov dword ptr [EDI + 0x10],ECX
        mov ECX,dword ptr [ESI + 0x14]
        mov dword ptr [EDI + 0x14],ECX
        mov ECX,dword ptr [ESI + 0x18]
        mov dword ptr [EDI + 0x18],ECX
        mov ECX,dword ptr [ESI + 0x1c]
        mov dword ptr [EDI + 0x1c],ECX
        mov ECX,dword ptr [ESI + 0x20]
        mov dword ptr [EDI + 0x20],ECX
        mov ECX,dword ptr [ESI + 0x24]
        mov dword ptr [EDI + 0x24],ECX
        mov ECX,dword ptr [ESI + 0x28]
        mov dword ptr [EDI + 0x28],ECX
        mov ECX,dword ptr [ESI + 0x2c]
        mov dword ptr [EDI + 0x2c],ECX
        jmp LAB_00407d43
    LAB_0060e8a9:
        mov ECX,0xc
        sub ESP,0x30
        lea ESI,[ESP + 0x60]
        mov EDI,ESP
        mov ECX,dword ptr [ESI]
        mov dword ptr [EDI],ECX
        mov ECX,dword ptr [ESI + 0x4]
        mov dword ptr [EDI + 0x4],ECX
        mov ECX,dword ptr [ESI + 0x8]
        mov dword ptr [EDI + 0x8],ECX
        mov ECX,dword ptr [ESI + 0xc]
        mov dword ptr [EDI + 0xc],ECX
        mov ECX,dword ptr [ESI + 0x10]
        mov dword ptr [EDI + 0x10],ECX
        mov ECX,dword ptr [ESI + 0x14]
        mov dword ptr [EDI + 0x14],ECX
        mov ECX,dword ptr [ESI + 0x18]
        mov dword ptr [EDI + 0x18],ECX
        mov ECX,dword ptr [ESI + 0x1c]
        mov dword ptr [EDI + 0x1c],ECX
        mov ECX,dword ptr [ESI + 0x20]
        mov dword ptr [EDI + 0x20],ECX
        mov ECX,dword ptr [ESI + 0x24]
        mov dword ptr [EDI + 0x24],ECX
        mov ECX,dword ptr [ESI + 0x28]
        mov dword ptr [EDI + 0x28],ECX
        mov ECX,dword ptr [ESI + 0x2c]
        mov dword ptr [EDI + 0x2c],ECX
        jmp LAB_00407d53
}
}
