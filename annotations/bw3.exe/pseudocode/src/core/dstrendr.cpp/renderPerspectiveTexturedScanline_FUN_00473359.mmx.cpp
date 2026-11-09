// Name: core_dstrendr.cpp_renderPerspectiveTexturedScanline_FUN_00473359
// Address: 00473359
// Address Range: [[00473359, 00473432] [00473440, 00473445]]
// Convention: unknown
// Signature: uint core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_00473359(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dstrendr_cpp_renderPerspectiveTexturedScanline_FUN_00473359(void)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_00473369
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_00473369:
        shr ECX,0x10
        shr EAX,0x10
        mov EBX,dword ptr [EBX*0x4 + 0x1c5faec]
        sub ECX,EAX
        jle LAB_00473440
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        mov dword ptr [DAT_005f4ac4],ECX
        mov dword ptr [DAT_005f4ac0],EBX
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c6b5d4]
        mov dword ptr [DAT_005f4a98],EBX
        mov dword ptr [DAT_005f4ab4],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c6b5d4]
        mov dword ptr [DAT_005f4a9c],EBX
        mov dword ptr [DAT_005f4ab8],EDX
        mov ECX,dword ptr [DAT_005f4a98]
        mov EDX,dword ptr [DAT_005f4a9c]
        mov EDI,0x0
    LAB_004733d5:
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_00604df8]
        psrlq MM2,qword ptr [DAT_00604e18]
        pand MM0,qword ptr [DAT_00604e38]
        pand MM2,qword ptr [DAT_00604e58]
        paddd MM0,MM2
        movd EBX,MM0
        shl EBX,0x2
        add EBX,dword ptr [DAT_01c6ced0]
        movd MM0,dword ptr [EBX]
        mov EBX,dword ptr [DAT_005f4ac0]
        add EBX,EDI
        movd dword ptr [EBX],MM0
        add EDI,0x4
        cmp EDI,dword ptr [DAT_005f4ac4]
        jnc LAB_00473440
        add ECX,dword ptr [DAT_005f4ab4]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_005f4ab8]
        movq MM0,MM5
        jmp LAB_004733d5
    LAB_00473440:
        pop EBP
        emms
}
}
