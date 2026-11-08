; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e6ec0(void)
;
;
; Called Functions:
;   FUN_004e71c0
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x100                          ; 004e6ec0
        ;   Label: FUN_004e6ec0
    PUSH 0x100                          ; 004e6ec5
    PUSH 0x1d06940                      ; 004e6eca
    CALL FUN_004e71c0                   ; 004e6ecf
        ;   XREF to: 004e71c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e71c0()
    ADD ESP,0xc                         ; 004e6ed4
    PUSH 0x61eebc                       ; 004e6ed7
    CALL FUN_005c1093                   ; 004e6edc
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 004e6ee1
    RET                                 ; 004e6ee4

