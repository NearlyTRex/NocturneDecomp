// Name: engine_special.cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1
// Address: 0055b3b1
// Address Range: [[0055b3b1, 0055b531] [0055b540, 0055b5fc] [0055b600, 0055b68b] [0055b690, 0055b6b9] [0055b6c0, 0055b7e4] [0055b7f0, 0055b859] [0055b860, 0055b865] [0055b870, 0055b939] [0055b970, 0055b9d9] [0055b9e0, 0055bb18] [0055bb26, 0055bb3d] [0055bb40, 0055bb4b] [0055bb50, 0055bb92]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_0055b3c1
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_0055b3c1:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [g_ZBufferScanlineArray + EBX*0x4]
        mov EBX,dword ptr [g_ScreenBufferArray + EBX*0x4]
        sub ECX,EAX
        jle LAB_0055b860
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [g_ScanlinePixelCount],ECX
        mov dword ptr [g_CurrentScreenPtr],EBX
        mov dword ptr [g_CurrentZBufferPtr],EBP
        cmp dword ptr [g_RenderStateFlags],0x80
        jz LAB_0055bb50
        cmp dword ptr [g_VertexPreprocessMode],0x5
        jnz LAB_0055b482
        mov EAX,dword ptr [ESI + 0x18]
        mov EBX,dword ptr [ESI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        mov [g_StartTextureU],EAX
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [EDI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        sub EAX,dword ptr [g_StartTextureU]
        imul dword ptr [ECX + 0x1c35e74]
        mov dword ptr [g_HardwareDeltaTextureU],EDX
        mov EAX,dword ptr [ESI + 0x20]
        mov EBX,dword ptr [ESI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        mov [g_StartTextureV],EAX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [EDI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        sub EAX,dword ptr [g_StartTextureV]
        imul dword ptr [ECX + 0x1c35e74]
        mov dword ptr [g_HardwareDeltaTextureV],EDX
        jmp LAB_0055b4b6
    LAB_0055b482:
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c35e74]
        mov dword ptr [g_StartTextureU],EBX
        mov dword ptr [g_HardwareDeltaTextureU],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c35e74]
        mov dword ptr [g_StartTextureV],EBX
        mov dword ptr [g_HardwareDeltaTextureV],EDX
    LAB_0055b4b6:
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c35e74]
        mov dword ptr [g_StartDepthW],EBX
        mov dword ptr [g_HardwareDeltaDepthZ],EDX
        mov EAX,dword ptr [EDI + 0x30]
        mov EBX,dword ptr [ESI + 0x30]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c35e74]
        mov dword ptr [g_VertexAlphaStart],EBX
        mov dword ptr [g_VertexAlphaDelta],EDX
        mov EBP,dword ptr [g_VertexAlphaStart]
        pxor MM7,MM7
        test dword ptr [g_RenderStateFlags],0x200
        jnz LAB_0055b540
        test dword ptr [g_RenderStateFlags],0x4
        jnz LAB_0055b600
        test dword ptr [g_RenderStateFlags],0x10
        jnz LAB_0055b690
        movq MM5,qword ptr [0x0061d978]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_0055b6c0
    LAB_0055b540:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c35e74]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [g_VertexRedStart],EBX
        mov dword ptr [g_VertexRedDelta],EDX
        mov EAX,dword ptr [EDI + 0x38]
        mov EBX,dword ptr [ESI + 0x38]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c35e74]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [g_VertexGreenStart],EBX
        mov dword ptr [g_VertexGreenDelta],EDX
        mov EAX,dword ptr [EDI + 0x40]
        mov EBX,dword ptr [ESI + 0x40]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c35e74]
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
        jmp LAB_0055b6c0
    LAB_0055b600:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        sub EAX,0x100
        sub EBX,0x100
        cmp EAX,0xfff
        jbe LAB_0055b61d
        mov EAX,0xfff
    LAB_0055b61d:
        cmp EBX,0xfff
        jbe LAB_0055b62a
        mov EBX,0xfff
    LAB_0055b62a:
        shl EAX,0x3
        shl EBX,0x3
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c35e74]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [g_VertexRedStart],EBX
        mov dword ptr [g_VertexRedDelta],EDX
        movq MM5,qword ptr [g_VertexRedStart]
        movq MM6,qword ptr [g_VertexRedDelta]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [g_VertexRedStart]
        por MM6,qword ptr [g_VertexRedDelta]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [g_VertexRedStart]
        por MM6,qword ptr [g_VertexRedDelta]
        jmp LAB_0055b6c0
    LAB_0055b690:
        mov EAX,[g_CurrentLightingValue]
        sub EAX,0x100
        shr EAX,0x4
        cmp EAX,0xff
        jc LAB_0055b6a9
        mov EAX,0xff
    LAB_0055b6a9:
        movq MM5,qword ptr [g_QWORD_ARRAY_0061d180 + EAX*0x8]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_0055b6c0
    LAB_0055b6c0:
        mov ECX,dword ptr [g_StartTextureU]
        mov EDX,dword ptr [g_StartTextureV]
        mov ESI,dword ptr [g_StartDepthW]
        mov EDI,0x0
        cmp dword ptr [g_CurrentTextureOpacityData],0x0
        jnz LAB_0055b6f0
        test dword ptr [g_RenderStateFlags],0x2
        jz LAB_0055b9e6
    LAB_0055b6f0:
        test dword ptr [g_RenderStateFlags],0x100
        jnz LAB_0055b70f
        mov EBP,dword ptr [g_CurrentAlphaValue]
        shl EBP,0x8
        mov dword ptr [g_VertexAlphaDelta],0x0
    LAB_0055b70f:
        cmp dword ptr [g_CurrentTextureOpacityData],0x0
        jnz LAB_0055b870
    LAB_0055b71c:
        test dword ptr [g_RenderStateFlags],0x40
        jz LAB_0055b738
        lea EAX,[EDI]
        add EAX,dword ptr [g_CurrentZBufferPtr]
        cmp ESI,dword ptr [EAX]
        jl LAB_0055b822
    LAB_0055b738:
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
        cmp EAX,0x0
        jz LAB_0055b822
        movd MM0,EAX
        punpcklbw MM0,MM7
        pxor MM4,MM4
        test dword ptr [g_RenderStateFlags],0x20
        jz LAB_0055b79c
        mov EBX,EDI
        add EBX,dword ptr [g_CurrentScreenPtr]
        movd MM4,dword ptr [EBX]
        punpcklbw MM4,MM7
    LAB_0055b79c:
        psllw MM0,0x4
        movq MM7,MM5
        mov EAX,EBP
        psrlw MM7,0x3
        sar EAX,0x8
        pmulhw MM0,MM7
        movq MM2,qword ptr [g_QWORD_ARRAY_0061d180 + EAX*0x8]
        pxor MM7,MM7
        movq MM3,MM2
        packuswb MM0,MM7
        pxor MM3,qword ptr [0x0061d978]
        punpcklbw MM0,MM7
        cmp dword ptr [g_BlendMode],0x0
        jnz LAB_0055b7f0
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_0055b801
    LAB_0055b7f0:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0055b801:
        mov EBX,EDI
        add EBX,dword ptr [g_CurrentScreenPtr]
        movd dword ptr [EBX],MM0
        test dword ptr [g_RenderStateFlags],0x80
        jz LAB_0055b822
        mov EAX,EDI
        add EAX,dword ptr [g_CurrentZBufferPtr]
        mov dword ptr [EAX],ESI
    LAB_0055b822:
        add EDI,0x4
        cmp EDI,dword ptr [g_ScanlinePixelCount]
        jnc LAB_0055b860
        add ECX,dword ptr [g_HardwareDeltaTextureU]
        paddw MM5,MM6
        add EDX,dword ptr [g_HardwareDeltaTextureV]
        movq MM0,MM5
        add ESI,dword ptr [g_HardwareDeltaDepthZ]
        pcmpgtw MM5,qword ptr [g_BufferFillZeroQword]
        add EBP,dword ptr [g_VertexAlphaDelta]
        pand MM5,MM0
        jmp LAB_0055b71c
    LAB_0055b860:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_0055b870:
        test dword ptr [g_RenderStateFlags],0x40
        jz LAB_0055b88c
        lea EAX,[EDI]
        add EAX,dword ptr [g_CurrentZBufferPtr]
        cmp ESI,dword ptr [EAX]
        jl LAB_0055b9a2
    LAB_0055b88c:
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
        movd MM0,dword ptr [g_Hardware32BitPalette + EAX*0x4]
        punpcklbw MM0,MM7
        sub EBX,dword ptr [g_CurrentTextureData]
        add EBX,dword ptr [g_CurrentTextureOpacityData]
        movzx EAX,byte ptr [EBX]
        test EAX,0xffffffff
        jz LAB_0055b9a2
        mov EBX,EDI
        add EBX,dword ptr [g_CurrentScreenPtr]
        movd MM4,dword ptr [EBX]
        punpcklbw MM4,MM7
        psllw MM0,0x4
        movq MM7,MM5
        imul EAX,EBP
        psrlw MM7,0x3
        shr EAX,0x10
        pmulhw MM0,MM7
        movq MM2,qword ptr [g_QWORD_ARRAY_0061d180 + EAX*0x8]
        pxor MM7,MM7
        movq MM3,MM2
        packuswb MM0,MM7
        pxor MM3,qword ptr [0x0061d978]
        punpcklbw MM0,MM7
        cmp dword ptr [g_BlendMode],0x0
        jnz LAB_0055b970
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_0055b981
    LAB_0055b970:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0055b981:
        mov EBX,EDI
        add EBX,dword ptr [g_CurrentScreenPtr]
        movd dword ptr [EBX],MM0
        test dword ptr [g_RenderStateFlags],0x80
        jz LAB_0055b9a2
        mov EAX,EDI
        add EAX,dword ptr [g_CurrentZBufferPtr]
        mov dword ptr [EAX],ESI
    LAB_0055b9a2:
        add EDI,0x4
        cmp EDI,dword ptr [g_ScanlinePixelCount]
        jnc LAB_0055b9e0
        add ECX,dword ptr [g_HardwareDeltaTextureU]
        paddw MM5,MM6
        add EDX,dword ptr [g_HardwareDeltaTextureV]
        movq MM0,MM5
        add ESI,dword ptr [g_HardwareDeltaDepthZ]
        pcmpgtw MM5,qword ptr [g_BufferFillZeroQword]
        add EBP,dword ptr [g_VertexAlphaDelta]
        pand MM5,MM0
        jmp LAB_0055b870
    LAB_0055b9e0:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_0055b9e6:
        movq MM1,qword ptr [g_SolidColorMode]
        punpcklbw MM1,MM7
        test dword ptr [g_RenderStateFlags],0x8
        jnz LAB_0055ba0b
        mov EBP,0x0
        mov dword ptr [g_VertexAlphaDelta],0x0
    LAB_0055ba0b:
        test dword ptr [g_RenderStateFlags],0x40
        jz LAB_0055ba27
        lea EAX,[EDI]
        add EAX,dword ptr [g_CurrentZBufferPtr]
        cmp ESI,dword ptr [EAX]
        jl LAB_0055badd
    LAB_0055ba27:
        test dword ptr [g_RenderStateFlags],0x1
        jz LAB_0055bb26
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
        movd MM0,dword ptr [g_Hardware32BitPalette + EAX*0x4]
    LAB_0055ba70:
        movq MM3,MM5
        punpcklbw MM0,MM7
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        test dword ptr [g_RenderStateFlags],0x8
        jz LAB_0055babd
        mov EAX,EBP
        sar EAX,0x8
        movq MM3,qword ptr [g_QWORD_ARRAY_0061d180 + EAX*0x8]
        movq MM4,MM1
        movq MM2,MM3
        pmullw MM4,MM3
        pxor MM2,qword ptr [0x0061d978]
        punpcklbw MM0,MM7
        pmullw MM0,MM2
        paddw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0055babd:
        mov EBX,dword ptr [g_CurrentScreenPtr]
        add EBX,EDI
        movd dword ptr [EBX],MM0
        test dword ptr [g_RenderStateFlags],0x80
        jz LAB_0055badd
        mov EAX,[g_CurrentZBufferPtr]
        add EAX,EDI
        mov dword ptr [EAX],ESI
    LAB_0055badd:
        add EDI,0x4
        cmp EDI,dword ptr [g_ScanlinePixelCount]
        jnc LAB_0055b860
        add ECX,dword ptr [g_HardwareDeltaTextureU]
        paddw MM5,MM6
        add EDX,dword ptr [g_HardwareDeltaTextureV]
        movq MM0,MM5
        add ESI,dword ptr [g_HardwareDeltaDepthZ]
        pcmpgtw MM5,qword ptr [g_BufferFillZeroQword]
        add EBP,dword ptr [g_VertexAlphaDelta]
        pand MM5,MM0
        jmp LAB_0055ba0b
    LAB_0055bb26:
        test dword ptr [g_RenderStateFlags],0x200
        jnz LAB_0055bb40
        movd MM0,dword ptr [g_INT_01c35e60]
        jmp LAB_0055ba70
    LAB_0055bb40:
        movd MM0,dword ptr [g_SpecialColor]
        jmp LAB_0055ba70
    LAB_0055bb50:
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c35e74]
        mov dword ptr [g_StartDepthW],EBX
        mov dword ptr [g_HardwareDeltaDepthZ],EDX
        mov EAX,[g_StartDepthW]
        mov EBX,dword ptr [g_HardwareDeltaDepthZ]
        mov ESI,dword ptr [g_CurrentZBufferPtr]
        mov ECX,dword ptr [g_ScanlinePixelCount]
    LAB_0055bb81:
        mov dword ptr [ESI],EAX
        add EAX,EBX
        add ESI,0x4
        sub ECX,0x4
        jg LAB_0055bb81
        emms
}
}
