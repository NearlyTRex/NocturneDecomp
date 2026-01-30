; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_edittool_cpp_getFontMaxCharWidth_FUN_004a6ef0(CBitFont *font_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   font_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_FUN_00566660 at 005666a1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a6ef0
        ;   Label: shape_edittool.cpp_getFontMaxCharWidth_FUN_004a6ef0
    MOV EAX,dword ptr [EAX + 0x316c]    ; 004a6ef4
    RET                                 ; 004a6efa

