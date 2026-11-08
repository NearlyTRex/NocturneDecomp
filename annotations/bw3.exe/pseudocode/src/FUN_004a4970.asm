; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4970(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfbd0                       ; 004a4970
        ;   Label: FUN_004a4970
    PUSH 0x14                           ; 004a4975
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a4977
    PUSH EDX                            ; 004a497b
    CALL FUN_005a3de6                   ; 004a497c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004a4981
    RET                                 ; 004a4984

