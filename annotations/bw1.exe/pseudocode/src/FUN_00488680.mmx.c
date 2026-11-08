// Name: FUN_00488680
// Address: 00488680
// Address Range: [[00488680, 004886f0]]
// Convention: unknown
// Signature: void FUN_00488680(undefined4 *param_1,undefined4 *param_2,byte *param_3,byte *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00488680(uint *param_1,uint *param_2,byte *param_3,byte *param_4)
{
__asm {
        mov EDI,dword ptr [EBP + 0x8]
        mov ESI,dword ptr [EBP + 0xc]
        mov EBX,dword ptr [EBP + 0x10]
        mov EBP,dword ptr [EBP + 0x14]
        pxor MM7,MM7
        movd MM5,dword ptr [DAT_01c51d1c]
        punpcklbw MM5,MM7
        psllw MM5,0x6
        movzx EDX,byte ptr [EBX]
        movd MM0,dword ptr [ESI]
        movd MM2,dword ptr [DAT_00b8189c + EDX*0x4]
        movzx EAX,byte ptr [EBP]
        punpcklbw MM0,MM7
        shr EDX,0x1
        punpcklbw MM2,MM7
        add EAX,EDX
        pmullw MM0,MM2
        movq MM3,qword ptr [DAT_00619b60 + EAX*0x8]
        movq MM2,MM3
        movq MM4,MM5
        pxor MM2,qword ptr [DAT_0061a358]
        pmulhw MM0,MM2
        pmulhw MM4,MM3
        paddw MM0,MM4
        psrlw MM0,0x4
        packuswb MM0,MM7
        movd dword ptr [EDI],MM0
        pop EBP
        emms
}
}
