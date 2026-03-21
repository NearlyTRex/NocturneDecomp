// Name: engine_3d.c_drawLineStrip3D_FUN_00404600
// Address: 00404600
// Address Range: [[00404600, 0040468f] [00599474, 0059952c]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_drawLineStrip3D_FUN_00404600(SLineStrip *line_strip)

#include "nocturne.h"

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
        jmp 0x00599474
    LAB_0040466d:
        rep movsd
        jmp LAB_005994cd
    LAB_00404684:
        rep movsd
        call engine_3d_c_clipAndDrawLine3D_FUN_00408070
        add ESP,0x60
        jmp LAB_00404615
        mov ECX,0xc
        sub ESP,0x30
        lea ESI,[ESP + 0x30]
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
        jmp LAB_0040466d
    LAB_005994cd:
        mov ECX,0xc
        sub ESP,0x30
        lea ESI,[ESP + 0x90]
        mov EDI,ESP
        add EBX,0x4
        inc EBP
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
        jmp LAB_00404684
}
}
