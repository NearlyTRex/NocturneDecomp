; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4950(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dfc70                       ; 004a4950
        ;   Label: FUN_004a4950
    PUSH 0x32                           ; 004a4955
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a4957
    PUSH EDX                            ; 004a495b
    CALL FUN_005a3de6                   ; 004a495c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004a4961
    RET                                 ; 004a4964

