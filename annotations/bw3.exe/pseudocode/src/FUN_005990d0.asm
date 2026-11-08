; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005990d0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e7cc0
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

    PUSH EBX                            ; 005990d0
        ;   Label: FUN_005990d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005990d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005990d5
    JNZ 0x0059913d                      ; 005990da
        ;   XREF to: 0059913d (CONDITIONAL_JUMP)  ; LAB_0059913d
    PUSH 0x0                            ; 005990dc
    ADD EBX,0xd064                      ; 005990de
    PUSH EBX                            ; 005990e4
    CALL FUN_004fa8c0                   ; 005990e5
        ;   XREF to: 004fa8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa8c0()
    ADD ESP,0x8                         ; 005990ea
    PUSH 0x0                            ; 005990ed
    SUB EAX,0x9808                      ; 005990ef
    PUSH EAX                            ; 005990f4
    CALL FUN_00410370                   ; 005990f5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 005990fa
    PUSH 0x0                            ; 005990fd
    SUB EAX,0x954                       ; 005990ff
    PUSH EAX                            ; 00599104
    CALL FUN_0043f900                   ; 00599105
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0059910a
    PUSH 0x0                            ; 0059910d
    SUB EAX,0x2db0                      ; 0059910f
    PUSH EAX                            ; 00599114
    CALL FUN_0054bf80                   ; 00599115
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0059911a
    PUSH 0x1                            ; 0059911d
    LEA EBX,[EAX + 0xfffffea8]          ; 0059911f
    PUSH EBX                            ; 00599125
    CALL FUN_00408770                   ; 00599126
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0059912b
    MOV DL,byte ptr [ESP + 0xc]         ; 0059912e
    MOV EBX,EAX                         ; 00599132
    TEST DL,0x2                         ; 00599134
    JNZ 0x00599158                      ; 00599137
        ;   XREF to: 00599158 (CONDITIONAL_JUMP)  ; LAB_00599158
    MOV EAX,EBX                         ; 00599139
    POP EBX                             ; 0059913b
    RET                                 ; 0059913c
    PUSH 0x5e7cc0                       ; 0059913d | DAT_005e7cc0
        ;   Label: LAB_0059913d
    PUSH EBX                            ; 00599142
    CALL FUN_005a308f                   ; 00599143
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00599148
    PUSH EAX                            ; 0059914b
    CALL FUN_005a30b6                   ; 0059914c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00599151
    MOV EAX,EBX                         ; 00599154
    POP EBX                             ; 00599156
    RET                                 ; 00599157
    PUSH EAX                            ; 00599158
        ;   Label: LAB_00599158
    CALL FUN_005a30c4                   ; 00599159
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0059915e
    MOV EAX,EBX                         ; 00599161
    POP EBX                             ; 00599163
    RET                                 ; 00599164

