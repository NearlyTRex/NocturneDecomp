; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ea130(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0042f240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ea130
        ;   Label: FUN_004ea130
    PUSH EDX                            ; 004ea134
    CALL FUN_0042f240                   ; 004ea135
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f240()
    ADD ESP,0x4                         ; 004ea13a
    RET                                 ; 004ea13d

