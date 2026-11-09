; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005be1b8(undefined4 param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c0300 at 005c0306
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4 = 005bcdfc
;
; Called Functions:
;   crt_unknown.c_FUN_005bcdfc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x0061f2a4]         ; 005be1b8 | PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4
        ;   Label: crt_unknown.c_FUN_005be1b8
    MOV EDX,dword ptr [ESP + 0x4]       ; 005be1be
    MOV dword ptr [EAX + 0x8],EDX       ; 005be1c2
    RET                                 ; 005be1c5

