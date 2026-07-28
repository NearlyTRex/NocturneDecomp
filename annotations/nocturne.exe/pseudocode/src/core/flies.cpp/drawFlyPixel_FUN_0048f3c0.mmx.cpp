// Name: core_flies.cpp_drawFlyPixel_FUN_0048f3c0
// Address: 0048f3c0
// Address Range: [[0048f3c0, 0048f446]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_drawFlyPixel_FUN_0048f3c0(int screen_x,int screen_y,int z_depth)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flies_cpp_drawFlyPixel_FUN_0048f3c0(int screen_x,int screen_y,int z_depth)
{
__asm {
        mov EBP,ESP
        sub ESP,0x4
        mov EAX,dword ptr [EBP + 0x18]
        shl EAX,0x2
        mov EDX,dword ptr [EBP + 0x14]
        mov ECX,dword ptr [DAT_01bd4260 + EAX]
        shl EDX,0x2
        mov EBX,dword ptr [EBP + 0x1c]
        cmp EBX,dword ptr [ECX + EDX*0x1]
        jbe LAB_0048f3ec
        cmp dword ptr [DAT_005b7624],0x20
        jz LAB_0048f3f3
    LAB_0048f3ec:
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_0048f3f3:
        mov EAX,dword ptr [DAT_01bd2fa0 + EAX]
        add EAX,EDX
        mov dword ptr [EBP + -0x4],EAX
        mov EDI,dword ptr [EBP + 0xfffffffc]
        movd MM0,dword ptr [DAT_01c00c70]
        pxor MM7,MM7
        movd MM1,dword ptr [EDI]
        movd MM2,dword ptr [DAT_01c70754]
        movd MM3,dword ptr [DAT_01c70758]
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
