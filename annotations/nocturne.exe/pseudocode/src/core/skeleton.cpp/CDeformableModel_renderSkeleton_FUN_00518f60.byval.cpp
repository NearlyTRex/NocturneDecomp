// Name: core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_00518f60
// Address: 00518f60
// Address Range: [[00518f60, 00519117]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_00518f60(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_00518f60(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)
{
__asm {
        mov EDX,dword ptr [ESP + 0x50]
        push EDX
        call core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130
        add ESP,0x4
        mov DL,byte ptr [ESP + 0x5c]
        mov EBP,EAX
        test DL,0x1
        jz LAB_0051907d
        mov ECX,dword ptr [EAX + 0x28558]
        xor ESI,ESI
        test ECX,ECX
        jle LAB_00519000
        mov EDI,dword ptr [ESP + 0x58]
    LAB_00518f97:
        lea EAX,[ESP + 0x24]
        push EAX
        imul EAX,ESI,0x30
        push EDI
        lea EBX,[ESP + 0x8]
        mov dword ptr [ESP + 0x38],EAX
        call core_xform_cpp_getTranslation_FUN_0055bc00
        add ESP,0x8
        lea EAX,[ESP + 0x24]
        mov EDX,dword ptr [g_CDemonRenderer_PTR_005ae704]
        fld float ptr [EAX]
        fmul float ptr [g_FLOAT_005a1ea8]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_FLOAT_005a1ea8]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_FLOAT_005a1ea8]
        fistp dword ptr [EBX + 0x8]
        mov EAX,ESP
        mov EBX,dword ptr [ESP + 0x30]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,EBX
        push EAX
        add EDI,0x30
        inc ESI
        call engine_special_cpp_transformAndProjectPoint_FUN_0053075c
        mov EAX,dword ptr [EBP + 0x28558]
        add ESP,0x8
        cmp ESI,EAX
        jl LAB_00518f97
        mov EAX,EAX
    LAB_00519000:
        mov EAX,dword ptr [ESP + 0x54]
        xor EDX,EDX
        mov ECX,dword ptr [EBP + 0x28558]
        mov dword ptr [ESP + 0x38],EDX
        mov [g_ActiveRenderColor],EAX
        test ECX,ECX
        jle LAB_0051907d
        mov dword ptr [ESP + 0x34],EBP
        xor EBX,EBX
    LAB_0051901f:
        mov EAX,dword ptr [ESP + 0x34]
        mov EAX,dword ptr [EAX + 0x2857c]
        test EAX,EAX
        jl LAB_0051905c
        imul ESI,EAX,0x30
        mov EAX,[g_CDemonRenderer_PTR_005ae704]
        mov ECX,0xc
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov EDI,ESP
        add ESI,EAX
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + EBX*0x1]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00409290
        add ESP,0x60
    LAB_0051905c:
        mov ESI,dword ptr [ESP + 0x34]
        mov EDI,dword ptr [ESP + 0x38]
        add EBX,0x30
        mov EDX,dword ptr [EBP + 0x28558]
        add ESI,0x24
        inc EDI
        mov dword ptr [ESP + 0x34],ESI
        mov dword ptr [ESP + 0x38],EDI
        cmp EDI,EDX
        jl LAB_0051901f
    LAB_0051907d:
        test byte ptr [ESP + 0x5c],0x2
        jz LAB_00519110
        mov ECX,dword ptr [EBP + 0x28558]
        xor EBX,EBX
        test ECX,ECX
        jle LAB_00519110
        mov ESI,dword ptr [ESP + 0x58]
    LAB_0051909c:
        lea EAX,[ESP + 0xc]
        push EAX
        push ESI
        call core_xform_cpp_matrixToEulerAngles_FUN_0055b180
        add ESP,0x8
        lea EAX,[ESP + 0x18]
        push EAX
        push ESI
        call core_xform_cpp_getTranslation_FUN_0055bc00
        add ESP,0x8
        lea EAX,[ESP + 0x18]
        push EAX
        lea EAX,[ESP + 0x10]
        push EAX
        mov EDI,dword ptr [g_CDemonRenderer_PTR_005ae704]
        push EDI
        call engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
        add ESP,0xc
        push 0xff
        mov EAX,[g_CEditorToolsPtr]
        push 0x3f000000
        push EAX
        call shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0
        add ESP,0xc
        mov EDX,dword ptr [g_CDemonRenderer_PTR_005ae704]
        push EDX
        inc EBX
        add ESI,0x30
        call engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0
        mov ECX,dword ptr [EBP + 0x28558]
        add ESP,0x4
        cmp EBX,ECX
        jl LAB_0051909c
        lea EAX,[EAX]
        lea EDX,[EDX]
    LAB_00519110:
}
}
