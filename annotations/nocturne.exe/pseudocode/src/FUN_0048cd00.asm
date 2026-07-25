; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048cd00(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0059d4e0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d4e0                       ; 0048cd00 | DAT_0059d4e0
        ;   Label: FUN_0048cd00
    PUSH 0x64                           ; 0048cd05
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048cd07
    PUSH EDX                            ; 0048cd0b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048cd0c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0048cd11
    RET                                 ; 0048cd14

