; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char __cdecl wincore_winrun_cpp_getValue_FUN_005f2f20(void)
;
;
; Referenced Globals:
;   int g_UnknownInputValue
;
; *****************************************************************************

section .text

    MOV AL,[0x03f96c24]                 ; 005f2f20 | g_UnknownInputValue
        ;   Label: wincore_winrun.cpp_getValue_FUN_005f2f20
    RET                                 ; 005f2f25

