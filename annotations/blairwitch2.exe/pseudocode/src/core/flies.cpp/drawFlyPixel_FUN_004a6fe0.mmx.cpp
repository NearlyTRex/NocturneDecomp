// Name: core_flies.cpp_drawFlyPixel_FUN_004a6fe0
// Address: 004a6fe0
// Address Range: [[004a6fe0, 004a7066]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_drawFlyPixel_FUN_004a6fe0(int screen_x,int screen_y,int z_depth)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flies_cpp_drawFlyPixel_FUN_004a6fe0(int screen_x,int screen_y,int z_depth)
{
__asm {
        mov EBP,ESP
        sub ESP,0x4
        mov EAX,dword ptr [EBP + 0x18]
        shl EAX,0x2
        mov EDX,dword ptr [EBP + 0x14]
        mov ECX,dword ptr [EAX + 0x1c2b64c]
        shl EDX,0x2
        mov EBX,dword ptr [EBP + 0x1c]
        cmp EBX,dword ptr [ECX + EDX*0x1]
        jbe LAB_004a700c
        cmp dword ptr [DAT_006141c0],0x20
        jz LAB_004a7013
    LAB_004a700c:
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_004a7013:
        mov EAX,dword ptr [EAX + 0x1c2a38c]
        add EAX,EDX
        mov dword ptr [EBP + -0x4],EAX
        mov EDI,dword ptr [EBP + 0xfffffffc]
        movd MM0,dword ptr [DAT_01c35e60]
        pxor MM7,MM7
        movd MM1,dword ptr [EDI]
        movd MM2,dword ptr [DAT_01caf62c]
        movd MM3,dword ptr [DAT_01caf630]
        punpcklbw MM0,MM7
        punpcklbw MM1,MM7
        punpcklbw MM2,MM7
        punpcklbw MM3,MM7
        pmullw MM0,MM3
        pmullw MM1,MM2
        paddw MM0,MM1
        psrlw MM0,0x8
        packuswb MM0,MM7
        movd dword ptr [EDI],MM0
        emms
        mov ESP,EBP
}
}
