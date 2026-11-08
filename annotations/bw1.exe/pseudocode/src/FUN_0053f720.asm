; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053f720(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0043de60 at 0043df4e
;
; Referenced Globals:
;   void* switchdataD_0053f6fc = 0053f970
;   undefined4 DAT_00629014
;   undefined4 DAT_0062901c
;   undefined4 DAT_00629020
;   undefined4 DAT_00629024
;   undefined4 DAT_00629028
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_00629040
;   undefined4 DAT_00713a74
;   undefined4 DAT_00713a7c
;   undefined4 DAT_01c50948
;   ... and 9 more
;
; Called Functions:
;   FUN_0053dbc0
;   FUN_0053dc30
;   FUN_0053dcb0
;   FUN_0053dd20
;   FUN_0053dd60
;   FUN_00580127
;   FUN_00582370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f720
        ;   Label: FUN_0053f720
    PUSH ESI                            ; 0053f721
    PUSH EDI                            ; 0053f722
    PUSH EBP                            ; 0053f723
    SUB ESP,0x58                        ; 0053f724
    CMP dword ptr [0x00713a7c],0x0      ; 0053f727 | DAT_00713a7c
    JZ 0x0053f78d                       ; 0053f72e
        ;   XREF to: 0053f78d (CONDITIONAL_JUMP)  ; LAB_0053f78d
    MOV ECX,dword ptr [ESP + 0x70]      ; 0053f730
    CMP ECX,0x3                         ; 0053f734
    JLE 0x0053f80b                      ; 0053f737
        ;   XREF to: 0053f80b (CONDITIONAL_JUMP)  ; LAB_0053f80b
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0053f73d
    LEA EBP,[ECX + -0x2]                ; 0053f741
    XOR ESI,ESI                         ; 0053f744
    XOR EDI,EDI                         ; 0053f746
    TEST EBP,EBP                        ; 0053f748
    JLE 0x0053f785                      ; 0053f74a
        ;   XREF to: 0053f785 (CONDITIONAL_JUMP)  ; LAB_0053f785
    IMUL EAX,dword ptr [EBX + 0x8],0x30 ; 0053f74c
        ;   Label: LAB_0053f74c
    ADD EAX,0x629014                    ; 0053f750 | DAT_00629014
    MOV ECX,dword ptr [EBX + 0x4]       ; 0053f755
    PUSH EAX                            ; 0053f758
    IMUL EAX,ECX,0x30                   ; 0053f759
    ADD EAX,0x629014                    ; 0053f75c | DAT_00629014
    MOV EDX,dword ptr [EBX]             ; 0053f761
    PUSH EAX                            ; 0053f763
    IMUL EAX,EDX,0x30                   ; 0053f764
    ADD EAX,0x629014                    ; 0053f767 | DAT_00629014
    PUSH EAX                            ; 0053f76c
    CALL FUN_0053dd60                   ; 0053f76d
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0053dd60()
    ADD ESP,0xc                         ; 0053f772
    TEST EAX,EAX                        ; 0053f775
    JZ 0x0053f805                       ; 0053f777
        ;   XREF to: 0053f805 (CONDITIONAL_JUMP)  ; LAB_0053f805
    INC ESI                             ; 0053f77d
        ;   Label: LAB_0053f77d
    ADD EBX,0x4                         ; 0053f77e
    CMP ESI,EBP                         ; 0053f781
    JL 0x0053f74c                       ; 0053f783
        ;   XREF to: 0053f74c (CONDITIONAL_JUMP)  ; LAB_0053f74c
    CMP EDI,EBP                         ; 0053f785
        ;   Label: LAB_0053f785
    JZ 0x0053f7fd                       ; 0053f787
        ;   XREF to: 0053f7fd (CONDITIONAL_JUMP)  ; LAB_0053f7fd
    CMP dword ptr [0x01c50948],0x0      ; 0053f78d | DAT_01c50948
        ;   Label: LAB_0053f78d
    JZ 0x0053fbef                       ; 0053f794
        ;   XREF to: 0053fbef (CONDITIONAL_JUMP)  ; LAB_0053fbef
    CMP dword ptr [0x00713a74],0x0      ; 0053f79a | DAT_00713a74
    JNZ 0x0053fbef                      ; 0053f7a1
        ;   XREF to: 0053fbef (CONDITIONAL_JUMP)  ; LAB_0053fbef
    MOV EBX,dword ptr [ESP + 0x70]      ; 0053f7a7
    XOR EAX,EAX                         ; 0053f7ab
    TEST EBX,EBX                        ; 0053f7ad
    JLE 0x0053f7d0                      ; 0053f7af
        ;   XREF to: 0053f7d0 (CONDITIONAL_JUMP)  ; LAB_0053f7d0
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0053f7b1
    MOV EBP,dword ptr [ESP + 0x70]      ; 0053f7b5
    IMUL ECX,dword ptr [EDX],0x30       ; 0053f7b9
        ;   Label: LAB_0053f7b9
    INC EAX                             ; 0053f7bc
    ADD ECX,0x629014                    ; 0053f7bd | DAT_00629014
    ADD EDX,0x4                         ; 0053f7c3
    MOV dword ptr [ESP + EAX*0x4 + -0x4],ECX ; 0053f7c6
    CMP EAX,EBP                         ; 0053f7ca
    JL 0x0053f7b9                       ; 0053f7cc
        ;   XREF to: 0053f7b9 (CONDITIONAL_JUMP)  ; LAB_0053f7b9
    MOV EAX,EAX                         ; 0053f7ce
    MOV EAX,[0x01c51d14]                ; 0053f7d0 | DAT_01c51d14
        ;   Label: LAB_0053f7d0
    PUSH EAX                            ; 0053f7d5
    MOV EDX,dword ptr [ESP + 0x74]      ; 0053f7d6
    PUSH EDX                            ; 0053f7da
    LEA EAX,[ESP + 0x8]                 ; 0053f7db
    PUSH EAX                            ; 0053f7df
    CALL FUN_00582370                   ; 0053f7e0
        ;   XREF to: 00582370 (UNCONDITIONAL_CALL)  ; undefined FUN_00582370()
    ADD ESP,0xc                         ; 0053f7e5
    MOV EAX,dword ptr [ESP + 0x70]      ; 0053f7e8
    MOV ECX,dword ptr [0x01e7dac8]      ; 0053f7ec | DAT_01e7dac8
    SUB EAX,0x2                         ; 0053f7f2
    ADD ECX,EAX                         ; 0053f7f5
    MOV dword ptr [0x01e7dac8],ECX      ; 0053f7f7 | DAT_01e7dac8
    ADD ESP,0x58                        ; 0053f7fd
        ;   Label: LAB_0053f7fd
    POP EBP                             ; 0053f800
    POP EDI                             ; 0053f801
    POP ESI                             ; 0053f802
    POP EBX                             ; 0053f803
    RET                                 ; 0053f804
    INC EDI                             ; 0053f805
        ;   Label: LAB_0053f805
    JMP 0x0053f77d                      ; 0053f806
        ;   XREF to: 0053f77d (UNCONDITIONAL_JUMP)  ; LAB_0053f77d
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0053f80b
        ;   Label: LAB_0053f80b
    MOV EDX,dword ptr [EDX + 0x8]       ; 0053f80f
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053f812
    SUB EAX,EDX                         ; 0053f819
    SHL EAX,0x4                         ; 0053f81b
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0053f81e
    ADD EAX,0x629014                    ; 0053f822 | DAT_00629014
    MOV EDX,dword ptr [EDX + 0x4]       ; 0053f827
    PUSH EAX                            ; 0053f82a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053f82b
    SUB EAX,EDX                         ; 0053f832
    SHL EAX,0x4                         ; 0053f834
    MOV EDX,dword ptr [ESP + 0x70]      ; 0053f837
    ADD EAX,0x629014                    ; 0053f83b | DAT_00629014
    MOV EDX,dword ptr [EDX]             ; 0053f840
    PUSH EAX                            ; 0053f842
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053f843
    SUB EAX,EDX                         ; 0053f84a
    SHL EAX,0x4                         ; 0053f84c
    ADD EAX,0x629014                    ; 0053f84f | DAT_00629014
    PUSH EAX                            ; 0053f854
    CALL FUN_0053dd60                   ; 0053f855
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0053dd60()
    ADD ESP,0xc                         ; 0053f85a
    TEST EAX,EAX                        ; 0053f85d
    JNZ 0x0053f78d                      ; 0053f85f
        ;   XREF to: 0053f78d (CONDITIONAL_JUMP)  ; LAB_0053f78d
    ADD ESP,0x58                        ; 0053f865
    POP EBP                             ; 0053f868
    POP EDI                             ; 0053f869
    POP ESI                             ; 0053f86a
    POP EBX                             ; 0053f86b
    RET                                 ; 0053f86c
    MOV ECX,dword ptr [ESP + 0x70]      ; 0053f86d
        ;   Label: caseD_1
    XOR ESI,ESI                         ; 0053f871
    TEST ECX,ECX                        ; 0053f873
    JLE 0x0053f970                      ; 0053f875
        ;   XREF to: 0053f970 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0053f87b
    MOV EBP,dword ptr [ESP + 0x70]      ; 0053f87f
    IMUL EAX,dword ptr [EBX],0x30       ; 0053f883
        ;   Label: LAB_0053f883
    PUSH 0x1                            ; 0053f886
    ADD EAX,0x629014                    ; 0053f888 | DAT_00629014
    PUSH EAX                            ; 0053f88d
    ADD EBX,0x4                         ; 0053f88e
    INC ESI                             ; 0053f891
    CALL FUN_0053dbc0                   ; 0053f892
        ;   XREF to: 0053dbc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053dbc0()
    ADD ESP,0x8                         ; 0053f897
    CMP ESI,EBP                         ; 0053f89a
    JL 0x0053f883                       ; 0053f89c
        ;   XREF to: 0053f883 (CONDITIONAL_JUMP)  ; LAB_0053f883
    JMP 0x0053f970                      ; 0053f89e
        ;   XREF to: 0053f970 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [ESP + 0x70]      ; 0053f8a3
        ;   Label: caseD_2
    XOR EBX,EBX                         ; 0053f8a7
    TEST EDX,EDX                        ; 0053f8a9
    JLE 0x0053f970                      ; 0053f8ab
        ;   XREF to: 0053f970 (CONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0053f8b1
    IMUL EAX,dword ptr [ESI],0x30       ; 0053f8b5
        ;   Label: LAB_0053f8b5
    PUSH 0x1                            ; 0053f8b8
    ADD EAX,0x629014                    ; 0053f8ba | DAT_00629014
    PUSH EAX                            ; 0053f8bf
    CALL FUN_0053dc30                   ; 0053f8c0
        ;   XREF to: 0053dc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0053dc30()
    ADD ESP,0x8                         ; 0053f8c5
    INC EBX                             ; 0053f8c8
    MOV ECX,dword ptr [ESP + 0x70]      ; 0053f8c9
    ADD ESI,0x4                         ; 0053f8cd
    CMP EBX,ECX                         ; 0053f8d0
    JL 0x0053f8b5                       ; 0053f8d2
        ;   XREF to: 0053f8b5 (CONDITIONAL_JUMP)  ; LAB_0053f8b5
    JMP 0x0053f970                      ; 0053f8d4
        ;   XREF to: 0053f970 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,dword ptr [ESP + 0x70]      ; 0053f8d9
        ;   Label: caseD_3
    XOR ESI,ESI                         ; 0053f8dd
    TEST EAX,EAX                        ; 0053f8df
    JLE 0x0053f970                      ; 0053f8e1
        ;   XREF to: 0053f970 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0053f8e7
    MOV EBP,dword ptr [ESP + 0x70]      ; 0053f8eb
    IMUL EAX,dword ptr [EBX],0x30       ; 0053f8ef
        ;   Label: LAB_0053f8ef
    PUSH 0x1                            ; 0053f8f2
    ADD EAX,0x629014                    ; 0053f8f4 | DAT_00629014
    PUSH EAX                            ; 0053f8f9
    ADD EBX,0x4                         ; 0053f8fa
    INC ESI                             ; 0053f8fd
    CALL FUN_0053dcb0                   ; 0053f8fe
        ;   XREF to: 0053dcb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053dcb0()
    ADD ESP,0x8                         ; 0053f903
    CMP ESI,EBP                         ; 0053f906
    JL 0x0053f8ef                       ; 0053f908
        ;   XREF to: 0053f8ef (CONDITIONAL_JUMP)  ; LAB_0053f8ef
    JMP 0x0053f970                      ; 0053f90a
        ;   XREF to: 0053f970 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESP + 0x70]      ; 0053f90f
        ;   Label: caseD_5
    XOR ESI,ESI                         ; 0053f913
    TEST EBP,EBP                        ; 0053f915
    JLE 0x0053f970                      ; 0053f917
        ;   XREF to: 0053f970 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0053f919
    IMUL EAX,dword ptr [EBX],0x30       ; 0053f91d
        ;   Label: LAB_0053f91d
    PUSH 0x1                            ; 0053f920
    ADD EAX,0x629014                    ; 0053f922 | DAT_00629014
    PUSH EAX                            ; 0053f927
    CALL FUN_0053dc30                   ; 0053f928
        ;   XREF to: 0053dc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0053dc30()
    ADD ESP,0x8                         ; 0053f92d
    INC ESI                             ; 0053f930
    MOV ECX,dword ptr [ESP + 0x70]      ; 0053f931
    ADD EBX,0x4                         ; 0053f935
    CMP ESI,ECX                         ; 0053f938
    JL 0x0053f91d                       ; 0053f93a
        ;   XREF to: 0053f91d (CONDITIONAL_JUMP)  ; LAB_0053f91d
    JMP 0x0053f970                      ; 0053f93c
        ;   XREF to: 0053f970 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDI,dword ptr [ESP + 0x70]      ; 0053f93e
        ;   Label: caseD_6
    XOR ESI,ESI                         ; 0053f942
    TEST EDI,EDI                        ; 0053f944
    JLE 0x0053f970                      ; 0053f946
        ;   XREF to: 0053f970 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0053f948
    MOV EBP,dword ptr [ESP + 0x70]      ; 0053f94c
    IMUL EAX,dword ptr [EBX],0x30       ; 0053f950
        ;   Label: LAB_0053f950
    PUSH 0x1                            ; 0053f953
    ADD EAX,0x629014                    ; 0053f955 | DAT_00629014
    PUSH EAX                            ; 0053f95a
    ADD EBX,0x4                         ; 0053f95b
    INC ESI                             ; 0053f95e
    CALL FUN_0053dd20                   ; 0053f95f
        ;   XREF to: 0053dd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0053dd20()
    ADD ESP,0x8                         ; 0053f964
    CMP ESI,EBP                         ; 0053f967
    JL 0x0053f950                       ; 0053f969
        ;   XREF to: 0053f950 (CONDITIONAL_JUMP)  ; LAB_0053f950
    LEA EAX,[EAX]                       ; 0053f96b
    MOV ECX,ECX                         ; 0053f96e
    MOV EAX,0x4b0                       ; 0053f970
        ;   Label: caseD_0
    XOR EDX,EDX                         ; 0053f975
    MOV ESI,dword ptr [ESP + 0x70]      ; 0053f977
    MOV dword ptr [0x01e7dfd4],EDX      ; 0053f97b | DAT_01e7dfd4
    MOV dword ptr [0x01e7dacc],EDX      ; 0053f981 | DAT_01e7dacc
    MOV dword ptr [ESP + 0x4c],EDX      ; 0053f987
    MOV [0x01e7dfd0],EAX                ; 0053f98b | DAT_01e7dfd0
    TEST ESI,ESI                        ; 0053f990
    JLE 0x0053f9fe                      ; 0053f992
        ;   XREF to: 0053f9fe (CONDITIONAL_JUMP)  ; LAB_0053f9fe
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0053f994
    MOV dword ptr [ESP + 0x44],EAX      ; 0053f998
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0053f99c
        ;   Label: LAB_0053f99c
    MOV EDI,dword ptr [ESP + 0x70]      ; 0053f9a0
    INC EAX                             ; 0053f9a4
    CMP EAX,EDI                         ; 0053f9a5
    JL 0x0053f9ab                       ; 0053f9a7
        ;   XREF to: 0053f9ab (CONDITIONAL_JUMP)  ; LAB_0053f9ab
    XOR EAX,EAX                         ; 0053f9a9
    MOV EBP,dword ptr [ESP + 0x6c]      ; 0053f9ab
        ;   Label: LAB_0053f9ab
    SHL EAX,0x2                         ; 0053f9af
    ADD EAX,EBP                         ; 0053f9b2
    IMUL ECX,dword ptr [EAX],0x30       ; 0053f9b4
    MOV EAX,dword ptr [ESP + 0x44]      ; 0053f9b7
    IMUL ESI,dword ptr [EAX],0x30       ; 0053f9bb
    ADD ECX,0x629014                    ; 0053f9be | DAT_00629014
    ADD ESI,0x629014                    ; 0053f9c4 | DAT_00629014
    MOV EDI,ECX                         ; 0053f9ca
    MOV EAX,dword ptr [ECX + 0x14]      ; 0053f9cc | DAT_00629028
    MOV EDX,dword ptr [ESI + 0x14]      ; 0053f9cf | DAT_00629028
    SAR EAX,0x10                        ; 0053f9d2
    SAR EDX,0x10                        ; 0053f9d5
    MOV EBX,ESI                         ; 0053f9d8
    CMP EDX,EAX                         ; 0053f9da
    JNZ 0x0053fc11                      ; 0053f9dc
        ;   XREF to: 0053fc11 (CONDITIONAL_JUMP)  ; LAB_0053fc11
    MOV EDI,dword ptr [ESP + 0x44]      ; 0053f9e2
        ;   Label: LAB_0053f9e2
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0053f9e6
    MOV EDX,dword ptr [ESP + 0x70]      ; 0053f9ea
    ADD EDI,0x4                         ; 0053f9ee
    INC EBP                             ; 0053f9f1
    MOV dword ptr [ESP + 0x44],EDI      ; 0053f9f2
    MOV dword ptr [ESP + 0x4c],EBP      ; 0053f9f6
    CMP EBP,EDX                         ; 0053f9fa
    JL 0x0053f99c                       ; 0053f9fc
        ;   XREF to: 0053f99c (CONDITIONAL_JUMP)  ; LAB_0053f99c
    MOV EAX,0x1e7dad0                   ; 0053f9fe
        ;   Label: LAB_0053f9fe
    MOV ESI,dword ptr [0x01e7dacc]      ; 0053fa03 | DAT_01e7dacc
    MOV EBX,dword ptr [0x01e7dfd0]      ; 0053fa09 | DAT_01e7dfd0
    XOR ECX,ECX                         ; 0053fa0f
    TEST ESI,ESI                        ; 0053fa11
    JLE 0x0053fe7f                      ; 0053fa13
        ;   XREF to: 0053fe7f (CONDITIONAL_JUMP)  ; LAB_0053fe7f
    MOV EDX,dword ptr [0x01e7dacc]      ; 0053fa19 | DAT_01e7dacc
    CMP EBX,dword ptr [EAX]             ; 0053fa1f | DAT_01e7dad0 | DAT_01e7db20
        ;   Label: LAB_0053fa1f
    JNZ 0x0053fe73                      ; 0053fa21
        ;   XREF to: 0053fe73 (CONDITIONAL_JUMP)  ; LAB_0053fe73
    TEST EAX,EAX                        ; 0053fa27
    JZ 0x0053fe73                       ; 0053fa29
        ;   XREF to: 0053fe73 (CONDITIONAL_JUMP)  ; LAB_0053fe73
    MOV dword ptr [ESP + 0x54],EAX      ; 0053fa2f | DAT_01e7dad0 | DAT_01e7db20
        ;   Label: LAB_0053fa2f
    TEST EAX,EAX                        ; 0053fa33
    JZ 0x0053f7fd                       ; 0053fa35
        ;   XREF to: 0053f7fd (CONDITIONAL_JUMP)  ; LAB_0053f7fd
    MOV EDI,dword ptr [0x01e7dacc]      ; 0053fa3b | DAT_01e7dacc
    MOV ECX,dword ptr [0x01e7dfd0]      ; 0053fa41 | DAT_01e7dfd0
    MOV EBX,EAX                         ; 0053fa47
    XOR EDX,EDX                         ; 0053fa49
    MOV EAX,0x1e7dad0                   ; 0053fa4b
    TEST EDI,EDI                        ; 0053fa50
    JLE 0x0053fe92                      ; 0053fa52
        ;   XREF to: 0053fe92 (CONDITIONAL_JUMP)  ; LAB_0053fe92
    MOV EBP,dword ptr [0x01e7dacc]      ; 0053fa58 | DAT_01e7dacc
    CMP ECX,dword ptr [EAX]             ; 0053fa5e | DAT_01e7dad0 | DAT_01e7db20
        ;   Label: LAB_0053fa5e
    JNZ 0x0053fe86                      ; 0053fa60
        ;   XREF to: 0053fe86 (CONDITIONAL_JUMP)  ; LAB_0053fe86
    CMP EAX,EBX                         ; 0053fa66
    JZ 0x0053fe86                       ; 0053fa68
        ;   XREF to: 0053fe86 (CONDITIONAL_JUMP)  ; LAB_0053fe86
    MOV EBP,EAX                         ; 0053fa6e
        ;   Label: LAB_0053fa6e
    TEST EAX,EAX                        ; 0053fa70
    JZ 0x0053f7fd                       ; 0053fa72
        ;   XREF to: 0053f7fd (CONDITIONAL_JUMP)  ; LAB_0053f7fd
    MOV EAX,[0x01e7dfd0]                ; 0053fa78 | DAT_01e7dfd0
    MOV dword ptr [ESP + 0x50],EAX      ; 0053fa7d
    MOV EDX,dword ptr [ESP + 0x54]      ; 0053fa81
        ;   Label: LAB_0053fa81
    MOV EAX,dword ptr [ESP + 0x50]      ; 0053fa85
    CMP EAX,dword ptr [EDX + 0x4]       ; 0053fa89
    JL 0x0053facf                       ; 0053fa8c
        ;   XREF to: 0053facf (CONDITIONAL_JUMP)  ; LAB_0053facf
    MOV ESI,dword ptr [0x01e7dacc]      ; 0053fa8e | DAT_01e7dacc
    MOV EBX,EAX                         ; 0053fa94
    MOV ECX,EBP                         ; 0053fa96
    MOV dword ptr [EDX],0xffffffff      ; 0053fa98
    MOV EAX,0x1e7dad0                   ; 0053fa9e
    XOR EDX,EDX                         ; 0053faa3
    TEST ESI,ESI                        ; 0053faa5
    JLE 0x0053fea5                      ; 0053faa7
        ;   XREF to: 0053fea5 (CONDITIONAL_JUMP)  ; LAB_0053fea5
    MOV EDI,dword ptr [0x01e7dacc]      ; 0053faad | DAT_01e7dacc
    CMP EBX,dword ptr [EAX]             ; 0053fab3 | DAT_01e7dad0 | DAT_01e7db20
        ;   Label: LAB_0053fab3
    JNZ 0x0053fe99                      ; 0053fab5
        ;   XREF to: 0053fe99 (CONDITIONAL_JUMP)  ; LAB_0053fe99
    CMP EAX,ECX                         ; 0053fabb
    JZ 0x0053fe99                       ; 0053fabd
        ;   XREF to: 0053fe99 (CONDITIONAL_JUMP)  ; LAB_0053fe99
    MOV dword ptr [ESP + 0x54],EAX      ; 0053fac3 | DAT_01e7dad0 | DAT_01e7db20
        ;   Label: LAB_0053fac3
    TEST EAX,EAX                        ; 0053fac7
    JZ 0x0053f7fd                       ; 0053fac9
        ;   XREF to: 0053f7fd (CONDITIONAL_JUMP)  ; LAB_0053f7fd
    MOV EAX,dword ptr [ESP + 0x50]      ; 0053facf
        ;   Label: LAB_0053facf
    CMP EAX,dword ptr [EBP + 0x4]       ; 0053fad3
    JL 0x0053fb1a                       ; 0053fad6
        ;   XREF to: 0053fb1a (CONDITIONAL_JUMP)  ; LAB_0053fb1a
    MOV EBX,dword ptr [ESP + 0x54]      ; 0053fad8
    MOV ECX,EAX                         ; 0053fadc
    MOV dword ptr [EBP],0xffffffff      ; 0053fade
    XOR EDX,EDX                         ; 0053fae5
    MOV EBP,dword ptr [0x01e7dacc]      ; 0053fae7 | DAT_01e7dacc
    MOV EAX,0x1e7dad0                   ; 0053faed
    TEST EBP,EBP                        ; 0053faf2
    JLE 0x0053feb8                      ; 0053faf4
        ;   XREF to: 0053feb8 (CONDITIONAL_JUMP)  ; LAB_0053feb8
    MOV ESI,dword ptr [0x01e7dacc]      ; 0053fafa | DAT_01e7dacc
    CMP ECX,dword ptr [EAX]             ; 0053fb00 | DAT_01e7dad0 | DAT_01e7db20
        ;   Label: LAB_0053fb00
    JNZ 0x0053feac                      ; 0053fb02
        ;   XREF to: 0053feac (CONDITIONAL_JUMP)  ; LAB_0053feac
    CMP EAX,EBX                         ; 0053fb08
    JZ 0x0053feac                       ; 0053fb0a
        ;   XREF to: 0053feac (CONDITIONAL_JUMP)  ; LAB_0053feac
    MOV EBP,EAX                         ; 0053fb10
        ;   Label: LAB_0053fb10
    TEST EAX,EAX                        ; 0053fb12
    JZ 0x0053f7fd                       ; 0053fb14
        ;   XREF to: 0053f7fd (CONDITIONAL_JUMP)  ; LAB_0053f7fd
    MOV ESI,dword ptr [ESP + 0x54]      ; 0053fb1a
        ;   Label: LAB_0053fb1a
    MOV EBX,dword ptr [ESP + 0x50]      ; 0053fb1e
    MOV EDI,EBP                         ; 0053fb22
    CALL FUN_00580127                   ; 0053fb24
        ;   XREF to: 00580127 (UNCONDITIONAL_CALL)  ; undefined FUN_00580127()
    MOV EAX,dword ptr [ESP + 0x54]      ; 0053fb29
    MOV EDX,dword ptr [ESP + 0x54]      ; 0053fb2d
    MOV EAX,dword ptr [EAX + 0xc]       ; 0053fb31
    MOV ECX,dword ptr [EDX + 0x8]       ; 0053fb34
    MOV EBX,dword ptr [EDX + 0x18]      ; 0053fb37
    MOV ESI,dword ptr [EDX + 0x20]      ; 0053fb3a
    MOV EDI,dword ptr [EDX + 0x28]      ; 0053fb3d
    ADD ECX,EAX                         ; 0053fb40
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0053fb42
    MOV dword ptr [EDX + 0x8],ECX       ; 0053fb45
    ADD EBX,EAX                         ; 0053fb48
    MOV EAX,dword ptr [EDX + 0x24]      ; 0053fb4a
    MOV dword ptr [EDX + 0x18],EBX      ; 0053fb4d
    ADD ESI,EAX                         ; 0053fb50
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0053fb52
    MOV dword ptr [EDX + 0x20],ESI      ; 0053fb55
    ADD EDI,EAX                         ; 0053fb58
    MOV dword ptr [EDX + 0x28],EDI      ; 0053fb5a
    MOV ECX,dword ptr [EDX + 0x10]      ; 0053fb5d
    MOV EBX,dword ptr [EDX + 0x38]      ; 0053fb60
    MOV ESI,dword ptr [EDX + 0x40]      ; 0053fb63
    MOV EAX,dword ptr [EDX + 0x14]      ; 0053fb66
    MOV EDI,dword ptr [EDX + 0x30]      ; 0053fb69
    ADD ECX,EAX                         ; 0053fb6c
    MOV EAX,dword ptr [EDX + 0x3c]      ; 0053fb6e
    MOV dword ptr [EDX + 0x10],ECX      ; 0053fb71
    ADD EBX,EAX                         ; 0053fb74
    MOV EAX,dword ptr [EDX + 0x44]      ; 0053fb76
    MOV dword ptr [EDX + 0x38],EBX      ; 0053fb79
    ADD ESI,EAX                         ; 0053fb7c
    MOV EAX,dword ptr [EDX + 0x34]      ; 0053fb7e
    MOV dword ptr [EDX + 0x40],ESI      ; 0053fb81
    ADD EDI,EAX                         ; 0053fb84
    MOV dword ptr [EDX + 0x30],EDI      ; 0053fb86
    MOV EAX,dword ptr [EBP + 0xc]       ; 0053fb89
    MOV EDX,dword ptr [EBP + 0x8]       ; 0053fb8c
    MOV ECX,dword ptr [EBP + 0x18]      ; 0053fb8f
    MOV EBX,dword ptr [EBP + 0x20]      ; 0053fb92
    ADD EDX,EAX                         ; 0053fb95
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0053fb97
    MOV dword ptr [EBP + 0x8],EDX       ; 0053fb9a
    ADD ECX,EAX                         ; 0053fb9d
    MOV EAX,dword ptr [EBP + 0x24]      ; 0053fb9f
    MOV dword ptr [EBP + 0x18],ECX      ; 0053fba2
    ADD EBX,EAX                         ; 0053fba5
    MOV dword ptr [EBP + 0x20],EBX      ; 0053fba7
    MOV ESI,dword ptr [EBP + 0x28]      ; 0053fbaa
    MOV EDI,dword ptr [EBP + 0x10]      ; 0053fbad
    MOV EDX,dword ptr [EBP + 0x38]      ; 0053fbb0
    MOV ECX,dword ptr [EBP + 0x40]      ; 0053fbb3
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0053fbb6
    MOV EBX,dword ptr [EBP + 0x30]      ; 0053fbb9
    ADD ESI,EAX                         ; 0053fbbc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053fbbe
    MOV dword ptr [EBP + 0x28],ESI      ; 0053fbc1
    MOV ESI,dword ptr [ESP + 0x50]      ; 0053fbc4
    ADD EDI,EAX                         ; 0053fbc8
    INC ESI                             ; 0053fbca
    MOV EAX,dword ptr [EBP + 0x3c]      ; 0053fbcb
    MOV dword ptr [EBP + 0x10],EDI      ; 0053fbce
    ADD EDX,EAX                         ; 0053fbd1
    MOV EAX,dword ptr [EBP + 0x44]      ; 0053fbd3
    MOV dword ptr [EBP + 0x38],EDX      ; 0053fbd6
    ADD ECX,EAX                         ; 0053fbd9
    MOV EAX,dword ptr [EBP + 0x34]      ; 0053fbdb
    MOV dword ptr [EBP + 0x40],ECX      ; 0053fbde
    ADD EBX,EAX                         ; 0053fbe1
    MOV dword ptr [ESP + 0x50],ESI      ; 0053fbe3
    MOV dword ptr [EBP + 0x30],EBX      ; 0053fbe7
    JMP 0x0053fa81                      ; 0053fbea
        ;   XREF to: 0053fa81 (UNCONDITIONAL_JUMP)  ; LAB_0053fa81
    MOV ESI,dword ptr [0x01e7dac8]      ; 0053fbef | DAT_01e7dac8
        ;   Label: LAB_0053fbef
    INC ESI                             ; 0053fbf5
    MOV EAX,[0x01c51d18]                ; 0053fbf6 | DAT_01c51d18
    MOV dword ptr [0x01e7dac8],ESI      ; 0053fbfb | DAT_01e7dac8
    CMP EAX,0x6                         ; 0053fc01
    JA 0x0053f970                       ; 0053fc04
        ;   XREF to: 0053f970 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x53f6fc]  ; 0053fc0a | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EBP,dword ptr [ESI + 0x14]      ; 0053fc11 | DAT_00629028
        ;   Label: LAB_0053fc11
    CMP EBP,dword ptr [ECX + 0x14]      ; 0053fc14 | DAT_00629028
    JLE 0x0053fc23                      ; 0053fc17
        ;   XREF to: 0053fc23 (CONDITIONAL_JUMP)  ; LAB_0053fc23
    MOV EBX,ECX                         ; 0053fc19
    MOV EDI,ESI                         ; 0053fc1b
    MOV ECX,EDX                         ; 0053fc1d
    MOV EDX,EAX                         ; 0053fc1f
    MOV EAX,ECX                         ; 0053fc21
    IMUL EBP,dword ptr [0x01e7dacc],0x50 ; 0053fc23 | DAT_01e7dacc
        ;   Label: LAB_0053fc23
    ADD EBP,0x1e7dad0                   ; 0053fc2a
    MOV dword ptr [EBP],EDX             ; 0053fc30 | DAT_01e7dad0
    MOV ECX,dword ptr [0x01e7dfd0]      ; 0053fc33 | DAT_01e7dfd0
    MOV dword ptr [EBP + 0x4],EAX       ; 0053fc39
    CMP EDX,ECX                         ; 0053fc3c
    JGE 0x0053fc46                      ; 0053fc3e
        ;   XREF to: 0053fc46 (CONDITIONAL_JUMP)  ; LAB_0053fc46
    MOV dword ptr [0x01e7dfd0],EDX      ; 0053fc40 | DAT_01e7dfd0
    CMP EAX,dword ptr [0x01e7dfd4]      ; 0053fc46 | DAT_01e7dfd4
        ;   Label: LAB_0053fc46
    JLE 0x0053fc53                      ; 0053fc4c
        ;   XREF to: 0053fc53 (CONDITIONAL_JUMP)  ; LAB_0053fc53
    MOV [0x01e7dfd4],EAX                ; 0053fc4e | DAT_01e7dfd4
    MOV EAX,dword ptr [EBX + 0x14]      ; 0053fc53 | DAT_00629028
        ;   Label: LAB_0053fc53
    MOV ECX,dword ptr [EDI + 0x14]      ; 0053fc56 | DAT_00629028
    SUB ECX,EAX                         ; 0053fc59
    CMP ECX,0x10000                     ; 0053fc5b
    JNC 0x0053fe20                      ; 0053fc61
        ;   XREF to: 0053fe20 (CONDITIONAL_JUMP)  ; LAB_0053fe20
    XOR ECX,ECX                         ; 0053fc67
    MOV EAX,dword ptr [EDI + 0x10]      ; 0053fc69 | DAT_00629024
        ;   Label: LAB_0053fc69
    MOV EDX,dword ptr [EBX + 0x10]      ; 0053fc6c | DAT_00629024
    MOV ESI,dword ptr [EBX + 0x14]      ; 0053fc6f | DAT_00629028
    SUB EAX,EDX                         ; 0053fc72
    AND ESI,0xffff                      ; 0053fc74
    MOV EDX,EAX                         ; 0053fc7a
    MOV EAX,ECX                         ; 0053fc7c
    XOR SI,0xffff                       ; 0053fc7e
    IMUL EDX                            ; 0053fc82
    SHRD EAX,EDX,0x10                   ; 0053fc84
    MOV EDX,EAX                         ; 0053fc88
    MOV dword ptr [EBP + 0xc],EAX       ; 0053fc8a
    MOV EAX,ESI                         ; 0053fc8d
    IMUL EDX                            ; 0053fc8f
    SHRD EAX,EDX,0x10                   ; 0053fc91
    MOV dword ptr [ESP + 0x40],EAX      ; 0053fc95
    MOV EDX,dword ptr [ESP + 0x40]      ; 0053fc99
    MOV EAX,dword ptr [EBX + 0x10]      ; 0053fc9d | DAT_00629024
    ADD EAX,EDX                         ; 0053fca0
    MOV dword ptr [EBP + 0x8],EAX       ; 0053fca2
    MOV EAX,dword ptr [EDI + 0x18]      ; 0053fca5 | DAT_0062902c
    MOV EDX,dword ptr [EBX + 0x18]      ; 0053fca8 | DAT_0062902c
    SUB EAX,EDX                         ; 0053fcab
    MOV EDX,EAX                         ; 0053fcad
    MOV EAX,ECX                         ; 0053fcaf
    IMUL EDX                            ; 0053fcb1
    SHRD EAX,EDX,0x10                   ; 0053fcb3
    MOV EDX,EAX                         ; 0053fcb7
    MOV dword ptr [EBP + 0x1c],EAX      ; 0053fcb9
    MOV EAX,ESI                         ; 0053fcbc
    IMUL EDX                            ; 0053fcbe
    SHRD EAX,EDX,0x10                   ; 0053fcc0
    MOV dword ptr [ESP + 0x40],EAX      ; 0053fcc4
    MOV EDX,dword ptr [ESP + 0x40]      ; 0053fcc8
    MOV EAX,dword ptr [EBX + 0x18]      ; 0053fccc | DAT_0062902c
    ADD EAX,EDX                         ; 0053fccf
    MOV dword ptr [EBP + 0x18],EAX      ; 0053fcd1
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0053fcd4 | DAT_00629030
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0053fcd7 | DAT_00629030
    SUB EAX,EDX                         ; 0053fcda
    MOV EDX,EAX                         ; 0053fcdc
    MOV EAX,ECX                         ; 0053fcde
    IMUL EDX                            ; 0053fce0
    SHRD EAX,EDX,0x10                   ; 0053fce2
    MOV EDX,EAX                         ; 0053fce6
    MOV dword ptr [EBP + 0x24],EAX      ; 0053fce8
    MOV EAX,ESI                         ; 0053fceb
    IMUL EDX                            ; 0053fced
    SHRD EAX,EDX,0x10                   ; 0053fcef
    MOV dword ptr [ESP + 0x40],EAX      ; 0053fcf3
    MOV EDX,dword ptr [ESP + 0x40]      ; 0053fcf7
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0053fcfb | DAT_00629030
    ADD EAX,EDX                         ; 0053fcfe
    MOV dword ptr [EBP + 0x20],EAX      ; 0053fd00
    MOV EAX,dword ptr [EDI + 0x20]      ; 0053fd03 | DAT_00629034
    MOV EDX,dword ptr [EBX + 0x20]      ; 0053fd06 | DAT_00629034
    SUB EAX,EDX                         ; 0053fd09
    MOV EDX,EAX                         ; 0053fd0b
    MOV EAX,ECX                         ; 0053fd0d
    IMUL EDX                            ; 0053fd0f
    SHRD EAX,EDX,0x10                   ; 0053fd11
    MOV EDX,EAX                         ; 0053fd15
    MOV dword ptr [EBP + 0x14],EAX      ; 0053fd17
    MOV EAX,ESI                         ; 0053fd1a
    IMUL EDX                            ; 0053fd1c
    SHRD EAX,EDX,0x10                   ; 0053fd1e
    MOV dword ptr [ESP + 0x40],EAX      ; 0053fd22
    MOV EDX,dword ptr [ESP + 0x40]      ; 0053fd26
    MOV EAX,dword ptr [EBX + 0x20]      ; 0053fd2a | DAT_00629034
    ADD EAX,EDX                         ; 0053fd2d
    MOV dword ptr [EBP + 0x10],EAX      ; 0053fd2f
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0053fd32 | DAT_00629040
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0053fd35 | DAT_00629040
    SUB EAX,EDX                         ; 0053fd38
    MOV EDX,EAX                         ; 0053fd3a
    MOV EAX,ECX                         ; 0053fd3c
    IMUL EDX                            ; 0053fd3e
    SHRD EAX,EDX,0x10                   ; 0053fd40
    MOV EDX,EAX                         ; 0053fd44
    MOV dword ptr [EBP + 0x34],EAX      ; 0053fd46
    MOV EAX,ESI                         ; 0053fd49
    IMUL EDX                            ; 0053fd4b
    SHRD EAX,EDX,0x10                   ; 0053fd4d
    MOV dword ptr [ESP + 0x40],EAX      ; 0053fd51
    MOV EDX,dword ptr [ESP + 0x40]      ; 0053fd55
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0053fd59 | DAT_00629040
    ADD EAX,EDX                         ; 0053fd5c
    MOV dword ptr [EBP + 0x30],EAX      ; 0053fd5e
    CMP dword ptr [0x01c51d18],0x1      ; 0053fd61 | DAT_01c51d18
    JNZ 0x0053fe3f                      ; 0053fd68
        ;   XREF to: 0053fe3f (CONDITIONAL_JUMP)  ; LAB_0053fe3f
    CMP dword ptr [0x01c51d10],0x0      ; 0053fd6e | DAT_01c51d10
    JZ 0x0053fe30                       ; 0053fd75
        ;   XREF to: 0053fe30 (CONDITIONAL_JUMP)  ; LAB_0053fe30
    MOV EAX,0x7fffffff                  ; 0053fd7b
    MOV EDX,dword ptr [EBX + 0x8]       ; 0053fd80 | DAT_0062901c
    SUB EAX,EDX                         ; 0053fd83
    MOV dword ptr [ESP + 0x48],EAX      ; 0053fd85
    MOV EDX,dword ptr [EDI + 0x8]       ; 0053fd89 | DAT_0062901c
    MOV EAX,0x7fffffff                  ; 0053fd8c
    SUB EAX,EDX                         ; 0053fd91
    MOV EDX,dword ptr [ESP + 0x48]      ; 0053fd93
        ;   Label: LAB_0053fd93
    SUB EAX,EDX                         ; 0053fd97
    MOV dword ptr [ESP + 0x40],EAX      ; 0053fd99
    MOV EDX,dword ptr [ESP + 0x40]      ; 0053fd9d
    MOV EAX,ECX                         ; 0053fda1
    IMUL EDX                            ; 0053fda3
    SHRD EAX,EDX,0x10                   ; 0053fda5
    MOV EDX,EAX                         ; 0053fda9
    MOV dword ptr [EBP + 0x2c],EAX      ; 0053fdab
    MOV EAX,ESI                         ; 0053fdae
    IMUL EDX                            ; 0053fdb0
    SHRD EAX,EDX,0x10                   ; 0053fdb2
    MOV EDX,dword ptr [ESP + 0x48]      ; 0053fdb6
    ADD EDX,EAX                         ; 0053fdba
    MOV dword ptr [EBP + 0x28],EDX      ; 0053fdbc
    MOV EAX,dword ptr [EDI + 0x24]      ; 0053fdbf | DAT_00629038
        ;   Label: LAB_0053fdbf
    MOV EDX,dword ptr [EBX + 0x24]      ; 0053fdc2 | DAT_00629038
    SUB EAX,EDX                         ; 0053fdc5
    MOV EDX,EAX                         ; 0053fdc7
    MOV EAX,ECX                         ; 0053fdc9
    IMUL EDX                            ; 0053fdcb
    SHRD EAX,EDX,0x10                   ; 0053fdcd
    MOV EDX,EAX                         ; 0053fdd1
    MOV dword ptr [EBP + 0x3c],EAX      ; 0053fdd3
    MOV EAX,ESI                         ; 0053fdd6
    IMUL EDX                            ; 0053fdd8
    SHRD EAX,EDX,0x10                   ; 0053fdda
    MOV dword ptr [ESP + 0x40],EAX      ; 0053fdde
    MOV EDX,dword ptr [ESP + 0x40]      ; 0053fde2
    MOV EAX,dword ptr [EBX + 0x24]      ; 0053fde6 | DAT_00629038
    ADD EAX,EDX                         ; 0053fde9
    MOV dword ptr [EBP + 0x38],EAX      ; 0053fdeb
    MOV EDX,dword ptr [EDI + 0x28]      ; 0053fdee | DAT_0062903c
    MOV EDI,dword ptr [EBX + 0x28]      ; 0053fdf1 | DAT_0062903c
    MOV EAX,ECX                         ; 0053fdf4
    SUB EDX,EDI                         ; 0053fdf6
    IMUL EDX                            ; 0053fdf8
    SHRD EAX,EDX,0x10                   ; 0053fdfa
    MOV EDX,EAX                         ; 0053fdfe
    MOV dword ptr [EBP + 0x44],EAX      ; 0053fe00
    MOV EAX,ESI                         ; 0053fe03
    IMUL EDX                            ; 0053fe05
    SHRD EAX,EDX,0x10                   ; 0053fe07
    MOV EDX,EAX                         ; 0053fe0b
    MOV EAX,dword ptr [EBX + 0x28]      ; 0053fe0d | DAT_0062903c
    ADD EAX,EDX                         ; 0053fe10
    MOV dword ptr [EBP + 0x40],EAX      ; 0053fe12
    INC dword ptr [0x01e7dacc]          ; 0053fe15 | DAT_01e7dacc
    JMP 0x0053f9e2                      ; 0053fe1b
        ;   XREF to: 0053f9e2 (UNCONDITIONAL_JUMP)  ; LAB_0053f9e2
    MOV EAX,0xffffffff                  ; 0053fe20
        ;   Label: LAB_0053fe20
    XOR EDX,EDX                         ; 0053fe25
    DIV ECX                             ; 0053fe27
    MOV ECX,EAX                         ; 0053fe29
    JMP 0x0053fc69                      ; 0053fe2b
        ;   XREF to: 0053fc69 (UNCONDITIONAL_JUMP)  ; LAB_0053fc69
    MOV EAX,dword ptr [EBX + 0xc]       ; 0053fe30 | DAT_00629020
        ;   Label: LAB_0053fe30
    MOV dword ptr [ESP + 0x48],EAX      ; 0053fe33
    MOV EAX,dword ptr [EDI + 0xc]       ; 0053fe37 | DAT_00629020
    JMP 0x0053fd93                      ; 0053fe3a
        ;   XREF to: 0053fd93 (UNCONDITIONAL_JUMP)  ; LAB_0053fd93
    MOV EAX,dword ptr [EDI + 0x8]       ; 0053fe3f | DAT_0062901c
        ;   Label: LAB_0053fe3f
    MOV EDX,dword ptr [EBX + 0x8]       ; 0053fe42 | DAT_0062901c
    SUB EAX,EDX                         ; 0053fe45
    MOV EDX,EAX                         ; 0053fe47
    MOV EAX,ECX                         ; 0053fe49
    IMUL EDX                            ; 0053fe4b
    SHRD EAX,EDX,0x10                   ; 0053fe4d
    MOV EDX,EAX                         ; 0053fe51
    MOV dword ptr [EBP + 0x2c],EAX      ; 0053fe53
    MOV EAX,ESI                         ; 0053fe56
    IMUL EDX                            ; 0053fe58
    SHRD EAX,EDX,0x10                   ; 0053fe5a
    MOV dword ptr [ESP + 0x40],EAX      ; 0053fe5e
    MOV EDX,dword ptr [ESP + 0x40]      ; 0053fe62
    MOV EAX,dword ptr [EBX + 0x8]       ; 0053fe66 | DAT_0062901c
    ADD EAX,EDX                         ; 0053fe69
    MOV dword ptr [EBP + 0x28],EAX      ; 0053fe6b
    JMP 0x0053fdbf                      ; 0053fe6e
        ;   XREF to: 0053fdbf (UNCONDITIONAL_JUMP)  ; LAB_0053fdbf
    INC ECX                             ; 0053fe73
        ;   Label: LAB_0053fe73
    ADD EAX,0x50                        ; 0053fe74
    CMP ECX,EDX                         ; 0053fe77
    JL 0x0053fa1f                       ; 0053fe79
        ;   XREF to: 0053fa1f (CONDITIONAL_JUMP)  ; LAB_0053fa1f
    XOR EAX,EAX                         ; 0053fe7f
        ;   Label: LAB_0053fe7f
    JMP 0x0053fa2f                      ; 0053fe81
        ;   XREF to: 0053fa2f (UNCONDITIONAL_JUMP)  ; LAB_0053fa2f
    INC EDX                             ; 0053fe86
        ;   Label: LAB_0053fe86
    ADD EAX,0x50                        ; 0053fe87
    CMP EDX,EBP                         ; 0053fe8a
    JL 0x0053fa5e                       ; 0053fe8c
        ;   XREF to: 0053fa5e (CONDITIONAL_JUMP)  ; LAB_0053fa5e
    XOR EAX,EAX                         ; 0053fe92
        ;   Label: LAB_0053fe92
    JMP 0x0053fa6e                      ; 0053fe94
        ;   XREF to: 0053fa6e (UNCONDITIONAL_JUMP)  ; LAB_0053fa6e
    INC EDX                             ; 0053fe99
        ;   Label: LAB_0053fe99
    ADD EAX,0x50                        ; 0053fe9a
    CMP EDX,EDI                         ; 0053fe9d
    JL 0x0053fab3                       ; 0053fe9f
        ;   XREF to: 0053fab3 (CONDITIONAL_JUMP)  ; LAB_0053fab3
    XOR EAX,EAX                         ; 0053fea5
        ;   Label: LAB_0053fea5
    JMP 0x0053fac3                      ; 0053fea7
        ;   XREF to: 0053fac3 (UNCONDITIONAL_JUMP)  ; LAB_0053fac3
    INC EDX                             ; 0053feac
        ;   Label: LAB_0053feac
    ADD EAX,0x50                        ; 0053fead
    CMP EDX,ESI                         ; 0053feb0
    JL 0x0053fb00                       ; 0053feb2
        ;   XREF to: 0053fb00 (CONDITIONAL_JUMP)  ; LAB_0053fb00
    XOR EAX,EAX                         ; 0053feb8
        ;   Label: LAB_0053feb8
    JMP 0x0053fb10                      ; 0053feba
        ;   XREF to: 0053fb10 (UNCONDITIONAL_JUMP)  ; LAB_0053fb10

