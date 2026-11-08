; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00572060(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc9e0
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00511d10
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005b1480
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572060
        ;   Label: FUN_00572060
    MOV EBX,dword ptr [ESP + 0x8]       ; 00572061
    TEST byte ptr [ESP + 0xc],0x4       ; 00572065
    JNZ 0x005720dd                      ; 0057206a
        ;   XREF to: 005720dd (CONDITIONAL_JUMP)  ; LAB_005720dd
    PUSH 0x0                            ; 0057206c
    ADD EBX,0x10a60                     ; 0057206e
    PUSH EBX                            ; 00572074
    CALL FUN_00511d10                   ; 00572075
        ;   XREF to: 00511d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00511d10()
    ADD ESP,0x8                         ; 0057207a
    PUSH 0x0                            ; 0057207d
    SUB EAX,0xd040                      ; 0057207f
    PUSH EAX                            ; 00572084
    CALL FUN_0040f2b0                   ; 00572085
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 0057208a
    PUSH 0x0                            ; 0057208d
    SUB EAX,0x9c8                       ; 0057208f
    PUSH EAX                            ; 00572094
    CALL FUN_0059df70                   ; 00572095
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 0057209a
    PUSH 0x0                            ; 0057209d
    SUB EAX,0x34c                       ; 0057209f
    PUSH EAX                            ; 005720a4
    CALL FUN_005b1480                   ; 005720a5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 005720aa
    PUSH 0x0                            ; 005720ad
    SUB EAX,0x2a58                      ; 005720af
    PUSH EAX                            ; 005720b4
    CALL FUN_00544d50                   ; 005720b5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 005720ba
    PUSH 0x1                            ; 005720bd
    LEA EBX,[EAX + 0xfffffd4c]          ; 005720bf
    PUSH EBX                            ; 005720c5
    CALL FUN_00408930                   ; 005720c6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 005720cb
    MOV DL,byte ptr [ESP + 0xc]         ; 005720ce
    MOV EBX,EAX                         ; 005720d2
    TEST DL,0x2                         ; 005720d4
    JNZ 0x005720f8                      ; 005720d7
        ;   XREF to: 005720f8 (CONDITIONAL_JUMP)  ; LAB_005720f8
    MOV EAX,EBX                         ; 005720d9
    POP EBX                             ; 005720db
    RET                                 ; 005720dc
    PUSH 0x5fc9e0                       ; 005720dd | DAT_005fc9e0
        ;   Label: LAB_005720dd
    PUSH EBX                            ; 005720e2
    CALL FUN_005b7fa7                   ; 005720e3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 005720e8
    PUSH EAX                            ; 005720eb
    CALL FUN_005b7fce                   ; 005720ec
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005720f1
    MOV EAX,EBX                         ; 005720f4
    POP EBX                             ; 005720f6
    RET                                 ; 005720f7
    PUSH EAX                            ; 005720f8
        ;   Label: LAB_005720f8
    CALL FUN_005b7fdc                   ; 005720f9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 005720fe
    MOV EAX,EBX                         ; 00572101
    POP EBX                             ; 00572103
    RET                                 ; 00572104

