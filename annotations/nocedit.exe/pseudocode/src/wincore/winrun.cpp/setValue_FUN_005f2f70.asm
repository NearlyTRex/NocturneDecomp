; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_winrun.cpp_setValue_FUN_005f2f70(int val)
;
; Parameters:
; int              Stack[0x4]:4   val
;
; Referenced Globals:
;   int g_UnknownInputValue
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005f2f70
        ;   Label: wincore_winrun.cpp_setValue_FUN_005f2f70
    MOV [0x03f96c24],EAX                ; 005f2f74 | int g_UnknownInputValue
    RET                                 ; 005f2f79

