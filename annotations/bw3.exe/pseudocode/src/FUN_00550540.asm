; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00550540(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e47d0                       ; 00550540
        ;   Label: FUN_00550540
    PUSH 0x28                           ; 00550545
    MOV EDX,dword ptr [ESP + 0xc]       ; 00550547
    PUSH EDX                            ; 0055054b
    CALL FUN_005a3de6                   ; 0055054c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 00550551
    RET                                 ; 00550554

