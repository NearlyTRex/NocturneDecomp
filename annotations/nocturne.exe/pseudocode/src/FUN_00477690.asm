; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00477690(void)
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

    PUSH 0x5993b0                       ; 00477690 | DAT_005993b0
        ;   Label: FUN_00477690
    PUSH 0x8                            ; 00477695
    MOV EDX,dword ptr [ESP + 0xc]       ; 00477697
    PUSH EDX                            ; 0047769b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0047769c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 004776a1
    RET                                 ; 004776a4

