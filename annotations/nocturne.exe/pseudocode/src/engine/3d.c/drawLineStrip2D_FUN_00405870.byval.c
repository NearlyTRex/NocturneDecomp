// Name: engine_3d.c_drawLineStrip2D_FUN_00405870
// Address: 00405870
// Address Range: [[00405870, 004058ff]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip2D_FUN_00405870(SLineStrip *line_strip)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip2D_FUN_00405870(SLineStrip *line_strip)
{
__asm {
        call engine_3d_c_setActiveRenderColor_FUN_00405840
        mov EBX,dword ptr [ESP + 0x74]
        xor EBP,EBP
        add EBX,0x8
    LAB_00405885:
        mov EAX,dword ptr [ESP + 0x74]
        mov ESI,dword ptr [EAX + 0x4]
        dec ESI
        cmp EBP,ESI
        jl LAB_004058a8
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
    LAB_004058a8:
        imul ESI,dword ptr [EBX],0x30
        mov ECX,0xc
        lea EDI,[ESP + 0x30]
        lea ESI,[g_SRenderVertex_ARRAY_005c5014 + ESI]
        rep movsd
        imul ESI,dword ptr [EBX + 0x4],0x30
        mov EDI,ESP
        mov ECX,0xc
        lea ESI,[g_SRenderVertex_ARRAY_005c5014 + ESI]
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
        call engine_3d_c_clipAndDrawLine2D_FUN_00409290
        add ESP,0x60
        jmp LAB_00405885
}
}
