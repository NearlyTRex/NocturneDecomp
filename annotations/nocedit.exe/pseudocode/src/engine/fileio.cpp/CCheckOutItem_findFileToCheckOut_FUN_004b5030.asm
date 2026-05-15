; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_fileio_cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030(CCheckOutItem *this_ptr,char *file_pattern,char *output_filename_buffer)
;
; Parameters:
; CCheckOutItem *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   file_pattern
; char *           Stack[0xc]:4   output_filename_buffer
; Local Variables:
; CPickList        Stack[-0x86c]:936  local_86c
; char[400]        Stack[-0x4c4]:400  local_4c4
; CFileFinder      Stack[-0x334]:276  local_334
; char[260]        Stack[-0x220]:260  local_220
; char[256]        Stack[-0x11c]:256  local_11c
; CCheckOutList    Stack[-0x1c]:8  local_1c
; char[4]          Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004ba7e8
;
; Referenced Globals:
;   TerminatedCString s_s_00627529
;   TerminatedCString s_Checked_out_by_s_0062752d
;   TerminatedCString s_Select_file_to_check_out_0062753f
;   TerminatedCString s_You_already_have_s_check_00627558
;   TerminatedCString s_s_is_currently_checked_o_00627578
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   SVersionControlSession g_VersionControlSession
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c__stricmp_FUN_005fe7f0
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00481d70
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00481c30
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00481c50
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00481cf0
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00481c70
;   engine_dosio.cpp_ensureTrailingSlash_FUN_00481f80
;   engine_dosio.cpp_makePath_FUN_00481f50
;   engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
;   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
;   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
;   engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5030
        ;   Label: engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030
    PUSH ESI                            ; 004b5031
    PUSH EDI                            ; 004b5032
    PUSH EBP                            ; 004b5033
    SUB ESP,0x85c                       ; 004b5034
    MOV ESI,dword ptr [ESP + 0x874]     ; 004b503a
    MOV EBP,dword ptr [ESP + 0x878]     ; 004b5041
    CALL engine_fileio.cpp_establishUserIdentity_FUN_004b1c00 ; 004b5048
        ;   XREF to: 004b1c00 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_establishUserIdentity_FUN_004b1c00()
    TEST EAX,EAX                        ; 004b504d
    JNZ 0x004b5060                      ; 004b504f
        ;   XREF to: 004b5060 (CONDITIONAL_JUMP)  ; LAB_004b5060
    XOR ESI,ESI                         ; 004b5051
    MOV EAX,ESI                         ; 004b5053
    ADD ESP,0x85c                       ; 004b5055
    POP EBP                             ; 004b505b
    POP EDI                             ; 004b505c
    POP ESI                             ; 004b505d
    POP EBX                             ; 004b505e
    RET                                 ; 004b505f
    LEA EAX,[ESP + 0x850]               ; 004b5060
        ;   Label: LAB_004b5060
    XOR EDX,EDX                         ; 004b5067
    PUSH EAX                            ; 004b5069
    MOV dword ptr [ESP + 0x854],EDX     ; 004b506a
    MOV dword ptr [ESP + 0x858],EDX     ; 004b5071
    CALL engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 ; 004b5078
        ;   XREF to: 004b2890 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b507d
    TEST EAX,EAX                        ; 004b5080
    JZ 0x004b5286                       ; 004b5082
        ;   XREF to: 004b5286 (CONDITIONAL_JUMP)  ; LAB_004b5286
    LEA EAX,[ESP + 0x750]               ; 004b5088
    PUSH EAX                            ; 004b508f
    LEA EAX,[ESP + 0x85c]               ; 004b5090
    PUSH EAX                            ; 004b5097
    MOV EBX,dword ptr [ESP + 0x878]     ; 004b5098
    PUSH EBX                            ; 004b509f
    CALL engine_dosio.cpp_ensureTrailingSlash_FUN_00481f80 ; 004b50a0
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 004b50a5
    PUSH 0x0                            ; 004b50a8
    PUSH 0x0                            ; 004b50aa
    LEA EAX,[ESP + 0x758]               ; 004b50ac
    PUSH EAX                            ; 004b50b3
    LEA EAX,[ESP + 0x864]               ; 004b50b4
    PUSH EAX                            ; 004b50bb
    LEA EAX,[ESP + 0x65c]               ; 004b50bc
    PUSH EAX                            ; 004b50c3
    CALL engine_dosio.cpp_makePath_FUN_00481f50 ; 004b50c4
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004b50c9
    LEA EDI,[ESP + 0x64c]               ; 004b50cc
    PUSH EDI                            ; 004b50d3
    SUB ECX,ECX                         ; 004b50d4
    DEC ECX                             ; 004b50d6
    MOV AL,0x0                          ; 004b50d7
    SCASB.REPNE ES:EDI                  ; 004b50d9
    DEC EDI                             ; 004b50db
    MOV AL,byte ptr [ESI]               ; 004b50dc
        ;   Label: LAB_004b50dc
    MOV byte ptr [EDI],AL               ; 004b50de
    CMP AL,0x0                          ; 004b50e0
    JZ 0x004b50f4                       ; 004b50e2
        ;   XREF to: 004b50f4 (CONDITIONAL_JUMP)  ; LAB_004b50f4
    MOV AL,byte ptr [ESI + 0x1]         ; 004b50e4
    ADD ESI,0x2                         ; 004b50e7
    MOV byte ptr [EDI + 0x1],AL         ; 004b50ea
    ADD EDI,0x2                         ; 004b50ed
    CMP AL,0x0                          ; 004b50f0
    JNZ 0x004b50dc                      ; 004b50f2
        ;   XREF to: 004b50dc (CONDITIONAL_JUMP)  ; LAB_004b50dc
    POP EDI                             ; 004b50f4
        ;   Label: LAB_004b50f4
    MOV EAX,ESP                         ; 004b50f5
    PUSH EAX                            ; 004b50f7
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004b50f8
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b50fd
    PUSH 0x1                            ; 004b5100
    LEA EAX,[ESP + 0x4]                 ; 004b5102
    PUSH EAX                            ; 004b5106
    CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10 ; 004b5107
        ;   XREF to: 004a3e10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10(CPickList * this_ptr, int result_value)
    ADD ESP,0x8                         ; 004b510c
    LEA EAX,[ESP + 0x538]               ; 004b510f
    PUSH EAX                            ; 004b5116
    CALL engine_dosio.cpp_CFileFinder_ctor_FUN_00481c30 ; 004b5117
        ;   XREF to: 00481c30 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_ctor_FUN_00481c30(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004b511c
    LEA EAX,[ESP + 0x64c]               ; 004b511f
    PUSH EAX                            ; 004b5126
    LEA EAX,[ESP + 0x53c]               ; 004b5127
    PUSH EAX                            ; 004b512e
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00481c70 ; 004b512f
        ;   XREF to: 00481c70 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_openSearch_FUN_00481c70(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 004b5134
    CMP byte ptr [ESP + 0x538],0x0      ; 004b5137
    JZ 0x004b51dc                       ; 004b513f
        ;   XREF to: 004b51dc (CONDITIONAL_JUMP)  ; LAB_004b51dc
    LEA EAX,[ESP + 0x538]               ; 004b5145
        ;   Label: LAB_004b5145
    PUSH EAX                            ; 004b514c
    PUSH 0x627529                       ; 004b514d | = "%s\t"
    LEA EAX,[ESP + 0x3b0]               ; 004b5152
    PUSH EAX                            ; 004b5159
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b515a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    LEA EDX,[ESP + 0x3b4]               ; 004b515f
    ADD ESP,0xc                         ; 004b5166
    LEA EBX,[EDX + EAX*0x1]             ; 004b5169
    LEA EAX,[ESP + 0x538]               ; 004b516c
    PUSH EAX                            ; 004b5173
    LEA EAX,[ESP + 0x854]               ; 004b5174
    PUSH EAX                            ; 004b517b
    CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60 ; 004b517c
        ;   XREF to: 004b2e60 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004b5181
    TEST EAX,EAX                        ; 004b5184
    JL 0x004b51a9                       ; 004b5186
        ;   XREF to: 004b51a9 (CONDITIONAL_JUMP)  ; LAB_004b51a9
    IMUL EAX,EAX,0x168                  ; 004b5188
    ADD EAX,dword ptr [ESP + 0x854]     ; 004b518e
    ADD EAX,0x104                       ; 004b5195
    PUSH EAX                            ; 004b519a
    PUSH 0x62752d                       ; 004b519b | = "Checked out by %s"
    PUSH EBX                            ; 004b51a0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b51a1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b51a6
    LEA EAX,[ESP + 0x3a8]               ; 004b51a9
        ;   Label: LAB_004b51a9
    PUSH EAX                            ; 004b51b0
    LEA EAX,[ESP + 0x4]                 ; 004b51b1
    PUSH EAX                            ; 004b51b5
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b51b6
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b51bb
    LEA EAX,[ESP + 0x538]               ; 004b51be
    PUSH EAX                            ; 004b51c5
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_00481cf0 ; 004b51c6
        ;   XREF to: 00481cf0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_findNext_FUN_00481cf0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004b51cb
    CMP byte ptr [ESP + 0x538],0x0      ; 004b51ce
    JNZ 0x004b5145                      ; 004b51d6
        ;   XREF to: 004b5145 (CONDITIONAL_JUMP)  ; LAB_004b5145
    LEA EAX,[ESP + 0x538]               ; 004b51dc
        ;   Label: LAB_004b51dc
    PUSH EAX                            ; 004b51e3
    XOR ESI,ESI                         ; 004b51e4
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00481d70 ; 004b51e6
        ;   XREF to: 00481d70 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00481d70(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004b51eb
    XOR EDI,EDI                         ; 004b51ee
    PUSH EDI                            ; 004b51f0
        ;   Label: LAB_004b51f0
    PUSH ESI                            ; 004b51f1
    PUSH 0x62753f                       ; 004b51f2 | = "Select file to check out"
    LEA EAX,[ESP + 0xc]                 ; 004b51f7
    PUSH EAX                            ; 004b51fb
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004b51fc
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004b5201
    MOV ESI,EAX                         ; 004b5204
    TEST EAX,EAX                        ; 004b5206
    JL 0x004b52a5                       ; 004b5208
        ;   XREF to: 004b52a5 (CONDITIONAL_JUMP)  ; LAB_004b52a5
    PUSH EDI                            ; 004b520e
    PUSH EAX                            ; 004b520f
    PUSH EBP                            ; 004b5210
    LEA EAX,[ESP + 0xc]                 ; 004b5211
    PUSH EAX                            ; 004b5215
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 004b5216
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, char * output_buffer, int string_index, int field_number)
    ADD ESP,0x10                        ; 004b521b
    PUSH EBP                            ; 004b521e
    LEA EAX,[ESP + 0x854]               ; 004b521f
    PUSH EAX                            ; 004b5226
    CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60 ; 004b5227
        ;   XREF to: 004b2e60 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004b522c
    TEST EAX,EAX                        ; 004b522f
    JL 0x004b52e5                       ; 004b5231
        ;   XREF to: 004b52e5 (CONDITIONAL_JUMP)  ; LAB_004b52e5
    IMUL EBX,EAX,0x168                  ; 004b5237
    MOV EAX,dword ptr [ESP + 0x854]     ; 004b523d
    ADD EAX,EBX                         ; 004b5244
    PUSH 0x2d12bd0                      ; 004b5246 | g_VersionControlSession
    ADD EAX,0x104                       ; 004b524b
    PUSH EAX                            ; 004b5250
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b5251
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b5256
    MOV EDX,EAX                         ; 004b5259
    MOV EAX,dword ptr [ESP + 0x854]     ; 004b525b
    ADD EAX,EBX                         ; 004b5262
    TEST EDX,EDX                        ; 004b5264
    JNZ 0x004b5328                      ; 004b5266
        ;   XREF to: 004b5328 (CONDITIONAL_JUMP)  ; LAB_004b5328
    PUSH EAX                            ; 004b526c
    PUSH 0x627558                       ; 004b526d | = "You already have %s checked out"
    MOV EDX,dword ptr [0x00678a60]      ; 004b5272 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004b5278 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b5279
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b527e
    JMP 0x004b51f0                      ; 004b5281
        ;   XREF to: 004b51f0 (UNCONDITIONAL_JUMP)  ; LAB_004b51f0
    LEA EAX,[ESP + 0x850]               ; 004b5286
        ;   Label: LAB_004b5286
    PUSH EAX                            ; 004b528d
    XOR ESI,ESI                         ; 004b528e
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b5290
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b5295
    MOV EAX,ESI                         ; 004b5298
    ADD ESP,0x85c                       ; 004b529a
    POP EBP                             ; 004b52a0
    POP EDI                             ; 004b52a1
    POP ESI                             ; 004b52a2
    POP EBX                             ; 004b52a3
    RET                                 ; 004b52a4
    PUSH 0x0                            ; 004b52a5
        ;   Label: LAB_004b52a5
    XOR ESI,EAX                         ; 004b52a7
    LEA EAX,[ESP + 0x53c]               ; 004b52a9
    PUSH EAX                            ; 004b52b0
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00481c50 ; 004b52b1
        ;   XREF to: 00481c50 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00481c50(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b52b6
    PUSH 0x0                            ; 004b52b9
    LEA EAX,[ESP + 0x4]                 ; 004b52bb
    PUSH EAX                            ; 004b52bf
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b52c0
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b52c5
    LEA EAX,[ESP + 0x850]               ; 004b52c8
    PUSH EAX                            ; 004b52cf
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b52d0
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b52d5
    MOV EAX,ESI                         ; 004b52d8
    ADD ESP,0x85c                       ; 004b52da
    POP EBP                             ; 004b52e0
    POP EDI                             ; 004b52e1
    POP ESI                             ; 004b52e2
    POP EBX                             ; 004b52e3
    RET                                 ; 004b52e4
    PUSH 0x0                            ; 004b52e5
        ;   Label: LAB_004b52e5
    LEA EAX,[ESP + 0x53c]               ; 004b52e7
    PUSH EAX                            ; 004b52ee
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00481c50 ; 004b52ef
        ;   XREF to: 00481c50 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00481c50(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b52f4
    PUSH 0x0                            ; 004b52f7
    LEA EAX,[ESP + 0x4]                 ; 004b52f9
    PUSH EAX                            ; 004b52fd
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b52fe
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b5303
    LEA EAX,[ESP + 0x850]               ; 004b5306
    PUSH EAX                            ; 004b530d
    MOV ESI,0x1                         ; 004b530e
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b5313
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b5318
    MOV EAX,ESI                         ; 004b531b
    ADD ESP,0x85c                       ; 004b531d
    POP EBP                             ; 004b5323
    POP EDI                             ; 004b5324
    POP ESI                             ; 004b5325
    POP EBX                             ; 004b5326
    RET                                 ; 004b5327
    LEA EDX,[EAX + 0x104]               ; 004b5328
        ;   Label: LAB_004b5328
    PUSH EDX                            ; 004b532e
    PUSH EAX                            ; 004b532f
    PUSH 0x627578                       ; 004b5330 | = "%s is currently checked out by %s"
    MOV EAX,[0x00678a60]                ; 004b5335 | g_CEditorToolsPtr
    PUSH EAX                            ; 004b533a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b533b
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 004b5340
    JMP 0x004b51f0                      ; 004b5343
        ;   XREF to: 004b51f0 (UNCONDITIONAL_JUMP)  ; LAB_004b51f0

