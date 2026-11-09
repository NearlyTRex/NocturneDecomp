// Name: core_dstrendr.cpp_FUN_00488cb5
// Address: 00488cb5
// Address Range: [[00488cb5, 00488dd0]]
// Convention: unknown
// Signature: void core_dstrendr_cpp_FUN_00488cb5(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dstrendr_cpp_FUN_00488cb5(ulonglong *param_1,ulonglong *param_2,byte *param_3,byte *param_4,int param_5)
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
    LAB_00488cdb:
        movzx EDX,byte ptr [EBX]
        movq MM0,qword ptr [ESI]
        movd MM2,dword ptr [EDX*0x4 + 0xb8189c]
        movzx EAX,byte ptr [EBP]
        movq MM1,MM0
        punpcklbw MM0,MM7
        shr EDX,0x1
        psrlq MM1,0x20
        punpcklbw MM2,MM7
        add EAX,EDX
        punpcklbw MM1,MM7
        pmullw MM0,MM2
        movq MM3,qword ptr [EAX*0x8 + 0x619b60]
        pmullw MM1,MM2
        movq MM2,MM3
        movq MM4,MM5
        pxor MM2,qword ptr [DAT_0061a358]
        pmulhw MM0,MM2
        pmulhw MM1,MM2
        pmulhw MM4,MM3
        paddw MM0,MM4
        paddw MM1,MM4
        paddw MM0,qword ptr [DAT_006185f8]
        paddw MM1,qword ptr [DAT_00618600]
        psrlw MM0,0x4
        psrlw MM1,0x4
        packuswb MM0,MM1
        add ESI,0x8
        movq qword ptr [EDI],MM0
        add EDI,0x8
        movzx EDX,byte ptr [EBX]
        movq MM0,qword ptr [ESI]
        movd MM2,dword ptr [EDX*0x4 + 0xb8189c]
        movzx EAX,byte ptr [EBP]
        movq MM1,MM0
        punpcklbw MM0,MM7
        shr EDX,0x1
        psrlq MM1,0x20
        punpcklbw MM2,MM7
        add EAX,EDX
        punpcklbw MM1,MM7
        pmullw MM0,MM2
        movq MM3,qword ptr [EAX*0x8 + 0x619b60]
        pmullw MM1,MM2
        movq MM2,MM3
        movq MM4,MM5
        pxor MM2,qword ptr [DAT_0061a358]
        pmulhw MM0,MM2
        pmulhw MM1,MM2
        pmulhw MM4,MM3
        paddw MM0,MM4
        paddw MM1,MM4
        paddw MM0,qword ptr [DAT_006185f8]
        paddw MM1,qword ptr [DAT_00618600]
        psrlw MM0,0x4
        psrlw MM1,0x4
        packuswb MM0,MM1
        add ESI,0x8
        movq qword ptr [EDI],MM0
        add EDI,0x8
        inc EBX
        inc EBP
        sub ECX,0x4
        jg LAB_00488cdb
        pop EBP
        emms
}
}
