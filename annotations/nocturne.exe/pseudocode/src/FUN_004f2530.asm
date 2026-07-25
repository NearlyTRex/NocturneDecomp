; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f2530(undefined4 param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a1200                       ; 004f2530
        ;   Label: FUN_004f2530
    PUSH 0xc                            ; 004f2535
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f2537
    PUSH EDX                            ; 004f253b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004f253c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 004f2541
    RET                                 ; 004f2544

