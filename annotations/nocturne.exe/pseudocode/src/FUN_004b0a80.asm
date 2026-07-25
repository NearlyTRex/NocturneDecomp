; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0a80(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0059e570
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59e570                       ; 004b0a80 | DAT_0059e570
        ;   Label: FUN_004b0a80
    PUSH 0x20                           ; 004b0a85
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b0a87
    PUSH EDX                            ; 004b0a8b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004b0a8c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 004b0a91
    RET                                 ; 004b0a94

