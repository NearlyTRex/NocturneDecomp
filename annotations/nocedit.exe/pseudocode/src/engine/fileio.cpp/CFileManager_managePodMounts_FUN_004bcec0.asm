; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_CFileManager_managePodMounts_FUN_004bcec0(CFileManager *this_ptr)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x5d8]:1  local_5d8
; undefined1       Stack[-0x230]:1  local_230
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[1]:
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be472
;
; Referenced Globals:
;   TerminatedCString s_Remounting_all_pods_0062759a
;   TerminatedCString s_pod_0062935c
;   TerminatedCString s_anon_00629362
;   TerminatedCString s_Close_00629364
;   TerminatedCString s_s_Mounted_0062936a
;   TerminatedCString s_s_Not_mounted_00629375
;   TerminatedCString s_Select_PODs_you_wish_to__00629384
;   TerminatedCString s_Applying_changes_to_POD__006293a9
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonPod* g_CDemonPodPtr = 030e5090
;   CEditorTools g_CEditorToolsInstance
;   CDemonPod g_CDemonPodInstance
;   undefined4 DAT_030e5224
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
;   engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
;   engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
;   engine_pod.cpp_CPod_cleanup_FUN_00550c80
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90
;   shape_edittool.cpp_CPickList_setOkButtonText_FUN_004a3d20
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
;   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bcec0
        ;   Label: engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0
    PUSH ESI                            ; 004bcec1
    PUSH EDI                            ; 004bcec2
    PUSH EBP                            ; 004bcec3
    SUB ESP,0x5c8                       ; 004bcec4
    MOV ESI,dword ptr [ESP + 0x5dc]     ; 004bceca
    LEA EAX,[ESP + 0x5b8]               ; 004bced1
    PUSH EAX                            ; 004bced8
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 004bced9
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004bcede
    PUSH 0x62935c                       ; 004bcee1 | = "*.pod"
    PUSH 0x629362                       ; 004bcee6 | = "."
    LEA EAX,[ESP + 0x5c0]               ; 004bceeb
    PUSH EAX                            ; 004bcef2
    CALL shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 ; 004bcef3
        ;   XREF to: 004a37b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0(CStrList * this_ptr, char * directory_path, char * file_pattern)
    ADD ESP,0xc                         ; 004bcef8
    LEA EAX,[ESP + 0x5a8]               ; 004bcefb
    PUSH EAX                            ; 004bcf02
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 004bcf03
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004bcf08
    LEA EAX,[ESP + 0x5a8]               ; 004bcf0b
    PUSH EAX                            ; 004bcf12
    PUSH ESI                            ; 004bcf13
    CALL engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0 ; 004bcf14
        ;   XREF to: 004ba4f0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(CFileManager * this_ptr, CStrList * pod_list)
    ADD ESP,0x8                         ; 004bcf19
    MOV EDX,dword ptr [ESP + 0x5a8]     ; 004bcf1c
    XOR EBX,EBX                         ; 004bcf23
    TEST EDX,EDX                        ; 004bcf25
    JLE 0x004bcf60                      ; 004bcf27
        ;   XREF to: 004bcf60 (CONDITIONAL_JUMP)  ; LAB_004bcf60
    PUSH EBX                            ; 004bcf29
        ;   Label: LAB_004bcf29
    LEA EAX,[ESP + 0x5ac]               ; 004bcf2a
    PUSH EAX                            ; 004bcf31
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004bcf32
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004bcf37
    PUSH EAX                            ; 004bcf3a
    LEA EAX,[ESP + 0x5bc]               ; 004bcf3b
    PUSH EAX                            ; 004bcf42
    PUSH ESI                            ; 004bcf43
    CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0 ; 004bcf44
        ;   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0(CFileManager * this_ptr, CStrList * pod_list, char * target_filename)
    ADD ESP,0xc                         ; 004bcf49
    TEST EAX,EAX                        ; 004bcf4c
    JL 0x004bd07c                       ; 004bcf4e
        ;   XREF to: 004bd07c (CONDITIONAL_JUMP)  ; LAB_004bd07c
    MOV ECX,dword ptr [ESP + 0x5a8]     ; 004bcf54
        ;   Label: LAB_004bcf54
    INC EBX                             ; 004bcf5b
    CMP EBX,ECX                         ; 004bcf5c
    JL 0x004bcf29                       ; 004bcf5e
        ;   XREF to: 004bcf29 (CONDITIONAL_JUMP)  ; LAB_004bcf29
    XOR EDI,EDI                         ; 004bcf60
        ;   Label: LAB_004bcf60
    XOR EBP,EBP                         ; 004bcf62
    MOV EAX,ESP                         ; 004bcf64
        ;   Label: LAB_004bcf64
    PUSH EAX                            ; 004bcf66
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004bcf67
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004bcf6c
    PUSH EBP                            ; 004bcf6f
    LEA EAX,[ESP + 0x4]                 ; 004bcf70
    PUSH EAX                            ; 004bcf74
    CALL shape_edittool.cpp_CPickList_setOkButtonText_FUN_004a3d20 ; 004bcf75
        ;   XREF to: 004a3d20 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setOkButtonText_FUN_004a3d20(CPickList * this_ptr, char * text)
    ADD ESP,0x8                         ; 004bcf7a
    PUSH 0x629364                       ; 004bcf7d | = "Close"
    LEA EAX,[ESP + 0x4]                 ; 004bcf82
    PUSH EAX                            ; 004bcf86
    CALL shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90 ; 004bcf87
        ;   XREF to: 004a3d90 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90(CPickList * this_ptr, char * text)
    ADD ESP,0x8                         ; 004bcf8c
    MOV EAX,dword ptr [ESP + 0x5b8]     ; 004bcf8f
    MOV EBX,EBP                         ; 004bcf96
    CMP EBP,EAX                         ; 004bcf98
    JGE 0x004bd00d                      ; 004bcf9a
        ;   XREF to: 004bd00d (CONDITIONAL_JUMP)  ; LAB_004bd00d
    PUSH EBX                            ; 004bcf9c
        ;   Label: LAB_004bcf9c
    LEA EAX,[ESP + 0x5bc]               ; 004bcf9d
    PUSH EAX                            ; 004bcfa4
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004bcfa5
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004bcfaa
    PUSH EAX                            ; 004bcfad
    LEA EAX,[ESP + 0x5ac]               ; 004bcfae
    PUSH EAX                            ; 004bcfb5
    PUSH ESI                            ; 004bcfb6
    CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0 ; 004bcfb7
        ;   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0(CFileManager * this_ptr, CStrList * pod_list, char * target_filename)
    ADD ESP,0xc                         ; 004bcfbc
    TEST EAX,EAX                        ; 004bcfbf
    JL 0x004bd0a3                       ; 004bcfc1
        ;   XREF to: 004bd0a3 (CONDITIONAL_JUMP)  ; LAB_004bd0a3
    PUSH EBX                            ; 004bcfc7
    LEA EAX,[ESP + 0x5bc]               ; 004bcfc8
    PUSH EAX                            ; 004bcfcf
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004bcfd0
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004bcfd5
    PUSH EAX                            ; 004bcfd8
    PUSH 0x62936a                       ; 004bcfd9 | = "%s\tMounted"
    LEA EAX,[ESP + 0x3b0]               ; 004bcfde
        ;   Label: LAB_004bcfde
    PUSH EAX                            ; 004bcfe5
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004bcfe6
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004bcfeb
    LEA EAX,[ESP + 0x3a8]               ; 004bcfee
    PUSH EAX                            ; 004bcff5
    LEA EAX,[ESP + 0x4]                 ; 004bcff6
    PUSH EAX                            ; 004bcffa
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bcffb
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bd000
    INC EBX                             ; 004bd003
    CMP EBX,dword ptr [ESP + 0x5b8]     ; 004bd004
    JL 0x004bcf9c                       ; 004bd00b
        ;   XREF to: 004bcf9c (CONDITIONAL_JUMP)  ; LAB_004bcf9c
    PUSH EBP                            ; 004bd00d
        ;   Label: LAB_004bd00d
    PUSH EDI                            ; 004bd00e
    PUSH 0x629384                       ; 004bd00f | = "Select PODs you wish to have mounted"
    LEA EAX,[ESP + 0xc]                 ; 004bd014
    PUSH EAX                            ; 004bd018
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004bd019
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    MOV EBX,EAX                         ; 004bd01e
    ADD ESP,0x10                        ; 004bd020
    MOV EDI,EAX                         ; 004bd023
    TEST EAX,EAX                        ; 004bd025
    JL 0x004bd0bf                       ; 004bd027
        ;   XREF to: 004bd0bf (CONDITIONAL_JUMP)  ; LAB_004bd0bf
    PUSH EAX                            ; 004bd02d
    LEA EAX,[ESP + 0x5bc]               ; 004bd02e
    PUSH EAX                            ; 004bd035
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004bd036
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004bd03b
    PUSH EAX                            ; 004bd03e
    LEA EAX,[ESP + 0x5ac]               ; 004bd03f
    PUSH EAX                            ; 004bd046
    PUSH ESI                            ; 004bd047
    CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0 ; 004bd048
        ;   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0(CFileManager * this_ptr, CStrList * pod_list, char * target_filename)
    ADD ESP,0xc                         ; 004bd04d
    TEST EAX,EAX                        ; 004bd050
    JL 0x004bd163                       ; 004bd052
        ;   XREF to: 004bd163 (CONDITIONAL_JUMP)  ; LAB_004bd163
    PUSH EAX                            ; 004bd058
    LEA EAX,[ESP + 0x5ac]               ; 004bd059
    PUSH EAX                            ; 004bd060
    CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0 ; 004bd061
        ;   XREF to: 004a2de0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004bd066
        ;   Label: LAB_004bd066
    PUSH EBP                            ; 004bd069
    LEA EAX,[ESP + 0x4]                 ; 004bd06a
    PUSH EAX                            ; 004bd06e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bd06f
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bd074
    JMP 0x004bcf64                      ; 004bd077
        ;   XREF to: 004bcf64 (UNCONDITIONAL_JUMP)  ; LAB_004bcf64
    PUSH EBX                            ; 004bd07c
        ;   Label: LAB_004bd07c
    LEA EAX,[ESP + 0x5ac]               ; 004bd07d
    PUSH EAX                            ; 004bd084
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004bd085
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004bd08a
    PUSH EAX                            ; 004bd08d
    LEA EAX,[ESP + 0x5bc]               ; 004bd08e
    PUSH EAX                            ; 004bd095
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bd096
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bd09b
    JMP 0x004bcf54                      ; 004bd09e
        ;   XREF to: 004bcf54 (UNCONDITIONAL_JUMP)  ; LAB_004bcf54
    PUSH EBX                            ; 004bd0a3
        ;   Label: LAB_004bd0a3
    LEA EAX,[ESP + 0x5bc]               ; 004bd0a4
    PUSH EAX                            ; 004bd0ab
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004bd0ac
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004bd0b1
    PUSH EAX                            ; 004bd0b4
    PUSH 0x629375                       ; 004bd0b5 | = "%s\tNot mounted"
    JMP 0x004bcfde                      ; 004bd0ba
        ;   XREF to: 004bcfde (UNCONDITIONAL_JUMP)  ; LAB_004bcfde
    PUSH 0x6293a9                       ; 004bd0bf | = "Applying changes to POD.INI"
        ;   Label: LAB_004bd0bf
    MOV ECX,dword ptr [0x00678a60]      ; 004bd0c4 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004bd0ca | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bd0cb
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 004bd0d0
    LEA EAX,[ESP + 0x5a8]               ; 004bd0d3
    PUSH EAX                            ; 004bd0da
    PUSH ESI                            ; 004bd0db
    CALL engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620 ; 004bd0dc
        ;   XREF to: 004ba620 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620(CFileManager * this_ptr, CStrList * pod_list)
    MOV EBX,dword ptr [0x00680cdc]      ; 004bd0e1 | g_CDemonPodInstance | g_CDemonPodPtr
    ADD ESP,0x8                         ; 004bd0e7
    TEST EBX,EBX                        ; 004bd0ea
    JNZ 0x004bd12c                      ; 004bd0ec
        ;   XREF to: 004bd12c (CONDITIONAL_JUMP)  ; LAB_004bd12c
    PUSH 0x0                            ; 004bd0ee
        ;   Label: LAB_004bd0ee
    LEA EAX,[ESP + 0x4]                 ; 004bd0f0
    PUSH EAX                            ; 004bd0f4
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bd0f5
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bd0fa
    PUSH 0x0                            ; 004bd0fd
    LEA EAX,[ESP + 0x5ac]               ; 004bd0ff
    PUSH EAX                            ; 004bd106
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004bd107
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bd10c
    PUSH 0x0                            ; 004bd10f
    LEA EAX,[ESP + 0x5bc]               ; 004bd111
    PUSH EAX                            ; 004bd118
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004bd119
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bd11e
    ADD ESP,0x5c8                       ; 004bd121
    POP EBP                             ; 004bd127
    POP EDI                             ; 004bd128
    POP ESI                             ; 004bd129
    POP EBX                             ; 004bd12a
    RET                                 ; 004bd12b
    PUSH 0x62759a                       ; 004bd12c | = "Remounting all pods..."
        ;   Label: LAB_004bd12c
    MOV ESI,dword ptr [0x00678a60]      ; 004bd131 | g_CEditorToolsPtr
    PUSH ESI                            ; 004bd137 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bd138
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 004bd13d
    MOV EDI,dword ptr [0x00680cdc]      ; 004bd140 | g_CDemonPodPtr
    PUSH EDI                            ; 004bd146 | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80 ; 004bd147
        ;   XREF to: 00550c80 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_cleanup_FUN_00550c80(CPod * this_ptr)
    ADD ESP,0x4                         ; 004bd14c
    MOV EAX,[0x00680cdc]                ; 004bd14f | g_CDemonPodPtr
    PUSH EAX                            ; 004bd154 | g_CDemonPodInstance
    MOV EBX,dword ptr [EAX + 0x194]     ; 004bd155 | DAT_030e5224
    CALL dword ptr [EBX + 0x4]          ; 004bd15b
    ADD ESP,0x4                         ; 004bd15e
    JMP 0x004bd0ee                      ; 004bd161
        ;   XREF to: 004bd0ee (UNCONDITIONAL_JUMP)  ; LAB_004bd0ee
    PUSH EBX                            ; 004bd163
        ;   Label: LAB_004bd163
    LEA EAX,[ESP + 0x5bc]               ; 004bd164
    PUSH EAX                            ; 004bd16b
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004bd16c
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004bd171
    PUSH EAX                            ; 004bd174
    LEA EAX,[ESP + 0x5ac]               ; 004bd175
    PUSH EAX                            ; 004bd17c
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bd17d
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    JMP 0x004bd066                      ; 004bd182
        ;   XREF to: 004bd066 (UNCONDITIONAL_JUMP)  ; LAB_004bd066

