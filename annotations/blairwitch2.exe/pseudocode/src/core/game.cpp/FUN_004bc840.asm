; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004bc840(CGame *param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x324]:1  local_324
; undefined        Stack[-0x120]:1  local_120
; undefined1       Stack[-0x11f]:1  local_11f
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_main.c_FUN_004e45e0 at 004e466c
;   core_menu.cpp_showMainGameMenu_FUN_004ee3f0 at 004ee6a6
;
; Referenced Globals:
;   undefined4 DAT_005d867f
;   TerminatedCString s_blairhero_pod_005d8682
;   undefined4 DAT_005d8690
;   undefined4 DAT_005d8691
;   TerminatedCString s_pod_ini_005d8694
;   undefined4 DAT_005d869c
;   TerminatedCString s_system_nocturne_ini_005d86a1
;   TerminatedCString s_Act1Code_005d86b5
;   TerminatedCString s_Coffin_Rock_005d86be
;   undefined4 DAT_005d86ca
;   TerminatedCString s_world_005d86cd
;   TerminatedCString s_msn_005d86d3
;   TerminatedCString s_world_005d86d9
;   TerminatedCString s_Select_mission_to_play_005d86df
;   TerminatedCString s_awakening_msn_005d8aee
;   ... and 22 more
;
; Called Functions:
;   core_event.cpp_FUN_004910b0
;   core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0
;   core_game.cpp_FUN_004bbf70
;   core_level.cpp_FUN_004e1480
;   core_mission.cpp_CDemonMission_createHeros_FUN_004fd0e0
;   core_mission.cpp_CDemonMission_load_FUN_004fb490
;   core_mission.cpp_CDemonMission_run_FUN_004fcb00
;   core_mission.cpp_FUN_004fce00
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fopen_FUN_005b910c
;   crt_string.c__stricmp_FUN_005b8130
;   engine_dosio.cpp_FUN_00460c70
;   engine_ini.cpp_CIniFile_dtor_FUN_004d8940
;   engine_ini.cpp_FUN_004d8910
;   engine_ini.cpp_FUN_004d8b20
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc840
        ;   Label: core_game.cpp_FUN_004bc840
    PUSH ESI                            ; 004bc841
    PUSH EDI                            ; 004bc842
    PUSH EBP                            ; 004bc843
    SUB ESP,0x314                       ; 004bc844
    MOV EBX,dword ptr [ESP + 0x328]     ; 004bc84a
    PUSH 0x5d867f                       ; 004bc851 | DAT_005d867f
    PUSH 0x5d8682                       ; 004bc856 | = "blairhero.pod"
    PUSH 0x5d8690                       ; 004bc85b | DAT_005d8690
    CALL engine_dosio.cpp_FUN_00460c70  ; 004bc860
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004bc865
    TEST EAX,EAX                        ; 004bc868
    JNZ 0x004bcaa3                      ; 004bc86a
        ;   XREF to: 004bcaa3 (CONDITIONAL_JUMP)  ; LAB_004bcaa3
    MOV EDI,0x1                         ; 004bc870
    MOV dword ptr [EBX + 0x26c],0x0     ; 004bc875
        ;   Label: LAB_004bc875
    MOV dword ptr [EBX + 0x274],0x0     ; 004bc87f
    PUSH 0x5d8691                       ; 004bc889 | DAT_005d8691
    MOV dword ptr [EBX + 0x268],0x0     ; 004bc88e
    MOV EBP,dword ptr [0x01c25590]      ; 004bc898 | DAT_01c25590
    MOV dword ptr [EBX + 0x270],0x0     ; 004bc89e
    MOV EAX,[0x01511cc0]                ; 004bc8a8 | DAT_01511cc0
    MOV dword ptr [EBX + 0x250],0x0     ; 004bc8ad
    PUSH 0x5d8694                       ; 004bc8b7 | = "pod.ini"
    XOR ESI,ESI                         ; 004bc8bc
    MOV [0x01c25590],EAX                ; 004bc8be | DAT_01c25590
    CALL crt_stdio.c_fopen_FUN_005b910c ; 004bc8c3
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005b910c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004bc8c8
    TEST EAX,EAX                        ; 004bc8cb
    JZ 0x004bc8dd                       ; 004bc8cd
        ;   XREF to: 004bc8dd (CONDITIONAL_JUMP)  ; LAB_004bc8dd
    PUSH EAX                            ; 004bc8cf
    MOV ESI,0x1                         ; 004bc8d0
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004bc8d5
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004bc8da
    MOV EDX,dword ptr [ESP + 0x32c]     ; 004bc8dd
        ;   Label: LAB_004bc8dd
    CMP EDX,0x1                         ; 004bc8e4
    JNZ 0x004bc8eb                      ; 004bc8e7
        ;   XREF to: 004bc8eb (CONDITIONAL_JUMP)  ; LAB_004bc8eb
    MOV ESI,EDX                         ; 004bc8e9
    TEST EDI,EDI                        ; 004bc8eb
        ;   Label: LAB_004bc8eb
    PUSH 0x5d869c                       ; 004bc8ed | DAT_005d869c
    PUSH 0x5d86a1                       ; 004bc8f2 | = "system\\nocturne.ini"
    LEA EAX,[ESP + 0x8]                 ; 004bc8f7
    PUSH EAX                            ; 004bc8fb
    CALL engine_ini.cpp_FUN_004d8910    ; 004bc8fc
        ;   XREF to: 004d8910 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_FUN_004d8910(CIniFile * this_ptr, char * filename, char * section)
    ADD ESP,0xc                         ; 004bc901
    LEA EAX,[ESP + 0x308]               ; 004bc904
    PUSH EAX                            ; 004bc90b
    PUSH 0x5d86b5                       ; 004bc90c | = "Act1Code"
    LEA EAX,[ESP + 0x8]                 ; 004bc911
    XOR ECX,ECX                         ; 004bc915
    PUSH EAX                            ; 004bc917
    MOV dword ptr [ESP + 0x314],ECX     ; 004bc918
    CALL engine_ini.cpp_FUN_004d8b20    ; 004bc91f
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 004bc924
    PUSH 0x5d86be                       ; 004bc927 | = "Coffin Rock"
    MOV EDI,0xffffffff                  ; 004bc92c
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004bc931
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV dword ptr [ESP + 0x310],EAX     ; 004bc936
    ADD ESP,0x4                         ; 004bc93d
    MOV dword ptr [ESP + 0x310],EDI     ; 004bc940
    TEST ESI,ESI                        ; 004bc947
    JZ 0x004bcab3                       ; 004bc949
        ;   XREF to: 004bcab3 (CONDITIONAL_JUMP)  ; LAB_004bcab3
    PUSH 0x0                            ; 004bc94f
    LEA EAX,[ESP + 0x208]               ; 004bc951
    PUSH EAX                            ; 004bc958
    PUSH 0x5d86d3                       ; 004bc959 | = "*.msn"
    PUSH 0x5d86d9                       ; 004bc95e | = "world"
    PUSH 0x5d86df                       ; 004bc963 | = "Select mission to play"
    MOV ECX,dword ptr [0x006138e0]      ; 004bc968 | g_CEditorToolsPtr
    PUSH ECX                            ; 004bc96e
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0047c970 ; 004bc96f
        ;   XREF to: 0047c970 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0047c970(CEditorTools * this_ptr, char * dialog_title, char * search_directory, char * file_pattern, ...)
    ADD ESP,0x18                        ; 004bc974
    TEST EAX,EAX                        ; 004bc977
    JZ 0x004bcb45                       ; 004bc979
        ;   XREF to: 004bcb45 (CONDITIONAL_JUMP)  ; LAB_004bcb45
    XOR AH,AH                           ; 004bc97f
    XOR ESI,ESI                         ; 004bc981
    MOV byte ptr [0x01cb7f78],AH        ; 004bc983 | DAT_01cb7f78
    MOV dword ptr [0x01cb807c],ESI      ; 004bc989 | DAT_01cb807c
    MOV dword ptr [0x01cb8078],ESI      ; 004bc98f | DAT_01cb8078
    MOV EAX,[0x00616044]                ; 004bc995 | g_CFieldNotesPtr
        ;   Label: LAB_004bc995
    PUSH EAX                            ; 004bc99a
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0 ; 004bc99b
        ;   XREF to: 004a50b0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004bc9a0
    MOV EDX,dword ptr [0x006141f0]      ; 004bc9a3 | DAT_006141f0
    PUSH EDX                            ; 004bc9a9
    CALL core_event.cpp_FUN_004910b0    ; 004bc9aa
        ;   XREF to: 004910b0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004910b0()
    ADD ESP,0x4                         ; 004bc9af
    LEA EAX,[ESP + 0x204]               ; 004bc9b2
    PUSH EAX                            ; 004bc9b9
    PUSH 0x1cb7b50                      ; 004bc9ba
    MOV ESI,0x1                         ; 004bc9bf
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004bc9c4
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bc9c9
    TEST EAX,EAX                        ; 004bc9cc
    JZ 0x004bc9f8                       ; 004bc9ce
        ;   XREF to: 004bc9f8 (CONDITIONAL_JUMP)  ; LAB_004bc9f8
    LEA ESI,[ESP + 0x204]               ; 004bc9d0
    MOV EDI,0x1cb7b50                   ; 004bc9d7
    PUSH EDI                            ; 004bc9dc
    MOV AL,byte ptr [ESI]               ; 004bc9dd
        ;   Label: LAB_004bc9dd
    MOV byte ptr [EDI],AL               ; 004bc9df | DAT_01cb7b50 | DAT_01cb7b52
    CMP AL,0x0                          ; 004bc9e1
    JZ 0x004bc9f5                       ; 004bc9e3
        ;   XREF to: 004bc9f5 (CONDITIONAL_JUMP)  ; LAB_004bc9f5
    MOV AL,byte ptr [ESI + 0x1]         ; 004bc9e5
    ADD ESI,0x2                         ; 004bc9e8
    MOV byte ptr [EDI + 0x1],AL         ; 004bc9eb | DAT_01cb7b51 | DAT_01cb7b53
    ADD EDI,0x2                         ; 004bc9ee
    CMP AL,0x0                          ; 004bc9f1
    JNZ 0x004bc9dd                      ; 004bc9f3
        ;   XREF to: 004bc9dd (CONDITIONAL_JUMP)  ; LAB_004bc9dd
    POP EDI                             ; 004bc9f5
        ;   Label: LAB_004bc9f5
    XOR ESI,ESI                         ; 004bc9f6
    MOV ECX,dword ptr [ESP + 0x310]     ; 004bc9f8
        ;   Label: LAB_004bc9f8
    PUSH ECX                            ; 004bc9ff
    PUSH 0x0                            ; 004bca00
    PUSH 0xa                            ; 004bca02
    MOV EDI,dword ptr [0x00617e10]      ; 004bca04 | DAT_00617e10
    PUSH EDI                            ; 004bca0a
    CALL core_level.cpp_FUN_004e1480    ; 004bca0b
        ;   XREF to: 004e1480 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_FUN_004e1480()
    ADD ESP,0x10                        ; 004bca10
    PUSH ESI                            ; 004bca13
    LEA EAX,[ESP + 0x208]               ; 004bca14
    PUSH EAX                            ; 004bca1b
    MOV EAX,[0x00618170]                ; 004bca1c | DAT_00618170
    PUSH EAX                            ; 004bca21
    CALL core_mission.cpp_CDemonMission_load_FUN_004fb490 ; 004bca22
        ;   XREF to: 004fb490 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_004fb490(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 004bca27
    PUSH 0x0                            ; 004bca2a
    MOV EDX,dword ptr [0x00618170]      ; 004bca2c | DAT_00618170
    PUSH EDX                            ; 004bca32
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_004fd0e0 ; 004bca33
        ;   XREF to: 004fd0e0 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createHeros_FUN_004fd0e0(CDemonMission * this_ptr, CCharacter * existing_hero)
    ADD ESP,0x8                         ; 004bca38
    TEST EAX,EAX                        ; 004bca3b
    JZ 0x004bca83                       ; 004bca3d
        ;   XREF to: 004bca83 (CONDITIONAL_JUMP)  ; LAB_004bca83
    MOV ECX,dword ptr [0x00618170]      ; 004bca3f | DAT_00618170
    PUSH ECX                            ; 004bca45
    CALL core_mission.cpp_FUN_004fce00  ; 004bca46
        ;   XREF to: 004fce00 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_FUN_004fce00(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004bca4b
    MOV ESI,dword ptr [0x00618170]      ; 004bca4e | DAT_00618170
    PUSH ESI                            ; 004bca54
    CALL core_mission.cpp_CDemonMission_run_FUN_004fcb00 ; 004bca55
        ;   XREF to: 004fcb00 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_run_FUN_004fcb00(CDemonMission * this_ptr)
    MOV EDI,dword ptr [EBX + 0x9e8]     ; 004bca5a
    ADD ESP,0x4                         ; 004bca60
    TEST EDI,EDI                        ; 004bca63
    JZ 0x004bca83                       ; 004bca65
        ;   XREF to: 004bca83 (CONDITIONAL_JUMP)  ; LAB_004bca83
    PUSH 0x1                            ; 004bca67
    LEA EAX,[EBX + 0x9ec]               ; 004bca69
    PUSH EAX                            ; 004bca6f
    PUSH EBX                            ; 004bca70
    MOV dword ptr [EBX + 0x9e8],0x0     ; 004bca71
    CALL core_game.cpp_FUN_004bbf70     ; 004bca7b
        ;   XREF to: 004bbf70 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bbf70(CGame * this_ptr, char * save_filename, int load_mode)
    ADD ESP,0xc                         ; 004bca80
    PUSH 0x0                            ; 004bca83
        ;   Label: LAB_004bca83
    LEA EAX,[ESP + 0x4]                 ; 004bca85
        ;   Label: LAB_004bca85
    PUSH EAX                            ; 004bca89
    MOV dword ptr [0x01c25590],EBP      ; 004bca8a | DAT_01c25590
    CALL engine_ini.cpp_CIniFile_dtor_FUN_004d8940 ; 004bca90
        ;   XREF to: 004d8940 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_dtor_FUN_004d8940(CIniFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bca95
    ADD ESP,0x314                       ; 004bca98
    POP EBP                             ; 004bca9e
    POP EDI                             ; 004bca9f
    POP ESI                             ; 004bcaa0
    POP EBX                             ; 004bcaa1
    RET                                 ; 004bcaa2
    PUSH EAX                            ; 004bcaa3
        ;   Label: LAB_004bcaa3
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004bcaa4
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    XOR EDI,EDI                         ; 004bcaa9
    ADD ESP,0x4                         ; 004bcaab
    JMP 0x004bc875                      ; 004bcaae
        ;   XREF to: 004bc875 (UNCONDITIONAL_JUMP)  ; LAB_004bc875
    LEA EDI,[ESP + 0x204]               ; 004bcab3
        ;   Label: LAB_004bcab3
    MOV dword ptr [ESP + 0x310],ESI     ; 004bcaba
    MOV ESI,dword ptr [0x006165a8]      ; 004bcac1 | PTR_s_awakening_msn_005d8aee_006165a8
    PUSH EDI                            ; 004bcac7
    MOV AL,byte ptr [ESI]               ; 004bcac8 | = "awakening.msn" | s_awakening_msn_005d8aee+2
        ;   Label: LAB_004bcac8
    MOV byte ptr [EDI],AL               ; 004bcaca
    CMP AL,0x0                          ; 004bcacc
    JZ 0x004bcae0                       ; 004bcace
        ;   XREF to: 004bcae0 (CONDITIONAL_JUMP)  ; LAB_004bcae0
    MOV AL,byte ptr [ESI + 0x1]         ; 004bcad0 | s_awakening_msn_005d8aee+1 | s_awakening_msn_005d8aee+3
    ADD ESI,0x2                         ; 004bcad3
    MOV byte ptr [EDI + 0x1],AL         ; 004bcad6
    ADD EDI,0x2                         ; 004bcad9
    CMP AL,0x0                          ; 004bcadc
    JNZ 0x004bcac8                      ; 004bcade
        ;   XREF to: 004bcac8 (CONDITIONAL_JUMP)  ; LAB_004bcac8
    POP EDI                             ; 004bcae0
        ;   Label: LAB_004bcae0
    PUSH 0x5d86ca                       ; 004bcae1 | DAT_005d86ca
    LEA EAX,[ESP + 0x208]               ; 004bcae6
    PUSH EAX                            ; 004bcaed
    PUSH 0x5d86cd                       ; 004bcaee | = "world"
    CALL engine_dosio.cpp_FUN_00460c70  ; 004bcaf3
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004bcaf8
    TEST EAX,EAX                        ; 004bcafb
    JZ 0x004bcb45                       ; 004bcafd
        ;   XREF to: 004bcb45 (CONDITIONAL_JUMP)  ; LAB_004bcb45
    PUSH EAX                            ; 004bcaff
    MOV EDI,0x1cb7f78                   ; 004bcb00
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004bcb05
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    MOV EAX,[0x006166ac]                ; 004bcb0a | DAT_006166ac
    ADD ESP,0x4                         ; 004bcb0f
    XOR EDX,EDX                         ; 004bcb12
    MOV ESI,dword ptr [ESP + 0x30c]     ; 004bcb14
    MOV [0x01cb8078],EAX                ; 004bcb1b | DAT_01cb8078
    PUSH EDI                            ; 004bcb20 | DAT_01cb7f78
    MOV AL,byte ptr [ESI]               ; 004bcb21
        ;   Label: LAB_004bcb21
    MOV byte ptr [EDI],AL               ; 004bcb23 | DAT_01cb7f78 | DAT_01cb7f7a
    CMP AL,0x0                          ; 004bcb25
    JZ 0x004bcb39                       ; 004bcb27
        ;   XREF to: 004bcb39 (CONDITIONAL_JUMP)  ; LAB_004bcb39
    MOV AL,byte ptr [ESI + 0x1]         ; 004bcb29
    ADD ESI,0x2                         ; 004bcb2c
    MOV byte ptr [EDI + 0x1],AL         ; 004bcb2f | DAT_01cb7f79 | DAT_01cb7f7b
    ADD EDI,0x2                         ; 004bcb32
    CMP AL,0x0                          ; 004bcb35
    JNZ 0x004bcb21                      ; 004bcb37
        ;   XREF to: 004bcb21 (CONDITIONAL_JUMP)  ; LAB_004bcb21
    POP EDI                             ; 004bcb39
        ;   Label: LAB_004bcb39
    MOV dword ptr [0x01cb807c],EDX      ; 004bcb3a | DAT_01cb807c
    JMP 0x004bc995                      ; 004bcb40
        ;   XREF to: 004bc995 (UNCONDITIONAL_JUMP)  ; LAB_004bc995
    PUSH EAX                            ; 004bcb45
        ;   Label: LAB_004bcb45
    JMP 0x004bca85                      ; 004bcb46
        ;   XREF to: 004bca85 (UNCONDITIONAL_JUMP)  ; LAB_004bca85

