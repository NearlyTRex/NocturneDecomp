; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005cc6e0(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_005c9988 at 005c9a09
;   FUN_005cc2b0 at 005cc315
;   FUN_005cc330 at 005cc350
;
; Referenced Globals:
;   undefined4 DAT_0060852c
;   undefined4 DAT_00608546
;   undefined4 DAT_00626998
;   undefined4 DAT_006269a0
;
; Called Functions:
;   FUN_005c9428
;   FUN_005c97c0
;   FUN_005c9950
;   FUN_005c9ae4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc6e0
        ;   Label: FUN_005cc6e0
    PUSH ESI                            ; 005cc6e1
    PUSH EDI                            ; 005cc6e2
    PUSH EBP                            ; 005cc6e3
    SUB ESP,0x4                         ; 005cc6e4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005cc6e7
    MOV EAX,dword ptr [EDI + 0x10]      ; 005cc6eb
    MOV EDX,EAX                         ; 005cc6ee
    MOV EBX,0xc                         ; 005cc6f0
    SAR EDX,0x1f                        ; 005cc6f5
    IDIV EBX                            ; 005cc6f8
    MOV EBP,0x60852c                    ; 005cc6fa | DAT_0060852c
    MOV ESI,dword ptr [EDI + 0x14]      ; 005cc6ff
    MOV EBX,EDX                         ; 005cc702
    CMP ESI,0xf4fb7ea1                  ; 005cc704
    JGE 0x005cc716                      ; 005cc70a
        ;   XREF to: 005cc716 (CONDITIONAL_JUMP)  ; LAB_005cc716
    MOV EAX,0xffffffff                  ; 005cc70c
    JMP 0x005cc88b                      ; 005cc711
        ;   XREF to: 005cc88b (UNCONDITIONAL_JUMP)  ; LAB_005cc88b
    MOV EAX,dword ptr [EDI + 0x10]      ; 005cc716
        ;   Label: LAB_005cc716
    MOV EDX,EAX                         ; 005cc719
    MOV ECX,0xc                         ; 005cc71b
    SAR EDX,0x1f                        ; 005cc720
    IDIV ECX                            ; 005cc723
    ADD ESI,EAX                         ; 005cc725
    TEST EBX,EBX                        ; 005cc727
    JGE 0x005cc733                      ; 005cc729
        ;   XREF to: 005cc733 (CONDITIONAL_JUMP)  ; LAB_005cc733
    ADD EBX,0xc                         ; 005cc72b
        ;   Label: LAB_005cc72b
    DEC ESI                             ; 005cc72e
    TEST EBX,EBX                        ; 005cc72f
    JL 0x005cc72b                       ; 005cc731
        ;   XREF to: 005cc72b (CONDITIONAL_JUMP)  ; LAB_005cc72b
    TEST ESI,ESI                        ; 005cc733
        ;   Label: LAB_005cc733
    JGE 0x005cc744                      ; 005cc735
        ;   XREF to: 005cc744 (CONDITIONAL_JUMP)  ; LAB_005cc744
    MOV EAX,0xffffffff                  ; 005cc737
    ADD ESP,0x4                         ; 005cc73c
    POP EBP                             ; 005cc73f
    POP EDI                             ; 005cc740
    POP ESI                             ; 005cc741
    POP EBX                             ; 005cc742
    RET                                 ; 005cc743
    LEA EAX,[ESI + 0x76c]               ; 005cc744
        ;   Label: LAB_005cc744
    PUSH EAX                            ; 005cc74a
    CALL FUN_005c9950                   ; 005cc74b
        ;   XREF to: 005c9950 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9950()
    ADD ESP,0x4                         ; 005cc750
    TEST EAX,EAX                        ; 005cc753
    JZ 0x005cc75c                       ; 005cc755
        ;   XREF to: 005cc75c (CONDITIONAL_JUMP)  ; LAB_005cc75c
    MOV EBP,0x608546                    ; 005cc757 | DAT_00608546
    LEA EDX,[ESI + 0x3]                 ; 005cc75c
        ;   Label: LAB_005cc75c
    MOV EAX,EDX                         ; 005cc75f
    SAR EDX,0x1f                        ; 005cc761
    SHL EDX,0x2                         ; 005cc764
    SBB EAX,EDX                         ; 005cc767
    SAR EAX,0x2                         ; 005cc769
    MOV ECX,EAX                         ; 005cc76c
    LEA EAX,[ESI*0x8 + 0x0]             ; 005cc76e
    ADD EAX,ESI                         ; 005cc775
    SHL EAX,0x3                         ; 005cc777
    ADD EAX,ESI                         ; 005cc77a
    MOV EDX,EAX                         ; 005cc77c
    SHL EAX,0x2                         ; 005cc77e
    ADD EAX,EDX                         ; 005cc781
    LEA EDX,[ESI + 0x63]                ; 005cc783
    ADD EAX,ECX                         ; 005cc786
    MOV ECX,0x64                        ; 005cc788
    MOV dword ptr [ESP],EAX             ; 005cc78d
    MOV EAX,EDX                         ; 005cc790
    SAR EDX,0x1f                        ; 005cc792
    IDIV ECX                            ; 005cc795
    LEA EDX,[ESI + 0x12b]               ; 005cc797
    MOV ECX,dword ptr [ESP]             ; 005cc79d
    MOV ESI,0x190                       ; 005cc7a0
    SUB ECX,EAX                         ; 005cc7a5
    MOV EAX,EDX                         ; 005cc7a7
    SAR EDX,0x1f                        ; 005cc7a9
    IDIV ESI                            ; 005cc7ac
    ADD ECX,EAX                         ; 005cc7ae
    MOVSX EAX,word ptr [EBP + EBX*0x2]  ; 005cc7b0 | DAT_00608546
    MOV EDX,dword ptr [EDI + 0xc]       ; 005cc7b5
    ADD EAX,ECX                         ; 005cc7b8
    ADD EAX,EDX                         ; 005cc7ba
    LEA ESI,[EAX + -0x1]                ; 005cc7bc
    MOV EDX,dword ptr [EDI + 0x8]       ; 005cc7bf
    MOV EAX,EDX                         ; 005cc7c2
    SHL EAX,0x4                         ; 005cc7c4
    SUB EAX,EDX                         ; 005cc7c7
    SHL EAX,0x2                         ; 005cc7c9
    MOV EDX,dword ptr [EDI + 0x4]       ; 005cc7cc
    ADD EDX,EAX                         ; 005cc7cf
    MOV EAX,EDX                         ; 005cc7d1
    SHL EAX,0x4                         ; 005cc7d3
    SUB EAX,EDX                         ; 005cc7d6
    MOV EBX,dword ptr [EDI]             ; 005cc7d8
    SHL EAX,0x2                         ; 005cc7da
    ADD EBX,EAX                         ; 005cc7dd
    TEST EBX,EBX                        ; 005cc7df
    JGE 0x005cc7ee                      ; 005cc7e1
        ;   XREF to: 005cc7ee (CONDITIONAL_JUMP)  ; LAB_005cc7ee
    ADD EBX,0x15180                     ; 005cc7e3
        ;   Label: LAB_005cc7e3
    DEC ESI                             ; 005cc7e9
    TEST EBX,EBX                        ; 005cc7ea
    JL 0x005cc7e3                       ; 005cc7ec
        ;   XREF to: 005cc7e3 (CONDITIONAL_JUMP)  ; LAB_005cc7e3
    PUSH EDI                            ; 005cc7ee
        ;   Label: LAB_005cc7ee
    PUSH 0x0                            ; 005cc7ef
    PUSH EBX                            ; 005cc7f1
    PUSH ESI                            ; 005cc7f2
    CALL FUN_005c97c0                   ; 005cc7f3
        ;   XREF to: 005c97c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c97c0()
    ADD ESP,0x10                        ; 005cc7f8
    CALL FUN_005c9428                   ; 005cc7fb
        ;   XREF to: 005c9428 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9428()
    MOV ECX,dword ptr [0x00626998]      ; 005cc800 | DAT_00626998
    MOV EBP,dword ptr [EDI + 0x20]      ; 005cc806
    ADD EBX,ECX                         ; 005cc809
    TEST EBP,EBP                        ; 005cc80b
    JGE 0x005cc818                      ; 005cc80d
        ;   XREF to: 005cc818 (CONDITIONAL_JUMP)  ; LAB_005cc818
    PUSH EDI                            ; 005cc80f
    CALL FUN_005c9ae4                   ; 005cc810
        ;   XREF to: 005c9ae4 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9ae4()
    ADD ESP,0x4                         ; 005cc815
    CMP dword ptr [EDI + 0x20],0x0      ; 005cc818
        ;   Label: LAB_005cc818
    JLE 0x005cc824                      ; 005cc81c
        ;   XREF to: 005cc824 (CONDITIONAL_JUMP)  ; LAB_005cc824
    SUB EBX,dword ptr [0x006269a0]      ; 005cc81e | DAT_006269a0
    TEST EBX,EBX                        ; 005cc824
        ;   Label: LAB_005cc824
    JGE 0x005cc831                      ; 005cc826
        ;   XREF to: 005cc831 (CONDITIONAL_JUMP)  ; LAB_005cc831
    DEC ESI                             ; 005cc828
    ADD EBX,0x15180                     ; 005cc829
    JMP 0x005cc824                      ; 005cc82f
        ;   XREF to: 005cc824 (UNCONDITIONAL_JUMP)  ; LAB_005cc824
    CMP ESI,0x63de                      ; 005cc831
        ;   Label: LAB_005cc831
    JGE 0x005cc846                      ; 005cc837
        ;   XREF to: 005cc846 (CONDITIONAL_JUMP)  ; LAB_005cc846
    MOV EAX,0xffffffff                  ; 005cc839
    ADD ESP,0x4                         ; 005cc83e
    POP EBP                             ; 005cc841
    POP EDI                             ; 005cc842
    POP ESI                             ; 005cc843
    POP EBX                             ; 005cc844
    RET                                 ; 005cc845
    JNZ 0x005cc869                      ; 005cc846
        ;   XREF to: 005cc869 (CONDITIONAL_JUMP)  ; LAB_005cc869
        ;   Label: LAB_005cc846
    MOV ECX,dword ptr [0x00626998]      ; 005cc848 | DAT_00626998
    SUB EBX,0x15180                     ; 005cc84e
    TEST ECX,ECX                        ; 005cc854
    JLE 0x005cc85c                      ; 005cc856
        ;   XREF to: 005cc85c (CONDITIONAL_JUMP)  ; LAB_005cc85c
    TEST EBX,EBX                        ; 005cc858
    JGE 0x005cc889                      ; 005cc85a
        ;   XREF to: 005cc889 (CONDITIONAL_JUMP)  ; LAB_005cc889
    MOV EAX,0xffffffff                  ; 005cc85c
        ;   Label: LAB_005cc85c
    ADD ESP,0x4                         ; 005cc861
    POP EBP                             ; 005cc864
    POP EDI                             ; 005cc865
    POP ESI                             ; 005cc866
    POP EBX                             ; 005cc867
    RET                                 ; 005cc868
    LEA EAX,[ESI + 0xffff9c21]          ; 005cc869
        ;   Label: LAB_005cc869
    LEA ESI,[EAX*0x8 + 0x0]             ; 005cc86f
    SUB ESI,EAX                         ; 005cc876
    SHL ESI,0x5                         ; 005cc878
    ADD ESI,EAX                         ; 005cc87b
    SHL ESI,0x7                         ; 005cc87d
    MOV EAX,ESI                         ; 005cc880
    SHL ESI,0x2                         ; 005cc882
    SUB ESI,EAX                         ; 005cc885
    ADD EBX,ESI                         ; 005cc887
    MOV EAX,EBX                         ; 005cc889
        ;   Label: LAB_005cc889
    ADD ESP,0x4                         ; 005cc88b
        ;   Label: LAB_005cc88b
    POP EBP                             ; 005cc88e
    POP EDI                             ; 005cc88f
    POP ESI                             ; 005cc890
    POP EBX                             ; 005cc891
    RET                                 ; 005cc892

