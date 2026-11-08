; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042b3b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0042f240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b3b0
        ;   Label: FUN_0042b3b0
    PUSH EDX                            ; 0042b3b4
    CALL FUN_0042f240                   ; 0042b3b5
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f240()
    ADD ESP,0x4                         ; 0042b3ba
    RET                                 ; 0042b3bd

