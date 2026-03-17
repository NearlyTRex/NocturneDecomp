; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fileman_cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20(CDemonFileManager *this_ptr)
;
; Parameters:
; CDemonFileManager * Stack[0x4]:4   this_ptr
; Local Variables:
; char[512]        Stack[-0x798]:512  local_798
; char[499]        Stack[-0x598]:499  local_598
; char[256]        Stack[-0x3a5]:256  local_3a5
; char[257]        Stack[-0x2a5]:257  local_2a5
; char[100]        Stack[-0x1a4]:100  local_1a4
; char[100]        Stack[-0x140]:100  local_140
; char[100]        Stack[-0xdc]:100  local_dc
; char[100]        Stack[-0x78]:100  local_78
; _FILE *          Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be467
;
; Referenced Globals:
;   TerminatedCString s_vox_006295c8
;   char s_EmptyChar_006295ce = \x00
;   TerminatedCString s_Select_response_file_006295cf
;   TerminatedCString s_pod_006295e5
;   TerminatedCString s_pod_006295e9
;   char s_EmptyChar_006295ed = \x00
;   TerminatedCString s_Enter_POD_name_to_build_006295ee
;   TerminatedCString s_Enter_volume_name_00629606
;   TerminatedCString s_core_fileman_cpp_00629618
;   TerminatedCString s_rt_0062962c
;   TerminatedCString s_anon_0062962f
;   TerminatedCString s_anon_00629637
;   TerminatedCString s_s_0062963a
;   TerminatedCString s_file_00629644
;   undefined4 DAT_00629645
;   ... and 33 more
;
; Called Functions:
;   core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150
;   core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070
;   core_fileman.cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230
;   core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0
;   core_fileman.cpp_refreshSoundDirectory_FUN_004be590
;   core_mission.cpp_CDemonMission_addFilesToExtract_FUN_00524e60
;   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
;   core_mission.cpp_CDemonMission_load_FUN_00522d90
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0
;   crt_file.c_makepath_FUN_005febfc
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_stdio.c_sscanf_FUN_0060013c
;   crt_string.c__stricmp_FUN_005fe7f0
;   crt_string.c_memmove_FUN_005fe5e0
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bda20
        ;   Label: core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20
    PUSH ESI                            ; 004bda21
    PUSH EDI                            ; 004bda22
    PUSH EBP                            ; 004bda23
    SUB ESP,0x788                       ; 004bda24
    MOV EBP,dword ptr [ESP + 0x79c]     ; 004bda2a
    PUSH 0x0                            ; 004bda31
    LEA EAX,[ESP + 0x204]               ; 004bda33
    PUSH EAX                            ; 004bda3a
    PUSH 0x6295c8                       ; 004bda3b | = "*.vox"
    PUSH 0x6295ce                       ; 004bda40 | s_EmptyChar_006295ce
    PUSH 0x6295cf                       ; 004bda45 | = "Select response file."
    MOV EDX,dword ptr [0x00678a60]      ; 004bda4a | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004bda50 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 004bda51
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * dialog_title, char * search_directory, char * file_pattern, ...)
    ADD ESP,0x18                        ; 004bda56
    TEST EAX,EAX                        ; 004bda59
    JNZ 0x004bda68                      ; 004bda5b
        ;   XREF to: 004bda68 (CONDITIONAL_JUMP)  ; LAB_004bda68
    ADD ESP,0x788                       ; 004bda5d
        ;   Label: LAB_004bda5d
    POP EBP                             ; 004bda63
    POP EDI                             ; 004bda64
    POP ESI                             ; 004bda65
    POP EBX                             ; 004bda66
    RET                                 ; 004bda67
    PUSH 0x0                            ; 004bda68
        ;   Label: LAB_004bda68
    LEA EAX,[ESP + 0x5f8]               ; 004bda6a
    PUSH EAX                            ; 004bda71
    PUSH 0x0                            ; 004bda72
    PUSH 0x0                            ; 004bda74
    LEA EAX,[ESP + 0x210]               ; 004bda76
    PUSH EAX                            ; 004bda7d
    CALL crt_string.c_splitpath_FUN_005ff178 ; 004bda7e
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004bda83
    PUSH 0x6295e5                       ; 004bda86 | = "pod"
    LEA EAX,[ESP + 0x5f8]               ; 004bda8b
    PUSH EAX                            ; 004bda92
    PUSH 0x0                            ; 004bda93
    PUSH 0x0                            ; 004bda95
    LEA EAX,[ESP + 0x668]               ; 004bda97
    PUSH EAX                            ; 004bda9e
    CALL crt_file.c_makepath_FUN_005febfc ; 004bda9f
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004bdaa4
    PUSH 0x1                            ; 004bdaa7
    LEA EAX,[ESP + 0x65c]               ; 004bdaa9
    PUSH EAX                            ; 004bdab0
    PUSH 0x6295e9                       ; 004bdab1 | = "pod"
    PUSH 0x6295ed                       ; 004bdab6 | s_EmptyChar_006295ed
    PUSH 0x6295ee                       ; 004bdabb | = "Enter POD name to build"
    MOV ECX,dword ptr [0x00678a60]      ; 004bdac0 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004bdac6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 ; 004bdac7
        ;   XREF to: 0049fb70 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools * this_ptr, char * dialog_title, char * directory_path, char * file_extension, ...)
    ADD ESP,0x18                        ; 004bdacc
    TEST EAX,EAX                        ; 004bdacf
    JZ 0x004bda5d                       ; 004bdad1
        ;   XREF to: 004bda5d (CONDITIONAL_JUMP)  ; LAB_004bda5d
    PUSH 0x1                            ; 004bdad3
    PUSH 0x64                           ; 004bdad5
    LEA EAX,[ESP + 0x5fc]               ; 004bdad7
    PUSH EAX                            ; 004bdade
    PUSH 0x629606                       ; 004bdadf | = "Enter volume name"
    MOV EBX,dword ptr [0x00678a60]      ; 004bdae4 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 004bdaea | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 004bdaeb
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004bdaf0
    TEST EAX,EAX                        ; 004bdaf3
    JZ 0x004bda5d                       ; 004bdaf5
        ;   XREF to: 004bda5d (CONDITIONAL_JUMP)  ; LAB_004bda5d
    PUSH 0xb9                           ; 004bdafb
    PUSH 0x629618                       ; 004bdb00 | = "..\\core\\fileman.cpp"
    PUSH 0x62962c                       ; 004bdb05 | = "rt"
    PUSH 0x0                            ; 004bdb0a
    LEA EAX,[ESP + 0x210]               ; 004bdb0c
    PUSH EAX                            ; 004bdb13
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004bdb14
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004bdb19
    PUSH EBP                            ; 004bdb1c
    MOV dword ptr [ESP + 0x788],EAX     ; 004bdb1d
    CALL engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10 ; 004bdb24
        ;   XREF to: 004b7c10 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10(CFileManager * this_ptr)
    ADD ESP,0x4                         ; 004bdb29
    MOV EAX,ESP                         ; 004bdb2c
        ;   Label: LAB_004bdb2c
    PUSH EAX                            ; 004bdb2e
    PUSH 0x62962f                       ; 004bdb2f | = " %[^\n]\n"
    MOV ESI,dword ptr [ESP + 0x78c]     ; 004bdb34
    PUSH ESI                            ; 004bdb3b
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004bdb3c
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004bdb41
    CMP EAX,0x1                         ; 004bdb44
    JNZ 0x004be02d                      ; 004bdb47
        ;   XREF to: 004be02d (CONDITIONAL_JUMP)  ; LAB_004be02d
    PUSH 0x629637                       ; 004bdb4d | = "//"
    LEA EAX,[ESP + 0x4]                 ; 004bdb52
    PUSH EAX                            ; 004bdb56
    CALL crt_string.c_strstr_FUN_005fedd0 ; 004bdb57
        ;   XREF to: 005fedd0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005fedd0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 004bdb5c
    TEST EAX,EAX                        ; 004bdb5f
    JZ 0x004bdb66                       ; 004bdb61
        ;   XREF to: 004bdb66 (CONDITIONAL_JUMP)  ; LAB_004bdb66
    MOV byte ptr [EAX],0x0              ; 004bdb63
    MOV EDI,ESP                         ; 004bdb66
        ;   Label: LAB_004bdb66
    MOV ESI,ESP                         ; 004bdb68
    SUB ECX,ECX                         ; 004bdb6a
    DEC ECX                             ; 004bdb6c
    XOR EAX,EAX                         ; 004bdb6d
    SCASB.REPNE ES:EDI                  ; 004bdb6f
    NOT ECX                             ; 004bdb71
    DEC ECX                             ; 004bdb73
    MOV EDI,ECX                         ; 004bdb74
    TEST ECX,ECX                        ; 004bdb76
    JLE 0x004bdb92                      ; 004bdb78
        ;   XREF to: 004bdb92 (CONDITIONAL_JUMP)  ; LAB_004bdb92
    MOV EAX,ESP                         ; 004bdb7a
    ADD EAX,ECX                         ; 004bdb7c
    MOV DL,byte ptr [EAX + -0x1]        ; 004bdb7e
        ;   Label: LAB_004bdb7e
    INC DL                              ; 004bdb81
    AND EDX,0xff                        ; 004bdb83
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004bdb89 | g_CharacterClassificationTable
    JNZ 0x004bdbbb                      ; 004bdb90
        ;   XREF to: 004bdbbb (CONDITIONAL_JUMP)  ; LAB_004bdbbb
    LEA EAX,[ESI + EDI*0x1]             ; 004bdb92
        ;   Label: LAB_004bdb92
    LEA EBX,[ESI + 0x1]                 ; 004bdb95
    MOV byte ptr [EAX],0x0              ; 004bdb98
    MOV AL,byte ptr [ESI]               ; 004bdb9b
        ;   Label: LAB_004bdb9b
    INC AL                              ; 004bdb9d
    AND EAX,0xff                        ; 004bdb9f
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004bdba4 | g_CharacterClassificationTable
    JZ 0x004bdbc3                       ; 004bdbab
        ;   XREF to: 004bdbc3 (CONDITIONAL_JUMP)  ; LAB_004bdbc3
    PUSH EDI                            ; 004bdbad
    PUSH EBX                            ; 004bdbae
    PUSH ESI                            ; 004bdbaf
    DEC EDI                             ; 004bdbb0
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004bdbb1
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004bdbb6
    JMP 0x004bdb9b                      ; 004bdbb9
        ;   XREF to: 004bdb9b (UNCONDITIONAL_JUMP)  ; LAB_004bdb9b
    DEC EDI                             ; 004bdbbb
        ;   Label: LAB_004bdbbb
    DEC EAX                             ; 004bdbbc
    TEST EDI,EDI                        ; 004bdbbd
    JG 0x004bdb7e                       ; 004bdbbf
        ;   XREF to: 004bdb7e (CONDITIONAL_JUMP)  ; LAB_004bdb7e
    JMP 0x004bdb92                      ; 004bdbc1
        ;   XREF to: 004bdb92 (UNCONDITIONAL_JUMP)  ; LAB_004bdb92
    CMP byte ptr [ESP],0x0              ; 004bdbc3
        ;   Label: LAB_004bdbc3
    JZ 0x004bdb2c                       ; 004bdbc7
        ;   XREF to: 004bdb2c (CONDITIONAL_JUMP)  ; LAB_004bdb2c
    LEA EAX,[ESP + 0x3f4]               ; 004bdbcd
    PUSH EAX                            ; 004bdbd4
    LEA EAX,[ESP + 0x4f8]               ; 004bdbd5
    PUSH EAX                            ; 004bdbdc
    PUSH 0x62963a                       ; 004bdbdd | = " %[^:]:%s"
    LEA EAX,[ESP + 0xc]                 ; 004bdbe2
    PUSH EAX                            ; 004bdbe6
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004bdbe7
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x10                        ; 004bdbec
    CMP EAX,0x2                         ; 004bdbef
    JZ 0x004bdc3d                       ; 004bdbf2
        ;   XREF to: 004bdc3d (CONDITIONAL_JUMP)  ; LAB_004bdc3d
    MOV ESI,0x629644                    ; 004bdbf4 | = "file"
    LEA EDI,[ESP + 0x4f4]               ; 004bdbf9
    PUSH EDI                            ; 004bdc00
    MOV AL,byte ptr [ESI]               ; 004bdc01 | = "file" | DAT_00629646
        ;   Label: LAB_004bdc01
    MOV byte ptr [EDI],AL               ; 004bdc03
    CMP AL,0x0                          ; 004bdc05
    JZ 0x004bdc19                       ; 004bdc07
        ;   XREF to: 004bdc19 (CONDITIONAL_JUMP)  ; LAB_004bdc19
    MOV AL,byte ptr [ESI + 0x1]         ; 004bdc09 | DAT_00629645 | DAT_00629647
    ADD ESI,0x2                         ; 004bdc0c
    MOV byte ptr [EDI + 0x1],AL         ; 004bdc0f
    ADD EDI,0x2                         ; 004bdc12
    CMP AL,0x0                          ; 004bdc15
    JNZ 0x004bdc01                      ; 004bdc17
        ;   XREF to: 004bdc01 (CONDITIONAL_JUMP)  ; LAB_004bdc01
    POP EDI                             ; 004bdc19
        ;   Label: LAB_004bdc19
    MOV ESI,ESP                         ; 004bdc1a
    LEA EDI,[ESP + 0x3f4]               ; 004bdc1c
    PUSH EDI                            ; 004bdc23
    MOV AL,byte ptr [ESI]               ; 004bdc24
        ;   Label: LAB_004bdc24
    MOV byte ptr [EDI],AL               ; 004bdc26
    CMP AL,0x0                          ; 004bdc28
    JZ 0x004bdc3c                       ; 004bdc2a
        ;   XREF to: 004bdc3c (CONDITIONAL_JUMP)  ; LAB_004bdc3c
    MOV AL,byte ptr [ESI + 0x1]         ; 004bdc2c
    ADD ESI,0x2                         ; 004bdc2f
    MOV byte ptr [EDI + 0x1],AL         ; 004bdc32
    ADD EDI,0x2                         ; 004bdc35
    CMP AL,0x0                          ; 004bdc38
    JNZ 0x004bdc24                      ; 004bdc3a
        ;   XREF to: 004bdc24 (CONDITIONAL_JUMP)  ; LAB_004bdc24
    POP EDI                             ; 004bdc3c
        ;   Label: LAB_004bdc3c
    LEA EDI,[ESP + 0x4f4]               ; 004bdc3d
        ;   Label: LAB_004bdc3d
    LEA ESI,[ESP + 0x4f4]               ; 004bdc44
    SUB ECX,ECX                         ; 004bdc4b
    DEC ECX                             ; 004bdc4d
    XOR EAX,EAX                         ; 004bdc4e
    SCASB.REPNE ES:EDI                  ; 004bdc50
    NOT ECX                             ; 004bdc52
    DEC ECX                             ; 004bdc54
    MOV EDI,ECX                         ; 004bdc55
    TEST ECX,ECX                        ; 004bdc57
    JLE 0x004bdc78                      ; 004bdc59
        ;   XREF to: 004bdc78 (CONDITIONAL_JUMP)  ; LAB_004bdc78
    LEA EAX,[ESP + 0x4f4]               ; 004bdc5b
    ADD EAX,ECX                         ; 004bdc62
    MOV DL,byte ptr [EAX + -0x1]        ; 004bdc64
        ;   Label: LAB_004bdc64
    INC DL                              ; 004bdc67
    AND EDX,0xff                        ; 004bdc69
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004bdc6f | g_CharacterClassificationTable
    JNZ 0x004bdca1                      ; 004bdc76
        ;   XREF to: 004bdca1 (CONDITIONAL_JUMP)  ; LAB_004bdca1
    LEA EAX,[ESI + EDI*0x1]             ; 004bdc78
        ;   Label: LAB_004bdc78
    LEA EBX,[ESI + 0x1]                 ; 004bdc7b
    MOV byte ptr [EAX],0x0              ; 004bdc7e
    MOV AL,byte ptr [ESI]               ; 004bdc81
        ;   Label: LAB_004bdc81
    INC AL                              ; 004bdc83
    AND EAX,0xff                        ; 004bdc85
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004bdc8a | g_CharacterClassificationTable
    JZ 0x004bdca9                       ; 004bdc91
        ;   XREF to: 004bdca9 (CONDITIONAL_JUMP)  ; LAB_004bdca9
    PUSH EDI                            ; 004bdc93
    PUSH EBX                            ; 004bdc94
    PUSH ESI                            ; 004bdc95
    DEC EDI                             ; 004bdc96
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004bdc97
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004bdc9c
    JMP 0x004bdc81                      ; 004bdc9f
        ;   XREF to: 004bdc81 (UNCONDITIONAL_JUMP)  ; LAB_004bdc81
    DEC EDI                             ; 004bdca1
        ;   Label: LAB_004bdca1
    DEC EAX                             ; 004bdca2
    TEST EDI,EDI                        ; 004bdca3
    JG 0x004bdc64                       ; 004bdca5
        ;   XREF to: 004bdc64 (CONDITIONAL_JUMP)  ; LAB_004bdc64
    JMP 0x004bdc78                      ; 004bdca7
        ;   XREF to: 004bdc78 (UNCONDITIONAL_JUMP)  ; LAB_004bdc78
    LEA EDI,[ESP + 0x3f4]               ; 004bdca9
        ;   Label: LAB_004bdca9
    LEA ESI,[ESP + 0x3f4]               ; 004bdcb0
    SUB ECX,ECX                         ; 004bdcb7
    DEC ECX                             ; 004bdcb9
    XOR EAX,EAX                         ; 004bdcba
    SCASB.REPNE ES:EDI                  ; 004bdcbc
    NOT ECX                             ; 004bdcbe
    DEC ECX                             ; 004bdcc0
    MOV EDI,ECX                         ; 004bdcc1
    TEST ECX,ECX                        ; 004bdcc3
    JLE 0x004bdce4                      ; 004bdcc5
        ;   XREF to: 004bdce4 (CONDITIONAL_JUMP)  ; LAB_004bdce4
    LEA EAX,[ESP + 0x3f4]               ; 004bdcc7
    ADD EAX,ECX                         ; 004bdcce
    MOV DL,byte ptr [EAX + -0x1]        ; 004bdcd0
        ;   Label: LAB_004bdcd0
    INC DL                              ; 004bdcd3
    AND EDX,0xff                        ; 004bdcd5
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004bdcdb | g_CharacterClassificationTable
    JNZ 0x004bdd0d                      ; 004bdce2
        ;   XREF to: 004bdd0d (CONDITIONAL_JUMP)  ; LAB_004bdd0d
    LEA EAX,[ESI + EDI*0x1]             ; 004bdce4
        ;   Label: LAB_004bdce4
    LEA EBX,[ESI + 0x1]                 ; 004bdce7
    MOV byte ptr [EAX],0x0              ; 004bdcea
    MOV AL,byte ptr [ESI]               ; 004bdced
        ;   Label: LAB_004bdced
    INC AL                              ; 004bdcef
    AND EAX,0xff                        ; 004bdcf1
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004bdcf6 | g_CharacterClassificationTable
    JZ 0x004bdd15                       ; 004bdcfd
        ;   XREF to: 004bdd15 (CONDITIONAL_JUMP)  ; LAB_004bdd15
    PUSH EDI                            ; 004bdcff
    PUSH EBX                            ; 004bdd00
    PUSH ESI                            ; 004bdd01
    DEC EDI                             ; 004bdd02
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004bdd03
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004bdd08
    JMP 0x004bdced                      ; 004bdd0b
        ;   XREF to: 004bdced (UNCONDITIONAL_JUMP)  ; LAB_004bdced
    DEC EDI                             ; 004bdd0d
        ;   Label: LAB_004bdd0d
    DEC EAX                             ; 004bdd0e
    TEST EDI,EDI                        ; 004bdd0f
    JG 0x004bdcd0                       ; 004bdd11
        ;   XREF to: 004bdcd0 (CONDITIONAL_JUMP)  ; LAB_004bdcd0
    JMP 0x004bdce4                      ; 004bdd13
        ;   XREF to: 004bdce4 (UNCONDITIONAL_JUMP)  ; LAB_004bdce4
    PUSH 0x629649                       ; 004bdd15 | = "sounds"
        ;   Label: LAB_004bdd15
    LEA EAX,[ESP + 0x4f8]               ; 004bdd1a
    PUSH EAX                            ; 004bdd21
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004bdd22
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bdd27
    TEST EAX,EAX                        ; 004bdd2a
    JNZ 0x004bdd44                      ; 004bdd2c
        ;   XREF to: 004bdd44 (CONDITIONAL_JUMP)  ; LAB_004bdd44
    LEA EAX,[ESP + 0x3f4]               ; 004bdd2e
    PUSH EAX                            ; 004bdd35
    PUSH EBP                            ; 004bdd36
    CALL core_fileman.cpp_refreshSoundDirectory_FUN_004be590 ; 004bdd37
        ;   XREF to: 004be590 (UNCONDITIONAL_CALL)  ; void core_fileman.cpp_refreshSoundDirectory_FUN_004be590(_FILE * file_list_output, char * source_directory)
    ADD ESP,0x8                         ; 004bdd3c
    JMP 0x004bdb2c                      ; 004bdd3f
        ;   XREF to: 004bdb2c (UNCONDITIONAL_JUMP)  ; LAB_004bdb2c
    PUSH 0x629650                       ; 004bdd44 | = "file"
        ;   Label: LAB_004bdd44
    LEA EAX,[ESP + 0x4f8]               ; 004bdd49
    PUSH EAX                            ; 004bdd50
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004bdd51
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bdd56
    TEST EAX,EAX                        ; 004bdd59
    JNZ 0x004bdd7b                      ; 004bdd5b
        ;   XREF to: 004bdd7b (CONDITIONAL_JUMP)  ; LAB_004bdd7b
    LEA EAX,[ESP + 0x3f4]               ; 004bdd5d
    PUSH EAX                            ; 004bdd64
    PUSH 0x629655                       ; 004bdd65 | = "%s\n"
    MOV EDI,dword ptr [EBP]             ; 004bdd6a
    PUSH EDI                            ; 004bdd6d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004bdd6e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004bdd73
    JMP 0x004bdb2c                      ; 004bdd76
        ;   XREF to: 004bdb2c (UNCONDITIONAL_JUMP)  ; LAB_004bdb2c
    PUSH 0x629659                       ; 004bdd7b | = "msn"
        ;   Label: LAB_004bdd7b
    LEA EAX,[ESP + 0x4f8]               ; 004bdd80
    PUSH EAX                            ; 004bdd87
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004bdd88
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bdd8d
    TEST EAX,EAX                        ; 004bdd90
    JNZ 0x004bdf30                      ; 004bdd92
        ;   XREF to: 004bdf30 (CONDITIONAL_JUMP)  ; LAB_004bdf30
    LEA EAX,[ESP + 0x3f4]               ; 004bdd98
    PUSH EAX                            ; 004bdd9f
    PUSH 0x62965d                       ; 004bdda0 | = "Loading %s"
    MOV EDX,dword ptr [0x00678a60]      ; 004bdda5 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004bddab | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bddac
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bddb1
    PUSH 0x0                            ; 004bddb4
    LEA EAX,[ESP + 0x3f8]               ; 004bddb6
    PUSH EAX                            ; 004bddbd
    MOV ECX,dword ptr [0x0067d550]      ; 004bddbe | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH ECX                            ; 004bddc4 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_load_FUN_00522d90 ; 004bddc5
        ;   XREF to: 00522d90 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_00522d90(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 004bddca
    PUSH 0x0                            ; 004bddcd
    MOV EBX,dword ptr [0x0067d550]      ; 004bddcf | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EBX                            ; 004bddd5 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_00524a80 ; 004bddd6
        ;   XREF to: 00524a80 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createHeros_FUN_00524a80(CDemonMission * this_ptr, CCharacter * existing_hero)
    ADD ESP,0x8                         ; 004bdddb
    MOV ESI,dword ptr [0x0067d550]      ; 004bddde | g_CDemonMissionPtr
    PUSH ESI                            ; 004bdde4 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0 ; 004bdde5
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004bddea
    LEA EAX,[ESP + 0x3f4]               ; 004bdded
    PUSH EAX                            ; 004bddf4
    PUSH 0x629668                       ; 004bddf5 | = "WORLD\\%s\n"
    MOV EDI,dword ptr [EBP]             ; 004bddfa
    PUSH EDI                            ; 004bddfd
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004bddfe
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004bde03
    PUSH 0x0                            ; 004bde06
    LEA EAX,[ESP + 0x6c0]               ; 004bde08
    PUSH EAX                            ; 004bde0f
    PUSH 0x0                            ; 004bde10
    PUSH 0x0                            ; 004bde12
    LEA EAX,[ESP + 0x404]               ; 004bde14
    PUSH EAX                            ; 004bde1b
    CALL crt_string.c_splitpath_FUN_005ff178 ; 004bde1c
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004bde21
    MOV ESI,0x629672                    ; 004bde24 | = ".scr"
    LEA EDI,[ESP + 0x6bc]               ; 004bde29
    PUSH EDI                            ; 004bde30
    SUB ECX,ECX                         ; 004bde31
    DEC ECX                             ; 004bde33
    MOV AL,0x0                          ; 004bde34
    SCASB.REPNE ES:EDI                  ; 004bde36
    DEC EDI                             ; 004bde38
    MOV AL,byte ptr [ESI]               ; 004bde39 | = ".scr" | DAT_00629674
        ;   Label: LAB_004bde39
    MOV byte ptr [EDI],AL               ; 004bde3b
    CMP AL,0x0                          ; 004bde3d
    JZ 0x004bde51                       ; 004bde3f
        ;   XREF to: 004bde51 (CONDITIONAL_JUMP)  ; LAB_004bde51
    MOV AL,byte ptr [ESI + 0x1]         ; 004bde41 | DAT_00629673 | DAT_00629675
    ADD ESI,0x2                         ; 004bde44
    MOV byte ptr [EDI + 0x1],AL         ; 004bde47
    ADD EDI,0x2                         ; 004bde4a
    CMP AL,0x0                          ; 004bde4d
    JNZ 0x004bde39                      ; 004bde4f
        ;   XREF to: 004bde39 (CONDITIONAL_JUMP)  ; LAB_004bde39
    POP EDI                             ; 004bde51
        ;   Label: LAB_004bde51
    LEA EAX,[ESP + 0x6bc]               ; 004bde52
    PUSH EAX                            ; 004bde59
    PUSH 0x629677                       ; 004bde5a | = "world"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 004bde5f
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 004bde64
    TEST EAX,EAX                        ; 004bde67
    JLE 0x004bde84                      ; 004bde69
        ;   XREF to: 004bde84 (CONDITIONAL_JUMP)  ; LAB_004bde84
    LEA EAX,[ESP + 0x6bc]               ; 004bde6b
    PUSH EAX                            ; 004bde72
    PUSH 0x62967d                       ; 004bde73 | = "WORLD\\%s\n"
    MOV EAX,dword ptr [EBP]             ; 004bde78
    PUSH EAX                            ; 004bde7b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004bde7c
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004bde81
    PUSH 0x0                            ; 004bde84
        ;   Label: LAB_004bde84
    LEA EAX,[ESP + 0x724]               ; 004bde86
    PUSH EAX                            ; 004bde8d
    PUSH 0x0                            ; 004bde8e
    PUSH 0x0                            ; 004bde90
    LEA EAX,[ESP + 0x404]               ; 004bde92
    PUSH EAX                            ; 004bde99
    CALL crt_string.c_splitpath_FUN_005ff178 ; 004bde9a
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004bde9f
    MOV ESI,0x629687                    ; 004bdea2 | = ".txt"
    LEA EDI,[ESP + 0x720]               ; 004bdea7
    PUSH EDI                            ; 004bdeae
    SUB ECX,ECX                         ; 004bdeaf
    DEC ECX                             ; 004bdeb1
    MOV AL,0x0                          ; 004bdeb2
    SCASB.REPNE ES:EDI                  ; 004bdeb4
    DEC EDI                             ; 004bdeb6
    MOV AL,byte ptr [ESI]               ; 004bdeb7 | = ".txt" | DAT_00629689
        ;   Label: LAB_004bdeb7
    MOV byte ptr [EDI],AL               ; 004bdeb9
    CMP AL,0x0                          ; 004bdebb
    JZ 0x004bdecf                       ; 004bdebd
        ;   XREF to: 004bdecf (CONDITIONAL_JUMP)  ; LAB_004bdecf
    MOV AL,byte ptr [ESI + 0x1]         ; 004bdebf | DAT_00629688 | DAT_0062968a
    ADD ESI,0x2                         ; 004bdec2
    MOV byte ptr [EDI + 0x1],AL         ; 004bdec5
    ADD EDI,0x2                         ; 004bdec8
    CMP AL,0x0                          ; 004bdecb
    JNZ 0x004bdeb7                      ; 004bdecd
        ;   XREF to: 004bdeb7 (CONDITIONAL_JUMP)  ; LAB_004bdeb7
    POP EDI                             ; 004bdecf
        ;   Label: LAB_004bdecf
    LEA EAX,[ESP + 0x720]               ; 004bded0
    PUSH EAX                            ; 004bded7
    PUSH 0x62968c                       ; 004bded8 | = "world"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 004bdedd
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 004bdee2
    TEST EAX,EAX                        ; 004bdee5
    JLE 0x004bdf02                      ; 004bdee7
        ;   XREF to: 004bdf02 (CONDITIONAL_JUMP)  ; LAB_004bdf02
    LEA EAX,[ESP + 0x720]               ; 004bdee9
    PUSH EAX                            ; 004bdef0
    PUSH 0x629692                       ; 004bdef1 | = "WORLD\\%s\n"
    MOV EDX,dword ptr [EBP]             ; 004bdef6
    PUSH EDX                            ; 004bdef9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004bdefa
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004bdeff
    PUSH 0x62969c                       ; 004bdf02 | = "Adding to file list."
        ;   Label: LAB_004bdf02
    MOV ECX,dword ptr [0x00678a60]      ; 004bdf07 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004bdf0d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bdf0e
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004bdf13
    PUSH 0x0                            ; 004bdf16
    MOV EBX,dword ptr [EBP]             ; 004bdf18
    PUSH EBX                            ; 004bdf1b
    MOV ESI,dword ptr [0x0067d550]      ; 004bdf1c | g_CDemonMissionPtr
    PUSH ESI                            ; 004bdf22 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_addFilesToExtract_FUN_00524e60 ; 004bdf23
        ;   XREF to: 00524e60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addFilesToExtract_FUN_00524e60(CDemonMission * this_ptr, _FILE * file_handle, int unknown_flag)
    ADD ESP,0xc                         ; 004bdf28
    JMP 0x004bdb2c                      ; 004bdf2b
        ;   XREF to: 004bdb2c (UNCONDITIONAL_JUMP)  ; LAB_004bdb2c
    PUSH 0x6296b1                       ; 004bdf30 | = "kfm"
        ;   Label: LAB_004bdf30
    LEA EAX,[ESP + 0x4f8]               ; 004bdf35
    PUSH EAX                            ; 004bdf3c
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004bdf3d
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bdf42
    TEST EAX,EAX                        ; 004bdf45
    JNZ 0x004bdf5f                      ; 004bdf47
        ;   XREF to: 004bdf5f (CONDITIONAL_JUMP)  ; LAB_004bdf5f
    LEA EAX,[ESP + 0x3f4]               ; 004bdf49
    PUSH EAX                            ; 004bdf50
    PUSH EBP                            ; 004bdf51
    CALL core_fileman.cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230 ; 004bdf52
        ;   XREF to: 004be230 (UNCONDITIONAL_CALL)  ; void core_fileman.cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230(CDemonFileManager * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004bdf57
    JMP 0x004bdb2c                      ; 004bdf5a
        ;   XREF to: 004bdb2c (UNCONDITIONAL_JUMP)  ; LAB_004bdb2c
    PUSH 0x6296b5                       ; 004bdf5f | = "cth"
        ;   Label: LAB_004bdf5f
    LEA EAX,[ESP + 0x4f8]               ; 004bdf64
    PUSH EAX                            ; 004bdf6b
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004bdf6c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bdf71
    TEST EAX,EAX                        ; 004bdf74
    JNZ 0x004bdf8e                      ; 004bdf76
        ;   XREF to: 004bdf8e (CONDITIONAL_JUMP)  ; LAB_004bdf8e
    LEA EAX,[ESP + 0x3f4]               ; 004bdf78
    PUSH EAX                            ; 004bdf7f
    PUSH EBP                            ; 004bdf80
    CALL core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150 ; 004bdf81
        ;   XREF to: 004be150 (UNCONDITIONAL_CALL)  ; void core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150(CDemonFileManager * file_manager_ptr, char * cloth_filename)
    ADD ESP,0x8                         ; 004bdf86
    JMP 0x004bdb2c                      ; 004bdf89
        ;   XREF to: 004bdb2c (UNCONDITIONAL_JUMP)  ; LAB_004bdb2c
    PUSH 0x6296b9                       ; 004bdf8e | = "dfm"
        ;   Label: LAB_004bdf8e
    LEA EAX,[ESP + 0x4f8]               ; 004bdf93
    PUSH EAX                            ; 004bdf9a
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004bdf9b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bdfa0
    TEST EAX,EAX                        ; 004bdfa3
    JNZ 0x004bdfbd                      ; 004bdfa5
        ;   XREF to: 004bdfbd (CONDITIONAL_JUMP)  ; LAB_004bdfbd
    LEA EAX,[ESP + 0x3f4]               ; 004bdfa7
    PUSH EAX                            ; 004bdfae
    PUSH EBP                            ; 004bdfaf
    CALL core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070 ; 004bdfb0
        ;   XREF to: 004be070 (UNCONDITIONAL_CALL)  ; void core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070(CDemonFileManager * file_manager_ptr, char * model_filename)
    ADD ESP,0x8                         ; 004bdfb5
    JMP 0x004bdb2c                      ; 004bdfb8
        ;   XREF to: 004bdb2c (UNCONDITIONAL_JUMP)  ; LAB_004bdb2c
    PUSH 0x6296bd                       ; 004bdfbd | = "set"
        ;   Label: LAB_004bdfbd
    LEA EAX,[ESP + 0x4f8]               ; 004bdfc2
    PUSH EAX                            ; 004bdfc9
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004bdfca
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bdfcf
    TEST EAX,EAX                        ; 004bdfd2
    JNZ 0x004bdfec                      ; 004bdfd4
        ;   XREF to: 004bdfec (CONDITIONAL_JUMP)  ; LAB_004bdfec
    LEA EAX,[ESP + 0x3f4]               ; 004bdfd6
    PUSH EAX                            ; 004bdfdd
    PUSH EBP                            ; 004bdfde
    CALL core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0 ; 004bdfdf
        ;   XREF to: 004bd8e0 (UNCONDITIONAL_CALL)  ; void core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0(CDemonFileManager * this_ptr, char * set_filename)
    ADD ESP,0x8                         ; 004bdfe4
    JMP 0x004bdb2c                      ; 004bdfe7
        ;   XREF to: 004bdb2c (UNCONDITIONAL_JUMP)  ; LAB_004bdb2c
    LEA EAX,[ESP + 0x4f4]               ; 004bdfec
        ;   Label: LAB_004bdfec
    PUSH EAX                            ; 004bdff3
    PUSH 0x6296c1                       ; 004bdff4 | = "Invalid tag \"%s\""
    MOV EBP,dword ptr [0x00678a60]      ; 004bdff9 | g_CEditorToolsPtr
    PUSH EBP                            ; 004bdfff | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004be000
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004be005
    PUSH 0x126                          ; 004be008
    PUSH 0x6296d2                       ; 004be00d | = "..\\core\\fileman.cpp"
    MOV EAX,dword ptr [ESP + 0x78c]     ; 004be012
    PUSH EAX                            ; 004be019
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004be01a
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004be01f
    ADD ESP,0x788                       ; 004be022
    POP EBP                             ; 004be028
    POP EDI                             ; 004be029
    POP ESI                             ; 004be02a
    POP EBX                             ; 004be02b
    RET                                 ; 004be02c
    PUSH 0x12d                          ; 004be02d
        ;   Label: LAB_004be02d
    PUSH 0x6296e6                       ; 004be032 | = "..\\core\\fileman.cpp"
    PUSH ESI                            ; 004be037
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004be038
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004be03d
    PUSH EBP                            ; 004be040
    CALL engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60 ; 004be041
        ;   XREF to: 004b7c60 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60(CFileManager * this_ptr)
    ADD ESP,0x4                         ; 004be046
    PUSH 0x0                            ; 004be049
    LEA EAX,[ESP + 0x65c]               ; 004be04b
    PUSH EAX                            ; 004be052
    PUSH EBP                            ; 004be053
    CALL engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 ; 004be054
        ;   XREF to: 004b5a50 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50(CFileManager * this_ptr, char * pod_filename, char * volume_name)
    ADD ESP,0xc                         ; 004be059
    ADD ESP,0x788                       ; 004be05c
    POP EBP                             ; 004be062
    POP EDI                             ; 004be063
    POP ESI                             ; 004be064
    POP EBX                             ; 004be065
    RET                                 ; 004be066

