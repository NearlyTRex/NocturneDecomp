; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_setValue_FUN_005b25f0(int val)
;
; Parameters:
; int              Stack[0x4]:4   val
;
; Referenced Globals:
;   byte g_BYTE_02c9a624
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b25f0
        ;   Label: wincore_winrun.cpp_setValue_FUN_005b25f0
    MOV [0x02c9a624],EAX                ; 005b25f4 | g_BYTE_02c9a624
    RET                                 ; 005b25f9

