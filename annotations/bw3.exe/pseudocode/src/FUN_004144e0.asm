; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004144e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbf20                       ; 004144e0
        ;   Label: FUN_004144e0
    PUSH 0x5                            ; 004144e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004144e7
    PUSH EDX                            ; 004144eb
    CALL FUN_005a3de6                   ; 004144ec
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004144f1
    RET                                 ; 004144f4

