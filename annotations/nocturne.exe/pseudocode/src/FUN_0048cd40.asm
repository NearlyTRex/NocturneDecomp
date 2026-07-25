; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048cd40(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0059d4a0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d4a0                       ; 0048cd40 | DAT_0059d4a0
        ;   Label: FUN_0048cd40
    PUSH 0x1f4                          ; 0048cd45
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048cd4a
    PUSH EDX                            ; 0048cd4e
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048cd4f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0048cd54
    RET                                 ; 0048cd57

