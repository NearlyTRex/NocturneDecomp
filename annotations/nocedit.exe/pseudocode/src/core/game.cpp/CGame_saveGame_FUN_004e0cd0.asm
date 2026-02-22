; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_saveGame_FUN_004e0cd0(CGame *this_ptr,char *save_filename)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   save_filename
; Local Variables:
; undefined8       Stack[-0x570]:8  local_570
; undefined8       Stack[-0x568]:8  local_568
; undefined1       Stack[-0x558]:1  local_558
; undefined1       Stack[-0x557]:1  local_557
; undefined1       Stack[-0x454]:1  local_454
; undefined1       Stack[-0x350]:1  local_350
; undefined1       Stack[-0x24c]:1  local_24c
; undefined1       Stack[-0x14c]:1  local_14c
; undefined1       Stack[-0x108]:1  local_108
; undefined4       Stack[-0xe8]:4  local_e8
; undefined1       Stack[-0xcc]:1  local_cc
; undefined1       Stack[-0x88]:1  local_88
; undefined4       Stack[-0x6c]:4  local_6c
; undefined1       Stack[-0x50]:1  local_50
; undefined1       Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_processHotkeys_FUN_004dcee0 at 004dd523
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db90d
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_save_during_ci_0062c945
;   TerminatedCString s_noc_0062c965
;   TerminatedCString s_noc_0062c969
;   TerminatedCString s_noc_0062c96e
;   TerminatedCString s_save_0062c972
;   TerminatedCString s_Save_game_0062c977
;   TerminatedCString s_s_noc_0062c981
;   TerminatedCString s_save_0062c988
;   TerminatedCString s_wt_0062c9a1
;   TerminatedCString s_save_0062c9a4
;   TerminatedCString s_Warning_Your_game_didn_t_0062c9a9
;   TerminatedCString s_NOC_file_version_0062c9ca
;   TerminatedCString s_d_0062c9e0
;   TerminatedCString s_Hero_count_local_hero_in_0062c9e4
;   TerminatedCString s_d_d_0062ca10
;   ... and 38 more
;
; Called Functions:
;   core_event.cpp_CEventList_saveState_FUN_004b1380
;   core_fire.cpp_CFireEffect_save_FUN_004c9380
;   core_mission.cpp_CDemonMission_writeFile_FUN_00523600
;   core_script.cpp_CScript_saveState_FUN_00560b50
;   core_set.cpp_CDemonSet_saveLightState_FUN_00571170
;   core_set.cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0
;   crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0
;   crt_fstream.cpp_ifstream_dtor_FUN_005ff856
;   crt_fstream.cpp_ofstream_ctor_FUN_005ff95c
;   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
;   crt_fstream.cpp_openFile_FUN_00600e85
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fflush_FUN_00600e29
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_remove_FUN_005ff9d0
;   ... and 16 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0cd0
        ;   Label: core_game.cpp_CGame_saveGame_FUN_004e0cd0
    PUSH ESI                            ; 004e0cd1
    PUSH EDI                            ; 004e0cd2
    PUSH EBP                            ; 004e0cd3
    SUB ESP,0x548                       ; 004e0cd4
    MOV EBP,dword ptr [ESP + 0x55c]     ; 004e0cda
    MOV EBX,dword ptr [ESP + 0x560]     ; 004e0ce1
    CMP dword ptr [EBP + 0x228],0x0     ; 004e0ce8
    JNZ 0x004e114a                      ; 004e0cef
        ;   XREF to: 004e114a (CONDITIONAL_JUMP)  ; LAB_004e114a
    PUSH 0x67b670                       ; 004e0cf5 | = "save\\$$SAVE$$.TMP"
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 004e0cfa
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 004e0cff
    LEA EAX,[ESP + 0x30c]               ; 004e0d02
    PUSH EAX                            ; 004e0d09
    PUSH 0x0                            ; 004e0d0a
    PUSH 0x0                            ; 004e0d0c
    PUSH 0x0                            ; 004e0d0e
    PUSH 0x2d82c80                      ; 004e0d10 | g_CurrentSaveFile
    CALL crt_string.c_splitpath_FUN_005ff178 ; 004e0d15
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004e0d1a
    PUSH 0x62c965                       ; 004e0d1d | = "noc"
    LEA EAX,[ESP + 0x310]               ; 004e0d22
    PUSH EAX                            ; 004e0d29
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004e0d2a
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e0d2f
    TEST EAX,EAX                        ; 004e0d32
    JNZ 0x004e1172                      ; 004e0d34
        ;   XREF to: 004e1172 (CONDITIONAL_JUMP)  ; LAB_004e1172
    MOV ESI,0x2d82c80                   ; 004e0d3a | g_CurrentSaveFile
        ;   Label: LAB_004e0d3a
    MOV EDI,ESP                         ; 004e0d3f
    PUSH EDI                            ; 004e0d41
    MOV AL,byte ptr [ESI]               ; 004e0d42 | g_CurrentSaveFile | DAT_02d82c82
        ;   Label: LAB_004e0d42
    MOV byte ptr [EDI],AL               ; 004e0d44
    CMP AL,0x0                          ; 004e0d46
    JZ 0x004e0d5a                       ; 004e0d48
        ;   XREF to: 004e0d5a (CONDITIONAL_JUMP)  ; LAB_004e0d5a
    MOV AL,byte ptr [ESI + 0x1]         ; 004e0d4a | DAT_02d82c81 | DAT_02d82c83
    ADD ESI,0x2                         ; 004e0d4d
    MOV byte ptr [EDI + 0x1],AL         ; 004e0d50
    ADD EDI,0x2                         ; 004e0d53
    CMP AL,0x0                          ; 004e0d56
    JNZ 0x004e0d42                      ; 004e0d58
        ;   XREF to: 004e0d42 (CONDITIONAL_JUMP)  ; LAB_004e0d42
    POP EDI                             ; 004e0d5a
        ;   Label: LAB_004e0d5a
    TEST EBX,EBX                        ; 004e0d5b
        ;   Label: LAB_004e0d5b
    JZ 0x004e1199                       ; 004e0d5d
        ;   XREF to: 004e1199 (CONDITIONAL_JUMP)  ; LAB_004e1199
    MOV EDI,ESP                         ; 004e0d63
    MOV ESI,EBX                         ; 004e0d65
    PUSH EDI                            ; 004e0d67
    MOV AL,byte ptr [ESI]               ; 004e0d68
        ;   Label: LAB_004e0d68
    MOV byte ptr [EDI],AL               ; 004e0d6a
    CMP AL,0x0                          ; 004e0d6c
    JZ 0x004e0d80                       ; 004e0d6e
        ;   XREF to: 004e0d80 (CONDITIONAL_JUMP)  ; LAB_004e0d80
    MOV AL,byte ptr [ESI + 0x1]         ; 004e0d70
    ADD ESI,0x2                         ; 004e0d73
    MOV byte ptr [EDI + 0x1],AL         ; 004e0d76
    ADD EDI,0x2                         ; 004e0d79
    CMP AL,0x0                          ; 004e0d7c
    JNZ 0x004e0d68                      ; 004e0d7e
        ;   XREF to: 004e0d68 (CONDITIONAL_JUMP)  ; LAB_004e0d68
    POP EDI                             ; 004e0d80
        ;   Label: LAB_004e0d80
    PUSH 0x62c988                       ; 004e0d81 | = "save"
        ;   Label: LAB_004e0d81
    CALL crt_watcom.c__mkdir_FUN_00600e10 ; 004e0d86
        ;   XREF to: 00600e10 (UNCONDITIONAL_CALL)  ; int crt_watcom.c__mkdir_FUN_00600e10(char * path)
    ADD ESP,0x4                         ; 004e0d8b
    PUSH 0x62c9a1                       ; 004e0d8e | = "wt"
    LEA EAX,[ESP + 0x4]                 ; 004e0d93
    PUSH EAX                            ; 004e0d97
    XOR EBX,EBX                         ; 004e0d98
    PUSH 0x62c9a4                       ; 004e0d9a | = "save"
    MOV dword ptr [ESP + 0x550],EBX     ; 004e0d9f
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004e0da6
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 004e0dab
    ADD ESP,0xc                         ; 004e0dad
    MOV EDI,EAX                         ; 004e0db0
    TEST EAX,EAX                        ; 004e0db2
    JZ 0x004e1206                       ; 004e0db4
        ;   XREF to: 004e1206 (CONDITIONAL_JUMP)  ; LAB_004e1206
    PUSH 0x62c9ca                       ; 004e0dba | = "// .NOC file version\n"
    PUSH EAX                            ; 004e0dbf
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004e0dc0
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004e0dc5
    PUSH 0x9                            ; 004e0dc8
    PUSH 0x62c9e0                       ; 004e0dca | = "%d\n"
    PUSH EBX                            ; 004e0dcf
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004e0dd0
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004e0dd5
    PUSH EBX                            ; 004e0dd8
    MOV ESI,dword ptr [0x0067d550]      ; 004e0dd9 | g_CDemonMissionPtr
    PUSH ESI                            ; 004e0ddf | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_writeFile_FUN_00523600 ; 004e0de0
        ;   XREF to: 00523600 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_writeFile_FUN_00523600(CDemonMission * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004e0de5
    PUSH 0x62c9e4                       ; 004e0de8 | = "// Hero count, local hero index, hero..."
    PUSH EBX                            ; 004e0ded
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004e0dee
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004e0df3
    MOV EAX,[0x02db87d0]                ; 004e0df6 | g_LocalHeroIndex
    PUSH EAX                            ; 004e0dfb
    MOV EDX,dword ptr [0x02db87bc]      ; 004e0dfc | g_HeroCount
    PUSH EDX                            ; 004e0e02
    PUSH 0x62ca10                       ; 004e0e03 | = "%d, %d\n"
    PUSH EBX                            ; 004e0e08
    XOR ESI,ESI                         ; 004e0e09
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004e0e0b
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV ECX,dword ptr [0x02db87bc]      ; 004e0e10 | g_HeroCount
    ADD ESP,0x10                        ; 004e0e16
    TEST ECX,ECX                        ; 004e0e19
    JLE 0x004e0e50                      ; 004e0e1b
        ;   XREF to: 004e0e50 (CONDITIONAL_JUMP)  ; LAB_004e0e50
    XOR EBX,EBX                         ; 004e0e1d
    MOV EAX,dword ptr [EBX + 0x2db87c0] ; 004e0e1f | g_HeroActors | DAT_02db87c4
        ;   Label: LAB_004e0e1f
    PUSH EAX                            ; 004e0e25
    PUSH 0x62ca18                       ; 004e0e26 | = "%s\n"
    PUSH EDI                            ; 004e0e2b
    ADD EBX,0x4                         ; 004e0e2c
    INC ESI                             ; 004e0e2f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004e0e30
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EDX,dword ptr [0x02db87bc]      ; 004e0e35 | g_HeroCount
    ADD ESP,0xc                         ; 004e0e3b
    CMP ESI,EDX                         ; 004e0e3e
    JL 0x004e0e1f                       ; 004e0e40
        ;   XREF to: 004e0e1f (CONDITIONAL_JUMP)  ; LAB_004e0e1f
    LEA EAX,[EAX]                       ; 004e0e42
    LEA EDX,[EDX]                       ; 004e0e48
    MOV EAX,EAX                         ; 004e0e4e
    PUSH EDI                            ; 004e0e50
        ;   Label: LAB_004e0e50
    MOV ECX,dword ptr [0x006793d0]      ; 004e0e51 | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 004e0e57 | g_CEventListInstance
    CALL core_event.cpp_CEventList_saveState_FUN_004b1380 ; 004e0e58
        ;   XREF to: 004b1380 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_saveState_FUN_004b1380(CEventList * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004e0e5d
    PUSH EDI                            ; 004e0e60
    MOV EBX,dword ptr [0x00680d50]      ; 004e0e61 | g_CScriptInstance | g_CScriptPtr
    PUSH EBX                            ; 004e0e67 | g_CScriptInstance
    CALL core_script.cpp_CScript_saveState_FUN_00560b50 ; 004e0e68
        ;   XREF to: 00560b50 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_saveState_FUN_00560b50(CScript * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004e0e6d
    PUSH EDI                            ; 004e0e70
    MOV ESI,dword ptr [0x0067a3d0]      ; 004e0e71 | g_CFireEffectPtr
    PUSH ESI                            ; 004e0e77 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_save_FUN_004c9380 ; 004e0e78
        ;   XREF to: 004c9380 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_save_FUN_004c9380(CFireEffect * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004e0e7d
    PUSH 0x62ca1c                       ; 004e0e80 | = "Light state\n"
    PUSH EDI                            ; 004e0e85
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004e0e86
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004e0e8b
    PUSH 0x2d82d84                      ; 004e0e8e | DAT_02d82d84
    MOV EAX,[0x006810c8]                ; 004e0e93 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 004e0e98 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_saveLightState_FUN_00571170 ; 004e0e99
        ;   XREF to: 00571170 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_saveLightState_FUN_00571170(CDemonSet * this_ptr, void * param_2)
    ADD ESP,0x8                         ; 004e0e9e
    MOV EDX,dword ptr [0x02d82d84]      ; 004e0ea1 | DAT_02d82d84
    PUSH EDX                            ; 004e0ea7
    PUSH 0x62ca29                       ; 004e0ea8 | = "%d\n"
    PUSH EDI                            ; 004e0ead
    MOV EBX,0x1                         ; 004e0eae
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004e0eb3
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV ECX,dword ptr [0x02d82d84]      ; 004e0eb8 | DAT_02d82d84
    ADD ESP,0xc                         ; 004e0ebe
    CMP ECX,EBX                         ; 004e0ec1
    JL 0x004e0ef0                       ; 004e0ec3
        ;   XREF to: 004e0ef0 (CONDITIONAL_JUMP)  ; LAB_004e0ef0
    MOV ESI,0x4                         ; 004e0ec5
    MOV EAX,dword ptr [ESI + 0x2d82d84] ; 004e0eca | DAT_02d82d88 | DAT_02d82d8c
        ;   Label: LAB_004e0eca
    PUSH EAX                            ; 004e0ed0
    PUSH 0x62ca2d                       ; 004e0ed1 | = "%d\n"
    PUSH EDI                            ; 004e0ed6
    ADD ESI,0x4                         ; 004e0ed7
    INC EBX                             ; 004e0eda
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004e0edb
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EDX,dword ptr [0x02d82d84]      ; 004e0ee0 | DAT_02d82d84
    ADD ESP,0xc                         ; 004e0ee6
    CMP EBX,EDX                         ; 004e0ee9
    JLE 0x004e0eca                      ; 004e0eeb
        ;   XREF to: 004e0eca (CONDITIONAL_JUMP)  ; LAB_004e0eca
    LEA EAX,[EAX]                       ; 004e0eed
    PUSH 0x62ca31                       ; 004e0ef0 | = "Game stats\n"
        ;   Label: LAB_004e0ef0
    PUSH EDI                            ; 004e0ef5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004e0ef6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004e0efb
    MOV ECX,dword ptr [EBP + 0x254]     ; 004e0efe
    PUSH ECX                            ; 004e0f04
    MOV EBX,dword ptr [EBP + 0x24c]     ; 004e0f05
    PUSH EBX                            ; 004e0f0b
    SUB ESP,0x8                         ; 004e0f0c
    FLD float ptr [EBP + 0x248]         ; 004e0f0f
    FSTP double ptr [ESP]               ; 004e0f15
    SUB ESP,0x8                         ; 004e0f18
    FLD float ptr [EBP + 0x250]         ; 004e0f1b
    FSTP double ptr [ESP]               ; 004e0f21
    PUSH 0x62ca3d                       ; 004e0f24 | = "%f,%f,%d,%d\n"
    PUSH EDI                            ; 004e0f29
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004e0f2a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 004e0f2f
    PUSH EDI                            ; 004e0f32
    MOV ESI,dword ptr [0x006810c8]      ; 004e0f33 | g_CDemonSetPtr
    PUSH ESI                            ; 004e0f39 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0 ; 004e0f3a
        ;   XREF to: 005711b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 004e0f3f
    PUSH 0xd50                          ; 004e0f42
    PUSH 0x62ca4a                       ; 004e0f47 | = "..\\core\\game.cpp"
    PUSH EDI                            ; 004e0f4c
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e0f4d
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004e0f52
    XOR EDI,EDI                         ; 004e0f55
    MOV EBP,dword ptr [ESP + 0x544]     ; 004e0f57
    MOV dword ptr [0x00822040],EDI      ; 004e0f5e | g_IncludeCommentsWhenWriting
    TEST EBP,EBP                        ; 004e0f64
    JZ 0x004e1111                       ; 004e0f66
        ;   XREF to: 004e1111 (CONDITIONAL_JUMP)  ; LAB_004e1111
    PUSH 0x67b670                       ; 004e0f6c | = "save\\$$SAVE$$.TMP"
    PUSH 0x62ca5b                       ; 004e0f71 | DAT_0062ca5b
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 004e0f76
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 004e0f7b
    PUSH EDI                            ; 004e0f7e
    MOV dword ptr [ESP + 0x544],EAX     ; 004e0f7f
    LEA EAX,[ESP + 0x410]               ; 004e0f86
    PUSH EAX                            ; 004e0f8d
    CALL crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0 ; 004e0f8e
        ;   XREF to: 005ff8f0 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0(ifstream * this_ptr, int c1)
    ADD ESP,0x8                         ; 004e0f93
    PUSH EDI                            ; 004e0f96
    LEA EAX,[ESP + 0x490]               ; 004e0f97
    PUSH EAX                            ; 004e0f9e
    CALL crt_fstream.cpp_ofstream_ctor_FUN_005ff95c ; 004e0f9f
        ;   XREF to: 005ff95c (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_ctor_FUN_005ff95c(ofstream * this_ptr, int c1)
    ADD ESP,0x8                         ; 004e0fa4
    PUSH 0x62ca5c                       ; 004e0fa7 | = "Warning!  Your game didn't save."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e0fac
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004e0fb1
    MOV ESI,dword ptr [0x00665c50]      ; 004e0fb4 | g_DefaultStreamBufferSize
    PUSH ESI                            ; 004e0fba
    PUSH 0x121                          ; 004e0fbb
    PUSH 0x67b670                       ; 004e0fc0 | = "save\\$$SAVE$$.TMP"
    MOV EBX,EAX                         ; 004e0fc5
    LEA EAX,[ESP + 0x418]               ; 004e0fc7
    PUSH EAX                            ; 004e0fce
    CALL crt_fstream.cpp_openFile_FUN_00600e85 ; 004e0fcf
        ;   XREF to: 00600e85 (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_openFile_FUN_00600e85(ifstream * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004e0fd4
    CMP dword ptr [ESP + 0x470],0x0     ; 004e0fd7
    JNZ 0x004e1236                      ; 004e0fdf
        ;   XREF to: 004e1236 (CONDITIONAL_JUMP)  ; LAB_004e1236
    MOV EAX,ESP                         ; 004e0fe5
    PUSH EAX                            ; 004e0fe7
    PUSH 0x62ca7d                       ; 004e0fe8 | = "save"
    PUSH 0x62ca82                       ; 004e0fed | = "%s\\%s"
    LEA EAX,[ESP + 0x214]               ; 004e0ff2
    PUSH EAX                            ; 004e0ff9
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004e0ffa
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004e0fff
    PUSH ESI                            ; 004e1002
    PUSH 0x112                          ; 004e1003
    LEA EAX,[ESP + 0x210]               ; 004e1008
    PUSH EAX                            ; 004e100f
    LEA EAX,[ESP + 0x498]               ; 004e1010
    PUSH EAX                            ; 004e1017
    CALL crt_fstream.cpp_openFile_FUN_00600e85 ; 004e1018
        ;   XREF to: 00600e85 (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_openFile_FUN_00600e85(ifstream * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004e101d
    CMP dword ptr [ESP + 0x4ec],0x0     ; 004e1020
    JNZ 0x004e1273                      ; 004e1028
        ;   XREF to: 004e1273 (CONDITIONAL_JUMP)  ; LAB_004e1273
    PUSH 0x4                            ; 004e102e
    PUSH 0x67b684                       ; 004e1030 | g_MagicNumEFD
    LEA EAX,[ESP + 0x4d8]               ; 004e1035
    PUSH EAX                            ; 004e103c
    CALL crt_stdio.c_stream_write_internal_FUN_005ffcb3 ; 004e103d
        ;   XREF to: 005ffcb3 (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_stream_write_internal_FUN_005ffcb3(_FILE * stream, void * buffer, SIZE_T count)
    ADD ESP,0xc                         ; 004e1042
    PUSH 0x8                            ; 004e1045
    PUSH 0x8000                         ; 004e1047
    LEA EAX,[ESP + 0x510]               ; 004e104c
    PUSH EAX                            ; 004e1053
    CALL support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0 ; 004e1054
        ;   XREF to: 0043f2d0 (UNCONDITIONAL_CALL)  ; CLZWCompress * support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0(CLZWCompress * this_ptr)
    ADD ESP,0xc                         ; 004e1059
    LEA EAX,[ESP + 0x508]               ; 004e105c
    PUSH EAX                            ; 004e1063
    CALL support_codec.cpp_CLZWCompress_init_FUN_0043f320 ; 004e1064
        ;   XREF to: 0043f320 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWCompress_init_FUN_0043f320(CLZWCompress * this_ptr)
    ADD ESP,0x4                         ; 004e1069
    LEA EAX,[ESP + 0x4d0]               ; 004e106c
    PUSH EAX                            ; 004e1073
    LEA EAX,[ESP + 0x544]               ; 004e1074
    PUSH EAX                            ; 004e107b
    LEA EAX,[ESP + 0x458]               ; 004e107c
    PUSH EAX                            ; 004e1083
    LEA EAX,[ESP + 0x514]               ; 004e1084
    PUSH EAX                            ; 004e108b
    CALL support_codec.cpp_CLZWCompress_process_FUN_0043f360 ; 004e108c
        ;   XREF to: 0043f360 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWCompress_process_FUN_0043f360(CLZWCompress * this_ptr, _FILE * input_file, int byte_count, _FILE * output_file)
    ADD ESP,0x10                        ; 004e1091
    LEA EAX,[ESP + 0x4d0]               ; 004e1094
    PUSH EAX                            ; 004e109b
    LEA EAX,[ESP + 0x50c]               ; 004e109c
    PUSH EAX                            ; 004e10a3
    CALL support_codec.cpp_CLZWCompress_finalize_FUN_0043f440 ; 004e10a4
        ;   XREF to: 0043f440 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWCompress_finalize_FUN_0043f440(CLZWCompress * this_ptr, _FILE * output_file)
    ADD ESP,0x8                         ; 004e10a9
    LEA EAX,[ESP + 0x40c]               ; 004e10ac
    PUSH EAX                            ; 004e10b3
    CALL crt_stdio.c_fflush_FUN_00600e29 ; 004e10b4
        ;   XREF to: 00600e29 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflush_FUN_00600e29(_FILE * stream)
    ADD ESP,0x4                         ; 004e10b9
    LEA EAX,[ESP + 0x48c]               ; 004e10bc
    PUSH EAX                            ; 004e10c3
    CALL crt_stdio.c_fflush_FUN_00600e29 ; 004e10c4
        ;   XREF to: 00600e29 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fflush_FUN_00600e29(_FILE * stream)
    ADD ESP,0x4                         ; 004e10c9
    PUSH EDI                            ; 004e10cc
    LEA EAX,[ESP + 0x510]               ; 004e10cd
    PUSH EAX                            ; 004e10d4
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0 ; 004e10d5
        ;   XREF to: 0043edf0 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e10da
    PUSH 0x1                            ; 004e10dd
    LEA EAX,[ESP + 0x50c]               ; 004e10df
    PUSH EAX                            ; 004e10e6
    CALL support_codec.cpp_CCodec_dtor_FUN_0043e9b0 ; 004e10e7
        ;   XREF to: 0043e9b0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_0043e9b0(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e10ec
    PUSH EDI                            ; 004e10ef
    LEA EAX,[ESP + 0x490]               ; 004e10f0
    PUSH EAX                            ; 004e10f7
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc ; 004e10f8
        ;   XREF to: 005ff7bc (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc(ofstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e10fd
    PUSH EDI                            ; 004e1100
    LEA EAX,[ESP + 0x410]               ; 004e1101
    PUSH EAX                            ; 004e1108
    CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856 ; 004e1109
        ;   XREF to: 005ff856 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_005ff856(ifstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e110e
    PUSH 0x67b670                       ; 004e1111 | = "save\\$$SAVE$$.TMP"
        ;   Label: LAB_004e1111
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 004e1116
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 004e111b
    MOV ESI,ESP                         ; 004e111e
    MOV EDI,0x2d82c80                   ; 004e1120 | g_CurrentSaveFile
    PUSH EDI                            ; 004e1125 | g_CurrentSaveFile
    MOV AL,byte ptr [ESI]               ; 004e1126
        ;   Label: LAB_004e1126
    MOV byte ptr [EDI],AL               ; 004e1128 | g_CurrentSaveFile | DAT_02d82c82
    CMP AL,0x0                          ; 004e112a
    JZ 0x004e113e                       ; 004e112c
        ;   XREF to: 004e113e (CONDITIONAL_JUMP)  ; LAB_004e113e
    MOV AL,byte ptr [ESI + 0x1]         ; 004e112e
    ADD ESI,0x2                         ; 004e1131
    MOV byte ptr [EDI + 0x1],AL         ; 004e1134 | DAT_02d82c81 | DAT_02d82c83
    ADD EDI,0x2                         ; 004e1137
    CMP AL,0x0                          ; 004e113a
    JNZ 0x004e1126                      ; 004e113c
        ;   XREF to: 004e1126 (CONDITIONAL_JUMP)  ; LAB_004e1126
    POP EDI                             ; 004e113e
        ;   Label: LAB_004e113e
    ADD ESP,0x548                       ; 004e113f
        ;   Label: LAB_004e113f
    POP EBP                             ; 004e1145
    POP EDI                             ; 004e1146
    POP ESI                             ; 004e1147
    POP EBX                             ; 004e1148
    RET                                 ; 004e1149
    PUSH 0x62c945                       ; 004e114a | = "Unable to save during cinematic"
        ;   Label: LAB_004e114a
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e114f
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004e1154
    PUSH EAX                            ; 004e1157
    MOV EDI,dword ptr [0x00678a60]      ; 004e1158 | g_CEditorToolsPtr
    PUSH EDI                            ; 004e115e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004e115f
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e1164
    ADD ESP,0x548                       ; 004e1167
    POP EBP                             ; 004e116d
    POP EDI                             ; 004e116e
    POP ESI                             ; 004e116f
    POP EBX                             ; 004e1170
    RET                                 ; 004e1171
    PUSH 0x62c969                       ; 004e1172 | = ".noc"
        ;   Label: LAB_004e1172
    LEA EAX,[ESP + 0x310]               ; 004e1177
    PUSH EAX                            ; 004e117e
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004e117f
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e1184
    TEST EAX,EAX                        ; 004e1187
    JZ 0x004e0d3a                       ; 004e1189
        ;   XREF to: 004e0d3a (CONDITIONAL_JUMP)  ; LAB_004e0d3a
    XOR AH,AH                           ; 004e118f
    MOV byte ptr [ESP],AH               ; 004e1191
    JMP 0x004e0d5b                      ; 004e1194
        ;   XREF to: 004e0d5b (UNCONDITIONAL_JUMP)  ; LAB_004e0d5b
    PUSH 0x1                            ; 004e1199
        ;   Label: LAB_004e1199
    LEA EAX,[ESP + 0x4]                 ; 004e119b
    PUSH EAX                            ; 004e119f
    PUSH 0x62c96e                       ; 004e11a0 | = "noc"
    PUSH 0x62c972                       ; 004e11a5 | = "save"
    PUSH 0x62c977                       ; 004e11aa | = "Save game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e11af
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004e11b4
    PUSH EAX                            ; 004e11b7
    MOV ECX,dword ptr [0x00678a60]      ; 004e11b8 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004e11be | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 ; 004e11bf
        ;   XREF to: 0049fb70 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70(CEditorTools * this_ptr, char * prompt_text, char * filename_buffer, int buffer_size, ...)
    ADD ESP,0x18                        ; 004e11c4
    TEST EAX,EAX                        ; 004e11c7
    JZ 0x004e113f                       ; 004e11c9
        ;   XREF to: 004e113f (CONDITIONAL_JUMP)  ; LAB_004e113f
    PUSH EBX                            ; 004e11cf
    LEA EAX,[ESP + 0x108]               ; 004e11d0
    PUSH EAX                            ; 004e11d7
    PUSH EBX                            ; 004e11d8
    PUSH EBX                            ; 004e11d9
    LEA EAX,[ESP + 0x10]                ; 004e11da
    PUSH EAX                            ; 004e11de
    CALL crt_string.c_splitpath_FUN_005ff178 ; 004e11df
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004e11e4
    LEA EAX,[ESP + 0x104]               ; 004e11e7
    PUSH EAX                            ; 004e11ee
    PUSH 0x62c981                       ; 004e11ef | = "%s.noc"
    LEA EAX,[ESP + 0x8]                 ; 004e11f4
    PUSH EAX                            ; 004e11f8
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004e11f9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004e11fe
    JMP 0x004e0d81                      ; 004e1201
        ;   XREF to: 004e0d81 (UNCONDITIONAL_JUMP)  ; LAB_004e0d81
    PUSH 0x62c9a9                       ; 004e1206 | = "Warning!  Your game didn't save."
        ;   Label: LAB_004e1206
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e120b
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004e1210
    PUSH EAX                            ; 004e1213
    MOV EBX,dword ptr [0x00678a60]      ; 004e1214 | g_CEditorToolsPtr
    PUSH EBX                            ; 004e121a | g_CEditorToolsInstance
    XOR ESI,ESI                         ; 004e121b
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004e121d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e1222
    MOV dword ptr [0x00822040],ESI      ; 004e1225 | g_IncludeCommentsWhenWriting
    ADD ESP,0x548                       ; 004e122b
    POP EBP                             ; 004e1231
    POP EDI                             ; 004e1232
    POP ESI                             ; 004e1233
    POP EBX                             ; 004e1234
    RET                                 ; 004e1235
    PUSH EBX                            ; 004e1236
        ;   Label: LAB_004e1236
    MOV EDX,dword ptr [0x00678a60]      ; 004e1237 | g_CEditorToolsPtr
    PUSH EDX                            ; 004e123d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004e123e
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e1243
    PUSH EDI                            ; 004e1246
    LEA EAX,[ESP + 0x490]               ; 004e1247
    PUSH EAX                            ; 004e124e
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc ; 004e124f
        ;   XREF to: 005ff7bc (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc(ofstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e1254
    PUSH EDI                            ; 004e1257
    LEA EAX,[ESP + 0x410]               ; 004e1258
    PUSH EAX                            ; 004e125f
    CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856 ; 004e1260
        ;   XREF to: 005ff856 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_005ff856(ifstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e1265
    ADD ESP,0x548                       ; 004e1268
    POP EBP                             ; 004e126e
    POP EDI                             ; 004e126f
    POP ESI                             ; 004e1270
    POP EBX                             ; 004e1271
    RET                                 ; 004e1272
    PUSH EBX                            ; 004e1273
        ;   Label: LAB_004e1273
    MOV EBX,dword ptr [0x00678a60]      ; 004e1274 | g_CEditorToolsPtr
    PUSH EBX                            ; 004e127a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004e127b
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e1280
    PUSH EDI                            ; 004e1283
    LEA EAX,[ESP + 0x490]               ; 004e1284
    PUSH EAX                            ; 004e128b
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc ; 004e128c
        ;   XREF to: 005ff7bc (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc(ofstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e1291
    PUSH EDI                            ; 004e1294
    LEA EAX,[ESP + 0x410]               ; 004e1295
    PUSH EAX                            ; 004e129c
    CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856 ; 004e129d
        ;   XREF to: 005ff856 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_005ff856(ifstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e12a2
    ADD ESP,0x548                       ; 004e12a5
    POP EBP                             ; 004e12ab
    POP EDI                             ; 004e12ac
    POP ESI                             ; 004e12ad
    POP EBX                             ; 004e12ae
    RET                                 ; 004e12af

