// Name: core_dstrendr.cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57
// Address: 0046fa57
// Address Range: [[0046fa57, 0046fb71]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_0046fa67
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_0046fa67:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [DAT_01c5faec + EBX*0x4]
        sub ECX,EAX
        jle LAB_0046fb6c
        shl ECX,0x1
        lea EBP,[EBP + EAX*0x2]
        mov dword ptr [DAT_005f4ac4],ECX
        mov dword ptr [DAT_005f4ac8],EBP
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX*0x2]
        mov dword ptr [DAT_005f4a98],EBX
        mov dword ptr [DAT_005f4ab4],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX*0x2]
        mov dword ptr [DAT_005f4a9c],EBX
        mov dword ptr [DAT_005f4ab8],EDX
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX*0x2]
        mov dword ptr [DAT_005f4aa4],EBX
        mov dword ptr [DAT_005f4abc],EDX
        mov ECX,dword ptr [DAT_005f4a98]
        mov EDX,dword ptr [DAT_005f4a9c]
        mov EDI,0x0
        mov ESI,dword ptr [DAT_005f4aa4]
    LAB_0046faf6:
        mov EBP,dword ptr [DAT_005f4ac8]
        add EBP,EDI
        movzx EAX,word ptr [EBP]
        cmp ESI,EAX
        jnc LAB_0046fb4d
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_00604df8]
        psrlq MM2,qword ptr [DAT_00604e18]
        pand MM0,qword ptr [DAT_00604e38]
        pand MM2,qword ptr [DAT_00604e58]
        paddd MM0,MM2
        movd EBX,MM0
        mov EAX,[DAT_01c6ced4]
        test EAX,0xffffffff
        jnz LAB_0046fb3f
        mov EAX,[DAT_01c6ced0]
    LAB_0046fb3f:
        add EBX,EAX
        movzx EAX,byte ptr [EBX]
        cmp EAX,0x0
        jz LAB_0046fb4d
        mov word ptr [EBP],SI
    LAB_0046fb4d:
        add EDI,0x2
        cmp EDI,dword ptr [DAT_005f4ac4]
        ja LAB_0046fb6c
        add ECX,dword ptr [DAT_005f4ab4]
        add EDX,dword ptr [DAT_005f4ab8]
        add ESI,dword ptr [DAT_005f4abc]
        jmp LAB_0046faf6
    LAB_0046fb6c:
        pop EBP
        emms
}
}
