; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00547720(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e4710
;
; Called Functions:
;   FUN_00408770
;   FUN_0041adf0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547720
        ;   Label: FUN_00547720
    MOV EBX,dword ptr [ESP + 0x8]       ; 00547721
    TEST byte ptr [ESP + 0xc],0x4       ; 00547725
    JNZ 0x0054775d                      ; 0054772a
        ;   XREF to: 0054775d (CONDITIONAL_JUMP)  ; LAB_0054775d
    PUSH 0x0                            ; 0054772c
    ADD EBX,0x358                       ; 0054772e
    PUSH EBX                            ; 00547734
    CALL FUN_0041adf0                   ; 00547735
        ;   XREF to: 0041adf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041adf0()
    ADD ESP,0x8                         ; 0054773a
    PUSH 0x1                            ; 0054773d
    LEA EBX,[EAX + 0xfffffca8]          ; 0054773f
    PUSH EBX                            ; 00547745
    CALL FUN_00408770                   ; 00547746
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0054774b
    MOV DL,byte ptr [ESP + 0xc]         ; 0054774e
    MOV EBX,EAX                         ; 00547752
    TEST DL,0x2                         ; 00547754
    JNZ 0x00547778                      ; 00547757
        ;   XREF to: 00547778 (CONDITIONAL_JUMP)  ; LAB_00547778
    MOV EAX,EBX                         ; 00547759
    POP EBX                             ; 0054775b
    RET                                 ; 0054775c
    PUSH 0x5e4710                       ; 0054775d | DAT_005e4710
        ;   Label: LAB_0054775d
    PUSH EBX                            ; 00547762
    CALL FUN_005a308f                   ; 00547763
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00547768
    PUSH EAX                            ; 0054776b
    CALL FUN_005a30b6                   ; 0054776c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00547771
    MOV EAX,EBX                         ; 00547774
    POP EBX                             ; 00547776
    RET                                 ; 00547777
    PUSH EAX                            ; 00547778
        ;   Label: LAB_00547778
    CALL FUN_005a30c4                   ; 00547779
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0054777e
    MOV EAX,EBX                         ; 00547781
    POP EBX                             ; 00547783
    RET                                 ; 00547784

