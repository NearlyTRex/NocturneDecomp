; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d500(int param_1,undefined4 param_2)
;
;
; XREF[17]:
;   FUN_00414a60 at 00414b2e
;   FUN_0041dcd0 at 0041dd98
;   FUN_0043f460 at 0043f67c
;   FUN_004540c0 at 004540f7
;   FUN_00461050 at 0046114a
;   FUN_004fa490 at 004fa6b3
;   FUN_004fa6d0 at 004fa7d1
;   FUN_005346b0 at 005347c0
;   FUN_00535a80 at 00535c3e
;   FUN_005365c0 at 005367a8
;   ... and 7 more
;
; Referenced Globals:
;   undefined4 DAT_005fba40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046d500
        ;   Label: FUN_0046d500
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046d504
    MOV [0x005fba40],EAX                ; 0046d508 | DAT_005fba40
    MOV dword ptr [EDX + 0x10],EAX      ; 0046d50d
    RET                                 ; 0046d510

