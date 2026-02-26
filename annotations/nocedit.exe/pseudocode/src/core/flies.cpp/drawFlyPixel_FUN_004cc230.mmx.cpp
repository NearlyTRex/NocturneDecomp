// Name: core_flies.cpp_drawFlyPixel_FUN_004cc230
// Address: 004cc230
// Address Range: [[004cc230, 004cc2b6]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_drawFlyPixel_FUN_004cc230(int screen_x,int screen_y,int z_depth)

#include "nocturne.h"

void __cdecl core_flies_cpp_drawFlyPixel_FUN_004cc230(int screen_x,int screen_y,int z_depth)
{
__asm {
        mov EBP,ESP
        sub ESP,0x4
        mov EAX,dword ptr [EBP + 0x18]
        shl EAX,0x2
        mov EDX,dword ptr [EBP + 0x14]
        mov ECX,dword ptr [g_ZBufferScanlineArray + EAX]
        shl EDX,0x2
        mov EBX,dword ptr [EBP + 0x1c]
        cmp EBX,dword ptr [ECX + EDX*0x1]
        jbe LAB_004cc25c
        cmp dword ptr [g_BitsPerPixel],0x20
        jz LAB_004cc263
    LAB_004cc25c:
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_004cc263:
        mov EAX,dword ptr [g_ScreenBufferArray + EAX]
        add EAX,EDX
        mov dword ptr [EBP + -0x4],EAX
        mov EDI,dword ptr [EBP + 0xfffffffc]
        movd MM0,dword ptr [g_ActiveRenderColor]
        pxor MM7,MM7
        movd MM1,dword ptr [EDI]
        movd MM2,dword ptr [g_FlyBlendColor]
        movd MM3,dword ptr [g_FlyInvBlendColor]
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
