// Name: core_dstrender.cpp_renderTexturedDecalMMXScanline_FUN_0049169d
// Address: 0049169d
// Address Range: [[0049169d, 004917bb]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_0049169d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_0049169d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_004916ad
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_004916ad:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [g_ZBufferScanlineArray + EBX*0x4]
        mov EBX,dword ptr [g_ScreenBufferArray + EBX*0x4]
        sub ECX,EAX
        jle LAB_004917b6
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [g_PerspectiveScanlinePixelCount],ECX
        mov dword ptr [g_PerspectiveScanlineColorPtr],EBX
        mov dword ptr [g_PerspectiveScanlineZPtr],EBP
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [DAT_02d02584 + ECX]
        mov dword ptr [g_PerspectiveNextU],EBX
        mov dword ptr [g_DeltaTextureU],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [DAT_02d02584 + ECX]
        mov dword ptr [g_PerspectiveNextV],EBX
        mov dword ptr [g_DeltaTextureV],EDX
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [DAT_02d02584 + ECX]
        mov dword ptr [g_StartDepthZ],EBX
        mov dword ptr [g_DeltaDepthZ],EDX
        mov ECX,dword ptr [g_PerspectiveNextU]
        mov EDX,dword ptr [g_PerspectiveNextV]
        mov EDI,0x0
        mov ESI,dword ptr [g_StartDepthZ]
    LAB_0049174a:
        mov EAX,[g_PerspectiveScanlineZPtr]
        add EAX,EDI
        cmp ESI,dword ptr [EAX]
        jl LAB_00491797
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [g_TextureShift1]
        psrlq MM2,qword ptr [g_TextureShift2]
        pand MM0,qword ptr [g_TextureMask1]
        pand MM2,qword ptr [g_TextureMask2]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [g_CurrentTextureData]
        movzx EAX,byte ptr [EBX]
        mov EAX,dword ptr [g_Hardware32BitPalette + EAX*0x4]
        mov EBX,dword ptr [g_PerspectiveScanlineColorPtr]
        add EBX,EDI
        mov dword ptr [EBX],EAX
    LAB_00491797:
        add EDI,0x4
        cmp EDI,dword ptr [g_PerspectiveScanlinePixelCount]
        ja LAB_004917b6
        add ECX,dword ptr [g_DeltaTextureU]
        add EDX,dword ptr [g_DeltaTextureV]
        add ESI,dword ptr [g_DeltaDepthZ]
        jmp LAB_0049174a
    LAB_004917b6:
        pop EBP
        emms
}
}
