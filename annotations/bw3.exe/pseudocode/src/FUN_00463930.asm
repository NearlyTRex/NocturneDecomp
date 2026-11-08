; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00463930(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005deb50
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463930
        ;   Label: FUN_00463930
    MOV EBX,dword ptr [ESP + 0x8]       ; 00463931
    TEST byte ptr [ESP + 0xc],0x4       ; 00463935
    JNZ 0x0046398d                      ; 0046393a
        ;   XREF to: 0046398d (CONDITIONAL_JUMP)  ; LAB_0046398d
    PUSH 0x0                            ; 0046393c
    ADD EBX,0x385c                      ; 0046393e
    PUSH EBX                            ; 00463944
    CALL FUN_00410370                   ; 00463945
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0046394a
    PUSH 0x0                            ; 0046394d
    SUB EAX,0x954                       ; 0046394f
    PUSH EAX                            ; 00463954
    CALL FUN_0043f900                   ; 00463955
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0046395a
    PUSH 0x0                            ; 0046395d
    SUB EAX,0x2db0                      ; 0046395f
    PUSH EAX                            ; 00463964
    CALL FUN_0054bf80                   ; 00463965
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0046396a
    PUSH 0x1                            ; 0046396d
    LEA EBX,[EAX + 0xfffffea8]          ; 0046396f
    PUSH EBX                            ; 00463975
    CALL FUN_00408770                   ; 00463976
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0046397b
    MOV DL,byte ptr [ESP + 0xc]         ; 0046397e
    MOV EBX,EAX                         ; 00463982
    TEST DL,0x2                         ; 00463984
    JNZ 0x004639a8                      ; 00463987
        ;   XREF to: 004639a8 (CONDITIONAL_JUMP)  ; LAB_004639a8
    MOV EAX,EBX                         ; 00463989
    POP EBX                             ; 0046398b
    RET                                 ; 0046398c
    PUSH 0x5deb50                       ; 0046398d | DAT_005deb50
        ;   Label: LAB_0046398d
    PUSH EBX                            ; 00463992
    CALL FUN_005a308f                   ; 00463993
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00463998
    PUSH EAX                            ; 0046399b
    CALL FUN_005a30b6                   ; 0046399c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004639a1
    MOV EAX,EBX                         ; 004639a4
    POP EBX                             ; 004639a6
    RET                                 ; 004639a7
    PUSH EAX                            ; 004639a8
        ;   Label: LAB_004639a8
    CALL FUN_005a30c4                   ; 004639a9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004639ae
    MOV EAX,EBX                         ; 004639b1
    POP EBX                             ; 004639b3
    RET                                 ; 004639b4

