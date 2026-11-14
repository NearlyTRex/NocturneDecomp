// Name: core_dstrendr.cpp_renderTexturedDecalMMXScanline_FUN_0047090d
// Address: 0047090d
// Address Range: [[0047090d, 00470a2b]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_0047090d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_0047090d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_0047091d
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_0047091d:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [DAT_01c60dac + EBX*0x4]
        mov EBX,dword ptr [DAT_01c5faec + EBX*0x4]
        sub ECX,EAX
        jle LAB_00470a26
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [DAT_005f4ac4],ECX
        mov dword ptr [DAT_005f4ac0],EBX
        mov dword ptr [DAT_005f4ac8],EBP
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX]
        mov dword ptr [DAT_005f4a98],EBX
        mov dword ptr [DAT_005f4ab4],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX]
        mov dword ptr [DAT_005f4a9c],EBX
        mov dword ptr [DAT_005f4ab8],EDX
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX]
        mov dword ptr [DAT_005f4aa4],EBX
        mov dword ptr [DAT_005f4abc],EDX
        mov ECX,dword ptr [DAT_005f4a98]
        mov EDX,dword ptr [DAT_005f4a9c]
        mov EDI,0x0
        mov ESI,dword ptr [DAT_005f4aa4]
    LAB_004709ba:
        mov EAX,[DAT_005f4ac8]
        add EAX,EDI
        cmp ESI,dword ptr [EAX]
        jl LAB_00470a07
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_00604df8]
        psrlq MM2,qword ptr [DAT_00604e18]
        pand MM0,qword ptr [DAT_00604e38]
        pand MM2,qword ptr [DAT_00604e58]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [DAT_01c6ced0]
        movzx EAX,byte ptr [EBX]
        mov EAX,dword ptr [DAT_01c6a974 + EAX*0x4]
        mov EBX,dword ptr [DAT_005f4ac0]
        add EBX,EDI
        mov dword ptr [EBX],EAX
    LAB_00470a07:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_005f4ac4]
        ja LAB_00470a26
        add ECX,dword ptr [DAT_005f4ab4]
        add EDX,dword ptr [DAT_005f4ab8]
        add ESI,dword ptr [DAT_005f4abc]
        jmp LAB_004709ba
    LAB_00470a26:
        pop EBP
        emms
}
}
