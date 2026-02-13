; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_edittool_cpp_getFontCharSpacing_FUN_004a6f00(CBitFont *font_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   font_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_initEditorLayout_FUN_00566660 at 0056668a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a6f00
        ;   Label: shape_edittool.cpp_getFontCharSpacing_FUN_004a6f00
    MOV EAX,dword ptr [EAX + 0x3174]    ; 004a6f04
    RET                                 ; 004a6f0a

