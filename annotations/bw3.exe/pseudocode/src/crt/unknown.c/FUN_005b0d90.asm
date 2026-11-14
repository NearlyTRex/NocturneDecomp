; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005b0d90(undefined4 param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005afbf0 at 005afc14
;
; Referenced Globals:
;   undefined1* PTR_crt_unknown.c_FUN_005b0d60_00607f1c = 005b0d60
;
; Called Functions:
;   crt_unknown.c_FUN_005b0d60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b0d90
        ;   Label: crt_unknown.c_FUN_005b0d90
    PUSH EDX                            ; 005b0d94
    CALL dword ptr [0x00607f1c]         ; 005b0d95 | PTR_crt_unknown.c_FUN_005b0d60_00607f1c
    ADD ESP,0x4                         ; 005b0d9b
    RET                                 ; 005b0d9e

