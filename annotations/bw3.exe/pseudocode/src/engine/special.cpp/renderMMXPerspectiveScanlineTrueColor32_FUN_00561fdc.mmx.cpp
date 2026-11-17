// Name: engine_special.cpp_renderMMXPerspectiveScanlineTrueColor32_FUN_00561fdc
// Address: 00561fdc
// Address Range: [[00561fdc, 005620a9] [005620b0, 00562325] [00562330, 00562338] [00562340, 00562347] [00562350, 005623cd] [005623d0, 00562526] [00562536, 0056254d] [00562550, 0056255b] [00562560, 005625a2]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanlineTrueColor32_FUN_00561fdc(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanlineTrueColor32_FUN_00561fdc(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_00561fec
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_00561fec:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [g_ZBufferScanlineArray + EBX*0x4]
        mov EBX,dword ptr [g_ScreenBufferArray + EBX*0x4]
        sub ECX,EAX
        jle LAB_005623d0
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [g_ScanlinePixelCount],ECX
        mov dword ptr [g_CurrentScreenPtr],EBX
        mov dword ptr [g_CurrentZBufferPtr],EBP
        cmp dword ptr [g_RenderStateFlags],0x80
        jz LAB_00562560
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c6b5d4]
        mov dword ptr [g_StartTextureU],EBX
        mov dword ptr [g_HardwareDeltaTextureU],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c6b5d4]
        mov dword ptr [g_StartTextureV],EBX
        mov dword ptr [g_HardwareDeltaTextureV],EDX
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c6b5d4]
        mov dword ptr [g_StartDepthW],EBX
        mov dword ptr [g_HardwareDeltaDepthZ],EDX
        test dword ptr [g_RenderStateFlags],0x8
        jz LAB_005620b0
        mov EAX,dword ptr [EDI + 0x30]
        mov EBX,dword ptr [ESI + 0x30]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c6b5d4]
        mov dword ptr [g_VertexAlphaStart],EBX
        mov dword ptr [g_VertexAlphaDelta],EDX
        jmp LAB_005620c4
    LAB_005620b0:
        mov dword ptr [g_VertexAlphaStart],0x0
        mov dword ptr [g_VertexAlphaDelta],0x0
    LAB_005620c4:
        test dword ptr [g_RenderStateFlags],0x20
        jz LAB_005620ea
        mov EAX,dword ptr [EDI + 0x48]
        mov EBX,dword ptr [ESI + 0x48]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c6b5d4]
        mov dword ptr [g_INT_00604de0],EBX
        mov dword ptr [g_INT_00604de8],EDX
    LAB_005620ea:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c6b5d4]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [g_VertexRedStart],EBX
        mov dword ptr [g_VertexRedDelta],EDX
        mov EAX,dword ptr [EDI + 0x38]
        mov EBX,dword ptr [ESI + 0x38]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c6b5d4]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [g_VertexGreenStart],EBX
        mov dword ptr [g_VertexGreenDelta],EDX
        mov EAX,dword ptr [EDI + 0x40]
        mov EBX,dword ptr [ESI + 0x40]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c6b5d4]
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
        movq qword ptr [g_QWORD_00604df0],MM6
        mov ECX,dword ptr [g_StartTextureU]
        mov EDX,dword ptr [g_StartTextureV]
        mov ESI,dword ptr [g_StartDepthW]
        mov EDI,0x0
        mov EBP,dword ptr [g_VertexAlphaStart]
        pxor MM7,MM7
        test dword ptr [g_RenderStateFlags],0x20
        jz LAB_005623d6
        movd MM6,dword ptr [g_INT_00604de0]
    LAB_005621e0:
        test dword ptr [g_RenderStateFlags],0x40
        jz LAB_005621fc
        lea EAX,[EDI]
        add EAX,dword ptr [g_CurrentZBufferPtr]
        cmp ESI,dword ptr [EAX]
        jl LAB_0056238b
    LAB_005621fc:
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [g_TextureShift1]
        psrlq MM2,qword ptr [g_TextureShift2]
        pand MM0,qword ptr [g_TextureMask1]
        pand MM2,qword ptr [g_TextureMask2]
        paddd MM0,MM2
        movd EBX,MM0
        test dword ptr [g_INT_01c6cee4],0xffffffff
        jnz LAB_00562268
        add EBX,dword ptr [g_CurrentTextureData]
        movzx EAX,byte ptr [EBX]
        movd MM0,dword ptr [g_Hardware32BitPalette + EAX*0x4]
        punpcklbw MM0,MM7
        test dword ptr [g_CurrentTextureOpacityData],0xffffffff
        jz LAB_00562261
        sub EBX,dword ptr [g_CurrentTextureData]
        add EBX,dword ptr [g_CurrentTextureOpacityData]
        movzx EAX,byte ptr [EBX]
        jmp LAB_0056227c
    LAB_00562261:
        mov EAX,0xff
        jmp LAB_0056227c
    LAB_00562268:
        shl EBX,0x2
        add EBX,dword ptr [g_CurrentTextureData]
        mov EAX,dword ptr [EBX]
        movd MM0,EAX
        punpcklbw MM0,MM7
        shr EAX,0x18
    LAB_0056227c:
        test EAX,0xffffffff
        jz LAB_0056238b
        mov EBX,EDI
        add EBX,dword ptr [g_CurrentScreenPtr]
        movd MM4,dword ptr [EBX]
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
        jnz LAB_005622c3
        jmp LAB_005622f1
    LAB_005622c3:
        mov EBX,EBP
        sar EBX,0x8
        movq MM1,qword ptr [g_QWORD_ARRAY_00605710 + EBX*0x8]
        movq MM2,MM1
        pxor MM2,qword ptr [0x00605f08]
        movd MM3,dword ptr [g_SolidColorMode]
        punpcklbw MM3,MM7
        pmullw MM0,MM2
        pmullw MM3,MM1
        paddw MM0,MM3
        psrlw MM0,0x8
    LAB_005622f1:
        movq MM2,qword ptr [g_QWORD_ARRAY_00605710 + EAX*0x8]
        movq MM3,MM2
        pxor MM3,qword ptr [0x00605f08]
        cmp dword ptr [g_INT_01c6e2ac],0x1
        jz LAB_00562330
        cmp dword ptr [g_INT_01c6e2ac],0x2
        jz LAB_00562340
        cmp dword ptr [g_INT_01c6e2ac],0x3
        jz LAB_00562350
        pmullw MM0,MM2
        pmullw MM4,MM3
        jmp LAB_00562360
    LAB_00562330:
        pmullw MM0,MM2
        psllw MM4,0x8
        jmp LAB_00562360
    LAB_00562340:
        pmullw MM4,MM0
        pmullw MM0,MM2
        jmp LAB_00562360
    LAB_00562350:
        movq MM1,MM0
        pxor MM1,qword ptr [0x00605f08]
        pmullw MM4,MM1
        pmullw MM0,MM2
    LAB_00562360:
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        mov EBX,EDI
        add EBX,dword ptr [g_CurrentScreenPtr]
        movd dword ptr [EBX],MM0
        test dword ptr [g_RenderStateFlags],0x80
        jz LAB_0056238b
        mov EAX,EDI
        add EAX,dword ptr [g_CurrentZBufferPtr]
        mov dword ptr [EAX],ESI
    LAB_0056238b:
        add EDI,0x4
        cmp EDI,dword ptr [g_ScanlinePixelCount]
        jnc LAB_005623d0
        add ECX,dword ptr [g_HardwareDeltaTextureU]
        paddw MM5,qword ptr [g_QWORD_00604df0]
        add EDX,dword ptr [g_HardwareDeltaTextureV]
        movq MM0,MM5
        add ESI,dword ptr [g_HardwareDeltaDepthZ]
        pcmpgtw MM5,qword ptr [g_BufferFillZeroQword]
        add EBP,dword ptr [g_VertexAlphaDelta]
        pand MM5,MM0
        paddd MM6,qword ptr [g_INT_00604de8]
        jmp LAB_005621e0
    LAB_005623d0:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_005623d6:
        movd MM1,dword ptr [g_SolidColorMode]
        punpcklbw MM1,MM7
        test dword ptr [g_RenderStateFlags],0x8
        jnz LAB_005623fb
        mov EBP,0x0
        mov dword ptr [g_VertexAlphaDelta],0x0
    LAB_005623fb:
        test dword ptr [g_RenderStateFlags],0x40
        jz LAB_00562417
        lea EAX,[EDI]
        add EAX,dword ptr [g_CurrentZBufferPtr]
        cmp ESI,dword ptr [EAX]
        jl LAB_005624e7
    LAB_00562417:
        test dword ptr [g_RenderStateFlags],0x1
        jz LAB_00562536
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [g_TextureShift1]
        psrlq MM2,qword ptr [g_TextureShift2]
        pand MM0,qword ptr [g_TextureMask1]
        pand MM2,qword ptr [g_TextureMask2]
        paddd MM0,MM2
        movd EBX,MM0
        test dword ptr [g_INT_01c6cee4],0xffffffff
        jnz LAB_0056246e
        add EBX,dword ptr [g_CurrentTextureData]
        movzx EAX,byte ptr [EBX]
        movd MM0,dword ptr [g_Hardware32BitPalette + EAX*0x4]
        jmp LAB_0056247a
    LAB_0056246e:
        shl EBX,0x2
        add EBX,dword ptr [g_CurrentTextureData]
        movd MM0,dword ptr [EBX]
    LAB_0056247a:
        movq MM3,MM5
        punpcklbw MM0,MM7
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        test dword ptr [g_RenderStateFlags],0x8
        jz LAB_005624c7
        mov EAX,EBP
        sar EAX,0x8
        movq MM3,qword ptr [g_QWORD_ARRAY_00605710 + EAX*0x8]
        movq MM4,MM1
        movq MM2,MM3
        pmullw MM4,MM3
        pxor MM2,qword ptr [0x00605f08]
        punpcklbw MM0,MM7
        pmullw MM0,MM2
        paddw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_005624c7:
        mov EBX,dword ptr [g_CurrentScreenPtr]
        add EBX,EDI
        movd dword ptr [EBX],MM0
        test dword ptr [g_RenderStateFlags],0x80
        jz LAB_005624e7
        mov EAX,[g_CurrentZBufferPtr]
        add EAX,EDI
        mov dword ptr [EAX],ESI
    LAB_005624e7:
        add EDI,0x4
        cmp EDI,dword ptr [g_ScanlinePixelCount]
        jnc LAB_005623d0
        add ECX,dword ptr [g_HardwareDeltaTextureU]
        paddw MM5,qword ptr [g_QWORD_00604df0]
        add EDX,dword ptr [g_HardwareDeltaTextureV]
        movq MM0,MM5
        add ESI,dword ptr [g_HardwareDeltaDepthZ]
        pcmpgtw MM5,qword ptr [g_BufferFillZeroQword]
        add EBP,dword ptr [g_VertexAlphaDelta]
        pand MM5,MM0
        jmp LAB_005623fb
    LAB_00562536:
        test dword ptr [g_RenderStateFlags],0x200
        jnz LAB_00562550
        movd MM0,dword ptr [g_INT_01c6b5c0]
        jmp LAB_0056247a
    LAB_00562550:
        movd MM0,dword ptr [g_SpecialColor]
        jmp LAB_0056247a
    LAB_00562560:
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c6b5d4]
        mov dword ptr [g_StartDepthW],EBX
        mov dword ptr [g_HardwareDeltaDepthZ],EDX
        mov EAX,[g_StartDepthW]
        mov EBX,dword ptr [g_HardwareDeltaDepthZ]
        mov ESI,dword ptr [g_CurrentZBufferPtr]
        mov ECX,dword ptr [g_ScanlinePixelCount]
    LAB_00562591:
        mov dword ptr [ESI],EAX
        add EAX,EBX
        add ESI,0x4
        sub ECX,0x4
        jg LAB_00562591
        pop EBP
        emms
}
}
