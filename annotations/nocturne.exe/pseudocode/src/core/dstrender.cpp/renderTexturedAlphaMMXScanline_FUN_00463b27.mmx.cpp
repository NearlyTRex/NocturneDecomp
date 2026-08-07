// Name: core_dstrender.cpp_renderTexturedAlphaMMXScanline_FUN_00463b27
// Address: 00463b27
// Address Range: [[00463b27, 00463c41]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_00463b27(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_00463b27(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_00463b37
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_00463b37:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [g_ScreenBufferArray + EBX*0x4]
        sub ECX,EAX
        jle LAB_00463c3c
        shl ECX,0x1
        lea EBP,[EBP + EAX*0x2]
        mov dword ptr [DAT_005b06e4],ECX
        mov dword ptr [DAT_005b06e8],EBP
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [ECX*0x2 + 0x1c00c84]
        mov dword ptr [DAT_005b06b8],EBX
        mov dword ptr [DAT_005b06d4],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [ECX*0x2 + 0x1c00c84]
        mov dword ptr [DAT_005b06bc],EBX
        mov dword ptr [DAT_005b06d8],EDX
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX*0x2 + 0x1c00c84]
        mov dword ptr [DAT_005b06c4],EBX
        mov dword ptr [DAT_005b06dc],EDX
        mov ECX,dword ptr [DAT_005b06b8]
        mov EDX,dword ptr [DAT_005b06bc]
        mov EDI,0x0
        mov ESI,dword ptr [DAT_005b06c4]
    LAB_00463bc6:
        mov EBP,dword ptr [DAT_005b06e8]
        add EBP,EDI
        movzx EAX,word ptr [EBP]
        cmp ESI,EAX
        jnc LAB_00463c1d
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_005bf550]
        psrlq MM2,qword ptr [DAT_005bf570]
        pand MM0,qword ptr [DAT_005bf590]
        pand MM2,qword ptr [DAT_005bf5b0]
        paddd MM0,MM2
        movd EBX,MM0
        mov EAX,[DAT_01c02584]
        test EAX,0xffffffff
        jnz LAB_00463c0f
        mov EAX,[DAT_01c02580]
    LAB_00463c0f:
        add EBX,EAX
        movzx EAX,byte ptr [EBX]
        cmp EAX,0x0
        jz LAB_00463c1d
        mov word ptr [EBP],SI
    LAB_00463c1d:
        add EDI,0x2
        cmp EDI,dword ptr [DAT_005b06e4]
        ja LAB_00463c3c
        add ECX,dword ptr [DAT_005b06d4]
        add EDX,dword ptr [DAT_005b06d8]
        add ESI,dword ptr [DAT_005b06dc]
        jmp LAB_00463bc6
    LAB_00463c3c:
        pop EBP
        emms
}
}
