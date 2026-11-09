// Name: core_dstrendr.cpp_renderTexturedAlphaMMXScanline_FUN_0046e9e7
// Address: 0046e9e7
// Address Range: [[0046e9e7, 0046eb01]]
// Convention: unknown
// Signature: void core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046e9e7(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046e9e7(void)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_0046e9f7
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_0046e9f7:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [DAT_01c2a38c + EBX*0x4]
        sub ECX,EAX
        jle LAB_0046eafc
        shl ECX,0x1
        lea EBP,[EBP + EAX*0x2]
        mov dword ptr [DAT_0060d264],ECX
        mov dword ptr [DAT_0060d268],EBP
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [DAT_01c35e74 + ECX*0x2]
        mov dword ptr [DAT_0060d238],EBX
        mov dword ptr [DAT_0060d254],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [DAT_01c35e74 + ECX*0x2]
        mov dword ptr [DAT_0060d23c],EBX
        mov dword ptr [DAT_0060d258],EDX
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [DAT_01c35e74 + ECX*0x2]
        mov dword ptr [DAT_0060d244],EBX
        mov dword ptr [DAT_0060d25c],EDX
        mov ECX,dword ptr [DAT_0060d238]
        mov EDX,dword ptr [DAT_0060d23c]
        mov EDI,0x0
        mov ESI,dword ptr [DAT_0060d244]
    LAB_0046ea86:
        mov EBP,dword ptr [DAT_0060d268]
        add EBP,EDI
        movzx EAX,word ptr [EBP]
        cmp ESI,EAX
        jnc LAB_0046eadd
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_0061c868]
        psrlq MM2,qword ptr [DAT_0061c888]
        pand MM0,qword ptr [DAT_0061c8a8]
        pand MM2,qword ptr [DAT_0061c8c8]
        paddd MM0,MM2
        movd EBX,MM0
        mov EAX,[DAT_01c37774]
        test EAX,0xffffffff
        jnz LAB_0046eacf
        mov EAX,[DAT_01c37770]
    LAB_0046eacf:
        add EBX,EAX
        movzx EAX,byte ptr [EBX]
        cmp EAX,0x0
        jz LAB_0046eadd
        mov word ptr [EBP],SI
    LAB_0046eadd:
        add EDI,0x2
        cmp EDI,dword ptr [DAT_0060d264]
        ja LAB_0046eafc
        add ECX,dword ptr [DAT_0060d254]
        add EDX,dword ptr [DAT_0060d258]
        add ESI,dword ptr [DAT_0060d25c]
        jmp LAB_0046ea86
    LAB_0046eafc:
        pop EBP
        emms
}
}
