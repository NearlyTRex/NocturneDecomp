; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, bool auto_select_flag)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_pattern
; char *           Stack[0xc]:4   directory
; char *           Stack[0x10]:4   target_filename
; bool             Stack[0x14]:1   auto_select_flag
; Local Variables:
; undefined4       Stack[-0x8bc]:4  local_8bc
; undefined1       Stack[-0x514]:1  local_514
; undefined1       Stack[-0x314]:1  local_314
; undefined1       Stack[-0x114]:1  local_114
;
; XREF[19]:
;   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 at 0041b2aa
;   core_cloth.cpp_FUN_0043ddf0 at 0043deec
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 004431a0
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047d69d
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bda51
;   core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930 at 004bd95b
;   core_game.cpp_CGame_FUN_004e36f0 at 004e37a5
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e179c
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e2856
;   core_game.cpp_FUN_004e2f10 at 004e2f49
;   ... and 9 more
;
; Referenced Globals:
;   TerminatedCString s_No_files_found_006230e2
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_dosio.c_makePath_FUN_00481f50
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0
;   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049f270
        ;   Label: shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
    PUSH ESI                            ; 0049f271
    PUSH EDI                            ; 0049f272
    PUSH EBP                            ; 0049f273
    SUB ESP,0x8ac                       ; 0049f274
    MOV ESI,dword ptr [ESP + 0x8d0]     ; 0049f27a
    MOV EAX,ESP                         ; 0049f281
    PUSH EAX                            ; 0049f283
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0049f284
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0049f289
    MOV EDX,dword ptr [ESP + 0x8cc]     ; 0049f28c
    PUSH EDX                            ; 0049f293
    MOV ECX,dword ptr [ESP + 0x8cc]     ; 0049f294
    PUSH ECX                            ; 0049f29b
    LEA EAX,[ESP + 0x8]                 ; 0049f29c
    PUSH EAX                            ; 0049f2a0
    CALL shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 ; 0049f2a1
        ;   XREF to: 004a35b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0(CStrList * this_ptr, char * directory_path, char * file_pattern)
    ADD ESP,0xc                         ; 0049f2a6
    CMP dword ptr [ESP],0x1             ; 0049f2a9
    JL 0x0049f3d7                       ; 0049f2ad
        ;   XREF to: 0049f3d7 (CONDITIONAL_JUMP)  ; LAB_0049f3d7
    MOV EAX,ESP                         ; 0049f2b3
    PUSH EAX                            ; 0049f2b5
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0 ; 0049f2b6
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0049f2bb
    MOV AH,byte ptr [ESP + 0x8d4]       ; 0049f2be
    MOV EDI,0xffffffff                  ; 0049f2c5
    TEST AH,0x1                         ; 0049f2ca
    JZ 0x0049f347                       ; 0049f2cd
        ;   XREF to: 0049f347 (CONDITIONAL_JUMP)  ; LAB_0049f347
    MOV EBP,dword ptr [ESP]             ; 0049f2cf
    XOR EBX,EBX                         ; 0049f2d2
    TEST EBP,EBP                        ; 0049f2d4
    JLE 0x0049f347                      ; 0049f2d6
        ;   XREF to: 0049f347 (CONDITIONAL_JUMP)  ; LAB_0049f347
    PUSH 0x0                            ; 0049f2d8
        ;   Label: LAB_0049f2d8
    PUSH EBX                            ; 0049f2da
    LEA EAX,[ESP + 0x5b0]               ; 0049f2db
    PUSH EAX                            ; 0049f2e2
    LEA EAX,[ESP + 0xc]                 ; 0049f2e3
    PUSH EAX                            ; 0049f2e7
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0049f2e8
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
    ADD ESP,0x10                        ; 0049f2ed
    PUSH 0x1                            ; 0049f2f0
    PUSH EBX                            ; 0049f2f2
    LEA EAX,[ESP + 0x3b0]               ; 0049f2f3
    PUSH EAX                            ; 0049f2fa
    LEA EAX,[ESP + 0xc]                 ; 0049f2fb
    PUSH EAX                            ; 0049f2ff
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0049f300
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
    ADD ESP,0x10                        ; 0049f305
    LEA EAX,[ESP + 0x3a8]               ; 0049f308
    PUSH EAX                            ; 0049f30f
    LEA EAX,[ESP + 0x5ac]               ; 0049f310
    PUSH EAX                            ; 0049f317
    PUSH 0x0                            ; 0049f318
    PUSH 0x0                            ; 0049f31a
    LEA EAX,[ESP + 0x7b8]               ; 0049f31c
    PUSH EAX                            ; 0049f323
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 0049f324
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0049f329
    PUSH ESI                            ; 0049f32c
    LEA EAX,[ESP + 0x7ac]               ; 0049f32d
    PUSH EAX                            ; 0049f334
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0049f335
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0049f33a
    TEST EAX,EAX                        ; 0049f33d
    JNZ 0x0049f3ff                      ; 0049f33f
        ;   XREF to: 0049f3ff (CONDITIONAL_JUMP)  ; LAB_0049f3ff
    MOV EDI,EBX                         ; 0049f345
    PUSH 0x0                            ; 0049f347
        ;   Label: LAB_0049f347
    PUSH EDI                            ; 0049f349
    MOV ECX,dword ptr [ESP + 0x8cc]     ; 0049f34a
    PUSH ECX                            ; 0049f351
    LEA EAX,[ESP + 0xc]                 ; 0049f352
    PUSH EAX                            ; 0049f356
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0049f357
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    MOV EBX,EAX                         ; 0049f35c
    ADD ESP,0x10                        ; 0049f35e
    TEST EAX,EAX                        ; 0049f361
    JL 0x0049f410                       ; 0049f363
        ;   XREF to: 0049f410 (CONDITIONAL_JUMP)  ; LAB_0049f410
    PUSH 0x0                            ; 0049f369
    PUSH EAX                            ; 0049f36b
    LEA EAX,[ESP + 0x5b0]               ; 0049f36c
    PUSH EAX                            ; 0049f373
    LEA EAX,[ESP + 0xc]                 ; 0049f374
    PUSH EAX                            ; 0049f378
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0049f379
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
    ADD ESP,0x10                        ; 0049f37e
    PUSH 0x1                            ; 0049f381
    PUSH EBX                            ; 0049f383
    LEA EAX,[ESP + 0x3b0]               ; 0049f384
    PUSH EAX                            ; 0049f38b
    LEA EAX,[ESP + 0xc]                 ; 0049f38c
    PUSH EAX                            ; 0049f390
    CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80 ; 0049f391
        ;   XREF to: 004a2f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
    ADD ESP,0x10                        ; 0049f396
    LEA EAX,[ESP + 0x3a8]               ; 0049f399
    PUSH EAX                            ; 0049f3a0
    LEA EAX,[ESP + 0x5ac]               ; 0049f3a1
    PUSH EAX                            ; 0049f3a8
    PUSH 0x0                            ; 0049f3a9
    PUSH 0x0                            ; 0049f3ab
    PUSH ESI                            ; 0049f3ad
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 0049f3ae
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0049f3b3
    PUSH 0x0                            ; 0049f3b6
    LEA EAX,[ESP + 0x4]                 ; 0049f3b8
    PUSH EAX                            ; 0049f3bc
    MOV EBX,0x1                         ; 0049f3bd
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0049f3c2
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   Label: LAB_0049f3c2
    ADD ESP,0x8                         ; 0049f3c7
    MOV EAX,EBX                         ; 0049f3ca
    ADD ESP,0x8ac                       ; 0049f3cc
    POP EBP                             ; 0049f3d2
    POP EDI                             ; 0049f3d3
    POP ESI                             ; 0049f3d4
    POP EBX                             ; 0049f3d5
    RET                                 ; 0049f3d6
    PUSH 0x6230e2                       ; 0049f3d7 | = "No files found"
        ;   Label: LAB_0049f3d7
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0049f3dc
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 0049f3e1
    PUSH EAX                            ; 0049f3e4
    MOV EAX,dword ptr [ESP + 0x8c4]     ; 0049f3e5
    PUSH EAX                            ; 0049f3ec
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0049f3ed
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0049f3f2
    XOR EBX,EBX                         ; 0049f3f5
    PUSH EBX                            ; 0049f3f7
    LEA EAX,[ESP + 0x4]                 ; 0049f3f8
    PUSH EAX                            ; 0049f3fc
    JMP 0x0049f3c2                      ; 0049f3fd
        ;   XREF to: 0049f3c2 (UNCONDITIONAL_JUMP)  ; LAB_0049f3c2
    MOV EDX,dword ptr [ESP]             ; 0049f3ff
        ;   Label: LAB_0049f3ff
    INC EBX                             ; 0049f402
    CMP EBX,EDX                         ; 0049f403
    JL 0x0049f2d8                       ; 0049f405
        ;   XREF to: 0049f2d8 (CONDITIONAL_JUMP)  ; LAB_0049f2d8
    JMP 0x0049f347                      ; 0049f40b
        ;   XREF to: 0049f347 (UNCONDITIONAL_JUMP)  ; LAB_0049f347
    PUSH 0x0                            ; 0049f410
        ;   Label: LAB_0049f410
    XOR EBX,EAX                         ; 0049f412
    LEA EAX,[ESP + 0x4]                 ; 0049f414
    PUSH EAX                            ; 0049f418
    JMP 0x0049f3c2                      ; 0049f419
        ;   XREF to: 0049f3c2 (UNCONDITIONAL_JUMP)  ; LAB_0049f3c2

