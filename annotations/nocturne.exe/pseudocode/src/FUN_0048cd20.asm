; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048cd20(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0059d4c0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d4c0                       ; 0048cd20 | DAT_0059d4c0
        ;   Label: FUN_0048cd20
    PUSH 0xa                            ; 0048cd25
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048cd27
    PUSH EDX                            ; 0048cd2b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048cd2c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0048cd31
    RET                                 ; 0048cd34

