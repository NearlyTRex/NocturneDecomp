// Name: core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_005424b0
// Address: 005424b0
// Address Range: [[005424b0, 005426b7]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_005424b0(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_005424b0(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)
{
__asm {
        mov EDX,dword ptr [ESP + 0x78]
        push EDX
        call core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0
        add ESP,0x4
        mov DL,byte ptr [ESP + 0x84]
        mov dword ptr [ESP + 0x60],EAX
        test DL,0x1
        jz LAB_005425fb
        mov ECX,dword ptr [EAX + 0x1d1f8]
        xor EBP,EBP
        test ECX,ECX
        jle LAB_00542580
        mov EAX,dword ptr [ESP + 0x80]
        mov dword ptr [ESP + 0x5c],EAX
    LAB_005424f3:
        imul EAX,EBP,0x30
        mov EBX,dword ptr [ESP + 0x5c]
        lea ESI,[ESP + 0x3c]
        push EBX
        lea EDI,[ESP + 0x28]
        mov dword ptr [ESP + 0x58],EAX
        call core_xform_cpp_getTranslation_FUN_00592720
        lea ESI,[ESP + 0x40]
        add ESP,0x4
        lea EBX,[ESP + 0x30]
        movsd
        movsd
        movsd
        lea EAX,[ESP + 0x24]
        mov ESI,dword ptr [g_CDemonRenderer_PTR_0060b280]
        fld float ptr [EAX]
        fmul float ptr [g_FLOAT_005fb998]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_FLOAT_005fb998]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_FLOAT_005fb998]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x30]
        push EAX
        mov EAX,dword ptr [ESI]
        add EAX,dword ptr [ESP + 0x58]
        push EAX
        call engine_special_cpp_transformAndProjectPoint_FUN_0055d723
        add ESP,0x8
        mov EDI,dword ptr [ESP + 0x5c]
        mov EAX,dword ptr [ESP + 0x60]
        inc EBP
        add EDI,0x30
        mov EDX,dword ptr [EAX + 0x1d1f8]
        mov dword ptr [ESP + 0x5c],EDI
        cmp EBP,EDX
        jl LAB_005424f3
        lea EAX,[EAX]
        mov EDX,EDX
    LAB_00542580:
        mov EAX,dword ptr [ESP + 0x7c]
        mov [g_INT_01c35e60],EAX
        mov EAX,dword ptr [ESP + 0x60]
        mov ECX,dword ptr [EAX + 0x1d1f8]
        xor EBX,EBX
        test ECX,ECX
        jle LAB_005425fb
        mov dword ptr [ESP + 0x58],EBX
        mov EBP,EAX
    LAB_0054259f:
        mov EAX,dword ptr [EBP + 0x1d21c]
        test EAX,EAX
        jl LAB_005425de
        imul ESI,EAX,0x30
        mov EAX,[g_CDemonRenderer_PTR_0060b280]
        mov ECX,0xc
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov EDI,ESP
        add ESI,EAX
        rep movsd
        mov ESI,dword ptr [ESP + 0x88]
        mov ECX,0xc
        sub ESP,0x30
        add ESI,EAX
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407cc0
        add ESP,0x60
    LAB_005425de:
        mov ESI,dword ptr [ESP + 0x58]
        mov EAX,dword ptr [ESP + 0x60]
        add EBP,0x24
        inc EBX
        add ESI,0x30
        mov EDI,dword ptr [EAX + 0x1d1f8]
        mov dword ptr [ESP + 0x58],ESI
        cmp EBX,EDI
        jl LAB_0054259f
    LAB_005425fb:
        test byte ptr [ESP + 0x84],0x2
        jz LAB_005426b0
        mov EAX,dword ptr [ESP + 0x60]
        mov EDX,dword ptr [EAX + 0x1d1f8]
        xor EBX,EBX
        test EDX,EDX
        jle LAB_005426b0
        mov EBP,dword ptr [ESP + 0x80]
    LAB_00542624:
        push EBP
        lea ESI,[ESP + 0x10]
        lea EDI,[ESP + 0x4c]
        call core_xform_cpp_matrixToEulerAngles_FUN_00591de0
        lea ESI,[ESP + 0x10]
        add ESP,0x4
        movsd
        movsd
        movsd
        push EBP
        lea ESI,[ESP + 0x1c]
        call core_xform_cpp_getTranslation_FUN_00592720
        add ESP,0x4
        mov EAX,ESP
        push EAX
        lea EAX,[ESP + 0x4c]
        lea EDI,[ESP + 0x4]
        push EAX
        mov ECX,dword ptr [g_CDemonRenderer_PTR_0060b280]
        lea ESI,[ESP + 0x20]
        push ECX
        movsd
        movsd
        movsd
        call engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
        add ESP,0xc
        push 0xff
        mov ESI,dword ptr [g_CEditorToolsPtr]
        push 0x3f000000
        push ESI
        call shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_0047fd00
        add ESP,0xc
        mov EDI,dword ptr [g_CDemonRenderer_PTR_0060b280]
        push EDI
        call engine_drender_cpp_pop_FUN_0046b4a0
        add ESP,0x4
        mov EAX,dword ptr [ESP + 0x60]
        inc EBX
        mov EDX,dword ptr [EAX + 0x1d1f8]
        add EBP,0x30
        cmp EBX,EDX
        jl LAB_00542624
        lea EAX,[EAX]
        nop
    LAB_005426b0:
}
}
