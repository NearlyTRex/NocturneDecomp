; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052ee50(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005a22f0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a22f0                       ; 0052ee50 | DAT_005a22f0
        ;   Label: FUN_0052ee50
    PUSH 0xa                            ; 0052ee55
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052ee57
    PUSH EDX                            ; 0052ee5b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0052ee5c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0052ee61
    RET                                 ; 0052ee64

