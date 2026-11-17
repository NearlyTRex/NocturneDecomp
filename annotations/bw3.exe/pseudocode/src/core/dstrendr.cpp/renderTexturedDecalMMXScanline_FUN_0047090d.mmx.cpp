// Name: core_dstrendr.cpp_renderTexturedDecalMMXScanline_FUN_0047090d
// Address: 0047090d
// Address Range: [[0047090d, 00470a2b]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_0047090d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_0047090d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_0047091d
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_0047091d:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [g_ZBufferScanlineArray + EBX*0x4]
        mov EBX,dword ptr [g_ScreenBufferArray + EBX*0x4]
        sub ECX,EAX
        jle LAB_00470a26
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [g_PerspectiveScanlinePixelCount],ECX
        mov dword ptr [g_PerspectiveScanlineColorPtr],EBX
        mov dword ptr [g_PerspectiveScanlineZPtr],EBP
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c6b5d4]
        mov dword ptr [g_PerspectiveNextU],EBX
        mov dword ptr [g_SoftwareDeltaTextureU],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c6b5d4]
        mov dword ptr [g_PerspectiveNextV],EBX
        mov dword ptr [g_SoftwareDeltaTextureV],EDX
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c6b5d4]
        mov dword ptr [g_StartDepthZ],EBX
        mov dword ptr [g_SoftwareDeltaDepthZ],EDX
        mov ECX,dword ptr [g_PerspectiveNextU]
        mov EDX,dword ptr [g_PerspectiveNextV]
        mov EDI,0x0
        mov ESI,dword ptr [g_StartDepthZ]
    LAB_004709ba:
        mov EAX,[g_PerspectiveScanlineZPtr]
        add EAX,EDI
        cmp ESI,dword ptr [EAX]
        jl LAB_00470a07
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
    LAB_00470a07:
        add EDI,0x4
        cmp EDI,dword ptr [g_PerspectiveScanlinePixelCount]
        ja LAB_00470a26
        add ECX,dword ptr [g_SoftwareDeltaTextureU]
        add EDX,dword ptr [g_SoftwareDeltaTextureV]
        add ESI,dword ptr [g_SoftwareDeltaDepthZ]
        jmp LAB_004709ba
    LAB_00470a26:
        pop EBP
        emms
}
}
