; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c4dcc(void)
;
;
; XREF[1]:
;   FUN_005c36c0 at 005c36f9
;
; Referenced Globals:
;   undefined4 DAT_0061f760
;
; Called Functions:
;   FUN_005c4d4c
;
; *****************************************************************************

section .text

    CALL FUN_005c4d4c                   ; 005c4dcc
        ;   XREF to: 005c4d4c (UNCONDITIONAL_CALL)  ; undefined FUN_005c4d4c()
        ;   Label: FUN_005c4dcc
    MOV EAX,[0x0061f760]                ; 005c4dd1 | DAT_0061f760
    RET                                 ; 005c4dd6

