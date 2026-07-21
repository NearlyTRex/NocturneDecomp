// Name: core_dstrender.cpp_spatialFilter9TapMMX_FUN_004654c5
// Address: 004654c5
// Address Range: [[004654c5, 0046556e]]
// Convention: unknown
// Signature: void core_dstrender_cpp_spatialFilter9TapMMX_FUN_004654c5(undefined4 *param_1,undefined4 *param_2,int param_3)

#include "nocturne.h"

void core_dstrender_cpp_spatialFilter9TapMMX_FUN_004654c5(uint *param_1,uint *param_2,int param_3)
{
__asm {
        mov ESI,dword ptr [EBP + 0xc]
        mov EDI,dword ptr [EBP + 0x8]
        mov ECX,dword ptr [EBP + 0x10]
        pxor MM7,MM7
    LAB_004654d6:
        movd MM1,dword ptr [ESI + -0x4]
        movd MM0,dword ptr [ESI]
        movd MM2,dword ptr [ESI + 0x4]
        movd MM3,dword ptr [ESI + 0xfffffb00]
        movd MM4,dword ptr [ESI + 0x500]
        punpcklbw MM0,MM7
        punpcklbw MM1,MM7
        punpcklbw MM2,MM7
        punpcklbw MM3,MM7
        punpcklbw MM4,MM7
        psllw MM0,0x2
        psllw MM1,0x1
        psllw MM2,0x1
        psllw MM3,0x1
        psllw MM4,0x1
        paddw MM0,MM1
        paddw MM0,MM2
        paddw MM0,MM3
        paddw MM0,MM4
        movd MM1,dword ptr [ESI + 0xfffffafc]
        movd MM2,dword ptr [ESI + 0xfffffb04]
        movd MM3,dword ptr [ESI + 0x4fc]
        movd MM4,dword ptr [ESI + 0x504]
        punpcklbw MM1,MM7
        punpcklbw MM2,MM7
        punpcklbw MM3,MM7
        punpcklbw MM4,MM7
        paddw MM0,MM1
        paddw MM0,MM2
        paddw MM0,MM3
        paddw MM0,MM4
        psrlw MM0,0x4
        packuswb MM0,MM7
        movd dword ptr [EDI],MM0
        add ESI,0x4
        add EDI,0x4
        dec ECX
        jg LAB_004654d6
        emms
}
}
