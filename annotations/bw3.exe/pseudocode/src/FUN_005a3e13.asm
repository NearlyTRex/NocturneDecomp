; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a3e13(undefined4 param_1)
;
;
; XREF[31]:
;   FUN_004118e0 at 004118f9
;   FUN_0041ef40 at 0041ef7c
;   FUN_00441f30 at 00441f4a
;   FUN_004486c0 at 004486f0
;   FUN_00459610 at 00459629
;   FUN_00460430 at 0046044c
;   FUN_0047b4c0 at 0047b4d2
;   FUN_00496930 at 004969f0
;   FUN_004a76f0 at 004a7709
;   FUN_004b3cd0 at 004b3cec
;   ... and 21 more
;
; Called Functions:
;   FUN_005a9e4b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a3e13
        ;   Label: FUN_005a3e13
    PUSH EDX                            ; 005a3e17
    CALL FUN_005a9e4b                   ; 005a3e18
        ;   XREF to: 005a9e4b (UNCONDITIONAL_CALL)  ; undefined FUN_005a9e4b()
    ADD ESP,0x4                         ; 005a3e1d
    RET                                 ; 005a3e20

