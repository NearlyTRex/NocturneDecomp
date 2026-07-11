; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00461000(undefined4 param_1,undefined4 param_2)
;
;
; XREF[19]:
;   FUN_004270e0 at 004270f9
;   FUN_0044f430 at 0044f902
;   FUN_0044f9b0 at 0044fcca
;   FUN_00450520 at 00450815
;   FUN_00451b70 at 00451be4
;   FUN_00484f00 at 00484f97
;   FUN_00485a90 at 00485d6c
;   FUN_00486fe0 at 00487315
;   FUN_00488580 at 00488a86
;   FUN_00488bf0 at 00488d2e
;   ... and 9 more
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

