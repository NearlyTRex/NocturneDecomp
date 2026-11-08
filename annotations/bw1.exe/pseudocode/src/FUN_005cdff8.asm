; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005cdff8(void)
;
;
; XREF[1]:
;   FUN_005cea10 at 005cea9c
;
; Referenced Globals:
;   undefined1* PTR_FUN_00626b74 = 005ceba8
;
; Called Functions:
;   FUN_005ceba8
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00626b74]         ; 005cdff8 | PTR_FUN_00626b74
        ;   Label: FUN_005cdff8
    RET                                 ; 005cdffe

