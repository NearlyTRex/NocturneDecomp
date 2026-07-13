; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00461000(undefined4 param_1,undefined4 param_2)
;
;
; XREF[32]:
;   FUN_004110f0 at 0041121f
;   FUN_00414340 at 00414473
;   FUN_004270e0 at 004270f9
;   FUN_0042c4c0 at 0042c5bb
;   FUN_0044f430 at 0044f902
;   FUN_0044f9b0 at 0044fcca
;   FUN_00450520 at 00450815
;   FUN_00451b70 at 00451be4
;   FUN_0045a260 at 0045a3a2
;   FUN_004838c0 at 004839df
;   ... and 22 more
;
; Called Functions:
;   FUN_004083c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00461000
        ;   Label: FUN_00461000
    PUSH EDX                            ; 00461004
    CALL FUN_004083c0                   ; 00461005
        ;   XREF to: 004083c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004083c0()
    ADD ESP,0x4                         ; 0046100a
    RET                                 ; 0046100d

