; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_ckptutil_c_isLineBlendingDisabled_FUN_004301d0(void)
;
;
; Referenced Globals:
;   int g_LineBlendingDisabled
;
; *****************************************************************************

section .text

    MOV EAX,[0x00766c6c]                ; 004301d0 | g_LineBlendingDisabled
        ;   Label: cockpit_ckptutil.c_isLineBlendingDisabled_FUN_004301d0
    RET                                 ; 004301d5

