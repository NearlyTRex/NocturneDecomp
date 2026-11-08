; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00547110(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e45f0
;
; Called Functions:
;   FUN_0057aed0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547110
        ;   Label: FUN_00547110
    MOV EBX,dword ptr [ESP + 0x8]       ; 00547111
    TEST byte ptr [ESP + 0xc],0x4       ; 00547115
    JNZ 0x00547136                      ; 0054711a
        ;   XREF to: 00547136 (CONDITIONAL_JUMP)  ; LAB_00547136
    PUSH 0x1                            ; 0054711c
    PUSH EBX                            ; 0054711e
    CALL FUN_0057aed0                   ; 0054711f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057aed0()
    ADD ESP,0x8                         ; 00547124
    MOV DL,byte ptr [ESP + 0xc]         ; 00547127
    MOV EBX,EAX                         ; 0054712b
    TEST DL,0x2                         ; 0054712d
    JNZ 0x00547151                      ; 00547130
        ;   XREF to: 00547151 (CONDITIONAL_JUMP)  ; LAB_00547151
    MOV EAX,EBX                         ; 00547132
    POP EBX                             ; 00547134
    RET                                 ; 00547135
    PUSH 0x5e45f0                       ; 00547136 | DAT_005e45f0
        ;   Label: LAB_00547136
    PUSH EBX                            ; 0054713b
    CALL FUN_005a308f                   ; 0054713c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00547141
    PUSH EAX                            ; 00547144
    CALL FUN_005a30b6                   ; 00547145
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0054714a
    MOV EAX,EBX                         ; 0054714d
    POP EBX                             ; 0054714f
    RET                                 ; 00547150
    PUSH EAX                            ; 00547151
        ;   Label: LAB_00547151
    CALL FUN_005a30c4                   ; 00547152
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00547157
    MOV EAX,EBX                         ; 0054715a
    POP EBX                             ; 0054715c
    RET                                 ; 0054715d

