; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeledit_cpp_CSkeleton_importSkeletonFile_FUN_00592690(CSkeleton *this_ptr,char *filename)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined4       Stack[-0xded4]:4  local_ded4
; undefined        Stack[-0xded0]:1  local_ded0
; undefined1       Stack[-0xdecf]:1  local_decf
; undefined        Stack[-0xa9b0]:1  local_a9b0
; undefined4       Stack[-0x748c]:4  local_748c
; undefined        Stack[-0x7488]:1  local_7488
; undefined        Stack[-0x7434]:1  local_7434
; undefined4       Stack[-0x7428]:4  local_7428
; undefined4       Stack[-0x7418]:4  local_7418
; undefined4       Stack[-0x7408]:4  local_7408
; undefined        Stack[-0x3f68]:1  local_3f68
; undefined4       Stack[-0x2ca8]:4  local_2ca8
; undefined        Stack[-0x2540]:1  local_2540
; undefined        Stack[-0x2360]:1  local_2360
; undefined        Stack[-0x21d0]:1  local_21d0
; undefined        Stack[-0x21ca]:1  local_21ca
; undefined        Stack[-0x21c8]:1  local_21c8
; undefined        Stack[-0x21c7]:1  local_21c7
; undefined        Stack[-0x20a4]:1  local_20a4
; undefined        Stack[-0x20a2]:1  local_20a2
; undefined        Stack[-0x20a1]:1  local_20a1
; undefined1       Stack[-0x20a0]:1  local_20a0
; undefined        Stack[-0x209e]:1  local_209e
; undefined1       Stack[-0x209d]:1  local_209d
; undefined1       Stack[-0x209c]:1  local_209c
; undefined        Stack[-0x209b]:1  local_209b
; undefined1       Stack[-0x209a]:1  local_209a
; undefined1       Stack[-0x2099]:1  local_2099
; undefined        Stack[-0x2098]:1  local_2098
; undefined        Stack[-0x2097]:1  local_2097
; undefined1       Stack[-0x2096]:1  local_2096
; undefined1       Stack[-0x2095]:1  local_2095
; undefined        Stack[-0x2093]:1  local_2093
; undefined        Stack[-0x2092]:1  local_2092
; undefined1       Stack[-0x2091]:1  local_2091
; undefined1       Stack[-0x2090]:1  local_2090
; undefined        Stack[-0x1f78]:1  local_1f78
; undefined1       Stack[-0x1f77]:1  local_1f77
; undefined        Stack[-0x1e74]:1  local_1e74
; undefined        Stack[-0x1d70]:1  local_1d70
; undefined        Stack[-0x1c70]:1  local_1c70
; undefined        Stack[-0x1b70]:1  local_1b70
; undefined        Stack[-0x1a70]:1  local_1a70
; undefined        Stack[-0x1970]:1  local_1970
; undefined        Stack[-0x1870]:1  local_1870
; undefined        Stack[-0x1770]:1  local_1770
; undefined        Stack[-0x1670]:1  local_1670
; undefined        Stack[-0x1570]:1  local_1570
; undefined        Stack[-0x1470]:1  local_1470
; undefined        Stack[-0x1370]:1  local_1370
; undefined        Stack[-0x1270]:1  local_1270
; undefined        Stack[-0x1170]:1  local_1170
; undefined        Stack[-0x1070]:1  local_1070
; undefined        Stack[-0xf70]:1  local_f70
; undefined        Stack[-0xe70]:1  local_e70
; undefined        Stack[-0xd70]:1  local_d70
; undefined        Stack[-0xc70]:1  local_c70
; undefined        Stack[-0xb70]:1  local_b70
; undefined        Stack[-0xaa8]:1  local_aa8
; undefined        Stack[-0x9e0]:1  local_9e0
; undefined        Stack[-0x918]:1  local_918
; undefined        Stack[-0x850]:1  local_850
; undefined        Stack[-0x84f]:1  local_84f
; undefined        Stack[-0x7ec]:1  local_7ec
; undefined        Stack[-0x788]:1  local_788
; undefined        Stack[-0x724]:1  local_724
; undefined        Stack[-0x6c0]:1  local_6c0
; undefined        Stack[-0x65c]:1  local_65c
; undefined        Stack[-0x5f8]:1  local_5f8
; undefined        Stack[-0x594]:1  local_594
; undefined        Stack[-0x530]:1  local_530
; undefined        Stack[-0x4cc]:1  local_4cc
; undefined        Stack[-0x468]:1  local_468
; undefined        Stack[-0x434]:1  local_434
; undefined        Stack[-0x404]:1  local_404
; undefined        Stack[-0x3d4]:1  local_3d4
; undefined        Stack[-0x3a4]:1  local_3a4
; undefined        Stack[-0x374]:1  local_374
; undefined        Stack[-0x344]:1  local_344
; undefined        Stack[-0x314]:1  local_314
; undefined        Stack[-0x2e4]:1  local_2e4
; undefined        Stack[-0x2b4]:1  local_2b4
; undefined        Stack[-0x28c]:1  local_28c
; undefined        Stack[-0x264]:1  local_264
; undefined        Stack[-0x244]:1  local_244
; undefined        Stack[-0x224]:1  local_224
; undefined        Stack[-0x214]:1  local_214
; undefined4       Stack[-0x204]:4  local_204
; undefined4       Stack[-0x200]:4  local_200
; undefined4       Stack[-0x1fc]:4  local_1fc
; undefined4       Stack[-0x1f8]:4  local_1f8
; undefined4       Stack[-0x1f4]:4  local_1f4
; undefined4       Stack[-0x1f0]:4  local_1f0
; undefined4       Stack[-0x1ec]:4  local_1ec
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined        Stack[-0x1b0]:1  local_1b0
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined8       Stack[-0x12c]:8  local_12c
; undefined8       Stack[-0x124]:8  local_124
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
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
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined        Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   void* switchdataD_0059266c = 00593e65
;   void* switchdataD_0059267c = 005944d9
;   TerminatedCString s_core_skeledit_cpp_0064c055
;   TerminatedCString s_rt_0064c06a
;   TerminatedCString s_Can_t_open_s_0064c06d
;   TerminatedCString s_Reading_state_list_from__0064c07b
;   TerminatedCString s_d_0064c096
;   TerminatedCString s_core_skeledit_cpp_0064c09a
;   TerminatedCString s_s_has_d_states_max_is_d_0064c0af
;   TerminatedCString s_s_0064c0cb
;   TerminatedCString s_State_name_begins_with_s_0064c0cf
;   TerminatedCString s_core_skeledit_cpp_0064c10f
;   TerminatedCString s_Duplicate_state_s_in_s_0064c124
;   TerminatedCString s_Reading_home_pose_filena_0064c13d
;   TerminatedCString s_anon_0064c158
;   ... and 171 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
;   core_skeledit.cpp_CBoneStructure_applyMatrixArray_FUN_0058af40
;   core_skeledit.cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80
;   core_skeledit.cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200
;   core_skeledit.cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0
;   core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0
;   core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0
;   core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10
;   core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0
;   core_skeledit.cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0
;   core_skeledit.cpp_CBoneStructure_skipBONframe_FUN_0058abb0
;   core_skeledit.cpp_CSkeleton_extractBoneScales_FUN_00595f30
;   core_skeledit.cpp_parseBoneParentToken_FUN_00592520
;   ... and 42 more
;
; *****************************************************************************

