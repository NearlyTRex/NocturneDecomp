// Name: wincore_windll.cpp_renderAlphaRow32_FUN_005b555c
// Address: 005b555c
// Address Range: [[005b555c, 005b55f6]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_renderAlphaRow32_FUN_005b555c (uint *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)

#include "nocturne.h"

void __cdecl
wincore_windll_cpp_renderAlphaRow32_FUN_005b555c
          (uint *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)
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
    LAB_005b5575:
        movzx EAX,byte ptr [ESI]
        movd MM0,dword ptr [g_Hardware32BitPalette + EAX*0x4]
        movzx EAX,byte ptr [EBX]
        imul EAX,EBP
        cmp dword ptr [g_BlendMode],0x1
        jz LAB_005b559d
        cmp EAX,0xfde8
        jge LAB_005b55e7
        cmp EAX,0xff
        jle LAB_005b55ea
    LAB_005b559d:
        shr EAX,0x8
        punpcklbw MM0,MM7
        movq MM1,qword ptr [g_AlphaTable + EAX*0x8]
        movq MM2,MM1
        pxor MM2,qword ptr [0x006837f8]
        movd MM3,dword ptr [EDI]
        punpcklbw MM3,MM7
        cmp dword ptr [g_BlendMode],0x1
        jz LAB_005b55d6
        pmullw MM0,MM1
        pmullw MM3,MM2
        paddw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_005b55e7
    LAB_005b55d6:
        psllw MM3,0x8
        pmullw MM0,MM1
        paddusw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_005b55e7:
        movd dword ptr [EDI],MM0
    LAB_005b55ea:
        inc ESI
        inc EBX
        add EDI,0x4
        dec ECX
        jg LAB_005b5575
        popad
        emms
}
}
