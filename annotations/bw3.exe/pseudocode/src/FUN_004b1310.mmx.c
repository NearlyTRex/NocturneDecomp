// Name: FUN_004b1310
// Address: 004b1310
// Address Range: [[004b1310, 004b139c]]
// Convention: unknown
// Signature: void FUN_004b1310(undefined4 *param_1,byte *param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_004b1310(uint *param_1,byte *param_2,int param_3,int param_4,uint param_5)
{
__asm {
        mov EBP,ESP
        mov EDI,dword ptr [EBP + 0x14]
        mov ESI,dword ptr [EBP + 0x18]
        mov EDX,dword ptr [EBP + 0x1c]
        mov ECX,dword ptr [EBP + 0x20]
        pxor MM7,MM7
        movd MM4,dword ptr [DAT_005f07c0]
        punpcklbw MM4,MM7
        mov EAX,0xffffffff
        movd MM6,EAX
        punpcklbw MM6,MM7
    LAB_004b1346:
        movzx EAX,byte ptr [ESI]
        cmp EAX,0x0
        jz LAB_004b138d
        shl EAX,0x2
        mov EAX,dword ptr [EAX + EDX*0x1]
        movd MM2,EAX
        movd MM0,dword ptr [EBP + 0x24]
        movd MM1,dword ptr [EDI]
        punpcklbw MM0,MM7
        punpcklbw MM1,MM7
        punpcklbw MM2,MM7
        punpcklbw MM3,MM7
        pmullw MM2,MM4
        psrlw MM2,0x8
        movq MM3,MM2
        pxor MM3,MM6
        pmullw MM0,MM2
        pmullw MM1,MM3
        paddw MM0,MM1
        psrlw MM0,0x8
        packuswb MM0,MM7
        movd dword ptr [EDI],MM0
    LAB_004b138d:
        inc ESI
        add EDI,0x4
        dec ECX
        jg LAB_004b1346
        emms
        mov ESP,EBP
}
}
