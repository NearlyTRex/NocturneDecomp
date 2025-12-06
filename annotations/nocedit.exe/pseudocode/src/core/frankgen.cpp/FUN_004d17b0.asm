; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_frankgen.cpp_FUN_004d17b0()
;
;
; Referenced Globals:
;   void* switchdataD_004d178c = 004d17e3
;   TerminatedCString s_frankxbed_pth_0062a8fd
;   undefined4 s_rankxbed.pth_0062a8fe
;   undefined4 s_ankxbed.pth_0062a8ff
;   undefined4 s_nkxbed.pth_0062a900
;   TerminatedCString s_frankxbody_kfm_0062a90b
;   TerminatedCString s_frankxcrn1_kfm_0062a91a
;   TerminatedCString s_frankxcrn2_kfm_0062a929
;   TerminatedCString s_frankxcrn3_kfm_0062a938
;   TerminatedCString s_frankxstch_kfm_0062a947
;   TerminatedCString s_frankxarm_kfm_0062a956
;   TerminatedCString s_frankxflap1_kfm_0062a964
;   TerminatedCString s_frankxflap1_pth_0062a974
;   undefined4 s_rankxflap1.pth_0062a975
;   undefined4 s_ankxflap1.pth_0062a976
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_course.cpp_CCourse_load_FUN_00442580
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_frankgen.cpp_LoadModel_FUN_004d2190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d17b0
        ;   Label: core_frankgen.cpp_FUN_004d17b0
    PUSH ESI                            ; 004d17b1
    PUSH EDI                            ; 004d17b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d17b3
    PUSH EBX                            ; 004d17b7
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004d17b8 | void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
    MOV byte ptr [EBX + 0x160],0x0      ; 004d17bd
    ADD ESP,0x4                         ; 004d17c4
    MOV EDI,dword ptr [EBX + 0x158]     ; 004d17c7
    MOV dword ptr [EBX + 0x488],0x0     ; 004d17cd
    CMP EDI,0x8                         ; 004d17d7
    JA 0x004d1839                       ; 004d17da | default
        ;   XREF to: 004d1839 (CONDITIONAL_JUMP)
    JMP dword ptr [EDI*0x4 + 0x4d178c]  ; 004d17dc | pointer switchdataD_004d178c
        ;   Label: switchD
    PUSH 0x62a8ef                       ; 004d17e3 | = "frankxbed.kfm" | s_frankxbed_kfm_0062a8ef = frankxbed.kfm
        ;   Label: caseD_0
    LEA EDI,[EBX + 0x184]               ; 004d17e8
    PUSH EDI                            ; 004d17ee
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d17ef | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d17f4
    MOV ESI,0x62a8fd                    ; 004d17f7 | = "frankxbed.pth" | s_frankxbed_pth_0062a8fd = frankxbed.pth
    LEA EDI,[EBX + 0x160]               ; 004d17fc
    PUSH EDI                            ; 004d1802
    MOV AL,byte ptr [ESI]               ; 004d1803 | = "frankxbed.pth" | s_frankxbed_pth_0062a8fd = frankxbed.pth
        ;   Label: LAB_004d1803
    MOV byte ptr [EDI],AL               ; 004d1805
    CMP AL,0x0                          ; 004d1807
    JZ 0x004d181b                       ; 004d1809 | LAB_004d181b
        ;   XREF to: 004d181b (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004d180b | s_rankxbed.pth_0062a8fe
    ADD ESI,0x2                         ; 004d180e
    MOV byte ptr [EDI + 0x1],AL         ; 004d1811
    ADD EDI,0x2                         ; 004d1814
    CMP AL,0x0                          ; 004d1817
    JNZ 0x004d1803                      ; 004d1819 | LAB_004d1803
        ;   XREF to: 004d1803 (CONDITIONAL_JUMP)
    POP EDI                             ; 004d181b
        ;   Label: LAB_004d181b
    PUSH 0x62a90b                       ; 004d181c | = "frankxbody.kfm" | s_frankxbody_kfm_0062a90b = frankxbody.kfm
    LEA EDI,[EBX + 0x30c]               ; 004d1821
    PUSH EDI                            ; 004d1827
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d1828 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d182d
    PUSH EDI                            ; 004d1830
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004d1831 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d1836
    LEA EDI,[EBX + 0x184]               ; 004d1839
        ;   Label: default
    PUSH EDI                            ; 004d183f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004d1840 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)
    MOV AH,byte ptr [EBX + 0x160]       ; 004d1845
    ADD ESP,0x4                         ; 004d184b
    TEST AH,AH                          ; 004d184e
    JNZ 0x004d19b2                      ; 004d1850 | LAB_004d19b2
        ;   XREF to: 004d19b2 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004d1856
    CALL core_frankgen.cpp_LoadModel_FUN_004d2190 ; 004d1857 | undefined core_frankgen.cpp_LoadModel_FUN_004d2190()
        ;   XREF to: 004d2190 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d185c
    POP EDI                             ; 004d185f
    POP ESI                             ; 004d1860
    POP EBX                             ; 004d1861
    RET                                 ; 004d1862
    PUSH 0x62a91a                       ; 004d1863 | = "frankxcrn1.kfm" | s_frankxcrn1_kfm_0062a91a = frankxcrn1.kfm
        ;   Label: caseD_1
    LEA EDI,[EBX + 0x184]               ; 004d1868
    PUSH EDI                            ; 004d186e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d186f | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d1874
    MOV dword ptr [EBX + 0x488],0xae    ; 004d1877
    JMP 0x004d1839                      ; 004d1881 | default
        ;   XREF to: 004d1839 (UNCONDITIONAL_JUMP)
    PUSH 0x62a929                       ; 004d1883 | = "frankxcrn2.kfm" | s_frankxcrn2_kfm_0062a929 = frankxcrn2.kfm
        ;   Label: caseD_2
    LEA EDI,[EBX + 0x184]               ; 004d1888
    PUSH EDI                            ; 004d188e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d188f | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d1894
    MOV dword ptr [EBX + 0x488],0x8c    ; 004d1897
    JMP 0x004d1839                      ; 004d18a1 | default
        ;   XREF to: 004d1839 (UNCONDITIONAL_JUMP)
    PUSH 0x62a938                       ; 004d18a3 | = "frankxcrn3.kfm" | s_frankxcrn3_kfm_0062a938 = frankxcrn3.kfm
        ;   Label: caseD_3
    LEA EDI,[EBX + 0x184]               ; 004d18a8
    PUSH EDI                            ; 004d18ae
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d18af | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d18b4
    MOV dword ptr [EBX + 0x488],0x16a   ; 004d18b7
    JMP 0x004d1839                      ; 004d18c1 | default
        ;   XREF to: 004d1839 (UNCONDITIONAL_JUMP)
    PUSH 0x62a947                       ; 004d18c6 | = "frankxstch.kfm" | s_frankxstch_kfm_0062a947 = frankxstch.kfm
        ;   Label: caseD_4
    LEA EDI,[EBX + 0x184]               ; 004d18cb
    PUSH EDI                            ; 004d18d1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d18d2 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d18d7
    JMP 0x004d1839                      ; 004d18da | default
        ;   XREF to: 004d1839 (UNCONDITIONAL_JUMP)
    PUSH 0x62a956                       ; 004d18df | = "frankxarm.kfm" | s_frankxarm_kfm_0062a956 = frankxarm.kfm
        ;   Label: caseD_5
    LEA EDI,[EBX + 0x184]               ; 004d18e4
    PUSH EDI                            ; 004d18ea
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d18eb | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d18f0
    JMP 0x004d1839                      ; 004d18f3 | default
        ;   XREF to: 004d1839 (UNCONDITIONAL_JUMP)
    PUSH 0x62a964                       ; 004d18f8 | = "frankxflap1.kfm" | s_frankxflap1_kfm_0062a964 = frankxflap1.kfm
        ;   Label: caseD_6
    LEA EDI,[EBX + 0x184]               ; 004d18fd
    PUSH EDI                            ; 004d1903
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d1904 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d1909
    MOV ESI,0x62a974                    ; 004d190c | = "frankxflap1.pth" | s_frankxflap1_pth_0062a974 = frankxflap1.pth
    LEA EDI,[EBX + 0x160]               ; 004d1911
    PUSH EDI                            ; 004d1917
    MOV AL,byte ptr [ESI]               ; 004d1918 | = "frankxflap1.pth" | s_frankxflap1_pth_0062a974 = frankxflap1.pth
        ;   Label: LAB_004d1918
    MOV byte ptr [EDI],AL               ; 004d191a
    CMP AL,0x0                          ; 004d191c
    JZ 0x004d1930                       ; 004d191e | LAB_004d1930
        ;   XREF to: 004d1930 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004d1920 | s_rankxflap1.pth_0062a975
    ADD ESI,0x2                         ; 004d1923
    MOV byte ptr [EDI + 0x1],AL         ; 004d1926
    ADD EDI,0x2                         ; 004d1929
    CMP AL,0x0                          ; 004d192c
    JNZ 0x004d1918                      ; 004d192e | LAB_004d1918
        ;   XREF to: 004d1918 (CONDITIONAL_JUMP)
    POP EDI                             ; 004d1930
        ;   Label: LAB_004d1930
    JMP 0x004d1839                      ; 004d1931 | default
        ;   XREF to: 004d1839 (UNCONDITIONAL_JUMP)
    PUSH 0x62a984                       ; 004d1936 | = "frankxflap2.kfm" | s_frankxflap2_kfm_0062a984 = frankxflap2.kfm
        ;   Label: caseD_7
    LEA EDI,[EBX + 0x184]               ; 004d193b
    PUSH EDI                            ; 004d1941
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d1942 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d1947
    MOV ESI,0x62a994                    ; 004d194a | = "frankxflap2.pth" | s_frankxflap2_pth_0062a994 = frankxflap2.pth
    LEA EDI,[EBX + 0x160]               ; 004d194f
    PUSH EDI                            ; 004d1955
    MOV AL,byte ptr [ESI]               ; 004d1956 | = "frankxflap2.pth" | s_frankxflap2_pth_0062a994 = frankxflap2.pth
        ;   Label: LAB_004d1956
    MOV byte ptr [EDI],AL               ; 004d1958
    CMP AL,0x0                          ; 004d195a
    JZ 0x004d196e                       ; 004d195c | LAB_004d196e
        ;   XREF to: 004d196e (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004d195e | s_rankxflap2.pth_0062a995
    ADD ESI,0x2                         ; 004d1961
    MOV byte ptr [EDI + 0x1],AL         ; 004d1964
    ADD EDI,0x2                         ; 004d1967
    CMP AL,0x0                          ; 004d196a
    JNZ 0x004d1956                      ; 004d196c | LAB_004d1956
        ;   XREF to: 004d1956 (CONDITIONAL_JUMP)
    POP EDI                             ; 004d196e
        ;   Label: LAB_004d196e
    JMP 0x004d1839                      ; 004d196f | default
        ;   XREF to: 004d1839 (UNCONDITIONAL_JUMP)
    PUSH 0x62a9a4                       ; 004d1974 | = "frankxramp.kfm" | s_frankxramp_kfm_0062a9a4 = frankxramp.kfm
        ;   Label: caseD_8
    LEA EDI,[EBX + 0x184]               ; 004d1979
    PUSH EDI                            ; 004d197f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d1980 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d1985
    MOV ESI,0x62a9b3                    ; 004d1988 | = "frankxramp.pth" | s_frankxramp_pth_0062a9b3 = frankxramp.pth
    LEA EDI,[EBX + 0x160]               ; 004d198d
    PUSH EDI                            ; 004d1993
    MOV AL,byte ptr [ESI]               ; 004d1994 | = "frankxramp.pth" | s_frankxramp_pth_0062a9b3 = frankxramp.pth
        ;   Label: LAB_004d1994
    MOV byte ptr [EDI],AL               ; 004d1996
    CMP AL,0x0                          ; 004d1998
    JZ 0x004d19ac                       ; 004d199a | LAB_004d19ac
        ;   XREF to: 004d19ac (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004d199c | s_rankxramp.pth_0062a9b4
    ADD ESI,0x2                         ; 004d199f
    MOV byte ptr [EDI + 0x1],AL         ; 004d19a2
    ADD EDI,0x2                         ; 004d19a5
    CMP AL,0x0                          ; 004d19a8
    JNZ 0x004d1994                      ; 004d19aa | LAB_004d1994
        ;   XREF to: 004d1994 (CONDITIONAL_JUMP)
    POP EDI                             ; 004d19ac
        ;   Label: LAB_004d19ac
    JMP 0x004d1839                      ; 004d19ad | default
        ;   XREF to: 004d1839 (UNCONDITIONAL_JUMP)
    LEA EDI,[EBX + 0x160]               ; 004d19b2
        ;   Label: LAB_004d19b2
    PUSH EDI                            ; 004d19b8
    LEA EDI,[EBX + 0x300]               ; 004d19b9
    PUSH EDI                            ; 004d19bf
    CALL core_course.cpp_CCourse_load_FUN_00442580 ; 004d19c0 | void core_course.cpp_CCourse_load_FUN_00442580(CCourse * this_ptr, char * filename)
        ;   XREF to: 00442580 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d19c5
    PUSH EBX                            ; 004d19c8
    CALL core_frankgen.cpp_LoadModel_FUN_004d2190 ; 004d19c9 | undefined core_frankgen.cpp_LoadModel_FUN_004d2190()
        ;   XREF to: 004d2190 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d19ce
    POP EDI                             ; 004d19d1
    POP ESI                             ; 004d19d2
    POP EBX                             ; 004d19d3
    RET                                 ; 004d19d4

