// Name: engine_special.cpp_renderMMXPerspectiveScanlineTrueColor16_FUN_0057f473
// Address: 0057f473
// Address Range: [[0057f473, 0057f540] [0057f550, 0057f800] [0057f810, 0057f818] [0057f820, 0057f827] [0057f830, 0057f8e8] [0057f8f0, 0057fa81] [0057fa96, 0057faad] [0057fab0, 0057fabb] [0057fac0, 0057fb02]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanlineTrueColor16_FUN_0057f473(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanlineTrueColor16_FUN_0057f473(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_0057f483
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_0057f483:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [g_ZBufferScanlineArray + EBX*0x4]
        mov EBX,dword ptr [g_ScreenBufferArray + EBX*0x4]
        sub ECX,EAX
        jle LAB_0057f8f0
        lea EBX,[EBX + EAX*0x2]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [g_ScanlinePixelCount],ECX
        mov dword ptr [g_CurrentScreenPtr],EBX
        mov dword ptr [g_CurrentZBufferPtr],EBP
        cmp dword ptr [g_RenderStateFlags],0x80
        jz LAB_0057fac0
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c4f034]
        mov dword ptr [g_StartTextureU],EBX
        mov dword ptr [g_HardwareDeltaTextureU],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c4f034]
        mov dword ptr [g_StartTextureV],EBX
        mov dword ptr [g_HardwareDeltaTextureV],EDX
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c4f034]
        mov dword ptr [g_StartDepthW],EBX
        mov dword ptr [g_HardwareDeltaDepthZ],EDX
        test dword ptr [g_RenderStateFlags],0x8
        jz LAB_0057f550
        mov EAX,dword ptr [EDI + 0x30]
        mov EBX,dword ptr [ESI + 0x30]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c4f034]
        mov dword ptr [g_VertexAlphaStart],EBX
        mov dword ptr [g_VertexAlphaDelta],EDX
        jmp LAB_0057f564
    LAB_0057f550:
        mov dword ptr [g_VertexAlphaStart],0x0
        mov dword ptr [g_VertexAlphaDelta],0x0
    LAB_0057f564:
        test dword ptr [g_RenderStateFlags],0x20
        jz LAB_0057f58a
        mov EAX,dword ptr [EDI + 0x48]
        mov EBX,dword ptr [ESI + 0x48]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c4f034]
        mov dword ptr [g_INT_00623ea0],EBX
        mov dword ptr [g_INT_00623ea8],EDX
    LAB_0057f58a:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c4f034]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [g_VertexRedStart],EBX
        mov dword ptr [g_VertexRedDelta],EDX
        mov EAX,dword ptr [EDI + 0x38]
        mov EBX,dword ptr [ESI + 0x38]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c4f034]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [g_VertexGreenStart],EBX
        mov dword ptr [g_VertexGreenDelta],EDX
        mov EAX,dword ptr [EDI + 0x40]
        mov EBX,dword ptr [ESI + 0x40]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c4f034]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [g_VertexBlueStart],EBX
        mov dword ptr [g_VertexBlueDelta],EDX
        movq MM5,qword ptr [g_VertexRedStart]
        movq MM6,qword ptr [g_VertexRedDelta]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [g_VertexGreenStart]
        por MM6,qword ptr [g_VertexGreenDelta]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [g_VertexBlueStart]
        por MM6,qword ptr [g_VertexBlueDelta]
        movq qword ptr [g_QWORD_00623eb0],MM6
        mov ECX,dword ptr [g_StartTextureU]
        mov EDX,dword ptr [g_StartTextureV]
        mov ESI,dword ptr [g_StartDepthW]
        mov EDI,0x0
        mov EBP,dword ptr [g_VertexAlphaStart]
        pxor MM7,MM7
        test dword ptr [g_RenderStateFlags],0x20
        jz LAB_0057f8f6
        movd MM6,dword ptr [g_INT_00623ea0]
    LAB_0057f680:
        test dword ptr [g_RenderStateFlags],0x40
        jz LAB_0057f69c
        lea EAX,[EDI]
        add EAX,dword ptr [g_CurrentZBufferPtr]
        cmp ESI,dword ptr [EAX]
        jl LAB_0057f8a6
    LAB_0057f69c:
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [g_TextureShift1]
        psrlq MM2,qword ptr [g_TextureShift2]
        pand MM0,qword ptr [g_TextureMask1]
        pand MM2,qword ptr [g_TextureMask2]
        paddd MM0,MM2
        movd EBX,MM0
        test dword ptr [g_INT_01c50944],0xffffffff
        jnz LAB_0057f708
        add EBX,dword ptr [g_CurrentTextureData]
        movzx EAX,byte ptr [EBX]
        movd MM0,dword ptr [g_Hardware32BitPalette + EAX*0x4]
        punpcklbw MM0,MM7
        test dword ptr [g_CurrentTextureOpacityData],0xffffffff
        jz LAB_0057f701
        sub EBX,dword ptr [g_CurrentTextureData]
        add EBX,dword ptr [g_CurrentTextureOpacityData]
        movzx EAX,byte ptr [EBX]
        jmp LAB_0057f71c
    LAB_0057f701:
        mov EAX,0xff
        jmp LAB_0057f71c
    LAB_0057f708:
        shl EBX,0x2
        add EBX,dword ptr [g_CurrentTextureData]
        mov EAX,dword ptr [EBX]
        movd MM0,EAX
        punpcklbw MM0,MM7
        shr EAX,0x18
    LAB_0057f71c:
        test EAX,0xffffffff
        jz LAB_0057f8a6
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [g_CurrentScreenPtr]
        movzx EBX,word ptr [EBX]
        movd MM4,EBX
        pand MM4,qword ptr [g_BlueMask16]
        psllq MM4,qword ptr [g_BlueBitShift]
        movd MM2,EBX
        pand MM2,qword ptr [g_GreenMask16]
        psllq MM2,qword ptr [g_GreenBlueDitherShift]
        por MM4,MM2
        movd MM2,EBX
        pand MM2,qword ptr [g_RedMask16]
        psllq MM2,qword ptr [g_TotalDitherShift]
        por MM4,MM2
        punpcklbw MM4,MM7
        psllw MM0,0x4
        movq MM7,MM5
        psrlw MM7,0x3
        pmulhw MM0,MM7
        pxor MM7,MM7
        packuswb MM0,MM7
        punpcklbw MM0,MM7
        movd EBX,MM6
        imul EAX,EBX
        shr EAX,0x10
        test dword ptr [g_RenderStateFlags],0x8
        jnz LAB_0057f79e
        jmp LAB_0057f7cc
    LAB_0057f79e:
        mov EBX,EBP
        sar EBX,0x8
        movq MM1,qword ptr [g_QWORD_ARRAY_006247d0 + EBX*0x8]
        movq MM2,MM1
        pxor MM2,qword ptr [0x00624fc8]
        movd MM3,dword ptr [g_SolidColorMode]
        punpcklbw MM3,MM7
        pmullw MM0,MM2
        pmullw MM3,MM1
        paddw MM0,MM3
        psrlw MM0,0x8
    LAB_0057f7cc:
        movq MM2,qword ptr [g_QWORD_ARRAY_006247d0 + EAX*0x8]
        movq MM3,MM2
        pxor MM3,qword ptr [0x00624fc8]
        cmp dword ptr [g_BlendMode],0x1
        jz LAB_0057f810
        cmp dword ptr [g_BlendMode],0x2
        jz LAB_0057f820
        cmp dword ptr [g_BlendMode],0x3
        jz LAB_0057f830
        pmullw MM0,MM2
        pmullw MM4,MM3
        jmp LAB_0057f840
    LAB_0057f810:
        pmullw MM0,MM2
        psllw MM4,0x8
        jmp LAB_0057f840
    LAB_0057f820:
        pmullw MM4,MM0
        pmullw MM0,MM2
        jmp LAB_0057f840
    LAB_0057f830:
        movq MM1,MM0
        pxor MM1,qword ptr [0x00624fc8]
        pmullw MM4,MM1
        pmullw MM0,MM2
    LAB_0057f840:
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [g_CurrentScreenPtr]
        movq MM2,MM0
        movq MM4,MM0
        pand MM0,qword ptr [g_BlueMask32]
        pand MM2,qword ptr [g_GreenMask32]
        pand MM4,qword ptr [g_RedMask32]
        psrlq MM0,qword ptr [g_BlueBitShift]
        psrlq MM2,qword ptr [g_GreenBlueDitherShift]
        psrlq MM4,qword ptr [g_TotalDitherShift]
        por MM0,MM2
        por MM0,MM4
        movd EAX,MM0
        mov word ptr [EBX],AX
        test dword ptr [g_RenderStateFlags],0x80
        jz LAB_0057f8a6
        mov EAX,EDI
        add EAX,dword ptr [g_CurrentZBufferPtr]
        mov dword ptr [EAX],ESI
    LAB_0057f8a6:
        add EDI,0x4
        cmp EDI,dword ptr [g_ScanlinePixelCount]
        jnc LAB_0057f8f0
        add ECX,dword ptr [g_HardwareDeltaTextureU]
        paddw MM5,qword ptr [g_QWORD_00623eb0]
        add EDX,dword ptr [g_HardwareDeltaTextureV]
        movq MM0,MM5
        add ESI,dword ptr [g_HardwareDeltaDepthZ]
        pcmpgtw MM5,qword ptr [g_BufferFillZeroQword]
        add EBP,dword ptr [g_VertexAlphaDelta]
        pand MM5,MM0
        paddd MM6,qword ptr [g_INT_00623ea8]
        jmp LAB_0057f680
    LAB_0057f8f0:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_0057f8f6:
        movd MM1,dword ptr [g_SolidColorMode]
        punpcklbw MM1,MM7
        test dword ptr [g_RenderStateFlags],0x8
        jnz LAB_0057f91b
        mov EBP,0x0
        mov dword ptr [g_VertexAlphaDelta],0x0
    LAB_0057f91b:
        test dword ptr [g_RenderStateFlags],0x40
        jz LAB_0057f937
        lea EAX,[EDI]
        add EAX,dword ptr [g_CurrentZBufferPtr]
        cmp ESI,dword ptr [EAX]
        jl LAB_0057fa42
    LAB_0057f937:
        test dword ptr [g_RenderStateFlags],0x1
        jz LAB_0057fa96
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [g_TextureShift1]
        psrlq MM2,qword ptr [g_TextureShift2]
        pand MM0,qword ptr [g_TextureMask1]
        pand MM2,qword ptr [g_TextureMask2]
        paddd MM0,MM2
        movd EBX,MM0
        test dword ptr [g_INT_01c50944],0xffffffff
        jnz LAB_0057f98e
        add EBX,dword ptr [g_CurrentTextureData]
        movzx EAX,byte ptr [EBX]
        movd MM0,dword ptr [g_Hardware32BitPalette + EAX*0x4]
        jmp LAB_0057f99a
    LAB_0057f98e:
        shl EBX,0x2
        add EBX,dword ptr [g_CurrentTextureData]
        movd MM0,dword ptr [EBX]
    LAB_0057f99a:
        movq MM3,MM5
        punpcklbw MM0,MM7
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        test dword ptr [g_RenderStateFlags],0x8
        jz LAB_0057f9e7
        mov EAX,EBP
        sar EAX,0x8
        movq MM3,qword ptr [g_QWORD_ARRAY_006247d0 + EAX*0x8]
        movq MM4,MM1
        movq MM2,MM3
        pmullw MM4,MM3
        pxor MM2,qword ptr [0x00624fc8]
        punpcklbw MM0,MM7
        pmullw MM0,MM2
        paddw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0057f9e7:
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [g_CurrentScreenPtr]
        movq MM2,MM0
        movq MM4,MM0
        pand MM0,qword ptr [g_BlueMask32]
        pand MM2,qword ptr [g_GreenMask32]
        pand MM4,qword ptr [g_RedMask32]
        psrlq MM0,qword ptr [g_BlueBitShift]
        psrlq MM2,qword ptr [g_GreenBlueDitherShift]
        psrlq MM4,qword ptr [g_TotalDitherShift]
        por MM0,MM2
        por MM0,MM4
        movd EAX,MM0
        mov word ptr [EBX],AX
        test dword ptr [g_RenderStateFlags],0x80
        jz LAB_0057fa42
        mov EAX,[g_CurrentZBufferPtr]
        add EAX,EDI
        mov dword ptr [EAX],ESI
    LAB_0057fa42:
        add EDI,0x4
        cmp EDI,dword ptr [g_ScanlinePixelCount]
        jnc LAB_0057f8f0
        add ECX,dword ptr [g_HardwareDeltaTextureU]
        paddw MM5,qword ptr [g_QWORD_00623eb0]
        add EDX,dword ptr [g_HardwareDeltaTextureV]
        movq MM0,MM5
        add ESI,dword ptr [g_HardwareDeltaDepthZ]
        pcmpgtw MM5,qword ptr [g_BufferFillZeroQword]
        add EBP,dword ptr [g_VertexAlphaDelta]
        pand MM5,MM0
        jmp LAB_0057f91b
    LAB_0057fa96:
        test dword ptr [g_RenderStateFlags],0x200
        jnz LAB_0057fab0
        movd MM0,dword ptr [g_INT_01c4f020]
        jmp LAB_0057f99a
    LAB_0057fab0:
        movd MM0,dword ptr [g_SpecialColor]
        jmp LAB_0057f99a
    LAB_0057fac0:
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c4f034]
        mov dword ptr [g_StartDepthW],EBX
        mov dword ptr [g_HardwareDeltaDepthZ],EDX
        mov EAX,[g_StartDepthW]
        mov EBX,dword ptr [g_HardwareDeltaDepthZ]
        mov ESI,dword ptr [g_CurrentZBufferPtr]
        mov ECX,dword ptr [g_ScanlinePixelCount]
    LAB_0057faf1:
        mov dword ptr [ESI],EAX
        add EAX,EBX
        add ESI,0x4
        sub ECX,0x4
        jg LAB_0057faf1
        pop EBP
        emms
}
}
