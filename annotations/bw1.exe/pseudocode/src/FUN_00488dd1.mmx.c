// Name: FUN_00488dd1
// Address: 00488dd1
// Address Range: [[00488dd1, 004892c4]]
// Convention: unknown
// Signature: void FUN_00488dd1(undefined4 *param_1,undefined4 *param_2,byte *param_3,byte *param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00488dd1(uint *param_1,uint *param_2,byte *param_3,byte *param_4,int param_5)
{
__asm {
        mov ECX,dword ptr [EBP + 0x18]
        mov EDI,dword ptr [EBP + 0x8]
        mov ESI,dword ptr [EBP + 0xc]
        mov EBX,dword ptr [EBP + 0x10]
        mov EBP,dword ptr [EBP + 0x14]
        pxor MM7,MM7
        movd MM5,dword ptr [DAT_01c51d1c]
        punpcklbw MM5,MM7
        psllw MM5,0x6
        mov EAX,dword ptr [EBX]
        mov EAX,dword ptr [EBX + 0x20]
        mov EAX,dword ptr [EBX + 0x40]
        mov EAX,dword ptr [EBX + 0x60]
        mov EAX,dword ptr [EBX + 0x80]
        mov EAX,dword ptr [EBX + 0xa0]
        mov EAX,dword ptr [EBX + 0xc0]
        mov EAX,dword ptr [EBX + 0xe0]
        mov EAX,dword ptr [EBX + 0x100]
        mov EAX,dword ptr [EBX + 0x120]
        mov EDX,dword ptr [EBP]
        mov EDX,dword ptr [EBP + 0x20]
        mov EDX,dword ptr [EBP + 0x40]
        mov EDX,dword ptr [EBP + 0x60]
        mov EDX,dword ptr [EBP + 0x80]
        mov EDX,dword ptr [EBP + 0xa0]
        mov EDX,dword ptr [EBP + 0xc0]
        mov EDX,dword ptr [EBP + 0xe0]
        mov EDX,dword ptr [EBP + 0x100]
        mov EDX,dword ptr [EBP + 0x120]
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
        mov EAX,[DAT_00b8189c]
        mov EAX,[DAT_00b818bc]
        mov EAX,[DAT_00b818dc]
        mov EAX,[DAT_00b818fc]
        mov EAX,[DAT_00b8191c]
        mov EAX,[DAT_00b8193c]
        mov EAX,[DAT_00b8195c]
        mov EAX,[DAT_00b8197c]
        mov EAX,[DAT_00b8199c]
        mov EAX,[DAT_00b819bc]
        mov EAX,[DAT_00b819dc]
        mov EAX,[DAT_00b819fc]
        mov EAX,[DAT_00b81a1c]
        mov EAX,[DAT_00b81a3c]
        mov EAX,[DAT_00b81a5c]
        mov EAX,[DAT_00b81a7c]
        mov EAX,[DAT_00b81a9c]
        mov EAX,[DAT_00b81abc]
        mov EAX,[DAT_00b81adc]
        mov EAX,[DAT_00b81afc]
        mov EAX,[DAT_00b81b1c]
        mov EAX,[DAT_00b81b3c]
        mov EAX,[DAT_00b81b5c]
        mov EAX,[DAT_00b81b7c]
        mov EAX,[DAT_00b81b9c]
        mov EAX,[DAT_00b81bbc]
        mov EAX,[DAT_00b81bdc]
        mov EAX,[DAT_00b81bfc]
        mov EAX,[DAT_00b81c1c]
        mov EAX,[DAT_00b81c3c]
        mov EAX,[DAT_00b81c5c]
        mov EAX,[DAT_00b81c7c]
        mov EAX,[DAT_00619b60]
        mov EAX,[DAT_00619b80]
        mov EAX,[DAT_00619ba0]
        mov EAX,[DAT_00619bc0]
        mov EAX,[DAT_00619be0]
        mov EAX,[DAT_00619c00]
        mov EAX,[DAT_00619c20]
        mov EAX,[DAT_00619c40]
        mov EAX,[DAT_00619c60]
        mov EAX,[DAT_00619c80]
        mov EAX,[DAT_00619ca0]
        mov EAX,[DAT_00619cc0]
        mov EAX,[DAT_00619ce0]
        mov EAX,[DAT_00619d00]
        mov EAX,[DAT_00619d20]
        mov EAX,[DAT_00619d40]
        mov EAX,[DAT_00619d60]
        mov EAX,[DAT_00619d80]
        mov EAX,[DAT_00619da0]
        mov EAX,[DAT_00619dc0]
        mov EAX,[DAT_00619de0]
        mov EAX,[DAT_00619e00]
        mov EAX,[DAT_00619e20]
        mov EAX,[DAT_00619e40]
        mov EAX,[DAT_00619e60]
        mov EAX,[DAT_00619e80]
        mov EAX,[DAT_00619ea0]
        mov EAX,[DAT_00619ec0]
        mov EAX,[DAT_00619ee0]
        mov EAX,[DAT_00619f00]
        mov EAX,[DAT_00619f20]
        mov EAX,[DAT_00619f40]
        mov EAX,[DAT_00619f60]
        mov EAX,[DAT_00619f80]
        mov EAX,[DAT_00619fa0]
        mov EAX,[DAT_00619fc0]
        mov EAX,[DAT_00619fe0]
        mov EAX,[DAT_0061a000]
        mov EAX,[DAT_0061a020]
        mov EAX,[DAT_0061a040]
        mov EAX,[DAT_0061a060]
        mov EAX,[DAT_0061a080]
        mov EAX,[DAT_0061a0a0]
        mov EAX,[DAT_0061a0c0]
        mov EAX,[DAT_0061a0e0]
        mov EAX,[DAT_0061a100]
        mov EAX,[DAT_0061a120]
        mov EAX,[DAT_0061a140]
        mov EAX,[DAT_0061a160]
        mov EAX,[DAT_0061a180]
        mov EAX,[DAT_0061a1a0]
        mov EAX,[DAT_0061a1c0]
        mov EAX,[DAT_0061a1e0]
        mov EAX,[DAT_0061a200]
        mov EAX,[DAT_0061a220]
        mov EAX,[DAT_0061a240]
        mov EAX,[DAT_0061a260]
        mov EAX,[DAT_0061a280]
        mov EAX,[DAT_0061a2a0]
        mov EAX,[DAT_0061a2c0]
        mov EAX,[DAT_0061a2e0]
        mov EAX,[DAT_0061a300]
        mov EAX,[DAT_0061a320]
        mov EAX,[DAT_0061a340]
    LAB_00489209:
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
        paddw MM0,qword ptr [DAT_006185e8]
        psrlw MM0,0x4
        packuswb MM0,MM7
        movd dword ptr [EDI],MM0
        add ESI,0x4
        inc EBX
        inc EBP
        add EDI,0x4
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
        paddw MM0,qword ptr [DAT_006185f0]
        psrlw MM0,0x4
        packuswb MM0,MM7
        movd dword ptr [EDI],MM0
        add ESI,0x4
        inc EBX
        inc EBP
        add EDI,0x4
        sub ECX,0x2
        jg LAB_00489209
        pop EBP
        emms
}
}
