; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0050b610(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
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
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0050baa0 at 0050c0f2
;
; Referenced Globals:
;   undefined4 DAT_01ec1514
;
; Called Functions:
;   FUN_0050b320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b610
        ;   Label: FUN_0050b610
    PUSH ESI                            ; 0050b611
    PUSH EDI                            ; 0050b612
    PUSH EBP                            ; 0050b613
    SUB ESP,0x5c                        ; 0050b614
    MOV EBX,dword ptr [ESP + 0x70]      ; 0050b617
    MOV EAX,dword ptr [ESP + 0x74]      ; 0050b61b
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0050b61f
    SUB EAX,EDX                         ; 0050b623
    MOV ECX,dword ptr [ESP + 0x80]      ; 0050b625
    MOV dword ptr [ESP + 0x8],EAX       ; 0050b62c
    MOV EAX,dword ptr [ESP + 0x78]      ; 0050b630
    MOV EBP,EDX                         ; 0050b634
    SUB EAX,ECX                         ; 0050b636
    MOV dword ptr [ESP + 0x58],ECX      ; 0050b638
    MOV dword ptr [ESP + 0x4],EAX       ; 0050b63c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050b640
    MOV ESI,dword ptr [ESP + 0x8]       ; 0050b644
    CDQ                                 ; 0050b648
    XOR EAX,EDX                         ; 0050b649
    SUB EAX,EDX                         ; 0050b64b
    MOV dword ptr [ESP + 0x40],EAX      ; 0050b64d
    TEST ESI,ESI                        ; 0050b651
    JL 0x0050b770                       ; 0050b653
        ;   XREF to: 0050b770 (CONDITIONAL_JUMP)  ; LAB_0050b770
    MOV dword ptr [ESP + 0x30],0x1      ; 0050b659
    CMP dword ptr [ESP + 0x4],0x0       ; 0050b661
        ;   Label: LAB_0050b661
    JL 0x0050b77d                       ; 0050b666
        ;   XREF to: 0050b77d (CONDITIONAL_JUMP)  ; LAB_0050b77d
    MOV dword ptr [ESP + 0x2c],0x1      ; 0050b66c
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0050b674
        ;   Label: LAB_0050b674
    PUSH EDX                            ; 0050b677
    PUSH EBP                            ; 0050b678
    MOV ECX,dword ptr [ESP + 0x60]      ; 0050b679
    PUSH ECX                            ; 0050b67d
    PUSH EBX                            ; 0050b67e
    CALL FUN_0050b320                   ; 0050b67f
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b684
    MOV ESI,EAX                         ; 0050b687
    CMP dword ptr [ESP + 0x40],0x0      ; 0050b689
    JLE 0x0050b6d1                      ; 0050b68e
        ;   XREF to: 0050b6d1 (CONDITIONAL_JUMP)  ; LAB_0050b6d1
    MOV EAX,dword ptr [ESP + 0x58]      ; 0050b690
    INC EAX                             ; 0050b694
    MOV dword ptr [ESP + 0x10],EAX      ; 0050b695
    MOV EAX,dword ptr [ESP + 0x58]      ; 0050b699
    DEC EAX                             ; 0050b69d
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050b69e
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050b6a2
        ;   Label: LAB_0050b6a2
    PUSH ESI                            ; 0050b6a6
    ADD EAX,EBP                         ; 0050b6a7
    PUSH EAX                            ; 0050b6a9
    MOV EDI,dword ptr [ESP + 0x60]      ; 0050b6aa
    PUSH EDI                            ; 0050b6ae
    PUSH EBX                            ; 0050b6af
    MOV dword ptr [ESP + 0x58],EAX      ; 0050b6b0
    CALL FUN_0050b320                   ; 0050b6b4
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b6b9
    MOV EDI,EAX                         ; 0050b6bc
    SUB EAX,ESI                         ; 0050b6be
    CDQ                                 ; 0050b6c0
    XOR EAX,EDX                         ; 0050b6c1
    SUB EAX,EDX                         ; 0050b6c3
    CMP EAX,dword ptr [0x01ec1514]      ; 0050b6c5 | DAT_01ec1514
    JLE 0x0050b78a                      ; 0050b6cb
        ;   XREF to: 0050b78a (CONDITIONAL_JUMP)  ; LAB_0050b78a
    CMP dword ptr [ESP + 0x40],0x0      ; 0050b6d1
        ;   Label: LAB_0050b6d1
    JZ 0x0050b800                       ; 0050b6d6
        ;   XREF to: 0050b800 (CONDITIONAL_JUMP)  ; LAB_0050b800
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0050b6dc
        ;   Label: LAB_0050b6dc
    MOV dword ptr [ESP + 0x54],EAX      ; 0050b6e0
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050b6e4
    CDQ                                 ; 0050b6e8
    XOR EAX,EDX                         ; 0050b6e9
    SUB EAX,EDX                         ; 0050b6eb
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0050b6ed
    PUSH EDX                            ; 0050b6f0
    MOV ECX,dword ptr [ESP + 0x80]      ; 0050b6f1
    PUSH ECX                            ; 0050b6f8
    MOV EBP,dword ptr [ESP + 0x88]      ; 0050b6f9
    PUSH EBP                            ; 0050b700
    PUSH EBX                            ; 0050b701
    MOV dword ptr [ESP + 0x10],EAX      ; 0050b702
    MOV dword ptr [ESP + 0x48],EAX      ; 0050b706
    CALL FUN_0050b320                   ; 0050b70a
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b70f
    MOV ESI,EAX                         ; 0050b712
    CMP dword ptr [ESP],0x0             ; 0050b714
    JLE 0x0050b75b                      ; 0050b718
        ;   XREF to: 0050b75b (CONDITIONAL_JUMP)  ; LAB_0050b75b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0050b71a
    INC EAX                             ; 0050b71e
    MOV dword ptr [ESP + 0x14],EAX      ; 0050b71f
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0050b723
    DEC EAX                             ; 0050b727
    MOV dword ptr [ESP + 0x20],EAX      ; 0050b728
    PUSH ESI                            ; 0050b72c
        ;   Label: LAB_0050b72c
    MOV ECX,dword ptr [ESP + 0x58]      ; 0050b72d
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050b731
    PUSH ECX                            ; 0050b735
    ADD EAX,EBP                         ; 0050b736
    PUSH EAX                            ; 0050b738
    PUSH EBX                            ; 0050b739
    MOV dword ptr [ESP + 0x54],EAX      ; 0050b73a
    CALL FUN_0050b320                   ; 0050b73e
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b743
    MOV EDI,EAX                         ; 0050b746
    SUB EAX,ESI                         ; 0050b748
    CDQ                                 ; 0050b74a
    XOR EAX,EDX                         ; 0050b74b
    SUB EAX,EDX                         ; 0050b74d
    CMP EAX,dword ptr [0x01ec1514]      ; 0050b74f | DAT_01ec1514
    JLE 0x0050b8fe                      ; 0050b755
        ;   XREF to: 0050b8fe (CONDITIONAL_JUMP)  ; LAB_0050b8fe
    CMP dword ptr [ESP + 0x38],0x0      ; 0050b75b
        ;   Label: LAB_0050b75b
    JZ 0x0050b974                       ; 0050b760
        ;   XREF to: 0050b974 (CONDITIONAL_JUMP)  ; LAB_0050b974
    XOR EAX,EAX                         ; 0050b766
        ;   Label: LAB_0050b766
    ADD ESP,0x5c                        ; 0050b768
    POP EBP                             ; 0050b76b
    POP EDI                             ; 0050b76c
    POP ESI                             ; 0050b76d
    POP EBX                             ; 0050b76e
    RET                                 ; 0050b76f
    MOV dword ptr [ESP + 0x30],0xffffffff ; 0050b770
        ;   Label: LAB_0050b770
    JMP 0x0050b661                      ; 0050b778
        ;   XREF to: 0050b661 (UNCONDITIONAL_JUMP)  ; LAB_0050b661
    MOV dword ptr [ESP + 0x2c],0xffffffff ; 0050b77d
        ;   Label: LAB_0050b77d
    JMP 0x0050b674                      ; 0050b785
        ;   XREF to: 0050b674 (UNCONDITIONAL_JUMP)  ; LAB_0050b674
    PUSH ESI                            ; 0050b78a
        ;   Label: LAB_0050b78a
    PUSH EBP                            ; 0050b78b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0050b78c
    PUSH ECX                            ; 0050b790
    PUSH EBX                            ; 0050b791
    CALL FUN_0050b320                   ; 0050b792
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b797
    MOV EDI,EAX                         ; 0050b79a
    SUB EAX,ESI                         ; 0050b79c
    CDQ                                 ; 0050b79e
    XOR EAX,EDX                         ; 0050b79f
    SUB EAX,EDX                         ; 0050b7a1
    CMP EAX,dword ptr [0x01ec1514]      ; 0050b7a3 | DAT_01ec1514
    JG 0x0050b6d1                       ; 0050b7a9
        ;   XREF to: 0050b6d1 (CONDITIONAL_JUMP)  ; LAB_0050b6d1
    PUSH ESI                            ; 0050b7af
    PUSH EBP                            ; 0050b7b0
    MOV ECX,dword ptr [ESP + 0x18]      ; 0050b7b1
    PUSH ECX                            ; 0050b7b5
    PUSH EBX                            ; 0050b7b6
    CALL FUN_0050b320                   ; 0050b7b7
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b7bc
    MOV EDI,EAX                         ; 0050b7bf
    SUB EAX,ESI                         ; 0050b7c1
    CDQ                                 ; 0050b7c3
    XOR EAX,EDX                         ; 0050b7c4
    SUB EAX,EDX                         ; 0050b7c6
    CMP EAX,dword ptr [0x01ec1514]      ; 0050b7c8 | DAT_01ec1514
    JG 0x0050b6d1                       ; 0050b7ce
        ;   XREF to: 0050b6d1 (CONDITIONAL_JUMP)  ; LAB_0050b6d1
    PUSH ESI                            ; 0050b7d4
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0050b7d5
    PUSH EBP                            ; 0050b7d9
    MOV ECX,dword ptr [ESP + 0x60]      ; 0050b7da
    PUSH ECX                            ; 0050b7de
    PUSH EBX                            ; 0050b7df
    CALL FUN_0050b320                   ; 0050b7e0
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b7e5
    MOV ESI,EAX                         ; 0050b7e8
    MOV EAX,dword ptr [ESP + 0x40]      ; 0050b7ea
    DEC EAX                             ; 0050b7ee
    MOV dword ptr [ESP + 0x40],EAX      ; 0050b7ef
    TEST EAX,EAX                        ; 0050b7f3
    JG 0x0050b6a2                       ; 0050b7f5
        ;   XREF to: 0050b6a2 (CONDITIONAL_JUMP)  ; LAB_0050b6a2
    JMP 0x0050b6d1                      ; 0050b7fb
        ;   XREF to: 0050b6d1 (UNCONDITIONAL_JUMP)  ; LAB_0050b6d1
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050b800
        ;   Label: LAB_0050b800
    CDQ                                 ; 0050b804
    XOR EAX,EDX                         ; 0050b805
    SUB EAX,EDX                         ; 0050b807
    MOV dword ptr [ESP + 0x3c],EAX      ; 0050b809
    TEST EAX,EAX                        ; 0050b80d
    JLE 0x0050b84a                      ; 0050b80f
        ;   XREF to: 0050b84a (CONDITIONAL_JUMP)  ; LAB_0050b84a
    LEA EAX,[EBP + 0x1]                 ; 0050b811
    MOV dword ptr [ESP + 0x18],EAX      ; 0050b814
    LEA EAX,[EBP + -0x1]                ; 0050b818
    MOV dword ptr [ESP + 0xc],EAX       ; 0050b81b
    PUSH ESI                            ; 0050b81f
        ;   Label: LAB_0050b81f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0050b820
    MOV ECX,dword ptr [ESP + 0x30]      ; 0050b824
    PUSH EBP                            ; 0050b828
    ADD EAX,ECX                         ; 0050b829
    PUSH EAX                            ; 0050b82b
    PUSH EBX                            ; 0050b82c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0050b82d
    CALL FUN_0050b320                   ; 0050b831
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b836
    MOV EDI,EAX                         ; 0050b839
    SUB EAX,ESI                         ; 0050b83b
    CDQ                                 ; 0050b83d
    XOR EAX,EDX                         ; 0050b83e
    SUB EAX,EDX                         ; 0050b840
    CMP EAX,dword ptr [0x01ec1514]      ; 0050b842 | DAT_01ec1514
    JLE 0x0050b884                      ; 0050b848
        ;   XREF to: 0050b884 (CONDITIONAL_JUMP)  ; LAB_0050b884
    CMP dword ptr [ESP + 0x3c],0x0      ; 0050b84a
        ;   Label: LAB_0050b84a
    JNZ 0x0050b6dc                      ; 0050b84f
        ;   XREF to: 0050b6dc (CONDITIONAL_JUMP)  ; LAB_0050b6dc
    MOV ESI,dword ptr [EBX + 0x10]      ; 0050b855
    PUSH ESI                            ; 0050b858
    MOV EBP,dword ptr [ESP + 0x78]      ; 0050b859
    PUSH EBP                            ; 0050b85d
    MOV EAX,dword ptr [ESP + 0x80]      ; 0050b85e
    PUSH EAX                            ; 0050b865
    PUSH EBX                            ; 0050b866
    CALL FUN_0050b320                   ; 0050b867
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b86c
    CMP EDI,EAX                         ; 0050b86f
    JNZ 0x0050b6dc                      ; 0050b871
        ;   XREF to: 0050b6dc (CONDITIONAL_JUMP)  ; LAB_0050b6dc
    MOV EAX,0x1                         ; 0050b877
    ADD ESP,0x5c                        ; 0050b87c
    POP EBP                             ; 0050b87f
    POP EDI                             ; 0050b880
    POP ESI                             ; 0050b881
    POP EBX                             ; 0050b882
    RET                                 ; 0050b883
    PUSH ESI                            ; 0050b884
        ;   Label: LAB_0050b884
    MOV ECX,dword ptr [ESP + 0x10]      ; 0050b885
    PUSH ECX                            ; 0050b889
    MOV EDI,dword ptr [ESP + 0x60]      ; 0050b88a
    PUSH EDI                            ; 0050b88e
    PUSH EBX                            ; 0050b88f
    CALL FUN_0050b320                   ; 0050b890
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b895
    MOV EDI,EAX                         ; 0050b898
    SUB EAX,ESI                         ; 0050b89a
    CDQ                                 ; 0050b89c
    XOR EAX,EDX                         ; 0050b89d
    SUB EAX,EDX                         ; 0050b89f
    CMP EAX,dword ptr [0x01ec1514]      ; 0050b8a1 | DAT_01ec1514
    JG 0x0050b84a                       ; 0050b8a7
        ;   XREF to: 0050b84a (CONDITIONAL_JUMP)  ; LAB_0050b84a
    PUSH ESI                            ; 0050b8a9
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050b8aa
    PUSH ECX                            ; 0050b8ae
    MOV EDI,dword ptr [ESP + 0x60]      ; 0050b8af
    PUSH EDI                            ; 0050b8b3
    PUSH EBX                            ; 0050b8b4
    CALL FUN_0050b320                   ; 0050b8b5
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b8ba
    MOV EDI,EAX                         ; 0050b8bd
    SUB EAX,ESI                         ; 0050b8bf
    CDQ                                 ; 0050b8c1
    XOR EAX,EDX                         ; 0050b8c2
    SUB EAX,EDX                         ; 0050b8c4
    CMP EAX,dword ptr [0x01ec1514]      ; 0050b8c6 | DAT_01ec1514
    JG 0x0050b84a                       ; 0050b8cc
        ;   XREF to: 0050b84a (CONDITIONAL_JUMP)  ; LAB_0050b84a
    PUSH ESI                            ; 0050b8d2
    PUSH EBP                            ; 0050b8d3
    MOV EAX,dword ptr [ESP + 0x54]      ; 0050b8d4
    PUSH EAX                            ; 0050b8d8
    PUSH EBX                            ; 0050b8d9
    MOV dword ptr [ESP + 0x68],EAX      ; 0050b8da
    CALL FUN_0050b320                   ; 0050b8de
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b8e3
    MOV ESI,EAX                         ; 0050b8e6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0050b8e8
    DEC EAX                             ; 0050b8ec
    MOV dword ptr [ESP + 0x3c],EAX      ; 0050b8ed
    TEST EAX,EAX                        ; 0050b8f1
    JG 0x0050b81f                       ; 0050b8f3
        ;   XREF to: 0050b81f (CONDITIONAL_JUMP)  ; LAB_0050b81f
    JMP 0x0050b84a                      ; 0050b8f9
        ;   XREF to: 0050b84a (UNCONDITIONAL_JUMP)  ; LAB_0050b84a
    PUSH ESI                            ; 0050b8fe
        ;   Label: LAB_0050b8fe
    MOV ECX,dword ptr [ESP + 0x24]      ; 0050b8ff
    PUSH ECX                            ; 0050b903
    PUSH EBP                            ; 0050b904
    PUSH EBX                            ; 0050b905
    CALL FUN_0050b320                   ; 0050b906
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b90b
    MOV EDI,EAX                         ; 0050b90e
    SUB EAX,ESI                         ; 0050b910
    CDQ                                 ; 0050b912
    XOR EAX,EDX                         ; 0050b913
    SUB EAX,EDX                         ; 0050b915
    CMP EAX,dword ptr [0x01ec1514]      ; 0050b917 | DAT_01ec1514
    JG 0x0050b75b                       ; 0050b91d
        ;   XREF to: 0050b75b (CONDITIONAL_JUMP)  ; LAB_0050b75b
    PUSH ESI                            ; 0050b923
    MOV ECX,dword ptr [ESP + 0x18]      ; 0050b924
    PUSH ECX                            ; 0050b928
    PUSH EBP                            ; 0050b929
    PUSH EBX                            ; 0050b92a
    CALL FUN_0050b320                   ; 0050b92b
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b930
    MOV EDI,EAX                         ; 0050b933
    SUB EAX,ESI                         ; 0050b935
    CDQ                                 ; 0050b937
    XOR EAX,EDX                         ; 0050b938
    SUB EAX,EDX                         ; 0050b93a
    CMP EAX,dword ptr [0x01ec1514]      ; 0050b93c | DAT_01ec1514
    JG 0x0050b75b                       ; 0050b942
        ;   XREF to: 0050b75b (CONDITIONAL_JUMP)  ; LAB_0050b75b
    PUSH ESI                            ; 0050b948
    MOV EDX,dword ptr [ESP + 0x58]      ; 0050b949
    PUSH EDX                            ; 0050b94d
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0050b94e
    PUSH EBP                            ; 0050b952
    PUSH EBX                            ; 0050b953
    CALL FUN_0050b320                   ; 0050b954
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b959
    MOV ESI,EAX                         ; 0050b95c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0050b95e
    DEC EAX                             ; 0050b962
    MOV dword ptr [ESP + 0x38],EAX      ; 0050b963
    TEST EAX,EAX                        ; 0050b967
    JG 0x0050b72c                       ; 0050b969
        ;   XREF to: 0050b72c (CONDITIONAL_JUMP)  ; LAB_0050b72c
    JMP 0x0050b75b                      ; 0050b96f
        ;   XREF to: 0050b75b (UNCONDITIONAL_JUMP)  ; LAB_0050b75b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050b974
        ;   Label: LAB_0050b974
    CDQ                                 ; 0050b978
    XOR EAX,EDX                         ; 0050b979
    SUB EAX,EDX                         ; 0050b97b
    MOV dword ptr [ESP + 0x34],EAX      ; 0050b97d
    TEST EAX,EAX                        ; 0050b981
    JLE 0x0050b9be                      ; 0050b983
        ;   XREF to: 0050b9be (CONDITIONAL_JUMP)  ; LAB_0050b9be
    LEA EAX,[EBP + 0x1]                 ; 0050b985
    MOV dword ptr [ESP + 0x24],EAX      ; 0050b988
    LEA EAX,[EBP + -0x1]                ; 0050b98c
    MOV dword ptr [ESP + 0x28],EAX      ; 0050b98f
    MOV EAX,dword ptr [ESP + 0x54]      ; 0050b993
        ;   Label: LAB_0050b993
    MOV ECX,dword ptr [ESP + 0x30]      ; 0050b997
    PUSH ESI                            ; 0050b99b
    ADD EAX,ECX                         ; 0050b99c
    PUSH EAX                            ; 0050b99e
    PUSH EBP                            ; 0050b99f
    PUSH EBX                            ; 0050b9a0
    MOV dword ptr [ESP + 0x60],EAX      ; 0050b9a1
    CALL FUN_0050b320                   ; 0050b9a5
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b9aa
    MOV EDI,EAX                         ; 0050b9ad
    SUB EAX,ESI                         ; 0050b9af
    CDQ                                 ; 0050b9b1
    XOR EAX,EDX                         ; 0050b9b2
    SUB EAX,EDX                         ; 0050b9b4
    CMP EAX,dword ptr [0x01ec1514]      ; 0050b9b6 | DAT_01ec1514
    JLE 0x0050b9f8                      ; 0050b9bc
        ;   XREF to: 0050b9f8 (CONDITIONAL_JUMP)  ; LAB_0050b9f8
    CMP dword ptr [ESP + 0x34],0x0      ; 0050b9be
        ;   Label: LAB_0050b9be
    JNZ 0x0050b766                      ; 0050b9c3
        ;   XREF to: 0050b766 (CONDITIONAL_JUMP)  ; LAB_0050b766
    MOV ESI,dword ptr [EBX + 0x10]      ; 0050b9c9
    PUSH ESI                            ; 0050b9cc
    MOV EBP,dword ptr [ESP + 0x78]      ; 0050b9cd
    PUSH EBP                            ; 0050b9d1
    MOV EAX,dword ptr [ESP + 0x80]      ; 0050b9d2
    PUSH EAX                            ; 0050b9d9
    PUSH EBX                            ; 0050b9da
    CALL FUN_0050b320                   ; 0050b9db
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b9e0
    CMP EDI,EAX                         ; 0050b9e3
    JNZ 0x0050b766                      ; 0050b9e5
        ;   XREF to: 0050b766 (CONDITIONAL_JUMP)  ; LAB_0050b766
    MOV EAX,0x2                         ; 0050b9eb
    ADD ESP,0x5c                        ; 0050b9f0
    POP EBP                             ; 0050b9f3
    POP EDI                             ; 0050b9f4
    POP ESI                             ; 0050b9f5
    POP EBX                             ; 0050b9f6
    RET                                 ; 0050b9f7
    PUSH ESI                            ; 0050b9f8
        ;   Label: LAB_0050b9f8
    MOV ECX,dword ptr [ESP + 0x58]      ; 0050b9f9
    PUSH ECX                            ; 0050b9fd
    MOV EDI,dword ptr [ESP + 0x30]      ; 0050b9fe
    PUSH EDI                            ; 0050ba02
    PUSH EBX                            ; 0050ba03
    CALL FUN_0050b320                   ; 0050ba04
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050ba09
    MOV EDI,EAX                         ; 0050ba0c
    SUB EAX,ESI                         ; 0050ba0e
    CDQ                                 ; 0050ba10
    XOR EAX,EDX                         ; 0050ba11
    SUB EAX,EDX                         ; 0050ba13
    CMP EAX,dword ptr [0x01ec1514]      ; 0050ba15 | DAT_01ec1514
    JG 0x0050b9be                       ; 0050ba1b
        ;   XREF to: 0050b9be (CONDITIONAL_JUMP)  ; LAB_0050b9be
    PUSH ESI                            ; 0050ba1d
    MOV ECX,dword ptr [ESP + 0x58]      ; 0050ba1e
    PUSH ECX                            ; 0050ba22
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0050ba23
    PUSH EDI                            ; 0050ba27
    PUSH EBX                            ; 0050ba28
    CALL FUN_0050b320                   ; 0050ba29
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050ba2e
    MOV EDI,EAX                         ; 0050ba31
    SUB EAX,ESI                         ; 0050ba33
    CDQ                                 ; 0050ba35
    XOR EAX,EDX                         ; 0050ba36
    SUB EAX,EDX                         ; 0050ba38
    CMP EAX,dword ptr [0x01ec1514]      ; 0050ba3a | DAT_01ec1514
    JG 0x0050b9be                       ; 0050ba40
        ;   XREF to: 0050b9be (CONDITIONAL_JUMP)  ; LAB_0050b9be
    PUSH ESI                            ; 0050ba46
    MOV EAX,dword ptr [ESP + 0x54]      ; 0050ba47
    PUSH EAX                            ; 0050ba4b
    PUSH EBP                            ; 0050ba4c
    PUSH EBX                            ; 0050ba4d
    MOV dword ptr [ESP + 0x64],EAX      ; 0050ba4e
    CALL FUN_0050b320                   ; 0050ba52
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050ba57
    MOV ESI,EAX                         ; 0050ba5a
    MOV EAX,dword ptr [ESP + 0x34]      ; 0050ba5c
    DEC EAX                             ; 0050ba60
    MOV dword ptr [ESP + 0x34],EAX      ; 0050ba61
    TEST EAX,EAX                        ; 0050ba65
    JG 0x0050b993                       ; 0050ba67
        ;   XREF to: 0050b993 (CONDITIONAL_JUMP)  ; LAB_0050b993
    JMP 0x0050b9be                      ; 0050ba6d
        ;   XREF to: 0050b9be (UNCONDITIONAL_JUMP)  ; LAB_0050b9be

