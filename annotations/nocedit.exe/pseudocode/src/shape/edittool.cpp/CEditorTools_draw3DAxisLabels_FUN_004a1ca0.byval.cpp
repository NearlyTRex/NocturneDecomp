// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
// Address: 004a1ca0
// Address Range: [[004a1ca0, 004a1e8d] [006029f4, 00602c17]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools *this_ptr,float scale_factor,int text_color)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools *this_ptr,float scale_factor,int text_color)
{
__asm {
        cmp dword ptr [g_EditorFont],0x0
        jz LAB_004a1e0f
    LAB_004a1cb4:
        mov EAX,[g_EditorFont]
        push 0x6a
        mov EBX,dword ptr [EAX + 0x3168]
        push EAX
        mov dword ptr [g_FontCharacterHeight],EBX
        call engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0
        add ESP,0x8
        fld float ptr [ESP + 0x3c]
        fmul double ptr [g_AxisScaleMultiplier]
        xor ESI,ESI
        mov [g_FontCharacterWidth],EAX
        mov EAX,dword ptr [ESP + 0x40]
        mov dword ptr [ESP + 0x14],ESI
        mov dword ptr [ESP + 0x18],ESI
        mov [g_ActiveRenderColor],EAX
        lea EAX,[ESP + 0x14]
        mov dword ptr [ESP + 0x1c],ESI
        push EAX
        call crt_math_c_round_FUN_005fe6b0
        push ESI
        fistp dword ptr [ESP + 0x28]
        call engine_matrix_c_transformToCache_FUN_0050cd70
        add ESP,0x8
        mov EAX,dword ptr [ESP + 0x20]
        mov dword ptr [ESP + 0x14],EAX
        lea EAX,[ESP + 0x14]
        push EAX
        push 0x1
        mov dword ptr [ESP + 0x20],ESI
        mov dword ptr [ESP + 0x24],ESI
        call engine_matrix_c_transformToCache_FUN_0050cd70
        add ESP,0x8
        jmp LAB_006029f4
    LAB_004a1d3b:
        rep movsd
        jmp LAB_00602a4e
    LAB_004a1d4c:
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,dword ptr [ESP + 0x20]
        mov dword ptr [ESP + 0x18],EAX
        lea EAX,[ESP + 0x14]
        push EAX
        xor ECX,ECX
        push 0x2
        mov dword ptr [ESP + 0x1c],ECX
        mov dword ptr [ESP + 0x24],ECX
        call engine_matrix_c_transformToCache_FUN_0050cd70
        add ESP,0x8
        jmp LAB_00602aa8
    LAB_004a1d86:
        rep movsd
        jmp LAB_00602b02
    LAB_004a1d97:
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,dword ptr [ESP + 0x20]
        mov dword ptr [ESP + 0x1c],EAX
        lea EAX,[ESP + 0x14]
        push EAX
        xor EBX,EBX
        xor ESI,ESI
        push 0x3
        mov dword ptr [ESP + 0x1c],ESI
        mov dword ptr [ESP + 0x20],EBX
        call engine_matrix_c_transformToCache_FUN_0050cd70
        add ESP,0x8
        jmp LAB_00602b5c
    LAB_004a1dd8:
        rep movsd
        jmp LAB_00602bbb
    LAB_004a1dec:
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        xor ESI,ESI
    LAB_004a1df8:
        test byte ptr [EBX + 0x13],0x80
        jz LAB_004a1e37
    LAB_004a1dfe:
        inc ESI
        add EBX,0x30
        cmp ESI,0x3
        jl LAB_004a1df8
        add ESP,0x24
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_004a1e0f:
        mov ECX,0x622eae
        mov EBX,0x8d
        push 0x622ec4
        mov dword ptr [g_CurrentFilename],ECX
        mov dword ptr [g_CurrentLineNumber],EBX
        call core_main_c_displayErrorAndQuit_FUN_00506f10
        add ESP,0x4
        jmp LAB_004a1cb4
    LAB_004a1e37:
        xor EAX,EAX
        mov AL,byte ptr [g_AxisLabelChars + ESI]
        push EAX
        push 0x6235af
        lea EAX,[ESP + 0x8]
        push EAX
        mov EBP,dword ptr [EBX + 0x10]
        mov EDI,dword ptr [EBX + 0x14]
        call crt_stdio_c__sprintf_FUN_005fdbd0
        add ESP,0xc
        push 0xffff
        call engine_3d_c_setRenderAlpha_FUN_00406d80
        add ESP,0x4
        push -0x1
        mov EAX,[g_AxisLabelTextColor]
        push EAX
        sar EDI,0x10
        push EDI
        sar EBP,0x10
        push EBP
        lea EAX,[ESP + 0x10]
        push EAX
        mov EDX,dword ptr [g_EditorFont]
        push EDX
        call engine_font_cpp_CBitFont_drawText_FUN_004cda80
        add ESP,0x18
        jmp LAB_004a1dfe
    LAB_006029f4:
        mov ESI,0x688044
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
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
        jmp LAB_004a1d3b
    LAB_00602a4e:
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x688014
        mov EDI,ESP
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
        jmp LAB_004a1d4c
    LAB_00602aa8:
        mov ESI,0x688074
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
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
        jmp LAB_004a1d86
    LAB_00602b02:
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x688014
        mov EDI,ESP
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
        jmp LAB_004a1d97
    LAB_00602b5c:
        mov ESI,0x6880a4
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov EBX,0x688014
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
        jmp LAB_004a1dd8
    LAB_00602bbb:
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x688014
        mov EDI,ESP
        add EBX,0x30
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
        jmp LAB_004a1dec
}
}
