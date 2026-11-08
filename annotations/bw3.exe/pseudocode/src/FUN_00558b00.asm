; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00558b00(void)
;
;
; XREF[2]:
;   FUN_00558b20 at 00558b24
;   FUN_00558c10 at 00558c1e
;
; Referenced Globals:
;   undefined4 DAT_02cf3c6c
;
; Called Functions:
;   FUN_00558af0
;
; *****************************************************************************

section .text

    CALL FUN_00558af0                   ; 00558b00
        ;   XREF to: 00558af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00558af0()
        ;   Label: FUN_00558b00
    TEST EAX,EAX                        ; 00558b05
    JZ 0x00558b0e                       ; 00558b07
        ;   XREF to: 00558b0e (CONDITIONAL_JUMP)  ; LAB_00558b0e
    MOV EAX,[0x02cf3c6c]                ; 00558b09 | DAT_02cf3c6c
    RET                                 ; 00558b0e
        ;   Label: LAB_00558b0e

