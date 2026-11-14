; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004be8d0(CGame *param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x320]:1  local_320
; undefined        Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x11b]:1  local_11b
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_main.c_FUN_004e4400 at 004e4487
;   core_menu.cpp_showMainGameMenu_FUN_004ea4d0 at 004ea786
;
; Referenced Globals:
;   undefined4 DAT_005c37cd
;   TerminatedCString s_blairhero_pod_005c37d0
;   undefined4 DAT_005c37de
;   undefined4 DAT_005c37df
;   TerminatedCString s_pod_ini_005c37e2
;   undefined4 DAT_005c37ea
;   TerminatedCString s_system_bw3_ini_005c37ef
;   TerminatedCString s_Act1Code_005c37fe
;   TerminatedCString s_The_Rustin_Parr_Investig_005c3807
;   TerminatedCString s_town_act1_msn_005c3825
;   undefined4 s_town_act1_msn_005c3825+1
;   undefined4 s_town_act1_msn_005c3825+2
;   undefined4 s_town_act1_msn_005c3825+3
;   TerminatedCString s_msn_005c3833
;   TerminatedCString s_world_005c3839
;   ... and 15 more
;
; Called Functions:
;   core_event.cpp_FUN_00494880
;   core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0
;   core_game.cpp_FUN_004bdfb0
;   core_game.cpp_FUN_004c4d10
;   core_level.cpp_FUN_004dfc50
;   core_mission.cpp_CDemonMission_createHeros_FUN_004f7880
;   core_mission.cpp_CDemonMission_load_FUN_004f5bc0
;   core_mission.cpp_CDemonMission_run_FUN_004f72a0
;   core_mission.cpp_FUN_004f7590
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fopen_FUN_005a43ec
;   crt_string.c__stricmp_FUN_005a3260
;   engine_dosio.cpp_FUN_004659c0
;   engine_ini.cpp_CIniFile_dtor_FUN_004d8a50
;   engine_ini.cpp_FUN_004d8a20
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be8d0
        ;   Label: core_game.cpp_FUN_004be8d0
    PUSH ESI                            ; 004be8d1
    PUSH EDI                            ; 004be8d2
    PUSH EBP                            ; 004be8d3
    SUB ESP,0x310                       ; 004be8d4
    MOV EBX,dword ptr [ESP + 0x324]     ; 004be8da
    PUSH 0x5c37cd                       ; 004be8e1 | DAT_005c37cd
    PUSH 0x5c37d0                       ; 004be8e6 | = "blairhero.pod"
    PUSH 0x5c37de                       ; 004be8eb | DAT_005c37de
    CALL engine_dosio.cpp_FUN_004659c0  ; 004be8f0
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004be8f5
    TEST EAX,EAX                        ; 004be8f8
    JNZ 0x004beb3f                      ; 004be8fa
        ;   XREF to: 004beb3f (CONDITIONAL_JUMP)  ; LAB_004beb3f
    MOV EDI,0x1                         ; 004be900
    MOV dword ptr [EBX + 0x274],0x0     ; 004be905
        ;   Label: LAB_004be905
    MOV dword ptr [EBX + 0x27c],0x0     ; 004be90f
    MOV dword ptr [EBX + 0x270],0x0     ; 004be919
    MOV dword ptr [EBX + 0x278],0x0     ; 004be923
    PUSH EBX                            ; 004be92d
    MOV dword ptr [EBX + 0x294],0xbf800000 ; 004be92e
    CALL core_game.cpp_FUN_004c4d10     ; 004be938
        ;   XREF to: 004c4d10 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004c4d10()
    ADD ESP,0x4                         ; 004be93d
    XOR ESI,ESI                         ; 004be940
    PUSH 0x5c37df                       ; 004be942 | DAT_005c37df
    MOV EBP,dword ptr [0x01c5b0e0]      ; 004be947 | DAT_01c5b0e0
    MOV EAX,[0x01549aa8]                ; 004be94d | DAT_01549aa8
    PUSH 0x5c37e2                       ; 004be952 | = "pod.ini"
    MOV dword ptr [EBX + 0x258],0x0     ; 004be957
    MOV [0x01c5b0e0],EAX                ; 004be961 | DAT_01c5b0e0
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 004be966
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005a43ec(char * filename, char * mode)
    ADD ESP,0x8                         ; 004be96b
    TEST EAX,EAX                        ; 004be96e
    JZ 0x004be980                       ; 004be970
        ;   XREF to: 004be980 (CONDITIONAL_JUMP)  ; LAB_004be980
    PUSH EAX                            ; 004be972
    MOV ESI,0x1                         ; 004be973
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004be978
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 004be97d
    MOV EDX,dword ptr [ESP + 0x328]     ; 004be980
        ;   Label: LAB_004be980
    CMP EDX,0x1                         ; 004be987
    JNZ 0x004be98e                      ; 004be98a
        ;   XREF to: 004be98e (CONDITIONAL_JUMP)  ; LAB_004be98e
    MOV ESI,EDX                         ; 004be98c
    TEST EDI,EDI                        ; 004be98e
        ;   Label: LAB_004be98e
    PUSH 0x5c37ea                       ; 004be990 | DAT_005c37ea
    PUSH 0x5c37ef                       ; 004be995 | = "system\\bw3.ini"
    LEA EAX,[ESP + 0x8]                 ; 004be99a
    PUSH EAX                            ; 004be99e
    CALL engine_ini.cpp_FUN_004d8a20    ; 004be99f
        ;   XREF to: 004d8a20 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_FUN_004d8a20(CIniFile * this_ptr, char * filename, char * section)
    ADD ESP,0xc                         ; 004be9a4
    LEA EAX,[ESP + 0x308]               ; 004be9a7
    PUSH EAX                            ; 004be9ae
    PUSH 0x5c37fe                       ; 004be9af | = "Act1Code"
    LEA EAX,[ESP + 0x8]                 ; 004be9b4
    XOR ECX,ECX                         ; 004be9b8
    PUSH EAX                            ; 004be9ba
    MOV dword ptr [ESP + 0x314],ECX     ; 004be9bb
    CALL engine_ini.cpp_FUN_004d8c30    ; 004be9c2
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 004be9c7
    PUSH 0x5c3807                       ; 004be9ca | = "The Rustin Parr Investigation"
    MOV EDI,0xffffffff                  ; 004be9cf
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004be9d4
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004be9d9
    MOV dword ptr [ESP + 0x30c],EDI     ; 004be9dc
    TEST ESI,ESI                        ; 004be9e3
    JZ 0x004beb4f                       ; 004be9e5
        ;   XREF to: 004beb4f (CONDITIONAL_JUMP)  ; LAB_004beb4f
    PUSH 0x0                            ; 004be9eb
    LEA EAX,[ESP + 0x208]               ; 004be9ed
    PUSH EAX                            ; 004be9f4
    PUSH 0x5c3833                       ; 004be9f5 | = "*.msn"
    PUSH 0x5c3839                       ; 004be9fa | = "world"
    PUSH 0x5c383f                       ; 004be9ff | = "Select mission to play"
    MOV EAX,[0x005fb140]                ; 004bea04 | g_CEditorToolsPtr
    PUSH EAX                            ; 004bea09
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0047db70 ; 004bea0a
        ;   XREF to: 0047db70 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0047db70(CEditorTools * this_ptr, char * dialog_title, char * search_directory, char * file_pattern, ...)
    ADD ESP,0x18                        ; 004bea0f
    TEST EAX,EAX                        ; 004bea12
    JZ 0x004beb7a                       ; 004bea14
        ;   XREF to: 004beb7a (CONDITIONAL_JUMP)  ; LAB_004beb7a
    XOR AH,AH                           ; 004bea1a
    XOR EDX,EDX                         ; 004bea1c
    MOV byte ptr [0x01d229f0],AH        ; 004bea1e | DAT_01d229f0
    MOV dword ptr [0x01d22af4],EDX      ; 004bea24 | DAT_01d22af4
    MOV dword ptr [0x01d22af0],EDX      ; 004bea2a | DAT_01d22af0
    MOV ESI,dword ptr [0x005fe4b0]      ; 004bea30 | g_CFieldNotesPtr
        ;   Label: LAB_004bea30
    PUSH ESI                            ; 004bea36
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0 ; 004bea37
        ;   XREF to: 004ab7a0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004bea3c
    MOV EDI,dword ptr [0x005fba60]      ; 004bea3f | DAT_005fba60
    PUSH EDI                            ; 004bea45
    CALL core_event.cpp_FUN_00494880    ; 004bea46
        ;   XREF to: 00494880 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_00494880()
    ADD ESP,0x4                         ; 004bea4b
    LEA EAX,[ESP + 0x204]               ; 004bea4e
    PUSH EAX                            ; 004bea55
    PUSH 0x1d225c8                      ; 004bea56
    MOV ESI,0x1                         ; 004bea5b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004bea60
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bea65
    TEST EAX,EAX                        ; 004bea68
    JZ 0x004bea94                       ; 004bea6a
        ;   XREF to: 004bea94 (CONDITIONAL_JUMP)  ; LAB_004bea94
    LEA ESI,[ESP + 0x204]               ; 004bea6c
    MOV EDI,0x1d225c8                   ; 004bea73
    PUSH EDI                            ; 004bea78
    MOV AL,byte ptr [ESI]               ; 004bea79
        ;   Label: LAB_004bea79
    MOV byte ptr [EDI],AL               ; 004bea7b | DAT_01d225c8 | DAT_01d225ca
    CMP AL,0x0                          ; 004bea7d
    JZ 0x004bea91                       ; 004bea7f
        ;   XREF to: 004bea91 (CONDITIONAL_JUMP)  ; LAB_004bea91
    MOV AL,byte ptr [ESI + 0x1]         ; 004bea81
    ADD ESI,0x2                         ; 004bea84
    MOV byte ptr [EDI + 0x1],AL         ; 004bea87 | DAT_01d225c9 | DAT_01d225cb
    ADD EDI,0x2                         ; 004bea8a
    CMP AL,0x0                          ; 004bea8d
    JNZ 0x004bea79                      ; 004bea8f
        ;   XREF to: 004bea79 (CONDITIONAL_JUMP)  ; LAB_004bea79
    POP EDI                             ; 004bea91
        ;   Label: LAB_004bea91
    XOR ESI,ESI                         ; 004bea92
    MOV EAX,dword ptr [ESP + 0x30c]     ; 004bea94
        ;   Label: LAB_004bea94
    PUSH EAX                            ; 004bea9b
    PUSH 0x0                            ; 004bea9c
    PUSH 0xa                            ; 004bea9e
    MOV EDX,dword ptr [0x006002ac]      ; 004beaa0 | DAT_006002ac
    PUSH EDX                            ; 004beaa6
    CALL core_level.cpp_FUN_004dfc50    ; 004beaa7
        ;   XREF to: 004dfc50 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_FUN_004dfc50()
    ADD ESP,0x10                        ; 004beaac
    PUSH ESI                            ; 004beaaf
    LEA EAX,[ESP + 0x208]               ; 004beab0
    PUSH EAX                            ; 004beab7
    MOV ECX,dword ptr [0x00600530]      ; 004beab8 | DAT_00600530
    PUSH ECX                            ; 004beabe
    CALL core_mission.cpp_CDemonMission_load_FUN_004f5bc0 ; 004beabf
        ;   XREF to: 004f5bc0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_004f5bc0(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 004beac4
    PUSH 0x0                            ; 004beac7
    MOV ESI,dword ptr [0x00600530]      ; 004beac9 | DAT_00600530
    PUSH ESI                            ; 004beacf
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_004f7880 ; 004bead0
        ;   XREF to: 004f7880 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createHeros_FUN_004f7880(CDemonMission * this_ptr, CCharacter * existing_hero)
    ADD ESP,0x8                         ; 004bead5
    TEST EAX,EAX                        ; 004bead8
    JZ 0x004beb1f                       ; 004beada
        ;   XREF to: 004beb1f (CONDITIONAL_JUMP)  ; LAB_004beb1f
    MOV EDI,dword ptr [0x00600530]      ; 004beadc | DAT_00600530
    PUSH EDI                            ; 004beae2
    CALL core_mission.cpp_FUN_004f7590  ; 004beae3
        ;   XREF to: 004f7590 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_FUN_004f7590(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004beae8
    MOV EAX,[0x00600530]                ; 004beaeb | DAT_00600530
    PUSH EAX                            ; 004beaf0
    CALL core_mission.cpp_CDemonMission_run_FUN_004f72a0 ; 004beaf1
        ;   XREF to: 004f72a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_run_FUN_004f72a0(CDemonMission * this_ptr)
    MOV EDX,dword ptr [EBX + 0xa78]     ; 004beaf6
    ADD ESP,0x4                         ; 004beafc
    TEST EDX,EDX                        ; 004beaff
    JZ 0x004beb1f                       ; 004beb01
        ;   XREF to: 004beb1f (CONDITIONAL_JUMP)  ; LAB_004beb1f
    PUSH 0x1                            ; 004beb03
    LEA EAX,[EBX + 0xa7c]               ; 004beb05
    PUSH EAX                            ; 004beb0b
    PUSH EBX                            ; 004beb0c
    MOV dword ptr [EBX + 0xa78],0x0     ; 004beb0d
    CALL core_game.cpp_FUN_004bdfb0     ; 004beb17
        ;   XREF to: 004bdfb0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bdfb0(CGame * this_ptr, char * save_filename, int load_mode)
    ADD ESP,0xc                         ; 004beb1c
    PUSH 0x0                            ; 004beb1f
        ;   Label: LAB_004beb1f
    LEA EAX,[ESP + 0x4]                 ; 004beb21
        ;   Label: LAB_004beb21
    PUSH EAX                            ; 004beb25
    MOV dword ptr [0x01c5b0e0],EBP      ; 004beb26 | DAT_01c5b0e0
    CALL engine_ini.cpp_CIniFile_dtor_FUN_004d8a50 ; 004beb2c
        ;   XREF to: 004d8a50 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_dtor_FUN_004d8a50(CIniFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004beb31
    ADD ESP,0x310                       ; 004beb34
    POP EBP                             ; 004beb3a
    POP EDI                             ; 004beb3b
    POP ESI                             ; 004beb3c
    POP EBX                             ; 004beb3d
    RET                                 ; 004beb3e
    PUSH EAX                            ; 004beb3f
        ;   Label: LAB_004beb3f
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004beb40
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    XOR EDI,EDI                         ; 004beb45
    ADD ESP,0x4                         ; 004beb47
    JMP 0x004be905                      ; 004beb4a
        ;   XREF to: 004be905 (UNCONDITIONAL_JUMP)  ; LAB_004be905
    MOV ESI,0x5c3825                    ; 004beb4f | = "town_act1.msn"
        ;   Label: LAB_004beb4f
    LEA EDI,[ESP + 0x204]               ; 004beb54
    PUSH EDI                            ; 004beb5b
    MOV AL,byte ptr [ESI]               ; 004beb5c | = "town_act1.msn" | s_town_act1_msn_005c3825+2
        ;   Label: LAB_004beb5c
    MOV byte ptr [EDI],AL               ; 004beb5e
    CMP AL,0x0                          ; 004beb60
    JZ 0x004beb74                       ; 004beb62
        ;   XREF to: 004beb74 (CONDITIONAL_JUMP)  ; LAB_004beb74
    MOV AL,byte ptr [ESI + 0x1]         ; 004beb64 | s_town_act1_msn_005c3825+1 | s_town_act1_msn_005c3825+3
    ADD ESI,0x2                         ; 004beb67
    MOV byte ptr [EDI + 0x1],AL         ; 004beb6a
    ADD EDI,0x2                         ; 004beb6d
    CMP AL,0x0                          ; 004beb70
    JNZ 0x004beb5c                      ; 004beb72
        ;   XREF to: 004beb5c (CONDITIONAL_JUMP)  ; LAB_004beb5c
    POP EDI                             ; 004beb74
        ;   Label: LAB_004beb74
    JMP 0x004bea30                      ; 004beb75
        ;   XREF to: 004bea30 (UNCONDITIONAL_JUMP)  ; LAB_004bea30
    PUSH EAX                            ; 004beb7a
        ;   Label: LAB_004beb7a
    JMP 0x004beb21                      ; 004beb7b
        ;   XREF to: 004beb21 (UNCONDITIONAL_JUMP)  ; LAB_004beb21

