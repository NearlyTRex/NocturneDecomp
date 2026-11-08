; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053b440(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[8]:
;   FUN_0046ecf0 at 0046ee9e
;   FUN_0048c2e0 at 00490add
;   FUN_00499eb0 at 00499f22
;   FUN_0049c730 at 0049c77c
;   FUN_004a3bd0 at 004a3c41
;   FUN_004a3c50 at 004a3cd7
;   FUN_005968a0 at 00596cd2
;   FUN_0059b960 at 0059c0cc
;
; Called Functions:
;   FUN_00450d70
;
; *****************************************************************************

section .text

    PUSH dword ptr [ESP + 0x14]         ; 0053b440
        ;   Label: FUN_0053b440
    PUSH dword ptr [ESP + 0x14]         ; 0053b444
    PUSH dword ptr [ESP + 0x14]         ; 0053b448
    PUSH dword ptr [ESP + 0x14]         ; 0053b44c
    PUSH 0x2038f4c                      ; 0053b450
    CALL FUN_00450d70                   ; 0053b455
        ;   XREF to: 00450d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00450d70()
    ADD ESP,0x14                        ; 0053b45a
    RET                                 ; 0053b45d

