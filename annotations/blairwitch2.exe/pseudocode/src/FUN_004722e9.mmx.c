// Name: FUN_004722e9
// Address: 004722e9
// Address Range: [[004722e9, 004723c2] [004723d0, 004723d5]]
// Convention: unknown
// Signature: uint FUN_004722e9(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004722e9(void)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_004722f9
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_004722f9:
        shr ECX,0x10
        shr EAX,0x10
        mov EBX,dword ptr [EBX*0x4 + 0x1c2a38c]
        sub ECX,EAX
        jle LAB_004723d0
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        mov dword ptr [DAT_0060d264],ECX
        mov dword ptr [DAT_0060d260],EBX
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c35e74]
        mov dword ptr [DAT_0060d238],EBX
        mov dword ptr [DAT_0060d254],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c35e74]
        mov dword ptr [DAT_0060d23c],EBX
        mov dword ptr [DAT_0060d258],EDX
        mov ECX,dword ptr [DAT_0060d238]
        mov EDX,dword ptr [DAT_0060d23c]
        mov EDI,0x0
    LAB_00472365:
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_0061c868]
        psrlq MM2,qword ptr [DAT_0061c888]
        pand MM0,qword ptr [DAT_0061c8a8]
        pand MM2,qword ptr [DAT_0061c8c8]
        paddd MM0,MM2
        movd EBX,MM0
        shl EBX,0x2
        add EBX,dword ptr [DAT_01c37770]
        movd MM0,dword ptr [EBX]
        mov EBX,dword ptr [DAT_0060d260]
        add EBX,EDI
        movd dword ptr [EBX],MM0
        add EDI,0x4
        cmp EDI,dword ptr [DAT_0060d264]
        jnc LAB_004723d0
        add ECX,dword ptr [DAT_0060d254]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_0060d258]
        movq MM0,MM5
        jmp LAB_00472365
    LAB_004723d0:
        pop EBP
        emms
}
}
