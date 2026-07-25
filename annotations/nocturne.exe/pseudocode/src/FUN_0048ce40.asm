; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048ce40(undefined4 param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d3a0                       ; 0048ce40
        ;   Label: FUN_0048ce40
    PUSH 0x100                          ; 0048ce45
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ce4a
    PUSH EDX                            ; 0048ce4e
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048ce4f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0048ce54
    RET                                 ; 0048ce57

