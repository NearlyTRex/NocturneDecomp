; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00511d60(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH 0x5993f0                       ; 00511d60
        ;   Label: FUN_00511d60
    PUSH 0x7d0                          ; 00511d65
    PUSH 0x2665930                      ; 00511d6a
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00511d6f
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 00511d74
    RET                                 ; 00511d77

