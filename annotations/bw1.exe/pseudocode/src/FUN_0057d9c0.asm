; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057d9c0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[17]:
;   FUN_00422000 at 00422203
;   FUN_00448570 at 00448987
;   FUN_00448df0 at 00448e3e
;   FUN_00460230 at 004606e3
;   FUN_004609c0 at 00460c6c
;   FUN_004768a0 at 00476c5a
;   FUN_00477060 at 004770a3
;   FUN_004b7b90 at 004b7d2c
;   FUN_004b9710 at 004b976c
;   FUN_004de330 at 004de6ec
;   ... and 7 more
;
; Called Functions:
;   FUN_005735a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0057d9c0
        ;   Label: FUN_0057d9c0
    PUSH EDX                            ; 0057d9c4
    CALL FUN_005735a0                   ; 0057d9c5
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 0057d9ca
    RET                                 ; 0057d9cd

