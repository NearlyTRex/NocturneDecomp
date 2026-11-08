; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a7867(uint *param_1,char *param_2,uint param_3,uint param_4,char *param_5)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005a771c at 005a7842
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005a7867
        ;   Label: FUN_005a7867
    MOV EBP,ESP                         ; 005a7868
    PUSH EBX                            ; 005a786a
    PUSH ESI                            ; 005a786b
    PUSH EDI                            ; 005a786c
    SUB ESP,0x4                         ; 005a786d
    MOV EDX,dword ptr [EBP + 0x8]       ; 005a7870
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a7873
    MOV EBX,dword ptr [EDX]             ; 005a7876
    MOV AH,byte ptr [EDX + 0x8]         ; 005a7878
    INC ECX                             ; 005a787b
    MOV dword ptr [EBP + -0x10],EBX     ; 005a787c
    MOV dword ptr [EBP + 0x14],ECX      ; 005a787f
    XOR EBX,EBX                         ; 005a7882
    TEST AH,0x4                         ; 005a7884
    JZ 0x005a78ad                       ; 005a7887
        ;   XREF to: 005a78ad (CONDITIONAL_JUMP)  ; LAB_005a78ad
    MOV ESI,dword ptr [EBP + 0x10]      ; 005a7889
    CMP ESI,dword ptr [EBP + -0x10]     ; 005a788c
    JGE 0x005a7899                      ; 005a788f
        ;   XREF to: 005a7899 (CONDITIONAL_JUMP)  ; LAB_005a7899
    TEST AH,0x10                        ; 005a7891
    JNZ 0x005a7899                      ; 005a7894
        ;   XREF to: 005a7899 (CONDITIONAL_JUMP)  ; LAB_005a7899
    MOV dword ptr [EBP + -0x10],ESI     ; 005a7896
    MOV ESI,dword ptr [EBP + 0x14]      ; 005a7899
        ;   Label: LAB_005a7899
    MOV EAX,dword ptr [EBP + -0x10]     ; 005a789c
    SUB EAX,ESI                         ; 005a789f
    MOV dword ptr [EBP + -0x10],EAX     ; 005a78a1
    TEST EAX,EAX                        ; 005a78a4
    JGE 0x005a78ad                      ; 005a78a6
        ;   XREF to: 005a78ad (CONDITIONAL_JUMP)  ; LAB_005a78ad
    XOR ESI,ESI                         ; 005a78a8
    MOV dword ptr [EBP + -0x10],ESI     ; 005a78aa
    MOV EDI,dword ptr [EBP + 0x14]      ; 005a78ad
        ;   Label: LAB_005a78ad
    TEST EDI,EDI                        ; 005a78b0
    JG 0x005a7955                       ; 005a78b2
        ;   XREF to: 005a7955 (CONDITIONAL_JUMP)  ; LAB_005a7955
    TEST byte ptr [EDX + 0x8],0x8       ; 005a78b8
    JNZ 0x005a78e1                      ; 005a78bc
        ;   XREF to: 005a78e1 (CONDITIONAL_JUMP)  ; LAB_005a78e1
    MOV ECX,dword ptr [EBP + 0x18]      ; 005a78be
    MOV ESI,EBX                         ; 005a78c1
    ADD ESI,ECX                         ; 005a78c3
    MOV byte ptr [ESI],0x30             ; 005a78c5
    MOV ESI,dword ptr [EBP + -0x10]     ; 005a78c8
    INC EBX                             ; 005a78cb
    TEST ESI,ESI                        ; 005a78cc
    JG 0x005a78d6                       ; 005a78ce
        ;   XREF to: 005a78d6 (CONDITIONAL_JUMP)  ; LAB_005a78d6
    TEST byte ptr [EDX + 0x8],0x10      ; 005a78d0
    JZ 0x005a78e1                       ; 005a78d4
        ;   XREF to: 005a78e1 (CONDITIONAL_JUMP)  ; LAB_005a78e1
    MOV EAX,dword ptr [EBP + 0x18]      ; 005a78d6
        ;   Label: LAB_005a78d6
    MOV EDI,EBX                         ; 005a78d9
    ADD EDI,EAX                         ; 005a78db
    INC EBX                             ; 005a78dd
    MOV byte ptr [EDI],0x2e             ; 005a78de
    MOV ESI,dword ptr [EBP + 0x14]      ; 005a78e1
        ;   Label: LAB_005a78e1
    MOV ECX,dword ptr [EBP + -0x10]     ; 005a78e4
    NEG ESI                             ; 005a78e7
    MOV dword ptr [EDX + 0x1c],EBX      ; 005a78e9
    CMP ESI,ECX                         ; 005a78ec
    JLE 0x005a78fa                      ; 005a78ee
        ;   XREF to: 005a78fa (CONDITIONAL_JUMP)  ; LAB_005a78fa
    MOV ESI,ECX                         ; 005a78f0
    MOV dword ptr [EBP + 0x14],ECX      ; 005a78f2
    NEG ESI                             ; 005a78f5
    MOV dword ptr [EBP + 0x14],ESI      ; 005a78f7
    MOV ESI,dword ptr [EBP + 0x14]      ; 005a78fa
        ;   Label: LAB_005a78fa
    MOV EAX,dword ptr [EBP + -0x10]     ; 005a78fd
    MOV ECX,dword ptr [EBP + 0x10]      ; 005a7900
    MOV EDI,ESI                         ; 005a7903
    MOV dword ptr [EDX + 0x18],ESI      ; 005a7905
    ADD EAX,ESI                         ; 005a7908
    MOV dword ptr [EDX + 0x20],ESI      ; 005a790a
    NEG EDI                             ; 005a790d
    MOV dword ptr [EBP + -0x10],EAX     ; 005a790f
    MOV dword ptr [EDX + 0x20],EDI      ; 005a7912
    CMP EAX,ECX                         ; 005a7915
    JGE 0x005a791c                      ; 005a7917
        ;   XREF to: 005a791c (CONDITIONAL_JUMP)  ; LAB_005a791c
    MOV dword ptr [EBP + 0x10],EAX      ; 005a7919
    MOV EDI,dword ptr [EBP + 0x18]      ; 005a791c
        ;   Label: LAB_005a791c
    MOV ECX,dword ptr [EBP + 0x10]      ; 005a791f
    MOV ESI,dword ptr [EBP + 0xc]       ; 005a7922
    ADD EDI,EBX                         ; 005a7925
    PUSH ES                             ; 005a7927
    MOV AX,DS                           ; 005a7928
    MOV ES,AX                           ; 005a792a
    PUSH EDI                            ; 005a792c
    MOV EAX,ECX                         ; 005a792d
    SHR ECX,0x2                         ; 005a792f
    MOVSD.REP ES:EDI,ESI                ; 005a7932
    MOV CL,AL                           ; 005a7934
    AND CL,0x3                          ; 005a7936
    MOVSB.REP ES:EDI,ESI                ; 005a7939
    POP EDI                             ; 005a793b
    POP ES                              ; 005a793c
    MOV ESI,dword ptr [EBP + 0x10]      ; 005a793d
    MOV EDI,dword ptr [EBP + 0x10]      ; 005a7940
    ADD EBX,ESI                         ; 005a7943
    MOV dword ptr [EDX + 0x24],ESI      ; 005a7945
    MOV ESI,dword ptr [EBP + -0x10]     ; 005a7948
    SUB ESI,EDI                         ; 005a794b
    MOV dword ptr [EDX + 0x28],ESI      ; 005a794d
        ;   Label: LAB_005a794d
    JMP 0x005a7a58                      ; 005a7950
        ;   XREF to: 005a7a58 (UNCONDITIONAL_JUMP)  ; LAB_005a7a58
    MOV ESI,dword ptr [EBP + 0x10]      ; 005a7955
        ;   Label: LAB_005a7955
    CMP ESI,EDI                         ; 005a7958
    JGE 0x005a79ba                      ; 005a795a
        ;   XREF to: 005a79ba (CONDITIONAL_JUMP)  ; LAB_005a79ba
    MOV EDI,dword ptr [EBP + 0x18]      ; 005a795c
    MOV ECX,ESI                         ; 005a795f
    MOV ESI,dword ptr [EBP + 0xc]       ; 005a7961
    PUSH ES                             ; 005a7964
    MOV AX,DS                           ; 005a7965
    MOV ES,AX                           ; 005a7967
    PUSH EDI                            ; 005a7969
    MOV EAX,ECX                         ; 005a796a
    SHR ECX,0x2                         ; 005a796c
    MOVSD.REP ES:EDI,ESI                ; 005a796f
    MOV CL,AL                           ; 005a7971
    AND CL,0x3                          ; 005a7973
    MOVSB.REP ES:EDI,ESI                ; 005a7976
    POP EDI                             ; 005a7978
    POP ES                              ; 005a7979
    MOV EAX,dword ptr [EBP + 0x10]      ; 005a797a
    MOV ESI,dword ptr [EBP + 0x14]      ; 005a797d
    MOV dword ptr [EDX + 0x1c],EAX      ; 005a7980
    SUB ESI,EAX                         ; 005a7983
    MOV CL,byte ptr [EDX + 0x8]         ; 005a7985
    MOV dword ptr [EDX + 0x20],ESI      ; 005a7988
    MOV ESI,dword ptr [EBP + 0x14]      ; 005a798b
    ADD EBX,EAX                         ; 005a798e
    MOV dword ptr [EDX + 0x18],ESI      ; 005a7990
    TEST CL,0x8                         ; 005a7993
    JNZ 0x005a79b5                      ; 005a7996
        ;   XREF to: 005a79b5 (CONDITIONAL_JUMP)  ; LAB_005a79b5
    CMP dword ptr [EBP + -0x10],0x0     ; 005a7998
    JG 0x005a79a3                       ; 005a799c
        ;   XREF to: 005a79a3 (CONDITIONAL_JUMP)  ; LAB_005a79a3
    TEST CL,0x10                        ; 005a799e
    JZ 0x005a79b5                       ; 005a79a1
        ;   XREF to: 005a79b5 (CONDITIONAL_JUMP)  ; LAB_005a79b5
    MOV EAX,dword ptr [EBP + 0x18]      ; 005a79a3
        ;   Label: LAB_005a79a3
    MOV EDI,EBX                         ; 005a79a6
    ADD EDI,EAX                         ; 005a79a8
    MOV byte ptr [EDI],0x2e             ; 005a79aa
    INC EBX                             ; 005a79ad
    MOV dword ptr [EDX + 0x24],0x1      ; 005a79ae
    MOV ESI,dword ptr [EBP + -0x10]     ; 005a79b5
        ;   Label: LAB_005a79b5
    JMP 0x005a794d                      ; 005a79b8
        ;   XREF to: 005a794d (UNCONDITIONAL_JUMP)  ; LAB_005a794d
    MOV ESI,dword ptr [EBP + 0xc]       ; 005a79ba
        ;   Label: LAB_005a79ba
    MOV ECX,EDI                         ; 005a79bd
    MOV EDI,dword ptr [EBP + 0x18]      ; 005a79bf
    PUSH ES                             ; 005a79c2
    MOV AX,DS                           ; 005a79c3
    MOV ES,AX                           ; 005a79c5
    PUSH EDI                            ; 005a79c7
    MOV EAX,ECX                         ; 005a79c8
    SHR ECX,0x2                         ; 005a79ca
    MOVSD.REP ES:EDI,ESI                ; 005a79cd
    MOV CL,AL                           ; 005a79cf
    AND CL,0x3                          ; 005a79d1
    MOVSB.REP ES:EDI,ESI                ; 005a79d4
    POP EDI                             ; 005a79d6
    POP ES                              ; 005a79d7
    MOV ESI,dword ptr [EBP + 0x14]      ; 005a79d8
    MOV EDI,dword ptr [EBP + 0x10]      ; 005a79db
    MOV CH,byte ptr [EDX + 0x8]         ; 005a79de
    ADD EBX,ESI                         ; 005a79e1
    SUB EDI,ESI                         ; 005a79e3
    MOV dword ptr [EDX + 0x18],ESI      ; 005a79e5
    MOV dword ptr [EBP + 0x10],EDI      ; 005a79e8
    TEST CH,0x8                         ; 005a79eb
    JNZ 0x005a7a08                      ; 005a79ee
        ;   XREF to: 005a7a08 (CONDITIONAL_JUMP)  ; LAB_005a7a08
    CMP dword ptr [EBP + -0x10],0x0     ; 005a79f0
    JG 0x005a79fb                       ; 005a79f4
        ;   XREF to: 005a79fb (CONDITIONAL_JUMP)  ; LAB_005a79fb
    TEST CH,0x10                        ; 005a79f6
    JZ 0x005a7a17                       ; 005a79f9
        ;   XREF to: 005a7a17 (CONDITIONAL_JUMP)  ; LAB_005a7a17
    MOV ECX,dword ptr [EBP + 0x18]      ; 005a79fb
        ;   Label: LAB_005a79fb
    MOV EDI,EBX                         ; 005a79fe
    ADD EDI,ECX                         ; 005a7a00
    INC EBX                             ; 005a7a02
    MOV byte ptr [EDI],0x2e             ; 005a7a03
    JMP 0x005a7a17                      ; 005a7a06
        ;   XREF to: 005a7a17 (UNCONDITIONAL_JUMP)  ; LAB_005a7a17
    MOV ESI,dword ptr [EBP + 0x18]      ; 005a7a08
        ;   Label: LAB_005a7a08
    CMP byte ptr [ESI],0x30             ; 005a7a0b
    JNZ 0x005a7a17                      ; 005a7a0e
        ;   XREF to: 005a7a17 (CONDITIONAL_JUMP)  ; LAB_005a7a17
    MOV dword ptr [EDX + 0x18],0x0      ; 005a7a10
    MOV ESI,dword ptr [EBP + -0x10]     ; 005a7a17
        ;   Label: LAB_005a7a17
    CMP ESI,dword ptr [EBP + 0x10]      ; 005a7a1a
    JGE 0x005a7a22                      ; 005a7a1d
        ;   XREF to: 005a7a22 (CONDITIONAL_JUMP)  ; LAB_005a7a22
    MOV dword ptr [EBP + 0x10],ESI      ; 005a7a1f
    MOV ESI,dword ptr [EBP + 0xc]       ; 005a7a22
        ;   Label: LAB_005a7a22
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a7a25
    MOV EDI,dword ptr [EBP + 0x18]      ; 005a7a28
    MOV ECX,dword ptr [EBP + 0x10]      ; 005a7a2b
    ADD ESI,EAX                         ; 005a7a2e
    ADD EDI,EBX                         ; 005a7a30
    PUSH ES                             ; 005a7a32
    MOV AX,DS                           ; 005a7a33
    MOV ES,AX                           ; 005a7a35
    PUSH EDI                            ; 005a7a37
    MOV EAX,ECX                         ; 005a7a38
    SHR ECX,0x2                         ; 005a7a3a
    MOVSD.REP ES:EDI,ESI                ; 005a7a3d
    MOV CL,AL                           ; 005a7a3f
    AND CL,0x3                          ; 005a7a41
    MOVSB.REP ES:EDI,ESI                ; 005a7a44
    POP EDI                             ; 005a7a46
    POP ES                              ; 005a7a47
    MOV ECX,dword ptr [EBP + 0x10]      ; 005a7a48
    MOV ESI,dword ptr [EBP + -0x10]     ; 005a7a4b
    ADD EBX,ECX                         ; 005a7a4e
    SUB ESI,ECX                         ; 005a7a50
    MOV dword ptr [EDX + 0x1c],EBX      ; 005a7a52
    MOV dword ptr [EDX + 0x20],ESI      ; 005a7a55
    ADD EBX,dword ptr [EBP + 0x18]      ; 005a7a58
        ;   Label: LAB_005a7a58
    MOV byte ptr [EBX],0x0              ; 005a7a5b
        ;   Label: LAB_005a7a5b

