; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_setValue_FUN_00580870(int val)
;
; Parameters:
; int              Stack[0x4]:4   val
;
; Referenced Globals:
;   undefined4 DAT_02d20334
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00580870
        ;   Label: wincore_winrun.cpp_setValue_FUN_00580870
    MOV [0x02d20334],EAX                ; 00580874 | DAT_02d20334
    RET                                 ; 00580879

