; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00599030(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e7ca0
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_004fa8c0
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599030
        ;   Label: FUN_00599030
    MOV EBX,dword ptr [ESP + 0x8]       ; 00599031
    TEST byte ptr [ESP + 0xc],0x4       ; 00599035
    JNZ 0x0059909d                      ; 0059903a
        ;   XREF to: 0059909d (CONDITIONAL_JUMP)  ; LAB_0059909d
    PUSH 0x0                            ; 0059903c
    ADD EBX,0xd064                      ; 0059903e
    PUSH EBX                            ; 00599044
    CALL FUN_004fa8c0                   ; 00599045
        ;   XREF to: 004fa8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa8c0()
    ADD ESP,0x8                         ; 0059904a
    PUSH 0x0                            ; 0059904d
    SUB EAX,0x9808                      ; 0059904f
    PUSH EAX                            ; 00599054
    CALL FUN_00410370                   ; 00599055
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0059905a
    PUSH 0x0                            ; 0059905d
    SUB EAX,0x954                       ; 0059905f
    PUSH EAX                            ; 00599064
    CALL FUN_0043f900                   ; 00599065
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0059906a
    PUSH 0x0                            ; 0059906d
    SUB EAX,0x2db0                      ; 0059906f
    PUSH EAX                            ; 00599074
    CALL FUN_0054bf80                   ; 00599075
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0059907a
    PUSH 0x1                            ; 0059907d
    LEA EBX,[EAX + 0xfffffea8]          ; 0059907f
    PUSH EBX                            ; 00599085
    CALL FUN_00408770                   ; 00599086
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0059908b
    MOV DL,byte ptr [ESP + 0xc]         ; 0059908e
    MOV EBX,EAX                         ; 00599092
    TEST DL,0x2                         ; 00599094
    JNZ 0x005990b8                      ; 00599097
        ;   XREF to: 005990b8 (CONDITIONAL_JUMP)  ; LAB_005990b8
    MOV EAX,EBX                         ; 00599099
    POP EBX                             ; 0059909b
    RET                                 ; 0059909c
    PUSH 0x5e7ca0                       ; 0059909d | DAT_005e7ca0
        ;   Label: LAB_0059909d
    PUSH EBX                            ; 005990a2
    CALL FUN_005a308f                   ; 005990a3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 005990a8
    PUSH EAX                            ; 005990ab
    CALL FUN_005a30b6                   ; 005990ac
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 005990b1
    MOV EAX,EBX                         ; 005990b4
    POP EBX                             ; 005990b6
    RET                                 ; 005990b7
    PUSH EAX                            ; 005990b8
        ;   Label: LAB_005990b8
    CALL FUN_005a30c4                   ; 005990b9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 005990be
    MOV EAX,EBX                         ; 005990c1
    POP EBX                             ; 005990c3
    RET                                 ; 005990c4

