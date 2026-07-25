; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048ce60(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0059d380
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d380                       ; 0048ce60 | DAT_0059d380
        ;   Label: FUN_0048ce60
    PUSH 0x14                           ; 0048ce65
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ce67
    PUSH EDX                            ; 0048ce6b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048ce6c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0048ce71
    RET                                 ; 0048ce74

