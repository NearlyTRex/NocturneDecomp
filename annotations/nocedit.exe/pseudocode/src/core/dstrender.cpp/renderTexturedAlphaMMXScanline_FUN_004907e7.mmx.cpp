// Name: core_dstrender.cpp_renderTexturedAlphaMMXScanline_FUN_004907e7
// Address: 004907e7
// Address Range: [[004907e7, 00490901]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_004907e7(SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_renderTexturedAlphaMMXScanline_FUN_004907e7(SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_004907f7
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_004907f7:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [g_ScreenBufferArray + EBX*0x4]
        sub ECX,EAX
        jle LAB_004908fc
        shl ECX,0x1
        lea EBP,[EBP + EAX*0x2]
        mov dword ptr [g_PerspectiveScanlinePixelCount],ECX
        mov dword ptr [g_PerspectiveScanlineZPtr],EBP
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [DAT_02d02584 + ECX*0x2]
        mov dword ptr [g_PerspectiveNextU],EBX
        mov dword ptr [g_DeltaTextureU],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [DAT_02d02584 + ECX*0x2]
        mov dword ptr [g_PerspectiveNextV],EBX
        mov dword ptr [g_DeltaTextureV],EDX
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [DAT_02d02584 + ECX*0x2]
        mov dword ptr [g_StartDepthZ],EBX
        mov dword ptr [g_DeltaDepthZ],EDX
        mov ECX,dword ptr [g_PerspectiveNextU]
        mov EDX,dword ptr [g_PerspectiveNextV]
        mov EDI,0x0
        mov ESI,dword ptr [g_StartDepthZ]
    LAB_00490886:
        mov EBP,dword ptr [g_PerspectiveScanlineZPtr]
        add EBP,EDI
        movzx EAX,word ptr [EBP]
        cmp ESI,EAX
        jnc LAB_004908dd
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
        jnz LAB_004908cf
        mov EAX,[g_CurrentTextureData]
    LAB_004908cf:
        add EBX,EAX
        movzx EAX,byte ptr [EBX]
        cmp EAX,0x0
        jz LAB_004908dd
        mov word ptr [EBP],SI
    LAB_004908dd:
        add EDI,0x2
        cmp EDI,dword ptr [g_PerspectiveScanlinePixelCount]
        ja LAB_004908fc
        add ECX,dword ptr [g_DeltaTextureU]
        add EDX,dword ptr [g_DeltaTextureV]
        add ESI,dword ptr [g_DeltaDepthZ]
        jmp LAB_00490886
    LAB_004908fc:
        pop EBP
        emms
}
}
