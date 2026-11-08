; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050b470(void)
;
; Local Variables:
; undefined8       Stack[-0x11c]:8  local_11c
; undefined        Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0050c990 at 0050cc03
;
; Referenced Globals:
;   void* switchdataD_0050b434 = 0050b528
;   void* switchdataD_0050b444 = 0050b7a2
;   TerminatedCString s_Control_Keyboard_005e7e89
;   TerminatedCString s_Control_Keyboard_Mouse_005e7e9c
;   TerminatedCString s_Control_Gamepad_005e7eb5
;   TerminatedCString s_Control_Point_Click_005e7ec7
;   TerminatedCString s_Customize_Keys_005e7edf
;   TerminatedCString s_Always_run_ON_005e7eee
;   TerminatedCString s_Always_run_OFF_005e7efe
;   TerminatedCString s_Aiming_Auto_005e7f0f
;   TerminatedCString s_Aiming_Kindof_auto_005e7f1d
;   TerminatedCString s_Aiming_Manual_005e7f32
;   TerminatedCString s_Auto_use_health_On_005e7f42
;   TerminatedCString s_Auto_use_health_Off_005e7f57
;   TerminatedCString s_X_axis_sensitivity_005e7f6d
;   ... and 28 more
;
; Called Functions:
;   FUN_004cbf10
;   FUN_004cbf20
;   FUN_00509e20
;   FUN_0050a2b0
;   FUN_0050a5e0
;   FUN_0050d640
;   FUN_00521e40
;   FUN_00531090
;   FUN_00555770
;   FUN_005acff0
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b470
        ;   Label: FUN_0050b470
    PUSH ESI                            ; 0050b471
    PUSH EDI                            ; 0050b472
    PUSH EBP                            ; 0050b473
    SUB ESP,0x104                       ; 0050b474
    MOV ECX,dword ptr [0x0061d95c]      ; 0050b47a | DAT_0061d95c
    XOR EDX,EDX                         ; 0050b480
    PUSH ECX                            ; 0050b482 | DAT_01ccf390
    MOV EBX,0x1d1f6e0                   ; 0050b483
    MOV dword ptr [ESP + 0x104],EDX     ; 0050b488
    CALL FUN_004cbf10                   ; 0050b48f
        ;   XREF to: 004cbf10 (UNCONDITIONAL_CALL)  ; undefined FUN_004cbf10()
    ADD ESP,0x4                         ; 0050b494
    XOR EAX,EAX                         ; 0050b497
    MOV dword ptr [EAX + 0x1d1ffe0],EBX ; 0050b499
        ;   Label: LAB_0050b499
    ADD EAX,0x4                         ; 0050b49f
    ADD EBX,0x100                       ; 0050b4a2
    CMP EAX,0x24                        ; 0050b4a8
    JNZ 0x0050b499                      ; 0050b4ab
        ;   XREF to: 0050b499 (CONDITIONAL_JUMP)  ; LAB_0050b499
    MOV EBX,dword ptr [0x0061d95c]      ; 0050b4ad | DAT_0061d95c
        ;   Label: LAB_0050b4ad
    PUSH EBX                            ; 0050b4b3 | DAT_01ccf390
    CALL FUN_004cbf20                   ; 0050b4b4
        ;   XREF to: 004cbf20 (UNCONDITIONAL_CALL)  ; undefined FUN_004cbf20()
    ADD ESP,0x4                         ; 0050b4b9
    PUSH 0x10000                        ; 0050b4bc
    PUSH 0xc350                         ; 0050b4c1
    PUSH 0xc350                         ; 0050b4c6
    MOV EAX,[0x00622c18]                ; 0050b4cb | DAT_00622c18
    PUSH EAX                            ; 0050b4d0 | DAT_01e82168
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 0050b4d1 | DAT_01fdcfec
    CALL FUN_00555770                   ; 0050b4db
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; undefined FUN_00555770()
    ADD ESP,0x10                        ; 0050b4e0
    MOV EAX,[0x00622c18]                ; 0050b4e3 | DAT_00622c18
    PUSH 0x1d1e380                      ; 0050b4e8
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 0050b4ed | DAT_01fdcffc
    CALL FUN_00521e40                   ; 0050b4f7
        ;   XREF to: 00521e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00521e40()
    MOV EAX,[0x00622c18]                ; 0050b4fc | DAT_00622c18
    MOV ESI,dword ptr [0x0061d95c]      ; 0050b501 | DAT_0061d95c
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 0050b507 | DAT_01fdcfec
    XOR EBX,EBX                         ; 0050b511
    MOV EAX,dword ptr [ESI + 0xd0]      ; 0050b513 | DAT_01ccf460
    ADD ESP,0x4                         ; 0050b519
    CMP EAX,0x3                         ; 0050b51c
    JA 0x0050b549                       ; 0050b51f
        ;   XREF to: 0050b549 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x50b434]  ; 0050b521 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x5e7e89                       ; 0050b528 | = "Control : Keyboard"
        ;   Label: caseD_0
    MOV dword ptr [ESI + 0xd0],EBX      ; 0050b52d | DAT_01ccf460
    CALL FUN_00531090                   ; 0050b533
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
        ;   Label: LAB_0050b533
    ADD ESP,0x4                         ; 0050b538
    PUSH EAX                            ; 0050b53b
    PUSH 0x1d1f6e0                      ; 0050b53c
    CALL FUN_005bfb40                   ; 0050b541
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 0050b546
    PUSH 0x5e7edf                       ; 0050b549 | = "Customize Keys"
        ;   Label: default
    CALL FUN_00531090                   ; 0050b54e
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050b553
    INC EBX                             ; 0050b556
    PUSH EAX                            ; 0050b557
    MOV EAX,EBX                         ; 0050b558
    SHL EAX,0x8                         ; 0050b55a
    ADD EAX,0x1d1f6e0                   ; 0050b55d
    INC EBX                             ; 0050b562
    PUSH EAX                            ; 0050b563
    MOV ESI,EBX                         ; 0050b564
    CALL FUN_005bfb40                   ; 0050b566
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    SHL ESI,0x8                         ; 0050b56b
    MOV EAX,[0x0061d95c]                ; 0050b56e | DAT_0061d95c
    INC EBX                             ; 0050b573
    ADD ESP,0x8                         ; 0050b574
    MOV EDI,dword ptr [EAX + 0xac]      ; 0050b577 | DAT_01ccf43c
    ADD ESI,0x1d1f6e0                   ; 0050b57d
    TEST EDI,EDI                        ; 0050b583
    JZ 0x0050b852                       ; 0050b585
        ;   XREF to: 0050b852 (CONDITIONAL_JUMP)  ; LAB_0050b852
    PUSH 0x5e7eee                       ; 0050b58b | = "Always run : ON"
    CALL FUN_00531090                   ; 0050b590
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
        ;   Label: LAB_0050b590
    ADD ESP,0x4                         ; 0050b595
    PUSH EAX                            ; 0050b598
    PUSH ESI                            ; 0050b599
    CALL FUN_005bfb40                   ; 0050b59a
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 0050b59f
    MOV EAX,[0x0061d95c]                ; 0050b5a2 | DAT_0061d95c
    MOV EAX,dword ptr [EAX + 0xd8]      ; 0050b5a7 | DAT_01ccf468
    CMP EAX,0x1                         ; 0050b5ad
    JNC 0x0050b884                      ; 0050b5b0
        ;   XREF to: 0050b884 (CONDITIONAL_JUMP)  ; LAB_0050b884
    MOV EAX,[0x0061d95c]                ; 0050b5b6 | DAT_0061d95c
        ;   Label: LAB_0050b5b6
    PUSH 0x5e7f0f                       ; 0050b5bb | = "Aiming : Auto"
    MOV dword ptr [EAX + 0xd8],0x0      ; 0050b5c0 | DAT_01ccf468
    CALL FUN_00531090                   ; 0050b5ca
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050b5cf
    PUSH EAX                            ; 0050b5d2
    MOV EAX,EBX                         ; 0050b5d3
    SHL EAX,0x8                         ; 0050b5d5
    ADD EAX,0x1d1f6e0                   ; 0050b5d8
    PUSH EAX                            ; 0050b5dd
    CALL FUN_005bfb40                   ; 0050b5de
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
        ;   Label: LAB_0050b5de
    ADD ESP,0x8                         ; 0050b5e3
    INC EBX                             ; 0050b5e6
    MOV EAX,[0x0061d95c]                ; 0050b5e7 | DAT_0061d95c
    MOV ESI,EBX                         ; 0050b5ec
    MOV EBP,dword ptr [EAX + 0xdc]      ; 0050b5ee | DAT_01ccf46c
    SHL ESI,0x8                         ; 0050b5f4
    INC EBX                             ; 0050b5f7
    ADD ESI,0x1d1f6e0                   ; 0050b5f8
    TEST EBP,EBP                        ; 0050b5fe
    JZ 0x0050b89e                       ; 0050b600
        ;   XREF to: 0050b89e (CONDITIONAL_JUMP)  ; LAB_0050b89e
    PUSH 0x5e7f42                       ; 0050b606 | = "Auto use health : On"
    CALL FUN_00531090                   ; 0050b60b
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
        ;   Label: LAB_0050b60b
    ADD ESP,0x4                         ; 0050b610
    PUSH EAX                            ; 0050b613
    PUSH ESI                            ; 0050b614
    CALL FUN_005bfb40                   ; 0050b615
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 0050b61a
    PUSH 0x5e7f6d                       ; 0050b61d | = "X-axis sensitivity : "
    CALL FUN_00531090                   ; 0050b622
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    MOV EDI,EBX                         ; 0050b627
    ADD ESP,0x4                         ; 0050b629
    SHL EDI,0x8                         ; 0050b62c
    MOV ESI,EAX                         ; 0050b62f
    ADD EDI,0x1d1f6e0                   ; 0050b631
    PUSH EDI                            ; 0050b637
    MOV AL,byte ptr [ESI]               ; 0050b638
        ;   Label: LAB_0050b638
    MOV byte ptr [EDI],AL               ; 0050b63a
    CMP AL,0x0                          ; 0050b63c
    JZ 0x0050b650                       ; 0050b63e
        ;   XREF to: 0050b650 (CONDITIONAL_JUMP)  ; LAB_0050b650
    MOV AL,byte ptr [ESI + 0x1]         ; 0050b640
    ADD ESI,0x2                         ; 0050b643
    MOV byte ptr [EDI + 0x1],AL         ; 0050b646
    ADD EDI,0x2                         ; 0050b649
    CMP AL,0x0                          ; 0050b64c
    JNZ 0x0050b638                      ; 0050b64e
        ;   XREF to: 0050b638 (CONDITIONAL_JUMP)  ; LAB_0050b638
    POP EDI                             ; 0050b650
        ;   Label: LAB_0050b650
    MOV EAX,[0x0061d95c]                ; 0050b651 | DAT_0061d95c
    FILD dword ptr [EAX + 0xb0]         ; 0050b656 | DAT_01ccf440
    FMUL double ptr [0x005e801a]        ; 0050b65c | DAT_005e801a
    SUB ESP,0x8                         ; 0050b662
    FSTP double ptr [ESP]               ; 0050b665
    PUSH 0x5e7f83                       ; 0050b668 | = "%5.2f"
    LEA EAX,[ESP + 0xc]                 ; 0050b66d
    PUSH EAX                            ; 0050b671
    CALL FUN_005bfb40                   ; 0050b672
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 0050b677
    MOV ESI,ESP                         ; 0050b67a
    PUSH EDI                            ; 0050b67c
    SUB ECX,ECX                         ; 0050b67d
    DEC ECX                             ; 0050b67f
    MOV AL,0x0                          ; 0050b680
    SCASB.REPNE ES:EDI                  ; 0050b682
    DEC EDI                             ; 0050b684
    MOV AL,byte ptr [ESI]               ; 0050b685
        ;   Label: LAB_0050b685
    MOV byte ptr [EDI],AL               ; 0050b687
    CMP AL,0x0                          ; 0050b689
    JZ 0x0050b69d                       ; 0050b68b
        ;   XREF to: 0050b69d (CONDITIONAL_JUMP)  ; LAB_0050b69d
    MOV AL,byte ptr [ESI + 0x1]         ; 0050b68d
    ADD ESI,0x2                         ; 0050b690
    MOV byte ptr [EDI + 0x1],AL         ; 0050b693
    ADD EDI,0x2                         ; 0050b696
    CMP AL,0x0                          ; 0050b699
    JNZ 0x0050b685                      ; 0050b69b
        ;   XREF to: 0050b685 (CONDITIONAL_JUMP)  ; LAB_0050b685
    POP EDI                             ; 0050b69d
        ;   Label: LAB_0050b69d
    PUSH 0x5e7f89                       ; 0050b69e | = "Y-axis sensitivity : "
    INC EBX                             ; 0050b6a3
    CALL FUN_00531090                   ; 0050b6a4
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    MOV EDI,EBX                         ; 0050b6a9
    ADD ESP,0x4                         ; 0050b6ab
    SHL EDI,0x8                         ; 0050b6ae
    MOV ESI,EAX                         ; 0050b6b1
    ADD EDI,0x1d1f6e0                   ; 0050b6b3
    PUSH EDI                            ; 0050b6b9
    MOV AL,byte ptr [ESI]               ; 0050b6ba
        ;   Label: LAB_0050b6ba
    MOV byte ptr [EDI],AL               ; 0050b6bc
    CMP AL,0x0                          ; 0050b6be
    JZ 0x0050b6d2                       ; 0050b6c0
        ;   XREF to: 0050b6d2 (CONDITIONAL_JUMP)  ; LAB_0050b6d2
    MOV AL,byte ptr [ESI + 0x1]         ; 0050b6c2
    ADD ESI,0x2                         ; 0050b6c5
    MOV byte ptr [EDI + 0x1],AL         ; 0050b6c8
    ADD EDI,0x2                         ; 0050b6cb
    CMP AL,0x0                          ; 0050b6ce
    JNZ 0x0050b6ba                      ; 0050b6d0
        ;   XREF to: 0050b6ba (CONDITIONAL_JUMP)  ; LAB_0050b6ba
    POP EDI                             ; 0050b6d2
        ;   Label: LAB_0050b6d2
    MOV EAX,[0x0061d95c]                ; 0050b6d3 | DAT_0061d95c
    FILD dword ptr [EAX + 0xb4]         ; 0050b6d8 | DAT_01ccf444
    FMUL double ptr [0x005e801a]        ; 0050b6de | DAT_005e801a
    SUB ESP,0x8                         ; 0050b6e4
    FSTP double ptr [ESP]               ; 0050b6e7
    PUSH 0x5e7f9f                       ; 0050b6ea | = "%5.2f"
    LEA EAX,[ESP + 0xc]                 ; 0050b6ef
    PUSH EAX                            ; 0050b6f3
    CALL FUN_005bfb40                   ; 0050b6f4
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 0050b6f9
    MOV ESI,ESP                         ; 0050b6fc
    INC EBX                             ; 0050b6fe
    PUSH EDI                            ; 0050b6ff
    SUB ECX,ECX                         ; 0050b700
    DEC ECX                             ; 0050b702
    MOV AL,0x0                          ; 0050b703
    SCASB.REPNE ES:EDI                  ; 0050b705
    DEC EDI                             ; 0050b707
    MOV AL,byte ptr [ESI]               ; 0050b708
        ;   Label: LAB_0050b708
    MOV byte ptr [EDI],AL               ; 0050b70a
    CMP AL,0x0                          ; 0050b70c
    JZ 0x0050b720                       ; 0050b70e
        ;   XREF to: 0050b720 (CONDITIONAL_JUMP)  ; LAB_0050b720
    MOV AL,byte ptr [ESI + 0x1]         ; 0050b710
    ADD ESI,0x2                         ; 0050b713
    MOV byte ptr [EDI + 0x1],AL         ; 0050b716
    ADD EDI,0x2                         ; 0050b719
    CMP AL,0x0                          ; 0050b71c
    JNZ 0x0050b708                      ; 0050b71e
        ;   XREF to: 0050b708 (CONDITIONAL_JUMP)  ; LAB_0050b708
    POP EDI                             ; 0050b720
        ;   Label: LAB_0050b720
    MOV ESI,EBX                         ; 0050b721
    MOV EAX,[0x0061d95c]                ; 0050b723 | DAT_0061d95c
    SHL ESI,0x8                         ; 0050b728
    LEA EBP,[EBX + 0x1]                 ; 0050b72b
    MOV EDX,dword ptr [EAX + 0xd0]      ; 0050b72e | DAT_01ccf460
    ADD ESI,0x1d1f6e0                   ; 0050b734
    CMP EDX,0x1                         ; 0050b73a
    JNZ 0x0050b8b2                      ; 0050b73d
        ;   XREF to: 0050b8b2 (CONDITIONAL_JUMP)  ; LAB_0050b8b2
    CMP dword ptr [EAX + 0xa8],0x0      ; 0050b743 | DAT_01ccf438
    JZ 0x0050b8a8                       ; 0050b74a
        ;   XREF to: 0050b8a8 (CONDITIONAL_JUMP)  ; LAB_0050b8a8
    PUSH 0x5e7fa5                       ; 0050b750 | = "Invert Y Axis : ON"
    CALL FUN_00531090                   ; 0050b755
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
        ;   Label: LAB_0050b755
    ADD ESP,0x4                         ; 0050b75a
    PUSH EAX                            ; 0050b75d
    PUSH ESI                            ; 0050b75e
    MOV EBX,EBP                         ; 0050b75f
    CALL FUN_005bfb40                   ; 0050b761
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 0050b766
    PUSH 0x5e7fd6                       ; 0050b769 | = "Control Options"
        ;   Label: LAB_0050b769
    CALL FUN_00531090                   ; 0050b76e
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050b773
    PUSH EAX                            ; 0050b776
    PUSH 0x32                           ; 0050b777
    LEA EAX,[ESP + 0x108]               ; 0050b779
    PUSH EAX                            ; 0050b780
    PUSH EBX                            ; 0050b781
    PUSH 0x1d1ffe0                      ; 0050b782
    CALL FUN_00509e20                   ; 0050b787
        ;   XREF to: 00509e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e20()
    ADD ESP,0x14                        ; 0050b78c
    MOV EBX,EAX                         ; 0050b78f
    CALL FUN_005acff0                   ; 0050b791
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acff0()
    CMP EBX,0x7                         ; 0050b796
    JA 0x0050b7f6                       ; 0050b799
        ;   XREF to: 0050b7f6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EBX*0x4 + 0x50b444]  ; 0050b79b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDI,dword ptr [0x01d1ee8c]      ; 0050b7a2 | DAT_01d1ee8c
        ;   Label: caseD_0
    CMP EDI,0x1                         ; 0050b7a8
    JNZ 0x0050b8d4                      ; 0050b7ab
        ;   XREF to: 0050b8d4 (CONDITIONAL_JUMP)  ; LAB_0050b8d4
    MOV EAX,[0x0061d95c]                ; 0050b7b1 | DAT_0061d95c
    MOV EBX,dword ptr [EAX + 0xd0]      ; 0050b7b6 | DAT_01ccf460
    SUB EBX,EDI                         ; 0050b7bc
    MOV dword ptr [EAX + 0xd0],EBX      ; 0050b7be | DAT_01ccf460
    TEST EBX,EBX                        ; 0050b7c4
    JL 0x0050b8c5                       ; 0050b7c6
        ;   XREF to: 0050b8c5 (CONDITIONAL_JUMP)  ; LAB_0050b8c5
    MOV EAX,[0x0061d95c]                ; 0050b7cc | DAT_0061d95c
        ;   Label: LAB_0050b7cc
    CMP dword ptr [EAX + 0xd0],0x3      ; 0050b7d1 | DAT_01ccf460
    JZ 0x0050b7f6                       ; 0050b7d8
        ;   XREF to: 0050b7f6 (CONDITIONAL_JUMP)  ; default
    MOV EAX,[0x01d06ab4]                ; 0050b7da | DAT_01d06ab4
    SHL EAX,0x2                         ; 0050b7df
    MOV EBX,dword ptr [EAX + 0x1d06aa4] ; 0050b7e2
    TEST EBX,EBX                        ; 0050b7e8
    JZ 0x0050b7f6                       ; 0050b7ea
        ;   XREF to: 0050b7f6 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0xc1d8],0x0    ; 0050b7ec
    PUSH 0x1                            ; 0050b7f6
        ;   Label: default
    MOV EAX,[0x0061f2a4]                ; 0050b7f8 | DAT_0061f2a4
    PUSH EAX                            ; 0050b7fd | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 0050b7fe | DAT_01d1bca0
    CALL dword ptr [EBX + 0x4]          ; 0050b800
    ADD ESP,0x8                         ; 0050b803
    TEST EAX,EAX                        ; 0050b806
    JZ 0x0050b4ad                       ; 0050b808
        ;   XREF to: 0050b4ad (CONDITIONAL_JUMP)  ; LAB_0050b4ad
    MOV EAX,[0x0061d95c]                ; 0050b80e | DAT_0061d95c | DAT_01ccf390
    CMP dword ptr [EAX + 0xd0],0x2      ; 0050b813 | DAT_01ccf460
    JNZ 0x0050b829                      ; 0050b81a
        ;   XREF to: 0050b829 (CONDITIONAL_JUMP)  ; LAB_0050b829
    CMP dword ptr [EAX + 0xb8],0x0      ; 0050b81c | DAT_01ccf448
    JZ 0x0050b9ff                       ; 0050b823
        ;   XREF to: 0050b9ff (CONDITIONAL_JUMP)  ; LAB_0050b9ff
    ADD ESP,0x104                       ; 0050b829
        ;   Label: LAB_0050b829
    POP EBP                             ; 0050b82f
    POP EDI                             ; 0050b830
    POP ESI                             ; 0050b831
    POP EBX                             ; 0050b832
    RET                                 ; 0050b833
    PUSH 0x5e7e9c                       ; 0050b834 | = "Control : Keyboard/Mouse"
        ;   Label: caseD_1
    JMP 0x0050b533                      ; 0050b839
        ;   XREF to: 0050b533 (UNCONDITIONAL_JUMP)  ; LAB_0050b533
    PUSH 0x5e7eb5                       ; 0050b83e | = "Control : Gamepad"
        ;   Label: caseD_2
    JMP 0x0050b533                      ; 0050b843
        ;   XREF to: 0050b533 (UNCONDITIONAL_JUMP)  ; LAB_0050b533
    PUSH 0x5e7ec7                       ; 0050b848 | = "Control : Point & Click"
        ;   Label: caseD_3
    JMP 0x0050b533                      ; 0050b84d
        ;   XREF to: 0050b533 (UNCONDITIONAL_JUMP)  ; LAB_0050b533
    PUSH 0x5e7efe                       ; 0050b852 | = "Always run : OFF"
        ;   Label: LAB_0050b852
    JMP 0x0050b590                      ; 0050b857
        ;   XREF to: 0050b590 (UNCONDITIONAL_JUMP)  ; LAB_0050b590
    PUSH 0x5e7f1d                       ; 0050b85c | = "Aiming : Kindof auto"
        ;   Label: LAB_0050b85c
    CALL FUN_00531090                   ; 0050b861
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050b866
    PUSH EAX                            ; 0050b869
    PUSH ESI                            ; 0050b86a
    JMP 0x0050b5de                      ; 0050b86b
        ;   XREF to: 0050b5de (UNCONDITIONAL_JUMP)  ; LAB_0050b5de
    PUSH 0x5e7f32                       ; 0050b870 | = "Aiming : Manual"
        ;   Label: LAB_0050b870
    CALL FUN_00531090                   ; 0050b875
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050b87a
    PUSH EAX                            ; 0050b87d
    PUSH ESI                            ; 0050b87e
    JMP 0x0050b5de                      ; 0050b87f
        ;   XREF to: 0050b5de (UNCONDITIONAL_JUMP)  ; LAB_0050b5de
    MOV ESI,EBX                         ; 0050b884
        ;   Label: LAB_0050b884
    SHL ESI,0x8                         ; 0050b886
    ADD ESI,0x1d1f6e0                   ; 0050b889
    CMP EAX,0x1                         ; 0050b88f
    JBE 0x0050b85c                      ; 0050b892
        ;   XREF to: 0050b85c (CONDITIONAL_JUMP)  ; LAB_0050b85c
    CMP EAX,0x2                         ; 0050b894
    JZ 0x0050b870                       ; 0050b897
        ;   XREF to: 0050b870 (CONDITIONAL_JUMP)  ; LAB_0050b870
    JMP 0x0050b5b6                      ; 0050b899
        ;   XREF to: 0050b5b6 (UNCONDITIONAL_JUMP)  ; LAB_0050b5b6
    PUSH 0x5e7f57                       ; 0050b89e | = "Auto use health : Off"
        ;   Label: LAB_0050b89e
    JMP 0x0050b60b                      ; 0050b8a3
        ;   XREF to: 0050b60b (UNCONDITIONAL_JUMP)  ; LAB_0050b60b
    PUSH 0x5e7fb8                       ; 0050b8a8 | = "Invert Y Axis : OFF"
        ;   Label: LAB_0050b8a8
    JMP 0x0050b755                      ; 0050b8ad
        ;   XREF to: 0050b755 (UNCONDITIONAL_JUMP)  ; LAB_0050b755
    CMP EDX,0x2                         ; 0050b8b2
        ;   Label: LAB_0050b8b2
    JNZ 0x0050b769                      ; 0050b8b5
        ;   XREF to: 0050b769 (CONDITIONAL_JUMP)  ; LAB_0050b769
    PUSH 0x5e7fcc                       ; 0050b8bb | = "Calibrate"
    JMP 0x0050b755                      ; 0050b8c0
        ;   XREF to: 0050b755 (UNCONDITIONAL_JUMP)  ; LAB_0050b755
    MOV dword ptr [EAX + 0xd0],0x3      ; 0050b8c5 | DAT_01ccf460
        ;   Label: LAB_0050b8c5
    JMP 0x0050b7cc                      ; 0050b8cf
        ;   XREF to: 0050b7cc (UNCONDITIONAL_JUMP)  ; LAB_0050b7cc
    MOV EBX,dword ptr [0x0061d95c]      ; 0050b8d4 | DAT_0061d95c
        ;   Label: LAB_0050b8d4
    MOV EAX,dword ptr [EBX + 0xd0]      ; 0050b8da | DAT_01ccf460
    INC EAX                             ; 0050b8e0
    MOV dword ptr [EBX + 0xd0],EAX      ; 0050b8e1 | DAT_01ccf460
    CMP EAX,0x3                         ; 0050b8e7
    JLE 0x0050b7cc                      ; 0050b8ea
        ;   XREF to: 0050b7cc (CONDITIONAL_JUMP)  ; LAB_0050b7cc
    MOV dword ptr [EBX + 0xd0],0x0      ; 0050b8f0 | DAT_01ccf460
    JMP 0x0050b7cc                      ; 0050b8fa
        ;   XREF to: 0050b7cc (UNCONDITIONAL_JUMP)  ; LAB_0050b7cc
    CALL FUN_0050d640                   ; 0050b8ff
        ;   XREF to: 0050d640 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d640()
        ;   Label: caseD_1
    JMP 0x0050b7f6                      ; 0050b904
        ;   XREF to: 0050b7f6 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x0061d95c]                ; 0050b909 | DAT_0061d95c
        ;   Label: caseD_2
    CMP dword ptr [EAX + 0xac],0x0      ; 0050b90e | DAT_01ccf43c
    SETZ BL                             ; 0050b915
    AND EBX,0xff                        ; 0050b918
    MOV dword ptr [EAX + 0xac],EBX      ; 0050b91e | DAT_01ccf43c
    JMP 0x0050b7f6                      ; 0050b924
        ;   XREF to: 0050b7f6 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x0061d95c]                ; 0050b929 | DAT_0061d95c
        ;   Label: caseD_3
    CMP dword ptr [EAX + 0xd8],0x0      ; 0050b92e | DAT_01ccf468
    JNZ 0x0050b946                      ; 0050b935
        ;   XREF to: 0050b946 (CONDITIONAL_JUMP)  ; LAB_0050b946
    MOV dword ptr [EAX + 0xd8],0x2      ; 0050b937 | DAT_01ccf468
    JMP 0x0050b7f6                      ; 0050b941
        ;   XREF to: 0050b7f6 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0xd8],0x0      ; 0050b946 | DAT_01ccf468
        ;   Label: LAB_0050b946
    JMP 0x0050b7f6                      ; 0050b950
        ;   XREF to: 0050b7f6 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x0061d95c]                ; 0050b955 | DAT_0061d95c
        ;   Label: caseD_4
    CMP dword ptr [EAX + 0xdc],0x0      ; 0050b95a | DAT_01ccf46c
    SETZ BL                             ; 0050b961
    AND EBX,0xff                        ; 0050b964
    MOV dword ptr [EAX + 0xdc],EBX      ; 0050b96a | DAT_01ccf46c
    JMP 0x0050b7f6                      ; 0050b970
        ;   XREF to: 0050b7f6 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5e7fe6                       ; 0050b975 | = "Adjust X-Axis sensitivity"
        ;   Label: caseD_5
    CALL FUN_00531090                   ; 0050b97a
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050b97f
    PUSH EAX                            ; 0050b982
    MOV EAX,[0x0061d95c]                ; 0050b983 | DAT_0061d95c
    ADD EAX,0xb0                        ; 0050b988
    PUSH EAX                            ; 0050b98d | DAT_01ccf440
    CALL FUN_0050a5e0                   ; 0050b98e
        ;   XREF to: 0050a5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050a5e0()
    ADD ESP,0x8                         ; 0050b993
    JMP 0x0050b7f6                      ; 0050b996
        ;   XREF to: 0050b7f6 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5e8000                       ; 0050b99b | = "Adjust Y-Axis sensitivity"
        ;   Label: caseD_6
    CALL FUN_00531090                   ; 0050b9a0
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0050b9a5
    PUSH EAX                            ; 0050b9a8
    MOV EAX,[0x0061d95c]                ; 0050b9a9 | DAT_0061d95c
    ADD EAX,0xb4                        ; 0050b9ae
    PUSH EAX                            ; 0050b9b3 | DAT_01ccf444
    CALL FUN_0050a5e0                   ; 0050b9b4
        ;   XREF to: 0050a5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050a5e0()
    ADD ESP,0x8                         ; 0050b9b9
    JMP 0x0050b7f6                      ; 0050b9bc
        ;   XREF to: 0050b7f6 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x0061d95c]                ; 0050b9c1 | DAT_0061d95c
        ;   Label: caseD_7
    MOV ESI,dword ptr [EAX + 0xd0]      ; 0050b9c6 | DAT_01ccf460
    CMP ESI,0x1                         ; 0050b9cc
    JNZ 0x0050b9ec                      ; 0050b9cf
        ;   XREF to: 0050b9ec (CONDITIONAL_JUMP)  ; LAB_0050b9ec
    CMP dword ptr [EAX + 0xa8],0x0      ; 0050b9d1 | DAT_01ccf438
    SETZ BL                             ; 0050b9d8
    AND EBX,0xff                        ; 0050b9db
    MOV dword ptr [EAX + 0xa8],EBX      ; 0050b9e1 | DAT_01ccf438
    JMP 0x0050b7f6                      ; 0050b9e7
        ;   XREF to: 0050b7f6 (UNCONDITIONAL_JUMP)  ; default
    CMP ESI,0x2                         ; 0050b9ec
        ;   Label: LAB_0050b9ec
    JNZ 0x0050b7f6                      ; 0050b9ef
        ;   XREF to: 0050b7f6 (CONDITIONAL_JUMP)  ; default
    CALL FUN_0050a2b0                   ; 0050b9f5
        ;   XREF to: 0050a2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050a2b0()
    JMP 0x0050b7f6                      ; 0050b9fa
        ;   XREF to: 0050b7f6 (UNCONDITIONAL_JUMP)  ; default
    CALL FUN_0050a2b0                   ; 0050b9ff
        ;   XREF to: 0050a2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050a2b0()
        ;   Label: LAB_0050b9ff
    TEST EAX,EAX                        ; 0050ba04
    JNZ 0x0050b829                      ; 0050ba06
        ;   XREF to: 0050b829 (CONDITIONAL_JUMP)  ; LAB_0050b829
    JMP 0x0050b4ad                      ; 0050ba0c
        ;   XREF to: 0050b4ad (UNCONDITIONAL_JUMP)  ; LAB_0050b4ad

