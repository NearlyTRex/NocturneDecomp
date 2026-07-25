; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048cda0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0059d440
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d440                       ; 0048cda0 | DAT_0059d440
        ;   Label: FUN_0048cda0
    PUSH 0xa                            ; 0048cda5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048cda7
    PUSH EDX                            ; 0048cdab
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048cdac
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0048cdb1
    RET                                 ; 0048cdb4

