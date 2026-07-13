; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048cbd0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004ef030
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0048cbd0
        ;   Label: FUN_0048cbd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048cbd2
    PUSH EDX                            ; 0048cbd6
    CALL FUN_004ef030                   ; 0048cbd7
        ;   XREF to: 004ef030 (UNCONDITIONAL_CALL)  ; undefined FUN_004ef030()
    ADD ESP,0x8                         ; 0048cbdc
    RET                                 ; 0048cbdf

