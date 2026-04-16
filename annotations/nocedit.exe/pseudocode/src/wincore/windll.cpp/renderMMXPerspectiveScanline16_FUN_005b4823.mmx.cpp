// Name: wincore_windll.cpp_renderMMXPerspectiveScanline16_FUN_005b4823
// Address: 005b4823
// Address Range: [[005b4823, 005b507e] [005b5085, 005b50eb]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_005b4833
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_005b4833:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [g_ZBufferScanlineArray + EBX*0x4]
        mov EBX,dword ptr [g_ScreenBufferArray + EBX*0x4]
        sub ECX,EAX
        jle LAB_005b4d1c
        lea EBX,[EBX + EAX*0x2]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [g_ScanlinePixelCount],ECX
        mov dword ptr [g_CurrentScreenPtr],EBX
        mov dword ptr [g_CurrentZBufferPtr],EBP
        cmp dword ptr [g_RenderStateFlags],0x80
        jz LAB_005b50a9
        cmp dword ptr [g_VertexPreprocessMode],0x5
        jnz LAB_005b48f4
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
        imul dword ptr [ECX + 0x2d02584]
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
        imul dword ptr [ECX + 0x2d02584]
        mov dword ptr [g_HardwareDeltaTextureV],EDX
        jmp LAB_005b4928
    LAB_005b48f4:
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [ECX + 0x2d02584]
        mov dword ptr [g_StartTextureU],EBX
        mov dword ptr [g_HardwareDeltaTextureU],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [ECX + 0x2d02584]
        mov dword ptr [g_StartTextureV],EBX
        mov dword ptr [g_HardwareDeltaTextureV],EDX
    LAB_005b4928:
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX + 0x2d02584]
        mov dword ptr [g_StartDepthW],EBX
        mov dword ptr [g_HardwareDeltaDepthZ],EDX
        mov EAX,dword ptr [EDI + 0x30]
        mov EBX,dword ptr [ESI + 0x30]
        sub EAX,EBX
        imul dword ptr [ECX + 0x2d02584]
        mov dword ptr [g_VertexAlphaStart],EBX
        mov dword ptr [g_VertexAlphaDelta],EDX
        mov EBP,dword ptr [g_VertexAlphaStart]
        pxor MM7,MM7
        test dword ptr [g_RenderStateFlags],0x200
        jnz LAB_005b49a4
        test dword ptr [g_RenderStateFlags],0x4
        jnz LAB_005b4a61
        test dword ptr [g_RenderStateFlags],0x10
        jnz LAB_005b4aed
        movq MM5,qword ptr [0x006837f8]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_005b4b17
    LAB_005b49a4:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x2d02584]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [g_VertexRedStart],EBX
        mov dword ptr [g_VertexRedDelta],EDX
        mov EAX,dword ptr [EDI + 0x38]
        mov EBX,dword ptr [ESI + 0x38]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x2d02584]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [g_VertexGreenStart],EBX
        mov dword ptr [g_VertexGreenDelta],EDX
        mov EAX,dword ptr [EDI + 0x40]
        mov EBX,dword ptr [ESI + 0x40]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x2d02584]
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
        jmp LAB_005b4b17
    LAB_005b4a61:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        sub EAX,0x100
        sub EBX,0x100
        cmp EAX,0xfff
        jbe LAB_005b4a7e
        mov EAX,0xfff
    LAB_005b4a7e:
        cmp EBX,0xfff
        jbe LAB_005b4a8b
        mov EBX,0xfff
    LAB_005b4a8b:
        shl EAX,0x3
        shl EBX,0x3
        sub EAX,EBX
        imul dword ptr [ECX + 0x2d02584]
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
        jmp LAB_005b4b17
    LAB_005b4aed:
        mov EAX,[g_CurrentLightingValue]
        sub EAX,0x100
        shr EAX,0x4
        cmp EAX,0xff
        jc LAB_005b4b06
        mov EAX,0xff
    LAB_005b4b06:
        movq MM5,qword ptr [g_AlphaTable + EAX*0x8]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_005b4b17
    LAB_005b4b17:
        mov ECX,dword ptr [g_StartTextureU]
        mov EDX,dword ptr [g_StartTextureV]
        mov ESI,dword ptr [g_StartDepthW]
        mov EDI,0x0
        cmp dword ptr [g_CurrentTextureOpacityData],0x0
        jnz LAB_005b4b47
        test dword ptr [g_RenderStateFlags],0x2
        jz LAB_005b4f11
    LAB_005b4b47:
        test dword ptr [g_RenderStateFlags],0x100
        jnz LAB_005b4b66
        mov EBP,dword ptr [g_CurrentAlphaValue]
        shl EBP,0x8
        mov dword ptr [g_VertexAlphaDelta],0x0
    LAB_005b4b66:
        cmp dword ptr [g_CurrentTextureOpacityData],0x0
        jnz LAB_005b4d22
    LAB_005b4b73:
        test dword ptr [g_RenderStateFlags],0x40
        jz LAB_005b4b8f
        lea EAX,[EDI]
        add EAX,dword ptr [g_CurrentZBufferPtr]
        cmp ESI,dword ptr [EAX]
        jl LAB_005b4ce4
    LAB_005b4b8f:
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
        jz LAB_005b4ce4
        movd MM0,EAX
        punpcklbw MM0,MM7
        pxor MM4,MM4
        test dword ptr [g_RenderStateFlags],0x20
        jz LAB_005b4c2e
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [g_CurrentScreenPtr]
        movzx EBX,word ptr [EBX]
        movd MM4,EBX
        pand MM4,qword ptr [g_BlueMask16]
        psllq MM4,qword ptr [g_BlueBitShift]
        movd MM2,EBX
        pand MM2,qword ptr [g_GreenMask16]
        psllq MM2,qword ptr [g_GreenBlueBits]
        por MM4,MM2
        movd MM2,EBX
        pand MM2,qword ptr [g_RedMask16]
        psllq MM2,qword ptr [g_TotalColorBits]
        por MM4,MM2
        punpcklbw MM4,MM7
    LAB_005b4c2e:
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
        pxor MM3,qword ptr [0x006837f8]
        punpcklbw MM0,MM7
        cmp dword ptr [g_BlendMode],0x0
        jnz LAB_005b4c77
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_005b4c88
    LAB_005b4c77:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_005b4c88:
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [g_CurrentScreenPtr]
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
        mov word ptr [EBX],AX
        test dword ptr [g_RenderStateFlags],0x80
        jz LAB_005b4ce4
        mov EAX,EDI
        add EAX,dword ptr [g_CurrentZBufferPtr]
        mov dword ptr [EAX],ESI
    LAB_005b4ce4:
        add EDI,0x4
        cmp EDI,dword ptr [g_ScanlinePixelCount]
        jnc LAB_005b4d1c
        add ECX,dword ptr [g_HardwareDeltaTextureU]
        paddw MM5,MM6
        add EDX,dword ptr [g_HardwareDeltaTextureV]
        movq MM0,MM5
        add ESI,dword ptr [g_HardwareDeltaDepthZ]
        pcmpgtw MM5,qword ptr [g_SelectedClearColor]
        add EBP,dword ptr [g_VertexAlphaDelta]
        pand MM5,MM0
        jmp LAB_005b4b73
    LAB_005b4d1c:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_005b4d22:
        test dword ptr [g_RenderStateFlags],0x40
        jz LAB_005b4d3e
        lea EAX,[EDI]
        add EAX,dword ptr [g_CurrentZBufferPtr]
        cmp ESI,dword ptr [EAX]
        jl LAB_005b4ed3
    LAB_005b4d3e:
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
        jz LAB_005b4ed3
        cmp EBP,0xff00
        jle LAB_005b4da7
        cmp EAX,0xff
        jge LAB_005b4e3a
    LAB_005b4da7:
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [g_CurrentScreenPtr]
        movzx EBX,word ptr [EBX]
        movd MM4,EBX
        pand MM4,qword ptr [g_BlueMask16]
        psllq MM4,qword ptr [g_BlueBitShift]
        movd MM2,EBX
        pand MM2,qword ptr [g_GreenMask16]
        psllq MM2,qword ptr [g_GreenBlueBits]
        por MM4,MM2
        movd MM2,EBX
        pand MM2,qword ptr [g_RedMask16]
        psllq MM2,qword ptr [g_TotalColorBits]
        por MM4,MM2
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
        pxor MM3,qword ptr [0x006837f8]
        punpcklbw MM0,MM7
        cmp dword ptr [g_BlendMode],0x0
        jnz LAB_005b4e66
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_005b4e77
    LAB_005b4e3a:
        cmp EBP,0xff
        jl LAB_005b4da7
        cmp dword ptr [g_BlendMode],0x0
        jnz LAB_005b4da7
        movq MM3,MM5
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        jmp LAB_005b4e77
    LAB_005b4e66:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_005b4e77:
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [g_CurrentScreenPtr]
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
        mov word ptr [EBX],AX
        test dword ptr [g_RenderStateFlags],0x80
        jz LAB_005b4ed3
        mov EAX,EDI
        add EAX,dword ptr [g_CurrentZBufferPtr]
        mov dword ptr [EAX],ESI
    LAB_005b4ed3:
        add EDI,0x4
        cmp EDI,dword ptr [g_ScanlinePixelCount]
        jnc LAB_005b4f0b
        add ECX,dword ptr [g_HardwareDeltaTextureU]
        paddw MM5,MM6
        add EDX,dword ptr [g_HardwareDeltaTextureV]
        movq MM0,MM5
        add ESI,dword ptr [g_HardwareDeltaDepthZ]
        pcmpgtw MM5,qword ptr [g_SelectedClearColor]
        add EBP,dword ptr [g_VertexAlphaDelta]
        pand MM5,MM0
        jmp LAB_005b4d22
    LAB_005b4f0b:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_005b4f11:
        movq MM1,qword ptr [g_SolidColorMode]
        punpcklbw MM1,MM7
        test dword ptr [g_RenderStateFlags],0x8
        jnz LAB_005b4f36
        mov EBP,0x0
        mov dword ptr [g_VertexAlphaDelta],0x0
    LAB_005b4f36:
        test dword ptr [g_RenderStateFlags],0x40
        jz LAB_005b4f52
        lea EAX,[EDI]
        add EAX,dword ptr [g_CurrentZBufferPtr]
        cmp ESI,dword ptr [EAX]
        jl LAB_005b5043
    LAB_005b4f52:
        test dword ptr [g_RenderStateFlags],0x1
        jz LAB_005b5085
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
    LAB_005b4f9b:
        movq MM3,MM5
        punpcklbw MM0,MM7
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        test dword ptr [g_RenderStateFlags],0x8
        jz LAB_005b4fe8
        mov EAX,EBP
        sar EAX,0x8
        movq MM3,qword ptr [g_AlphaTable + EAX*0x8]
        movq MM4,MM1
        movq MM2,MM3
        pmullw MM4,MM3
        pxor MM2,qword ptr [0x006837f8]
        punpcklbw MM0,MM7
        pmullw MM0,MM2
        paddw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_005b4fe8:
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [g_CurrentScreenPtr]
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
        mov word ptr [EBX],AX
        test dword ptr [g_RenderStateFlags],0x80
        jz LAB_005b5043
        mov EAX,[g_CurrentZBufferPtr]
        add EAX,EDI
        mov dword ptr [EAX],ESI
    LAB_005b5043:
        add EDI,0x4
        cmp EDI,dword ptr [g_ScanlinePixelCount]
        jnc LAB_005b4d1c
        add ECX,dword ptr [g_HardwareDeltaTextureU]
        paddw MM5,MM6
        add EDX,dword ptr [g_HardwareDeltaTextureV]
        movq MM0,MM5
        add ESI,dword ptr [g_HardwareDeltaDepthZ]
        pcmpgtw MM5,qword ptr [g_SelectedClearColor]
        add EBP,dword ptr [g_VertexAlphaDelta]
        pand MM5,MM0
        jmp LAB_005b4f36
    LAB_005b5085:
        test dword ptr [g_RenderStateFlags],0x200
        jnz LAB_005b509d
        movd MM0,dword ptr [g_ActiveRenderColor]
        jmp LAB_005b4f9b
    LAB_005b509d:
        movd MM0,dword ptr [g_SpecialColor]
        jmp LAB_005b4f9b
    LAB_005b50a9:
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX + 0x2d02584]
        mov dword ptr [g_StartDepthW],EBX
        mov dword ptr [g_HardwareDeltaDepthZ],EDX
        mov EAX,[g_StartDepthW]
        mov EBX,dword ptr [g_HardwareDeltaDepthZ]
        mov ESI,dword ptr [g_CurrentZBufferPtr]
        mov ECX,dword ptr [g_ScanlinePixelCount]
    LAB_005b50da:
        mov dword ptr [ESI],EAX
        add EAX,EBX
        add ESI,0x4
        sub ECX,0x4
        jg LAB_005b50da
        pop EBP
        emms
}
}
