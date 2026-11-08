; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049a480(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_00479320
;   FUN_00479340
;   FUN_00479360
;   FUN_004793e0
;   FUN_00479460
;   FUN_00479580
;   FUN_004795b0
;   FUN_00479720
;   FUN_004994d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a480
        ;   Label: FUN_0049a480
    SUB ESP,0x824                       ; 0049a481
    MOV EBX,dword ptr [ESP + 0x82c]     ; 0049a487
    LEA EAX,[ESP + 0x420]               ; 0049a48e
    PUSH EAX                            ; 0049a495
    LEA EAX,[ESP + 0x524]               ; 0049a496
    PUSH EAX                            ; 0049a49d
    LEA EAX,[ESP + 0x728]               ; 0049a49e
    PUSH EAX                            ; 0049a4a5
    LEA EAX,[ESP + 0x82c]               ; 0049a4a6
    PUSH EAX                            ; 0049a4ad
    MOV EDX,dword ptr [ESP + 0x840]     ; 0049a4ae
    PUSH EDX                            ; 0049a4b5
    CALL FUN_00479580                   ; 0049a4b6
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; undefined FUN_00479580()
    ADD ESP,0x14                        ; 0049a4bb
    LEA EAX,[ESP + 0x420]               ; 0049a4be
    PUSH EAX                            ; 0049a4c5
    LEA EAX,[ESP + 0x524]               ; 0049a4c6
    PUSH EAX                            ; 0049a4cd
    LEA EAX,[ESP + 0x728]               ; 0049a4ce
    PUSH EAX                            ; 0049a4d5
    PUSH 0x0                            ; 0049a4d6
    LEA EAX,[ESP + 0x630]               ; 0049a4d8
    PUSH EAX                            ; 0049a4df
    CALL FUN_004795b0                   ; 0049a4e0
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004795b0()
    ADD ESP,0x14                        ; 0049a4e5
    LEA EAX,[ESP + 0x420]               ; 0049a4e8
    PUSH EAX                            ; 0049a4ef
    LEA EAX,[ESP + 0x524]               ; 0049a4f0
    PUSH EAX                            ; 0049a4f7
    PUSH 0x0                            ; 0049a4f8
    PUSH 0x0                            ; 0049a4fa
    MOV ECX,dword ptr [ESP + 0x844]     ; 0049a4fc
    PUSH ECX                            ; 0049a503
    CALL FUN_00479580                   ; 0049a504
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; undefined FUN_00479580()
    ADD ESP,0x14                        ; 0049a509
    LEA EAX,[ESP + 0x420]               ; 0049a50c
    PUSH EAX                            ; 0049a513
    LEA EAX,[ESP + 0x524]               ; 0049a514
    PUSH EAX                            ; 0049a51b
    LEA EAX,[ESP + 0x628]               ; 0049a51c
    PUSH EAX                            ; 0049a523
    LEA EAX,[ESP + 0x82c]               ; 0049a524
    PUSH EAX                            ; 0049a52b
    LEA EAX,[ESP + 0x32c]               ; 0049a52c
    PUSH EAX                            ; 0049a533
    CALL FUN_004795b0                   ; 0049a534
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004795b0()
    ADD ESP,0x14                        ; 0049a539
    MOV EAX,ESP                         ; 0049a53c
    PUSH EAX                            ; 0049a53e
    CALL FUN_00479320                   ; 0049a53f
        ;   XREF to: 00479320 (UNCONDITIONAL_CALL)  ; undefined FUN_00479320()
    ADD ESP,0x4                         ; 0049a544
    LEA EAX,[ESP + 0x31c]               ; 0049a547
    PUSH EAX                            ; 0049a54e
    LEA EAX,[ESP + 0x4]                 ; 0049a54f
    PUSH EAX                            ; 0049a553
    CALL FUN_00479360                   ; 0049a554
        ;   XREF to: 00479360 (UNCONDITIONAL_CALL)  ; undefined FUN_00479360()
    ADD ESP,0x8                         ; 0049a559
    CMP byte ptr [ESP],0x0              ; 0049a55c
    JZ 0x0049a57d                       ; 0049a560
        ;   XREF to: 0049a57d (CONDITIONAL_JUMP)  ; LAB_0049a57d
    TEST byte ptr [ESP + 0x100],0x4     ; 0049a562
        ;   Label: LAB_0049a562
    JZ 0x0049a59f                       ; 0049a56a
        ;   XREF to: 0049a59f (CONDITIONAL_JUMP)  ; LAB_0049a59f
    MOV EAX,ESP                         ; 0049a56c
        ;   Label: LAB_0049a56c
    PUSH EAX                            ; 0049a56e
    CALL FUN_004793e0                   ; 0049a56f
        ;   XREF to: 004793e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004793e0()
    ADD ESP,0x4                         ; 0049a574
    CMP byte ptr [ESP],0x0              ; 0049a577
    JNZ 0x0049a562                      ; 0049a57b
        ;   XREF to: 0049a562 (CONDITIONAL_JUMP)  ; LAB_0049a562
    MOV EAX,ESP                         ; 0049a57d
        ;   Label: LAB_0049a57d
    PUSH EAX                            ; 0049a57f
    CALL FUN_00479460                   ; 0049a580
        ;   XREF to: 00479460 (UNCONDITIONAL_CALL)  ; undefined FUN_00479460()
    ADD ESP,0x4                         ; 0049a585
    PUSH 0x0                            ; 0049a588
    LEA EAX,[ESP + 0x4]                 ; 0049a58a
    PUSH EAX                            ; 0049a58e
    CALL FUN_00479340                   ; 0049a58f
        ;   XREF to: 00479340 (UNCONDITIONAL_CALL)  ; undefined FUN_00479340()
    ADD ESP,0x8                         ; 0049a594
    ADD ESP,0x824                       ; 0049a597
    POP EBX                             ; 0049a59d
    RET                                 ; 0049a59e
    LEA EAX,[ESP + 0x420]               ; 0049a59f
        ;   Label: LAB_0049a59f
    PUSH EAX                            ; 0049a5a6
    LEA EAX,[ESP + 0x524]               ; 0049a5a7
    PUSH EAX                            ; 0049a5ae
    PUSH 0x0                            ; 0049a5af
    PUSH 0x0                            ; 0049a5b1
    LEA EAX,[ESP + 0x10]                ; 0049a5b3
    PUSH EAX                            ; 0049a5b7
    CALL FUN_00479580                   ; 0049a5b8
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; undefined FUN_00479580()
    ADD ESP,0x14                        ; 0049a5bd
    LEA EAX,[ESP + 0x420]               ; 0049a5c0
    PUSH EAX                            ; 0049a5c7
    LEA EAX,[ESP + 0x524]               ; 0049a5c8
    PUSH EAX                            ; 0049a5cf
    LEA EAX,[ESP + 0x628]               ; 0049a5d0
    PUSH EAX                            ; 0049a5d7
    LEA EAX,[ESP + 0x82c]               ; 0049a5d8
    PUSH EAX                            ; 0049a5df
    LEA EAX,[ESP + 0x124]               ; 0049a5e0
    PUSH EAX                            ; 0049a5e7
    CALL FUN_004795b0                   ; 0049a5e8
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004795b0()
    ADD ESP,0x14                        ; 0049a5ed
    LEA EAX,[ESP + 0x114]               ; 0049a5f0
    PUSH EAX                            ; 0049a5f7
    LEA EAX,[ESP + 0x21c]               ; 0049a5f8
    PUSH EAX                            ; 0049a5ff
    CALL FUN_00479720                   ; 0049a600
        ;   XREF to: 00479720 (UNCONDITIONAL_CALL)  ; undefined FUN_00479720()
    ADD ESP,0x8                         ; 0049a605
    LEA EAX,[ESP + 0x218]               ; 0049a608
    PUSH EAX                            ; 0049a60f
    PUSH EBX                            ; 0049a610
    CALL FUN_004994d0                   ; 0049a611
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004994d0()
    ADD ESP,0x8                         ; 0049a616
    JMP 0x0049a56c                      ; 0049a619
        ;   XREF to: 0049a56c (UNCONDITIONAL_JUMP)  ; LAB_0049a56c

