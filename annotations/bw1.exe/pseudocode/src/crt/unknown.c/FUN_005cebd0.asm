; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cebd0(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005cd4be at 005ce0c4
;   crt_unknown.c_ldexp_FUN_005cd881 at 005ce0d6
;
; Referenced Globals:
;   undefined4 DAT_006265f3
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005cebd0
        ;   Label: crt_unknown.c_FUN_005cebd0
    CALL dword ptr [0x006265f3]         ; 005cebd1 | DAT_006265f3
    ADD ESP,0x4                         ; 005cebd7
    RET                                 ; 005cebda

