; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0a60(undefined4 param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59e590                       ; 004b0a60
        ;   Label: FUN_004b0a60
    PUSH 0x3e8                          ; 004b0a65
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b0a6a
    PUSH EDX                            ; 004b0a6e
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004b0a6f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 004b0a74
    RET                                 ; 004b0a77

