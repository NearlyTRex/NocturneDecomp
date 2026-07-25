; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048cca0(undefined4 param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d540                       ; 0048cca0
        ;   Label: FUN_0048cca0
    PUSH 0x100                          ; 0048cca5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ccaa
    PUSH EDX                            ; 0048ccae
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048ccaf
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0048ccb4
    RET                                 ; 0048ccb7

