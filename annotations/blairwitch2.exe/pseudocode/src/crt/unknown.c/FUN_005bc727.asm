; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bc727(uint *param_1,char *param_2,uint param_3,uint param_4,char *param_5)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005bc5dc at 005bc702
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005bc727
        ;   Label: crt_unknown.c_FUN_005bc727
    MOV EBP,ESP                         ; 005bc728
    PUSH EBX                            ; 005bc72a
    PUSH ESI                            ; 005bc72b
    PUSH EDI                            ; 005bc72c
    SUB ESP,0x4                         ; 005bc72d
    MOV EDX,dword ptr [EBP + 0x8]       ; 005bc730
    MOV ECX,dword ptr [EBP + 0x14]      ; 005bc733
    MOV EBX,dword ptr [EDX]             ; 005bc736
    MOV AH,byte ptr [EDX + 0x8]         ; 005bc738
    INC ECX                             ; 005bc73b
    MOV dword ptr [EBP + -0x10],EBX     ; 005bc73c
    MOV dword ptr [EBP + 0x14],ECX      ; 005bc73f
    XOR EBX,EBX                         ; 005bc742
    TEST AH,0x4                         ; 005bc744
    JZ 0x005bc76d                       ; 005bc747
        ;   XREF to: 005bc76d (CONDITIONAL_JUMP)  ; LAB_005bc76d
    MOV ESI,dword ptr [EBP + 0x10]      ; 005bc749
    CMP ESI,dword ptr [EBP + -0x10]     ; 005bc74c
    JGE 0x005bc759                      ; 005bc74f
        ;   XREF to: 005bc759 (CONDITIONAL_JUMP)  ; LAB_005bc759
    TEST AH,0x10                        ; 005bc751
    JNZ 0x005bc759                      ; 005bc754
        ;   XREF to: 005bc759 (CONDITIONAL_JUMP)  ; LAB_005bc759
    MOV dword ptr [EBP + -0x10],ESI     ; 005bc756
    MOV ESI,dword ptr [EBP + 0x14]      ; 005bc759
        ;   Label: LAB_005bc759
    MOV EAX,dword ptr [EBP + -0x10]     ; 005bc75c
    SUB EAX,ESI                         ; 005bc75f
    MOV dword ptr [EBP + -0x10],EAX     ; 005bc761
    TEST EAX,EAX                        ; 005bc764
    JGE 0x005bc76d                      ; 005bc766
        ;   XREF to: 005bc76d (CONDITIONAL_JUMP)  ; LAB_005bc76d
    XOR ESI,ESI                         ; 005bc768
    MOV dword ptr [EBP + -0x10],ESI     ; 005bc76a
    MOV EDI,dword ptr [EBP + 0x14]      ; 005bc76d
        ;   Label: LAB_005bc76d
    TEST EDI,EDI                        ; 005bc770
    JG 0x005bc815                       ; 005bc772
        ;   XREF to: 005bc815 (CONDITIONAL_JUMP)  ; LAB_005bc815
    TEST byte ptr [EDX + 0x8],0x8       ; 005bc778
    JNZ 0x005bc7a1                      ; 005bc77c
        ;   XREF to: 005bc7a1 (CONDITIONAL_JUMP)  ; LAB_005bc7a1
    MOV ECX,dword ptr [EBP + 0x18]      ; 005bc77e
    MOV ESI,EBX                         ; 005bc781
    ADD ESI,ECX                         ; 005bc783
    MOV byte ptr [ESI],0x30             ; 005bc785
    MOV ESI,dword ptr [EBP + -0x10]     ; 005bc788
    INC EBX                             ; 005bc78b
    TEST ESI,ESI                        ; 005bc78c
    JG 0x005bc796                       ; 005bc78e
        ;   XREF to: 005bc796 (CONDITIONAL_JUMP)  ; LAB_005bc796
    TEST byte ptr [EDX + 0x8],0x10      ; 005bc790
    JZ 0x005bc7a1                       ; 005bc794
        ;   XREF to: 005bc7a1 (CONDITIONAL_JUMP)  ; LAB_005bc7a1
    MOV EAX,dword ptr [EBP + 0x18]      ; 005bc796
        ;   Label: LAB_005bc796
    MOV EDI,EBX                         ; 005bc799
    ADD EDI,EAX                         ; 005bc79b
    INC EBX                             ; 005bc79d
    MOV byte ptr [EDI],0x2e             ; 005bc79e
    MOV ESI,dword ptr [EBP + 0x14]      ; 005bc7a1
        ;   Label: LAB_005bc7a1
    MOV ECX,dword ptr [EBP + -0x10]     ; 005bc7a4
    NEG ESI                             ; 005bc7a7
    MOV dword ptr [EDX + 0x1c],EBX      ; 005bc7a9
    CMP ESI,ECX                         ; 005bc7ac
    JLE 0x005bc7ba                      ; 005bc7ae
        ;   XREF to: 005bc7ba (CONDITIONAL_JUMP)  ; LAB_005bc7ba
    MOV ESI,ECX                         ; 005bc7b0
    MOV dword ptr [EBP + 0x14],ECX      ; 005bc7b2
    NEG ESI                             ; 005bc7b5
    MOV dword ptr [EBP + 0x14],ESI      ; 005bc7b7
    MOV ESI,dword ptr [EBP + 0x14]      ; 005bc7ba
        ;   Label: LAB_005bc7ba
    MOV EAX,dword ptr [EBP + -0x10]     ; 005bc7bd
    MOV ECX,dword ptr [EBP + 0x10]      ; 005bc7c0
    MOV EDI,ESI                         ; 005bc7c3
    MOV dword ptr [EDX + 0x18],ESI      ; 005bc7c5
    ADD EAX,ESI                         ; 005bc7c8
    MOV dword ptr [EDX + 0x20],ESI      ; 005bc7ca
    NEG EDI                             ; 005bc7cd
    MOV dword ptr [EBP + -0x10],EAX     ; 005bc7cf
    MOV dword ptr [EDX + 0x20],EDI      ; 005bc7d2
    CMP EAX,ECX                         ; 005bc7d5
    JGE 0x005bc7dc                      ; 005bc7d7
        ;   XREF to: 005bc7dc (CONDITIONAL_JUMP)  ; LAB_005bc7dc
    MOV dword ptr [EBP + 0x10],EAX      ; 005bc7d9
    MOV EDI,dword ptr [EBP + 0x18]      ; 005bc7dc
        ;   Label: LAB_005bc7dc
    MOV ECX,dword ptr [EBP + 0x10]      ; 005bc7df
    MOV ESI,dword ptr [EBP + 0xc]       ; 005bc7e2
    ADD EDI,EBX                         ; 005bc7e5
    PUSH ES                             ; 005bc7e7
    MOV AX,DS                           ; 005bc7e8
    MOV ES,AX                           ; 005bc7ea
    PUSH EDI                            ; 005bc7ec
    MOV EAX,ECX                         ; 005bc7ed
    SHR ECX,0x2                         ; 005bc7ef
    MOVSD.REP ES:EDI,ESI                ; 005bc7f2
    MOV CL,AL                           ; 005bc7f4
    AND CL,0x3                          ; 005bc7f6
    MOVSB.REP ES:EDI,ESI                ; 005bc7f9
    POP EDI                             ; 005bc7fb
    POP ES                              ; 005bc7fc
    MOV ESI,dword ptr [EBP + 0x10]      ; 005bc7fd
    MOV EDI,dword ptr [EBP + 0x10]      ; 005bc800
    ADD EBX,ESI                         ; 005bc803
    MOV dword ptr [EDX + 0x24],ESI      ; 005bc805
    MOV ESI,dword ptr [EBP + -0x10]     ; 005bc808
    SUB ESI,EDI                         ; 005bc80b
    MOV dword ptr [EDX + 0x28],ESI      ; 005bc80d
        ;   Label: LAB_005bc80d
    JMP 0x005bc918                      ; 005bc810
        ;   XREF to: 005bc918 (UNCONDITIONAL_JUMP)  ; LAB_005bc918
    MOV ESI,dword ptr [EBP + 0x10]      ; 005bc815
        ;   Label: LAB_005bc815
    CMP ESI,EDI                         ; 005bc818
    JGE 0x005bc87a                      ; 005bc81a
        ;   XREF to: 005bc87a (CONDITIONAL_JUMP)  ; LAB_005bc87a
    MOV EDI,dword ptr [EBP + 0x18]      ; 005bc81c
    MOV ECX,ESI                         ; 005bc81f
    MOV ESI,dword ptr [EBP + 0xc]       ; 005bc821
    PUSH ES                             ; 005bc824
    MOV AX,DS                           ; 005bc825
    MOV ES,AX                           ; 005bc827
    PUSH EDI                            ; 005bc829
    MOV EAX,ECX                         ; 005bc82a
    SHR ECX,0x2                         ; 005bc82c
    MOVSD.REP ES:EDI,ESI                ; 005bc82f
    MOV CL,AL                           ; 005bc831
    AND CL,0x3                          ; 005bc833
    MOVSB.REP ES:EDI,ESI                ; 005bc836
    POP EDI                             ; 005bc838
    POP ES                              ; 005bc839
    MOV EAX,dword ptr [EBP + 0x10]      ; 005bc83a
    MOV ESI,dword ptr [EBP + 0x14]      ; 005bc83d
    MOV dword ptr [EDX + 0x1c],EAX      ; 005bc840
    SUB ESI,EAX                         ; 005bc843
    MOV CL,byte ptr [EDX + 0x8]         ; 005bc845
    MOV dword ptr [EDX + 0x20],ESI      ; 005bc848
    MOV ESI,dword ptr [EBP + 0x14]      ; 005bc84b
    ADD EBX,EAX                         ; 005bc84e
    MOV dword ptr [EDX + 0x18],ESI      ; 005bc850
    TEST CL,0x8                         ; 005bc853
    JNZ 0x005bc875                      ; 005bc856
        ;   XREF to: 005bc875 (CONDITIONAL_JUMP)  ; LAB_005bc875
    CMP dword ptr [EBP + -0x10],0x0     ; 005bc858
    JG 0x005bc863                       ; 005bc85c
        ;   XREF to: 005bc863 (CONDITIONAL_JUMP)  ; LAB_005bc863
    TEST CL,0x10                        ; 005bc85e
    JZ 0x005bc875                       ; 005bc861
        ;   XREF to: 005bc875 (CONDITIONAL_JUMP)  ; LAB_005bc875
    MOV EAX,dword ptr [EBP + 0x18]      ; 005bc863
        ;   Label: LAB_005bc863
    MOV EDI,EBX                         ; 005bc866
    ADD EDI,EAX                         ; 005bc868
    MOV byte ptr [EDI],0x2e             ; 005bc86a
    INC EBX                             ; 005bc86d
    MOV dword ptr [EDX + 0x24],0x1      ; 005bc86e
    MOV ESI,dword ptr [EBP + -0x10]     ; 005bc875
        ;   Label: LAB_005bc875
    JMP 0x005bc80d                      ; 005bc878
        ;   XREF to: 005bc80d (UNCONDITIONAL_JUMP)  ; LAB_005bc80d
    MOV ESI,dword ptr [EBP + 0xc]       ; 005bc87a
        ;   Label: LAB_005bc87a
    MOV ECX,EDI                         ; 005bc87d
    MOV EDI,dword ptr [EBP + 0x18]      ; 005bc87f
    PUSH ES                             ; 005bc882
    MOV AX,DS                           ; 005bc883
    MOV ES,AX                           ; 005bc885
    PUSH EDI                            ; 005bc887
    MOV EAX,ECX                         ; 005bc888
    SHR ECX,0x2                         ; 005bc88a
    MOVSD.REP ES:EDI,ESI                ; 005bc88d
    MOV CL,AL                           ; 005bc88f
    AND CL,0x3                          ; 005bc891
    MOVSB.REP ES:EDI,ESI                ; 005bc894
    POP EDI                             ; 005bc896
    POP ES                              ; 005bc897
    MOV ESI,dword ptr [EBP + 0x14]      ; 005bc898
    MOV EDI,dword ptr [EBP + 0x10]      ; 005bc89b
    MOV CH,byte ptr [EDX + 0x8]         ; 005bc89e
    ADD EBX,ESI                         ; 005bc8a1
    SUB EDI,ESI                         ; 005bc8a3
    MOV dword ptr [EDX + 0x18],ESI      ; 005bc8a5
    MOV dword ptr [EBP + 0x10],EDI      ; 005bc8a8
    TEST CH,0x8                         ; 005bc8ab
    JNZ 0x005bc8c8                      ; 005bc8ae
        ;   XREF to: 005bc8c8 (CONDITIONAL_JUMP)  ; LAB_005bc8c8
    CMP dword ptr [EBP + -0x10],0x0     ; 005bc8b0
    JG 0x005bc8bb                       ; 005bc8b4
        ;   XREF to: 005bc8bb (CONDITIONAL_JUMP)  ; LAB_005bc8bb
    TEST CH,0x10                        ; 005bc8b6
    JZ 0x005bc8d7                       ; 005bc8b9
        ;   XREF to: 005bc8d7 (CONDITIONAL_JUMP)  ; LAB_005bc8d7
    MOV ECX,dword ptr [EBP + 0x18]      ; 005bc8bb
        ;   Label: LAB_005bc8bb
    MOV EDI,EBX                         ; 005bc8be
    ADD EDI,ECX                         ; 005bc8c0
    INC EBX                             ; 005bc8c2
    MOV byte ptr [EDI],0x2e             ; 005bc8c3
    JMP 0x005bc8d7                      ; 005bc8c6
        ;   XREF to: 005bc8d7 (UNCONDITIONAL_JUMP)  ; LAB_005bc8d7
    MOV ESI,dword ptr [EBP + 0x18]      ; 005bc8c8
        ;   Label: LAB_005bc8c8
    CMP byte ptr [ESI],0x30             ; 005bc8cb
    JNZ 0x005bc8d7                      ; 005bc8ce
        ;   XREF to: 005bc8d7 (CONDITIONAL_JUMP)  ; LAB_005bc8d7
    MOV dword ptr [EDX + 0x18],0x0      ; 005bc8d0
    MOV ESI,dword ptr [EBP + -0x10]     ; 005bc8d7
        ;   Label: LAB_005bc8d7
    CMP ESI,dword ptr [EBP + 0x10]      ; 005bc8da
    JGE 0x005bc8e2                      ; 005bc8dd
        ;   XREF to: 005bc8e2 (CONDITIONAL_JUMP)  ; LAB_005bc8e2
    MOV dword ptr [EBP + 0x10],ESI      ; 005bc8df
    MOV ESI,dword ptr [EBP + 0xc]       ; 005bc8e2
        ;   Label: LAB_005bc8e2
    MOV EAX,dword ptr [EBP + 0x14]      ; 005bc8e5
    MOV EDI,dword ptr [EBP + 0x18]      ; 005bc8e8
    MOV ECX,dword ptr [EBP + 0x10]      ; 005bc8eb
    ADD ESI,EAX                         ; 005bc8ee
    ADD EDI,EBX                         ; 005bc8f0
    PUSH ES                             ; 005bc8f2
    MOV AX,DS                           ; 005bc8f3
    MOV ES,AX                           ; 005bc8f5
    PUSH EDI                            ; 005bc8f7
    MOV EAX,ECX                         ; 005bc8f8
    SHR ECX,0x2                         ; 005bc8fa
    MOVSD.REP ES:EDI,ESI                ; 005bc8fd
    MOV CL,AL                           ; 005bc8ff
    AND CL,0x3                          ; 005bc901
    MOVSB.REP ES:EDI,ESI                ; 005bc904
    POP EDI                             ; 005bc906
    POP ES                              ; 005bc907
    MOV ECX,dword ptr [EBP + 0x10]      ; 005bc908
    MOV ESI,dword ptr [EBP + -0x10]     ; 005bc90b
    ADD EBX,ECX                         ; 005bc90e
    SUB ESI,ECX                         ; 005bc910
    MOV dword ptr [EDX + 0x1c],EBX      ; 005bc912
    MOV dword ptr [EDX + 0x20],ESI      ; 005bc915
    ADD EBX,dword ptr [EBP + 0x18]      ; 005bc918
        ;   Label: LAB_005bc918
    MOV byte ptr [EBX],0x0              ; 005bc91b
        ;   Label: LAB_005bc91b

