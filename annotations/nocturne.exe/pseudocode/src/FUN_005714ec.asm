; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005714ec(void)
;
;
; XREF[1]:
;   FUN_0056fc30 at 0056fc69
;
; Referenced Globals:
;   undefined4 DAT_005c20d4
;
; Called Functions:
;   FUN_0057146c
;
; *****************************************************************************

section .text

    CALL FUN_0057146c                   ; 005714ec
        ;   XREF to: 0057146c (UNCONDITIONAL_CALL)  ; undefined FUN_0057146c()
        ;   Label: FUN_005714ec
    MOV EAX,[0x005c20d4]                ; 005714f1 | DAT_005c20d4
    RET                                 ; 005714f6

