; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005afe5c(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005ae014 at 005ae033
;   crt_unknown.c_FUN_005ae830 at 005ae869
;
; Referenced Globals:
;   undefined4 DAT_00607e84
;
; Called Functions:
;   crt_unknown.c_FUN_005afddc
;
; *****************************************************************************

section .text

    CALL crt_unknown.c_FUN_005afddc     ; 005afe5c
        ;   XREF to: 005afddc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005afddc()
        ;   Label: crt_unknown.c_FUN_005afe5c
    MOV EAX,[0x00607e84]                ; 005afe61 | DAT_00607e84
    RET                                 ; 005afe66

