; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkaddr_0059f520_cpp_FUN_0059f700(int *param_1,byte *param_2,int *param_3)
;
;
; XREF[1]:
;   unkaddr_0059f520.cpp_FUN_0059f5a0 at 0059f5ba
;
; Referenced Globals:
;   undefined1* switchdataD_0059f5cc = 0059f970
;   undefined1* switchdataD_0059f628 = 0059f8c3
;   undefined4 DAT_00626114
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005c12b0
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c__strtod_FUN_005c3228
;   unkaddr_0059f520.cpp_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059f700
        ;   Label: unkaddr_0059f520.cpp_FUN_0059f700
    PUSH ESI                            ; 0059f701
    PUSH EDI                            ; 0059f702
    PUSH EBP                            ; 0059f703
    MOV EBP,ESP                         ; 0059f704
    SUB ESP,0xd8                        ; 0059f706
    AND ESP,0xfffffff8                  ; 0059f70c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0059f70f
    XOR EDX,EDX                         ; 0059f712
    MOV AH,byte ptr [EBX]               ; 0059f714
    MOV dword ptr [ESP + 0xbc],EDX      ; 0059f716
    MOV dword ptr [ESP + 0xd0],EDX      ; 0059f71d
    MOV dword ptr [ESP + 0xd4],EDX      ; 0059f724
    MOV dword ptr [ESP + 0xc0],EDX      ; 0059f72b
    TEST AH,AH                          ; 0059f732
    JZ 0x0059f774                       ; 0059f734
        ;   XREF to: 0059f774 (CONDITIONAL_JUMP)  ; LAB_0059f774
    CMP dword ptr [ESP + 0xd0],0x0      ; 0059f736
        ;   Label: LAB_0059f736
    JNZ 0x0059f774                      ; 0059f73e
        ;   XREF to: 0059f774 (CONDITIONAL_JUMP)  ; LAB_0059f774
    MOV AL,byte ptr [EBX]               ; 0059f740
    XOR ECX,ECX                         ; 0059f742
    INC AL                              ; 0059f744
    MOV CL,AL                           ; 0059f746
    MOV DH,byte ptr [ECX + 0x626114]    ; 0059f748 | DAT_00626114
    LEA EAX,[EBX + 0x1]                 ; 0059f74e
    TEST DH,0x2                         ; 0059f751
    JZ 0x0059f7bb                       ; 0059f754
        ;   XREF to: 0059f7bb (CONDITIONAL_JUMP)  ; LAB_0059f7bb
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059f756
    PUSH EDX                            ; 0059f759
    MOV EBX,EAX                         ; 0059f75a
    CALL unkaddr_0059f520.cpp_FUN_005a0840 ; 0059f75c
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_005a0840()
    ADD ESP,0x4                         ; 0059f761
    TEST EAX,EAX                        ; 0059f764
    JL 0x0059f7b2                       ; 0059f766
        ;   XREF to: 0059f7b2 (CONDITIONAL_JUMP)  ; LAB_0059f7b2
    ADD dword ptr [ESP + 0xd4],EAX      ; 0059f768
    CMP byte ptr [EBX],0x0              ; 0059f76f
        ;   Label: LAB_0059f76f
    JNZ 0x0059f736                      ; 0059f772
        ;   XREF to: 0059f736 (CONDITIONAL_JUMP)  ; LAB_0059f736
    MOV EBX,dword ptr [ESP + 0xd0]      ; 0059f774
        ;   Label: LAB_0059f774
    CMP EBX,-0x1                        ; 0059f77b
    JL 0x0059f7a4                       ; 0059f77e
        ;   XREF to: 0059f7a4 (CONDITIONAL_JUMP)  ; LAB_0059f7a4
    TEST EBX,EBX                        ; 0059f780
    JZ 0x005a0784                       ; 0059f782
        ;   XREF to: 005a0784 (CONDITIONAL_JUMP)  ; LAB_005a0784
    CMP dword ptr [ESP + 0xc0],0x0      ; 0059f788
    JNZ 0x005a0784                      ; 0059f790
        ;   XREF to: 005a0784 (CONDITIONAL_JUMP)  ; LAB_005a0784
    CMP dword ptr [ESP + 0xbc],0x0      ; 0059f796
    JNZ 0x005a0784                      ; 0059f79e
        ;   XREF to: 005a0784 (CONDITIONAL_JUMP)  ; LAB_005a0784
    MOV EDI,0xffffffff                  ; 0059f7a4
        ;   Label: LAB_0059f7a4
    MOV EAX,EDI                         ; 0059f7a9
    MOV ESP,EBP                         ; 0059f7ab
    POP EBP                             ; 0059f7ad
    POP EDI                             ; 0059f7ae
    POP ESI                             ; 0059f7af
    POP EBX                             ; 0059f7b0
    RET                                 ; 0059f7b1
    MOV dword ptr [ESP + 0xd0],EAX      ; 0059f7b2
        ;   Label: LAB_0059f7b2
    JMP 0x0059f774                      ; 0059f7b9
        ;   XREF to: 0059f774 (UNCONDITIONAL_JUMP)  ; LAB_0059f774
    MOV CL,byte ptr [EBX]               ; 0059f7bb
        ;   Label: LAB_0059f7bb
    CMP CL,0x25                         ; 0059f7bd
    JNZ 0x0059f7ca                      ; 0059f7c0
        ;   XREF to: 0059f7ca (CONDITIONAL_JUMP)  ; LAB_0059f7ca
    MOV CH,byte ptr [EAX]               ; 0059f7c2
    MOV EBX,EAX                         ; 0059f7c4
    CMP CH,CL                           ; 0059f7c6
    JNZ 0x0059f82b                      ; 0059f7c8
        ;   XREF to: 0059f82b (CONDITIONAL_JUMP)  ; LAB_0059f82b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0059f7ca
        ;   Label: LAB_0059f7ca
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059f7cd
    PUSH ESI                            ; 0059f7d0
    MOV EAX,dword ptr [EAX]             ; 0059f7d1
    CALL dword ptr [EAX + 0x4]          ; 0059f7d3
    MOVZX ESI,byte ptr [EBX]            ; 0059f7d6
    ADD ESP,0x4                         ; 0059f7d9
    CMP EAX,ESI                         ; 0059f7dc
    JNZ 0x0059f7f5                      ; 0059f7de
        ;   XREF to: 0059f7f5 (CONDITIONAL_JUMP)  ; LAB_0059f7f5
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0059f7e0
    INC EAX                             ; 0059f7e7
    INC EBX                             ; 0059f7e8
    MOV dword ptr [ESP + 0xd4],EAX      ; 0059f7e9
    JMP 0x0059f76f                      ; 0059f7f0
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    TEST EAX,EAX                        ; 0059f7f5
        ;   Label: LAB_0059f7f5
    JGE 0x0059f805                      ; 0059f7f7
        ;   XREF to: 0059f805 (CONDITIONAL_JUMP)  ; LAB_0059f805
    MOV dword ptr [ESP + 0xd0],EAX      ; 0059f7f9
    JMP 0x0059f774                      ; 0059f800
        ;   XREF to: 0059f774 (UNCONDITIONAL_JUMP)  ; LAB_0059f774
    PUSH EAX                            ; 0059f805
        ;   Label: LAB_0059f805
    MOV EDI,dword ptr [EBP + 0x14]      ; 0059f806
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059f809
    PUSH EDI                            ; 0059f80c
    MOV EDX,dword ptr [EDX]             ; 0059f80d
    CALL dword ptr [EDX + 0x8]          ; 0059f80f
    ADD ESP,0x8                         ; 0059f812
    TEST EAX,EAX                        ; 0059f815
    JNZ 0x0059f774                      ; 0059f817
        ;   XREF to: 0059f774 (CONDITIONAL_JUMP)  ; LAB_0059f774
    MOV EDI,0xffffffff                  ; 0059f81d
    MOV EAX,EDI                         ; 0059f822
    MOV ESP,EBP                         ; 0059f824
    POP EBP                             ; 0059f826
    POP EDI                             ; 0059f827
    POP ESI                             ; 0059f828
    POP EBX                             ; 0059f829
    RET                                 ; 0059f82a
    MOV ECX,0x1                         ; 0059f82b
        ;   Label: LAB_0059f82b
    XOR EDX,EDX                         ; 0059f830
    MOV EDI,0x7fffffff                  ; 0059f832
    MOV dword ptr [ESP + 0x9c],EDX      ; 0059f837
    MOV dword ptr [ESP + 0xc4],EDX      ; 0059f83e
    MOV dword ptr [ESP + 0xa0],EDX      ; 0059f845
    MOV dword ptr [ESP + 0x98],EDX      ; 0059f84c
    MOV DL,byte ptr [EAX]               ; 0059f853
    MOV dword ptr [ESP + 0xc8],ECX      ; 0059f855
    TEST DL,DL                          ; 0059f85c
    JZ 0x0059f8a4                       ; 0059f85e
        ;   XREF to: 0059f8a4 (CONDITIONAL_JUMP)  ; LAB_0059f8a4
    XOR EAX,EAX                         ; 0059f860
        ;   Label: LAB_0059f860
    MOV AL,byte ptr [EBX]               ; 0059f862
    XOR ESI,ESI                         ; 0059f864
    CMP EAX,0x4c                        ; 0059f866
    JNC 0x0059f9d9                      ; 0059f869
        ;   XREF to: 0059f9d9 (CONDITIONAL_JUMP)  ; LAB_0059f9d9
    CMP EAX,0x2a                        ; 0059f86f
    JNC 0x0059f9f6                      ; 0059f872
        ;   XREF to: 0059f9f6 (CONDITIONAL_JUMP)  ; LAB_0059f9f6
    MOV CL,AL                           ; 0059f878
        ;   Label: LAB_0059f878
    INC CL                              ; 0059f87a
    AND ECX,0xff                        ; 0059f87c
    TEST byte ptr [ECX + 0x626114],0x20 ; 0059f882 | DAT_00626114
    JZ 0x0059f8a4                       ; 0059f889
        ;   XREF to: 0059f8a4 (CONDITIONAL_JUMP)  ; LAB_0059f8a4
    SUB EAX,0x30                        ; 0059f88b
    CMP EDI,0x7fffffff                  ; 0059f88e
    JNZ 0x0059f9cf                      ; 0059f894
        ;   XREF to: 0059f9cf (CONDITIONAL_JUMP)  ; LAB_0059f9cf
    MOV EDI,EAX                         ; 0059f89a
    TEST ESI,ESI                        ; 0059f89c
        ;   Label: LAB_0059f89c
    JZ 0x0059fa02                       ; 0059f89e
        ;   XREF to: 0059fa02 (CONDITIONAL_JUMP)  ; LAB_0059fa02
    XOR EAX,EAX                         ; 0059f8a4
        ;   Label: LAB_0059f8a4
    MOV AL,byte ptr [EBX]               ; 0059f8a6
    MOV dword ptr [ESP + 0xb0],EAX      ; 0059f8a8
    SUB EAX,0x44                        ; 0059f8af
    INC EBX                             ; 0059f8b2
    CMP EAX,0x34                        ; 0059f8b3
    JA 0x005a077e                       ; 0059f8b6
        ;   XREF to: 005a077e (CONDITIONAL_JUMP)  ; caseD_77
    JMP dword ptr [EAX*0x4 + 0x59f628]  ; 0059f8bc | caseD_64 | caseD_67 | caseD_77
        ;   Label: switchD
    MOV dword ptr [ESP + 0xcc],0xa      ; 0059f8c3
        ;   Label: caseD_44
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059f8ce
        ;   Label: LAB_0059f8ce
    PUSH EDX                            ; 0059f8d1
    CALL unkaddr_0059f520.cpp_FUN_005a0840 ; 0059f8d2
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_005a0840()
    ADD ESP,0x4                         ; 0059f8d7
    TEST EAX,EAX                        ; 0059f8da
    JL 0x0059ff34                       ; 0059f8dc
        ;   XREF to: 0059ff34 (CONDITIONAL_JUMP)  ; LAB_0059ff34
    ADD dword ptr [ESP + 0xd4],EAX      ; 0059f8e2
    TEST EDI,EDI                        ; 0059f8e9
    JLE 0x0059f92d                      ; 0059f8eb
        ;   XREF to: 0059f92d (CONDITIONAL_JUMP)  ; LAB_0059f92d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0059f8ed
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059f8f0
    PUSH ESI                            ; 0059f8f3
    MOV EAX,dword ptr [EAX]             ; 0059f8f4
    CALL dword ptr [EAX + 0x4]          ; 0059f8f6
    ADD ESP,0x4                         ; 0059f8f9
    TEST EAX,EAX                        ; 0059f8fc
    JL 0x0059ff34                       ; 0059f8fe
        ;   XREF to: 0059ff34 (CONDITIONAL_JUMP)  ; LAB_0059ff34
    MOV ECX,dword ptr [ESP + 0xd4]      ; 0059f904
    LEA EDX,[EDI + -0x1]                ; 0059f90b
    INC ECX                             ; 0059f90e
    CMP EAX,0x2d                        ; 0059f90f
    JNZ 0x005a006a                      ; 0059f912
        ;   XREF to: 005a006a (CONDITIONAL_JUMP)  ; LAB_005a006a
    MOV ESI,0x1                         ; 0059f918
    MOV dword ptr [ESP + 0xd4],ECX      ; 0059f91d
    MOV EDI,EDX                         ; 0059f924
    MOV dword ptr [ESP + 0xc4],ESI      ; 0059f926
    TEST EDI,EDI                        ; 0059f92d
        ;   Label: LAB_0059f92d
    JLE 0x005a00a6                      ; 0059f92f
        ;   XREF to: 005a00a6 (CONDITIONAL_JUMP)  ; LAB_005a00a6
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059f935
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059f938
    PUSH EDX                            ; 0059f93b
    MOV EAX,dword ptr [EAX]             ; 0059f93c
    CALL dword ptr [EAX + 0x4]          ; 0059f93e
    ADD ESP,0x4                         ; 0059f941
    MOV dword ptr [ESP + 0xa4],EAX      ; 0059f944
    TEST EAX,EAX                        ; 0059f94b
    JL 0x005a009f                       ; 0059f94d
        ;   XREF to: 005a009f (CONDITIONAL_JUMP)  ; LAB_005a009f
    PUSH EAX                            ; 0059f953
    MOV ESI,0x63                        ; 0059f954
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 0059f959
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    SUB EAX,0x30                        ; 0059f95e
    ADD ESP,0x4                         ; 0059f961
    CMP EAX,0x16                        ; 0059f964
    JA 0x0059f972                       ; 0059f967
        ;   XREF to: 0059f972 (CONDITIONAL_JUMP)  ; caseD_40
    JMP dword ptr [EAX*0x4 + 0x59f5cc]  ; 0059f969 | caseD_30 | caseD_31 | caseD_32
        ;   Label: switchD
    XOR ESI,ESI                         ; 0059f970
        ;   Label: caseD_30
    MOV ECX,dword ptr [ESP + 0xcc]      ; 0059f972
        ;   Label: caseD_3a
    CMP ESI,ECX                         ; 0059f979
    JG 0x005a01b9                       ; 0059f97b
        ;   XREF to: 005a01b9 (CONDITIONAL_JUMP)  ; LAB_005a01b9
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0059f981
    IMUL EAX,ECX                        ; 0059f988
    MOV ECX,0x1                         ; 0059f98b
    ADD EAX,ESI                         ; 0059f990
    MOV ESI,dword ptr [ESP + 0xd4]      ; 0059f992
    MOV dword ptr [ESP + 0x9c],EAX      ; 0059f999
    MOV dword ptr [ESP + 0xa0],ECX      ; 0059f9a0
    ADD ESI,ECX                         ; 0059f9a7
    SUB EDI,ECX                         ; 0059f9a9
    MOV dword ptr [ESP + 0xd4],ESI      ; 0059f9ab
    JMP 0x0059f92d                      ; 0059f9b2
        ;   XREF to: 0059f92d (UNCONDITIONAL_JUMP)  ; LAB_0059f92d
    MOV dword ptr [ESP + 0x98],EAX      ; 0059f9b7
        ;   Label: LAB_0059f9b7
    JMP 0x0059f89c                      ; 0059f9be
        ;   XREF to: 0059f89c (UNCONDITIONAL_JUMP)  ; LAB_0059f89c
    MOV dword ptr [ESP + 0xc8],ESI      ; 0059f9c3
        ;   Label: LAB_0059f9c3
    JMP 0x0059f89c                      ; 0059f9ca
        ;   XREF to: 0059f89c (UNCONDITIONAL_JUMP)  ; LAB_0059f89c
    IMUL EDI,EDI,0xa                    ; 0059f9cf
        ;   Label: LAB_0059f9cf
    ADD EDI,EAX                         ; 0059f9d2
    JMP 0x0059f89c                      ; 0059f9d4
        ;   XREF to: 0059f89c (UNCONDITIONAL_JUMP)  ; LAB_0059f89c
    JBE 0x0059f9b7                      ; 0059f9d9
        ;   XREF to: 0059f9b7 (CONDITIONAL_JUMP)  ; LAB_0059f9b7
        ;   Label: LAB_0059f9d9
    CMP EAX,0x68                        ; 0059f9db
    JNC 0x0059f9ea                      ; 0059f9de
        ;   XREF to: 0059f9ea (CONDITIONAL_JUMP)  ; LAB_0059f9ea
    CMP EAX,0x4e                        ; 0059f9e0
    JZ 0x0059f9b7                       ; 0059f9e3
        ;   XREF to: 0059f9b7 (CONDITIONAL_JUMP)  ; LAB_0059f9b7
    JMP 0x0059f878                      ; 0059f9e5
        ;   XREF to: 0059f878 (UNCONDITIONAL_JUMP)  ; LAB_0059f878
    JBE 0x0059f9b7                      ; 0059f9ea
        ;   XREF to: 0059f9b7 (CONDITIONAL_JUMP)  ; LAB_0059f9b7
        ;   Label: LAB_0059f9ea
    CMP EAX,0x6c                        ; 0059f9ec
    JZ 0x0059f9b7                       ; 0059f9ef
        ;   XREF to: 0059f9b7 (CONDITIONAL_JUMP)  ; LAB_0059f9b7
    JMP 0x0059f878                      ; 0059f9f1
        ;   XREF to: 0059f878 (UNCONDITIONAL_JUMP)  ; LAB_0059f878
    JBE 0x0059f9c3                      ; 0059f9f6
        ;   XREF to: 0059f9c3 (CONDITIONAL_JUMP)  ; LAB_0059f9c3
        ;   Label: LAB_0059f9f6
    CMP EAX,0x46                        ; 0059f9f8
    JZ 0x0059f9b7                       ; 0059f9fb
        ;   XREF to: 0059f9b7 (CONDITIONAL_JUMP)  ; LAB_0059f9b7
    JMP 0x0059f878                      ; 0059f9fd
        ;   XREF to: 0059f878 (UNCONDITIONAL_JUMP)  ; LAB_0059f878
    MOV DH,byte ptr [EBX + 0x1]         ; 0059fa02
        ;   Label: LAB_0059fa02
    INC EBX                             ; 0059fa05
    TEST DH,DH                          ; 0059fa06
    JNZ 0x0059f860                      ; 0059fa08
        ;   XREF to: 0059f860 (CONDITIONAL_JUMP)  ; LAB_0059f860
    JMP 0x0059f8a4                      ; 0059fa0e
        ;   XREF to: 0059f8a4 (UNCONDITIONAL_JUMP)  ; LAB_0059f8a4
    CMP EDI,0x7fffffff                  ; 0059fa13
        ;   Label: caseD_63
    JNZ 0x0059fa20                      ; 0059fa19
        ;   XREF to: 0059fa20 (CONDITIONAL_JUMP)  ; LAB_0059fa20
    MOV EDI,0x1                         ; 0059fa1b
    PUSH 0x20                           ; 0059fa20
        ;   Label: LAB_0059fa20
    PUSH 0xff                           ; 0059fa22
    LEA EAX,[ESP + 0x74]                ; 0059fa27
    PUSH EAX                            ; 0059fa2b
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0059fa2c
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0059fa31
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0059fa34
        ;   Label: LAB_0059fa34
    XOR ESI,ESI                         ; 0059fa3b
    TEST EAX,EAX                        ; 0059fa3d
    JNZ 0x0059fc6c                      ; 0059fa3f
        ;   XREF to: 0059fc6c (CONDITIONAL_JUMP)  ; LAB_0059fc6c
    TEST EDI,EDI                        ; 0059fa45
        ;   Label: LAB_0059fa45
    JLE 0x0059fc85                      ; 0059fa47
        ;   XREF to: 0059fc85 (CONDITIONAL_JUMP)  ; LAB_0059fc85
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059fa4d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059fa50
    PUSH ECX                            ; 0059fa53
    MOV EAX,dword ptr [EAX]             ; 0059fa54
    CALL dword ptr [EAX + 0x4]          ; 0059fa56
    ADD ESP,0x4                         ; 0059fa59
    DEC EDI                             ; 0059fa5c
    MOV dword ptr [ESP + 0xac],EAX      ; 0059fa5d
    TEST EAX,EAX                        ; 0059fa64
    JL 0x0059fc7e                       ; 0059fa66
        ;   XREF to: 0059fc7e (CONDITIONAL_JUMP)  ; LAB_0059fc7e
    MOV EDX,EAX                         ; 0059fa6c
    SHR EDX,0x3                         ; 0059fa6e
    MOV DL,byte ptr [ESP + EDX*0x1 + 0x6c] ; 0059fa71
    AND EDX,0xff                        ; 0059fa75
    MOV ECX,EAX                         ; 0059fa7b
    MOV dword ptr [ESP + 0xa8],EDX      ; 0059fa7d
    AND ECX,0x7                         ; 0059fa84
    MOV EDX,0x1                         ; 0059fa87
    SHL EDX,CL                          ; 0059fa8c
    MOV ECX,EDX                         ; 0059fa8e
    TEST dword ptr [ESP + 0xa8],ECX     ; 0059fa90
    JZ 0x0059fcbb                       ; 0059fa97
        ;   XREF to: 0059fcbb (CONDITIONAL_JUMP)  ; LAB_0059fcbb
    INC dword ptr [ESP + 0xd4]          ; 0059fa9d
    TEST ESI,ESI                        ; 0059faa4
    JNZ 0x0059fcdc                      ; 0059faa6
        ;   XREF to: 0059fcdc (CONDITIONAL_JUMP)  ; LAB_0059fcdc
    MOV dword ptr [ESP + 0xa0],0x1      ; 0059faac
    JMP 0x0059fa45                      ; 0059fab7
        ;   XREF to: 0059fa45 (UNCONDITIONAL_JUMP)  ; LAB_0059fa45
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059fab9
        ;   Label: caseD_73
    PUSH ECX                            ; 0059fabc
    CALL unkaddr_0059f520.cpp_FUN_005a0840 ; 0059fabd
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_005a0840()
    ADD ESP,0x4                         ; 0059fac2
    TEST EAX,EAX                        ; 0059fac5
    JL 0x0059fb3b                       ; 0059fac7
        ;   XREF to: 0059fb3b (CONDITIONAL_JUMP)  ; LAB_0059fb3b
    PUSH 0x20                           ; 0059fac9
    MOV ESI,dword ptr [ESP + 0xd8]      ; 0059facb
    PUSH 0xff                           ; 0059fad2
    ADD ESI,EAX                         ; 0059fad7
    LEA EAX,[ESP + 0x74]                ; 0059fad9
    PUSH EAX                            ; 0059fadd
    MOV dword ptr [ESP + 0xe0],ESI      ; 0059fade
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0059fae5
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0059faea
    MOV DH,byte ptr [ESP + 0x70]        ; 0059faed
    MOV EAX,0x9                         ; 0059faf1
    AND DH,0xfe                         ; 0059faf6
    MOV dword ptr [ESP + 0xa4],EAX      ; 0059faf9
    MOV byte ptr [ESP + 0x70],DH        ; 0059fb00
    MOV CL,byte ptr [ESP + 0xa4]        ; 0059fb04
        ;   Label: LAB_0059fb04
    MOV DL,0x1                          ; 0059fb0b
    AND CL,0x7                          ; 0059fb0d
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0059fb10
    SHL DL,CL                           ; 0059fb17
    SAR EAX,0x3                         ; 0059fb19
    NOT DL                              ; 0059fb1c
    AND byte ptr [ESP + EAX*0x1 + 0x6c],DL ; 0059fb1e
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0059fb22
    INC EAX                             ; 0059fb29
    MOV dword ptr [ESP + 0xa4],EAX      ; 0059fb2a
    CMP EAX,0xd                         ; 0059fb31
    JLE 0x0059fb04                      ; 0059fb34
        ;   XREF to: 0059fb04 (CONDITIONAL_JUMP)  ; LAB_0059fb04
    JMP 0x0059fa34                      ; 0059fb36
        ;   XREF to: 0059fa34 (UNCONDITIONAL_JUMP)  ; LAB_0059fa34
    MOV dword ptr [ESP + 0xd0],EAX      ; 0059fb3b
        ;   Label: LAB_0059fb3b
    JMP 0x0059f76f                      ; 0059fb42
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    CMP byte ptr [EBX],0x5e             ; 0059fb47
        ;   Label: caseD_5b
    JNZ 0x0059fb81                      ; 0059fb4a
        ;   XREF to: 0059fb81 (CONDITIONAL_JUMP)  ; LAB_0059fb81
    PUSH 0x20                           ; 0059fb4c
    PUSH 0xff                           ; 0059fb4e
    LEA EAX,[ESP + 0x74]                ; 0059fb53
    PUSH EAX                            ; 0059fb57
    INC EBX                             ; 0059fb58
    XOR ESI,ESI                         ; 0059fb59
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0059fb5b
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
        ;   Label: LAB_0059fb5b
    ADD ESP,0xc                         ; 0059fb60
    CMP byte ptr [EBX],0x5d             ; 0059fb63
    JZ 0x0059fb91                       ; 0059fb66
        ;   XREF to: 0059fb91 (CONDITIONAL_JUMP)  ; LAB_0059fb91
    MOV DH,byte ptr [EBX]               ; 0059fb68
        ;   Label: LAB_0059fb68
    TEST DH,DH                          ; 0059fb6a
    JZ 0x0059fa34                       ; 0059fb6c
        ;   XREF to: 0059fa34 (CONDITIONAL_JUMP)  ; LAB_0059fa34
    LEA EAX,[EBX + 0x1]                 ; 0059fb72
    CMP DH,0x5d                         ; 0059fb75
    JNZ 0x0059fba4                      ; 0059fb78
        ;   XREF to: 0059fba4 (CONDITIONAL_JUMP)  ; LAB_0059fba4
    MOV EBX,EAX                         ; 0059fb7a
    JMP 0x0059fa34                      ; 0059fb7c
        ;   XREF to: 0059fa34 (UNCONDITIONAL_JUMP)  ; LAB_0059fa34
    PUSH 0x20                           ; 0059fb81
        ;   Label: LAB_0059fb81
    PUSH 0x0                            ; 0059fb83
    LEA EAX,[ESP + 0x74]                ; 0059fb85
    PUSH EAX                            ; 0059fb89
    MOV ESI,0x1                         ; 0059fb8a
    JMP 0x0059fb5b                      ; 0059fb8f
        ;   XREF to: 0059fb5b (UNCONDITIONAL_JUMP)  ; LAB_0059fb5b
    TEST ESI,ESI                        ; 0059fb91
        ;   Label: LAB_0059fb91
    JZ 0x0059fb9d                       ; 0059fb93
        ;   XREF to: 0059fb9d (CONDITIONAL_JUMP)  ; LAB_0059fb9d
    OR byte ptr [ESP + 0x77],0x20       ; 0059fb95
    INC EBX                             ; 0059fb9a
        ;   Label: LAB_0059fb9a
    JMP 0x0059fb68                      ; 0059fb9b
        ;   XREF to: 0059fb68 (UNCONDITIONAL_JUMP)  ; LAB_0059fb68
    AND byte ptr [ESP + 0x77],0xdf      ; 0059fb9d
        ;   Label: LAB_0059fb9d
    JMP 0x0059fb9a                      ; 0059fba2
        ;   XREF to: 0059fb9a (UNCONDITIONAL_JUMP)  ; LAB_0059fb9a
    CMP DH,0x2d                         ; 0059fba4
        ;   Label: LAB_0059fba4
    JNZ 0x0059fc30                      ; 0059fba7
        ;   XREF to: 0059fc30 (CONDITIONAL_JUMP)  ; LAB_0059fc30
    XOR EDX,EDX                         ; 0059fbad
    MOV DL,byte ptr [EBX + 0x1]         ; 0059fbaf
    MOV EBX,EAX                         ; 0059fbb2
    TEST EDX,EDX                        ; 0059fbb4
    JZ 0x0059fa34                       ; 0059fbb6
        ;   XREF to: 0059fa34 (CONDITIONAL_JUMP)  ; LAB_0059fa34
    MOV AL,byte ptr [EAX + -0x2]        ; 0059fbbc
    AND EAX,0xff                        ; 0059fbbf
    CMP EDX,EAX                         ; 0059fbc4
    JGE 0x0059fbd8                      ; 0059fbc6
        ;   XREF to: 0059fbd8 (CONDITIONAL_JUMP)  ; LAB_0059fbd8
    MOV dword ptr [ESP + 0xa4],EDX      ; 0059fbc8
    MOV EDX,EAX                         ; 0059fbcf
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0059fbd1
    MOV dword ptr [ESP + 0xa4],EAX      ; 0059fbd8
        ;   Label: LAB_0059fbd8
    CMP EAX,EDX                         ; 0059fbdf
    JG 0x0059fb68                       ; 0059fbe1
        ;   XREF to: 0059fb68 (CONDITIONAL_JUMP)  ; LAB_0059fb68
    MOV CL,byte ptr [ESP + 0xa4]        ; 0059fbe3
        ;   Label: LAB_0059fbe3
    MOV AL,0x1                          ; 0059fbea
    AND CL,0x7                          ; 0059fbec
    SHL AL,CL                           ; 0059fbef
    MOV CL,AL                           ; 0059fbf1
    TEST ESI,ESI                        ; 0059fbf3
    JZ 0x0059fc1e                       ; 0059fbf5
        ;   XREF to: 0059fc1e (CONDITIONAL_JUMP)  ; LAB_0059fc1e
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0059fbf7
    SHR EAX,0x3                         ; 0059fbfe
    OR byte ptr [ESP + EAX*0x1 + 0x6c],CL ; 0059fc01
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0059fc05
        ;   Label: LAB_0059fc05
    INC EAX                             ; 0059fc0c
    MOV dword ptr [ESP + 0xa4],EAX      ; 0059fc0d
    CMP EDX,EAX                         ; 0059fc14
    JL 0x0059fb68                       ; 0059fc16
        ;   XREF to: 0059fb68 (CONDITIONAL_JUMP)  ; LAB_0059fb68
    JMP 0x0059fbe3                      ; 0059fc1c
        ;   XREF to: 0059fbe3 (UNCONDITIONAL_JUMP)  ; LAB_0059fbe3
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0059fc1e
        ;   Label: LAB_0059fc1e
    SAR EAX,0x3                         ; 0059fc25
    NOT CL                              ; 0059fc28
    AND byte ptr [ESP + EAX*0x1 + 0x6c],CL ; 0059fc2a
    JMP 0x0059fc05                      ; 0059fc2e
        ;   XREF to: 0059fc05 (UNCONDITIONAL_JUMP)  ; LAB_0059fc05
    TEST ESI,ESI                        ; 0059fc30
        ;   Label: LAB_0059fc30
    JZ 0x0059fc4e                       ; 0059fc32
        ;   XREF to: 0059fc4e (CONDITIONAL_JUMP)  ; LAB_0059fc4e
    XOR EAX,EAX                         ; 0059fc34
    MOV CL,DH                           ; 0059fc36
    MOV AL,DH                           ; 0059fc38
    AND CL,0x7                          ; 0059fc3a
    MOV DL,0x1                          ; 0059fc3d
    SHR EAX,0x3                         ; 0059fc3f
    SHL DL,CL                           ; 0059fc42
    OR byte ptr [ESP + EAX*0x1 + 0x6c],DL ; 0059fc44
    INC EBX                             ; 0059fc48
    JMP 0x0059fb68                      ; 0059fc49
        ;   XREF to: 0059fb68 (UNCONDITIONAL_JUMP)  ; LAB_0059fb68
    XOR EAX,EAX                         ; 0059fc4e
        ;   Label: LAB_0059fc4e
    MOV CL,DH                           ; 0059fc50
    MOV AL,DH                           ; 0059fc52
    AND CL,0x7                          ; 0059fc54
    MOV DL,0x1                          ; 0059fc57
    SHL DL,CL                           ; 0059fc59
    MOV CL,DL                           ; 0059fc5b
    SAR EAX,0x3                         ; 0059fc5d
    NOT CL                              ; 0059fc60
    AND byte ptr [ESP + EAX*0x1 + 0x6c],CL ; 0059fc62
    INC EBX                             ; 0059fc66
    JMP 0x0059fb68                      ; 0059fc67
        ;   XREF to: 0059fb68 (UNCONDITIONAL_JUMP)  ; LAB_0059fb68
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0059fc6c
        ;   Label: LAB_0059fc6c
    MOV EDX,dword ptr [EAX]             ; 0059fc6f
    ADD EDX,0x4                         ; 0059fc71
    MOV dword ptr [EAX],EDX             ; 0059fc74
    MOV ESI,dword ptr [EDX + -0x4]      ; 0059fc76
    JMP 0x0059fa45                      ; 0059fc79
        ;   XREF to: 0059fa45 (UNCONDITIONAL_JUMP)  ; LAB_0059fa45
    MOV dword ptr [ESP + 0xd0],EAX      ; 0059fc7e
        ;   Label: LAB_0059fc7e
    CMP dword ptr [ESP + 0xb0],0x63     ; 0059fc85
        ;   Label: LAB_0059fc85
    JZ 0x0059fc96                       ; 0059fc8d
        ;   XREF to: 0059fc96 (CONDITIONAL_JUMP)  ; LAB_0059fc96
    TEST ESI,ESI                        ; 0059fc8f
    JZ 0x0059fc96                       ; 0059fc91
        ;   XREF to: 0059fc96 (CONDITIONAL_JUMP)  ; LAB_0059fc96
    MOV byte ptr [ESI],0x0              ; 0059fc93
    CMP dword ptr [ESP + 0xa0],0x0      ; 0059fc96
        ;   Label: LAB_0059fc96
    JZ 0x0059f76f                       ; 0059fc9e
        ;   XREF to: 0059f76f (CONDITIONAL_JUMP)  ; LAB_0059f76f
    TEST ESI,ESI                        ; 0059fca4
    JZ 0x0059fcaf                       ; 0059fca6
        ;   XREF to: 0059fcaf (CONDITIONAL_JUMP)  ; LAB_0059fcaf
    INC dword ptr [ESP + 0xc0]          ; 0059fca8
    INC dword ptr [ESP + 0xbc]          ; 0059fcaf
        ;   Label: LAB_0059fcaf
    JMP 0x0059f76f                      ; 0059fcb6
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    PUSH EAX                            ; 0059fcbb
        ;   Label: LAB_0059fcbb
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059fcbc
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059fcbf
    PUSH ECX                            ; 0059fcc2
    MOV EDX,dword ptr [EDX]             ; 0059fcc3
    CALL dword ptr [EDX + 0x8]          ; 0059fcc5
    ADD ESP,0x8                         ; 0059fcc8
    TEST EAX,EAX                        ; 0059fccb
    JNZ 0x0059fc85                      ; 0059fccd
        ;   XREF to: 0059fc85 (CONDITIONAL_JUMP)  ; LAB_0059fc85
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0059fccf
    JMP 0x0059fc85                      ; 0059fcda
        ;   XREF to: 0059fc85 (UNCONDITIONAL_JUMP)  ; LAB_0059fc85
    INC ESI                             ; 0059fcdc
        ;   Label: LAB_0059fcdc
    MOV AL,byte ptr [ESP + 0xac]        ; 0059fcdd
    MOV byte ptr [ESI + -0x1],AL        ; 0059fce4
    MOV dword ptr [ESP + 0xa0],0x1      ; 0059fce7
    JMP 0x0059fa45                      ; 0059fcf2
        ;   XREF to: 0059fa45 (UNCONDITIONAL_JUMP)  ; LAB_0059fa45
    MOV ESI,dword ptr [EBP + 0x14]      ; 0059fcf7
        ;   Label: caseD_69
    PUSH ESI                            ; 0059fcfa
    CALL unkaddr_0059f520.cpp_FUN_005a0840 ; 0059fcfb
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_005a0840()
    ADD ESP,0x4                         ; 0059fd00
    TEST EAX,EAX                        ; 0059fd03
    JL 0x0059fdae                       ; 0059fd05
        ;   XREF to: 0059fdae (CONDITIONAL_JUMP)  ; LAB_0059fdae
    ADD dword ptr [ESP + 0xd4],EAX      ; 0059fd0b
    TEST EDI,EDI                        ; 0059fd12
    JLE 0x0059fd50                      ; 0059fd14
        ;   XREF to: 0059fd50 (CONDITIONAL_JUMP)  ; LAB_0059fd50
    PUSH ESI                            ; 0059fd16
    MOV EAX,dword ptr [ESI]             ; 0059fd17
    CALL dword ptr [EAX + 0x4]          ; 0059fd19
    ADD ESP,0x4                         ; 0059fd1c
    TEST EAX,EAX                        ; 0059fd1f
    JL 0x0059fdae                       ; 0059fd21
        ;   XREF to: 0059fdae (CONDITIONAL_JUMP)  ; LAB_0059fdae
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0059fd27
    LEA ECX,[EDI + -0x1]                ; 0059fd2e
    INC EDX                             ; 0059fd31
    CMP EAX,0x2d                        ; 0059fd32
    JNZ 0x0059fdba                      ; 0059fd35
        ;   XREF to: 0059fdba (CONDITIONAL_JUMP)  ; LAB_0059fdba
    MOV EAX,0x1                         ; 0059fd3b
    MOV dword ptr [ESP + 0xd4],EDX      ; 0059fd40
    MOV EDI,ECX                         ; 0059fd47
    MOV dword ptr [ESP + 0xc4],EAX      ; 0059fd49
    TEST EDI,EDI                        ; 0059fd50
        ;   Label: LAB_0059fd50
    JLE 0x0059f92d                      ; 0059fd52
        ;   XREF to: 0059f92d (CONDITIONAL_JUMP)  ; LAB_0059f92d
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059fd58
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059fd5b
    PUSH EDX                            ; 0059fd5e
    MOV EAX,dword ptr [EAX]             ; 0059fd5f
    CALL dword ptr [EAX + 0x4]          ; 0059fd61
    ADD ESP,0x4                         ; 0059fd64
    TEST EAX,EAX                        ; 0059fd67
    JL 0x0059fdae                       ; 0059fd69
        ;   XREF to: 0059fdae (CONDITIONAL_JUMP)  ; LAB_0059fdae
    CMP EAX,0x30                        ; 0059fd6b
    JNZ 0x0059fe49                      ; 0059fd6e
        ;   XREF to: 0059fe49 (CONDITIONAL_JUMP)  ; LAB_0059fe49
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0059fd74
    MOV EAX,0x8                         ; 0059fd7b
    DEC EDI                             ; 0059fd80
    INC EDX                             ; 0059fd81
    MOV dword ptr [ESP + 0xcc],EAX      ; 0059fd82
    MOV dword ptr [ESP + 0xd4],EDX      ; 0059fd89
    TEST EDI,EDI                        ; 0059fd90
    JLE 0x0059f92d                      ; 0059fd92
        ;   XREF to: 0059f92d (CONDITIONAL_JUMP)  ; LAB_0059f92d
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059fd98
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059fd9b
    PUSH ECX                            ; 0059fd9e
    MOV EAX,dword ptr [EAX]             ; 0059fd9f
    CALL dword ptr [EAX + 0x4]          ; 0059fda1
    MOV ESI,EAX                         ; 0059fda4
    ADD ESP,0x4                         ; 0059fda6
    CMP EAX,-0x1                        ; 0059fda9
    JGE 0x0059fdec                      ; 0059fdac
        ;   XREF to: 0059fdec (CONDITIONAL_JUMP)  ; LAB_0059fdec
    MOV dword ptr [ESP + 0xd0],EAX      ; 0059fdae
        ;   Label: LAB_0059fdae
    JMP 0x0059f76f                      ; 0059fdb5
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    CMP EAX,0x2b                        ; 0059fdba
        ;   Label: LAB_0059fdba
    JNZ 0x0059fdca                      ; 0059fdbd
        ;   XREF to: 0059fdca (CONDITIONAL_JUMP)  ; LAB_0059fdca
    MOV EDI,ECX                         ; 0059fdbf
    MOV dword ptr [ESP + 0xd4],EDX      ; 0059fdc1
    JMP 0x0059fd50                      ; 0059fdc8
        ;   XREF to: 0059fd50 (UNCONDITIONAL_JUMP)  ; LAB_0059fd50
    PUSH EAX                            ; 0059fdca
        ;   Label: LAB_0059fdca
    MOV EDX,dword ptr [ESI]             ; 0059fdcb
    PUSH ESI                            ; 0059fdcd
    CALL dword ptr [EDX + 0x8]          ; 0059fdce
    ADD ESP,0x8                         ; 0059fdd1
    TEST EAX,EAX                        ; 0059fdd4
    JNZ 0x0059fd50                      ; 0059fdd6
        ;   XREF to: 0059fd50 (CONDITIONAL_JUMP)  ; LAB_0059fd50
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0059fddc
    JMP 0x0059f76f                      ; 0059fde7
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    JLE 0x0059f92d                      ; 0059fdec
        ;   XREF to: 0059f92d (CONDITIONAL_JUMP)  ; LAB_0059f92d
        ;   Label: LAB_0059fdec
    PUSH EAX                            ; 0059fdf2
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 0059fdf3
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 0059fdf8
    CMP EAX,0x58                        ; 0059fdfb
    JNZ 0x0059fe21                      ; 0059fdfe
        ;   XREF to: 0059fe21 (CONDITIONAL_JUMP)  ; LAB_0059fe21
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0059fe00
    MOV EAX,0x10                        ; 0059fe07
    DEC EDI                             ; 0059fe0c
    INC EDX                             ; 0059fe0d
    MOV dword ptr [ESP + 0xcc],EAX      ; 0059fe0e
    MOV dword ptr [ESP + 0xd4],EDX      ; 0059fe15
    JMP 0x0059f92d                      ; 0059fe1c
        ;   XREF to: 0059f92d (UNCONDITIONAL_JUMP)  ; LAB_0059f92d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059fe21
        ;   Label: LAB_0059fe21
    PUSH ESI                            ; 0059fe24
    MOV ESI,dword ptr [EBP + 0x14]      ; 0059fe25
    MOV EAX,dword ptr [EAX]             ; 0059fe28
    PUSH ESI                            ; 0059fe2a
    CALL dword ptr [EAX + 0x8]          ; 0059fe2b
    ADD ESP,0x8                         ; 0059fe2e
    TEST EAX,EAX                        ; 0059fe31
    JNZ 0x0059f92d                      ; 0059fe33
        ;   XREF to: 0059f92d (CONDITIONAL_JUMP)  ; LAB_0059f92d
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0059fe39
    JMP 0x0059f76f                      ; 0059fe44
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    PUSH EAX                            ; 0059fe49
        ;   Label: LAB_0059fe49
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059fe4a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059fe4d
    PUSH ECX                            ; 0059fe50
    MOV EDX,dword ptr [EDX]             ; 0059fe51
    CALL dword ptr [EDX + 0x8]          ; 0059fe53
    ADD ESP,0x8                         ; 0059fe56
    TEST EAX,EAX                        ; 0059fe59
    JNZ 0x0059f92d                      ; 0059fe5b
        ;   XREF to: 0059f92d (CONDITIONAL_JUMP)  ; LAB_0059f92d
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0059fe61
    JMP 0x0059f76f                      ; 0059fe6c
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059fe71
        ;   Label: caseD_58
    PUSH ECX                            ; 0059fe74
    CALL unkaddr_0059f520.cpp_FUN_005a0840 ; 0059fe75
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_005a0840()
    ADD ESP,0x4                         ; 0059fe7a
    TEST EAX,EAX                        ; 0059fe7d
    JL 0x0059ff34                       ; 0059fe7f
        ;   XREF to: 0059ff34 (CONDITIONAL_JUMP)  ; LAB_0059ff34
    MOV ESI,dword ptr [ESP + 0xd4]      ; 0059fe85
    ADD ESI,EAX                         ; 0059fe8c
    MOV dword ptr [ESP + 0xd4],ESI      ; 0059fe8e
    TEST EDI,EDI                        ; 0059fe95
    JLE 0x0059fed4                      ; 0059fe97
        ;   XREF to: 0059fed4 (CONDITIONAL_JUMP)  ; LAB_0059fed4
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059fe99
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059fe9c
    PUSH EDX                            ; 0059fe9f
    MOV EAX,dword ptr [EAX]             ; 0059fea0
    CALL dword ptr [EAX + 0x4]          ; 0059fea2
    ADD ESP,0x4                         ; 0059fea5
    TEST EAX,EAX                        ; 0059fea8
    JL 0x0059ff34                       ; 0059feaa
        ;   XREF to: 0059ff34 (CONDITIONAL_JUMP)  ; LAB_0059ff34
    LEA ECX,[ESI + 0x1]                 ; 0059feb0
    LEA EDX,[EDI + -0x1]                ; 0059feb3
    CMP EAX,0x2d                        ; 0059feb6
    JNZ 0x0059ff40                      ; 0059feb9
        ;   XREF to: 0059ff40 (CONDITIONAL_JUMP)  ; LAB_0059ff40
    MOV EDI,0x1                         ; 0059febf
    MOV dword ptr [ESP + 0xd4],ECX      ; 0059fec4
    MOV dword ptr [ESP + 0xc4],EDI      ; 0059fecb
    MOV EDI,EDX                         ; 0059fed2
    TEST EDI,EDI                        ; 0059fed4
        ;   Label: LAB_0059fed4
    JLE 0x0059ff98                      ; 0059fed6
        ;   XREF to: 0059ff98 (CONDITIONAL_JUMP)  ; LAB_0059ff98
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059fedc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059fedf
    PUSH EDX                            ; 0059fee2
    MOV EAX,dword ptr [EAX]             ; 0059fee3
    CALL dword ptr [EAX + 0x4]          ; 0059fee5
    ADD ESP,0x4                         ; 0059fee8
    TEST EAX,EAX                        ; 0059feeb
    JL 0x0059ff34                       ; 0059feed
        ;   XREF to: 0059ff34 (CONDITIONAL_JUMP)  ; LAB_0059ff34
    CMP EAX,0x30                        ; 0059feef
    JNZ 0x0059ffcc                      ; 0059fef2
        ;   XREF to: 0059ffcc (CONDITIONAL_JUMP)  ; LAB_0059ffcc
    MOV EAX,0x1                         ; 0059fef8
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0059fefd
    MOV dword ptr [ESP + 0xa0],EAX      ; 0059ff04
    ADD EDX,EAX                         ; 0059ff0b
    SUB EDI,EAX                         ; 0059ff0d
    MOV dword ptr [ESP + 0xd4],EDX      ; 0059ff0f
    TEST EDI,EDI                        ; 0059ff16
    JLE 0x0059ff98                      ; 0059ff18
        ;   XREF to: 0059ff98 (CONDITIONAL_JUMP)  ; LAB_0059ff98
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059ff1e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059ff21
    PUSH ECX                            ; 0059ff24
    MOV EAX,dword ptr [EAX]             ; 0059ff25
    CALL dword ptr [EAX + 0x4]          ; 0059ff27
    MOV ESI,EAX                         ; 0059ff2a
    ADD ESP,0x4                         ; 0059ff2c
    CMP EAX,-0x1                        ; 0059ff2f
    JGE 0x0059ff78                      ; 0059ff32
        ;   XREF to: 0059ff78 (CONDITIONAL_JUMP)  ; LAB_0059ff78
    MOV dword ptr [ESP + 0xd0],EAX      ; 0059ff34
        ;   Label: LAB_0059ff34
    JMP 0x0059f76f                      ; 0059ff3b
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    CMP EAX,0x2b                        ; 0059ff40
        ;   Label: LAB_0059ff40
    JNZ 0x0059ff50                      ; 0059ff43
        ;   XREF to: 0059ff50 (CONDITIONAL_JUMP)  ; LAB_0059ff50
    MOV EDI,EDX                         ; 0059ff45
    MOV dword ptr [ESP + 0xd4],ECX      ; 0059ff47
    JMP 0x0059fed4                      ; 0059ff4e
        ;   XREF to: 0059fed4 (UNCONDITIONAL_JUMP)  ; LAB_0059fed4
    PUSH EAX                            ; 0059ff50
        ;   Label: LAB_0059ff50
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059ff51
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059ff54
    PUSH ECX                            ; 0059ff57
    MOV EDX,dword ptr [EDX]             ; 0059ff58
    CALL dword ptr [EDX + 0x8]          ; 0059ff5a
    ADD ESP,0x8                         ; 0059ff5d
    TEST EAX,EAX                        ; 0059ff60
    JNZ 0x0059fed4                      ; 0059ff62
        ;   XREF to: 0059fed4 (CONDITIONAL_JUMP)  ; LAB_0059fed4
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0059ff68
    JMP 0x0059f76f                      ; 0059ff73
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    JLE 0x0059ff98                      ; 0059ff78
        ;   XREF to: 0059ff98 (CONDITIONAL_JUMP)  ; LAB_0059ff98
        ;   Label: LAB_0059ff78
    PUSH EAX                            ; 0059ff7a
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 0059ff7b
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 0059ff80
    CMP EAX,0x58                        ; 0059ff83
    JNZ 0x0059ffa8                      ; 0059ff86
        ;   XREF to: 0059ffa8 (CONDITIONAL_JUMP)  ; LAB_0059ffa8
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0059ff88
    INC EAX                             ; 0059ff8f
    DEC EDI                             ; 0059ff90
    MOV dword ptr [ESP + 0xd4],EAX      ; 0059ff91
    MOV dword ptr [ESP + 0xcc],0x10     ; 0059ff98
        ;   Label: LAB_0059ff98
    JMP 0x0059f92d                      ; 0059ffa3
        ;   XREF to: 0059f92d (UNCONDITIONAL_JUMP)  ; LAB_0059f92d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059ffa8
        ;   Label: LAB_0059ffa8
    PUSH ESI                            ; 0059ffab
    MOV ESI,dword ptr [EBP + 0x14]      ; 0059ffac
    MOV EAX,dword ptr [EAX]             ; 0059ffaf
    PUSH ESI                            ; 0059ffb1
    CALL dword ptr [EAX + 0x8]          ; 0059ffb2
    ADD ESP,0x8                         ; 0059ffb5
    TEST EAX,EAX                        ; 0059ffb8
    JNZ 0x0059ff98                      ; 0059ffba
        ;   XREF to: 0059ff98 (CONDITIONAL_JUMP)  ; LAB_0059ff98
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0059ffbc
    JMP 0x0059f76f                      ; 0059ffc7
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    PUSH EAX                            ; 0059ffcc
        ;   Label: LAB_0059ffcc
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059ffcd
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059ffd0
    PUSH ECX                            ; 0059ffd3
    MOV EDX,dword ptr [EDX]             ; 0059ffd4
    CALL dword ptr [EDX + 0x8]          ; 0059ffd6
    ADD ESP,0x8                         ; 0059ffd9
    TEST EAX,EAX                        ; 0059ffdc
    JNZ 0x0059ff98                      ; 0059ffde
        ;   XREF to: 0059ff98 (CONDITIONAL_JUMP)  ; LAB_0059ff98
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0059ffe0
    JMP 0x0059f76f                      ; 0059ffeb
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059fff0
        ;   Label: caseD_50
    PUSH EDX                            ; 0059fff3
    CALL unkaddr_0059f520.cpp_FUN_005a0840 ; 0059fff4
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_005a0840()
    ADD ESP,0x4                         ; 0059fff9
    TEST EAX,EAX                        ; 0059fffc
    JL 0x0059ff34                       ; 0059fffe
        ;   XREF to: 0059ff34 (CONDITIONAL_JUMP)  ; LAB_0059ff34
    MOV ECX,dword ptr [ESP + 0xd4]      ; 005a0004
    MOV ESI,0x10                        ; 005a000b
    ADD ECX,EAX                         ; 005a0010
    MOV dword ptr [ESP + 0xcc],ESI      ; 005a0012
    MOV dword ptr [ESP + 0xd4],ECX      ; 005a0019
    JMP 0x0059f92d                      ; 005a0020
        ;   XREF to: 0059f92d (UNCONDITIONAL_JUMP)  ; LAB_0059f92d
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a0025
        ;   Label: caseD_55
    PUSH ECX                            ; 005a0028
    CALL unkaddr_0059f520.cpp_FUN_005a0840 ; 005a0029
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_005a0840()
    ADD ESP,0x4                         ; 005a002e
    TEST EAX,EAX                        ; 005a0031
    JL 0x0059ff34                       ; 005a0033
        ;   XREF to: 0059ff34 (CONDITIONAL_JUMP)  ; LAB_0059ff34
    MOV ESI,dword ptr [ESP + 0xd4]      ; 005a0039
    ADD ESI,EAX                         ; 005a0040
    MOV EAX,0xa                         ; 005a0042
    MOV dword ptr [ESP + 0xd4],ESI      ; 005a0047
    MOV dword ptr [ESP + 0xcc],EAX      ; 005a004e
    JMP 0x0059f92d                      ; 005a0055
        ;   XREF to: 0059f92d (UNCONDITIONAL_JUMP)  ; LAB_0059f92d
    MOV dword ptr [ESP + 0xcc],0x8      ; 005a005a
        ;   Label: caseD_4f
    JMP 0x0059f8ce                      ; 005a0065
        ;   XREF to: 0059f8ce (UNCONDITIONAL_JUMP)  ; LAB_0059f8ce
    CMP EAX,0x2b                        ; 005a006a
        ;   Label: LAB_005a006a
    JNZ 0x005a007d                      ; 005a006d
        ;   XREF to: 005a007d (CONDITIONAL_JUMP)  ; LAB_005a007d
    MOV EDI,EDX                         ; 005a006f
    MOV dword ptr [ESP + 0xd4],ECX      ; 005a0071
    JMP 0x0059f92d                      ; 005a0078
        ;   XREF to: 0059f92d (UNCONDITIONAL_JUMP)  ; LAB_0059f92d
    PUSH EAX                            ; 005a007d
        ;   Label: LAB_005a007d
    MOV EDX,dword ptr [ESI]             ; 005a007e
    PUSH ESI                            ; 005a0080
    CALL dword ptr [EDX + 0x8]          ; 005a0081
    ADD ESP,0x8                         ; 005a0084
    TEST EAX,EAX                        ; 005a0087
    JNZ 0x0059f92d                      ; 005a0089
        ;   XREF to: 0059f92d (CONDITIONAL_JUMP)  ; LAB_0059f92d
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 005a008f
    JMP 0x0059f76f                      ; 005a009a
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV dword ptr [ESP + 0xd0],EAX      ; 005a009f
        ;   Label: LAB_005a009f
    CMP dword ptr [ESP + 0xd0],-0x1     ; 005a00a6
        ;   Label: LAB_005a00a6
    JL 0x0059f76f                       ; 005a00ae
        ;   XREF to: 0059f76f (CONDITIONAL_JUMP)  ; LAB_0059f76f
    CMP dword ptr [ESP + 0xa0],0x0      ; 005a00b4
    JZ 0x0059f76f                       ; 005a00bc
        ;   XREF to: 0059f76f (CONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005a00c2
    INC EAX                             ; 005a00c9
    MOV EDX,dword ptr [ESP + 0xc8]      ; 005a00ca
    MOV dword ptr [ESP + 0xbc],EAX      ; 005a00d1
    TEST EDX,EDX                        ; 005a00d8
    JZ 0x0059f76f                       ; 005a00da
        ;   XREF to: 0059f76f (CONDITIONAL_JUMP)  ; LAB_0059f76f
    CMP dword ptr [ESP + 0xc4],0x0      ; 005a00e0
    JZ 0x005a00f1                       ; 005a00e8
        ;   XREF to: 005a00f1 (CONDITIONAL_JUMP)  ; LAB_005a00f1
    NEG dword ptr [ESP + 0x9c]          ; 005a00ea
    MOV EDI,dword ptr [ESP + 0x98]      ; 005a00f1
        ;   Label: LAB_005a00f1
    CMP EDI,0x48                        ; 005a00f8
    JNC 0x005a021d                      ; 005a00fb
        ;   XREF to: 005a021d (CONDITIONAL_JUMP)  ; LAB_005a021d
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a0101
        ;   Label: LAB_005a0101
    MOV ECX,dword ptr [EAX]             ; 005a0104
    ADD ECX,0x4                         ; 005a0106
    MOV dword ptr [EAX],ECX             ; 005a0109
    MOV EAX,dword ptr [ECX + -0x4]      ; 005a010b
    MOV EDX,dword ptr [ESP + 0x9c]      ; 005a010e
        ;   Label: LAB_005a010e
    MOV dword ptr [EAX],EDX             ; 005a0115
    INC dword ptr [ESP + 0xc0]          ; 005a0117
    JMP 0x0059f76f                      ; 005a011e
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV ESI,0x1                         ; 005a0123
        ;   Label: caseD_31
    JMP 0x0059f972                      ; 005a0128
        ;   XREF to: 0059f972 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x2                         ; 005a012d
        ;   Label: caseD_32
    JMP 0x0059f972                      ; 005a0132
        ;   XREF to: 0059f972 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x3                         ; 005a0137
        ;   Label: caseD_33
    JMP 0x0059f972                      ; 005a013c
        ;   XREF to: 0059f972 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x4                         ; 005a0141
        ;   Label: caseD_34
    JMP 0x0059f972                      ; 005a0146
        ;   XREF to: 0059f972 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x5                         ; 005a014b
        ;   Label: caseD_35
    JMP 0x0059f972                      ; 005a0150
        ;   XREF to: 0059f972 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x6                         ; 005a0155
        ;   Label: caseD_36
    JMP 0x0059f972                      ; 005a015a
        ;   XREF to: 0059f972 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x7                         ; 005a015f
        ;   Label: caseD_37
    JMP 0x0059f972                      ; 005a0164
        ;   XREF to: 0059f972 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x8                         ; 005a0169
        ;   Label: caseD_38
    JMP 0x0059f972                      ; 005a016e
        ;   XREF to: 0059f972 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x9                         ; 005a0173
        ;   Label: caseD_39
    JMP 0x0059f972                      ; 005a0178
        ;   XREF to: 0059f972 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xa                         ; 005a017d
        ;   Label: caseD_41
    JMP 0x0059f972                      ; 005a0182
        ;   XREF to: 0059f972 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xb                         ; 005a0187
        ;   Label: caseD_42
    JMP 0x0059f972                      ; 005a018c
        ;   XREF to: 0059f972 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xc                         ; 005a0191
        ;   Label: caseD_43
    JMP 0x0059f972                      ; 005a0196
        ;   XREF to: 0059f972 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xd                         ; 005a019b
        ;   Label: caseD_44
    JMP 0x0059f972                      ; 005a01a0
        ;   XREF to: 0059f972 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xe                         ; 005a01a5
        ;   Label: caseD_45
    JMP 0x0059f972                      ; 005a01aa
        ;   XREF to: 0059f972 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xf                         ; 005a01af
        ;   Label: caseD_46
    JMP 0x0059f972                      ; 005a01b4
        ;   XREF to: 0059f972 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV EDI,dword ptr [ESP + 0xa4]      ; 005a01b9
        ;   Label: LAB_005a01b9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a01c0
    PUSH EDI                            ; 005a01c3
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a01c4
    MOV EAX,dword ptr [EAX]             ; 005a01c7
    PUSH EDX                            ; 005a01c9
    CALL dword ptr [EAX + 0x8]          ; 005a01ca
    ADD ESP,0x8                         ; 005a01cd
    TEST EAX,EAX                        ; 005a01d0
    JNZ 0x005a00a6                      ; 005a01d2
        ;   XREF to: 005a00a6 (CONDITIONAL_JUMP)  ; LAB_005a00a6
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 005a01d8
    JMP 0x0059f76f                      ; 005a01e3
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a01e8
        ;   Label: LAB_005a01e8
    MOV EDX,dword ptr [EAX]             ; 005a01eb
    ADD EDX,0x4                         ; 005a01ed
    MOV dword ptr [EAX],EDX             ; 005a01f0
    MOV EAX,dword ptr [EDX + -0x4]      ; 005a01f2
    MOV EDX,dword ptr [ESP + 0x9c]      ; 005a01f5
    MOV word ptr [EAX],DX               ; 005a01fc
    INC dword ptr [ESP + 0xc0]          ; 005a01ff
    JMP 0x0059f76f                      ; 005a0206
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a020b
        ;   Label: LAB_005a020b
    MOV EDI,dword ptr [EAX]             ; 005a020e
    ADD EDI,0x4                         ; 005a0210
    MOV dword ptr [EAX],EDI             ; 005a0213
    MOV EAX,dword ptr [EDI + -0x4]      ; 005a0215
    JMP 0x005a010e                      ; 005a0218
        ;   XREF to: 005a010e (UNCONDITIONAL_JUMP)  ; LAB_005a010e
    JBE 0x005a01e8                      ; 005a021d
        ;   XREF to: 005a01e8 (CONDITIONAL_JUMP)  ; LAB_005a01e8
        ;   Label: LAB_005a021d
    CMP EDI,0x68                        ; 005a021f
    JC 0x005a0101                       ; 005a0222
        ;   XREF to: 005a0101 (CONDITIONAL_JUMP)  ; LAB_005a0101
    JBE 0x005a01e8                      ; 005a0228
        ;   XREF to: 005a01e8 (CONDITIONAL_JUMP)  ; LAB_005a01e8
    CMP EDI,0x6c                        ; 005a022a
    JZ 0x005a020b                       ; 005a022d
        ;   XREF to: 005a020b (CONDITIONAL_JUMP)  ; LAB_005a020b
    JMP 0x005a0101                      ; 005a022f
        ;   XREF to: 005a0101 (UNCONDITIONAL_JUMP)  ; LAB_005a0101
    CMP dword ptr [ESP + 0xc8],0x0      ; 005a0234
        ;   Label: caseD_6e
    JZ 0x0059f76f                       ; 005a023c
        ;   XREF to: 0059f76f (CONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a0242
    MOV ECX,dword ptr [EAX]             ; 005a0245
    ADD ECX,0x4                         ; 005a0247
    MOV dword ptr [EAX],ECX             ; 005a024a
    MOV EAX,dword ptr [ECX + -0x4]      ; 005a024c
    MOV EDX,dword ptr [ESP + 0xd4]      ; 005a024f
    MOV dword ptr [EAX],EDX             ; 005a0256
    JMP 0x0059f76f                      ; 005a0258
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a025d
        ;   Label: caseD_45
    PUSH EDX                            ; 005a0260
    CALL unkaddr_0059f520.cpp_FUN_005a0840 ; 005a0261
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_005a0840()
    ADD ESP,0x4                         ; 005a0266
    TEST EAX,EAX                        ; 005a0269
    JL 0x0059ff34                       ; 005a026b
        ;   XREF to: 0059ff34 (CONDITIONAL_JUMP)  ; LAB_0059ff34
    MOV ECX,dword ptr [ESP + 0xd4]      ; 005a0271
    ADD ECX,EAX                         ; 005a0278
    LEA ESI,[ESP + 0x8]                 ; 005a027a
    MOV dword ptr [ESP + 0xd4],ECX      ; 005a027e
    CMP EDI,0x63                        ; 005a0285
    JBE 0x005a034d                      ; 005a0288
        ;   XREF to: 005a034d (CONDITIONAL_JUMP)  ; LAB_005a034d
    MOV EDI,0x63                        ; 005a028e
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a0293
        ;   Label: LAB_005a0293
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0296
    PUSH EDX                            ; 005a0299
    MOV EAX,dword ptr [EAX]             ; 005a029a
    CALL dword ptr [EAX + 0x4]          ; 005a029c
    ADD ESP,0x4                         ; 005a029f
    MOV dword ptr [ESP + 0xa4],EAX      ; 005a02a2
    TEST EAX,EAX                        ; 005a02a9
    JL 0x0059ff34                       ; 005a02ab
        ;   XREF to: 0059ff34 (CONDITIONAL_JUMP)  ; LAB_0059ff34
    MOV EDX,dword ptr [ESP + 0xd4]      ; 005a02b1
    INC EDX                             ; 005a02b8
    MOV dword ptr [ESP + 0xb4],EDX      ; 005a02b9
    LEA EDX,[EDI + -0x1]                ; 005a02c0
    CMP EAX,0x2d                        ; 005a02c3
    JNZ 0x005a0357                      ; 005a02c6
        ;   XREF to: 005a0357 (CONDITIONAL_JUMP)  ; LAB_005a0357
    INC ESI                             ; 005a02cc
    MOV AL,byte ptr [ESP + 0xa4]        ; 005a02cd
    MOV byte ptr [ESI + -0x1],AL        ; 005a02d4
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005a02d7
        ;   Label: LAB_005a02d7
    MOV EDI,EDX                         ; 005a02de
    MOV dword ptr [ESP + 0xd4],EAX      ; 005a02e0
        ;   Label: LAB_005a02e0
    TEST EDI,EDI                        ; 005a02e7
        ;   Label: LAB_005a02e7
    JLE 0x005a038f                      ; 005a02e9
        ;   XREF to: 005a038f (CONDITIONAL_JUMP)  ; LAB_005a038f
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a02ef
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a02f2
    PUSH ECX                            ; 005a02f5
    MOV EAX,dword ptr [EAX]             ; 005a02f6
    CALL dword ptr [EAX + 0x4]          ; 005a02f8
    ADD ESP,0x4                         ; 005a02fb
    MOV dword ptr [ESP + 0xa4],EAX      ; 005a02fe
    TEST EAX,EAX                        ; 005a0305
    JL 0x005a0388                       ; 005a0307
        ;   XREF to: 005a0388 (CONDITIONAL_JUMP)  ; LAB_005a0388
    MOV CL,byte ptr [ESP + 0xa4]        ; 005a030d
    INC CL                              ; 005a0314
    AND ECX,0xff                        ; 005a0316
    TEST byte ptr [ECX + 0x626114],0x20 ; 005a031c | DAT_00626114
    JZ 0x005a0576                       ; 005a0323
        ;   XREF to: 005a0576 (CONDITIONAL_JUMP)  ; LAB_005a0576
    MOV ECX,0x1                         ; 005a0329
    MOV AL,byte ptr [ESP + 0xa4]        ; 005a032e
    MOV dword ptr [ESP + 0xa0],ECX      ; 005a0335
    MOV byte ptr [ESI],AL               ; 005a033c
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005a033e
    SUB EDI,ECX                         ; 005a0345
    ADD EAX,ECX                         ; 005a0347
    ADD ESI,ECX                         ; 005a0349
    JMP 0x005a02e0                      ; 005a034b
        ;   XREF to: 005a02e0 (UNCONDITIONAL_JUMP)  ; LAB_005a02e0
    TEST EDI,EDI                        ; 005a034d
        ;   Label: LAB_005a034d
    JG 0x005a0293                       ; 005a034f
        ;   XREF to: 005a0293 (CONDITIONAL_JUMP)  ; LAB_005a0293
    JMP 0x005a02e7                      ; 005a0355
        ;   XREF to: 005a02e7 (UNCONDITIONAL_JUMP)  ; LAB_005a02e7
    CMP EAX,0x2b                        ; 005a0357
        ;   Label: LAB_005a0357
    JZ 0x005a02d7                       ; 005a035a
        ;   XREF to: 005a02d7 (CONDITIONAL_JUMP)  ; LAB_005a02d7
    PUSH EAX                            ; 005a0360
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a0361
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a0364
    PUSH ECX                            ; 005a0367
    MOV EDX,dword ptr [EDX]             ; 005a0368
    CALL dword ptr [EDX + 0x8]          ; 005a036a
    ADD ESP,0x8                         ; 005a036d
    TEST EAX,EAX                        ; 005a0370
    JNZ 0x005a02e7                      ; 005a0372
        ;   XREF to: 005a02e7 (CONDITIONAL_JUMP)  ; LAB_005a02e7
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 005a0378
    JMP 0x0059f76f                      ; 005a0383
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV dword ptr [ESP + 0xd0],EAX      ; 005a0388
        ;   Label: LAB_005a0388
    CMP dword ptr [ESP + 0xd0],-0x1     ; 005a038f
        ;   Label: LAB_005a038f
    JL 0x0059f76f                       ; 005a0397
        ;   XREF to: 0059f76f (CONDITIONAL_JUMP)  ; LAB_0059f76f
    TEST EDI,EDI                        ; 005a039d
    JLE 0x005a0452                      ; 005a039f
        ;   XREF to: 005a0452 (CONDITIONAL_JUMP)  ; LAB_005a0452
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a03a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a03a8
    PUSH ECX                            ; 005a03ab
    MOV EAX,dword ptr [EAX]             ; 005a03ac
    CALL dword ptr [EAX + 0x4]          ; 005a03ae
    ADD ESP,0x4                         ; 005a03b1
    MOV dword ptr [ESP + 0xa4],EAX      ; 005a03b4
    TEST EAX,EAX                        ; 005a03bb
    JL 0x005a059e                       ; 005a03bd
        ;   XREF to: 005a059e (CONDITIONAL_JUMP)  ; LAB_005a059e
    CMP EAX,0x2e                        ; 005a03c3
    JNZ 0x005a05d2                      ; 005a03c6
        ;   XREF to: 005a05d2 (CONDITIONAL_JUMP)  ; LAB_005a05d2
    MOV ECX,dword ptr [ESP + 0xd4]      ; 005a03cc
    MOV AL,byte ptr [ESP + 0xa4]        ; 005a03d3
    INC ESI                             ; 005a03da
    DEC EDI                             ; 005a03db
    INC ECX                             ; 005a03dc
    MOV byte ptr [ESI + -0x1],AL        ; 005a03dd
    MOV dword ptr [ESP + 0xd4],ECX      ; 005a03e0
    TEST EDI,EDI                        ; 005a03e7
    JLE 0x005a0452                      ; 005a03e9
        ;   XREF to: 005a0452 (CONDITIONAL_JUMP)  ; LAB_005a0452
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a03eb
        ;   Label: LAB_005a03eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a03ee
    PUSH ECX                            ; 005a03f1
    MOV EAX,dword ptr [EAX]             ; 005a03f2
    CALL dword ptr [EAX + 0x4]          ; 005a03f4
    ADD ESP,0x4                         ; 005a03f7
    MOV dword ptr [ESP + 0xa4],EAX      ; 005a03fa
    TEST EAX,EAX                        ; 005a0401
    JL 0x005a059e                       ; 005a0403
        ;   XREF to: 005a059e (CONDITIONAL_JUMP)  ; LAB_005a059e
    MOV CL,byte ptr [ESP + 0xa4]        ; 005a0409
    INC CL                              ; 005a0410
    AND ECX,0xff                        ; 005a0412
    TEST byte ptr [ECX + 0x626114],0x20 ; 005a0418 | DAT_00626114
    JZ 0x005a05aa                       ; 005a041f
        ;   XREF to: 005a05aa (CONDITIONAL_JUMP)  ; LAB_005a05aa
    MOV AL,byte ptr [ESP + 0xa4]        ; 005a0425
    MOV byte ptr [ESI],AL               ; 005a042c
    MOV EAX,0x1                         ; 005a042e
    MOV EDX,dword ptr [ESP + 0xd4]      ; 005a0433
    MOV dword ptr [ESP + 0xa0],EAX      ; 005a043a
    SUB EDI,EAX                         ; 005a0441
    ADD EDX,EAX                         ; 005a0443
    ADD ESI,EAX                         ; 005a0445
    MOV dword ptr [ESP + 0xd4],EDX      ; 005a0447
    TEST EDI,EDI                        ; 005a044e
    JG 0x005a03eb                       ; 005a0450
        ;   XREF to: 005a03eb (CONDITIONAL_JUMP)  ; LAB_005a03eb
    CMP dword ptr [ESP + 0xd0],-0x1     ; 005a0452
        ;   Label: LAB_005a0452
    JL 0x0059f76f                       ; 005a045a
        ;   XREF to: 0059f76f (CONDITIONAL_JUMP)  ; LAB_0059f76f
    CMP dword ptr [ESP + 0xa0],0x0      ; 005a0460
    JZ 0x005a0601                       ; 005a0468
        ;   XREF to: 005a0601 (CONDITIONAL_JUMP)  ; LAB_005a0601
    TEST EDI,EDI                        ; 005a046e
    JLE 0x005a0601                      ; 005a0470
        ;   XREF to: 005a0601 (CONDITIONAL_JUMP)  ; LAB_005a0601
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a0476
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0479
    PUSH EDX                            ; 005a047c
    MOV EAX,dword ptr [EAX]             ; 005a047d
    CALL dword ptr [EAX + 0x4]          ; 005a047f
    MOV dword ptr [ESP + 0x98],EAX      ; 005a0482
    ADD ESP,0x4                         ; 005a0489
    MOV dword ptr [ESP + 0xa4],EAX      ; 005a048c
    TEST EAX,EAX                        ; 005a0493
    JL 0x005a05fa                       ; 005a0495
        ;   XREF to: 005a05fa (CONDITIONAL_JUMP)  ; LAB_005a05fa
    PUSH EAX                            ; 005a049b
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 005a049c
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 005a04a1
    CMP EAX,0x45                        ; 005a04a4
    JNZ 0x005a06ea                      ; 005a04a7
        ;   XREF to: 005a06ea (CONDITIONAL_JUMP)  ; LAB_005a06ea
    MOV AL,byte ptr [ESP + 0xa4]        ; 005a04ad
    MOV byte ptr [ESI],AL               ; 005a04b4
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005a04b6
    DEC EDI                             ; 005a04bd
    INC EAX                             ; 005a04be
    INC ESI                             ; 005a04bf
    MOV dword ptr [ESP + 0xd4],EAX      ; 005a04c0
    TEST EDI,EDI                        ; 005a04c7
    JLE 0x005a051f                      ; 005a04c9
        ;   XREF to: 005a051f (CONDITIONAL_JUMP)  ; LAB_005a051f
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a04cb
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a04ce
    PUSH EDX                            ; 005a04d1
    MOV EAX,dword ptr [EAX]             ; 005a04d2
    CALL dword ptr [EAX + 0x4]          ; 005a04d4
    ADD ESP,0x4                         ; 005a04d7
    MOV dword ptr [ESP + 0xa4],EAX      ; 005a04da
    TEST EAX,EAX                        ; 005a04e1
    JL 0x0059ff34                       ; 005a04e3
        ;   XREF to: 0059ff34 (CONDITIONAL_JUMP)  ; LAB_0059ff34
    MOV EDX,dword ptr [ESP + 0xd4]      ; 005a04e9
    INC EDX                             ; 005a04f0
    MOV dword ptr [ESP + 0xb8],EDX      ; 005a04f1
    LEA EDX,[EDI + -0x1]                ; 005a04f8
    CMP EAX,0x2d                        ; 005a04fb
    JNZ 0x005a0691                      ; 005a04fe
        ;   XREF to: 005a0691 (CONDITIONAL_JUMP)  ; LAB_005a0691
    INC ESI                             ; 005a0504
    MOV AL,byte ptr [ESP + 0xa4]        ; 005a0505
    MOV byte ptr [ESI + -0x1],AL        ; 005a050c
    MOV EAX,dword ptr [ESP + 0xb8]      ; 005a050f
        ;   Label: LAB_005a050f
    MOV EDI,EDX                         ; 005a0516
    MOV dword ptr [ESP + 0xd4],EAX      ; 005a0518
        ;   Label: LAB_005a0518
    TEST EDI,EDI                        ; 005a051f
        ;   Label: LAB_005a051f
    JLE 0x005a0601                      ; 005a0521
        ;   XREF to: 005a0601 (CONDITIONAL_JUMP)  ; LAB_005a0601
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a0527
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a052a
    PUSH EDX                            ; 005a052d
    MOV EAX,dword ptr [EAX]             ; 005a052e
    CALL dword ptr [EAX + 0x4]          ; 005a0530
    ADD ESP,0x4                         ; 005a0533
    MOV dword ptr [ESP + 0xa4],EAX      ; 005a0536
    TEST EAX,EAX                        ; 005a053d
    JL 0x005a05fa                       ; 005a053f
        ;   XREF to: 005a05fa (CONDITIONAL_JUMP)  ; LAB_005a05fa
    MOV CL,byte ptr [ESP + 0xa4]        ; 005a0545
    INC CL                              ; 005a054c
    AND ECX,0xff                        ; 005a054e
    TEST byte ptr [ECX + 0x626114],0x20 ; 005a0554 | DAT_00626114
    JZ 0x005a06c2                       ; 005a055b
        ;   XREF to: 005a06c2 (CONDITIONAL_JUMP)  ; LAB_005a06c2
    MOV AL,byte ptr [ESP + 0xa4]        ; 005a0561
    MOV byte ptr [ESI],AL               ; 005a0568
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005a056a
    DEC EDI                             ; 005a0571
    INC EAX                             ; 005a0572
    INC ESI                             ; 005a0573
    JMP 0x005a0518                      ; 005a0574
        ;   XREF to: 005a0518 (UNCONDITIONAL_JUMP)  ; LAB_005a0518
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a0576
        ;   Label: LAB_005a0576
    PUSH EAX                            ; 005a0579
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a057a
    MOV EDX,dword ptr [EDX]             ; 005a057d
    PUSH EAX                            ; 005a057f
    CALL dword ptr [EDX + 0x8]          ; 005a0580
    ADD ESP,0x8                         ; 005a0583
    TEST EAX,EAX                        ; 005a0586
    JNZ 0x005a038f                      ; 005a0588
        ;   XREF to: 005a038f (CONDITIONAL_JUMP)  ; LAB_005a038f
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 005a058e
    JMP 0x0059f76f                      ; 005a0599
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV dword ptr [ESP + 0xd0],EAX      ; 005a059e
        ;   Label: LAB_005a059e
    JMP 0x005a0452                      ; 005a05a5
        ;   XREF to: 005a0452 (UNCONDITIONAL_JUMP)  ; LAB_005a0452
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a05aa
        ;   Label: LAB_005a05aa
    PUSH EAX                            ; 005a05ad
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a05ae
    MOV EDX,dword ptr [EDX]             ; 005a05b1
    PUSH EAX                            ; 005a05b3
    CALL dword ptr [EDX + 0x8]          ; 005a05b4
    ADD ESP,0x8                         ; 005a05b7
    TEST EAX,EAX                        ; 005a05ba
    JNZ 0x005a0452                      ; 005a05bc
        ;   XREF to: 005a0452 (CONDITIONAL_JUMP)  ; LAB_005a0452
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 005a05c2
    JMP 0x0059f76f                      ; 005a05cd
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a05d2
        ;   Label: LAB_005a05d2
    PUSH EAX                            ; 005a05d5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a05d6
    MOV EDX,dword ptr [EDX]             ; 005a05d9
    PUSH EAX                            ; 005a05db
    CALL dword ptr [EDX + 0x8]          ; 005a05dc
    ADD ESP,0x8                         ; 005a05df
    TEST EAX,EAX                        ; 005a05e2
    JNZ 0x005a0452                      ; 005a05e4
        ;   XREF to: 005a0452 (CONDITIONAL_JUMP)  ; LAB_005a0452
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 005a05ea
    JMP 0x0059f76f                      ; 005a05f5
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV dword ptr [ESP + 0xd0],EAX      ; 005a05fa
        ;   Label: LAB_005a05fa
    CMP dword ptr [ESP + 0xd0],-0x1     ; 005a0601
        ;   Label: LAB_005a0601
    JL 0x0059f76f                       ; 005a0609
        ;   XREF to: 0059f76f (CONDITIONAL_JUMP)  ; LAB_0059f76f
    CMP dword ptr [ESP + 0xa0],0x0      ; 005a060f
    JZ 0x0059f76f                       ; 005a0617
        ;   XREF to: 0059f76f (CONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV EDI,dword ptr [ESP + 0xbc]      ; 005a061d
    INC EDI                             ; 005a0624
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005a0625
    MOV dword ptr [ESP + 0xbc],EDI      ; 005a062c
    TEST EAX,EAX                        ; 005a0633
    JZ 0x0059f76f                       ; 005a0635
        ;   XREF to: 0059f76f (CONDITIONAL_JUMP)  ; LAB_0059f76f
    LEA EAX,[ESP + 0x8]                 ; 005a063b
    PUSH EAX                            ; 005a063f
    MOV byte ptr [ESI],0x0              ; 005a0640
    CALL crt_unknown.c__strtod_FUN_005c3228 ; 005a0643
        ;   XREF to: 005c3228 (UNCONDITIONAL_CALL)  ; double crt_unknown.c__strtod_FUN_005c3228(char * str)
    MOV dword ptr [ESP + 0x90],EAX      ; 005a0648
    MOV dword ptr [ESP + 0x94],EDX      ; 005a064f
    FLD double ptr [ESP + 0x90]         ; 005a0656
    ADD ESP,0x4                         ; 005a065d
    MOV EDX,dword ptr [ESP + 0x98]      ; 005a0660
    FSTP double ptr [ESP]               ; 005a0667
    CMP EDX,0x4c                        ; 005a066a
    JNC 0x005a0763                      ; 005a066d
        ;   XREF to: 005a0763 (CONDITIONAL_JUMP)  ; LAB_005a0763
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a0673
        ;   Label: LAB_005a0673
    MOV ESI,dword ptr [EAX]             ; 005a0676
    ADD ESI,0x4                         ; 005a0678
    MOV dword ptr [EAX],ESI             ; 005a067b
    MOV EAX,dword ptr [ESI + -0x4]      ; 005a067d
    FLD double ptr [ESP]                ; 005a0680
    FSTP float ptr [EAX]                ; 005a0683
    INC dword ptr [ESP + 0xc0]          ; 005a0685
    JMP 0x0059f76f                      ; 005a068c
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    CMP EAX,0x2b                        ; 005a0691
        ;   Label: LAB_005a0691
    JZ 0x005a050f                       ; 005a0694
        ;   XREF to: 005a050f (CONDITIONAL_JUMP)  ; LAB_005a050f
    PUSH EAX                            ; 005a069a
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a069b
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a069e
    PUSH ECX                            ; 005a06a1
    MOV EDX,dword ptr [EDX]             ; 005a06a2
    CALL dword ptr [EDX + 0x8]          ; 005a06a4
    ADD ESP,0x8                         ; 005a06a7
    TEST EAX,EAX                        ; 005a06aa
    JNZ 0x005a051f                      ; 005a06ac
        ;   XREF to: 005a051f (CONDITIONAL_JUMP)  ; LAB_005a051f
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 005a06b2
    JMP 0x0059f76f                      ; 005a06bd
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    PUSH EAX                            ; 005a06c2
        ;   Label: LAB_005a06c2
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a06c3
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a06c6
    PUSH ECX                            ; 005a06c9
    MOV EDX,dword ptr [EDX]             ; 005a06ca
    CALL dword ptr [EDX + 0x8]          ; 005a06cc
    ADD ESP,0x8                         ; 005a06cf
    TEST EAX,EAX                        ; 005a06d2
    JNZ 0x005a0601                      ; 005a06d4
        ;   XREF to: 005a0601 (CONDITIONAL_JUMP)  ; LAB_005a0601
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 005a06da
    JMP 0x0059f76f                      ; 005a06e5
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV EDX,dword ptr [ESP + 0x94]      ; 005a06ea
        ;   Label: LAB_005a06ea
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a06f1
    PUSH EDX                            ; 005a06f4
    MOV ECX,dword ptr [EBP + 0x14]      ; 005a06f5
    MOV EAX,dword ptr [EAX]             ; 005a06f8
    PUSH ECX                            ; 005a06fa
    CALL dword ptr [EAX + 0x8]          ; 005a06fb
    ADD ESP,0x8                         ; 005a06fe
    TEST EAX,EAX                        ; 005a0701
    JNZ 0x005a0601                      ; 005a0703
        ;   XREF to: 005a0601 (CONDITIONAL_JUMP)  ; LAB_005a0601
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 005a0709
    JMP 0x0059f76f                      ; 005a0714
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a0719
        ;   Label: LAB_005a0719
    MOV EDX,dword ptr [EAX]             ; 005a071c
    ADD EDX,0x4                         ; 005a071e
    MOV dword ptr [EAX],EDX             ; 005a0721
    MOV EAX,dword ptr [EDX + -0x4]      ; 005a0723
    MOV EDX,dword ptr [ESP]             ; 005a0726
    MOV dword ptr [EAX],EDX             ; 005a0729
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a072b
    MOV dword ptr [EAX + 0x4],EDX       ; 005a072f
    INC dword ptr [ESP + 0xc0]          ; 005a0732
    JMP 0x0059f76f                      ; 005a0739
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a073e
        ;   Label: LAB_005a073e
    MOV ECX,dword ptr [EAX]             ; 005a0741
    ADD ECX,0x4                         ; 005a0743
    MOV dword ptr [EAX],ECX             ; 005a0746
    MOV EAX,dword ptr [ECX + -0x4]      ; 005a0748
    MOV EDX,dword ptr [ESP]             ; 005a074b
    MOV dword ptr [EAX],EDX             ; 005a074e
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a0750
    MOV dword ptr [EAX + 0x4],EDX       ; 005a0754
    INC dword ptr [ESP + 0xc0]          ; 005a0757
    JMP 0x0059f76f                      ; 005a075e
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    JBE 0x005a073e                      ; 005a0763
        ;   XREF to: 005a073e (CONDITIONAL_JUMP)  ; LAB_005a073e
        ;   Label: LAB_005a0763
    CMP EDX,0x68                        ; 005a0765
    JC 0x005a0673                       ; 005a0768
        ;   XREF to: 005a0673 (CONDITIONAL_JUMP)  ; LAB_005a0673
    JBE 0x005a0673                      ; 005a076e
        ;   XREF to: 005a0673 (CONDITIONAL_JUMP)  ; LAB_005a0673
    CMP EDX,0x6c                        ; 005a0774
    JZ 0x005a0719                       ; 005a0777
        ;   XREF to: 005a0719 (CONDITIONAL_JUMP)  ; LAB_005a0719
    JMP 0x005a0673                      ; 005a0779
        ;   XREF to: 005a0673 (UNCONDITIONAL_JUMP)  ; LAB_005a0673
    DEC EBX                             ; 005a077e
        ;   Label: caseD_48
    JMP 0x0059f76f                      ; 005a077f
        ;   XREF to: 0059f76f (UNCONDITIONAL_JUMP)  ; LAB_0059f76f
    MOV EDI,dword ptr [ESP + 0xc0]      ; 005a0784
        ;   Label: LAB_005a0784
    MOV EAX,EDI                         ; 005a078b
    MOV ESP,EBP                         ; 005a078d
    POP EBP                             ; 005a078f
    POP EDI                             ; 005a0790
    POP ESI                             ; 005a0791
    POP EBX                             ; 005a0792
    RET                                 ; 005a0793

