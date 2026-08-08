// Name: engine_special.cpp_renderMMXPerspectiveScanline32_FUN_0052f031
// Address: 0052f031
// Address Range: [[0052f031, 0052f1b1] [0052f1c0, 0052f27c] [0052f280, 0052f30b] [0052f310, 0052f339] [0052f340, 0052f464] [0052f470, 0052f4d9] [0052f4e0, 0052f4e5] [0052f4f0, 0052f5c8] [0052f5d0, 0052f5f3] [0052f600, 0052f669] [0052f670, 0052f7a8] [0052f7b6, 0052f7cd] [0052f7d0, 0052f7db] [0052f7e0, 0052f822]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0052f031(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0052f031(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_0052f041
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_0052f041:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [g_ZBufferScanlineArray + EBX*0x4]
        mov EBX,dword ptr [g_ScreenBufferArray + EBX*0x4]
        sub ECX,EAX
        jle LAB_0052f4e0
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [g_ScanlinePixelCount],ECX
        mov dword ptr [g_CurrentScreenPtr],EBX
        mov dword ptr [g_CurrentZBufferPtr],EBP
        cmp dword ptr [g_RenderStateFlags],0x80
        jz LAB_0052f7e0
        cmp dword ptr [g_VertexPreprocessMode],0x5
        jnz LAB_0052f102
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
        imul dword ptr [ECX + 0x1c00c84]
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
        imul dword ptr [ECX + 0x1c00c84]
        mov dword ptr [g_HardwareDeltaTextureV],EDX
        jmp LAB_0052f136
    LAB_0052f102:
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
        mov dword ptr [g_StartTextureU],EBX
        mov dword ptr [g_HardwareDeltaTextureU],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
        mov dword ptr [g_StartTextureV],EBX
        mov dword ptr [g_HardwareDeltaTextureV],EDX
    LAB_0052f136:
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
        mov dword ptr [g_StartDepthW],EBX
        mov dword ptr [g_HardwareDeltaDepthZ],EDX
        mov EAX,dword ptr [EDI + 0x30]
        mov EBX,dword ptr [ESI + 0x30]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
        mov dword ptr [g_VertexAlphaStart],EBX
        mov dword ptr [g_VertexAlphaDelta],EDX
        mov EBP,dword ptr [g_VertexAlphaStart]
        pxor MM7,MM7
        test dword ptr [g_RenderStateFlags],0x200
        jnz LAB_0052f1c0
        test dword ptr [g_RenderStateFlags],0x4
        jnz LAB_0052f280
        test dword ptr [g_RenderStateFlags],0x10
        jnz LAB_0052f310
        movq MM5,qword ptr [0x005c0668]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_0052f340
    LAB_0052f1c0:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [g_VertexRedStart],EBX
        mov dword ptr [g_VertexRedDelta],EDX
        mov EAX,dword ptr [EDI + 0x38]
        mov EBX,dword ptr [ESI + 0x38]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [g_VertexGreenStart],EBX
        mov dword ptr [g_VertexGreenDelta],EDX
        mov EAX,dword ptr [EDI + 0x40]
        mov EBX,dword ptr [ESI + 0x40]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
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
        jmp LAB_0052f340
    LAB_0052f280:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        sub EAX,0x100
        sub EBX,0x100
        cmp EAX,0xfff
        jbe LAB_0052f29d
        mov EAX,0xfff
    LAB_0052f29d:
        cmp EBX,0xfff
        jbe LAB_0052f2aa
        mov EBX,0xfff
    LAB_0052f2aa:
        shl EAX,0x3
        shl EBX,0x3
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
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
        jmp LAB_0052f340
    LAB_0052f310:
        mov EAX,[g_CurrentLightingValue]
        sub EAX,0x100
        shr EAX,0x4
        cmp EAX,0xff
        jc LAB_0052f329
        mov EAX,0xff
    LAB_0052f329:
        movq MM5,qword ptr [g_AlphaTable + EAX*0x8]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_0052f340
    LAB_0052f340:
        mov ECX,dword ptr [g_StartTextureU]
        mov EDX,dword ptr [g_StartTextureV]
        mov ESI,dword ptr [g_StartDepthW]
        mov EDI,0x0
        cmp dword ptr [g_CurrentTextureOpacityData],0x0
        jnz LAB_0052f370
        test dword ptr [g_RenderStateFlags],0x2
        jz LAB_0052f676
    LAB_0052f370:
        test dword ptr [g_RenderStateFlags],0x100
        jnz LAB_0052f38f
        mov EBP,dword ptr [g_CurrentAlphaValue]
        shl EBP,0x8
        mov dword ptr [g_VertexAlphaDelta],0x0
    LAB_0052f38f:
        cmp dword ptr [g_CurrentTextureOpacityData],0x0
        jnz LAB_0052f4f0
    LAB_0052f39c:
        test dword ptr [g_RenderStateFlags],0x40
        jz LAB_0052f3b8
        lea EAX,[EDI]
        add EAX,dword ptr [g_CurrentZBufferPtr]
        cmp ESI,dword ptr [EAX]
        jl LAB_0052f4a2
    LAB_0052f3b8:
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
        jz LAB_0052f4a2
        movd MM0,EAX
        punpcklbw MM0,MM7
        pxor MM4,MM4
        test dword ptr [g_RenderStateFlags],0x20
        jz LAB_0052f41c
        mov EBX,EDI
        add EBX,dword ptr [g_CurrentScreenPtr]
        movd MM4,dword ptr [EBX]
        punpcklbw MM4,MM7
    LAB_0052f41c:
        psllw MM0,0x4
        movq MM7,MM5
        mov EAX,EBP
        psrlw MM7,0x3
        sar EAX,0x8
        pmulhw MM0,MM7
        movq MM2,qword ptr [g_AlphaTable + EAX*0x8]
        pxor MM7,MM7
        movq MM3,MM2
        packuswb MM0,MM7
        pxor MM3,qword ptr [0x005c0668]
        punpcklbw MM0,MM7
        cmp dword ptr [g_BlendMode],0x0
        jnz LAB_0052f470
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_0052f481
    LAB_0052f470:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0052f481:
        mov EBX,EDI
        add EBX,dword ptr [g_CurrentScreenPtr]
        movd dword ptr [EBX],MM0
        test dword ptr [g_RenderStateFlags],0x80
        jz LAB_0052f4a2
        mov EAX,EDI
        add EAX,dword ptr [g_CurrentZBufferPtr]
        mov dword ptr [EAX],ESI
    LAB_0052f4a2:
        add EDI,0x4
        cmp EDI,dword ptr [g_ScanlinePixelCount]
        jnc LAB_0052f4e0
        add ECX,dword ptr [g_HardwareDeltaTextureU]
        paddw MM5,MM6
        add EDX,dword ptr [g_HardwareDeltaTextureV]
        movq MM0,MM5
        add ESI,dword ptr [g_HardwareDeltaDepthZ]
        pcmpgtw MM5,qword ptr [g_BufferFillZeroQword]
        add EBP,dword ptr [g_VertexAlphaDelta]
        pand MM5,MM0
        jmp LAB_0052f39c
    LAB_0052f4e0:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_0052f4f0:
        test dword ptr [g_RenderStateFlags],0x40
        jz LAB_0052f50c
        lea EAX,[EDI]
        add EAX,dword ptr [g_CurrentZBufferPtr]
        cmp ESI,dword ptr [EAX]
        jl LAB_0052f632
    LAB_0052f50c:
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
        jz LAB_0052f632
        cmp EBP,0xff00
        jle LAB_0052f571
        cmp EAX,0xff
        jge LAB_0052f5d0
    LAB_0052f571:
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
        movq MM2,qword ptr [g_AlphaTable + EAX*0x8]
        pxor MM7,MM7
        movq MM3,MM2
        packuswb MM0,MM7
        pxor MM3,qword ptr [0x005c0668]
        punpcklbw MM0,MM7
        cmp dword ptr [g_BlendMode],0x0
        jnz LAB_0052f600
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_0052f611
    LAB_0052f5d0:
        cmp EBP,0xff
        jl LAB_0052f571
        cmp dword ptr [g_BlendMode],0x0
        jnz LAB_0052f571
        movq MM3,MM5
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        jmp LAB_0052f611
    LAB_0052f600:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0052f611:
        mov EBX,EDI
        add EBX,dword ptr [g_CurrentScreenPtr]
        movd dword ptr [EBX],MM0
        test dword ptr [g_RenderStateFlags],0x80
        jz LAB_0052f632
        mov EAX,EDI
        add EAX,dword ptr [g_CurrentZBufferPtr]
        mov dword ptr [EAX],ESI
    LAB_0052f632:
        add EDI,0x4
        cmp EDI,dword ptr [g_ScanlinePixelCount]
        jnc LAB_0052f670
        add ECX,dword ptr [g_HardwareDeltaTextureU]
        paddw MM5,MM6
        add EDX,dword ptr [g_HardwareDeltaTextureV]
        movq MM0,MM5
        add ESI,dword ptr [g_HardwareDeltaDepthZ]
        pcmpgtw MM5,qword ptr [g_BufferFillZeroQword]
        add EBP,dword ptr [g_VertexAlphaDelta]
        pand MM5,MM0
        jmp LAB_0052f4f0
    LAB_0052f670:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_0052f676:
        movq MM1,qword ptr [g_SolidColorMode]
        punpcklbw MM1,MM7
        test dword ptr [g_RenderStateFlags],0x8
        jnz LAB_0052f69b
        mov EBP,0x0
        mov dword ptr [g_VertexAlphaDelta],0x0
    LAB_0052f69b:
        test dword ptr [g_RenderStateFlags],0x40
        jz LAB_0052f6b7
        lea EAX,[EDI]
        add EAX,dword ptr [g_CurrentZBufferPtr]
        cmp ESI,dword ptr [EAX]
        jl LAB_0052f76d
    LAB_0052f6b7:
        test dword ptr [g_RenderStateFlags],0x1
        jz LAB_0052f7b6
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
    LAB_0052f700:
        movq MM3,MM5
        punpcklbw MM0,MM7
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        test dword ptr [g_RenderStateFlags],0x8
        jz LAB_0052f74d
        mov EAX,EBP
        sar EAX,0x8
        movq MM3,qword ptr [g_AlphaTable + EAX*0x8]
        movq MM4,MM1
        movq MM2,MM3
        pmullw MM4,MM3
        pxor MM2,qword ptr [0x005c0668]
        punpcklbw MM0,MM7
        pmullw MM0,MM2
        paddw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0052f74d:
        mov EBX,dword ptr [g_CurrentScreenPtr]
        add EBX,EDI
        movd dword ptr [EBX],MM0
        test dword ptr [g_RenderStateFlags],0x80
        jz LAB_0052f76d
        mov EAX,[g_CurrentZBufferPtr]
        add EAX,EDI
        mov dword ptr [EAX],ESI
    LAB_0052f76d:
        add EDI,0x4
        cmp EDI,dword ptr [g_ScanlinePixelCount]
        jnc LAB_0052f4e0
        add ECX,dword ptr [g_HardwareDeltaTextureU]
        paddw MM5,MM6
        add EDX,dword ptr [g_HardwareDeltaTextureV]
        movq MM0,MM5
        add ESI,dword ptr [g_HardwareDeltaDepthZ]
        pcmpgtw MM5,qword ptr [g_BufferFillZeroQword]
        add EBP,dword ptr [g_VertexAlphaDelta]
        pand MM5,MM0
        jmp LAB_0052f69b
    LAB_0052f7b6:
        test dword ptr [g_RenderStateFlags],0x200
        jnz LAB_0052f7d0
        movd MM0,dword ptr [g_ActiveRenderColor]
        jmp LAB_0052f700
    LAB_0052f7d0:
        movd MM0,dword ptr [g_SpecialColor]
        jmp LAB_0052f700
    LAB_0052f7e0:
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
        mov dword ptr [g_StartDepthW],EBX
        mov dword ptr [g_HardwareDeltaDepthZ],EDX
        mov EAX,[g_StartDepthW]
        mov EBX,dword ptr [g_HardwareDeltaDepthZ]
        mov ESI,dword ptr [g_CurrentZBufferPtr]
        mov ECX,dword ptr [g_ScanlinePixelCount]
    LAB_0052f811:
        mov dword ptr [ESI],EAX
        add EAX,EBX
        add ESI,0x4
        sub ECX,0x4
        jg LAB_0052f811
        pop EBP
        emms
}
}
