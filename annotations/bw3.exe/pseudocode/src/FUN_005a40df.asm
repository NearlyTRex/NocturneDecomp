; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a40df(undefined4 param_1)
;
;
; XREF[17]:
;   FUN_00436400 at 0043643b
;   FUN_0043c2a0 at 0043c2b8
;   FUN_00444910 at 0044492f
;   FUN_00453d90 at 00453da7
;   FUN_00460890 at 00460d46
;   FUN_00461300 at 00461399
;   FUN_00461fe0 at 00462078
;   FUN_004735c0 at 004735ed
;   FUN_0047d230 at 0047d2be
;   FUN_00482740 at 00482782
;   ... and 7 more
;
; Called Functions:
;   FUN_005a3cb2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a40df
        ;   Label: FUN_005a40df
    PUSH EDX                            ; 005a40e3
    CALL FUN_005a3cb2                   ; 005a40e4
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3cb2()
    ADD ESP,0x4                         ; 005a40e9
    RET                                 ; 005a40ec

