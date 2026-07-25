; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005143c0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005993f0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993f0                       ; 005143c0 | DAT_005993f0
        ;   Label: FUN_005143c0
    PUSH 0x7d0                          ; 005143c5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005143ca
    PUSH EDX                            ; 005143ce
    CALL crt_memory.c___arrfini_FUN_0056494f ; 005143cf
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 005143d4
    RET                                 ; 005143d7

