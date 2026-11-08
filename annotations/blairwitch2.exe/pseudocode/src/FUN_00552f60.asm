; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00552f60(void)
;
;
; XREF[2]:
;   FUN_00552f80 at 00552f84
;   FUN_00553070 at 0055307e
;
; Referenced Globals:
;   undefined4 DAT_0264986c
;
; Called Functions:
;   FUN_00552f50
;
; *****************************************************************************

section .text

    CALL FUN_00552f50                   ; 00552f60
        ;   XREF to: 00552f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00552f50()
        ;   Label: FUN_00552f60
    TEST EAX,EAX                        ; 00552f65
    JZ 0x00552f6e                       ; 00552f67
        ;   XREF to: 00552f6e (CONDITIONAL_JUMP)  ; LAB_00552f6e
    MOV EAX,[0x0264986c]                ; 00552f69 | DAT_0264986c
    RET                                 ; 00552f6e
        ;   Label: LAB_00552f6e

