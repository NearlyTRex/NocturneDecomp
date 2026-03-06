// Name: shape_edittool.cpp_draw3DInterpolatedLine_FUN_004a1f40
// Address: 004a1f40
// Address Range: [[004a1f40, 004a204e]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_004a1f40(CVector3f *start_point,CVector3f *end_point)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_004a1f40(CVector3f *start_point,CVector3f *end_point)
{
__asm {
        mov EDI,dword ptr [ESP + 0x40]
        mov ESI,dword ptr [ESP + 0x44]
        lea EBX,[ESP + 0x18]
        mov EAX,EDI
        fld float ptr [EAX]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x18]
        push EAX
        push 0x0
        call engine_matrix_c_transformToCache_FUN_0050cd70
        fld float ptr [FLOAT_006235be]
        fld float ptr [ESI]
        fmul ST(1)
        add ESP,0x8
        fstp float ptr [ESP + 0xc]
        fld float ptr [ESI + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0x10]
        fmul float ptr [ESI + 0x8]
        fstp float ptr [ESP + 0x14]
        fld float ptr [FLOAT_006235c2]
        fld float ptr [EDI]
        fmul ST(1)
        fstp float ptr [ESP]
        fld float ptr [EDI + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0x4]
        fmul float ptr [EDI + 0x8]
        lea EBX,[ESP + 0x18]
        lea EAX,[ESP + 0x24]
        fld float ptr [ESP]
        fadd float ptr [ESP + 0xc]
        fld float ptr [ESP + 0x4]
        fxch
        fstp float ptr [ESP + 0x24]
        fadd float ptr [ESP + 0x10]
        fxch
        fst float ptr [ESP + 0x8]
        fadd float ptr [ESP + 0x14]
        fxch
        fstp float ptr [ESP + 0x28]
        fstp float ptr [ESP + 0x2c]
        fld float ptr [EAX]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x18]
        push EAX
        push 0x1
        call engine_matrix_c_transformToCache_FUN_0050cd70
        add ESP,0x8
        mov ESI,0x688044
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x688014
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        add ESP,0x30
}
}
