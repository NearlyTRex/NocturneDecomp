// Name: FUN_004720fa
// Address: 004720fa
// Address Range: [[004720fa, 00472172]]
// Convention: unknown
// Signature: void FUN_004720fa(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

void FUN_004720fa(uint *param_1,uint *param_2,uint *param_3,uint param_4,uint param_5,int param_6)
{
__asm {
        push ECX
        mov EDI,dword ptr [EBP + 0x8]
        mov ESI,dword ptr [EBP + 0xc]
        mov EBX,dword ptr [EBP + 0x10]
        mov ECX,dword ptr [EBP + 0x1c]
        pxor MM7,MM7
        movd MM3,dword ptr [EBP + 0x18]
        movd MM4,dword ptr [EBP + 0x14]
        movd MM5,dword ptr [EBP + 0x18]
        movd MM6,dword ptr [EBP + 0x14]
        psllq MM3,0x20
        psllq MM4,0x20
        por MM3,MM5
        por MM4,MM6
        psrlw MM3,0x1
        psrlw MM4,0x1
    LAB_00472136:
        movd MM0,dword ptr [ESI]
        movd MM1,dword ptr [EBX]
        punpcklbw MM0,MM7
        punpcklbw MM1,MM7
        psllw MM0,0x7
        psllw MM1,0x7
        pmulhw MM0,MM3
        pmulhw MM1,MM4
        paddw MM0,MM1
        psrlw MM0,0x6
        packuswb MM0,MM7
        movd dword ptr [EDI],MM0
        add ESI,0x4
        add EBX,0x4
        add EDI,0x4
        sub ECX,0x4
        jg LAB_00472136
        pop ECX
        pop EBX
        emms
}
}
