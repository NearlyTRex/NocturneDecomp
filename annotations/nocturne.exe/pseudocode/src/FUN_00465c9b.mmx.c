// Name: FUN_00465c9b
// Address: 00465c9b
// Address Range: [[00465c9b, 00465f4f]]
// Convention: unknown
// Signature: void FUN_00465c9b(undefined4 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465c9b(uint *param_1,ulonglong *param_2,byte *param_3,byte *param_4,int param_5)
{
__asm {
        mov ECX,dword ptr [EBP + 0x18]
        mov EDI,dword ptr [EBP + 0x8]
        mov ESI,dword ptr [EBP + 0xc]
        mov EBX,dword ptr [EBP + 0x10]
        mov EBP,dword ptr [EBP + 0x14]
        pxor MM7,MM7
        movd MM5,dword ptr [DAT_01c039a8]
        punpcklbw MM5,MM7
        psllw MM5,0x6
        mov EAX,dword ptr [ESI]
        mov EAX,dword ptr [ESI + 0x20]
        mov EAX,dword ptr [ESI + 0x40]
        mov EAX,dword ptr [ESI + 0x60]
        mov EAX,dword ptr [ESI + 0x80]
        mov EAX,dword ptr [ESI + 0xa0]
        mov EAX,dword ptr [ESI + 0xc0]
        mov EAX,dword ptr [ESI + 0xe0]
        mov EAX,dword ptr [ESI + 0x100]
        mov EAX,dword ptr [ESI + 0x120]
        mov EAX,dword ptr [ESI + 0x140]
        mov EAX,dword ptr [ESI + 0x160]
        mov EAX,dword ptr [ESI + 0x180]
        mov EAX,dword ptr [ESI + 0x1a0]
        mov EAX,dword ptr [ESI + 0x1c0]
        mov EAX,dword ptr [ESI + 0x1e0]
        mov EAX,dword ptr [ESI + 0x200]
        mov EAX,dword ptr [ESI + 0x220]
        mov EAX,dword ptr [ESI + 0x240]
        mov EAX,dword ptr [ESI + 0x260]
        mov EAX,dword ptr [ESI + 0x280]
        mov EAX,dword ptr [ESI + 0x2a0]
        mov EAX,dword ptr [ESI + 0x2c0]
        mov EAX,dword ptr [ESI + 0x2e0]
        mov EAX,dword ptr [ESI + 0x300]
        mov EAX,dword ptr [ESI + 0x320]
        mov EAX,dword ptr [ESI + 0x340]
        mov EAX,dword ptr [ESI + 0x360]
        mov EAX,dword ptr [ESI + 0x380]
        mov EAX,dword ptr [ESI + 0x3a0]
        mov EAX,dword ptr [ESI + 0x3c0]
        mov EAX,dword ptr [ESI + 0x3e0]
        mov EAX,dword ptr [ESI + 0x400]
        mov EAX,dword ptr [ESI + 0x420]
        mov EAX,dword ptr [ESI + 0x440]
        mov EAX,dword ptr [ESI + 0x460]
        mov EAX,dword ptr [ESI + 0x480]
        mov EAX,dword ptr [ESI + 0x4a0]
        mov EAX,dword ptr [ESI + 0x4c0]
        mov EAX,dword ptr [ESI + 0x4e0]
        mov EAX,dword ptr [ESI + 0x500]
        mov EAX,dword ptr [ESI + 0x520]
        mov EAX,dword ptr [ESI + 0x540]
        mov EAX,dword ptr [ESI + 0x560]
        mov EAX,dword ptr [ESI + 0x580]
        mov EAX,dword ptr [ESI + 0x5a0]
        mov EAX,dword ptr [ESI + 0x5c0]
        mov EAX,dword ptr [ESI + 0x5e0]
        mov EAX,dword ptr [ESI + 0x600]
        mov EAX,dword ptr [ESI + 0x620]
        mov EAX,dword ptr [ESI + 0x640]
        mov EAX,dword ptr [ESI + 0x660]
        mov EAX,dword ptr [ESI + 0x680]
        mov EAX,dword ptr [ESI + 0x6a0]
        mov EAX,dword ptr [ESI + 0x6c0]
        mov EAX,dword ptr [ESI + 0x6e0]
        mov EAX,dword ptr [ESI + 0x700]
        mov EAX,dword ptr [ESI + 0x720]
        mov EAX,dword ptr [ESI + 0x740]
        mov EAX,dword ptr [ESI + 0x760]
        mov EAX,dword ptr [ESI + 0x780]
        mov EAX,dword ptr [ESI + 0x7a0]
        mov EAX,dword ptr [ESI + 0x7c0]
        mov EAX,dword ptr [ESI + 0x7e0]
        mov EAX,dword ptr [ESI + 0x800]
        mov EAX,dword ptr [ESI + 0x820]
        mov EAX,dword ptr [ESI + 0x840]
        mov EAX,dword ptr [ESI + 0x860]
        mov EAX,dword ptr [ESI + 0x880]
        mov EAX,dword ptr [ESI + 0x8a0]
        mov EAX,dword ptr [ESI + 0x8c0]
        mov EAX,dword ptr [ESI + 0x8e0]
        mov EAX,dword ptr [ESI + 0x900]
        mov EAX,dword ptr [ESI + 0x920]
        mov EAX,dword ptr [ESI + 0x940]
        mov EAX,dword ptr [ESI + 0x960]
        mov EAX,dword ptr [ESI + 0x980]
        mov EAX,dword ptr [ESI + 0x9a0]
        mov EAX,dword ptr [ESI + 0x9c0]
        mov EAX,dword ptr [ESI + 0x9e0]
    LAB_00465e94:
        movzx EDX,byte ptr [EBX]
        movq MM0,qword ptr [ESI]
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
        paddw MM0,qword ptr [DAT_005b4798]
        psrlw MM0,0x4
        packuswb MM0,MM7
        movd dword ptr [EDI],MM0
        add ESI,0x4
        inc EBX
        inc EBP
        add EDI,0x4
        movzx EDX,byte ptr [EBX]
        movq MM0,qword ptr [ESI]
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
        paddw MM0,qword ptr [DAT_005b47a0]
        psrlw MM0,0x4
        packuswb MM0,MM7
        movd dword ptr [EDI],MM0
        add ESI,0x4
        inc EBX
        inc EBP
        add EDI,0x4
        sub ECX,0x2
        jg LAB_00465e94
        pop EBP
        emms
}
}
