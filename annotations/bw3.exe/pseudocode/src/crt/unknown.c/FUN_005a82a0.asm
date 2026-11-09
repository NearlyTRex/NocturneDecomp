; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a82a0(undefined4 *param_1)
;
;
; XREF[8]:
;   crt_unknown.c_FUN_005a82c0 at 005a8322
;   crt_unknown.c_FUN_005a8688 at 005a8691
;   crt_unknown.c_FUN_005a86c4 at 005a8728
;   crt_unknown.c_FUN_005a87bc at 005a8822
;   crt_unknown.c_FUN_005a89d4 at 005a8a5d
;   crt_unknown.c_FUN_005a8ae8 at 005a8b00
;   crt_unknown.c_FUN_005a8dec at 005a8e10
;   crt_unknown.c_FUN_005a9288 at 005a929b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a82a0
        ;   Label: crt_unknown.c_FUN_005a82a0
    PUSH EAX                            ; 005a82a4
    CALL dword ptr [EAX]                ; 005a82a5
    ADD ESP,0x4                         ; 005a82a7
    RET                                 ; 005a82aa

