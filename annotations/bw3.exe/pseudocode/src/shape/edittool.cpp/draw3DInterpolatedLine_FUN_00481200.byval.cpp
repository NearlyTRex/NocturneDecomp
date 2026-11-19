// Name: shape_edittool.cpp_draw3DInterpolatedLine_FUN_00481200
// Address: 00481200
// Address Range: [[00481200, 00481341]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_00481200(CVector3f *start_point,CVector3f *end_point)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_00481200(CVector3f *start_point,CVector3f *end_point)
{
__asm {
        mov EBP,dword ptr [ESP + 0x68]
        mov EDI,dword ptr [ESP + 0x6c]
        lea EBX,[ESP + 0x18]
        mov EAX,EBP
        fld float ptr [EAX]
        fmul float ptr [g_FLOAT_005deffc]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_FLOAT_005deffc]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_FLOAT_005deffc]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x18]
        push EAX
        push 0x0
        call engine_matrix_c_transformToCache_FUN_004e5540
        fld float ptr [g_FLOAT_005bd33d]
        fld float ptr [EDI]
        fmul ST(1)
        fld float ptr [EDI + 0x4]
        fmul ST(2)
        fld float ptr [EDI + 0x8]
        fmulp ST(3)
        lea ESI,[ESP + 0x38]
        add ESP,0x8
        lea EDI,[ESP + 0x48]
        fxch
        fstp float ptr [ESP + 0x30]
        fstp float ptr [ESP + 0x34]
        fstp float ptr [ESP + 0x38]
        movsd
        movsd
        movsd
        fld float ptr [g_FLOAT_005bd341]
        fld float ptr [EBP]
        fmul ST(1)
        fld float ptr [EBP + 0x4]
        fmul ST(2)
        fld float ptr [EBP + 0x8]
        fmulp ST(3)
        lea EBX,[ESP + 0x18]
        lea EDI,[ESP + 0xc]
        lea ESI,[ESP + 0x3c]
        fxch
        fstp float ptr [ESP + 0x3c]
        fstp float ptr [ESP + 0x40]
        fstp float ptr [ESP + 0x44]
        movsd
        movsd
        movsd
        lea EAX,[ESP + 0x24]
        fld float ptr [ESP + 0xc]
        fld float ptr [ESP + 0x10]
        fld float ptr [ESP + 0x14]
        lea EDI,[ESP + 0x24]
        mov ESI,ESP
        fxch ST(2)
        fadd float ptr [ESP + 0x48]
        fxch
        fadd float ptr [ESP + 0x4c]
        fxch ST(2)
        fadd float ptr [ESP + 0x50]
        fxch
        fstp float ptr [ESP]
        fxch
        fstp float ptr [ESP + 0x4]
        fstp float ptr [ESP + 0x8]
        movsd
        movsd
        movsd
        fld float ptr [EAX]
        fmul float ptr [g_FLOAT_005deffc]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_FLOAT_005deffc]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_FLOAT_005deffc]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x18]
        push EAX
        push 0x1
        call engine_matrix_c_transformToCache_FUN_004e5540
        add ESP,0x8
        mov ESI,0x60b044
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x60b014
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407b30
        add ESP,0x60
}
}
