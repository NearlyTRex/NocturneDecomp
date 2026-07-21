; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048fce0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0048fc30 at 0048fc45
;
; Referenced Globals:
;   undefined4 DAT_0059db10
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59db10                       ; 0048fce0 | DAT_0059db10
        ;   Label: FUN_0048fce0
    PUSH 0xc8                           ; 0048fce5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048fcea
    PUSH EDX                            ; 0048fcee
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048fcef
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0048fcf4
    RET                                 ; 0048fcf7

