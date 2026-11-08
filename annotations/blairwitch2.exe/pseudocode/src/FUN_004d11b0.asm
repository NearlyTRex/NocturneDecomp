; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d11b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005109e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d11b0
        ;   Label: FUN_004d11b0
    PUSH EDX                            ; 004d11b4
    CALL FUN_005109e0                   ; 004d11b5
        ;   XREF to: 005109e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005109e0()
    ADD ESP,0x4                         ; 004d11ba
    RET                                 ; 004d11bd

