// Name: FUN_004add00
// Address: 004add00
// Address Range: [[004add00, 004add86]]
// Convention: unknown
// Signature: void FUN_004add00(int param_1,int param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004add00(int param_1,int param_2,uint param_3)
{
__asm {
        mov EBP,ESP
        sub ESP,0x4
        mov EAX,dword ptr [EBP + 0x18]
        shl EAX,0x2
        mov EDX,dword ptr [EBP + 0x14]
        mov ECX,dword ptr [EAX + 0x1c60dac]
        shl EDX,0x2
        mov EBX,dword ptr [EBP + 0x1c]
        cmp EBX,dword ptr [ECX + EDX*0x1]
        jbe LAB_004add2c
        cmp dword ptr [DAT_005fba20],0x20
        jz LAB_004add33
    LAB_004add2c:
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_004add33:
        mov EAX,dword ptr [EAX + 0x1c5faec]
        add EAX,EDX
        mov dword ptr [EBP + -0x4],EAX
        mov EDI,dword ptr [EBP + 0xfffffffc]
        movd MM0,dword ptr [DAT_01c6b5c0]
        pxor MM7,MM7
        movd MM1,dword ptr [EDI]
        movd MM2,dword ptr [DAT_01d1a11c]
        movd MM3,dword ptr [DAT_01d1a120]
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
