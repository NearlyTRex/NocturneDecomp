; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00547890(undefined4 param_1)
;
;
; XREF[89]:
;   FUN_0040f780 at 0040f796
;   FUN_004116f0 at 00411710
;   FUN_00412be0 at 00412c00
;   FUN_00412f40 at 00413268
;   FUN_004184c0 at 004184d7
;   FUN_0041d9c0 at 0041d9da
;   FUN_00422930 at 004229ce
;   FUN_00425fb0 at 00425fc6
;   FUN_004264d0 at 0042651e
;   FUN_00426990 at 004269a4
;   ... and 79 more
;
; Called Functions:
;   FUN_005415d0
;   FUN_00547810
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00547890
        ;   Label: FUN_00547890
    PUSH EDX                            ; 00547894
    CALL FUN_00547810                   ; 00547895
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    ADD ESP,0x4                         ; 0054789a
    PUSH EAX                            ; 0054789d
    CALL FUN_005415d0                   ; 0054789e
        ;   XREF to: 005415d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005415d0()
    ADD ESP,0x4                         ; 005478a3
    RET                                 ; 005478a6

