// Name: FUN_004652d0
// Address: 004652d0
// Address Range: [[004652d0, 00465340]]
// Convention: unknown
// Signature: void FUN_004652d0(undefined4 *param_1,undefined4 *param_2,byte *param_3,byte *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004652d0(uint *param_1,uint *param_2,byte *param_3,byte *param_4)
{
__asm {
        mov EDI,dword ptr [EBP + 0x8]
        mov ESI,dword ptr [EBP + 0xc]
        mov EBX,dword ptr [EBP + 0x10]
        mov EBP,dword ptr [EBP + 0x14]
        pxor MM7,MM7
        movd MM5,dword ptr [DAT_01c039a8]
        punpcklbw MM5,MM7
        psllw MM5,0x6
        movzx EDX,byte ptr [EBX]
        movd MM0,dword ptr [ESI]
        movd MM2,dword ptr [DAT_00b0e1fc + EDX*0x4]
        movzx EAX,byte ptr [EBP]
        punpcklbw MM0,MM7
        shr EDX,0x1
        punpcklbw MM2,MM7
        add EAX,EDX
        pmullw MM0,MM2
        movq MM3,qword ptr [DAT_005b5d00 + EAX*0x8]
        movq MM2,MM3
        movq MM4,MM5
        pxor MM2,qword ptr [DAT_005b64f8]
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
