// Name: engine_3d.c_drawLineStrip3D_FUN_004044d0
// Address: 004044d0
// Address Range: [[004044d0, 0040455f]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip3D_FUN_004044d0(SLineStrip *line_strip)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip3D_FUN_004044d0(SLineStrip *line_strip)
{
__asm {
        call engine_3d_c_setActiveRenderColor_FUN_00404410
        mov EBX,dword ptr [ESP + 0x74]
        xor EBP,EBP
        add EBX,0x8
    LAB_004044e5:
        mov EAX,dword ptr [ESP + 0x74]
        mov ESI,dword ptr [EAX + 0x4]
        dec ESI
        cmp EBP,ESI
        jl LAB_00404508
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
    LAB_00404508:
        imul ESI,dword ptr [EBX],0x30
        mov ECX,0xc
        lea EDI,[ESP + 0x30]
        lea ESI,[ESI + 0x629014]
        rep movsd
        imul ESI,dword ptr [EBX + 0x4],0x30
        mov EDI,ESP
        mov ECX,0xc
        lea ESI,[ESI + 0x629014]
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
        call engine_3d_c_clipAndDrawLine3D_FUN_00407df0
        add ESP,0x60
        jmp LAB_004044e5
}
}
