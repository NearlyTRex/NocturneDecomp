; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int cockpit_drawsurf.cpp_getFontMaxWidth_FUN_0048a6a0(CBitFont * font_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   font_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048a6a0
        ;   Label: cockpit_drawsurf.cpp_getFontMaxWidth_FUN_0048a6a0
    MOV EAX,dword ptr [EAX + 0x3170]    ; 0048a6a4
    RET                                 ; 0048a6aa

