// Name: core_dstrendr.cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7
// Address: 00486ed7
// Address Range: [[00486ed7, 00486ff1]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_00486ed7(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_00486ee7
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_00486ee7:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [DAT_01c4354c + EBX*0x4]
        sub ECX,EAX
        jle LAB_00486fec
        shl ECX,0x1
        lea EBP,[EBP + EAX*0x2]
        mov dword ptr [DAT_00614544],ECX
        mov dword ptr [DAT_00614548],EBP
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [DAT_01c4f034 + ECX*0x2]
        mov dword ptr [DAT_00614518],EBX
        mov dword ptr [DAT_00614534],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [DAT_01c4f034 + ECX*0x2]
        mov dword ptr [DAT_0061451c],EBX
        mov dword ptr [DAT_00614538],EDX
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [DAT_01c4f034 + ECX*0x2]
        mov dword ptr [DAT_00614524],EBX
        mov dword ptr [DAT_0061453c],EDX
        mov ECX,dword ptr [DAT_00614518]
        mov EDX,dword ptr [DAT_0061451c]
        mov EDI,0x0
        mov ESI,dword ptr [DAT_00614524]
    LAB_00486f76:
        mov EBP,dword ptr [DAT_00614548]
        add EBP,EDI
        movzx EAX,word ptr [EBP]
        cmp ESI,EAX
        jnc LAB_00486fcd
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_00623eb8]
        psrlq MM2,qword ptr [DAT_00623ed8]
        pand MM0,qword ptr [DAT_00623ef8]
        pand MM2,qword ptr [DAT_00623f18]
        paddd MM0,MM2
        movd EBX,MM0
        mov EAX,[DAT_01c50934]
        test EAX,0xffffffff
        jnz LAB_00486fbf
        mov EAX,[DAT_01c50930]
    LAB_00486fbf:
        add EBX,EAX
        movzx EAX,byte ptr [EBX]
        cmp EAX,0x0
        jz LAB_00486fcd
        mov word ptr [EBP],SI
    LAB_00486fcd:
        add EDI,0x2
        cmp EDI,dword ptr [DAT_00614544]
        ja LAB_00486fec
        add ECX,dword ptr [DAT_00614534]
        add EDX,dword ptr [DAT_00614538]
        add ESI,dword ptr [DAT_0061453c]
        jmp LAB_00486f76
    LAB_00486fec:
        pop EBP
        emms
}
}
