// Name: core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_00564b20
// Address: 00564b20
// Address Range: [[00564b20, 00564d37]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_00564b20(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_00564b20(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)
{
__asm {
        mov EDX,dword ptr [ESP + 0x78]
        push EDX
        call core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40
        add ESP,0x4
        mov DL,byte ptr [ESP + 0x84]
        mov dword ptr [ESP + 0x60],EAX
        test DL,0x1
        jz LAB_00564c74
        mov ECX,dword ptr [EAX + 0x1de78]
        xor EBP,EBP
        test ECX,ECX
        jle LAB_00564bf0
        mov EAX,dword ptr [ESP + 0x80]
        mov dword ptr [ESP + 0x58],EAX
    LAB_00564b63:
        imul EAX,EBP,0x30
        mov EBX,dword ptr [ESP + 0x58]
        lea ESI,[ESP + 0x3c]
        push EBX
        lea EDI,[ESP + 0x28]
        mov dword ptr [ESP + 0x58],EAX
        call core_xform_cpp_getTranslation_FUN_005b6270
        lea ESI,[ESP + 0x40]
        add ESP,0x4
        lea EBX,[ESP + 0x48]
        movsd
        movsd
        movsd
        lea EAX,[ESP + 0x24]
        mov ESI,dword ptr [g_CDemonRenderer_PTR_00612560]
        fld float ptr [EAX]
        fmul float ptr [g_FLOAT_00605888]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_FLOAT_00605888]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_FLOAT_00605888]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x48]
        push EAX
        mov EAX,dword ptr [ESI]
        add EAX,dword ptr [ESP + 0x58]
        push EAX
        call engine_special_cpp_transformAndProjectPoint_FUN_00580173
        add ESP,0x8
        mov EDI,dword ptr [ESP + 0x58]
        mov EAX,dword ptr [ESP + 0x60]
        inc EBP
        add EDI,0x30
        mov EDX,dword ptr [EAX + 0x1de78]
        mov dword ptr [ESP + 0x58],EDI
        cmp EBP,EDX
        jl LAB_00564b63
        lea EAX,[EAX]
        mov EDX,EDX
    LAB_00564bf0:
        mov EAX,dword ptr [ESP + 0x7c]
        mov [g_INT_01c4f020],EAX
        mov EAX,dword ptr [ESP + 0x60]
        xor ECX,ECX
        mov EBX,dword ptr [EAX + 0x1de78]
        mov dword ptr [ESP + 0x5c],ECX
        test EBX,EBX
        jle LAB_00564c74
        mov EBP,EAX
        xor EBX,EBX
    LAB_00564c11:
        mov ESI,dword ptr [EBP + 0x1de9c]
        test ESI,ESI
        jl LAB_00564c55
        lea EAX,[ESI*0x4 + 0x0]
        mov ECX,0xc
        sub EAX,ESI
        sub ESP,0x30
        mov ESI,EAX
        mov EAX,[g_CDemonRenderer_PTR_00612560]
        shl ESI,0x4
        mov EAX,dword ptr [EAX]
        mov EDI,ESP
        add ESI,EAX
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + EBX*0x1]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407af0
        add ESP,0x60
    LAB_00564c55:
        mov ESI,dword ptr [ESP + 0x5c]
        inc ESI
        mov dword ptr [ESP + 0x5c],ESI
        mov EAX,ESI
        mov ESI,dword ptr [ESP + 0x60]
        add EBP,0x24
        mov EDI,dword ptr [ESI + 0x1de78]
        add EBX,0x30
        cmp EAX,EDI
        jl LAB_00564c11
    LAB_00564c74:
        test byte ptr [ESP + 0x84],0x2
        jz LAB_00564d30
        mov EAX,dword ptr [ESP + 0x60]
        mov EBP,dword ptr [EAX + 0x1de78]
        xor EBX,EBX
        test EBP,EBP
        jle LAB_00564d30
        mov EBP,dword ptr [ESP + 0x80]
    LAB_00564c9d:
        push EBP
        lea ESI,[ESP + 0x4]
        lea EDI,[ESP + 0x34]
        call core_xform_cpp_matrixToEulerAngles_FUN_005b5930
        lea ESI,[ESP + 0x4]
        add ESP,0x4
        movsd
        movsd
        movsd
        push EBP
        lea ESI,[ESP + 0x10]
        call core_xform_cpp_getTranslation_FUN_005b6270
        add ESP,0x4
        lea EAX,[ESP + 0x18]
        push EAX
        lea EAX,[ESP + 0x34]
        lea EDI,[ESP + 0x1c]
        push EAX
        mov EAX,[g_CDemonRenderer_PTR_00612560]
        lea ESI,[ESP + 0x14]
        push EAX
        movsd
        movsd
        movsd
        call engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
        add ESP,0xc
        push 0xff
        mov EDX,dword ptr [g_CEditorToolsPtr]
        push 0x3f000000
        push EDX
        call shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00498360
        add ESP,0xc
        mov ECX,dword ptr [g_CDemonRenderer_PTR_00612560]
        push ECX
        call engine_drender_cpp_pop_FUN_004839a0
        add ESP,0x4
        mov EAX,dword ptr [ESP + 0x60]
        inc EBX
        mov ESI,dword ptr [EAX + 0x1de78]
        add EBP,0x30
        cmp EBX,ESI
        jl LAB_00564c9d
        lea EAX,[EAX]
        lea EDX,[EDX]
        nop
    LAB_00564d30:
}
}
