; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ce000(undefined4 param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cce60 at 005cce84
;
; Referenced Globals:
;   undefined1* PTR_crt_unknown.c_FUN_005cdfd0_00626b78 = 005cdfd0
;
; Called Functions:
;   crt_unknown.c_FUN_005cdfd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ce000
        ;   Label: crt_unknown.c_FUN_005ce000
    PUSH EDX                            ; 005ce004
    CALL dword ptr [0x00626b78]         ; 005ce005 | PTR_crt_unknown.c_FUN_005cdfd0_00626b78
    ADD ESP,0x4                         ; 005ce00b
    RET                                 ; 005ce00e

