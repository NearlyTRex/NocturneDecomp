// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_00498360
// Address: 00498360
// Address Range: [[00498360, 004985aa]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00498360(CEditorTools *this_ptr,float scale_factor,int text_color)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00498360(CEditorTools *this_ptr,float scale_factor,int text_color)
{
__asm {
        mov ESI,dword ptr [ESP + 0x40]
        cmp dword ptr [g_CBitFont_PTR_01c3eb50],0x0
        jz LAB_00498513
    LAB_00498378:
        mov EAX,[g_CBitFont_PTR_01c3eb50]
        push 0x6a
        mov EBX,dword ptr [EAX + 0x41e8]
        push EAX
        mov dword ptr [g_EditorFontMaxCharWidth],EBX
        call engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510
        add ESP,0x8
        fld float ptr [ESP + 0x3c]
        fmul double ptr [g_DOUBLE_005dc278]
        mov EDI,dword ptr [g_INT_01c3f544]
        mov [g_INT_01c3f53c],EAX
        call crt_math_c_round_FUN_005c03a0
        fistp dword ptr [ESP + 0x20]
        test EDI,EDI
        jz LAB_0049853b
        mov EBX,ESI
        and EBX,0xff
        lea EAX,[EBX*0x4 + 0x0]
        sub EAX,EBX
        xor EBX,EBX
        mov BL,byte ptr [EAX + 0x1c4e9f9]
        mov ESI,EBX
        xor EBX,EBX
        mov BL,byte ptr [EAX + 0x1c4e9f8]
        shl ESI,0x8
        shl EBX,0x10
        mov AL,byte ptr [EAX + 0x1c4e9fa]
        or EBX,ESI
        and EAX,0xff
        or EBX,EAX
        push EBX
        call engine_mini3d_cpp_setColor_FUN_00517d50
        add ESP,0x4
    LAB_004983fb:
        lea EAX,[ESP + 0x14]
        xor EBP,EBP
        push EAX
        mov dword ptr [ESP + 0x18],EBP
        push EBP
        mov dword ptr [ESP + 0x20],EBP
        mov dword ptr [ESP + 0x24],EBP
        call engine_matrix_c_transformToCache_FUN_00507b00
        add ESP,0x8
        mov EAX,dword ptr [ESP + 0x20]
        mov dword ptr [ESP + 0x14],EAX
        lea EAX,[ESP + 0x14]
        push EAX
        push 0x1
        mov dword ptr [ESP + 0x20],EBP
        mov dword ptr [ESP + 0x24],EBP
        call engine_matrix_c_transformToCache_FUN_00507b00
        add ESP,0x8
        mov ESI,0x629044
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x629014
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407af0
        add ESP,0x60
        mov EAX,dword ptr [ESP + 0x20]
        mov dword ptr [ESP + 0x18],EAX
        lea EAX,[ESP + 0x14]
        push EAX
        push 0x2
        mov dword ptr [ESP + 0x1c],EBP
        mov dword ptr [ESP + 0x24],EBP
        call engine_matrix_c_transformToCache_FUN_00507b00
        add ESP,0x8
        mov ESI,0x629074
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x629014
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407af0
        add ESP,0x60
        mov EAX,dword ptr [ESP + 0x20]
        mov dword ptr [ESP + 0x1c],EAX
        lea EAX,[ESP + 0x14]
        push EAX
        push 0x3
        mov dword ptr [ESP + 0x1c],EBP
        mov dword ptr [ESP + 0x20],EBP
        call engine_matrix_c_transformToCache_FUN_00507b00
        add ESP,0x8
        mov ESI,0x6290a4
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov EBX,0x629014
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x629014
        mov EDI,ESP
        add EBX,0x30
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407af0
        add ESP,0x60
        xor ESI,ESI
    LAB_004984fc:
        test byte ptr [EBX + 0x13],0x80
        jz LAB_00498546
    LAB_00498502:
        inc ESI
        add EBX,0x30
        cmp ESI,0x3
        jl LAB_004984fc
        add ESP,0x24
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_00498513:
        mov ECX,0x5dbc68
        mov EBX,0xa4
        push 0x5dbc7e
        mov dword ptr [g_CHAR_PTR_01d1d400],ECX
        mov dword ptr [g_INT_01d1d404],EBX
        call core_main_c_displayErrorAndQuit_FUN_005030e0
        add ESP,0x4
        jmp LAB_00498378
    LAB_0049853b:
        mov dword ptr [g_INT_01c4f020],ESI
        jmp LAB_004983fb
    LAB_00498546:
        xor EAX,EAX
        mov AL,byte ptr [ESI + 0x5dc26a]
        push EAX
        push 0x5dc26e
        lea EAX,[ESP + 0x8]
        push EAX
        mov EDI,dword ptr [EBX + 0x10]
        mov EBP,dword ptr [EBX + 0x14]
        call crt_unknown_c_sprintf_FUN_005bfb40
        add ESP,0xc
        push 0xffff
        call engine_3d_c_setRenderAlpha_FUN_00406bd0
        add ESP,0x4
        push 0x3f800000
        call engine_mini3d_cpp_setAlpha_FUN_00512320
        add ESP,0x4
        push -0x1
        mov EDX,dword ptr [g_AxisLabelTextColor]
        push EDX
        sar EBP,0x10
        push EBP
        sar EDI,0x10
        push EDI
        lea EAX,[ESP + 0x10]
        push EAX
        mov ECX,dword ptr [g_CBitFont_PTR_01c3eb50]
        push ECX
        call engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
        add ESP,0x18
        jmp LAB_00498502
}
}
