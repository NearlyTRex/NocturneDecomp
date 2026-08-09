; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_setLineBlendingDisabled_FUN_004301f0(int disabled)
;
; Parameters:
; int              Stack[0x4]:4   disabled
;
; Referenced Globals:
;   undefined4 DAT_00766c6c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004301f0
        ;   Label: cockpit_ckptutil.c_setLineBlendingDisabled_FUN_004301f0
    MOV [0x00766c6c],EAX                ; 004301f4 | DAT_00766c6c
    RET                                 ; 004301f9

