; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bb4c0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004b49a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004bb4c0
        ;   Label: FUN_004bb4c0
    PUSH EDX                            ; 004bb4c4
    CALL FUN_004b49a0                   ; 004bb4c5
        ;   XREF to: 004b49a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b49a0()
    ADD ESP,0x4                         ; 004bb4ca
    RET                                 ; 004bb4cd

