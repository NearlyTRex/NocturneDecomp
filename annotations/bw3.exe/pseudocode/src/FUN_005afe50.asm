; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005afe50(void)
;
;
; XREF[1]:
;   FUN_005ae798 at 005ae7db
;
; Referenced Globals:
;   undefined4 DAT_00607e80
;
; Called Functions:
;   FUN_005afddc
;
; *****************************************************************************

section .text

    CALL FUN_005afddc                   ; 005afe50
        ;   XREF to: 005afddc (UNCONDITIONAL_CALL)  ; undefined FUN_005afddc()
        ;   Label: FUN_005afe50
    MOV EAX,[0x00607e80]                ; 005afe55 | DAT_00607e80
    RET                                 ; 005afe5a

