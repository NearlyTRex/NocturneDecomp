// Name: FUN_00466930
// Address: 00466930
// Address Range: [[00466930, 00466e93]]
// Convention: unknown
// Signature: void FUN_00466930(uint *param_1,undefined4 *param_2,byte *param_3,byte *param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466930(uint *param_1,uint *param_2,byte *param_3,byte *param_4,int param_5)
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
        mov EAX,[DAT_00b0e1fc]
        mov EAX,[DAT_00b0e21c]
        mov EAX,[DAT_00b0e23c]
        mov EAX,[DAT_00b0e25c]
        mov EAX,[DAT_00b0e27c]
        mov EAX,[DAT_00b0e29c]
        mov EAX,[DAT_00b0e2bc]
        mov EAX,[DAT_00b0e2dc]
        mov EAX,[DAT_00b0e2fc]
        mov EAX,[DAT_00b0e31c]
        mov EAX,[DAT_00b0e33c]
        mov EAX,[DAT_00b0e35c]
        mov EAX,[DAT_00b0e37c]
        mov EAX,[DAT_00b0e39c]
        mov EAX,[DAT_00b0e3bc]
        mov EAX,[DAT_00b0e3dc]
        mov EAX,[DAT_00b0e3fc]
        mov EAX,[DAT_00b0e41c]
        mov EAX,[DAT_00b0e43c]
        mov EAX,[DAT_00b0e45c]
        mov EAX,[DAT_00b0e47c]
        mov EAX,[DAT_00b0e49c]
        mov EAX,[DAT_00b0e4bc]
        mov EAX,[DAT_00b0e4dc]
        mov EAX,[DAT_00b0e4fc]
        mov EAX,[DAT_00b0e51c]
        mov EAX,[DAT_00b0e53c]
        mov EAX,[DAT_00b0e55c]
        mov EAX,[DAT_00b0e57c]
        mov EAX,[DAT_00b0e59c]
        mov EAX,[DAT_00b0e5bc]
        mov EAX,[DAT_00b0e5dc]
        mov EAX,[DAT_005b5d00]
        mov EAX,[DAT_005b5d20]
        mov EAX,[DAT_005b5d40]
        mov EAX,[DAT_005b5d60]
        mov EAX,[DAT_005b5d80]
        mov EAX,[DAT_005b5da0]
        mov EAX,[DAT_005b5dc0]
        mov EAX,[DAT_005b5de0]
        mov EAX,[DAT_005b5e00]
        mov EAX,[DAT_005b5e20]
        mov EAX,[DAT_005b5e40]
        mov EAX,[DAT_005b5e60]
        mov EAX,[DAT_005b5e80]
        mov EAX,[DAT_005b5ea0]
        mov EAX,[DAT_005b5ec0]
        mov EAX,[DAT_005b5ee0]
        mov EAX,[DAT_005b5f00]
        mov EAX,[DAT_005b5f20]
        mov EAX,[DAT_005b5f40]
        mov EAX,[DAT_005b5f60]
        mov EAX,[DAT_005b5f80]
        mov EAX,[DAT_005b5fa0]
        mov EAX,[DAT_005b5fc0]
        mov EAX,[DAT_005b5fe0]
        mov EAX,[DAT_005b6000]
        mov EAX,[DAT_005b6020]
        mov EAX,[DAT_005b6040]
        mov EAX,[DAT_005b6060]
        mov EAX,[DAT_005b6080]
        mov EAX,[DAT_005b60a0]
        mov EAX,[DAT_005b60c0]
        mov EAX,[DAT_005b60e0]
        mov EAX,[DAT_005b6100]
        mov EAX,[DAT_005b6120]
        mov EAX,[DAT_005b6140]
        mov EAX,[DAT_005b6160]
        mov EAX,[DAT_005b6180]
        mov EAX,[DAT_005b61a0]
        mov EAX,[DAT_005b61c0]
        mov EAX,[DAT_005b61e0]
        mov EAX,[DAT_005b6200]
        mov EAX,[DAT_005b6220]
        mov EAX,[DAT_005b6240]
        mov EAX,[DAT_005b6260]
        mov EAX,[DAT_005b6280]
        mov EAX,[DAT_005b62a0]
        mov EAX,[DAT_005b62c0]
        mov EAX,[DAT_005b62e0]
        mov EAX,[DAT_005b6300]
        mov EAX,[DAT_005b6320]
        mov EAX,[DAT_005b6340]
        mov EAX,[DAT_005b6360]
        mov EAX,[DAT_005b6380]
        mov EAX,[DAT_005b63a0]
        mov EAX,[DAT_005b63c0]
        mov EAX,[DAT_005b63e0]
        mov EAX,[DAT_005b6400]
        mov EAX,[DAT_005b6420]
        mov EAX,[DAT_005b6440]
        mov EAX,[DAT_005b6460]
        mov EAX,[DAT_005b6480]
        mov EAX,[DAT_005b64a0]
        mov EAX,[DAT_005b64c0]
        mov EAX,[DAT_005b64e0]
    LAB_00466d68:
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
        paddw MM0,qword ptr [DAT_005b4788]
        psrlw MM0,0x4
        packuswb MM0,MM7
        movq MM2,MM0
        movq MM3,MM0
        pand MM0,qword ptr [DAT_005bf610]
        pand MM2,qword ptr [DAT_005bf5f0]
        pand MM3,qword ptr [DAT_005bf5d0]
        psrlq MM0,qword ptr [DAT_005bf658]
        psrlq MM2,qword ptr [DAT_005bf638]
        psrlq MM3,qword ptr [DAT_005bf618]
        por MM0,MM2
        por MM0,MM3
        movq MM6,MM0
        add ESI,0x4
        inc EBX
        inc EBP
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
        paddw MM0,qword ptr [DAT_005b4790]
        psrlw MM0,0x4
        packuswb MM0,MM7
        movq MM2,MM0
        movq MM3,MM0
        pand MM0,qword ptr [DAT_005bf610]
        pand MM2,qword ptr [DAT_005bf5f0]
        pand MM3,qword ptr [DAT_005bf5d0]
        psrlq MM0,qword ptr [DAT_005bf658]
        psrlq MM2,qword ptr [DAT_005bf638]
        psrlq MM3,qword ptr [DAT_005bf618]
        por MM0,MM2
        por MM0,MM3
        psllq MM0,0x10
        por MM0,MM6
        movd dword ptr [EDI],MM0
        add ESI,0x4
        inc EBX
        inc EBP
        add EDI,0x4
        sub ECX,0x2
        jg LAB_00466d68
        pop EBP
        emms
}
}
