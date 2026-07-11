; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056a827(uint *param_1,char *param_2,uint param_3,uint param_4,char *param_5)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   FUN_0056a6dc at 0056a802
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056a827
        ;   Label: FUN_0056a827
    MOV EBP,ESP                         ; 0056a828
    PUSH EBX                            ; 0056a82a
    PUSH ESI                            ; 0056a82b
    PUSH EDI                            ; 0056a82c
    SUB ESP,0x4                         ; 0056a82d
    MOV EDX,dword ptr [EBP + 0x8]       ; 0056a830
    MOV ECX,dword ptr [EBP + 0x14]      ; 0056a833
    MOV EBX,dword ptr [EDX]             ; 0056a836
    MOV AH,byte ptr [EDX + 0x8]         ; 0056a838
    INC ECX                             ; 0056a83b
    MOV dword ptr [EBP + -0x10],EBX     ; 0056a83c
    MOV dword ptr [EBP + 0x14],ECX      ; 0056a83f
    XOR EBX,EBX                         ; 0056a842
    TEST AH,0x4                         ; 0056a844
    JZ 0x0056a86d                       ; 0056a847
        ;   XREF to: 0056a86d (CONDITIONAL_JUMP)  ; LAB_0056a86d
    MOV ESI,dword ptr [EBP + 0x10]      ; 0056a849
    CMP ESI,dword ptr [EBP + -0x10]     ; 0056a84c
    JGE 0x0056a859                      ; 0056a84f
        ;   XREF to: 0056a859 (CONDITIONAL_JUMP)  ; LAB_0056a859
    TEST AH,0x10                        ; 0056a851
    JNZ 0x0056a859                      ; 0056a854
        ;   XREF to: 0056a859 (CONDITIONAL_JUMP)  ; LAB_0056a859
    MOV dword ptr [EBP + -0x10],ESI     ; 0056a856
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056a859
        ;   Label: LAB_0056a859
    MOV EAX,dword ptr [EBP + -0x10]     ; 0056a85c
    SUB EAX,ESI                         ; 0056a85f
    MOV dword ptr [EBP + -0x10],EAX     ; 0056a861
    TEST EAX,EAX                        ; 0056a864
    JGE 0x0056a86d                      ; 0056a866
        ;   XREF to: 0056a86d (CONDITIONAL_JUMP)  ; LAB_0056a86d
    XOR ESI,ESI                         ; 0056a868
    MOV dword ptr [EBP + -0x10],ESI     ; 0056a86a
    MOV EDI,dword ptr [EBP + 0x14]      ; 0056a86d
        ;   Label: LAB_0056a86d
    TEST EDI,EDI                        ; 0056a870
    JG 0x0056a915                       ; 0056a872
        ;   XREF to: 0056a915 (CONDITIONAL_JUMP)  ; LAB_0056a915
    TEST byte ptr [EDX + 0x8],0x8       ; 0056a878
    JNZ 0x0056a8a1                      ; 0056a87c
        ;   XREF to: 0056a8a1 (CONDITIONAL_JUMP)  ; LAB_0056a8a1
    MOV ECX,dword ptr [EBP + 0x18]      ; 0056a87e
    MOV ESI,EBX                         ; 0056a881
    ADD ESI,ECX                         ; 0056a883
    MOV byte ptr [ESI],0x30             ; 0056a885
    MOV ESI,dword ptr [EBP + -0x10]     ; 0056a888
    INC EBX                             ; 0056a88b
    TEST ESI,ESI                        ; 0056a88c
    JG 0x0056a896                       ; 0056a88e
        ;   XREF to: 0056a896 (CONDITIONAL_JUMP)  ; LAB_0056a896
    TEST byte ptr [EDX + 0x8],0x10      ; 0056a890
    JZ 0x0056a8a1                       ; 0056a894
        ;   XREF to: 0056a8a1 (CONDITIONAL_JUMP)  ; LAB_0056a8a1
    MOV EAX,dword ptr [EBP + 0x18]      ; 0056a896
        ;   Label: LAB_0056a896
    MOV EDI,EBX                         ; 0056a899
    ADD EDI,EAX                         ; 0056a89b
    INC EBX                             ; 0056a89d
    MOV byte ptr [EDI],0x2e             ; 0056a89e
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056a8a1
        ;   Label: LAB_0056a8a1
    MOV ECX,dword ptr [EBP + -0x10]     ; 0056a8a4
    NEG ESI                             ; 0056a8a7
    MOV dword ptr [EDX + 0x1c],EBX      ; 0056a8a9
    CMP ESI,ECX                         ; 0056a8ac
    JLE 0x0056a8ba                      ; 0056a8ae
        ;   XREF to: 0056a8ba (CONDITIONAL_JUMP)  ; LAB_0056a8ba
    MOV ESI,ECX                         ; 0056a8b0
    MOV dword ptr [EBP + 0x14],ECX      ; 0056a8b2
    NEG ESI                             ; 0056a8b5
    MOV dword ptr [EBP + 0x14],ESI      ; 0056a8b7
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056a8ba
        ;   Label: LAB_0056a8ba
    MOV EAX,dword ptr [EBP + -0x10]     ; 0056a8bd
    MOV ECX,dword ptr [EBP + 0x10]      ; 0056a8c0
    MOV EDI,ESI                         ; 0056a8c3
    MOV dword ptr [EDX + 0x18],ESI      ; 0056a8c5
    ADD EAX,ESI                         ; 0056a8c8
    MOV dword ptr [EDX + 0x20],ESI      ; 0056a8ca
    NEG EDI                             ; 0056a8cd
    MOV dword ptr [EBP + -0x10],EAX     ; 0056a8cf
    MOV dword ptr [EDX + 0x20],EDI      ; 0056a8d2
    CMP EAX,ECX                         ; 0056a8d5
    JGE 0x0056a8dc                      ; 0056a8d7
        ;   XREF to: 0056a8dc (CONDITIONAL_JUMP)  ; LAB_0056a8dc
    MOV dword ptr [EBP + 0x10],EAX      ; 0056a8d9
    MOV EDI,dword ptr [EBP + 0x18]      ; 0056a8dc
        ;   Label: LAB_0056a8dc
    MOV ECX,dword ptr [EBP + 0x10]      ; 0056a8df
    MOV ESI,dword ptr [EBP + 0xc]       ; 0056a8e2
    ADD EDI,EBX                         ; 0056a8e5
    PUSH ES                             ; 0056a8e7
    MOV AX,DS                           ; 0056a8e8
    MOV ES,AX                           ; 0056a8ea
    PUSH EDI                            ; 0056a8ec
    MOV EAX,ECX                         ; 0056a8ed
    SHR ECX,0x2                         ; 0056a8ef
    MOVSD.REP ES:EDI,ESI                ; 0056a8f2
    MOV CL,AL                           ; 0056a8f4
    AND CL,0x3                          ; 0056a8f6
    MOVSB.REP ES:EDI,ESI                ; 0056a8f9
    POP EDI                             ; 0056a8fb
    POP ES                              ; 0056a8fc
    MOV ESI,dword ptr [EBP + 0x10]      ; 0056a8fd
    MOV EDI,dword ptr [EBP + 0x10]      ; 0056a900
    ADD EBX,ESI                         ; 0056a903
    MOV dword ptr [EDX + 0x24],ESI      ; 0056a905
    MOV ESI,dword ptr [EBP + -0x10]     ; 0056a908
    SUB ESI,EDI                         ; 0056a90b
    MOV dword ptr [EDX + 0x28],ESI      ; 0056a90d
        ;   Label: LAB_0056a90d
    JMP 0x0056aa18                      ; 0056a910
        ;   XREF to: 0056aa18 (UNCONDITIONAL_JUMP)  ; LAB_0056aa18
    MOV ESI,dword ptr [EBP + 0x10]      ; 0056a915
        ;   Label: LAB_0056a915
    CMP ESI,EDI                         ; 0056a918
    JGE 0x0056a97a                      ; 0056a91a
        ;   XREF to: 0056a97a (CONDITIONAL_JUMP)  ; LAB_0056a97a
    MOV EDI,dword ptr [EBP + 0x18]      ; 0056a91c
    MOV ECX,ESI                         ; 0056a91f
    MOV ESI,dword ptr [EBP + 0xc]       ; 0056a921
    PUSH ES                             ; 0056a924
    MOV AX,DS                           ; 0056a925
    MOV ES,AX                           ; 0056a927
    PUSH EDI                            ; 0056a929
    MOV EAX,ECX                         ; 0056a92a
    SHR ECX,0x2                         ; 0056a92c
    MOVSD.REP ES:EDI,ESI                ; 0056a92f
    MOV CL,AL                           ; 0056a931
    AND CL,0x3                          ; 0056a933
    MOVSB.REP ES:EDI,ESI                ; 0056a936
    POP EDI                             ; 0056a938
    POP ES                              ; 0056a939
    MOV EAX,dword ptr [EBP + 0x10]      ; 0056a93a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056a93d
    MOV dword ptr [EDX + 0x1c],EAX      ; 0056a940
    SUB ESI,EAX                         ; 0056a943
    MOV CL,byte ptr [EDX + 0x8]         ; 0056a945
    MOV dword ptr [EDX + 0x20],ESI      ; 0056a948
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056a94b
    ADD EBX,EAX                         ; 0056a94e
    MOV dword ptr [EDX + 0x18],ESI      ; 0056a950
    TEST CL,0x8                         ; 0056a953
    JNZ 0x0056a975                      ; 0056a956
        ;   XREF to: 0056a975 (CONDITIONAL_JUMP)  ; LAB_0056a975
    CMP dword ptr [EBP + -0x10],0x0     ; 0056a958
    JG 0x0056a963                       ; 0056a95c
        ;   XREF to: 0056a963 (CONDITIONAL_JUMP)  ; LAB_0056a963
    TEST CL,0x10                        ; 0056a95e
    JZ 0x0056a975                       ; 0056a961
        ;   XREF to: 0056a975 (CONDITIONAL_JUMP)  ; LAB_0056a975
    MOV EAX,dword ptr [EBP + 0x18]      ; 0056a963
        ;   Label: LAB_0056a963
    MOV EDI,EBX                         ; 0056a966
    ADD EDI,EAX                         ; 0056a968
    MOV byte ptr [EDI],0x2e             ; 0056a96a
    INC EBX                             ; 0056a96d
    MOV dword ptr [EDX + 0x24],0x1      ; 0056a96e
    MOV ESI,dword ptr [EBP + -0x10]     ; 0056a975
        ;   Label: LAB_0056a975
    JMP 0x0056a90d                      ; 0056a978
        ;   XREF to: 0056a90d (UNCONDITIONAL_JUMP)  ; LAB_0056a90d
    MOV ESI,dword ptr [EBP + 0xc]       ; 0056a97a
        ;   Label: LAB_0056a97a
    MOV ECX,EDI                         ; 0056a97d
    MOV EDI,dword ptr [EBP + 0x18]      ; 0056a97f
    PUSH ES                             ; 0056a982
    MOV AX,DS                           ; 0056a983
    MOV ES,AX                           ; 0056a985
    PUSH EDI                            ; 0056a987
    MOV EAX,ECX                         ; 0056a988
    SHR ECX,0x2                         ; 0056a98a
    MOVSD.REP ES:EDI,ESI                ; 0056a98d
    MOV CL,AL                           ; 0056a98f
    AND CL,0x3                          ; 0056a991
    MOVSB.REP ES:EDI,ESI                ; 0056a994
    POP EDI                             ; 0056a996
    POP ES                              ; 0056a997
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056a998
    MOV EDI,dword ptr [EBP + 0x10]      ; 0056a99b
    MOV CH,byte ptr [EDX + 0x8]         ; 0056a99e
    ADD EBX,ESI                         ; 0056a9a1
    SUB EDI,ESI                         ; 0056a9a3
    MOV dword ptr [EDX + 0x18],ESI      ; 0056a9a5
    MOV dword ptr [EBP + 0x10],EDI      ; 0056a9a8
    TEST CH,0x8                         ; 0056a9ab
    JNZ 0x0056a9c8                      ; 0056a9ae
        ;   XREF to: 0056a9c8 (CONDITIONAL_JUMP)  ; LAB_0056a9c8
    CMP dword ptr [EBP + -0x10],0x0     ; 0056a9b0
    JG 0x0056a9bb                       ; 0056a9b4
        ;   XREF to: 0056a9bb (CONDITIONAL_JUMP)  ; LAB_0056a9bb
    TEST CH,0x10                        ; 0056a9b6
    JZ 0x0056a9d7                       ; 0056a9b9
        ;   XREF to: 0056a9d7 (CONDITIONAL_JUMP)  ; LAB_0056a9d7
    MOV ECX,dword ptr [EBP + 0x18]      ; 0056a9bb
        ;   Label: LAB_0056a9bb
    MOV EDI,EBX                         ; 0056a9be
    ADD EDI,ECX                         ; 0056a9c0
    INC EBX                             ; 0056a9c2
    MOV byte ptr [EDI],0x2e             ; 0056a9c3
    JMP 0x0056a9d7                      ; 0056a9c6
        ;   XREF to: 0056a9d7 (UNCONDITIONAL_JUMP)  ; LAB_0056a9d7
    MOV ESI,dword ptr [EBP + 0x18]      ; 0056a9c8
        ;   Label: LAB_0056a9c8
    CMP byte ptr [ESI],0x30             ; 0056a9cb
    JNZ 0x0056a9d7                      ; 0056a9ce
        ;   XREF to: 0056a9d7 (CONDITIONAL_JUMP)  ; LAB_0056a9d7
    MOV dword ptr [EDX + 0x18],0x0      ; 0056a9d0
    MOV ESI,dword ptr [EBP + -0x10]     ; 0056a9d7
        ;   Label: LAB_0056a9d7
    CMP ESI,dword ptr [EBP + 0x10]      ; 0056a9da
    JGE 0x0056a9e2                      ; 0056a9dd
        ;   XREF to: 0056a9e2 (CONDITIONAL_JUMP)  ; LAB_0056a9e2
    MOV dword ptr [EBP + 0x10],ESI      ; 0056a9df
    MOV ESI,dword ptr [EBP + 0xc]       ; 0056a9e2
        ;   Label: LAB_0056a9e2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a9e5
    MOV EDI,dword ptr [EBP + 0x18]      ; 0056a9e8
    MOV ECX,dword ptr [EBP + 0x10]      ; 0056a9eb
    ADD ESI,EAX                         ; 0056a9ee
    ADD EDI,EBX                         ; 0056a9f0
    PUSH ES                             ; 0056a9f2
    MOV AX,DS                           ; 0056a9f3
    MOV ES,AX                           ; 0056a9f5
    PUSH EDI                            ; 0056a9f7
    MOV EAX,ECX                         ; 0056a9f8
    SHR ECX,0x2                         ; 0056a9fa
    MOVSD.REP ES:EDI,ESI                ; 0056a9fd
    MOV CL,AL                           ; 0056a9ff
    AND CL,0x3                          ; 0056aa01
    MOVSB.REP ES:EDI,ESI                ; 0056aa04
    POP EDI                             ; 0056aa06
    POP ES                              ; 0056aa07
    MOV ECX,dword ptr [EBP + 0x10]      ; 0056aa08
    MOV ESI,dword ptr [EBP + -0x10]     ; 0056aa0b
    ADD EBX,ECX                         ; 0056aa0e
    SUB ESI,ECX                         ; 0056aa10
    MOV dword ptr [EDX + 0x1c],EBX      ; 0056aa12
    MOV dword ptr [EDX + 0x20],ESI      ; 0056aa15
    ADD EBX,dword ptr [EBP + 0x18]      ; 0056aa18
        ;   Label: LAB_0056aa18
    MOV byte ptr [EBX],0x0              ; 0056aa1b
        ;   Label: LAB_0056aa1b
    LEA ESP,[EBP + -0xc]                ; 0056aa1e
        ;   Label: LAB_0056aa1e
    POP EDI                             ; 0056aa21
    POP ESI                             ; 0056aa22
    POP EBX                             ; 0056aa23
    POP EBP                             ; 0056aa24
    RET                                 ; 0056aa25

