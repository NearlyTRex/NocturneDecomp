// Name: core_dstrendr.cpp_renderTexturedDecalMMXScanline_FUN_00487d8d
// Address: 00487d8d
// Address Range: [[00487d8d, 00487eab]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_00487d8d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)

#include "nocturne.h"

void __edi_esi_ebx core_dstrendr_cpp_renderTexturedDecalMMXScanline_FUN_00487d8d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_00487d9d
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_00487d9d:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [g_UINT_PTR_ARRAY_01c4480c + EBX*0x4]
        mov EBX,dword ptr [g_ARRAY_PTR_01c4354c + EBX*0x4]
        sub ECX,EAX
        jle LAB_00487ea6
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [g_INT_00614544],ECX
        mov dword ptr [g_PTR_00614540],EBX
        mov dword ptr [g_UINT_PTR_00614548],EBP
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c4f034]
        mov dword ptr [g_UINT_00614518],EBX
        mov dword ptr [g_INT_00614534],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c4f034]
        mov dword ptr [g_UINT_0061451c],EBX
        mov dword ptr [g_INT_00614538],EDX
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c4f034]
        mov dword ptr [g_UINT_00614524],EBX
        mov dword ptr [g_INT_0061453c],EDX
        mov ECX,dword ptr [g_UINT_00614518]
        mov EDX,dword ptr [g_UINT_0061451c]
        mov EDI,0x0
        mov ESI,dword ptr [g_UINT_00614524]
    LAB_00487e3a:
        mov EAX,[g_UINT_PTR_00614548]
        add EAX,EDI
        cmp ESI,dword ptr [EAX]
        jl LAB_00487e87
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [g_QWORD_00623eb8]
        psrlq MM2,qword ptr [g_QWORD_00623ed8]
        pand MM0,qword ptr [g_QWORD_00623ef8]
        pand MM2,qword ptr [g_QWORD_00623f18]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [g_UCHAR_PTR_01c50930]
        movzx EAX,byte ptr [EBX]
        mov EAX,dword ptr [g_UINT_ARRAY_01c4e3d4 + EAX*0x4]
        mov EBX,dword ptr [g_PTR_00614540]
        add EBX,EDI
        mov dword ptr [EBX],EAX
    LAB_00487e87:
        add EDI,0x4
        cmp EDI,dword ptr [g_INT_00614544]
        ja LAB_00487ea6
        add ECX,dword ptr [g_INT_00614534]
        add EDX,dword ptr [g_INT_00614538]
        add ESI,dword ptr [g_INT_0061453c]
        jmp LAB_00487e3a
    LAB_00487ea6:
        pop EBP
        emms
}
}
