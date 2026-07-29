; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_getFontMaxCharHeight_FUN_00477670(CBitFont *font_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   font_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00477670
        ;   Label: shape_edittool.cpp_getFontMaxCharHeight_FUN_00477670
    MOV EAX,dword ptr [EAX + 0x3168]    ; 00477674
    RET                                 ; 0047767a

