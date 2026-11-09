; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_curtain_cpp_FUN_0044b6f0(CCurtain *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d741a
;   undefined4 DAT_005d7422
;   undefined4 DAT_005d742a
;   undefined4 DAT_005d7432
;   undefined4 DAT_005d743a
;   undefined4 DAT_0061b4d0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_007dc718
;
; Called Functions:
;   core_curtain.cpp_FUN_0044ab20
;   core_curtain.cpp_FUN_0044ac10
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   crt_string.c__strcmp_FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b6f0
        ;   Label: core_curtain.cpp_FUN_0044b6f0
    PUSH ESI                            ; 0044b6f1
    PUSH EDI                            ; 0044b6f2
    PUSH EBP                            ; 0044b6f3
    MOV EBP,ESP                         ; 0044b6f4
    SUB ESP,0x120                       ; 0044b6f6
    AND ESP,0xfffffff8                  ; 0044b6fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b6ff
    CMP dword ptr [EAX + 0x65b30],0x0   ; 0044b702
    JNZ 0x0044b718                      ; 0044b709
        ;   XREF to: 0044b718 (CONDITIONAL_JUMP)  ; LAB_0044b718
    CMP dword ptr [EAX + 0x190],0x0     ; 0044b70b
    JZ 0x0044bb8c                       ; 0044b712
        ;   XREF to: 0044bb8c (CONDITIONAL_JUMP)  ; LAB_0044bb8c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b718
        ;   Label: LAB_0044b718
    MOV EBX,dword ptr [EAX + 0x1f8]     ; 0044b71b
    MOV dword ptr [EAX + 0x65b30],0x0   ; 0044b721
    TEST EBX,EBX                        ; 0044b72b
    JZ 0x0044bb8c                       ; 0044b72d
        ;   XREF to: 0044bb8c (CONDITIONAL_JUMP)  ; LAB_0044bb8c
    ADD EAX,0x194                       ; 0044b733
    PUSH EAX                            ; 0044b738
    MOV ESI,dword ptr [0x0061b4d0]      ; 0044b739 | DAT_0061b4d0
    PUSH ESI                            ; 0044b73f
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0044b740
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0044b745
    TEST EAX,EAX                        ; 0044b748
    JZ 0x0044b759                       ; 0044b74a
        ;   XREF to: 0044b759 (CONDITIONAL_JUMP)  ; LAB_0044b759
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b74c
    MOV dword ptr [EAX + 0x190],0x1     ; 0044b74f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b759
        ;   Label: LAB_0044b759
    PUSH 0x5d7412                       ; 0044b75c
    ADD EAX,0x194                       ; 0044b761
    PUSH EAX                            ; 0044b766
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 0044b767
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 0044b76c
    TEST EAX,EAX                        ; 0044b76f
    JZ 0x0044b783                       ; 0044b771
        ;   XREF to: 0044b783 (CONDITIONAL_JUMP)  ; LAB_0044b783
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b773
    CMP dword ptr [EAX + 0x190],0x0     ; 0044b776
    JZ 0x0044bb8c                       ; 0044b77d
        ;   XREF to: 0044bb8c (CONDITIONAL_JUMP)  ; LAB_0044bb8c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b783
        ;   Label: LAB_0044b783
    CMP dword ptr [EAX + 0x65b2c],0x0   ; 0044b786
    JZ 0x0044b7bd                       ; 0044b78d
        ;   XREF to: 0044b7bd (CONDITIONAL_JUMP)  ; LAB_0044b7bd
    PUSH 0x0                            ; 0044b78f
    MOV ECX,dword ptr [EBP + 0x14]      ; 0044b791
    MOV EAX,dword ptr [EAX + 0x154]     ; 0044b794
    PUSH 0x3dcccccd                     ; 0044b79a
    PUSH ECX                            ; 0044b79f
    CALL dword ptr [EAX + 0x40]         ; 0044b7a0
    MOV dword ptr [ESP + 0x128],EAX     ; 0044b7a3
    FLD float ptr [ESP + 0x128]         ; 0044b7aa
    ADD ESP,0xc                         ; 0044b7b1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b7b4
    FSTP float ptr [EAX + 0x65b28]      ; 0044b7b7
    FLD float ptr [EBP + 0x18]          ; 0044b7bd
        ;   Label: LAB_0044b7bd
    FLD1                                ; 0044b7c0
    FDIVRP                              ; 0044b7c2
    MOV EBX,0x47c34f80                  ; 0044b7c4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b7c9
    MOV dword ptr [ESP + 0x28],EBX      ; 0044b7cc
    MOV dword ptr [ESP + 0x2c],EBX      ; 0044b7d0
    FSTP float ptr [EAX + 0x1c728]      ; 0044b7d4
    MOV EAX,0xc7c34f80                  ; 0044b7da
    MOV EDI,EBX                         ; 0044b7df
    MOV dword ptr [ESP + 0xe8],EAX      ; 0044b7e1
    MOV dword ptr [ESP + 0xec],EAX      ; 0044b7e8
    MOV dword ptr [ESP + 0xf0],EAX      ; 0044b7ef
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b7f6
    MOV dword ptr [ESP + 0x30],EBX      ; 0044b7f9
    XOR EDI,EBX                         ; 0044b7fd
    CMP dword ptr [EAX + 0x204],0x0     ; 0044b7ff
    JLE 0x0044b8ad                      ; 0044b806
        ;   XREF to: 0044b8ad (CONDITIONAL_JUMP)  ; LAB_0044b8ad
    LEA ESI,[EAX + 0x208]               ; 0044b80c
    FLD float ptr [ESI + 0x20]          ; 0044b812
        ;   Label: LAB_0044b812
    MOV EBX,ESI                         ; 0044b815
    FCOMP float ptr [ESP + 0x28]        ; 0044b817
    FNSTSW AX                           ; 0044b81b
    SAHF                                ; 0044b81d
    JNC 0x0044b827                      ; 0044b81e
        ;   XREF to: 0044b827 (CONDITIONAL_JUMP)  ; LAB_0044b827
    MOV EAX,dword ptr [ESI + 0x20]      ; 0044b820
    MOV dword ptr [ESP + 0x28],EAX      ; 0044b823
    FLD float ptr [EBX + 0x24]          ; 0044b827
        ;   Label: LAB_0044b827
    FCOMP float ptr [ESP + 0x2c]        ; 0044b82a
    FNSTSW AX                           ; 0044b82e
    SAHF                                ; 0044b830
    JNC 0x0044b83a                      ; 0044b831
        ;   XREF to: 0044b83a (CONDITIONAL_JUMP)  ; LAB_0044b83a
    MOV EAX,dword ptr [EBX + 0x24]      ; 0044b833
    MOV dword ptr [ESP + 0x2c],EAX      ; 0044b836
    FLD float ptr [EBX + 0x28]          ; 0044b83a
        ;   Label: LAB_0044b83a
    FCOMP float ptr [ESP + 0x30]        ; 0044b83d
    FNSTSW AX                           ; 0044b841
    SAHF                                ; 0044b843
    JNC 0x0044b84d                      ; 0044b844
        ;   XREF to: 0044b84d (CONDITIONAL_JUMP)  ; LAB_0044b84d
    MOV EAX,dword ptr [EBX + 0x28]      ; 0044b846
    MOV dword ptr [ESP + 0x30],EAX      ; 0044b849
    FLD float ptr [EBX + 0x20]          ; 0044b84d
        ;   Label: LAB_0044b84d
    FCOMP float ptr [ESP + 0xe8]        ; 0044b850
    FNSTSW AX                           ; 0044b857
    SAHF                                ; 0044b859
    JBE 0x0044b866                      ; 0044b85a
        ;   XREF to: 0044b866 (CONDITIONAL_JUMP)  ; LAB_0044b866
    MOV EAX,dword ptr [EBX + 0x20]      ; 0044b85c
    MOV dword ptr [ESP + 0xe8],EAX      ; 0044b85f
    FLD float ptr [EBX + 0x24]          ; 0044b866
        ;   Label: LAB_0044b866
    FCOMP float ptr [ESP + 0xec]        ; 0044b869
    FNSTSW AX                           ; 0044b870
    SAHF                                ; 0044b872
    JBE 0x0044b87f                      ; 0044b873
        ;   XREF to: 0044b87f (CONDITIONAL_JUMP)  ; LAB_0044b87f
    MOV EAX,dword ptr [EBX + 0x24]      ; 0044b875
    MOV dword ptr [ESP + 0xec],EAX      ; 0044b878
    FLD float ptr [EBX + 0x28]          ; 0044b87f
        ;   Label: LAB_0044b87f
    FCOMP float ptr [ESP + 0xf0]        ; 0044b882
    FNSTSW AX                           ; 0044b889
    SAHF                                ; 0044b88b
    JBE 0x0044b898                      ; 0044b88c
        ;   XREF to: 0044b898 (CONDITIONAL_JUMP)  ; LAB_0044b898
    MOV EAX,dword ptr [EBX + 0x28]      ; 0044b88e
    MOV dword ptr [ESP + 0xf0],EAX      ; 0044b891
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b898
        ;   Label: LAB_0044b898
    INC EDI                             ; 0044b89b
    MOV EDX,dword ptr [EAX + 0x204]     ; 0044b89c
    ADD ESI,0x74                        ; 0044b8a2
    CMP EDI,EDX                         ; 0044b8a5
    JL 0x0044b812                       ; 0044b8a7
        ;   XREF to: 0044b812 (CONDITIONAL_JUMP)  ; LAB_0044b812
    XOR ECX,ECX                         ; 0044b8ad
        ;   Label: LAB_0044b8ad
    XOR EDI,EDI                         ; 0044b8af
    MOV dword ptr [ESP + 0x114],ECX     ; 0044b8b1
    MOV dword ptr [0x007dc718],ECX      ; 0044b8b8 | DAT_007dc718
    MOV EDX,dword ptr [0x00622c18]      ; 0044b8be | g_CDemonSetPtr
        ;   Label: LAB_0044b8be
    MOV EAX,dword ptr [ESP + 0x114]     ; 0044b8c4
    CMP EAX,dword ptr [EDX + 0x14f0a8]  ; 0044b8cb
    JGE 0x0044b9a0                      ; 0044b8d1
        ;   XREF to: 0044b9a0 (CONDITIONAL_JUMP)  ; LAB_0044b9a0
    MOV EAX,[0x007dc718]                ; 0044b8d7 | DAT_007dc718
    IMUL ESI,EAX,0x28                   ; 0044b8dc
    IMUL EAX,EAX,0xc                    ; 0044b8df
    MOV EBX,dword ptr [EDX + EDI*0x1 + 0x14f0ac] ; 0044b8e2
    LEA EDX,[EBX + 0x20]                ; 0044b8e9
    ADD EAX,0x7dc71c                    ; 0044b8ec
    ADD ESI,0x7dcbcc                    ; 0044b8f1
    CMP EAX,EDX                         ; 0044b8f7
    JZ 0x0044b90b                       ; 0044b8f9
        ;   XREF to: 0044b90b (CONDITIONAL_JUMP)  ; LAB_0044b90b
    MOV ECX,dword ptr [EDX]             ; 0044b8fb
    MOV dword ptr [EAX],ECX             ; 0044b8fd
    MOV ECX,dword ptr [EDX + 0x4]       ; 0044b8ff
    MOV dword ptr [EAX + 0x4],ECX       ; 0044b902
    MOV ECX,dword ptr [EDX + 0x8]       ; 0044b905
    MOV dword ptr [EAX + 0x8],ECX       ; 0044b908
    PUSH ESI                            ; 0044b90b
        ;   Label: LAB_0044b90b
    MOV dword ptr [ESI],0x0             ; 0044b90c
    PUSH EBX                            ; 0044b912
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044b913
    CALL dword ptr [EAX + 0x3c]         ; 0044b919
    ADD ESP,0x8                         ; 0044b91c
    CMP EAX,0x2                         ; 0044b91f
    JZ 0x0044b938                       ; 0044b922
        ;   XREF to: 0044b938 (CONDITIONAL_JUMP)  ; LAB_0044b938
    MOV EBX,dword ptr [ESP + 0x114]     ; 0044b924
        ;   Label: LAB_0044b924
    INC EBX                             ; 0044b92b
    ADD EDI,0x4                         ; 0044b92c
    MOV dword ptr [ESP + 0x114],EBX     ; 0044b92f
    JMP 0x0044b8be                      ; 0044b936
        ;   XREF to: 0044b8be (UNCONDITIONAL_JUMP)  ; LAB_0044b8be
    FLD float ptr [EBX + 0x24]          ; 0044b938
        ;   Label: LAB_0044b938
    FCOMP float ptr [ESP + 0xec]        ; 0044b93b
    FNSTSW AX                           ; 0044b942
    SAHF                                ; 0044b944
    JA 0x0044b924                       ; 0044b945
        ;   XREF to: 0044b924 (CONDITIONAL_JUMP)  ; LAB_0044b924
    FLD float ptr [EBX + 0x24]          ; 0044b947
    FADD float ptr [ESI + 0x18]         ; 0044b94a
    FCOMP float ptr [ESP + 0x2c]        ; 0044b94d
    FNSTSW AX                           ; 0044b951
    SAHF                                ; 0044b953
    JC 0x0044b924                       ; 0044b954
        ;   XREF to: 0044b924 (CONDITIONAL_JUMP)  ; LAB_0044b924
    FLD float ptr [EBX + 0x20]          ; 0044b956
    FADD float ptr [ESI + 0x1c]         ; 0044b959
    FCOMP float ptr [ESP + 0x28]        ; 0044b95c
    FNSTSW AX                           ; 0044b960
    SAHF                                ; 0044b962
    JC 0x0044b924                       ; 0044b963
        ;   XREF to: 0044b924 (CONDITIONAL_JUMP)  ; LAB_0044b924
    FLD float ptr [EBX + 0x20]          ; 0044b965
    FSUB float ptr [ESI + 0x1c]         ; 0044b968
    FCOMP float ptr [ESP + 0xe8]        ; 0044b96b
    FNSTSW AX                           ; 0044b972
    SAHF                                ; 0044b974
    JA 0x0044b924                       ; 0044b975
        ;   XREF to: 0044b924 (CONDITIONAL_JUMP)  ; LAB_0044b924
    FLD float ptr [EBX + 0x28]          ; 0044b977
    FADD float ptr [ESI + 0x1c]         ; 0044b97a
    FCOMP float ptr [ESP + 0x30]        ; 0044b97d
    FNSTSW AX                           ; 0044b981
    SAHF                                ; 0044b983
    JC 0x0044b924                       ; 0044b984
        ;   XREF to: 0044b924 (CONDITIONAL_JUMP)  ; LAB_0044b924
    FLD float ptr [EBX + 0x28]          ; 0044b986
    FSUB float ptr [ESI + 0x1c]         ; 0044b989
    FCOMP float ptr [ESP + 0xf0]        ; 0044b98c
    FNSTSW AX                           ; 0044b993
    SAHF                                ; 0044b995
    JA 0x0044b924                       ; 0044b996
        ;   XREF to: 0044b924 (CONDITIONAL_JUMP)  ; LAB_0044b924
    INC dword ptr [0x007dc718]          ; 0044b998 | DAT_007dc718
    JMP 0x0044b924                      ; 0044b99e
        ;   XREF to: 0044b924 (UNCONDITIONAL_JUMP)  ; LAB_0044b924
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b9a0
        ;   Label: LAB_0044b9a0
    MOV EDI,dword ptr [0x007dc718]      ; 0044b9a3 | DAT_007dc718
    MOV dword ptr [EAX + 0x65b34],0x1   ; 0044b9a9
    TEST EDI,EDI                        ; 0044b9b3
    JNZ 0x0044ba02                      ; 0044b9b5
        ;   XREF to: 0044ba02 (CONDITIONAL_JUMP)  ; LAB_0044ba02
    MOV EDX,dword ptr [EAX + 0x190]     ; 0044b9b7
    TEST EDX,EDX                        ; 0044b9bd
    JNZ 0x0044ba02                      ; 0044b9bf
        ;   XREF to: 0044ba02 (CONDITIONAL_JUMP)  ; LAB_0044ba02
    MOV ECX,dword ptr [EAX + 0x204]     ; 0044b9c1
    MOV dword ptr [EAX + 0x65b34],EDI   ; 0044b9c7
    TEST ECX,ECX                        ; 0044b9cd
    JLE 0x0044b9f2                      ; 0044b9cf
        ;   XREF to: 0044b9f2 (CONDITIONAL_JUMP)  ; LAB_0044b9f2
    LEA EBX,[EAX + 0x208]               ; 0044b9d1
    CMP dword ptr [EBX + 0x68],0x0      ; 0044b9d7
        ;   Label: LAB_0044b9d7
    JZ 0x0044bb93                       ; 0044b9db
        ;   XREF to: 0044bb93 (CONDITIONAL_JUMP)  ; LAB_0044bb93
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b9e1
        ;   Label: LAB_0044b9e1
    INC EDX                             ; 0044b9e4
    MOV ESI,dword ptr [EAX + 0x204]     ; 0044b9e5
    ADD EBX,0x74                        ; 0044b9eb
    CMP EDX,ESI                         ; 0044b9ee
    JL 0x0044b9d7                       ; 0044b9f0
        ;   XREF to: 0044b9d7 (CONDITIONAL_JUMP)  ; LAB_0044b9d7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b9f2
        ;   Label: LAB_0044b9f2
    CMP dword ptr [EAX + 0x65b34],0x0   ; 0044b9f5
    JZ 0x0044bb8c                       ; 0044b9fc
        ;   XREF to: 0044bb8c (CONDITIONAL_JUMP)  ; LAB_0044bb8c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ba02
        ;   Label: LAB_0044ba02
    MOV ECX,dword ptr [EAX + 0x204]     ; 0044ba05
    XOR EDX,EDX                         ; 0044ba0b
    TEST ECX,ECX                        ; 0044ba0d
    JLE 0x0044ba30                      ; 0044ba0f
        ;   XREF to: 0044ba30 (CONDITIONAL_JUMP)  ; LAB_0044ba30
    MOV EBX,dword ptr [EBP + 0x14]      ; 0044ba11
    MOV dword ptr [EAX + 0x274],0x0     ; 0044ba14
        ;   Label: LAB_0044ba14
    INC EDX                             ; 0044ba1e
    MOV ESI,dword ptr [EBX + 0x204]     ; 0044ba1f
    ADD EAX,0x74                        ; 0044ba25
    CMP EDX,ESI                         ; 0044ba28
    JL 0x0044ba14                       ; 0044ba2a
        ;   XREF to: 0044ba14 (CONDITIONAL_JUMP)  ; LAB_0044ba14
    LEA EAX,[EAX]                       ; 0044ba2c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ba30
        ;   Label: LAB_0044ba30
    XOR EDI,EDI                         ; 0044ba33
    MOV EDX,dword ptr [EAX + 0x204]     ; 0044ba35
    MOV dword ptr [ESP + 0x110],EDI     ; 0044ba3b
    TEST EDX,EDX                        ; 0044ba42
    JLE 0x0044ba78                      ; 0044ba44
        ;   XREF to: 0044ba78 (CONDITIONAL_JUMP)  ; LAB_0044ba78
    LEA EBX,[EAX + 0x208]               ; 0044ba46
    MOV EDI,dword ptr [EBX + 0x68]      ; 0044ba4c
        ;   Label: LAB_0044ba4c
    MOV EDX,EBX                         ; 0044ba4f
    TEST EDI,EDI                        ; 0044ba51
    JZ 0x0044bc40                       ; 0044ba53
        ;   XREF to: 0044bc40 (CONDITIONAL_JUMP)  ; LAB_0044bc40
    MOV ECX,dword ptr [ESP + 0x110]     ; 0044ba59
        ;   Label: LAB_0044ba59
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044ba60
    ADD EBX,0x74                        ; 0044ba63
    INC ECX                             ; 0044ba66
    MOV ESI,dword ptr [EDX + 0x204]     ; 0044ba67
    MOV dword ptr [ESP + 0x110],ECX     ; 0044ba6d
    CMP ECX,ESI                         ; 0044ba74
    JL 0x0044ba4c                       ; 0044ba76
        ;   XREF to: 0044ba4c (CONDITIONAL_JUMP)  ; LAB_0044ba4c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ba78
        ;   Label: LAB_0044ba78
    ADD EAX,0x208                       ; 0044ba7b
    XOR EDI,EDI                         ; 0044ba80
    MOV dword ptr [ESP + 0x10c],EAX     ; 0044ba82
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ba89
        ;   Label: LAB_0044ba89
    MOV EDX,dword ptr [EAX + 0x204]     ; 0044ba8c
    XOR ESI,ESI                         ; 0044ba92
    TEST EDX,EDX                        ; 0044ba94
    JLE 0x0044baba                      ; 0044ba96
        ;   XREF to: 0044baba (CONDITIONAL_JUMP)  ; LAB_0044baba
    MOV EBX,dword ptr [ESP + 0x10c]     ; 0044ba98
    CMP dword ptr [EBX + 0x68],0x0      ; 0044ba9f
        ;   Label: LAB_0044ba9f
    JZ 0x0044bf0c                       ; 0044baa3
        ;   XREF to: 0044bf0c (CONDITIONAL_JUMP)  ; LAB_0044bf0c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044baa9
        ;   Label: LAB_0044baa9
    INC ESI                             ; 0044baac
    MOV ECX,dword ptr [EAX + 0x204]     ; 0044baad
    ADD EBX,0x74                        ; 0044bab3
    CMP ESI,ECX                         ; 0044bab6
    JL 0x0044ba9f                       ; 0044bab8
        ;   XREF to: 0044ba9f (CONDITIONAL_JUMP)  ; LAB_0044ba9f
    INC EDI                             ; 0044baba
        ;   Label: LAB_0044baba
    CMP EDI,0x3                         ; 0044babb
    JL 0x0044ba89                       ; 0044babe
        ;   XREF to: 0044ba89 (CONDITIONAL_JUMP)  ; LAB_0044ba89
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044bac0
    MOV EBX,dword ptr [EAX + 0x204]     ; 0044bac3
    XOR ESI,ESI                         ; 0044bac9
    TEST EBX,EBX                        ; 0044bacb
    JLE 0x0044bb28                      ; 0044bacd
        ;   XREF to: 0044bb28 (CONDITIONAL_JUMP)  ; LAB_0044bb28
    LEA EDI,[EAX + 0x65b20]             ; 0044bacf
    LEA EBX,[EAX + 0x208]               ; 0044bad5
    MOV EAX,dword ptr [EBX + 0x6c]      ; 0044badb
        ;   Label: LAB_0044badb
    MOV EDX,EBX                         ; 0044bade
    TEST EAX,EAX                        ; 0044bae0
    JZ 0x0044bafd                       ; 0044bae2
        ;   XREF to: 0044bafd (CONDITIONAL_JUMP)  ; LAB_0044bafd
    LEA EAX,[EBX + 0x2c]                ; 0044bae4
    FLD float ptr [EDI]                 ; 0044bae7
    FMUL float ptr [EAX]                ; 0044bae9
    FSTP float ptr [EAX]                ; 0044baeb
    FLD float ptr [EDI]                 ; 0044baed
    FMUL float ptr [EAX + 0x4]          ; 0044baef
    FSTP float ptr [EAX + 0x4]          ; 0044baf2
    FLD float ptr [EDI]                 ; 0044baf5
    FMUL float ptr [EAX + 0x8]          ; 0044baf7
    FSTP float ptr [EAX + 0x8]          ; 0044bafa
    LEA EAX,[EDX + 0x38]                ; 0044bafd
        ;   Label: LAB_0044bafd
    ADD EDX,0x20                        ; 0044bb00
    CMP EAX,EDX                         ; 0044bb03
    JZ 0x0044bb17                       ; 0044bb05
        ;   XREF to: 0044bb17 (CONDITIONAL_JUMP)  ; LAB_0044bb17
    MOV ECX,dword ptr [EDX]             ; 0044bb07
    MOV dword ptr [EAX],ECX             ; 0044bb09
    MOV ECX,dword ptr [EDX + 0x4]       ; 0044bb0b
    MOV dword ptr [EAX + 0x4],ECX       ; 0044bb0e
    MOV ECX,dword ptr [EDX + 0x8]       ; 0044bb11
    MOV dword ptr [EAX + 0x8],ECX       ; 0044bb14
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044bb17
        ;   Label: LAB_0044bb17
    INC ESI                             ; 0044bb1a
    MOV ECX,dword ptr [EAX + 0x204]     ; 0044bb1b
    ADD EBX,0x74                        ; 0044bb21
    CMP ESI,ECX                         ; 0044bb24
    JL 0x0044badb                       ; 0044bb26
        ;   XREF to: 0044badb (CONDITIONAL_JUMP)  ; LAB_0044badb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044bb28
        ;   Label: LAB_0044bb28
    CMP dword ptr [EAX + 0x65b2c],0x0   ; 0044bb2b
    JZ 0x0044bb80                       ; 0044bb32
        ;   XREF to: 0044bb80 (CONDITIONAL_JUMP)  ; LAB_0044bb80
    MOV EDI,dword ptr [EAX + 0x204]     ; 0044bb34
    XOR EBX,EBX                         ; 0044bb3a
    XOR ESI,ESI                         ; 0044bb3c
    TEST EDI,EDI                        ; 0044bb3e
    JLE 0x0044bb6b                      ; 0044bb40
        ;   XREF to: 0044bb6b (CONDITIONAL_JUMP)  ; LAB_0044bb6b
    LEA EDX,[EAX + 0x208]               ; 0044bb42
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044bb48
        ;   Label: LAB_0044bb48
    FLD float ptr [EDX + 0x24]          ; 0044bb4b
    FCOMP float ptr [EAX + 0x65b28]     ; 0044bb4e
    FNSTSW AX                           ; 0044bb54
    SAHF                                ; 0044bb56
    JA 0x0044bb5a                       ; 0044bb57
        ;   XREF to: 0044bb5a (CONDITIONAL_JUMP)  ; LAB_0044bb5a
    INC ESI                             ; 0044bb59
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044bb5a
        ;   Label: LAB_0044bb5a
    INC EBX                             ; 0044bb5d
    MOV ECX,dword ptr [EAX + 0x204]     ; 0044bb5e
    ADD EDX,0x74                        ; 0044bb64
    CMP EBX,ECX                         ; 0044bb67
    JL 0x0044bb48                       ; 0044bb69
        ;   XREF to: 0044bb48 (CONDITIONAL_JUMP)  ; LAB_0044bb48
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044bb6b
        ;   Label: LAB_0044bb6b
    CMP ESI,dword ptr [EAX + 0x204]     ; 0044bb6e
    JNZ 0x0044bb80                      ; 0044bb74
        ;   XREF to: 0044bb80 (CONDITIONAL_JUMP)  ; LAB_0044bb80
    MOV dword ptr [EAX + 0x1f8],0x0     ; 0044bb76
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044bb80
        ;   Label: LAB_0044bb80
    PUSH ESI                            ; 0044bb83
    CALL core_curtain.cpp_FUN_0044ab20  ; 0044bb84
        ;   XREF to: 0044ab20 (UNCONDITIONAL_CALL)  ; undefined core_curtain.cpp_FUN_0044ab20()
    ADD ESP,0x4                         ; 0044bb89
    MOV ESP,EBP                         ; 0044bb8c
        ;   Label: LAB_0044bb8c
    POP EBP                             ; 0044bb8e
    POP EDI                             ; 0044bb8f
    POP ESI                             ; 0044bb90
    POP EBX                             ; 0044bb91
    RET                                 ; 0044bb92
    LEA EAX,[EBX + 0x2c]                ; 0044bb93
        ;   Label: LAB_0044bb93
    FLD float ptr [EAX + 0x4]           ; 0044bb96
    FMUL ST0                            ; 0044bb99
    FLD float ptr [EAX]                 ; 0044bb9b
    FMUL ST0                            ; 0044bb9d
    FADDP                               ; 0044bb9f
    FLD float ptr [EAX + 0x8]           ; 0044bba1
    FMUL ST0                            ; 0044bba4
    FADDP                               ; 0044bba6
    FSQRT                               ; 0044bba8
    FCOMP double ptr [0x005d743a]       ; 0044bbaa | DAT_005d743a
    FNSTSW AX                           ; 0044bbb0
    SAHF                                ; 0044bbb2
    JBE 0x0044bbc7                      ; 0044bbb3
        ;   XREF to: 0044bbc7 (CONDITIONAL_JUMP)  ; LAB_0044bbc7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044bbb5
    MOV dword ptr [EAX + 0x65b34],0x1   ; 0044bbb8
    JMP 0x0044ba02                      ; 0044bbc2
        ;   XREF to: 0044ba02 (UNCONDITIONAL_JUMP)  ; LAB_0044ba02
    LEA EAX,[EBX + 0xc]                 ; 0044bbc7
        ;   Label: LAB_0044bbc7
    LEA EDI,[ESP + 0xac]                ; 0044bbca
    LEA ESI,[ESP + 0x58]                ; 0044bbd1
    FLD float ptr [EAX]                 ; 0044bbd5
    FLD float ptr [EAX + 0x4]           ; 0044bbd7
    FLD float ptr [EAX + 0x8]           ; 0044bbda
    FXCH ST2                            ; 0044bbdd
    FSUB float ptr [EBX]                ; 0044bbdf
    FXCH                                ; 0044bbe1
    FSUB float ptr [EBX + 0x4]          ; 0044bbe3
    FXCH ST2                            ; 0044bbe6
    FSUB float ptr [EBX + 0x8]          ; 0044bbe8
    FXCH                                ; 0044bbeb
    FSTP float ptr [ESP + 0x58]         ; 0044bbed
    FXCH                                ; 0044bbf1
    FSTP float ptr [ESP + 0x5c]         ; 0044bbf3
    FSTP float ptr [ESP + 0x60]         ; 0044bbf7
    MOVSD ES:EDI,ESI                    ; 0044bbfb
    MOVSD ES:EDI,ESI                    ; 0044bbfc
    MOVSD ES:EDI,ESI                    ; 0044bbfd
    FLD float ptr [ESP + 0xb0]          ; 0044bbfe
    FMUL ST0                            ; 0044bc05
    FLD float ptr [ESP + 0xac]          ; 0044bc07
    FMUL ST0                            ; 0044bc0e
    FADDP                               ; 0044bc10
    FLD float ptr [ESP + 0xb4]          ; 0044bc12
    FMUL ST0                            ; 0044bc19
    FADDP                               ; 0044bc1b
    FSQRT                               ; 0044bc1d
    FCOMP double ptr [0x005d743a]       ; 0044bc1f | DAT_005d743a
    FNSTSW AX                           ; 0044bc25
    SAHF                                ; 0044bc27
    JBE 0x0044b9e1                      ; 0044bc28
        ;   XREF to: 0044b9e1 (CONDITIONAL_JUMP)  ; LAB_0044b9e1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044bc2e
    MOV dword ptr [EAX + 0x65b34],0x1   ; 0044bc31
    JMP 0x0044ba02                      ; 0044bc3b
        ;   XREF to: 0044ba02 (UNCONDITIONAL_JUMP)  ; LAB_0044ba02
    FLD float ptr [EBX + 0x2c]          ; 0044bc40
        ;   Label: LAB_0044bc40
    FLD ST0                             ; 0044bc43
    FLD double ptr [0x005d741a]         ; 0044bc45 | DAT_005d741a
    FXCH                                ; 0044bc4b
    FMUL ST1                            ; 0044bc4d
    FLD float ptr [EBX + 0x34]          ; 0044bc4f
    FMUL ST2                            ; 0044bc52
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044bc54
    FXCH                                ; 0044bc57
    FSTP ST3                            ; 0044bc59
    FXCH ST2                            ; 0044bc5b
    FSTP float ptr [EBX + 0x2c]         ; 0044bc5d
    FLD float ptr [EAX + 0x65b18]       ; 0044bc60
    FMUL float ptr [EBX + 0x30]         ; 0044bc66
    MOV dword ptr [ESP + 0x54],EDI      ; 0044bc69
    MOV dword ptr [ESP + 0x50],EDI      ; 0044bc6d
    MOV dword ptr [ESP + 0x4c],EDI      ; 0044bc71
    FXCH                                ; 0044bc75
    FSTP ST2                            ; 0044bc77
    FXCH                                ; 0044bc79
    FSTP float ptr [EBX + 0x34]         ; 0044bc7b
    FSTP float ptr [EBX + 0x30]         ; 0044bc7e
    MOV EAX,dword ptr [EAX + 0x65b14]   ; 0044bc81
    MOV EDI,dword ptr [EBX + 0x70]      ; 0044bc87
    MOV dword ptr [ESP],EAX             ; 0044bc8a
    TEST EDI,EDI                        ; 0044bc8d
    JZ 0x0044bc9d                       ; 0044bc8f
        ;   XREF to: 0044bc9d (CONDITIONAL_JUMP)  ; LAB_0044bc9d
    FLD float ptr [ESP]                 ; 0044bc91
    FMUL double ptr [0x005d7422]        ; 0044bc94 | DAT_005d7422
    FSTP float ptr [ESP]                ; 0044bc9a
    FLD1                                ; 0044bc9d
        ;   Label: LAB_0044bc9d
    FDIV float ptr [EBP + 0x18]         ; 0044bc9f
    FLD float ptr [ESP]                 ; 0044bca2
    FLD ST0                             ; 0044bca5
    FMUL double ptr [0x005d742a]        ; 0044bca7 | DAT_005d742a
    LEA EAX,[EDX + 0x2c]                ; 0044bcad
    LEA EDI,[ESP + 0xd0]                ; 0044bcb0
    LEA ESI,[ESP + 0x64]                ; 0044bcb7
    FLD float ptr [EAX]                 ; 0044bcbb
    FLD float ptr [EAX + 0x4]           ; 0044bcbd
    FLD float ptr [EAX + 0x8]           ; 0044bcc0
    FXCH ST2                            ; 0044bcc3
    FCHS                                ; 0044bcc5
    FXCH                                ; 0044bcc7
    FCHS                                ; 0044bcc9
    FXCH ST2                            ; 0044bccb
    FCHS                                ; 0044bccd
    FXCH                                ; 0044bccf
    FSTP float ptr [ESP + 0x64]         ; 0044bcd1
    FXCH                                ; 0044bcd5
    FSTP float ptr [ESP + 0x68]         ; 0044bcd7
    FSTP float ptr [ESP + 0x6c]         ; 0044bcdb
    MOVSD ES:EDI,ESI                    ; 0044bcdf
    MOVSD ES:EDI,ESI                    ; 0044bce0
    MOVSD ES:EDI,ESI                    ; 0044bce1
    FLD float ptr [ESP + 0xd0]          ; 0044bce2
    FMUL ST3                            ; 0044bce9
    FLD float ptr [ESP + 0xd4]          ; 0044bceb
    FMUL ST4                            ; 0044bcf2
    FLD1                                ; 0044bcf4
    FXCH ST3                            ; 0044bcf6
    FSTP float ptr [ESP + 0x118]        ; 0044bcf8
    FLD float ptr [ESP + 0xd8]          ; 0044bcff
    LEA EDI,[ESP + 0x88]                ; 0044bd06
    LEA ESI,[ESP + 0xb8]                ; 0044bd0d
    FMULP ST5                           ; 0044bd14
    FXCH ST2                            ; 0044bd16
    FDIV float ptr [ESP + 0x118]        ; 0044bd18
    FXCH                                ; 0044bd1f
    FSTP float ptr [ESP + 0xb8]         ; 0044bd21
    FXCH                                ; 0044bd28
    FSTP float ptr [ESP + 0xbc]         ; 0044bd2a
    FXCH ST2                            ; 0044bd31
    FSTP float ptr [ESP + 0xc0]         ; 0044bd33
    MOVSD ES:EDI,ESI                    ; 0044bd3a
    MOVSD ES:EDI,ESI                    ; 0044bd3b
    MOVSD ES:EDI,ESI                    ; 0044bd3c
    FLD float ptr [ESP + 0x88]          ; 0044bd3d
    FMUL float ptr [ESP + 0x118]        ; 0044bd44
    FLD float ptr [ESP + 0x8c]          ; 0044bd4b
    FMUL float ptr [ESP + 0x118]        ; 0044bd52
    FLD float ptr [ESP + 0x90]          ; 0044bd59
    FMUL float ptr [ESP + 0x118]        ; 0044bd60
    LEA EDI,[ESP + 0xc4]                ; 0044bd67
    LEA ESI,[ESP + 0x40]                ; 0044bd6e
    FXCH ST2                            ; 0044bd72
    FSTP float ptr [ESP + 0x40]         ; 0044bd74
    FSTP float ptr [ESP + 0x44]         ; 0044bd78
    FSTP float ptr [ESP + 0x48]         ; 0044bd7c
    MOVSD ES:EDI,ESI                    ; 0044bd80
    MOVSD ES:EDI,ESI                    ; 0044bd81
    MOVSD ES:EDI,ESI                    ; 0044bd82
    FLD float ptr [0x005d7432]          ; 0044bd83 | DAT_005d7432
    FLD float ptr [ESP + 0xc4]          ; 0044bd89
    FMUL ST1                            ; 0044bd90
    FLD float ptr [ESP + 0xc8]          ; 0044bd92
    FMUL ST2                            ; 0044bd99
    FLD float ptr [ESP + 0xcc]          ; 0044bd9b
    FMULP ST3                           ; 0044bda2
    LEA EDI,[ESP + 0x1c]                ; 0044bda4
    LEA ESI,[ESP + 0xa0]                ; 0044bda8
    FXCH                                ; 0044bdaf
    FSTP float ptr [ESP + 0xa0]         ; 0044bdb1
    FSTP float ptr [ESP + 0xa4]         ; 0044bdb8
    FSTP float ptr [ESP + 0xa8]         ; 0044bdbf
    MOVSD ES:EDI,ESI                    ; 0044bdc6
    MOVSD ES:EDI,ESI                    ; 0044bdc7
    MOVSD ES:EDI,ESI                    ; 0044bdc8
    FLD float ptr [ESP + 0x4c]          ; 0044bdc9
    FADD float ptr [ESP + 0x1c]         ; 0044bdcd
    FST float ptr [ESP + 0x4c]          ; 0044bdd1
    FMUL ST2                            ; 0044bdd5
    FLD float ptr [ESP + 0x50]          ; 0044bdd7
    FSUBRP ST2,ST0                      ; 0044bddb
    FLD float ptr [ESP + 0x54]          ; 0044bddd
    FXCH ST2                            ; 0044bde1
    FADD float ptr [ESP + 0x20]         ; 0044bde3
    FXCH ST2                            ; 0044bde7
    FADD float ptr [ESP + 0x24]         ; 0044bde9
    FXCH ST2                            ; 0044bded
    FST float ptr [ESP + 0x50]          ; 0044bdef
    FMUL ST3                            ; 0044bdf3
    FXCH ST2                            ; 0044bdf5
    FST float ptr [ESP + 0x54]          ; 0044bdf7
    FMULP ST3                           ; 0044bdfb
    LEA EDI,[ESP + 0x4]                 ; 0044bdfd
    LEA ESI,[ESP + 0x10]                ; 0044be01
    FSTP float ptr [ESP + 0x10]         ; 0044be05
    FSTP float ptr [ESP + 0x14]         ; 0044be09
    FSTP float ptr [ESP + 0x18]         ; 0044be0d
    MOVSD ES:EDI,ESI                    ; 0044be11
    MOVSD ES:EDI,ESI                    ; 0044be12
    MOVSD ES:EDI,ESI                    ; 0044be13
    LEA EAX,[ESP + 0xdc]                ; 0044be14
    LEA ESI,[ESP + 0x4]                 ; 0044be1b
    CMP EAX,ESI                         ; 0044be1f
    JZ 0x0044be44                       ; 0044be21
        ;   XREF to: 0044be44 (CONDITIONAL_JUMP)  ; LAB_0044be44
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044be23
    MOV dword ptr [ESP + 0xdc],EAX      ; 0044be27
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044be2e
    MOV dword ptr [ESP + 0xe0],EAX      ; 0044be32
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044be39
    MOV dword ptr [ESP + 0xe4],EAX      ; 0044be3d
    FLD float ptr [EBP + 0x18]          ; 0044be44
        ;   Label: LAB_0044be44
    FLD float ptr [ESP + 0xdc]          ; 0044be47
    FMUL ST1                            ; 0044be4e
    FLD float ptr [ESP + 0xe0]          ; 0044be50
    FMUL ST2                            ; 0044be57
    FLD float ptr [ESP + 0xe4]          ; 0044be59
    FMUL ST3                            ; 0044be60
    LEA EDI,[ESP + 0x94]                ; 0044be62
    LEA ESI,[ESP + 0x34]                ; 0044be69
    LEA EAX,[EDX + 0x2c]                ; 0044be6d
    FXCH ST2                            ; 0044be70
    FSTP float ptr [ESP + 0x34]         ; 0044be72
    FSTP float ptr [ESP + 0x38]         ; 0044be76
    FSTP float ptr [ESP + 0x3c]         ; 0044be7a
    MOVSD ES:EDI,ESI                    ; 0044be7e
    MOVSD ES:EDI,ESI                    ; 0044be7f
    MOVSD ES:EDI,ESI                    ; 0044be80
    FLD float ptr [EAX]                 ; 0044be81
    FADD float ptr [ESP + 0x94]         ; 0044be83
    FST float ptr [EAX]                 ; 0044be8a
    FMUL ST1                            ; 0044be8c
    FLD float ptr [EAX + 0x8]           ; 0044be8e
    FLD float ptr [EAX + 0x4]           ; 0044be91
    FADD float ptr [ESP + 0x98]         ; 0044be94
    FXCH                                ; 0044be9b
    FADD float ptr [ESP + 0x9c]         ; 0044be9d
    FXCH                                ; 0044bea4
    FST float ptr [EAX + 0x4]           ; 0044bea6
    FMUL ST3                            ; 0044bea9
    FXCH                                ; 0044beab
    FST float ptr [EAX + 0x8]           ; 0044bead
    FMULP ST3                           ; 0044beb0
    LEA EDI,[ESP + 0x70]                ; 0044beb2
    LEA ESI,[ESP + 0x7c]                ; 0044beb6
    LEA EAX,[EDX + 0x20]                ; 0044beba
    FXCH                                ; 0044bebd
    FSTP float ptr [ESP + 0x7c]         ; 0044bebf
    FSTP float ptr [ESP + 0x80]         ; 0044bec3
    FSTP float ptr [ESP + 0x84]         ; 0044beca
    MOVSD ES:EDI,ESI                    ; 0044bed1
    MOVSD ES:EDI,ESI                    ; 0044bed2
    MOVSD ES:EDI,ESI                    ; 0044bed3
    PUSH EDX                            ; 0044bed4
    FLD float ptr [EAX]                 ; 0044bed5
    FLD float ptr [EAX + 0x4]           ; 0044bed7
    FLD float ptr [EAX + 0x8]           ; 0044beda
    FXCH ST2                            ; 0044bedd
    FADD float ptr [ESP + 0x74]         ; 0044bedf
    FXCH                                ; 0044bee3
    FADD float ptr [ESP + 0x78]         ; 0044bee5
    FXCH ST2                            ; 0044bee9
    FADD float ptr [ESP + 0x7c]         ; 0044beeb
    FXCH                                ; 0044beef
    FSTP float ptr [EAX]                ; 0044bef1
    FXCH                                ; 0044bef3
    FSTP float ptr [EAX + 0x4]          ; 0044bef5
    FSTP float ptr [EAX + 0x8]          ; 0044bef8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044befb
    PUSH EAX                            ; 0044befe
    CALL core_curtain.cpp_FUN_0044ac10  ; 0044beff
        ;   XREF to: 0044ac10 (UNCONDITIONAL_CALL)  ; void core_curtain.cpp_FUN_0044ac10(CCurtain * this_ptr, SCurtainVertex * vertex)
    ADD ESP,0x8                         ; 0044bf04
    JMP 0x0044ba59                      ; 0044bf07
        ;   XREF to: 0044ba59 (UNCONDITIONAL_JUMP)  ; LAB_0044ba59
    PUSH EBX                            ; 0044bf0c
        ;   Label: LAB_0044bf0c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044bf0d
    PUSH EDX                            ; 0044bf10
    CALL core_curtain.cpp_FUN_0044ac10  ; 0044bf11
        ;   XREF to: 0044ac10 (UNCONDITIONAL_CALL)  ; void core_curtain.cpp_FUN_0044ac10(CCurtain * this_ptr, SCurtainVertex * vertex)
    ADD ESP,0x8                         ; 0044bf16
    JMP 0x0044baa9                      ; 0044bf19
        ;   XREF to: 0044baa9 (UNCONDITIONAL_JUMP)  ; LAB_0044baa9

