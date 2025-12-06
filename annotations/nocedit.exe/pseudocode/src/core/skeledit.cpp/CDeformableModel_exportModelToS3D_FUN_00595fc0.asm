; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0(CDeformableModel * this_ptr, char * output_filename, int lod_level, CMatrix3x4f * bone_matrices)
;
; Parameters:
; CDeformableModel * Stack[0x8]:4   this_ptr
; char *           Stack[0xc]:4   output_filename
; int              Stack[0x10]:4   lod_level
; CMatrix3x4f *    Stack[0x14]:4   bone_matrices
; Local Variables:
; undefined8       Stack[-0x378]:8  local_378
; undefined8       Stack[-0x370]:8  local_370
; undefined8       Stack[-0x364]:8  local_364
; undefined8       Stack[-0x358]:8  local_358
; undefined8       Stack[-0x350]:8  local_350
; undefined8       Stack[-0x348]:8  local_348
; undefined1       Stack[-0x340]:1  local_340
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xb8]:4  local_b8
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
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0 at 00598f06
;
; Referenced Globals:
;   TerminatedCString s_core_skeledit_cpp_0064d61a
;   TerminatedCString s_wt_0064d62f
;   TerminatedCString s_Can_t_create_s_0064d632
;   TerminatedCString s_core_skeledit_cpp_0064d642
;   TerminatedCString s_core_skeledit_cpp_0064d657
;   TerminatedCString s_Out_of_memory_0064d66c
;   TerminatedCString s_Export_capped_faces_0064d67a
;   TerminatedCString s_g_g_g_0064d68f
;   TerminatedCString s_d_d_g_g_d_g_g_d_g_g_0064d698
;   TerminatedCString s_core_skeledit_cpp_0064d6b9
;   TerminatedCString s_Hell_froze_0064d6ce
;   TerminatedCString s_d_d_g_g_d_g_g_d_g_g_0064d6d9
;   TerminatedCString s_core_skeledit_cpp_0064d6fa
;   TerminatedCString s_Hell_froze_0064d70f
;   TerminatedCString s_core_skeledit_cpp_0064d71a
;   ... and 22 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_memset_FUN_005fde40
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
;   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH 0x38c                          ; 00595fc0
        ;   Label: core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00595fc5 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 00595fca
    PUSH ESI                            ; 00595fcb
    PUSH EDI                            ; 00595fcc
    PUSH EBP                            ; 00595fcd
    MOV EBP,ESP                         ; 00595fce
    SUB ESP,0x330                       ; 00595fd0
    SUB EBP,0x72                        ; 00595fd6
    MOV EBX,dword ptr [EBP + 0x8a]      ; 00595fd9
    PUSH 0x155d                         ; 00595fdf
    PUSH 0x64d61a                       ; 00595fe4 | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064d61a = ..\core\skeledit.cpp
    PUSH 0x64d62f                       ; 00595fe9 | = "wt" | s_wt_0064d62f = wt
    PUSH 0x0                            ; 00595fee
    PUSH EBX                            ; 00595ff0
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00595ff1 | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00595ff6
    MOV dword ptr [EBP + 0x12],EAX      ; 00595ff9
    TEST EAX,EAX                        ; 00595ffc
    JZ 0x005963d8                       ; 00595ffe | LAB_005963d8
        ;   XREF to: 005963d8 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00596004
    MOV EDX,dword ptr [EBP + 0x86]      ; 0059600a
    SHL EAX,0x2                         ; 00596010
    ADD EAX,EDX                         ; 00596013
    PUSH 0x1565                         ; 00596015
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0059601a
    PUSH 0x64d642                       ; 0059601d | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064d642 = ..\core\skeledit.cpp
    SHL EAX,0x2                         ; 00596022
    PUSH EAX                            ; 00596025
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00596026 | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0059602b
    MOV EBX,EAX                         ; 0059602e
    TEST EAX,EAX                        ; 00596030
    JNZ 0x00596057                      ; 00596032 | LAB_00596057
        ;   XREF to: 00596057 (CONDITIONAL_JUMP)
    MOV ECX,0x64d657                    ; 00596034 | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064d657 = ..\core\skeledit.cpp
    MOV ESI,0x1566                      ; 00596039
    PUSH 0x64d66c                       ; 0059603e | = "Out of memory" | s_Out_of_memory_0064d66c = Out of memory
    MOV dword ptr [0x02f0ca48],ECX      ; 00596043 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00596049 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059604f | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00596054
    PUSH 0x64d67a                       ; 00596057 | = "Export capped faces?" | s_Export_capped_faces_0064d67a = Export capped faces?
        ;   Label: LAB_00596057
    MOV EDI,dword ptr [0x00678a60]      ; 0059605c | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 00596062 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 00596063 | int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00596068
    MOV dword ptr [EBP + -0x12],EAX     ; 0059606b
    LEA EAX,[EBP + -0x36]               ; 0059606e
    PUSH EAX                            ; 00596071
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 00596072 | CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00596077
    LEA EAX,[EBP + -0x46]               ; 0059607a
    PUSH EAX                            ; 0059607d
    MOV EDI,dword ptr [EBP + 0x8e]      ; 0059607e
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 00596084 | CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
    XOR EAX,EAX                         ; 00596089
    SHL EDI,0x2                         ; 0059608b
    MOV dword ptr [EBP + 0x46],EAX      ; 0059608e
    MOV EAX,dword ptr [EBP + 0x86]      ; 00596091
    ADD EAX,EDI                         ; 00596097
    MOV EDX,dword ptr [EAX + 0x54]      ; 00596099
    MOV dword ptr [EBP + 0x42],EDX      ; 0059609c
    XOR EDX,EDX                         ; 0059609f
    MOV dword ptr [EBP + -0x2],EDX      ; 005960a1
    MOV EDX,dword ptr [EBP + 0x86]      ; 005960a4
    MOV ECX,dword ptr [EDX + 0x7140]    ; 005960aa
    ADD ESP,0x4                         ; 005960b0
    TEST ECX,ECX                        ; 005960b3
    JLE 0x005965cd                      ; 005960b5 | LAB_005965cd
        ;   XREF to: 005965cd (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + 0x32],EDI      ; 005960bb
    MOV dword ptr [EBP + 0x2a],EAX      ; 005960be
    MOV ESI,EAX                         ; 005960c1
    MOV dword ptr [EBP + 0x6a],EAX      ; 005960c3
    MOV dword ptr [EBP + -0x16],EAX     ; 005960c6
    MOV dword ptr [EBP + 0x6],EAX       ; 005960c9
    MOV dword ptr [EBP + 0xe],EAX       ; 005960cc
    MOV dword ptr [EBP + 0x2],EDX       ; 005960cf
    XOR ECX,ECX                         ; 005960d2
    MOV dword ptr [EBP + 0x2e],EDI      ; 005960d4
    MOV dword ptr [EBP + 0xa],ECX       ; 005960d7
    MOV EAX,dword ptr [EBP + -0x16]     ; 005960da
        ;   Label: LAB_005960da
    MOV EAX,dword ptr [EAX + 0x2c]      ; 005960dd
    SHL EAX,0x2                         ; 005960e0
    PUSH EAX                            ; 005960e3
    PUSH 0x0                            ; 005960e4
    PUSH EBX                            ; 005960e6
    CALL crt_memory.c_memset_FUN_005fde40 ; 005960e7 | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x46]      ; 005960ec
    MOV dword ptr [EBP + 0x3e],EAX      ; 005960ef
    MOV EAX,dword ptr [EBP + 0x6]       ; 005960f2
    MOV EDX,dword ptr [EBP + 0x46]      ; 005960f5
    MOV dword ptr [EBP + 0x1a],EAX      ; 005960f8
    IMUL EAX,EDX,0x12                   ; 005960fb
    XOR EDI,EDI                         ; 005960fe
    MOV dword ptr [EBP + 0x5e],EAX      ; 00596100
    MOV EAX,dword ptr [EBP + 0x6]       ; 00596103
    MOV dword ptr [EBP + 0x52],EDI      ; 00596106
    MOV ECX,dword ptr [EAX + 0x7164]    ; 00596109
    ADD ESP,0xc                         ; 0059610f
    TEST ECX,ECX                        ; 00596112
    JLE 0x00596162                      ; 00596114 | LAB_00596162
        ;   XREF to: 00596162 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBP + 0x5e]      ; 00596116
        ;   Label: LAB_00596116
    XOR EAX,EAX                         ; 00596119
    MOV EDX,dword ptr [EBP + 0x6a]      ; 0059611b
        ;   Label: LAB_0059611b
    MOV EDX,dword ptr [EDX + 0x7c]      ; 0059611e
    ADD EDX,ECX                         ; 00596121
    MOV DX,word ptr [EDX + EAX*0x1]     ; 00596123
    AND EDX,0xffff                      ; 00596127
    ADD EAX,0x2                         ; 0059612d
    MOV dword ptr [EBX + EDX*0x4],0x1   ; 00596130
    CMP EAX,0x6                         ; 00596137
    JNZ 0x0059611b                      ; 0059613a | LAB_0059611b
        ;   XREF to: 0059611b (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x5e]      ; 0059613c
    MOV EAX,dword ptr [EBP + 0x3e]      ; 0059613f
    MOV EDX,dword ptr [EBP + 0x52]      ; 00596142
    INC EAX                             ; 00596145
    INC EDX                             ; 00596146
    MOV dword ptr [EBP + 0x3e],EAX      ; 00596147
    MOV dword ptr [EBP + 0x52],EDX      ; 0059614a
    MOV EAX,EDX                         ; 0059614d
    MOV EDX,dword ptr [EBP + 0x1a]      ; 0059614f
    ADD EDI,0x12                        ; 00596152
    MOV ECX,dword ptr [EDX + 0x7164]    ; 00596155
    MOV dword ptr [EBP + 0x5e],EDI      ; 0059615b
    CMP EAX,ECX                         ; 0059615e
    JL 0x00596116                       ; 00596160 | LAB_00596116
        ;   XREF to: 00596116 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x42]      ; 00596162
        ;   Label: LAB_00596162
    MOV EDI,dword ptr [EBP + -0x12]     ; 00596165
    MOV dword ptr [EBP + 0x3a],EAX      ; 00596168
    TEST EDI,EDI                        ; 0059616b
    JZ 0x005961d8                       ; 0059616d | LAB_005961d8
        ;   XREF to: 005961d8 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0059616f
    MOV dword ptr [EBP + 0x62],EAX      ; 00596171
    MOV EAX,dword ptr [EBP + 0xe]       ; 00596174
    MOV EDX,dword ptr [EBP + 0x42]      ; 00596177
    MOV dword ptr [EBP + 0x26],EAX      ; 0059617a
    IMUL EAX,EDX,0x12                   ; 0059617d
    MOV dword ptr [EBP + 0x4e],EAX      ; 00596180
    MOV EAX,dword ptr [EBP + 0xe]       ; 00596183
    CMP dword ptr [EAX + 0x7178],0x0    ; 00596186
    JLE 0x005961d8                      ; 0059618d | LAB_005961d8
        ;   XREF to: 005961d8 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBP + 0x4e]      ; 0059618f
        ;   Label: LAB_0059618f
    XOR EAX,EAX                         ; 00596192
    MOV EDX,dword ptr [ESI + 0x7c]      ; 00596194
        ;   Label: LAB_00596194
    ADD EDX,ECX                         ; 00596197
    MOV DX,word ptr [EDX + EAX*0x1]     ; 00596199
    AND EDX,0xffff                      ; 0059619d
    ADD EAX,0x2                         ; 005961a3
    MOV dword ptr [EBX + EDX*0x4],0x1   ; 005961a6
    CMP EAX,0x6                         ; 005961ad
    JNZ 0x00596194                      ; 005961b0 | LAB_00596194
        ;   XREF to: 00596194 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x4e]      ; 005961b2
    MOV EAX,dword ptr [EBP + 0x3a]      ; 005961b5
    MOV EDX,dword ptr [EBP + 0x62]      ; 005961b8
    INC EAX                             ; 005961bb
    INC EDX                             ; 005961bc
    MOV dword ptr [EBP + 0x3a],EAX      ; 005961bd
    MOV dword ptr [EBP + 0x62],EDX      ; 005961c0
    MOV EAX,EDX                         ; 005961c3
    MOV EDX,dword ptr [EBP + 0x26]      ; 005961c5
    ADD EDI,0x12                        ; 005961c8
    MOV ECX,dword ptr [EDX + 0x7178]    ; 005961cb
    MOV dword ptr [EBP + 0x4e],EDI      ; 005961d1
    CMP EAX,ECX                         ; 005961d4
    JL 0x0059618f                       ; 005961d6 | LAB_0059618f
        ;   XREF to: 0059618f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0xa]       ; 005961d8
        ;   Label: LAB_005961d8
    XOR EDI,EDI                         ; 005961db
    MOV dword ptr [EAX + EBP*0x1 + 0xffffff42],EDI ; 005961dd
    MOV EAX,dword ptr [EBP + 0x2a]      ; 005961e4
    MOV EDX,dword ptr [EAX + 0x2c]      ; 005961e7
    MOV dword ptr [EBP + 0x66],EDI      ; 005961ea
    TEST EDX,EDX                        ; 005961ed
    JLE 0x0059629e                      ; 005961ef | LAB_0059629e
        ;   XREF to: 0059629e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0xa]       ; 005961f5
    MOV EDI,EBX                         ; 005961f8
    MOV dword ptr [EBP + 0x36],EAX      ; 005961fa
    CMP dword ptr [EDI],0x0             ; 005961fd
        ;   Label: LAB_005961fd
    JZ 0x005963f5                       ; 00596200 | LAB_005963f5
        ;   XREF to: 005963f5 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x36]      ; 00596206
    MOV EDX,dword ptr [EAX + EBP*0x1 + 0xffffff42] ; 00596209
    INC EDX                             ; 00596210
    MOV ECX,dword ptr [EBP + 0x92]      ; 00596211
    MOV dword ptr [EAX + EBP*0x1 + 0xffffff42],EDX ; 00596217
    MOV EAX,dword ptr [EBP + -0x36]     ; 0059621e
    PUSH ECX                            ; 00596221
    MOV dword ptr [EDI],EAX             ; 00596222
    MOV EAX,dword ptr [EBP + 0x66]      ; 00596224
    PUSH EAX                            ; 00596227
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00596228
    PUSH EDX                            ; 0059622e
    LEA EAX,[EBP + -0x26]               ; 0059622f
    PUSH EAX                            ; 00596232
    MOV ECX,dword ptr [EBP + 0x86]      ; 00596233
    PUSH ECX                            ; 00596239
    CALL core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00 ; 0059623a | CVector3f * core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00(CDeformableModel * this_ptr, CVector3f * output_pos, int lod_index, int vertex_index, ...)
        ;   XREF to: 0059aa00 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0059623f
    SUB ESP,0x8                         ; 00596242
    FLD float ptr [EBP + -0x1e]         ; 00596245
    FSTP double ptr [ESP]               ; 00596248
    SUB ESP,0x8                         ; 0059624b
    FLD float ptr [EBP + -0x22]         ; 0059624e
    FSTP double ptr [ESP]               ; 00596251
    SUB ESP,0x8                         ; 00596254
    FLD float ptr [EBP + -0x26]         ; 00596257
    FSTP double ptr [ESP]               ; 0059625a
    PUSH 0x64d68f                       ; 0059625d | = "%g,%g,%g" | s_g_g_g_0064d68f = %g,%g,%g
    LEA EAX,[EBP + 0xfffffd42]          ; 00596262
    PUSH EAX                            ; 00596268
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00596269 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x20                        ; 0059626e
    LEA EAX,[EBP + 0xfffffd42]          ; 00596271
    PUSH EAX                            ; 00596277
    LEA EAX,[EBP + -0x36]               ; 00596278
    PUSH EAX                            ; 0059627b
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0059627c | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00596281
    MOV ECX,dword ptr [EBP + 0x66]      ; 00596284
        ;   Label: LAB_00596284
    INC ECX                             ; 00596287
    MOV EDX,dword ptr [EBP + 0x2a]      ; 00596288
    MOV dword ptr [EBP + 0x66],ECX      ; 0059628b
    MOV EAX,ECX                         ; 0059628e
    MOV ECX,dword ptr [EDX + 0x2c]      ; 00596290
    ADD EDI,0x4                         ; 00596293
    CMP EAX,ECX                         ; 00596296
    JL 0x005961fd                       ; 00596298 | LAB_005961fd
        ;   XREF to: 005961fd (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x2]       ; 0059629e
        ;   Label: LAB_0059629e
    MOV dword ptr [EBP + 0x22],EAX      ; 005962a1
    MOV EAX,dword ptr [EBP + 0x46]      ; 005962a4
    SHL EAX,0x2                         ; 005962a7
    MOV EDX,dword ptr [EBP + 0x46]      ; 005962aa
    MOV dword ptr [EBP + 0x5a],EAX      ; 005962ad
    IMUL EAX,EDX,0x12                   ; 005962b0
    XOR EDI,EDI                         ; 005962b3
    MOV dword ptr [EBP + 0x56],EAX      ; 005962b5
    MOV EAX,dword ptr [EBP + 0x22]      ; 005962b8
        ;   Label: LAB_005962b8
    MOV EDX,dword ptr [EBP + 0x32]      ; 005962bb
    ADD EAX,EDX                         ; 005962be
    CMP EDI,dword ptr [EAX + 0x7164]    ; 005962c0
    JGE 0x00596400                      ; 005962c6 | LAB_00596400
        ;   XREF to: 00596400 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBP + 0x86]      ; 005962cc
    ADD ECX,EDX                         ; 005962d2
    MOV EAX,dword ptr [EBP + 0x56]      ; 005962d4
    MOV EDX,dword ptr [ECX + 0x7c]      ; 005962d7
    ADD EDX,EAX                         ; 005962da
    XOR EAX,EAX                         ; 005962dc
    MOV AX,word ptr [EDX + 0x10]        ; 005962de
    MOV dword ptr [EBP + 0x6e],EAX      ; 005962e2
    FLD double ptr [0x0064d8e2]         ; 005962e5 | double DOUBLE_0064d8e2
    FILD dword ptr [EBP + 0x6e]         ; 005962eb
    FMUL ST1                            ; 005962ee
    SUB ESP,0x8                         ; 005962f0
    XOR EAX,EAX                         ; 005962f3
    FSTP double ptr [ESP]               ; 005962f5
    MOV AX,word ptr [EDX + 0xa]         ; 005962f8
    MOV dword ptr [EBP + 0x6e],EAX      ; 005962fc
    FILD dword ptr [EBP + 0x6e]         ; 005962ff
    FMUL ST1                            ; 00596302
    SUB ESP,0x8                         ; 00596304
    XOR EAX,EAX                         ; 00596307
    FSTP double ptr [ESP]               ; 00596309
    MOV AX,word ptr [EDX + 0x4]         ; 0059630c
    SHL EAX,0x2                         ; 00596310
    ADD EAX,EBX                         ; 00596313
    PUSH dword ptr [EAX]                ; 00596315
    XOR EAX,EAX                         ; 00596317
    MOV AX,word ptr [EDX + 0xe]         ; 00596319
    MOV dword ptr [EBP + 0x6e],EAX      ; 0059631d
    FILD dword ptr [EBP + 0x6e]         ; 00596320
    FMUL ST1                            ; 00596323
    SUB ESP,0x8                         ; 00596325
    XOR EAX,EAX                         ; 00596328
    FSTP double ptr [ESP]               ; 0059632a
    MOV AX,word ptr [EDX + 0x8]         ; 0059632d
    MOV dword ptr [EBP + 0x6e],EAX      ; 00596331
    FILD dword ptr [EBP + 0x6e]         ; 00596334
    FMUL ST1                            ; 00596337
    SUB ESP,0x8                         ; 00596339
    XOR EAX,EAX                         ; 0059633c
    FSTP double ptr [ESP]               ; 0059633e
    MOV AX,word ptr [EDX + 0x2]         ; 00596341
    SHL EAX,0x2                         ; 00596345
    ADD EAX,EBX                         ; 00596348
    PUSH dword ptr [EAX]                ; 0059634a
    XOR EAX,EAX                         ; 0059634c
    MOV AX,word ptr [EDX + 0xc]         ; 0059634e
    MOV dword ptr [EBP + 0x6e],EAX      ; 00596352
    FILD dword ptr [EBP + 0x6e]         ; 00596355
    FMUL ST1                            ; 00596358
    SUB ESP,0x8                         ; 0059635a
    XOR EAX,EAX                         ; 0059635d
    FSTP double ptr [ESP]               ; 0059635f
    MOV AX,word ptr [EDX + 0x6]         ; 00596362
    MOV dword ptr [EBP + 0x6e],EAX      ; 00596366
    FILD dword ptr [EBP + 0x6e]         ; 00596369
    FMULP                               ; 0059636c
    SUB ESP,0x8                         ; 0059636e
    FSTP double ptr [ESP]               ; 00596371
    MOV DX,word ptr [EDX]               ; 00596374
    AND EDX,0xffff                      ; 00596377
    SHL EDX,0x2                         ; 0059637d
    LEA EAX,[EBX + EDX*0x1]             ; 00596380
    MOV EDX,dword ptr [EAX]             ; 00596383
    MOV EAX,dword ptr [ECX + 0x90]      ; 00596385
    ADD EAX,dword ptr [EBP + 0x5a]      ; 0059638b
    PUSH EDX                            ; 0059638e
    MOV EDX,dword ptr [EAX]             ; 0059638f
    PUSH EDX                            ; 00596391
    PUSH 0x64d698                       ; 00596392 | = "%d, %d,%g,%g, %d,%g,%g, %d,%g,%g" | s_d_d_g_g_d_g_g_d_g_g_0064d698 = %d, %d,%g,%g, %d,%g,%g, %d,%g,%g
    LEA EAX,[EBP + 0xfffffd42]          ; 00596397
    PUSH EAX                            ; 0059639d
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0059639e | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x48                        ; 005963a3
    LEA EAX,[EBP + 0xfffffd42]          ; 005963a6
    PUSH EAX                            ; 005963ac
    LEA EAX,[EBP + -0x46]               ; 005963ad
    PUSH EAX                            ; 005963b0
    INC EDI                             ; 005963b1
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005963b2 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBP + 0x5a]      ; 005963b7
    MOV EAX,dword ptr [EBP + 0x56]      ; 005963ba
    MOV EDX,dword ptr [EBP + 0x46]      ; 005963bd
    ADD ESP,0x8                         ; 005963c0
    ADD ECX,0x4                         ; 005963c3
    ADD EAX,0x12                        ; 005963c6
    INC EDX                             ; 005963c9
    MOV dword ptr [EBP + 0x5a],ECX      ; 005963ca
    MOV dword ptr [EBP + 0x56],EAX      ; 005963cd
    MOV dword ptr [EBP + 0x46],EDX      ; 005963d0
    JMP 0x005962b8                      ; 005963d3 | LAB_005962b8
        ;   XREF to: 005962b8 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 005963d8
        ;   Label: LAB_005963d8
    PUSH 0x64d632                       ; 005963d9 | = "Can't create %s" | s_Can_t_create_s_0064d632 = Can't create %s
    MOV EBX,dword ptr [0x00678a60]      ; 005963de | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 005963e4 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005963e5 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005963ea
    LEA ESP,[EBP + 0x72]                ; 005963ed
    POP EBP                             ; 005963f0
    POP EDI                             ; 005963f1
    POP ESI                             ; 005963f2
    POP EBX                             ; 005963f3
    RET                                 ; 005963f4
    MOV dword ptr [EDI],0xffffffff      ; 005963f5
        ;   Label: LAB_005963f5
    JMP 0x00596284                      ; 005963fb | LAB_00596284
        ;   XREF to: 00596284 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x46]      ; 00596400
        ;   Label: LAB_00596400
    CMP EAX,dword ptr [EBP + 0x3e]      ; 00596403
    JZ 0x0059642a                       ; 00596406 | LAB_0059642a
        ;   XREF to: 0059642a (CONDITIONAL_JUMP)
    MOV EAX,0x64d6b9                    ; 00596408 | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064d6b9 = ..\core\skeledit.cpp
    MOV EDX,0x15a8                      ; 0059640d
    PUSH 0x64d6ce                       ; 00596412 | = "Hell froze" | s_Hell_froze_0064d6ce = Hell froze
    MOV [0x02f0ca48],EAX                ; 00596417 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0059641c | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00596422 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00596427
    CMP dword ptr [EBP + -0x12],0x0     ; 0059642a
        ;   Label: LAB_0059642a
    JZ 0x0059658e                       ; 0059642e | LAB_0059658e
        ;   XREF to: 0059658e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x46]      ; 00596434
    SHL EAX,0x2                         ; 00596437
    MOV dword ptr [EBP + 0x16],EAX      ; 0059643a
    MOV EAX,dword ptr [EBP + 0x2]       ; 0059643d
    MOV EDX,dword ptr [EBP + 0x42]      ; 00596440
    MOV dword ptr [EBP + 0x1e],EAX      ; 00596443
    IMUL EAX,EDX,0x12                   ; 00596446
    XOR EDI,EDI                         ; 00596449
    MOV dword ptr [EBP + 0x4a],EAX      ; 0059644b
    MOV EAX,dword ptr [EBP + 0x1e]      ; 0059644e
        ;   Label: LAB_0059644e
    ADD EAX,dword ptr [EBP + 0x2e]      ; 00596451
    CMP EDI,dword ptr [EAX + 0x7178]    ; 00596454
    JGE 0x00596564                      ; 0059645a | LAB_00596564
        ;   XREF to: 00596564 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBP + 0x86]      ; 00596460
    ADD ECX,dword ptr [EBP + 0x2e]      ; 00596466
    MOV EAX,dword ptr [EBP + 0x4a]      ; 00596469
    MOV EDX,dword ptr [ECX + 0x7c]      ; 0059646c
    ADD EDX,EAX                         ; 0059646f
    XOR EAX,EAX                         ; 00596471
    MOV AX,word ptr [EDX + 0x10]        ; 00596473
    MOV dword ptr [EBP + 0x6e],EAX      ; 00596477
    FLD double ptr [0x0064d8e2]         ; 0059647a | double DOUBLE_0064d8e2
    FILD dword ptr [EBP + 0x6e]         ; 00596480
    FMUL ST1                            ; 00596483
    SUB ESP,0x8                         ; 00596485
    XOR EAX,EAX                         ; 00596488
    FSTP double ptr [ESP]               ; 0059648a
    MOV AX,word ptr [EDX + 0xa]         ; 0059648d
    MOV dword ptr [EBP + 0x6e],EAX      ; 00596491
    FILD dword ptr [EBP + 0x6e]         ; 00596494
    FMUL ST1                            ; 00596497
    SUB ESP,0x8                         ; 00596499
    XOR EAX,EAX                         ; 0059649c
    FSTP double ptr [ESP]               ; 0059649e
    MOV AX,word ptr [EDX + 0x4]         ; 005964a1
    SHL EAX,0x2                         ; 005964a5
    ADD EAX,EBX                         ; 005964a8
    PUSH dword ptr [EAX]                ; 005964aa
    XOR EAX,EAX                         ; 005964ac
    MOV AX,word ptr [EDX + 0xe]         ; 005964ae
    MOV dword ptr [EBP + 0x6e],EAX      ; 005964b2
    FILD dword ptr [EBP + 0x6e]         ; 005964b5
    FMUL ST1                            ; 005964b8
    SUB ESP,0x8                         ; 005964ba
    XOR EAX,EAX                         ; 005964bd
    FSTP double ptr [ESP]               ; 005964bf
    MOV AX,word ptr [EDX + 0x8]         ; 005964c2
    MOV dword ptr [EBP + 0x6e],EAX      ; 005964c6
    FILD dword ptr [EBP + 0x6e]         ; 005964c9
    FMUL ST1                            ; 005964cc
    SUB ESP,0x8                         ; 005964ce
    XOR EAX,EAX                         ; 005964d1
    FSTP double ptr [ESP]               ; 005964d3
    MOV AX,word ptr [EDX + 0x2]         ; 005964d6
    SHL EAX,0x2                         ; 005964da
    ADD EAX,EBX                         ; 005964dd
    PUSH dword ptr [EAX]                ; 005964df
    XOR EAX,EAX                         ; 005964e1
    MOV AX,word ptr [EDX + 0xc]         ; 005964e3
    MOV dword ptr [EBP + 0x6e],EAX      ; 005964e7
    FILD dword ptr [EBP + 0x6e]         ; 005964ea
    FMUL ST1                            ; 005964ed
    SUB ESP,0x8                         ; 005964ef
    XOR EAX,EAX                         ; 005964f2
    FSTP double ptr [ESP]               ; 005964f4
    MOV AX,word ptr [EDX + 0x6]         ; 005964f7
    MOV dword ptr [EBP + 0x6e],EAX      ; 005964fb
    FILD dword ptr [EBP + 0x6e]         ; 005964fe
    FMULP                               ; 00596501
    SUB ESP,0x8                         ; 00596503
    FSTP double ptr [ESP]               ; 00596506
    MOV DX,word ptr [EDX]               ; 00596509
    AND EDX,0xffff                      ; 0059650c
    SHL EDX,0x2                         ; 00596512
    LEA EAX,[EBX + EDX*0x1]             ; 00596515
    MOV EDX,dword ptr [EAX]             ; 00596518
    MOV EAX,dword ptr [ECX + 0x90]      ; 0059651a
    ADD EAX,dword ptr [EBP + 0x16]      ; 00596520
    PUSH EDX                            ; 00596523
    MOV EDX,dword ptr [EAX]             ; 00596524
    PUSH EDX                            ; 00596526
    PUSH 0x64d6d9                       ; 00596527 | = "%d, %d,%g,%g, %d,%g,%g, %d,%g,%g" | s_d_d_g_g_d_g_g_d_g_g_0064d6d9 = %d, %d,%g,%g, %d,%g,%g, %d,%g,%g
    LEA EAX,[EBP + 0xfffffd42]          ; 0059652c
    PUSH EAX                            ; 00596532
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00596533 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x48                        ; 00596538
    LEA EAX,[EBP + 0xfffffd42]          ; 0059653b
    PUSH EAX                            ; 00596541
    LEA EAX,[EBP + -0x46]               ; 00596542
    PUSH EAX                            ; 00596545
    INC EDI                             ; 00596546
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00596547 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBP + 0x4a]      ; 0059654c
    MOV EAX,dword ptr [EBP + 0x42]      ; 0059654f
    ADD ESP,0x8                         ; 00596552
    ADD ECX,0x12                        ; 00596555
    INC EAX                             ; 00596558
    MOV dword ptr [EBP + 0x4a],ECX      ; 00596559
    MOV dword ptr [EBP + 0x42],EAX      ; 0059655c
    JMP 0x0059644e                      ; 0059655f | LAB_0059644e
        ;   XREF to: 0059644e (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x42]      ; 00596564
        ;   Label: LAB_00596564
    CMP EAX,dword ptr [EBP + 0x3a]      ; 00596567
    JZ 0x0059658e                       ; 0059656a | LAB_0059658e
        ;   XREF to: 0059658e (CONDITIONAL_JUMP)
    MOV EDI,0x64d6fa                    ; 0059656c | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064d6fa = ..\core\skeledit.cpp
    MOV EAX,0x15b5                      ; 00596571
    PUSH 0x64d70f                       ; 00596576 | = "Hell froze" | s_Hell_froze_0064d70f = Hell froze
    MOV dword ptr [0x02f0ca48],EDI      ; 0059657b | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00596581 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00596586 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0059658b
    MOV EDI,dword ptr [EBP + 0x6]       ; 0059658e
        ;   Label: LAB_0059658e
    MOV EAX,dword ptr [EBP + 0xe]       ; 00596591
    MOV EDX,dword ptr [EBP + 0xa]       ; 00596594
    MOV ECX,dword ptr [EBP + 0x2]       ; 00596597
    ADD EDI,0x60                        ; 0059659a
    ADD EAX,0x60                        ; 0059659d
    ADD EDX,0x4                         ; 005965a0
    ADD ECX,0x60                        ; 005965a3
    MOV dword ptr [EBP + 0x6],EDI       ; 005965a6
    MOV dword ptr [EBP + 0xe],EAX       ; 005965a9
    MOV dword ptr [EBP + 0xa],EDX       ; 005965ac
    MOV EDI,dword ptr [EBP + -0x2]      ; 005965af
    MOV EDX,dword ptr [EBP + 0x86]      ; 005965b2
    MOV dword ptr [EBP + 0x2],ECX       ; 005965b8
    INC EDI                             ; 005965bb
    MOV ECX,dword ptr [EDX + 0x7140]    ; 005965bc
    MOV dword ptr [EBP + -0x2],EDI      ; 005965c2
    CMP EDI,ECX                         ; 005965c5
    JL 0x005960da                       ; 005965c7 | LAB_005960da
        ;   XREF to: 005960da (CONDITIONAL_JUMP)
    MOV ESI,0x64d71a                    ; 005965cd | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064d71a = ..\core\skeledit.cpp
        ;   Label: LAB_005965cd
    MOV EDI,0x15b9                      ; 005965d2
    PUSH EBX                            ; 005965d7
    MOV dword ptr [0x0067d20c],ESI      ; 005965d8 | char * g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDI      ; 005965de | int g_CurrentDebugLine
    CALL crt_memory.c_free_FUN_005fe659 ; 005965e4 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005965e9
    PUSH 0x64d72f                       ; 005965ec | = "// S3D version\n" | s_S3D_version_0064d72f = // S3D version

    MOV EAX,dword ptr [EBP + 0x12]      ; 005965f1
    PUSH EAX                            ; 005965f4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005965f5 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005965fa
    PUSH 0x64d73f                       ; 005965fd | = "103\n" | s_s_103_0064d73f = 103

    MOV EDX,dword ptr [EBP + 0x12]      ; 00596602
    PUSH EDX                            ; 00596605
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00596606 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0059660b
    PUSH 0x64d744                       ; 0059660e | = "// numTextures,numTris,numVerts,numPa..." | s_numTextures_numTris_numV_0064d744 = // numTextures,numTris,numVerts,numParts,numFrames,numLights,numCameras

    MOV ECX,dword ptr [EBP + 0x12]      ; 00596613
    PUSH ECX                            ; 00596616
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00596617 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x86]      ; 0059661c
    ADD ESP,0x8                         ; 00596622
    MOV EBX,dword ptr [EAX + 0x7140]    ; 00596625
    PUSH EBX                            ; 0059662b
    MOV ESI,dword ptr [EBP + -0x36]     ; 0059662c
    PUSH ESI                            ; 0059662f
    MOV EDI,dword ptr [EBP + -0x46]     ; 00596630
    PUSH EDI                            ; 00596633
    MOV EDX,dword ptr [EAX + 0xbc]      ; 00596634
    PUSH EDX                            ; 0059663a
    PUSH 0x64d78d                       ; 0059663b | = "%d,%d,%d,%d,1,0,0\n" | s_d_d_d_d_1_0_0_0064d78d = %d,%d,%d,%d,1,0,0

    MOV ECX,dword ptr [EBP + 0x12]      ; 00596640
    PUSH ECX                            ; 00596643
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00596644 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00596649
    PUSH 0x64d7a0                       ; 0059664c | = "// partList: firstVert,numVerts,first..." | s_partList_firstVert_numVe_0064d7a0 = // partList: firstVert,numVerts,firstTri,numTris,"name"

    MOV EBX,dword ptr [EBP + 0x12]      ; 00596651
    XOR ESI,ESI                         ; 00596654
    PUSH EBX                            ; 00596656
    MOV dword ptr [EBP + -0x6],ESI      ; 00596657
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0059665a | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x86]      ; 0059665f
    MOV dword ptr [EBP + -0xa],ESI      ; 00596665
    XOR EDI,EDI                         ; 00596668
    MOV EDX,dword ptr [EAX + 0x7140]    ; 0059666a
    ADD ESP,0x8                         ; 00596670
    TEST EDX,EDX                        ; 00596673
    JLE 0x00596710                      ; 00596675 | LAB_00596710
        ;   XREF to: 00596710 (CONDITIONAL_JUMP)
    ADD EAX,0x7144                      ; 0059667b
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00596680
    MOV dword ptr [EBP + -0xe],EAX      ; 00596686
    SHL EBX,0x2                         ; 00596689
    ADD EBX,dword ptr [EBP + 0x86]      ; 0059668c
    MOV ECX,dword ptr [EBP + -0xe]      ; 00596692
        ;   Label: LAB_00596692
    MOV EAX,dword ptr [EBX + 0x7164]    ; 00596695
    MOV EDX,dword ptr [EBX + 0x7178]    ; 0059669b
    PUSH ECX                            ; 005966a1
    ADD EAX,EDX                         ; 005966a2
    PUSH EAX                            ; 005966a4
    MOV EDX,dword ptr [EBP + -0xa]      ; 005966a5
    PUSH EDX                            ; 005966a8
    MOV ECX,dword ptr [ESI + EBP*0x1 + 0xffffff42] ; 005966a9
    PUSH ECX                            ; 005966b0
    MOV dword ptr [EBP + -0x1a],EAX     ; 005966b1
    MOV EAX,dword ptr [EBP + -0x6]      ; 005966b4
    PUSH EAX                            ; 005966b7
    PUSH 0x64d7d9                       ; 005966b8 | = "%d,%d,%d,%d,\"%s\"\n" | s_d_d_d_d_s_0064d7d9 = %d,%d,%d,%d,"%s"

    MOV EDX,dword ptr [EBP + 0x12]      ; 005966bd
    ADD ESI,0x4                         ; 005966c0
    PUSH EDX                            ; 005966c3
    ADD EBX,0x60                        ; 005966c4
    INC EDI                             ; 005966c7
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005966c8 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBP + -0x6]      ; 005966cd
    MOV EDX,dword ptr [EBP + -0xa]      ; 005966d0
    MOV EAX,dword ptr [ESI + EBP*0x1 + 0xffffff3e] ; 005966d3
    ADD ESP,0x1c                        ; 005966da
    ADD ECX,EAX                         ; 005966dd
    MOV EAX,dword ptr [EBP + -0x1a]     ; 005966df
    MOV dword ptr [EBP + -0x6],ECX      ; 005966e2
    MOV ECX,dword ptr [EBP + -0xe]      ; 005966e5
    ADD EDX,EAX                         ; 005966e8
    MOV EAX,dword ptr [EBP + 0x86]      ; 005966ea
    MOV dword ptr [EBP + -0xa],EDX      ; 005966f0
    ADD ECX,0x60                        ; 005966f3
    MOV EDX,dword ptr [EAX + 0x7140]    ; 005966f6
    MOV dword ptr [EBP + -0xe],ECX      ; 005966fc
    CMP EDI,EDX                         ; 005966ff
    JL 0x00596692                       ; 00596701 | LAB_00596692
        ;   XREF to: 00596692 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 00596703
    LEA EDX,[EDX]                       ; 00596709
    NOP                                 ; 0059670f
    PUSH 0x64d7eb                       ; 00596710 | = "// texture list: name\n" | s_texture_list_name_0064d7eb = // texture list: name

        ;   Label: LAB_00596710
    MOV ECX,dword ptr [EBP + 0x12]      ; 00596715
    PUSH ECX                            ; 00596718
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00596719 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x86]      ; 0059671e
    XOR ESI,ESI                         ; 00596724
    MOV EBX,dword ptr [EAX + 0xbc]      ; 00596726
    ADD ESP,0x8                         ; 0059672c
    TEST EBX,EBX                        ; 0059672f
    JLE 0x00596760                      ; 00596731 | LAB_00596760
        ;   XREF to: 00596760 (CONDITIONAL_JUMP)
    LEA EBX,[EAX + 0xc8]                ; 00596733
    PUSH EBX                            ; 00596739
        ;   Label: LAB_00596739
    PUSH 0x64d802                       ; 0059673a | = "%s\n" | s_s_0064d802 = %s

    MOV EDX,dword ptr [EBP + 0x12]      ; 0059673f
    PUSH EDX                            ; 00596742
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00596743 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x86]      ; 00596748
    INC ESI                             ; 0059674e
    ADD EBX,0x48                        ; 0059674f
    MOV ECX,dword ptr [EAX + 0xbc]      ; 00596752
    ADD ESP,0xc                         ; 00596758
    CMP ESI,ECX                         ; 0059675b
    JL 0x00596739                       ; 0059675d | LAB_00596739
        ;   XREF to: 00596739 (CONDITIONAL_JUMP)
    NOP                                 ; 0059675f
    PUSH 0x64d806                       ; 00596760 | = "// triList: materialIndex,vertices(in..." | s_triList_materialIndex_ve_0064d806 = // triList: materialIndex,vertices(index, texX, texY)

        ;   Label: LAB_00596760
    MOV EBX,dword ptr [EBP + 0x12]      ; 00596765
    PUSH EBX                            ; 00596768
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00596769 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [EBP + -0x46]     ; 0059676e
    ADD ESP,0x8                         ; 00596771
    XOR EBX,EBX                         ; 00596774
    TEST ESI,ESI                        ; 00596776
    JLE 0x005967b0                      ; 00596778 | LAB_005967b0
        ;   XREF to: 005967b0 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x12]      ; 0059677a
    PUSH EBX                            ; 0059677d
        ;   Label: LAB_0059677d
    LEA EAX,[EBP + -0x46]               ; 0059677e
    PUSH EAX                            ; 00596781
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00596782 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00596787
    PUSH EAX                            ; 0059678a
    PUSH 0x64d83d                       ; 0059678b | = "%s\n" | s_s_0064d83d = %s

    PUSH EDI                            ; 00596790
    INC EBX                             ; 00596791
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00596792 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + -0x46]     ; 00596797
    ADD ESP,0xc                         ; 0059679a
    CMP EBX,EAX                         ; 0059679d
    JL 0x0059677d                       ; 0059679f | LAB_0059677d
        ;   XREF to: 0059677d (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005967a1
    LEA EDX,[EDX]                       ; 005967a7
    LEA EAX,[EAX]                       ; 005967ad
    PUSH 0x64d841                       ; 005967b0 | = "// vertList: x,y,z\n" | s_vertList_x_y_z_0064d841 = // vertList: x,y,z

        ;   Label: LAB_005967b0
    MOV EDX,dword ptr [EBP + 0x12]      ; 005967b5
    PUSH EDX                            ; 005967b8
    XOR EBX,EBX                         ; 005967b9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005967bb | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBP + -0x36]     ; 005967c0
    ADD ESP,0x8                         ; 005967c3
    TEST ECX,ECX                        ; 005967c6
    JLE 0x00596800                      ; 005967c8 | LAB_00596800
        ;   XREF to: 00596800 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBP + 0x12]      ; 005967ca
    PUSH EBX                            ; 005967cd
        ;   Label: LAB_005967cd
    LEA EAX,[EBP + -0x36]               ; 005967ce
    PUSH EAX                            ; 005967d1
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 005967d2 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005967d7
    PUSH EAX                            ; 005967da
    PUSH 0x64d855                       ; 005967db | = "%s\n" | s_s_0064d855 = %s

    PUSH ESI                            ; 005967e0
    INC EBX                             ; 005967e1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005967e2 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [EBP + -0x36]     ; 005967e7
    ADD ESP,0xc                         ; 005967ea
    CMP EBX,EDI                         ; 005967ed
    JL 0x005967cd                       ; 005967ef | LAB_005967cd
        ;   XREF to: 005967cd (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005967f1
    LEA EDX,[EDX]                       ; 005967f7
    LEA EAX,[EAX]                       ; 005967fd
    PUSH 0x64d859                       ; 00596800 | = "// lightList: \"name\", type, x,y,z, ..." | s_lightList_name_type_x_y__0064d859 = // lightList: "name", type, x,y,z, r,g,b, (type-specific info)

        ;   Label: LAB_00596800
    MOV EAX,dword ptr [EBP + 0x12]      ; 00596805
    PUSH EAX                            ; 00596808
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00596809 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0059680e
    PUSH 0x64d899                       ; 00596811 | = "// cameraList: \"name\", x,y,z, p,b,h..." | s_cameraList_name_x_y_z_p__0064d899 = // cameraList: "name", x,y,z, p,b,h, fov(rad)

    MOV EDX,dword ptr [EBP + 0x12]      ; 00596816
    PUSH EDX                            ; 00596819
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0059681a | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0059681f
    PUSH 0x15ea                         ; 00596822
    PUSH 0x64d8c8                       ; 00596827 | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064d8c8 = ..\core\skeledit.cpp
    MOV ECX,dword ptr [EBP + 0x12]      ; 0059682c
    PUSH ECX                            ; 0059682f
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00596830 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00596835
    PUSH 0x0                            ; 00596838
    LEA EAX,[EBP + -0x46]               ; 0059683a
    PUSH EAX                            ; 0059683d
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 0059683e | CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint d1, uint d2)
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00596843
    PUSH 0x0                            ; 00596846
    LEA EAX,[EBP + -0x36]               ; 00596848
    PUSH EAX                            ; 0059684b
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 0059684c | CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint d1, uint d2)
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00596851
    LEA ESP,[EBP + 0x72]                ; 00596854
    POP EBP                             ; 00596857
    POP EDI                             ; 00596858
    POP ESI                             ; 00596859
    POP EBX                             ; 0059685a
    RET                                 ; 0059685b

