; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_edittool.cpp_getFontMaxCharHeight_FUN_004a6ee0(CBitFont * font_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   font_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a6ee0
        ;   Label: shape_edittool.cpp_getFontMaxCharHeight_FUN_004a6ee0
    MOV EAX,dword ptr [EAX + 0x3168]    ; 004a6ee4
    RET                                 ; 004a6eea

