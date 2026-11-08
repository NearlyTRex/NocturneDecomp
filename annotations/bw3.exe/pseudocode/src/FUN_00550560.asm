; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00550560(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e47b0                       ; 00550560
        ;   Label: FUN_00550560
    PUSH 0x40                           ; 00550565
    MOV EDX,dword ptr [ESP + 0xc]       ; 00550567
    PUSH EDX                            ; 0055056b
    CALL FUN_005a3de6                   ; 0055056c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 00550571
    RET                                 ; 00550574

