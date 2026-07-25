; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050eb80(void)
;
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH 0x5a1a10                       ; 0050eb80
        ;   Label: FUN_0050eb80
    PUSH 0x5                            ; 0050eb85
    PUSH 0x20842d4                      ; 0050eb87
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0050eb8c
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 0050eb91
    RET                                 ; 0050eb94

