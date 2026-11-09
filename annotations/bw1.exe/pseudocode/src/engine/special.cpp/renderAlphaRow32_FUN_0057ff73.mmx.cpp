// Name: engine_special.cpp_renderAlphaRow32_FUN_0057ff73
// Address: 0057ff73
// Address Range: [[0057ff73, 0058000d]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_renderAlphaRow32_FUN_0057ff73(uint *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_renderAlphaRow32_FUN_0057ff73(uint *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)
{
__asm {
        pushad
        mov EDI,dword ptr [EBP + 0x8]
        mov ESI,dword ptr [EBP + 0xc]
        mov EBX,dword ptr [EBP + 0x10]
        mov ECX,dword ptr [EBP + 0x18]
        mov EBP,dword ptr [EBP + 0x14]
        pxor MM7,MM7
        shr EBP,0x8
    LAB_0057ff8c:
        movzx EAX,byte ptr [ESI]
        movd MM0,dword ptr [DAT_01c4e3d4 + EAX*0x4]
        movzx EAX,byte ptr [EBX]
        imul EAX,EBP
        cmp dword ptr [DAT_01c51d0c],0x1
        jz LAB_0057ffb4
        cmp EAX,0xfde8
        jge LAB_0057fffe
        cmp EAX,0xff
        jle LAB_00580001
    LAB_0057ffb4:
        shr EAX,0x8
        punpcklbw MM0,MM7
        movq MM1,qword ptr [DAT_006247d0 + EAX*0x8]
        movq MM2,MM1
        pxor MM2,qword ptr [DAT_00624fc8]
        movd MM3,dword ptr [EDI]
        punpcklbw MM3,MM7
        cmp dword ptr [DAT_01c51d0c],0x1
        jz LAB_0057ffed
        pmullw MM0,MM1
        pmullw MM3,MM2
        paddw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_0057fffe
    LAB_0057ffed:
        psllw MM3,0x8
        pmullw MM0,MM1
        paddusw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0057fffe:
        movd dword ptr [EDI],MM0
    LAB_00580001:
        inc ESI
        inc EBX
        add EDI,0x4
        dec ECX
        jg LAB_0057ff8c
        popad
        emms
}
}
