; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cdff8(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cea10 at 005cea9c
;
; Referenced Globals:
;   void* g_PTR_00626b74 = 005ceba8
;
; Called Functions:
;   crt_unknown.c_FUN_005ceba8
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00626b74]         ; 005cdff8 | g_PTR_00626b74
        ;   Label: crt_unknown.c_FUN_005cdff8
    RET                                 ; 005cdffe

