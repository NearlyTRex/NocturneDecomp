// Name: core_dstrendr.cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57
// Address: 0046fa57
// Address Range: [[0046fa57, 0046fb71]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_0046fa67
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_0046fa67:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [g_ScreenBufferArray + EBX*0x4]
        sub ECX,EAX
        jle LAB_0046fb6c
        shl ECX,0x1
        lea EBP,[EBP + EAX*0x2]
        mov dword ptr [g_PerspectiveScanlinePixelCount],ECX
        mov dword ptr [g_PerspectiveScanlineZPtr],EBP
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [ECX*0x2 + 0x1c6b5d4]
        mov dword ptr [g_PerspectiveNextU],EBX
        mov dword ptr [g_SoftwareDeltaTextureU],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [ECX*0x2 + 0x1c6b5d4]
        mov dword ptr [g_PerspectiveNextV],EBX
        mov dword ptr [g_SoftwareDeltaTextureV],EDX
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX*0x2 + 0x1c6b5d4]
        mov dword ptr [g_StartDepthZ],EBX
        mov dword ptr [g_SoftwareDeltaDepthZ],EDX
        mov ECX,dword ptr [g_PerspectiveNextU]
        mov EDX,dword ptr [g_PerspectiveNextV]
        mov EDI,0x0
        mov ESI,dword ptr [g_StartDepthZ]
    LAB_0046faf6:
        mov EBP,dword ptr [g_PerspectiveScanlineZPtr]
        add EBP,EDI
        movzx EAX,word ptr [EBP]
        cmp ESI,EAX
        jnc LAB_0046fb4d
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [g_TextureShift1]
        psrlq MM2,qword ptr [g_TextureShift2]
        pand MM0,qword ptr [g_TextureMask1]
        pand MM2,qword ptr [g_TextureMask2]
        paddd MM0,MM2
        movd EBX,MM0
        mov EAX,[g_CurrentTextureOpacityData]
        test EAX,0xffffffff
        jnz LAB_0046fb3f
        mov EAX,[g_CurrentTextureData]
    LAB_0046fb3f:
        add EBX,EAX
        movzx EAX,byte ptr [EBX]
        cmp EAX,0x0
        jz LAB_0046fb4d
        mov word ptr [EBP],SI
    LAB_0046fb4d:
        add EDI,0x2
        cmp EDI,dword ptr [g_PerspectiveScanlinePixelCount]
        ja LAB_0046fb6c
        add ECX,dword ptr [g_SoftwareDeltaTextureU]
        add EDX,dword ptr [g_SoftwareDeltaTextureV]
        add ESI,dword ptr [g_SoftwareDeltaDepthZ]
        jmp LAB_0046faf6
    LAB_0046fb6c:
        pop EBP
        emms
}
}
