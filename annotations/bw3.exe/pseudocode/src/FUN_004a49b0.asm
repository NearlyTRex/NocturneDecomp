; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a49b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfb50                       ; 004a49b0
        ;   Label: FUN_004a49b0
    PUSH 0x40                           ; 004a49b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a49b7
    PUSH EDX                            ; 004a49bb
    CALL FUN_005a3de6                   ; 004a49bc
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004a49c1
    RET                                 ; 004a49c4

