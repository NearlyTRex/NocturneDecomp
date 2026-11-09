; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a82ac(undefined4 param_1,int param_2)
;
;
; XREF[6]:
;   crt_unknown.c_FUN_005a82c0 at 005a833e
;   crt_unknown.c_FUN_005a8688 at 005a86b7
;   crt_unknown.c_FUN_005a87bc at 005a88f0
;   crt_unknown.c_FUN_005a89d4 at 005a8aad
;   crt_unknown.c_FUN_005a8ae8 at 005a8d15
;   crt_unknown.c_FUN_005a8dec at 005a9100
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005a82ac
        ;   Label: crt_unknown.c_FUN_005a82ac
    PUSH EAX                            ; 005a82b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a82b1
    PUSH EDX                            ; 005a82b5
    CALL dword ptr [EAX + 0x4]          ; 005a82b6
    ADD ESP,0x8                         ; 005a82b9
    RET                                 ; 005a82bc

