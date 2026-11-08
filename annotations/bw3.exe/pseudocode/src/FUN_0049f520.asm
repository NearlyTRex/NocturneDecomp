; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort FUN_0049f520(int *param_1)
;
; Local Variables:
; undefined        Stack[-0xe8]:1  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_004a1ad0 at 004a1dd7
;
; Referenced Globals:
;   undefined4 DAT_005c08f0
;   undefined4 DAT_005c08f8
;   undefined4 DAT_005df8e4
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fd8f4
;   undefined4 DAT_005fd984
;   undefined4 DAT_005fda14
;   undefined4 DAT_005fdaa4
;   undefined4 DAT_005fdb34
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b05c
;   ... and 15 more
;
; Called Functions:
;   FUN_0046c730
;   FUN_0046ce90
;   FUN_0046cf30
;   FUN_0046d250
;   FUN_0046d4b0
;   FUN_0046d4c0
;   FUN_0046e5e0
;   FUN_005632a3
;   FUN_0056356c
;   FUN_005a3120
;   FUN_005a35cc
;   thunk_FUN_004e5ef0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0049f520
        ;   Label: FUN_0049f520
    SUB ESP,0xe4                        ; 0049f521
    MOV EBP,dword ptr [ESP + 0xec]      ; 0049f527
    FLD float ptr [EBP + 0x14]          ; 0049f52e
    FLDZ                                ; 0049f531
    FCOMPP                              ; 0049f533
    FNSTSW AX                           ; 0049f535
    SAHF                                ; 0049f537
    JNC 0x0049f871                      ; 0049f538
        ;   XREF to: 0049f871 (CONDITIONAL_JUMP)  ; LAB_0049f871
    PUSH EDI                            ; 0049f53e
    PUSH ESI                            ; 0049f53f
    PUSH EBX                            ; 0049f540
    MOV EDX,dword ptr [EBP]             ; 0049f541
    CMP EDX,0x2                         ; 0049f544
    JZ 0x0049f881                       ; 0049f547
        ;   XREF to: 0049f881 (CONDITIONAL_JUMP)  ; LAB_0049f881
    CMP EDX,0x3                         ; 0049f54d
    JNZ 0x0049f8b0                      ; 0049f550
        ;   XREF to: 0049f8b0 (CONDITIONAL_JUMP)  ; LAB_0049f8b0
    CALL FUN_005a35cc                   ; 0049f556
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
    MOV EDX,EAX                         ; 0049f55b
    MOV EBX,0x6                         ; 0049f55d
    SAR EDX,0x1f                        ; 0049f562
    IDIV EBX                            ; 0049f565
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049f567
    SUB EAX,EDX                         ; 0049f56e
    SHL EAX,0x3                         ; 0049f570
    ADD EAX,0x5fda14                    ; 0049f573 | DAT_005fda14
    PUSH EAX                            ; 0049f578
    MOV ECX,dword ptr [0x005f2afc]      ; 0049f579 | DAT_005f2afc
    PUSH ECX                            ; 0049f57f | DAT_01bdd7e4
    CALL FUN_0046e5e0                   ; 0049f580
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
        ;   Label: LAB_0049f580
    ADD ESP,0x8                         ; 0049f585
    MOV ESI,0x4                         ; 0049f588
    MOV EAX,0x3                         ; 0049f58d
    XOR EDI,EDI                         ; 0049f592
    MOV dword ptr [ESP + 0x10],ESI      ; 0049f594
    MOV dword ptr [ESP + 0x20],EDI      ; 0049f598
    MOV dword ptr [ESP + 0x1c],EDI      ; 0049f59c
    MOV dword ptr [ESP + 0x18],EDI      ; 0049f5a0
    MOV dword ptr [ESP + 0x14],EDI      ; 0049f5a4
    MOV dword ptr [ESP + 0x24],EDI      ; 0049f5a8
    MOV dword ptr [ESP + 0x30],EAX      ; 0049f5ac
    MOV ESI,0x1                         ; 0049f5b0
    MOV EDI,0x2                         ; 0049f5b5
    MOV dword ptr [ESP + 0x28],ESI      ; 0049f5ba
    MOV dword ptr [ESP + 0x2c],EDI      ; 0049f5be
    CALL FUN_005a35cc                   ; 0049f5c2
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
    TEST AL,0x1                         ; 0049f5c7
    JZ 0x0049f946                       ; 0049f5c9
        ;   XREF to: 0049f946 (CONDITIONAL_JUMP)  ; LAB_0049f946
    MOV EBX,0x80000                     ; 0049f5cf
    MOV EDI,0xf80000                    ; 0049f5d4
    MOV dword ptr [0x0060b030],EBX      ; 0049f5d9 | DAT_0060b030
    MOV dword ptr [0x0060b05c],EDI      ; 0049f5df | DAT_0060b05c
    MOV dword ptr [0x0060b060],EBX      ; 0049f5e5 | DAT_0060b060
    MOV dword ptr [0x0060b08c],EDI      ; 0049f5eb | DAT_0060b08c
    MOV dword ptr [0x0060b090],EDI      ; 0049f5f1 | DAT_0060b090
    MOV dword ptr [0x0060b0bc],EBX      ; 0049f5f7 | DAT_0060b0bc
    MOV dword ptr [0x0060b0c0],EDI      ; 0049f5fd | DAT_0060b0c0
    MOV dword ptr [0x0060b02c],EBX      ; 0049f603 | DAT_0060b02c
    MOV EDI,0xffff                      ; 0049f609
        ;   Label: LAB_0049f609
    MOV dword ptr [0x0060b034],EDI      ; 0049f60e | DAT_0060b034
    MOV dword ptr [0x0060b038],EDI      ; 0049f614 | DAT_0060b038
    MOV dword ptr [0x0060b03c],EDI      ; 0049f61a | DAT_0060b03c
    MOV dword ptr [0x0060b064],EDI      ; 0049f620 | DAT_0060b064
    MOV dword ptr [0x0060b068],EDI      ; 0049f626 | DAT_0060b068
    MOV dword ptr [0x0060b06c],EDI      ; 0049f62c | DAT_0060b06c
    MOV dword ptr [0x0060b094],EDI      ; 0049f632 | DAT_0060b094
    MOV dword ptr [0x0060b098],EDI      ; 0049f638 | DAT_0060b098
    MOV dword ptr [0x0060b09c],EDI      ; 0049f63e | DAT_0060b09c
    MOV dword ptr [0x0060b0c4],EDI      ; 0049f644 | DAT_0060b0c4
    MOV dword ptr [0x0060b0c8],EDI      ; 0049f64a | DAT_0060b0c8
    MOV dword ptr [0x0060b0cc],EDI      ; 0049f650 | DAT_0060b0cc
    MOV EDI,dword ptr [EBP + 0x2c]      ; 0049f656
    PUSH EDI                            ; 0049f659
    MOV EAX,[0x005f2afc]                ; 0049f65a | DAT_005f2afc
    PUSH EAX                            ; 0049f65f | DAT_01bdd7e4
    CALL FUN_0046d4c0                   ; 0049f660
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4c0()
    ADD ESP,0x8                         ; 0049f665
    PUSH 0x1                            ; 0049f668
    MOV EDX,dword ptr [0x005f2afc]      ; 0049f66a | DAT_005f2afc
    PUSH EDX                            ; 0049f670 | DAT_01bdd7e4
    LEA ESI,[EBP + 0x4]                 ; 0049f671
    CALL FUN_0046d4b0                   ; 0049f674
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4b0()
    MOV ECX,dword ptr [EBP]             ; 0049f679
    ADD ESP,0x8                         ; 0049f67c
    TEST ECX,ECX                        ; 0049f67f
    JNZ 0x0049f991                      ; 0049f681
        ;   XREF to: 0049f991 (CONDITIONAL_JUMP)  ; LAB_0049f991
    PUSH ESI                            ; 0049f687
    MOV EBX,dword ptr [0x005f2afc]      ; 0049f688 | DAT_005f2afc
    PUSH EBX                            ; 0049f68e | DAT_01bdd7e4
    CALL FUN_0046ce90                   ; 0049f68f
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ce90()
    ADD ESP,0x8                         ; 0049f694
    MOV ESI,dword ptr [0x005f2afc]      ; 0049f697 | DAT_005f2afc
    PUSH ESI                            ; 0049f69d | DAT_01bdd7e4
    LEA ESI,[ESP + 0xd4]                ; 0049f69e
    LEA EDI,[ESP + 0xa4]                ; 0049f6a5
    CALL FUN_0046d250                   ; 0049f6ac
        ;   XREF to: 0046d250 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d250()
    LEA ESI,[ESP + 0xd4]                ; 0049f6b1
    ADD ESP,0x4                         ; 0049f6b8
    MOVSD ES:EDI,ESI                    ; 0049f6bb
    MOVSD ES:EDI,ESI                    ; 0049f6bc
    MOVSD ES:EDI,ESI                    ; 0049f6bd
    XOR EDI,EDI                         ; 0049f6be
    PUSH EDI                            ; 0049f6c0
    LEA EAX,[ESP + 0xa4]                ; 0049f6c1
    PUSH EAX                            ; 0049f6c8
    MOV EAX,[0x005f2afc]                ; 0049f6c9 | DAT_005f2afc
    PUSH EAX                            ; 0049f6ce | DAT_01bdd7e4
    MOV dword ptr [ESP + 0xac],EDI      ; 0049f6cf
    CALL FUN_0046cf30                   ; 0049f6d6
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cf30()
    ADD ESP,0xc                         ; 0049f6db
    MOV dword ptr [ESP + 0x70],EDI      ; 0049f6de
    MOV dword ptr [ESP + 0x74],EDI      ; 0049f6e2
    MOV dword ptr [ESP + 0x78],EDI      ; 0049f6e6
    FLD float ptr [EBP + 0x18]          ; 0049f6ea
    FLDZ                                ; 0049f6ed
    FCOMPP                              ; 0049f6ef
    FNSTSW AX                           ; 0049f6f1
    SAHF                                ; 0049f6f3
    JC 0x0049f985                       ; 0049f6f4
        ;   XREF to: 0049f985 (CONDITIONAL_JUMP)  ; LAB_0049f985
    FLD float ptr [EBP + 0x10]          ; 0049f6fa
    FMUL double ptr [0x005c08f8]        ; 0049f6fd | DAT_005c08f8
    FSTP float ptr [ESP + 0x70]         ; 0049f703
    MOV EAX,dword ptr [EBP + 0x10]      ; 0049f707
        ;   Label: LAB_0049f707
    LEA EBX,[ESP + 0xc4]                ; 0049f70a
    MOV dword ptr [ESP + 0x74],EAX      ; 0049f711
    LEA EAX,[ESP + 0x70]                ; 0049f715
    MOV EDX,dword ptr [0x005f2afc]      ; 0049f719 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049f71f
    FMUL float ptr [0x005df8e4]         ; 0049f721 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049f727
    FLD float ptr [EAX + 0x4]           ; 0049f729
    FMUL float ptr [0x005df8e4]         ; 0049f72c | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049f732
    FLD float ptr [EAX + 0x8]           ; 0049f735
    FMUL float ptr [0x005df8e4]         ; 0049f738 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049f73e
    LEA EAX,[ESP + 0xc4]                ; 0049f741
    PUSH EAX                            ; 0049f748
    MOV EAX,dword ptr [EDX]             ; 0049f749 | DAT_01bdd7e4
    PUSH EAX                            ; 0049f74b
    CALL FUN_005632a3                   ; 0049f74c
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0049f751
    MOV AH,byte ptr [ESP + 0x73]        ; 0049f754
    XOR AH,0x80                         ; 0049f758
    LEA EBX,[ESP + 0x34]                ; 0049f75b
    MOV byte ptr [ESP + 0x73],AH        ; 0049f75f
    LEA EAX,[ESP + 0x70]                ; 0049f763
    MOV EDX,dword ptr [0x005f2afc]      ; 0049f767 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049f76d
    FMUL float ptr [0x005df8e4]         ; 0049f76f | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049f775
    FLD float ptr [EAX + 0x4]           ; 0049f777
    FMUL float ptr [0x005df8e4]         ; 0049f77a | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049f780
    FLD float ptr [EAX + 0x8]           ; 0049f783
    FMUL float ptr [0x005df8e4]         ; 0049f786 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049f78c
    LEA EAX,[ESP + 0x34]                ; 0049f78f
    PUSH EAX                            ; 0049f793
    MOV EAX,dword ptr [EDX]             ; 0049f794 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0049f796
    PUSH EAX                            ; 0049f799
    XOR ESI,ESI                         ; 0049f79a
    CALL FUN_005632a3                   ; 0049f79c
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    LEA EBX,[ESP + 0x6c]                ; 0049f7a1
    LEA EAX,[ESP + 0x78]                ; 0049f7a5
    ADD ESP,0x8                         ; 0049f7a9
    MOV EDX,dword ptr [0x005f2afc]      ; 0049f7ac | DAT_005f2afc
    MOV dword ptr [ESP + 0x74],ESI      ; 0049f7b2
    FLD float ptr [EAX]                 ; 0049f7b6
    FMUL float ptr [0x005df8e4]         ; 0049f7b8 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049f7be
    FLD float ptr [EAX + 0x4]           ; 0049f7c0
    FMUL float ptr [0x005df8e4]         ; 0049f7c3 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049f7c9
    FLD float ptr [EAX + 0x8]           ; 0049f7cc
    FMUL float ptr [0x005df8e4]         ; 0049f7cf | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049f7d5
    LEA EAX,[ESP + 0x64]                ; 0049f7d8
    PUSH EAX                            ; 0049f7dc
    MOV EAX,dword ptr [EDX]             ; 0049f7dd | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0049f7df
    PUSH EAX                            ; 0049f7e2
    CALL FUN_005632a3                   ; 0049f7e3
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0049f7e8
    MOV DL,byte ptr [ESP + 0x73]        ; 0049f7eb
    LEA EBX,[ESP + 0x7c]                ; 0049f7ef
    XOR DL,0x80                         ; 0049f7f3
    LEA EAX,[ESP + 0x70]                ; 0049f7f6
    MOV byte ptr [ESP + 0x73],DL        ; 0049f7fa
    MOV EDX,dword ptr [0x005f2afc]      ; 0049f7fe | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049f804
    FMUL float ptr [0x005df8e4]         ; 0049f806 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049f80c
    FLD float ptr [EAX + 0x4]           ; 0049f80e
    FMUL float ptr [0x005df8e4]         ; 0049f811 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049f817
    FLD float ptr [EAX + 0x8]           ; 0049f81a
    FMUL float ptr [0x005df8e4]         ; 0049f81d | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049f823
    LEA EAX,[ESP + 0x7c]                ; 0049f826
    PUSH EAX                            ; 0049f82a
    MOV EAX,dword ptr [EDX]             ; 0049f82b | DAT_01bdd7e4
    ADD EAX,0x90                        ; 0049f82d
    PUSH EAX                            ; 0049f832
    CALL FUN_005632a3                   ; 0049f833
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0049f838
    LEA EAX,[ESP + 0xc]                 ; 0049f83b
    PUSH EAX                            ; 0049f83f
    MOV EDI,dword ptr [0x005f2afc]      ; 0049f840 | DAT_005f2afc
    PUSH EDI                            ; 0049f846 | DAT_01bdd7e4
    CALL FUN_0046c730                   ; 0049f847
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c730()
    ADD ESP,0x8                         ; 0049f84c
    MOV EBP,dword ptr [0x005f2afc]      ; 0049f84f | DAT_005f2afc
    PUSH EBP                            ; 0049f855 | DAT_01bdd7e4
    CALL thunk_FUN_004e5ef0             ; 0049f856
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 0049f85b
    PUSH 0x0                            ; 0049f85e
        ;   Label: LAB_0049f85e
    MOV EAX,[0x005f2afc]                ; 0049f860 | DAT_005f2afc
    PUSH EAX                            ; 0049f865 | DAT_01bdd7e4
    CALL FUN_0046d4b0                   ; 0049f866
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4b0()
    ADD ESP,0x8                         ; 0049f86b
    POP EBX                             ; 0049f86e
    POP ESI                             ; 0049f86f
    POP EDI                             ; 0049f870
    ADD ESP,0xe4                        ; 0049f871
        ;   Label: LAB_0049f871
    POP EBP                             ; 0049f877
    LEA EAX,[EAX]                       ; 0049f878
    MOV EDX,EDX                         ; 0049f87e
    RET                                 ; 0049f880
    CALL FUN_005a35cc                   ; 0049f881
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
        ;   Label: LAB_0049f881
    MOV EDX,EAX                         ; 0049f886
    MOV EBX,0x6                         ; 0049f888
    SAR EDX,0x1f                        ; 0049f88d
    IDIV EBX                            ; 0049f890
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049f892
    SUB EAX,EDX                         ; 0049f899
    SHL EAX,0x3                         ; 0049f89b
    ADD EAX,0x5fd984                    ; 0049f89e | DAT_005fd984
    PUSH EAX                            ; 0049f8a3
    MOV EBX,dword ptr [0x005f2afc]      ; 0049f8a4 | DAT_005f2afc
    PUSH EBX                            ; 0049f8aa | DAT_01bdd7e4
    JMP 0x0049f580                      ; 0049f8ab
        ;   XREF to: 0049f580 (UNCONDITIONAL_JUMP)  ; LAB_0049f580
    CMP EDX,0x4                         ; 0049f8b0
        ;   Label: LAB_0049f8b0
    JZ 0x0049f8e8                       ; 0049f8b3
        ;   XREF to: 0049f8e8 (CONDITIONAL_JUMP)  ; LAB_0049f8e8
    CMP EDX,0x5                         ; 0049f8b5
    JNZ 0x0049f917                      ; 0049f8b8
        ;   XREF to: 0049f917 (CONDITIONAL_JUMP)  ; LAB_0049f917
    CALL FUN_005a35cc                   ; 0049f8ba
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
    MOV EDX,EAX                         ; 0049f8bf
    MOV EBX,0x6                         ; 0049f8c1
    SAR EDX,0x1f                        ; 0049f8c6
    IDIV EBX                            ; 0049f8c9
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049f8cb
    SUB EAX,EDX                         ; 0049f8d2
    SHL EAX,0x3                         ; 0049f8d4
    ADD EAX,0x5fdb34                    ; 0049f8d7 | DAT_005fdb34
    PUSH EAX                            ; 0049f8dc
    MOV EAX,[0x005f2afc]                ; 0049f8dd | DAT_005f2afc
    PUSH EAX                            ; 0049f8e2 | DAT_01bdd7e4
    JMP 0x0049f580                      ; 0049f8e3
        ;   XREF to: 0049f580 (UNCONDITIONAL_JUMP)  ; LAB_0049f580
    CALL FUN_005a35cc                   ; 0049f8e8
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
        ;   Label: LAB_0049f8e8
    MOV EDX,EAX                         ; 0049f8ed
    MOV EBX,0x6                         ; 0049f8ef
    SAR EDX,0x1f                        ; 0049f8f4
    IDIV EBX                            ; 0049f8f7
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049f8f9
    SUB EAX,EDX                         ; 0049f900
    SHL EAX,0x3                         ; 0049f902
    ADD EAX,0x5fdaa4                    ; 0049f905 | DAT_005fdaa4
    PUSH EAX                            ; 0049f90a
    MOV EDX,dword ptr [0x005f2afc]      ; 0049f90b | DAT_005f2afc
    PUSH EDX                            ; 0049f911 | DAT_01bdd7e4
    JMP 0x0049f580                      ; 0049f912
        ;   XREF to: 0049f580 (UNCONDITIONAL_JUMP)  ; LAB_0049f580
    CALL FUN_005a35cc                   ; 0049f917
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
        ;   Label: LAB_0049f917
    MOV EDX,EAX                         ; 0049f91c
    MOV EBX,0x6                         ; 0049f91e
    SAR EDX,0x1f                        ; 0049f923
    IDIV EBX                            ; 0049f926
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049f928
    SUB EAX,EDX                         ; 0049f92f
    SHL EAX,0x3                         ; 0049f931
    ADD EAX,0x5fd8f4                    ; 0049f934 | DAT_005fd8f4
    PUSH EAX                            ; 0049f939
    MOV EDI,dword ptr [0x005f2afc]      ; 0049f93a | DAT_005f2afc
    PUSH EDI                            ; 0049f940 | DAT_01bdd7e4
    JMP 0x0049f580                      ; 0049f941
        ;   XREF to: 0049f580 (UNCONDITIONAL_JUMP)  ; LAB_0049f580
    MOV ECX,0x80000                     ; 0049f946
        ;   Label: LAB_0049f946
    MOV EDX,0xf80000                    ; 0049f94b
    MOV dword ptr [0x0060b030],ECX      ; 0049f950 | DAT_0060b030
    MOV dword ptr [0x0060b05c],ECX      ; 0049f956 | DAT_0060b05c
    MOV dword ptr [0x0060b060],ECX      ; 0049f95c | DAT_0060b060
    MOV dword ptr [0x0060b08c],ECX      ; 0049f962 | DAT_0060b08c
    MOV dword ptr [0x0060b090],EDX      ; 0049f968 | DAT_0060b090
    MOV dword ptr [0x0060b0bc],EDX      ; 0049f96e | DAT_0060b0bc
    MOV dword ptr [0x0060b0c0],EDX      ; 0049f974 | DAT_0060b0c0
    MOV dword ptr [0x0060b02c],EDX      ; 0049f97a | DAT_0060b02c
    JMP 0x0049f609                      ; 0049f980
        ;   XREF to: 0049f609 (UNCONDITIONAL_JUMP)  ; LAB_0049f609
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049f985
        ;   Label: LAB_0049f985
    MOV dword ptr [ESP + 0x70],EAX      ; 0049f988
    JMP 0x0049f707                      ; 0049f98c
        ;   XREF to: 0049f707 (UNCONDITIONAL_JUMP)  ; LAB_0049f707
    MOV EAX,[0x005f2afc]                ; 0049f991 | DAT_005f2afc
        ;   Label: LAB_0049f991
    LEA EBX,[ESP + 0x94]                ; 0049f996
    MOV EDX,dword ptr [EAX]             ; 0049f99d | DAT_01bdd7e4
    MOV EAX,ESI                         ; 0049f99f
    FLD float ptr [EAX]                 ; 0049f9a1
    FMUL float ptr [0x005df8e4]         ; 0049f9a3 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049f9a9
    FLD float ptr [EAX + 0x4]           ; 0049f9ab
    FMUL float ptr [0x005df8e4]         ; 0049f9ae | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049f9b4
    FLD float ptr [EAX + 0x8]           ; 0049f9b7
    FMUL float ptr [0x005df8e4]         ; 0049f9ba | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049f9c0
    LEA EAX,[ESP + 0x94]                ; 0049f9c3
    PUSH EAX                            ; 0049f9ca
    PUSH EDX                            ; 0049f9cb
    CALL FUN_0056356c                   ; 0049f9cc
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV EAX,[0x005f2afc]                ; 0049f9d1 | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 0049f9d6 | DAT_01bdd7e4
    ADD ESP,0x8                         ; 0049f9d8
    LEA EDX,[EAX + 0x30]                ; 0049f9db
    LEA EBX,[ESP + 0xac]                ; 0049f9de
    MOV EAX,ESI                         ; 0049f9e5
    FLD float ptr [EAX]                 ; 0049f9e7
    FMUL float ptr [0x005df8e4]         ; 0049f9e9 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049f9ef
    FLD float ptr [EAX + 0x4]           ; 0049f9f1
    FMUL float ptr [0x005df8e4]         ; 0049f9f4 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049f9fa
    FLD float ptr [EAX + 0x8]           ; 0049f9fd
    FMUL float ptr [0x005df8e4]         ; 0049fa00 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049fa06
    LEA EAX,[ESP + 0xac]                ; 0049fa09
    PUSH EAX                            ; 0049fa10
    PUSH EDX                            ; 0049fa11
    LEA EDI,[EBP + 0x1c]                ; 0049fa12
    CALL FUN_0056356c                   ; 0049fa15
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV EAX,[0x005f2afc]                ; 0049fa1a | DAT_005f2afc
    LEA EBX,[ESP + 0x54]                ; 0049fa1f
    ADD ESP,0x8                         ; 0049fa23
    MOV EDX,dword ptr [EAX]             ; 0049fa26 | DAT_01bdd7e4
    MOV EAX,EDI                         ; 0049fa28
    FLD float ptr [EAX]                 ; 0049fa2a
    FMUL float ptr [0x005df8e4]         ; 0049fa2c | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049fa32
    FLD float ptr [EAX + 0x4]           ; 0049fa34
    FMUL float ptr [0x005df8e4]         ; 0049fa37 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049fa3d
    FLD float ptr [EAX + 0x8]           ; 0049fa40
    FMUL float ptr [0x005df8e4]         ; 0049fa43 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049fa49
    LEA EAX,[ESP + 0x4c]                ; 0049fa4c
    PUSH EAX                            ; 0049fa50
    ADD EDX,0x60                        ; 0049fa51
    PUSH EDX                            ; 0049fa54
    CALL FUN_0056356c                   ; 0049fa55
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV EAX,[0x005f2afc]                ; 0049fa5a | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 0049fa5f | DAT_01bdd7e4
    ADD ESP,0x8                         ; 0049fa61
    LEA EDX,[EAX + 0x90]                ; 0049fa64
    LEA EBX,[ESP + 0xb8]                ; 0049fa6a
    MOV EAX,EDI                         ; 0049fa71
    FLD float ptr [EAX]                 ; 0049fa73
    FMUL float ptr [0x005df8e4]         ; 0049fa75 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049fa7b
    FLD float ptr [EAX + 0x4]           ; 0049fa7d
    FMUL float ptr [0x005df8e4]         ; 0049fa80 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049fa86
    FLD float ptr [EAX + 0x8]           ; 0049fa89
    FMUL float ptr [0x005df8e4]         ; 0049fa8c | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049fa92
    LEA EAX,[ESP + 0xb8]                ; 0049fa95
    PUSH EAX                            ; 0049fa9c
    PUSH EDX                            ; 0049fa9d
    CALL FUN_0056356c                   ; 0049fa9e
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    FLD float ptr [EBP + 0x28]          ; 0049faa3
    FLD float ptr [EBP + 0x18]          ; 0049faa6
    MOV EBP,dword ptr [0x005f2afc]      ; 0049faa9 | DAT_005f2afc
    FLD double ptr [0x005c08f0]         ; 0049faaf | DAT_005c08f0
    FXCH                                ; 0049fab5
    FMUL ST1                            ; 0049fab7
    MOV EAX,dword ptr [EBP]             ; 0049fab9 | DAT_01bdd7e4
    ADD ESP,0x8                         ; 0049fabc
    MOV dword ptr [EAX + 0x10],0x80000000 ; 0049fabf
    CALL FUN_005a3120                   ; 0049fac6
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    MOV EDX,dword ptr [EBP]             ; 0049facb | DAT_01bdd7e4
    FISTP dword ptr [ESP + 0xe8]        ; 0049face
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0049fad5
    SUB dword ptr [EDX + 0x4],EAX       ; 0049fadc
    MOV EAX,dword ptr [EBP]             ; 0049fadf | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x40],0x80000000 ; 0049fae2
    MOV EDX,dword ptr [EBP]             ; 0049fae9 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0049faec
    ADD dword ptr [EDX + 0x34],EAX      ; 0049faf3
    MOV EAX,dword ptr [EBP]             ; 0049faf6 | DAT_01bdd7e4
    FMULP                               ; 0049faf9
    MOV dword ptr [EAX + 0x70],0x80000000 ; 0049fafb
    CALL FUN_005a3120                   ; 0049fb02
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    MOV EDX,dword ptr [EBP]             ; 0049fb07 | DAT_01bdd7e4
    FISTP dword ptr [ESP + 0xec]        ; 0049fb0a
    MOV EAX,dword ptr [ESP + 0xec]      ; 0049fb11
    ADD dword ptr [EDX + 0x64],EAX      ; 0049fb18
    MOV EAX,dword ptr [EBP]             ; 0049fb1b | DAT_01bdd7e4
    MOV dword ptr [EAX + 0xa0],0x80000000 ; 0049fb1e
    MOV EDX,dword ptr [EBP]             ; 0049fb28 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0xec]      ; 0049fb2b
    MOV ECX,dword ptr [EDX + 0x94]      ; 0049fb32
    SUB ECX,EAX                         ; 0049fb38
    LEA EAX,[ESP + 0xc]                 ; 0049fb3a
    PUSH EAX                            ; 0049fb3e
    PUSH EBP                            ; 0049fb3f | DAT_01bdd7e4
    LEA EBX,[ESP + 0xe4]                ; 0049fb40
    MOV dword ptr [EDX + 0x94],ECX      ; 0049fb47
    CALL FUN_0046c730                   ; 0049fb4d
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c730()
    MOV EDX,dword ptr [0x005f2afc]      ; 0049fb52 | DAT_005f2afc
    ADD ESP,0x8                         ; 0049fb58
    MOV EAX,ESI                         ; 0049fb5b
    MOV EDX,dword ptr [EDX]             ; 0049fb5d | DAT_01bdd7e4
    FLD float ptr [EAX]                 ; 0049fb5f
    FMUL float ptr [0x005df8e4]         ; 0049fb61 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049fb67
    FLD float ptr [EAX + 0x4]           ; 0049fb69
    FMUL float ptr [0x005df8e4]         ; 0049fb6c | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049fb72
    FLD float ptr [EAX + 0x8]           ; 0049fb75
    FMUL float ptr [0x005df8e4]         ; 0049fb78 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049fb7e
    LEA EAX,[ESP + 0xdc]                ; 0049fb81
    PUSH EAX                            ; 0049fb88
    PUSH EDX                            ; 0049fb89
    CALL FUN_0056356c                   ; 0049fb8a
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV EAX,[0x005f2afc]                ; 0049fb8f | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 0049fb94 | DAT_01bdd7e4
    ADD ESP,0x8                         ; 0049fb96
    LEA EDX,[EAX + 0x30]                ; 0049fb99
    LEA EBX,[ESP + 0x40]                ; 0049fb9c
    MOV EAX,ESI                         ; 0049fba0
    FLD float ptr [EAX]                 ; 0049fba2
    FMUL float ptr [0x005df8e4]         ; 0049fba4 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049fbaa
    FLD float ptr [EAX + 0x4]           ; 0049fbac
    FMUL float ptr [0x005df8e4]         ; 0049fbaf | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049fbb5
    FLD float ptr [EAX + 0x8]           ; 0049fbb8
    FMUL float ptr [0x005df8e4]         ; 0049fbbb | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049fbc1
    LEA EAX,[ESP + 0x40]                ; 0049fbc4
    PUSH EAX                            ; 0049fbc8
    PUSH EDX                            ; 0049fbc9
    CALL FUN_0056356c                   ; 0049fbca
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV EAX,[0x005f2afc]                ; 0049fbcf | DAT_005f2afc
    LEA EBX,[ESP + 0x60]                ; 0049fbd4
    ADD ESP,0x8                         ; 0049fbd8
    MOV EDX,dword ptr [EAX]             ; 0049fbdb | DAT_01bdd7e4
    MOV EAX,EDI                         ; 0049fbdd
    FLD float ptr [EAX]                 ; 0049fbdf
    FMUL float ptr [0x005df8e4]         ; 0049fbe1 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049fbe7
    FLD float ptr [EAX + 0x4]           ; 0049fbe9
    FMUL float ptr [0x005df8e4]         ; 0049fbec | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049fbf2
    FLD float ptr [EAX + 0x8]           ; 0049fbf5
    FMUL float ptr [0x005df8e4]         ; 0049fbf8 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049fbfe
    LEA EAX,[ESP + 0x58]                ; 0049fc01
    PUSH EAX                            ; 0049fc05
    ADD EDX,0x60                        ; 0049fc06
    PUSH EDX                            ; 0049fc09
    CALL FUN_0056356c                   ; 0049fc0a
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV EAX,[0x005f2afc]                ; 0049fc0f | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 0049fc14 | DAT_01bdd7e4
    ADD ESP,0x8                         ; 0049fc16
    LEA EDX,[EAX + 0x90]                ; 0049fc19
    LEA EBX,[ESP + 0x88]                ; 0049fc1f
    MOV EAX,EDI                         ; 0049fc26
    FLD float ptr [EAX]                 ; 0049fc28
    FMUL float ptr [0x005df8e4]         ; 0049fc2a | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049fc30
    FLD float ptr [EAX + 0x4]           ; 0049fc32
    FMUL float ptr [0x005df8e4]         ; 0049fc35 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049fc3b
    FLD float ptr [EAX + 0x8]           ; 0049fc3e
    FMUL float ptr [0x005df8e4]         ; 0049fc41 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049fc47
    LEA EAX,[ESP + 0x88]                ; 0049fc4a
    PUSH EAX                            ; 0049fc51
    PUSH EDX                            ; 0049fc52
    CALL FUN_0056356c                   ; 0049fc53
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    ADD ESP,0x8                         ; 0049fc58
    MOV EBP,dword ptr [0x005f2afc]      ; 0049fc5b | DAT_005f2afc
    MOV EAX,dword ptr [EBP]             ; 0049fc61 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x10],0x80000000 ; 0049fc64
    MOV EDX,dword ptr [EBP]             ; 0049fc6b | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0049fc6e
    SUB dword ptr [EDX],EAX             ; 0049fc75
    MOV EAX,dword ptr [EBP]             ; 0049fc77 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x40],0x80000000 ; 0049fc7a
    MOV EDX,dword ptr [EBP]             ; 0049fc81 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0049fc84
    ADD dword ptr [EDX + 0x30],EAX      ; 0049fc8b
    MOV EAX,dword ptr [EBP]             ; 0049fc8e | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x70],0x80000000 ; 0049fc91
    MOV EDX,dword ptr [EBP]             ; 0049fc98 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0xec]      ; 0049fc9b
    ADD dword ptr [EDX + 0x60],EAX      ; 0049fca2
    MOV EAX,dword ptr [EBP]             ; 0049fca5 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0xa0],0x80000000 ; 0049fca8
    MOV EDX,dword ptr [EBP]             ; 0049fcb2 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0xec]      ; 0049fcb5
    MOV ECX,dword ptr [EDX + 0x90]      ; 0049fcbc
    SUB ECX,EAX                         ; 0049fcc2
    LEA EAX,[ESP + 0xc]                 ; 0049fcc4
    PUSH EAX                            ; 0049fcc8
    PUSH EBP                            ; 0049fcc9 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x90],ECX      ; 0049fcca
    CALL FUN_0046c730                   ; 0049fcd0
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c730()
    ADD ESP,0x8                         ; 0049fcd5
    JMP 0x0049f85e                      ; 0049fcd8
        ;   XREF to: 0049f85e (UNCONDITIONAL_JUMP)  ; LAB_0049f85e

