; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048cdc0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0059d420
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d420                       ; 0048cdc0 | DAT_0059d420
        ;   Label: FUN_0048cdc0
    PUSH 0x40                           ; 0048cdc5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048cdc7
    PUSH EDX                            ; 0048cdcb
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048cdcc
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0048cdd1
    RET                                 ; 0048cdd4