section .text

    NOP                                 ; 00592690
        ;   Label: core_skeledit.cpp_CSkeleton_importSkeletonFile_FUN_00592690
    NOP                                 ; 00592691
    NOP                                 ; 00592692
    NOP                                 ; 00592693
    NOP                                 ; 00592694
    NOP                                 ; 00592695
    NOP                                 ; 00592696
    NOP                                 ; 00592697
    NOP                                 ; 00592698
    NOP                                 ; 00592699
    PUSH EBX                            ; 0059269a
    PUSH ESI                            ; 0059269b
    PUSH EDI                            ; 0059269c
    PUSH EBP                            ; 0059269d
    MOV EBP,ESP                         ; 0059269e
    SUB ESP,0x113e8                     ; 005926a0
    SUB EBP,0x7a                        ; 005926a6
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005926a9
    PUSH EDX                            ; 005926af
    CALL core_skeleton.cpp_CSkeleton_free_FUN_00599a50 ; 005926b0
        ;   XREF to: 00599a50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_free_FUN_00599a50(CSkeleton * this_ptr)
    ADD ESP,0x4                         ; 005926b5
    PUSH 0x103c                         ; 005926b8
    PUSH 0x64c055                       ; 005926bd | = "..\\core\\skeledit.cpp"
    PUSH 0x64c06a                       ; 005926c2 | = "rt"
    PUSH 0x0                            ; 005926c7
    MOV ECX,dword ptr [EBP + 0x92]      ; 005926c9
    PUSH ECX                            ; 005926cf
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005926d0
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV ESI,EAX                         ; 005926d5
    ADD ESP,0x14                        ; 005926d7
    MOV dword ptr [EBP + 0xffffff6e],EAX ; 005926da
    TEST EAX,EAX                        ; 005926e0
    JZ 0x0059282f                       ; 005926e2
        ;   XREF to: 0059282f (CONDITIONAL_JUMP)  ; LAB_0059282f
    MOV EDI,dword ptr [EBP + 0x92]      ; 005926e8
    PUSH EDI                            ; 005926ee
    PUSH 0x64c07b                       ; 005926ef | = "Reading state list from %s"
    MOV EAX,[0x00678a60]                ; 005926f4 | g_CEditorToolsPtr
    XOR EBX,EBX                         ; 005926f9
    PUSH EAX                            ; 005926fb | g_CEditorToolsInstance
    MOV dword ptr [EBP + 0xffffff72],EBX ; 005926fc
    MOV EBX,0x1                         ; 00592702
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00592707
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0059270c
    PUSH ESI                            ; 0059270f
        ;   Label: LAB_0059270f
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00592710
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00592715
    TEST EAX,EAX                        ; 00592718
    JL 0x00592726                       ; 0059271a
        ;   XREF to: 00592726 (CONDITIONAL_JUMP)  ; LAB_00592726
    CMP EAX,0xa                         ; 0059271c
    JNZ 0x0059270f                      ; 0059271f
        ;   XREF to: 0059270f (CONDITIONAL_JUMP)  ; LAB_0059270f
    DEC EBX                             ; 00592721
    TEST EBX,EBX                        ; 00592722
    JG 0x0059270f                       ; 00592724
        ;   XREF to: 0059270f (CONDITIONAL_JUMP)  ; LAB_0059270f
    LEA EAX,[EBP + 0xffffff76]          ; 00592726
        ;   Label: LAB_00592726
    PUSH EAX                            ; 0059272c
    PUSH 0x64c096                       ; 0059272d | = "%d\n"
    MOV ESI,dword ptr [EBP + 0xffffff6e] ; 00592732
    XOR EBX,EBX                         ; 00592738
    PUSH ESI                            ; 0059273a
    MOV dword ptr [EBP + 0xffffff76],EBX ; 0059273b
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00592741
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EDI,dword ptr [EBP + 0xffffff76] ; 00592746
    ADD ESP,0xc                         ; 0059274c
    CMP EDI,0x50                        ; 0059274f
    JG 0x00592856                       ; 00592752
        ;   XREF to: 00592856 (CONDITIONAL_JUMP)  ; LAB_00592856
    MOV EBX,0x1                         ; 00592758
        ;   Label: LAB_00592758
    MOV ESI,dword ptr [EBP + 0xffffff6e] ; 0059275d
    PUSH ESI                            ; 00592763
        ;   Label: LAB_00592763
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00592764
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00592769
    TEST EAX,EAX                        ; 0059276c
    JL 0x0059277a                       ; 0059276e
        ;   XREF to: 0059277a (CONDITIONAL_JUMP)  ; LAB_0059277a
    CMP EAX,0xa                         ; 00592770
    JNZ 0x00592763                      ; 00592773
        ;   XREF to: 00592763 (CONDITIONAL_JUMP)  ; LAB_00592763
    DEC EBX                             ; 00592775
    TEST EBX,EBX                        ; 00592776
    JG 0x00592763                       ; 00592778
        ;   XREF to: 00592763 (CONDITIONAL_JUMP)  ; LAB_00592763
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0059277a
        ;   Label: LAB_0059277a
    MOV dword ptr [EAX],0x0             ; 00592780
    MOV ESI,dword ptr [EBP + 0xffffff76] ; 00592786
    CMP ESI,dword ptr [EAX]             ; 0059278c
    JLE 0x0059289e                      ; 0059278e
        ;   XREF to: 0059289e (CONDITIONAL_JUMP)  ; LAB_0059289e
    MOV ESI,dword ptr [EBP + 0x8e]      ; 00592794
    ADD ESI,0x4                         ; 0059279a
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0059279d
        ;   Label: LAB_0059279d
    IMUL EAX,dword ptr [EAX],0x1e       ; 005927a3
    ADD EAX,ESI                         ; 005927a6
    PUSH EAX                            ; 005927a8
    PUSH 0x64c0cb                       ; 005927a9 | = "%s\n"
    MOV EDI,dword ptr [EBP + 0xffffff6e] ; 005927ae
    PUSH EDI                            ; 005927b4
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005927b5
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005927ba
    IMUL EDX,dword ptr [EAX],0x1e       ; 005927c0
    MOV BL,byte ptr [EDX + EAX*0x1 + 0x4] ; 005927c3
    ADD ESP,0xc                         ; 005927c7
    CMP BL,0x2f                         ; 005927ca
    JNZ 0x00592dc9                      ; 005927cd
        ;   XREF to: 00592dc9 (CONDITIONAL_JUMP)  ; LAB_00592dc9
    MOV EDX,dword ptr [EBP + 0x92]      ; 005927d3
    PUSH EDX                            ; 005927d9
    PUSH 0x64c0cf                       ; 005927da | = "State name begins with '/', state cou..."
    MOV ECX,dword ptr [0x00678a60]      ; 005927df | g_CEditorToolsPtr
        ;   Label: LAB_005927df
    PUSH ECX                            ; 005927e5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005927e6
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 005927eb
    CMP dword ptr [EBP + 0xffffff72],0x0 ; 005927ee
        ;   Label: LAB_005927ee
    JZ 0x00592806                       ; 005927f5
        ;   XREF to: 00592806 (CONDITIONAL_JUMP)  ; LAB_00592806
    MOV ESI,dword ptr [0x00678a60]      ; 005927f7 | g_CEditorToolsPtr
    PUSH ESI                            ; 005927fd | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 005927fe
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 00592803
    MOV EDI,dword ptr [EBP + 0xffffff6e] ; 00592806
        ;   Label: LAB_00592806
    TEST EDI,EDI                        ; 0059280c
    JZ 0x00592823                       ; 0059280e
        ;   XREF to: 00592823 (CONDITIONAL_JUMP)  ; LAB_00592823
    PUSH 0x1052                         ; 00592810
    PUSH 0x64c10f                       ; 00592815 | = "..\\core\\skeledit.cpp"
    PUSH EDI                            ; 0059281a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0059281b
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00592820
    XOR EBX,EBX                         ; 00592823
        ;   Label: LAB_00592823
    MOV EAX,EBX                         ; 00592825
    LEA ESP,[EBP + 0x7a]                ; 00592827
    POP EBP                             ; 0059282a
    POP EDI                             ; 0059282b
    POP ESI                             ; 0059282c
    POP EBX                             ; 0059282d
    RET                                 ; 0059282e
    MOV EDX,dword ptr [EBP + 0x92]      ; 0059282f
        ;   Label: LAB_0059282f
    PUSH EDX                            ; 00592835
    PUSH 0x64c06d                       ; 00592836 | = "Can't open %s"
    MOV ECX,dword ptr [0x00678a60]      ; 0059283b | g_CEditorToolsPtr
    PUSH ECX                            ; 00592841 | g_CEditorToolsInstance
    XOR EBX,EBX                         ; 00592842
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00592844
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00592849
    MOV EAX,EBX                         ; 0059284c
    LEA ESP,[EBP + 0x7a]                ; 0059284e
    POP EBP                             ; 00592851
    POP EDI                             ; 00592852
    POP ESI                             ; 00592853
    POP EBX                             ; 00592854
    RET                                 ; 00592855
    PUSH 0x50                           ; 00592856
        ;   Label: LAB_00592856
    PUSH EDI                            ; 00592858
    MOV EBX,dword ptr [EBP + 0x92]      ; 00592859
    PUSH EBX                            ; 0059285f
    MOV EAX,0x64c09a                    ; 00592860 | = "..\\core\\skeledit.cpp"
    MOV EDX,0x104a                      ; 00592865
    PUSH 0x64c0af                       ; 0059286a | = "%s has %d states, max is %d"
    MOV [0x02f0ca48],EAX                ; 0059286f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00592874 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059287a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 0059287f
    JMP 0x00592758                      ; 00592882
        ;   XREF to: 00592758 (UNCONDITIONAL_JUMP)  ; LAB_00592758
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00592887
        ;   Label: LAB_00592887
    MOV EDI,dword ptr [EAX]             ; 0059288d
    INC EDI                             ; 0059288f
    MOV dword ptr [EAX],EDI             ; 00592890
    CMP EDI,dword ptr [EBP + 0xffffff76] ; 00592892
    JL 0x0059279d                       ; 00592898
        ;   XREF to: 0059279d (CONDITIONAL_JUMP)  ; LAB_0059279d
    PUSH 0x64c13d                       ; 0059289e | = "Reading home pose filename"
        ;   Label: LAB_0059289e
    MOV ECX,dword ptr [0x00678a60]      ; 005928a3 | g_CEditorToolsPtr
    PUSH ECX                            ; 005928a9 | g_CEditorToolsInstance
    LEA EDI,[EBP + 0xffffe216]          ; 005928aa
    MOV ESI,0x6818e0                    ; 005928b0 | g_FileErrorBuffer
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005928b5
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    MOV ECX,0x41                        ; 005928ba
    MOV EBX,0x1                         ; 005928bf
    MOVSD.REP ES:EDI,ESI                ; 005928c4 | g_FileErrorBuffer | g_FileErrorBuffer+4
    ADD ESP,0x8                         ; 005928c6
    MOV ESI,dword ptr [EBP + 0xffffff6e] ; 005928c9
    PUSH ESI                            ; 005928cf
        ;   Label: LAB_005928cf
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005928d0
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005928d5
    TEST EAX,EAX                        ; 005928d8
    JL 0x005928e6                       ; 005928da
        ;   XREF to: 005928e6 (CONDITIONAL_JUMP)  ; LAB_005928e6
    CMP EAX,0xa                         ; 005928dc
    JNZ 0x005928cf                      ; 005928df
        ;   XREF to: 005928cf (CONDITIONAL_JUMP)  ; LAB_005928cf
    DEC EBX                             ; 005928e1
    TEST EBX,EBX                        ; 005928e2
    JG 0x005928cf                       ; 005928e4
        ;   XREF to: 005928cf (CONDITIONAL_JUMP)  ; LAB_005928cf
    LEA EAX,[EBP + 0xffffe216]          ; 005928e6
        ;   Label: LAB_005928e6
    PUSH EAX                            ; 005928ec
    PUSH 0x64c158                       ; 005928ed | = "\"%[^\"]\"\n"
    MOV EBX,dword ptr [EBP + 0xffffff6e] ; 005928f2
    PUSH EBX                            ; 005928f8
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005928f9
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005928fe
    CMP EAX,0x1                         ; 00592901
    JNZ 0x00592e13                      ; 00592904
        ;   XREF to: 00592e13 (CONDITIONAL_JUMP)  ; LAB_00592e13
    LEA EAX,[EBP + 0xffffef1a]          ; 0059290a
    PUSH EAX                            ; 00592910
    LEA EAX,[EBP + 0xfffff11a]          ; 00592911
    PUSH EAX                            ; 00592917
    LEA EAX,[EBP + 0xfffff01a]          ; 00592918
    PUSH EAX                            ; 0059291e
    LEA EAX,[EBP + 0x72]                ; 0059291f
    PUSH EAX                            ; 00592922
    LEA EAX,[EBP + 0xffffe216]          ; 00592923
    PUSH EAX                            ; 00592929
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0059292a
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    MOV BH,byte ptr [EBP + 0xfffff01a]  ; 0059292f
    ADD ESP,0x14                        ; 00592935
    TEST BH,BH                          ; 00592938
    JZ 0x00592e24                       ; 0059293a
        ;   XREF to: 00592e24 (CONDITIONAL_JUMP)  ; LAB_00592e24
    LEA EAX,[EBP + 0xffffe91a]          ; 00592940
        ;   Label: LAB_00592940
    PUSH EAX                            ; 00592946
    LEA EAX,[EBP + 0xfffff21a]          ; 00592947
    PUSH EAX                            ; 0059294d
    LEA EAX,[EBP + 0xffffed1a]          ; 0059294e
    PUSH EAX                            ; 00592954
    LEA EAX,[EBP + 0x66]                ; 00592955
    PUSH EAX                            ; 00592958
    LEA EAX,[EBP + 0xffffe216]          ; 00592959
    PUSH EAX                            ; 0059295f
    CALL crt_string.c_splitpath_FUN_005ff178 ; 00592960
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    MOV CH,byte ptr [EBP + 0xffffe91a]  ; 00592965
    ADD ESP,0x14                        ; 0059296b
    TEST CH,CH                          ; 0059296e
    JZ 0x00592e79                       ; 00592970
        ;   XREF to: 00592e79 (CONDITIONAL_JUMP)  ; LAB_00592e79
    LEA EAX,[EBP + 0xffffe216]          ; 00592976
        ;   Label: LAB_00592976
    PUSH EAX                            ; 0059297c
    PUSH 0x64c1b1                       ; 0059297d | = "Reading bone heirarchy and building r..."
    MOV EDI,dword ptr [0x00678a60]      ; 00592982 | g_CEditorToolsPtr
    PUSH EDI                            ; 00592988 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00592989
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0059298e
    LEA EAX,[EBP + 0xffffe216]          ; 00592991
    PUSH EAX                            ; 00592997
    LEA EAX,[EBP + 0xffff21b6]          ; 00592998
    PUSH EAX                            ; 0059299e
    CALL core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0 ; 0059299f
        ;   XREF to: 0058a3d0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0(CBoneStructure * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005929a4
    LEA EAX,[EBP + 0xffffc122]          ; 005929a7
    PUSH EAX                            ; 005929ad
    LEA EAX,[EBP + 0xffff21b6]          ; 005929ae
    PUSH EAX                            ; 005929b4
    CALL core_skeledit.cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0 ; 005929b5
        ;   XREF to: 0058aeb0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0(CBoneStructure * this_ptr, CMatrix3x4f * inverse_matrices)
    ADD ESP,0x8                         ; 005929ba
    LEA EAX,[EBP + 0xffff21b6]          ; 005929bd
    PUSH EAX                            ; 005929c3
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005929c4
    PUSH EAX                            ; 005929ca
    MOV ESI,dword ptr [EBP + 0xffffff6e] ; 005929cb
    MOV EBX,0x1                         ; 005929d1
    CALL core_skeledit.cpp_CSkeleton_extractBoneScales_FUN_00595f30 ; 005929d6
        ;   XREF to: 00595f30 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CSkeleton_extractBoneScales_FUN_00595f30(CSkeleton * this_ptr, CBoneStructure * bone_structure)
    ADD ESP,0x8                         ; 005929db
    PUSH ESI                            ; 005929de
        ;   Label: LAB_005929de
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005929df
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005929e4
    TEST EAX,EAX                        ; 005929e7
    JL 0x005929f5                       ; 005929e9
        ;   XREF to: 005929f5 (CONDITIONAL_JUMP)  ; LAB_005929f5
    CMP EAX,0xa                         ; 005929eb
    JNZ 0x005929de                      ; 005929ee
        ;   XREF to: 005929de (CONDITIONAL_JUMP)  ; LAB_005929de
    DEC EBX                             ; 005929f0
    TEST EBX,EBX                        ; 005929f1
    JG 0x005929de                       ; 005929f3
        ;   XREF to: 005929de (CONDITIONAL_JUMP)  ; LAB_005929de
    MOV EBX,dword ptr [EBP + 0xffffff6e] ; 005929f5
        ;   Label: LAB_005929f5
    PUSH EBX                            ; 005929fb
    CALL crt_stdio.c_ftell_FUN_00601560 ; 005929fc
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 00592a01
    XOR EDI,EDI                         ; 00592a04
    MOV ESI,dword ptr [0x00678a60]      ; 00592a06 | g_CEditorToolsPtr
    PUSH 0x64c1f4                       ; 00592a0c | = "Pass 1: Building list of animation fi..."
    MOV dword ptr [EBP + 0xffffff7a],EAX ; 00592a11
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00592a17
    PUSH ESI                            ; 00592a1d | g_CEditorToolsInstance
    MOV dword ptr [EBP + 0xffffff7e],EDI ; 00592a1e
    MOV dword ptr [EAX + 0x964],0x0     ; 00592a24
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00592a2e
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    MOV ECX,0x1869f                     ; 00592a33
    ADD ESP,0x8                         ; 00592a38
    LEA EAX,[EBP + 0xffffd3e2]          ; 00592a3b
    MOV dword ptr [EBP + -0x7a],EDI     ; 00592a41
    PUSH EAX                            ; 00592a44
    MOV dword ptr [0x03670b5c],EDI      ; 00592a45 | g_SkeleditBiasEntryCount
    MOV dword ptr [EBP + -0x76],ECX     ; 00592a4b
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00592a4e
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00592a53
    MOV dword ptr [EBP + -0x7e],EDI     ; 00592a59
    ADD EAX,0x968                       ; 00592a5c
    ADD ESP,0x4                         ; 00592a61
    MOV dword ptr [EBP + -0x6e],EAX     ; 00592a64
    PUSH 0x0                            ; 00592a67
        ;   Label: LAB_00592a67
    MOV ESI,dword ptr [EBP + 0xffffff6e] ; 00592a69
    PUSH ESI                            ; 00592a6f
    LEA EAX,[EBP + 0xffffdeba]          ; 00592a70
    PUSH EAX                            ; 00592a76
    MOV EBX,dword ptr [EBP + -0x7e]     ; 00592a77
    CALL core_skeledit.cpp_readNonEmptyLine_FUN_005895f0 ; 00592a7a
        ;   XREF to: 005895f0 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_readNonEmptyLine_FUN_005895f0(char * buffer, _FILE * file, int require_content)
    ADD ESP,0xc                         ; 00592a7f
    MOV dword ptr [EBP + -0x3e],EAX     ; 00592a82
    TEST EAX,EAX                        ; 00592a85
    JZ 0x00592ea4                       ; 00592a87
        ;   XREF to: 00592ea4 (CONDITIONAL_JUMP)  ; LAB_00592ea4
    PUSH 0x9                            ; 00592a8d
    PUSH 0x64c23b                       ; 00592a8f | = "animation"
    LEA EAX,[EBP + 0xffffdeba]          ; 00592a94
    PUSH EAX                            ; 00592a9a
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00592a9b
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00592aa0
    TEST EAX,EAX                        ; 00592aa3
    JZ 0x00592ea4                       ; 00592aa5
        ;   XREF to: 00592ea4 (CONDITIONAL_JUMP)  ; LAB_00592ea4
    CMP dword ptr [EBP + -0x3e],0x0     ; 00592aab
        ;   Label: LAB_00592aab
    JNZ 0x00593093                      ; 00592aaf
        ;   XREF to: 00593093 (CONDITIONAL_JUMP)  ; LAB_00593093
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00592ab5
    CMP dword ptr [EAX + 0x964],0x1     ; 00592abb
    JGE 0x00592aee                      ; 00592ac2
        ;   XREF to: 00592aee (CONDITIONAL_JUMP)  ; LAB_00592aee
    MOV ESI,dword ptr [EBP + 0x92]      ; 00592ac4
    PUSH ESI                            ; 00592aca
    MOV ECX,0x64c52b                    ; 00592acb | = "..\\core\\skeledit.cpp"
    MOV EBX,0x1159                      ; 00592ad0
    PUSH 0x64c540                       ; 00592ad5 | = "No motions defined in %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 00592ada | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00592ae0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00592ae6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00592aeb
    CMP dword ptr [EBP + 0xffffd3e2],0x0 ; 00592aee
        ;   Label: LAB_00592aee
    JG 0x00593782                       ; 00592af5
        ;   XREF to: 00593782 (CONDITIONAL_JUMP)  ; LAB_00593782
    MOV EAX,dword ptr [EBP + 0xffffff7e] ; 00592afb
    PUSH EAX                            ; 00592b01
    MOV EDX,dword ptr [EBP + 0xffff21b6] ; 00592b02
    PUSH EDX                            ; 00592b08
    MOV ECX,dword ptr [EBP + 0x8e]      ; 00592b09
    PUSH ECX                            ; 00592b0f
    CALL core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910 ; 00592b10
        ;   XREF to: 00599910 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910(CSkeleton * this_ptr, int bone_count, int frame_count)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00592b15
    XOR EBX,EBX                         ; 00592b1b
    MOV ESI,dword ptr [EAX + 0x28558]   ; 00592b1d
    ADD ESP,0xc                         ; 00592b23
    TEST ESI,ESI                        ; 00592b26
    JLE 0x00592b90                      ; 00592b28
        ;   XREF to: 00592b90 (CONDITIONAL_JUMP)  ; LAB_00592b90
    LEA ECX,[EAX + 0x2855c]             ; 00592b2a
    LEA EDX,[EBP + 0xffff21ba]          ; 00592b30
    MOV dword ptr [EBP + 0x3a],EAX      ; 00592b36
    IMUL EAX,EBX,0x84                   ; 00592b39
        ;   Label: LAB_00592b39
    MOV ESI,dword ptr [EBP + 0x3a]      ; 00592b3f
    MOV EDI,ECX                         ; 00592b42
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xffff21da] ; 00592b44
    ADD ECX,0x24                        ; 00592b4b
    MOV dword ptr [ESI + 0x2857c],EAX   ; 00592b4e
    MOV ESI,EDX                         ; 00592b54
    INC EBX                             ; 00592b56
    PUSH EDI                            ; 00592b57
    MOV AL,byte ptr [ESI]               ; 00592b58
        ;   Label: LAB_00592b58
    MOV byte ptr [EDI],AL               ; 00592b5a
    CMP AL,0x0                          ; 00592b5c
    JZ 0x00592b70                       ; 00592b5e
        ;   XREF to: 00592b70 (CONDITIONAL_JUMP)  ; LAB_00592b70
    MOV AL,byte ptr [ESI + 0x1]         ; 00592b60
    ADD ESI,0x2                         ; 00592b63
    MOV byte ptr [EDI + 0x1],AL         ; 00592b66
    ADD EDI,0x2                         ; 00592b69
    CMP AL,0x0                          ; 00592b6c
    JNZ 0x00592b58                      ; 00592b6e
        ;   XREF to: 00592b58 (CONDITIONAL_JUMP)  ; LAB_00592b58
    POP EDI                             ; 00592b70
        ;   Label: LAB_00592b70
    MOV EDI,dword ptr [EBP + 0x3a]      ; 00592b71
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00592b74
    ADD EDX,0x84                        ; 00592b7a
    ADD EDI,0x24                        ; 00592b80
    MOV ESI,dword ptr [EAX + 0x28558]   ; 00592b83
    MOV dword ptr [EBP + 0x3a],EDI      ; 00592b89
    CMP EBX,ESI                         ; 00592b8c
    JL 0x00592b39                       ; 00592b8e
        ;   XREF to: 00592b39 (CONDITIONAL_JUMP)  ; LAB_00592b39
    PUSH 0x0                            ; 00592b90
        ;   Label: LAB_00592b90
    MOV EDI,dword ptr [EBP + 0xffffff7a] ; 00592b92
    PUSH EDI                            ; 00592b98
    MOV EAX,dword ptr [EBP + 0xffffff6e] ; 00592b99
    PUSH EAX                            ; 00592b9f
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 00592ba0
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 00592ba5
    PUSH 0x64c616                       ; 00592ba8 | = "Importing skeleton animation frames..."
    MOV EDX,dword ptr [0x00678a60]      ; 00592bad | g_CEditorToolsPtr
    XOR EBX,EBX                         ; 00592bb3
    PUSH EDX                            ; 00592bb5 | g_CEditorToolsInstance
    MOV dword ptr [EBP + 0x52],EBX      ; 00592bb6
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 00592bb9
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00592bbe
    MOV ECX,0x1                         ; 00592bc4
    ADD ESP,0x8                         ; 00592bc9
    MOV ESI,dword ptr [EAX + 0x964]     ; 00592bcc
    MOV dword ptr [EBP + 0xffffff72],ECX ; 00592bd2
    TEST ESI,ESI                        ; 00592bd8
    JLE 0x005938cf                      ; 00592bda
        ;   XREF to: 005938cf (CONDITIONAL_JUMP)  ; LAB_005938cf
    MOV EBX,0x365caf8                   ; 00592be0 | g_MotionFilenames
    ADD EAX,0x968                       ; 00592be5
    XOR ESI,ESI                         ; 00592bea
    MOV dword ptr [EBP + 0x46],EBX      ; 00592bec | g_MotionFilenames
    MOV dword ptr [EBP + 0x4a],EAX      ; 00592bef
    MOV dword ptr [EBP + 0x4e],ESI      ; 00592bf2
    MOV EAX,dword ptr [EBP + 0x4a]      ; 00592bf5
        ;   Label: LAB_00592bf5
    MOV dword ptr [EBP + -0x62],EAX     ; 00592bf8
    MOV EAX,dword ptr [EBP + 0x46]      ; 00592bfb
    MOV dword ptr [EBP + -0x5e],EAX     ; 00592bfe | g_MotionFilenames | g_MotionFilenames[1][0]
    MOV EAX,dword ptr [EBP + 0xffffff7e] ; 00592c01
    SUB ESP,0x4                         ; 00592c07
    MOV dword ptr [EBP + 0x5e],EAX      ; 00592c0a
    MOV EDI,dword ptr [0x00678a60]      ; 00592c0d | g_CEditorToolsPtr
    FILD dword ptr [EBP + 0x5e]         ; 00592c13
    FSTP float ptr [ESP]                ; 00592c16
    MOV EAX,dword ptr [EBP + 0x4a]      ; 00592c19
    SUB ESP,0x4                         ; 00592c1c
    FILD dword ptr [EAX + 0x60]         ; 00592c1f
    FSTP float ptr [ESP]                ; 00592c22
    PUSH EDI                            ; 00592c25 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 00592c26
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float current_progress, float total_progress)
    MOV EDI,dword ptr [EBP + 0xffffff6e] ; 00592c2b
    ADD ESP,0xc                         ; 00592c31
    PUSH 0x1                            ; 00592c34
        ;   Label: LAB_00592c34
    PUSH EDI                            ; 00592c36
    LEA EAX,[EBP + 0xffffdfe6]          ; 00592c37
    PUSH EAX                            ; 00592c3d
    CALL core_skeledit.cpp_readNonEmptyLine_FUN_005895f0 ; 00592c3e
        ;   XREF to: 005895f0 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_readNonEmptyLine_FUN_005895f0(char * buffer, _FILE * file, int require_content)
    ADD ESP,0xc                         ; 00592c43
    TEST EAX,EAX                        ; 00592c46
    JZ 0x00593a86                       ; 00592c48
        ;   XREF to: 00593a86 (CONDITIONAL_JUMP)  ; LAB_00593a86
    PUSH 0x9                            ; 00592c4e
        ;   Label: LAB_00592c4e
    PUSH 0x64c666                       ; 00592c50 | = "animation"
    LEA EAX,[EBP + 0xffffdfe6]          ; 00592c55
    PUSH EAX                            ; 00592c5b
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00592c5c
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00592c61
    TEST EAX,EAX                        ; 00592c64
    JNZ 0x00592c34                      ; 00592c66
        ;   XREF to: 00592c34 (CONDITIONAL_JUMP)  ; LAB_00592c34
    MOV EAX,dword ptr [EBP + -0x62]     ; 00592c68
    MOV dword ptr [EAX + 0x68],0x0      ; 00592c6b
    MOV EDX,dword ptr [EBP + -0x62]     ; 00592c72
    MOV dword ptr [EAX + 0x4a4],0x0     ; 00592c75
    MOV EBX,0x4                         ; 00592c7f
    MOV dword ptr [EAX + 0x20],0x41f00000 ; 00592c84
    LEA EDI,[EBP + 0xfffffc56]          ; 00592c8b
    MOV EAX,dword ptr [EAX + 0x64]      ; 00592c91
    MOV dword ptr [EDX + 0x30],0x1      ; 00592c94
    MOV ESI,0x665968                    ; 00592c9b | CMatrix3x4f_00665968
    MOV dword ptr [EDX + 0x3c],0x0      ; 00592ca0
    XOR ECX,ECX                         ; 00592ca7
    MOV dword ptr [EDX + 0x40],0x0      ; 00592ca9
    MOV dword ptr [EBP + -0x5a],ECX     ; 00592cb0
    MOV dword ptr [EDX + 0x28],EAX      ; 00592cb3
    MOV EAX,dword ptr [EBP + 0x52]      ; 00592cb6
    MOV dword ptr [EBP + -0x56],EBX     ; 00592cb9
    MOV dword ptr [EDX + 0x34],EAX      ; 00592cbc
    MOV dword ptr [EBP + -0x52],ECX     ; 00592cbf
    MOV EAX,dword ptr [EDX + 0x64]      ; 00592cc2
    MOV dword ptr [EDX + 0x54],0x0      ; 00592cc5
    DEC EAX                             ; 00592ccc
    MOV dword ptr [EDX + 0x520],0x0     ; 00592ccd
    MOV dword ptr [EBP + 0x5e],EAX      ; 00592cd7
    MOV EAX,dword ptr [EBP + 0x52]      ; 00592cda
    FILD dword ptr [EBP + 0x5e]         ; 00592cdd
    MOV dword ptr [EDX + 0x50],EAX      ; 00592ce0
    MOV EAX,0xc7c34f80                  ; 00592ce3
    FSTP float ptr [EDX + 0x38]         ; 00592ce8
    MOV dword ptr [EBP + -0x4a],EAX     ; 00592ceb
    MOV dword ptr [EBP + 0xfffffeca],EAX ; 00592cee
    MOV dword ptr [EBP + 0xfffffec6],EAX ; 00592cf4
    MOV dword ptr [EBP + 0xfffffec2],EAX ; 00592cfa
    MOV EAX,dword ptr [EBP + -0x62]     ; 00592d00
    MOV dword ptr [EBP + -0x42],ECX     ; 00592d03
    MOV dword ptr [EBP + -0x4e],ECX     ; 00592d06
    MOV EAX,dword ptr [EAX + 0x64]      ; 00592d09
    MOV dword ptr [EBP + -0x3a],ECX     ; 00592d0c
    DEC EAX                             ; 00592d0f
    MOV EDX,0xc7c34f00                  ; 00592d10
    MOV dword ptr [EBP + -0xa],EAX      ; 00592d15
    MOV EAX,dword ptr [EBP + -0x62]     ; 00592d18
    MOV ECX,0xc                         ; 00592d1b
    ADD EAX,0x6c                        ; 00592d20
    MOV dword ptr [EBP + -0x46],EDX     ; 00592d23
    MOV dword ptr [EBP + -0x12],EAX     ; 00592d26
    MOV EAX,dword ptr [EBP + -0x62]     ; 00592d29
    XOR EDX,EDX                         ; 00592d2c
    ADD EAX,0x3c                        ; 00592d2e
    MOV dword ptr [EBP + -0x66],EDX     ; 00592d31
    MOV dword ptr [EBP + -0x2],EAX      ; 00592d34
    MOV EAX,dword ptr [EBP + -0x62]     ; 00592d37
    MOV dword ptr [EBP + 0xffffff46],EDX ; 00592d3a
    ADD EAX,0x20                        ; 00592d40
    MOV dword ptr [EBP + 0xffffff4a],EDX ; 00592d43
    MOV dword ptr [EBP + -0x1e],EAX     ; 00592d49
    MOV EAX,dword ptr [EBP + 0x4e]      ; 00592d4c
    MOVSD.REP ES:EDI,ESI                ; 00592d4f | CMatrix3x4f_00665968 | CMatrix3x4f_00665968.m[0].x
    MOV dword ptr [EBP + 0xffffff4e],EDX ; 00592d51
    MOV EDI,dword ptr [EAX + EBP*0x1 + 0xffffd96a] ; 00592d57
    MOV dword ptr [EBP + -0x22],EAX     ; 00592d5e
    TEST EDI,EDI                        ; 00592d61
    JLE 0x0059536f                      ; 00592d63
        ;   XREF to: 0059536f (CONDITIONAL_JUMP)  ; LAB_0059536f
    PUSH 0x1                            ; 00592d69
        ;   Label: LAB_00592d69
    MOV ECX,dword ptr [EBP + 0xffffff6e] ; 00592d6b
    PUSH ECX                            ; 00592d71
    LEA EAX,[EBP + 0xffffdfe6]          ; 00592d72
    PUSH EAX                            ; 00592d78
    CALL core_skeledit.cpp_readNonEmptyLine_FUN_005895f0 ; 00592d79
        ;   XREF to: 005895f0 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_readNonEmptyLine_FUN_005895f0(char * buffer, _FILE * file, int require_content)
    ADD ESP,0xc                         ; 00592d7e
    PUSH 0x3                            ; 00592d81
    PUSH 0x64c670                       ; 00592d83 | = "fps"
    LEA EAX,[EBP + 0xffffdfe6]          ; 00592d88
    PUSH EAX                            ; 00592d8e
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00592d8f
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00592d94
    TEST EAX,EAX                        ; 00592d97
    JNZ 0x00593afb                      ; 00592d99
        ;   XREF to: 00593afb (CONDITIONAL_JUMP)  ; LAB_00593afb
    MOV ECX,dword ptr [EBP + -0x1e]     ; 00592d9f
    PUSH ECX                            ; 00592da2
    MOV EAX,0x64c674                    ; 00592da3 | = "%f"
    PUSH EAX                            ; 00592da8 | = "%f"
    LEA EAX,[EBP + 0xffffdfe9]          ; 00592da9
    MOV BL,byte ptr [EAX]               ; 00592daf
        ;   Label: LAB_00592daf
    INC BL                              ; 00592db1
    AND EBX,0xff                        ; 00592db3
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 00592db9 | g_CharacterClassificationTable
    JZ 0x00593aad                       ; 00592dc0
        ;   XREF to: 00593aad (CONDITIONAL_JUMP)  ; LAB_00593aad
    INC EAX                             ; 00592dc6
    JMP 0x00592daf                      ; 00592dc7
        ;   XREF to: 00592daf (UNCONDITIONAL_JUMP)  ; LAB_00592daf
    PUSH 0x0                            ; 00592dc9
        ;   Label: LAB_00592dc9
    LEA EAX,[ESI + EDX*0x1]             ; 00592dcb
    PUSH EAX                            ; 00592dce
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00592dcf
    PUSH EBX                            ; 00592dd5
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 00592dd6
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00592ddb
    TEST EAX,EAX                        ; 00592dde
    JL 0x00592887                       ; 00592de0
        ;   XREF to: 00592887 (CONDITIONAL_JUMP)  ; LAB_00592887
    MOV EAX,dword ptr [EBX]             ; 00592de6
    ADD EAX,EAX                         ; 00592de8
    MOV EDX,EAX                         ; 00592dea
    SHL EAX,0x4                         ; 00592dec
    MOV EDI,dword ptr [EBP + 0x92]      ; 00592def
    SUB EAX,EDX                         ; 00592df5
    PUSH EDI                            ; 00592df7
    ADD EAX,ESI                         ; 00592df8
    PUSH EAX                            ; 00592dfa
    PUSH 0x64c124                       ; 00592dfb | = "Duplicate state %s in %s"
    MOV EAX,[0x00678a60]                ; 00592e00 | g_CEditorToolsPtr
    PUSH EAX                            ; 00592e05 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00592e06
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 00592e0b
    JMP 0x005927ee                      ; 00592e0e
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV EDX,dword ptr [EBP + 0x92]      ; 00592e13
        ;   Label: LAB_00592e13
    PUSH EDX                            ; 00592e19
    PUSH 0x64c161                       ; 00592e1a | = "Can't parse home pose filename from %..."
    JMP 0x005927df                      ; 00592e1f
        ;   XREF to: 005927df (UNCONDITIONAL_JUMP)  ; LAB_005927df
    CMP byte ptr [EBP + 0x72],0x0       ; 00592e24
        ;   Label: LAB_00592e24
    JNZ 0x00592940                      ; 00592e28
        ;   XREF to: 00592940 (CONDITIONAL_JUMP)  ; LAB_00592940
    PUSH 0x0                            ; 00592e2e
    PUSH 0x0                            ; 00592e30
    LEA EAX,[EBP + 0xfffff01a]          ; 00592e32
    PUSH EAX                            ; 00592e38
    LEA EAX,[EBP + 0x72]                ; 00592e39
    PUSH EAX                            ; 00592e3c
    MOV ESI,dword ptr [EBP + 0x92]      ; 00592e3d
    PUSH ESI                            ; 00592e43
    CALL crt_string.c_splitpath_FUN_005ff178 ; 00592e44
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00592e49
    LEA EAX,[EBP + 0xffffef1a]          ; 00592e4c
    PUSH EAX                            ; 00592e52
    LEA EAX,[EBP + 0xfffff11a]          ; 00592e53
    PUSH EAX                            ; 00592e59
    LEA EAX,[EBP + 0xfffff01a]          ; 00592e5a
    PUSH EAX                            ; 00592e60
    LEA EAX,[EBP + 0x72]                ; 00592e61
    PUSH EAX                            ; 00592e64
    LEA EAX,[EBP + 0xffffe216]          ; 00592e65
    PUSH EAX                            ; 00592e6b
    CALL crt_file.c_makepath_FUN_005febfc ; 00592e6c
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00592e71
    JMP 0x00592940                      ; 00592e74
        ;   XREF to: 00592940 (UNCONDITIONAL_JUMP)  ; LAB_00592940
    PUSH 0x64c1ad                       ; 00592e79 | = "pos"
        ;   Label: LAB_00592e79
    LEA EAX,[EBP + 0xfffff21a]          ; 00592e7e
    PUSH EAX                            ; 00592e84
    LEA EAX,[EBP + 0xffffed1a]          ; 00592e85
    PUSH EAX                            ; 00592e8b
    LEA EAX,[EBP + 0x66]                ; 00592e8c
    PUSH EAX                            ; 00592e8f
    LEA EAX,[EBP + 0xffffe216]          ; 00592e90
    PUSH EAX                            ; 00592e96
    CALL crt_file.c_makepath_FUN_005febfc ; 00592e97
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00592e9c
    JMP 0x00592976                      ; 00592e9f
        ;   XREF to: 00592976 (UNCONDITIONAL_JUMP)  ; LAB_00592976
    TEST EBX,EBX                        ; 00592ea4
        ;   Label: LAB_00592ea4
    JZ 0x00592aab                       ; 00592ea6
        ;   XREF to: 00592aab (CONDITIONAL_JUMP)  ; LAB_00592aab
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00592eac
    IMUL EAX,dword ptr [EAX + 0x964],0x104 ; 00592eb2
    PUSH 0x10a4                         ; 00592ebc
    PUSH 0x64c245                       ; 00592ec1 | = "..\\core\\skeledit.cpp"
    PUSH 0x64c25a                       ; 00592ec6 | = "rt"
    MOV EDX,0x365caf8                   ; 00592ecb | g_MotionFilenames
    PUSH 0x0                            ; 00592ed0
    ADD EDX,EAX                         ; 00592ed2
    PUSH EDX                            ; 00592ed4
    MOV dword ptr [EBP + -0x72],EDX     ; 00592ed5
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00592ed8
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 00592edd
    MOV EDI,EAX                         ; 00592ee0
    TEST EAX,EAX                        ; 00592ee2
    JZ 0x00593012                       ; 00592ee4
        ;   XREF to: 00593012 (CONDITIONAL_JUMP)  ; LAB_00593012
    MOV EBX,0x1                         ; 00592eea
    MOV ESI,EAX                         ; 00592eef
    PUSH ESI                            ; 00592ef1
        ;   Label: LAB_00592ef1
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00592ef2
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00592ef7
    TEST EAX,EAX                        ; 00592efa
    JL 0x00592f08                       ; 00592efc
        ;   XREF to: 00592f08 (CONDITIONAL_JUMP)  ; LAB_00592f08
    CMP EAX,0xa                         ; 00592efe
    JNZ 0x00592ef1                      ; 00592f01
        ;   XREF to: 00592ef1 (CONDITIONAL_JUMP)  ; LAB_00592ef1
    DEC EBX                             ; 00592f03
    TEST EBX,EBX                        ; 00592f04
    JG 0x00592ef1                       ; 00592f06
        ;   XREF to: 00592ef1 (CONDITIONAL_JUMP)  ; LAB_00592ef1
    LEA EAX,[EBP + 0x5a]                ; 00592f08
        ;   Label: LAB_00592f08
    PUSH EAX                            ; 00592f0b
    PUSH 0x64c27b                       ; 00592f0c | = "%d\n"
    PUSH EDI                            ; 00592f11
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00592f12
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00592f17
    LEA EAX,[EBP + 0x32]                ; 00592f1a
    PUSH EAX                            ; 00592f1d
    PUSH EDI                            ; 00592f1e
    LEA EAX,[EBP + 0xffff56da]          ; 00592f1f
    PUSH EAX                            ; 00592f25
    CALL core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0 ; 00592f26
        ;   XREF to: 0058a4a0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0(CBoneStructure * this_ptr, _FILE * file, int * frame_count_out)
    ADD ESP,0xc                         ; 00592f2b
    PUSH 0x10b8                         ; 00592f2e
    PUSH 0x64c27f                       ; 00592f33 | = "..\\core\\skeledit.cpp"
    PUSH EDI                            ; 00592f38
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00592f39
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    MOV ESI,dword ptr [EBP + -0x7a]     ; 00592f3e
    ADD ESP,0xc                         ; 00592f41
    CMP ESI,0x1869f                     ; 00592f44
    JL 0x00592f53                       ; 00592f4a
        ;   XREF to: 00592f53 (CONDITIONAL_JUMP)  ; LAB_00592f53
    MOV EAX,dword ptr [EBP + 0x32]      ; 00592f4c
    DEC EAX                             ; 00592f4f
    MOV dword ptr [EBP + -0x7a],EAX     ; 00592f50
    CMP dword ptr [EBP + -0x76],0x1869f ; 00592f53
        ;   Label: LAB_00592f53
    JL 0x00592f63                       ; 00592f5a
        ;   XREF to: 00592f63 (CONDITIONAL_JUMP)  ; LAB_00592f63
    MOV EAX,dword ptr [EBP + 0x32]      ; 00592f5c
    DEC EAX                             ; 00592f5f
    MOV dword ptr [EBP + -0x76],EAX     ; 00592f60
    MOV EAX,dword ptr [EBP + -0x7a]     ; 00592f63
        ;   Label: LAB_00592f63
    TEST EAX,EAX                        ; 00592f66
    JL 0x00593046                       ; 00592f68
        ;   XREF to: 00593046 (CONDITIONAL_JUMP)  ; LAB_00593046
    MOV EDX,dword ptr [EBP + -0x76]     ; 00592f6e
    CMP EAX,EDX                         ; 00592f71
    JG 0x00593046                       ; 00592f73
        ;   XREF to: 00593046 (CONDITIONAL_JUMP)  ; LAB_00593046
    CMP EDX,dword ptr [EBP + 0x32]      ; 00592f79
    JGE 0x00593046                      ; 00592f7c
        ;   XREF to: 00593046 (CONDITIONAL_JUMP)  ; LAB_00593046
    LEA EAX,[EBP + 0xffff56da]          ; 00592f82
    PUSH EAX                            ; 00592f88
    LEA EAX,[EBP + 0xffff21b6]          ; 00592f89
    PUSH EAX                            ; 00592f8f
    CALL core_skeledit.cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200 ; 00592f90
        ;   XREF to: 0058b200 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200(CBoneStructure * this_ptr, CBoneStructure * other)
    ADD ESP,0x8                         ; 00592f95
    TEST EAX,EAX                        ; 00592f98
    JZ 0x0059307b                       ; 00592f9a
        ;   XREF to: 0059307b (CONDITIONAL_JUMP)  ; LAB_0059307b
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00592fa0
        ;   Label: LAB_00592fa0
    IMUL EAX,dword ptr [EAX + 0x964],0x54c ; 00592fa6
    ADD EAX,dword ptr [EBP + -0x6e]     ; 00592fb0
    MOV EDX,dword ptr [EBP + 0xffffff7e] ; 00592fb3
    MOV dword ptr [EAX + 0x60],EDX      ; 00592fb9
    MOV EDX,dword ptr [EBP + -0x76]     ; 00592fbc
    SUB EDX,dword ptr [EBP + -0x7a]     ; 00592fbf
    MOV EBX,dword ptr [EBP + 0xffffff7e] ; 00592fc2
    INC EDX                             ; 00592fc8
    ADD EBX,EDX                         ; 00592fc9
    MOV dword ptr [EAX + 0x64],EDX      ; 00592fcb
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00592fce
    MOV EDX,dword ptr [EDX + 0x964]     ; 00592fd4
    MOV EAX,dword ptr [EBP + -0x7a]     ; 00592fda
    MOV dword ptr [EBP + EDX*0x4 + 0xffffd78a],EAX ; 00592fdd
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00592fe4
    XOR ESI,ESI                         ; 00592fea
    MOV EDI,dword ptr [EAX + 0x964]     ; 00592fec
    MOV dword ptr [EBP + -0x7e],ESI     ; 00592ff2
    INC EDI                             ; 00592ff5
    MOV dword ptr [EBP + 0xffffff7e],EBX ; 00592ff6
    MOV dword ptr [EAX + 0x964],EDI     ; 00592ffc
    MOV EDX,0x1869f                     ; 00593002
    MOV dword ptr [EBP + -0x7a],ESI     ; 00593007
    MOV dword ptr [EBP + -0x76],EDX     ; 0059300a
    JMP 0x00592aab                      ; 0059300d
        ;   XREF to: 00592aab (UNCONDITIONAL_JUMP)  ; LAB_00592aab
    MOV EDX,dword ptr [EBP + 0x92]      ; 00593012
        ;   Label: LAB_00593012
    PUSH EDX                            ; 00593018
    MOV ECX,dword ptr [EBP + -0x72]     ; 00593019
    PUSH ECX                            ; 0059301c
    PUSH 0x64c25d                       ; 0059301d | = "Can't open %s mentioned in %s"
    MOV EBX,dword ptr [0x00678a60]      ; 00593022 | g_CEditorToolsPtr
    PUSH EBX                            ; 00593028 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00593029
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0059302e
    PUSH EDI                            ; 00593031
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593032
    PUSH EAX                            ; 00593038
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00593039
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059303e
    JMP 0x005927ee                      ; 00593041
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV ECX,dword ptr [EBP + 0x92]      ; 00593046
        ;   Label: LAB_00593046
    PUSH ECX                            ; 0059304c
    MOV EBX,dword ptr [EBP + -0x72]     ; 0059304d
    PUSH EBX                            ; 00593050
    PUSH 0x64c294                       ; 00593051 | = "Invalid frame start/end for animation..."
    MOV ESI,dword ptr [0x00678a60]      ; 00593056 | g_CEditorToolsPtr
    PUSH ESI                            ; 0059305c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0059305d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 00593062
    PUSH 0x0                            ; 00593065
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593067
    PUSH EAX                            ; 0059306d
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0059306e
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593073
    JMP 0x005927ee                      ; 00593076
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV EBX,dword ptr [EBP + -0x72]     ; 0059307b
        ;   Label: LAB_0059307b
    PUSH EBX                            ; 0059307e
    LEA EAX,[EBP + 0xffffd3e2]          ; 0059307f
    PUSH EAX                            ; 00593085
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00593086
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0059308b
    JMP 0x00592fa0                      ; 0059308e
        ;   XREF to: 00592fa0 (UNCONDITIONAL_JUMP)  ; LAB_00592fa0
    PUSH 0x9                            ; 00593093
        ;   Label: LAB_00593093
    PUSH 0x64c2c3                       ; 00593095 | = "animation"
    LEA EAX,[EBP + 0xffffdeba]          ; 0059309a
    PUSH EAX                            ; 005930a0
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 005930a1
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005930a6
    TEST EAX,EAX                        ; 005930a9
    JNZ 0x0059332c                      ; 005930ab
        ;   XREF to: 0059332c (CONDITIONAL_JUMP)  ; LAB_0059332c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005930b1
    CMP dword ptr [EAX + 0x964],0x78    ; 005930b7
    JL 0x005930f3                       ; 005930be
        ;   XREF to: 005930f3 (CONDITIONAL_JUMP)  ; LAB_005930f3
    PUSH 0x78                           ; 005930c0
    MOV EBX,dword ptr [EBP + 0x92]      ; 005930c2
    PUSH EBX                            ; 005930c8
    PUSH 0x64c2cd                       ; 005930c9 | = "Too many motions in %s, max is %d"
    MOV ESI,dword ptr [0x00678a60]      ; 005930ce | g_CEditorToolsPtr
    PUSH ESI                            ; 005930d4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005930d5
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 005930da
    PUSH 0x0                            ; 005930dd
    LEA EAX,[EBP + 0xffffd3e2]          ; 005930df
    PUSH EAX                            ; 005930e5
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005930e6
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005930eb
    JMP 0x005927ee                      ; 005930ee
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xfffff966]          ; 005930f3
        ;   Label: LAB_005930f3
    PUSH EAX                            ; 005930f9
    LEA EAX,[EBP + 0xffffe112]          ; 005930fa
    PUSH EAX                            ; 00593100
    PUSH 0x64c2ef                       ; 00593101 | = " \"%[^\"]\" : %s"
    LEA EAX,[EBP + 0xffffdec3]          ; 00593106
    PUSH EAX                            ; 0059310c
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0059310d
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 00593112
    CMP EAX,0x2                         ; 00593115
    JNZ 0x00593261                      ; 00593118
        ;   XREF to: 00593261 (CONDITIONAL_JUMP)  ; LAB_00593261
    LEA EAX,[EBP + 0xffffe81a]          ; 0059311e
    PUSH EAX                            ; 00593124
    LEA EAX,[EBP + 0xffffea1a]          ; 00593125
    PUSH EAX                            ; 0059312b
    LEA EAX,[EBP + 0xffffeb1a]          ; 0059312c
    PUSH EAX                            ; 00593132
    LEA EAX,[EBP + 0x62]                ; 00593133
    PUSH EAX                            ; 00593136
    LEA EAX,[EBP + 0xffffe112]          ; 00593137
    PUSH EAX                            ; 0059313d
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0059313e
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    MOV AL,byte ptr [EBP + 0xffffeb1a]  ; 00593143
    ADD ESP,0x14                        ; 00593149
    TEST AL,AL                          ; 0059314c
    JZ 0x00593299                       ; 0059314e
        ;   XREF to: 00593299 (CONDITIONAL_JUMP)  ; LAB_00593299
    LEA EAX,[EBP + 0xffffee1a]          ; 00593154
        ;   Label: LAB_00593154
    PUSH EAX                            ; 0059315a
    LEA EAX,[EBP + 0xffffe41a]          ; 0059315b
    PUSH EAX                            ; 00593161
    LEA EAX,[EBP + 0xffffe31a]          ; 00593162
    PUSH EAX                            ; 00593168
    LEA EAX,[EBP + 0x76]                ; 00593169
    PUSH EAX                            ; 0059316c
    LEA EAX,[EBP + 0xffffe112]          ; 0059316d
    PUSH EAX                            ; 00593173
    CALL crt_string.c_splitpath_FUN_005ff178 ; 00593174
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    MOV DL,byte ptr [EBP + 0xffffee1a]  ; 00593179
    ADD ESP,0x14                        ; 0059317f
    TEST DL,DL                          ; 00593182
    JNZ 0x005931ac                      ; 00593184
        ;   XREF to: 005931ac (CONDITIONAL_JUMP)  ; LAB_005931ac
    PUSH 0x64c32f                       ; 00593186 | = "bon"
    LEA EAX,[EBP + 0xffffe41a]          ; 0059318b
    PUSH EAX                            ; 00593191
    LEA EAX,[EBP + 0xffffe31a]          ; 00593192
    PUSH EAX                            ; 00593198
    LEA EAX,[EBP + 0x76]                ; 00593199
    PUSH EAX                            ; 0059319c
    LEA EAX,[EBP + 0xffffe112]          ; 0059319d
    PUSH EAX                            ; 005931a3
    CALL crt_file.c_makepath_FUN_005febfc ; 005931a4
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005931a9
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005931ac
        ;   Label: LAB_005931ac
    IMUL EBX,dword ptr [EAX + 0x964],0x54c ; 005931b2
    PUSH 0x54c                          ; 005931bc
    MOV EDI,dword ptr [EBP + -0x6e]     ; 005931c1
    PUSH 0x0                            ; 005931c4
    ADD EBX,EDI                         ; 005931c6
    PUSH EBX                            ; 005931c8
    CALL crt_memory.c_memset_FUN_005fde40 ; 005931c9
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005931ce
    PUSH 0x0                            ; 005931d1
    PUSH EBX                            ; 005931d3
    PUSH 0x0                            ; 005931d4
    PUSH 0x0                            ; 005931d6
    LEA EAX,[EBP + 0xffffe112]          ; 005931d8
    PUSH EAX                            ; 005931de
    CALL crt_string.c_splitpath_FUN_005ff178 ; 005931df
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 005931e4
    PUSH 0x0                            ; 005931e7
    LEA EAX,[EBP + 0xfffff966]          ; 005931e9
    PUSH EAX                            ; 005931ef
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005931f0
    PUSH EAX                            ; 005931f6
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 005931f7
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005931fc
    MOV dword ptr [EBX + 0x24],EAX      ; 005931ff
    TEST EAX,EAX                        ; 00593202
    JL 0x005932ee                       ; 00593204
        ;   XREF to: 005932ee (CONDITIONAL_JUMP)  ; LAB_005932ee
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0059320a
    MOV EAX,dword ptr [EAX + 0x964]     ; 00593210
    XOR ECX,ECX                         ; 00593216
    MOV dword ptr [EBP + EAX*0x4 + 0xffffd96a],ECX ; 00593218
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0059321f
    IMUL EDI,dword ptr [EAX + 0x964],0x104 ; 00593225
    LEA ESI,[EBP + 0xffffe112]          ; 0059322f
    ADD EDI,0x365caf8                   ; 00593235 | g_MotionFilenames
    PUSH EDI                            ; 0059323b
    MOV AL,byte ptr [ESI]               ; 0059323c
        ;   Label: LAB_0059323c
    MOV byte ptr [EDI],AL               ; 0059323e | g_MotionFilenames | g_MotionFilenames[0][2]
    CMP AL,0x0                          ; 00593240
    JZ 0x00593254                       ; 00593242
        ;   XREF to: 00593254 (CONDITIONAL_JUMP)  ; LAB_00593254
    MOV AL,byte ptr [ESI + 0x1]         ; 00593244
    ADD ESI,0x2                         ; 00593247
    MOV byte ptr [EDI + 0x1],AL         ; 0059324a | g_MotionFilenames[0][1] | g_MotionFilenames[0][3]
    ADD EDI,0x2                         ; 0059324d
    CMP AL,0x0                          ; 00593250
    JNZ 0x0059323c                      ; 00593252
        ;   XREF to: 0059323c (CONDITIONAL_JUMP)  ; LAB_0059323c
    POP EDI                             ; 00593254
        ;   Label: LAB_00593254
    MOV dword ptr [EBP + -0x7e],0x1     ; 00593255
    JMP 0x00592a67                      ; 0059325c
        ;   XREF to: 00592a67 (UNCONDITIONAL_JUMP)  ; LAB_00592a67
    LEA EAX,[EBP + 0xffffdeba]          ; 00593261
        ;   Label: LAB_00593261
    PUSH EAX                            ; 00593267
    MOV EDX,dword ptr [EBP + 0x92]      ; 00593268
    PUSH EDX                            ; 0059326e
    PUSH 0x64c2fd                       ; 0059326f | = "Can't parse %s.  I don't understand t..."
    MOV ECX,dword ptr [0x00678a60]      ; 00593274 | g_CEditorToolsPtr
    PUSH ECX                            ; 0059327a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0059327b
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 00593280
    PUSH 0x0                            ; 00593283
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593285
    PUSH EAX                            ; 0059328b
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0059328c
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593291
    JMP 0x005927ee                      ; 00593294
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    CMP byte ptr [EBP + 0x62],0x0       ; 00593299
        ;   Label: LAB_00593299
    JNZ 0x00593154                      ; 0059329d
        ;   XREF to: 00593154 (CONDITIONAL_JUMP)  ; LAB_00593154
    PUSH 0x0                            ; 005932a3
    PUSH 0x0                            ; 005932a5
    LEA EAX,[EBP + 0xffffeb1a]          ; 005932a7
    PUSH EAX                            ; 005932ad
    LEA EAX,[EBP + 0x62]                ; 005932ae
    PUSH EAX                            ; 005932b1
    MOV ECX,dword ptr [EBP + 0x92]      ; 005932b2
    PUSH ECX                            ; 005932b8
    CALL crt_string.c_splitpath_FUN_005ff178 ; 005932b9
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 005932be
    LEA EAX,[EBP + 0xffffe81a]          ; 005932c1
    PUSH EAX                            ; 005932c7
    LEA EAX,[EBP + 0xffffea1a]          ; 005932c8
    PUSH EAX                            ; 005932ce
    LEA EAX,[EBP + 0xffffeb1a]          ; 005932cf
    PUSH EAX                            ; 005932d5
    LEA EAX,[EBP + 0x62]                ; 005932d6
    PUSH EAX                            ; 005932d9
    LEA EAX,[EBP + 0xffffe112]          ; 005932da
    PUSH EAX                            ; 005932e0
    CALL crt_file.c_makepath_FUN_005febfc ; 005932e1
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005932e6
    JMP 0x00593154                      ; 005932e9
        ;   XREF to: 00593154 (UNCONDITIONAL_JUMP)  ; LAB_00593154
    MOV EDI,dword ptr [EBP + 0x92]      ; 005932ee
        ;   Label: LAB_005932ee
    PUSH EDI                            ; 005932f4
    LEA EAX,[EBP + 0xffffe112]          ; 005932f5
    PUSH EAX                            ; 005932fb
    LEA EAX,[EBP + 0xfffff966]          ; 005932fc
    PUSH EAX                            ; 00593302
    PUSH 0x64c333                       ; 00593303 | = "Invalid state %s for animation %s in %s"
    MOV EAX,[0x00678a60]                ; 00593308 | g_CEditorToolsPtr
    PUSH EAX                            ; 0059330d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0059330e
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00593313
    PUSH 0x0                            ; 00593316
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593318
    PUSH EAX                            ; 0059331e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0059331f
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593324
    JMP 0x005927ee                      ; 00593327
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    PUSH 0x8                            ; 0059332c
        ;   Label: LAB_0059332c
    PUSH 0x64c35b                       ; 0059332e | = "checkout"
    LEA EAX,[EBP + 0xffffdeba]          ; 00593333
    PUSH EAX                            ; 00593339
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 0059333a
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0059333f
    TEST EAX,EAX                        ; 00593342
    JNZ 0x00593435                      ; 00593344
        ;   XREF to: 00593435 (CONDITIONAL_JUMP)  ; LAB_00593435
    LEA EAX,[EBP + 0xfffff83a]          ; 0059334a
    PUSH EAX                            ; 00593350
    PUSH 0x64c364                       ; 00593351 | = "%s"
    LEA EAX,[EBP + 0xffffdec2]          ; 00593356
    PUSH EAX                            ; 0059335c
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0059335d
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 00593362
    LEA EDI,[EBP + 0xfffff83a]          ; 00593365
    LEA EBX,[EBP + 0xfffff83a]          ; 0059336b
    SUB ECX,ECX                         ; 00593371
    DEC ECX                             ; 00593373
    XOR EAX,EAX                         ; 00593374
    SCASB.REPNE ES:EDI                  ; 00593376
    NOT ECX                             ; 00593378
    DEC ECX                             ; 0059337a
    MOV EAX,ECX                         ; 0059337b
    MOV ESI,ECX                         ; 0059337d
    TEST ECX,ECX                        ; 0059337f
    JLE 0x005933a0                      ; 00593381
        ;   XREF to: 005933a0 (CONDITIONAL_JUMP)  ; LAB_005933a0
    LEA EDX,[EBP + 0xfffff83a]          ; 00593383
    LEA EAX,[ECX + EDX*0x1]             ; 00593389
    MOV DL,byte ptr [EAX + -0x1]        ; 0059338c
        ;   Label: LAB_0059338c
    INC DL                              ; 0059338f
    AND EDX,0xff                        ; 00593391
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 00593397 | g_CharacterClassificationTable
    JNZ 0x005933c9                      ; 0059339e
        ;   XREF to: 005933c9 (CONDITIONAL_JUMP)  ; LAB_005933c9
    LEA EAX,[EBX + ESI*0x1]             ; 005933a0
        ;   Label: LAB_005933a0
    LEA EDI,[EBX + 0x1]                 ; 005933a3
    MOV byte ptr [EAX],0x0              ; 005933a6
    MOV AL,byte ptr [EBX]               ; 005933a9
        ;   Label: LAB_005933a9
    INC AL                              ; 005933ab
    AND EAX,0xff                        ; 005933ad
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 005933b2 | g_CharacterClassificationTable
    JZ 0x005933d1                       ; 005933b9
        ;   XREF to: 005933d1 (CONDITIONAL_JUMP)  ; LAB_005933d1
    PUSH ESI                            ; 005933bb
    PUSH EDI                            ; 005933bc
    PUSH EBX                            ; 005933bd
    DEC ESI                             ; 005933be
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005933bf
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005933c4
    JMP 0x005933a9                      ; 005933c7
        ;   XREF to: 005933a9 (UNCONDITIONAL_JUMP)  ; LAB_005933a9
    DEC ESI                             ; 005933c9
        ;   Label: LAB_005933c9
    DEC EAX                             ; 005933ca
    TEST ESI,ESI                        ; 005933cb
    JG 0x0059338c                       ; 005933cd
        ;   XREF to: 0059338c (CONDITIONAL_JUMP)  ; LAB_0059338c
    JMP 0x005933a0                      ; 005933cf
        ;   XREF to: 005933a0 (UNCONDITIONAL_JUMP)  ; LAB_005933a0
    PUSH 0x64c367                       ; 005933d1 | = "USERNAME"
        ;   Label: LAB_005933d1
    CALL crt_env.c_getenv_FUN_006013f0  ; 005933d6
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_006013f0(char * name)
    MOV EDX,EAX                         ; 005933db
    ADD ESP,0x4                         ; 005933dd
    TEST EAX,EAX                        ; 005933e0
    JNZ 0x0059341c                      ; 005933e2
        ;   XREF to: 0059341c (CONDITIONAL_JUMP)  ; LAB_0059341c
    LEA EAX,[EBP + 0xfffff83a]          ; 005933e4
        ;   Label: LAB_005933e4
    PUSH EAX                            ; 005933ea
    PUSH 0x64c370                       ; 005933eb | = "User \"%s\" is currently working on t..."
    MOV EDX,dword ptr [0x00678a60]      ; 005933f0 | g_CEditorToolsPtr
    PUSH EDX                            ; 005933f6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog1_FUN_0049f060 ; 005933f7
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog1_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0xc                         ; 005933fc
    TEST EAX,EAX                        ; 005933ff
    JNZ 0x00592a67                      ; 00593401
        ;   XREF to: 00592a67 (CONDITIONAL_JUMP)  ; LAB_00592a67
    PUSH EAX                            ; 00593407
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593408
    PUSH EAX                            ; 0059340e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0059340f
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593414
    JMP 0x005927ee                      ; 00593417
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xfffff83a]          ; 0059341c
        ;   Label: LAB_0059341c
    PUSH EAX                            ; 00593422
    PUSH EDX                            ; 00593423
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 00593424
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00593429
    TEST EAX,EAX                        ; 0059342c
    JNZ 0x005933e4                      ; 0059342e
        ;   XREF to: 005933e4 (CONDITIONAL_JUMP)  ; LAB_005933e4
    JMP 0x00592a67                      ; 00593430
        ;   XREF to: 00592a67 (UNCONDITIONAL_JUMP)  ; LAB_00592a67
    MOV EDI,dword ptr [EBP + -0x7e]     ; 00593435
        ;   Label: LAB_00593435
    TEST EDI,EDI                        ; 00593438
    JZ 0x005934b8                       ; 0059343a
        ;   XREF to: 005934b8 (CONDITIONAL_JUMP)  ; LAB_005934b8
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00593440
    MOV EAX,dword ptr [EAX + 0x964]     ; 00593446
    INC dword ptr [EBP + EAX*0x4 + 0xffffd96a] ; 0059344c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00593453
    IMUL EAX,dword ptr [EAX + 0x964],0x54c ; 00593459
    MOV EBX,dword ptr [EBP + -0x6e]     ; 00593463
    ADD EBX,EAX                         ; 00593466
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00593468
    IMUL ESI,dword ptr [EAX + 0x964],0x104 ; 0059346e
    PUSH 0x8                            ; 00593478
    PUSH 0x64c3eb                       ; 0059347a | = "filename"
    LEA EAX,[EBP + 0xffffdeba]          ; 0059347f
    PUSH EAX                            ; 00593485
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00593486
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0059348b
    ADD ESI,0x365caf8                   ; 0059348e | g_MotionFilenames
    TEST EAX,EAX                        ; 00593494
    JNZ 0x00593666                      ; 00593496
        ;   XREF to: 00593666 (CONDITIONAL_JUMP)  ; LAB_00593666
    LEA EAX,[EBP + 0xffffdec2]          ; 0059349c
    MOV DL,byte ptr [EAX]               ; 005934a2
        ;   Label: LAB_005934a2
    INC DL                              ; 005934a4
    AND EDX,0xff                        ; 005934a6
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 005934ac | g_CharacterClassificationTable
    JZ 0x005934ef                       ; 005934b3
        ;   XREF to: 005934ef (CONDITIONAL_JUMP)  ; LAB_005934ef
    INC EAX                             ; 005934b5
    JMP 0x005934a2                      ; 005934b6
        ;   XREF to: 005934a2 (UNCONDITIONAL_JUMP)  ; LAB_005934a2
    LEA EAX,[EBP + 0xffffdeba]          ; 005934b8
        ;   Label: LAB_005934b8
    PUSH EAX                            ; 005934be
    MOV EAX,dword ptr [EBP + 0x92]      ; 005934bf
    PUSH EAX                            ; 005934c5
    PUSH 0x64c3af                       ; 005934c6 | = "Expected animation keyword in %s but ..."
    MOV EDX,dword ptr [0x00678a60]      ; 005934cb | g_CEditorToolsPtr
    PUSH EDX                            ; 005934d1 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005934d2
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 005934d7
    PUSH EDI                            ; 005934da
    LEA EAX,[EBP + 0xffffd3e2]          ; 005934db
    PUSH EAX                            ; 005934e1
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005934e2
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005934e7
    JMP 0x005927ee                      ; 005934ea
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    PUSH ESI                            ; 005934ef
        ;   Label: LAB_005934ef
    PUSH 0x64c3f4                       ; 005934f0 | = "\"%[^\"]\""
    PUSH EAX                            ; 005934f5
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005934f6
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 005934fb
    CMP EAX,0x1                         ; 005934fe
    JZ 0x00593534                       ; 00593501
        ;   XREF to: 00593534 (CONDITIONAL_JUMP)  ; LAB_00593534
    MOV dword ptr [0x02f0ca48],0x64c3fc ; 00593503 | g_CurrentFilename | = "..\\core\\skeledit.cpp"
    LEA EAX,[EBP + 0xffffdeba]          ; 0059350d
    PUSH EAX                            ; 00593513
    MOV ECX,dword ptr [EBP + 0x92]      ; 00593514
    PUSH ECX                            ; 0059351a
    PUSH ESI                            ; 0059351b
    MOV EDX,0x112f                      ; 0059351c
    PUSH 0x64c411                       ; 00593521 | = "Error parsing \"filename\" statement ..."
    MOV dword ptr [0x02f0ca4c],EDX      ; 00593526 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059352c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 00593531
    LEA EAX,[EBP + 0xfffff41a]          ; 00593534
        ;   Label: LAB_00593534
    PUSH EAX                            ; 0059353a
    LEA EAX,[EBP + 0xffffe51a]          ; 0059353b
    PUSH EAX                            ; 00593541
    LEA EAX,[EBP + 0xffffec1a]          ; 00593542
    PUSH EAX                            ; 00593548
    LEA EAX,[EBP + 0x6e]                ; 00593549
    PUSH EAX                            ; 0059354c
    PUSH ESI                            ; 0059354d
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0059354e
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    MOV AL,byte ptr [EBP + 0xffffec1a]  ; 00593553
    ADD ESP,0x14                        ; 00593559
    TEST AL,AL                          ; 0059355c
    JZ 0x005935e6                       ; 0059355e
        ;   XREF to: 005935e6 (CONDITIONAL_JUMP)  ; LAB_005935e6
    LEA EAX,[EBP + 0xfffff31a]          ; 00593564
        ;   Label: LAB_00593564
    PUSH EAX                            ; 0059356a
    LEA EAX,[EBP + 0xffffe71a]          ; 0059356b
    PUSH EAX                            ; 00593571
    LEA EAX,[EBP + 0xffffe61a]          ; 00593572
    PUSH EAX                            ; 00593578
    LEA EAX,[EBP + 0x6a]                ; 00593579
    PUSH EAX                            ; 0059357c
    PUSH ESI                            ; 0059357d
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0059357e
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    MOV DL,byte ptr [EBP + 0xfffff31a]  ; 00593583
    ADD ESP,0x14                        ; 00593589
    TEST DL,DL                          ; 0059358c
    JNZ 0x005935b0                      ; 0059358e
        ;   XREF to: 005935b0 (CONDITIONAL_JUMP)  ; LAB_005935b0
    PUSH 0x64c44f                       ; 00593590 | = "bon"
    LEA EAX,[EBP + 0xffffe71a]          ; 00593595
    PUSH EAX                            ; 0059359b
    LEA EAX,[EBP + 0xffffe61a]          ; 0059359c
    PUSH EAX                            ; 005935a2
    LEA EAX,[EBP + 0x6a]                ; 005935a3
    PUSH EAX                            ; 005935a6
    PUSH ESI                            ; 005935a7
    CALL crt_file.c_makepath_FUN_005febfc ; 005935a8
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005935ad
    PUSH 0x1139                         ; 005935b0
        ;   Label: LAB_005935b0
    PUSH 0x64c453                       ; 005935b5 | = "..\\core\\skeledit.cpp"
    PUSH 0x64c468                       ; 005935ba | = "rt"
    PUSH 0x0                            ; 005935bf
    PUSH ESI                            ; 005935c1
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005935c2
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 005935c7
    TEST EAX,EAX                        ; 005935ca
    JZ 0x00593635                       ; 005935cc
        ;   XREF to: 00593635 (CONDITIONAL_JUMP)  ; LAB_00593635
    PUSH 0x113e                         ; 005935ce
    PUSH 0x64c489                       ; 005935d3 | = "..\\core\\skeledit.cpp"
    PUSH EAX                            ; 005935d8
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005935d9
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005935de
    JMP 0x00592a67                      ; 005935e1
        ;   XREF to: 00592a67 (UNCONDITIONAL_JUMP)  ; LAB_00592a67
    CMP byte ptr [EBP + 0x6e],0x0       ; 005935e6
        ;   Label: LAB_005935e6
    JNZ 0x00593564                      ; 005935ea
        ;   XREF to: 00593564 (CONDITIONAL_JUMP)  ; LAB_00593564
    PUSH 0x0                            ; 005935f0
    PUSH 0x0                            ; 005935f2
    LEA EAX,[EBP + 0xffffec1a]          ; 005935f4
    PUSH EAX                            ; 005935fa
    LEA EAX,[EBP + 0x6e]                ; 005935fb
    PUSH EAX                            ; 005935fe
    MOV EBX,dword ptr [EBP + 0x92]      ; 005935ff
    PUSH EBX                            ; 00593605
    CALL crt_string.c_splitpath_FUN_005ff178 ; 00593606
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0059360b
    LEA EAX,[EBP + 0xfffff41a]          ; 0059360e
    PUSH EAX                            ; 00593614
    LEA EAX,[EBP + 0xffffe51a]          ; 00593615
    PUSH EAX                            ; 0059361b
    LEA EAX,[EBP + 0xffffec1a]          ; 0059361c
    PUSH EAX                            ; 00593622
    LEA EAX,[EBP + 0x6e]                ; 00593623
    PUSH EAX                            ; 00593626
    PUSH ESI                            ; 00593627
    CALL crt_file.c_makepath_FUN_005febfc ; 00593628
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0059362d
    JMP 0x00593564                      ; 00593630
        ;   XREF to: 00593564 (UNCONDITIONAL_JUMP)  ; LAB_00593564
    MOV EDI,dword ptr [EBP + 0x92]      ; 00593635
        ;   Label: LAB_00593635
    PUSH EDI                            ; 0059363b
    PUSH ESI                            ; 0059363c
    PUSH 0x64c46b                       ; 0059363d | = "Can't open %s mentioned in %s"
    MOV EAX,[0x00678a60]                ; 00593642 | g_CEditorToolsPtr
    PUSH EAX                            ; 00593647 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00593648
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0059364d
    PUSH 0x0                            ; 00593650
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593652
    PUSH EAX                            ; 00593658
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00593659
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059365e
    JMP 0x005927ee                      ; 00593661
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    PUSH 0x6                            ; 00593666
        ;   Label: LAB_00593666
    PUSH 0x64c49e                       ; 00593668 | = "frames"
    LEA EAX,[EBP + 0xffffdeba]          ; 0059366d
    PUSH EAX                            ; 00593673
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00593674
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00593679
    TEST EAX,EAX                        ; 0059367c
    JNZ 0x00592a67                      ; 0059367e
        ;   XREF to: 00592a67 (CONDITIONAL_JUMP)  ; LAB_00592a67
    LEA EAX,[EBP + 0xffffdec0]          ; 00593684
    MOV DL,byte ptr [EAX]               ; 0059368a
        ;   Label: LAB_0059368a
    INC DL                              ; 0059368c
    AND EDX,0xff                        ; 0059368e
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 00593694 | g_CharacterClassificationTable
    JZ 0x005936a0                       ; 0059369b
        ;   XREF to: 005936a0 (CONDITIONAL_JUMP)  ; LAB_005936a0
    INC EAX                             ; 0059369d
    JMP 0x0059368a                      ; 0059369e
        ;   XREF to: 0059368a (UNCONDITIONAL_JUMP)  ; LAB_0059368a
    LEA EDX,[EBP + -0x6a]               ; 005936a0
        ;   Label: LAB_005936a0
    PUSH EDX                            ; 005936a3
    LEA EDX,[EBP + 0xfffffe26]          ; 005936a4
    PUSH EDX                            ; 005936aa
    LEA EDX,[EBP + 0xfffffe46]          ; 005936ab
    PUSH EDX                            ; 005936b1
    PUSH 0x64c4a5                       ; 005936b2 | = " %[^-] - %s%n"
    MOV EDI,0xffffffff                  ; 005936b7
    PUSH EAX                            ; 005936bc
    MOV dword ptr [EBP + -0x6a],EDI     ; 005936bd
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005936c0
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EAX,dword ptr [EBP + -0x6a]     ; 005936c5
    ADD ESP,0x14                        ; 005936c8
    CMP EAX,0x3                         ; 005936cb
    JGE 0x00593709                      ; 005936ce
        ;   XREF to: 00593709 (CONDITIONAL_JUMP)  ; LAB_00593709
    LEA EAX,[EBP + 0xffffdeba]          ; 005936d0
    PUSH EAX                            ; 005936d6
    MOV ESI,dword ptr [EBP + 0x92]      ; 005936d7
    PUSH ESI                            ; 005936dd
    PUSH EBX                            ; 005936de
    PUSH 0x64c4b3                       ; 005936df | = "Error parsing \"frames\" statement fo..."
    MOV EDI,dword ptr [0x00678a60]      ; 005936e4 | g_CEditorToolsPtr
    PUSH EDI                            ; 005936ea | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005936eb
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 005936f0
    PUSH 0x0                            ; 005936f3
    LEA EAX,[EBP + 0xffffd3e2]          ; 005936f5
    PUSH EAX                            ; 005936fb
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005936fc
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593701
    JMP 0x005927ee                      ; 00593704
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    PUSH 0x0                            ; 00593709
        ;   Label: LAB_00593709
    PUSH 0x186a0                        ; 0059370b
    LEA EAX,[EBP + -0x7a]               ; 00593710
    PUSH EAX                            ; 00593713
    LEA EAX,[EBP + 0xfffffe46]          ; 00593714
    PUSH EAX                            ; 0059371a
    CALL core_skeledit.cpp_parseBoneParentToken_FUN_00592520 ; 0059371b
        ;   XREF to: 00592520 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_parseBoneParentToken_FUN_00592520(char * token, int * out_index, int bone_count, int allow_patch)
    ADD ESP,0x10                        ; 00593720
    TEST EAX,EAX                        ; 00593723
    JZ 0x00593749                       ; 00593725
        ;   XREF to: 00593749 (CONDITIONAL_JUMP)  ; LAB_00593749
    PUSH 0x0                            ; 00593727
    PUSH 0x186a0                        ; 00593729
    LEA EAX,[EBP + -0x76]               ; 0059372e
    PUSH EAX                            ; 00593731
    LEA EAX,[EBP + 0xfffffe26]          ; 00593732
    PUSH EAX                            ; 00593738
    CALL core_skeledit.cpp_parseBoneParentToken_FUN_00592520 ; 00593739
        ;   XREF to: 00592520 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_parseBoneParentToken_FUN_00592520(char * token, int * out_index, int bone_count, int allow_patch)
    ADD ESP,0x10                        ; 0059373e
    TEST EAX,EAX                        ; 00593741
    JNZ 0x00592a67                      ; 00593743
        ;   XREF to: 00592a67 (CONDITIONAL_JUMP)  ; LAB_00592a67
    LEA EAX,[EBP + 0xffffdeba]          ; 00593749
        ;   Label: LAB_00593749
    PUSH EAX                            ; 0059374f
    MOV EDX,dword ptr [EBP + 0x92]      ; 00593750
    PUSH EDX                            ; 00593756
    PUSH EBX                            ; 00593757
    PUSH 0x64c4ef                       ; 00593758 | = "Error parsing \"frames\" statement fo..."
    MOV ECX,dword ptr [0x00678a60]      ; 0059375d | g_CEditorToolsPtr
    PUSH ECX                            ; 00593763 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00593764
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00593769
    PUSH 0x0                            ; 0059376c
    LEA EAX,[EBP + 0xffffd3e2]          ; 0059376e
    PUSH EAX                            ; 00593774
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00593775
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059377a
    JMP 0x005927ee                      ; 0059377d
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xffffe216]          ; 00593782
        ;   Label: LAB_00593782
    PUSH EAX                            ; 00593788
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593789
    PUSH EAX                            ; 0059378f
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00593790
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00593795
    PUSH 0x64c559                       ; 00593798 | = "(Dump this list to the clipboard)"
    LEA EAX,[EBP + 0xffffd3e2]          ; 0059379d
    PUSH EAX                            ; 005937a3
    XOR EDI,EDI                         ; 005937a4
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005937a6
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005937ab
        ;   Label: LAB_005937ab
    LEA EAX,[EBP + 0xffffe216]          ; 005937ae
    PUSH EAX                            ; 005937b4
    PUSH 0x64c57b                       ; 005937b5 | = "The following motions do not have the..."
    LEA EAX,[EBP + 0xffffdd2a]          ; 005937ba
    PUSH EAX                            ; 005937c0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005937c1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005937c6
    PUSH 0x0                            ; 005937c9
    PUSH EDI                            ; 005937cb
    LEA EAX,[EBP + 0xffffdd2a]          ; 005937cc
    PUSH EAX                            ; 005937d2
    LEA EAX,[EBP + 0xffffd3e2]          ; 005937d3
    PUSH EAX                            ; 005937d9
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 005937da
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 005937df
    MOV EDI,EAX                         ; 005937e2
    TEST EAX,EAX                        ; 005937e4
    JL 0x00593877                       ; 005937e6
        ;   XREF to: 00593877 (CONDITIONAL_JUMP)  ; LAB_00593877
    MOV EDX,dword ptr [EBP + 0xffffd3e2] ; 005937ec
    DEC EDX                             ; 005937f2
    CMP EAX,EDX                         ; 005937f3
    JNZ 0x00593843                      ; 005937f5
        ;   XREF to: 00593843 (CONDITIONAL_JUMP)  ; LAB_00593843
    MOV ESI,0x366b650                   ; 005937f7 | g_SkeleditClipboardBuffer
    XOR EBX,EBX                         ; 005937fc
    MOV EAX,dword ptr [EBP + 0xffffd3e2] ; 005937fe
        ;   Label: LAB_005937fe
    DEC EAX                             ; 00593804
    CMP EBX,EAX                         ; 00593805
    JGE 0x0059382d                      ; 00593807
        ;   XREF to: 0059382d (CONDITIONAL_JUMP)  ; LAB_0059382d
    PUSH EBX                            ; 00593809
    LEA EAX,[EBP + 0xffffd3e2]          ; 0059380a
    PUSH EAX                            ; 00593810
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00593811
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00593816
    PUSH EAX                            ; 00593819
    PUSH 0x64c611                       ; 0059381a | = "%s\r\n"
    PUSH ESI                            ; 0059381f | g_SkeleditClipboardBuffer
    INC EBX                             ; 00593820
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00593821
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00593826
    ADD ESI,EAX                         ; 00593829
    JMP 0x005937fe                      ; 0059382b
        ;   XREF to: 005937fe (UNCONDITIONAL_JUMP)  ; LAB_005937fe
    PUSH 0x366b650                      ; 0059382d | g_SkeleditClipboardBuffer
        ;   Label: LAB_0059382d
    MOV ECX,dword ptr [0x00678a60]      ; 00593832 | g_CEditorToolsPtr
    PUSH ECX                            ; 00593838 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0 ; 00593839
        ;   XREF to: 004a1bc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0(CEditorTools * this_ptr, char * text_data)
    JMP 0x005937ab                      ; 0059383e
        ;   XREF to: 005937ab (UNCONDITIONAL_JUMP)  ; LAB_005937ab
    PUSH EAX                            ; 00593843
        ;   Label: LAB_00593843
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593844
    PUSH EAX                            ; 0059384a
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0059384b
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00593850
    PUSH EAX                            ; 00593853
    MOV EBX,EAX                         ; 00593854
    LEA EAX,[EBP + 0xfffeec92]          ; 00593856
    PUSH EAX                            ; 0059385c
    CALL core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0 ; 0059385d
        ;   XREF to: 0058a3d0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0(CBoneStructure * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00593862
    PUSH EBX                            ; 00593865
    LEA EAX,[EBP + 0xfffeec92]          ; 00593866
    PUSH EAX                            ; 0059386c
    CALL core_skeledit.cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0 ; 0059386d
        ;   XREF to: 0058afe0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0(CBoneStructure * this_ptr, char * model_name)
    JMP 0x005937ab                      ; 00593872
        ;   XREF to: 005937ab (UNCONDITIONAL_JUMP)  ; LAB_005937ab
    XOR EBX,EBX                         ; 00593877
        ;   Label: LAB_00593877
    PUSH EBX                            ; 00593879
    LEA EAX,[EBP + 0xffffd3e2]          ; 0059387a
    PUSH EAX                            ; 00593880
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00593881
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593886
    MOV EAX,EBX                         ; 00593889
    LEA ESP,[EBP + 0x7a]                ; 0059388b
    POP EBP                             ; 0059388e
    POP EDI                             ; 0059388f
    POP ESI                             ; 00593890
    POP EBX                             ; 00593891
    RET                                 ; 00593892
    MOV EBX,dword ptr [EBP + 0x46]      ; 00593893
        ;   Label: LAB_00593893
    MOV ESI,dword ptr [EBP + 0x4a]      ; 00593896
    MOV EDI,dword ptr [EBP + 0x4e]      ; 00593899
    MOV EAX,dword ptr [EBP + 0x52]      ; 0059389c
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0059389f
    ADD EBX,0x104                       ; 005938a5
    ADD ESI,0x54c                       ; 005938ab
    ADD EDI,0x4                         ; 005938b1
    INC EAX                             ; 005938b4
    MOV ECX,dword ptr [EDX + 0x964]     ; 005938b5
    MOV dword ptr [EBP + 0x46],EBX      ; 005938bb | g_MotionFilenames[1][0]
    MOV dword ptr [EBP + 0x4a],ESI      ; 005938be
    MOV dword ptr [EBP + 0x4e],EDI      ; 005938c1
    MOV dword ptr [EBP + 0x52],EAX      ; 005938c4
    CMP EAX,ECX                         ; 005938c7
    JL 0x00592bf5                       ; 005938c9
        ;   XREF to: 00592bf5 (CONDITIONAL_JUMP)  ; LAB_00592bf5
    MOV EBX,dword ptr [0x00678a60]      ; 005938cf | g_CEditorToolsPtr
        ;   Label: LAB_005938cf
    PUSH EBX                            ; 005938d5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 005938d6
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 005938db
    PUSH 0x14ef                         ; 005938de
    PUSH 0x64d5b1                       ; 005938e3 | = "..\\core\\skeledit.cpp"
    MOV EDI,dword ptr [EBP + 0xffffff6e] ; 005938e8
    PUSH EDI                            ; 005938ee
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005938ef
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005938f4
    PUSH 0x64d5c6                       ; 005938f7 | = "Biasing motions."
    MOV EDX,dword ptr [0x00678a60]      ; 005938fc | g_CEditorToolsPtr
    PUSH EDX                            ; 00593902 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00593903
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00593908
    PUSH 0x1e0                          ; 0059390b
    XOR ESI,ESI                         ; 00593910
    PUSH ESI                            ; 00593912
    LEA EAX,[EBP + 0xffffdb4a]          ; 00593913
    PUSH EAX                            ; 00593919
    MOV dword ptr [EBP + 0xffffff72],ESI ; 0059391a
    MOV dword ptr [EBP + 0xffffff6e],ESI ; 00593920
    CALL crt_memory.c_memset_FUN_005fde40 ; 00593926
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV ECX,dword ptr [0x03670b5c]      ; 0059392b | g_SkeleditBiasEntryCount
    ADD ESP,0xc                         ; 00593931
    TEST ECX,ECX                        ; 00593934
    JLE 0x00593960                      ; 00593936
        ;   XREF to: 00593960 (CONDITIONAL_JUMP)  ; LAB_00593960
    MOV EBX,0x1                         ; 00593938
    SHL ECX,0x4                         ; 0059393d
    XOR EAX,EAX                         ; 00593940
    MOV EDX,dword ptr [EAX + 0x3670b60] ; 00593942 | g_SkeleditBiasEntries | g_SkeleditBiasEntries[1].motion_index
        ;   Label: LAB_00593942
    ADD EAX,0x10                        ; 00593948
    MOV dword ptr [EBP + EDX*0x4 + 0xffffdb4a],EBX ; 0059394b
    CMP EAX,ECX                         ; 00593952
    JL 0x00593942                       ; 00593954
        ;   XREF to: 00593942 (CONDITIONAL_JUMP)  ; LAB_00593942
    LEA EAX,[EAX]                       ; 00593956
    LEA EDX,[EDX]                       ; 0059395c
    MOV ESI,dword ptr [0x03670b5c]      ; 00593960 | g_SkeleditBiasEntryCount
        ;   Label: LAB_00593960
    XOR EDI,EDI                         ; 00593966
    TEST ESI,ESI                        ; 00593968
    JLE 0x00595eb8                      ; 0059396a
        ;   XREF to: 00595eb8 (CONDITIONAL_JUMP)  ; LAB_00595eb8
    MOV EAX,[0x03670b5c]                ; 00593970 | g_SkeleditBiasEntryCount
        ;   Label: LAB_00593970
    XOR EBX,EBX                         ; 00593975
    TEST EAX,EAX                        ; 00593977
    JLE 0x005939a7                      ; 00593979
        ;   XREF to: 005939a7 (CONDITIONAL_JUMP)  ; LAB_005939a7
    MOV ESI,dword ptr [0x03670b5c]      ; 0059397b | g_SkeleditBiasEntryCount
    XOR EAX,EAX                         ; 00593981
    SHL ESI,0x4                         ; 00593983
    CMP dword ptr [EAX + 0x3670b60],0x0 ; 00593986 | g_SkeleditBiasEntries | g_SkeleditBiasEntries[1].motion_index
        ;   Label: LAB_00593986
    JL 0x0059399f                       ; 0059398d
        ;   XREF to: 0059399f (CONDITIONAL_JUMP)  ; LAB_0059399f
    MOV EDX,dword ptr [EAX + 0x3670b68] ; 0059398f | g_SkeleditBiasEntries[1].ref_motion_index | g_SkeleditBiasEntries[0].ref_motion_index
    CMP dword ptr [EBP + EDX*0x4 + 0xffffdb4a],0x0 ; 00593995
    JZ 0x005939a7                       ; 0059399d
        ;   XREF to: 005939a7 (CONDITIONAL_JUMP)  ; LAB_005939a7
    ADD EAX,0x10                        ; 0059399f
        ;   Label: LAB_0059399f
    INC EBX                             ; 005939a2
    CMP EAX,ESI                         ; 005939a3
    JL 0x00593986                       ; 005939a5
        ;   XREF to: 00593986 (CONDITIONAL_JUMP)  ; LAB_00593986
    CMP EBX,dword ptr [0x03670b5c]      ; 005939a7 | g_SkeleditBiasEntryCount
        ;   Label: LAB_005939a7
    JGE 0x00595ef3                      ; 005939ad
        ;   XREF to: 00595ef3 (CONDITIONAL_JUMP)  ; LAB_00595ef3
    MOV ESI,0x3670b60                   ; 005939b3 | g_SkeleditBiasEntries
    SHL EBX,0x4                         ; 005939b8
    ADD ESI,EBX                         ; 005939bb
    MOV EDX,dword ptr [ESI]             ; 005939bd | g_SkeleditBiasEntries
    IMUL EDX,EDX,0x54c                  ; 005939bf
    ADD EDX,dword ptr [EBP + 0x8e]      ; 005939c5
    IMUL EAX,dword ptr [ESI + 0x8],0x54c ; 005939cb | g_SkeleditBiasEntries[0].ref_motion_index
    MOV EBX,dword ptr [ESI + 0x4]       ; 005939d2 | g_SkeleditBiasEntries[0].source_frame
    MOV EDX,dword ptr [EDX + 0x9c8]     ; 005939d5
    ADD EDX,EBX                         ; 005939db
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005939dd
    ADD EBX,EAX                         ; 005939e3
    IMUL EAX,EDX,0xc                    ; 005939e5
    MOV ECX,dword ptr [ESI + 0xc]       ; 005939e8 | g_SkeleditBiasEntries[0].ref_frame
    MOV EBX,dword ptr [EBX + 0x9c8]     ; 005939eb
    ADD EBX,ECX                         ; 005939f1
    IMUL EBX,EBX,0xc                    ; 005939f3
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005939f6
    MOV EDX,dword ptr [EDX + 0x29374]   ; 005939fc
    FLD float ptr [EDX + EBX*0x1]       ; 00593a02
    FSUB float ptr [EDX + EAX*0x1]      ; 00593a05
    FSTP float ptr [EBP + 0xfffffeb6]   ; 00593a08
    FLD float ptr [EDX + EBX*0x1 + 0x4] ; 00593a0e
    FSUB float ptr [EDX + EAX*0x1 + 0x4] ; 00593a12
    MOV ECX,dword ptr [EBP + 0x8e]      ; 00593a16
    FSTP float ptr [EBP + 0xfffffeba]   ; 00593a1c
    FLD float ptr [EDX + EBX*0x1 + 0x8] ; 00593a22
    FSUB float ptr [EDX + EAX*0x1 + 0x8] ; 00593a26
    XOR EBX,EBX                         ; 00593a2a
    FSTP float ptr [EBP + 0xfffffebe]   ; 00593a2c
    IMUL EAX,dword ptr [ESI],0x54c      ; 00593a32 | g_SkeleditBiasEntries
        ;   Label: LAB_00593a32
    ADD EAX,ECX                         ; 00593a38
    CMP EBX,dword ptr [EAX + 0x9cc]     ; 00593a3a
    JGE 0x00595e98                      ; 00593a40
        ;   XREF to: 00595e98 (CONDITIONAL_JUMP)  ; LAB_00595e98
    MOV EDX,dword ptr [EAX + 0x9c8]     ; 00593a46
    ADD EDX,EBX                         ; 00593a4c
    IMUL EDX,EDX,0xc                    ; 00593a4e
    MOV EAX,dword ptr [ECX + 0x29374]   ; 00593a51
    FLD float ptr [EDX + EAX*0x1]       ; 00593a57
    FADD float ptr [EBP + 0xfffffeb6]   ; 00593a5a
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 00593a60
    FXCH                                ; 00593a64
    FSTP float ptr [EDX + EAX*0x1]      ; 00593a66
    FADD float ptr [EBP + 0xfffffeba]   ; 00593a69
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 00593a6f
    FXCH                                ; 00593a73
    FSTP float ptr [EDX + EAX*0x1 + 0x4] ; 00593a75
    FADD float ptr [EBP + 0xfffffebe]   ; 00593a79
    INC EBX                             ; 00593a7f
    FSTP float ptr [EDX + EAX*0x1 + 0x8] ; 00593a80
    JMP 0x00593a32                      ; 00593a84
        ;   XREF to: 00593a32 (UNCONDITIONAL_JUMP)  ; LAB_00593a32
    MOV EAX,0x64c63d                    ; 00593a86 | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_00593a86
    MOV EDX,0x11a5                      ; 00593a8b
    PUSH 0x64c652                       ; 00593a90 | = "Error parsing file!"
    MOV [0x02f0ca48],EAX                ; 00593a95 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00593a9a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00593aa0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00593aa5
    JMP 0x00592c4e                      ; 00593aa8
        ;   XREF to: 00592c4e (UNCONDITIONAL_JUMP)  ; LAB_00592c4e
    PUSH EAX                            ; 00593aad
        ;   Label: LAB_00593aad
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00593aae
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 00593ab3
    CMP EAX,0x1                         ; 00593ab6
    JZ 0x00595356                       ; 00593ab9
        ;   XREF to: 00595356 (CONDITIONAL_JUMP)  ; LAB_00595356
    LEA EAX,[EBP + 0xffffdfe6]          ; 00593abf
    PUSH EAX                            ; 00593ac5
    MOV EDI,dword ptr [EBP + 0x92]      ; 00593ac6
    PUSH EDI                            ; 00593acc
    MOV EAX,dword ptr [EBP + -0x62]     ; 00593acd
    PUSH EAX                            ; 00593ad0
    PUSH 0x64c677                       ; 00593ad1 | = "Error parsing \"fps\" statement for a..."
    MOV EDX,dword ptr [0x00678a60]      ; 00593ad6 | g_CEditorToolsPtr
    PUSH EDX                            ; 00593adc | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00593add
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00593ae2
    PUSH 0x0                            ; 00593ae5
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593ae7
    PUSH EAX                            ; 00593aed
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00593aee
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593af3
    JMP 0x005927ee                      ; 00593af6
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    PUSH 0x2                            ; 00593afb
        ;   Label: LAB_00593afb
    PUSH 0x64c6b0                       ; 00593afd | = "if"
    LEA EAX,[EBP + 0xffffdfe6]          ; 00593b02
    PUSH EAX                            ; 00593b08
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00593b09
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00593b0e
    TEST EAX,EAX                        ; 00593b11
    JNZ 0x00594134                      ; 00593b13
        ;   XREF to: 00594134 (CONDITIONAL_JUMP)  ; LAB_00594134
    MOV EAX,dword ptr [EBP + -0x62]     ; 00593b19
    CMP dword ptr [EAX + 0x68],0x2d     ; 00593b1c
    JGE 0x00593b3e                      ; 00593b20
        ;   XREF to: 00593b3e (CONDITIONAL_JUMP)  ; LAB_00593b3e
    LEA EAX,[EBP + 0xffffdfe9]          ; 00593b22
    MOV BL,byte ptr [EAX]               ; 00593b28
        ;   Label: LAB_00593b28
    INC BL                              ; 00593b2a
    AND EBX,0xff                        ; 00593b2c
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 00593b32 | g_CharacterClassificationTable
    JZ 0x00593b72                       ; 00593b39
        ;   XREF to: 00593b72 (CONDITIONAL_JUMP)  ; LAB_00593b72
    INC EAX                             ; 00593b3b
    JMP 0x00593b28                      ; 00593b3c
        ;   XREF to: 00593b28 (UNCONDITIONAL_JUMP)  ; LAB_00593b28
    PUSH 0x2d                           ; 00593b3e
        ;   Label: LAB_00593b3e
    MOV EDI,dword ptr [EBP + 0x92]      ; 00593b40
    PUSH EDI                            ; 00593b46
    PUSH EAX                            ; 00593b47
    PUSH 0x64c6b3                       ; 00593b48 | = "Too many transitions in animation %s ..."
    MOV EDX,dword ptr [0x00678a60]      ; 00593b4d | g_CEditorToolsPtr
    PUSH EDX                            ; 00593b53 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00593b54
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00593b59
    PUSH 0x0                            ; 00593b5c
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593b5e
    PUSH EAX                            ; 00593b64
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00593b65
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593b6a
    JMP 0x005927ee                      ; 00593b6d
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EDX,[EBP + -0x16]               ; 00593b72
        ;   Label: LAB_00593b72
    PUSH EDX                            ; 00593b75
    LEA EDX,[EBP + 0xfffffdfe]          ; 00593b76
    PUSH EDX                            ; 00593b7c
    LEA EDX,[EBP + 0xfffffc22]          ; 00593b7d
    PUSH EDX                            ; 00593b83
    PUSH 0x64c6e9                       ; 00593b84 | = "%s %s%n"
    MOV EBX,0xffffffff                  ; 00593b89
    PUSH EAX                            ; 00593b8e
    MOV dword ptr [EBP + -0x1a],EAX     ; 00593b8f
    MOV dword ptr [EBP + -0x16],EBX     ; 00593b92
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00593b95
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ESI,dword ptr [EBP + -0x16]     ; 00593b9a
    ADD ESP,0x14                        ; 00593b9d
    CMP ESI,0x3                         ; 00593ba0
    JGE 0x00593be1                      ; 00593ba3
        ;   XREF to: 00593be1 (CONDITIONAL_JUMP)  ; LAB_00593be1
    LEA EAX,[EBP + 0xffffdfe6]          ; 00593ba5
    PUSH EAX                            ; 00593bab
    MOV EAX,dword ptr [EBP + 0x92]      ; 00593bac
    PUSH EAX                            ; 00593bb2
    MOV EDX,dword ptr [EBP + -0x62]     ; 00593bb3
    PUSH EDX                            ; 00593bb6
    PUSH 0x64c6f1                       ; 00593bb7 | = "Error parsing \"if\" statement for an..."
    MOV ECX,dword ptr [0x00678a60]      ; 00593bbc | g_CEditorToolsPtr
    PUSH ECX                            ; 00593bc2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00593bc3
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00593bc8
    PUSH 0x0                            ; 00593bcb
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593bcd
    PUSH EAX                            ; 00593bd3
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00593bd4
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593bd9
    JMP 0x005927ee                      ; 00593bdc
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV EAX,dword ptr [EBP + -0x62]     ; 00593be1
        ;   Label: LAB_00593be1
    IMUL EDI,dword ptr [EAX + 0x68],0x18 ; 00593be4
    PUSH 0x18                           ; 00593be8
    MOV ECX,dword ptr [EBP + -0x12]     ; 00593bea
    PUSH 0x0                            ; 00593bed
    ADD EDI,ECX                         ; 00593bef
    PUSH EDI                            ; 00593bf1
    CALL crt_memory.c_memset_FUN_005fde40 ; 00593bf2
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00593bf7
    PUSH 0x0                            ; 00593bfa
    LEA EAX,[EBP + 0xfffffc22]          ; 00593bfc
    PUSH EAX                            ; 00593c02
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00593c03
    PUSH EBX                            ; 00593c09
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 00593c0a
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00593c0f
    MOV dword ptr [EDI],EAX             ; 00593c12
    TEST EAX,EAX                        ; 00593c14
    JL 0x00593c78                       ; 00593c16
        ;   XREF to: 00593c78 (CONDITIONAL_JUMP)  ; LAB_00593c78
    MOV EDX,dword ptr [EBP + -0x62]     ; 00593c18
    MOV ECX,dword ptr [EDX + 0x68]      ; 00593c1b
    XOR EAX,EAX                         ; 00593c1e
    TEST ECX,ECX                        ; 00593c20
    JLE 0x00593c3f                      ; 00593c22
        ;   XREF to: 00593c3f (CONDITIONAL_JUMP)  ; LAB_00593c3f
    MOV EBX,EDX                         ; 00593c24
    MOV EDX,dword ptr [EDI]             ; 00593c26
        ;   Label: LAB_00593c26
    CMP EDX,dword ptr [EBX + 0x6c]      ; 00593c28
    JZ 0x00593cbb                       ; 00593c2b
        ;   XREF to: 00593cbb (CONDITIONAL_JUMP)  ; LAB_00593cbb
    MOV EDX,dword ptr [EBP + -0x62]     ; 00593c31
    INC EAX                             ; 00593c34
    MOV ESI,dword ptr [EDX + 0x68]      ; 00593c35
    ADD EBX,0x18                        ; 00593c38
    CMP EAX,ESI                         ; 00593c3b
    JL 0x00593c26                       ; 00593c3d
        ;   XREF to: 00593c26 (CONDITIONAL_JUMP)  ; LAB_00593c26
    LEA EAX,[EBP + 0xfffffdfe]          ; 00593c3f
        ;   Label: LAB_00593c3f
    PUSH EAX                            ; 00593c45
    CALL core_skeledit.cpp_parseTransitionType_FUN_005925c0 ; 00593c46
        ;   XREF to: 005925c0 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_parseTransitionType_FUN_005925c0(char * type_name)
    ADD ESP,0x4                         ; 00593c4b
    MOV dword ptr [EDI + 0x4],EAX       ; 00593c4e
    TEST EAX,EAX                        ; 00593c51
    JZ 0x00593cf7                       ; 00593c53
        ;   XREF to: 00593cf7 (CONDITIONAL_JUMP)  ; LAB_00593cf7
    MOV EBX,dword ptr [EBP + -0x1a]     ; 00593c59
    ADD EBX,dword ptr [EBP + -0x16]     ; 00593c5c
    MOV AL,byte ptr [EBX]               ; 00593c5f
        ;   Label: LAB_00593c5f
    INC AL                              ; 00593c61
    AND EAX,0xff                        ; 00593c63
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 00593c68 | g_CharacterClassificationTable
    JZ 0x00593d3a                       ; 00593c6f
        ;   XREF to: 00593d3a (CONDITIONAL_JUMP)  ; LAB_00593d3a
    INC EBX                             ; 00593c75
    JMP 0x00593c5f                      ; 00593c76
        ;   XREF to: 00593c5f (UNCONDITIONAL_JUMP)  ; LAB_00593c5f
    LEA EAX,[EBP + 0xffffdfe6]          ; 00593c78
        ;   Label: LAB_00593c78
    PUSH EAX                            ; 00593c7e
    MOV EBX,dword ptr [EBP + 0x92]      ; 00593c7f
    PUSH EBX                            ; 00593c85
    MOV ESI,dword ptr [EBP + -0x62]     ; 00593c86
    PUSH ESI                            ; 00593c89
    LEA EAX,[EBP + 0xfffffc22]          ; 00593c8a
    PUSH EAX                            ; 00593c90
    PUSH 0x64c729                       ; 00593c91 | = "Invalid desired state \"%s\" in \"if\..."
    MOV EDI,dword ptr [0x00678a60]      ; 00593c96 | g_CEditorToolsPtr
    PUSH EDI                            ; 00593c9c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00593c9d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 00593ca2
    PUSH 0x0                            ; 00593ca5
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593ca7
    PUSH EAX                            ; 00593cad
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00593cae
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593cb3
    JMP 0x005927ee                      ; 00593cb6
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV ECX,dword ptr [EBP + 0x92]      ; 00593cbb
        ;   Label: LAB_00593cbb
    PUSH ECX                            ; 00593cc1
    MOV EBX,dword ptr [EBP + -0x62]     ; 00593cc2
    PUSH EBX                            ; 00593cc5
    LEA EAX,[EBP + 0xfffffc22]          ; 00593cc6
    PUSH EAX                            ; 00593ccc
    PUSH 0x64c771                       ; 00593ccd | = "Duplicate if %s's for animation %s in %s"
    MOV ESI,dword ptr [0x00678a60]      ; 00593cd2 | g_CEditorToolsPtr
    PUSH ESI                            ; 00593cd8 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00593cd9
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00593cde
    PUSH 0x0                            ; 00593ce1
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593ce3
    PUSH EAX                            ; 00593ce9
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00593cea
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593cef
    JMP 0x005927ee                      ; 00593cf2
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xffffdfe6]          ; 00593cf7
        ;   Label: LAB_00593cf7
    PUSH EAX                            ; 00593cfd
    MOV ECX,dword ptr [EBP + 0x92]      ; 00593cfe
    PUSH ECX                            ; 00593d04
    MOV EBX,dword ptr [EBP + -0x62]     ; 00593d05
    PUSH EBX                            ; 00593d08
    LEA EAX,[EBP + 0xfffffc22]          ; 00593d09
    PUSH EAX                            ; 00593d0f
    PUSH 0x64c79a                       ; 00593d10 | = "Invalid transition command in \"if %s..."
    MOV ESI,dword ptr [0x00678a60]      ; 00593d15 | g_CEditorToolsPtr
    PUSH ESI                            ; 00593d1b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00593d1c
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 00593d21
    PUSH 0x0                            ; 00593d24
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593d26
    PUSH EAX                            ; 00593d2c
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00593d2d
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593d32
    JMP 0x005927ee                      ; 00593d35
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV dword ptr [EBP + -0x16],0xffffffff ; 00593d3a
        ;   Label: LAB_00593d3a
    LEA EAX,[EBP + -0x16]               ; 00593d41
    PUSH EAX                            ; 00593d44
    LEA EAX,[EBP + 0xfffff772]          ; 00593d45
    PUSH EAX                            ; 00593d4b
    PUSH 0x64c7e5                       ; 00593d4c | = "\"%[^\"]\"%n"
    PUSH EBX                            ; 00593d51
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00593d52
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EDX,dword ptr [EBP + -0x16]     ; 00593d57
    ADD ESP,0x10                        ; 00593d5a
    TEST EDX,EDX                        ; 00593d5d
    JL 0x00593db8                       ; 00593d5f
        ;   XREF to: 00593db8 (CONDITIONAL_JUMP)  ; LAB_00593db8
    PUSH 0x0                            ; 00593d61
    LEA EAX,[EBP + 0xfffff5e2]          ; 00593d63
    PUSH EAX                            ; 00593d69
    PUSH 0x0                            ; 00593d6a
    PUSH 0x0                            ; 00593d6c
    LEA EAX,[EBP + 0xfffff772]          ; 00593d6e
    PUSH EAX                            ; 00593d74
    CALL crt_string.c_splitpath_FUN_005ff178 ; 00593d75
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00593d7a
    PUSH 0x0                            ; 00593d7d
    LEA EAX,[EBP + 0xfffff5e2]          ; 00593d7f
    PUSH EAX                            ; 00593d85
    MOV ECX,dword ptr [EBP + 0x8e]      ; 00593d86
    PUSH ECX                            ; 00593d8c
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 00593d8d
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00593d92
    MOV dword ptr [EDI + 0x8],EAX       ; 00593d95
    TEST EAX,EAX                        ; 00593d98
    JL 0x00593dfa                       ; 00593d9a
        ;   XREF to: 00593dfa (CONDITIONAL_JUMP)  ; LAB_00593dfa
    ADD EBX,dword ptr [EBP + -0x16]     ; 00593d9c
    MOV AL,byte ptr [EBX]               ; 00593d9f
        ;   Label: LAB_00593d9f
    INC AL                              ; 00593da1
    AND EAX,0xff                        ; 00593da3
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 00593da8 | g_CharacterClassificationTable
    JZ 0x00593e3d                       ; 00593daf
        ;   XREF to: 00593e3d (CONDITIONAL_JUMP)  ; LAB_00593e3d
    INC EBX                             ; 00593db5
    JMP 0x00593d9f                      ; 00593db6
        ;   XREF to: 00593d9f (UNCONDITIONAL_JUMP)  ; LAB_00593d9f
    LEA EAX,[EBP + 0xffffdfe6]          ; 00593db8
        ;   Label: LAB_00593db8
    PUSH EAX                            ; 00593dbe
    MOV ESI,dword ptr [EBP + 0x92]      ; 00593dbf
    PUSH ESI                            ; 00593dc5
    MOV EDI,dword ptr [EBP + -0x62]     ; 00593dc6
    PUSH EDI                            ; 00593dc9
    LEA EAX,[EBP + 0xfffffc22]          ; 00593dca
    PUSH EAX                            ; 00593dd0
    PUSH 0x64c7ef                       ; 00593dd1 | = "Error parsing \"if %s\" statement par..."
    MOV EAX,[0x00678a60]                ; 00593dd6 | g_CEditorToolsPtr
    PUSH EAX                            ; 00593ddb | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00593ddc
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 00593de1
    PUSH 0x0                            ; 00593de4
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593de6
    PUSH EAX                            ; 00593dec
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00593ded
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593df2
    JMP 0x005927ee                      ; 00593df5
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xffffdfe6]          ; 00593dfa
        ;   Label: LAB_00593dfa
    PUSH EAX                            ; 00593e00
    MOV EDX,dword ptr [EBP + 0x92]      ; 00593e01
    PUSH EDX                            ; 00593e07
    MOV ECX,dword ptr [EBP + -0x62]     ; 00593e08
    PUSH ECX                            ; 00593e0b
    LEA EAX,[EBP + 0xfffffc22]          ; 00593e0c
    PUSH EAX                            ; 00593e12
    PUSH 0x64c830                       ; 00593e13 | = "Invalid destination animation for \"i..."
    MOV EBX,dword ptr [0x00678a60]      ; 00593e18 | g_CEditorToolsPtr
    PUSH EBX                            ; 00593e1e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00593e1f
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 00593e24
    PUSH 0x0                            ; 00593e27
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593e29
    PUSH EAX                            ; 00593e2f
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00593e30
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593e35
    JMP 0x005927ee                      ; 00593e38
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV AL,byte ptr [EBX]               ; 00593e3d
        ;   Label: LAB_00593e3d
    MOV ESI,EBX                         ; 00593e3f
    CMP AL,0x5b                         ; 00593e41
    JZ 0x00593eb9                       ; 00593e43
        ;   XREF to: 00593eb9 (CONDITIONAL_JUMP)  ; LAB_00593eb9
    MOV dword ptr [EDI + 0xc],0x0       ; 00593e45
    MOV EAX,dword ptr [EDI + 0x4]       ; 00593e4c
        ;   Label: LAB_00593e4c
    SUB EAX,0x3                         ; 00593e4f
    MOV dword ptr [EDI + 0x10],0x0      ; 00593e52
    CMP EAX,0x3                         ; 00593e59
    JA 0x00593e7d                       ; 00593e5c
        ;   XREF to: 00593e7d (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x59266c]  ; 00593e5e | caseD_5 | switchdataD_0059266c
        ;   Label: switchD
    PUSH 0x4                            ; 00593e65
        ;   Label: caseD_6
    PUSH 0x64c937                       ; 00593e67 | = "over"
    PUSH ESI                            ; 00593e6c
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00593e6d
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00593e72
    TEST EAX,EAX                        ; 00593e75
    JZ 0x00593fc6                       ; 00593e77
        ;   XREF to: 00593fc6 (CONDITIONAL_JUMP)  ; LAB_00593fc6
    PUSH 0x9                            ; 00593e7d
        ;   Label: default
    PUSH 0x64c9d0                       ; 00593e7f | = "keepState"
    PUSH ESI                            ; 00593e84
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00593e85
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00593e8a
    TEST EAX,EAX                        ; 00593e8d
    JNZ 0x005940d7                      ; 00593e8f
        ;   XREF to: 005940d7 (CONDITIONAL_JUMP)  ; LAB_005940d7
    LEA EAX,[ESI + 0x9]                 ; 00593e95
    MOV dword ptr [EDI + 0x14],0x1      ; 00593e98
    MOV BL,byte ptr [EAX]               ; 00593e9f
        ;   Label: LAB_00593e9f
    INC BL                              ; 00593ea1
    AND EBX,0xff                        ; 00593ea3
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 00593ea9 | g_CharacterClassificationTable
    JZ 0x005940bd                       ; 00593eb0
        ;   XREF to: 005940bd (CONDITIONAL_JUMP)  ; LAB_005940bd
    INC EAX                             ; 00593eb6
    JMP 0x00593e9f                      ; 00593eb7
        ;   XREF to: 00593e9f (UNCONDITIONAL_JUMP)  ; LAB_00593e9f
    LEA EAX,[EBP + -0x16]               ; 00593eb9
        ;   Label: LAB_00593eb9
    PUSH EAX                            ; 00593ebc
    LEA EAX,[EBP + 0xfffff902]          ; 00593ebd
    PUSH EAX                            ; 00593ec3
    PUSH 0x64c87f                       ; 00593ec4 | = "[ %[^]] ]%n"
    MOV EDX,0xffffffff                  ; 00593ec9
    PUSH EBX                            ; 00593ece
    MOV dword ptr [EBP + -0x16],EDX     ; 00593ecf
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00593ed2
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ECX,dword ptr [EBP + -0x16]     ; 00593ed7
    ADD ESP,0x10                        ; 00593eda
    TEST ECX,ECX                        ; 00593edd
    JL 0x00593f39                       ; 00593edf
        ;   XREF to: 00593f39 (CONDITIONAL_JUMP)  ; LAB_00593f39
    IMUL EAX,dword ptr [EDI + 0x8],0x54c ; 00593ee1
    ADD EAX,dword ptr [EBP + 0x8e]      ; 00593ee8
    PUSH 0x1                            ; 00593eee
    MOV ECX,dword ptr [EAX + 0x9cc]     ; 00593ef0
    PUSH ECX                            ; 00593ef6
    LEA EAX,[EBP + -0xe]                ; 00593ef7
    PUSH EAX                            ; 00593efa
    LEA EAX,[EBP + 0xfffff902]          ; 00593efb
    PUSH EAX                            ; 00593f01
    CALL core_skeledit.cpp_parseBoneParentToken_FUN_00592520 ; 00593f02
        ;   XREF to: 00592520 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_parseBoneParentToken_FUN_00592520(char * token, int * out_index, int bone_count, int allow_patch)
    ADD ESP,0x10                        ; 00593f07
    TEST EAX,EAX                        ; 00593f0a
    JZ 0x00593f7c                       ; 00593f0c
        ;   XREF to: 00593f7c (CONDITIONAL_JUMP)  ; LAB_00593f7c
    MOV EAX,dword ptr [EBP + -0xe]      ; 00593f0e
    MOV dword ptr [EBP + 0x5e],EAX      ; 00593f11
    FILD dword ptr [EBP + 0x5e]         ; 00593f14
    FSTP float ptr [EDI + 0xc]          ; 00593f17
    MOV EAX,dword ptr [EBP + -0x16]     ; 00593f1a
    ADD EAX,EBX                         ; 00593f1d
    MOV BL,byte ptr [EAX]               ; 00593f1f
        ;   Label: LAB_00593f1f
    INC BL                              ; 00593f21
    AND EBX,0xff                        ; 00593f23
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 00593f29 | g_CharacterClassificationTable
    JZ 0x00593fbf                       ; 00593f30
        ;   XREF to: 00593fbf (CONDITIONAL_JUMP)  ; LAB_00593fbf
    INC EAX                             ; 00593f36
    JMP 0x00593f1f                      ; 00593f37
        ;   XREF to: 00593f1f (UNCONDITIONAL_JUMP)  ; LAB_00593f1f
    LEA EAX,[EBP + 0xffffdfe6]          ; 00593f39
        ;   Label: LAB_00593f39
    PUSH EAX                            ; 00593f3f
    MOV EAX,dword ptr [EBP + 0x92]      ; 00593f40
    PUSH EAX                            ; 00593f46
    MOV EDX,dword ptr [EBP + -0x62]     ; 00593f47
    PUSH EDX                            ; 00593f4a
    LEA EAX,[EBP + 0xfffffc22]          ; 00593f4b
    PUSH EAX                            ; 00593f51
    PUSH 0x64c88b                       ; 00593f52 | = "Can't parse destination frame number ..."
    MOV ECX,dword ptr [0x00678a60]      ; 00593f57 | g_CEditorToolsPtr
    PUSH ECX                            ; 00593f5d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00593f5e
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 00593f63
    PUSH 0x0                            ; 00593f66
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593f68
    PUSH EAX                            ; 00593f6e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00593f6f
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593f74
    JMP 0x005927ee                      ; 00593f77
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xffffdfe6]          ; 00593f7c
        ;   Label: LAB_00593f7c
    PUSH EAX                            ; 00593f82
    MOV EBX,dword ptr [EBP + 0x92]      ; 00593f83
    PUSH EBX                            ; 00593f89
    MOV ESI,dword ptr [EBP + -0x62]     ; 00593f8a
    PUSH ESI                            ; 00593f8d
    LEA EAX,[EBP + 0xfffffc22]          ; 00593f8e
    PUSH EAX                            ; 00593f94
    PUSH 0x64c8e1                       ; 00593f95 | = "Can't parse destination frame number ..."
    MOV EDI,dword ptr [0x00678a60]      ; 00593f9a | g_CEditorToolsPtr
    PUSH EDI                            ; 00593fa0 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00593fa1
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 00593fa6
    PUSH 0x0                            ; 00593fa9
    LEA EAX,[EBP + 0xffffd3e2]          ; 00593fab
    PUSH EAX                            ; 00593fb1
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00593fb2
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00593fb7
    JMP 0x005927ee                      ; 00593fba
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV ESI,EAX                         ; 00593fbf
        ;   Label: LAB_00593fbf
    JMP 0x00593e4c                      ; 00593fc1
        ;   XREF to: 00593e4c (UNCONDITIONAL_JUMP)  ; LAB_00593e4c
    LEA EAX,[EBP + -0x16]               ; 00593fc6
        ;   Label: LAB_00593fc6
    PUSH EAX                            ; 00593fc9
    LEA EAX,[EDI + 0x10]                ; 00593fca
    PUSH EAX                            ; 00593fcd
    PUSH 0x64c93c                       ; 00593fce | = "%*s%f%n"
    MOV EBX,0xffffffff                  ; 00593fd3
    PUSH ESI                            ; 00593fd8
    MOV dword ptr [EBP + -0x16],EBX     ; 00593fd9
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00593fdc
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EAX,dword ptr [EBP + -0x16]     ; 00593fe1
    ADD ESP,0x10                        ; 00593fe4
    TEST EAX,EAX                        ; 00593fe7
    JL 0x00594031                       ; 00593fe9
        ;   XREF to: 00594031 (CONDITIONAL_JUMP)  ; LAB_00594031
    FLDZ                                ; 00593feb
    FLD float ptr [EDI + 0x10]          ; 00593fed
    FSTP double ptr [EBP + 0xffffff66]  ; 00593ff0
    FCOMP double ptr [EBP + 0xffffff66] ; 00593ff6
    FNSTSW AX                           ; 00593ffc
    SAHF                                ; 00593ffe
    JA 0x00594073                       ; 00593fff
        ;   XREF to: 00594073 (CONDITIONAL_JUMP)  ; LAB_00594073
    FLD double ptr [EBP + 0xffffff66]   ; 00594001
    FCOMP double ptr [0x0064d612]       ; 00594007 | DOUBLE_0064d612
    FNSTSW AX                           ; 0059400d
    SAHF                                ; 0059400f
    JA 0x00594073                       ; 00594010
        ;   XREF to: 00594073 (CONDITIONAL_JUMP)  ; LAB_00594073
    MOV EAX,dword ptr [EBP + -0x16]     ; 00594012
    ADD EAX,ESI                         ; 00594015
    MOV BL,byte ptr [EAX]               ; 00594017
        ;   Label: LAB_00594017
    INC BL                              ; 00594019
    AND EBX,0xff                        ; 0059401b
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 00594021 | g_CharacterClassificationTable
    JZ 0x005940b6                       ; 00594028
        ;   XREF to: 005940b6 (CONDITIONAL_JUMP)  ; LAB_005940b6
    INC EAX                             ; 0059402e
    JMP 0x00594017                      ; 0059402f
        ;   XREF to: 00594017 (UNCONDITIONAL_JUMP)  ; LAB_00594017
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594031
        ;   Label: LAB_00594031
    PUSH EAX                            ; 00594037
    MOV ESI,dword ptr [EBP + 0x92]      ; 00594038
    PUSH ESI                            ; 0059403e
    MOV EDI,dword ptr [EBP + -0x62]     ; 0059403f
    PUSH EDI                            ; 00594042
    LEA EAX,[EBP + 0xfffffc22]          ; 00594043
    PUSH EAX                            ; 00594049
    PUSH 0x64c944                       ; 0059404a | = "Can't parse tween time for \"if %s\" ..."
    MOV EAX,[0x00678a60]                ; 0059404f | g_CEditorToolsPtr
    PUSH EAX                            ; 00594054 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594055
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 0059405a
    PUSH 0x0                            ; 0059405d
    LEA EAX,[EBP + 0xffffd3e2]          ; 0059405f
    PUSH EAX                            ; 00594065
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594066
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059406b
    JMP 0x005927ee                      ; 0059406e
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594073
        ;   Label: LAB_00594073
    PUSH EAX                            ; 00594079
    MOV EDX,dword ptr [EBP + 0x92]      ; 0059407a
    PUSH EDX                            ; 00594080
    MOV ECX,dword ptr [EBP + -0x62]     ; 00594081
    PUSH ECX                            ; 00594084
    LEA EAX,[EBP + 0xfffffc22]          ; 00594085
    PUSH EAX                            ; 0059408b
    PUSH 0x64c98c                       ; 0059408c | = "Invalid tween time for \"if %s\" stat..."
    MOV EBX,dword ptr [0x00678a60]      ; 00594091 | g_CEditorToolsPtr
    PUSH EBX                            ; 00594097 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594098
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 0059409d
    PUSH 0x0                            ; 005940a0
    LEA EAX,[EBP + 0xffffd3e2]          ; 005940a2
    PUSH EAX                            ; 005940a8
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005940a9
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005940ae
    JMP 0x005927ee                      ; 005940b1
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV ESI,EAX                         ; 005940b6
        ;   Label: LAB_005940b6
    JMP 0x00593e7d                      ; 005940b8
        ;   XREF to: 00593e7d (UNCONDITIONAL_JUMP)  ; default
    MOV ESI,EAX                         ; 005940bd
        ;   Label: LAB_005940bd
    MOV EAX,ESI                         ; 005940bf
        ;   Label: LAB_005940bf
    MOV BL,byte ptr [EAX]               ; 005940c1
        ;   Label: LAB_005940c1
    INC BL                              ; 005940c3
    AND EBX,0xff                        ; 005940c5
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 005940cb | g_CharacterClassificationTable
    JZ 0x005940e0                       ; 005940d2
        ;   XREF to: 005940e0 (CONDITIONAL_JUMP)  ; LAB_005940e0
    INC EAX                             ; 005940d4
    JMP 0x005940c1                      ; 005940d5
        ;   XREF to: 005940c1 (UNCONDITIONAL_JUMP)  ; LAB_005940c1
    MOV dword ptr [EDI + 0x14],0x0      ; 005940d7
        ;   Label: LAB_005940d7
    JMP 0x005940bf                      ; 005940de
        ;   XREF to: 005940bf (UNCONDITIONAL_JUMP)  ; LAB_005940bf
    CMP byte ptr [EAX],0x0              ; 005940e0
        ;   Label: LAB_005940e0
    JNZ 0x005940f0                      ; 005940e3
        ;   XREF to: 005940f0 (CONDITIONAL_JUMP)  ; LAB_005940f0
    MOV EAX,dword ptr [EBP + -0x62]     ; 005940e5
    INC dword ptr [EAX + 0x68]          ; 005940e8
    JMP 0x00595356                      ; 005940eb
        ;   XREF to: 00595356 (UNCONDITIONAL_JUMP)  ; LAB_00595356
    PUSH EAX                            ; 005940f0
        ;   Label: LAB_005940f0
    LEA EAX,[EBP + 0xffffdfe6]          ; 005940f1
    PUSH EAX                            ; 005940f7
    MOV ECX,dword ptr [EBP + 0x92]      ; 005940f8
    PUSH ECX                            ; 005940fe
    MOV EBX,dword ptr [EBP + -0x62]     ; 005940ff
    PUSH EBX                            ; 00594102
    LEA EAX,[EBP + 0xfffffc22]          ; 00594103
    PUSH EAX                            ; 00594109
    PUSH 0x64c9da                       ; 0059410a | = "Extra parms in \"if %s\" statement fo..."
    MOV ESI,dword ptr [0x00678a60]      ; 0059410f | g_CEditorToolsPtr
    PUSH ESI                            ; 00594115 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594116
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x1c                        ; 0059411b
    PUSH 0x0                            ; 0059411e
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594120
    PUSH EAX                            ; 00594126
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594127
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059412c
    JMP 0x005927ee                      ; 0059412f
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    PUSH 0x2                            ; 00594134
        ;   Label: LAB_00594134
    PUSH 0x64ca28                       ; 00594136 | = "->"
    LEA EAX,[EBP + 0xffffdfe6]          ; 0059413b
    PUSH EAX                            ; 00594141
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00594142
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00594147
    TEST EAX,EAX                        ; 0059414a
    JNZ 0x00594718                      ; 0059414c
        ;   XREF to: 00594718 (CONDITIONAL_JUMP)  ; LAB_00594718
    LEA EBX,[EBP + 0xffffdfe8]          ; 00594152
    MOV AL,byte ptr [EBX]               ; 00594158
        ;   Label: LAB_00594158
    INC AL                              ; 0059415a
    AND EAX,0xff                        ; 0059415c
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 00594161 | g_CharacterClassificationTable
    JZ 0x0059416d                       ; 00594168
        ;   XREF to: 0059416d (CONDITIONAL_JUMP)  ; LAB_0059416d
    INC EBX                             ; 0059416a
    JMP 0x00594158                      ; 0059416b
        ;   XREF to: 00594158 (UNCONDITIONAL_JUMP)  ; LAB_00594158
    PUSH 0x6                            ; 0059416d
        ;   Label: LAB_0059416d
    PUSH 0x64ca2b                       ; 0059416f | = "(loop)"
    PUSH EBX                            ; 00594174
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00594175
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0059417a
    LEA ESI,[EBX + 0x6]                 ; 0059417d
    TEST EAX,EAX                        ; 00594180
    JNZ 0x005941ca                      ; 00594182
        ;   XREF to: 005941ca (CONDITIONAL_JUMP)  ; LAB_005941ca
    MOV EDX,dword ptr [EBP + -0x62]     ; 00594184
    MOV EAX,dword ptr [EBP + 0x52]      ; 00594187
    MOV dword ptr [EDX + 0x38],0x0      ; 0059418a
    MOV dword ptr [EDX + 0x34],EAX      ; 00594191
    MOV EAX,ESI                         ; 00594194
    MOV BL,byte ptr [EAX]               ; 00594196
        ;   Label: LAB_00594196
    INC BL                              ; 00594198
    AND EBX,0xff                        ; 0059419a
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 005941a0 | g_CharacterClassificationTable
    JZ 0x005941ac                       ; 005941a7
        ;   XREF to: 005941ac (CONDITIONAL_JUMP)  ; LAB_005941ac
    INC EAX                             ; 005941a9
    JMP 0x00594196                      ; 005941aa
        ;   XREF to: 00594196 (UNCONDITIONAL_JUMP)  ; LAB_00594196
    MOV ESI,EAX                         ; 005941ac
        ;   Label: LAB_005941ac
    MOV EAX,ESI                         ; 005941ae
        ;   Label: LAB_005941ae
    MOV BL,byte ptr [EAX]               ; 005941b0
        ;   Label: LAB_005941b0
    INC BL                              ; 005941b2
    AND EBX,0xff                        ; 005941b4
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 005941ba | g_CharacterClassificationTable
    JZ 0x005946d2                       ; 005941c1
        ;   XREF to: 005946d2 (CONDITIONAL_JUMP)  ; LAB_005946d2
    INC EAX                             ; 005941c7
    JMP 0x005941b0                      ; 005941c8
        ;   XREF to: 005941b0 (UNCONDITIONAL_JUMP)  ; LAB_005941b0
    PUSH 0x6                            ; 005941ca
        ;   Label: LAB_005941ca
    PUSH 0x64ca32                       ; 005941cc | = "(stop)"
    PUSH EBX                            ; 005941d1
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 005941d2
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005941d7
    TEST EAX,EAX                        ; 005941da
    JNZ 0x0059420c                      ; 005941dc
        ;   XREF to: 0059420c (CONDITIONAL_JUMP)  ; LAB_0059420c
    MOV EDX,dword ptr [EBP + -0x62]     ; 005941de
    MOV EAX,dword ptr [EBP + 0x52]      ; 005941e1
    MOV dword ptr [EDX + 0x34],EAX      ; 005941e4
    MOV EAX,dword ptr [EDX + 0x64]      ; 005941e7
    DEC EAX                             ; 005941ea
    MOV dword ptr [EBP + 0x5e],EAX      ; 005941eb
    FILD dword ptr [EBP + 0x5e]         ; 005941ee
    MOV EAX,ESI                         ; 005941f1
    FSTP float ptr [EDX + 0x38]         ; 005941f3
    MOV BL,byte ptr [EAX]               ; 005941f6
        ;   Label: LAB_005941f6
    INC BL                              ; 005941f8
    AND EBX,0xff                        ; 005941fa
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 00594200 | g_CharacterClassificationTable
    JZ 0x005941ac                       ; 00594207
        ;   XREF to: 005941ac (CONDITIONAL_JUMP)  ; LAB_005941ac
    INC EAX                             ; 00594209
    JMP 0x005941f6                      ; 0059420a
        ;   XREF to: 005941f6 (UNCONDITIONAL_JUMP)  ; LAB_005941f6
    LEA EAX,[EBP + 0x26]                ; 0059420c
        ;   Label: LAB_0059420c
    PUSH EAX                            ; 0059420f
    LEA EAX,[EBP + 0xfffff51a]          ; 00594210
    PUSH EAX                            ; 00594216
    PUSH 0x64ca39                       ; 00594217 | = " \"%[^\"]\" %n"
    MOV ECX,0xffffffff                  ; 0059421c
    PUSH EBX                            ; 00594221
    MOV dword ptr [EBP + 0x26],ECX      ; 00594222
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00594225
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ESI,dword ptr [EBP + 0x26]      ; 0059422a
    ADD ESP,0x10                        ; 0059422d
    TEST ESI,ESI                        ; 00594230
    JL 0x0059428a                       ; 00594232
        ;   XREF to: 0059428a (CONDITIONAL_JUMP)  ; LAB_0059428a
    PUSH 0x0                            ; 00594234
    LEA EAX,[EBP + 0xfffff6aa]          ; 00594236
    PUSH EAX                            ; 0059423c
    PUSH 0x0                            ; 0059423d
    PUSH 0x0                            ; 0059423f
    LEA EAX,[EBP + 0xfffff51a]          ; 00594241
    PUSH EAX                            ; 00594247
    CALL crt_string.c_splitpath_FUN_005ff178 ; 00594248
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0059424d
    PUSH 0x0                            ; 00594250
    LEA EAX,[EBP + 0xfffff6aa]          ; 00594252
    PUSH EAX                            ; 00594258
    MOV EDI,dword ptr [EBP + 0x8e]      ; 00594259
    PUSH EDI                            ; 0059425f
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 00594260
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    MOV EDX,dword ptr [EBP + -0x62]     ; 00594265
    ADD ESP,0xc                         ; 00594268
    MOV dword ptr [EDX + 0x34],EAX      ; 0059426b
    TEST EAX,EAX                        ; 0059426e
    JL 0x005942c6                       ; 00594270
        ;   XREF to: 005942c6 (CONDITIONAL_JUMP)  ; LAB_005942c6
    ADD EBX,dword ptr [EBP + 0x26]      ; 00594272
    MOV AL,byte ptr [EBX]               ; 00594275
        ;   Label: LAB_00594275
    INC AL                              ; 00594277
    AND EAX,0xff                        ; 00594279
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 0059427e | g_CharacterClassificationTable
    JZ 0x005942ff                       ; 00594285
        ;   XREF to: 005942ff (CONDITIONAL_JUMP)  ; LAB_005942ff
    INC EBX                             ; 00594287
    JMP 0x00594275                      ; 00594288
        ;   XREF to: 00594275 (UNCONDITIONAL_JUMP)  ; LAB_00594275
    LEA EAX,[EBP + 0xffffdfe6]          ; 0059428a
        ;   Label: LAB_0059428a
    PUSH EAX                            ; 00594290
    MOV EAX,dword ptr [EBP + 0x92]      ; 00594291
    PUSH EAX                            ; 00594297
    MOV EDX,dword ptr [EBP + -0x62]     ; 00594298
    PUSH EDX                            ; 0059429b
    PUSH 0x64ca45                       ; 0059429c | = "Error parsing \"->\" statement parms ..."
    MOV ECX,dword ptr [0x00678a60]      ; 005942a1 | g_CEditorToolsPtr
    PUSH ECX                            ; 005942a7 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005942a8
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 005942ad
    PUSH 0x0                            ; 005942b0
    LEA EAX,[EBP + 0xffffd3e2]          ; 005942b2
    PUSH EAX                            ; 005942b8
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005942b9
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005942be
    JMP 0x005927ee                      ; 005942c1
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xffffdfe6]          ; 005942c6
        ;   Label: LAB_005942c6
    PUSH EAX                            ; 005942cc
    MOV EBX,dword ptr [EBP + 0x92]      ; 005942cd
    PUSH EBX                            ; 005942d3
    PUSH EDX                            ; 005942d4
    PUSH 0x64ca83                       ; 005942d5 | = "Invalid destination animation for \"-..."
    MOV EDI,dword ptr [0x00678a60]      ; 005942da | g_CEditorToolsPtr
    PUSH EDI                            ; 005942e0 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005942e1
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 005942e6
    PUSH 0x0                            ; 005942e9
    LEA EAX,[EBP + 0xffffd3e2]          ; 005942eb
    PUSH EAX                            ; 005942f1
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005942f2
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005942f7
    JMP 0x005927ee                      ; 005942fa
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV CH,byte ptr [EBX]               ; 005942ff
        ;   Label: LAB_005942ff
    MOV ESI,EBX                         ; 00594301
    CMP CH,0x5b                         ; 00594303
    JZ 0x00594388                       ; 00594306
        ;   XREF to: 00594388 (CONDITIONAL_JUMP)  ; LAB_00594388
    MOV EAX,dword ptr [EBP + -0x62]     ; 0059430c
    MOV dword ptr [EAX + 0x38],0x0      ; 0059430f
    CMP byte ptr [ESI],0x0              ; 00594316
        ;   Label: LAB_00594316
    JZ 0x005941ae                       ; 00594319
        ;   XREF to: 005941ae (CONDITIONAL_JUMP)  ; LAB_005941ae
    LEA EAX,[EBP + 0x26]                ; 0059431f
    PUSH EAX                            ; 00594322
    LEA EAX,[EBP + 0xfffffdd6]          ; 00594323
    PUSH EAX                            ; 00594329
    PUSH 0x64cb81                       ; 0059432a | = "%s%n"
    MOV EDI,0xffffffff                  ; 0059432f
    PUSH ESI                            ; 00594334
    MOV dword ptr [EBP + 0x26],EDI      ; 00594335
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00594338
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EAX,dword ptr [EBP + 0x26]      ; 0059433d
    ADD ESP,0x10                        ; 00594340
    CMP EAX,0x1                         ; 00594343
    JL 0x0059448d                       ; 00594346
        ;   XREF to: 0059448d (CONDITIONAL_JUMP)  ; LAB_0059448d
    LEA EAX,[EBP + 0xfffffdd6]          ; 0059434c
        ;   Label: LAB_0059434c
    PUSH EAX                            ; 00594352
    CALL core_skeledit.cpp_parseTransitionType_FUN_005925c0 ; 00594353
        ;   XREF to: 005925c0 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_parseTransitionType_FUN_005925c0(char * type_name)
    ADD ESP,0x4                         ; 00594358
    TEST EAX,EAX                        ; 0059435b
    JZ 0x005944f1                       ; 0059435d
        ;   XREF to: 005944f1 (CONDITIONAL_JUMP)  ; default
    MOV EDX,dword ptr [EBP + -0x62]     ; 00594363
    MOV dword ptr [EDX + 0x30],EAX      ; 00594366
    MOV EAX,dword ptr [EBP + 0x26]      ; 00594369
    ADD EAX,ESI                         ; 0059436c
    MOV BL,byte ptr [EAX]               ; 0059436e
        ;   Label: LAB_0059436e
    INC BL                              ; 00594370
    AND EBX,0xff                        ; 00594372
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 00594378 | g_CharacterClassificationTable
    JZ 0x005944b5                       ; 0059437f
        ;   XREF to: 005944b5 (CONDITIONAL_JUMP)  ; LAB_005944b5
    INC EAX                             ; 00594385
    JMP 0x0059436e                      ; 00594386
        ;   XREF to: 0059436e (UNCONDITIONAL_JUMP)  ; LAB_0059436e
    LEA EAX,[EBP + 0x26]                ; 00594388
        ;   Label: LAB_00594388
    PUSH EAX                            ; 0059438b
    LEA EAX,[EBP + 0xfffffa92]          ; 0059438c
    PUSH EAX                            ; 00594392
    PUSH 0x64cacf                       ; 00594393 | = "[ %[^]] ]%n"
    MOV ESI,0xffffffff                  ; 00594398
    PUSH EBX                            ; 0059439d
    MOV dword ptr [EBP + 0x26],ESI      ; 0059439e
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005943a1
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EDI,dword ptr [EBP + 0x26]      ; 005943a6
    ADD ESP,0x10                        ; 005943a9
    TEST EDI,EDI                        ; 005943ac
    JL 0x0059440e                       ; 005943ae
        ;   XREF to: 0059440e (CONDITIONAL_JUMP)  ; LAB_0059440e
    MOV EAX,dword ptr [EBP + -0x62]     ; 005943b0
    IMUL EAX,dword ptr [EAX + 0x34],0x54c ; 005943b3
    ADD EAX,dword ptr [EBP + 0x8e]      ; 005943ba
    PUSH 0x1                            ; 005943c0
    MOV ESI,dword ptr [EAX + 0x9cc]     ; 005943c2
    PUSH ESI                            ; 005943c8
    LEA EAX,[EBP + -0x6]                ; 005943c9
    PUSH EAX                            ; 005943cc
    LEA EAX,[EBP + 0xfffffa92]          ; 005943cd
    PUSH EAX                            ; 005943d3
    CALL core_skeledit.cpp_parseBoneParentToken_FUN_00592520 ; 005943d4
        ;   XREF to: 00592520 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_parseBoneParentToken_FUN_00592520(char * token, int * out_index, int bone_count, int allow_patch)
    ADD ESP,0x10                        ; 005943d9
    TEST EAX,EAX                        ; 005943dc
    JZ 0x0059444a                       ; 005943de
        ;   XREF to: 0059444a (CONDITIONAL_JUMP)  ; LAB_0059444a
    MOV EAX,dword ptr [EBP + -0x6]      ; 005943e0
    MOV dword ptr [EBP + 0x5e],EAX      ; 005943e3
    MOV EAX,dword ptr [EBP + -0x62]     ; 005943e6
    FILD dword ptr [EBP + 0x5e]         ; 005943e9
    FSTP float ptr [EAX + 0x38]         ; 005943ec
    MOV EAX,dword ptr [EBP + 0x26]      ; 005943ef
    ADD EAX,EBX                         ; 005943f2
    MOV BL,byte ptr [EAX]               ; 005943f4
        ;   Label: LAB_005943f4
    INC BL                              ; 005943f6
    AND EBX,0xff                        ; 005943f8
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 005943fe | g_CharacterClassificationTable
    JZ 0x00594486                       ; 00594405
        ;   XREF to: 00594486 (CONDITIONAL_JUMP)  ; LAB_00594486
    INC EAX                             ; 0059440b
    JMP 0x005943f4                      ; 0059440c
        ;   XREF to: 005943f4 (UNCONDITIONAL_JUMP)  ; LAB_005943f4
    LEA EAX,[EBP + 0xffffdfe6]          ; 0059440e
        ;   Label: LAB_0059440e
    PUSH EAX                            ; 00594414
    MOV ECX,dword ptr [EBP + 0x92]      ; 00594415
    PUSH ECX                            ; 0059441b
    MOV EBX,dword ptr [EBP + -0x62]     ; 0059441c
    PUSH EBX                            ; 0059441f
    PUSH 0x64cadb                       ; 00594420 | = "Can't parse destination frame number ..."
    MOV ESI,dword ptr [0x00678a60]      ; 00594425 | g_CEditorToolsPtr
    PUSH ESI                            ; 0059442b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0059442c
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00594431
    PUSH 0x0                            ; 00594434
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594436
    PUSH EAX                            ; 0059443c
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0059443d
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594442
    JMP 0x005927ee                      ; 00594445
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xffffdfe6]          ; 0059444a
        ;   Label: LAB_0059444a
    PUSH EAX                            ; 00594450
    MOV EDI,dword ptr [EBP + 0x92]      ; 00594451
    PUSH EDI                            ; 00594457
    MOV EAX,dword ptr [EBP + -0x62]     ; 00594458
    PUSH EAX                            ; 0059445b
    PUSH 0x64cb2e                       ; 0059445c | = "Can't parse destination frame number ..."
    MOV EDX,dword ptr [0x00678a60]      ; 00594461 | g_CEditorToolsPtr
    PUSH EDX                            ; 00594467 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594468
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 0059446d
    PUSH 0x0                            ; 00594470
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594472
    PUSH EAX                            ; 00594478
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594479
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059447e
    JMP 0x005927ee                      ; 00594481
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV ESI,EAX                         ; 00594486
        ;   Label: LAB_00594486
    JMP 0x00594316                      ; 00594488
        ;   XREF to: 00594316 (UNCONDITIONAL_JUMP)  ; LAB_00594316
    MOV EDX,0x64cb86                    ; 0059448d | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0059448d
    MOV ECX,0x129f                      ; 00594492
    PUSH 0x64cb9b                       ; 00594497 | = "Hell froze!"
    MOV dword ptr [0x02f0ca48],EDX      ; 0059449c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005944a2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005944a8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005944ad
    JMP 0x0059434c                      ; 005944b0
        ;   XREF to: 0059434c (UNCONDITIONAL_JUMP)  ; LAB_0059434c
    MOV ESI,EAX                         ; 005944b5
        ;   Label: LAB_005944b5
    MOV EAX,dword ptr [EBP + -0x62]     ; 005944b7
    CMP dword ptr [EAX + 0x30],0x2      ; 005944ba
    JZ 0x00594530                       ; 005944be
        ;   XREF to: 00594530 (CONDITIONAL_JUMP)  ; LAB_00594530
    MOV dword ptr [EAX + 0x3c],0x0      ; 005944c0
    MOV EAX,dword ptr [EAX + 0x30]      ; 005944c7
    SUB EAX,0x3                         ; 005944ca
    CMP EAX,0x3                         ; 005944cd
    JA 0x005944f1                       ; 005944d0
        ;   XREF to: 005944f1 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x59267c]  ; 005944d2 | caseD_5 | switchdataD_0059267c
        ;   Label: switchD
    PUSH 0x4                            ; 005944d9
        ;   Label: caseD_6
    PUSH 0x64cbef                       ; 005944db | = "over"
    PUSH ESI                            ; 005944e0
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 005944e1
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005944e6
    TEST EAX,EAX                        ; 005944e9
    JZ 0x0059456c                       ; 005944eb
        ;   XREF to: 0059456c (CONDITIONAL_JUMP)  ; LAB_0059456c
    PUSH 0x9                            ; 005944f1
        ;   Label: default
    PUSH 0x64ccd8                       ; 005944f3 | = "keepState"
    PUSH ESI                            ; 005944f8
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 005944f9
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005944fe
    TEST EAX,EAX                        ; 00594501
    JNZ 0x005946c3                      ; 00594503
        ;   XREF to: 005946c3 (CONDITIONAL_JUMP)  ; LAB_005946c3
    MOV EAX,dword ptr [EBP + -0x62]     ; 00594509
    MOV dword ptr [EAX + 0x40],0x1      ; 0059450c
    LEA EAX,[ESI + 0x9]                 ; 00594513
    MOV BL,byte ptr [EAX]               ; 00594516
        ;   Label: LAB_00594516
    INC BL                              ; 00594518
    AND EBX,0xff                        ; 0059451a
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 00594520 | g_CharacterClassificationTable
    JZ 0x005941ac                       ; 00594527
        ;   XREF to: 005941ac (CONDITIONAL_JUMP)  ; LAB_005941ac
    INC EAX                             ; 0059452d
    JMP 0x00594516                      ; 0059452e
        ;   XREF to: 00594516 (UNCONDITIONAL_JUMP)  ; LAB_00594516
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594530
        ;   Label: LAB_00594530
    PUSH EAX                            ; 00594536
    MOV ECX,dword ptr [EBP + 0x92]      ; 00594537
    PUSH ECX                            ; 0059453d
    MOV EBX,dword ptr [EBP + -0x62]     ; 0059453e
    PUSH EBX                            ; 00594541
    PUSH 0x64cba7                       ; 00594542 | = "Invalid transition command in \"->\" ..."
    MOV ESI,dword ptr [0x00678a60]      ; 00594547 | g_CEditorToolsPtr
    PUSH ESI                            ; 0059454d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0059454e
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00594553
    PUSH 0x0                            ; 00594556
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594558
    PUSH EAX                            ; 0059455e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0059455f
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594564
    JMP 0x005927ee                      ; 00594567
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0x26]                ; 0059456c
        ;   Label: LAB_0059456c
    PUSH EAX                            ; 0059456f
    MOV EAX,dword ptr [EBP + -0x2]      ; 00594570
    PUSH EAX                            ; 00594573
    PUSH 0x64cbf4                       ; 00594574 | = "%*s%f%n"
    MOV EDI,0xffffffff                  ; 00594579
    PUSH ESI                            ; 0059457e
    MOV dword ptr [EBP + 0x26],EDI      ; 0059457f
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00594582
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EDX,dword ptr [EBP + 0x26]      ; 00594587
    ADD ESP,0x10                        ; 0059458a
    TEST EDX,EDX                        ; 0059458d
    JL 0x005945d8                       ; 0059458f
        ;   XREF to: 005945d8 (CONDITIONAL_JUMP)  ; LAB_005945d8
    MOV EAX,dword ptr [EBP + -0x62]     ; 00594591
    FLDZ                                ; 00594594
    FLD float ptr [EAX + 0x3c]          ; 00594596
    FSTP double ptr [EBP + 0xffffff5e]  ; 00594599
    FCOMP double ptr [EBP + 0xffffff5e] ; 0059459f
    FNSTSW AX                           ; 005945a5
    SAHF                                ; 005945a7
    JA 0x00594614                       ; 005945a8
        ;   XREF to: 00594614 (CONDITIONAL_JUMP)  ; LAB_00594614
    FLD double ptr [EBP + 0xffffff5e]   ; 005945aa
    FCOMP double ptr [0x0064d612]       ; 005945b0 | DOUBLE_0064d612
    FNSTSW AX                           ; 005945b6
    SAHF                                ; 005945b8
    JA 0x00594614                       ; 005945b9
        ;   XREF to: 00594614 (CONDITIONAL_JUMP)  ; LAB_00594614
    LEA EAX,[EDX + ESI*0x1]             ; 005945bb
    MOV BL,byte ptr [EAX]               ; 005945be
        ;   Label: LAB_005945be
    INC BL                              ; 005945c0
    AND EBX,0xff                        ; 005945c2
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 005945c8 | g_CharacterClassificationTable
    JZ 0x00594650                       ; 005945cf
        ;   XREF to: 00594650 (CONDITIONAL_JUMP)  ; LAB_00594650
    INC EAX                             ; 005945d5
    JMP 0x005945be                      ; 005945d6
        ;   XREF to: 005945be (UNCONDITIONAL_JUMP)  ; LAB_005945be
    LEA EAX,[EBP + 0xffffdfe6]          ; 005945d8
        ;   Label: LAB_005945d8
    PUSH EAX                            ; 005945de
    MOV EDI,dword ptr [EBP + 0x92]      ; 005945df
    PUSH EDI                            ; 005945e5
    MOV EAX,dword ptr [EBP + -0x62]     ; 005945e6
    PUSH EAX                            ; 005945e9
    PUSH 0x64cbfc                       ; 005945ea | = "Can't parse tween time for \"->\" sta..."
    MOV EDX,dword ptr [0x00678a60]      ; 005945ef | g_CEditorToolsPtr
    PUSH EDX                            ; 005945f5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005945f6
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 005945fb
    PUSH 0x0                            ; 005945fe
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594600
    PUSH EAX                            ; 00594606
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594607
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059460c
    JMP 0x005927ee                      ; 0059460f
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594614
        ;   Label: LAB_00594614
    PUSH EAX                            ; 0059461a
    MOV ECX,dword ptr [EBP + 0x92]      ; 0059461b
    PUSH ECX                            ; 00594621
    MOV EBX,dword ptr [EBP + -0x62]     ; 00594622
    PUSH EBX                            ; 00594625
    PUSH 0x64cc41                       ; 00594626 | = "Invalid tween time for \"->\" stateme..."
    MOV ESI,dword ptr [0x00678a60]      ; 0059462b | g_CEditorToolsPtr
    PUSH ESI                            ; 00594631 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594632
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00594637
    PUSH 0x0                            ; 0059463a
    LEA EAX,[EBP + 0xffffd3e2]          ; 0059463c
    PUSH EAX                            ; 00594642
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594643
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594648
    JMP 0x005927ee                      ; 0059464b
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV ESI,EAX                         ; 00594650
        ;   Label: LAB_00594650
    MOV EAX,dword ptr [EBP + -0x62]     ; 00594652
    MOV EDI,dword ptr [EAX + 0x30]      ; 00594655
    CMP EDI,0x5                         ; 00594658
    JNZ 0x005946b9                      ; 0059465b
        ;   XREF to: 005946b9 (CONDITIONAL_JUMP)  ; LAB_005946b9
    MOV EAX,dword ptr [EBP + -0x62]     ; 0059465d
        ;   Label: LAB_0059465d
    FLD float ptr [EAX + 0x3c]          ; 00594660
    FMUL float ptr [EAX + 0x20]         ; 00594663
    FILD dword ptr [EAX + 0x64]         ; 00594666
    FSUBRP                              ; 00594669
    CALL crt_math.c_round_FUN_005fe6b0  ; 0059466b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EAX + 0x28]        ; 00594670
    CMP dword ptr [EAX + 0x28],0x0      ; 00594673
    JGE 0x005944f1                      ; 00594677
        ;   XREF to: 005944f1 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0xffffdfe6]          ; 0059467d
    PUSH EAX                            ; 00594683
    MOV EBX,dword ptr [EBP + 0x92]      ; 00594684
    PUSH EBX                            ; 0059468a
    MOV ESI,dword ptr [EBP + -0x62]     ; 0059468b
    PUSH ESI                            ; 0059468e
    PUSH 0x64cc82                       ; 0059468f | = "Tween time for \"->\" statement is lo..."
    MOV EDI,dword ptr [0x00678a60]      ; 00594694 | g_CEditorToolsPtr
    PUSH EDI                            ; 0059469a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0059469b
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 005946a0
    PUSH 0x0                            ; 005946a3
    LEA EAX,[EBP + 0xffffd3e2]          ; 005946a5
    PUSH EAX                            ; 005946ab
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005946ac
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005946b1
    JMP 0x005927ee                      ; 005946b4
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    CMP EDI,0x6                         ; 005946b9
        ;   Label: LAB_005946b9
    JZ 0x0059465d                       ; 005946bc
        ;   XREF to: 0059465d (CONDITIONAL_JUMP)  ; LAB_0059465d
    JMP 0x005944f1                      ; 005946be
        ;   XREF to: 005944f1 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + -0x62]     ; 005946c3
        ;   Label: LAB_005946c3
    MOV dword ptr [EAX + 0x40],0x0      ; 005946c6
    JMP 0x005941ae                      ; 005946cd
        ;   XREF to: 005941ae (UNCONDITIONAL_JUMP)  ; LAB_005941ae
    CMP byte ptr [EAX],0x0              ; 005946d2
        ;   Label: LAB_005946d2
    JZ 0x00595356                       ; 005946d5
        ;   XREF to: 00595356 (CONDITIONAL_JUMP)  ; LAB_00595356
    PUSH EAX                            ; 005946db
    LEA EAX,[EBP + 0xffffdfe6]          ; 005946dc
    PUSH EAX                            ; 005946e2
    MOV EAX,dword ptr [EBP + 0x92]      ; 005946e3
    PUSH EAX                            ; 005946e9
    MOV EDX,dword ptr [EBP + -0x62]     ; 005946ea
    PUSH EDX                            ; 005946ed
    PUSH 0x64cce2                       ; 005946ee | = "Extra parms in \"->\" statement for a..."
    MOV ECX,dword ptr [0x00678a60]      ; 005946f3 | g_CEditorToolsPtr
    PUSH ECX                            ; 005946f9 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005946fa
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 005946ff
    PUSH 0x0                            ; 00594702
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594704
    PUSH EAX                            ; 0059470a
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0059470b
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594710
    JMP 0x005927ee                      ; 00594713
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    PUSH 0x6                            ; 00594718
        ;   Label: LAB_00594718
    PUSH 0x64cd2d                       ; 0059471a | = "signal"
    LEA EAX,[EBP + 0xffffdfe6]          ; 0059471f
    PUSH EAX                            ; 00594725
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00594726
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0059472b
    TEST EAX,EAX                        ; 0059472e
    JNZ 0x005948c2                      ; 00594730
        ;   XREF to: 005948c2 (CONDITIONAL_JUMP)  ; LAB_005948c2
    LEA EAX,[EBP + 0xffffdfec]          ; 00594736
    MOV BL,byte ptr [EAX]               ; 0059473c
        ;   Label: LAB_0059473c
    INC BL                              ; 0059473e
    AND EBX,0xff                        ; 00594740
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 00594746 | g_CharacterClassificationTable
    JZ 0x00594752                       ; 0059474d
        ;   XREF to: 00594752 (CONDITIONAL_JUMP)  ; LAB_00594752
    INC EAX                             ; 0059474f
    JMP 0x0059473c                      ; 00594750
        ;   XREF to: 0059473c (UNCONDITIONAL_JUMP)  ; LAB_0059473c
    MOV EDX,dword ptr [EBP + -0x62]     ; 00594752
        ;   Label: LAB_00594752
    CMP dword ptr [EDX + 0x4a4],0xf     ; 00594755
    JL 0x00594792                       ; 0059475c
        ;   XREF to: 00594792 (CONDITIONAL_JUMP)  ; LAB_00594792
    PUSH 0xf                            ; 0059475e
    MOV EDI,dword ptr [EBP + 0x92]      ; 00594760
    PUSH EDI                            ; 00594766
    PUSH EDX                            ; 00594767
    PUSH 0x64cd34                       ; 00594768 | = "Too many signals in animation %s in %..."
    MOV EDX,dword ptr [0x00678a60]      ; 0059476d | g_CEditorToolsPtr
    PUSH EDX                            ; 00594773 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594774
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00594779
    PUSH 0x0                            ; 0059477c
    LEA EAX,[EBP + 0xffffd3e2]          ; 0059477e
    PUSH EAX                            ; 00594784
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594785
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059478a
    JMP 0x005927ee                      ; 0059478d
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EDX,[EBP + 0xfffff89e]          ; 00594792
        ;   Label: LAB_00594792
    PUSH EDX                            ; 00594798
    LEA EDX,[EBP + 0x2]                 ; 00594799
    PUSH EDX                            ; 0059479c
    PUSH 0x64cd66                       ; 0059479d | = "%d %*s %s"
    PUSH EAX                            ; 005947a2
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005947a3
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 005947a8
    CMP EAX,0x2                         ; 005947ab
    JZ 0x005947ec                       ; 005947ae
        ;   XREF to: 005947ec (CONDITIONAL_JUMP)  ; LAB_005947ec
    LEA EAX,[EBP + 0xffffdfe6]          ; 005947b0
    PUSH EAX                            ; 005947b6
    MOV ECX,dword ptr [EBP + 0x92]      ; 005947b7
    PUSH ECX                            ; 005947bd
    MOV EBX,dword ptr [EBP + -0x62]     ; 005947be
    PUSH EBX                            ; 005947c1
    PUSH 0x64cd70                       ; 005947c2 | = "Error parsing \"signal\" statement fo..."
    MOV ESI,dword ptr [0x00678a60]      ; 005947c7 | g_CEditorToolsPtr
    PUSH ESI                            ; 005947cd | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005947ce
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 005947d3
    PUSH 0x0                            ; 005947d6
    LEA EAX,[EBP + 0xffffd3e2]          ; 005947d8
    PUSH EAX                            ; 005947de
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005947df
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005947e4
    JMP 0x005927ee                      ; 005947e7
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV EAX,dword ptr [EBP + -0x62]     ; 005947ec
        ;   Label: LAB_005947ec
    PUSH 0x0                            ; 005947ef
    MOV ESI,dword ptr [EAX + 0x64]      ; 005947f1
    PUSH ESI                            ; 005947f4
    LEA EAX,[EBP + 0x6]                 ; 005947f5
    PUSH EAX                            ; 005947f8
    LEA EAX,[EBP + 0xfffff89e]          ; 005947f9
    PUSH EAX                            ; 005947ff
    CALL core_skeledit.cpp_parseBoneParentToken_FUN_00592520 ; 00594800
        ;   XREF to: 00592520 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_parseBoneParentToken_FUN_00592520(char * token, int * out_index, int bone_count, int allow_patch)
    ADD ESP,0x10                        ; 00594805
    TEST EAX,EAX                        ; 00594808
    JZ 0x0059484a                       ; 0059480a
        ;   XREF to: 0059484a (CONDITIONAL_JUMP)  ; LAB_0059484a
    MOV ECX,dword ptr [EBP + 0x2]       ; 0059480c
    TEST ECX,ECX                        ; 0059480f
    JZ 0x00594886                       ; 00594811
        ;   XREF to: 00594886 (CONDITIONAL_JUMP)  ; LAB_00594886
    MOV EDX,dword ptr [EBP + -0x62]     ; 00594813
    MOV EDX,dword ptr [EDX + 0x4a4]     ; 00594816
    MOV EBX,dword ptr [EBP + -0x62]     ; 0059481c
    SHL EDX,0x3                         ; 0059481f
    ADD EDX,EBX                         ; 00594822
    MOV dword ptr [EDX + 0x4ac],ECX     ; 00594824
    MOV EAX,dword ptr [EBX + 0x4a4]     ; 0059482a
    SHL EAX,0x3                         ; 00594830
    LEA EDX,[EBX + EAX*0x1]             ; 00594833
    MOV EAX,dword ptr [EBP + 0x6]       ; 00594836
    MOV dword ptr [EDX + 0x4a8],EAX     ; 00594839
    INC dword ptr [EBX + 0x4a4]         ; 0059483f
    JMP 0x00595356                      ; 00594845
        ;   XREF to: 00595356 (UNCONDITIONAL_JUMP)  ; LAB_00595356
    LEA EAX,[EBP + 0xffffdfe6]          ; 0059484a
        ;   Label: LAB_0059484a
    PUSH EAX                            ; 00594850
    MOV EDI,dword ptr [EBP + 0x92]      ; 00594851
    PUSH EDI                            ; 00594857
    MOV EAX,dword ptr [EBP + -0x62]     ; 00594858
    PUSH EAX                            ; 0059485b
    PUSH 0x64cdac                       ; 0059485c | = "Invalid frame number in \"signal\" st..."
    MOV EDX,dword ptr [0x00678a60]      ; 00594861 | g_CEditorToolsPtr
    PUSH EDX                            ; 00594867 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594868
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 0059486d
    PUSH 0x0                            ; 00594870
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594872
    PUSH EAX                            ; 00594878
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594879
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059487e
    JMP 0x005927ee                      ; 00594881
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594886
        ;   Label: LAB_00594886
    PUSH EAX                            ; 0059488c
    MOV EDI,dword ptr [EBP + 0x92]      ; 0059488d
    PUSH EDI                            ; 00594893
    MOV EAX,dword ptr [EBP + -0x62]     ; 00594894
    PUSH EAX                            ; 00594897
    PUSH 0x64cdf2                       ; 00594898 | = "Signal value cannot be 0 in \"signal\..."
    MOV EDX,dword ptr [0x00678a60]      ; 0059489d | g_CEditorToolsPtr
    PUSH EDX                            ; 005948a3 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005948a4
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 005948a9
    PUSH 0x0                            ; 005948ac
    LEA EAX,[EBP + 0xffffd3e2]          ; 005948ae
    PUSH EAX                            ; 005948b4
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005948b5
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005948ba
    JMP 0x005927ee                      ; 005948bd
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    PUSH 0x7                            ; 005948c2
        ;   Label: LAB_005948c2
    PUSH 0x64ce3c                       ; 005948c4 | = "reverse"
    LEA EAX,[EBP + 0xffffdfe6]          ; 005948c9
    PUSH EAX                            ; 005948cf
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 005948d0
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005948d5
    TEST EAX,EAX                        ; 005948d8
    JNZ 0x005948e8                      ; 005948da
        ;   XREF to: 005948e8 (CONDITIONAL_JUMP)  ; LAB_005948e8
    MOV dword ptr [EBP + -0x5a],0x1     ; 005948dc
    JMP 0x00595356                      ; 005948e3
        ;   XREF to: 00595356 (UNCONDITIONAL_JUMP)  ; LAB_00595356
    PUSH 0x5                            ; 005948e8
        ;   Label: LAB_005948e8
    PUSH 0x64ce44                       ; 005948ea | = "filename"
    LEA EAX,[EBP + 0xffffdfe6]          ; 005948ef
    PUSH EAX                            ; 005948f5
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 005948f6
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005948fb
    TEST EAX,EAX                        ; 005948fe
    JZ 0x00595356                       ; 00594900
        ;   XREF to: 00595356 (CONDITIONAL_JUMP)  ; LAB_00595356
    PUSH 0x6                            ; 00594906
    PUSH 0x64ce4d                       ; 00594908 | = "frames"
    LEA EAX,[EBP + 0xffffdfe6]          ; 0059490d
    PUSH EAX                            ; 00594913
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00594914
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00594919
    TEST EAX,EAX                        ; 0059491c
    JZ 0x00595356                       ; 0059491e
        ;   XREF to: 00595356 (CONDITIONAL_JUMP)  ; LAB_00595356
    PUSH 0x6                            ; 00594924
    PUSH 0x64ce54                       ; 00594926 | = "cancel"
    LEA EAX,[EBP + 0xffffdfe6]          ; 0059492b
    PUSH EAX                            ; 00594931
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00594932
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00594937
    TEST EAX,EAX                        ; 0059493a
    JNZ 0x005949ea                      ; 0059493c
        ;   XREF to: 005949ea (CONDITIONAL_JUMP)  ; LAB_005949ea
    LEA EAX,[EBP + 0xffffdfec]          ; 00594942
    MOV BL,byte ptr [EAX]               ; 00594948
        ;   Label: LAB_00594948
    INC BL                              ; 0059494a
    AND EBX,0xff                        ; 0059494c
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 00594952 | g_CharacterClassificationTable
    JZ 0x0059495e                       ; 00594959
        ;   XREF to: 0059495e (CONDITIONAL_JUMP)  ; LAB_0059495e
    INC EAX                             ; 0059495b
    JMP 0x00594948                      ; 0059495c
        ;   XREF to: 00594948 (UNCONDITIONAL_JUMP)  ; LAB_00594948
    PUSH 0x64ce5b                       ; 0059495e | = "none"
        ;   Label: LAB_0059495e
    XOR EDX,EDX                         ; 00594963
    PUSH EAX                            ; 00594965
    MOV EBX,EAX                         ; 00594966
    MOV dword ptr [EBP + -0x56],EDX     ; 00594968
    CALL crt_string.c_strstr_FUN_005fedd0 ; 0059496b
        ;   XREF to: 005fedd0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005fedd0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 00594970
    TEST EAX,EAX                        ; 00594973
    JNZ 0x00595356                      ; 00594975
        ;   XREF to: 00595356 (CONDITIONAL_JUMP)  ; LAB_00595356
    MOV EDI,0x4                         ; 0059497b
    MOV ESI,0x1                         ; 00594980
    MOV CL,byte ptr [EBX]               ; 00594985
        ;   Label: LAB_00594985
    TEST CL,CL                          ; 00594987
    JZ 0x00595356                       ; 00594989
        ;   XREF to: 00595356 (CONDITIONAL_JUMP)  ; LAB_00595356
    XOR EAX,EAX                         ; 0059498f
    MOV AL,CL                           ; 00594991
    PUSH EAX                            ; 00594993
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00594994
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 00594999
    CMP EAX,0x50                        ; 0059499c
    JNC 0x005949c9                      ; 0059499f
        ;   XREF to: 005949c9 (CONDITIONAL_JUMP)  ; LAB_005949c9
    CMP EAX,0x42                        ; 005949a1
    JNC 0x005949e0                      ; 005949a4
        ;   XREF to: 005949e0 (CONDITIONAL_JUMP)  ; LAB_005949e0
    INC EBX                             ; 005949a6
        ;   Label: LAB_005949a6
    JMP 0x00594985                      ; 005949a7
        ;   XREF to: 00594985 (UNCONDITIONAL_JUMP)  ; LAB_00594985
    OR dword ptr [EBP + -0x56],ESI      ; 005949a9
        ;   Label: LAB_005949a9
    JMP 0x005949a6                      ; 005949ac
        ;   XREF to: 005949a6 (UNCONDITIONAL_JUMP)  ; LAB_005949a6
    OR byte ptr [EBP + -0x56],0x2       ; 005949ae
        ;   Label: LAB_005949ae
    JMP 0x005949a6                      ; 005949b2
        ;   XREF to: 005949a6 (UNCONDITIONAL_JUMP)  ; LAB_005949a6
    OR dword ptr [EBP + -0x56],EDI      ; 005949b4
        ;   Label: LAB_005949b4
    JMP 0x005949a6                      ; 005949b7
        ;   XREF to: 005949a6 (UNCONDITIONAL_JUMP)  ; LAB_005949a6
    OR dword ptr [EBP + -0x52],ESI      ; 005949b9
        ;   Label: LAB_005949b9
    JMP 0x005949a6                      ; 005949bc
        ;   XREF to: 005949a6 (UNCONDITIONAL_JUMP)  ; LAB_005949a6
    OR byte ptr [EBP + -0x52],0x2       ; 005949be
        ;   Label: LAB_005949be
    JMP 0x005949a6                      ; 005949c2
        ;   XREF to: 005949a6 (UNCONDITIONAL_JUMP)  ; LAB_005949a6
    OR dword ptr [EBP + -0x52],EDI      ; 005949c4
        ;   Label: LAB_005949c4
    JMP 0x005949a6                      ; 005949c7
        ;   XREF to: 005949a6 (UNCONDITIONAL_JUMP)  ; LAB_005949a6
    JBE 0x005949b9                      ; 005949c9
        ;   XREF to: 005949b9 (CONDITIONAL_JUMP)  ; LAB_005949b9
        ;   Label: LAB_005949c9
    CMP EAX,0x59                        ; 005949cb
    JNC 0x005949d7                      ; 005949ce
        ;   XREF to: 005949d7 (CONDITIONAL_JUMP)  ; LAB_005949d7
    CMP EAX,0x58                        ; 005949d0
    JZ 0x005949a9                       ; 005949d3
        ;   XREF to: 005949a9 (CONDITIONAL_JUMP)  ; LAB_005949a9
    JMP 0x005949a6                      ; 005949d5
        ;   XREF to: 005949a6 (UNCONDITIONAL_JUMP)  ; LAB_005949a6
    JBE 0x005949ae                      ; 005949d7
        ;   XREF to: 005949ae (CONDITIONAL_JUMP)  ; LAB_005949ae
        ;   Label: LAB_005949d7
    CMP EAX,0x5a                        ; 005949d9
    JZ 0x005949b4                       ; 005949dc
        ;   XREF to: 005949b4 (CONDITIONAL_JUMP)  ; LAB_005949b4
    JMP 0x005949a6                      ; 005949de
        ;   XREF to: 005949a6 (UNCONDITIONAL_JUMP)  ; LAB_005949a6
    JBE 0x005949c4                      ; 005949e0
        ;   XREF to: 005949c4 (CONDITIONAL_JUMP)  ; LAB_005949c4
        ;   Label: LAB_005949e0
    CMP EAX,0x48                        ; 005949e2
    JZ 0x005949be                       ; 005949e5
        ;   XREF to: 005949be (CONDITIONAL_JUMP)  ; LAB_005949be
    INC EBX                             ; 005949e7
    JMP 0x00594985                      ; 005949e8
        ;   XREF to: 00594985 (UNCONDITIONAL_JUMP)  ; LAB_00594985
    PUSH 0x4                            ; 005949ea
        ;   Label: LAB_005949ea
    PUSH 0x64ce60                       ; 005949ec | = "bias"
    LEA EAX,[EBP + 0xffffdfe6]          ; 005949f1
    PUSH EAX                            ; 005949f7
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 005949f8
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005949fd
    TEST EAX,EAX                        ; 00594a00
    JNZ 0x00594c1f                      ; 00594a02
        ;   XREF to: 00594c1f (CONDITIONAL_JUMP)  ; LAB_00594c1f
    LEA EAX,[EBP + 0xffffdfea]          ; 00594a08
    MOV BL,byte ptr [EAX]               ; 00594a0e
        ;   Label: LAB_00594a0e
    INC BL                              ; 00594a10
    AND EBX,0xff                        ; 00594a12
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 00594a18 | g_CharacterClassificationTable
    JZ 0x00594a24                       ; 00594a1f
        ;   XREF to: 00594a24 (CONDITIONAL_JUMP)  ; LAB_00594a24
    INC EAX                             ; 00594a21
    JMP 0x00594a0e                      ; 00594a22
        ;   XREF to: 00594a0e (UNCONDITIONAL_JUMP)  ; LAB_00594a0e
    LEA EDX,[EBP + 0xa]                 ; 00594a24
        ;   Label: LAB_00594a24
    PUSH EDX                            ; 00594a27
    LEA EDX,[EBP + 0xfffffaf6]          ; 00594a28
    PUSH EDX                            ; 00594a2e
    LEA EDX,[EBP + 0xfffffa2e]          ; 00594a2f
    PUSH EDX                            ; 00594a35
    LEA EDX,[EBP + 0xfffffb5a]          ; 00594a36
    PUSH EDX                            ; 00594a3c
    PUSH 0x64ce65                       ; 00594a3d | = "frame %s to \"%[^\"]\" frame %s%n"
    MOV EBX,0xffffffff                  ; 00594a42
    PUSH EAX                            ; 00594a47
    MOV dword ptr [EBP + 0xa],EBX       ; 00594a48
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00594a4b
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ESI,dword ptr [EBP + 0xa]       ; 00594a50
    ADD ESP,0x18                        ; 00594a53
    CMP ESI,0xf                         ; 00594a56
    JGE 0x00594a96                      ; 00594a59
        ;   XREF to: 00594a96 (CONDITIONAL_JUMP)  ; LAB_00594a96
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594a5b
    PUSH EAX                            ; 00594a61
    MOV ESI,dword ptr [EBP + 0x92]      ; 00594a62
    PUSH ESI                            ; 00594a68
    MOV EDI,dword ptr [EBP + -0x62]     ; 00594a69
    PUSH EDI                            ; 00594a6c
    PUSH 0x64ce84                       ; 00594a6d | = "Can't parse \"bias\" statement for an..."
    MOV EAX,[0x00678a60]                ; 00594a72 | g_CEditorToolsPtr
    PUSH EAX                            ; 00594a77 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594a78
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00594a7d
    PUSH 0x0                            ; 00594a80
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594a82
    PUSH EAX                            ; 00594a88
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594a89
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594a8e
    JMP 0x005927ee                      ; 00594a91
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV EBX,dword ptr [0x03670b5c]      ; 00594a96 | g_SkeleditBiasEntryCount
        ;   Label: LAB_00594a96
    SHL EBX,0x4                         ; 00594a9c
    ADD EBX,0x3670b60                   ; 00594a9f | g_SkeleditBiasEntries
    MOV EAX,dword ptr [EBP + 0x52]      ; 00594aa5
    MOV dword ptr [EBX],EAX             ; 00594aa8 | g_SkeleditBiasEntries
    MOV EAX,dword ptr [EBP + -0x62]     ; 00594aaa
    PUSH 0x0                            ; 00594aad
    MOV EDI,dword ptr [EAX + 0x64]      ; 00594aaf
    PUSH EDI                            ; 00594ab2
    LEA EAX,[EBX + 0x4]                 ; 00594ab3 | g_SkeleditBiasEntries[0].source_frame
    PUSH EAX                            ; 00594ab6 | g_SkeleditBiasEntries[0].source_frame
    LEA EAX,[EBP + 0xfffffb5a]          ; 00594ab7
    PUSH EAX                            ; 00594abd
    CALL core_skeledit.cpp_parseBoneParentToken_FUN_00592520 ; 00594abe
        ;   XREF to: 00592520 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_parseBoneParentToken_FUN_00592520(char * token, int * out_index, int bone_count, int allow_patch)
    ADD ESP,0x10                        ; 00594ac3
    TEST EAX,EAX                        ; 00594ac6
    JZ 0x00594b31                       ; 00594ac8
        ;   XREF to: 00594b31 (CONDITIONAL_JUMP)  ; LAB_00594b31
    PUSH 0x0                            ; 00594aca
    LEA EAX,[EBP + 0xfffffa2e]          ; 00594acc
    PUSH EAX                            ; 00594ad2
    MOV ESI,dword ptr [EBP + 0x8e]      ; 00594ad3
    PUSH ESI                            ; 00594ad9
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 00594ada
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00594adf
    MOV dword ptr [EBX + 0x8],EAX       ; 00594ae2 | g_SkeleditBiasEntries[0].ref_motion_index
    TEST EAX,EAX                        ; 00594ae5
    JL 0x00594b6d                       ; 00594ae7
        ;   XREF to: 00594b6d (CONDITIONAL_JUMP)  ; LAB_00594b6d
    CMP EAX,dword ptr [EBP + 0x52]      ; 00594aed
    JNZ 0x00594bb0                      ; 00594af0
        ;   XREF to: 00594bb0 (CONDITIONAL_JUMP)  ; LAB_00594bb0
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594af6
    PUSH EAX                            ; 00594afc
    MOV ESI,dword ptr [EBP + 0x92]      ; 00594afd
    PUSH ESI                            ; 00594b03
    MOV EDI,dword ptr [EBP + -0x62]     ; 00594b04
    PUSH EDI                            ; 00594b07
    PUSH 0x64cf4f                       ; 00594b08 | = "Reference motion is same as motion to..."
    MOV EAX,[0x00678a60]                ; 00594b0d | g_CEditorToolsPtr
    PUSH EAX                            ; 00594b12 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594b13
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00594b18
    PUSH 0x0                            ; 00594b1b
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594b1d
    PUSH EAX                            ; 00594b23
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594b24
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594b29
    JMP 0x005927ee                      ; 00594b2c
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594b31
        ;   Label: LAB_00594b31
    PUSH EAX                            ; 00594b37
    MOV EAX,dword ptr [EBP + 0x92]      ; 00594b38
    PUSH EAX                            ; 00594b3e
    MOV EDX,dword ptr [EBP + -0x62]     ; 00594b3f
    PUSH EDX                            ; 00594b42
    PUSH 0x64cebb                       ; 00594b43 | = "Can't parse frame to bias in \"bias\"..."
    MOV ECX,dword ptr [0x00678a60]      ; 00594b48 | g_CEditorToolsPtr
    PUSH ECX                            ; 00594b4e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594b4f
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00594b54
    PUSH 0x0                            ; 00594b57
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594b59
    PUSH EAX                            ; 00594b5f
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594b60
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594b65
    JMP 0x005927ee                      ; 00594b68
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594b6d
        ;   Label: LAB_00594b6d
    PUSH EAX                            ; 00594b73
    MOV EDX,dword ptr [EBP + 0x92]      ; 00594b74
    PUSH EDX                            ; 00594b7a
    MOV ECX,dword ptr [EBP + -0x62]     ; 00594b7b
    PUSH ECX                            ; 00594b7e
    LEA EAX,[EBP + 0xfffffa2e]          ; 00594b7f
    PUSH EAX                            ; 00594b85
    PUSH 0x64cf03                       ; 00594b86 | = "Invalid reference motion \"%s\" in \"..."
    MOV EBX,dword ptr [0x00678a60]      ; 00594b8b | g_CEditorToolsPtr
    PUSH EBX                            ; 00594b91 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594b92
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 00594b97
    PUSH 0x0                            ; 00594b9a
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594b9c
    PUSH EAX                            ; 00594ba2
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594ba3
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594ba8
    JMP 0x005927ee                      ; 00594bab
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    IMUL EAX,EAX,0x54c                  ; 00594bb0
        ;   Label: LAB_00594bb0
    ADD EAX,ESI                         ; 00594bb6
    PUSH 0x0                            ; 00594bb8
    MOV EDI,dword ptr [EAX + 0x9cc]     ; 00594bba
    PUSH EDI                            ; 00594bc0
    ADD EBX,0xc                         ; 00594bc1 | g_SkeleditBiasEntries[0].ref_frame
    PUSH EBX                            ; 00594bc4 | g_SkeleditBiasEntries[0].ref_frame
    LEA EAX,[EBP + 0xfffffaf6]          ; 00594bc5
    PUSH EAX                            ; 00594bcb
    CALL core_skeledit.cpp_parseBoneParentToken_FUN_00592520 ; 00594bcc
        ;   XREF to: 00592520 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_parseBoneParentToken_FUN_00592520(char * token, int * out_index, int bone_count, int allow_patch)
    ADD ESP,0x10                        ; 00594bd1
    TEST EAX,EAX                        ; 00594bd4
    JZ 0x00594be3                       ; 00594bd6
        ;   XREF to: 00594be3 (CONDITIONAL_JUMP)  ; LAB_00594be3
    INC dword ptr [0x03670b5c]          ; 00594bd8 | g_SkeleditBiasEntryCount
    JMP 0x00595356                      ; 00594bde
        ;   XREF to: 00595356 (UNCONDITIONAL_JUMP)  ; LAB_00595356
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594be3
        ;   Label: LAB_00594be3
    PUSH EAX                            ; 00594be9
    MOV EAX,dword ptr [EBP + 0x92]      ; 00594bea
    PUSH EAX                            ; 00594bf0
    MOV EDX,dword ptr [EBP + -0x62]     ; 00594bf1
    PUSH EDX                            ; 00594bf4
    PUSH 0x64cfa8                       ; 00594bf5 | = "Can't parse frame to bias in \"bias\"..."
    MOV ECX,dword ptr [0x00678a60]      ; 00594bfa | g_CEditorToolsPtr
    PUSH ECX                            ; 00594c00 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594c01
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00594c06
    PUSH 0x0                            ; 00594c09
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594c0b
    PUSH EAX                            ; 00594c11
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594c12
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594c17
    JMP 0x005927ee                      ; 00594c1a
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    PUSH 0x7                            ; 00594c1f
        ;   Label: LAB_00594c1f
    PUSH 0x64cff0                       ; 00594c21 | = "markers"
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594c26
    PUSH EAX                            ; 00594c2c
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00594c2d
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00594c32
    TEST EAX,EAX                        ; 00594c35
    JNZ 0x00594e62                      ; 00594c37
        ;   XREF to: 00594e62 (CONDITIONAL_JUMP)  ; LAB_00594e62
    MOV EAX,dword ptr [EBP + -0x62]     ; 00594c3d
    CMP dword ptr [EAX + 0x520],0x0     ; 00594c40
    JG 0x00594c65                       ; 00594c47
        ;   XREF to: 00594c65 (CONDITIONAL_JUMP)  ; LAB_00594c65
    LEA EAX,[EBP + 0xffffdfed]          ; 00594c49
    MOV BL,byte ptr [EAX]               ; 00594c4f
        ;   Label: LAB_00594c4f
    INC BL                              ; 00594c51
    AND EBX,0xff                        ; 00594c53
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 00594c59 | g_CharacterClassificationTable
    JZ 0x00594c9a                       ; 00594c60
        ;   XREF to: 00594c9a (CONDITIONAL_JUMP)  ; LAB_00594c9a
    INC EAX                             ; 00594c62
    JMP 0x00594c4f                      ; 00594c63
        ;   XREF to: 00594c4f (UNCONDITIONAL_JUMP)  ; LAB_00594c4f
    MOV EAX,dword ptr [EBP + 0x92]      ; 00594c65
        ;   Label: LAB_00594c65
    PUSH EAX                            ; 00594c6b
    MOV EDX,dword ptr [EBP + -0x62]     ; 00594c6c
    PUSH EDX                            ; 00594c6f
    PUSH 0x64cff8                       ; 00594c70 | = "Multiple \"markers\" statements for a..."
    MOV ECX,dword ptr [0x00678a60]      ; 00594c75 | g_CEditorToolsPtr
    PUSH ECX                            ; 00594c7b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594c7c
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 00594c81
    PUSH 0x0                            ; 00594c84
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594c86
    PUSH EAX                            ; 00594c8c
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594c8d
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594c92
    JMP 0x005927ee                      ; 00594c95
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV CH,byte ptr [EAX]               ; 00594c9a
        ;   Label: LAB_00594c9a
    MOV EBX,EAX                         ; 00594c9c
    TEST CH,CH                          ; 00594c9e
    JZ 0x00595356                       ; 00594ca0
        ;   XREF to: 00595356 (CONDITIONAL_JUMP)  ; LAB_00595356
    LEA EAX,[EBP + 0xe]                 ; 00594ca6
        ;   Label: LAB_00594ca6
    PUSH EAX                            ; 00594ca9
    LEA EAX,[EBP + 0x12]                ; 00594caa
    PUSH EAX                            ; 00594cad
    PUSH 0x64d02d                       ; 00594cae | = "%d%n"
    MOV EDX,0xffffffff                  ; 00594cb3
    PUSH EBX                            ; 00594cb8
    MOV dword ptr [EBP + 0xe],EDX       ; 00594cb9
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00594cbc
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV ECX,dword ptr [EBP + 0xe]       ; 00594cc1
    ADD ESP,0x10                        ; 00594cc4
    TEST ECX,ECX                        ; 00594cc7
    JL 0x00594d5d                       ; 00594cc9
        ;   XREF to: 00594d5d (CONDITIONAL_JUMP)  ; LAB_00594d5d
    MOV ESI,dword ptr [EBP + 0x12]      ; 00594ccf
    TEST ESI,ESI                        ; 00594cd2
    JLE 0x00594d99                      ; 00594cd4
        ;   XREF to: 00594d99 (CONDITIONAL_JUMP)  ; LAB_00594d99
    MOV EDX,dword ptr [EBP + -0x62]     ; 00594cda
    CMP ESI,dword ptr [EDX + 0x64]      ; 00594cdd
    JGE 0x00594d99                      ; 00594ce0
        ;   XREF to: 00594d99 (CONDITIONAL_JUMP)  ; LAB_00594d99
    CMP dword ptr [EDX + 0x520],0xa     ; 00594ce6
    JGE 0x00594dd9                      ; 00594ced
        ;   XREF to: 00594dd9 (CONDITIONAL_JUMP)  ; LAB_00594dd9
    MOV EAX,dword ptr [EBP + -0x62]     ; 00594cf3
    MOV ECX,dword ptr [EAX + 0x520]     ; 00594cf6
    TEST ECX,ECX                        ; 00594cfc
    JLE 0x00594d1b                      ; 00594cfe
        ;   XREF to: 00594d1b (CONDITIONAL_JUMP)  ; LAB_00594d1b
    MOV ESI,dword ptr [EBP + -0x62]     ; 00594d00
    LEA EAX,[ECX*0x4 + 0x0]             ; 00594d03
    ADD ESI,EAX                         ; 00594d0a
    MOV EAX,dword ptr [EBP + 0x12]      ; 00594d0c
    CMP EAX,dword ptr [ESI + 0x520]     ; 00594d0f
    JLE 0x00594e15                      ; 00594d15
        ;   XREF to: 00594e15 (CONDITIONAL_JUMP)  ; LAB_00594e15
    MOV ESI,dword ptr [EBP + -0x62]     ; 00594d1b
        ;   Label: LAB_00594d1b
    MOV ESI,dword ptr [ESI + 0x520]     ; 00594d1e
    MOV EAX,dword ptr [EBP + -0x62]     ; 00594d24
    SHL ESI,0x2                         ; 00594d27
    ADD ESI,EAX                         ; 00594d2a
    MOV EAX,dword ptr [EBP + 0x12]      ; 00594d2c
    MOV dword ptr [ESI + 0x524],EAX     ; 00594d2f
    MOV EAX,dword ptr [EBP + -0x62]     ; 00594d35
    INC dword ptr [EAX + 0x520]         ; 00594d38
    MOV EAX,dword ptr [EBP + 0xe]       ; 00594d3e
    ADD EAX,EBX                         ; 00594d41
    MOV BL,byte ptr [EAX]               ; 00594d43
        ;   Label: LAB_00594d43
    INC BL                              ; 00594d45
    AND EBX,0xff                        ; 00594d47
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 00594d4d | g_CharacterClassificationTable
    JZ 0x00594e51                       ; 00594d54
        ;   XREF to: 00594e51 (CONDITIONAL_JUMP)  ; LAB_00594e51
    INC EAX                             ; 00594d5a
    JMP 0x00594d43                      ; 00594d5b
        ;   XREF to: 00594d43 (UNCONDITIONAL_JUMP)  ; LAB_00594d43
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594d5d
        ;   Label: LAB_00594d5d
    PUSH EAX                            ; 00594d63
    MOV EAX,dword ptr [EBP + 0x92]      ; 00594d64
    PUSH EAX                            ; 00594d6a
    MOV EDX,dword ptr [EBP + -0x62]     ; 00594d6b
    PUSH EDX                            ; 00594d6e
    PUSH 0x64d032                       ; 00594d6f | = "Can't parse \"markers\" statement for..."
    MOV ECX,dword ptr [0x00678a60]      ; 00594d74 | g_CEditorToolsPtr
    PUSH ECX                            ; 00594d7a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594d7b
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00594d80
    PUSH 0x0                            ; 00594d83
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594d85
    PUSH EAX                            ; 00594d8b
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594d8c
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594d91
    JMP 0x005927ee                      ; 00594d94
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594d99
        ;   Label: LAB_00594d99
    PUSH EAX                            ; 00594d9f
    MOV ECX,dword ptr [EBP + 0x92]      ; 00594da0
    PUSH ECX                            ; 00594da6
    MOV EBX,dword ptr [EBP + -0x62]     ; 00594da7
    PUSH EBX                            ; 00594daa
    MOV ESI,dword ptr [EBP + 0x12]      ; 00594dab
    PUSH ESI                            ; 00594dae
    PUSH 0x64d06d                       ; 00594daf | = "Can't place marker at invalid frame n..."
    MOV EDI,dword ptr [0x00678a60]      ; 00594db4 | g_CEditorToolsPtr
    PUSH EDI                            ; 00594dba | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594dbb
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 00594dc0
    PUSH 0x0                            ; 00594dc3
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594dc5
    PUSH EAX                            ; 00594dcb
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594dcc
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594dd1
    JMP 0x005927ee                      ; 00594dd4
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594dd9
        ;   Label: LAB_00594dd9
    PUSH EAX                            ; 00594ddf
    MOV EDI,dword ptr [EBP + 0x92]      ; 00594de0
    PUSH EDI                            ; 00594de6
    MOV EAX,dword ptr [EBP + -0x62]     ; 00594de7
    PUSH EAX                            ; 00594dea
    PUSH 0x64d0b6                       ; 00594deb | = "Too many markers in animation %s in %..."
    MOV EDX,dword ptr [0x00678a60]      ; 00594df0 | g_CEditorToolsPtr
    PUSH EDX                            ; 00594df6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594df7
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00594dfc
    PUSH 0x0                            ; 00594dff
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594e01
    PUSH EAX                            ; 00594e07
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594e08
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594e0d
    JMP 0x005927ee                      ; 00594e10
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594e15
        ;   Label: LAB_00594e15
    PUSH EAX                            ; 00594e1b
    MOV ECX,dword ptr [EBP + 0x92]      ; 00594e1c
    PUSH ECX                            ; 00594e22
    MOV EBX,dword ptr [EBP + -0x62]     ; 00594e23
    PUSH EBX                            ; 00594e26
    PUSH 0x64d0e1                       ; 00594e27 | = "Frame numbers are not strictly increa..."
    MOV ESI,dword ptr [0x00678a60]      ; 00594e2c | g_CEditorToolsPtr
    PUSH ESI                            ; 00594e32 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594e33
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00594e38
    PUSH 0x0                            ; 00594e3b
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594e3d
    PUSH EAX                            ; 00594e43
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594e44
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594e49
    JMP 0x005927ee                      ; 00594e4c
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV CL,byte ptr [EAX]               ; 00594e51
        ;   Label: LAB_00594e51
    MOV EBX,EAX                         ; 00594e53
    TEST CL,CL                          ; 00594e55
    JNZ 0x00594ca6                      ; 00594e57
        ;   XREF to: 00594ca6 (CONDITIONAL_JUMP)  ; LAB_00594ca6
    JMP 0x00595356                      ; 00594e5d
        ;   XREF to: 00595356 (UNCONDITIONAL_JUMP)  ; LAB_00595356
    PUSH 0x8                            ; 00594e62
        ;   Label: LAB_00594e62
    PUSH 0x64d13c                       ; 00594e64 | = "displace"
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594e69
    PUSH EAX                            ; 00594e6f
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00594e70
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00594e75
    TEST EAX,EAX                        ; 00594e78
    JNZ 0x00594f04                      ; 00594e7a
        ;   XREF to: 00594f04 (CONDITIONAL_JUMP)  ; LAB_00594f04
    LEA EAX,[EBP + 0xffffdfee]          ; 00594e80
    MOV BL,byte ptr [EAX]               ; 00594e86
        ;   Label: LAB_00594e86
    INC BL                              ; 00594e88
    AND EBX,0xff                        ; 00594e8a
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 00594e90 | g_CharacterClassificationTable
    JZ 0x00594e9c                       ; 00594e97
        ;   XREF to: 00594e9c (CONDITIONAL_JUMP)  ; LAB_00594e9c
    INC EAX                             ; 00594e99
    JMP 0x00594e86                      ; 00594e9a
        ;   XREF to: 00594e86 (UNCONDITIONAL_JUMP)  ; LAB_00594e86
    LEA EDX,[EBP + 0xffffff4e]          ; 00594e9c
        ;   Label: LAB_00594e9c
    PUSH EDX                            ; 00594ea2
    LEA EDX,[EBP + 0xffffff4a]          ; 00594ea3
    PUSH EDX                            ; 00594ea9
    LEA EDX,[EBP + 0xffffff46]          ; 00594eaa
    PUSH EDX                            ; 00594eb0
    PUSH 0x64d145                       ; 00594eb1 | = "%f,%f,%f"
    PUSH EAX                            ; 00594eb6
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00594eb7
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 00594ebc
    CMP EAX,0x3                         ; 00594ebf
    JZ 0x00595356                       ; 00594ec2
        ;   XREF to: 00595356 (CONDITIONAL_JUMP)  ; LAB_00595356
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594ec8
    PUSH EAX                            ; 00594ece
    MOV EAX,dword ptr [EBP + 0x92]      ; 00594ecf
    PUSH EAX                            ; 00594ed5
    MOV EDX,dword ptr [EBP + -0x62]     ; 00594ed6
    PUSH EDX                            ; 00594ed9
    PUSH 0x64d14e                       ; 00594eda | = "Can't parse displacement vector in \"..."
    MOV ECX,dword ptr [0x00678a60]      ; 00594edf | g_CEditorToolsPtr
    PUSH ECX                            ; 00594ee5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00594ee6
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00594eeb
    PUSH 0x0                            ; 00594eee
    LEA EAX,[EBP + 0xffffd3e2]          ; 00594ef0
    PUSH EAX                            ; 00594ef6
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00594ef7
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594efc
    JMP 0x005927ee                      ; 00594eff
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    PUSH 0x11                           ; 00594f04
        ;   Label: LAB_00594f04
    PUSH 0x64d19e                       ; 00594f06 | = "totaldisplacement"
    LEA EAX,[EBP + 0xffffdfe6]          ; 00594f0b
    PUSH EAX                            ; 00594f11
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00594f12
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00594f17
    TEST EAX,EAX                        ; 00594f1a
    JNZ 0x005951c6                      ; 00594f1c
        ;   XREF to: 005951c6 (CONDITIONAL_JUMP)  ; LAB_005951c6
    LEA EDI,[EBP + 0xffffdff7]          ; 00594f22
    MOV EBX,EDI                         ; 00594f28
        ;   Label: LAB_00594f28
    MOV AL,byte ptr [EBX]               ; 00594f2a
        ;   Label: LAB_00594f2a
    INC AL                              ; 00594f2c
    AND EAX,0xff                        ; 00594f2e
    MOV DL,byte ptr [EAX + 0x6849c4]    ; 00594f33 | g_CharacterClassificationTable
    LEA ESI,[EBX + 0x1]                 ; 00594f39
    TEST DL,0x2                         ; 00594f3c
    JZ 0x00594f45                       ; 00594f3f
        ;   XREF to: 00594f45 (CONDITIONAL_JUMP)  ; LAB_00594f45
    MOV EBX,ESI                         ; 00594f41
    JMP 0x00594f2a                      ; 00594f43
        ;   XREF to: 00594f2a (UNCONDITIONAL_JUMP)  ; LAB_00594f2a
    MOV DH,byte ptr [EBX]               ; 00594f45
        ;   Label: LAB_00594f45
    MOV EDI,EBX                         ; 00594f47
    TEST DH,DH                          ; 00594f49
    JNZ 0x0059514c                      ; 00594f4b
        ;   XREF to: 0059514c (CONDITIONAL_JUMP)  ; LAB_0059514c
    LEA EAX,[EBP + 0xffffff4e]          ; 00594f51
    PUSH EAX                            ; 00594f57
    LEA EAX,[EBP + 0xffffff4a]          ; 00594f58
    PUSH EAX                            ; 00594f5e
    LEA EAX,[EBP + 0xffffff46]          ; 00594f5f
    PUSH EAX                            ; 00594f65
    PUSH 0x64d2f6                       ; 00594f66 | = "%f,%f,%f"
    PUSH EBX                            ; 00594f6b
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00594f6c
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 00594f71
    JMP 0x00595356                      ; 00594f74
        ;   XREF to: 00595356 (UNCONDITIONAL_JUMP)  ; LAB_00595356
    LEA EAX,[EBP + 0x1a]                ; 00594f79
        ;   Label: LAB_00594f79
    PUSH EAX                            ; 00594f7c
    LEA EAX,[EBP + 0xfffff9ca]          ; 00594f7d
    PUSH EAX                            ; 00594f83
    LEA EAX,[EBP + 0xfffffbbe]          ; 00594f84
    PUSH EAX                            ; 00594f8a
    PUSH 0x64d1b0                       ; 00594f8b | = "[%[^- \t] - %[^] \t] ]%n"
    MOV ESI,0xffffffff                  ; 00594f90
    PUSH EBX                            ; 00594f95
    MOV dword ptr [EBP + 0x1a],ESI      ; 00594f96
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00594f99
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EAX,dword ptr [EBP + 0x1a]      ; 00594f9e
    ADD ESP,0x14                        ; 00594fa1
    XOR EBX,EBX                         ; 00594fa4
    CMP EAX,0x5                         ; 00594fa6
    JGE 0x00594fc3                      ; 00594fa9
        ;   XREF to: 00594fc3 (CONDITIONAL_JUMP)  ; LAB_00594fc3
    TEST EBX,EBX                        ; 00594fab
        ;   Label: LAB_00594fab
    JZ 0x00595003                       ; 00594fad
        ;   XREF to: 00595003 (CONDITIONAL_JUMP)  ; LAB_00595003
    MOV EAX,dword ptr [EBP + -0x42]     ; 00594faf
        ;   Label: LAB_00594faf
    CMP EAX,dword ptr [EBP + -0xa]      ; 00594fb2
    JG 0x0059503f                       ; 00594fb5
        ;   XREF to: 0059503f (CONDITIONAL_JUMP)  ; LAB_0059503f
    ADD EDI,dword ptr [EBP + 0x1a]      ; 00594fbb
    JMP 0x00594f28                      ; 00594fbe
        ;   XREF to: 00594f28 (UNCONDITIONAL_JUMP)  ; LAB_00594f28
    MOV EAX,dword ptr [EBP + -0x62]     ; 00594fc3
        ;   Label: LAB_00594fc3
    PUSH EBX                            ; 00594fc6
    MOV EDX,dword ptr [EAX + 0x64]      ; 00594fc7
    PUSH EDX                            ; 00594fca
    LEA EAX,[EBP + -0x42]               ; 00594fcb
    PUSH EAX                            ; 00594fce
    LEA EAX,[EBP + 0xfffffbbe]          ; 00594fcf
    PUSH EAX                            ; 00594fd5
    CALL core_skeledit.cpp_parseBoneParentToken_FUN_00592520 ; 00594fd6
        ;   XREF to: 00592520 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_parseBoneParentToken_FUN_00592520(char * token, int * out_index, int bone_count, int allow_patch)
    ADD ESP,0x10                        ; 00594fdb
    TEST EAX,EAX                        ; 00594fde
    JZ 0x00594fab                       ; 00594fe0
        ;   XREF to: 00594fab (CONDITIONAL_JUMP)  ; LAB_00594fab
    MOV EAX,dword ptr [EBP + -0x62]     ; 00594fe2
    PUSH EBX                            ; 00594fe5
    MOV ECX,dword ptr [EAX + 0x64]      ; 00594fe6
    PUSH ECX                            ; 00594fe9
    LEA EAX,[EBP + -0xa]                ; 00594fea
    PUSH EAX                            ; 00594fed
    LEA EAX,[EBP + 0xfffff9ca]          ; 00594fee
    PUSH EAX                            ; 00594ff4
    CALL core_skeledit.cpp_parseBoneParentToken_FUN_00592520 ; 00594ff5
        ;   XREF to: 00592520 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_parseBoneParentToken_FUN_00592520(char * token, int * out_index, int bone_count, int allow_patch)
    ADD ESP,0x10                        ; 00594ffa
    TEST EAX,EAX                        ; 00594ffd
    JZ 0x00594fab                       ; 00594fff
        ;   XREF to: 00594fab (CONDITIONAL_JUMP)  ; LAB_00594fab
    JMP 0x00594faf                      ; 00595001
        ;   XREF to: 00594faf (UNCONDITIONAL_JUMP)  ; LAB_00594faf
    LEA EAX,[EBP + 0xffffdfe6]          ; 00595003
        ;   Label: LAB_00595003
    PUSH EAX                            ; 00595009
    MOV EBX,dword ptr [EBP + 0x92]      ; 0059500a
    PUSH EBX                            ; 00595010
    MOV ESI,dword ptr [EBP + -0x62]     ; 00595011
    PUSH ESI                            ; 00595014
    PUSH 0x64d1c7                       ; 00595015 | = "Can't parse frame range in \"totalDis..."
    MOV EDI,dword ptr [0x00678a60]      ; 0059501a | g_CEditorToolsPtr
    PUSH EDI                            ; 00595020 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00595021
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00595026
    PUSH 0x0                            ; 00595029
    LEA EAX,[EBP + 0xffffd3e2]          ; 0059502b
    PUSH EAX                            ; 00595031
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00595032
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00595037
    JMP 0x005927ee                      ; 0059503a
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xffffdfe6]          ; 0059503f
        ;   Label: LAB_0059503f
    PUSH EAX                            ; 00595045
    MOV EBX,dword ptr [EBP + 0x92]      ; 00595046
    PUSH EBX                            ; 0059504c
    MOV ESI,dword ptr [EBP + -0x62]     ; 0059504d
    PUSH ESI                            ; 00595050
    PUSH 0x64d218                       ; 00595051 | = "Invalid frame range in \"totalDisplac..."
    MOV EDI,dword ptr [0x00678a60]      ; 00595056 | g_CEditorToolsPtr
    PUSH EDI                            ; 0059505c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0059505d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00595062
    PUSH 0x0                            ; 00595065
    LEA EAX,[EBP + 0xffffd3e2]          ; 00595067
    PUSH EAX                            ; 0059506d
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0059506e
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00595073
    JMP 0x005927ee                      ; 00595076
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV BL,byte ptr [EDI + 0x1]         ; 0059507b
        ;   Label: LAB_0059507b
    INC EDI                             ; 0059507e
    CMP BL,0x3a                         ; 0059507f
    JNZ 0x00595085                      ; 00595082
        ;   XREF to: 00595085 (CONDITIONAL_JUMP)  ; LAB_00595085
    INC EDI                             ; 00595084
    CMP byte ptr [EDI],0x3d             ; 00595085
        ;   Label: LAB_00595085
    JNZ 0x0059508b                      ; 00595088
        ;   XREF to: 0059508b (CONDITIONAL_JUMP)  ; LAB_0059508b
    INC EDI                             ; 0059508a
    PUSH 0x7                            ; 0059508b
        ;   Label: LAB_0059508b
    PUSH 0x64d265                       ; 0059508d | = "display"
    PUSH EDI                            ; 00595092
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 00595093
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00595098
    TEST EAX,EAX                        ; 0059509b
    JNZ 0x005950e0                      ; 0059509d
        ;   XREF to: 005950e0 (CONDITIONAL_JUMP)  ; LAB_005950e0
    MOV EAX,0xc7c34f00                  ; 0059509f
    ADD EDI,0x7                         ; 005950a4
    MOV dword ptr [EBP + 0x1e],EAX      ; 005950a7
    CMP dword ptr [EBP + 0x16],0x58     ; 005950aa
        ;   Label: LAB_005950aa
    JNZ 0x005950b9                      ; 005950ae
        ;   XREF to: 005950b9 (CONDITIONAL_JUMP)  ; LAB_005950b9
    MOV EAX,dword ptr [EBP + 0x1e]      ; 005950b0
    MOV dword ptr [EBP + 0xfffffec2],EAX ; 005950b3
    CMP dword ptr [EBP + 0x16],0x59     ; 005950b9
        ;   Label: LAB_005950b9
    JNZ 0x005950c8                      ; 005950bd
        ;   XREF to: 005950c8 (CONDITIONAL_JUMP)  ; LAB_005950c8
    MOV EAX,dword ptr [EBP + 0x1e]      ; 005950bf
    MOV dword ptr [EBP + 0xfffffec6],EAX ; 005950c2
    CMP dword ptr [EBP + 0x16],0x5a     ; 005950c8
        ;   Label: LAB_005950c8
    JNZ 0x00594f28                      ; 005950cc
        ;   XREF to: 00594f28 (CONDITIONAL_JUMP)  ; LAB_00594f28
    MOV EAX,dword ptr [EBP + 0x1e]      ; 005950d2
    MOV dword ptr [EBP + 0xfffffeca],EAX ; 005950d5
    JMP 0x00594f28                      ; 005950db
        ;   XREF to: 00594f28 (UNCONDITIONAL_JUMP)  ; LAB_00594f28
    MOV dword ptr [EBP + 0x22],0xffffffff ; 005950e0
        ;   Label: LAB_005950e0
    LEA EAX,[EBP + 0x22]                ; 005950e7
    PUSH EAX                            ; 005950ea
    LEA EAX,[EBP + 0x1e]                ; 005950eb
    PUSH EAX                            ; 005950ee
    PUSH 0x64d26d                       ; 005950ef | = "%f%n"
    PUSH EDI                            ; 005950f4
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 005950f5
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    MOV EDX,dword ptr [EBP + 0x22]      ; 005950fa
    ADD ESP,0x10                        ; 005950fd
    CMP EDX,0x1                         ; 00595100
    JL 0x00595109                       ; 00595103
        ;   XREF to: 00595109 (CONDITIONAL_JUMP)  ; LAB_00595109
    ADD EDI,EDX                         ; 00595105
    JMP 0x005950aa                      ; 00595107
        ;   XREF to: 005950aa (UNCONDITIONAL_JUMP)  ; LAB_005950aa
    LEA EAX,[EBP + 0xffffdfe6]          ; 00595109
        ;   Label: LAB_00595109
    PUSH EAX                            ; 0059510f
    MOV EBX,dword ptr [EBP + 0x92]      ; 00595110
    PUSH EBX                            ; 00595116
    MOV ESI,dword ptr [EBP + -0x62]     ; 00595117
    PUSH ESI                            ; 0059511a
    PUSH 0x64d272                       ; 0059511b | = "Can't parse \"totalDisplacement\" key..."
    MOV EDI,dword ptr [0x00678a60]      ; 00595120 | g_CEditorToolsPtr
    PUSH EDI                            ; 00595126 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00595127
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 0059512c
    PUSH 0x0                            ; 0059512f
    LEA EAX,[EBP + 0xffffd3e2]          ; 00595131
    PUSH EAX                            ; 00595137
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00595138
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059513d
    JMP 0x005927ee                      ; 00595140
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV EDI,ESI                         ; 00595145
        ;   Label: LAB_00595145
    JMP 0x00594f28                      ; 00595147
        ;   XREF to: 00594f28 (UNCONDITIONAL_JUMP)  ; LAB_00594f28
    XOR EAX,EAX                         ; 0059514c
        ;   Label: LAB_0059514c
    MOV AL,DH                           ; 0059514e
    PUSH EAX                            ; 00595150
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00595151
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 00595156
    MOV dword ptr [EBP + 0x16],EAX      ; 00595159
    CMP EAX,0x59                        ; 0059515c
    JNC 0x00595173                      ; 0059515f
        ;   XREF to: 00595173 (CONDITIONAL_JUMP)  ; LAB_00595173
    CMP EAX,0x2c                        ; 00595161
    JC 0x0059518b                       ; 00595164
        ;   XREF to: 0059518b (CONDITIONAL_JUMP)  ; LAB_0059518b
    JBE 0x00595145                      ; 00595166
        ;   XREF to: 00595145 (CONDITIONAL_JUMP)  ; LAB_00595145
    CMP EAX,0x58                        ; 00595168
    JZ 0x0059507b                       ; 0059516b
        ;   XREF to: 0059507b (CONDITIONAL_JUMP)  ; LAB_0059507b
    JMP 0x0059518b                      ; 00595171
        ;   XREF to: 0059518b (UNCONDITIONAL_JUMP)  ; LAB_0059518b
    JBE 0x0059507b                      ; 00595173
        ;   XREF to: 0059507b (CONDITIONAL_JUMP)  ; LAB_0059507b
        ;   Label: LAB_00595173
    CMP EAX,0x5a                        ; 00595179
    JBE 0x0059507b                      ; 0059517c
        ;   XREF to: 0059507b (CONDITIONAL_JUMP)  ; LAB_0059507b
    CMP EAX,0x5b                        ; 00595182
    JZ 0x00594f79                       ; 00595185
        ;   XREF to: 00594f79 (CONDITIONAL_JUMP)  ; LAB_00594f79
    LEA EAX,[EBP + 0xffffdfe6]          ; 0059518b
        ;   Label: LAB_0059518b
    PUSH EAX                            ; 00595191
    MOV ESI,dword ptr [EBP + 0x92]      ; 00595192
    PUSH ESI                            ; 00595198
    MOV EDI,dword ptr [EBP + -0x62]     ; 00595199
    PUSH EDI                            ; 0059519c
    PUSH 0x64d2b4                       ; 0059519d | = "Can't parse \"totalDisplacement\" key..."
    MOV EAX,[0x00678a60]                ; 005951a2 | g_CEditorToolsPtr
    PUSH EAX                            ; 005951a7 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005951a8
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 005951ad
    PUSH 0x0                            ; 005951b0
    LEA EAX,[EBP + 0xffffd3e2]          ; 005951b2
    PUSH EAX                            ; 005951b8
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005951b9
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005951be
    JMP 0x005927ee                      ; 005951c1
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    PUSH 0x6                            ; 005951c6
        ;   Label: LAB_005951c6
    PUSH 0x64d2ff                       ; 005951c8 | = "flipXZ"
    LEA EAX,[EBP + 0xffffdfe6]          ; 005951cd
    PUSH EAX                            ; 005951d3
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 005951d4
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005951d9
    TEST EAX,EAX                        ; 005951dc
    JNZ 0x005951ec                      ; 005951de
        ;   XREF to: 005951ec (CONDITIONAL_JUMP)  ; LAB_005951ec
    MOV dword ptr [EBP + -0x4e],0x1     ; 005951e0
    JMP 0x00595356                      ; 005951e7
        ;   XREF to: 00595356 (UNCONDITIONAL_JUMP)  ; LAB_00595356
    PUSH 0x6                            ; 005951ec
        ;   Label: LAB_005951ec
    PUSH 0x64d306                       ; 005951ee | = "rotate"
    LEA EAX,[EBP + 0xffffdfe6]          ; 005951f3
    PUSH EAX                            ; 005951f9
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 005951fa
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005951ff
    TEST EAX,EAX                        ; 00595202
    JNZ 0x005952c5                      ; 00595204
        ;   XREF to: 005952c5 (CONDITIONAL_JUMP)  ; LAB_005952c5
    CMP dword ptr [EBP + -0x3a],0x0     ; 0059520a
    JNZ 0x0059522c                      ; 0059520e
        ;   XREF to: 0059522c (CONDITIONAL_JUMP)  ; LAB_0059522c
    LEA EAX,[EBP + 0xffffdfec]          ; 00595210
    MOV BL,byte ptr [EAX]               ; 00595216
        ;   Label: LAB_00595216
    INC BL                              ; 00595218
    AND EBX,0xff                        ; 0059521a
    TEST byte ptr [EBX + 0x6849c4],0x2  ; 00595220 | g_CharacterClassificationTable
    JZ 0x00595261                       ; 00595227
        ;   XREF to: 00595261 (CONDITIONAL_JUMP)  ; LAB_00595261
    INC EAX                             ; 00595229
    JMP 0x00595216                      ; 0059522a
        ;   XREF to: 00595216 (UNCONDITIONAL_JUMP)  ; LAB_00595216
    MOV EDX,dword ptr [EBP + 0x92]      ; 0059522c
        ;   Label: LAB_0059522c
    PUSH EDX                            ; 00595232
    MOV ECX,dword ptr [EBP + -0x62]     ; 00595233
    PUSH ECX                            ; 00595236
    PUSH 0x64d30d                       ; 00595237 | = "Multiple \"rotate\" keywords used in ..."
    MOV EBX,dword ptr [0x00678a60]      ; 0059523c | g_CEditorToolsPtr
    PUSH EBX                            ; 00595242 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00595243
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 00595248
    PUSH 0x0                            ; 0059524b
    LEA EAX,[EBP + 0xffffd3e2]          ; 0059524d
    PUSH EAX                            ; 00595253
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00595254
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00595259
    JMP 0x005927ee                      ; 0059525c
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EDX,[EBP + 0xffffff32]          ; 00595261
        ;   Label: LAB_00595261
    PUSH EDX                            ; 00595267
    LEA EDX,[EBP + 0xffffff36]          ; 00595268
    PUSH EDX                            ; 0059526e
    LEA EDX,[EBP + 0xffffff2e]          ; 0059526f
    PUSH EDX                            ; 00595275
    PUSH 0x64d343                       ; 00595276 | = "%f,%f,%f"
    PUSH EAX                            ; 0059527b
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0059527c
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 00595281
    CMP EAX,0x3                         ; 00595284
    JZ 0x00595301                       ; 00595287
        ;   XREF to: 00595301 (CONDITIONAL_JUMP)  ; LAB_00595301
    LEA EAX,[EBP + 0xffffdfe6]          ; 00595289
    PUSH EAX                            ; 0059528f
    MOV EBX,dword ptr [EBP + 0x92]      ; 00595290
    PUSH EBX                            ; 00595296
    MOV ESI,dword ptr [EBP + -0x62]     ; 00595297
    PUSH ESI                            ; 0059529a
    PUSH 0x64d34c                       ; 0059529b | = "Can't parse rotation PBH in \"rotate\..."
    MOV EDI,dword ptr [0x00678a60]      ; 005952a0 | g_CEditorToolsPtr
    PUSH EDI                            ; 005952a6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005952a7
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 005952ac
    PUSH 0x0                            ; 005952af
    LEA EAX,[EBP + 0xffffd3e2]          ; 005952b1
    PUSH EAX                            ; 005952b7
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005952b8
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005952bd
    JMP 0x005927ee                      ; 005952c0
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    LEA EAX,[EBP + 0xffffdfe6]          ; 005952c5
        ;   Label: LAB_005952c5
    PUSH EAX                            ; 005952cb
    MOV EBX,dword ptr [EBP + 0x92]      ; 005952cc
    PUSH EBX                            ; 005952d2
    MOV ESI,dword ptr [EBP + -0x62]     ; 005952d3
    PUSH ESI                            ; 005952d6
    PUSH 0x64d393                       ; 005952d7 | = "Invalid keyword for animation %s in %..."
    MOV EDI,dword ptr [0x00678a60]      ; 005952dc | g_CEditorToolsPtr
    PUSH EDI                            ; 005952e2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005952e3
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 005952e8
    PUSH 0x0                            ; 005952eb
    LEA EAX,[EBP + 0xffffd3e2]          ; 005952ed
    PUSH EAX                            ; 005952f3
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005952f4
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005952f9
    JMP 0x005927ee                      ; 005952fc
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    FLD float ptr [0x0064d60e]          ; 00595301 | FLOAT_0064d60e
        ;   Label: LAB_00595301
    FLD float ptr [EBP + 0xffffff2e]    ; 00595307
    FMUL ST1                            ; 0059530d
    FLD float ptr [EBP + 0xffffff32]    ; 0059530f
    FMUL ST2                            ; 00595315
    FLD float ptr [EBP + 0xffffff36]    ; 00595317
    FMULP ST3                           ; 0059531d
    MOV ECX,0x1                         ; 0059531f
    LEA EAX,[EBP + 0xffffff2e]          ; 00595324
    MOV dword ptr [EBP + -0x3a],ECX     ; 0059532a
    PUSH EAX                            ; 0059532d
    FXCH                                ; 0059532e
    FSTP float ptr [EBP + 0xffffff2e]   ; 00595330
    PUSH 0x3f87558                      ; 00595336 | g_ZeroVector
    LEA EAX,[EBP + 0xfffffc56]          ; 0059533b
    FSTP float ptr [EBP + 0xffffff32]   ; 00595341
    PUSH EAX                            ; 00595347
    FSTP float ptr [EBP + 0xffffff36]   ; 00595348
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0059534e
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00595353
    MOV ECX,dword ptr [EBP + -0x66]     ; 00595356
        ;   Label: LAB_00595356
    MOV EDX,dword ptr [EBP + -0x22]     ; 00595359
    INC ECX                             ; 0059535c
    MOV EBX,dword ptr [EDX + EBP*0x1 + 0xffffd96a] ; 0059535d
    MOV dword ptr [EBP + -0x66],ECX     ; 00595364
    CMP ECX,EBX                         ; 00595367
    JL 0x00592d69                       ; 00595369
        ;   XREF to: 00592d69 (CONDITIONAL_JUMP)  ; LAB_00592d69
    PUSH 0x13d8                         ; 0059536f
        ;   Label: LAB_0059536f
    PUSH 0x64d3be                       ; 00595374 | = "..\\core\\skeledit.cpp"
    PUSH 0x64d3d3                       ; 00595379 | = "rt"
    PUSH 0x0                            ; 0059537e
    MOV ESI,dword ptr [EBP + -0x5e]     ; 00595380
    PUSH ESI                            ; 00595383 | g_MotionFilenames
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00595384
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 00595389
    MOV dword ptr [EBP + -0x36],EAX     ; 0059538c
    TEST EAX,EAX                        ; 0059538f
    JZ 0x00595994                       ; 00595391
        ;   XREF to: 00595994 (CONDITIONAL_JUMP)  ; LAB_00595994
    MOV EBX,0x1                         ; 00595397
    MOV EDI,EAX                         ; 0059539c
    PUSH EDI                            ; 0059539e
        ;   Label: LAB_0059539e
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0059539f
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005953a4
    TEST EAX,EAX                        ; 005953a7
    JL 0x005953b5                       ; 005953a9
        ;   XREF to: 005953b5 (CONDITIONAL_JUMP)  ; LAB_005953b5
    CMP EAX,0xa                         ; 005953ab
    JNZ 0x0059539e                      ; 005953ae
        ;   XREF to: 0059539e (CONDITIONAL_JUMP)  ; LAB_0059539e
    DEC EBX                             ; 005953b0
    TEST EBX,EBX                        ; 005953b1
    JG 0x0059539e                       ; 005953b3
        ;   XREF to: 0059539e (CONDITIONAL_JUMP)  ; LAB_0059539e
    LEA EAX,[EBP + -0x32]               ; 005953b5
        ;   Label: LAB_005953b5
    PUSH EAX                            ; 005953b8
    PUSH 0x64d3f4                       ; 005953b9 | = "%d\n"
    MOV EBX,dword ptr [EBP + -0x36]     ; 005953be
    PUSH EBX                            ; 005953c1
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005953c2
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005953c7
    LEA EAX,[EBP + -0x2e]               ; 005953ca
    PUSH EAX                            ; 005953cd
    PUSH EBX                            ; 005953ce
    LEA EAX,[EBP + 0xffff8bfe]          ; 005953cf
    PUSH EAX                            ; 005953d5
    MOV ESI,dword ptr [EBP + 0x4e]      ; 005953d6
    CALL core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0 ; 005953d9
        ;   XREF to: 0058a4a0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0(CBoneStructure * this_ptr, _FILE * file, int * frame_count_out)
    XOR EBX,EBX                         ; 005953de
    MOV EDI,dword ptr [ESI + EBP*0x1 + 0xffffd78a] ; 005953e0
    ADD ESP,0xc                         ; 005953e7
    TEST EDI,EDI                        ; 005953ea
    JLE 0x00595414                      ; 005953ec
        ;   XREF to: 00595414 (CONDITIONAL_JUMP)  ; LAB_00595414
    MOV EAX,dword ptr [EBP + -0x36]     ; 005953ee
        ;   Label: LAB_005953ee
    PUSH EAX                            ; 005953f1
    LEA EAX,[EBP + 0xffff8bfe]          ; 005953f2
    PUSH EAX                            ; 005953f8
    INC EBX                             ; 005953f9
    CALL core_skeledit.cpp_CBoneStructure_skipBONframe_FUN_0058abb0 ; 005953fa
        ;   XREF to: 0058abb0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_skipBONframe_FUN_0058abb0(CBoneStructure * this_ptr, _FILE * file_handle)
    MOV EDX,dword ptr [EBP + -0x2e]     ; 005953ff
    ADD ESP,0x8                         ; 00595402
    DEC EDX                             ; 00595405
    MOV ECX,dword ptr [ESI + EBP*0x1 + 0xffffd78a] ; 00595406
    MOV dword ptr [EBP + -0x2e],EDX     ; 0059540d
    CMP EBX,ECX                         ; 00595410
    JL 0x005953ee                       ; 00595412
        ;   XREF to: 005953ee (CONDITIONAL_JUMP)  ; LAB_005953ee
    MOV EAX,dword ptr [EBP + -0x62]     ; 00595414
        ;   Label: LAB_00595414
    XOR ESI,ESI                         ; 00595417
    MOV EBX,0x1                         ; 00595419
    MOV dword ptr [EBP + -0x26],ESI     ; 0059541e
    MOV dword ptr [EBP + 0x56],ESI      ; 00595421
    MOV EDX,dword ptr [EAX + 0x64]      ; 00595424
    MOV dword ptr [EBP + -0x2a],EBX     ; 00595427
    TEST EDX,EDX                        ; 0059542a
    JL 0x00595667                       ; 0059542c
        ;   XREF to: 00595667 (CONDITIONAL_JUMP)  ; LAB_00595667
    MOV EAX,dword ptr [EBP + 0xffffff7e] ; 00595432
        ;   Label: LAB_00595432
    SUB ESP,0x4                         ; 00595438
    MOV dword ptr [EBP + 0x5e],EAX      ; 0059543b
    MOV ESI,dword ptr [EBP + 0x56]      ; 0059543e
    FILD dword ptr [EBP + 0x5e]         ; 00595441
    MOV EAX,dword ptr [EBP + -0x62]     ; 00595444
    FSTP float ptr [ESP]                ; 00595447
    MOV EAX,dword ptr [EAX + 0x60]      ; 0059544a
    ADD EAX,ESI                         ; 0059544d
    MOV EDI,dword ptr [0x00678a60]      ; 0059544f | g_CEditorToolsPtr
    MOV dword ptr [EBP + 0x5e],EAX      ; 00595455
    SUB ESP,0x4                         ; 00595458
    FILD dword ptr [EBP + 0x5e]         ; 0059545b
    FSTP float ptr [ESP]                ; 0059545e
    PUSH EDI                            ; 00595461 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 00595462
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float current_progress, float total_progress)
    MOV EAX,dword ptr [EBP + -0x2e]     ; 00595467
    ADD ESP,0xc                         ; 0059546a
    TEST EAX,EAX                        ; 0059546d
    JLE 0x005959e0                      ; 0059546f
        ;   XREF to: 005959e0 (CONDITIONAL_JUMP)  ; LAB_005959e0
    MOV EDX,dword ptr [EBP + -0x4e]     ; 00595475
    PUSH EDX                            ; 00595478
    MOV ECX,dword ptr [EBP + -0x36]     ; 00595479
    MOV EBX,dword ptr [EBP + -0x2e]     ; 0059547c
    PUSH ECX                            ; 0059547f
    LEA EAX,[EBP + 0xffff8bfe]          ; 00595480
    DEC EBX                             ; 00595486
    PUSH EAX                            ; 00595487
    MOV dword ptr [EBP + -0x2e],EBX     ; 00595488
    CALL core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10 ; 0059548b
        ;   XREF to: 0058aa10 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10(CBoneStructure * this_ptr, _FILE * file, int mirror_flag)
    ADD ESP,0xc                         ; 00595490
    LEA EAX,[EBP + 0xffff8bfe]          ; 00595493
    PUSH EAX                            ; 00595499
    MOV ESI,dword ptr [EBP + -0x3a]     ; 0059549a
    CALL core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0 ; 0059549d
        ;   XREF to: 0058adb0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0(CBoneStructure * this_ptr)
    ADD ESP,0x4                         ; 005954a2
    TEST ESI,ESI                        ; 005954a5
    JZ 0x005954ee                       ; 005954a7
        ;   XREF to: 005954ee (CONDITIONAL_JUMP)  ; LAB_005954ee
    MOV EDI,dword ptr [EBP + 0xffff8bfe] ; 005954a9
    XOR ESI,ESI                         ; 005954af
    TEST EDI,EDI                        ; 005954b1
    JLE 0x005954df                      ; 005954b3
        ;   XREF to: 005954df (CONDITIONAL_JUMP)  ; LAB_005954df
    LEA EBX,[EBP + 0xffff8c02]          ; 005954b5
    ADD EBX,0x54                        ; 005954bb
    LEA EAX,[EBP + 0xfffffc56]          ; 005954be
        ;   Label: LAB_005954be
    PUSH EAX                            ; 005954c4
    PUSH EBX                            ; 005954c5
    INC ESI                             ; 005954c6
    CALL core_xform.cpp_multiplyMatrix3x4InPlace_FUN_005f50c0 ; 005954c7
        ;   XREF to: 005f50c0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4InPlace_FUN_005f50c0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b)
    MOV EDI,dword ptr [EBP + 0xffff8bfe] ; 005954cc
    ADD ESP,0x8                         ; 005954d2
    ADD EBX,0x84                        ; 005954d5
    CMP ESI,EDI                         ; 005954db
    JL 0x005954be                       ; 005954dd
        ;   XREF to: 005954be (CONDITIONAL_JUMP)  ; LAB_005954be
    LEA EAX,[EBP + 0xffff8bfe]          ; 005954df
        ;   Label: LAB_005954df
    PUSH EAX                            ; 005954e5
    CALL core_skeledit.cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80 ; 005954e6
        ;   XREF to: 0058ac80 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80(CBoneStructure * this_ptr)
    ADD ESP,0x4                         ; 005954eb
    LEA EAX,[EBP + 0xffffc122]          ; 005954ee
        ;   Label: LAB_005954ee
    PUSH EAX                            ; 005954f4
    LEA EAX,[EBP + 0xffff8bfe]          ; 005954f5
    PUSH EAX                            ; 005954fb
    CALL core_skeledit.cpp_CBoneStructure_applyMatrixArray_FUN_0058af40 ; 005954fc
        ;   XREF to: 0058af40 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_applyMatrixArray_FUN_0058af40(CBoneStructure * this_ptr, CMatrix3x4f * matrices)
    MOV EAX,dword ptr [EBP + -0x2a]     ; 00595501
    ADD ESP,0x8                         ; 00595504
    TEST EAX,EAX                        ; 00595507
    JZ 0x005955a8                       ; 00595509
        ;   XREF to: 005955a8 (CONDITIONAL_JUMP)  ; LAB_005955a8
    MOV EAX,dword ptr [EBP + 0xffff8c62] ; 0059550f
    MOV dword ptr [EBP + 0xffffff22],EAX ; 00595515
    MOV EAX,dword ptr [EBP + 0xffff8c72] ; 0059551b
    MOV dword ptr [EBP + 0xffffff26],EAX ; 00595521
    MOV EAX,dword ptr [EBP + 0xffff8c82] ; 00595527
    LEA EDX,[EBP + 0xfffffe92]          ; 0059552d
    MOV dword ptr [EBP + 0xffffff2a],EAX ; 00595533
    LEA EAX,[EBP + 0xffffff22]          ; 00595539
    CMP EDX,EAX                         ; 0059553f
    JZ 0x00595567                       ; 00595541
        ;   XREF to: 00595567 (CONDITIONAL_JUMP)  ; LAB_00595567
    MOV EAX,dword ptr [EBP + 0xffff8c62] ; 00595543
    MOV dword ptr [EBP + 0xfffffe92],EAX ; 00595549
    MOV EAX,dword ptr [EBP + 0xffff8c72] ; 0059554f
    MOV dword ptr [EBP + 0xfffffe96],EAX ; 00595555
    MOV EAX,dword ptr [EBP + 0xffff8c82] ; 0059555b
    MOV dword ptr [EBP + 0xfffffe9a],EAX ; 00595561
    LEA EAX,[EBP + 0xfffffeda]          ; 00595567
        ;   Label: LAB_00595567
    PUSH EAX                            ; 0059556d
    LEA EAX,[EBP + 0xffff8c56]          ; 0059556e
    PUSH EAX                            ; 00595574
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 00595575
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    MOV EBX,EAX                         ; 0059557a
    LEA EAX,[EBP + 0xfffffece]          ; 0059557c
    ADD ESP,0x8                         ; 00595582
    CMP EAX,EBX                         ; 00595585
    JZ 0x005955a3                       ; 00595587
        ;   XREF to: 005955a3 (CONDITIONAL_JUMP)  ; LAB_005955a3
    MOV EAX,dword ptr [EBX]             ; 00595589
    MOV dword ptr [EBP + 0xfffffece],EAX ; 0059558b
    MOV EAX,dword ptr [EBX + 0x4]       ; 00595591
    MOV dword ptr [EBP + 0xfffffed2],EAX ; 00595594
    MOV EAX,dword ptr [EBX + 0x8]       ; 0059559a
    MOV dword ptr [EBP + 0xfffffed6],EAX ; 0059559d
    XOR EDX,EDX                         ; 005955a3
        ;   Label: LAB_005955a3
    MOV dword ptr [EBP + -0x2a],EDX     ; 005955a5
    FLD float ptr [EBP + 0xffff8c62]    ; 005955a8
        ;   Label: LAB_005955a8
    FLD float ptr [EBP + 0xffff8c72]    ; 005955ae
    FLD float ptr [EBP + 0xffff8c82]    ; 005955b4
    MOV EAX,dword ptr [EBP + 0xffff8c62] ; 005955ba
    MOV EDX,dword ptr [EBP + -0x62]     ; 005955c0
    MOV dword ptr [EBP + 0xfffffee6],EAX ; 005955c3
    FXCH ST2                            ; 005955c9
    FSUB float ptr [EBP + 0xfffffe92]   ; 005955cb
    FXCH                                ; 005955d1
    FSUB float ptr [EBP + 0xfffffe96]   ; 005955d3
    FXCH ST2                            ; 005955d9
    FSUB float ptr [EBP + 0xfffffe9a]   ; 005955db
    FXCH                                ; 005955e1
    FSTP float ptr [EBP + 0xffffff16]   ; 005955e3
    FXCH                                ; 005955e9
    FSTP float ptr [EBP + 0xffffff1a]   ; 005955eb
    FSTP float ptr [EBP + 0xffffff1e]   ; 005955f1
    MOV EAX,dword ptr [EBP + 0xffff8c72] ; 005955f7
    FLD float ptr [EBP + 0xffffff16]    ; 005955fd
    FLD float ptr [EBP + 0xffffff1a]    ; 00595603
    FLD float ptr [EBP + 0xffffff1e]    ; 00595609
    MOV dword ptr [EBP + 0xfffffeea],EAX ; 0059560f
    FXCH ST2                            ; 00595615
    FADD float ptr [EBP + 0xffffff46]   ; 00595617
    FXCH                                ; 0059561d
    FADD float ptr [EBP + 0xffffff4a]   ; 0059561f
    FXCH ST2                            ; 00595625
    FADD float ptr [EBP + 0xffffff4e]   ; 00595627
    MOV EAX,dword ptr [EBP + 0xffff8c82] ; 0059562d
    FXCH                                ; 00595633
    FSTP float ptr [EBP + 0xfffffeaa]   ; 00595635
    FXCH                                ; 0059563b
    FSTP float ptr [EBP + 0xfffffeae]   ; 0059563d
    FSTP float ptr [EBP + 0xfffffeb2]   ; 00595643
    MOV dword ptr [EBP + 0xfffffeee],EAX ; 00595649
    MOV EAX,dword ptr [EBP + 0x56]      ; 0059564f
    MOV ECX,dword ptr [EDX + 0x64]      ; 00595652
    CMP EAX,ECX                         ; 00595655
    JL 0x00595a54                       ; 00595657
        ;   XREF to: 00595a54 (CONDITIONAL_JUMP)  ; LAB_00595a54
    CMP dword ptr [EBP + -0x5a],0x0     ; 0059565d
    JZ 0x00595a14                       ; 00595661
        ;   XREF to: 00595a14 (CONDITIONAL_JUMP)  ; LAB_00595a14
    PUSH 0x147a                         ; 00595667
        ;   Label: LAB_00595667
    PUSH 0x64d419                       ; 0059566c | = "..\\core\\skeledit.cpp"
    MOV EBX,dword ptr [EBP + -0x36]     ; 00595671
    PUSH EBX                            ; 00595674
    XOR ESI,ESI                         ; 00595675
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00595677
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    MOV EAX,dword ptr [EBP + -0x62]     ; 0059567c
    MOV dword ptr [EBP + 0xfffffe86],ESI ; 0059567f
    MOV dword ptr [EBP + 0xfffffe8a],ESI ; 00595685
    MOV dword ptr [EBP + 0xfffffe8e],ESI ; 0059568b
    ADD ESP,0xc                         ; 00595691
    MOV EDX,dword ptr [EAX + 0x64]      ; 00595694
    XOR EBX,EBX                         ; 00595697
    TEST EDX,EDX                        ; 00595699
    JLE 0x00595806                      ; 0059569b
        ;   XREF to: 00595806 (CONDITIONAL_JUMP)  ; LAB_00595806
    MOV ESI,dword ptr [EBP + -0x62]     ; 005956a1
        ;   Label: LAB_005956a1
    MOV ESI,dword ptr [ESI + 0x60]      ; 005956a4
    MOV EAX,dword ptr [EBP + -0x62]     ; 005956a7
    ADD ESI,EBX                         ; 005956aa
    MOV EDX,dword ptr [EAX + 0x64]      ; 005956ac
    IMUL EAX,ESI,0xc                    ; 005956af
    DEC EDX                             ; 005956b2
    CMP EBX,EDX                         ; 005956b3
    JGE 0x00595cad                      ; 005956b5
        ;   XREF to: 00595cad (CONDITIONAL_JUMP)  ; LAB_00595cad
    LEA ECX,[ESI + 0x1]                 ; 005956bb
    IMUL ECX,ECX,0xc                    ; 005956be
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005956c1
    MOV EDX,dword ptr [EDX + 0x29374]   ; 005956c7
    LEA EDI,[EDX + EAX*0x1]             ; 005956cd
    ADD EDX,ECX                         ; 005956d0
    FLD float ptr [EDX]                 ; 005956d2
    FSUB float ptr [EDI]                ; 005956d4
    FSTP float ptr [EBP + 0xffffff52]   ; 005956d6
    FLD float ptr [EDX + 0x4]           ; 005956dc
    FSUB float ptr [EDI + 0x4]          ; 005956df
    FSTP float ptr [EBP + 0xffffff56]   ; 005956e2
    FLD float ptr [EDX + 0x8]           ; 005956e8
    FSUB float ptr [EDI + 0x8]          ; 005956eb
    MOV EDI,dword ptr [EBP + 0x8e]      ; 005956ee
    FSTP float ptr [EBP + 0xffffff5a]   ; 005956f4
    MOV EDI,dword ptr [EDI + 0x29378]   ; 005956fa
    ADD EDI,EAX                         ; 00595700
    LEA EAX,[EBP + 0xffffff52]          ; 00595702
    CMP EDI,EAX                         ; 00595708
    JZ 0x00595726                       ; 0059570a
        ;   XREF to: 00595726 (CONDITIONAL_JUMP)  ; LAB_00595726
    MOV EAX,dword ptr [EBP + 0xffffff52] ; 0059570c
    MOV dword ptr [EDI],EAX             ; 00595712
    MOV EAX,dword ptr [EBP + 0xffffff56] ; 00595714
    MOV dword ptr [EDI + 0x4],EAX       ; 0059571a
    MOV EAX,dword ptr [EBP + 0xffffff5a] ; 0059571d
    MOV dword ptr [EDI + 0x8],EAX       ; 00595723
        ;   Label: LAB_00595723
    IMUL EAX,ESI,0xc                    ; 00595726
        ;   Label: LAB_00595726
    TEST byte ptr [EBP + -0x56],0x1     ; 00595729
    JZ 0x00595d8a                       ; 0059572d
        ;   XREF to: 00595d8a (CONDITIONAL_JUMP)  ; LAB_00595d8a
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00595733
    MOV EDX,dword ptr [EDX + 0x29374]   ; 00595739
    MOV dword ptr [EDX + EAX*0x1],0x0   ; 0059573f
    CMP EBX,dword ptr [EBP + -0x42]     ; 00595746
    JL 0x0059576b                       ; 00595749
        ;   XREF to: 0059576b (CONDITIONAL_JUMP)  ; LAB_0059576b
    CMP EBX,dword ptr [EBP + -0xa]      ; 0059574b
    JG 0x0059576b                       ; 0059574e
        ;   XREF to: 0059576b (CONDITIONAL_JUMP)  ; LAB_0059576b
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00595750
    MOV EDX,dword ptr [EDX + 0x29378]   ; 00595756
    FLD float ptr [EBP + 0xfffffe86]    ; 0059575c
    FADD float ptr [EDX + EAX*0x1]      ; 00595762
    FSTP float ptr [EBP + 0xfffffe86]   ; 00595765
    IMUL EAX,ESI,0xc                    ; 0059576b
        ;   Label: LAB_0059576b
    TEST byte ptr [EBP + -0x56],0x2     ; 0059576e
    JZ 0x00595da2                       ; 00595772
        ;   XREF to: 00595da2 (CONDITIONAL_JUMP)  ; LAB_00595da2
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00595778
    MOV EDX,dword ptr [EDX + 0x29374]   ; 0059577e
    MOV dword ptr [EDX + EAX*0x1 + 0x4],0x0 ; 00595784
    CMP EBX,dword ptr [EBP + -0x42]     ; 0059578c
    JL 0x005957b2                       ; 0059578f
        ;   XREF to: 005957b2 (CONDITIONAL_JUMP)  ; LAB_005957b2
    CMP EBX,dword ptr [EBP + -0xa]      ; 00595791
    JG 0x005957b2                       ; 00595794
        ;   XREF to: 005957b2 (CONDITIONAL_JUMP)  ; LAB_005957b2
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00595796
    MOV EDX,dword ptr [EDX + 0x29378]   ; 0059579c
    FLD float ptr [EBP + 0xfffffe8a]    ; 005957a2
    FADD float ptr [EDX + EAX*0x1 + 0x4] ; 005957a8
    FSTP float ptr [EBP + 0xfffffe8a]   ; 005957ac
    IMUL ESI,ESI,0xc                    ; 005957b2
        ;   Label: LAB_005957b2
    TEST byte ptr [EBP + -0x56],0x4     ; 005957b5
    JZ 0x00595dbb                       ; 005957b9
        ;   XREF to: 00595dbb (CONDITIONAL_JUMP)  ; LAB_00595dbb
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005957bf
    MOV EAX,dword ptr [EAX + 0x29374]   ; 005957c5
    MOV dword ptr [ESI + EAX*0x1 + 0x8],0x0 ; 005957cb
    CMP EBX,dword ptr [EBP + -0x42]     ; 005957d3
    JL 0x005957f9                       ; 005957d6
        ;   XREF to: 005957f9 (CONDITIONAL_JUMP)  ; LAB_005957f9
    CMP EBX,dword ptr [EBP + -0xa]      ; 005957d8
    JG 0x005957f9                       ; 005957db
        ;   XREF to: 005957f9 (CONDITIONAL_JUMP)  ; LAB_005957f9
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005957dd
    MOV EAX,dword ptr [EAX + 0x29378]   ; 005957e3
    FLD float ptr [EBP + 0xfffffe8e]    ; 005957e9
    FADD float ptr [ESI + EAX*0x1 + 0x8] ; 005957ef
    FSTP float ptr [EBP + 0xfffffe8e]   ; 005957f3
    MOV EAX,dword ptr [EBP + -0x62]     ; 005957f9
        ;   Label: LAB_005957f9
    INC EBX                             ; 005957fc
    CMP EBX,dword ptr [EAX + 0x64]      ; 005957fd
    JL 0x005956a1                       ; 00595800
        ;   XREF to: 005956a1 (CONDITIONAL_JUMP)  ; LAB_005956a1
    XOR EBX,EBX                         ; 00595806
        ;   Label: LAB_00595806
    FLD float ptr [EBP + 0xfffffec2]    ; 00595808
    MOV dword ptr [EBP + 0xfffffe9e],EBX ; 0059580e
    MOV dword ptr [EBP + 0xfffffea2],EBX ; 00595814
    MOV dword ptr [EBP + 0xfffffea6],EBX ; 0059581a
    FCOMP float ptr [EBP + -0x46]       ; 00595820
    FNSTSW AX                           ; 00595823
    SAHF                                ; 00595825
    JZ 0x00595dd4                       ; 00595826
        ;   XREF to: 00595dd4 (CONDITIONAL_JUMP)  ; LAB_00595dd4
    FLD float ptr [EBP + 0xfffffec2]    ; 0059582c
    FCOMP float ptr [EBP + -0x4a]       ; 00595832
    FNSTSW AX                           ; 00595835
    SAHF                                ; 00595837
    JZ 0x00595856                       ; 00595838
        ;   XREF to: 00595856 (CONDITIONAL_JUMP)  ; LAB_00595856
    TEST byte ptr [EBP + -0x56],0x1     ; 0059583a
    JZ 0x00595dfd                       ; 0059583e
        ;   XREF to: 00595dfd (CONDITIONAL_JUMP)  ; LAB_00595dfd
    FLD float ptr [EBP + 0xfffffec2]    ; 00595844
    FSUB float ptr [EBP + 0xfffffe86]   ; 0059584a
    FSTP float ptr [EBP + 0xfffffe9e]   ; 00595850
    FLD float ptr [EBP + 0xfffffec6]    ; 00595856
        ;   Label: LAB_00595856
    FCOMP float ptr [EBP + -0x46]       ; 0059585c
    FNSTSW AX                           ; 0059585f
    SAHF                                ; 00595861
    JZ 0x00595e15                       ; 00595862
        ;   XREF to: 00595e15 (CONDITIONAL_JUMP)  ; LAB_00595e15
    FLD float ptr [EBP + 0xfffffec6]    ; 00595868
    FCOMP float ptr [EBP + -0x4a]       ; 0059586e
    FNSTSW AX                           ; 00595871
    SAHF                                ; 00595873
    JZ 0x00595892                       ; 00595874
        ;   XREF to: 00595892 (CONDITIONAL_JUMP)  ; LAB_00595892
    TEST byte ptr [EBP + -0x56],0x2     ; 00595876
    JZ 0x00595e3e                       ; 0059587a
        ;   XREF to: 00595e3e (CONDITIONAL_JUMP)  ; LAB_00595e3e
    FLD float ptr [EBP + 0xfffffec6]    ; 00595880
    FSUB float ptr [EBP + 0xfffffe8a]   ; 00595886
    FSTP float ptr [EBP + 0xfffffea2]   ; 0059588c
    FLD float ptr [EBP + 0xfffffeca]    ; 00595892
        ;   Label: LAB_00595892
    FCOMP float ptr [EBP + -0x46]       ; 00595898
    FNSTSW AX                           ; 0059589b
    SAHF                                ; 0059589d
    JZ 0x00595e57                       ; 0059589e
        ;   XREF to: 00595e57 (CONDITIONAL_JUMP)  ; LAB_00595e57
    FLD float ptr [EBP + 0xfffffeca]    ; 005958a4
    FCOMP float ptr [EBP + -0x4a]       ; 005958aa
    FNSTSW AX                           ; 005958ad
    SAHF                                ; 005958af
    JZ 0x005958ce                       ; 005958b0
        ;   XREF to: 005958ce (CONDITIONAL_JUMP)  ; LAB_005958ce
    TEST byte ptr [EBP + -0x56],0x4     ; 005958b2
    JZ 0x00595e80                       ; 005958b6
        ;   XREF to: 00595e80 (CONDITIONAL_JUMP)  ; LAB_00595e80
    FLD float ptr [EBP + 0xfffffeca]    ; 005958bc
    FSUB float ptr [EBP + 0xfffffe8e]   ; 005958c2
    FSTP float ptr [EBP + 0xfffffea6]   ; 005958c8
    FLD float ptr [EBP + 0xfffffea2]    ; 005958ce
        ;   Label: LAB_005958ce
    FMUL ST0                            ; 005958d4
    FLD float ptr [EBP + 0xfffffe9e]    ; 005958d6
    FMUL ST0                            ; 005958dc
    FADDP                               ; 005958de
    FLD float ptr [EBP + 0xfffffea6]    ; 005958e0
    FMUL ST0                            ; 005958e6
    FADDP                               ; 005958e8
    FSQRT                               ; 005958ea
    FLDZ                                ; 005958ec
    FCOMPP                              ; 005958ee
    FNSTSW AX                           ; 005958f0
    SAHF                                ; 005958f2
    JNC 0x00593893                      ; 005958f3
        ;   XREF to: 00593893 (CONDITIONAL_JUMP)  ; LAB_00593893
    MOV EAX,dword ptr [EBP + -0xa]      ; 005958f9
    MOV EBX,dword ptr [EBP + -0x42]     ; 005958fc
    SUB EAX,EBX                         ; 005958ff
    INC EAX                             ; 00595901
    FLD1                                ; 00595902
    MOV dword ptr [EBP + 0x5e],EAX      ; 00595904
    FLD float ptr [EBP + 0xfffffe9e]    ; 00595907
    FILD dword ptr [EBP + 0x5e]         ; 0059590d
    FSTP float ptr [EBP + 0x36]         ; 00595910
    FXCH                                ; 00595913
    FDIV float ptr [EBP + 0x36]         ; 00595915
    FXCH                                ; 00595918
    FMUL ST1                            ; 0059591a
    FLD float ptr [EBP + 0xfffffea2]    ; 0059591c
    FMUL ST2                            ; 00595922
    FLD float ptr [EBP + 0xfffffea6]    ; 00595924
    FMULP ST3                           ; 0059592a
    MOV ESI,dword ptr [EBP + -0xa]      ; 0059592c
    FXCH                                ; 0059592f
    FSTP float ptr [EBP + 0xfffffe9e]   ; 00595931
    FSTP float ptr [EBP + 0xfffffea2]   ; 00595937
    FSTP float ptr [EBP + 0xfffffea6]   ; 0059593d
    CMP EBX,ESI                         ; 00595943
    JG 0x00593893                       ; 00595945
        ;   XREF to: 00593893 (CONDITIONAL_JUMP)  ; LAB_00593893
        ;   Label: LAB_00595945
    MOV EAX,dword ptr [EBP + -0x62]     ; 0059594b
    MOV EAX,dword ptr [EAX + 0x60]      ; 0059594e
    ADD EAX,EBX                         ; 00595951
    IMUL EAX,EAX,0xc                    ; 00595953
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00595956
    MOV EDX,dword ptr [EDX + 0x29378]   ; 0059595c
    FLD float ptr [EDX + EAX*0x1]       ; 00595962
    FADD float ptr [EBP + 0xfffffe9e]   ; 00595965
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 0059596b
    FXCH                                ; 0059596f
    FSTP float ptr [EDX + EAX*0x1]      ; 00595971
    FADD float ptr [EBP + 0xfffffea2]   ; 00595974
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 0059597a
    FXCH                                ; 0059597e
    FSTP float ptr [EDX + EAX*0x1 + 0x4] ; 00595980
    FADD float ptr [EBP + 0xfffffea6]   ; 00595984
    INC EBX                             ; 0059598a
    FSTP float ptr [EDX + EAX*0x1 + 0x8] ; 0059598b
    CMP EBX,dword ptr [EBP + -0xa]      ; 0059598f
    JMP 0x00595945                      ; 00595992
        ;   XREF to: 00595945 (UNCONDITIONAL_JUMP)  ; LAB_00595945
    MOV EDI,dword ptr [EBP + 0x92]      ; 00595994
        ;   Label: LAB_00595994
    PUSH EDI                            ; 0059599a
    PUSH ESI                            ; 0059599b | g_MotionFilenames
    PUSH 0x64d3d6                       ; 0059599c | = "Can't open %s mentioned in %s"
    MOV EDX,dword ptr [0x00678a60]      ; 005959a1 | g_CEditorToolsPtr
    PUSH EDX                            ; 005959a7 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005959a8
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 005959ad
    PUSH 0x0                            ; 005959b0
    LEA EAX,[EBP + 0xffffd3e2]          ; 005959b2
    PUSH EAX                            ; 005959b8
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005959b9
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005959be
    JMP 0x005927ee                      ; 005959c1
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV ECX,dword ptr [EBP + 0x56]      ; 005959c6
        ;   Label: LAB_005959c6
    MOV EDX,dword ptr [EBP + -0x62]     ; 005959c9
    INC ECX                             ; 005959cc
    MOV EBX,dword ptr [EDX + 0x64]      ; 005959cd
    MOV dword ptr [EBP + 0x56],ECX      ; 005959d0
    CMP ECX,EBX                         ; 005959d3
    JLE 0x00595432                      ; 005959d5
        ;   XREF to: 00595432 (CONDITIONAL_JUMP)  ; LAB_00595432
    JMP 0x00595667                      ; 005959db
        ;   XREF to: 00595667 (UNCONDITIONAL_JUMP)  ; LAB_00595667
    MOV EDX,dword ptr [EBP + -0x62]     ; 005959e0
        ;   Label: LAB_005959e0
    CMP ESI,dword ptr [EDX + 0x64]      ; 005959e3
    JZ 0x00595667                       ; 005959e6
        ;   XREF to: 00595667 (CONDITIONAL_JUMP)  ; LAB_00595667
    MOV EBX,0x64d3f8                    ; 005959ec | = "..\\core\\skeledit.cpp"
    MOV ESI,0x1408                      ; 005959f1
    PUSH 0x64d40d                       ; 005959f6 | = "Hell froze!"
    MOV dword ptr [0x02f0ca48],EBX      ; 005959fb | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00595a01 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00595a07
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00595a0c
    JMP 0x00595667                      ; 00595a0f
        ;   XREF to: 00595667 (UNCONDITIONAL_JUMP)  ; LAB_00595667
    LEA EAX,[EBP + 0xfffffef2]          ; 00595a14
        ;   Label: LAB_00595a14
    LEA EDX,[EBP + 0xfffffeaa]          ; 00595a1a
    CMP EAX,EDX                         ; 00595a20
    JZ 0x00595a48                       ; 00595a22
        ;   XREF to: 00595a48 (CONDITIONAL_JUMP)  ; LAB_00595a48
    MOV EAX,dword ptr [EBP + 0xfffffeaa] ; 00595a24
    MOV dword ptr [EBP + 0xfffffef2],EAX ; 00595a2a
    MOV EAX,dword ptr [EBP + 0xfffffeae] ; 00595a30
    MOV dword ptr [EBP + 0xfffffef6],EAX ; 00595a36
    MOV EAX,dword ptr [EBP + 0xfffffeb2] ; 00595a3c
    MOV dword ptr [EBP + 0xfffffefa],EAX ; 00595a42
    MOV dword ptr [EBP + -0x26],0x1     ; 00595a48
        ;   Label: LAB_00595a48
    JMP 0x00595667                      ; 00595a4f
        ;   XREF to: 00595667 (UNCONDITIONAL_JUMP)  ; LAB_00595667
    CMP dword ptr [EBP + -0x5a],0x0     ; 00595a54
        ;   Label: LAB_00595a54
    JZ 0x00595b2f                       ; 00595a58
        ;   XREF to: 00595b2f (CONDITIONAL_JUMP)  ; LAB_00595b2f
    MOV ESI,dword ptr [EDX + 0x60]      ; 00595a5e
    ADD ESI,ECX                         ; 00595a61
    DEC ESI                             ; 00595a63
    SUB ESI,EAX                         ; 00595a64
    IMUL EBX,ESI,0xc                    ; 00595a66
        ;   Label: LAB_00595a66
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00595a69
    MOV EAX,dword ptr [EAX + 0x29374]   ; 00595a6f
    ADD EBX,EAX                         ; 00595a75
    LEA EAX,[EBP + 0xfffffeaa]          ; 00595a77
    CMP EBX,EAX                         ; 00595a7d
    JZ 0x00595a9b                       ; 00595a7f
        ;   XREF to: 00595a9b (CONDITIONAL_JUMP)  ; LAB_00595a9b
    MOV EAX,dword ptr [EBP + 0xfffffeaa] ; 00595a81
    MOV dword ptr [EBX],EAX             ; 00595a87
    MOV EAX,dword ptr [EBP + 0xfffffeae] ; 00595a89
    MOV dword ptr [EBX + 0x4],EAX       ; 00595a8f
    MOV EAX,dword ptr [EBP + 0xfffffeb2] ; 00595a92
    MOV dword ptr [EBX + 0x8],EAX       ; 00595a98
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00595a9b
        ;   Label: LAB_00595a9b
    MOV EBX,dword ptr [EBX + 0x28558]   ; 00595aa1
    IMUL EBX,ESI                        ; 00595aa7
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00595aaa
    MOV EAX,dword ptr [EAX + 0x29370]   ; 00595ab0
    SHL EBX,0x4                         ; 00595ab6
    MOV ESI,dword ptr [EBP + -0x52]     ; 00595ab9
    ADD EBX,EAX                         ; 00595abc
    TEST ESI,ESI                        ; 00595abe
    JNZ 0x00595b39                      ; 00595ac0
        ;   XREF to: 00595b39 (CONDITIONAL_JUMP)  ; LAB_00595b39
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00595ac2
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00595ac8
    MOV dword ptr [EBP + 0x2a],ESI      ; 00595ace
    TEST EDX,EDX                        ; 00595ad1
    JLE 0x005959c6                      ; 00595ad3
        ;   XREF to: 005959c6 (CONDITIONAL_JUMP)  ; LAB_005959c6
    LEA EAX,[EBP + 0xffff8c02]          ; 00595ad9
    ADD EAX,0x54                        ; 00595adf
    MOV dword ptr [EBP + 0x42],EAX      ; 00595ae2
    MOV ESI,dword ptr [EBP + 0x42]      ; 00595ae5
        ;   Label: LAB_00595ae5
    MOV EDI,EBX                         ; 00595ae8
    PUSH ESI                            ; 00595aea
    LEA ESI,[EBP + 0xfffffe76]          ; 00595aeb
    ADD EBX,0x10                        ; 00595af1
    CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420 ; 00595af4
        ;   XREF to: 005f7420 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_matrixToQuaternion_FUN_005f7420(CMatrix3x3f * matrix_in, CQuaternion4f * quat_out)
    LEA ESI,[EBP + 0xfffffe76]          ; 00595af9
    MOV EAX,dword ptr [EBP + 0x2a]      ; 00595aff
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00595b02
    ADD ESP,0x4                         ; 00595b08
    JMP 0x00605062                      ; 00595b0b
        ;   XREF to: 00605062 (UNCONDITIONAL_JUMP)  ; LAB_00605062
    MOV EDI,dword ptr [EBP + 0x42]      ; 00595b10
        ;   Label: LAB_00595b10
    MOV dword ptr [EBP + 0x2a],EAX      ; 00595b13
    ADD EDI,0x84                        ; 00595b16
    MOV ECX,dword ptr [EDX + 0x28558]   ; 00595b1c
    MOV dword ptr [EBP + 0x42],EDI      ; 00595b22
    CMP EAX,ECX                         ; 00595b25
    JGE 0x005959c6                      ; 00595b27
        ;   XREF to: 005959c6 (CONDITIONAL_JUMP)  ; LAB_005959c6
    JMP 0x00595ae5                      ; 00595b2d
        ;   XREF to: 00595ae5 (UNCONDITIONAL_JUMP)  ; LAB_00595ae5
    MOV ESI,dword ptr [EDX + 0x60]      ; 00595b2f
        ;   Label: LAB_00595b2f
    ADD ESI,EAX                         ; 00595b32
    JMP 0x00595a66                      ; 00595b34
        ;   XREF to: 00595a66 (UNCONDITIONAL_JUMP)  ; LAB_00595a66
    LEA EAX,[EBP + 0xffffff0a]          ; 00595b39
        ;   Label: LAB_00595b39
    PUSH EAX                            ; 00595b3f
    LEA EAX,[EBP + 0xffff8c56]          ; 00595b40
    PUSH EAX                            ; 00595b46
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 00595b47
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    MOV CL,byte ptr [EBP + -0x52]       ; 00595b4c
    ADD ESP,0x8                         ; 00595b4f
    TEST CL,0x1                         ; 00595b52
    JZ 0x00595b63                       ; 00595b55
        ;   XREF to: 00595b63 (CONDITIONAL_JUMP)  ; LAB_00595b63
    MOV EAX,dword ptr [EBP + 0xfffffece] ; 00595b57
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 00595b5d
    TEST byte ptr [EBP + -0x52],0x2     ; 00595b63
        ;   Label: LAB_00595b63
    JZ 0x00595b75                       ; 00595b67
        ;   XREF to: 00595b75 (CONDITIONAL_JUMP)  ; LAB_00595b75
    MOV EAX,dword ptr [EBP + 0xfffffed2] ; 00595b69
    MOV dword ptr [EBP + 0xffffff0e],EAX ; 00595b6f
    TEST byte ptr [EBP + -0x52],0x4     ; 00595b75
        ;   Label: LAB_00595b75
    JZ 0x00595b87                       ; 00595b79
        ;   XREF to: 00595b87 (CONDITIONAL_JUMP)  ; LAB_00595b87
    MOV EAX,dword ptr [EBP + 0xfffffed6] ; 00595b7b
    MOV dword ptr [EBP + 0xffffff12],EAX ; 00595b81
    LEA EAX,[EBP + 0xffffff0a]          ; 00595b87
        ;   Label: LAB_00595b87
    PUSH EAX                            ; 00595b8d
    LEA EAX,[EBP + 0xffffff3a]          ; 00595b8e
    XOR EDI,EDI                         ; 00595b94
    PUSH EAX                            ; 00595b96
    LEA EAX,[EBP + 0xfffffce6]          ; 00595b97
    MOV dword ptr [EBP + 0xffffff3a],EDI ; 00595b9d
    PUSH EAX                            ; 00595ba3
    MOV dword ptr [EBP + 0xffffff3e],EDI ; 00595ba4
    MOV dword ptr [EBP + 0xffffff42],EDI ; 00595baa
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 00595bb0
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00595bb5
    LEA EAX,[EBP + 0xfffffce6]          ; 00595bb8
    PUSH EAX                            ; 00595bbe
    LEA EAX,[EBP + 0xffff8c56]          ; 00595bbf
    PUSH EAX                            ; 00595bc5
    LEA ESI,[EBP + 0xfffffd46]          ; 00595bc6
    LEA EDI,[EBP + 0xfffffcb6]          ; 00595bcc
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 00595bd2
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc20a8                      ; 00595bd7
        ;   XREF to: 03fc20a8 (UNCONDITIONAL_JUMP)  ; LAB_03fc20a8
    PUSH EAX                            ; 00595bed
        ;   Label: LAB_00595bed
    LEA ESI,[EBP + 0xfffffd16]          ; 00595bee
    LEA EDI,[EBP + 0xfffffc86]          ; 00595bf4
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 00595bfa
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    JMP 0x03fc210f                      ; 00595bff
        ;   XREF to: 03fc210f (UNCONDITIONAL_JUMP)  ; LAB_03fc210f
    ADD ESP,0x4                         ; 00595c12
        ;   Label: LAB_00595c12
    XOR ECX,ECX                         ; 00595c15
    MOV ESI,dword ptr [EAX + 0x28558]   ; 00595c17
    MOV dword ptr [EBP + 0x2e],ECX      ; 00595c1d
    TEST ESI,ESI                        ; 00595c20
    JLE 0x005959c6                      ; 00595c22
        ;   XREF to: 005959c6 (CONDITIONAL_JUMP)  ; LAB_005959c6
    LEA EAX,[EBP + 0xffff8c02]          ; 00595c28
    ADD EAX,0x54                        ; 00595c2e
    MOV dword ptr [EBP + 0x3e],EAX      ; 00595c31
    LEA EAX,[EBP + 0xfffffc86]          ; 00595c34
        ;   Label: LAB_00595c34
    PUSH EAX                            ; 00595c3a
    MOV ESI,dword ptr [EBP + 0x3e]      ; 00595c3b
    PUSH ESI                            ; 00595c3e
    LEA ESI,[EBP + 0xfffffd76]          ; 00595c3f
    LEA EDI,[EBP + 0xfffffda6]          ; 00595c45
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 00595c4b
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc2173                      ; 00595c50
        ;   XREF to: 03fc2173 (UNCONDITIONAL_JUMP)  ; LAB_03fc2173
    PUSH EAX                            ; 00595c66
        ;   Label: LAB_00595c66
    LEA ESI,[EBP + 0xfffffe66]          ; 00595c67
    CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420 ; 00595c6d
        ;   XREF to: 005f7420 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_matrixToQuaternion_FUN_005f7420(CMatrix3x3f * matrix_in, CQuaternion4f * quat_out)
    MOV EDI,EBX                         ; 00595c72
    LEA ESI,[EBP + 0xfffffe66]          ; 00595c74
    MOV EAX,dword ptr [EBP + 0x2e]      ; 00595c7a
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00595c7d
    ADD ESP,0x4                         ; 00595c83
    ADD EBX,0x10                        ; 00595c86
    JMP 0x00605084                      ; 00595c89
        ;   XREF to: 00605084 (UNCONDITIONAL_JUMP)  ; LAB_00605084
    MOV EDI,dword ptr [EBP + 0x3e]      ; 00595c8e
        ;   Label: LAB_00595c8e
    MOV dword ptr [EBP + 0x2e],EAX      ; 00595c91
    ADD EDI,0x84                        ; 00595c94
    MOV ECX,dword ptr [EDX + 0x28558]   ; 00595c9a
    MOV dword ptr [EBP + 0x3e],EDI      ; 00595ca0
    CMP EAX,ECX                         ; 00595ca3
    JGE 0x005959c6                      ; 00595ca5
        ;   XREF to: 005959c6 (CONDITIONAL_JUMP)  ; LAB_005959c6
    JMP 0x00595c34                      ; 00595cab
        ;   XREF to: 00595c34 (UNCONDITIONAL_JUMP)  ; LAB_00595c34
    CMP EBX,0x1                         ; 00595cad
        ;   Label: LAB_00595cad
    JGE 0x00595cda                      ; 00595cb0
        ;   XREF to: 00595cda (CONDITIONAL_JUMP)  ; LAB_00595cda
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00595cb2
    MOV EDX,dword ptr [EDX + 0x29378]   ; 00595cb8
    MOV dword ptr [EDX + EAX*0x1 + 0x8],0x0 ; 00595cbe
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x8] ; 00595cc6
    MOV dword ptr [EDX + EAX*0x1 + 0x4],ECX ; 00595cca
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x4] ; 00595cce
    MOV dword ptr [EDX + EAX*0x1],ECX   ; 00595cd2
    JMP 0x00595726                      ; 00595cd5
        ;   XREF to: 00595726 (UNCONDITIONAL_JUMP)  ; LAB_00595726
    CMP dword ptr [EBP + -0x26],0x0     ; 00595cda
        ;   Label: LAB_00595cda
    JZ 0x00595d57                       ; 00595cde
        ;   XREF to: 00595d57 (CONDITIONAL_JUMP)  ; LAB_00595d57
    MOV EDI,dword ptr [EBP + 0x8e]      ; 00595ce0
    MOV EDI,dword ptr [EDI + 0x29374]   ; 00595ce6
    FLD float ptr [EBP + 0xfffffef2]    ; 00595cec
    FSUB float ptr [EDI + EAX*0x1]      ; 00595cf2
    FLD float ptr [EBP + 0xfffffef6]    ; 00595cf5
    FXCH                                ; 00595cfb
    FSTP float ptr [EBP + 0xfffffefe]   ; 00595cfd
    FSUB float ptr [EDI + EAX*0x1 + 0x4] ; 00595d03
    FLD float ptr [EBP + 0xfffffefa]    ; 00595d07
    FXCH                                ; 00595d0d
    FSTP float ptr [EBP + 0xffffff02]   ; 00595d0f
    FSUB float ptr [EDI + EAX*0x1 + 0x8] ; 00595d15
    MOV EDI,dword ptr [EBP + 0x8e]      ; 00595d19
    FSTP float ptr [EBP + 0xffffff06]   ; 00595d1f
    MOV EDI,dword ptr [EDI + 0x29378]   ; 00595d25
    ADD EDI,EAX                         ; 00595d2b
    LEA EAX,[EBP + 0xfffffefe]          ; 00595d2d
    CMP EDI,EAX                         ; 00595d33
    JZ 0x00595726                       ; 00595d35
        ;   XREF to: 00595726 (CONDITIONAL_JUMP)  ; LAB_00595726
    MOV EAX,dword ptr [EBP + 0xfffffefe] ; 00595d3b
    MOV dword ptr [EDI],EAX             ; 00595d41
    MOV EAX,dword ptr [EBP + 0xffffff02] ; 00595d43
    MOV dword ptr [EDI + 0x4],EAX       ; 00595d49
    MOV EAX,dword ptr [EBP + 0xffffff06] ; 00595d4c
    JMP 0x00595723                      ; 00595d52
        ;   XREF to: 00595723 (UNCONDITIONAL_JUMP)  ; LAB_00595723
    LEA EDI,[ESI + -0x1]                ; 00595d57
        ;   Label: LAB_00595d57
    IMUL EDI,EDI,0xc                    ; 00595d5a
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00595d5d
    MOV EDX,dword ptr [EDX + 0x29378]   ; 00595d63
    ADD EAX,EDX                         ; 00595d69
    ADD EDI,EDX                         ; 00595d6b
    CMP EAX,EDI                         ; 00595d6d
    JZ 0x00595726                       ; 00595d6f
        ;   XREF to: 00595726 (CONDITIONAL_JUMP)  ; LAB_00595726
    MOV EDX,dword ptr [EDI]             ; 00595d75
    MOV dword ptr [EAX],EDX             ; 00595d77
    MOV EDX,dword ptr [EDI + 0x4]       ; 00595d79
    MOV dword ptr [EAX + 0x4],EDX       ; 00595d7c
    MOV EDX,dword ptr [EDI + 0x8]       ; 00595d7f
    MOV dword ptr [EAX + 0x8],EDX       ; 00595d82
    JMP 0x00595726                      ; 00595d85
        ;   XREF to: 00595726 (UNCONDITIONAL_JUMP)  ; LAB_00595726
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00595d8a
        ;   Label: LAB_00595d8a
    MOV EDX,dword ptr [EDX + 0x29378]   ; 00595d90
    MOV dword ptr [EDX + EAX*0x1],0x0   ; 00595d96
    JMP 0x0059576b                      ; 00595d9d
        ;   XREF to: 0059576b (UNCONDITIONAL_JUMP)  ; LAB_0059576b
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00595da2
        ;   Label: LAB_00595da2
    MOV EDX,dword ptr [EDX + 0x29378]   ; 00595da8
    MOV dword ptr [EDX + EAX*0x1 + 0x4],0x0 ; 00595dae
    JMP 0x005957b2                      ; 00595db6
        ;   XREF to: 005957b2 (UNCONDITIONAL_JUMP)  ; LAB_005957b2
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00595dbb
        ;   Label: LAB_00595dbb
    MOV EAX,dword ptr [EAX + 0x29378]   ; 00595dc1
    MOV dword ptr [ESI + EAX*0x1 + 0x8],0x0 ; 00595dc7
    JMP 0x005957f9                      ; 00595dcf
        ;   XREF to: 005957f9 (UNCONDITIONAL_JUMP)  ; LAB_005957f9
    FLD float ptr [EBP + 0xfffffe86]    ; 00595dd4
        ;   Label: LAB_00595dd4
    SUB ESP,0x8                         ; 00595dda
    MOV EDX,dword ptr [EBP + -0x62]     ; 00595ddd
    FSTP double ptr [ESP]               ; 00595de0
    PUSH EDX                            ; 00595de3
    PUSH 0x64d42e                       ; 00595de4 | = "Total displacement for animation %s o..."
    MOV ECX,dword ptr [0x00678a60]      ; 00595de9 | g_CEditorToolsPtr
    PUSH ECX                            ; 00595def | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00595df0
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00595df5
    JMP 0x00595856                      ; 00595df8
        ;   XREF to: 00595856 (UNCONDITIONAL_JUMP)  ; LAB_00595856
    PUSH 0x64d462                       ; 00595dfd | = "Setting total displacement on an axis..."
        ;   Label: LAB_00595dfd
    MOV EAX,[0x00678a60]                ; 00595e02 | g_CEditorToolsPtr
    PUSH EAX                            ; 00595e07 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00595e08
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00595e0d
    JMP 0x00595856                      ; 00595e10
        ;   XREF to: 00595856 (UNCONDITIONAL_JUMP)  ; LAB_00595856
    FLD float ptr [EBP + 0xfffffe8a]    ; 00595e15
        ;   Label: LAB_00595e15
    SUB ESP,0x8                         ; 00595e1b
    MOV ESI,dword ptr [EBP + -0x62]     ; 00595e1e
    FSTP double ptr [ESP]               ; 00595e21
    PUSH ESI                            ; 00595e24
    PUSH 0x64d4af                       ; 00595e25 | = "Total displacement for animation %s o..."
    MOV EDI,dword ptr [0x00678a60]      ; 00595e2a | g_CEditorToolsPtr
    PUSH EDI                            ; 00595e30 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00595e31
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00595e36
    JMP 0x00595892                      ; 00595e39
        ;   XREF to: 00595892 (UNCONDITIONAL_JUMP)  ; LAB_00595892
    PUSH 0x64d4e3                       ; 00595e3e | = "Setting total displacement on an axis..."
        ;   Label: LAB_00595e3e
    MOV EBX,dword ptr [0x00678a60]      ; 00595e43 | g_CEditorToolsPtr
    PUSH EBX                            ; 00595e49 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00595e4a
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00595e4f
    JMP 0x00595892                      ; 00595e52
        ;   XREF to: 00595892 (UNCONDITIONAL_JUMP)  ; LAB_00595892
    FLD float ptr [EBP + 0xfffffe8e]    ; 00595e57
        ;   Label: LAB_00595e57
    SUB ESP,0x8                         ; 00595e5d
    MOV EDX,dword ptr [EBP + -0x62]     ; 00595e60
    FSTP double ptr [ESP]               ; 00595e63
    PUSH EDX                            ; 00595e66
    PUSH 0x64d530                       ; 00595e67 | = "Total displacement for animation %s o..."
    MOV ECX,dword ptr [0x00678a60]      ; 00595e6c | g_CEditorToolsPtr
    PUSH ECX                            ; 00595e72 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00595e73
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00595e78
    JMP 0x005958ce                      ; 00595e7b
        ;   XREF to: 005958ce (UNCONDITIONAL_JUMP)  ; LAB_005958ce
    PUSH 0x64d564                       ; 00595e80 | = "Setting total displacement on an axis..."
        ;   Label: LAB_00595e80
    MOV EAX,[0x00678a60]                ; 00595e85 | g_CEditorToolsPtr
    PUSH EAX                            ; 00595e8a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00595e8b
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00595e90
    JMP 0x005958ce                      ; 00595e93
        ;   XREF to: 005958ce (UNCONDITIONAL_JUMP)  ; LAB_005958ce
    MOV EAX,dword ptr [ESI]             ; 00595e98 | g_SkeleditBiasEntries
        ;   Label: LAB_00595e98
    XOR EDX,EDX                         ; 00595e9a
    MOV ECX,dword ptr [0x03670b5c]      ; 00595e9c | g_SkeleditBiasEntryCount
    MOV dword ptr [EBP + EAX*0x4 + 0xffffdb4a],EDX ; 00595ea2
    INC EDI                             ; 00595ea9
    MOV dword ptr [ESI],0xffffffff      ; 00595eaa | g_SkeleditBiasEntries
    CMP EDI,ECX                         ; 00595eb0
    JL 0x00593970                       ; 00595eb2
        ;   XREF to: 00593970 (CONDITIONAL_JUMP)  ; LAB_00593970
    MOV EBX,dword ptr [EBP + 0x92]      ; 00595eb8
        ;   Label: LAB_00595eb8
    PUSH EBX                            ; 00595ebe
    PUSH 0x64d5f2                       ; 00595ebf | = "Finished processing %s OK!"
    MOV ESI,dword ptr [0x00678a60]      ; 00595ec4 | g_CEditorToolsPtr
    PUSH ESI                            ; 00595eca | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00595ecb
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00595ed0
    PUSH 0x0                            ; 00595ed3
    LEA EAX,[EBP + 0xffffd3e2]          ; 00595ed5
    PUSH EAX                            ; 00595edb
    MOV EBX,0x1                         ; 00595edc
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00595ee1
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00595ee6
    MOV EAX,EBX                         ; 00595ee9
    LEA ESP,[EBP + 0x7a]                ; 00595eeb
    POP EBP                             ; 00595eee
    POP EDI                             ; 00595eef
    POP ESI                             ; 00595ef0
    POP EBX                             ; 00595ef1
    RET                                 ; 00595ef2
    MOV EBX,dword ptr [EBP + 0x92]      ; 00595ef3
        ;   Label: LAB_00595ef3
    PUSH EBX                            ; 00595ef9
    PUSH 0x64d5d7                       ; 00595efa | = "Cyclic bias detected in %s"
    MOV ESI,dword ptr [0x00678a60]      ; 00595eff | g_CEditorToolsPtr
    PUSH ESI                            ; 00595f05 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00595f06
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00595f0b
    PUSH 0x0                            ; 00595f0e
    LEA EAX,[EBP + 0xffffd3e2]          ; 00595f10
    PUSH EAX                            ; 00595f16
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00595f17
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00595f1c
    JMP 0x005927ee                      ; 00595f1f
        ;   XREF to: 005927ee (UNCONDITIONAL_JUMP)  ; LAB_005927ee
    MOV ECX,dword ptr [ESI]             ; 00605062
        ;   Label: LAB_00605062
    MOV dword ptr [EDI],ECX             ; 00605064
    MOV ECX,dword ptr [ESI + 0x4]       ; 00605066
    MOV dword ptr [EDI + 0x4],ECX       ; 00605069
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060506c
    MOV dword ptr [EDI + 0x8],ECX       ; 0060506f
    MOV ECX,dword ptr [ESI + 0xc]       ; 00605072
    MOV dword ptr [EDI + 0xc],ECX       ; 00605075
    ADD ESI,0x10                        ; 00605078
    ADD EDI,0x10                        ; 0060507b
    INC EAX                             ; 0060507e
    JMP 0x00595b10                      ; 0060507f
        ;   XREF to: 00595b10 (UNCONDITIONAL_JUMP)  ; LAB_00595b10
    MOV ECX,dword ptr [ESI]             ; 00605084
        ;   Label: LAB_00605084
    MOV dword ptr [EDI],ECX             ; 00605086
    MOV ECX,dword ptr [ESI + 0x4]       ; 00605088
    MOV dword ptr [EDI + 0x4],ECX       ; 0060508b
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060508e
    MOV dword ptr [EDI + 0x8],ECX       ; 00605091
    MOV ECX,dword ptr [ESI + 0xc]       ; 00605094
    MOV dword ptr [EDI + 0xc],ECX       ; 00605097
    ADD ESI,0x10                        ; 0060509a
    ADD EDI,0x10                        ; 0060509d
    INC EAX                             ; 006050a0
    JMP 0x00595c8e                      ; 006050a1
        ;   XREF to: 00595c8e (UNCONDITIONAL_JUMP)  ; LAB_00595c8e
    MOV ECX,0xc                         ; 03fc20a8
        ;   Label: LAB_03fc20a8
    LEA ESI,[EBP + 0xfffffd46]          ; 03fc20ad
    LEA EAX,[EBP + 0xfffffcb6]          ; 03fc20b3
    ADD ESP,0x8                         ; 03fc20b9
    MOV ECX,dword ptr [ESI]             ; 03fc20bc
    MOV dword ptr [EDI],ECX             ; 03fc20be
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc20c0
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc20c3
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc20c6
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc20c9
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc20cc
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc20cf
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc20d2
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc20d5
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc20d8
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc20db
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc20de
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc20e1
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc20e4
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc20e7
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc20ea
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc20ed
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc20f0
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc20f3
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc20f6
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc20f9
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc20fc
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc20ff
    ADD ESI,0x30                        ; 03fc2102
    ADD EDI,0x30                        ; 03fc2105
    XOR ECX,ECX                         ; 03fc2108
    JMP 0x00595bed                      ; 03fc210a
        ;   XREF to: 00595bed (UNCONDITIONAL_JUMP)  ; LAB_00595bed
    MOV ECX,0xc                         ; 03fc210f
        ;   Label: LAB_03fc210f
    LEA ESI,[EBP + 0xfffffd16]          ; 03fc2114
    MOV EAX,dword ptr [EBP + 0x8e]      ; 03fc211a
    MOV ECX,dword ptr [ESI]             ; 03fc2120
    MOV dword ptr [EDI],ECX             ; 03fc2122
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc2124
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc2127
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc212a
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc212d
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc2130
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc2133
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc2136
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc2139
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc213c
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc213f
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc2142
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc2145
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc2148
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc214b
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc214e
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc2151
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc2154
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc2157
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc215a
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc215d
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc2160
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc2163
    ADD ESI,0x30                        ; 03fc2166
    ADD EDI,0x30                        ; 03fc2169
    XOR ECX,ECX                         ; 03fc216c
    JMP 0x00595c12                      ; 03fc216e
        ;   XREF to: 00595c12 (UNCONDITIONAL_JUMP)  ; LAB_00595c12
    MOV ECX,0xc                         ; 03fc2173
        ;   Label: LAB_03fc2173
    LEA ESI,[EBP + 0xfffffd76]          ; 03fc2178
    LEA EAX,[EBP + 0xfffffda6]          ; 03fc217e
    ADD ESP,0x8                         ; 03fc2184
    MOV ECX,dword ptr [ESI]             ; 03fc2187
    MOV dword ptr [EDI],ECX             ; 03fc2189
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc218b
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc218e
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc2191
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc2194
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc2197
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc219a
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc219d
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc21a0
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc21a3
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc21a6
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc21a9
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc21ac
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc21af
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc21b2
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc21b5
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc21b8
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc21bb
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc21be
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc21c1
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc21c4
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc21c7
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc21ca
    ADD ESI,0x30                        ; 03fc21cd
    ADD EDI,0x30                        ; 03fc21d0
    XOR ECX,ECX                         ; 03fc21d3
    JMP 0x00595c66                      ; 03fc21d5
        ;   XREF to: 00595c66 (UNCONDITIONAL_JUMP)  ; LAB_00595c66

