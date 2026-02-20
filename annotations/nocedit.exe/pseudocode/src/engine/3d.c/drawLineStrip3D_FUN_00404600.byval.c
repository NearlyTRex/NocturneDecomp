// Name: engine_3d.c_drawLineStrip3D_FUN_00404600
// Address: 00404600
// Address Range: [[00404600, 0040468f]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_drawLineStrip3D_FUN_00404600(SLineStrip *line_strip)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_d0 */
/* WARNING: Variable defined which should be unmapped: local_a0 */

void __cdecl engine_3d_c_drawLineStrip3D_FUN_00404600(SLineStrip *line_strip)
{
__asm {
        call engine_3d_c_setActiveRenderColor_FUN_00404540
        mov EBX,dword ptr [ESP + 0x74]
        xor EBP,EBP
        add EBX,0x8
    LAB_00404615:
        mov EAX,dword ptr [ESP + 0x74]
        mov ESI,dword ptr [EAX + 0x4]
        dec ESI
        cmp EBP,ESI
        jl LAB_00404638
        mov EBX,dword ptr [ESP + 0x74]
        mov EAX,dword ptr [EAX + 0x4]
        add EBX,0x8
        shl EAX,0x2
        add EAX,EBX
        add ESP,0x60
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_00404638:
        imul ESI,dword ptr [EBX],0x30
        mov ECX,0xc
        lea EDI,[ESP + 0x30]
        lea ESI,[g_RenderVertexBuffer + ESI]
        rep movsd
        imul ESI,dword ptr [EBX + 0x4],0x30
        mov EDI,ESP
        mov ECX,0xc
        lea ESI,[g_RenderVertexBuffer + ESI]
        rep movsd
        mov ECX,0xc
        sub ESP,0x30
        lea ESI,[ESP + 0x30]
        mov EDI,ESP
        rep movsd
        mov ECX,0xc
        sub ESP,0x30
        lea ESI,[ESP + 0x90]
        mov EDI,ESP
        add EBX,0x4
        inc EBP
        rep movsd
        call engine_3d_c_clipAndDrawLine3D_FUN_00408070
        add ESP,0x60
        jmp LAB_00404615
}
}
