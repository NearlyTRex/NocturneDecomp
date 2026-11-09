// Name: core_dstrendr.cpp_renderPerspectiveTexturedScanline_FUN_0048a7d9
// Address: 0048a7d9
// Address Range: [[0048a7d9, 0048a8b2] [0048a8c0, 0048a8c5]]
// Convention: unknown
// Signature: uint core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_0048a7d9(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_0048a7d9(void)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_0048a7e9
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_0048a7e9:
        shr ECX,0x10
        shr EAX,0x10
        mov EBX,dword ptr [EBX*0x4 + 0x1c4354c]
        sub ECX,EAX
        jle LAB_0048a8c0
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        mov dword ptr [DAT_00614544],ECX
        mov dword ptr [DAT_00614540],EBX
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c4f034]
        mov dword ptr [DAT_00614518],EBX
        mov dword ptr [DAT_00614534],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c4f034]
        mov dword ptr [DAT_0061451c],EBX
        mov dword ptr [DAT_00614538],EDX
        mov ECX,dword ptr [DAT_00614518]
        mov EDX,dword ptr [DAT_0061451c]
        mov EDI,0x0
    LAB_0048a855:
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_00623eb8]
        psrlq MM2,qword ptr [DAT_00623ed8]
        pand MM0,qword ptr [DAT_00623ef8]
        pand MM2,qword ptr [DAT_00623f18]
        paddd MM0,MM2
        movd EBX,MM0
        shl EBX,0x2
        add EBX,dword ptr [DAT_01c50930]
        movd MM0,dword ptr [EBX]
        mov EBX,dword ptr [DAT_00614540]
        add EBX,EDI
        movd dword ptr [EBX],MM0
        add EDI,0x4
        cmp EDI,dword ptr [DAT_00614544]
        jnc LAB_0048a8c0
        add ECX,dword ptr [DAT_00614534]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_00614538]
        movq MM0,MM5
        jmp LAB_0048a855
    LAB_0048a8c0:
        pop EBP
        emms
}
}
