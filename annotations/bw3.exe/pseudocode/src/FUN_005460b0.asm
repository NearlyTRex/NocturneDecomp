; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005460b0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e42d0
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

    PUSH EBX                            ; 005460b0
        ;   Label: FUN_005460b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005460b1
    TEST byte ptr [ESP + 0xc],0x4       ; 005460b5
    JNZ 0x0054610d                      ; 005460ba
        ;   XREF to: 0054610d (CONDITIONAL_JUMP)  ; LAB_0054610d
    PUSH 0x0                            ; 005460bc
    ADD EBX,0x385c                      ; 005460be
    PUSH EBX                            ; 005460c4
    CALL FUN_00410370                   ; 005460c5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 005460ca
    PUSH 0x0                            ; 005460cd
    SUB EAX,0x954                       ; 005460cf
    PUSH EAX                            ; 005460d4
    CALL FUN_0043f900                   ; 005460d5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 005460da
    PUSH 0x0                            ; 005460dd
    SUB EAX,0x2db0                      ; 005460df
    PUSH EAX                            ; 005460e4
    CALL FUN_0054bf80                   ; 005460e5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 005460ea
    PUSH 0x1                            ; 005460ed
    LEA EBX,[EAX + 0xfffffea8]          ; 005460ef
    PUSH EBX                            ; 005460f5
    CALL FUN_00408770                   ; 005460f6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 005460fb
    MOV DL,byte ptr [ESP + 0xc]         ; 005460fe
    MOV EBX,EAX                         ; 00546102
    TEST DL,0x2                         ; 00546104
    JNZ 0x00546128                      ; 00546107
        ;   XREF to: 00546128 (CONDITIONAL_JUMP)  ; LAB_00546128
    MOV EAX,EBX                         ; 00546109
    POP EBX                             ; 0054610b
    RET                                 ; 0054610c
    PUSH 0x5e42d0                       ; 0054610d | DAT_005e42d0
        ;   Label: LAB_0054610d
    PUSH EBX                            ; 00546112
    CALL FUN_005a308f                   ; 00546113
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00546118
    PUSH EAX                            ; 0054611b
    CALL FUN_005a30b6                   ; 0054611c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00546121
    MOV EAX,EBX                         ; 00546124
    POP EBX                             ; 00546126
    RET                                 ; 00546127
    PUSH EAX                            ; 00546128
        ;   Label: LAB_00546128
    CALL FUN_005a30c4                   ; 00546129
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0054612e
    MOV EAX,EBX                         ; 00546131
    POP EBX                             ; 00546133
    RET                                 ; 00546134

