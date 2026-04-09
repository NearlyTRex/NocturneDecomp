// Name: core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640
// Address: 0059b640
// Address Range: [[0059b640, 0059b7f7] [0060dfc1, 0060e071]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_0059b640(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_0059b640(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)
{
__asm {
        mov EDX,dword ptr [ESP + 0x50]
        push EDX
        call core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
        add ESP,0x4
        mov DL,byte ptr [ESP + 0x5c]
        mov EBP,EAX
        test DL,0x1
        jz LAB_0059b75d
        mov ECX,dword ptr [EAX + 0x28558]
        xor ESI,ESI
        test ECX,ECX
        jle LAB_0059b6e0
        mov EDI,dword ptr [ESP + 0x58]
    LAB_0059b677:
        lea EAX,[ESP + 0x24]
        push EAX
        imul EAX,ESI,0x30
        push EDI
        lea EBX,[ESP + 0x8]
        mov dword ptr [ESP + 0x38],EAX
        call core_xform_cpp_getTranslation_FUN_005f6110
        add ESP,0x8
        lea EAX,[ESP + 0x24]
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662e98]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662e98]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662e98]
        fistp dword ptr [EBX + 0x8]
        mov EAX,ESP
        mov EBX,dword ptr [ESP + 0x30]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,EBX
        push EAX
        add EDI,0x30
        inc ESI
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        mov EAX,dword ptr [EBP + 0x28558]
        add ESP,0x8
        cmp ESI,EAX
        jl LAB_0059b677
        mov EAX,EAX
    LAB_0059b6e0:
        mov EAX,dword ptr [ESP + 0x54]
        xor EDX,EDX
        mov ECX,dword ptr [EBP + 0x28558]
        mov dword ptr [ESP + 0x38],EDX
        mov [g_ActiveRenderColor],EAX
        test ECX,ECX
        jle LAB_0059b75d
        mov dword ptr [ESP + 0x34],EBP
        xor EBX,EBX
    LAB_0059b6ff:
        mov EAX,dword ptr [ESP + 0x34]
        mov EAX,dword ptr [EAX + 0x2857c]
        test EAX,EAX
        jl LAB_0059b73c
        imul ESI,EAX,0x30
        mov EAX,[g_CDemonRendererPtr2]
        jmp LAB_0060dfc1
    LAB_0059b723:
        rep movsd
        jmp LAB_0060e01a
    LAB_0059b732:
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
    LAB_0059b73c:
        mov ESI,dword ptr [ESP + 0x34]
        mov EDI,dword ptr [ESP + 0x38]
        add EBX,0x30
        mov EDX,dword ptr [EBP + 0x28558]
        add ESI,0x24
        inc EDI
        mov dword ptr [ESP + 0x34],ESI
        mov dword ptr [ESP + 0x38],EDI
        cmp EDI,EDX
        jl LAB_0059b6ff
    LAB_0059b75d:
        test byte ptr [ESP + 0x5c],0x2
        jz LAB_0059b7f0
        mov ECX,dword ptr [EBP + 0x28558]
        xor EBX,EBX
        test ECX,ECX
        jle LAB_0059b7f0
        mov ESI,dword ptr [ESP + 0x58]
    LAB_0059b77c:
        lea EAX,[ESP + 0xc]
        push EAX
        push ESI
        call core_xform_cpp_matrixToEulerAngles_FUN_005f5690
        add ESP,0x8
        lea EAX,[ESP + 0x18]
        push EAX
        push ESI
        call core_xform_cpp_getTranslation_FUN_005f6110
        add ESP,0x8
        lea EAX,[ESP + 0x18]
        push EAX
        lea EAX,[ESP + 0x10]
        push EAX
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        push EDI
        call engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
        add ESP,0xc
        push 0xff
        mov EAX,[g_CEditorToolsPtr]
        push 0x3f000000
        push EAX
        call shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
        add ESP,0xc
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        push EDX
        inc EBX
        add ESI,0x30
        call engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640
        mov ECX,dword ptr [EBP + 0x28558]
        add ESP,0x4
        cmp EBX,ECX
        jl LAB_0059b77c
        lea EAX,[EAX]
        lea EDX,[EDX]
    LAB_0059b7f0:
        add ESP,0x3c
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_0060dfc1:
        mov ECX,0xc
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov EDI,ESP
        add ESI,EAX
        mov ECX,dword ptr [ESI]
        mov dword ptr [EDI],ECX
        mov ECX,dword ptr [ESI + 0x4]
        mov dword ptr [EDI + 0x4],ECX
        mov ECX,dword ptr [ESI + 0x8]
        mov dword ptr [EDI + 0x8],ECX
        mov ECX,dword ptr [ESI + 0xc]
        mov dword ptr [EDI + 0xc],ECX
        mov ECX,dword ptr [ESI + 0x10]
        mov dword ptr [EDI + 0x10],ECX
        mov ECX,dword ptr [ESI + 0x14]
        mov dword ptr [EDI + 0x14],ECX
        mov ECX,dword ptr [ESI + 0x18]
        mov dword ptr [EDI + 0x18],ECX
        mov ECX,dword ptr [ESI + 0x1c]
        mov dword ptr [EDI + 0x1c],ECX
        mov ECX,dword ptr [ESI + 0x20]
        mov dword ptr [EDI + 0x20],ECX
        mov ECX,dword ptr [ESI + 0x24]
        mov dword ptr [EDI + 0x24],ECX
        mov ECX,dword ptr [ESI + 0x28]
        mov dword ptr [EDI + 0x28],ECX
        mov ECX,dword ptr [ESI + 0x2c]
        mov dword ptr [EDI + 0x2c],ECX
        jmp LAB_0059b723
    LAB_0060e01a:
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + EBX*0x1]
        mov ECX,dword ptr [ESI]
        mov dword ptr [EDI],ECX
        mov ECX,dword ptr [ESI + 0x4]
        mov dword ptr [EDI + 0x4],ECX
        mov ECX,dword ptr [ESI + 0x8]
        mov dword ptr [EDI + 0x8],ECX
        mov ECX,dword ptr [ESI + 0xc]
        mov dword ptr [EDI + 0xc],ECX
        mov ECX,dword ptr [ESI + 0x10]
        mov dword ptr [EDI + 0x10],ECX
        mov ECX,dword ptr [ESI + 0x14]
        mov dword ptr [EDI + 0x14],ECX
        mov ECX,dword ptr [ESI + 0x18]
        mov dword ptr [EDI + 0x18],ECX
        mov ECX,dword ptr [ESI + 0x1c]
        mov dword ptr [EDI + 0x1c],ECX
        mov ECX,dword ptr [ESI + 0x20]
        mov dword ptr [EDI + 0x20],ECX
        mov ECX,dword ptr [ESI + 0x24]
        mov dword ptr [EDI + 0x24],ECX
        mov ECX,dword ptr [ESI + 0x28]
        mov dword ptr [EDI + 0x28],ECX
        mov ECX,dword ptr [ESI + 0x2c]
        mov dword ptr [EDI + 0x2c],ECX
        jmp LAB_0059b732
}
}
