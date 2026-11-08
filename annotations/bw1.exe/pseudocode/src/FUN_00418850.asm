; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00418850(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0040d0a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00418850
        ;   Label: FUN_00418850
    PUSH EDX                            ; 00418854
    CALL FUN_0040d0a0                   ; 00418855
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 0041885a
    RET                                 ; 0041885d

