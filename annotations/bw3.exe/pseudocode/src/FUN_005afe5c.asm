; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005afe5c(void)
;
;
; XREF[1]:
;   FUN_005ae830 at 005ae869
;
; Referenced Globals:
;   undefined4 DAT_00607e84
;
; Called Functions:
;   FUN_005afddc
;
; *****************************************************************************

section .text

    CALL FUN_005afddc                   ; 005afe5c
        ;   XREF to: 005afddc (UNCONDITIONAL_CALL)  ; undefined FUN_005afddc()
        ;   Label: FUN_005afe5c
    MOV EAX,[0x00607e84]                ; 005afe61 | DAT_00607e84
    RET                                 ; 005afe66

