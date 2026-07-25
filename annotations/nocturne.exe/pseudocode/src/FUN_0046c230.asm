; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046c230(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005993b0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 0046c230 | DAT_005993b0
        ;   Label: FUN_0046c230
    PUSH 0x4e20                         ; 0046c235
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046c23a
    PUSH EDX                            ; 0046c23e
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0046c23f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0046c244
    RET                                 ; 0046c247

