; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a14b0(undefined4 *param_1)
;
;
; XREF[10]:
;   FUN_005a17d0 at 005a17d5
;   FUN_005a17f0 at 005a17f7
;   FUN_005a1830 at 005a1835
;   FUN_005a1860 at 005a187e
;   FUN_005a1a90 at 005a1a95
;   FUN_005a1ad0 at 005a1ad7
;   FUN_005a1b30 at 005a1b35
;   FUN_005a1b60 at 005a1b7e
;   FUN_005a1e10 at 005a1e15
;   FUN_005a1e30 at 005a1e45
;
; Referenced Globals:
;   undefined1* PTR_FUN_00607404 = 005a14b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a14b0
        ;   Label: FUN_005a14b0
    MOV dword ptr [EAX],0x607404        ; 005a14b4 | PTR_FUN_00607404
    RET                                 ; 005a14ba

