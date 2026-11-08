; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00543540(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00544460 at 005485f3
;
; Referenced Globals:
;   undefined4 DAT_005ee0da
;   TerminatedCString s_backup_005ee0df
;   undefined4 DAT_005ee0e6
;   undefined4 DAT_005ee0ea
;   TerminatedCString s_useItem_005ee0ef
;   TerminatedCString s_light_005ee0f7
;   undefined4 DAT_005ee0fd
;   undefined4 DAT_005ee102
;
; Called Functions:
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543540
        ;   Label: FUN_00543540
    PUSH ESI                            ; 00543541
    MOV EBX,dword ptr [ESP + 0xc]       ; 00543542
    MOV ESI,dword ptr [ESP + 0x10]      ; 00543546
    PUSH 0x5ee0da                       ; 0054354a | DAT_005ee0da
    PUSH ESI                            ; 0054354f
    CALL FUN_005c04e0                   ; 00543550
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00543555
    TEST EAX,EAX                        ; 00543558
    JNZ 0x00543561                      ; 0054355a
        ;   XREF to: 00543561 (CONDITIONAL_JUMP)  ; LAB_00543561
    MOV EAX,EBX                         ; 0054355c
    POP ESI                             ; 0054355e
    POP EBX                             ; 0054355f
    RET                                 ; 00543560
    PUSH 0x5ee0df                       ; 00543561 | = "backup"
        ;   Label: LAB_00543561
    PUSH ESI                            ; 00543566
    CALL FUN_005c04e0                   ; 00543567
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0054356c
    TEST EAX,EAX                        ; 0054356f
    JNZ 0x00543579                      ; 00543571
        ;   XREF to: 00543579 (CONDITIONAL_JUMP)  ; LAB_00543579
    LEA EAX,[EBX + 0x4]                 ; 00543573
    POP ESI                             ; 00543576
    POP EBX                             ; 00543577
    RET                                 ; 00543578
    PUSH 0x5ee0e6                       ; 00543579 | DAT_005ee0e6
        ;   Label: LAB_00543579
    PUSH ESI                            ; 0054357e
    CALL FUN_005c04e0                   ; 0054357f
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00543584
    TEST EAX,EAX                        ; 00543587
    JNZ 0x00543591                      ; 00543589
        ;   XREF to: 00543591 (CONDITIONAL_JUMP)  ; LAB_00543591
    LEA EAX,[EBX + 0x8]                 ; 0054358b
    POP ESI                             ; 0054358e
    POP EBX                             ; 0054358f
    RET                                 ; 00543590
    PUSH 0x5ee0ea                       ; 00543591 | DAT_005ee0ea
        ;   Label: LAB_00543591
    PUSH ESI                            ; 00543596
    CALL FUN_005c04e0                   ; 00543597
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0054359c
    TEST EAX,EAX                        ; 0054359f
    JNZ 0x005435a9                      ; 005435a1
        ;   XREF to: 005435a9 (CONDITIONAL_JUMP)  ; LAB_005435a9
    LEA EAX,[EBX + 0xc]                 ; 005435a3
    POP ESI                             ; 005435a6
    POP EBX                             ; 005435a7
    RET                                 ; 005435a8
    PUSH 0x5ee0ef                       ; 005435a9 | = "useItem"
        ;   Label: LAB_005435a9
    PUSH ESI                            ; 005435ae
    CALL FUN_005c04e0                   ; 005435af
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 005435b4
    TEST EAX,EAX                        ; 005435b7
    JNZ 0x005435c1                      ; 005435b9
        ;   XREF to: 005435c1 (CONDITIONAL_JUMP)  ; LAB_005435c1
    LEA EAX,[EBX + 0x10]                ; 005435bb
    POP ESI                             ; 005435be
    POP EBX                             ; 005435bf
    RET                                 ; 005435c0
    PUSH 0x5ee0f7                       ; 005435c1 | = "light"
        ;   Label: LAB_005435c1
    PUSH ESI                            ; 005435c6
    CALL FUN_005c04e0                   ; 005435c7
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 005435cc
    TEST EAX,EAX                        ; 005435cf
    JNZ 0x005435d9                      ; 005435d1
        ;   XREF to: 005435d9 (CONDITIONAL_JUMP)  ; LAB_005435d9
    LEA EAX,[EBX + 0x14]                ; 005435d3
    POP ESI                             ; 005435d6
    POP EBX                             ; 005435d7
    RET                                 ; 005435d8
    PUSH 0x5ee0fd                       ; 005435d9 | DAT_005ee0fd
        ;   Label: LAB_005435d9
    PUSH ESI                            ; 005435de
    CALL FUN_005c04e0                   ; 005435df
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 005435e4
    TEST EAX,EAX                        ; 005435e7
    JNZ 0x005435f1                      ; 005435e9
        ;   XREF to: 005435f1 (CONDITIONAL_JUMP)  ; LAB_005435f1
    LEA EAX,[EBX + 0x18]                ; 005435eb
    POP ESI                             ; 005435ee
    POP EBX                             ; 005435ef
    RET                                 ; 005435f0
    PUSH 0x5ee102                       ; 005435f1 | DAT_005ee102
        ;   Label: LAB_005435f1
    PUSH ESI                            ; 005435f6
    CALL FUN_005c04e0                   ; 005435f7
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 005435fc
    TEST EAX,EAX                        ; 005435ff
    JNZ 0x00543609                      ; 00543601
        ;   XREF to: 00543609 (CONDITIONAL_JUMP)  ; LAB_00543609
    LEA EAX,[EBX + 0x1c]                ; 00543603
    POP ESI                             ; 00543606
    POP EBX                             ; 00543607
    RET                                 ; 00543608
    XOR EAX,EAX                         ; 00543609
        ;   Label: LAB_00543609
    POP ESI                             ; 0054360b
    POP EBX                             ; 0054360c
    RET                                 ; 0054360d

