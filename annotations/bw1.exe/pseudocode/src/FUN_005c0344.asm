; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c0344(int param_1)
;
;
; XREF[170]:
;   FUN_00408730 at 0040877d
;   FUN_0040e000 at 0040e042
;   FUN_0040e520 at 0040e562
;   FUN_0040e930 at 0040e972
;   FUN_0040ecc0 at 0040ed39
;   FUN_0040ed50 at 0040edc9
;   FUN_0040ede0 at 0040ee22
;   FUN_0040f130 at 0040f172
;   FUN_00410730 at 00410772
;   FUN_00410780 at 004107c2
;   ... and 160 more
;
; Called Functions:
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c0344
        ;   Label: FUN_005c0344
    TEST EDX,EDX                        ; 005c0348
    JNZ 0x005c034d                      ; 005c034a
        ;   XREF to: 005c034d (CONDITIONAL_JUMP)  ; LAB_005c034d
    RET                                 ; 005c034c
    PUSH EDX                            ; 005c034d
        ;   Label: LAB_005c034d
    CALL FUN_005c09f0                   ; 005c034e
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 005c0353
    RET                                 ; 005c0356

