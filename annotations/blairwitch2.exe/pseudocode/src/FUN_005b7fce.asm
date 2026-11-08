; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b7fce(undefined4 param_1)
;
;
; XREF[185]:
;   FUN_00408930 at 00408990
;   FUN_0040de50 at 0040de8f
;   FUN_0040e980 at 0040e9b5
;   FUN_0040ed90 at 0040edc5
;   FUN_0040f120 at 0040f19c
;   FUN_0040f1c0 at 0040f23c
;   FUN_0040f260 at 0040f295
;   FUN_0040f5b0 at 0040f5e5
;   FUN_00410bb0 at 00410be5
;   FUN_00410c00 at 00410c35
;   ... and 175 more
;
; Called Functions:
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b7fce
        ;   Label: FUN_005b7fce
    PUSH EDX                            ; 005b7fd2
    CALL FUN_005b7fdc                   ; 005b7fd3
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 005b7fd8
    RET                                 ; 005b7fdb

