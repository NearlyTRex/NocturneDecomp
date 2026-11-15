; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_setLineBlendingDisabled_FUN_0043a020(int disabled)
;
; Parameters:
; int              Stack[0x4]:4   disabled
;
; Referenced Globals:
;   undefined4 DAT_007c7550
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043a020
        ;   Label: cockpit_ckptutil.c_setLineBlendingDisabled_FUN_0043a020
    MOV [0x007c7550],EAX                ; 0043a024 | DAT_007c7550
    RET                                 ; 0043a029

