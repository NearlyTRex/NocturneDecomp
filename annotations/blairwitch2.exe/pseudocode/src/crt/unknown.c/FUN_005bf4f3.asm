; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bf4f3(void)
;
;
; XREF[2]:
;   crt_math.c_pow_FUN_005b9484 at 005b9567
;   crt_unknown.c_FUN_005c3c70 at 005c3d06
;
; Referenced Globals:
;   undefined1* PTR_crt_unknown.c_FUN_005bf4fd_006216dc = 005bf4fd
;
; *****************************************************************************

section .text

    SUB ESP,0x2c                        ; 005bf4f3
        ;   Label: crt_unknown.c_FUN_005bf4f3
    JMP dword ptr [EAX*0x4 + 0x6216dc]  ; 005bf4f6 | PTR_crt_unknown.c_FUN_005bf4fd_006216dc

