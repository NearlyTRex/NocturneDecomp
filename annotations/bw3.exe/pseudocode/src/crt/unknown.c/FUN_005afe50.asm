; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005afe50(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005ae798 at 005ae7db
;
; Referenced Globals:
;   undefined4 DAT_00607e80
;
; Called Functions:
;   crt_unknown.c_FUN_005afddc
;
; *****************************************************************************

section .text

    CALL crt_unknown.c_FUN_005afddc     ; 005afe50
        ;   XREF to: 005afddc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005afddc()
        ;   Label: crt_unknown.c_FUN_005afe50
    MOV EAX,[0x00607e80]                ; 005afe55 | DAT_00607e80
    RET                                 ; 005afe5a

