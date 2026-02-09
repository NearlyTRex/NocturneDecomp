; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_fileio_cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 (CFileManager *this_ptr,char *pod_filename)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_filename
; Local Variables:
; CPodFile         Stack[-0xcdc]:1068  local_cdc
; CPickList        Stack[-0x8b0]:936  local_8b0
; undefined1       Stack[-0x508]:1  local_508
; undefined1       Stack[-0x507]:1  local_507
; undefined1       Stack[-0x308]:1  local_308
; undefined1       Stack[-0x307]:1  local_307
; undefined4       Stack[-0x2e8]:4  local_2e8
; undefined4       Stack[-0x2e4]:4  local_2e4
; char[272]        Stack[-0x2e0]:272  local_2e0
; int[78]          Stack[-0x1d0]:312  local_1d0
; undefined1       Stack[-0x98]:1  local_98
; undefined1       Stack[-0x97]:1  local_97
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be4a0
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b6b95
;
; Referenced Globals:
;   TerminatedCString s_pod_0062813f
;   TerminatedCString s_Select_POD_file_to_view__00628145
;   TerminatedCString s_Can_t_mount_s_to_view_au_00628169
;   TerminatedCString s_s_doesn_t_contain_any_au_00628187
;   TerminatedCString s_Reading_d_audit_records__006281b0
;   TerminatedCString s_m_d_y_I_M_S_p_006281d1
;   TerminatedCString s_anon_006281e6
;   TerminatedCString s_Add_006281ea
;   TerminatedCString s_Remove_006281ee
;   TerminatedCString s_Change_006281f5
;   TerminatedCString s_s_s_006281fc
;   TerminatedCString s_s_s_00628205
;   TerminatedCString s_Viewing_audit_history_fo_0062820c
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   char[100] g_DefaultAuditPath
;   ... and 2 more
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c_stricmp_FUN_005fe7f0
;   crt_time.c__localtime_FUN_00600288
;   crt_time.c__strftime_FUN_006002d4
;   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
;   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
;   engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b7f50
        ;   Label: engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50
    PUSH EDI                            ; 004b7f51
    PUSH EBP                            ; 004b7f52
    SUB ESP,0xcd0                       ; 004b7f53
    MOV ESI,dword ptr [ESP + 0xce4]     ; 004b7f59
    TEST ESI,ESI                        ; 004b7f60
    JNZ 0x004b7f94                      ; 004b7f62
        ;   XREF to: 004b7f94 (CONDITIONAL_JUMP)  ; LAB_004b7f94
    PUSH ESI                            ; 004b7f64
    LEA EAX,[ESP + 0x7d8]               ; 004b7f65
    PUSH EAX                            ; 004b7f6c
    PUSH 0x62813f                       ; 004b7f6d | = "*.pod"
    PUSH 0x628145                       ; 004b7f72 | = "Select POD file to view audit trail"
    MOV EDX,dword ptr [0x00678a60]      ; 004b7f77 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004b7f7d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 ; 004b7f7e
        ;   XREF to: 0049f420 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools * this_ptr, char * file_pattern, int include_files, char * initial_path)
    ADD ESP,0x14                        ; 004b7f83
    TEST EAX,EAX                        ; 004b7f86
    JNZ 0x004b7fb5                      ; 004b7f88
        ;   XREF to: 004b7fb5 (CONDITIONAL_JUMP)  ; LAB_004b7fb5
    ADD ESP,0xcd0                       ; 004b7f8a
    POP EBP                             ; 004b7f90
    POP EDI                             ; 004b7f91
    POP ESI                             ; 004b7f92
    RET                                 ; 004b7f93
    LEA EDI,[ESP + 0x7d4]               ; 004b7f94
        ;   Label: LAB_004b7f94
    PUSH EDI                            ; 004b7f9b
    MOV AL,byte ptr [ESI]               ; 004b7f9c
        ;   Label: LAB_004b7f9c
    MOV byte ptr [EDI],AL               ; 004b7f9e
    CMP AL,0x0                          ; 004b7fa0
    JZ 0x004b7fb4                       ; 004b7fa2
        ;   XREF to: 004b7fb4 (CONDITIONAL_JUMP)  ; LAB_004b7fb4
    MOV AL,byte ptr [ESI + 0x1]         ; 004b7fa4
    ADD ESI,0x2                         ; 004b7fa7
    MOV byte ptr [EDI + 0x1],AL         ; 004b7faa
    ADD EDI,0x2                         ; 004b7fad
    CMP AL,0x0                          ; 004b7fb0
    JNZ 0x004b7f9c                      ; 004b7fb2
        ;   XREF to: 004b7f9c (CONDITIONAL_JUMP)  ; LAB_004b7f9c
    POP EDI                             ; 004b7fb4
        ;   Label: LAB_004b7fb4
    MOV EAX,ESP                         ; 004b7fb5
        ;   Label: LAB_004b7fb5
    PUSH EAX                            ; 004b7fb7
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0 ; 004b7fb8
        ;   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004b7fbd
    LEA EAX,[ESP + 0x7d4]               ; 004b7fc0
    PUSH EAX                            ; 004b7fc7
    LEA EAX,[ESP + 0x4]                 ; 004b7fc8
    PUSH EAX                            ; 004b7fcc
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 004b7fcd
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004b7fd2
    TEST EAX,EAX                        ; 004b7fd5
    JZ 0x004b81f1                       ; 004b7fd7
        ;   XREF to: 004b81f1 (CONDITIONAL_JUMP)  ; LAB_004b81f1
    MOV EAX,dword ptr [ESP + 0x41c]     ; 004b7fdd
    MOV dword ptr [ESP + 0xcc8],EAX     ; 004b7fe4
    CMP EAX,0x1                         ; 004b7feb
    JL 0x004b8226                       ; 004b7fee
        ;   XREF to: 004b8226 (CONDITIONAL_JUMP)  ; LAB_004b8226
    PUSH EBX                            ; 004b7ff4
    LEA EAX,[ESP + 0x7d8]               ; 004b7ff5
    PUSH EAX                            ; 004b7ffc
    MOV ESI,dword ptr [ESP + 0x424]     ; 004b7ffd
    PUSH ESI                            ; 004b8004
    PUSH 0x6281b0                       ; 004b8005 | = "Reading %d audit records from %s"
    MOV EDI,dword ptr [0x00678a60]      ; 004b800a | g_CEditorToolsPtr
    PUSH EDI                            ; 004b8010 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b8011
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x10                        ; 004b8016
    LEA EAX,[ESP + 0x430]               ; 004b8019
    XOR EBP,EBP                         ; 004b8020
    PUSH EAX                            ; 004b8022
    MOV ESI,0x679ee0                    ; 004b8023 | g_DefaultAuditPath
    LEA EDI,[ESP + 0xc4c]               ; 004b8028
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004b802f
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b8034
    MOV ECX,0x19                        ; 004b8037
    MOV EAX,dword ptr [ESP + 0xccc]     ; 004b803c
    MOV dword ptr [ESP + 0xcd0],EBP     ; 004b8043
    MOVSD.REP ES:EDI,ESI                ; 004b804a | g_DefaultAuditPath | DAT_00679ee4
    TEST EAX,EAX                        ; 004b804c
    JLE 0x004b818f                      ; 004b804e
        ;   XREF to: 004b818f (CONDITIONAL_JUMP)  ; LAB_004b818f
    PUSH EBP                            ; 004b8054
        ;   Label: LAB_004b8054
    LEA EAX,[ESP + 0x8]                 ; 004b8055
    PUSH EAX                            ; 004b8059
    LEA ESI,[ESP + 0xb18]               ; 004b805a
    LEA EDI,[ESP + 0x9e0]               ; 004b8061
    CALL engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590 ; 004b8068
        ;   XREF to: 00550590 (UNCONDITIONAL_CALL)  ; void * engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590(CPodFile * this_ptr, int record_index, void * output_buffer)
    MOV ECX,0x4e                        ; 004b806d
    ADD ESP,0x8                         ; 004b8072
    LEA EAX,[ESP + 0x9f8]               ; 004b8075
    LEA ESI,[ESP + 0xb10]               ; 004b807c
    PUSH EAX                            ; 004b8083
    MOVSD.REP ES:EDI,ESI                ; 004b8084
    CALL crt_time.c__localtime_FUN_00600288 ; 004b8086
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)  ; _tm * crt_time.c__localtime_FUN_00600288(time_t * timer)
    ADD ESP,0x4                         ; 004b808b
    PUSH EAX                            ; 004b808e
    PUSH 0x6281d1                       ; 004b808f | = "%m/%d/%y %I:%M:%S %p"
    PUSH 0x1e                           ; 004b8094
    LEA EAX,[ESP + 0xcb8]               ; 004b8096
    PUSH EAX                            ; 004b809d
    CALL crt_time.c__strftime_FUN_006002d4 ; 004b809e
        ;   XREF to: 006002d4 (UNCONDITIONAL_CALL)  ; uint crt_time.c__strftime_FUN_006002d4(char * dest_buffer, uint buffer_size, char * format_string, _tm * time_ptr)
    ADD ESP,0x10                        ; 004b80a3
    MOV ESI,dword ptr [ESP + 0x9fc]     ; 004b80a6
    MOV EBX,0x6281e6                    ; 004b80ad | = "???"
    CMP ESI,0x1                         ; 004b80b2
    JNC 0x004b826f                      ; 004b80b5
        ;   XREF to: 004b826f (CONDITIONAL_JUMP)  ; LAB_004b826f
    TEST ESI,ESI                        ; 004b80bb
    JNZ 0x004b80c4                      ; 004b80bd
        ;   XREF to: 004b80c4 (CONDITIONAL_JUMP)  ; LAB_004b80c4
    MOV EBX,0x6281ea                    ; 004b80bf | = "Add"
    MOV EAX,dword ptr [ESP + 0x9f8]     ; 004b80c4
        ;   Label: LAB_004b80c4
    CMP EAX,dword ptr [ESP + 0xcd0]     ; 004b80cb
    JZ 0x004b827b                       ; 004b80d2
        ;   XREF to: 004b827b (CONDITIONAL_JUMP)  ; LAB_004b827b
    LEA EAX,[ESP + 0xcac]               ; 004b80d8
        ;   Label: LAB_004b80d8
    PUSH EAX                            ; 004b80df
    LEA EAX,[ESP + 0x9dc]               ; 004b80e0
    PUSH EAX                            ; 004b80e7
    PUSH 0x6281fc                       ; 004b80e8 | = "--\t%s\t%s"
    LEA EAX,[ESP + 0x7e4]               ; 004b80ed
    PUSH EAX                            ; 004b80f4
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b80f5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b80fa
    LEA EAX,[ESP + 0x7d8]               ; 004b80fd
    PUSH EAX                            ; 004b8104
    LEA EAX,[ESP + 0x434]               ; 004b8105
    PUSH EAX                            ; 004b810c
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b810d
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b8112
    LEA ESI,[ESP + 0x9d8]               ; 004b8115
    MOV EAX,dword ptr [ESP + 0x9f8]     ; 004b811c
    LEA EDI,[ESP + 0xc48]               ; 004b8123
    MOV dword ptr [ESP + 0xcd0],EAX     ; 004b812a
    PUSH EDI                            ; 004b8131
    MOV AL,byte ptr [ESI]               ; 004b8132
        ;   Label: LAB_004b8132
    MOV byte ptr [EDI],AL               ; 004b8134
    CMP AL,0x0                          ; 004b8136
    JZ 0x004b814a                       ; 004b8138
        ;   XREF to: 004b814a (CONDITIONAL_JUMP)  ; LAB_004b814a
    MOV AL,byte ptr [ESI + 0x1]         ; 004b813a
    ADD ESI,0x2                         ; 004b813d
    MOV byte ptr [EDI + 0x1],AL         ; 004b8140
    ADD EDI,0x2                         ; 004b8143
    CMP AL,0x0                          ; 004b8146
    JNZ 0x004b8132                      ; 004b8148
        ;   XREF to: 004b8132 (CONDITIONAL_JUMP)  ; LAB_004b8132
    POP EDI                             ; 004b814a
        ;   Label: LAB_004b814a
    LEA EAX,[ESP + 0xa00]               ; 004b814b
        ;   Label: LAB_004b814b
    PUSH EAX                            ; 004b8152
    PUSH EBX                            ; 004b8153 | = "Add"
    PUSH 0x628205                       ; 004b8154 | = "\t%s\t%s"
    LEA EAX,[ESP + 0x7e4]               ; 004b8159
    PUSH EAX                            ; 004b8160
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b8161
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004b8166
    LEA EAX,[ESP + 0x7d8]               ; 004b8169
    PUSH EAX                            ; 004b8170
    LEA EAX,[ESP + 0x434]               ; 004b8171
    PUSH EAX                            ; 004b8178
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b8179
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b817e
    INC EBP                             ; 004b8181
    CMP EBP,dword ptr [ESP + 0xccc]     ; 004b8182
    JL 0x004b8054                       ; 004b8189
        ;   XREF to: 004b8054 (CONDITIONAL_JUMP)  ; LAB_004b8054
    LEA EAX,[ESP + 0x8]                 ; 004b818f
        ;   Label: LAB_004b818f
    PUSH EAX                            ; 004b8193
    PUSH 0x62820c                       ; 004b8194 | = "Viewing audit history for:\n%s"
    LEA EAX,[ESP + 0x7e0]               ; 004b8199
    PUSH EAX                            ; 004b81a0
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b81a1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b81a6
    PUSH 0x0                            ; 004b81a9
    PUSH -0x1                           ; 004b81ab
    LEA EAX,[ESP + 0x7e0]               ; 004b81ad
    PUSH EAX                            ; 004b81b4
    LEA EAX,[ESP + 0x43c]               ; 004b81b5
    PUSH EAX                            ; 004b81bc
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004b81bd
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 004b81c2
    PUSH 0x0                            ; 004b81c5
    LEA EAX,[ESP + 0x434]               ; 004b81c7
    PUSH EAX                            ; 004b81ce
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b81cf
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b81d4
    PUSH 0x0                            ; 004b81d7
    LEA EAX,[ESP + 0x8]                 ; 004b81d9
    PUSH EAX                            ; 004b81dd
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b81de
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004b81e3
    POP EBX                             ; 004b81e6
    ADD ESP,0xcd0                       ; 004b81e7
    POP EBP                             ; 004b81ed
    POP EDI                             ; 004b81ee
    POP ESI                             ; 004b81ef
    RET                                 ; 004b81f0
    LEA EAX,[ESP + 0x7d4]               ; 004b81f1
        ;   Label: LAB_004b81f1
    PUSH EAX                            ; 004b81f8
    PUSH 0x628169                       ; 004b81f9 | = "Can't mount %s to view audit!"
    MOV ECX,dword ptr [0x00678a60]      ; 004b81fe | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004b8204 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b8205
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b820a
    PUSH 0x0                            ; 004b820d
    LEA EAX,[ESP + 0x4]                 ; 004b820f
    PUSH EAX                            ; 004b8213
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b8214
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004b8219
    ADD ESP,0xcd0                       ; 004b821c
    POP EBP                             ; 004b8222
    POP EDI                             ; 004b8223
    POP ESI                             ; 004b8224
    RET                                 ; 004b8225
    LEA EAX,[ESP + 0x7d4]               ; 004b8226
        ;   Label: LAB_004b8226
    PUSH EAX                            ; 004b822d
    PUSH 0x628187                       ; 004b822e | = "%s doesn't contain any audit information"
    MOV EDX,dword ptr [0x00678a60]      ; 004b8233 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004b8239 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b823a
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b823f
    PUSH 0x0                            ; 004b8242
    LEA EAX,[ESP + 0x4]                 ; 004b8244
    PUSH EAX                            ; 004b8248
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b8249
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 004b824e
    ADD ESP,0xcd0                       ; 004b8251
    POP EBP                             ; 004b8257
    POP EDI                             ; 004b8258
    POP ESI                             ; 004b8259
    RET                                 ; 004b825a
    MOV EBX,0x6281ee                    ; 004b825b | = "Remove"
        ;   Label: LAB_004b825b
    JMP 0x004b80c4                      ; 004b8260
        ;   XREF to: 004b80c4 (UNCONDITIONAL_JUMP)  ; LAB_004b80c4
    MOV EBX,0x6281f5                    ; 004b8265 | = "Change"
        ;   Label: LAB_004b8265
    JMP 0x004b80c4                      ; 004b826a
        ;   XREF to: 004b80c4 (UNCONDITIONAL_JUMP)  ; LAB_004b80c4
    JBE 0x004b825b                      ; 004b826f
        ;   XREF to: 004b825b (CONDITIONAL_JUMP)  ; LAB_004b825b
        ;   Label: LAB_004b826f
    CMP ESI,0x2                         ; 004b8271
    JZ 0x004b8265                       ; 004b8274
        ;   XREF to: 004b8265 (CONDITIONAL_JUMP)  ; LAB_004b8265
    JMP 0x004b80c4                      ; 004b8276
        ;   XREF to: 004b80c4 (UNCONDITIONAL_JUMP)  ; LAB_004b80c4
    LEA EAX,[ESP + 0xc48]               ; 004b827b
        ;   Label: LAB_004b827b
    PUSH EAX                            ; 004b8282
    LEA EAX,[ESP + 0x9dc]               ; 004b8283
    PUSH EAX                            ; 004b828a
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b828b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b8290
    TEST EAX,EAX                        ; 004b8293
    JNZ 0x004b80d8                      ; 004b8295
        ;   XREF to: 004b80d8 (CONDITIONAL_JUMP)  ; LAB_004b80d8
    JMP 0x004b814b                      ; 004b829b
        ;   XREF to: 004b814b (UNCONDITIONAL_JUMP)  ; LAB_004b814b

