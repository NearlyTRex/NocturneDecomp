// Name: core_dstrender.cpp_renderPerspectiveTexturedScanline_FUN_004940e9
// Address: 004940e9
// Address Range: [[004940e9, 004941c2] [004941d0, 004941d5]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrender_cpp_renderPerspectiveTexturedScanline_FUN_004940e9(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrender_cpp_renderPerspectiveTexturedScanline_FUN_004940e9(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_004940f9
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_004940f9:
        shr ECX,0x10
        shr EAX,0x10
        mov EBX,dword ptr [g_ScreenBufferArray + EBX*0x4]
        sub ECX,EAX
        jle LAB_004941d0
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        mov dword ptr [g_PerspectiveScanlinePixelCount],ECX
        mov dword ptr [g_PerspectiveScanlineColorPtr],EBX
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [ECX + 0x2d02584]
        mov dword ptr [g_PerspectiveNextU],EBX
        mov dword ptr [g_SoftwareDeltaTextureU],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [ECX + 0x2d02584]
        mov dword ptr [g_PerspectiveNextV],EBX
        mov dword ptr [g_SoftwareDeltaTextureV],EDX
        mov ECX,dword ptr [g_PerspectiveNextU]
        mov EDX,dword ptr [g_PerspectiveNextV]
        mov EDI,0x0
    LAB_00494165:
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [g_TextureShift1]
        psrlq MM2,qword ptr [g_TextureShift2]
        pand MM0,qword ptr [g_TextureMask1]
        pand MM2,qword ptr [g_TextureMask2]
        paddd MM0,MM2
        movd EBX,MM0
        shl EBX,0x2
        add EBX,dword ptr [g_CurrentTextureData]
        movd MM0,dword ptr [EBX]
        mov EBX,dword ptr [g_PerspectiveScanlineColorPtr]
        add EBX,EDI
        movd dword ptr [EBX],MM0
        add EDI,0x4
        cmp EDI,dword ptr [g_PerspectiveScanlinePixelCount]
        jnc LAB_004941d0
        add ECX,dword ptr [g_SoftwareDeltaTextureU]
        paddw MM5,MM6
        add EDX,dword ptr [g_SoftwareDeltaTextureV]
        movq MM0,MM5
        jmp LAB_00494165
    LAB_004941d0:
        pop EBP
        emms
}
}
