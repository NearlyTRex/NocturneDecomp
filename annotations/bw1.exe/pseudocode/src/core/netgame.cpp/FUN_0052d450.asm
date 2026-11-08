; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052d450(int *param_1,int *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined1       Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xdf]:1  local_df
; undefined1       Stack[-0xde]:1  local_de
; undefined        Stack[-0xcb]:1  local_cb
; undefined1       Stack[-0xca]:1  local_ca
; undefined        Stack[-0x7b]:1  local_7b
; undefined4       Stack[-0x70]:4  local_70
; undefined1       Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x6b]:4  local_6b
; undefined4       Stack[-0x64]:4  local_64
; undefined1       Stack[-0x60]:1  local_60
; undefined4       Stack[-0x5f]:4  local_5f
; undefined4       Stack[-0x58]:4  local_58
; undefined1       Stack[-0x54]:1  local_54
; undefined4       Stack[-0x4c]:4  local_4c
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x47]:4  local_47
; undefined4       Stack[-0x40]:4  local_40
; undefined1       Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x3b]:4  local_3b
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0052d360 at 0052d3ea
;
; Referenced Globals:
;   undefined4 caseD_0
;   void* switchdataD_0052d404 = 0052d1fc
;   TerminatedCString s_core_netgame_cpp_005eb62a
;   TerminatedCString s_allocSimFrame_sim_histor_005eb63e
;   TerminatedCString s_You_have_been_disconnect_005ebc06
;   undefined4 DAT_005ebc2f
;   TerminatedCString s_core_netgame_cpp_005ebc30
;   TerminatedCString s_Player_list_mismatch_pro_005ebc44
;   TerminatedCString s_core_netgame_cpp_005ebc7c
;   TerminatedCString s_Player_list_mismatch_005ebc90
;   undefined4 DAT_005ebca8
;   undefined4 DAT_005ebcb0
;   undefined4 DAT_005ebcb8
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   ... and 13 more
;
; Called Functions:
;   FUN_005030e0
;   FUN_0052cab0
;   FUN_0052df50
;   FUN_0052dfc0
;   FUN_0052dff0
;   FUN_0052e040
;   FUN_0052f100
;   FUN_0052f200
;   FUN_0052f890
;   FUN_0052fa80
;   FUN_005306d0
;   FUN_0059c740
;   FUN_005bfb70
;   FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052d450
        ;   Label: FUN_0052d450
    PUSH ESI                            ; 0052d451
    PUSH EDI                            ; 0052d452
    PUSH EBP                            ; 0052d453
    MOV EBP,ESP                         ; 0052d454
    SUB ESP,0xe0                        ; 0052d456
    AND ESP,0xfffffff8                  ; 0052d45c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0052d45f
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052d462
    PUSH EDX                            ; 0052d465
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052d466
    PUSH ECX                            ; 0052d469
    XOR EDI,EDI                         ; 0052d46a
    CALL FUN_0052dff0                   ; 0052d46c
        ;   XREF to: 0052dff0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052dff0()
    ADD ESP,0x8                         ; 0052d471
    MOV EBX,EAX                         ; 0052d474
    MOV dword ptr [ESP + 0xd4],EDI      ; 0052d476
    TEST EAX,EAX                        ; 0052d47d
    JL 0x0052d4a2                       ; 0052d47f
        ;   XREF to: 0052d4a2 (CONDITIONAL_JUMP)  ; LAB_0052d4a2
    SHL EAX,0x2                         ; 0052d481
    MOV EDX,EAX                         ; 0052d484
    SHL EAX,0x5                         ; 0052d486
    SUB EAX,EDX                         ; 0052d489
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052d48b
    ADD EDX,0x20                        ; 0052d48e
    ADD EDX,EAX                         ; 0052d491
    MOV EAX,[0x01d51da0]                ; 0052d493 | DAT_01d51da0
    MOV dword ptr [ESP + 0xd4],EDX      ; 0052d498
    MOV dword ptr [EDX + 0x24],EAX      ; 0052d49f
    MOV AL,byte ptr [ESI + 0x4]         ; 0052d4a2
        ;   Label: LAB_0052d4a2
    CMP AL,0x10                         ; 0052d4a5
    JA 0x0052d1fc                       ; 0052d4a7
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    AND EAX,0xff                        ; 0052d4ad
    JMP dword ptr [EAX*0x4 + 0x52d404]  ; 0052d4b2 | caseD_e | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052d4b9
        ;   Label: caseD_1
    MOV ECX,dword ptr [EAX + 0x4]       ; 0052d4bc
    MOV dword ptr [ESP + 0xc8],ESI      ; 0052d4bf
    CMP ECX,0x1                         ; 0052d4c6
    JNZ 0x0052d5ee                      ; 0052d4c9
        ;   XREF to: 0052d5ee (CONDITIONAL_JUMP)  ; LAB_0052d5ee
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0052d4cf
        ;   Label: LAB_0052d4cf
    ADD EAX,0xd                         ; 0052d4d6
    TEST EBX,EBX                        ; 0052d4d9
    JL 0x0052d620                       ; 0052d4db
        ;   XREF to: 0052d620 (CONDITIONAL_JUMP)  ; LAB_0052d620
    PUSH EAX                            ; 0052d4e1
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0052d4e2
    PUSH EAX                            ; 0052d4e9
    CALL FUN_005c0f80                   ; 0052d4ea
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f80()
    ADD ESP,0x8                         ; 0052d4ef
    TEST EAX,EAX                        ; 0052d4f2
    JZ 0x0052d647                       ; 0052d4f4
        ;   XREF to: 0052d647 (CONDITIONAL_JUMP)  ; LAB_0052d647
    MOV ESI,dword ptr [ESP + 0xc8]      ; 0052d4fa
        ;   Label: LAB_0052d4fa
    MOV EDI,dword ptr [ESP + 0xd4]      ; 0052d501
    ADD ESI,0xd                         ; 0052d508
    PUSH EDI                            ; 0052d50b
    MOV AL,byte ptr [ESI]               ; 0052d50c
        ;   Label: LAB_0052d50c
    MOV byte ptr [EDI],AL               ; 0052d50e
    CMP AL,0x0                          ; 0052d510
    JZ 0x0052d524                       ; 0052d512
        ;   XREF to: 0052d524 (CONDITIONAL_JUMP)  ; LAB_0052d524
    MOV AL,byte ptr [ESI + 0x1]         ; 0052d514
    ADD ESI,0x2                         ; 0052d517
    MOV byte ptr [EDI + 0x1],AL         ; 0052d51a
    ADD EDI,0x2                         ; 0052d51d
    CMP AL,0x0                          ; 0052d520
    JNZ 0x0052d50c                      ; 0052d522
        ;   XREF to: 0052d50c (CONDITIONAL_JUMP)  ; LAB_0052d50c
    POP EDI                             ; 0052d524
        ;   Label: LAB_0052d524
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0052d525
    MOV EAX,dword ptr [EAX + 0x21]      ; 0052d52c
    MOV dword ptr [EDI + 0x14],EAX      ; 0052d52f
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0052d532
    MOV EAX,dword ptr [EAX + 0x25]      ; 0052d539
    MOV dword ptr [EDI + 0x18],EAX      ; 0052d53c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052d53f
    PUSH EDI                            ; 0052d542
    CALL FUN_0052fa80                   ; 0052d543
        ;   XREF to: 0052fa80 (UNCONDITIONAL_CALL)  ; undefined FUN_0052fa80()
    ADD ESP,0x4                         ; 0052d548
    MOV EAX,0x71                        ; 0052d54b
        ;   Label: LAB_0052d54b
    MOV DH,0x2                          ; 0052d550
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052d552
    LEA EDI,[ESP + 0x25]                ; 0052d555
    MOV dword ptr [ESP + 0xc],EAX       ; 0052d559
    ADD ESI,0x120                       ; 0052d55d
    MOV byte ptr [ESP + 0x10],DH        ; 0052d563
    PUSH EDI                            ; 0052d567
    MOV AL,byte ptr [ESI]               ; 0052d568
        ;   Label: LAB_0052d568
    MOV byte ptr [EDI],AL               ; 0052d56a
    CMP AL,0x0                          ; 0052d56c
    JZ 0x0052d580                       ; 0052d56e
        ;   XREF to: 0052d580 (CONDITIONAL_JUMP)  ; LAB_0052d580
    MOV AL,byte ptr [ESI + 0x1]         ; 0052d570
    ADD ESI,0x2                         ; 0052d573
    MOV byte ptr [EDI + 0x1],AL         ; 0052d576
    ADD EDI,0x2                         ; 0052d579
    CMP AL,0x0                          ; 0052d57c
    JNZ 0x0052d568                      ; 0052d57e
        ;   XREF to: 0052d568 (CONDITIONAL_JUMP)  ; LAB_0052d568
    POP EDI                             ; 0052d580
        ;   Label: LAB_0052d580
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052d581
    LEA EDI,[ESP + 0x11]                ; 0052d584
    ADD ESI,0x8                         ; 0052d588
    PUSH EDI                            ; 0052d58b
    MOV AL,byte ptr [ESI]               ; 0052d58c
        ;   Label: LAB_0052d58c
    MOV byte ptr [EDI],AL               ; 0052d58e
    CMP AL,0x0                          ; 0052d590
    JZ 0x0052d5a4                       ; 0052d592
        ;   XREF to: 0052d5a4 (CONDITIONAL_JUMP)  ; LAB_0052d5a4
    MOV AL,byte ptr [ESI + 0x1]         ; 0052d594
    ADD ESI,0x2                         ; 0052d597
    MOV byte ptr [EDI + 0x1],AL         ; 0052d59a
    ADD EDI,0x2                         ; 0052d59d
    CMP AL,0x0                          ; 0052d5a0
    JNZ 0x0052d58c                      ; 0052d5a2
        ;   XREF to: 0052d58c (CONDITIONAL_JUMP)  ; LAB_0052d58c
    POP EDI                             ; 0052d5a4
        ;   Label: LAB_0052d5a4
    LEA EAX,[ESP + 0xc]                 ; 0052d5a5
    PUSH EAX                            ; 0052d5a9
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052d5aa
    PUSH EBX                            ; 0052d5ad
    LEA EDI,[ESP + 0x7d]                ; 0052d5ae
    MOV ESI,dword ptr [EBP + 0x18]      ; 0052d5b2
    PUSH EDX                            ; 0052d5b5
    MOVSD ES:EDI,ESI                    ; 0052d5b6
    MOVSD ES:EDI,ESI                    ; 0052d5b7
    CALL FUN_0052df50                   ; 0052d5b8
        ;   XREF to: 0052df50 (UNCONDITIONAL_CALL)  ; undefined FUN_0052df50()
    ADD ESP,0xc                         ; 0052d5bd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052d5c0
    MOV EAX,dword ptr [EAX + 0x11c]     ; 0052d5c3
    SHL EAX,0x2                         ; 0052d5c9
    MOV EDX,EAX                         ; 0052d5cc
    SHL EAX,0x5                         ; 0052d5ce
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052d5d1
    SUB EAX,EDX                         ; 0052d5d4
    MOV ESI,dword ptr [ESP + 0xc8]      ; 0052d5d6
    ADD EAX,ECX                         ; 0052d5dd
    LEA ESI,[ESI + 0x5]                 ; 0052d5df
    LEA EDI,[EAX + 0x3c]                ; 0052d5e2
    MOVSD ES:EDI,ESI                    ; 0052d5e5
    MOVSD ES:EDI,ESI                    ; 0052d5e6
    MOV ESP,EBP                         ; 0052d5e7
    POP EBP                             ; 0052d5e9
    POP EDI                             ; 0052d5ea
    POP ESI                             ; 0052d5eb
    POP EBX                             ; 0052d5ec
    RET                                 ; 0052d5ed
    MOV EAX,0x9                         ; 0052d5ee
        ;   Label: LAB_0052d5ee
    MOV dword ptr [ESP + 0x98],EAX      ; 0052d5f3
    LEA EAX,[ESP + 0x98]                ; 0052d5fa
    PUSH EAX                            ; 0052d601
    MOV ESI,dword ptr [EBP + 0x18]      ; 0052d602
    PUSH ESI                            ; 0052d605
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052d606
    MOV DL,0x3                          ; 0052d609
    PUSH EDI                            ; 0052d60b
    MOV byte ptr [ESP + 0xa8],DL        ; 0052d60c
    CALL FUN_0052dfc0                   ; 0052d613
        ;   XREF to: 0052dfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052dfc0()
    ADD ESP,0xc                         ; 0052d618
    JMP 0x0052d4cf                      ; 0052d61b
        ;   XREF to: 0052d4cf (UNCONDITIONAL_JUMP)  ; LAB_0052d4cf
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0052d620
        ;   Label: LAB_0052d620
    MOV ECX,dword ptr [EDX + 0x25]      ; 0052d627
    PUSH ECX                            ; 0052d62a
    MOV EBX,dword ptr [EDX + 0x21]      ; 0052d62b
    PUSH EBX                            ; 0052d62e
    PUSH EAX                            ; 0052d62f
    MOV ESI,dword ptr [EBP + 0x18]      ; 0052d630
    PUSH ESI                            ; 0052d633
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052d634
    PUSH EDI                            ; 0052d637
    CALL FUN_0052e040                   ; 0052d638
        ;   XREF to: 0052e040 (UNCONDITIONAL_CALL)  ; undefined FUN_0052e040()
    ADD ESP,0x14                        ; 0052d63d
    MOV EBX,EAX                         ; 0052d640
    JMP 0x0052d54b                      ; 0052d642
        ;   XREF to: 0052d54b (UNCONDITIONAL_JUMP)  ; LAB_0052d54b
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0052d647
        ;   Label: LAB_0052d647
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0052d64e
    MOV ECX,dword ptr [EDX + 0x21]      ; 0052d655
    CMP ECX,dword ptr [EAX + 0x14]      ; 0052d658
    JNZ 0x0052d4fa                      ; 0052d65b
        ;   XREF to: 0052d4fa (CONDITIONAL_JUMP)  ; LAB_0052d4fa
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0052d661
    MOV ESI,dword ptr [EDX + 0x25]      ; 0052d668
    CMP ESI,dword ptr [EAX + 0x18]      ; 0052d66b
    JNZ 0x0052d4fa                      ; 0052d66e
        ;   XREF to: 0052d4fa (CONDITIONAL_JUMP)  ; LAB_0052d4fa
    JMP 0x0052d54b                      ; 0052d674
        ;   XREF to: 0052d54b (UNCONDITIONAL_JUMP)  ; LAB_0052d54b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052d679
        ;   Label: caseD_3
    CMP dword ptr [EAX],0x2             ; 0052d67c
    JNZ 0x0052d1fc                      ; 0052d67f
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    TEST EBX,EBX                        ; 0052d685
    JL 0x0052d1fc                       ; 0052d687
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    CMP dword ptr [EAX + 0x4],0x1       ; 0052d68d
    JNZ 0x0052d1fc                      ; 0052d691
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    CMP EBX,dword ptr [EAX + 0x118]     ; 0052d697
    JNZ 0x0052d1fc                      ; 0052d69d
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESI + 0x5]       ; 0052d6a3
    MOV [0x01d51da4],EAX                ; 0052d6a6 | DAT_01d51da4
    MOV ESP,EBP                         ; 0052d6ab
    POP EBP                             ; 0052d6ad
    POP EDI                             ; 0052d6ae
    POP ESI                             ; 0052d6af
    POP EBX                             ; 0052d6b0
    RET                                 ; 0052d6b1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052d6b2
        ;   Label: caseD_2
    MOV ECX,ESI                         ; 0052d6b5
    CMP dword ptr [EAX],0x2             ; 0052d6b7
    JNZ 0x0052d72f                      ; 0052d6ba
        ;   XREF to: 0052d72f (CONDITIONAL_JUMP)  ; LAB_0052d72f
    TEST EBX,EBX                        ; 0052d6bc
    JL 0x0052d72f                       ; 0052d6be
        ;   XREF to: 0052d72f (CONDITIONAL_JUMP)  ; LAB_0052d72f
    CMP EBX,dword ptr [EAX + 0x118]     ; 0052d6c0
    JNZ 0x0052d72f                      ; 0052d6c6
        ;   XREF to: 0052d72f (CONDITIONAL_JUMP)  ; LAB_0052d72f
    MOV EDX,dword ptr [EAX + 0x4]       ; 0052d6c8
    CMP EDX,0x1                         ; 0052d6cb
    JNZ 0x0052d1fc                      ; 0052d6ce
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,dword ptr [ESP + 0xd4]      ; 0052d6d4
    LEA ESI,[ECX + 0x5]                 ; 0052d6db
    MOV dword ptr [0x01d51da4],EDX      ; 0052d6de | DAT_01d51da4
    PUSH EDI                            ; 0052d6e4
    MOV AL,byte ptr [ESI]               ; 0052d6e5
        ;   Label: LAB_0052d6e5
    MOV byte ptr [EDI],AL               ; 0052d6e7
    CMP AL,0x0                          ; 0052d6e9
    JZ 0x0052d6fd                       ; 0052d6eb
        ;   XREF to: 0052d6fd (CONDITIONAL_JUMP)  ; LAB_0052d6fd
    MOV AL,byte ptr [ESI + 0x1]         ; 0052d6ed
    ADD ESI,0x2                         ; 0052d6f0
    MOV byte ptr [EDI + 0x1],AL         ; 0052d6f3
    ADD EDI,0x2                         ; 0052d6f6
    CMP AL,0x0                          ; 0052d6f9
    JNZ 0x0052d6e5                      ; 0052d6fb
        ;   XREF to: 0052d6e5 (CONDITIONAL_JUMP)  ; LAB_0052d6e5
    POP EDI                             ; 0052d6fd
        ;   Label: LAB_0052d6fd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052d6fe
    MOV EAX,dword ptr [EAX + 0x11c]     ; 0052d701
    SHL EAX,0x2                         ; 0052d707
    MOV EDX,EAX                         ; 0052d70a
    SHL EAX,0x5                         ; 0052d70c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052d70f
    SUB EAX,EDX                         ; 0052d712
    ADD EAX,ESI                         ; 0052d714
    LEA EDI,[EAX + 0x3c]                ; 0052d716
    LEA ESI,[ECX + 0x69]                ; 0052d719
    MOVSD ES:EDI,ESI                    ; 0052d71c
    MOVSD ES:EDI,ESI                    ; 0052d71d
    MOV dword ptr [0x01d51dac],0xffffffff ; 0052d71e | DAT_01d51dac
    MOV ESP,EBP                         ; 0052d728
    POP EBP                             ; 0052d72a
    POP EDI                             ; 0052d72b
    POP ESI                             ; 0052d72c
    POP EBX                             ; 0052d72d
    RET                                 ; 0052d72e
    PUSH 0x0                            ; 0052d72f
        ;   Label: LAB_0052d72f
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052d731
    PUSH EAX                            ; 0052d734
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052d735
    PUSH EDX                            ; 0052d738
    CALL FUN_005306d0                   ; 0052d739
        ;   XREF to: 005306d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005306d0()
    ADD ESP,0xc                         ; 0052d73e
    MOV ESP,EBP                         ; 0052d741
    POP EBP                             ; 0052d743
    POP EDI                             ; 0052d744
    POP ESI                             ; 0052d745
    POP EBX                             ; 0052d746
    RET                                 ; 0052d747
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052d748
        ;   Label: caseD_4
    MOV EDI,dword ptr [EAX]             ; 0052d74b
    TEST EDI,EDI                        ; 0052d74d
    JNZ 0x0052d766                      ; 0052d74f
        ;   XREF to: 0052d766 (CONDITIONAL_JUMP)  ; LAB_0052d766
    PUSH EDI                            ; 0052d751
    MOV ECX,dword ptr [EBP + 0x18]      ; 0052d752
    PUSH ECX                            ; 0052d755
    PUSH EAX                            ; 0052d756
    CALL FUN_005306d0                   ; 0052d757
        ;   XREF to: 005306d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005306d0()
    ADD ESP,0xc                         ; 0052d75c
    MOV ESP,EBP                         ; 0052d75f
    POP EBP                             ; 0052d761
    POP EDI                             ; 0052d762
    POP ESI                             ; 0052d763
    POP EBX                             ; 0052d764
    RET                                 ; 0052d765
    MOV EAX,0x9                         ; 0052d766
        ;   Label: LAB_0052d766
    MOV DL,0x5                          ; 0052d76b
    MOV dword ptr [ESP + 0xa4],EAX      ; 0052d76d
    MOV byte ptr [ESP + 0xa8],DL        ; 0052d774
    MOV EAX,dword ptr [ESI + 0x5]       ; 0052d77b
    MOV dword ptr [ESP + 0xa9],EAX      ; 0052d77e
    LEA EAX,[ESP + 0xa4]                ; 0052d785
    PUSH EAX                            ; 0052d78c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052d78d
    PUSH EAX                            ; 0052d790
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052d791
    PUSH EDX                            ; 0052d794
    CALL FUN_0052dfc0                   ; 0052d795
        ;   XREF to: 0052dfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052dfc0()
    ADD ESP,0xc                         ; 0052d79a
    MOV ESP,EBP                         ; 0052d79d
    POP EBP                             ; 0052d79f
    POP EDI                             ; 0052d7a0
    POP ESI                             ; 0052d7a1
    POP EBX                             ; 0052d7a2
    RET                                 ; 0052d7a3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052d7a4
        ;   Label: caseD_5
    CMP dword ptr [EAX],0x0             ; 0052d7a7
    JZ 0x0052d88e                       ; 0052d7aa
        ;   XREF to: 0052d88e (CONDITIONAL_JUMP)  ; LAB_0052d88e
    TEST EBX,EBX                        ; 0052d7b0
    JL 0x0052d88e                       ; 0052d7b2
        ;   XREF to: 0052d88e (CONDITIONAL_JUMP)  ; LAB_0052d88e
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0052d7b8
    FLD float ptr [EAX + 0x28]          ; 0052d7bf
    FLDZ                                ; 0052d7c2
    FCOMPP                              ; 0052d7c4
    FNSTSW AX                           ; 0052d7c6
    SAHF                                ; 0052d7c8
    JA 0x0052d82d                       ; 0052d7c9
        ;   XREF to: 0052d82d (CONDITIONAL_JUMP)  ; LAB_0052d82d
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0052d7cb
    MOV EDX,dword ptr [ESI + 0x5]       ; 0052d7d2
    MOV EAX,dword ptr [EAX + 0x30]      ; 0052d7d5
    SUB EDX,EAX                         ; 0052d7d8
    MOV dword ptr [ESP + 0xdc],EDX      ; 0052d7da
    FILD dword ptr [ESP + 0xdc]         ; 0052d7e1
    FMUL double ptr [0x005ebca8]        ; 0052d7e8 | DAT_005ebca8
    FST float ptr [ESP + 0x4]           ; 0052d7ee
    FCOMP double ptr [0x005ebcb0]       ; 0052d7f2 | DAT_005ebcb0
    FNSTSW AX                           ; 0052d7f8
    SAHF                                ; 0052d7fa
    JNC 0x0052d805                      ; 0052d7fb
        ;   XREF to: 0052d805 (CONDITIONAL_JUMP)  ; LAB_0052d805
    MOV dword ptr [ESP + 0x4],0xc1f00000 ; 0052d7fd
    FLD float ptr [ESP + 0x4]           ; 0052d805
        ;   Label: LAB_0052d805
    FCOMP double ptr [0x005ebcb8]       ; 0052d809 | DAT_005ebcb8
    FNSTSW AX                           ; 0052d80f
    SAHF                                ; 0052d811
    JBE 0x0052d81c                      ; 0052d812
        ;   XREF to: 0052d81c (CONDITIONAL_JUMP)  ; LAB_0052d81c
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 0052d814
    FLD float ptr [ESP + 0x4]           ; 0052d81c
        ;   Label: LAB_0052d81c
    FLDZ                                ; 0052d820
    FCOMPP                              ; 0052d822
    FNSTSW AX                           ; 0052d824
    SAHF                                ; 0052d826
    JNC 0x0052d1fc                      ; 0052d827
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [0x01d51da0]      ; 0052d82d | DAT_01d51da0
        ;   Label: LAB_0052d82d
    MOV EAX,dword ptr [ESI + 0x5]       ; 0052d833
    SUB EDX,EAX                         ; 0052d836
    MOV dword ptr [ESP + 0xdc],EDX      ; 0052d838
    FILD dword ptr [ESP + 0xdc]         ; 0052d83f
    FMUL double ptr [0x005ebca8]        ; 0052d846 | DAT_005ebca8
    FST float ptr [ESP]                 ; 0052d84c
    FLDZ                                ; 0052d84f
    FCOMPP                              ; 0052d851
    FNSTSW AX                           ; 0052d853
    SAHF                                ; 0052d855
    JBE 0x0052d85d                      ; 0052d856
        ;   XREF to: 0052d85d (CONDITIONAL_JUMP)  ; LAB_0052d85d
    XOR EAX,EAX                         ; 0052d858
    MOV dword ptr [ESP],EAX             ; 0052d85a
    FLD float ptr [ESP]                 ; 0052d85d
        ;   Label: LAB_0052d85d
    FCOMP double ptr [0x005ebcb8]       ; 0052d860 | DAT_005ebcb8
    FNSTSW AX                           ; 0052d866
    SAHF                                ; 0052d868
    JBE 0x0052d872                      ; 0052d869
        ;   XREF to: 0052d872 (CONDITIONAL_JUMP)  ; LAB_0052d872
    MOV dword ptr [ESP],0x41f00000      ; 0052d86b
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0052d872
        ;   Label: LAB_0052d872
    MOV EAX,dword ptr [ESP]             ; 0052d879
    MOV dword ptr [EDX + 0x28],EAX      ; 0052d87c
    MOV EAX,[0x01d51da0]                ; 0052d87f | DAT_01d51da0
    MOV dword ptr [EDX + 0x30],EAX      ; 0052d884
    MOV ESP,EBP                         ; 0052d887
    POP EBP                             ; 0052d889
    POP EDI                             ; 0052d88a
    POP ESI                             ; 0052d88b
    POP EBX                             ; 0052d88c
    RET                                 ; 0052d88d
    PUSH 0x0                            ; 0052d88e
        ;   Label: LAB_0052d88e
    MOV ECX,dword ptr [EBP + 0x18]      ; 0052d890
    PUSH ECX                            ; 0052d893
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052d894
    PUSH EBX                            ; 0052d897
    CALL FUN_005306d0                   ; 0052d898
        ;   XREF to: 005306d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005306d0()
    ADD ESP,0xc                         ; 0052d89d
    MOV ESP,EBP                         ; 0052d8a0
    POP EBP                             ; 0052d8a2
    POP EDI                             ; 0052d8a3
    POP ESI                             ; 0052d8a4
    POP EBX                             ; 0052d8a5
    RET                                 ; 0052d8a6
    MOV EDI,ESI                         ; 0052d8a7
        ;   Label: caseD_6
    TEST EBX,EBX                        ; 0052d8a9
    JL 0x0052d1fc                       ; 0052d8ab
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [0x01d51db4]      ; 0052d8b1 | DAT_01d51db4
    XOR EAX,EAX                         ; 0052d8b7
    CMP EAX,EDX                         ; 0052d8b9
    JGE 0x0052d8f5                      ; 0052d8bb
        ;   XREF to: 0052d8f5 (CONDITIONAL_JUMP)  ; LAB_0052d8f5
    LEA EBX,[EAX*0x8 + 0x0]             ; 0052d8bd
    SHL EBX,0x5                         ; 0052d8c4
    ADD EBX,0x1d51db8                   ; 0052d8c7
    IMUL ECX,EAX,0x120                  ; 0052d8cd
        ;   Label: LAB_0052d8cd
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052d8d3
    MOV SI,word ptr [EBX + 0x4]         ; 0052d8d6
    CMP SI,word ptr [EDX + 0x4]         ; 0052d8da
    JNZ 0x0052d959                      ; 0052d8de
        ;   XREF to: 0052d959 (CONDITIONAL_JUMP)  ; LAB_0052d959
    MOV ESI,dword ptr [EBX]             ; 0052d8e4
    CMP ESI,dword ptr [EDX]             ; 0052d8e6
    JNZ 0x0052d959                      ; 0052d8e8
        ;   XREF to: 0052d959 (CONDITIONAL_JUMP)  ; LAB_0052d959
    MOV EDX,dword ptr [EDI + 0x5]       ; 0052d8ea
    CMP EDX,dword ptr [ECX + 0x1d51dc0] ; 0052d8ed | DAT_01d51ee0
    JNZ 0x0052d959                      ; 0052d8f3
        ;   XREF to: 0052d959 (CONDITIONAL_JUMP)  ; LAB_0052d959
    CMP EAX,dword ptr [0x01d51db4]      ; 0052d8f5 | DAT_01d51db4
        ;   Label: LAB_0052d8f5
    JNZ 0x0052d91d                      ; 0052d8fb
        ;   XREF to: 0052d91d (CONDITIONAL_JUMP)  ; LAB_0052d91d
    LEA EAX,[EDI + 0x9]                 ; 0052d8fd
    PUSH EAX                            ; 0052d900
    MOV EBX,dword ptr [ESP + 0xd8]      ; 0052d901
    PUSH EBX                            ; 0052d908
    MOV ESI,dword ptr [EDI + 0x5]       ; 0052d909
    PUSH ESI                            ; 0052d90c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052d90d
    PUSH EAX                            ; 0052d910
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052d911
    PUSH EDX                            ; 0052d914
    CALL FUN_0052f100                   ; 0052d915
        ;   XREF to: 0052f100 (UNCONDITIONAL_CALL)  ; undefined FUN_0052f100()
    ADD ESP,0x14                        ; 0052d91a
    MOV dword ptr [ESP + 0x80],0x9      ; 0052d91d
        ;   Label: LAB_0052d91d
    MOV byte ptr [ESP + 0x84],0x7       ; 0052d928
    MOV EAX,dword ptr [EDI + 0x5]       ; 0052d930
    MOV dword ptr [ESP + 0x85],EAX      ; 0052d933
    LEA EAX,[ESP + 0x80]                ; 0052d93a
    PUSH EAX                            ; 0052d941
    MOV EBX,dword ptr [EBP + 0x18]      ; 0052d942
    PUSH EBX                            ; 0052d945
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052d946
    PUSH ESI                            ; 0052d949
    CALL FUN_0052dfc0                   ; 0052d94a
        ;   XREF to: 0052dfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052dfc0()
    ADD ESP,0xc                         ; 0052d94f
    MOV ESP,EBP                         ; 0052d952
    POP EBP                             ; 0052d954
    POP EDI                             ; 0052d955
    POP ESI                             ; 0052d956
    POP EBX                             ; 0052d957
    RET                                 ; 0052d958
    MOV ECX,dword ptr [0x01d51db4]      ; 0052d959 | DAT_01d51db4
        ;   Label: LAB_0052d959
    INC EAX                             ; 0052d95f
    ADD EBX,0x120                       ; 0052d960
    CMP EAX,ECX                         ; 0052d966
    JL 0x0052d8cd                       ; 0052d968
        ;   XREF to: 0052d8cd (CONDITIONAL_JUMP)  ; LAB_0052d8cd
    JMP 0x0052d8f5                      ; 0052d96e
        ;   XREF to: 0052d8f5 (UNCONDITIONAL_JUMP)  ; LAB_0052d8f5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052d970
        ;   Label: caseD_7
    MOV ECX,dword ptr [EAX]             ; 0052d973
    MOV dword ptr [ESP + 0xd0],ESI      ; 0052d975
    TEST ECX,ECX                        ; 0052d97c
    JZ 0x0052d1fc                       ; 0052d97e
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    TEST EBX,EBX                        ; 0052d984
    JL 0x0052d1fc                       ; 0052d986
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDI,dword ptr [0x01d6dfb8]      ; 0052d98c | DAT_01d6dfb8
    XOR ESI,ESI                         ; 0052d992
    CMP ESI,EDI                         ; 0052d994
    JGE 0x0052d1fc                      ; 0052d996
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,EDI                         ; 0052d99c
    SHL EDI,0x4                         ; 0052d99e
    MOV EAX,ESI                         ; 0052d9a1
    ADD EDI,EDX                         ; 0052d9a3
    SHL EAX,0x4                         ; 0052d9a5
    SHL EDI,0x2                         ; 0052d9a8
    SHL EAX,0x2                         ; 0052d9ab
    ADD EDI,EDX                         ; 0052d9ae
    SHL EAX,0x2                         ; 0052d9b0
    SHL EDI,0x2                         ; 0052d9b3
    MOV ECX,dword ptr [ESP + 0xd0]      ; 0052d9b6
        ;   Label: LAB_0052d9b6
    MOV EDX,dword ptr [EAX + 0x1d6dfc0] ; 0052d9bd | DAT_01d6dfc0
    CMP EDX,dword ptr [ECX + 0x5]       ; 0052d9c3
    JZ 0x0052d9d8                       ; 0052d9c6
        ;   XREF to: 0052d9d8 (CONDITIONAL_JUMP)  ; LAB_0052d9d8
    ADD EAX,0x114                       ; 0052d9c8
    INC ESI                             ; 0052d9cd
    CMP EAX,EDI                         ; 0052d9ce
    JGE 0x0052d1fc                      ; 0052d9d0
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    JMP 0x0052d9b6                      ; 0052d9d6
        ;   XREF to: 0052d9b6 (UNCONDITIONAL_JUMP)  ; LAB_0052d9b6
    LEA EDX,[EAX + EBX*0x1]             ; 0052d9d8
        ;   Label: LAB_0052d9d8
    MOV byte ptr [EDX + 0x1d6dfc4],0x1  ; 0052d9db
    ADD EAX,0x114                       ; 0052d9e2
    INC ESI                             ; 0052d9e7
    CMP EAX,EDI                         ; 0052d9e8
    JGE 0x0052d1fc                      ; 0052d9ea
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    JMP 0x0052d9b6                      ; 0052d9f0
        ;   XREF to: 0052d9b6 (UNCONDITIONAL_JUMP)  ; LAB_0052d9b6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052d9f2
        ;   Label: caseD_8
    MOV EDX,dword ptr [EAX]             ; 0052d9f5
    CMP EDX,0x2                         ; 0052d9f7
    JNZ 0x0052d72f                      ; 0052d9fa
        ;   XREF to: 0052d72f (CONDITIONAL_JUMP)  ; LAB_0052d72f
    TEST EBX,EBX                        ; 0052da00
    JL 0x0052d72f                       ; 0052da02
        ;   XREF to: 0052d72f (CONDITIONAL_JUMP)  ; LAB_0052d72f
    CMP EBX,dword ptr [EAX + 0x118]     ; 0052da08
    JNZ 0x0052d72f                      ; 0052da0e
        ;   XREF to: 0052d72f (CONDITIONAL_JUMP)  ; LAB_0052d72f
    MOV EBX,dword ptr [EAX + 0x4]       ; 0052da14
    CMP EBX,0x1                         ; 0052da17
    JNZ 0x0052da24                      ; 0052da1a
        ;   XREF to: 0052da24 (CONDITIONAL_JUMP)  ; LAB_0052da24
    CMP EBX,dword ptr [ESI + 0x5]       ; 0052da1c
    JNZ 0x0052da24                      ; 0052da1f
        ;   XREF to: 0052da24 (CONDITIONAL_JUMP)  ; LAB_0052da24
    MOV dword ptr [EAX + 0x4],EDX       ; 0052da21
    MOV EAX,0x9                         ; 0052da24
        ;   Label: LAB_0052da24
    MOV DL,0x9                          ; 0052da29
    MOV dword ptr [ESP + 0x8c],EAX      ; 0052da2b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052da32
    MOV byte ptr [ESP + 0x90],DL        ; 0052da35
    MOV EAX,dword ptr [EAX + 0x11c]     ; 0052da3c
    SHL EAX,0x2                         ; 0052da42
    MOV EDX,EAX                         ; 0052da45
    SHL EAX,0x5                         ; 0052da47
    SUB EAX,EDX                         ; 0052da4a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052da4c
    ADD EAX,EDX                         ; 0052da4f
    MOV EAX,dword ptr [EAX + 0x5c]      ; 0052da51
    MOV dword ptr [ESP + 0x91],EAX      ; 0052da54
    LEA EAX,[ESP + 0x8c]                ; 0052da5b
    PUSH EAX                            ; 0052da62
    MOV ECX,dword ptr [EDX + 0x118]     ; 0052da63
    PUSH ECX                            ; 0052da69
    PUSH EDX                            ; 0052da6a
    CALL FUN_0052df50                   ; 0052da6b
        ;   XREF to: 0052df50 (UNCONDITIONAL_CALL)  ; undefined FUN_0052df50()
    MOV EDI,dword ptr [0x01d51da8]      ; 0052da70 | DAT_01d51da8
    MOV EAX,dword ptr [ESI + 0x5]       ; 0052da76
    ADD ESP,0xc                         ; 0052da79
    CMP EAX,EDI                         ; 0052da7c
    JLE 0x0052d1fc                      ; 0052da7e
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV [0x01d51da8],EAX                ; 0052da84 | DAT_01d51da8
    MOV ESP,EBP                         ; 0052da89
    POP EBP                             ; 0052da8b
    POP EDI                             ; 0052da8c
    POP ESI                             ; 0052da8d
    POP EBX                             ; 0052da8e
    RET                                 ; 0052da8f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052da90
        ;   Label: caseD_9
    CMP dword ptr [EAX],0x1             ; 0052da93
    JNZ 0x0052dac3                      ; 0052da96
        ;   XREF to: 0052dac3 (CONDITIONAL_JUMP)  ; LAB_0052dac3
    TEST EBX,EBX                        ; 0052da98
    JL 0x0052dac3                       ; 0052da9a
        ;   XREF to: 0052dac3 (CONDITIONAL_JUMP)  ; LAB_0052dac3
    CMP dword ptr [EAX + 0x4],0x2       ; 0052da9c
    JNZ 0x0052d1fc                      ; 0052daa0
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0052daa6
    MOV EAX,dword ptr [ESI + 0x5]       ; 0052daad
    CMP EAX,dword ptr [EDX + 0x3c]      ; 0052dab0
    JL 0x0052d1fc                       ; 0052dab3
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV dword ptr [EDX + 0x3c],EAX      ; 0052dab9
    MOV ESP,EBP                         ; 0052dabc
    POP EBP                             ; 0052dabe
    POP EDI                             ; 0052dabf
    POP ESI                             ; 0052dac0
    POP EBX                             ; 0052dac1
    RET                                 ; 0052dac2
    PUSH 0x0                            ; 0052dac3
        ;   Label: LAB_0052dac3
    MOV ESI,dword ptr [EBP + 0x18]      ; 0052dac5
    PUSH ESI                            ; 0052dac8
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052dac9
    PUSH EDI                            ; 0052dacc
    CALL FUN_005306d0                   ; 0052dacd
        ;   XREF to: 005306d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005306d0()
    ADD ESP,0xc                         ; 0052dad2
    MOV ESP,EBP                         ; 0052dad5
    POP EBP                             ; 0052dad7
    POP EDI                             ; 0052dad8
    POP ESI                             ; 0052dad9
    POP EBX                             ; 0052dada
    RET                                 ; 0052dadb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052dadc
        ;   Label: caseD_a
    MOV ECX,dword ptr [EAX]             ; 0052dadf
    MOV EDX,ESI                         ; 0052dae1
    CMP ECX,0x1                         ; 0052dae3
    JNZ 0x0052dac3                      ; 0052dae6
        ;   XREF to: 0052dac3 (CONDITIONAL_JUMP)  ; LAB_0052dac3
    TEST EBX,EBX                        ; 0052dae8
    JL 0x0052dac3                       ; 0052daea
        ;   XREF to: 0052dac3 (CONDITIONAL_JUMP)  ; LAB_0052dac3
    CMP ECX,dword ptr [EAX + 0x4]       ; 0052daec
    JNZ 0x0052d1fc                      ; 0052daef
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0052daf5
    CMP dword ptr [EAX + 0x40],0x0      ; 0052dafc
    JZ 0x0052db5c                       ; 0052db00
        ;   XREF to: 0052db5c (CONDITIONAL_JUMP)  ; LAB_0052db5c
    MOV ECX,dword ptr [ESP + 0xd4]      ; 0052db02
    MOV EAX,dword ptr [ESI + 0x5]       ; 0052db09
    MOV ECX,dword ptr [ECX + 0x40]      ; 0052db0c
    SUB ECX,EAX                         ; 0052db0f
    MOV dword ptr [ESP + 0xdc],ECX      ; 0052db11
    FILD dword ptr [ESP + 0xdc]         ; 0052db18
    FMUL double ptr [0x005ebca8]        ; 0052db1f | DAT_005ebca8
    FST float ptr [ESP + 0x8]           ; 0052db25
    FCOMP double ptr [0x005ebcb0]       ; 0052db29 | DAT_005ebcb0
    FNSTSW AX                           ; 0052db2f
    SAHF                                ; 0052db31
    JC 0x0052db9b                       ; 0052db32
        ;   XREF to: 0052db9b (CONDITIONAL_JUMP)  ; LAB_0052db9b
    FLD float ptr [ESP + 0x8]           ; 0052db34
        ;   Label: LAB_0052db34
    FCOMP double ptr [0x005ebcb8]       ; 0052db38 | DAT_005ebcb8
    FNSTSW AX                           ; 0052db3e
    SAHF                                ; 0052db40
    JBE 0x0052db4b                      ; 0052db41
        ;   XREF to: 0052db4b (CONDITIONAL_JUMP)  ; LAB_0052db4b
    MOV dword ptr [ESP + 0x8],0x41f00000 ; 0052db43
    FLD float ptr [ESP + 0x8]           ; 0052db4b
        ;   Label: LAB_0052db4b
    FLDZ                                ; 0052db4f
    FCOMPP                              ; 0052db51
    FNSTSW AX                           ; 0052db53
    SAHF                                ; 0052db55
    JNC 0x0052d1fc                      ; 0052db56
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV ECX,dword ptr [ESP + 0xd4]      ; 0052db5c
        ;   Label: LAB_0052db5c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052db63
    LEA ESI,[EDX + 0x9]                 ; 0052db66
    MOV EAX,dword ptr [EDX + 0x1d]      ; 0052db69
    MOV EDI,ECX                         ; 0052db6c
    MOV dword ptr [ECX + 0x44],EAX      ; 0052db6e
    PUSH EDI                            ; 0052db71
    MOV AL,byte ptr [ESI]               ; 0052db72
        ;   Label: LAB_0052db72
    MOV byte ptr [EDI],AL               ; 0052db74
    CMP AL,0x0                          ; 0052db76
    JZ 0x0052db8a                       ; 0052db78
        ;   XREF to: 0052db8a (CONDITIONAL_JUMP)  ; LAB_0052db8a
    MOV AL,byte ptr [ESI + 0x1]         ; 0052db7a
    ADD ESI,0x2                         ; 0052db7d
    MOV byte ptr [EDI + 0x1],AL         ; 0052db80
    ADD EDI,0x2                         ; 0052db83
    CMP AL,0x0                          ; 0052db86
    JNZ 0x0052db72                      ; 0052db88
        ;   XREF to: 0052db72 (CONDITIONAL_JUMP)  ; LAB_0052db72
    POP EDI                             ; 0052db8a
        ;   Label: LAB_0052db8a
    PUSH EBX                            ; 0052db8b
    CALL FUN_0052fa80                   ; 0052db8c
        ;   XREF to: 0052fa80 (UNCONDITIONAL_CALL)  ; undefined FUN_0052fa80()
    ADD ESP,0x4                         ; 0052db91
    MOV ESP,EBP                         ; 0052db94
    POP EBP                             ; 0052db96
    POP EDI                             ; 0052db97
    POP ESI                             ; 0052db98
    POP EBX                             ; 0052db99
    RET                                 ; 0052db9a
    MOV dword ptr [ESP + 0x8],0xc1f00000 ; 0052db9b
        ;   Label: LAB_0052db9b
    JMP 0x0052db34                      ; 0052dba3
        ;   XREF to: 0052db34 (UNCONDITIONAL_JUMP)  ; LAB_0052db34
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052dba5
        ;   Label: caseD_b
    CMP dword ptr [EAX],0x2             ; 0052dba8
    JNZ 0x0052dac3                      ; 0052dbab
        ;   XREF to: 0052dac3 (CONDITIONAL_JUMP)  ; LAB_0052dac3
    TEST EBX,EBX                        ; 0052dbb1
    JL 0x0052dac3                       ; 0052dbb3
        ;   XREF to: 0052dac3 (CONDITIONAL_JUMP)  ; LAB_0052dac3
    CMP EBX,dword ptr [EAX + 0x118]     ; 0052dbb9
    JNZ 0x0052dac3                      ; 0052dbbf
        ;   XREF to: 0052dac3 (CONDITIONAL_JUMP)  ; LAB_0052dac3
    CMP dword ptr [EAX + 0x4],0x1       ; 0052dbc5
    JNZ 0x0052d1fc                      ; 0052dbc9
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,[0x01d51dac]                ; 0052dbcf | DAT_01d51dac
    CMP EAX,dword ptr [ESI + 0x5]       ; 0052dbd4
    JGE 0x0052dbf6                      ; 0052dbd7
        ;   XREF to: 0052dbf6 (CONDITIONAL_JUMP)  ; LAB_0052dbf6
    PUSH ESI                            ; 0052dbd9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052dbda
    PUSH EAX                            ; 0052dbdd
    CALL FUN_0052f200                   ; 0052dbde
        ;   XREF to: 0052f200 (UNCONDITIONAL_CALL)  ; undefined FUN_0052f200()
    ADD ESP,0x8                         ; 0052dbe3
    TEST EAX,EAX                        ; 0052dbe6
    JZ 0x0052d1fc                       ; 0052dbe8
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESI + 0x5]       ; 0052dbee
    MOV [0x01d51dac],EAX                ; 0052dbf1 | DAT_01d51dac
    MOV byte ptr [ESP + 0xb4],0xc       ; 0052dbf6
        ;   Label: LAB_0052dbf6
    MOV EAX,[0x01d51dac]                ; 0052dbfe | DAT_01d51dac
    MOV dword ptr [ESP + 0xb5],EAX      ; 0052dc03
    LEA EAX,[ESP + 0xb0]                ; 0052dc0a
    MOV EDX,0x9                         ; 0052dc11
    PUSH EAX                            ; 0052dc16
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052dc17
    MOV dword ptr [ESP + 0xb4],EDX      ; 0052dc1a
    MOV ECX,dword ptr [EAX + 0x118]     ; 0052dc21
    PUSH ECX                            ; 0052dc27
    PUSH EAX                            ; 0052dc28
    CALL FUN_0052df50                   ; 0052dc29
        ;   XREF to: 0052df50 (UNCONDITIONAL_CALL)  ; undefined FUN_0052df50()
    ADD ESP,0xc                         ; 0052dc2e
    MOV ESP,EBP                         ; 0052dc31
    POP EBP                             ; 0052dc33
    POP EDI                             ; 0052dc34
    POP ESI                             ; 0052dc35
    POP EBX                             ; 0052dc36
    RET                                 ; 0052dc37
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052dc38
        ;   Label: caseD_c
    MOV EDX,dword ptr [EAX]             ; 0052dc3b
    CMP EDX,0x1                         ; 0052dc3d
    JNZ 0x0052dac3                      ; 0052dc40
        ;   XREF to: 0052dac3 (CONDITIONAL_JUMP)  ; LAB_0052dac3
    TEST EBX,EBX                        ; 0052dc46
    JL 0x0052dac3                       ; 0052dc48
        ;   XREF to: 0052dac3 (CONDITIONAL_JUMP)  ; LAB_0052dac3
    CMP EDX,dword ptr [EAX + 0x4]       ; 0052dc4e
    JNZ 0x0052d1fc                      ; 0052dc51
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0052dc57
    MOV EBX,dword ptr [ESI + 0x5]       ; 0052dc5e
    CMP EBX,dword ptr [EAX + 0x34]      ; 0052dc61
    JL 0x0052d1fc                       ; 0052dc64
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0052dc6a
    MOV dword ptr [EDX + 0x34],EBX      ; 0052dc71
    MOV ESP,EBP                         ; 0052dc74
    POP EBP                             ; 0052dc76
    POP EDI                             ; 0052dc77
    POP ESI                             ; 0052dc78
    POP EBX                             ; 0052dc79
    RET                                 ; 0052dc7a
    CMP dword ptr [ESI + 0x5],0x0       ; 0052dc7b
        ;   Label: caseD_d
    JNZ 0x0052dd0c                      ; 0052dc7f
        ;   XREF to: 0052dd0c (CONDITIONAL_JUMP)  ; LAB_0052dd0c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052dc85
        ;   Label: LAB_0052dc85
    CMP dword ptr [EAX],0x1             ; 0052dc88
    JNZ 0x0052dca7                      ; 0052dc8b
        ;   XREF to: 0052dca7 (CONDITIONAL_JUMP)  ; LAB_0052dca7
    TEST EBX,EBX                        ; 0052dc8d
    JL 0x0052dc9b                       ; 0052dc8f
        ;   XREF to: 0052dc9b (CONDITIONAL_JUMP)  ; LAB_0052dc9b
    PUSH EBX                            ; 0052dc91
    PUSH EAX                            ; 0052dc92
    CALL FUN_0052f890                   ; 0052dc93
        ;   XREF to: 0052f890 (UNCONDITIONAL_CALL)  ; undefined FUN_0052f890()
    ADD ESP,0x8                         ; 0052dc98
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052dc9b
        ;   Label: LAB_0052dc9b
    PUSH EDI                            ; 0052dc9e
    CALL FUN_0052fa80                   ; 0052dc9f
        ;   XREF to: 0052fa80 (UNCONDITIONAL_CALL)  ; undefined FUN_0052fa80()
    ADD ESP,0x4                         ; 0052dca4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052dca7
        ;   Label: LAB_0052dca7
    CMP dword ptr [EAX],0x2             ; 0052dcaa
    JNZ 0x0052d1fc                      ; 0052dcad
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    TEST EBX,EBX                        ; 0052dcb3
    JL 0x0052d1fc                       ; 0052dcb5
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    CMP EBX,dword ptr [EAX + 0x118]     ; 0052dcbb
    JNZ 0x0052d1fc                      ; 0052dcc1
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    PUSH 0x0                            ; 0052dcc7
    PUSH EAX                            ; 0052dcc9
    MOV EBX,EAX                         ; 0052dcca
    CALL FUN_0052cab0                   ; 0052dccc
        ;   XREF to: 0052cab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052cab0()
    ADD ESP,0x8                         ; 0052dcd1
    PUSH 0x5ebc06                       ; 0052dcd4 | = "You have been disconnected from the game"
    PUSH 0x5ebc2f                       ; 0052dcd9 | DAT_005ebc2f
    PUSH 0x0                            ; 0052dcde
    PUSH 0x0                            ; 0052dce0
    MOV ESI,dword ptr [0x02c8ae4c]      ; 0052dce2 | DAT_02c8ae4c
    PUSH ESI                            ; 0052dce8
    LEA EAX,[ESP + 0xd0]                ; 0052dce9
    PUSH EAX                            ; 0052dcf0
    CALL FUN_0059c740                   ; 0052dcf1
        ;   XREF to: 0059c740 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c740()
    ADD ESP,0xc                         ; 0052dcf6
    PUSH EAX                            ; 0052dcf9
    MOV EDI,EBX                         ; 0052dcfa
    PUSH EDI                            ; 0052dcfc
    CALL FUN_0052f100                   ; 0052dcfd
        ;   XREF to: 0052f100 (UNCONDITIONAL_CALL)  ; undefined FUN_0052f100()
    ADD ESP,0x14                        ; 0052dd02
    MOV ESP,EBP                         ; 0052dd05
    POP EBP                             ; 0052dd07
    POP EDI                             ; 0052dd08
    POP ESI                             ; 0052dd09
    POP EBX                             ; 0052dd0a
    RET                                 ; 0052dd0b
    PUSH 0x0                            ; 0052dd0c
        ;   Label: LAB_0052dd0c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052dd0e
    PUSH EAX                            ; 0052dd11
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052dd12
    PUSH EDX                            ; 0052dd15
    CALL FUN_005306d0                   ; 0052dd16
        ;   XREF to: 005306d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005306d0()
    ADD ESP,0xc                         ; 0052dd1b
    JMP 0x0052dc85                      ; 0052dd1e
        ;   XREF to: 0052dc85 (UNCONDITIONAL_JUMP)  ; LAB_0052dc85
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052dd23
        ;   Label: caseD_f
    MOV EDX,dword ptr [EAX]             ; 0052dd26
    MOV EDI,ESI                         ; 0052dd28
    CMP EDX,0x2                         ; 0052dd2a
    JNZ 0x0052de30                      ; 0052dd2d
        ;   XREF to: 0052de30 (CONDITIONAL_JUMP)  ; LAB_0052de30
    TEST EBX,EBX                        ; 0052dd33
    JL 0x0052de30                       ; 0052dd35
        ;   XREF to: 0052de30 (CONDITIONAL_JUMP)  ; LAB_0052de30
    MOV ECX,dword ptr [EAX + 0x118]     ; 0052dd3b
    CMP EBX,ECX                         ; 0052dd41
    JNZ 0x0052de30                      ; 0052dd43
        ;   XREF to: 0052de30 (CONDITIONAL_JUMP)  ; LAB_0052de30
    MOV EAX,dword ptr [ESI + 0x5]       ; 0052dd49
    MOV ESI,EAX                         ; 0052dd4c
    MOV dword ptr [ESP + 0xc4],EAX      ; 0052dd4e
    MOV EAX,[0x01d715a8]                ; 0052dd55 | DAT_01d715a8
    XOR EBX,ECX                         ; 0052dd5a
    TEST EAX,EAX                        ; 0052dd5c
    JLE 0x0052de55                      ; 0052dd5e
        ;   XREF to: 0052de55 (CONDITIONAL_JUMP)  ; LAB_0052de55
    MOV ECX,dword ptr [0x01d715a8]      ; 0052dd64 | DAT_01d715a8
    LEA EDX,[ECX*0x4 + 0x0]             ; 0052dd6a
    SUB EDX,ECX                         ; 0052dd71
    SHL EDX,0x2                         ; 0052dd73
    MOV ECX,EDX                         ; 0052dd76
    SHL EDX,0x3                         ; 0052dd78
    XOR EAX,EAX                         ; 0052dd7b
    ADD EDX,ECX                         ; 0052dd7d
    CMP ESI,dword ptr [EAX + 0x1d715ac] ; 0052dd7f | DAT_01d71618
        ;   Label: LAB_0052dd7f
    JNZ 0x0052de49                      ; 0052dd85
        ;   XREF to: 0052de49 (CONDITIONAL_JUMP)  ; LAB_0052de49
    TEST EBX,EBX                        ; 0052dd8b
    JL 0x0052de55                       ; 0052dd8d
        ;   XREF to: 0052de55 (CONDITIONAL_JUMP)  ; LAB_0052de55
    ADD EAX,0x1d715ac                   ; 0052dd93
    MOV EDX,dword ptr [EDI + 0x9]       ; 0052dd98
        ;   Label: LAB_0052dd98
    MOV dword ptr [EAX + 0x4],EDX       ; 0052dd9b | DAT_01d7161c
    MOV dword ptr [ESP + 0xcc],EAX      ; 0052dd9e | DAT_01d71618
    MOV EDX,dword ptr [EDI + 0xd]       ; 0052dda5
    MOV dword ptr [EAX + 0x8],EDX       ; 0052dda8 | DAT_01d71620
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052ddab
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0052ddae
    XOR EBX,EBX                         ; 0052ddb1
    TEST ECX,ECX                        ; 0052ddb3
    JLE 0x0052d1fc                      ; 0052ddb5
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV dword ptr [ESP + 0xd8],EDI      ; 0052ddbb
    MOV ESI,EBX                         ; 0052ddc2
        ;   Label: LAB_0052ddc2
    TEST EBX,EBX                        ; 0052ddc4
    JL 0x0052decd                       ; 0052ddc6
        ;   XREF to: 0052decd (CONDITIONAL_JUMP)  ; LAB_0052decd
    CMP ESI,EBX                         ; 0052ddcc
        ;   Label: LAB_0052ddcc
    JZ 0x0052ddf2                       ; 0052ddce
        ;   XREF to: 0052ddf2 (CONDITIONAL_JUMP)  ; LAB_0052ddf2
    MOV EAX,0x5ebc7c                    ; 0052ddd0 | = "..\\core\\netgame.cpp"
    MOV EDX,0x597                       ; 0052ddd5
    PUSH 0x5ebc90                       ; 0052ddda | = "Player list mismatch!"
    MOV [0x01d1d400],EAX                ; 0052dddf | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0052dde4 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0052ddea
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0052ddef
    IMUL ESI,ESI,0x30                   ; 0052ddf2
        ;   Label: LAB_0052ddf2
    ADD ESI,dword ptr [ESP + 0xcc]      ; 0052ddf5
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0052ddfc
    LEA EDI,[ESI + 0xc]                 ; 0052de03
    MOV ESI,dword ptr [ESP + 0xd8]      ; 0052de06
    MOV ECX,0xc                         ; 0052de0d
    ADD EAX,0x30                        ; 0052de12
    LEA ESI,[ESI + 0x11]                ; 0052de15
    MOV dword ptr [ESP + 0xd8],EAX      ; 0052de18
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052de1f
    MOVSD.REP ES:EDI,ESI                ; 0052de22
    INC EBX                             ; 0052de24
    CMP EBX,dword ptr [EAX + 0x1c]      ; 0052de25
    JGE 0x0052d1fc                      ; 0052de28
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    JMP 0x0052ddc2                      ; 0052de2e
        ;   XREF to: 0052ddc2 (UNCONDITIONAL_JUMP)  ; LAB_0052ddc2
    PUSH 0x0                            ; 0052de30
        ;   Label: LAB_0052de30
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052de32
    PUSH EDX                            ; 0052de35
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052de36
    PUSH ECX                            ; 0052de39
    CALL FUN_005306d0                   ; 0052de3a
        ;   XREF to: 005306d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005306d0()
    ADD ESP,0xc                         ; 0052de3f
    MOV ESP,EBP                         ; 0052de42
    POP EBP                             ; 0052de44
    POP EDI                             ; 0052de45
    POP ESI                             ; 0052de46
    POP EBX                             ; 0052de47
    RET                                 ; 0052de48
    ADD EAX,0x6c                        ; 0052de49
        ;   Label: LAB_0052de49
    INC EBX                             ; 0052de4c
    CMP EAX,EDX                         ; 0052de4d
    JL 0x0052dd7f                       ; 0052de4f
        ;   XREF to: 0052dd7f (CONDITIONAL_JUMP)  ; LAB_0052dd7f
    CMP dword ptr [0x01d715a8],0x200    ; 0052de55 | DAT_01d715a8
        ;   Label: LAB_0052de55
    JL 0x0052de83                       ; 0052de5f
        ;   XREF to: 0052de83 (CONDITIONAL_JUMP)  ; LAB_0052de83
    MOV ESI,0x5eb62a                    ; 0052de61 | = "..\\core\\netgame.cpp"
    MOV EAX,0x12b                       ; 0052de66
    PUSH 0x5eb63e                       ; 0052de6b | = "allocSimFrame - sim history list full"
    MOV dword ptr [0x01d1d400],ESI      ; 0052de70 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0052de76 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0052de7b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0052de80
    MOV EDX,dword ptr [0x01d715a8]      ; 0052de83 | DAT_01d715a8
        ;   Label: LAB_0052de83
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052de89
    SUB EAX,EDX                         ; 0052de90
    MOV EBX,0x1d715ac                   ; 0052de92
    SHL EAX,0x2                         ; 0052de97
    PUSH 0x6c                           ; 0052de9a
    MOV EDX,EAX                         ; 0052de9c
    SHL EAX,0x3                         ; 0052de9e
    PUSH 0x0                            ; 0052dea1
    ADD EAX,EDX                         ; 0052dea3
    MOV EDX,dword ptr [0x01d715a8]      ; 0052dea5 | DAT_01d715a8
    ADD EBX,EAX                         ; 0052deab
    INC EDX                             ; 0052dead
    PUSH EBX                            ; 0052deae
    MOV dword ptr [0x01d715a8],EDX      ; 0052deaf | DAT_01d715a8
    CALL FUN_005bfb70                   ; 0052deb5
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0052deba
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0052debd
    MOV dword ptr [EBX],EAX             ; 0052dec4
    MOV EAX,EBX                         ; 0052dec6
    JMP 0x0052dd98                      ; 0052dec8
        ;   XREF to: 0052dd98 (UNCONDITIONAL_JUMP)  ; LAB_0052dd98
    MOV ECX,0x5ebc30                    ; 0052decd | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0052decd
    MOV EDI,0x596                       ; 0052ded2
    PUSH 0x5ebc44                       ; 0052ded7 | = "Player list mismatch processing SimFr..."
    MOV dword ptr [0x01d1d400],ECX      ; 0052dedc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0052dee2 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0052dee8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0052deed
    JMP 0x0052ddcc                      ; 0052def0
        ;   XREF to: 0052ddcc (UNCONDITIONAL_JUMP)  ; LAB_0052ddcc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052def5
        ;   Label: caseD_10
    CMP dword ptr [EAX],0x1             ; 0052def8
    JNZ 0x0052dac3                      ; 0052defb
        ;   XREF to: 0052dac3 (CONDITIONAL_JUMP)  ; LAB_0052dac3
    TEST EBX,EBX                        ; 0052df01
    JL 0x0052dac3                       ; 0052df03
        ;   XREF to: 0052dac3 (CONDITIONAL_JUMP)  ; LAB_0052dac3
    CMP dword ptr [EAX + 0x4],0x3       ; 0052df09
    JNZ 0x0052d1fc                      ; 0052df0d
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0052df13
    MOV EBX,dword ptr [ESI + 0x5]       ; 0052df1a
    CMP EBX,dword ptr [EAX + 0x48]      ; 0052df1d
    JLE 0x0052d1fc                      ; 0052df20
        ;   XREF to: 0052d1fc (CONDITIONAL_JUMP)  ; caseD_e
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0052df26
    MOV EDI,EDX                         ; 0052df2d
    MOV dword ptr [EDX + 0x48],EBX      ; 0052df2f
    MOV ECX,0xc                         ; 0052df32
    LEA EDI,[EDI + 0x4c]                ; 0052df37
    LEA ESI,[ESI + 0x9]                 ; 0052df3a
    MOVSD.REP ES:EDI,ESI                ; 0052df3d
    MOV ESP,EBP                         ; 0052df3f
    POP EBP                             ; 0052df41
    POP EDI                             ; 0052df42
    POP ESI                             ; 0052df43
    POP EBX                             ; 0052df44
    RET                                 ; 0052df45

