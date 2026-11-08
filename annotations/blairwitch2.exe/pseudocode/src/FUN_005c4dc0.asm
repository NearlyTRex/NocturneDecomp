; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c4dc0(void)
;
;
; XREF[1]:
;   FUN_005c3628 at 005c366b
;
; Referenced Globals:
;   undefined4 DAT_0061f75c
;
; Called Functions:
;   FUN_005c4d4c
;
; *****************************************************************************

section .text

    CALL FUN_005c4d4c                   ; 005c4dc0
        ;   XREF to: 005c4d4c (UNCONDITIONAL_CALL)  ; undefined FUN_005c4d4c()
        ;   Label: FUN_005c4dc0
    MOV EAX,[0x0061f75c]                ; 005c4dc5 | DAT_0061f75c
    RET                                 ; 005c4dca

