// Name: core_dstrendr.cpp_renderTexturedDecalMMXScanline_FUN_0046f89d
// Address: 0046f89d
// Address Range: [[0046f89d, 0046f9bb]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_0046f89d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_0046f89d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_0046f8ad
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_0046f8ad:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [g_UINT_PTR_ARRAY_01c2b64c + EBX*0x4]
        mov EBX,dword ptr [g_ARRAY_PTR_01c2a38c + EBX*0x4]
        sub ECX,EAX
        jle LAB_0046f9b6
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [g_INT_0060d264],ECX
        mov dword ptr [g_PTR_0060d260],EBX
        mov dword ptr [g_UINT_PTR_0060d268],EBP
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c35e74]
        mov dword ptr [g_UINT_0060d238],EBX
        mov dword ptr [g_INT_0060d254],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c35e74]
        mov dword ptr [g_UINT_0060d23c],EBX
        mov dword ptr [g_INT_0060d258],EDX
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c35e74]
        mov dword ptr [g_UINT_0060d244],EBX
        mov dword ptr [g_INT_0060d25c],EDX
        mov ECX,dword ptr [g_UINT_0060d238]
        mov EDX,dword ptr [g_UINT_0060d23c]
        mov EDI,0x0
        mov ESI,dword ptr [g_UINT_0060d244]
    LAB_0046f94a:
        mov EAX,[g_UINT_PTR_0060d268]
        add EAX,EDI
        cmp ESI,dword ptr [EAX]
        jl LAB_0046f997
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [g_QWORD_0061c868]
        psrlq MM2,qword ptr [g_QWORD_0061c888]
        pand MM0,qword ptr [g_QWORD_0061c8a8]
        pand MM2,qword ptr [g_QWORD_0061c8c8]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [g_UCHAR_PTR_01c37770]
        movzx EAX,byte ptr [EBX]
        mov EAX,dword ptr [g_UINT_ARRAY_01c35214 + EAX*0x4]
        mov EBX,dword ptr [g_PTR_0060d260]
        add EBX,EDI
        mov dword ptr [EBX],EAX
    LAB_0046f997:
        add EDI,0x4
        cmp EDI,dword ptr [g_INT_0060d264]
        ja LAB_0046f9b6
        add ECX,dword ptr [g_INT_0060d254]
        add EDX,dword ptr [g_INT_0060d258]
        add ESI,dword ptr [g_INT_0060d25c]
        jmp LAB_0046f94a
    LAB_0046f9b6:
        pop EBP
        emms
}
}
