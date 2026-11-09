; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 core_trap_cpp_FUN_0056ccaf(void)
;
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0056ccaf
        ;   Label: core_trap.cpp_FUN_0056ccaf
    ADD byte ptr [EAX + 0x61],CH        ; 0056ccb0
    POP EBP                             ; 0056ccb3
    ADD byte ptr [EAX + -0x1c],CH       ; 0056ccb5
    XLAT EBX                            ; 0056ccb8
    IRETD                               ; 0056ccb9

