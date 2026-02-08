// Name: wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7
// Address: 005b55f7
// Address Range: [[005b55f7, 005b570f]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_renderAlphaRow16_FUN_005b55f7 (ushort *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)

#include "nocturne.h"

void __cdecl
wincore_windll_cpp_renderAlphaRow16_FUN_005b55f7
          (ushort *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)
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
    LAB_005b5610:
        movzx EAX,byte ptr [ESI]
        movd MM0,dword ptr [g_Hardware32BitPalette + EAX*0x4]
        movzx EAX,byte ptr [EBX]
        imul EAX,EBP
        cmp dword ptr [g_BlendMode],0x1
        jz LAB_005b5640
        cmp EAX,0xfde8
        jge LAB_005b56c3
        cmp EAX,0xff
        jle LAB_005b56ff
    LAB_005b5640:
        shr EAX,0x8
        punpcklbw MM0,MM7
        movq MM1,qword ptr [g_AlphaTable + EAX*0x8]
        movq MM2,MM1
        pxor MM2,qword ptr [0x006837f8]
        movzx EAX,word ptr [EDI]
        movd MM3,EAX
        pand MM3,qword ptr [g_BlueMask16]
        psllq MM3,qword ptr [g_BlueBitShift]
        movd MM4,EAX
        pand MM4,qword ptr [g_GreenMask16]
        psllq MM4,qword ptr [g_GreenBlueBits]
        por MM3,MM4
        movd MM5,EAX
        pand MM5,qword ptr [g_RedMask16]
        psllq MM5,qword ptr [g_TotalColorBits]
        por MM3,MM5
        punpcklbw MM3,MM7
        cmp dword ptr [g_BlendMode],0x1
        jz LAB_005b56b2
        pmullw MM0,MM1
        pmullw MM3,MM2
        paddw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_005b56c3
    LAB_005b56b2:
        psllw MM3,0x8
        pmullw MM0,MM1
        paddusw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_005b56c3:
        movq MM2,MM0
        movq MM4,MM0
        pand MM0,qword ptr [g_BlueMask32]
        pand MM2,qword ptr [g_GreenMask32]
        pand MM4,qword ptr [g_RedMask32]
        psrlq MM0,qword ptr [g_BlueBitShift]
        psrlq MM2,qword ptr [g_GreenBlueBits]
        psrlq MM4,qword ptr [g_TotalColorBits]
        por MM0,MM2
        por MM0,MM4
        movd EAX,MM0
        mov word ptr [EDI],AX
    LAB_005b56ff:
        inc ESI
        inc EBX
        add EDI,0x2
        dec ECX
        jg LAB_005b5610
        popad
        emms
}
}
