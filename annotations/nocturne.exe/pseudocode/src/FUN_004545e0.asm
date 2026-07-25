; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004545e0(undefined4 param_1)
;
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59c0a0                       ; 004545e0
        ;   Label: FUN_004545e0
    PUSH 0x100                          ; 004545e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004545ea
    PUSH EDX                            ; 004545ee
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004545ef
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 004545f4
    RET                                 ; 004545f7

