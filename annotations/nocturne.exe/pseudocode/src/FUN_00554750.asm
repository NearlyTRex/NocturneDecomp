; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00554750(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xe8]:4  local_e8
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
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005be368
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cae124
;   undefined4 DAT_01e57284
;
; Called Functions:
;   FUN_0040a200
;   FUN_0040a240
;   FUN_0040d890
;   FUN_00461090
;   FUN_0048b6b0
;   FUN_0048b6f0
;   FUN_00511750
;   FUN_00511780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554750
        ;   Label: FUN_00554750
    PUSH ESI                            ; 00554751
    PUSH EDI                            ; 00554752
    PUSH EBP                            ; 00554753
    MOV EBP,ESP                         ; 00554754
    SUB ESP,0xd8                        ; 00554756
    SUB EBP,0x7e                        ; 0055475c
    MOV EBX,dword ptr [EBP + 0x92]      ; 0055475f
    MOV EDX,dword ptr [0x005ae704]      ; 00554765 | DAT_005ae704
    PUSH EDX                            ; 0055476b | DAT_01b4d738
    CALL FUN_00461090                   ; 0055476c
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined FUN_00461090()
    ADD ESP,0x4                         ; 00554771
    TEST EAX,EAX                        ; 00554774
    JZ 0x00554781                       ; 00554776
        ;   XREF to: 00554781 (CONDITIONAL_JUMP)  ; LAB_00554781
    LEA ESP,[EBP + 0x7e]                ; 00554778
    POP EBP                             ; 0055477b
    POP EDI                             ; 0055477c
    POP ESI                             ; 0055477d
    POP EBX                             ; 0055477e
    NOP                                 ; 0055477f
    LEA EAX,[EBP + 0x4e]                ; 00554781
        ;   Label: LAB_00554781
    PUSH EAX                            ; 00554784
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00554785
    PUSH EBX                            ; 0055478b
    CALL dword ptr [EDX + 0xd8]         ; 0055478c
    ADD ESP,0x8                         ; 00554792
    PUSH EAX                            ; 00554795
    LEA EAX,[EBP + 0x66]                ; 00554796
    PUSH EAX                            ; 00554799
    PUSH EBX                            ; 0055479a
    CALL FUN_0040a240                   ; 0055479b
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 005547a0
    ADD ESP,0xc                         ; 005547a6
    MOV dword ptr [EBP + 0x7a],EAX      ; 005547a9
    LEA EAX,[EBP + 0x72]                ; 005547ac
    PUSH EAX                            ; 005547af
    LEA EAX,[EBP + 0x5a]                ; 005547b0
    PUSH EAX                            ; 005547b3
    XOR ECX,ECX                         ; 005547b4
    PUSH EBX                            ; 005547b6
    MOV dword ptr [EBP + 0x72],ECX      ; 005547b7
    MOV dword ptr [EBP + 0x76],ECX      ; 005547ba
    CALL FUN_0040a200                   ; 005547bd
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a200()
    ADD ESP,0xc                         ; 005547c2
    MOV EDI,dword ptr [0x005be368]      ; 005547c5 | DAT_005be368
    PUSH EDI                            ; 005547cb | DAT_01e57284
    CALL FUN_00511750                   ; 005547cc
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined FUN_00511750()
    ADD ESP,0x4                         ; 005547d1
    PUSH EBX                            ; 005547d4
    MOV EAX,[0x005be368]                ; 005547d5 | DAT_005be368
    PUSH EAX                            ; 005547da | DAT_01e57284
    CALL FUN_00511780                   ; 005547db
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined FUN_00511780()
    MOV EDX,dword ptr [EBX + 0x2fc]     ; 005547e0
    ADD ESP,0x8                         ; 005547e6
    TEST EDX,EDX                        ; 005547e9
    JZ 0x005547fd                       ; 005547eb
        ;   XREF to: 005547fd (CONDITIONAL_JUMP)  ; LAB_005547fd
    PUSH EDX                            ; 005547ed
    MOV ESI,dword ptr [0x005be368]      ; 005547ee | DAT_005be368
    PUSH ESI                            ; 005547f4 | DAT_01e57284
    CALL FUN_00511780                   ; 005547f5
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined FUN_00511780()
    ADD ESP,0x8                         ; 005547fa
    LEA EAX,[EBP + -0x6]                ; 005547fd
        ;   Label: LAB_005547fd
    PUSH EAX                            ; 00554800
    MOV EDI,0x1                         ; 00554801
    CALL FUN_0048b6b0                   ; 00554806
        ;   XREF to: 0048b6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048b6b0()
    MOV dword ptr [EBP + 0x2],EDI       ; 0055480b
    MOV EAX,dword ptr [EBX + 0x2ec]     ; 0055480e
    MOV dword ptr [EBP + 0x6],EAX       ; 00554814
    MOV EAX,dword ptr [EBX + 0x2f0]     ; 00554817
    MOV dword ptr [EBP + 0xa],EAX       ; 0055481d
    MOV EAX,dword ptr [EBX + 0x2f4]     ; 00554820
    ADD ESP,0x4                         ; 00554826
    MOV dword ptr [EBP + 0xe],EAX       ; 00554829
    MOV EAX,0x3f800000                  ; 0055482c
    MOV EDX,dword ptr [0x01cae124]      ; 00554831 | DAT_01cae124
    MOV dword ptr [EBP + -0x6],EAX      ; 00554837
    PUSH EDX                            ; 0055483a
    MOV ECX,dword ptr [EBX + 0x2fc]     ; 0055483b
    PUSH ECX                            ; 00554841
    CALL FUN_0040d890                   ; 00554842
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    XOR EBX,EBX                         ; 00554847
    ADD ESP,0x8                         ; 00554849
    TEST EAX,EAX                        ; 0055484c
    SETNZ AL                            ; 0055484e
    MOV BL,AL                           ; 00554851
    MOV EAX,dword ptr [EBP + -0x6]      ; 00554853
    MOV dword ptr [EBP + -0x5a],EAX     ; 00554856
    MOV EAX,dword ptr [EBP + -0x2]      ; 00554859
    MOV dword ptr [EBP + -0x56],EAX     ; 0055485c
    MOV EAX,dword ptr [EBP + 0x2]       ; 0055485f
    MOV dword ptr [EBP + -0x52],EAX     ; 00554862
    MOV EAX,dword ptr [EBP + 0x6]       ; 00554865
    MOV dword ptr [EBP + -0x4e],EAX     ; 00554868
    MOV EAX,dword ptr [EBP + 0xa]       ; 0055486b
    MOV dword ptr [EBP + -0x4a],EAX     ; 0055486e
    MOV EAX,dword ptr [EBP + 0xe]       ; 00554871
    MOV dword ptr [EBP + -0x46],EAX     ; 00554874
    MOV EAX,dword ptr [EBP + 0x1a]      ; 00554877
    MOV dword ptr [EBP + -0x3a],EAX     ; 0055487a
    MOV EAX,dword ptr [EBP + 0x1e]      ; 0055487d
    MOV dword ptr [EBP + -0x36],EAX     ; 00554880
    MOV EAX,dword ptr [EBP + 0x22]      ; 00554883
    MOV dword ptr [EBP + -0x32],EAX     ; 00554886
    MOV EAX,dword ptr [EBP + 0x26]      ; 00554889
    MOV dword ptr [EBP + -0x2e],EAX     ; 0055488c
    MOV EAX,dword ptr [EBP + 0x2a]      ; 0055488f
    MOV dword ptr [EBP + -0x2a],EAX     ; 00554892
    MOV EAX,dword ptr [EBP + 0x2e]      ; 00554895
    MOV dword ptr [EBP + -0x26],EAX     ; 00554898
    MOV EAX,dword ptr [EBP + 0x32]      ; 0055489b
    MOV dword ptr [EBP + -0x22],EAX     ; 0055489e
    MOV EAX,dword ptr [EBP + 0x36]      ; 005548a1
    MOV dword ptr [EBP + -0x1e],EAX     ; 005548a4
    MOV EAX,dword ptr [EBP + 0x3a]      ; 005548a7
    MOV dword ptr [EBP + -0x1a],EAX     ; 005548aa
    MOV EAX,dword ptr [EBP + 0x3e]      ; 005548ad
    MOV dword ptr [EBP + -0x16],EAX     ; 005548b0
    MOV EAX,dword ptr [EBP + 0x42]      ; 005548b3
    MOV dword ptr [EBP + -0x12],EAX     ; 005548b6
    MOV EAX,dword ptr [EBP + 0x46]      ; 005548b9
    MOV dword ptr [EBP + -0xe],EAX      ; 005548bc
    MOV EAX,dword ptr [EBP + 0x4a]      ; 005548bf
    PUSH 0x0                            ; 005548c2
    MOV dword ptr [EBP + -0xa],EAX      ; 005548c4
    LEA EAX,[EBP + -0x5a]               ; 005548c7
    PUSH EAX                            ; 005548ca
    LEA EAX,[EBP + 0x5a]                ; 005548cb
    PUSH EAX                            ; 005548ce
    LEA EAX,[EBP + 0x66]                ; 005548cf
    MOV dword ptr [EBP + 0x16],EDI      ; 005548d2
    PUSH EAX                            ; 005548d5
    MOV EAX,[0x005b80f0]                ; 005548d6 | DAT_005b80f0
    MOV dword ptr [EBP + -0x3e],EDI     ; 005548db
    PUSH EAX                            ; 005548de
    MOV dword ptr [EBP + 0x12],EBX      ; 005548df
    MOV dword ptr [EBP + -0x42],EBX     ; 005548e2
    CALL FUN_0048b6f0                   ; 005548e5
        ;   XREF to: 0048b6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048b6f0()
    ADD ESP,0x14                        ; 005548ea
    MOV EDX,dword ptr [0x005be368]      ; 005548ed | DAT_005be368
    PUSH EDX                            ; 005548f3 | DAT_01e57284
    CALL FUN_00511750                   ; 005548f4
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined FUN_00511750()
    ADD ESP,0x4                         ; 005548f9
    LEA ESP,[EBP + 0x7e]                ; 005548fc
    POP EBP                             ; 005548ff
    POP EDI                             ; 00554900
    POP ESI                             ; 00554901
    POP EBX                             ; 00554902
    RET                                 ; 00554903

