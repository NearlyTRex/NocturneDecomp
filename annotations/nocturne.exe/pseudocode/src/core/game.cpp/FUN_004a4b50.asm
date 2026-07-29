; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004a4b50(CGame *this_ptr,int select_mode)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   select_mode
; Local Variables:
; undefined        Stack[-0x4b4]:1  local_4b4
; undefined4       Stack[-0x2b4]:4  local_2b4
; undefined        Stack[-0x144]:1  local_144
; undefined1       Stack[-0x143]:1  local_143
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
;
; XREF[2]:
;   core_main.c_FUN_004c8510 at 004c8597
;   core_menu.cpp_FUN_004d23d0 at 004d263f
;
; Referenced Globals:
;   TerminatedCString s_rt_00583db6
;   TerminatedCString s_world_00583db9
;   TerminatedCString s_rb_00583dbf
;   TerminatedCString s_enemy_pod_00583dc2
;   char CHAR_00h_00583dcc = \x00
;   TerminatedCString s_rt_00583dcd
;   TerminatedCString s_pod_ini_00583dd0
;   TerminatedCString s_Game_00583dd8
;   TerminatedCString s_system_nocturne_ini_00583ddd
;   TerminatedCString s_Act1Code_00583df1
;   TerminatedCString s_Act2Code_00583dfa
;   TerminatedCString s_Act3Code_00583e03
;   TerminatedCString s_Act4Code_00583e0c
;   TerminatedCString s_Dark_Reign_of_the_Vampir_00583e15
;   TerminatedCString s_Tomb_of_the_Underground_00583e36
;   ... and 71 more
;
; Called Functions:
;   core_event.cpp_CEventList_resetGameFlags_FUN_00480410
;   core_game.cpp_FUN_004a4170
;   core_level.cpp_CLevelLoader_show_FUN_004c5640
;   core_mission.cpp_CDemonMission_createHeros_FUN_004d9a80
;   core_mission.cpp_CDemonMission_load_FUN_004d7ee0
;   core_mission.cpp_CDemonMission_run_FUN_004d9440
;   core_mission.cpp_CDemonMission_startMission_FUN_004d9780
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_string.c__stricmp_FUN_00564520
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_ini.cpp_CIniFile_ctor_FUN_004bd860
;   engine_ini.cpp_CIniFile_getInteger_FUN_004bda20
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a4b50
        ;   Label: core_game.cpp_FUN_004a4b50
    PUSH ESI                            ; 004a4b51
    PUSH EDI                            ; 004a4b52
    PUSH EBP                            ; 004a4b53
    SUB ESP,0x4a4                       ; 004a4b54
    PUSH 0x583dbf                       ; 004a4b5a | = "rb"
    PUSH 0x583dc2                       ; 004a4b5f | = "enemy.pod"
    PUSH 0x583dcc                       ; 004a4b64 | CHAR_00h_00583dcc
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004a4b69
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004a4b6e
    TEST EAX,EAX                        ; 004a4b71
    JNZ 0x004a4f1c                      ; 004a4b73
        ;   XREF to: 004a4f1c (CONDITIONAL_JUMP)  ; LAB_004a4f1c
    MOV dword ptr [ESP + 0x4a0],0x1     ; 004a4b79
    MOV EAX,dword ptr [ESP + 0x4b8]     ; 004a4b84
        ;   Label: LAB_004a4b84
    MOV dword ptr [EAX + 0x24c],0x0     ; 004a4b8b
    MOV dword ptr [EAX + 0x254],0x0     ; 004a4b95
    MOV dword ptr [EAX + 0x248],0x0     ; 004a4b9f
    MOV dword ptr [EAX + 0x250],0x0     ; 004a4ba9
    PUSH 0x583dcd                       ; 004a4bb3 | = "rt"
    MOV dword ptr [EAX + 0x234],0x0     ; 004a4bb8
    MOV EAX,[0x01bcd070]                ; 004a4bc2 | DAT_01bcd070
    PUSH 0x583dd0                       ; 004a4bc7 | = "pod.ini"
    MOV dword ptr [ESP + 0x4a0],EAX     ; 004a4bcc
    MOV EAX,[0x014b9900]                ; 004a4bd3 | DAT_014b9900
    XOR EBX,EBX                         ; 004a4bd8
    MOV [0x01bcd070],EAX                ; 004a4bda | DAT_01bcd070
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004a4bdf
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004a4be4
    TEST EAX,EAX                        ; 004a4be7
    JZ 0x004a4bf9                       ; 004a4be9
        ;   XREF to: 004a4bf9 (CONDITIONAL_JUMP)  ; LAB_004a4bf9
    PUSH EAX                            ; 004a4beb
    MOV EBX,0x1                         ; 004a4bec
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004a4bf1
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a4bf6
    MOV ESI,dword ptr [ESP + 0x4bc]     ; 004a4bf9
        ;   Label: LAB_004a4bf9
    CMP ESI,0x1                         ; 004a4c00
    JNZ 0x004a4c07                      ; 004a4c03
        ;   XREF to: 004a4c07 (CONDITIONAL_JUMP)  ; LAB_004a4c07
    MOV EBX,ESI                         ; 004a4c05
    CMP dword ptr [ESP + 0x4a0],0x0     ; 004a4c07
        ;   Label: LAB_004a4c07
    JZ 0x004a4c1c                       ; 004a4c0f
        ;   XREF to: 004a4c1c (CONDITIONAL_JUMP)  ; LAB_004a4c1c
    MOV dword ptr [ESP + 0x4bc],0x1     ; 004a4c11
    PUSH 0x583dd8                       ; 004a4c1c | = "Game"
        ;   Label: LAB_004a4c1c
    XOR EAX,EAX                         ; 004a4c21
    PUSH 0x583ddd                       ; 004a4c23 | = "system\\nocturne.ini"
    MOV dword ptr [ESP + 0x4a4],EAX     ; 004a4c28
    LEA EAX,[ESP + 0x8]                 ; 004a4c2f
    PUSH EAX                            ; 004a4c33
    CALL engine_ini.cpp_CIniFile_ctor_FUN_004bd860 ; 004a4c34
        ;   XREF to: 004bd860 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_ctor_FUN_004bd860(CIniFile * this_ptr, char * filename, char * section)
    ADD ESP,0xc                         ; 004a4c39
    LEA EAX,[ESP + 0x488]               ; 004a4c3c
    XOR EDX,EDX                         ; 004a4c43
    PUSH EAX                            ; 004a4c45
    MOV dword ptr [ESP + 0x48c],EDX     ; 004a4c46
    PUSH 0x583df1                       ; 004a4c4d | = "Act1Code"
    LEA EAX,[ESP + 0x8]                 ; 004a4c52
    MOV dword ptr [ESP + 0x494],EDX     ; 004a4c56
    PUSH EAX                            ; 004a4c5d
    MOV dword ptr [ESP + 0x49c],EDX     ; 004a4c5e
    MOV dword ptr [ESP + 0x4a0],EDX     ; 004a4c65
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004a4c6c
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004a4c71
    LEA EAX,[ESP + 0x48c]               ; 004a4c74
    PUSH EAX                            ; 004a4c7b
    PUSH 0x583dfa                       ; 004a4c7c | = "Act2Code"
    LEA EAX,[ESP + 0x8]                 ; 004a4c81
    PUSH EAX                            ; 004a4c85
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004a4c86
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004a4c8b
    LEA EAX,[ESP + 0x490]               ; 004a4c8e
    PUSH EAX                            ; 004a4c95
    PUSH 0x583e03                       ; 004a4c96 | = "Act3Code"
    LEA EAX,[ESP + 0x8]                 ; 004a4c9b
    PUSH EAX                            ; 004a4c9f
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004a4ca0
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004a4ca5
    LEA EAX,[ESP + 0x494]               ; 004a4ca8
    PUSH EAX                            ; 004a4caf
    PUSH 0x583e0c                       ; 004a4cb0 | = "Act4Code"
    LEA EAX,[ESP + 0x8]                 ; 004a4cb5
    PUSH EAX                            ; 004a4cb9
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004a4cba
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004a4cbf
    CMP dword ptr [ESP + 0x488],0x331   ; 004a4cc2
    JNZ 0x004a4d01                      ; 004a4ccd
        ;   XREF to: 004a4d01 (CONDITIONAL_JUMP)  ; LAB_004a4d01
    CMP dword ptr [ESP + 0x48c],0x3cc   ; 004a4ccf
    JNZ 0x004a4d01                      ; 004a4cda
        ;   XREF to: 004a4d01 (CONDITIONAL_JUMP)  ; LAB_004a4d01
    CMP dword ptr [ESP + 0x490],0x3ac   ; 004a4cdc
    JNZ 0x004a4d01                      ; 004a4ce7
        ;   XREF to: 004a4d01 (CONDITIONAL_JUMP)  ; LAB_004a4d01
    CMP dword ptr [ESP + 0x494],0xd6    ; 004a4ce9
    JNZ 0x004a4d01                      ; 004a4cf4
        ;   XREF to: 004a4d01 (CONDITIONAL_JUMP)  ; LAB_004a4d01
    MOV dword ptr [ESP + 0x49c],0x1     ; 004a4cf6
    PUSH 0x583e15                       ; 004a4d01 | = "'Dark Reign of the Vampire King'"
        ;   Label: LAB_004a4d01
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a4d06
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a4d0b
    PUSH 0x583e36                       ; 004a4d0e | = "'Tomb of the Underground God'"
    MOV dword ptr [ESP + 0x478],EAX     ; 004a4d13
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a4d1a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a4d1f
    PUSH 0x583e54                       ; 004a4d22 | = "'Windy City Massacre'"
    MOV dword ptr [ESP + 0x47c],EAX     ; 004a4d27
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a4d2e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a4d33
    PUSH 0x583e6a                       ; 004a4d36 | = "'The House on the Edge of Hell'"
    MOV dword ptr [ESP + 0x480],EAX     ; 004a4d3b
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a4d42
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a4d47
    PUSH 0x583e8a                       ; 004a4d4a | = "'Epilogue'"
    MOV EBP,0xffffffff                  ; 004a4d4f
    MOV dword ptr [ESP + 0x484],EAX     ; 004a4d54
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a4d5b
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a4d60
    MOV EDI,EBP                         ; 004a4d63
    MOV dword ptr [ESP + 0x484],EAX     ; 004a4d65
    TEST EBX,EBX                        ; 004a4d6c
    JNZ 0x004a56ef                      ; 004a4d6e
        ;   XREF to: 004a56ef (CONDITIONAL_JUMP)  ; LAB_004a56ef
    TEST EDI,EDI                        ; 004a4d74
        ;   Label: LAB_004a4d74
    JL 0x004a4f33                       ; 004a4d76
        ;   XREF to: 004a4f33 (CONDITIONAL_JUMP)  ; LAB_004a4f33
    LEA EAX,[EBP*0x4 + 0x0]             ; 004a4d7c
    SUB EAX,EBP                         ; 004a4d83
    SHL EAX,0x2                         ; 004a4d85
    LEA ESI,[EDI*0x4 + 0x0]             ; 004a4d88
    ADD EAX,EBP                         ; 004a4d8f
    LEA EDI,[ESP + 0x370]               ; 004a4d91
    MOV ESI,dword ptr [ESI + EAX*0x4 + 0x5b9450] ; 004a4d98 | DAT_005b9418
    PUSH EDI                            ; 004a4d9f
    MOV AL,byte ptr [ESI]               ; 004a4da0
        ;   Label: LAB_004a4da0
    MOV byte ptr [EDI],AL               ; 004a4da2
    CMP AL,0x0                          ; 004a4da4
    JZ 0x004a4db8                       ; 004a4da6
        ;   XREF to: 004a4db8 (CONDITIONAL_JUMP)  ; LAB_004a4db8
    MOV AL,byte ptr [ESI + 0x1]         ; 004a4da8
    ADD ESI,0x2                         ; 004a4dab
    MOV byte ptr [EDI + 0x1],AL         ; 004a4dae
    ADD EDI,0x2                         ; 004a4db1
    CMP AL,0x0                          ; 004a4db4
    JNZ 0x004a4da0                      ; 004a4db6
        ;   XREF to: 004a4da0 (CONDITIONAL_JUMP)  ; LAB_004a4da0
    POP EDI                             ; 004a4db8
        ;   Label: LAB_004a4db8
    PUSH 0x5842fe                       ; 004a4db9 | = "rt"
    LEA EAX,[ESP + 0x374]               ; 004a4dbe
    PUSH EAX                            ; 004a4dc5
    PUSH 0x584301                       ; 004a4dc6 | = "world"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004a4dcb
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004a4dd0
    TEST EAX,EAX                        ; 004a4dd3
    JZ 0x004a4f11                       ; 004a4dd5
        ;   XREF to: 004a4f11 (CONDITIONAL_JUMP)  ; LAB_004a4f11
    PUSH EAX                            ; 004a4ddb
    MOV EDI,0x1c789c0                   ; 004a4ddc
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004a4de1
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    MOV ECX,0x41000000                  ; 004a4de6
    ADD ESP,0x4                         ; 004a4deb
    MOV EBX,dword ptr [EBP*0x4 + 0x5b9554] ; 004a4dee | DAT_005b9554
    MOV ESI,dword ptr [ESP + EBP*0x4 + 0x474] ; 004a4df5
    MOV dword ptr [0x01c78ac0],EBX      ; 004a4dfc | DAT_01c78ac0
    PUSH EDI                            ; 004a4e02 | DAT_01c789c0
    MOV AL,byte ptr [ESI]               ; 004a4e03
        ;   Label: LAB_004a4e03
    MOV byte ptr [EDI],AL               ; 004a4e05 | DAT_01c789c0 | DAT_01c789c2
    CMP AL,0x0                          ; 004a4e07
    JZ 0x004a4e1b                       ; 004a4e09
        ;   XREF to: 004a4e1b (CONDITIONAL_JUMP)  ; LAB_004a4e1b
    MOV AL,byte ptr [ESI + 0x1]         ; 004a4e0b
    ADD ESI,0x2                         ; 004a4e0e
    MOV byte ptr [EDI + 0x1],AL         ; 004a4e11 | DAT_01c789c1 | DAT_01c789c3
    ADD EDI,0x2                         ; 004a4e14
    CMP AL,0x0                          ; 004a4e17
    JNZ 0x004a4e03                      ; 004a4e19
        ;   XREF to: 004a4e03 (CONDITIONAL_JUMP)  ; LAB_004a4e03
    POP EDI                             ; 004a4e1b
        ;   Label: LAB_004a4e1b
    MOV dword ptr [0x01c78ac4],ECX      ; 004a4e1c | DAT_01c78ac4
    MOV EDX,dword ptr [0x005b7650]      ; 004a4e22 | DAT_005b7650
        ;   Label: LAB_004a4e22
    PUSH EDX                            ; 004a4e28
    CALL core_event.cpp_CEventList_resetGameFlags_FUN_00480410 ; 004a4e29
        ;   XREF to: 00480410 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_resetGameFlags_FUN_00480410(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004a4e2e
    LEA EAX,[ESP + 0x370]               ; 004a4e31
    PUSH EAX                            ; 004a4e38
    PUSH 0x1c78598                      ; 004a4e39
    MOV ESI,0x1                         ; 004a4e3e
    CALL crt_string.c__stricmp_FUN_00564520 ; 004a4e43
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a4e48
    TEST EAX,EAX                        ; 004a4e4b
    JZ 0x004a4e77                       ; 004a4e4d
        ;   XREF to: 004a4e77 (CONDITIONAL_JUMP)  ; LAB_004a4e77
    LEA ESI,[ESP + 0x370]               ; 004a4e4f
    MOV EDI,0x1c78598                   ; 004a4e56
    PUSH EDI                            ; 004a4e5b
    MOV AL,byte ptr [ESI]               ; 004a4e5c
        ;   Label: LAB_004a4e5c
    MOV byte ptr [EDI],AL               ; 004a4e5e | DAT_01c78598 | DAT_01c7859a
    CMP AL,0x0                          ; 004a4e60
    JZ 0x004a4e74                       ; 004a4e62
        ;   XREF to: 004a4e74 (CONDITIONAL_JUMP)  ; LAB_004a4e74
    MOV AL,byte ptr [ESI + 0x1]         ; 004a4e64
    ADD ESI,0x2                         ; 004a4e67
    MOV byte ptr [EDI + 0x1],AL         ; 004a4e6a | DAT_01c78599 | DAT_01c7859b
    ADD EDI,0x2                         ; 004a4e6d
    CMP AL,0x0                          ; 004a4e70
    JNZ 0x004a4e5c                      ; 004a4e72
        ;   XREF to: 004a4e5c (CONDITIONAL_JUMP)  ; LAB_004a4e5c
    POP EDI                             ; 004a4e74
        ;   Label: LAB_004a4e74
    XOR ESI,ESI                         ; 004a4e75
    PUSH EBP                            ; 004a4e77
        ;   Label: LAB_004a4e77
    PUSH 0x0                            ; 004a4e78
    PUSH 0xa                            ; 004a4e7a
    MOV ECX,dword ptr [0x005baca0]      ; 004a4e7c | INT_005baca0
    PUSH ECX                            ; 004a4e82
    CALL core_level.cpp_CLevelLoader_show_FUN_004c5640 ; 004a4e83
        ;   XREF to: 004c5640 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_show_FUN_004c5640(CLevelLoader * this_ptr, int total_frames, int use_custom_viewport, int image_variant)
    ADD ESP,0x10                        ; 004a4e88
    PUSH ESI                            ; 004a4e8b
    LEA EAX,[ESP + 0x374]               ; 004a4e8c
    PUSH EAX                            ; 004a4e93
    MOV EBX,dword ptr [0x005baf90]      ; 004a4e94 | DAT_005baf90
    PUSH EBX                            ; 004a4e9a
    CALL core_mission.cpp_CDemonMission_load_FUN_004d7ee0 ; 004a4e9b
        ;   XREF to: 004d7ee0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_004d7ee0(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 004a4ea0
    PUSH 0x0                            ; 004a4ea3
    MOV ESI,dword ptr [0x005baf90]      ; 004a4ea5 | DAT_005baf90
    PUSH ESI                            ; 004a4eab
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_004d9a80 ; 004a4eac
        ;   XREF to: 004d9a80 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createHeros_FUN_004d9a80(CDemonMission * this_ptr, CCharacter * existing_hero)
    ADD ESP,0x8                         ; 004a4eb1
    TEST EAX,EAX                        ; 004a4eb4
    JZ 0x004a4f05                       ; 004a4eb6
        ;   XREF to: 004a4f05 (CONDITIONAL_JUMP)  ; LAB_004a4f05
    MOV EDI,dword ptr [0x005baf90]      ; 004a4eb8 | DAT_005baf90
    PUSH EDI                            ; 004a4ebe
    CALL core_mission.cpp_CDemonMission_startMission_FUN_004d9780 ; 004a4ebf
        ;   XREF to: 004d9780 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_startMission_FUN_004d9780(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004a4ec4
    MOV EBP,dword ptr [0x005baf90]      ; 004a4ec7 | DAT_005baf90
    PUSH EBP                            ; 004a4ecd
    CALL core_mission.cpp_CDemonMission_run_FUN_004d9440 ; 004a4ece
        ;   XREF to: 004d9440 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_run_FUN_004d9440(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004a4ed3
    MOV EAX,dword ptr [ESP + 0x4b8]     ; 004a4ed6
    CMP dword ptr [EAX + 0x9c4],0x0     ; 004a4edd
    JZ 0x004a4f05                       ; 004a4ee4
        ;   XREF to: 004a4f05 (CONDITIONAL_JUMP)  ; LAB_004a4f05
    PUSH 0x1                            ; 004a4ee6
    ADD EAX,0x9c8                       ; 004a4ee8
    PUSH EAX                            ; 004a4eed
    MOV ECX,dword ptr [ESP + 0x4c0]     ; 004a4eee
    PUSH ECX                            ; 004a4ef5
    MOV dword ptr [EAX + -0x4],0x0      ; 004a4ef6
    CALL core_game.cpp_FUN_004a4170     ; 004a4efd
        ;   XREF to: 004a4170 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004a4170(CGame * this_ptr, char * save_filename, int load_mode)
    ADD ESP,0xc                         ; 004a4f02
    MOV EAX,dword ptr [ESP + 0x498]     ; 004a4f05
        ;   Label: LAB_004a4f05
    MOV [0x01bcd070],EAX                ; 004a4f0c | DAT_01bcd070
    ADD ESP,0x4a4                       ; 004a4f11
        ;   Label: LAB_004a4f11
    POP EBP                             ; 004a4f17
    POP EDI                             ; 004a4f18
    POP ESI                             ; 004a4f19
    POP EBX                             ; 004a4f1a
    RET                                 ; 004a4f1b
    PUSH EAX                            ; 004a4f1c
        ;   Label: LAB_004a4f1c
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004a4f1d
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a4f22
    XOR ECX,ECX                         ; 004a4f25
    MOV dword ptr [ESP + 0x4a0],ECX     ; 004a4f27
    JMP 0x004a4b84                      ; 004a4f2e
        ;   XREF to: 004a4b84 (UNCONDITIONAL_JUMP)  ; LAB_004a4b84
    LEA EAX,[ESP + 0x200]               ; 004a4f33
        ;   Label: LAB_004a4f33
    PUSH EAX                            ; 004a4f3a
    CALL shape_edittool.cpp_FUN_00474c90 ; 004a4f3b
        ;   XREF to: 00474c90 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00474c90()
    ADD ESP,0x4                         ; 004a4f40
    PUSH 0x583e95                       ; 004a4f43 | = "Volume 1 - 'Dark Reign of the Vampire..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a4f48
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a4f4d
    PUSH EAX                            ; 004a4f50
    LEA EAX,[ESP + 0x204]               ; 004a4f51
    PUSH EAX                            ; 004a4f58
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a4f59
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a4f5e
    PUSH 0x583ec1                       ; 004a4f61 | = "Volume 2 - 'Tomb of the Underground God'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a4f66
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a4f6b
    PUSH EAX                            ; 004a4f6e
    LEA EAX,[ESP + 0x204]               ; 004a4f6f
    PUSH EAX                            ; 004a4f76
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a4f77
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a4f7c
    PUSH 0x583eea                       ; 004a4f7f | = "Volume 3 - 'Windy City Massacre'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a4f84
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a4f89
    PUSH EAX                            ; 004a4f8c
    LEA EAX,[ESP + 0x204]               ; 004a4f8d
    PUSH EAX                            ; 004a4f94
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a4f95
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a4f9a
    PUSH 0x583f0b                       ; 004a4f9d | = "Volume 4 - 'The House on the Edge of ..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a4fa2
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a4fa7
    PUSH EAX                            ; 004a4faa
    LEA EAX,[ESP + 0x204]               ; 004a4fab
    PUSH EAX                            ; 004a4fb2
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a4fb3
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a4fb8
    CMP dword ptr [ESP + 0x49c],0x0     ; 004a4fbb
    JZ 0x004a4fe3                       ; 004a4fc3
        ;   XREF to: 004a4fe3 (CONDITIONAL_JUMP)  ; LAB_004a4fe3
    PUSH 0x583f36                       ; 004a4fc5 | = "Volume 5 - 'Epilogue'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a4fca
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a4fcf
    PUSH EAX                            ; 004a4fd2
    LEA EAX,[ESP + 0x204]               ; 004a4fd3
    PUSH EAX                            ; 004a4fda
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a4fdb
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a4fe0
    MOV ESI,dword ptr [ESP + 0x4a0]     ; 004a4fe3
        ;   Label: LAB_004a4fe3
    TEST ESI,ESI                        ; 004a4fea
    JNZ 0x004a503d                      ; 004a4fec
        ;   XREF to: 004a503d (CONDITIONAL_JUMP)  ; LAB_004a503d
    MOV EBP,dword ptr [ESP + 0x200]     ; 004a4fee
    XOR EBX,EBX                         ; 004a4ff5
    TEST EBP,EBP                        ; 004a4ff7
    JLE 0x004a503d                      ; 004a4ff9
        ;   XREF to: 004a503d (CONDITIONAL_JUMP)  ; LAB_004a503d
    PUSH 0x583f4c                       ; 004a4ffb | = "rt"
        ;   Label: LAB_004a4ffb
    MOV EDX,dword ptr [ESI + 0x5b9450]  ; 004a5000 | DAT_005b9451 | DAT_005b9485
    PUSH EDX                            ; 004a5006
    PUSH 0x583f4f                       ; 004a5007 | = "world"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004a500c
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004a5011
    TEST EAX,EAX                        ; 004a5014
    JNZ 0x004a51ce                      ; 004a5016
        ;   XREF to: 004a51ce (CONDITIONAL_JUMP)  ; LAB_004a51ce
    PUSH EAX                            ; 004a501c
    PUSH EBX                            ; 004a501d
    LEA EAX,[ESP + 0x208]               ; 004a501e
    PUSH EAX                            ; 004a5025
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_00475f80 ; 004a5026
        ;   XREF to: 00475f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_00475f80(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 004a502b
    MOV EAX,dword ptr [ESP + 0x200]     ; 004a502e
        ;   Label: LAB_004a502e
    INC EBX                             ; 004a5035
    ADD ESI,0x34                        ; 004a5036
    CMP EBX,EAX                         ; 004a5039
    JL 0x004a4ffb                       ; 004a503b
        ;   XREF to: 004a4ffb (CONDITIONAL_JUMP)  ; LAB_004a4ffb
    PUSH -0x1                           ; 004a503d
        ;   Label: LAB_004a503d
    PUSH 0x583f55                       ; 004a503f | = "Choose a story to play"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a5044
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a5049
    PUSH EAX                            ; 004a504c
    LEA EAX,[ESP + 0x208]               ; 004a504d
    PUSH EAX                            ; 004a5054
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 ; 004a5055
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70()
    ADD ESP,0xc                         ; 004a505a
    MOV EBP,EAX                         ; 004a505d
    TEST EAX,EAX                        ; 004a505f
    JL 0x004a51dc                       ; 004a5061
        ;   XREF to: 004a51dc (CONDITIONAL_JUMP)  ; LAB_004a51dc
    JNZ 0x004a5081                      ; 004a5067
        ;   XREF to: 004a5081 (CONDITIONAL_JUMP)  ; LAB_004a5081
    CMP dword ptr [ESP + 0x488],0x331   ; 004a5069
    JNZ 0x004a5081                      ; 004a5074
        ;   XREF to: 004a5081 (CONDITIONAL_JUMP)  ; LAB_004a5081
    MOV dword ptr [ESP + 0x4bc],0x1     ; 004a5076
    CMP EBP,0x1                         ; 004a5081
        ;   Label: LAB_004a5081
    JNZ 0x004a509a                      ; 004a5084
        ;   XREF to: 004a509a (CONDITIONAL_JUMP)  ; LAB_004a509a
    CMP dword ptr [ESP + 0x48c],0x3cc   ; 004a5086
    JNZ 0x004a509a                      ; 004a5091
        ;   XREF to: 004a509a (CONDITIONAL_JUMP)  ; LAB_004a509a
    MOV dword ptr [ESP + 0x4bc],EBP     ; 004a5093
    CMP EBP,0x2                         ; 004a509a
        ;   Label: LAB_004a509a
    JNZ 0x004a50b7                      ; 004a509d
        ;   XREF to: 004a50b7 (CONDITIONAL_JUMP)  ; LAB_004a50b7
    CMP dword ptr [ESP + 0x490],0x3ac   ; 004a509f
    JNZ 0x004a50b7                      ; 004a50aa
        ;   XREF to: 004a50b7 (CONDITIONAL_JUMP)  ; LAB_004a50b7
    MOV dword ptr [ESP + 0x4bc],0x1     ; 004a50ac
    CMP EBP,0x3                         ; 004a50b7
        ;   Label: LAB_004a50b7
    JNZ 0x004a51f9                      ; 004a50ba
        ;   XREF to: 004a51f9 (CONDITIONAL_JUMP)  ; LAB_004a51f9
    CMP dword ptr [ESP + 0x494],0xd6    ; 004a50c0
    JNZ 0x004a51f9                      ; 004a50cb
        ;   XREF to: 004a51f9 (CONDITIONAL_JUMP)  ; LAB_004a51f9
    MOV dword ptr [ESP + 0x4bc],0x1     ; 004a50d1
    LEA EAX,[ESP + 0x200]               ; 004a50dc
        ;   Label: LAB_004a50dc
    PUSH EAX                            ; 004a50e3
    CALL shape_edittool.cpp_FUN_00476160 ; 004a50e4
        ;   XREF to: 00476160 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00476160()
    ADD ESP,0x4                         ; 004a50e9
    TEST EBP,EBP                        ; 004a50ec
    JNZ 0x004a5254                      ; 004a50ee
        ;   XREF to: 004a5254 (CONDITIONAL_JUMP)  ; LAB_004a5254
    IMUL ESI,EBP,0x34                   ; 004a50f4
    PUSH 0x583f6c                       ; 004a50f7 | = "Chapter 1 - 'Your New Partner'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a50fc
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a5101
    PUSH EAX                            ; 004a5104
    LEA EAX,[ESP + 0x204]               ; 004a5105
    PUSH EAX                            ; 004a510c
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a510d
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a5112
    PUSH 0x583f8b                       ; 004a5115 | = "Chapter 2 - 'Sentinels'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a511a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a511f
    PUSH EAX                            ; 004a5122
    LEA EAX,[ESP + 0x204]               ; 004a5123
    PUSH EAX                            ; 004a512a
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a512b
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a5130
    PUSH 0x583fa3                       ; 004a5133 | = "Chapter 3 - 'Werewolf Forest'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a5138
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a513d
    PUSH EAX                            ; 004a5140
    LEA EAX,[ESP + 0x204]               ; 004a5141
    PUSH EAX                            ; 004a5148
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a5149
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a514e
    PUSH 0x583fc1                       ; 004a5151 | = "Chapter 4 - 'Castle Gaustadt'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a5156
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a515b
    PUSH EAX                            ; 004a515e
    LEA EAX,[ESP + 0x204]               ; 004a515f
    PUSH EAX                            ; 004a5166
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a5167
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a516c
    PUSH 0x583fdf                       ; 004a516f | = "Chapter 5 - 'Dungeon'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a5174
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a5179
    PUSH EAX                            ; 004a517c
    LEA EAX,[ESP + 0x204]               ; 004a517d
    PUSH EAX                            ; 004a5184
    LEA EDI,[ESP + 0x208]               ; 004a5185
    XOR EBX,EBX                         ; 004a518c
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a518e
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a5193
    MOV EAX,dword ptr [EDI]             ; 004a5196
        ;   Label: LAB_004a5196
    CMP EBX,EAX                         ; 004a5198
    JGE 0x004a5232                      ; 004a519a
        ;   XREF to: 004a5232 (CONDITIONAL_JUMP)  ; LAB_004a5232
    PUSH 0x583db6                       ; 004a51a0 | = "rt"
    MOV EDX,dword ptr [ESI + 0x5b9450]  ; 004a51a5 | DAT_005b9450 | PTR_s_gtown_msn_005846ed_005b9454
    PUSH EDX                            ; 004a51ab
    PUSH 0x583db9                       ; 004a51ac | = "world"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004a51b1
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004a51b6
    TEST EAX,EAX                        ; 004a51b9
    JNZ 0x004a5220                      ; 004a51bb
        ;   XREF to: 004a5220 (CONDITIONAL_JUMP)  ; LAB_004a5220
    PUSH EAX                            ; 004a51bd
    PUSH EBX                            ; 004a51be
    PUSH EDI                            ; 004a51bf
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_00475f80 ; 004a51c0
        ;   XREF to: 00475f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_00475f80(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 004a51c5
    INC EBX                             ; 004a51c8
    ADD ESI,0x4                         ; 004a51c9
    JMP 0x004a5196                      ; 004a51cc
        ;   XREF to: 004a5196 (UNCONDITIONAL_JUMP)  ; LAB_004a5196
    PUSH EAX                            ; 004a51ce
        ;   Label: LAB_004a51ce
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004a51cf
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a51d4
    JMP 0x004a502e                      ; 004a51d7
        ;   XREF to: 004a502e (UNCONDITIONAL_JUMP)  ; LAB_004a502e
    PUSH 0x0                            ; 004a51dc
        ;   Label: LAB_004a51dc
    LEA EAX,[ESP + 0x204]               ; 004a51de
    PUSH EAX                            ; 004a51e5
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 004a51e6
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_00474cf0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a51eb
    ADD ESP,0x4a4                       ; 004a51ee
    POP EBP                             ; 004a51f4
    POP EDI                             ; 004a51f5
    POP ESI                             ; 004a51f6
    POP EBX                             ; 004a51f7
    RET                                 ; 004a51f8
    CMP dword ptr [ESP + 0x4bc],0x0     ; 004a51f9
        ;   Label: LAB_004a51f9
    JNZ 0x004a50dc                      ; 004a5201
        ;   XREF to: 004a50dc (CONDITIONAL_JUMP)  ; LAB_004a50dc
    XOR EDI,EDI                         ; 004a5207
    PUSH 0x0                            ; 004a5209
        ;   Label: LAB_004a5209
    LEA EAX,[ESP + 0x204]               ; 004a520b
    PUSH EAX                            ; 004a5212
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 004a5213
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_00474cf0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a5218
    JMP 0x004a4d74                      ; 004a521b
        ;   XREF to: 004a4d74 (UNCONDITIONAL_JUMP)  ; LAB_004a4d74
    PUSH EAX                            ; 004a5220
        ;   Label: LAB_004a5220
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004a5221
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a5226
    INC EBX                             ; 004a5229
    ADD ESI,0x4                         ; 004a522a
    JMP 0x004a5196                      ; 004a522d
        ;   XREF to: 004a5196 (UNCONDITIONAL_JUMP)  ; LAB_004a5196
    PUSH -0x1                           ; 004a5232
        ;   Label: LAB_004a5232
    PUSH 0x583ff5                       ; 004a5234 | = "'Dark Reign of the Vampire King'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a5239
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a523e
    PUSH EAX                            ; 004a5241
    LEA EAX,[ESP + 0x208]               ; 004a5242
    PUSH EAX                            ; 004a5249
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 ; 004a524a
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70()
    ADD ESP,0xc                         ; 004a524f
    MOV EDI,EAX                         ; 004a5252
    CMP EBP,0x1                         ; 004a5254
        ;   Label: LAB_004a5254
    JNZ 0x004a53a8                      ; 004a5257
        ;   XREF to: 004a53a8 (CONDITIONAL_JUMP)  ; LAB_004a53a8
    PUSH 0x584016                       ; 004a525d | = "Chapter 1 - 'Train to Redeye'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a5262
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a5267
    PUSH EAX                            ; 004a526a
    LEA EAX,[ESP + 0x204]               ; 004a526b
    PUSH EAX                            ; 004a5272
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a5273
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a5278
    PUSH 0x584034                       ; 004a527b | = "Chapter 2 - 'Zombie Town'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a5280
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a5285
    PUSH EAX                            ; 004a5288
    LEA EAX,[ESP + 0x204]               ; 004a5289
    PUSH EAX                            ; 004a5290
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a5291
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a5296
    PUSH 0x58404e                       ; 004a5299 | = "Chapter 3 - 'Underground Mine'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a529e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a52a3
    PUSH EAX                            ; 004a52a6
    LEA EAX,[ESP + 0x204]               ; 004a52a7
    PUSH EAX                            ; 004a52ae
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a52af
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a52b4
    PUSH 0x58406d                       ; 004a52b7 | = "Chapter 4 - 'Hidden Entrance'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a52bc
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a52c1
    PUSH EAX                            ; 004a52c4
    LEA EAX,[ESP + 0x204]               ; 004a52c5
    PUSH EAX                            ; 004a52cc
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a52cd
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a52d2
    PUSH 0x58408b                       ; 004a52d5 | = "Chapter 5 - 'Temple of the God'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a52da
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a52df
    PUSH EAX                            ; 004a52e2
    LEA EAX,[ESP + 0x204]               ; 004a52e3
    PUSH EAX                            ; 004a52ea
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a52eb
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a52f0
    PUSH 0x5840ab                       ; 004a52f3 | = "Chapter 6 - 'Epilogue'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a52f8
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a52fd
    PUSH EAX                            ; 004a5300
    LEA EAX,[ESP + 0x204]               ; 004a5301
    PUSH EAX                            ; 004a5308
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a5309
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a530e
    CMP dword ptr [ESP + 0x4a0],0x0     ; 004a5311
    JZ 0x004a535b                       ; 004a5319
        ;   XREF to: 004a535b (CONDITIONAL_JUMP)  ; LAB_004a535b
    LEA EDI,[ESP + 0x200]               ; 004a531b
        ;   Label: LAB_004a531b
    XOR EBX,EBX                         ; 004a5322
    IMUL ESI,EBP,0x34                   ; 004a5324
    MOV EAX,dword ptr [EDI]             ; 004a5327
        ;   Label: LAB_004a5327
    CMP EBX,EAX                         ; 004a5329
    JGE 0x004a5386                      ; 004a532b
        ;   XREF to: 004a5386 (CONDITIONAL_JUMP)  ; LAB_004a5386
    PUSH 0x583db6                       ; 004a532d | = "rt"
    MOV EAX,dword ptr [ESI + 0x5b9450]  ; 004a5332 | DAT_005b9450 | PTR_s_gtown_msn_005846ed_005b9454
    PUSH EAX                            ; 004a5338
    PUSH 0x583db9                       ; 004a5339 | = "world"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004a533e
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004a5343
    TEST EAX,EAX                        ; 004a5346
    JNZ 0x004a537b                      ; 004a5348
        ;   XREF to: 004a537b (CONDITIONAL_JUMP)  ; LAB_004a537b
    PUSH EAX                            ; 004a534a
    PUSH EBX                            ; 004a534b
    PUSH EDI                            ; 004a534c
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_00475f80 ; 004a534d
        ;   XREF to: 00475f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_00475f80(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 004a5352
    INC EBX                             ; 004a5355
        ;   Label: LAB_004a5355
    ADD ESI,0x4                         ; 004a5356
    JMP 0x004a5327                      ; 004a5359
        ;   XREF to: 004a5327 (UNCONDITIONAL_JUMP)  ; LAB_004a5327
    PUSH 0x5840c2                       ; 004a535b | = "Chapter X - 'Failure'"
        ;   Label: LAB_004a535b
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a5360
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a5365
    PUSH EAX                            ; 004a5368
    LEA EAX,[ESP + 0x204]               ; 004a5369
    PUSH EAX                            ; 004a5370
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a5371
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a5376
    JMP 0x004a531b                      ; 004a5379
        ;   XREF to: 004a531b (UNCONDITIONAL_JUMP)  ; LAB_004a531b
    PUSH EAX                            ; 004a537b
        ;   Label: LAB_004a537b
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004a537c
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a5381
    JMP 0x004a5355                      ; 004a5384
        ;   XREF to: 004a5355 (UNCONDITIONAL_JUMP)  ; LAB_004a5355
    PUSH -0x1                           ; 004a5386
        ;   Label: LAB_004a5386
    PUSH 0x5840d8                       ; 004a5388 | = "'Tomb of the Underground God'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a538d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a5392
    PUSH EAX                            ; 004a5395
    LEA EAX,[ESP + 0x208]               ; 004a5396
    PUSH EAX                            ; 004a539d
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 ; 004a539e
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70()
    ADD ESP,0xc                         ; 004a53a3
    MOV EDI,EAX                         ; 004a53a6
    CMP EBP,0x2                         ; 004a53a8
        ;   Label: LAB_004a53a8
    JNZ 0x004a5568                      ; 004a53ab
        ;   XREF to: 004a5568 (CONDITIONAL_JUMP)  ; LAB_004a5568
    PUSH 0x5840f6                       ; 004a53b1 | = "Chapter 1 - 'Headquarters'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a53b6
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a53bb
    PUSH EAX                            ; 004a53be
    LEA EAX,[ESP + 0x204]               ; 004a53bf
    PUSH EAX                            ; 004a53c6
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a53c7
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a53cc
    PUSH 0x584111                       ; 004a53cf | = "Chapter 2 - 'Chicago River'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a53d4
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a53d9
    PUSH EAX                            ; 004a53dc
    LEA EAX,[ESP + 0x204]               ; 004a53dd
    PUSH EAX                            ; 004a53e4
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a53e5
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a53ea
    PUSH 0x58412d                       ; 004a53ed | = "Chapter 3 - 'The Vendome'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a53f2
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a53f7
    PUSH EAX                            ; 004a53fa
    LEA EAX,[ESP + 0x204]               ; 004a53fb
    PUSH EAX                            ; 004a5402
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a5403
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a5408
    PUSH 0x584147                       ; 004a540b | = "Chapter 4 - 'Night on the Town'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a5410
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a5415
    PUSH EAX                            ; 004a5418
    LEA EAX,[ESP + 0x204]               ; 004a5419
    PUSH EAX                            ; 004a5420
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a5421
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a5426
    PUSH 0x584167                       ; 004a5429 | = "Chapter 5 - 'Water Works'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a542e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a5433
    PUSH EAX                            ; 004a5436
    LEA EAX,[ESP + 0x204]               ; 004a5437
    PUSH EAX                            ; 004a543e
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a543f
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a5444
    PUSH 0x584181                       ; 004a5447 | = "Chapter 6 - 'Windy City'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a544c
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a5451
    PUSH EAX                            ; 004a5454
    LEA EAX,[ESP + 0x204]               ; 004a5455
    PUSH EAX                            ; 004a545c
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a545d
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a5462
    PUSH 0x58419a                       ; 004a5465 | = "Chapter 7 - 'Crescent Theater'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a546a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a546f
    PUSH EAX                            ; 004a5472
    LEA EAX,[ESP + 0x204]               ; 004a5473
    PUSH EAX                            ; 004a547a
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a547b
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a5480
    PUSH 0x5841b9                       ; 004a5483 | = "Chapter 8 - 'Rooftop to Rooftop'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a5488
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a548d
    PUSH EAX                            ; 004a5490
    LEA EAX,[ESP + 0x204]               ; 004a5491
    PUSH EAX                            ; 004a5498
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a5499
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a549e
    IMUL ESI,EBP,0x34                   ; 004a54a1
    PUSH 0x5841da                       ; 004a54a4 | = "Chapter 9 - 'Warehouse of Hell'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a54a9
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a54ae
    PUSH EAX                            ; 004a54b1
    LEA EAX,[ESP + 0x204]               ; 004a54b2
    PUSH EAX                            ; 004a54b9
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a54ba
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a54bf
    PUSH 0x5841fa                       ; 004a54c2 | = "Chapter 10 - 'Mobster Factory'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a54c7
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a54cc
    PUSH EAX                            ; 004a54cf
    LEA EAX,[ESP + 0x204]               ; 004a54d0
    PUSH EAX                            ; 004a54d7
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a54d8
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a54dd
    PUSH 0x584219                       ; 004a54e0 | = "Chapter 11 - 'Not You Again'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a54e5
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a54ea
    PUSH EAX                            ; 004a54ed
    LEA EAX,[ESP + 0x204]               ; 004a54ee
    PUSH EAX                            ; 004a54f5
    LEA EDI,[ESP + 0x208]               ; 004a54f6
    XOR EBX,EBX                         ; 004a54fd
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a54ff
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a5504
    MOV EAX,dword ptr [EDI]             ; 004a5507
        ;   Label: LAB_004a5507
    CMP EBX,EAX                         ; 004a5509
    JGE 0x004a5546                      ; 004a550b
        ;   XREF to: 004a5546 (CONDITIONAL_JUMP)  ; LAB_004a5546
    PUSH 0x583db6                       ; 004a550d | = "rt"
    MOV EDX,dword ptr [ESI + 0x5b9450]  ; 004a5512 | DAT_005b9450 | PTR_s_gtown_msn_005846ed_005b9454
    PUSH EDX                            ; 004a5518
    PUSH 0x583db9                       ; 004a5519 | = "world"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004a551e
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004a5523
    TEST EAX,EAX                        ; 004a5526
    JNZ 0x004a553b                      ; 004a5528
        ;   XREF to: 004a553b (CONDITIONAL_JUMP)  ; LAB_004a553b
    PUSH EAX                            ; 004a552a
    PUSH EBX                            ; 004a552b
    PUSH EDI                            ; 004a552c
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_00475f80 ; 004a552d
        ;   XREF to: 00475f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_00475f80(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 004a5532
    INC EBX                             ; 004a5535
        ;   Label: LAB_004a5535
    ADD ESI,0x4                         ; 004a5536
    JMP 0x004a5507                      ; 004a5539
        ;   XREF to: 004a5507 (UNCONDITIONAL_JUMP)  ; LAB_004a5507
    PUSH EAX                            ; 004a553b
        ;   Label: LAB_004a553b
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004a553c
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a5541
    JMP 0x004a5535                      ; 004a5544
        ;   XREF to: 004a5535 (UNCONDITIONAL_JUMP)  ; LAB_004a5535
    PUSH -0x1                           ; 004a5546
        ;   Label: LAB_004a5546
    PUSH 0x584236                       ; 004a5548 | = "'Windy City Massacre'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a554d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a5552
    PUSH EAX                            ; 004a5555
    LEA EAX,[ESP + 0x208]               ; 004a5556
    PUSH EAX                            ; 004a555d
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 ; 004a555e
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70()
    ADD ESP,0xc                         ; 004a5563
    MOV EDI,EAX                         ; 004a5566
    CMP EBP,0x3                         ; 004a5568
        ;   Label: LAB_004a5568
    JNZ 0x004a5656                      ; 004a556b
        ;   XREF to: 004a5656 (CONDITIONAL_JUMP)  ; LAB_004a5656
    IMUL ESI,EBP,0x34                   ; 004a5571
    PUSH 0x58424c                       ; 004a5574 | = "Chapter 1 - 'Headquarters'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a5579
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a557e
    PUSH EAX                            ; 004a5581
    LEA EAX,[ESP + 0x204]               ; 004a5582
    PUSH EAX                            ; 004a5589
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a558a
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a558f
    PUSH 0x584267                       ; 004a5592 | = "Chapter 2 - 'Graveyard'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a5597
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a559c
    PUSH EAX                            ; 004a559f
    LEA EAX,[ESP + 0x204]               ; 004a55a0
    PUSH EAX                            ; 004a55a7
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a55a8
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a55ad
    PUSH 0x58427f                       ; 004a55b0 | = "Chapter 3 - 'House of Hell'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a55b5
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a55ba
    PUSH EAX                            ; 004a55bd
    LEA EAX,[ESP + 0x204]               ; 004a55be
    PUSH EAX                            ; 004a55c5
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a55c6
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a55cb
    PUSH 0x58429b                       ; 004a55ce | = "Chapter 4 - 'Back from Hell'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a55d3
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a55d8
    PUSH EAX                            ; 004a55db
    LEA EAX,[ESP + 0x204]               ; 004a55dc
    PUSH EAX                            ; 004a55e3
    LEA EDI,[ESP + 0x208]               ; 004a55e4
    XOR EBX,EBX                         ; 004a55eb
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a55ed
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a55f2
    MOV EAX,dword ptr [EDI]             ; 004a55f5
        ;   Label: LAB_004a55f5
    CMP EBX,EAX                         ; 004a55f7
    JGE 0x004a5634                      ; 004a55f9
        ;   XREF to: 004a5634 (CONDITIONAL_JUMP)  ; LAB_004a5634
    PUSH 0x583db6                       ; 004a55fb | = "rt"
    MOV ECX,dword ptr [ESI + 0x5b9450]  ; 004a5600 | DAT_005b9450 | PTR_s_gtown_msn_005846ed_005b9454
    PUSH ECX                            ; 004a5606
    PUSH 0x583db9                       ; 004a5607 | = "world"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004a560c
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004a5611
    TEST EAX,EAX                        ; 004a5614
    JNZ 0x004a5629                      ; 004a5616
        ;   XREF to: 004a5629 (CONDITIONAL_JUMP)  ; LAB_004a5629
    PUSH EAX                            ; 004a5618
    PUSH EBX                            ; 004a5619
    PUSH EDI                            ; 004a561a
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_00475f80 ; 004a561b
        ;   XREF to: 00475f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_00475f80(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 004a5620
    INC EBX                             ; 004a5623
        ;   Label: LAB_004a5623
    ADD ESI,0x4                         ; 004a5624
    JMP 0x004a55f5                      ; 004a5627
        ;   XREF to: 004a55f5 (UNCONDITIONAL_JUMP)  ; LAB_004a55f5
    PUSH EAX                            ; 004a5629
        ;   Label: LAB_004a5629
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004a562a
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a562f
    JMP 0x004a5623                      ; 004a5632
        ;   XREF to: 004a5623 (UNCONDITIONAL_JUMP)  ; LAB_004a5623
    PUSH -0x1                           ; 004a5634
        ;   Label: LAB_004a5634
    PUSH 0x5842b8                       ; 004a5636 | = "'The House on the Edge of Hell'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a563b
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a5640
    PUSH EAX                            ; 004a5643
    LEA EAX,[ESP + 0x208]               ; 004a5644
    PUSH EAX                            ; 004a564b
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 ; 004a564c
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70()
    ADD ESP,0xc                         ; 004a5651
    MOV EDI,EAX                         ; 004a5654
    CMP EBP,0x4                         ; 004a5656
        ;   Label: LAB_004a5656
    JNZ 0x004a5209                      ; 004a5659
        ;   XREF to: 004a5209 (CONDITIONAL_JUMP)  ; LAB_004a5209
    IMUL ESI,EBP,0x34                   ; 004a565f
    PUSH 0x5842d8                       ; 004a5662 | = "Chapter 1 - 'Headquarters'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a5667
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a566c
    PUSH EAX                            ; 004a566f
    LEA EAX,[ESP + 0x204]               ; 004a5670
    PUSH EAX                            ; 004a5677
    LEA EDI,[ESP + 0x208]               ; 004a5678
    XOR EBX,EBX                         ; 004a567f
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004a5681
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a5686
    MOV EAX,dword ptr [EDI]             ; 004a5689
        ;   Label: LAB_004a5689
    CMP EBX,EAX                         ; 004a568b
    JGE 0x004a56c8                      ; 004a568d
        ;   XREF to: 004a56c8 (CONDITIONAL_JUMP)  ; LAB_004a56c8
    PUSH 0x583db6                       ; 004a568f | = "rt"
    MOV EAX,dword ptr [ESI + 0x5b9450]  ; 004a5694 | DAT_005b9450 | PTR_s_gtown_msn_005846ed_005b9454
    PUSH EAX                            ; 004a569a
    PUSH 0x583db9                       ; 004a569b | = "world"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004a56a0
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004a56a5
    TEST EAX,EAX                        ; 004a56a8
    JNZ 0x004a56bd                      ; 004a56aa
        ;   XREF to: 004a56bd (CONDITIONAL_JUMP)  ; LAB_004a56bd
    PUSH EAX                            ; 004a56ac
    PUSH EBX                            ; 004a56ad
    PUSH EDI                            ; 004a56ae
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_00475f80 ; 004a56af
        ;   XREF to: 00475f80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_enableItem_FUN_00475f80(CPickList * this_ptr, int item_index, int enable_flag)
    ADD ESP,0xc                         ; 004a56b4
    INC EBX                             ; 004a56b7
        ;   Label: LAB_004a56b7
    ADD ESI,0x4                         ; 004a56b8
    JMP 0x004a5689                      ; 004a56bb
        ;   XREF to: 004a5689 (UNCONDITIONAL_JUMP)  ; LAB_004a5689
    PUSH EAX                            ; 004a56bd
        ;   Label: LAB_004a56bd
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004a56be
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a56c3
    JMP 0x004a56b7                      ; 004a56c6
        ;   XREF to: 004a56b7 (UNCONDITIONAL_JUMP)  ; LAB_004a56b7
    PUSH -0x1                           ; 004a56c8
        ;   Label: LAB_004a56c8
    PUSH 0x5842f3                       ; 004a56ca | = "'Epilogue'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a56cf
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a56d4
    PUSH EAX                            ; 004a56d7
    LEA EAX,[ESP + 0x208]               ; 004a56d8
    PUSH EAX                            ; 004a56df
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 ; 004a56e0
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70()
    ADD ESP,0xc                         ; 004a56e5
    MOV EDI,EAX                         ; 004a56e8
    JMP 0x004a5209                      ; 004a56ea
        ;   XREF to: 004a5209 (UNCONDITIONAL_JUMP)  ; LAB_004a5209
    PUSH 0x0                            ; 004a56ef
        ;   Label: LAB_004a56ef
    LEA EAX,[ESP + 0x374]               ; 004a56f1
    PUSH EAX                            ; 004a56f8
    PUSH 0x584307                       ; 004a56f9 | = "*.msn"
    PUSH 0x58430d                       ; 004a56fe | = "world"
    PUSH 0x584313                       ; 004a5703 | = "Select mission to play"
    MOV EDI,dword ptr [0x005b6d50]      ; 004a5708 | DAT_005b6d50
    PUSH EDI                            ; 004a570e
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550 ; 004a570f
        ;   XREF to: 00470550 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550(CEditorTools * this_ptr, char * dialog_title, char * search_directory, char * file_pattern, ...)
    ADD ESP,0x18                        ; 004a5714
    TEST EAX,EAX                        ; 004a5717
    JZ 0x004a4f11                       ; 004a5719
        ;   XREF to: 004a4f11 (CONDITIONAL_JUMP)  ; LAB_004a4f11
    XOR EAX,EAX                         ; 004a571f
    XOR EDX,EDX                         ; 004a5721
    MOV [0x01c78ac0],EAX                ; 004a5723 | DAT_01c78ac0
    XOR AH,AH                           ; 004a5728
    MOV dword ptr [0x01c78ac4],EDX      ; 004a572a | DAT_01c78ac4
    MOV byte ptr [0x01c789c0],AH        ; 004a5730 | DAT_01c789c0
    JMP 0x004a4e22                      ; 004a5736
        ;   XREF to: 004a4e22 (UNCONDITIONAL_JUMP)  ; LAB_004a4e22

