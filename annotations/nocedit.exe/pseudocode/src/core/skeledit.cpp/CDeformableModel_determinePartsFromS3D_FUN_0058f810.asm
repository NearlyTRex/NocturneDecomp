; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeledit_cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810(CDeformableModel *this_ptr,char *filename)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; float            Stack[-0xa1f0]:4  local_a1f0
; char[32552]      Stack[-0xa1ec]:32552  local_a1ec
; undefined2[1018] Stack[-0x22c4]:2036  auStack_22c4
; undefined4[953]  Stack[-0x1ad0]:3812  auStack_1ad0
; CPickList        Stack[-0xbec]:936  local_bec
; char[260]        Stack[-0x844]:260  local_844
; char[256]        Stack[-0x740]:256  local_740
; char[256]        Stack[-0x640]:256  local_640
; char[200]        Stack[-0x540]:200  local_540
; undefined1[120]  Stack[-0x478]:120  local_478
; undefined4[30]   Stack[-0x400]:120  local_400
; char[100]        Stack[-0x388]:100  local_388
; CBoundingBox3D   Stack[-0x324]:24  local_324
; CBoundingBox3D   Stack[-0x30c]:24  local_30c
; undefined1[4]    Stack[-0x2f0]:4  auStack_2f0
; undefined4       Stack[-0x2ec]:4  uStack_2ec
; undefined4       Stack[-0x2e8]:4  local_2e8
; undefined2[2]    Stack[-0x2e4]:4  auStack_2e4
; undefined4       Stack[-0x2e0]:4  local_2e0
; undefined1[4]    Stack[-0x2dc]:4  auStack_2dc
; undefined4       Stack[-0x2d8]:4  uStack_2d8
; undefined4       Stack[-0x2d4]:4  local_2d4
; undefined2[2]    Stack[-0x2d0]:4  auStack_2d0
; float            Stack[-0x2cc]:4  local_2cc
; float            Stack[-0x2c8]:4  local_2c8
; float            Stack[-0x2c4]:4  local_2c4
; float            Stack[-0x2c0]:4  local_2c0
; float            Stack[-0x2bc]:4  local_2bc
; float            Stack[-0x2b8]:4  local_2b8
; float            Stack[-0x2b4]:4  local_2b4
; float            Stack[-0x2b0]:4  local_2b0
; float            Stack[-0x2ac]:4  local_2ac
; float            Stack[-0x2a8]:4  local_2a8
; float            Stack[-0x2a4]:4  local_2a4
; float            Stack[-0x2a0]:4  local_2a0
; float            Stack[-0x29c]:4  local_29c
; float            Stack[-0x298]:4  local_298
; float            Stack[-0x294]:4  local_294
; float            Stack[-0x290]:4  local_290
; float            Stack[-0x28c]:4  local_28c
; float            Stack[-0x288]:4  local_288
; float            Stack[-0x284]:4  local_284
; float            Stack[-0x280]:4  local_280
; float            Stack[-0x27c]:4  local_27c
; undefined4       Stack[-0x278]:4  local_278
; undefined1[4]    Stack[-0x274]:4  local_274
; undefined1[4]    Stack[-0x270]:4  local_270
; float            Stack[-0x26c]:4  local_26c
; float            Stack[-0x268]:4  local_268
; float            Stack[-0x264]:4  local_264
; float            Stack[-0x260]:4  local_260
; float            Stack[-0x25c]:4  local_25c
; float            Stack[-0x258]:4  local_258
; float            Stack[-0x254]:4  local_254
; float            Stack[-0x250]:4  local_250
; float            Stack[-0x24c]:4  local_24c
; float            Stack[-0x248]:4  local_248
; float            Stack[-0x244]:4  local_244
; float            Stack[-0x240]:4  local_240
; float            Stack[-0x23c]:4  local_23c
; float            Stack[-0x238]:4  local_238
; float            Stack[-0x234]:4  local_234
; float            Stack[-0x230]:4  local_230
; float            Stack[-0x22c]:4  local_22c
; float            Stack[-0x228]:4  local_228
; float            Stack[-0x224]:4  local_224
; float            Stack[-0x220]:4  local_220
; float            Stack[-0x21c]:4  local_21c
; float            Stack[-0x218]:4  local_218
; float            Stack[-0x214]:4  local_214
; float            Stack[-0x210]:4  local_210
; float            Stack[-0x20c]:4  local_20c
; float            Stack[-0x208]:4  local_208
; float            Stack[-0x204]:4  local_204
; float            Stack[-0x200]:4  local_200
; undefined1[8]    Stack[-0x1fc]:8  local_1fc
; float            Stack[-0x1f4]:4  local_1f4
; float            Stack[-0x1f0]:4  local_1f0
; float            Stack[-0x1ec]:4  local_1ec
; float            Stack[-0x1e8]:4  local_1e8
; float            Stack[-0x1e4]:4  local_1e4
; float            Stack[-0x1e0]:4  local_1e0
; float            Stack[-0x1dc]:4  local_1dc
; float            Stack[-0x1d8]:4  local_1d8
; float            Stack[-0x1d4]:4  local_1d4
; float            Stack[-0x1d0]:4  local_1d0
; float            Stack[-0x1cc]:4  local_1cc
; float            Stack[-0x1c8]:4  local_1c8
; float            Stack[-0x1c4]:4  local_1c4
; float            Stack[-0x1c0]:4  local_1c0
; float            Stack[-0x1bc]:4  local_1bc
; float            Stack[-0x1b8]:4  local_1b8
; float            Stack[-0x1b4]:4  local_1b4
; float            Stack[-0x1b0]:4  local_1b0
; float            Stack[-0x1ac]:4  local_1ac
; float            Stack[-0x1a8]:4  local_1a8
; float            Stack[-0x1a4]:4  local_1a4
; float            Stack[-0x1a0]:4  local_1a0
; float            Stack[-0x19c]:4  local_19c
; float            Stack[-0x198]:4  local_198
; float            Stack[-0x194]:4  local_194
; undefined1[4]    Stack[-0x190]:4  local_190
; undefined1[4]    Stack[-0x18c]:4  local_18c
; CBoundingBox3D * Stack[-0x188]:4  local_188
; void *           Stack[-0x184]:4  local_184
; _FILE *          Stack[-0x180]:4  local_180
; float *          Stack[-0x17c]:4  local_17c
; float *          Stack[-0x178]:4  local_178
; void *           Stack[-0x174]:4  local_174
; undefined4 *     Stack[-0x170]:4  local_170
; float            Stack[-0x16c]:4  local_16c
; float            Stack[-0x168]:4  local_168
; undefined1[4]    Stack[-0x164]:4  local_164
; int              Stack[-0x160]:4  local_160
; void *           Stack[-0x15c]:4  local_15c
; int              Stack[-0x158]:4  local_158
; int              Stack[-0x154]:4  local_154
; SInputFace *     Stack[-0x150]:4  local_150
; int *            Stack[-0x14c]:4  local_14c
; SPart *          Stack[-0x148]:4  local_148
; int              Stack[-0x144]:4  local_144
; SPart *          Stack[-0x140]:4  local_140
; undefined4[2]    Stack[-0x13c]:8  local_13c
; void *           Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; int              Stack[-0x12c]:4  local_12c
; int              Stack[-0x128]:4  local_128
; int              Stack[-0x124]:4  local_124
; SInputFace *     Stack[-0x120]:4  local_120
; int              Stack[-0x11c]:4  local_11c
; int              Stack[-0x118]:4  local_118
; void *           Stack[-0x114]:4  local_114
; float            Stack[-0x110]:4  local_110
; int              Stack[-0x10c]:4  local_10c
; float *          Stack[-0x108]:4  local_108
; float            Stack[-0x104]:4  local_104
; float *          Stack[-0xfc]:4  local_fc
; float *          Stack[-0xf8]:4  local_f8
; int              Stack[-0xf4]:4  local_f4
; int *            Stack[-0xf0]:4  local_f0
; _FILE *          Stack[-0xec]:4  local_ec
; int              Stack[-0xe8]:4  local_e8
; int              Stack[-0xe4]:4  local_e4
; int              Stack[-0xe0]:4  local_e0
; undefined1[4]    Stack[-0xdc]:4  local_dc
; SPart *          Stack[-0xd8]:4  local_d8
; int              Stack[-0xd4]:4  local_d4
; int              Stack[-0xd0]:4  local_d0
; int              Stack[-0xcc]:4  local_cc
; short *          Stack[-0xc8]:4  local_c8
; int              Stack[-0xc4]:4  local_c4
; short *          Stack[-0xc0]:4  local_c0
; short *          Stack[-0xbc]:4  local_bc
; int              Stack[-0xb8]:4  local_b8
; void *           Stack[-0xb4]:4  local_b4
; SInputFace *     Stack[-0xb0]:4  local_b0
; int              Stack[-0xac]:4  local_ac
; STextureSet *    Stack[-0xa8]:4  local_a8
; STextureSet *    Stack[-0xa4]:4  local_a4
; float            Stack[-0xa0]:4  local_a0
; int              Stack[-0x9c]:4  local_9c
; float            Stack[-0x98]:4  local_98
; undefined1 *     Stack[-0x94]:4  local_94
; undefined4 *     Stack[-0x90]:4  local_90
; float *          Stack[-0x8c]:4  local_8c
; void *           Stack[-0x88]:4  local_88
; void *           Stack[-0x84]:4  local_84
; int              Stack[-0x80]:4  local_80
; void *           Stack[-0x7c]:4  local_7c
; float *          Stack[-0x78]:4  local_78
; int              Stack[-0x74]:4  local_74
; int              Stack[-0x70]:4  local_70
; short *          Stack[-0x6c]:4  local_6c
; int *            Stack[-0x68]:4  local_68
; int              Stack[-0x64]:4  local_64
; int              Stack[-0x60]:4  local_60
; int *            Stack[-0x5c]:4  local_5c
; int              Stack[-0x58]:4  local_58
; int              Stack[-0x54]:4  local_54
; void *           Stack[-0x50]:4  local_50
; void *           Stack[-0x4c]:4  local_4c
; CDeformableModel * Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190 at 0058c78d
;
; Referenced Globals:
;   TerminatedCString s_core_skeledit_cpp_0064b4cb
;   TerminatedCString s_CDeformableModel_determi_0064b4e0
;   TerminatedCString s_Opening_s_0064b52e
;   TerminatedCString s_core_skeledit_cpp_0064b539
;   TerminatedCString s_rt_0064b54e
;   TerminatedCString s_Can_t_open_s_0064b551
;   TerminatedCString s_core_skeledit_cpp_0064b55f
;   TerminatedCString s_core_skeledit_cpp_0064b574
;   TerminatedCString s_core_skeledit_cpp_0064b589
;   TerminatedCString s_core_skeledit_cpp_0064b59e
;   TerminatedCString s_core_skeledit_cpp_0064b5b3
;   TerminatedCString s_core_skeledit_cpp_0064b5c8
;   TerminatedCString s_core_skeledit_cpp_0064b5dd
;   TerminatedCString s_core_skeledit_cpp_0064b5f2
;   TerminatedCString s_core_skeledit_cpp_0064b607
;   ... and 110 more
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_string.c__stricmp_FUN_005fe7f0
;   crt_string.c_splitpath_FUN_005ff178
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH 0xa228                         ; 0058f810
        ;   Label: core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058f815
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058f81a
    PUSH ESI                            ; 0058f81b
    PUSH EDI                            ; 0058f81c
    PUSH EBP                            ; 0058f81d
    MOV EBP,ESP                         ; 0058f81e
    SUB ESP,0xa1e4                      ; 0058f820
    AND ESP,0xfffffff8                  ; 0058f826
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058f829
    CMP dword ptr [EAX],0x1             ; 0058f82c
    JZ 0x0058f854                       ; 0058f82f
        ;   XREF to: 0058f854 (CONDITIONAL_JUMP)  ; LAB_0058f854
    MOV ECX,0x64b4cb                    ; 0058f831 | = "..\\core\\skeledit.cpp"
    MOV EBX,0xbc8                       ; 0058f836
    PUSH 0x64b4e0                       ; 0058f83b | = "CDeformableModel::determinePartsFromS..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0058f840 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0058f846 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058f84c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058f851
    MOV EBX,dword ptr [EBP + 0x18]      ; 0058f854
        ;   Label: LAB_0058f854
    ADD EBX,0x200                       ; 0058f857
    PUSH EBX                            ; 0058f85d
    PUSH 0x64b52e                       ; 0058f85e | = "Opening %s"
    MOV ESI,dword ptr [0x00678a60]      ; 0058f863 | g_CEditorToolsPtr
    PUSH ESI                            ; 0058f869 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058f86a
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0058f86f
    PUSH 0xbde                          ; 0058f872
    XOR EDI,EDI                         ; 0058f877
    PUSH 0x64b539                       ; 0058f879 | = "..\\core\\skeledit.cpp"
    MOV dword ptr [ESP + 0xa078],EDI    ; 0058f87e
    MOV dword ptr [ESP + 0xa07c],EDI    ; 0058f885
    PUSH 0x64b54e                       ; 0058f88c | = "rt"
    MOV dword ptr [ESP + 0xa084],EDI    ; 0058f891
    MOV dword ptr [ESP + 0xa088],EDI    ; 0058f898
    PUSH EDI                            ; 0058f89f
    MOV dword ptr [ESP + 0xa090],EDI    ; 0058f8a0
    MOV dword ptr [ESP + 0xa094],EDI    ; 0058f8a7
    PUSH EBX                            ; 0058f8ae
    MOV dword ptr [ESP + 0xa09c],EDI    ; 0058f8af
    MOV dword ptr [ESP + 0xa11c],EDI    ; 0058f8b6
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0058f8bd
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0058f8c2
    MOV dword ptr [ESP + 0xa10c],EAX    ; 0058f8c5
    TEST EAX,EAX                        ; 0058f8cc
    JNZ 0x0058fa47                      ; 0058f8ce
        ;   XREF to: 0058fa47 (CONDITIONAL_JUMP)  ; LAB_0058fa47
    PUSH EBX                            ; 0058f8d4
    PUSH 0x64b551                       ; 0058f8d5 | = "Can't open %s"
    PUSH 0x3670650                      ; 0058f8da | g_SkeleditStatusMessage
        ;   Label: LAB_0058f8da
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0058f8df
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0058f8e4
    MOV ECX,dword ptr [ESP + 0xa10c]    ; 0058f8e7
        ;   Label: LAB_0058f8e7
    TEST ECX,ECX                        ; 0058f8ee
    JZ 0x0058f905                       ; 0058f8f0
        ;   XREF to: 0058f905 (CONDITIONAL_JUMP)  ; LAB_0058f905
    PUSH 0xbe2                          ; 0058f8f2
    PUSH 0x64b55f                       ; 0058f8f7 | = "..\\core\\skeledit.cpp"
    PUSH ECX                            ; 0058f8fc
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0058f8fd
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0058f902
    MOV ESI,dword ptr [ESP + 0xa078]    ; 0058f905
        ;   Label: LAB_0058f905
    TEST ESI,ESI                        ; 0058f90c
    JZ 0x0058f923                       ; 0058f90e
        ;   XREF to: 0058f923 (CONDITIONAL_JUMP)  ; LAB_0058f923
    PUSH 0xbe3                          ; 0058f910
    PUSH 0x64b574                       ; 0058f915 | = "..\\core\\skeledit.cpp"
    PUSH ESI                            ; 0058f91a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0058f91b
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0058f920
    MOV EDX,0xbe4                       ; 0058f923
        ;   Label: LAB_0058f923
    MOV EAX,0x64b589                    ; 0058f928 | = "..\\core\\skeledit.cpp"
    MOV ECX,dword ptr [ESP + 0xa070]    ; 0058f92d
    MOV dword ptr [0x02f0d944],EDX      ; 0058f934 | g_CurrentDebugLine
    MOV [0x0067d20c],EAX                ; 0058f93a | g_CurrentDebugFilename
    TEST ECX,ECX                        ; 0058f93f
    JZ 0x0058f94f                       ; 0058f941
        ;   XREF to: 0058f94f (CONDITIONAL_JUMP)  ; LAB_0058f94f
    LEA EAX,[ECX + -0x4]                ; 0058f943
    PUSH EAX                            ; 0058f946
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0058f947
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0058f94c
    MOV EBX,0x64b59e                    ; 0058f94f | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0058f94f
    MOV EDI,dword ptr [ESP + 0xa074]    ; 0058f954
    MOV ESI,0xbe5                       ; 0058f95b
    PUSH EDI                            ; 0058f960
    MOV dword ptr [0x0067d20c],EBX      ; 0058f961 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ESI      ; 0058f967 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0058f96d
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    MOV EAX,0x64b5b3                    ; 0058f972 | = "..\\core\\skeledit.cpp"
    ADD ESP,0x4                         ; 0058f977
    MOV EDX,0xbe6                       ; 0058f97a
    MOV ECX,dword ptr [ESP + 0xa07c]    ; 0058f97f
    MOV [0x0067d20c],EAX                ; 0058f986 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDX      ; 0058f98b | g_CurrentDebugLine
    TEST ECX,ECX                        ; 0058f991
    JZ 0x0058f9a1                       ; 0058f993
        ;   XREF to: 0058f9a1 (CONDITIONAL_JUMP)  ; LAB_0058f9a1
    LEA EAX,[ECX + -0x4]                ; 0058f995
    PUSH EAX                            ; 0058f998
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0058f999
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0058f99e
    MOV ESI,0xbe7                       ; 0058f9a1
        ;   Label: LAB_0058f9a1
    MOV EBX,0x64b5c8                    ; 0058f9a6 | = "..\\core\\skeledit.cpp"
    MOV EDI,dword ptr [ESP + 0xa080]    ; 0058f9ab
    MOV dword ptr [0x02f0d944],ESI      ; 0058f9b2 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],EBX      ; 0058f9b8 | g_CurrentDebugFilename
    TEST EDI,EDI                        ; 0058f9be
    JZ 0x0058f9ce                       ; 0058f9c0
        ;   XREF to: 0058f9ce (CONDITIONAL_JUMP)  ; LAB_0058f9ce
    LEA EAX,[EDI + -0x4]                ; 0058f9c2
    PUSH EAX                            ; 0058f9c5
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0058f9c6
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0058f9cb
    MOV EAX,0x64b5dd                    ; 0058f9ce | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0058f9ce
    MOV ECX,dword ptr [ESP + 0xa084]    ; 0058f9d3
    MOV EDX,0xbe8                       ; 0058f9da
    PUSH ECX                            ; 0058f9df
    MOV [0x0067d20c],EAX                ; 0058f9e0 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDX      ; 0058f9e5 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0058f9eb
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0058f9f0
    MOV EBX,0x64b5f2                    ; 0058f9f3 | = "..\\core\\skeledit.cpp"
    MOV EDI,dword ptr [ESP + 0xa088]    ; 0058f9f8
    MOV ESI,0xbe9                       ; 0058f9ff
    PUSH EDI                            ; 0058fa04
    MOV dword ptr [0x0067d20c],EBX      ; 0058fa05 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ESI      ; 0058fa0b | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0058fa11
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0058fa16
    MOV EAX,0x64b607                    ; 0058fa19 | = "..\\core\\skeledit.cpp"
    MOV ECX,dword ptr [ESP + 0xa108]    ; 0058fa1e
    MOV EDX,0xbea                       ; 0058fa25
    PUSH ECX                            ; 0058fa2a
    MOV [0x0067d20c],EAX                ; 0058fa2b | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDX      ; 0058fa30 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0058fa36
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0058fa3b
    XOR EAX,EAX                         ; 0058fa3e
    MOV ESP,EBP                         ; 0058fa40
    POP EBP                             ; 0058fa42
    POP EDI                             ; 0058fa43
    POP ESI                             ; 0058fa44
    POP EBX                             ; 0058fa45
    RET                                 ; 0058fa46
    PUSH 0xbee                          ; 0058fa47
        ;   Label: LAB_0058fa47
    PUSH 0x64b61c                       ; 0058fa4c | = "..\\core\\skeledit.cpp"
    PUSH 0x64b631                       ; 0058fa51 | = "wt"
    PUSH EDI                            ; 0058fa56
    PUSH 0x64b634                       ; 0058fa57 | = "parts.log"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0058fa5c
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0058fa61
    MOV dword ptr [ESP + 0xa078],EAX    ; 0058fa64
    TEST EAX,EAX                        ; 0058fa6b
    JZ 0x00590a20                       ; 0058fa6d
        ;   XREF to: 00590a20 (CONDITIONAL_JUMP)  ; LAB_00590a20
    MOV EAX,dword ptr [EBP + 0x18]      ; 0058fa73
        ;   Label: LAB_0058fa73
    ADD EAX,0x200                       ; 0058fa76
    PUSH EAX                            ; 0058fa7b
    PUSH 0x64b66a                       ; 0058fa7c | = "Matching skeleton parts for %s\n"
    MOV ESI,dword ptr [ESP + 0xa080]    ; 0058fa81
    PUSH ESI                            ; 0058fa88
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058fa89
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058fa8e
    MOV EBX,0x1                         ; 0058fa91
    MOV ESI,dword ptr [ESP + 0xa10c]    ; 0058fa96
    PUSH ESI                            ; 0058fa9d
        ;   Label: LAB_0058fa9d
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058fa9e
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058faa3
    TEST EAX,EAX                        ; 0058faa6
    JL 0x0058fab4                       ; 0058faa8
        ;   XREF to: 0058fab4 (CONDITIONAL_JUMP)  ; LAB_0058fab4
    CMP EAX,0xa                         ; 0058faaa
    JNZ 0x0058fa9d                      ; 0058faad
        ;   XREF to: 0058fa9d (CONDITIONAL_JUMP)  ; LAB_0058fa9d
    DEC EBX                             ; 0058faaf
    TEST EBX,EBX                        ; 0058fab0
    JG 0x0058fa9d                       ; 0058fab2
        ;   XREF to: 0058fa9d (CONDITIONAL_JUMP)  ; LAB_0058fa9d
    LEA EAX,[ESP + 0xa110]              ; 0058fab4
        ;   Label: LAB_0058fab4
    PUSH EAX                            ; 0058fabb
    PUSH 0x64b68a                       ; 0058fabc | = "%d\n"
    MOV EDI,dword ptr [ESP + 0xa114]    ; 0058fac1
    PUSH EDI                            ; 0058fac8
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058fac9
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058face
    MOV EAX,dword ptr [ESP + 0xa110]    ; 0058fad1
    CMP EAX,0x65                        ; 0058fad8
    JL 0x00590a48                       ; 0058fadb
        ;   XREF to: 00590a48 (CONDITIONAL_JUMP)  ; LAB_00590a48
    CMP EAX,0x67                        ; 0058fae1
    JG 0x00590a48                       ; 0058fae4
        ;   XREF to: 00590a48 (CONDITIONAL_JUMP)  ; LAB_00590a48
    MOV EBX,0x1                         ; 0058faea
    MOV ESI,EDI                         ; 0058faef
    PUSH ESI                            ; 0058faf1
        ;   Label: LAB_0058faf1
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058faf2
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058faf7
    TEST EAX,EAX                        ; 0058fafa
    JL 0x0058fb08                       ; 0058fafc
        ;   XREF to: 0058fb08 (CONDITIONAL_JUMP)  ; LAB_0058fb08
    CMP EAX,0xa                         ; 0058fafe
    JNZ 0x0058faf1                      ; 0058fb01
        ;   XREF to: 0058faf1 (CONDITIONAL_JUMP)  ; LAB_0058faf1
    DEC EBX                             ; 0058fb03
    TEST EBX,EBX                        ; 0058fb04
    JG 0x0058faf1                       ; 0058fb06
        ;   XREF to: 0058faf1 (CONDITIONAL_JUMP)  ; LAB_0058faf1
    LEA EAX,[ESP + 0xa0c0]              ; 0058fb08
        ;   Label: LAB_0058fb08
    PUSH EAX                            ; 0058fb0f
    LEA EAX,[ESP + 0xa120]              ; 0058fb10
    PUSH EAX                            ; 0058fb17
    LEA EAX,[ESP + 0xa09c]              ; 0058fb18
    PUSH EAX                            ; 0058fb1f
    LEA EAX,[ESP + 0xa124]              ; 0058fb20
    PUSH EAX                            ; 0058fb27
    LEA EAX,[ESP + 0xa0a0]              ; 0058fb28
    PUSH EAX                            ; 0058fb2f
    LEA EAX,[ESP + 0xa0a0]              ; 0058fb30
    PUSH EAX                            ; 0058fb37
    LEA EAX,[ESP + 0xa12c]              ; 0058fb38
    PUSH EAX                            ; 0058fb3f
    PUSH 0x64b6ae                       ; 0058fb40 | = "%d,%d,%d,%d,%d,%d,%d\n"
    MOV EBX,dword ptr [ESP + 0xa12c]    ; 0058fb45
    PUSH EBX                            ; 0058fb4c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058fb4d
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x24                        ; 0058fb52
    CMP EAX,0x7                         ; 0058fb55
    JNZ 0x00590a70                      ; 0058fb58
        ;   XREF to: 00590a70 (CONDITIONAL_JUMP)  ; LAB_00590a70
    MOV EBX,dword ptr [EBP + 0x18]      ; 0058fb5e
    MOV ESI,dword ptr [ESP + 0xa118]    ; 0058fb61
    ADD EBX,0x200                       ; 0058fb68
    CMP ESI,0x1e                        ; 0058fb6e
    JG 0x00590a83                       ; 0058fb71
        ;   XREF to: 00590a83 (CONDITIONAL_JUMP)  ; LAB_00590a83
    PUSH EBX                            ; 0058fb77
    PUSH 0x64b6e7                       ; 0058fb78 | = "Reading part list from %s"
    MOV EDI,dword ptr [0x00678a60]      ; 0058fb7d | g_CEditorToolsPtr
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058fb83
    PUSH EDI                            ; 0058fb86 | g_CEditorToolsInstance
    MOV dword ptr [EDX + 0x7140],ESI    ; 0058fb87
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058fb8d
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0058fb92
    PUSH EBX                            ; 0058fb95
    PUSH 0x64b701                       ; 0058fb96 | = "Reading part list from %s\n"
    MOV EAX,dword ptr [ESP + 0xa080]    ; 0058fb9b
    PUSH EAX                            ; 0058fba2
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058fba3
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058fba8
    MOV EBX,0x1                         ; 0058fbab
    MOV ESI,dword ptr [ESP + 0xa10c]    ; 0058fbb0
    PUSH ESI                            ; 0058fbb7
        ;   Label: LAB_0058fbb7
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058fbb8
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058fbbd
    TEST EAX,EAX                        ; 0058fbc0
    JL 0x0058fbce                       ; 0058fbc2
        ;   XREF to: 0058fbce (CONDITIONAL_JUMP)  ; LAB_0058fbce
    CMP EAX,0xa                         ; 0058fbc4
    JNZ 0x0058fbb7                      ; 0058fbc7
        ;   XREF to: 0058fbb7 (CONDITIONAL_JUMP)  ; LAB_0058fbb7
    DEC EBX                             ; 0058fbc9
    TEST EBX,EBX                        ; 0058fbca
    JG 0x0058fbb7                       ; 0058fbcc
        ;   XREF to: 0058fbb7 (CONDITIONAL_JUMP)  ; LAB_0058fbb7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058fbce
        ;   Label: LAB_0058fbce
    MOV EDX,dword ptr [EAX + 0x7140]    ; 0058fbd1
    XOR EBX,EBX                         ; 0058fbd7
    TEST EDX,EDX                        ; 0058fbd9
    JLE 0x0058fcd6                      ; 0058fbdb
        ;   XREF to: 0058fcd6 (CONDITIONAL_JUMP)  ; LAB_0058fcd6
    ADD EAX,0x7144                      ; 0058fbe1
    MOV dword ptr [ESP + 0xa0b0],EAX    ; 0058fbe6
    LEA EAX,[ESP + 0x9d80]              ; 0058fbed
    MOV ESI,dword ptr [EBP + 0x14]      ; 0058fbf4
    MOV dword ptr [ESP + 0xa164],EAX    ; 0058fbf7
    LEA EAX,[ESP + 0x9df8]              ; 0058fbfe
    ADD ESI,0x7164                      ; 0058fc05
    MOV dword ptr [ESP + 0xa168],EAX    ; 0058fc0b
    IMUL EDI,EBX,0x60                   ; 0058fc12
        ;   Label: LAB_0058fc12
    MOV EAX,dword ptr [ESP + 0xa0b0]    ; 0058fc15
    ADD EAX,EDI                         ; 0058fc1c
    PUSH EAX                            ; 0058fc1e
    MOV dword ptr [ESP + 0xa0bc],EAX    ; 0058fc1f
    LEA EAX,[EBX*0x4 + 0x0]             ; 0058fc26
    PUSH ESI                            ; 0058fc2d
    MOV dword ptr [ESP + 0xa0bc],EAX    ; 0058fc2e
    MOV EAX,dword ptr [ESP + 0xa170]    ; 0058fc35
    PUSH EAX                            ; 0058fc3c
    MOV EDX,dword ptr [ESP + 0xa170]    ; 0058fc3d
    PUSH EDX                            ; 0058fc44
    PUSH 0x64b71c                       ; 0058fc45 | = "%d,%d,%*d,%d,\"%[^\"]\"\n"
    MOV ECX,dword ptr [ESP + 0xa120]    ; 0058fc4a
    PUSH ECX                            ; 0058fc51
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058fc52
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0058fc57
    CMP EAX,0x4                         ; 0058fc5a
    JNZ 0x00590a70                      ; 0058fc5d
        ;   XREF to: 00590a70 (CONDITIONAL_JUMP)  ; LAB_00590a70
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058fc63
    MOV dword ptr [EDI + EAX*0x1 + 0x718c],0x0 ; 0058fc66
    MOV EAX,dword ptr [ESP + 0xa0b4]    ; 0058fc71
    PUSH ESI                            ; 0058fc78
    MOV EDI,dword ptr [ESP + EAX*0x1 + 0x9dfc] ; 0058fc79
    PUSH EDI                            ; 0058fc80
    MOV EAX,dword ptr [ESP + 0xa0c0]    ; 0058fc81
    PUSH EAX                            ; 0058fc88
    PUSH EBX                            ; 0058fc89
    PUSH 0x64b732                       ; 0058fc8a | = "\t%2d: %s, verts=%d, tris=%d\n"
    MOV EDX,dword ptr [ESP + 0xa08c]    ; 0058fc8f
    PUSH EDX                            ; 0058fc96
    ADD ESI,0x60                        ; 0058fc97
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058fc9a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 0058fc9f
    INC EBX                             ; 0058fca2
    MOV ECX,dword ptr [ESP + 0xa164]    ; 0058fca3
    MOV EDI,dword ptr [ESP + 0xa168]    ; 0058fcaa
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058fcb1
    ADD ECX,0x4                         ; 0058fcb4
    ADD EDI,0x4                         ; 0058fcb7
    MOV EDX,dword ptr [EAX + 0x7140]    ; 0058fcba
    MOV dword ptr [ESP + 0xa164],ECX    ; 0058fcc0
    MOV dword ptr [ESP + 0xa168],EDI    ; 0058fcc7
    CMP EBX,EDX                         ; 0058fcce
    JL 0x0058fc12                       ; 0058fcd0
        ;   XREF to: 0058fc12 (CONDITIONAL_JUMP)  ; LAB_0058fc12
    MOV EBX,dword ptr [EBP + 0x18]      ; 0058fcd6
        ;   Label: LAB_0058fcd6
    ADD EBX,0x200                       ; 0058fcd9
    PUSH EBX                            ; 0058fcdf
    PUSH 0x64b74f                       ; 0058fce0 | = "Reading texture list from %s"
    MOV ECX,dword ptr [0x00678a60]      ; 0058fce5 | g_CEditorToolsPtr
    PUSH ECX                            ; 0058fceb | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058fcec
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0058fcf1
    PUSH EBX                            ; 0058fcf4
    PUSH 0x64b76c                       ; 0058fcf5 | = "Reading texture list from %s\n"
    MOV EBX,dword ptr [ESP + 0xa080]    ; 0058fcfa
    PUSH EBX                            ; 0058fd01
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058fd02
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058fd07
    MOV EBX,0x1                         ; 0058fd0a
    MOV ESI,dword ptr [ESP + 0xa10c]    ; 0058fd0f
    PUSH ESI                            ; 0058fd16
        ;   Label: LAB_0058fd16
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058fd17
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058fd1c
    TEST EAX,EAX                        ; 0058fd1f
    JL 0x0058fd2d                       ; 0058fd21
        ;   XREF to: 0058fd2d (CONDITIONAL_JUMP)  ; LAB_0058fd2d
    CMP EAX,0xa                         ; 0058fd23
    JNZ 0x0058fd16                      ; 0058fd26
        ;   XREF to: 0058fd16 (CONDITIONAL_JUMP)  ; LAB_0058fd16
    DEC EBX                             ; 0058fd28
    TEST EBX,EBX                        ; 0058fd29
    JG 0x0058fd16                       ; 0058fd2b
        ;   XREF to: 0058fd16 (CONDITIONAL_JUMP)  ; LAB_0058fd16
    CMP dword ptr [ESP + 0xa114],0x96   ; 0058fd2d
        ;   Label: LAB_0058fd2d
    JLE 0x0058fd5c                      ; 0058fd38
        ;   XREF to: 0058fd5c (CONDITIONAL_JUMP)  ; LAB_0058fd5c
    MOV EDI,0x64b78a                    ; 0058fd3a | = "..\\core\\skeledit.cpp"
    MOV EAX,0xc24                       ; 0058fd3f
    PUSH 0x64b79f                       ; 0058fd44 | = "Too many textures in parts .S3D!"
    MOV dword ptr [0x02f0ca48],EDI      ; 0058fd49 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0058fd4f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058fd54
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058fd59
    MOV EDX,dword ptr [ESP + 0xa114]    ; 0058fd5c
        ;   Label: LAB_0058fd5c
    XOR ESI,ESI                         ; 0058fd63
    TEST EDX,EDX                        ; 0058fd65
    JLE 0x0058fdbb                      ; 0058fd67
        ;   XREF to: 0058fdbb (CONDITIONAL_JUMP)  ; LAB_0058fdbb
    LEA EBX,[ESP + 0xc]                 ; 0058fd69
    XOR EDI,EDI                         ; 0058fd6d
    LEA EAX,[ESP + 0x99b4]              ; 0058fd6f
        ;   Label: LAB_0058fd6f
    PUSH EAX                            ; 0058fd76
    PUSH 0x64b7c0                       ; 0058fd77 | = "%[^\n]\n"
    MOV ECX,dword ptr [ESP + 0xa114]    ; 0058fd7c
    PUSH ECX                            ; 0058fd83
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058fd84
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058fd89
    CMP EAX,0x1                         ; 0058fd8c
    JNZ 0x00590a70                      ; 0058fd8f
        ;   XREF to: 00590a70 (CONDITIONAL_JUMP)  ; LAB_00590a70
    PUSH EDI                            ; 0058fd95
    PUSH EBX                            ; 0058fd96
    PUSH EDI                            ; 0058fd97
    PUSH EDI                            ; 0058fd98
    LEA EAX,[ESP + 0x99c4]              ; 0058fd99
    PUSH EAX                            ; 0058fda0
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0058fda1
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0058fda6
    INC ESI                             ; 0058fda9
    MOV EAX,dword ptr [ESP + 0xa114]    ; 0058fdaa
    ADD EBX,0x100                       ; 0058fdb1
    CMP ESI,EAX                         ; 0058fdb7
    JL 0x0058fd6f                       ; 0058fdb9
        ;   XREF to: 0058fd6f (CONDITIONAL_JUMP)  ; LAB_0058fd6f
    MOV ECX,0x19                        ; 0058fdbb
        ;   Label: LAB_0058fdbb
    LEA EDI,[ESP + 0x9e70]              ; 0058fdc0
    MOV ESI,0x681878                    ; 0058fdc7 | = "gore"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0058fdcc
    MOVSD.REP ES:EDI,ESI                ; 0058fdcf | = "gore" | s_gore_00681878+4
    CMP dword ptr [EAX + 0x308],0x0     ; 0058fdd1
    JNZ 0x0058fdfa                      ; 0058fdd8
        ;   XREF to: 0058fdfa (CONDITIONAL_JUMP)  ; LAB_0058fdfa
    PUSH 0x1                            ; 0058fdda
    PUSH 0x64                           ; 0058fddc
    LEA EAX,[ESP + 0x9e78]              ; 0058fdde
    PUSH EAX                            ; 0058fde5
    PUSH 0x64b7c7                       ; 0058fde6 | = "Automap cap faces to texture (blank t..."
    MOV ECX,dword ptr [0x00678a60]      ; 0058fdeb | g_CEditorToolsPtr
    PUSH ECX                            ; 0058fdf1 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0058fdf2
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0058fdf7
    MOV EBX,0xffffffff                  ; 0058fdfa
        ;   Label: LAB_0058fdfa
    MOV AH,byte ptr [ESP + 0x9e70]      ; 0058fdff
    MOV dword ptr [ESP + 0xa098],EBX    ; 0058fe06
    TEST AH,AH                          ; 0058fe0d
    JZ 0x0058fed4                       ; 0058fe0f
        ;   XREF to: 0058fed4 (CONDITIONAL_JUMP)  ; LAB_0058fed4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058fe15
    MOV ESI,dword ptr [EAX + 0xbc]      ; 0058fe18
    XOR EBX,EBX                         ; 0058fe1e
    TEST ESI,ESI                        ; 0058fe20
    JLE 0x0058fe60                      ; 0058fe22
        ;   XREF to: 0058fe60 (CONDITIONAL_JUMP)  ; LAB_0058fe60
    LEA ESI,[EAX + 0xc8]                ; 0058fe24
    XOR EDI,EDI                         ; 0058fe2a
    PUSH EDI                            ; 0058fe2c
        ;   Label: LAB_0058fe2c
    LEA EAX,[ESP + 0x9bbc]              ; 0058fe2d
    PUSH EAX                            ; 0058fe34
    PUSH EDI                            ; 0058fe35
    PUSH EDI                            ; 0058fe36
    PUSH ESI                            ; 0058fe37
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0058fe38
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0058fe3d
    LEA EAX,[ESP + 0x9bb8]              ; 0058fe40
    PUSH EAX                            ; 0058fe47
    LEA EAX,[ESP + 0x9e74]              ; 0058fe48
    PUSH EAX                            ; 0058fe4f
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0058fe50
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0058fe55
    TEST EAX,EAX                        ; 0058fe58
    JNZ 0x00590a8e                      ; 0058fe5a
        ;   XREF to: 00590a8e (CONDITIONAL_JUMP)  ; LAB_00590a8e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058fe60
        ;   Label: LAB_0058fe60
    MOV ECX,dword ptr [EAX + 0xbc]      ; 0058fe63
    CMP EBX,ECX                         ; 0058fe69
    JL 0x0058feb8                       ; 0058fe6b
        ;   XREF to: 0058feb8 (CONDITIONAL_JUMP)  ; LAB_0058feb8
    CMP ECX,0x50                        ; 0058fe6d
    JGE 0x00590aa8                      ; 0058fe70
        ;   XREF to: 00590aa8 (CONDITIONAL_JUMP)  ; LAB_00590aa8
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058fe76
    LEA EAX,[ESP + 0x9e70]              ; 0058fe79
    MOV EDX,dword ptr [EDX + 0xbc]      ; 0058fe80
    PUSH EAX                            ; 0058fe86
    LEA EAX,[EDX*0x8 + 0x0]             ; 0058fe87
    ADD EAX,EDX                         ; 0058fe8e
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058fe90
    SHL EAX,0x3                         ; 0058fe93
    ADD EDX,0xc0                        ; 0058fe96
    ADD EAX,EDX                         ; 0058fe9c
    PUSH 0x64b830                       ; 0058fe9e | = "%s.raw"
    ADD EAX,0x8                         ; 0058fea3
    PUSH EAX                            ; 0058fea6
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0058fea7
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0058feac
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058feaf
    INC dword ptr [EAX + 0xbc]          ; 0058feb2
    PUSH 0x64b837                       ; 0058feb8 | = "Automap capped faces is active\n"
        ;   Label: LAB_0058feb8
    MOV EAX,dword ptr [ESP + 0xa07c]    ; 0058febd
    PUSH EAX                            ; 0058fec4
    MOV dword ptr [ESP + 0xa0a0],EBX    ; 0058fec5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058fecc
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0058fed1
    MOV EAX,dword ptr [ESP + 0xa08c]    ; 0058fed4
        ;   Label: LAB_0058fed4
    SHL EAX,0x2                         ; 0058fedb
    PUSH 0xc4e                          ; 0058fede
    MOV EDX,EAX                         ; 0058fee3
    SHL EAX,0x4                         ; 0058fee5
    PUSH 0x64b857                       ; 0058fee8 | = "..\\core\\skeledit.cpp"
    SUB EAX,EDX                         ; 0058feed
    PUSH EAX                            ; 0058feef
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0058fef0
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0058fef5
    MOV dword ptr [ESP + 0xa074],EAX    ; 0058fef8
    TEST EAX,EAX                        ; 0058feff
    JZ 0x00590abf                       ; 0058ff01
        ;   XREF to: 00590abf (CONDITIONAL_JUMP)  ; LAB_00590abf
    MOV EBX,dword ptr [EBP + 0x18]      ; 0058ff07
        ;   Label: LAB_0058ff07
    ADD EBX,0x200                       ; 0058ff0a
    PUSH EBX                            ; 0058ff10
    PUSH 0x64b8ba                       ; 0058ff11 | = "Reading faces from %s"
    MOV ESI,dword ptr [0x00678a60]      ; 0058ff16 | g_CEditorToolsPtr
    PUSH ESI                            ; 0058ff1c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058ff1d
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0058ff22
    PUSH EBX                            ; 0058ff25
    PUSH 0x64b8d0                       ; 0058ff26 | = "Reading faces from %s\n"
    MOV EDI,dword ptr [ESP + 0xa080]    ; 0058ff2b
    PUSH EDI                            ; 0058ff32
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058ff33
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058ff38
    MOV EBX,0x1                         ; 0058ff3b
    MOV ESI,dword ptr [ESP + 0xa10c]    ; 0058ff40
    PUSH ESI                            ; 0058ff47
        ;   Label: LAB_0058ff47
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058ff48
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058ff4d
    TEST EAX,EAX                        ; 0058ff50
    JL 0x0058ff5e                       ; 0058ff52
        ;   XREF to: 0058ff5e (CONDITIONAL_JUMP)  ; LAB_0058ff5e
    CMP EAX,0xa                         ; 0058ff54
    JNZ 0x0058ff47                      ; 0058ff57
        ;   XREF to: 0058ff47 (CONDITIONAL_JUMP)  ; LAB_0058ff47
    DEC EBX                             ; 0058ff59
    TEST EBX,EBX                        ; 0058ff5a
    JG 0x0058ff47                       ; 0058ff5c
        ;   XREF to: 0058ff47 (CONDITIONAL_JUMP)  ; LAB_0058ff47
    MOV EAX,dword ptr [ESP + 0xa08c]    ; 0058ff5e
        ;   Label: LAB_0058ff5e
    XOR ESI,ESI                         ; 0058ff65
    TEST EAX,EAX                        ; 0058ff67
    JLE 0x0059008b                      ; 0058ff69
        ;   XREF to: 0059008b (CONDITIONAL_JUMP)  ; LAB_0059008b
    MOV EBX,dword ptr [ESP + 0xa074]    ; 0058ff6f
    LEA EAX,[ESP + 0xa000]              ; 0058ff76
        ;   Label: LAB_0058ff76
    PUSH EAX                            ; 0058ff7d
    LEA EAX,[ESP + 0xa070]              ; 0058ff7e
    PUSH EAX                            ; 0058ff85
    LEA EAX,[ESP + 0x9f90]              ; 0058ff86
    PUSH EAX                            ; 0058ff8d
    LEA EAX,[ESP + 0xa008]              ; 0058ff8e
    PUSH EAX                            ; 0058ff95
    LEA EAX,[ESP + 0xa078]              ; 0058ff96
    PUSH EAX                            ; 0058ff9d
    LEA EAX,[ESP + 0x9f98]              ; 0058ff9e
    PUSH EAX                            ; 0058ffa5
    LEA EAX,[ESP + 0xa010]              ; 0058ffa6
    PUSH EAX                            ; 0058ffad
    LEA EAX,[ESP + 0xa080]              ; 0058ffae
    PUSH EAX                            ; 0058ffb5
    LEA EAX,[ESP + 0x9fa0]              ; 0058ffb6
    PUSH EAX                            ; 0058ffbd
    LEA EAX,[ESP + 0xa0e0]              ; 0058ffbe
    PUSH EAX                            ; 0058ffc5
    PUSH 0x64b8e7                       ; 0058ffc6 | = "%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n"
    MOV EDX,dword ptr [ESP + 0xa138]    ; 0058ffcb
    PUSH EDX                            ; 0058ffd2
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058ffd3
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x30                        ; 0058ffd8
    CMP EAX,0xa                         ; 0058ffdb
    JNZ 0x00590a70                      ; 0058ffde
        ;   XREF to: 00590a70 (CONDITIONAL_JUMP)  ; LAB_00590a70
    MOV ECX,EBX                         ; 0058ffe4
    MOV dword ptr [EBX + 0x4],0x3       ; 0058ffe6
    MOV EDI,EBX                         ; 0058ffed
    MOV EAX,dword ptr [ESP + 0xa0bc]    ; 0058ffef
    XOR EDX,EDX                         ; 0058fff6
    MOV dword ptr [EBX + 0x14],EAX      ; 0058fff8
    FLD double ptr [0x0064bfd2]         ; 0058fffb | DOUBLE_0064bfd2
    MOV EAX,dword ptr [ESP + EDX*0x1 + 0x9f80] ; 00590001
        ;   Label: LAB_00590001
    MOV dword ptr [ECX + 0x18],EAX      ; 00590008
    FLD float ptr [ESP + EDX*0x1 + 0xa064] ; 0059000b
    FMUL ST1                            ; 00590012
    CALL crt_math.c_round_FUN_005fe6b0  ; 00590014
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xa1e0]      ; 00590019
    MOV EAX,dword ptr [ESP + 0xa1e0]    ; 00590020
    MOV dword ptr [ECX + 0x1c],EAX      ; 00590027
    FLD float ptr [ESP + EDX*0x1 + 0x9ff8] ; 0059002a
    FMUL ST1                            ; 00590031
    ADD ECX,0xc                         ; 00590033
    CALL crt_math.c_round_FUN_005fe6b0  ; 00590036
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xa1e0]      ; 0059003b
    MOV EAX,dword ptr [ESP + 0xa1e0]    ; 00590042
    ADD EDX,0x4                         ; 00590049
    MOV dword ptr [ECX + 0x14],EAX      ; 0059004c
    CMP EDX,0xc                         ; 0059004f
    JNZ 0x00590001                      ; 00590052
        ;   XREF to: 00590001 (CONDITIONAL_JUMP)  ; LAB_00590001
    MOV ECX,dword ptr [EDI + 0x30]      ; 00590054
    PUSH ECX                            ; 00590057
    MOV EAX,dword ptr [EDI + 0x24]      ; 00590058
    PUSH EAX                            ; 0059005b
    MOV EDX,dword ptr [EDI + 0x18]      ; 0059005c
    PUSH EDX                            ; 0059005f
    PUSH ESI                            ; 00590060
    PUSH 0x64b906                       ; 00590061 | = "\t%4d: %4d %4d %4d\n"
    MOV ECX,dword ptr [ESP + 0xa08c]    ; 00590066
    PUSH ECX                            ; 0059006d
    FSTP ST0                            ; 0059006e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00590070
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 00590075
    INC ESI                             ; 00590078
    MOV EDI,dword ptr [ESP + 0xa08c]    ; 00590079
    ADD EBX,0x3c                        ; 00590080
    CMP ESI,EDI                         ; 00590083
    JL 0x0058ff76                       ; 00590085
        ;   XREF to: 0058ff76 (CONDITIONAL_JUMP)  ; LAB_0058ff76
    MOV EDX,dword ptr [ESP + 0xa090]    ; 0059008b
        ;   Label: LAB_0059008b
    LEA EAX,[EDX*0x4 + 0x0]             ; 00590092
    SUB EAX,EDX                         ; 00590099
    PUSH 0xc7c                          ; 0059009b
    SHL EAX,0x2                         ; 005900a0
    PUSH 0x64b919                       ; 005900a3 | = "..\\core\\skeledit.cpp"
    ADD EAX,0x4                         ; 005900a8
    PUSH EAX                            ; 005900ab
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 005900ac
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    MOV EDX,EAX                         ; 005900b1
    ADD ESP,0xc                         ; 005900b3
    TEST EAX,EAX                        ; 005900b6
    JZ 0x005900c7                       ; 005900b8
        ;   XREF to: 005900c7 (CONDITIONAL_JUMP)  ; LAB_005900c7
    ADD EDX,0x4                         ; 005900ba
    MOV EAX,dword ptr [ESP + 0xa090]    ; 005900bd
    MOV dword ptr [EDX + -0x4],EAX      ; 005900c4
    MOV dword ptr [ESP + 0xa070],EDX    ; 005900c7
        ;   Label: LAB_005900c7
    TEST EDX,EDX                        ; 005900ce
    JZ 0x00590ae7                       ; 005900d0
        ;   XREF to: 00590ae7 (CONDITIONAL_JUMP)  ; LAB_00590ae7
    MOV EBX,dword ptr [EBP + 0x18]      ; 005900d6
        ;   Label: LAB_005900d6
    ADD EBX,0x200                       ; 005900d9
    PUSH EBX                            ; 005900df
    PUSH 0x64b97c                       ; 005900e0 | = "Reading vertices from %s"
    MOV ECX,dword ptr [0x00678a60]      ; 005900e5 | g_CEditorToolsPtr
    PUSH ECX                            ; 005900eb | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005900ec
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 005900f1
    PUSH EBX                            ; 005900f4
    PUSH 0x64b995                       ; 005900f5 | = "Reading vertices from %s\n"
    MOV EBX,dword ptr [ESP + 0xa080]    ; 005900fa
    PUSH EBX                            ; 00590101
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00590102
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00590107
    MOV EBX,0x1                         ; 0059010a
    MOV ESI,dword ptr [ESP + 0xa10c]    ; 0059010f
    PUSH ESI                            ; 00590116
        ;   Label: LAB_00590116
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00590117
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0059011c
    TEST EAX,EAX                        ; 0059011f
    JL 0x0059012d                       ; 00590121
        ;   XREF to: 0059012d (CONDITIONAL_JUMP)  ; LAB_0059012d
    CMP EAX,0xa                         ; 00590123
    JNZ 0x00590116                      ; 00590126
        ;   XREF to: 00590116 (CONDITIONAL_JUMP)  ; LAB_00590116
    DEC EBX                             ; 00590128
    TEST EBX,EBX                        ; 00590129
    JG 0x00590116                       ; 0059012b
        ;   XREF to: 00590116 (CONDITIONAL_JUMP)  ; LAB_00590116
    MOV ESI,dword ptr [ESP + 0xa090]    ; 0059012d
        ;   Label: LAB_0059012d
    XOR EBX,EBX                         ; 00590134
    TEST ESI,ESI                        ; 00590136
    JLE 0x005901e1                      ; 00590138
        ;   XREF to: 005901e1 (CONDITIONAL_JUMP)  ; LAB_005901e1
    MOV EAX,dword ptr [ESP + 0xa070]    ; 0059013e
    MOV EDI,dword ptr [ESP + 0xa070]    ; 00590145
    ADD EAX,0x8                         ; 0059014c
    ADD EDI,0x4                         ; 0059014f
    MOV dword ptr [ESP + 0xa16c],EAX    ; 00590152
    IMUL ESI,EBX,0xc                    ; 00590159
        ;   Label: LAB_00590159
    MOV EDX,dword ptr [ESP + 0xa16c]    ; 0059015c
    PUSH EDX                            ; 00590163
    MOV EAX,dword ptr [ESP + 0xa074]    ; 00590164
    PUSH EDI                            ; 0059016b
    ADD ESI,EAX                         ; 0059016c
    PUSH ESI                            ; 0059016e
    PUSH 0x64b9af                       ; 0059016f | = "%f,%f,%f\n"
    MOV ECX,dword ptr [ESP + 0xa11c]    ; 00590174
    PUSH ECX                            ; 0059017b
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0059017c
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00590181
    CMP EAX,0x3                         ; 00590184
    JNZ 0x00590a70                      ; 00590187
        ;   XREF to: 00590a70 (CONDITIONAL_JUMP)  ; LAB_00590a70
    SUB ESP,0x8                         ; 0059018d
    FLD float ptr [ESI + 0x8]           ; 00590190
    FSTP double ptr [ESP]               ; 00590193
    SUB ESP,0x8                         ; 00590196
    FLD float ptr [ESI + 0x4]           ; 00590199
    FSTP double ptr [ESP]               ; 0059019c
    SUB ESP,0x8                         ; 0059019f
    FLD float ptr [ESI]                 ; 005901a2
    FSTP double ptr [ESP]               ; 005901a4
    PUSH EBX                            ; 005901a7
    PUSH 0x64b9b9                       ; 005901a8 | = "\t%4d: %7.3f %7.3f %7.3f\n"
    MOV ESI,dword ptr [ESP + 0xa098]    ; 005901ad
    PUSH ESI                            ; 005901b4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005901b5
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x24                        ; 005901ba
    ADD EDI,0xc                         ; 005901bd
    MOV EAX,dword ptr [ESP + 0xa16c]    ; 005901c0
    INC EBX                             ; 005901c7
    ADD EAX,0xc                         ; 005901c8
    MOV EDX,dword ptr [ESP + 0xa090]    ; 005901cb
    MOV dword ptr [ESP + 0xa16c],EAX    ; 005901d2
    CMP EBX,EDX                         ; 005901d9
    JL 0x00590159                       ; 005901db
        ;   XREF to: 00590159 (CONDITIONAL_JUMP)  ; LAB_00590159
    PUSH 0xc8c                          ; 005901e1
        ;   Label: LAB_005901e1
    PUSH 0x64b9d2                       ; 005901e6 | = "..\\core\\skeledit.cpp"
    MOV ECX,dword ptr [ESP + 0xa114]    ; 005901eb
    PUSH ECX                            ; 005901f2
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005901f3
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005901f8
    PUSH 0x64b9e7                       ; 005901fb | = "Removing duplicate faces\n"
    MOV ESI,dword ptr [ESP + 0xa07c]    ; 00590200
    XOR EBX,EBX                         ; 00590207
    PUSH ESI                            ; 00590209
    MOV dword ptr [ESP + 0xa114],EBX    ; 0059020a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00590211
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00590216
    MOV EAX,dword ptr [ESP + 0xa08c]    ; 00590219
    MOV dword ptr [ESP + 0xa1d0],EBX    ; 00590220
    TEST EAX,EAX                        ; 00590227
    JLE 0x005902f7                      ; 00590229
        ;   XREF to: 005902f7 (CONDITIONAL_JUMP)  ; LAB_005902f7
    MOV EAX,dword ptr [ESP + 0xa074]    ; 0059022f
    MOV dword ptr [ESP + 0xa174],EAX    ; 00590236
    MOV EAX,dword ptr [ESP + 0xa174]    ; 0059023d
        ;   Label: LAB_0059023d
    XOR EDX,EDX                         ; 00590244
    MOV EBX,dword ptr [ESP + 0xa1d0]    ; 00590246
    MOV dword ptr [ESP + 0xa0c8],EDX    ; 0059024d
    MOV dword ptr [ESP + 0xa0cc],EDX    ; 00590254
    MOV dword ptr [ESP + 0xa0c4],EAX    ; 0059025b
    TEST EBX,EBX                        ; 00590262
    JLE 0x005902b0                      ; 00590264
        ;   XREF to: 005902b0 (CONDITIONAL_JUMP)  ; LAB_005902b0
    MOV EAX,dword ptr [ESP + 0xa074]    ; 00590266
    MOV dword ptr [ESP + 0xa170],EAX    ; 0059026d
    MOV EDI,dword ptr [ESP + 0xa170]    ; 00590274
        ;   Label: LAB_00590274
    CMP dword ptr [EDI + 0x4],0x3       ; 0059027b
    JZ 0x00590b0e                       ; 0059027f
        ;   XREF to: 00590b0e (CONDITIONAL_JUMP)  ; LAB_00590b0e
    MOV EDX,dword ptr [ESP + 0xa0cc]    ; 00590285
        ;   Label: LAB_00590285
    MOV EAX,dword ptr [ESP + 0xa170]    ; 0059028c
    MOV ECX,dword ptr [ESP + 0xa1d0]    ; 00590293
    INC EDX                             ; 0059029a
    ADD EAX,0x3c                        ; 0059029b
    MOV dword ptr [ESP + 0xa0cc],EDX    ; 0059029e
    MOV dword ptr [ESP + 0xa170],EAX    ; 005902a5
    CMP EDX,ECX                         ; 005902ac
    JL 0x00590274                       ; 005902ae
        ;   XREF to: 00590274 (CONDITIONAL_JUMP)  ; LAB_00590274
    CMP dword ptr [ESP + 0xa0c8],0x0    ; 005902b0
        ;   Label: LAB_005902b0
    JZ 0x005902c8                       ; 005902b8
        ;   XREF to: 005902c8 (CONDITIONAL_JUMP)  ; LAB_005902c8
    MOV EAX,dword ptr [ESP + 0xa0c4]    ; 005902ba
        ;   Label: LAB_005902ba
    MOV dword ptr [EAX + 0x4],0x0       ; 005902c1
    MOV EDI,dword ptr [ESP + 0xa1d0]    ; 005902c8
        ;   Label: LAB_005902c8
    MOV ESI,dword ptr [ESP + 0xa174]    ; 005902cf
    MOV EDX,dword ptr [ESP + 0xa08c]    ; 005902d6
    INC EDI                             ; 005902dd
    ADD ESI,0x3c                        ; 005902de
    MOV dword ptr [ESP + 0xa1d0],EDI    ; 005902e1
    MOV dword ptr [ESP + 0xa174],ESI    ; 005902e8
    CMP EDI,EDX                         ; 005902ef
    JL 0x0059023d                       ; 005902f1
        ;   XREF to: 0059023d (CONDITIONAL_JUMP)  ; LAB_0059023d
    MOV EAX,dword ptr [EBP + 0x18]      ; 005902f7
        ;   Label: LAB_005902f7
    ADD EAX,0x200                       ; 005902fa
    PUSH EAX                            ; 005902ff
    PUSH 0x64ba2b                       ; 00590300 | = "Biasing %s"
    MOV ECX,dword ptr [0x00678a60]      ; 00590305 | g_CEditorToolsPtr
    PUSH ECX                            ; 0059030b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0059030c
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00590311
    LEA EAX,[ESP + 0x9eec]              ; 00590314
    MOV EDX,dword ptr [ESP + 0xa070]    ; 0059031b
    CMP EAX,EDX                         ; 00590322
    JZ 0x00590343                       ; 00590324
        ;   XREF to: 00590343 (CONDITIONAL_JUMP)  ; LAB_00590343
    MOV EAX,dword ptr [EDX]             ; 00590326
    MOV dword ptr [ESP + 0x9eec],EAX    ; 00590328
    MOV EAX,dword ptr [EDX + 0x4]       ; 0059032f
    MOV dword ptr [ESP + 0x9ef0],EAX    ; 00590332
    MOV EAX,dword ptr [EDX + 0x8]       ; 00590339
    MOV dword ptr [ESP + 0x9ef4],EAX    ; 0059033c
    LEA EAX,[ESP + 0x9ef8]              ; 00590343
        ;   Label: LAB_00590343
    CMP EAX,EDX                         ; 0059034a
    JZ 0x0059036b                       ; 0059034c
        ;   XREF to: 0059036b (CONDITIONAL_JUMP)  ; LAB_0059036b
    MOV EAX,dword ptr [EDX]             ; 0059034e
    MOV dword ptr [ESP + 0x9ef8],EAX    ; 00590350
    MOV EAX,dword ptr [EDX + 0x4]       ; 00590357
    MOV dword ptr [ESP + 0x9efc],EAX    ; 0059035a
    MOV EAX,dword ptr [EDX + 0x8]       ; 00590361
    MOV dword ptr [ESP + 0x9f00],EAX    ; 00590364
    MOV EDI,dword ptr [ESP + 0xa090]    ; 0059036b
        ;   Label: LAB_0059036b
    MOV ESI,0x1                         ; 00590372
    CMP EDI,ESI                         ; 00590377
    JLE 0x005903b0                      ; 00590379
        ;   XREF to: 005903b0 (CONDITIONAL_JUMP)  ; LAB_005903b0
    MOV EBX,dword ptr [ESP + 0xa070]    ; 0059037b
    ADD EBX,0xc                         ; 00590382
    PUSH EBX                            ; 00590385
        ;   Label: LAB_00590385
    LEA EAX,[ESP + 0x9ef0]              ; 00590386
    PUSH EAX                            ; 0059038d
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 0059038e
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00590393
    INC ESI                             ; 00590396
    MOV EAX,dword ptr [ESP + 0xa090]    ; 00590397
    ADD EBX,0xc                         ; 0059039e
    CMP ESI,EAX                         ; 005903a1
    JL 0x00590385                       ; 005903a3
        ;   XREF to: 00590385 (CONDITIONAL_JUMP)  ; LAB_00590385
    LEA EAX,[EAX]                       ; 005903a5
    LEA EDX,[EDX]                       ; 005903ab
    MOV EBX,EBX                         ; 005903ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 005903b0
        ;   Label: LAB_005903b0
    MOV EAX,dword ptr [EAX + 0x40]      ; 005903b3
    LEA EDX,[EAX + 0x10]                ; 005903b6
    LEA EAX,[ESP + 0x9ed4]              ; 005903b9
    MOV ECX,EDX                         ; 005903c0
    CMP EAX,EDX                         ; 005903c2
    JZ 0x005903e3                       ; 005903c4
        ;   XREF to: 005903e3 (CONDITIONAL_JUMP)  ; LAB_005903e3
    MOV EAX,dword ptr [EDX]             ; 005903c6
    MOV dword ptr [ESP + 0x9ed4],EAX    ; 005903c8
    MOV EAX,dword ptr [EDX + 0x4]       ; 005903cf
    MOV dword ptr [ESP + 0x9ed8],EAX    ; 005903d2
    MOV EAX,dword ptr [EDX + 0x8]       ; 005903d9
    MOV dword ptr [ESP + 0x9edc],EAX    ; 005903dc
    LEA EAX,[ESP + 0x9ee0]              ; 005903e3
        ;   Label: LAB_005903e3
    CMP EAX,ECX                         ; 005903ea
    JZ 0x0059040b                       ; 005903ec
        ;   XREF to: 0059040b (CONDITIONAL_JUMP)  ; LAB_0059040b
    MOV EAX,dword ptr [ECX]             ; 005903ee
    MOV dword ptr [ESP + 0x9ee0],EAX    ; 005903f0
    MOV EAX,dword ptr [ECX + 0x4]       ; 005903f7
    MOV dword ptr [ESP + 0x9ee4],EAX    ; 005903fa
    MOV EAX,dword ptr [ECX + 0x8]       ; 00590401
    MOV dword ptr [ESP + 0x9ee8],EAX    ; 00590404
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059040b
        ;   Label: LAB_0059040b
    MOV ESI,0x1                         ; 0059040e
    CMP ESI,dword ptr [EAX + 0x2c]      ; 00590413
    JGE 0x00590450                      ; 00590416
        ;   XREF to: 00590450 (CONDITIONAL_JUMP)  ; LAB_00590450
    MOV EBX,0x34                        ; 00590418
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059041d
        ;   Label: LAB_0059041d
    MOV EAX,dword ptr [EAX + 0x40]      ; 00590420
    ADD EAX,EBX                         ; 00590423
    ADD EAX,0x10                        ; 00590425
    PUSH EAX                            ; 00590428
    LEA EAX,[ESP + 0x9ed8]              ; 00590429
    PUSH EAX                            ; 00590430
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 00590431
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00590436
    MOV EAX,dword ptr [EBP + 0x14]      ; 00590439
    INC ESI                             ; 0059043c
    MOV ECX,dword ptr [EAX + 0x2c]      ; 0059043d
    ADD EBX,0x34                        ; 00590440
    CMP ESI,ECX                         ; 00590443
    JL 0x0059041d                       ; 00590445
        ;   XREF to: 0059041d (CONDITIONAL_JUMP)  ; LAB_0059041d
    LEA EAX,[EAX]                       ; 00590447
    LEA EDX,[EDX]                       ; 0059044d
    FLD float ptr [ESP + 0x9ef8]        ; 00590450
        ;   Label: LAB_00590450
    FLD float ptr [ESP + 0x9ee0]        ; 00590457
    FSUB float ptr [ESP + 0x9ed4]       ; 0059045e
    FXCH                                ; 00590465
    FSUB float ptr [ESP + 0x9eec]       ; 00590467
    FXCH                                ; 0059046e
    FSTP float ptr [ESP + 0xa040]       ; 00590470
    FSTP float ptr [ESP + 0x9f74]       ; 00590477
    FLD float ptr [ESP + 0xa040]        ; 0059047e
    FDIV float ptr [ESP + 0x9f74]       ; 00590485
    FLD float ptr [ESP + 0x9efc]        ; 0059048c
    FLD float ptr [ESP + 0x9ee4]        ; 00590493
    FSUB float ptr [ESP + 0x9ed8]       ; 0059049a
    FXCH                                ; 005904a1
    FSUB float ptr [ESP + 0x9ef0]       ; 005904a3
    FXCH                                ; 005904aa
    FSTP float ptr [ESP + 0xa044]       ; 005904ac
    FSTP float ptr [ESP + 0x9f78]       ; 005904b3
    FLD float ptr [ESP + 0xa044]        ; 005904ba
    FDIV float ptr [ESP + 0x9f78]       ; 005904c1
    FLD float ptr [ESP + 0x9f00]        ; 005904c8
    FLD float ptr [ESP + 0x9ee8]        ; 005904cf
    FSUB float ptr [ESP + 0x9edc]       ; 005904d6
    FXCH                                ; 005904dd
    FSUB float ptr [ESP + 0x9ef4]       ; 005904df
    FXCH                                ; 005904e6
    FSTP float ptr [ESP + 0xa048]       ; 005904e8
    FSTP float ptr [ESP + 0x9f7c]       ; 005904ef
    FLD float ptr [ESP + 0xa048]        ; 005904f6
    FDIV float ptr [ESP + 0x9f7c]       ; 005904fd
    MOV EAX,dword ptr [ESP + 0xa040]    ; 00590504
    MOV dword ptr [ESP + 0x9f8c],EAX    ; 0059050b
    MOV EAX,dword ptr [ESP + 0xa044]    ; 00590512
    MOV dword ptr [ESP + 0x9f90],EAX    ; 00590519
    MOV EAX,dword ptr [ESP + 0xa048]    ; 00590520
    MOV dword ptr [ESP + 0x9f94],EAX    ; 00590527
    MOV EAX,dword ptr [ESP + 0x9f74]    ; 0059052e
    MOV dword ptr [ESP + 0x9f50],EAX    ; 00590535
    MOV EAX,dword ptr [ESP + 0x9f78]    ; 0059053c
    MOV dword ptr [ESP + 0x9f54],EAX    ; 00590543
    MOV EAX,dword ptr [ESP + 0x9f7c]    ; 0059054a
    MOV dword ptr [ESP + 0x9f58],EAX    ; 00590551
    MOV EAX,dword ptr [ESP + 0xa040]    ; 00590558
    MOV dword ptr [ESP + 0x9fc8],EAX    ; 0059055f
    MOV EAX,dword ptr [ESP + 0xa044]    ; 00590566
    MOV EBX,dword ptr [ESP + 0xa090]    ; 0059056d
    MOV dword ptr [ESP + 0x9fcc],EAX    ; 00590574
    MOV EAX,dword ptr [ESP + 0xa048]    ; 0059057b
    XOR EDX,EDX                         ; 00590582
    MOV dword ptr [ESP + 0x9fd0],EAX    ; 00590584
    MOV EAX,dword ptr [ESP + 0x9f74]    ; 0059058b
    FXCH ST2                            ; 00590592
    FSTP float ptr [ESP + 0xa01c]       ; 00590594
    MOV dword ptr [ESP + 0xa010],EAX    ; 0059059b
    MOV EAX,dword ptr [ESP + 0x9f78]    ; 005905a2
    FSTP float ptr [ESP + 0xa020]       ; 005905a9
    MOV dword ptr [ESP + 0xa014],EAX    ; 005905b0
    MOV EAX,dword ptr [ESP + 0x9f7c]    ; 005905b7
    FSTP float ptr [ESP + 0xa024]       ; 005905be
    MOV dword ptr [ESP + 0xa018],EAX    ; 005905c5
    TEST EBX,EBX                        ; 005905cc
    JLE 0x00590640                      ; 005905ce
        ;   XREF to: 00590640 (CONDITIONAL_JUMP)  ; LAB_00590640
    MOV EAX,dword ptr [ESP + 0xa070]    ; 005905d0
    FLD float ptr [EAX]                 ; 005905d7
        ;   Label: LAB_005905d7
    FSUB float ptr [ESP + 0x9eec]       ; 005905d9
    FMUL float ptr [ESP + 0xa01c]       ; 005905e0
    FADD float ptr [ESP + 0x9ed4]       ; 005905e7
    FLD float ptr [EAX + 0x4]           ; 005905ee
    FXCH                                ; 005905f1
    FSTP float ptr [EAX]                ; 005905f3
    FSUB float ptr [ESP + 0x9ef0]       ; 005905f5
    FMUL float ptr [ESP + 0xa020]       ; 005905fc
    FADD float ptr [ESP + 0x9ed8]       ; 00590603
    FLD float ptr [EAX + 0x8]           ; 0059060a
    FXCH                                ; 0059060d
    FSTP float ptr [EAX + 0x4]          ; 0059060f
    FSUB float ptr [ESP + 0x9ef4]       ; 00590612
    FMUL float ptr [ESP + 0xa024]       ; 00590619
    FADD float ptr [ESP + 0x9edc]       ; 00590620
    INC EDX                             ; 00590627
    FSTP float ptr [EAX + 0x8]          ; 00590628
    MOV ESI,dword ptr [ESP + 0xa090]    ; 0059062b
    ADD EAX,0xc                         ; 00590632
    CMP EDX,ESI                         ; 00590635
    JL 0x005905d7                       ; 00590637
        ;   XREF to: 005905d7 (CONDITIONAL_JUMP)  ; LAB_005905d7
    LEA EAX,[EAX]                       ; 00590639
    NOP                                 ; 0059063f
    FLD float ptr [ESP + 0xa024]        ; 00590640
        ;   Label: LAB_00590640
    SUB ESP,0x8                         ; 00590647
    FSTP double ptr [ESP]               ; 0059064a
    FLD float ptr [ESP + 0xa028]        ; 0059064d
    SUB ESP,0x8                         ; 00590654
    FSTP double ptr [ESP]               ; 00590657
    FLD float ptr [ESP + 0xa02c]        ; 0059065a
    SUB ESP,0x8                         ; 00590661
    FSTP double ptr [ESP]               ; 00590664
    PUSH 0x64ba36                       ; 00590667 | = "Scale = %7.3f %7.3f %7.3f\n"
    MOV EDI,dword ptr [ESP + 0xa094]    ; 0059066c
    PUSH EDI                            ; 00590673
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00590674
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 00590679
    MOV EDX,dword ptr [ESP + 0xa08c]    ; 0059067c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00590683
    SUB EAX,EDX                         ; 0059068a
    PUSH 0xd0f                          ; 0059068c
    SHL EAX,0x2                         ; 00590691
    PUSH 0x64ba51                       ; 00590694 | = "..\\core\\skeledit.cpp"
    ADD EAX,0x4                         ; 00590699
    PUSH EAX                            ; 0059069c
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0059069d
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    MOV EDX,EAX                         ; 005906a2
    ADD ESP,0xc                         ; 005906a4
    TEST EAX,EAX                        ; 005906a7
    JZ 0x005906b8                       ; 005906a9
        ;   XREF to: 005906b8 (CONDITIONAL_JUMP)  ; LAB_005906b8
    ADD EDX,0x4                         ; 005906ab
    MOV EAX,dword ptr [ESP + 0xa08c]    ; 005906ae
    MOV dword ptr [EDX + -0x4],EAX      ; 005906b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005906b8
        ;   Label: LAB_005906b8
    MOV EBX,dword ptr [EAX + 0x54]      ; 005906bb
    LEA EAX,[EBX*0x4 + 0x0]             ; 005906be
    SUB EAX,EBX                         ; 005906c5
    PUSH 0xd10                          ; 005906c7
    SHL EAX,0x2                         ; 005906cc
    PUSH 0x64ba66                       ; 005906cf | = "..\\core\\skeledit.cpp"
    ADD EAX,0x4                         ; 005906d4
    PUSH EAX                            ; 005906d7
    MOV dword ptr [ESP + 0xa088],EDX    ; 005906d8
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 005906df
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005906e4
    TEST EAX,EAX                        ; 005906e7
    JZ 0x005906f1                       ; 005906e9
        ;   XREF to: 005906f1 (CONDITIONAL_JUMP)  ; LAB_005906f1
    ADD EAX,0x4                         ; 005906eb
    MOV dword ptr [EAX + -0x4],EBX      ; 005906ee
    MOV EDX,dword ptr [ESP + 0xa07c]    ; 005906f1
        ;   Label: LAB_005906f1
    MOV dword ptr [ESP + 0xa080],EAX    ; 005906f8
    TEST EDX,EDX                        ; 005906ff
    JNZ 0x00590c86                      ; 00590701
        ;   XREF to: 00590c86 (CONDITIONAL_JUMP)  ; LAB_00590c86
    MOV ECX,0x64ba7b                    ; 00590707 | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_00590707
    MOV EBX,0xd11                       ; 0059070c
    PUSH 0x64ba90                       ; 00590711 | = "Out of memory!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00590716 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0059071c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00590722
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00590727
    MOV ESI,dword ptr [ESP + 0xa08c]    ; 0059072a
        ;   Label: LAB_0059072a
    XOR EDI,EDI                         ; 00590731
    TEST ESI,ESI                        ; 00590733
    JLE 0x00590761                      ; 00590735
        ;   XREF to: 00590761 (CONDITIONAL_JUMP)  ; LAB_00590761
    MOV ECX,dword ptr [ESP + 0xa074]    ; 00590737
    MOV EDX,dword ptr [ESP + 0xa07c]    ; 0059073e
    CMP dword ptr [ECX + 0x4],0x3       ; 00590745
        ;   Label: LAB_00590745
    JZ 0x00590c93                       ; 00590749
        ;   XREF to: 00590c93 (CONDITIONAL_JUMP)  ; LAB_00590c93
    MOV ESI,dword ptr [ESP + 0xa08c]    ; 0059074f
        ;   Label: LAB_0059074f
    ADD EDX,0xc                         ; 00590756
    INC EDI                             ; 00590759
    ADD ECX,0x3c                        ; 0059075a
    CMP EDI,ESI                         ; 0059075d
    JL 0x00590745                       ; 0059075f
        ;   XREF to: 00590745 (CONDITIONAL_JUMP)  ; LAB_00590745
    MOV EAX,dword ptr [EBP + 0x14]      ; 00590761
        ;   Label: LAB_00590761
    MOV EDX,dword ptr [EAX + 0x54]      ; 00590764
    XOR EDI,EDI                         ; 00590767
    TEST EDX,EDX                        ; 00590769
    JLE 0x0059093e                      ; 0059076b
        ;   XREF to: 0059093e (CONDITIONAL_JUMP)  ; LAB_0059093e
    MOV EDX,dword ptr [ESP + 0xa080]    ; 00590771
    MOV dword ptr [ESP + 0xa178],EDI    ; 00590778
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059077f
        ;   Label: LAB_0059077f
    MOV ESI,dword ptr [ESP + 0xa178]    ; 00590782
    MOV EBX,dword ptr [EBX + 0x7c]      ; 00590789
    ADD EBX,ESI                         ; 0059078c
    XOR EAX,EAX                         ; 0059078e
    MOV AX,word ptr [EBX + 0x2]         ; 00590790
    IMUL EAX,EAX,0x34                   ; 00590794
    XOR ESI,ESI                         ; 00590797
    MOV SI,word ptr [EBX]               ; 00590799
    IMUL ESI,ESI,0x34                   ; 0059079c
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059079f
    MOV ECX,dword ptr [ECX + 0x40]      ; 005907a2
    MOV BX,word ptr [EBX + 0x4]         ; 005907a5
    AND EBX,0xffff                      ; 005907a9
    IMUL EBX,EBX,0x34                   ; 005907af
    FLD float ptr [ECX + EAX*0x1 + 0x10] ; 005907b2
    FSUB float ptr [ECX + ESI*0x1 + 0x10] ; 005907b6
    FSTP float ptr [ESP + 0x9f2c]       ; 005907ba
    FLD float ptr [ECX + EAX*0x1 + 0x14] ; 005907c1
    FSUB float ptr [ECX + ESI*0x1 + 0x14] ; 005907c5
    FSTP float ptr [ESP + 0x9f30]       ; 005907c9
    FLD float ptr [ECX + EAX*0x1 + 0x18] ; 005907d0
    FSUB float ptr [ECX + ESI*0x1 + 0x18] ; 005907d4
    FSTP float ptr [ESP + 0x9f34]       ; 005907d8
    FLD float ptr [ECX + EBX*0x1 + 0x10] ; 005907df
    FSUB float ptr [ECX + EAX*0x1 + 0x10] ; 005907e3
    FSTP float ptr [ESP + 0x9f98]       ; 005907e7
    FLD float ptr [ECX + EBX*0x1 + 0x14] ; 005907ee
    FSUB float ptr [ECX + EAX*0x1 + 0x14] ; 005907f2
    FLD float ptr [ESP + 0x9f2c]        ; 005907f6
    FXCH                                ; 005907fd
    FSTP float ptr [ESP + 0x9f9c]       ; 005907ff
    FMUL float ptr [ESP + 0x9f9c]       ; 00590806
    FLD float ptr [ESP + 0x9f34]        ; 0059080d
    FMUL float ptr [ESP + 0x9f98]       ; 00590814
    FLD float ptr [ESP + 0x9f30]        ; 0059081b
    FMUL float ptr [ESP + 0x9f98]       ; 00590822
    FLD float ptr [ECX + EBX*0x1 + 0x18] ; 00590829
    FSUB float ptr [ECX + EAX*0x1 + 0x18] ; 0059082d
    FLD float ptr [ESP + 0x9f30]        ; 00590831
    FXCH                                ; 00590838
    FSTP float ptr [ESP + 0x9fa0]       ; 0059083a
    FMUL float ptr [ESP + 0x9fa0]       ; 00590841
    FLD float ptr [ESP + 0x9f2c]        ; 00590848
    FMUL float ptr [ESP + 0x9fa0]       ; 0059084f
    FLD float ptr [ESP + 0x9f34]        ; 00590856
    FXCH                                ; 0059085d
    FSUBP ST4,ST0                       ; 0059085f
    FMUL float ptr [ESP + 0x9f9c]       ; 00590861
    FXCH ST3                            ; 00590868
    FST float ptr [ESP + 0x9fc0]        ; 0059086a
    FXCH ST3                            ; 00590871
    FSUBP                               ; 00590873
    FXCH ST2                            ; 00590875
    FMUL float ptr [ESP + 0x9fc0]       ; 00590877
    FXCH ST2                            ; 0059087e
    FST float ptr [ESP + 0x9fbc]        ; 00590880
    FMUL float ptr [ESP + 0x9fbc]       ; 00590887
    FXCH                                ; 0059088e
    FSUBP ST3,ST0                       ; 00590890
    FADDP                               ; 00590892
    FXCH                                ; 00590894
    FST float ptr [ESP + 0x9fc4]        ; 00590896
    FMUL float ptr [ESP + 0x9fc4]       ; 0059089d
    FADDP                               ; 005908a4
    FSQRT                               ; 005908a6
    FST float ptr [ESP]                 ; 005908a8
    FLDZ                                ; 005908ab
    FCOMPP                              ; 005908ad
    FNSTSW AX                           ; 005908af
    SAHF                                ; 005908b1
    JNC 0x00590e31                      ; 005908b2
        ;   XREF to: 00590e31 (CONDITIONAL_JUMP)  ; LAB_00590e31
    FLD1                                ; 005908b8
    FLD float ptr [ESP + 0x9fbc]        ; 005908ba
    FXCH                                ; 005908c1
    FDIV float ptr [ESP]                ; 005908c3
    FXCH                                ; 005908c6
    FMUL ST1                            ; 005908c8
    FLD float ptr [ESP + 0x9fc0]        ; 005908ca
    FMUL ST2                            ; 005908d1
    FLD float ptr [ESP + 0x9fc4]        ; 005908d3
    FMULP ST3                           ; 005908da
    FXCH                                ; 005908dc
    FSTP float ptr [ESP + 0x9fbc]       ; 005908de
    FSTP float ptr [ESP + 0x9fc0]       ; 005908e5
    FSTP float ptr [ESP + 0x9fc4]       ; 005908ec
    LEA EAX,[ESP + 0x9fbc]              ; 005908f3
        ;   Label: LAB_005908f3
    CMP EDX,EAX                         ; 005908fa
    JZ 0x0059091b                       ; 005908fc
        ;   XREF to: 0059091b (CONDITIONAL_JUMP)  ; LAB_0059091b
    MOV EAX,dword ptr [ESP + 0x9fbc]    ; 005908fe
    MOV dword ptr [EDX],EAX             ; 00590905
    MOV EAX,dword ptr [ESP + 0x9fc0]    ; 00590907
    MOV dword ptr [EDX + 0x4],EAX       ; 0059090e
    MOV EAX,dword ptr [ESP + 0x9fc4]    ; 00590911
    MOV dword ptr [EDX + 0x8],EAX       ; 00590918
    MOV ESI,dword ptr [ESP + 0xa178]    ; 0059091b
        ;   Label: LAB_0059091b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00590922
    ADD EDX,0xc                         ; 00590925
    INC EDI                             ; 00590928
    ADD ESI,0x12                        ; 00590929
    MOV ECX,dword ptr [EAX + 0x54]      ; 0059092c
    MOV dword ptr [ESP + 0xa178],ESI    ; 0059092f
    CMP EDI,ECX                         ; 00590936
    JL 0x0059077f                       ; 00590938
        ;   XREF to: 0059077f (CONDITIONAL_JUMP)  ; LAB_0059077f
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0059093e
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0059093e
    PUSH 0x64ba9f                       ; 00590943 | = "Matching faces"
    MOV EBX,dword ptr [0x00678a60]      ; 00590948 | g_CEditorToolsPtr
    PUSH EBX                            ; 0059094e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 0059094f
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 00590954
    MOV EAX,dword ptr [EBP + 0x18]      ; 00590957
    ADD EAX,0x200                       ; 0059095a
    PUSH EAX                            ; 0059095f
    PUSH 0x64baae                       ; 00590960 | = "Matching faces in %s\n"
    MOV ESI,dword ptr [ESP + 0xa080]    ; 00590965
    PUSH ESI                            ; 0059096c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0059096d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00590972
    MOV EDX,dword ptr [EBP + 0x14]      ; 00590975
    MOV EAX,dword ptr [ESP + 0xa08c]    ; 00590978
    MOV EDI,dword ptr [EDX + 0x54]      ; 0059097f
    CMP EAX,EDI                         ; 00590982
    JL 0x00590e4d                       ; 00590984
        ;   XREF to: 00590e4d (CONDITIONAL_JUMP)  ; LAB_00590e4d
    PUSH 0xd42                          ; 0059098a
    PUSH 0x64bafa                       ; 0059098f | = "..\\core\\skeledit.cpp"
    LEA EAX,[EDI*0x4 + 0x0]             ; 00590994
    PUSH EAX                            ; 0059099b
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0059099c
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005909a1
    MOV dword ptr [ESP + 0xa084],EAX    ; 005909a4
    TEST EAX,EAX                        ; 005909ab
    JNZ 0x005909d1                      ; 005909ad
        ;   XREF to: 005909d1 (CONDITIONAL_JUMP)  ; LAB_005909d1
    MOV EAX,0x64bb0f                    ; 005909af | = "..\\core\\skeledit.cpp"
    MOV EDX,0xd43                       ; 005909b4
    PUSH 0x64bb24                       ; 005909b9 | = "Out of memory!"
    MOV [0x02f0ca48],EAX                ; 005909be | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005909c3 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005909c9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005909ce
    MOV EAX,dword ptr [ESP + 0xa074]    ; 005909d1
        ;   Label: LAB_005909d1
    MOV dword ptr [ESP + 0xa09c],EAX    ; 005909d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 005909df
    MOV ECX,dword ptr [EAX + 0x7140]    ; 005909e2
    XOR EBX,EBX                         ; 005909e8
    TEST ECX,ECX                        ; 005909ea
    JLE 0x00590e90                      ; 005909ec
        ;   XREF to: 00590e90 (CONDITIONAL_JUMP)  ; LAB_00590e90
    XOR EDI,EDI                         ; 005909f2
    MOV EAX,dword ptr [ESP + 0xa09c]    ; 005909f4
        ;   Label: LAB_005909f4
    MOV ESI,EDI                         ; 005909fb
    XOR EDX,EDX                         ; 005909fd
    MOV ECX,dword ptr [EBP + 0x14]      ; 005909ff
        ;   Label: LAB_005909ff
    ADD ECX,ESI                         ; 00590a02
    CMP EDX,dword ptr [ECX + 0x7164]    ; 00590a04
    JGE 0x00590e64                      ; 00590a0a
        ;   XREF to: 00590e64 (CONDITIONAL_JUMP)  ; LAB_00590e64
    ADD EAX,0x3c                        ; 00590a10
    MOV dword ptr [EAX + -0x30],0xffffffff ; 00590a13
    INC EDX                             ; 00590a1a
    MOV dword ptr [EAX + -0x34],EBX     ; 00590a1b
    JMP 0x005909ff                      ; 00590a1e
        ;   XREF to: 005909ff (UNCONDITIONAL_JUMP)  ; LAB_005909ff
    MOV ECX,0x64b63e                    ; 00590a20 | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_00590a20
    MOV EBX,0xbef                       ; 00590a25
    PUSH 0x64b653                       ; 00590a2a | = "Can't create log file!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00590a2f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00590a35 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00590a3b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00590a40
    JMP 0x0058fa73                      ; 00590a43
        ;   XREF to: 0058fa73 (UNCONDITIONAL_JUMP)  ; LAB_0058fa73
    MOV ECX,dword ptr [ESP + 0xa110]    ; 00590a48
        ;   Label: LAB_00590a48
    MOV EAX,dword ptr [EBP + 0x18]      ; 00590a4f
    PUSH ECX                            ; 00590a52
    ADD EAX,0x200                       ; 00590a53
    PUSH EAX                            ; 00590a58
    PUSH 0x64b68e                       ; 00590a59 | = "%s has incorrect S3D version %d"
    PUSH 0x3670650                      ; 00590a5e | g_SkeleditStatusMessage
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00590a63
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00590a68
    JMP 0x0058f8e7                      ; 00590a6b
        ;   XREF to: 0058f8e7 (UNCONDITIONAL_JUMP)  ; LAB_0058f8e7
    MOV EAX,dword ptr [EBP + 0x18]      ; 00590a70
        ;   Label: LAB_00590a70
    ADD EAX,0x200                       ; 00590a73
    PUSH EAX                            ; 00590a78
    PUSH 0x64b6c4                       ; 00590a79 | = "%s is corrupt"
    JMP 0x0058f8da                      ; 00590a7e
        ;   XREF to: 0058f8da (UNCONDITIONAL_JUMP)  ; LAB_0058f8da
    PUSH EBX                            ; 00590a83
        ;   Label: LAB_00590a83
    PUSH 0x64b6d2                       ; 00590a84 | = "Too many parts in %s"
    JMP 0x0058f8da                      ; 00590a89
        ;   XREF to: 0058f8da (UNCONDITIONAL_JUMP)  ; LAB_0058f8da
    MOV EAX,dword ptr [EBP + 0x14]      ; 00590a8e
        ;   Label: LAB_00590a8e
    INC EBX                             ; 00590a91
    MOV EDX,dword ptr [EAX + 0xbc]      ; 00590a92
    ADD ESI,0x48                        ; 00590a98
    CMP EBX,EDX                         ; 00590a9b
    JL 0x0058fe2c                       ; 00590a9d
        ;   XREF to: 0058fe2c (CONDITIONAL_JUMP)  ; LAB_0058fe2c
    JMP 0x0058fe60                      ; 00590aa3
        ;   XREF to: 0058fe60 (UNCONDITIONAL_JUMP)  ; LAB_0058fe60
    PUSH 0x64b80c                       ; 00590aa8 | = "Texture list full determining parts"
        ;   Label: LAB_00590aa8
    PUSH 0x3670650                      ; 00590aad | g_SkeleditStatusMessage
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00590ab2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00590ab7
    JMP 0x0058f8e7                      ; 00590aba
        ;   XREF to: 0058f8e7 (UNCONDITIONAL_JUMP)  ; LAB_0058f8e7
    MOV EDX,0x64b86c                    ; 00590abf | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_00590abf
    MOV ECX,0xc4f                       ; 00590ac4
    PUSH 0x64b881                       ; 00590ac9 | = "out of memory in CDeformableModel::de..."
    MOV dword ptr [0x02f0ca48],EDX      ; 00590ace | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00590ad4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00590ada
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00590adf
    JMP 0x0058ff07                      ; 00590ae2
        ;   XREF to: 0058ff07 (UNCONDITIONAL_JUMP)  ; LAB_0058ff07
    MOV EAX,0x64b92e                    ; 00590ae7 | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_00590ae7
    MOV EDX,0xc7d                       ; 00590aec
    PUSH 0x64b943                       ; 00590af1 | = "out of memory in CDeformableModel::de..."
    MOV [0x02f0ca48],EAX                ; 00590af6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00590afb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00590b01
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00590b06
    JMP 0x005900d6                      ; 00590b09
        ;   XREF to: 005900d6 (UNCONDITIONAL_JUMP)  ; LAB_005900d6
    MOV EAX,dword ptr [ESP + 0xa0c4]    ; 00590b0e
        ;   Label: LAB_00590b0e
    MOV ECX,dword ptr [EDI + 0x14]      ; 00590b15
    CMP ECX,dword ptr [EAX + 0x14]      ; 00590b18
    JNZ 0x00590285                      ; 00590b1b
        ;   XREF to: 00590285 (CONDITIONAL_JUMP)  ; LAB_00590285
    XOR EBX,EBX                         ; 00590b21
    MOV dword ptr [ESP + 0xa0d0],EBX    ; 00590b23
    MOV ECX,dword ptr [ESP + 0xa0d0]    ; 00590b2a
        ;   Label: LAB_00590b2a
    MOV ESI,dword ptr [ESP + 0xa0c4]    ; 00590b31
    XOR EBX,EBX                         ; 00590b38
    IMUL EDX,dword ptr [ESI + 0x18],0xc ; 00590b3a
        ;   Label: LAB_00590b3a
    ADD EDX,dword ptr [ESP + 0xa070]    ; 00590b3e
    MOV EAX,dword ptr [EDX]             ; 00590b45
    MOV dword ptr [ESP + 0x9f5c],EAX    ; 00590b47
    LEA EAX,[EDX + 0x4]                 ; 00590b4e
    MOV EAX,dword ptr [EAX]             ; 00590b51
    MOV dword ptr [ESP + 0x9f60],EAX    ; 00590b53
    LEA EAX,[EDX + 0x8]                 ; 00590b5a
    MOV dword ptr [ESP + 0xa1e0],0x3    ; 00590b5d
    MOV EAX,dword ptr [EAX]             ; 00590b68
    MOV EDX,ECX                         ; 00590b6a
    MOV dword ptr [ESP + 0x9f64],EAX    ; 00590b6c
    SAR EDX,0x1f                        ; 00590b73
    MOV EAX,ECX                         ; 00590b76
    IDIV dword ptr [ESP + 0xa1e0]       ; 00590b78
    IMUL EDX,EDX,0xc                    ; 00590b7f
    IMUL EDX,dword ptr [EDX + EDI*0x1 + 0x18],0xc ; 00590b82
    ADD EDX,dword ptr [ESP + 0xa070]    ; 00590b87
    MOV EAX,dword ptr [EDX]             ; 00590b8e
    MOV dword ptr [ESP + 0xa004],EAX    ; 00590b90
    LEA EAX,[EDX + 0x4]                 ; 00590b97
    MOV EAX,dword ptr [EAX]             ; 00590b9a
    FLD float ptr [ESP + 0x9f5c]        ; 00590b9c
    MOV dword ptr [ESP + 0xa008],EAX    ; 00590ba3
    LEA EAX,[EDX + 0x8]                 ; 00590baa
    FSUB float ptr [ESP + 0xa004]       ; 00590bad
    MOV EAX,dword ptr [EAX]             ; 00590bb4
    FST float ptr [ESP + 0x9fd4]        ; 00590bb6
    MOV dword ptr [ESP + 0xa00c],EAX    ; 00590bbd
    FABS                                ; 00590bc4
    FLD float ptr [ESP + 0x9f64]        ; 00590bc6
    FLD float ptr [ESP + 0x9f60]        ; 00590bcd
    FSUB float ptr [ESP + 0xa008]       ; 00590bd4
    FXCH                                ; 00590bdb
    FSUB float ptr [ESP + 0xa00c]       ; 00590bdd
    FXCH                                ; 00590be4
    FSTP float ptr [ESP + 0x9fd8]       ; 00590be6
    FSTP float ptr [ESP + 0x9fdc]       ; 00590bed
    FCOMP double ptr [0x0064bfda]       ; 00590bf4 | DOUBLE_0064bfda
    FNSTSW AX                           ; 00590bfa
    SAHF                                ; 00590bfc
    JBE 0x00590c4b                      ; 00590bfd
        ;   XREF to: 00590c4b (CONDITIONAL_JUMP)  ; LAB_00590c4b
    CMP EBX,0x3                         ; 00590bff
        ;   Label: LAB_00590bff
    JNZ 0x00590c2e                      ; 00590c02
        ;   XREF to: 00590c2e (CONDITIONAL_JUMP)  ; LAB_00590c2e
    MOV EBX,dword ptr [ESP + 0xa0cc]    ; 00590c04
    PUSH EBX                            ; 00590c0b
    MOV ESI,dword ptr [ESP + 0xa1d4]    ; 00590c0c
    PUSH ESI                            ; 00590c13
    PUSH 0x64ba01                       ; 00590c14 | = "Removing face %d, it is dup with face..."
    MOV EDI,dword ptr [ESP + 0xa084]    ; 00590c19
    PUSH EDI                            ; 00590c20
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00590c21
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00590c26
    JMP 0x005902ba                      ; 00590c29
        ;   XREF to: 005902ba (UNCONDITIONAL_JUMP)  ; LAB_005902ba
    MOV EDX,dword ptr [ESP + 0xa0d0]    ; 00590c2e
        ;   Label: LAB_00590c2e
    INC EDX                             ; 00590c35
    MOV dword ptr [ESP + 0xa0d0],EDX    ; 00590c36
    CMP EDX,0x3                         ; 00590c3d
    JL 0x00590b2a                       ; 00590c40
        ;   XREF to: 00590b2a (CONDITIONAL_JUMP)  ; LAB_00590b2a
    JMP 0x00590285                      ; 00590c46
        ;   XREF to: 00590285 (UNCONDITIONAL_JUMP)  ; LAB_00590285
    FLD float ptr [ESP + 0x9fd8]        ; 00590c4b
        ;   Label: LAB_00590c4b
    FABS                                ; 00590c52
    FCOMP double ptr [0x0064bfda]       ; 00590c54 | DOUBLE_0064bfda
    FNSTSW AX                           ; 00590c5a
    SAHF                                ; 00590c5c
    JA 0x00590bff                       ; 00590c5d
        ;   XREF to: 00590bff (CONDITIONAL_JUMP)  ; LAB_00590bff
    FLD float ptr [ESP + 0x9fdc]        ; 00590c5f
    FABS                                ; 00590c66
    FCOMP double ptr [0x0064bfda]       ; 00590c68 | DOUBLE_0064bfda
    FNSTSW AX                           ; 00590c6e
    SAHF                                ; 00590c70
    JA 0x00590bff                       ; 00590c71
        ;   XREF to: 00590bff (CONDITIONAL_JUMP)  ; LAB_00590bff
    ADD ESI,0xc                         ; 00590c73
    INC EBX                             ; 00590c76
    INC ECX                             ; 00590c77
    CMP EBX,0x3                         ; 00590c78
    JL 0x00590b3a                       ; 00590c7b
        ;   XREF to: 00590b3a (CONDITIONAL_JUMP)  ; LAB_00590b3a
    JMP 0x00590bff                      ; 00590c81
        ;   XREF to: 00590bff (UNCONDITIONAL_JUMP)  ; LAB_00590bff
    TEST EAX,EAX                        ; 00590c86
        ;   Label: LAB_00590c86
    JZ 0x00590707                       ; 00590c88
        ;   XREF to: 00590707 (CONDITIONAL_JUMP)  ; LAB_00590707
    JMP 0x0059072a                      ; 00590c8e
        ;   XREF to: 0059072a (UNCONDITIONAL_JUMP)  ; LAB_0059072a
    IMUL ESI,dword ptr [ECX + 0x18],0xc ; 00590c93
        ;   Label: LAB_00590c93
    MOV EAX,dword ptr [ESP + 0xa070]    ; 00590c97
    MOV EBX,dword ptr [ECX + 0x24]      ; 00590c9e
    ADD ESI,EAX                         ; 00590ca1
    IMUL EAX,EBX,0xc                    ; 00590ca3
    ADD EAX,dword ptr [ESP + 0xa070]    ; 00590ca6
    IMUL EBX,dword ptr [ECX + 0x30],0xc ; 00590cad
    FLD float ptr [EAX]                 ; 00590cb1
    FSUB float ptr [ESI]                ; 00590cb3
    FSTP float ptr [ESP + 0x9f44]       ; 00590cb5
    FLD float ptr [EAX + 0x4]           ; 00590cbc
    FSUB float ptr [ESI + 0x4]          ; 00590cbf
    FSTP float ptr [ESP + 0x9f48]       ; 00590cc2
    FLD float ptr [EAX + 0x8]           ; 00590cc9
    FSUB float ptr [ESI + 0x8]          ; 00590ccc
    ADD EBX,dword ptr [ESP + 0xa070]    ; 00590ccf
    FSTP float ptr [ESP + 0x9f4c]       ; 00590cd6
    FLD float ptr [EBX]                 ; 00590cdd
    FSUB float ptr [EAX]                ; 00590cdf
    FSTP float ptr [ESP + 0x9fa4]       ; 00590ce1
    FLD float ptr [EBX + 0x4]           ; 00590ce8
    FSUB float ptr [EAX + 0x4]          ; 00590ceb
    FLD float ptr [ESP + 0x9f44]        ; 00590cee
    FXCH                                ; 00590cf5
    FSTP float ptr [ESP + 0x9fa8]       ; 00590cf7
    FMUL float ptr [ESP + 0x9fa8]       ; 00590cfe
    FLD float ptr [ESP + 0x9f4c]        ; 00590d05
    FMUL float ptr [ESP + 0x9fa4]       ; 00590d0c
    FLD float ptr [ESP + 0x9f48]        ; 00590d13
    FMUL float ptr [ESP + 0x9fa4]       ; 00590d1a
    FLD float ptr [EBX + 0x8]           ; 00590d21
    FSUB float ptr [EAX + 0x8]          ; 00590d24
    FLD float ptr [ESP + 0x9f48]        ; 00590d27
    FXCH                                ; 00590d2e
    FSTP float ptr [ESP + 0x9fac]       ; 00590d30
    FMUL float ptr [ESP + 0x9fac]       ; 00590d37
    FLD float ptr [ESP + 0x9f44]        ; 00590d3e
    FMUL float ptr [ESP + 0x9fac]       ; 00590d45
    FLD float ptr [ESP + 0x9f4c]        ; 00590d4c
    FXCH                                ; 00590d53
    FSUBP ST4,ST0                       ; 00590d55
    FMUL float ptr [ESP + 0x9fa8]       ; 00590d57
    FXCH ST3                            ; 00590d5e
    FST float ptr [ESP + 0xa05c]        ; 00590d60
    FXCH ST3                            ; 00590d67
    FSUBP                               ; 00590d69
    FXCH ST2                            ; 00590d6b
    FMUL float ptr [ESP + 0xa05c]       ; 00590d6d
    FXCH ST2                            ; 00590d74
    FST float ptr [ESP + 0xa058]        ; 00590d76
    FMUL float ptr [ESP + 0xa058]       ; 00590d7d
    FXCH                                ; 00590d84
    FSUBP ST3,ST0                       ; 00590d86
    FADDP                               ; 00590d88
    FXCH                                ; 00590d8a
    FST float ptr [ESP + 0xa060]        ; 00590d8c
    FMUL float ptr [ESP + 0xa060]       ; 00590d93
    FADDP                               ; 00590d9a
    FSQRT                               ; 00590d9c
    FST float ptr [ESP + 0x4]           ; 00590d9e
    FLDZ                                ; 00590da2
    FCOMPP                              ; 00590da4
    FNSTSW AX                           ; 00590da6
    SAHF                                ; 00590da8
    JNC 0x00590e18                      ; 00590da9
        ;   XREF to: 00590e18 (CONDITIONAL_JUMP)  ; LAB_00590e18
    FLD1                                ; 00590dab
    FLD float ptr [ESP + 0xa058]        ; 00590dad
    FXCH                                ; 00590db4
    FDIV float ptr [ESP + 0x4]          ; 00590db6
    FXCH                                ; 00590dba
    FMUL ST1                            ; 00590dbc
    FLD float ptr [ESP + 0xa05c]        ; 00590dbe
    FMUL ST2                            ; 00590dc5
    FLD float ptr [ESP + 0xa060]        ; 00590dc7
    FMULP ST3                           ; 00590dce
    FXCH                                ; 00590dd0
    FSTP float ptr [ESP + 0xa058]       ; 00590dd2
    FSTP float ptr [ESP + 0xa05c]       ; 00590dd9
    FSTP float ptr [ESP + 0xa060]       ; 00590de0
    LEA EAX,[ESP + 0xa058]              ; 00590de7
        ;   Label: LAB_00590de7
    CMP EDX,EAX                         ; 00590dee
    JZ 0x0059074f                       ; 00590df0
        ;   XREF to: 0059074f (CONDITIONAL_JUMP)  ; LAB_0059074f
    MOV EAX,dword ptr [ESP + 0xa058]    ; 00590df6
    MOV dword ptr [EDX],EAX             ; 00590dfd
    MOV EAX,dword ptr [ESP + 0xa05c]    ; 00590dff
    MOV dword ptr [EDX + 0x4],EAX       ; 00590e06
    MOV EAX,dword ptr [ESP + 0xa060]    ; 00590e09
    MOV dword ptr [EDX + 0x8],EAX       ; 00590e10
    JMP 0x0059074f                      ; 00590e13
        ;   XREF to: 0059074f (UNCONDITIONAL_JUMP)  ; LAB_0059074f
    XOR ESI,ESI                         ; 00590e18
        ;   Label: LAB_00590e18
    MOV dword ptr [ESP + 0xa05c],ESI    ; 00590e1a
    MOV dword ptr [ESP + 0xa058],ESI    ; 00590e21
    MOV dword ptr [ESP + 0xa060],ESI    ; 00590e28
    JMP 0x00590de7                      ; 00590e2f
        ;   XREF to: 00590de7 (UNCONDITIONAL_JUMP)  ; LAB_00590de7
    XOR EAX,EAX                         ; 00590e31
        ;   Label: LAB_00590e31
    MOV dword ptr [ESP + 0x9fc0],EAX    ; 00590e33
    MOV dword ptr [ESP + 0x9fbc],EAX    ; 00590e3a
    MOV dword ptr [ESP + 0x9fc4],EAX    ; 00590e41
    JMP 0x005908f3                      ; 00590e48
        ;   XREF to: 005908f3 (UNCONDITIONAL_JUMP)  ; LAB_005908f3
    PUSH 0x64bac4                       ; 00590e4d | = "Deformable model has more faces than ..."
        ;   Label: LAB_00590e4d
    PUSH 0x3670650                      ; 00590e52 | g_SkeleditStatusMessage
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00590e57
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00590e5c
    JMP 0x0058f8e7                      ; 00590e5f
        ;   XREF to: 0058f8e7 (UNCONDITIONAL_JUMP)  ; LAB_0058f8e7
    IMUL EAX,dword ptr [ECX + 0x7164],0x3c ; 00590e64
        ;   Label: LAB_00590e64
    MOV EDX,dword ptr [ESP + 0xa09c]    ; 00590e6b
    ADD EDX,EAX                         ; 00590e72
    MOV EAX,dword ptr [EBP + 0x14]      ; 00590e74
    ADD EDI,0x60                        ; 00590e77
    INC EBX                             ; 00590e7a
    MOV ECX,dword ptr [EAX + 0x7140]    ; 00590e7b
    MOV dword ptr [ESP + 0xa09c],EDX    ; 00590e81
    CMP EBX,ECX                         ; 00590e88
    JL 0x005909f4                       ; 00590e8a
        ;   XREF to: 005909f4 (CONDITIONAL_JUMP)  ; LAB_005909f4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00590e90
        ;   Label: LAB_00590e90
    XOR EBX,EBX                         ; 00590e93
    MOV ESI,dword ptr [EAX + 0x54]      ; 00590e95
    MOV dword ptr [ESP + 0xa1cc],EBX    ; 00590e98
    TEST ESI,ESI                        ; 00590e9f
    JLE 0x00591166                      ; 00590ea1
        ;   XREF to: 00591166 (CONDITIONAL_JUMP)  ; LAB_00591166
    MOV EAX,dword ptr [EBP + 0x14]      ; 00590ea7
        ;   Label: LAB_00590ea7
    SUB ESP,0x4                         ; 00590eaa
    FILD dword ptr [EAX + 0x54]         ; 00590ead
    MOV EAX,dword ptr [ESP + 0xa1d0]    ; 00590eb0
    MOV dword ptr [ESP + 0xa1e4],EAX    ; 00590eb7
    FSTP float ptr [ESP]                ; 00590ebe
    FILD dword ptr [ESP + 0xa1e4]       ; 00590ec1
    SUB ESP,0x4                         ; 00590ec8
    MOV EDI,dword ptr [0x00678a60]      ; 00590ecb | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 00590ed1
    PUSH EDI                            ; 00590ed4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 00590ed5
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    ADD ESP,0xc                         ; 00590eda
    MOV EAX,dword ptr [ESP + 0xa1cc]    ; 00590edd
    MOV dword ptr [ESP + 0xa0d4],EAX    ; 00590ee4
    TEST EAX,EAX                        ; 00590eeb
    JL 0x00591149                       ; 00590eed
        ;   XREF to: 00591149 (CONDITIONAL_JUMP)  ; LAB_00591149
    MOV ECX,dword ptr [ESP + 0xa0d4]    ; 00590ef3
        ;   Label: LAB_00590ef3
    IMUL EDX,ECX,0x12                   ; 00590efa
    MOV EAX,dword ptr [EBP + 0x14]      ; 00590efd
    MOV EAX,dword ptr [EAX + 0x7c]      ; 00590f00
    ADD EAX,EDX                         ; 00590f03
    MOV ESI,dword ptr [ESP + 0xa084]    ; 00590f05
    MOV dword ptr [ESP + 0xa0d8],EAX    ; 00590f0c
    LEA EAX,[ECX*0x4 + 0x0]             ; 00590f13
    ADD EAX,ESI                         ; 00590f1a
    MOV EBX,0xffffffff                  ; 00590f1c
    XOR EDI,EDI                         ; 00590f21
    MOV dword ptr [EAX],0x7149f2ca      ; 00590f23
    MOV dword ptr [ESP + 0xa0dc],EBX    ; 00590f29
    MOV EDX,dword ptr [ESP + 0xa08c]    ; 00590f30
    MOV dword ptr [ESP + 0xa0e0],EDI    ; 00590f37
    TEST EDX,EDX                        ; 00590f3e
    JLE 0x00591139                      ; 00590f40
        ;   XREF to: 00591139 (CONDITIONAL_JUMP)  ; LAB_00591139
    IMUL EDX,ECX,0xc                    ; 00590f46
    MOV dword ptr [ESP + 0xa100],EAX    ; 00590f49
    MOV dword ptr [ESP + 0xa0fc],EAX    ; 00590f50
    MOV EAX,dword ptr [ESP + 0xa074]    ; 00590f57
    MOV dword ptr [ESP + 0xa17c],EAX    ; 00590f5e
    MOV ECX,dword ptr [ESP + 0xa080]    ; 00590f65
    MOV EAX,dword ptr [ESP + 0xa07c]    ; 00590f6c
    ADD ECX,EDX                         ; 00590f73
    MOV dword ptr [ESP + 0xa180],EAX    ; 00590f75
    MOV dword ptr [ESP + 0xa0f0],ECX    ; 00590f7c
    MOV EAX,dword ptr [ESP + 0xa17c]    ; 00590f83
        ;   Label: LAB_00590f83
    MOV EBX,dword ptr [EAX + 0x4]       ; 00590f8a
    MOV dword ptr [ESP + 0xa0e4],EAX    ; 00590f8d
    CMP EBX,0x3                         ; 00590f94
    JNZ 0x005910f9                      ; 00590f97
        ;   XREF to: 005910f9 (CONDITIONAL_JUMP)  ; LAB_005910f9
    MOV EAX,dword ptr [ESP + 0xa0f0]    ; 00590f9d
    FLD float ptr [EAX + 0x4]           ; 00590fa4
    MOV EAX,dword ptr [ESP + 0xa180]    ; 00590fa7
    FMUL float ptr [EAX + 0x4]          ; 00590fae
    MOV EAX,dword ptr [ESP + 0xa0f0]    ; 00590fb1
    FLD float ptr [EAX]                 ; 00590fb8
    MOV EAX,dword ptr [ESP + 0xa180]    ; 00590fba
    FMUL float ptr [EAX]                ; 00590fc1
    FADDP                               ; 00590fc3
    MOV EAX,dword ptr [ESP + 0xa0f0]    ; 00590fc5
    FLD float ptr [EAX + 0x8]           ; 00590fcc
    MOV EAX,dword ptr [ESP + 0xa180]    ; 00590fcf
    FMUL float ptr [EAX + 0x8]          ; 00590fd6
    FADDP                               ; 00590fd9
    XOR ESI,ESI                         ; 00590fdb
    FSUBR double ptr [0x0064bfea]       ; 00590fdd | DOUBLE_0064bfea
    MOV dword ptr [ESP + 0xa0ec],ESI    ; 00590fe3
    FSTP float ptr [ESP + 0xa0e8]       ; 00590fea
    MOV ECX,dword ptr [ESP + 0xa0ec]    ; 00590ff1
        ;   Label: LAB_00590ff1
    XOR EDI,EDI                         ; 00590ff8
    XOR ESI,ESI                         ; 00590ffa
    MOV dword ptr [ESP + 0xa0f4],EDI    ; 00590ffc
    MOV EDI,dword ptr [ESP + 0xa0e4]    ; 00591003
    IMUL EDX,dword ptr [EDI + 0x18],0xc ; 0059100a
        ;   Label: LAB_0059100a
    ADD EDX,dword ptr [ESP + 0xa070]    ; 0059100e
    MOV EAX,dword ptr [EDX]             ; 00591015
    MOV dword ptr [ESP + 0x9f68],EAX    ; 00591017
    LEA EAX,[EDX + 0x4]                 ; 0059101e
    MOV EAX,dword ptr [EAX]             ; 00591021
    MOV dword ptr [ESP + 0x9f6c],EAX    ; 00591023
    LEA EAX,[EDX + 0x8]                 ; 0059102a
    MOV EBX,0x3                         ; 0059102d
    MOV EAX,dword ptr [EAX]             ; 00591032
    MOV EDX,ECX                         ; 00591034
    MOV dword ptr [ESP + 0x9f70],EAX    ; 00591036
    SAR EDX,0x1f                        ; 0059103d
    MOV EAX,ECX                         ; 00591040
    IDIV EBX                            ; 00591042
    LEA EAX,[EDX + EDX*0x1]             ; 00591044
    ADD EAX,dword ptr [ESP + 0xa0d8]    ; 00591047
    MOV AX,word ptr [EAX]               ; 0059104e
    AND EAX,0xffff                      ; 00591051
    IMUL EAX,EAX,0x34                   ; 00591056
    MOV EBX,dword ptr [EBP + 0x14]      ; 00591059
    MOV EBX,dword ptr [EBX + 0x40]      ; 0059105c
    ADD EBX,EAX                         ; 0059105f
    MOV EAX,dword ptr [EBX + 0x10]      ; 00591061
    ADD EBX,0x10                        ; 00591064
    MOV dword ptr [ESP + 0xa028],EAX    ; 00591067
    LEA EAX,[EBX + 0x4]                 ; 0059106e
    MOV EAX,dword ptr [EAX]             ; 00591071
    FLD float ptr [ESP + 0xa028]        ; 00591073
    MOV dword ptr [ESP + 0xa02c],EAX    ; 0059107a
    LEA EAX,[EBX + 0x8]                 ; 00591081
    FSUB float ptr [ESP + 0x9f68]       ; 00591084
    MOV EAX,dword ptr [EAX]             ; 0059108b
    FST float ptr [ESP + 0x9fec]        ; 0059108d
    MOV dword ptr [ESP + 0xa030],EAX    ; 00591094
    FABS                                ; 0059109b
    FLD float ptr [ESP + 0xa02c]        ; 0059109d
    FSUB float ptr [ESP + 0x9f6c]       ; 005910a4
    FLD float ptr [ESP + 0xa030]        ; 005910ab
    FSUB float ptr [ESP + 0x9f70]       ; 005910b2
    FXCH                                ; 005910b9
    FSTP float ptr [ESP + 0x9ff0]       ; 005910bb
    FSTP float ptr [ESP + 0x9ff4]       ; 005910c2
    FCOMP double ptr [0x0064bfe2]       ; 005910c9 | DOUBLE_0064bfe2
    FNSTSW AX                           ; 005910cf
    SAHF                                ; 005910d1
    JBE 0x005919c1                      ; 005910d2
        ;   XREF to: 005919c1 (CONDITIONAL_JUMP)  ; LAB_005919c1
    CMP ESI,0x3                         ; 005910d8
        ;   Label: LAB_005910d8
    JGE 0x00591a37                      ; 005910db
        ;   XREF to: 00591a37 (CONDITIONAL_JUMP)  ; LAB_00591a37
    MOV ESI,dword ptr [ESP + 0xa0ec]    ; 005910e1
        ;   Label: LAB_005910e1
    INC ESI                             ; 005910e8
    MOV dword ptr [ESP + 0xa0ec],ESI    ; 005910e9
    CMP ESI,0x3                         ; 005910f0
    JL 0x00590ff1                       ; 005910f3
        ;   XREF to: 00590ff1 (CONDITIONAL_JUMP)  ; LAB_00590ff1
    MOV EDX,dword ptr [ESP + 0xa180]    ; 005910f9
        ;   Label: LAB_005910f9
    MOV ECX,dword ptr [ESP + 0xa0e0]    ; 00591100
    MOV EAX,dword ptr [ESP + 0xa17c]    ; 00591107
    MOV EBX,dword ptr [ESP + 0xa08c]    ; 0059110e
    ADD EDX,0xc                         ; 00591115
    INC ECX                             ; 00591118
    ADD EAX,0x3c                        ; 00591119
    MOV dword ptr [ESP + 0xa180],EDX    ; 0059111c
    MOV dword ptr [ESP + 0xa0e0],ECX    ; 00591123
    MOV dword ptr [ESP + 0xa17c],EAX    ; 0059112a
    CMP ECX,EBX                         ; 00591131
    JL 0x00590f83                       ; 00591133
        ;   XREF to: 00590f83 (CONDITIONAL_JUMP)  ; LAB_00590f83
    MOV ESI,dword ptr [ESP + 0xa0dc]    ; 00591139
        ;   Label: LAB_00591139
    CMP ESI,-0x1                        ; 00591140
    JNZ 0x00591ab1                      ; 00591143
        ;   XREF to: 00591ab1 (CONDITIONAL_JUMP)  ; LAB_00591ab1
    MOV EBX,dword ptr [ESP + 0xa1cc]    ; 00591149
        ;   Label: LAB_00591149
    MOV EDX,dword ptr [EBP + 0x14]      ; 00591150
    INC EBX                             ; 00591153
    MOV ESI,dword ptr [EDX + 0x54]      ; 00591154
    MOV dword ptr [ESP + 0xa1cc],EBX    ; 00591157
    CMP EBX,ESI                         ; 0059115e
    JL 0x00590ea7                       ; 00591160
        ;   XREF to: 00590ea7 (CONDITIONAL_JUMP)  ; LAB_00590ea7
    MOV EDI,dword ptr [0x00678a60]      ; 00591166 | g_CEditorToolsPtr
        ;   Label: LAB_00591166
    PUSH EDI                            ; 0059116c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 0059116d
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    MOV EAX,0x64bb33                    ; 00591172 | = "..\\core\\skeledit.cpp"
    ADD ESP,0x4                         ; 00591177
    MOV EDX,0xdd1                       ; 0059117a
    MOV ECX,dword ptr [ESP + 0xa07c]    ; 0059117f
    MOV [0x0067d20c],EAX                ; 00591186 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDX      ; 0059118b | g_CurrentDebugLine
    TEST ECX,ECX                        ; 00591191
    JZ 0x005911a1                       ; 00591193
        ;   XREF to: 005911a1 (CONDITIONAL_JUMP)  ; LAB_005911a1
    LEA EAX,[ECX + -0x4]                ; 00591195
    PUSH EAX                            ; 00591198
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00591199
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0059119e
    MOV ESI,0x64bb48                    ; 005911a1 | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_005911a1
    MOV EDI,0xdd2                       ; 005911a6
    MOV EAX,dword ptr [ESP + 0xa080]    ; 005911ab
    XOR EBX,EBX                         ; 005911b2
    MOV dword ptr [0x0067d20c],ESI      ; 005911b4 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDI      ; 005911ba | g_CurrentDebugLine
    MOV dword ptr [ESP + 0xa07c],EBX    ; 005911c0
    TEST EAX,EAX                        ; 005911c7
    JZ 0x005911d7                       ; 005911c9
        ;   XREF to: 005911d7 (CONDITIONAL_JUMP)  ; LAB_005911d7
    SUB EAX,0x4                         ; 005911cb
    PUSH EAX                            ; 005911ce
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005911cf
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005911d4
    MOV ECX,0x64bb5d                    ; 005911d7 | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_005911d7
    MOV EBX,0xdd3                       ; 005911dc
    XOR EDX,EDX                         ; 005911e1
    MOV ESI,dword ptr [ESP + 0xa084]    ; 005911e3
    MOV dword ptr [ESP + 0xa080],EDX    ; 005911ea
    PUSH ESI                            ; 005911f1
    MOV dword ptr [0x0067d20c],ECX      ; 005911f2 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBX      ; 005911f8 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005911fe
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00591203
    XOR EDI,EDI                         ; 00591206
    MOV EAX,dword ptr [EBP + 0x14]      ; 00591208
    XOR ECX,ECX                         ; 0059120b
    MOV dword ptr [ESP + 0xa084],EDI    ; 0059120d
    MOV EDX,dword ptr [EAX + 0x7140]    ; 00591214
    MOV dword ptr [ESP + 0xa0a0],EDI    ; 0059121a
    TEST EDX,EDX                        ; 00591221
    JLE 0x00591250                      ; 00591223
        ;   XREF to: 00591250 (CONDITIONAL_JUMP)  ; LAB_00591250
    MOV EDX,dword ptr [EBP + 0x14]      ; 00591225
    XOR EBX,EBX                         ; 00591228
    MOV dword ptr [EAX + 0x7178],EBX    ; 0059122a
        ;   Label: LAB_0059122a
    MOV dword ptr [EAX + 0x7164],EBX    ; 00591230
    INC ECX                             ; 00591236
    MOV ESI,dword ptr [EDX + 0x7140]    ; 00591237
    ADD EAX,0x60                        ; 0059123d
    CMP ECX,ESI                         ; 00591240
    JL 0x0059122a                       ; 00591242
        ;   XREF to: 0059122a (CONDITIONAL_JUMP)  ; LAB_0059122a
    LEA EAX,[EAX]                       ; 00591244
    LEA EDX,[EDX]                       ; 0059124a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00591250
        ;   Label: LAB_00591250
    PUSH 0xe56                          ; 00591253
    MOV EAX,dword ptr [EAX + 0x54]      ; 00591258
    PUSH 0x64bb72                       ; 0059125b | = "..\\core\\skeledit.cpp"
    SHL EAX,0x2                         ; 00591260
    PUSH EAX                            ; 00591263
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00591264
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00591269
    MOV EBX,EAX                         ; 0059126c
    MOV dword ptr [ESP + 0xa088],EAX    ; 0059126e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00591275
    PUSH 0xe57                          ; 00591278
    MOV EAX,dword ptr [EAX + 0x54]      ; 0059127d
    PUSH 0x64bb87                       ; 00591280 | = "..\\core\\skeledit.cpp"
    SHL EAX,0x2                         ; 00591285
    PUSH EAX                            ; 00591288
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00591289
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0059128e
    MOV dword ptr [ESP + 0xa108],EAX    ; 00591291
    TEST EBX,EBX                        ; 00591298
    JNZ 0x00591adc                      ; 0059129a
        ;   XREF to: 00591adc (CONDITIONAL_JUMP)  ; LAB_00591adc
    MOV EDI,0x64bb9c                    ; 005912a0 | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_005912a0
    MOV EAX,0xe58                       ; 005912a5
    PUSH 0x64bbb1                       ; 005912aa | = "Out of memory!"
    MOV dword ptr [0x02f0ca48],EDI      ; 005912af | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005912b5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005912ba
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005912bf
    MOV EAX,dword ptr [EBP + 0x14]      ; 005912c2
        ;   Label: LAB_005912c2
    MOV EDX,dword ptr [EAX + 0x54]      ; 005912c5
    XOR ECX,ECX                         ; 005912c8
    TEST EDX,EDX                        ; 005912ca
    JLE 0x00591300                      ; 005912cc
        ;   XREF to: 00591300 (CONDITIONAL_JUMP)  ; LAB_00591300
    MOV EDX,dword ptr [ESP + 0xa108]    ; 005912ce
    MOV EAX,dword ptr [EBP + 0x14]      ; 005912d5
    MOV EBX,dword ptr [ESP + 0xa088]    ; 005912d8
    MOV dword ptr [EDX],0xf423f         ; 005912df
        ;   Label: LAB_005912df
    INC ECX                             ; 005912e5
    MOV dword ptr [EBX],0xffffffff      ; 005912e6
    ADD EDX,0x4                         ; 005912ec
    MOV ESI,dword ptr [EAX + 0x54]      ; 005912ef
    ADD EBX,0x4                         ; 005912f2
    CMP ECX,ESI                         ; 005912f5
    JL 0x005912df                       ; 005912f7
        ;   XREF to: 005912df (CONDITIONAL_JUMP)  ; LAB_005912df
    LEA EAX,[EAX]                       ; 005912f9
    NOP                                 ; 005912ff
    MOV EAX,dword ptr [ESP + 0xa08c]    ; 00591300
        ;   Label: LAB_00591300
    XOR EDI,EDI                         ; 00591307
    XOR ECX,ECX                         ; 00591309
    MOV dword ptr [ESP + 0xa0a4],EDI    ; 0059130b
    TEST EAX,EAX                        ; 00591312
    JLE 0x00591336                      ; 00591314
        ;   XREF to: 00591336 (CONDITIONAL_JUMP)  ; LAB_00591336
    MOV EAX,dword ptr [ESP + 0xa074]    ; 00591316
    CMP dword ptr [EAX + 0x4],0x3       ; 0059131d
        ;   Label: LAB_0059131d
    JZ 0x00591ae9                       ; 00591321
        ;   XREF to: 00591ae9 (CONDITIONAL_JUMP)  ; LAB_00591ae9
    MOV EDX,dword ptr [ESP + 0xa08c]    ; 00591327
        ;   Label: LAB_00591327
    INC ECX                             ; 0059132e
    ADD EAX,0x3c                        ; 0059132f
    CMP ECX,EDX                         ; 00591332
    JL 0x0059131d                       ; 00591334
        ;   XREF to: 0059131d (CONDITIONAL_JUMP)  ; LAB_0059131d
    MOV ECX,0x64bbf7                    ; 00591336 | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_00591336
    MOV ESI,dword ptr [ESP + 0xa088]    ; 0059133b
    MOV EBX,0xe86                       ; 00591342
    PUSH ESI                            ; 00591347
    MOV dword ptr [0x0067d20c],ECX      ; 00591348 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBX      ; 0059134e | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00591354
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00591359
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059135c
    MOV EAX,dword ptr [EAX + 0x54]      ; 0059135f
    XOR EDI,EDI                         ; 00591362
    DEC EAX                             ; 00591364
    MOV dword ptr [ESP + 0xa088],EDI    ; 00591365
    MOV dword ptr [ESP + 0xa1c8],EAX    ; 0059136c
    TEST EAX,EAX                        ; 00591373
    JL 0x00591492                       ; 00591375
        ;   XREF to: 00591492 (CONDITIONAL_JUMP)  ; LAB_00591492
    MOV EDX,dword ptr [ESP + 0xa1c8]    ; 0059137b
        ;   Label: LAB_0059137b
    XOR EBX,EBX                         ; 00591382
    TEST EDX,EDX                        ; 00591384
    JLE 0x0059147b                      ; 00591386
        ;   XREF to: 0059147b (CONDITIONAL_JUMP)  ; LAB_0059147b
    MOV ESI,0x12                        ; 0059138c
    MOV EDX,dword ptr [ESP + 0xa108]    ; 00591391
    MOV dword ptr [ESP + 0xa184],EBX    ; 00591398
    MOV dword ptr [ESP + 0xa188],ESI    ; 0059139f
    MOV ECX,dword ptr [EDX]             ; 005913a6
        ;   Label: LAB_005913a6
    MOV EDI,dword ptr [EDX + 0x4]       ; 005913a8
    LEA EAX,[EBX*0x4 + 0x0]             ; 005913ab
    CMP ECX,EDI                         ; 005913b2
    JLE 0x00591446                      ; 005913b4
        ;   XREF to: 00591446 (CONDITIONAL_JUMP)  ; LAB_00591446
    MOV ECX,dword ptr [EBP + 0x14]      ; 005913ba
    LEA ESI,[EAX + 0x4]                 ; 005913bd
    MOV ECX,dword ptr [ECX + 0x90]      ; 005913c0
    MOV dword ptr [ESP + 0xa1e0],ESI    ; 005913c6
    ADD ESI,ECX                         ; 005913cd
    ADD EAX,ECX                         ; 005913cf
    MOV EDI,dword ptr [ESI]             ; 005913d1
    MOV ECX,dword ptr [EAX]             ; 005913d3
    MOV dword ptr [EAX],EDI             ; 005913d5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005913d7
    MOV dword ptr [ESI],ECX             ; 005913da
    MOV ECX,dword ptr [ESP + 0xa188]    ; 005913dc
    MOV EAX,dword ptr [EAX + 0x7c]      ; 005913e3
    MOV ESI,dword ptr [ESP + 0xa184]    ; 005913e6
    ADD ECX,EAX                         ; 005913ed
    ADD EAX,ESI                         ; 005913ef
    LEA EDI,[ESP + 0x9f18]              ; 005913f1
    MOV ESI,EAX                         ; 005913f8
    MOVSD ES:EDI,ESI                    ; 005913fa
    MOVSW ES:EDI,ESI                    ; 005913fb
    LEA EDI,[ESP + 0x9f1e]              ; 005913fd
    LEA ESI,[EAX + 0x6]                 ; 00591404
    MOVSD ES:EDI,ESI                    ; 00591407
    MOVSW ES:EDI,ESI                    ; 00591408
    LEA EDI,[ESP + 0x9f24]              ; 0059140a
    LEA ESI,[EAX + 0xc]                 ; 00591411
    MOVSD ES:EDI,ESI                    ; 00591414
    MOVSW ES:EDI,ESI                    ; 00591415
    MOV EDI,EAX                         ; 00591417
    MOV ESI,ECX                         ; 00591419
    MOVSD ES:EDI,ESI                    ; 0059141b
    MOVSD ES:EDI,ESI                    ; 0059141c
    MOVSD ES:EDI,ESI                    ; 0059141d
    MOVSD ES:EDI,ESI                    ; 0059141e
    MOVSW ES:EDI,ESI                    ; 0059141f
    LEA ESI,[ESP + 0x9f18]              ; 00591421
    MOV EDI,ECX                         ; 00591428
    MOVSD ES:EDI,ESI                    ; 0059142a
    MOVSD ES:EDI,ESI                    ; 0059142b
    MOVSD ES:EDI,ESI                    ; 0059142c
    MOVSD ES:EDI,ESI                    ; 0059142d
    MOVSW ES:EDI,ESI                    ; 0059142e
    MOV EAX,dword ptr [ESP + 0xa108]    ; 00591430
    ADD EAX,dword ptr [ESP + 0xa1e0]    ; 00591437
    MOV ECX,dword ptr [EAX]             ; 0059143e
    MOV ESI,dword ptr [EDX]             ; 00591440
    MOV dword ptr [EDX],ECX             ; 00591442
    MOV dword ptr [EAX],ESI             ; 00591444
    MOV EAX,dword ptr [ESP + 0xa184]    ; 00591446
        ;   Label: LAB_00591446
    MOV ECX,dword ptr [ESP + 0xa188]    ; 0059144d
    MOV ESI,dword ptr [ESP + 0xa1c8]    ; 00591454
    INC EBX                             ; 0059145b
    ADD EDX,0x4                         ; 0059145c
    ADD EAX,0x12                        ; 0059145f
    ADD ECX,0x12                        ; 00591462
    MOV dword ptr [ESP + 0xa184],EAX    ; 00591465
    MOV dword ptr [ESP + 0xa188],ECX    ; 0059146c
    CMP EBX,ESI                         ; 00591473
    JL 0x005913a6                       ; 00591475
        ;   XREF to: 005913a6 (CONDITIONAL_JUMP)  ; LAB_005913a6
    MOV EDI,dword ptr [ESP + 0xa1c8]    ; 0059147b
        ;   Label: LAB_0059147b
    DEC EDI                             ; 00591482
    MOV dword ptr [ESP + 0xa1c8],EDI    ; 00591483
    TEST EDI,EDI                        ; 0059148a
    JGE 0x0059137b                      ; 0059148c
        ;   XREF to: 0059137b (CONDITIONAL_JUMP)  ; LAB_0059137b
    MOV EDX,dword ptr [EBP + 0x14]      ; 00591492
        ;   Label: LAB_00591492
    MOV EAX,dword ptr [ESP + 0xa0a4]    ; 00591495
    MOV ECX,dword ptr [EDX + 0x54]      ; 0059149c
    MOV EBX,0x2                         ; 0059149f
    CMP EAX,ECX                         ; 005914a4
    JZ 0x00591598                       ; 005914a6
        ;   XREF to: 00591598 (CONDITIONAL_JUMP)  ; LAB_00591598
    LEA EAX,[EDX + 0x7144]              ; 005914ac
    MOV dword ptr [ESP + 0xa120],EAX    ; 005914b2
    MOV EAX,dword ptr [EBP + 0x14]      ; 005914b9
        ;   Label: LAB_005914b9
    MOV ESI,dword ptr [ESP + 0xa0a4]    ; 005914bc
    MOV EAX,dword ptr [EAX + 0x54]      ; 005914c3
    SUB EAX,ESI                         ; 005914c6
    PUSH EAX                            ; 005914c8
    PUSH 0x64bc0c                       ; 005914c9 | = "There are %d triangles I couldn't match."
    LEA EAX,[ESP + 0x9cc0]              ; 005914ce
    PUSH EAX                            ; 005914d5
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005914d6
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005914db
    MOV EAX,dword ptr [EBP + 0x18]      ; 005914de
    CMP dword ptr [EAX + 0x308],0x0     ; 005914e1
    JNZ 0x00591570                      ; 005914e8
        ;   XREF to: 00591570 (CONDITIONAL_JUMP)  ; LAB_00591570
    LEA EAX,[ESP + 0x960c]              ; 005914ee
    PUSH EAX                            ; 005914f5
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 005914f6
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 005914fb
    PUSH 0x64bc35                       ; 005914fe | = "Get rid of them them, I never want to..."
    LEA EAX,[ESP + 0x9610]              ; 00591503
    PUSH EAX                            ; 0059150a
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0059150b
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00591510
    PUSH 0x64bc6a                       ; 00591513 | = "They are special to me, put them in a..."
    LEA EAX,[ESP + 0x9610]              ; 00591518
    PUSH EAX                            ; 0059151f
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00591520
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00591525
    PUSH 0x64bcba                       ; 00591528 | = "Try best guess"
    LEA EAX,[ESP + 0x9610]              ; 0059152d
    PUSH EAX                            ; 00591534
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00591535
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0059153a
    PUSH 0x0                            ; 0059153d
        ;   Label: LAB_0059153d
    PUSH EBX                            ; 0059153f
    LEA EAX,[ESP + 0x9cc0]              ; 00591540
    PUSH EAX                            ; 00591547
    LEA EAX,[ESP + 0x9618]              ; 00591548
    PUSH EAX                            ; 0059154f
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00591550
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 00591555
    MOV EBX,EAX                         ; 00591558
    TEST EAX,EAX                        ; 0059155a
    JL 0x0059153d                       ; 0059155c
        ;   XREF to: 0059153d (CONDITIONAL_JUMP)  ; LAB_0059153d
    PUSH 0x0                            ; 0059155e
    LEA EAX,[ESP + 0x9610]              ; 00591560
    PUSH EAX                            ; 00591567
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00591568
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059156d
    TEST EBX,EBX                        ; 00591570
        ;   Label: LAB_00591570
    JNZ 0x00591b7a                      ; 00591572
        ;   XREF to: 00591b7a (CONDITIONAL_JUMP)  ; LAB_00591b7a
    MOV EDX,dword ptr [EBP + 0x14]      ; 00591578
    MOV EAX,dword ptr [ESP + 0xa0a4]    ; 0059157b
    MOV dword ptr [EDX + 0x54],EAX      ; 00591582
    MOV EDX,dword ptr [EBP + 0x14]      ; 00591585
        ;   Label: LAB_00591585
    MOV EAX,dword ptr [ESP + 0xa0a4]    ; 00591588
    CMP EAX,dword ptr [EDX + 0x54]      ; 0059158f
    JNZ 0x005914b9                      ; 00591592
        ;   XREF to: 005914b9 (CONDITIONAL_JUMP)  ; LAB_005914b9
    MOV EBX,0x64bd00                    ; 00591598 | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_00591598
    MOV EDI,dword ptr [ESP + 0xa108]    ; 0059159d
    MOV ESI,0xf0c                       ; 005915a4
    PUSH EDI                            ; 005915a9
    MOV dword ptr [0x0067d20c],EBX      ; 005915aa | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ESI      ; 005915b0 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005915b6
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005915bb
    XOR EAX,EAX                         ; 005915be
    MOV dword ptr [ESP + 0xa108],EAX    ; 005915c0
    MOV EAX,dword ptr [EBP + 0x18]      ; 005915c7
    ADD EAX,0x200                       ; 005915ca
    PUSH EAX                            ; 005915cf
    PUSH 0x64bd15                       ; 005915d0 | = "Finding capped faces in %s"
    MOV EDX,dword ptr [0x00678a60]      ; 005915d5 | g_CEditorToolsPtr
    PUSH EDX                            ; 005915db | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005915dc
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 005915e1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005915e4
    MOV ECX,dword ptr [ESP + 0xa0a0]    ; 005915e7
    MOV EDX,dword ptr [EAX + 0x54]      ; 005915ee
    ADD EDX,ECX                         ; 005915f1
    LEA EAX,[EDX*0x8 + 0x0]             ; 005915f3
    PUSH 0xf1a                          ; 005915fa
    ADD EAX,EDX                         ; 005915ff
    PUSH 0x64bd30                       ; 00591601 | = "..\\core\\skeledit.cpp"
    ADD EAX,EAX                         ; 00591606
    PUSH EAX                            ; 00591608
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00591609
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0059160e
    MOV EBX,EAX                         ; 00591611
    MOV dword ptr [ESP + 0xa0a8],EAX    ; 00591613
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059161a
    MOV ESI,dword ptr [ESP + 0xa0a0]    ; 0059161d
    MOV EAX,dword ptr [EAX + 0x54]      ; 00591624
    PUSH 0xf1b                          ; 00591627
    ADD EAX,ESI                         ; 0059162c
    PUSH 0x64bd45                       ; 0059162e | = "..\\core\\skeledit.cpp"
    SHL EAX,0x2                         ; 00591633
    PUSH EAX                            ; 00591636
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00591637
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0059163c
    MOV dword ptr [ESP + 0xa0ac],EAX    ; 0059163f
    TEST EBX,EBX                        ; 00591646
    JNZ 0x00592001                      ; 00591648
        ;   XREF to: 00592001 (CONDITIONAL_JUMP)  ; LAB_00592001
    MOV EDI,0x64bd5a                    ; 0059164e | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0059164e
    MOV EAX,0xf1c                       ; 00591653
    PUSH 0x64bd6f                       ; 00591658 | = "out of memory in CDeformableModel::de..."
    MOV dword ptr [0x02f0ca48],EDI      ; 0059165d | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00591663 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00591668
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0059166d
    MOV EDX,dword ptr [EBP + 0x14]      ; 00591670
        ;   Label: LAB_00591670
    MOV EDX,dword ptr [EDX + 0x54]      ; 00591673
    MOV ESI,dword ptr [EBP + 0x14]      ; 00591676
    LEA ECX,[EDX*0x8 + 0x0]             ; 00591679
    MOV EDI,dword ptr [ESP + 0xa0a8]    ; 00591680
    ADD ECX,EDX                         ; 00591687
    MOV ESI,dword ptr [ESI + 0x7c]      ; 00591689
    ADD ECX,ECX                         ; 0059168c
    PUSH EDI                            ; 0059168e
    MOV EAX,ECX                         ; 0059168f
    SHR ECX,0x2                         ; 00591691
    MOVSD.REP ES:EDI,ESI                ; 00591694
    MOV CL,AL                           ; 00591696
    AND CL,0x3                          ; 00591698
    MOVSB.REP ES:EDI,ESI                ; 0059169b
    POP EDI                             ; 0059169d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059169e
    MOV EDX,0x64bda8                    ; 005916a1 | = "..\\core\\skeledit.cpp"
    MOV EBX,dword ptr [EAX + 0x7c]      ; 005916a6
    MOV ECX,0xf1f                       ; 005916a9
    PUSH EBX                            ; 005916ae
    MOV dword ptr [0x0067d20c],EDX      ; 005916af | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 005916b5 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005916bb
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005916c0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005916c3
    MOV ECX,dword ptr [EAX + 0x54]      ; 005916c6
    MOV ESI,dword ptr [EAX + 0x90]      ; 005916c9
    MOV dword ptr [EAX + 0x7c],EDI      ; 005916cf
    MOV EDI,dword ptr [ESP + 0xa0ac]    ; 005916d2
    SHL ECX,0x2                         ; 005916d9
    PUSH EDI                            ; 005916dc
    MOV EAX,ECX                         ; 005916dd
    SHR ECX,0x2                         ; 005916df
    MOVSD.REP ES:EDI,ESI                ; 005916e2
    MOV CL,AL                           ; 005916e4
    AND CL,0x3                          ; 005916e6
    MOVSB.REP ES:EDI,ESI                ; 005916e9
    POP EDI                             ; 005916eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 005916ec
    MOV ESI,0x64bdbd                    ; 005916ef | = "..\\core\\skeledit.cpp"
    MOV EDX,dword ptr [EAX + 0x90]      ; 005916f4
    MOV EDI,0xf24                       ; 005916fa
    PUSH EDX                            ; 005916ff
    MOV dword ptr [0x0067d20c],ESI      ; 00591700 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDI      ; 00591706 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0059170c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00591711
    MOV EBX,0xf28                       ; 00591714
    MOV EAX,dword ptr [EBP + 0x14]      ; 00591719
    MOV ECX,0x64bdd2                    ; 0059171c | = "..\\core\\skeledit.cpp"
    MOV dword ptr [0x02f0d944],EBX      ; 00591721 | g_CurrentDebugLine
    MOV ESI,dword ptr [EAX + 0xa4]      ; 00591727
    MOV EDX,dword ptr [ESP + 0xa0ac]    ; 0059172d
    PUSH ESI                            ; 00591734
    MOV dword ptr [0x0067d20c],ECX      ; 00591735 | g_CurrentDebugFilename
    MOV dword ptr [EAX + 0x90],EDX      ; 0059173b
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00591741
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00591746
    MOV EAX,dword ptr [EBP + 0x14]      ; 00591749
    MOV EDI,dword ptr [ESP + 0xa0a0]    ; 0059174c
    MOV dword ptr [EAX + 0xa4],0x0      ; 00591753
    TEST EDI,EDI                        ; 0059175d
    JLE 0x005917ab                      ; 0059175f
        ;   XREF to: 005917ab (CONDITIONAL_JUMP)  ; LAB_005917ab
    PUSH 0xf2b                          ; 00591761
    PUSH 0x64bde7                       ; 00591766 | = "..\\core\\skeledit.cpp"
    LEA EAX,[EDI*0x4 + 0x0]             ; 0059176b
    PUSH EAX                            ; 00591772
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00591773
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00591778
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059177b
    MOV dword ptr [EDX + 0xa4],EAX      ; 0059177e
    TEST EAX,EAX                        ; 00591784
    JNZ 0x005917ab                      ; 00591786
        ;   XREF to: 005917ab (CONDITIONAL_JUMP)  ; LAB_005917ab
    MOV ECX,0x64bdfc                    ; 00591788 | = "..\\core\\skeledit.cpp"
    MOV EBX,0xf2c                       ; 0059178d
    PUSH 0x64be11                       ; 00591792 | = "Out of memory."
    MOV dword ptr [0x02f0ca48],ECX      ; 00591797 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0059179d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005917a3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005917a8
    XOR ESI,ESI                         ; 005917ab
        ;   Label: LAB_005917ab
    MOV EAX,dword ptr [EBP + 0x14]      ; 005917ad
    MOV dword ptr [ESP + 0xa1bc],ESI    ; 005917b0
    MOV EDI,dword ptr [EAX + 0x7140]    ; 005917b7
    MOV dword ptr [EAX + 0x68],0x0      ; 005917bd
    TEST EDI,EDI                        ; 005917c4
    JLE 0x00591891                      ; 005917c6
        ;   XREF to: 00591891 (CONDITIONAL_JUMP)  ; LAB_00591891
    ADD EAX,0xc0                        ; 005917cc
    MOV dword ptr [ESP + 0xa154],EAX    ; 005917d1
    MOV dword ptr [ESP + 0xa150],EAX    ; 005917d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 005917df
    MOV dword ptr [ESP + 0xa1b0],EAX    ; 005917e2
    MOV EAX,dword ptr [ESP + 0xa1b0]    ; 005917e9
        ;   Label: LAB_005917e9
    CMP dword ptr [EAX + 0x7178],0x1    ; 005917f0
    JL 0x00591860                       ; 005917f7
        ;   XREF to: 00591860 (CONDITIONAL_JUMP)  ; LAB_00591860
    XOR ECX,ECX                         ; 005917f9
    MOV EBX,dword ptr [ESP + 0xa08c]    ; 005917fb
    MOV dword ptr [ESP + 0xa140],ECX    ; 00591802
    TEST EBX,EBX                        ; 00591809
    JLE 0x00591860                      ; 0059180b
        ;   XREF to: 00591860 (CONDITIONAL_JUMP)  ; LAB_00591860
    MOV EAX,dword ptr [ESP + 0xa074]    ; 0059180d
    MOV dword ptr [ESP + 0xa1ac],EAX    ; 00591814
    MOV EAX,dword ptr [ESP + 0xa1ac]    ; 0059181b
        ;   Label: LAB_0059181b
    MOV ESI,dword ptr [EAX + 0x4]       ; 00591822
    MOV dword ptr [ESP + 0xa144],EAX    ; 00591825
    CMP ESI,0x3                         ; 0059182c
    JZ 0x0059200e                       ; 0059182f
        ;   XREF to: 0059200e (CONDITIONAL_JUMP)  ; LAB_0059200e
    MOV EBX,dword ptr [ESP + 0xa140]    ; 00591835
        ;   Label: LAB_00591835
    MOV ECX,dword ptr [ESP + 0xa1ac]    ; 0059183c
    MOV ESI,dword ptr [ESP + 0xa08c]    ; 00591843
    INC EBX                             ; 0059184a
    ADD ECX,0x3c                        ; 0059184b
    MOV dword ptr [ESP + 0xa140],EBX    ; 0059184e
    MOV dword ptr [ESP + 0xa1ac],ECX    ; 00591855
    CMP EBX,ESI                         ; 0059185c
    JL 0x0059181b                       ; 0059185e
        ;   XREF to: 0059181b (CONDITIONAL_JUMP)  ; LAB_0059181b
    MOV EAX,dword ptr [ESP + 0xa1bc]    ; 00591860
        ;   Label: LAB_00591860
    MOV EDI,dword ptr [ESP + 0xa1b0]    ; 00591867
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059186e
    INC EAX                             ; 00591871
    ADD EDI,0x60                        ; 00591872
    MOV ECX,dword ptr [EDX + 0x7140]    ; 00591875
    MOV dword ptr [ESP + 0xa1bc],EAX    ; 0059187b
    MOV dword ptr [ESP + 0xa1b0],EDI    ; 00591882
    CMP EAX,ECX                         ; 00591889
    JL 0x005917e9                       ; 0059188b
        ;   XREF to: 005917e9 (CONDITIONAL_JUMP)  ; LAB_005917e9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00591891
        ;   Label: LAB_00591891
    MOV EBX,dword ptr [ESP + 0xa0a0]    ; 00591894
    CMP EBX,dword ptr [EAX + 0x68]      ; 0059189b
    JZ 0x005918c3                       ; 0059189e
        ;   XREF to: 005918c3 (CONDITIONAL_JUMP)  ; LAB_005918c3
    MOV ESI,0x64bef4                    ; 005918a0 | = "..\\core\\skeledit.cpp"
    MOV EDI,0xfbe                       ; 005918a5
    PUSH 0x64bf09                       ; 005918aa | = "Hell froze after adding capped triang..."
    MOV dword ptr [0x02f0ca48],ESI      ; 005918af | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005918b5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005918bb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005918c0
    MOV EAX,dword ptr [EBP + 0x18]      ; 005918c3
        ;   Label: LAB_005918c3
    ADD EAX,0x200                       ; 005918c6
    PUSH EAX                            ; 005918cb
    PUSH 0x64bf33                       ; 005918cc | = "Determining adjacent parts from %s"
    MOV EAX,[0x00678a60]                ; 005918d1 | g_CEditorToolsPtr
    PUSH EAX                            ; 005918d6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005918d7
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 005918dc
    MOV EDX,dword ptr [EBP + 0x14]      ; 005918df
    MOV ECX,dword ptr [EDX + 0x7140]    ; 005918e2
    XOR EAX,EAX                         ; 005918e8
    TEST ECX,ECX                        ; 005918ea
    JLE 0x00591910                      ; 005918ec
        ;   XREF to: 00591910 (CONDITIONAL_JUMP)  ; LAB_00591910
    MOV ECX,EDX                         ; 005918ee
    MOV EDX,dword ptr [EBP + 0x14]      ; 005918f0
    MOV dword ptr [ECX + 0x718c],0x0    ; 005918f3
        ;   Label: LAB_005918f3
    INC EAX                             ; 005918fd
    MOV EBX,dword ptr [EDX + 0x7140]    ; 005918fe
    ADD ECX,0x60                        ; 00591904
    CMP EAX,EBX                         ; 00591907
    JL 0x005918f3                       ; 00591909
        ;   XREF to: 005918f3 (CONDITIONAL_JUMP)  ; LAB_005918f3
    LEA EAX,[EAX]                       ; 0059190b
    MOV ECX,ECX                         ; 0059190e
    MOV EDI,0xff5                       ; 00591910
        ;   Label: LAB_00591910
    MOV ESI,0x64bf56                    ; 00591915 | = "..\\core\\skeledit.cpp"
    MOV EAX,dword ptr [ESP + 0xa070]    ; 0059191a
    MOV dword ptr [0x02f0d944],EDI      ; 00591921 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ESI      ; 00591927 | g_CurrentDebugFilename
    TEST EAX,EAX                        ; 0059192d
    JZ 0x0059193d                       ; 0059192f
        ;   XREF to: 0059193d (CONDITIONAL_JUMP)  ; LAB_0059193d
    SUB EAX,0x4                         ; 00591931
    PUSH EAX                            ; 00591934
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00591935
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0059193a
    MOV EDX,0x64bf6b                    ; 0059193d | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0059193d
    MOV EBX,dword ptr [ESP + 0xa074]    ; 00591942
    MOV ECX,0xff6                       ; 00591949
    PUSH EBX                            ; 0059194e
    MOV dword ptr [0x0067d20c],EDX      ; 0059194f | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 00591955 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0059195b
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00591960
    MOV ESI,dword ptr [ESP + 0xa078]    ; 00591963
    TEST ESI,ESI                        ; 0059196a
    JZ 0x00591998                       ; 0059196c
        ;   XREF to: 00591998 (CONDITIONAL_JUMP)  ; LAB_00591998
    MOV EAX,dword ptr [EBP + 0x18]      ; 0059196e
    ADD EAX,0x200                       ; 00591971
    PUSH EAX                            ; 00591976
    PUSH 0x64bf80                       ; 00591977 | = "Determined parts using %s OK!\n"
    PUSH ESI                            ; 0059197c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0059197d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00591982
    PUSH 0xffc                          ; 00591985
    PUSH 0x64bf9f                       ; 0059198a | = "..\\core\\skeledit.cpp"
    PUSH ESI                            ; 0059198f
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00591990
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00591995
    MOV EAX,dword ptr [EBP + 0x18]      ; 00591998
        ;   Label: LAB_00591998
    ADD EAX,0x200                       ; 0059199b
    PUSH EAX                            ; 005919a0
    PUSH 0x64bfb4                       ; 005919a1 | = "Determined parts using %s OK!"
    MOV EDX,dword ptr [0x00678a60]      ; 005919a6 | g_CEditorToolsPtr
    PUSH EDX                            ; 005919ac | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005919ad
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    MOV EAX,0x1                         ; 005919b2
    ADD ESP,0xc                         ; 005919b7
    MOV ESP,EBP                         ; 005919ba
    POP EBP                             ; 005919bc
    POP EDI                             ; 005919bd
    POP ESI                             ; 005919be
    POP EBX                             ; 005919bf
    RET                                 ; 005919c0
    FLD float ptr [ESP + 0x9ff0]        ; 005919c1
        ;   Label: LAB_005919c1
    FABS                                ; 005919c8
    FCOMP double ptr [0x0064bfe2]       ; 005919ca | DOUBLE_0064bfe2
    FNSTSW AX                           ; 005919d0
    SAHF                                ; 005919d2
    JA 0x005910d8                       ; 005919d3
        ;   XREF to: 005910d8 (CONDITIONAL_JUMP)  ; LAB_005910d8
    FLD float ptr [ESP + 0x9ff4]        ; 005919d9
    FABS                                ; 005919e0
    FCOMP double ptr [0x0064bfe2]       ; 005919e2 | DOUBLE_0064bfe2
    FNSTSW AX                           ; 005919e8
    SAHF                                ; 005919ea
    JA 0x005910d8                       ; 005919eb
        ;   XREF to: 005910d8 (CONDITIONAL_JUMP)  ; LAB_005910d8
    FLD float ptr [ESP + 0x9ff0]        ; 005919f1
    FMUL ST0                            ; 005919f8
    FLD float ptr [ESP + 0x9fec]        ; 005919fa
    FMUL ST0                            ; 00591a01
    FADDP                               ; 00591a03
    FLD float ptr [ESP + 0x9ff4]        ; 00591a05
    FMUL ST0                            ; 00591a0c
    FADDP                               ; 00591a0e
    FLD ST0                             ; 00591a10
    FMUL ST1                            ; 00591a12
    FMULP                               ; 00591a14
    INC ECX                             ; 00591a16
    ADD EDI,0xc                         ; 00591a17
    FADD float ptr [ESP + 0xa0f4]       ; 00591a1a
    INC ESI                             ; 00591a21
    FSTP float ptr [ESP + 0xa0f4]       ; 00591a22
    CMP ESI,0x3                         ; 00591a29
    JL 0x0059100a                       ; 00591a2c
        ;   XREF to: 0059100a (CONDITIONAL_JUMP)  ; LAB_0059100a
    JMP 0x005910d8                      ; 00591a32
        ;   XREF to: 005910d8 (UNCONDITIONAL_JUMP)  ; LAB_005910d8
    FLD float ptr [ESP + 0xa0f4]        ; 00591a37
        ;   Label: LAB_00591a37
    FMUL float ptr [ESP + 0xa0e8]       ; 00591a3e
    MOV EAX,dword ptr [ESP + 0xa0fc]    ; 00591a45
    FST float ptr [ESP + 0xa0f4]        ; 00591a4c
    FCOMP float ptr [EAX]               ; 00591a53
    FNSTSW AX                           ; 00591a55
    SAHF                                ; 00591a57
    JA 0x005910e1                       ; 00591a58
        ;   XREF to: 005910e1 (CONDITIONAL_JUMP)  ; LAB_005910e1
    MOV EAX,dword ptr [ESP + 0xa0e4]    ; 00591a5e
    MOV ECX,dword ptr [EAX + 0xc]       ; 00591a65
    TEST ECX,ECX                        ; 00591a68
    JL 0x00591a8e                       ; 00591a6a
        ;   XREF to: 00591a8e (CONDITIONAL_JUMP)  ; LAB_00591a8e
    MOV EBX,dword ptr [ESP + 0xa084]    ; 00591a6c
    LEA EAX,[ECX*0x4 + 0x0]             ; 00591a73
    ADD EAX,EBX                         ; 00591a7a
    FLD float ptr [EAX]                 ; 00591a7c
    FCOMP float ptr [ESP + 0xa0f4]      ; 00591a7e
    FNSTSW AX                           ; 00591a85
    SAHF                                ; 00591a87
    JBE 0x005910e1                      ; 00591a88
        ;   XREF to: 005910e1 (CONDITIONAL_JUMP)  ; LAB_005910e1
    MOV EAX,dword ptr [ESP + 0xa0e0]    ; 00591a8e
        ;   Label: LAB_00591a8e
    MOV EDX,dword ptr [ESP + 0xa100]    ; 00591a95
    MOV dword ptr [ESP + 0xa0dc],EAX    ; 00591a9c
    MOV EAX,dword ptr [ESP + 0xa0f4]    ; 00591aa3
    MOV dword ptr [EDX],EAX             ; 00591aaa
    JMP 0x005910e1                      ; 00591aac
        ;   XREF to: 005910e1 (UNCONDITIONAL_JUMP)  ; LAB_005910e1
    IMUL EAX,ESI,0x3c                   ; 00591ab1
        ;   Label: LAB_00591ab1
    ADD EAX,dword ptr [ESP + 0xa074]    ; 00591ab4
    MOV ECX,dword ptr [EAX + 0xc]       ; 00591abb
    MOV EDX,dword ptr [ESP + 0xa0d4]    ; 00591abe
    MOV dword ptr [ESP + 0xa0d4],ECX    ; 00591ac5
    MOV dword ptr [EAX + 0xc],EDX       ; 00591acc
    TEST ECX,ECX                        ; 00591acf
    JGE 0x00590ef3                      ; 00591ad1
        ;   XREF to: 00590ef3 (CONDITIONAL_JUMP)  ; LAB_00590ef3
    JMP 0x00591149                      ; 00591ad7
        ;   XREF to: 00591149 (UNCONDITIONAL_JUMP)  ; LAB_00591149
    TEST EAX,EAX                        ; 00591adc
        ;   Label: LAB_00591adc
    JZ 0x005912a0                       ; 00591ade
        ;   XREF to: 005912a0 (CONDITIONAL_JUMP)  ; LAB_005912a0
    JMP 0x005912c2                      ; 00591ae4
        ;   XREF to: 005912c2 (UNCONDITIONAL_JUMP)  ; LAB_005912c2
    MOV ESI,dword ptr [EAX + 0x8]       ; 00591ae9
        ;   Label: LAB_00591ae9
    IMUL EDX,ESI,0x60                   ; 00591aec
    MOV EDI,dword ptr [EBP + 0x14]      ; 00591aef
    MOV EBX,dword ptr [EAX + 0xc]       ; 00591af2
    ADD EDX,EDI                         ; 00591af5
    TEST EBX,EBX                        ; 00591af7
    JL 0x00591b59                       ; 00591af9
        ;   XREF to: 00591b59 (CONDITIONAL_JUMP)  ; LAB_00591b59
    MOV EDI,dword ptr [ESP + 0xa088]    ; 00591afb
    SHL EBX,0x2                         ; 00591b02
    ADD EDI,EBX                         ; 00591b05
    MOV dword ptr [ESP + 0xa104],EBX    ; 00591b07
    CMP dword ptr [EDI],0x0             ; 00591b0e
    JGE 0x00591b46                      ; 00591b11
        ;   XREF to: 00591b46 (CONDITIONAL_JUMP)  ; LAB_00591b46
    MOV EBX,dword ptr [ESP + 0xa108]    ; 00591b13
    ADD EBX,dword ptr [ESP + 0xa104]    ; 00591b1a
    MOV dword ptr [EBX],ESI             ; 00591b21
    MOV dword ptr [EDI],ECX             ; 00591b23
    MOV EDI,dword ptr [ESP + 0xa0a4]    ; 00591b25
    MOV ESI,dword ptr [EDX + 0x7164]    ; 00591b2c
    INC EDI                             ; 00591b32
    INC ESI                             ; 00591b33
    MOV dword ptr [ESP + 0xa0a4],EDI    ; 00591b34
    MOV dword ptr [EDX + 0x7164],ESI    ; 00591b3b
    JMP 0x00591327                      ; 00591b41
        ;   XREF to: 00591327 (UNCONDITIONAL_JUMP)  ; LAB_00591327
    MOV EAX,dword ptr [EBP + 0x18]      ; 00591b46
        ;   Label: LAB_00591b46
    ADD EAX,0x200                       ; 00591b49
    PUSH EAX                            ; 00591b4e
    PUSH 0x64bbc0                       ; 00591b4f | = "Unable to generate one-to-one polygon..."
    JMP 0x0058f8da                      ; 00591b54
        ;   XREF to: 0058f8da (UNCONDITIONAL_JUMP)  ; LAB_0058f8da
    MOV ESI,dword ptr [ESP + 0xa0a0]    ; 00591b59
        ;   Label: LAB_00591b59
    MOV EBX,dword ptr [EDX + 0x7178]    ; 00591b60
    INC ESI                             ; 00591b66
    INC EBX                             ; 00591b67
    MOV dword ptr [ESP + 0xa0a0],ESI    ; 00591b68
    MOV dword ptr [EDX + 0x7178],EBX    ; 00591b6f
    JMP 0x00591327                      ; 00591b75
        ;   XREF to: 00591327 (UNCONDITIONAL_JUMP)  ; LAB_00591327
    CMP EBX,0x1                         ; 00591b7a
        ;   Label: LAB_00591b7a
    JNZ 0x00591c49                      ; 00591b7d
        ;   XREF to: 00591c49 (CONDITIONAL_JUMP)  ; LAB_00591c49
    MOV EAX,dword ptr [EBP + 0x14]      ; 00591b83
    CMP dword ptr [EAX + 0x7140],0x1e   ; 00591b86
    JL 0x00591bb1                       ; 00591b8d
        ;   XREF to: 00591bb1 (CONDITIONAL_JUMP)  ; LAB_00591bb1
    MOV EDI,0x64bcc9                    ; 00591b8f | = "..\\core\\skeledit.cpp"
    MOV EAX,0xeaf                       ; 00591b94
    PUSH 0x64bcde                       ; 00591b99 | = "Too many parts"
    MOV dword ptr [0x02f0ca48],EDI      ; 00591b9e | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00591ba4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00591ba9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00591bae
    MOV EAX,dword ptr [EBP + 0x14]      ; 00591bb1
        ;   Label: LAB_00591bb1
    IMUL EDI,dword ptr [EAX + 0x7140],0x60 ; 00591bb4
    MOV ECX,dword ptr [ESP + 0xa120]    ; 00591bbb
    MOV ESI,0x64bced                    ; 00591bc2 | = "MySpecialTriangles"
    ADD EDI,ECX                         ; 00591bc7
    PUSH EDI                            ; 00591bc9
    MOV AL,byte ptr [ESI]               ; 00591bca | = "MySpecialTriangles" | s_MySpecialTriangles_0064bced+2
        ;   Label: LAB_00591bca
    MOV byte ptr [EDI],AL               ; 00591bcc
    CMP AL,0x0                          ; 00591bce
    JZ 0x00591be2                       ; 00591bd0
        ;   XREF to: 00591be2 (CONDITIONAL_JUMP)  ; LAB_00591be2
    MOV AL,byte ptr [ESI + 0x1]         ; 00591bd2 | s_MySpecialTriangles_0064bced+1 | s_MySpecialTriangles_0064bced+3
    ADD ESI,0x2                         ; 00591bd5
    MOV byte ptr [EDI + 0x1],AL         ; 00591bd8
    ADD EDI,0x2                         ; 00591bdb
    CMP AL,0x0                          ; 00591bde
    JNZ 0x00591bca                      ; 00591be0
        ;   XREF to: 00591bca (CONDITIONAL_JUMP)  ; LAB_00591bca
    POP EDI                             ; 00591be2
        ;   Label: LAB_00591be2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00591be3
    IMUL EAX,dword ptr [EAX + 0x7140],0x60 ; 00591be6
    MOV EDX,dword ptr [EBP + 0x14]      ; 00591bed
    MOV ESI,dword ptr [ESP + 0xa0a4]    ; 00591bf0
    MOV ECX,dword ptr [EBP + 0x14]      ; 00591bf7
    MOV EDX,dword ptr [EDX + 0x54]      ; 00591bfa
    ADD EAX,ECX                         ; 00591bfd
    SUB EDX,ESI                         ; 00591bff
    MOV dword ptr [EAX + 0x7164],EDX    ; 00591c01
    IMUL EAX,dword ptr [ECX + 0x7140],0x60 ; 00591c07
    ADD EAX,ECX                         ; 00591c0e
    MOV dword ptr [EAX + 0x7178],0x0    ; 00591c10
    IMUL EAX,dword ptr [ECX + 0x7140],0x60 ; 00591c1a
    ADD EAX,ECX                         ; 00591c21
    MOV dword ptr [EAX + 0x718c],0x0    ; 00591c23
    MOV ESI,dword ptr [ECX + 0x7140]    ; 00591c2d
    MOV EAX,dword ptr [ECX + 0x54]      ; 00591c33
    INC ESI                             ; 00591c36
    MOV dword ptr [ESP + 0xa0a4],EAX    ; 00591c37
    MOV dword ptr [ECX + 0x7140],ESI    ; 00591c3e
    JMP 0x00591585                      ; 00591c44
        ;   XREF to: 00591585 (UNCONDITIONAL_JUMP)  ; LAB_00591585
    CMP EBX,0x2                         ; 00591c49
        ;   Label: LAB_00591c49
    JNZ 0x00591585                      ; 00591c4c
        ;   XREF to: 00591585 (CONDITIONAL_JUMP)  ; LAB_00591585
    MOV dword ptr [ESP + 0xa124],0x1    ; 00591c52
    MOV EAX,dword ptr [ESP + 0xa0a4]    ; 00591c5d
    MOV dword ptr [ESP + 0xa128],EAX    ; 00591c64
    MOV EAX,dword ptr [EBP + 0x14]      ; 00591c6b
    XOR EDX,EDX                         ; 00591c6e
    MOV ECX,dword ptr [EAX + 0x54]      ; 00591c70
    MOV dword ptr [ESP + 0xa12c],EDX    ; 00591c73
    TEST ECX,ECX                        ; 00591c7a
    JLE 0x00591d62                      ; 00591c7c
        ;   XREF to: 00591d62 (CONDITIONAL_JUMP)  ; LAB_00591d62
    MOV EDI,dword ptr [ESP + 0xa0a4]    ; 00591c82
    IMUL EAX,EDI,0x12                   ; 00591c89
    MOV dword ptr [ESP + 0xa1b4],EAX    ; 00591c8c
    LEA EAX,[EDI*0x4 + 0x0]             ; 00591c93
    MOV dword ptr [ESP + 0xa1b8],EAX    ; 00591c9a
    CMP dword ptr [ESP + 0xa124],0x0    ; 00591ca1
        ;   Label: LAB_00591ca1
    JZ 0x00591d62                       ; 00591ca9
        ;   XREF to: 00591d62 (CONDITIONAL_JUMP)  ; LAB_00591d62
    XOR EDX,EDX                         ; 00591caf
    MOV dword ptr [ESP + 0xa124],EDX    ; 00591cb1
    MOV EDX,dword ptr [EBP + 0x14]      ; 00591cb8
    MOV EAX,dword ptr [ESP + 0xa128]    ; 00591cbb
    MOV ECX,dword ptr [EDX + 0x54]      ; 00591cc2
    MOV dword ptr [ESP + 0xa1c4],EAX    ; 00591cc5
    CMP EAX,ECX                         ; 00591ccc
    JGE 0x00591d45                      ; 00591cce
        ;   XREF to: 00591d45 (CONDITIONAL_JUMP)  ; LAB_00591d45
    MOV EAX,dword ptr [ESP + 0xa1b4]    ; 00591cd0
    MOV EBX,dword ptr [ESP + 0xa108]    ; 00591cd7
    MOV dword ptr [ESP + 0xa198],EAX    ; 00591cde
    MOV EAX,dword ptr [ESP + 0xa1b8]    ; 00591ce5
    ADD EAX,EBX                         ; 00591cec
    MOV dword ptr [ESP + 0xa19c],EAX    ; 00591cee
    MOV EAX,dword ptr [ESP + 0xa19c]    ; 00591cf5
        ;   Label: LAB_00591cf5
    CMP dword ptr [EAX],0xf423f         ; 00591cfc
    JGE 0x00591e99                      ; 00591d02
        ;   XREF to: 00591e99 (CONDITIONAL_JUMP)  ; LAB_00591e99
    MOV EAX,dword ptr [ESP + 0xa19c]    ; 00591d08
        ;   Label: LAB_00591d08
    MOV EDX,dword ptr [ESP + 0xa1c4]    ; 00591d0f
    MOV EDI,dword ptr [ESP + 0xa198]    ; 00591d16
    ADD EAX,0x4                         ; 00591d1d
    INC EDX                             ; 00591d20
    MOV dword ptr [ESP + 0xa19c],EAX    ; 00591d21
    MOV dword ptr [ESP + 0xa1c4],EDX    ; 00591d28
    MOV EAX,EDX                         ; 00591d2f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00591d31
    ADD EDI,0x12                        ; 00591d34
    MOV ECX,dword ptr [EDX + 0x54]      ; 00591d37
    MOV dword ptr [ESP + 0xa198],EDI    ; 00591d3a
    CMP EAX,ECX                         ; 00591d41
    JL 0x00591cf5                       ; 00591d43
        ;   XREF to: 00591cf5 (CONDITIONAL_JUMP)  ; LAB_00591cf5
    MOV EBX,dword ptr [ESP + 0xa12c]    ; 00591d45
        ;   Label: LAB_00591d45
    MOV EDX,dword ptr [EBP + 0x14]      ; 00591d4c
    INC EBX                             ; 00591d4f
    MOV ESI,dword ptr [EDX + 0x54]      ; 00591d50
    MOV dword ptr [ESP + 0xa12c],EBX    ; 00591d53
    CMP EBX,ESI                         ; 00591d5a
    JL 0x00591ca1                       ; 00591d5c
        ;   XREF to: 00591ca1 (CONDITIONAL_JUMP)  ; LAB_00591ca1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00591d62
        ;   Label: LAB_00591d62
    MOV EAX,dword ptr [EAX + 0x54]      ; 00591d65
    DEC EAX                             ; 00591d68
    MOV dword ptr [ESP + 0xa1c0],EAX    ; 00591d69
    TEST EAX,EAX                        ; 00591d70
    JL 0x00591e8f                       ; 00591d72
        ;   XREF to: 00591e8f (CONDITIONAL_JUMP)  ; LAB_00591e8f
    MOV EAX,dword ptr [ESP + 0xa1c0]    ; 00591d78
        ;   Label: LAB_00591d78
    XOR EBX,EBX                         ; 00591d7f
    TEST EAX,EAX                        ; 00591d81
    JLE 0x00591e78                      ; 00591d83
        ;   XREF to: 00591e78 (CONDITIONAL_JUMP)  ; LAB_00591e78
    MOV ESI,0x12                        ; 00591d89
    MOV EDX,dword ptr [ESP + 0xa108]    ; 00591d8e
    MOV dword ptr [ESP + 0xa1a0],EBX    ; 00591d95
    MOV dword ptr [ESP + 0xa1a4],ESI    ; 00591d9c
    MOV EAX,dword ptr [EDX]             ; 00591da3
        ;   Label: LAB_00591da3
    MOV EDI,dword ptr [EDX + 0x4]       ; 00591da5
    LEA ECX,[EBX*0x4 + 0x0]             ; 00591da8
    CMP EAX,EDI                         ; 00591daf
    JLE 0x00591e43                      ; 00591db1
        ;   XREF to: 00591e43 (CONDITIONAL_JUMP)  ; LAB_00591e43
    MOV EAX,dword ptr [EBP + 0x14]      ; 00591db7
    LEA ESI,[ECX + 0x4]                 ; 00591dba
    MOV EAX,dword ptr [EAX + 0x90]      ; 00591dbd
    MOV dword ptr [ESP + 0xa1e0],ESI    ; 00591dc3
    ADD ESI,EAX                         ; 00591dca
    ADD EAX,ECX                         ; 00591dcc
    MOV ECX,dword ptr [ESI]             ; 00591dce
    MOV EDI,dword ptr [EAX]             ; 00591dd0
    MOV dword ptr [EAX],ECX             ; 00591dd2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00591dd4
    MOV dword ptr [ESI],EDI             ; 00591dd7
    MOV ECX,dword ptr [ESP + 0xa1a4]    ; 00591dd9
    MOV EAX,dword ptr [EAX + 0x7c]      ; 00591de0
    MOV ESI,dword ptr [ESP + 0xa1a0]    ; 00591de3
    ADD ECX,EAX                         ; 00591dea
    ADD EAX,ESI                         ; 00591dec
    LEA EDI,[ESP + 0x9f04]              ; 00591dee
    MOV ESI,EAX                         ; 00591df5
    MOVSD ES:EDI,ESI                    ; 00591df7
    MOVSW ES:EDI,ESI                    ; 00591df8
    LEA EDI,[ESP + 0x9f0a]              ; 00591dfa
    LEA ESI,[EAX + 0x6]                 ; 00591e01
    MOVSD ES:EDI,ESI                    ; 00591e04
    MOVSW ES:EDI,ESI                    ; 00591e05
    LEA EDI,[ESP + 0x9f10]              ; 00591e07
    LEA ESI,[EAX + 0xc]                 ; 00591e0e
    MOVSD ES:EDI,ESI                    ; 00591e11
    MOVSW ES:EDI,ESI                    ; 00591e12
    MOV EDI,EAX                         ; 00591e14
    MOV ESI,ECX                         ; 00591e16
    MOVSD ES:EDI,ESI                    ; 00591e18
    MOVSD ES:EDI,ESI                    ; 00591e19
    MOVSD ES:EDI,ESI                    ; 00591e1a
    MOVSD ES:EDI,ESI                    ; 00591e1b
    MOVSW ES:EDI,ESI                    ; 00591e1c
    LEA ESI,[ESP + 0x9f04]              ; 00591e1e
    MOV EDI,ECX                         ; 00591e25
    MOVSD ES:EDI,ESI                    ; 00591e27
    MOVSD ES:EDI,ESI                    ; 00591e28
    MOVSD ES:EDI,ESI                    ; 00591e29
    MOVSD ES:EDI,ESI                    ; 00591e2a
    MOVSW ES:EDI,ESI                    ; 00591e2b
    MOV EAX,dword ptr [ESP + 0xa108]    ; 00591e2d
    ADD EAX,dword ptr [ESP + 0xa1e0]    ; 00591e34
    MOV ESI,dword ptr [EAX]             ; 00591e3b
    MOV ECX,dword ptr [EDX]             ; 00591e3d
    MOV dword ptr [EDX],ESI             ; 00591e3f
    MOV dword ptr [EAX],ECX             ; 00591e41
    MOV EAX,dword ptr [ESP + 0xa1a0]    ; 00591e43
        ;   Label: LAB_00591e43
    MOV ECX,dword ptr [ESP + 0xa1a4]    ; 00591e4a
    MOV ESI,dword ptr [ESP + 0xa1c0]    ; 00591e51
    INC EBX                             ; 00591e58
    ADD EDX,0x4                         ; 00591e59
    ADD EAX,0x12                        ; 00591e5c
    ADD ECX,0x12                        ; 00591e5f
    MOV dword ptr [ESP + 0xa1a0],EAX    ; 00591e62
    MOV dword ptr [ESP + 0xa1a4],ECX    ; 00591e69
    CMP EBX,ESI                         ; 00591e70
    JL 0x00591da3                       ; 00591e72
        ;   XREF to: 00591da3 (CONDITIONAL_JUMP)  ; LAB_00591da3
    MOV EDI,dword ptr [ESP + 0xa1c0]    ; 00591e78
        ;   Label: LAB_00591e78
    DEC EDI                             ; 00591e7f
    MOV dword ptr [ESP + 0xa1c0],EDI    ; 00591e80
    TEST EDI,EDI                        ; 00591e87
    JGE 0x00591d78                      ; 00591e89
        ;   XREF to: 00591d78 (CONDITIONAL_JUMP)  ; LAB_00591d78
    MOV EBX,0x1                         ; 00591e8f
        ;   Label: LAB_00591e8f
    JMP 0x00591585                      ; 00591e94
        ;   XREF to: 00591585 (UNCONDITIONAL_JUMP)  ; LAB_00591585
    MOV EAX,dword ptr [EBP + 0x14]      ; 00591e99
        ;   Label: LAB_00591e99
    MOV EDX,dword ptr [ESP + 0xa198]    ; 00591e9c
    MOV EAX,dword ptr [EAX + 0x7c]      ; 00591ea3
    ADD EDX,EAX                         ; 00591ea6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00591ea8
    XOR EDI,EDI                         ; 00591eab
    MOV dword ptr [ESP + 0xa130],EDX    ; 00591ead
    MOV EDX,dword ptr [EAX + 0x54]      ; 00591eb4
    MOV dword ptr [ESP + 0xa134],EDI    ; 00591eb7
    TEST EDX,EDX                        ; 00591ebe
    JLE 0x00591f9b                      ; 00591ec0
        ;   XREF to: 00591f9b (CONDITIONAL_JUMP)  ; LAB_00591f9b
    MOV EAX,dword ptr [ESP + 0xa108]    ; 00591ec6
    MOV dword ptr [ESP + 0xa194],EDI    ; 00591ecd
    MOV dword ptr [ESP + 0xa190],EAX    ; 00591ed4
    MOV EAX,dword ptr [ESP + 0xa190]    ; 00591edb
        ;   Label: LAB_00591edb
    CMP dword ptr [EAX],0xf423f         ; 00591ee2
    JGE 0x00591fbe                      ; 00591ee8
        ;   XREF to: 00591fbe (CONDITIONAL_JUMP)  ; LAB_00591fbe
    MOV EAX,dword ptr [EBP + 0x14]      ; 00591eee
    MOV EDX,dword ptr [ESP + 0xa194]    ; 00591ef1
    MOV EAX,dword ptr [EAX + 0x7c]      ; 00591ef8
    ADD EDX,EAX                         ; 00591efb
    MOV EAX,dword ptr [ESP + 0xa130]    ; 00591efd
    MOV dword ptr [ESP + 0xa138],EDX    ; 00591f04
    LEA EDX,[EAX + 0x6]                 ; 00591f0b
    XOR EBX,EBX                         ; 00591f0e
    MOV dword ptr [ESP + 0xa18c],EDX    ; 00591f10
    MOV ECX,dword ptr [ESP + 0xa138]    ; 00591f17
        ;   Label: LAB_00591f17
    MOV dword ptr [ESP + 0xa13c],EAX    ; 00591f1e
    MOV SI,word ptr [EAX]               ; 00591f25
    XOR EDX,EDX                         ; 00591f28
    CMP SI,word ptr [ECX]               ; 00591f2a
    JZ 0x00591f47                       ; 00591f2d
        ;   XREF to: 00591f47 (CONDITIONAL_JUMP)  ; LAB_00591f47
    INC EDX                             ; 00591f2f
        ;   Label: LAB_00591f2f
    ADD ECX,0x2                         ; 00591f30
    CMP EDX,0x3                         ; 00591f33
    JGE 0x00591f48                      ; 00591f36
        ;   XREF to: 00591f48 (CONDITIONAL_JUMP)  ; LAB_00591f48
    MOV ESI,dword ptr [ESP + 0xa13c]    ; 00591f38
    MOV DI,word ptr [ECX]               ; 00591f3f
    CMP DI,word ptr [ESI]               ; 00591f42
    JNZ 0x00591f2f                      ; 00591f45
        ;   XREF to: 00591f2f (CONDITIONAL_JUMP)  ; LAB_00591f2f
    INC EBX                             ; 00591f47
        ;   Label: LAB_00591f47
    MOV ESI,dword ptr [ESP + 0xa18c]    ; 00591f48
        ;   Label: LAB_00591f48
    ADD EAX,0x2                         ; 00591f4f
    CMP EAX,ESI                         ; 00591f52
    JNZ 0x00591f17                      ; 00591f54
        ;   XREF to: 00591f17 (CONDITIONAL_JUMP)  ; LAB_00591f17
    CMP EBX,0x2                         ; 00591f56
    JL 0x00591fbe                       ; 00591f59
        ;   XREF to: 00591fbe (CONDITIONAL_JUMP)  ; LAB_00591fbe
    MOV EDX,dword ptr [ESP + 0xa134]    ; 00591f5b
    MOV EAX,dword ptr [ESP + 0xa108]    ; 00591f62
    SHL EDX,0x2                         ; 00591f69
    ADD EDX,EAX                         ; 00591f6c
    IMUL EAX,dword ptr [EDX],0x60       ; 00591f6e
    ADD EAX,dword ptr [EBP + 0x14]      ; 00591f71
    MOV ESI,dword ptr [EAX + 0x7164]    ; 00591f74
    INC ESI                             ; 00591f7a
    MOV EDI,dword ptr [ESP + 0xa0a4]    ; 00591f7b
    MOV dword ptr [EAX + 0x7164],ESI    ; 00591f82
    INC EDI                             ; 00591f88
    MOV EAX,dword ptr [EDX]             ; 00591f89
    MOV EDX,dword ptr [ESP + 0xa19c]    ; 00591f8b
    MOV dword ptr [ESP + 0xa0a4],EDI    ; 00591f92
    MOV dword ptr [EDX],EAX             ; 00591f99
    MOV EAX,dword ptr [ESP + 0xa19c]    ; 00591f9b
        ;   Label: LAB_00591f9b
    CMP dword ptr [EAX],0xf423f         ; 00591fa2
    JL 0x00591d08                       ; 00591fa8
        ;   XREF to: 00591d08 (CONDITIONAL_JUMP)  ; LAB_00591d08
    MOV dword ptr [ESP + 0xa124],0x1    ; 00591fae
    JMP 0x00591d08                      ; 00591fb9
        ;   XREF to: 00591d08 (UNCONDITIONAL_JUMP)  ; LAB_00591d08
    MOV EAX,dword ptr [ESP + 0xa194]    ; 00591fbe
        ;   Label: LAB_00591fbe
    MOV EDX,dword ptr [ESP + 0xa134]    ; 00591fc5
    MOV EDI,dword ptr [ESP + 0xa190]    ; 00591fcc
    ADD EAX,0x12                        ; 00591fd3
    INC EDX                             ; 00591fd6
    MOV dword ptr [ESP + 0xa194],EAX    ; 00591fd7
    MOV dword ptr [ESP + 0xa134],EDX    ; 00591fde
    MOV EAX,EDX                         ; 00591fe5
    MOV EDX,dword ptr [EBP + 0x14]      ; 00591fe7
    ADD EDI,0x4                         ; 00591fea
    MOV ECX,dword ptr [EDX + 0x54]      ; 00591fed
    MOV dword ptr [ESP + 0xa190],EDI    ; 00591ff0
    CMP EAX,ECX                         ; 00591ff7
    JL 0x00591edb                       ; 00591ff9
        ;   XREF to: 00591edb (CONDITIONAL_JUMP)  ; LAB_00591edb
    JMP 0x00591f9b                      ; 00591fff
        ;   XREF to: 00591f9b (UNCONDITIONAL_JUMP)  ; LAB_00591f9b
    TEST EAX,EAX                        ; 00592001
        ;   Label: LAB_00592001
    JZ 0x0059164e                       ; 00592003
        ;   XREF to: 0059164e (CONDITIONAL_JUMP)  ; LAB_0059164e
    JMP 0x00591670                      ; 00592009
        ;   XREF to: 00591670 (UNCONDITIONAL_JUMP)  ; LAB_00591670
    MOV EDI,dword ptr [ESP + 0xa1bc]    ; 0059200e
        ;   Label: LAB_0059200e
    CMP EDI,dword ptr [EAX + 0x8]       ; 00592015
    JNZ 0x00591835                      ; 00592018
        ;   XREF to: 00591835 (CONDITIONAL_JUMP)  ; LAB_00591835
    MOV EAX,dword ptr [ESP + 0xa1ac]    ; 0059201e
    CMP dword ptr [EAX + 0xc],0x0       ; 00592025
    JGE 0x00591835                      ; 00592029
        ;   XREF to: 00591835 (CONDITIONAL_JUMP)  ; LAB_00591835
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059202f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00592032
    MOV ECX,dword ptr [EDX + 0x68]      ; 00592035
    MOV EAX,dword ptr [EAX + 0x54]      ; 00592038
    ADD EAX,ECX                         ; 0059203b
    IMUL EDX,EAX,0x12                   ; 0059203d
    MOV ECX,dword ptr [EBP + 0x14]      ; 00592040
    MOV ECX,dword ptr [ECX + 0x7c]      ; 00592043
    ADD ECX,EDX                         ; 00592046
    MOV EBX,dword ptr [ESP + 0xa098]    ; 00592048
    MOV dword ptr [ESP + 0xa148],ECX    ; 0059204f
    TEST EBX,EBX                        ; 00592056
    JL 0x0059226e                       ; 00592058
        ;   XREF to: 0059226e (CONDITIONAL_JUMP)  ; LAB_0059226e
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059205e
    SHL EAX,0x2                         ; 00592061
    MOV EDX,dword ptr [EDX + 0x90]      ; 00592064
    ADD EAX,EDX                         ; 0059206a
    MOV dword ptr [EAX],EBX             ; 0059206c
    XOR EDI,EDI                         ; 0059206e
        ;   Label: LAB_0059206e
    MOV ESI,dword ptr [ESP + 0xa148]    ; 00592070
    MOV dword ptr [ESP + 0xa1d8],EDI    ; 00592077
    MOV EDI,dword ptr [ESP + 0xa144]    ; 0059207e
    IMUL EDX,dword ptr [EDI + 0x18],0xc ; 00592085
        ;   Label: LAB_00592085
    ADD EDX,dword ptr [ESP + 0xa070]    ; 00592089
    MOV EAX,dword ptr [EDX]             ; 00592090
    MOV dword ptr [ESP + 0xa034],EAX    ; 00592092
    LEA EAX,[EDX + 0x4]                 ; 00592099
    MOV EAX,dword ptr [EAX]             ; 0059209c
    MOV dword ptr [ESP + 0xa038],EAX    ; 0059209e
    LEA EAX,[EDX + 0x8]                 ; 005920a5
    MOV EAX,dword ptr [EAX]             ; 005920a8
    MOV dword ptr [ESP + 0xa03c],EAX    ; 005920aa
    MOV dword ptr [ESP + 0x8],0x60ad78ec ; 005920b1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005920b9
    MOV ECX,dword ptr [EAX + 0x2c]      ; 005920bc
    XOR EDX,EDX                         ; 005920bf
    TEST ECX,ECX                        ; 005920c1
    JLE 0x00592154                      ; 005920c3
        ;   XREF to: 00592154 (CONDITIONAL_JUMP)  ; LAB_00592154
    MOV EBX,ESI                         ; 005920c9
    XOR ECX,ECX                         ; 005920cb
    MOV EAX,dword ptr [EBP + 0x14]      ; 005920cd
        ;   Label: LAB_005920cd
    MOV EAX,dword ptr [EAX + 0x40]      ; 005920d0
    FLD float ptr [ECX + EAX*0x1 + 0x10] ; 005920d3
    FSUB float ptr [ESP + 0xa034]       ; 005920d7
    FSTP float ptr [ESP + 0x9fe0]       ; 005920de
    FLD float ptr [ECX + EAX*0x1 + 0x14] ; 005920e5
    FSUB float ptr [ESP + 0xa038]       ; 005920e9
    FST float ptr [ESP + 0x9fe4]        ; 005920f0
    FMUL float ptr [ESP + 0x9fe4]       ; 005920f7
    FLD float ptr [ESP + 0x9fe0]        ; 005920fe
    FMUL ST0                            ; 00592105
    FLD float ptr [ECX + EAX*0x1 + 0x18] ; 00592107
    FSUB float ptr [ESP + 0xa03c]       ; 0059210b
    FXCH                                ; 00592112
    FADDP ST2,ST0                       ; 00592114
    FST float ptr [ESP + 0x9fe8]        ; 00592116
    FMUL float ptr [ESP + 0x9fe8]       ; 0059211d
    FADDP                               ; 00592124
    FST float ptr [ESP + 0xa158]        ; 00592126
    FCOMP float ptr [ESP + 0x8]         ; 0059212d
    FNSTSW AX                           ; 00592131
    SAHF                                ; 00592133
    JNC 0x00592144                      ; 00592134
        ;   XREF to: 00592144 (CONDITIONAL_JUMP)  ; LAB_00592144
    MOV EAX,dword ptr [ESP + 0xa158]    ; 00592136
    MOV word ptr [EBX],DX               ; 0059213d
    MOV dword ptr [ESP + 0x8],EAX       ; 00592140
    MOV EAX,dword ptr [EBP + 0x14]      ; 00592144
        ;   Label: LAB_00592144
    INC EDX                             ; 00592147
    ADD ECX,0x34                        ; 00592148
    CMP EDX,dword ptr [EAX + 0x2c]      ; 0059214b
    JL 0x005920cd                       ; 0059214e
        ;   XREF to: 005920cd (CONDITIONAL_JUMP)  ; LAB_005920cd
    FLD float ptr [ESP + 0x8]           ; 00592154
        ;   Label: LAB_00592154
    FCOMP double ptr [0x0064bfe2]       ; 00592158 | DOUBLE_0064bfe2
    FNSTSW AX                           ; 0059215e
    SAHF                                ; 00592160
    JA 0x0059236b                       ; 00592161
        ;   XREF to: 0059236b (CONDITIONAL_JUMP)  ; LAB_0059236b
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00592167
    MOV EDX,dword ptr [EDI + 0x20]      ; 0059216a
    SAR EAX,0x8                         ; 0059216d
    SAR EDX,0x8                         ; 00592170
    TEST EAX,EAX                        ; 00592173
    JL 0x00592382                       ; 00592175
        ;   XREF to: 00592382 (CONDITIONAL_JUMP)  ; LAB_00592382
    CMP EAX,0xffff                      ; 0059217b
    JLE 0x00592187                      ; 00592180
        ;   XREF to: 00592187 (CONDITIONAL_JUMP)  ; LAB_00592187
    MOV EAX,0xffff                      ; 00592182
    TEST EDX,EDX                        ; 00592187
        ;   Label: LAB_00592187
    JL 0x00592389                       ; 00592189
        ;   XREF to: 00592389 (CONDITIONAL_JUMP)  ; LAB_00592389
    CMP EDX,0xffff                      ; 0059218f
    JLE 0x0059219c                      ; 00592195
        ;   XREF to: 0059219c (CONDITIONAL_JUMP)  ; LAB_0059219c
    MOV EDX,0xffff                      ; 00592197
    ADD ESI,0x2                         ; 0059219c
        ;   Label: LAB_0059219c
    MOV EBX,dword ptr [ESP + 0xa1d8]    ; 0059219f
    ADD EDI,0xc                         ; 005921a6
    MOV word ptr [ESI + 0xa],DX         ; 005921a9
    INC EBX                             ; 005921ad
    MOV word ptr [ESI + 0x4],AX         ; 005921ae
    MOV dword ptr [ESP + 0xa1d8],EBX    ; 005921b2
    CMP EBX,0x3                         ; 005921b9
    JL 0x00592085                       ; 005921bc
        ;   XREF to: 00592085 (CONDITIONAL_JUMP)  ; LAB_00592085
    MOV ECX,0xffffffff                  ; 005921c2
    MOV EDX,0x60ad78ec                  ; 005921c7
    MOV ESI,dword ptr [ESP + 0xa08c]    ; 005921cc
    XOR EBX,EBX                         ; 005921d3
    MOV dword ptr [ESP + 0xa14c],ECX    ; 005921d5
    MOV dword ptr [ESP + 0xa1d4],EBX    ; 005921dc
    MOV dword ptr [ESP + 0xa1dc],EDX    ; 005921e3
    TEST ESI,ESI                        ; 005921ea
    JLE 0x00592238                      ; 005921ec
        ;   XREF to: 00592238 (CONDITIONAL_JUMP)  ; LAB_00592238
    MOV EAX,dword ptr [ESP + 0xa074]    ; 005921ee
    MOV dword ptr [ESP + 0xa1a8],EAX    ; 005921f5
    MOV ESI,dword ptr [ESP + 0xa1a8]    ; 005921fc
        ;   Label: LAB_005921fc
    CMP dword ptr [ESI + 0x4],0x3       ; 00592203
    JZ 0x00592390                       ; 00592207
        ;   XREF to: 00592390 (CONDITIONAL_JUMP)  ; LAB_00592390
    MOV ESI,dword ptr [ESP + 0xa1d4]    ; 0059220d
        ;   Label: LAB_0059220d
    MOV EBX,dword ptr [ESP + 0xa1a8]    ; 00592214
    MOV EDI,dword ptr [ESP + 0xa08c]    ; 0059221b
    INC ESI                             ; 00592222
    ADD EBX,0x3c                        ; 00592223
    MOV dword ptr [ESP + 0xa1d4],ESI    ; 00592226
    MOV dword ptr [ESP + 0xa1a8],EBX    ; 0059222d
    CMP ESI,EDI                         ; 00592234
    JL 0x005921fc                       ; 00592236
        ;   XREF to: 005921fc (CONDITIONAL_JUMP)  ; LAB_005921fc
    CMP dword ptr [ESP + 0xa14c],0x0    ; 00592238
        ;   Label: LAB_00592238
    JL 0x00592509                       ; 00592240
        ;   XREF to: 00592509 (CONDITIONAL_JUMP)  ; LAB_00592509
    MOV EAX,dword ptr [EBP + 0x14]      ; 00592246
    MOV EDX,dword ptr [EBP + 0x14]      ; 00592249
    MOV EAX,dword ptr [EAX + 0x68]      ; 0059224c
    MOV EDX,dword ptr [EDX + 0xa4]      ; 0059224f
    SHL EAX,0x2                         ; 00592255
    ADD EAX,EDX                         ; 00592258
    MOV EDX,dword ptr [ESP + 0xa14c]    ; 0059225a
    MOV dword ptr [EAX],EDX             ; 00592261
    MOV EAX,dword ptr [EBP + 0x14]      ; 00592263
    INC dword ptr [EAX + 0x68]          ; 00592266
    JMP 0x00591835                      ; 00592269
        ;   XREF to: 00591835 (UNCONDITIONAL_JUMP)  ; LAB_00591835
    MOV EAX,dword ptr [ESP + 0xa1ac]    ; 0059226e
        ;   Label: LAB_0059226e
    MOV ESI,dword ptr [EAX + 0x14]      ; 00592275
    TEST ESI,ESI                        ; 00592278
    JL 0x00591835                       ; 0059227a
        ;   XREF to: 00591835 (CONDITIONAL_JUMP)  ; LAB_00591835
    MOV EAX,ESI                         ; 00592280
    LEA EDI,[ESP + 0xc]                 ; 00592282
    SHL EAX,0x8                         ; 00592286
    ADD EDI,EAX                         ; 00592289
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059228b
    MOV EDX,dword ptr [EAX + 0xbc]      ; 0059228e
    XOR EBX,EBX                         ; 00592294
    TEST EDX,EDX                        ; 00592296
    JLE 0x005922d4                      ; 00592298
        ;   XREF to: 005922d4 (CONDITIONAL_JUMP)  ; LAB_005922d4
    MOV ESI,dword ptr [ESP + 0xa150]    ; 0059229a
    ADD ESI,0x8                         ; 005922a1
    PUSH 0x0                            ; 005922a4
        ;   Label: LAB_005922a4
    LEA EAX,[ESP + 0x9abc]              ; 005922a6
    PUSH EAX                            ; 005922ad
    PUSH 0x0                            ; 005922ae
    PUSH 0x0                            ; 005922b0
    PUSH ESI                            ; 005922b2
    CALL crt_string.c_splitpath_FUN_005ff178 ; 005922b3
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 005922b8
    LEA EAX,[ESP + 0x9ab8]              ; 005922bb
    PUSH EAX                            ; 005922c2
    PUSH EDI                            ; 005922c3
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005922c4
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005922c9
    TEST EAX,EAX                        ; 005922cc
    JNZ 0x00592351                      ; 005922ce
        ;   XREF to: 00592351 (CONDITIONAL_JUMP)  ; LAB_00592351
    MOV EAX,dword ptr [EBP + 0x14]      ; 005922d4
        ;   Label: LAB_005922d4
    MOV ESI,dword ptr [EAX + 0xbc]      ; 005922d7
    CMP EBX,ESI                         ; 005922dd
    JL 0x00592335                       ; 005922df
        ;   XREF to: 00592335 (CONDITIONAL_JUMP)  ; LAB_00592335
    CMP ESI,0x50                        ; 005922e1
    JL 0x00592309                       ; 005922e4
        ;   XREF to: 00592309 (CONDITIONAL_JUMP)  ; LAB_00592309
    MOV ECX,0x64be20                    ; 005922e6 | = "..\\core\\skeledit.cpp"
    MOV ESI,0xf5d                       ; 005922eb
    PUSH 0x64be35                       ; 005922f0 | = "Too many model textures!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005922f5 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005922fb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00592301
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00592306
    MOV EAX,dword ptr [EBP + 0x14]      ; 00592309
        ;   Label: LAB_00592309
    PUSH EDI                            ; 0059230c
    IMUL EAX,dword ptr [EAX + 0xbc],0x48 ; 0059230d
    ADD EAX,dword ptr [ESP + 0xa158]    ; 00592314
    PUSH 0x64be4e                       ; 0059231b | = "%s.raw"
    ADD EAX,0x8                         ; 00592320
    PUSH EAX                            ; 00592323
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00592324
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00592329
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059232c
    INC dword ptr [EAX + 0xbc]          ; 0059232f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00592335
        ;   Label: LAB_00592335
    MOV EAX,dword ptr [EBP + 0x14]      ; 00592338
    MOV ESI,dword ptr [EDX + 0x68]      ; 0059233b
    MOV EAX,dword ptr [EAX + 0x54]      ; 0059233e
    MOV EDX,dword ptr [EDX + 0x90]      ; 00592341
    ADD EAX,ESI                         ; 00592347
    MOV dword ptr [EDX + EAX*0x4],EBX   ; 00592349
    JMP 0x0059206e                      ; 0059234c
        ;   XREF to: 0059206e (UNCONDITIONAL_JUMP)  ; LAB_0059206e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00592351
        ;   Label: LAB_00592351
    INC EBX                             ; 00592354
    MOV ECX,dword ptr [EAX + 0xbc]      ; 00592355
    ADD ESI,0x48                        ; 0059235b
    CMP EBX,ECX                         ; 0059235e
    JL 0x005922a4                       ; 00592360
        ;   XREF to: 005922a4 (CONDITIONAL_JUMP)  ; LAB_005922a4
    JMP 0x005922d4                      ; 00592366
        ;   XREF to: 005922d4 (UNCONDITIONAL_JUMP)  ; LAB_005922d4
    PUSH 0x64be55                       ; 0059236b | = "Can't find good match for capped face..."
        ;   Label: LAB_0059236b
    PUSH 0x3670650                      ; 00592370 | g_SkeleditStatusMessage
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00592375
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0059237a
    JMP 0x0058f8e7                      ; 0059237d
        ;   XREF to: 0058f8e7 (UNCONDITIONAL_JUMP)  ; LAB_0058f8e7
    XOR EAX,EAX                         ; 00592382
        ;   Label: LAB_00592382
    JMP 0x00592187                      ; 00592384
        ;   XREF to: 00592187 (UNCONDITIONAL_JUMP)  ; LAB_00592187
    XOR EDX,EDX                         ; 00592389
        ;   Label: LAB_00592389
    JMP 0x0059219c                      ; 0059238b
        ;   XREF to: 0059219c (UNCONDITIONAL_JUMP)  ; LAB_0059219c
    MOV EDX,dword ptr [ESP + 0xa1bc]    ; 00592390
        ;   Label: LAB_00592390
    CMP EDX,dword ptr [ESI + 0x8]       ; 00592397
    JZ 0x0059220d                       ; 0059239a
        ;   XREF to: 0059220d (CONDITIONAL_JUMP)  ; LAB_0059220d
    CMP dword ptr [ESI + 0xc],0x0       ; 005923a0
    JGE 0x0059220d                      ; 005923a4
        ;   XREF to: 0059220d (CONDITIONAL_JUMP)  ; LAB_0059220d
    XOR EBX,EBX                         ; 005923aa
    MOV EDI,dword ptr [ESP + 0xa144]    ; 005923ac
    MOV dword ptr [ESP + 0xa15c],EBX    ; 005923b3
    ADD EDI,0x24                        ; 005923ba
    MOV ECX,dword ptr [ESP + 0xa15c]    ; 005923bd
        ;   Label: LAB_005923bd
    MOV EBX,dword ptr [ESP + 0xa144]    ; 005923c4
    XOR EAX,EAX                         ; 005923cb
    ADD ECX,0x6                         ; 005923cd
    MOV dword ptr [ESP + 0xa160],EAX    ; 005923d0
    FLD float ptr [ESP + 0xa160]        ; 005923d7
    IMUL EDX,dword ptr [EBX + 0x18],0xc ; 005923de
        ;   Label: LAB_005923de
    ADD EDX,dword ptr [ESP + 0xa070]    ; 005923e2
    MOV EAX,dword ptr [EDX]             ; 005923e9
    MOV dword ptr [ESP + 0x9fb0],EAX    ; 005923eb
    LEA EAX,[EDX + 0x4]                 ; 005923f2
    MOV EAX,dword ptr [EAX]             ; 005923f5
    MOV dword ptr [ESP + 0x9fb4],EAX    ; 005923f7
    LEA EAX,[EDX + 0x8]                 ; 005923fe
    MOV dword ptr [ESP + 0xa1e0],0x3    ; 00592401
    MOV EAX,dword ptr [EAX]             ; 0059240c
    MOV EDX,ECX                         ; 0059240e
    MOV dword ptr [ESP + 0x9fb8],EAX    ; 00592410
    SAR EDX,0x1f                        ; 00592417
    MOV EAX,ECX                         ; 0059241a
    IDIV dword ptr [ESP + 0xa1e0]       ; 0059241c
    IMUL EAX,EDX,0xc                    ; 00592423
    IMUL EDX,dword ptr [ESI + EAX*0x1 + 0x18],0xc ; 00592426
    ADD EDX,dword ptr [ESP + 0xa070]    ; 0059242b
    MOV EAX,dword ptr [EDX]             ; 00592432
    FLD float ptr [ESP + 0x9fb0]        ; 00592434
    MOV dword ptr [ESP + 0xa04c],EAX    ; 0059243b
    LEA EAX,[EDX + 0x4]                 ; 00592442
    FLD float ptr [ESP + 0x9fb4]        ; 00592445
    MOV EAX,dword ptr [EAX]             ; 0059244c
    FXCH                                ; 0059244e
    FSUB float ptr [ESP + 0xa04c]       ; 00592450
    MOV dword ptr [ESP + 0xa050],EAX    ; 00592457
    LEA EAX,[EDX + 0x8]                 ; 0059245e
    FXCH                                ; 00592461
    FSUB float ptr [ESP + 0xa050]       ; 00592463
    MOV EAX,dword ptr [EAX]             ; 0059246a
    FST float ptr [ESP + 0x9f3c]        ; 0059246c
    FMUL float ptr [ESP + 0x9f3c]       ; 00592473
    FXCH                                ; 0059247a
    FST float ptr [ESP + 0x9f38]        ; 0059247c
    FMUL float ptr [ESP + 0x9f38]       ; 00592483
    MOV dword ptr [ESP + 0xa054],EAX    ; 0059248a
    FLD float ptr [ESP + 0x9fb8]        ; 00592491
    FSUB float ptr [ESP + 0xa054]       ; 00592498
    FXCH                                ; 0059249f
    FADDP ST2,ST0                       ; 005924a1
    FST float ptr [ESP + 0x9f40]        ; 005924a3
    FMUL float ptr [ESP + 0x9f40]       ; 005924aa
    ADD EBX,0xc                         ; 005924b1
    FADDP                               ; 005924b4
    DEC ECX                             ; 005924b6
    FADDP                               ; 005924b7
    CMP EBX,EDI                         ; 005924b9
    JNZ 0x005923de                      ; 005924bb
        ;   XREF to: 005923de (CONDITIONAL_JUMP)  ; LAB_005923de
    FST float ptr [ESP + 0xa160]        ; 005924c1
    FCOMP float ptr [ESP + 0xa1dc]      ; 005924c8
    FNSTSW AX                           ; 005924cf
    SAHF                                ; 005924d1
    JNC 0x005924ec                      ; 005924d2
        ;   XREF to: 005924ec (CONDITIONAL_JUMP)  ; LAB_005924ec
    MOV EAX,dword ptr [ESI + 0x8]       ; 005924d4
    MOV dword ptr [ESP + 0xa14c],EAX    ; 005924d7
    MOV EAX,dword ptr [ESP + 0xa160]    ; 005924de
    MOV dword ptr [ESP + 0xa1dc],EAX    ; 005924e5
    MOV EDX,dword ptr [ESP + 0xa15c]    ; 005924ec
        ;   Label: LAB_005924ec
    INC EDX                             ; 005924f3
    MOV dword ptr [ESP + 0xa15c],EDX    ; 005924f4
    CMP EDX,0x3                         ; 005924fb
    JGE 0x0059220d                      ; 005924fe
        ;   XREF to: 0059220d (CONDITIONAL_JUMP)  ; LAB_0059220d
    JMP 0x005923bd                      ; 00592504
        ;   XREF to: 005923bd (UNCONDITIONAL_JUMP)  ; LAB_005923bd
    PUSH 0x64beca                       ; 00592509 | = "Can't find opposing part for capped f..."
        ;   Label: LAB_00592509
    PUSH 0x3670650                      ; 0059250e | g_SkeleditStatusMessage
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00592513
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00592518
    JMP 0x0058f8e7                      ; 0059251b
        ;   XREF to: 0058f8e7 (UNCONDITIONAL_JUMP)  ; LAB_0058f8e7

