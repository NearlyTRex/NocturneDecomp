// Name: core_dstrender.cpp_renderTexturedDecalMMXScanline_FUN_004649dd
// Address: 004649dd
// Address Range: [[004649dd, 00464afb]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_004649dd(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_004649dd(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_004649ed
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_004649ed:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [DAT_01bd4260 + EBX*0x4]
        mov EBX,dword ptr [DAT_01bd2fa0 + EBX*0x4]
        sub ECX,EAX
        jle LAB_00464af6
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [DAT_005b06e4],ECX
        mov dword ptr [DAT_005b06e0],EBX
        mov dword ptr [DAT_005b06e8],EBP
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [DAT_01c00c84 + ECX]
        mov dword ptr [DAT_005b06b8],EBX
        mov dword ptr [DAT_005b06d4],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [DAT_01c00c84 + ECX]
        mov dword ptr [DAT_005b06bc],EBX
        mov dword ptr [DAT_005b06d8],EDX
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [DAT_01c00c84 + ECX]
        mov dword ptr [DAT_005b06c4],EBX
        mov dword ptr [DAT_005b06dc],EDX
        mov ECX,dword ptr [DAT_005b06b8]
        mov EDX,dword ptr [DAT_005b06bc]
        mov EDI,0x0
        mov ESI,dword ptr [DAT_005b06c4]
    LAB_00464a8a:
        mov EAX,[DAT_005b06e8]
        add EAX,EDI
        cmp ESI,dword ptr [EAX]
        jl LAB_00464ad7
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_005bf550]
        psrlq MM2,qword ptr [DAT_005bf570]
        pand MM0,qword ptr [DAT_005bf590]
        pand MM2,qword ptr [DAT_005bf5b0]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [DAT_01c02580]
        movzx EAX,byte ptr [EBX]
        mov EAX,dword ptr [DAT_01c00024 + EAX*0x4]
        mov EBX,dword ptr [DAT_005b06e0]
        add EBX,EDI
        mov dword ptr [EBX],EAX
    LAB_00464ad7:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_005b06e4]
        ja LAB_00464af6
        add ECX,dword ptr [DAT_005b06d4]
        add EDX,dword ptr [DAT_005b06d8]
        add ESI,dword ptr [DAT_005b06dc]
        jmp LAB_00464a8a
    LAB_00464af6:
        pop EBP
        emms
}
}
