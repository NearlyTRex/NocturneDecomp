; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_setValue_FUN_00558be0(int val)
;
; Parameters:
; int              Stack[0x4]:4   val
;
; Referenced Globals:
;   int g_INT_02de0854
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00558be0
        ;   Label: wincore_winrun.cpp_setValue_FUN_00558be0
    MOV [0x02de0854],EAX                ; 00558be4 | g_INT_02de0854
    RET                                 ; 00558be9

