; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a30c4(int param_1)
;
;
; XREF[178]:
;   FUN_00408770 at 004087bd
;   FUN_0040e420 at 0040e462
;   FUN_0040e470 at 0040e4b2
;   FUN_0040e4c0 at 0040e502
;   FUN_0040e510 at 0040e552
;   FUN_0040ea10 at 0040ea52
;   FUN_0040ec90 at 0040ecd2
;   FUN_0040f3d0 at 0040f429
;   FUN_0040f6d0 at 0040f712
;   FUN_0040f940 at 0040f982
;   ... and 168 more
;
; Called Functions:
;   FUN_005a3770
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a30c4
        ;   Label: FUN_005a30c4
    TEST EDX,EDX                        ; 005a30c8
    JNZ 0x005a30cd                      ; 005a30ca
        ;   XREF to: 005a30cd (CONDITIONAL_JUMP)  ; LAB_005a30cd
    RET                                 ; 005a30cc
    PUSH EDX                            ; 005a30cd
        ;   Label: LAB_005a30cd
    CALL FUN_005a3770                   ; 005a30ce
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 005a30d3
    RET                                 ; 005a30d6

