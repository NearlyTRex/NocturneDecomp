; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004796b0(undefined4 param_1)
;
;
; XREF[26]:
;   FUN_00412160 at 00412168
;   FUN_004134a0 at 004134a8
;   FUN_004150b0 at 004150c7
;   FUN_00415430 at 00415438
;   FUN_00418800 at 004189a2
;   FUN_0041fc20 at 0041fdfe
;   FUN_004211e0 at 00421203
;   FUN_0043bc50 at 0043bc9e
;   FUN_004546d0 at 0045471d
;   FUN_00458730 at 004587c6
;   ... and 16 more
;
; Called Functions:
;   FUN_00424260
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004796b0
        ;   Label: FUN_004796b0
    PUSH EDX                            ; 004796b4
    CALL FUN_00424260                   ; 004796b5
        ;   XREF to: 00424260 (UNCONDITIONAL_CALL)  ; undefined FUN_00424260()
    ADD ESP,0x4                         ; 004796ba
    RET                                 ; 004796bd

