; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_setup_FUN_004d17b0(CFrankenstienMachine *this_ptr)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   void* switchdataD_004d178c = 004d17e3
;   TerminatedCString s_frankxbed_kfm_0062a8ef
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
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_course.cpp_CCourse_load_FUN_00442580
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d17b0
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_setup_FUN_004d17b0
    PUSH ESI                            ; 004d17b1
    PUSH EDI                            ; 004d17b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d17b3
    PUSH EBX                            ; 004d17b7
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004d17b8
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    MOV byte ptr [EBX + 0x160],0x0      ; 004d17bd
    ADD ESP,0x4                         ; 004d17c4
    MOV EDI,dword ptr [EBX + 0x158]     ; 004d17c7
    MOV dword ptr [EBX + 0x488],0x0     ; 004d17cd
    CMP EDI,0x8                         ; 004d17d7
    JA 0x004d1839                       ; 004d17da
        ;   XREF to: 004d1839 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDI*0x4 + 0x4d178c]  ; 004d17dc | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x62a8ef                       ; 004d17e3 | = "frankxbed.kfm"
        ;   Label: caseD_0
    LEA EDI,[EBX + 0x184]               ; 004d17e8
    PUSH EDI                            ; 004d17ee
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d17ef
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d17f4
    MOV ESI,0x62a8fd                    ; 004d17f7 | = "frankxbed.pth"
    LEA EDI,[EBX + 0x160]               ; 004d17fc
    PUSH EDI                            ; 004d1802
    MOV AL,byte ptr [ESI]               ; 004d1803 | = "frankxbed.pth" | s_ankxbed.pth_0062a8ff
        ;   Label: LAB_004d1803
    MOV byte ptr [EDI],AL               ; 004d1805
    CMP AL,0x0                          ; 004d1807
    JZ 0x004d181b                       ; 004d1809
        ;   XREF to: 004d181b (CONDITIONAL_JUMP)  ; LAB_004d181b
    MOV AL,byte ptr [ESI + 0x1]         ; 004d180b | s_rankxbed.pth_0062a8fe | s_nkxbed.pth_0062a900
    ADD ESI,0x2                         ; 004d180e
    MOV byte ptr [EDI + 0x1],AL         ; 004d1811
    ADD EDI,0x2                         ; 004d1814
    CMP AL,0x0                          ; 004d1817
    JNZ 0x004d1803                      ; 004d1819
        ;   XREF to: 004d1803 (CONDITIONAL_JUMP)  ; LAB_004d1803
    POP EDI                             ; 004d181b
        ;   Label: LAB_004d181b
    PUSH 0x62a90b                       ; 004d181c | = "frankxbody.kfm"
    LEA EDI,[EBX + 0x30c]               ; 004d1821
    PUSH EDI                            ; 004d1827
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d1828
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d182d
    PUSH EDI                            ; 004d1830
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004d1831
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d1836
    LEA EDI,[EBX + 0x184]               ; 004d1839
        ;   Label: default
    PUSH EDI                            ; 004d183f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004d1840
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    MOV AH,byte ptr [EBX + 0x160]       ; 004d1845
    ADD ESP,0x4                         ; 004d184b
    TEST AH,AH                          ; 004d184e
    JNZ 0x004d19b2                      ; 004d1850
        ;   XREF to: 004d19b2 (CONDITIONAL_JUMP)  ; LAB_004d19b2
    PUSH EBX                            ; 004d1856
    CALL core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190 ; 004d1857
        ;   XREF to: 004d2190 (UNCONDITIONAL_CALL)  ; CVector3f * core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190(CFrankenstienMachine * this_ptr)
    ADD ESP,0x4                         ; 004d185c
    POP EDI                             ; 004d185f
    POP ESI                             ; 004d1860
    POP EBX                             ; 004d1861
    RET                                 ; 004d1862
    PUSH 0x62a91a                       ; 004d1863 | = "frankxcrn1.kfm"
        ;   Label: caseD_1
    LEA EDI,[EBX + 0x184]               ; 004d1868
    PUSH EDI                            ; 004d186e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d186f
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d1874
    MOV dword ptr [EBX + 0x488],0xae    ; 004d1877
    JMP 0x004d1839                      ; 004d1881
        ;   XREF to: 004d1839 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x62a929                       ; 004d1883 | = "frankxcrn2.kfm"
        ;   Label: caseD_2
    LEA EDI,[EBX + 0x184]               ; 004d1888
    PUSH EDI                            ; 004d188e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d188f
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d1894
    MOV dword ptr [EBX + 0x488],0x8c    ; 004d1897
    JMP 0x004d1839                      ; 004d18a1
        ;   XREF to: 004d1839 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x62a938                       ; 004d18a3 | = "frankxcrn3.kfm"
        ;   Label: caseD_3
    LEA EDI,[EBX + 0x184]               ; 004d18a8
    PUSH EDI                            ; 004d18ae
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d18af
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d18b4
    MOV dword ptr [EBX + 0x488],0x16a   ; 004d18b7
    JMP 0x004d1839                      ; 004d18c1
        ;   XREF to: 004d1839 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x62a947                       ; 004d18c6 | = "frankxstch.kfm"
        ;   Label: caseD_4
    LEA EDI,[EBX + 0x184]               ; 004d18cb
    PUSH EDI                            ; 004d18d1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d18d2
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d18d7
    JMP 0x004d1839                      ; 004d18da
        ;   XREF to: 004d1839 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x62a956                       ; 004d18df | = "frankxarm.kfm"
        ;   Label: caseD_5
    LEA EDI,[EBX + 0x184]               ; 004d18e4
    PUSH EDI                            ; 004d18ea
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d18eb
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d18f0
    JMP 0x004d1839                      ; 004d18f3
        ;   XREF to: 004d1839 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x62a964                       ; 004d18f8 | = "frankxflap1.kfm"
        ;   Label: caseD_6
    LEA EDI,[EBX + 0x184]               ; 004d18fd
    PUSH EDI                            ; 004d1903
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d1904
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d1909
    MOV ESI,0x62a974                    ; 004d190c | = "frankxflap1.pth"
    LEA EDI,[EBX + 0x160]               ; 004d1911
    PUSH EDI                            ; 004d1917
    MOV AL,byte ptr [ESI]               ; 004d1918 | = "frankxflap1.pth" | s_ankxflap1.pth_0062a976
        ;   Label: LAB_004d1918
    MOV byte ptr [EDI],AL               ; 004d191a
    CMP AL,0x0                          ; 004d191c
    JZ 0x004d1930                       ; 004d191e
        ;   XREF to: 004d1930 (CONDITIONAL_JUMP)  ; LAB_004d1930
    MOV AL,byte ptr [ESI + 0x1]         ; 004d1920 | s_rankxflap1.pth_0062a975 | s_nkxflap1.pth_0062a977
    ADD ESI,0x2                         ; 004d1923
    MOV byte ptr [EDI + 0x1],AL         ; 004d1926
    ADD EDI,0x2                         ; 004d1929
    CMP AL,0x0                          ; 004d192c
    JNZ 0x004d1918                      ; 004d192e
        ;   XREF to: 004d1918 (CONDITIONAL_JUMP)  ; LAB_004d1918
    POP EDI                             ; 004d1930
        ;   Label: LAB_004d1930
    JMP 0x004d1839                      ; 004d1931
        ;   XREF to: 004d1839 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x62a984                       ; 004d1936 | = "frankxflap2.kfm"
        ;   Label: caseD_7
    LEA EDI,[EBX + 0x184]               ; 004d193b
    PUSH EDI                            ; 004d1941
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d1942
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d1947
    MOV ESI,0x62a994                    ; 004d194a | = "frankxflap2.pth"
    LEA EDI,[EBX + 0x160]               ; 004d194f
    PUSH EDI                            ; 004d1955
    MOV AL,byte ptr [ESI]               ; 004d1956 | = "frankxflap2.pth" | s_ankxflap2.pth_0062a996
        ;   Label: LAB_004d1956
    MOV byte ptr [EDI],AL               ; 004d1958
    CMP AL,0x0                          ; 004d195a
    JZ 0x004d196e                       ; 004d195c
        ;   XREF to: 004d196e (CONDITIONAL_JUMP)  ; LAB_004d196e
    MOV AL,byte ptr [ESI + 0x1]         ; 004d195e | s_rankxflap2.pth_0062a995 | s_nkxflap2.pth_0062a997
    ADD ESI,0x2                         ; 004d1961
    MOV byte ptr [EDI + 0x1],AL         ; 004d1964
    ADD EDI,0x2                         ; 004d1967
    CMP AL,0x0                          ; 004d196a
    JNZ 0x004d1956                      ; 004d196c
        ;   XREF to: 004d1956 (CONDITIONAL_JUMP)  ; LAB_004d1956
    POP EDI                             ; 004d196e
        ;   Label: LAB_004d196e
    JMP 0x004d1839                      ; 004d196f
        ;   XREF to: 004d1839 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x62a9a4                       ; 004d1974 | = "frankxramp.kfm"
        ;   Label: caseD_8
    LEA EDI,[EBX + 0x184]               ; 004d1979
    PUSH EDI                            ; 004d197f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 004d1980
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d1985
    MOV ESI,0x62a9b3                    ; 004d1988 | = "frankxramp.pth"
    LEA EDI,[EBX + 0x160]               ; 004d198d
    PUSH EDI                            ; 004d1993
    MOV AL,byte ptr [ESI]               ; 004d1994 | = "frankxramp.pth" | s_ankxramp.pth_0062a9b5
        ;   Label: LAB_004d1994
    MOV byte ptr [EDI],AL               ; 004d1996
    CMP AL,0x0                          ; 004d1998
    JZ 0x004d19ac                       ; 004d199a
        ;   XREF to: 004d19ac (CONDITIONAL_JUMP)  ; LAB_004d19ac
    MOV AL,byte ptr [ESI + 0x1]         ; 004d199c | s_rankxramp.pth_0062a9b4 | s_nkxramp.pth_0062a9b6
    ADD ESI,0x2                         ; 004d199f
    MOV byte ptr [EDI + 0x1],AL         ; 004d19a2
    ADD EDI,0x2                         ; 004d19a5
    CMP AL,0x0                          ; 004d19a8
    JNZ 0x004d1994                      ; 004d19aa
        ;   XREF to: 004d1994 (CONDITIONAL_JUMP)  ; LAB_004d1994
    POP EDI                             ; 004d19ac
        ;   Label: LAB_004d19ac
    JMP 0x004d1839                      ; 004d19ad
        ;   XREF to: 004d1839 (UNCONDITIONAL_JUMP)  ; default
    LEA EDI,[EBX + 0x160]               ; 004d19b2
        ;   Label: LAB_004d19b2
    PUSH EDI                            ; 004d19b8
    LEA EDI,[EBX + 0x300]               ; 004d19b9
    PUSH EDI                            ; 004d19bf
    CALL core_course.cpp_CCourse_load_FUN_00442580 ; 004d19c0
        ;   XREF to: 00442580 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00442580(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d19c5
    PUSH EBX                            ; 004d19c8
    CALL core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190 ; 004d19c9
        ;   XREF to: 004d2190 (UNCONDITIONAL_CALL)  ; CVector3f * core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190(CFrankenstienMachine * this_ptr)
    ADD ESP,0x4                         ; 004d19ce
    POP EDI                             ; 004d19d1
    POP ESI                             ; 004d19d2
    POP EBX                             ; 004d19d3
    RET                                 ; 004d19d4

