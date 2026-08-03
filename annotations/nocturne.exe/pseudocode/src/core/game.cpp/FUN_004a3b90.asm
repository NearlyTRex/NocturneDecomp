; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004a3b90(CGame *this_ptr,char *save_filename)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   save_filename
; Local Variables:
; undefined8       Stack[-0x570]:8  local_570
; undefined8       Stack[-0x568]:8  local_568
; undefined1       Stack[-0x558]:1  local_558
; undefined1       Stack[-0x557]:1  local_557
; undefined        Stack[-0x454]:1  local_454
; undefined        Stack[-0x350]:1  local_350
; undefined        Stack[-0x24c]:1  local_24c
; undefined        Stack[-0x14c]:1  local_14c
; undefined        Stack[-0x108]:1  local_108
; undefined4       Stack[-0xe8]:4  local_e8
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_FUN_0049f930 at 0049ff8a
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049e38b
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_save_during_ci_00583b12
;   TerminatedCString s_noc_00583b32
;   TerminatedCString s_noc_00583b36
;   TerminatedCString s_noc_00583b3b
;   TerminatedCString s_save_00583b3f
;   TerminatedCString s_Save_game_00583b44
;   TerminatedCString s_s_noc_00583b4e
;   TerminatedCString s_save_00583b55
;   TerminatedCString s_wt_00583b5a
;   TerminatedCString s_Warning_Your_game_didn_t_00583b65
;   TerminatedCString s_NOC_file_version_00583b86
;   TerminatedCString s_d_00583b9c
;   TerminatedCString s_Hero_count_local_hero_in_00583ba0
;   TerminatedCString s_d_d_00583bcc
;   TerminatedCString s_s_00583bd4
;   ... and 30 more
;
; Called Functions:
;   core_event.cpp_CEventList_saveState_FUN_00481330
;   core_fire.cpp_CFireEffect_save_FUN_0048c850
;   core_mission.cpp_FUN_004d8720
;   core_script.cpp_FUN_005055f0
;   core_set.cpp_CDemonSet_saveMasterLightStates_FUN_0050e860
;   core_set.cpp_CDemonSet_saveStateInfo_FUN_0050e8a0
;   crt_fstream.cpp_ifstream_ctor_FUN_005652fe
;   crt_fstream.cpp_ifstream_dtor_FUN_00565264
;   crt_fstream.cpp_ofstream_ctor_FUN_0056536a
;   crt_fstream.cpp_ofstream_dtor_FUN_005651ca
;   crt_fstream.cpp_openFile_FUN_00565eb5
;   crt_fstream.cpp_ostream_write_FUN_00565a13
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fflush_FUN_00565e59
;   crt_stdio.c_fopen_FUN_0056568c
;   ... and 16 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3b90
        ;   Label: core_game.cpp_FUN_004a3b90
    PUSH ESI                            ; 004a3b91
    PUSH EDI                            ; 004a3b92
    PUSH EBP                            ; 004a3b93
    SUB ESP,0x548                       ; 004a3b94
    MOV EBP,dword ptr [ESP + 0x55c]     ; 004a3b9a
    MOV EBX,dword ptr [ESP + 0x560]     ; 004a3ba1
    CMP dword ptr [EBP + 0x228],0x0     ; 004a3ba8
    JNZ 0x004a4000                      ; 004a3baf
        ;   XREF to: 004a4000 (CONDITIONAL_JUMP)  ; LAB_004a4000
    PUSH 0x5b9370                       ; 004a3bb5 | = "save\\$$SAVE$$.TMP"
    CALL crt_stdio.c_remove_FUN_005657c0 ; 004a3bba
        ;   XREF to: 005657c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005657c0(char * filename)
    ADD ESP,0x4                         ; 004a3bbf
    LEA EAX,[ESP + 0x30c]               ; 004a3bc2
    PUSH EAX                            ; 004a3bc9
    PUSH 0x0                            ; 004a3bca
    PUSH 0x0                            ; 004a3bcc
    PUSH 0x0                            ; 004a3bce
    PUSH 0x1c78598                      ; 004a3bd0 | DAT_01c78598
    CALL crt_string.c_splitpath_FUN_00566498 ; 004a3bd5
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_00566498(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004a3bda
    PUSH 0x583b32                       ; 004a3bdd | = "noc"
    LEA EAX,[ESP + 0x310]               ; 004a3be2
    PUSH EAX                            ; 004a3be9
    CALL crt_string.c__stricmp_FUN_00564520 ; 004a3bea
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a3bef
    TEST EAX,EAX                        ; 004a3bf2
    JNZ 0x004a4028                      ; 004a3bf4
        ;   XREF to: 004a4028 (CONDITIONAL_JUMP)  ; LAB_004a4028
    MOV ESI,0x1c78598                   ; 004a3bfa
        ;   Label: LAB_004a3bfa
    MOV EDI,ESP                         ; 004a3bff
    PUSH EDI                            ; 004a3c01
    MOV AL,byte ptr [ESI]               ; 004a3c02 | DAT_01c78598 | DAT_01c7859a
        ;   Label: LAB_004a3c02
    MOV byte ptr [EDI],AL               ; 004a3c04
    CMP AL,0x0                          ; 004a3c06
    JZ 0x004a3c1a                       ; 004a3c08
        ;   XREF to: 004a3c1a (CONDITIONAL_JUMP)  ; LAB_004a3c1a
    MOV AL,byte ptr [ESI + 0x1]         ; 004a3c0a | DAT_01c78599 | DAT_01c7859b
    ADD ESI,0x2                         ; 004a3c0d
    MOV byte ptr [EDI + 0x1],AL         ; 004a3c10
    ADD EDI,0x2                         ; 004a3c13
    CMP AL,0x0                          ; 004a3c16
    JNZ 0x004a3c02                      ; 004a3c18
        ;   XREF to: 004a3c02 (CONDITIONAL_JUMP)  ; LAB_004a3c02
    POP EDI                             ; 004a3c1a
        ;   Label: LAB_004a3c1a
    TEST EBX,EBX                        ; 004a3c1b
        ;   Label: LAB_004a3c1b
    JZ 0x004a404f                       ; 004a3c1d
        ;   XREF to: 004a404f (CONDITIONAL_JUMP)  ; LAB_004a404f
    MOV EDI,ESP                         ; 004a3c23
    MOV ESI,EBX                         ; 004a3c25
    PUSH EDI                            ; 004a3c27
    MOV AL,byte ptr [ESI]               ; 004a3c28
        ;   Label: LAB_004a3c28
    MOV byte ptr [EDI],AL               ; 004a3c2a
    CMP AL,0x0                          ; 004a3c2c
    JZ 0x004a3c40                       ; 004a3c2e
        ;   XREF to: 004a3c40 (CONDITIONAL_JUMP)  ; LAB_004a3c40
    MOV AL,byte ptr [ESI + 0x1]         ; 004a3c30
    ADD ESI,0x2                         ; 004a3c33
    MOV byte ptr [EDI + 0x1],AL         ; 004a3c36
    ADD EDI,0x2                         ; 004a3c39
    CMP AL,0x0                          ; 004a3c3c
    JNZ 0x004a3c28                      ; 004a3c3e
        ;   XREF to: 004a3c28 (CONDITIONAL_JUMP)  ; LAB_004a3c28
    POP EDI                             ; 004a3c40
        ;   Label: LAB_004a3c40
    PUSH 0x583b55                       ; 004a3c41 | = "save"
        ;   Label: LAB_004a3c41
    CALL crt_watcom.c__mkdir_FUN_00565e40 ; 004a3c46
        ;   XREF to: 00565e40 (UNCONDITIONAL_CALL)  ; int crt_watcom.c__mkdir_FUN_00565e40(char * path)
    ADD ESP,0x4                         ; 004a3c4b
    PUSH 0x583b5a                       ; 004a3c4e | = "wt"
    MOV EBX,0x1                         ; 004a3c53
    PUSH 0x5b9370                       ; 004a3c58 | = "save\\$$SAVE$$.TMP"
    MOV dword ptr [0x00763e90],EBX      ; 004a3c5d | DAT_00763e90
    MOV dword ptr [ESP + 0x54c],EBX     ; 004a3c63
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004a3c6a
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    MOV ESI,EAX                         ; 004a3c6f
    ADD ESP,0x8                         ; 004a3c71
    MOV EBX,EAX                         ; 004a3c74
    TEST EAX,EAX                        ; 004a3c76
    JZ 0x004a40bc                       ; 004a3c78
        ;   XREF to: 004a40bc (CONDITIONAL_JUMP)  ; LAB_004a40bc
    PUSH 0x583b86                       ; 004a3c7e | = "// .NOC file version\n"
    PUSH EAX                            ; 004a3c83
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004a3c84
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004a3c89
    PUSH 0x9                            ; 004a3c8c
    PUSH 0x583b9c                       ; 004a3c8e | = "%d\n"
    PUSH ESI                            ; 004a3c93
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004a3c94
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 004a3c99
    PUSH ESI                            ; 004a3c9c
    MOV EDI,dword ptr [0x005baf90]      ; 004a3c9d | g_CDemonMission_PTR_005baf90
    PUSH EDI                            ; 004a3ca3
    CALL core_mission.cpp_FUN_004d8720  ; 004a3ca4
        ;   XREF to: 004d8720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_FUN_004d8720(CDemonMission * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004a3ca9
    PUSH 0x583ba0                       ; 004a3cac | = "// Hero count, local hero index, hero..."
    PUSH ESI                            ; 004a3cb1
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004a3cb2
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004a3cb7
    MOV EAX,[0x01cae0e8]                ; 004a3cba | DAT_01cae0e8
    PUSH EAX                            ; 004a3cbf
    MOV EDX,dword ptr [0x01cae0d4]      ; 004a3cc0 | DAT_01cae0d4
    PUSH EDX                            ; 004a3cc6
    PUSH 0x583bcc                       ; 004a3cc7 | = "%d, %d\n"
    PUSH ESI                            ; 004a3ccc
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004a3ccd
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV ECX,dword ptr [0x01cae0d4]      ; 004a3cd2 | DAT_01cae0d4
    ADD ESP,0x10                        ; 004a3cd8
    XOR ESI,ESI                         ; 004a3cdb
    TEST ECX,ECX                        ; 004a3cdd
    JLE 0x004a3d10                      ; 004a3cdf
        ;   XREF to: 004a3d10 (CONDITIONAL_JUMP)  ; LAB_004a3d10
    XOR EDI,EDI                         ; 004a3ce1
    MOV EAX,dword ptr [EDI + 0x1cae0d8] ; 004a3ce3
        ;   Label: LAB_004a3ce3
    PUSH EAX                            ; 004a3ce9
    PUSH 0x583bd4                       ; 004a3cea | = "%s\n"
    PUSH EBX                            ; 004a3cef
    ADD EDI,0x4                         ; 004a3cf0
    INC ESI                             ; 004a3cf3
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004a3cf4
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EDX,dword ptr [0x01cae0d4]      ; 004a3cf9 | DAT_01cae0d4
    ADD ESP,0xc                         ; 004a3cff
    CMP ESI,EDX                         ; 004a3d02
    JL 0x004a3ce3                       ; 004a3d04
        ;   XREF to: 004a3ce3 (CONDITIONAL_JUMP)  ; LAB_004a3ce3
    LEA EAX,[EAX]                       ; 004a3d06
    LEA EDX,[EDX]                       ; 004a3d0c
    PUSH EBX                            ; 004a3d10
        ;   Label: LAB_004a3d10
    MOV ECX,dword ptr [0x005b7650]      ; 004a3d11 | DAT_005b7650
    PUSH ECX                            ; 004a3d17
    CALL core_event.cpp_CEventList_saveState_FUN_00481330 ; 004a3d18
        ;   XREF to: 00481330 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_saveState_FUN_00481330(CEventList * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004a3d1d
    PUSH EBX                            ; 004a3d20
    MOV ESI,dword ptr [0x005be220]      ; 004a3d21 | DAT_005be220
    PUSH ESI                            ; 004a3d27 | g_CScript_01e56da0
    CALL core_script.cpp_FUN_005055f0   ; 004a3d28
        ;   XREF to: 005055f0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_005055f0(CScript * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004a3d2d
    PUSH EBX                            ; 004a3d30
    MOV EDI,dword ptr [0x005b80f0]      ; 004a3d31 | g_CFireEffect_PTR_005b80f0
    PUSH EDI                            ; 004a3d37
    CALL core_fire.cpp_CFireEffect_save_FUN_0048c850 ; 004a3d38
        ;   XREF to: 0048c850 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_save_FUN_0048c850(CFireEffect * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004a3d3d
    PUSH 0x583bd8                       ; 004a3d40 | = "Light state\n"
    PUSH EBX                            ; 004a3d45
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004a3d46
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004a3d4b
    PUSH 0x1c7869c                      ; 004a3d4e | DAT_01c7869c
    MOV EAX,[0x005be368]                ; 004a3d53 | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 004a3d58 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_saveMasterLightStates_FUN_0050e860 ; 004a3d59
        ;   XREF to: 0050e860 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_saveMasterLightStates_FUN_0050e860(CDemonSet * this_ptr, int * light_state_buffer)
    ADD ESP,0x8                         ; 004a3d5e
    MOV EDX,dword ptr [0x01c7869c]      ; 004a3d61 | DAT_01c7869c
    PUSH EDX                            ; 004a3d67
    PUSH 0x583be5                       ; 004a3d68 | = "%d\n"
    PUSH EBX                            ; 004a3d6d
    MOV ESI,0x1                         ; 004a3d6e
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004a3d73
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV ECX,dword ptr [0x01c7869c]      ; 004a3d78 | DAT_01c7869c
    ADD ESP,0xc                         ; 004a3d7e
    CMP ECX,ESI                         ; 004a3d81
    JL 0x004a3db0                       ; 004a3d83
        ;   XREF to: 004a3db0 (CONDITIONAL_JUMP)  ; LAB_004a3db0
    MOV EDI,0x4                         ; 004a3d85
    MOV EAX,dword ptr [EDI + 0x1c7869c] ; 004a3d8a | DAT_01c786a0 | DAT_01c786a4
        ;   Label: LAB_004a3d8a
    PUSH EAX                            ; 004a3d90
    PUSH 0x583be9                       ; 004a3d91 | = "%d\n"
    PUSH EBX                            ; 004a3d96
    ADD EDI,0x4                         ; 004a3d97
    INC ESI                             ; 004a3d9a
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004a3d9b
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    MOV EDX,dword ptr [0x01c7869c]      ; 004a3da0 | DAT_01c7869c
    ADD ESP,0xc                         ; 004a3da6
    CMP ESI,EDX                         ; 004a3da9
    JLE 0x004a3d8a                      ; 004a3dab
        ;   XREF to: 004a3d8a (CONDITIONAL_JUMP)  ; LAB_004a3d8a
    LEA EAX,[EAX]                       ; 004a3dad
    PUSH 0x583bed                       ; 004a3db0 | = "Game stats\n"
        ;   Label: LAB_004a3db0
    PUSH EBX                            ; 004a3db5
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004a3db6
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x8                         ; 004a3dbb
    MOV ECX,dword ptr [EBP + 0x254]     ; 004a3dbe
    PUSH ECX                            ; 004a3dc4
    MOV ESI,dword ptr [EBP + 0x24c]     ; 004a3dc5
    PUSH ESI                            ; 004a3dcb
    SUB ESP,0x8                         ; 004a3dcc
    FLD float ptr [EBP + 0x248]         ; 004a3dcf
    FSTP double ptr [ESP]               ; 004a3dd5
    SUB ESP,0x8                         ; 004a3dd8
    FLD float ptr [EBP + 0x250]         ; 004a3ddb
    FSTP double ptr [ESP]               ; 004a3de1
    PUSH 0x583bf9                       ; 004a3de4 | = "%f,%f,%d,%d\n"
    PUSH EBX                            ; 004a3de9
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004a3dea
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x20                        ; 004a3def
    PUSH EBX                            ; 004a3df2
    MOV EDI,dword ptr [0x005be368]      ; 004a3df3 | g_CDemonSet_PTR_005be368
    PUSH EDI                            ; 004a3df9 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_saveStateInfo_FUN_0050e8a0 ; 004a3dfa
        ;   XREF to: 0050e8a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_saveStateInfo_FUN_0050e8a0(CDemonSet * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004a3dff
    PUSH EBX                            ; 004a3e02
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004a3e03
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a3e08
    XOR EBP,EBP                         ; 004a3e0b
    MOV EAX,dword ptr [ESP + 0x544]     ; 004a3e0d
    MOV dword ptr [0x00763e90],EBP      ; 004a3e14 | DAT_00763e90
    TEST EAX,EAX                        ; 004a3e1a
    JZ 0x004a3fc7                       ; 004a3e1c
        ;   XREF to: 004a3fc7 (CONDITIONAL_JUMP)  ; LAB_004a3fc7
    PUSH 0x5b9370                       ; 004a3e22 | = "save\\$$SAVE$$.TMP"
    PUSH 0x583c06                       ; 004a3e27 | CHAR_00h_00583c06
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 004a3e2c
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 004a3e31
    PUSH EBP                            ; 004a3e34
    MOV dword ptr [ESP + 0x544],EAX     ; 004a3e35
    LEA EAX,[ESP + 0x410]               ; 004a3e3c
    PUSH EAX                            ; 004a3e43
    CALL crt_fstream.cpp_ifstream_ctor_FUN_005652fe ; 004a3e44
        ;   XREF to: 005652fe (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_ctor_FUN_005652fe(void * this_ptr, int c1)
    ADD ESP,0x8                         ; 004a3e49
    PUSH EBP                            ; 004a3e4c
    LEA EAX,[ESP + 0x490]               ; 004a3e4d
    PUSH EAX                            ; 004a3e54
    CALL crt_fstream.cpp_ofstream_ctor_FUN_0056536a ; 004a3e55
        ;   XREF to: 0056536a (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_ctor_FUN_0056536a(void * this_ptr, int c1)
    ADD ESP,0x8                         ; 004a3e5a
    PUSH 0x583c07                       ; 004a3e5d | = "Warning!  Your game didn't save."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a3e62
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a3e67
    MOV ESI,dword ptr [0x005a47a0]      ; 004a3e6a | DAT_005a47a0
    PUSH ESI                            ; 004a3e70
    PUSH 0x121                          ; 004a3e71
    PUSH 0x5b9370                       ; 004a3e76 | = "save\\$$SAVE$$.TMP"
    MOV EBX,EAX                         ; 004a3e7b
    LEA EAX,[ESP + 0x418]               ; 004a3e7d
    PUSH EAX                            ; 004a3e84
    CALL crt_fstream.cpp_openFile_FUN_00565eb5 ; 004a3e85
        ;   XREF to: 00565eb5 (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_openFile_FUN_00565eb5(void * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004a3e8a
    CMP dword ptr [ESP + 0x470],0x0     ; 004a3e8d
    JNZ 0x004a40ea                      ; 004a3e95
        ;   XREF to: 004a40ea (CONDITIONAL_JUMP)  ; LAB_004a40ea
    MOV EAX,ESP                         ; 004a3e9b
    PUSH EAX                            ; 004a3e9d
    PUSH 0x583c28                       ; 004a3e9e | = "save"
    PUSH 0x583c2d                       ; 004a3ea3 | = "%s\\%s"
    LEA EAX,[ESP + 0x214]               ; 004a3ea8
    PUSH EAX                            ; 004a3eaf
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004a3eb0
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a3eb5
    PUSH ESI                            ; 004a3eb8
    PUSH 0x112                          ; 004a3eb9
    LEA EAX,[ESP + 0x210]               ; 004a3ebe
    PUSH EAX                            ; 004a3ec5
    LEA EAX,[ESP + 0x498]               ; 004a3ec6
    PUSH EAX                            ; 004a3ecd
    CALL crt_fstream.cpp_openFile_FUN_00565eb5 ; 004a3ece
        ;   XREF to: 00565eb5 (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_openFile_FUN_00565eb5(void * stream_obj, char * filename, int open_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004a3ed3
    CMP dword ptr [ESP + 0x4ec],0x0     ; 004a3ed6
    JNZ 0x004a4127                      ; 004a3ede
        ;   XREF to: 004a4127 (CONDITIONAL_JUMP)  ; LAB_004a4127
    PUSH 0x4                            ; 004a3ee4
    PUSH 0x5b9384                       ; 004a3ee6 | DAT_005b9384
    LEA EAX,[ESP + 0x4d8]               ; 004a3eeb
    PUSH EAX                            ; 004a3ef2
    CALL crt_fstream.cpp_ostream_write_FUN_00565a13 ; 004a3ef3
        ;   XREF to: 00565a13 (UNCONDITIONAL_CALL)  ; _ostream * crt_fstream.cpp_ostream_write_FUN_00565a13(_ostream * stream, void * buffer, SIZE_T count)
    ADD ESP,0xc                         ; 004a3ef8
    PUSH 0x8                            ; 004a3efb
    PUSH 0x8000                         ; 004a3efd
    LEA EAX,[ESP + 0x510]               ; 004a3f02
    PUSH EAX                            ; 004a3f09
    CALL support_codec.cpp_CLZWCompress_ctor_FUN_00439830 ; 004a3f0a
        ;   XREF to: 00439830 (UNCONDITIONAL_CALL)  ; CLZWCompress * support_codec.cpp_CLZWCompress_ctor_FUN_00439830(CLZWCompress * this_ptr, int buffer_size, int num_bits)
    ADD ESP,0xc                         ; 004a3f0f
    LEA EAX,[ESP + 0x508]               ; 004a3f12
    PUSH EAX                            ; 004a3f19
    CALL support_codec.cpp_CLZWCompress_init_FUN_00439880 ; 004a3f1a
        ;   XREF to: 00439880 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWCompress_init_FUN_00439880(CLZWCompress * this_ptr)
    ADD ESP,0x4                         ; 004a3f1f
    LEA EAX,[ESP + 0x4d0]               ; 004a3f22
    PUSH EAX                            ; 004a3f29
    LEA EAX,[ESP + 0x544]               ; 004a3f2a
    PUSH EAX                            ; 004a3f31
    LEA EAX,[ESP + 0x458]               ; 004a3f32
    PUSH EAX                            ; 004a3f39
    LEA EAX,[ESP + 0x514]               ; 004a3f3a
    PUSH EAX                            ; 004a3f41
    CALL support_codec.cpp_CLZWCompress_process_FUN_004398c0 ; 004a3f42
        ;   XREF to: 004398c0 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWCompress_process_FUN_004398c0(CLZWCompress * this_ptr, _istream * istream, int * byte_count, _ostream * ostream)
    ADD ESP,0x10                        ; 004a3f47
    LEA EAX,[ESP + 0x4d0]               ; 004a3f4a
    PUSH EAX                            ; 004a3f51
    LEA EAX,[ESP + 0x50c]               ; 004a3f52
    PUSH EAX                            ; 004a3f59
    CALL support_codec.cpp_CLZWCompress_finalize_FUN_004399a0 ; 004a3f5a
        ;   XREF to: 004399a0 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWCompress_finalize_FUN_004399a0(CLZWCompress * this_ptr, _ostream * ostream)
    ADD ESP,0x8                         ; 004a3f5f
    LEA EAX,[ESP + 0x40c]               ; 004a3f62
    PUSH EAX                            ; 004a3f69
    CALL crt_stdio.c_fflush_FUN_00565e59 ; 004a3f6a
        ;   XREF to: 00565e59 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_fflush_FUN_00565e59(_FILE * stream)
    ADD ESP,0x4                         ; 004a3f6f
    LEA EAX,[ESP + 0x48c]               ; 004a3f72
    PUSH EAX                            ; 004a3f79
    CALL crt_stdio.c_fflush_FUN_00565e59 ; 004a3f7a
        ;   XREF to: 00565e59 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_fflush_FUN_00565e59(_FILE * stream)
    ADD ESP,0x4                         ; 004a3f7f
    PUSH EBP                            ; 004a3f82
    LEA EAX,[ESP + 0x510]               ; 004a3f83
    PUSH EAX                            ; 004a3f8a
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_00439370 ; 004a3f8b
        ;   XREF to: 00439370 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_00439370(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a3f90
    PUSH 0x1                            ; 004a3f93
    LEA EAX,[ESP + 0x50c]               ; 004a3f95
    PUSH EAX                            ; 004a3f9c
    CALL support_codec.cpp_CCodec_dtor_FUN_00438f30 ; 004a3f9d
        ;   XREF to: 00438f30 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00438f30(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a3fa2
    PUSH EBP                            ; 004a3fa5
    LEA EAX,[ESP + 0x490]               ; 004a3fa6
    PUSH EAX                            ; 004a3fad
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005651ca ; 004a3fae
        ;   XREF to: 005651ca (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005651ca(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a3fb3
    PUSH EBP                            ; 004a3fb6
    LEA EAX,[ESP + 0x410]               ; 004a3fb7
    PUSH EAX                            ; 004a3fbe
    CALL crt_fstream.cpp_ifstream_dtor_FUN_00565264 ; 004a3fbf
        ;   XREF to: 00565264 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_00565264(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a3fc4
    PUSH 0x5b9370                       ; 004a3fc7 | = "save\\$$SAVE$$.TMP"
        ;   Label: LAB_004a3fc7
    CALL crt_stdio.c_remove_FUN_005657c0 ; 004a3fcc
        ;   XREF to: 005657c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005657c0(char * filename)
    ADD ESP,0x4                         ; 004a3fd1
    MOV ESI,ESP                         ; 004a3fd4
    MOV EDI,0x1c78598                   ; 004a3fd6
    PUSH EDI                            ; 004a3fdb | DAT_01c78598
    MOV AL,byte ptr [ESI]               ; 004a3fdc
        ;   Label: LAB_004a3fdc
    MOV byte ptr [EDI],AL               ; 004a3fde | DAT_01c78598 | DAT_01c7859a
    CMP AL,0x0                          ; 004a3fe0
    JZ 0x004a3ff4                       ; 004a3fe2
        ;   XREF to: 004a3ff4 (CONDITIONAL_JUMP)  ; LAB_004a3ff4
    MOV AL,byte ptr [ESI + 0x1]         ; 004a3fe4
    ADD ESI,0x2                         ; 004a3fe7
    MOV byte ptr [EDI + 0x1],AL         ; 004a3fea | DAT_01c78599 | DAT_01c7859b
    ADD EDI,0x2                         ; 004a3fed
    CMP AL,0x0                          ; 004a3ff0
    JNZ 0x004a3fdc                      ; 004a3ff2
        ;   XREF to: 004a3fdc (CONDITIONAL_JUMP)  ; LAB_004a3fdc
    POP EDI                             ; 004a3ff4
        ;   Label: LAB_004a3ff4
    ADD ESP,0x548                       ; 004a3ff5
        ;   Label: LAB_004a3ff5
    POP EBP                             ; 004a3ffb
    POP EDI                             ; 004a3ffc
    POP ESI                             ; 004a3ffd
    POP EBX                             ; 004a3ffe
    RET                                 ; 004a3fff
    PUSH 0x583b12                       ; 004a4000 | = "Unable to save during cinematic"
        ;   Label: LAB_004a4000
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a4005
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a400a
    PUSH EAX                            ; 004a400d
    MOV EDI,dword ptr [0x005b6d50]      ; 004a400e | g_CEditorTools_PTR_005b6d50
    PUSH EDI                            ; 004a4014
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004a4015
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x8                         ; 004a401a
    ADD ESP,0x548                       ; 004a401d
    POP EBP                             ; 004a4023
    POP EDI                             ; 004a4024
    POP ESI                             ; 004a4025
    POP EBX                             ; 004a4026
    RET                                 ; 004a4027
    PUSH 0x583b36                       ; 004a4028 | = ".noc"
        ;   Label: LAB_004a4028
    LEA EAX,[ESP + 0x310]               ; 004a402d
    PUSH EAX                            ; 004a4034
    CALL crt_string.c__stricmp_FUN_00564520 ; 004a4035
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a403a
    TEST EAX,EAX                        ; 004a403d
    JZ 0x004a3bfa                       ; 004a403f
        ;   XREF to: 004a3bfa (CONDITIONAL_JUMP)  ; LAB_004a3bfa
    XOR AH,AH                           ; 004a4045
    MOV byte ptr [ESP],AH               ; 004a4047
    JMP 0x004a3c1b                      ; 004a404a
        ;   XREF to: 004a3c1b (UNCONDITIONAL_JUMP)  ; LAB_004a3c1b
    PUSH 0x1                            ; 004a404f
        ;   Label: LAB_004a404f
    LEA EAX,[ESP + 0x4]                 ; 004a4051
    PUSH EAX                            ; 004a4055
    PUSH 0x583b3b                       ; 004a4056 | = "noc"
    PUSH 0x583b3f                       ; 004a405b | = "save"
    PUSH 0x583b44                       ; 004a4060 | = "Save game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a4065
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a406a
    PUSH EAX                            ; 004a406d
    MOV ECX,dword ptr [0x005b6d50]      ; 004a406e | g_CEditorTools_PTR_005b6d50
    PUSH ECX                            ; 004a4074
    CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0 ; 004a4075
        ;   XREF to: 00470eb0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0(CEditorTools * this_ptr, char * dialog_title, char * directory_path, char * file_extension, ...)
    ADD ESP,0x18                        ; 004a407a
    TEST EAX,EAX                        ; 004a407d
    JZ 0x004a3ff5                       ; 004a407f
        ;   XREF to: 004a3ff5 (CONDITIONAL_JUMP)  ; LAB_004a3ff5
    PUSH EBX                            ; 004a4085
    LEA EAX,[ESP + 0x108]               ; 004a4086
    PUSH EAX                            ; 004a408d
    PUSH EBX                            ; 004a408e
    PUSH EBX                            ; 004a408f
    LEA EAX,[ESP + 0x10]                ; 004a4090
    PUSH EAX                            ; 004a4094
    CALL crt_string.c_splitpath_FUN_00566498 ; 004a4095
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_00566498(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004a409a
    LEA EAX,[ESP + 0x104]               ; 004a409d
    PUSH EAX                            ; 004a40a4
    PUSH 0x583b4e                       ; 004a40a5 | = "%s.noc"
    LEA EAX,[ESP + 0x8]                 ; 004a40aa
    PUSH EAX                            ; 004a40ae
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004a40af
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004a40b4
    JMP 0x004a3c41                      ; 004a40b7
        ;   XREF to: 004a3c41 (UNCONDITIONAL_JUMP)  ; LAB_004a3c41
    PUSH 0x583b65                       ; 004a40bc | = "Warning!  Your game didn't save."
        ;   Label: LAB_004a40bc
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a40c1
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a40c6
    PUSH EAX                            ; 004a40c9
    MOV EBX,dword ptr [0x005b6d50]      ; 004a40ca | g_CEditorTools_PTR_005b6d50
    PUSH EBX                            ; 004a40d0
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004a40d1
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x8                         ; 004a40d6
    MOV dword ptr [0x00763e90],ESI      ; 004a40d9 | DAT_00763e90
    ADD ESP,0x548                       ; 004a40df
    POP EBP                             ; 004a40e5
    POP EDI                             ; 004a40e6
    POP ESI                             ; 004a40e7
    POP EBX                             ; 004a40e8
    RET                                 ; 004a40e9
    PUSH EBX                            ; 004a40ea
        ;   Label: LAB_004a40ea
    MOV ECX,dword ptr [0x005b6d50]      ; 004a40eb | g_CEditorTools_PTR_005b6d50
    PUSH ECX                            ; 004a40f1
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004a40f2
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x8                         ; 004a40f7
    PUSH EBP                            ; 004a40fa
    LEA EAX,[ESP + 0x490]               ; 004a40fb
    PUSH EAX                            ; 004a4102
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005651ca ; 004a4103
        ;   XREF to: 005651ca (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005651ca(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a4108
    PUSH EBP                            ; 004a410b
    LEA EAX,[ESP + 0x410]               ; 004a410c
    PUSH EAX                            ; 004a4113
    CALL crt_fstream.cpp_ifstream_dtor_FUN_00565264 ; 004a4114
        ;   XREF to: 00565264 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_00565264(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a4119
    ADD ESP,0x548                       ; 004a411c
    POP EBP                             ; 004a4122
    POP EDI                             ; 004a4123
    POP ESI                             ; 004a4124
    POP EBX                             ; 004a4125
    RET                                 ; 004a4126
    PUSH EBX                            ; 004a4127
        ;   Label: LAB_004a4127
    MOV EDI,dword ptr [0x005b6d50]      ; 004a4128 | g_CEditorTools_PTR_005b6d50
    PUSH EDI                            ; 004a412e
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004a412f
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x8                         ; 004a4134
    PUSH EBP                            ; 004a4137
    LEA EAX,[ESP + 0x490]               ; 004a4138
    PUSH EAX                            ; 004a413f
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005651ca ; 004a4140
        ;   XREF to: 005651ca (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005651ca(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a4145
    PUSH EBP                            ; 004a4148
    LEA EAX,[ESP + 0x410]               ; 004a4149
    PUSH EAX                            ; 004a4150
    CALL crt_fstream.cpp_ifstream_dtor_FUN_00565264 ; 004a4151
        ;   XREF to: 00565264 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_00565264(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a4156
    ADD ESP,0x548                       ; 004a4159
    POP EBP                             ; 004a415f
    POP EDI                             ; 004a4160
    POP ESI                             ; 004a4161
    POP EBX                             ; 004a4162
    RET                                 ; 004a4163

