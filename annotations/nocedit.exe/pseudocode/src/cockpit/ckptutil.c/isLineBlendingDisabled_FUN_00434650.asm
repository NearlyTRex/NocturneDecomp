; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int cockpit_ckptutil.c_isLineBlendingDisabled_FUN_00434650(void)
;
;
; Referenced Globals:
;   int g_LineBlendingDisabled
;
; *****************************************************************************

section .text

    MOV EAX,[0x00824e20]                ; 00434650 | g_LineBlendingDisabled
        ;   Label: cockpit_ckptutil.c_isLineBlendingDisabled_FUN_00434650
    RET                                 ; 00434655

