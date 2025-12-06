; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0(CDemonMission * this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x158]:1  local_158
; undefined1       Stack[-0xf4]:1  local_f4
; undefined1       Stack[-0xf3]:1  local_f3
; undefined1       Stack[-0x90]:1  local_90
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e1913
;   core_mission.cpp_CDemonMission_load_FUN_00522d90 at 00522dda
;
; Referenced Globals:
;   TerminatedCString s_d_d_00638a9f
;   TerminatedCString s_core_mission_cpp_00638aa6
;   TerminatedCString s_Invalid_mission_version__00638aba
;   TerminatedCString s_core_mission_cpp_00638b16
;   TerminatedCString s_This_mission_uses_actor__00638b2a
;   TerminatedCString s_core_mission_cpp_00638b75
;   TerminatedCString s_No_name_in_mission_00638b89
;   TerminatedCString s_s_00638b9c
;   TerminatedCString s_d_00638ba0
;   TerminatedCString s_s_00638ba4
;   TerminatedCString s_d_00638ba8
;   TerminatedCString s_s_d_00638bac
;   TerminatedCString s_core_mission_cpp_00638bb3
;   TerminatedCString s_Actor_type_s_is_saved_in_00638bc7
;   TerminatedCString s_d_00638c30
;   ... and 24 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_load_FUN_0040b050
;   core_actor.cpp_createActorByName_FUN_0040c430
;   core_actor.cpp_getActorClassByName_FUN_0040c3c0
;   core_actor.cpp_resetActorTypeInfo_FUN_0040c7f0
;   core_gore.cpp_FUN_004ed760
;   core_gore.cpp_FUN_004ee1e0
;   core_inv.cpp_CInventory_loadItems_FUN_004ff740
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
;   core_mission.cpp_CDemonMission_FUN_00523b70
;   core_mission.cpp_FUN_005248e0
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522eb0
        ;   Label: core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0
    PUSH ESI                            ; 00522eb1
    PUSH EDI                            ; 00522eb2
    PUSH EBP                            ; 00522eb3
    SUB ESP,0x148                       ; 00522eb4
    MOV EBX,dword ptr [ESP + 0x15c]     ; 00522eba
    PUSH EBX                            ; 00522ec1
    CALL core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30 ; 00522ec2 | void core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30(CDemonMission * this_ptr)
        ;   XREF to: 00522d30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00522ec7
    CMP dword ptr [ESP + 0x164],0x0     ; 00522eca
    JZ 0x005233b8                       ; 00522ed2 | LAB_005233b8
        ;   XREF to: 005233b8 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x160]     ; 00522ed8
        ;   Label: LAB_00522ed8
    PUSH ESI                            ; 00522edf
        ;   Label: LAB_00522edf
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00522ee0 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00522ee5
    TEST EAX,EAX                        ; 00522ee8
    JL 0x00522ef1                       ; 00522eea | LAB_00522ef1
        ;   XREF to: 00522ef1 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00522eec
    JNZ 0x00522edf                      ; 00522eef | LAB_00522edf
        ;   XREF to: 00522edf (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x12c]               ; 00522ef1
        ;   Label: LAB_00522ef1
    PUSH EAX                            ; 00522ef8
    LEA EAX,[EBX + 0x8]                 ; 00522ef9
    PUSH EAX                            ; 00522efc
    PUSH 0x638a9f                       ; 00522efd | = "%d,%d\n" | s_d_d_00638a9f = %d,%d

    MOV ECX,dword ptr [ESP + 0x16c]     ; 00522f02
    PUSH ECX                            ; 00522f09
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00522f0a | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [EBX + 0x8]       ; 00522f0f
    ADD ESP,0x10                        ; 00522f12
    CMP ESI,0x7                         ; 00522f15
    JLE 0x00522f40                      ; 00522f18 | LAB_00522f40
        ;   XREF to: 00522f40 (CONDITIONAL_JUMP)
    PUSH 0x7                            ; 00522f1a
    PUSH ESI                            ; 00522f1c
    MOV EDI,0x638aa6                    ; 00522f1d | = "..\\core\\mission.cpp" | s_core_mission_cpp_00638aa6 = ..\core\mission.cpp
    MOV EBP,0xe2                        ; 00522f22
    PUSH 0x638aba                       ; 00522f27 | = "Invalid mission version number: %d, c..." | s_Invalid_mission_version__00638aba = Invalid mission version number: %d, current version is %d.  (You probably have an old .exe)
    MOV dword ptr [0x02f0ca48],EDI      ; 00522f2c | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 00522f32 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00522f38 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00522f3d
    MOV EDX,dword ptr [ESP + 0x12c]     ; 00522f40
        ;   Label: LAB_00522f40
    CMP EDX,0x4                         ; 00522f47
    JGE 0x00522f70                      ; 00522f4a | LAB_00522f70
        ;   XREF to: 00522f70 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 00522f4c
    MOV ECX,0x638b16                    ; 00522f4d | = "..\\core\\mission.cpp" | s_core_mission_cpp_00638b16 = ..\core\mission.cpp
    MOV ESI,0xe5                        ; 00522f52
    PUSH 0x638b2a                       ; 00522f57 | = "This mission uses actor format versio..." | s_This_mission_uses_actor__00638b2a = This mission uses actor format version %d, which we don't support anymore!
    MOV dword ptr [0x02f0ca48],ECX      ; 00522f5c | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00522f62 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00522f68 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00522f6d
    CMP dword ptr [EBX + 0x8],0x2       ; 00522f70
        ;   Label: LAB_00522f70
    JL 0x005233c6                       ; 00522f74 | LAB_005233c6
        ;   XREF to: 005233c6 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x160]     ; 00522f7a
        ;   Label: LAB_00522f7a
    PUSH ESI                            ; 00522f81
        ;   Label: LAB_00522f81
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00522f82 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00522f87
    TEST EAX,EAX                        ; 00522f8a
    JL 0x00522f93                       ; 00522f8c | LAB_00522f93
        ;   XREF to: 00522f93 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00522f8e
    JNZ 0x00522f81                      ; 00522f91 | LAB_00522f81
        ;   XREF to: 00522f81 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x44]                ; 00522f93
        ;   Label: LAB_00522f93
    PUSH EAX                            ; 00522f96
    PUSH 0x638b9c                       ; 00522f97 | = "%s\n" | s_s_00638b9c = %s

    MOV ECX,dword ptr [ESP + 0x168]     ; 00522f9c
    PUSH ECX                            ; 00522fa3
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00522fa4 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00522fa9
    MOV ESI,dword ptr [ESP + 0x160]     ; 00522fac
    PUSH ESI                            ; 00522fb3
        ;   Label: LAB_00522fb3
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00522fb4 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00522fb9
    TEST EAX,EAX                        ; 00522fbc
    JL 0x00522fc5                       ; 00522fbe | LAB_00522fc5
        ;   XREF to: 00522fc5 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00522fc0
    JNZ 0x00522fb3                      ; 00522fc3 | LAB_00522fb3
        ;   XREF to: 00522fb3 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x144]               ; 00522fc5
        ;   Label: LAB_00522fc5
    PUSH EAX                            ; 00522fcb
    PUSH 0x638ba0                       ; 00522fcc | = "%d\n" | s_d_00638ba0 = %d

    MOV ESI,dword ptr [ESP + 0x168]     ; 00522fd1
    PUSH ESI                            ; 00522fd8
    XOR EBP,EBP                         ; 00522fd9
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00522fdb | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [EBX + 0x144]     ; 00522fe0
    ADD ESP,0xc                         ; 00522fe6
    TEST EDI,EDI                        ; 00522fe9
    JLE 0x00523020                      ; 00522feb | LAB_00523020
        ;   XREF to: 00523020 (CONDITIONAL_JUMP)
    LEA ESI,[EBX + 0x148]               ; 00522fed
    PUSH ESI                            ; 00522ff3
        ;   Label: LAB_00522ff3
    PUSH 0x638ba4                       ; 00522ff4 | = "%s\n" | s_s_00638ba4 = %s

    MOV EAX,dword ptr [ESP + 0x168]     ; 00522ff9
    PUSH EAX                            ; 00523000
    INC EBP                             ; 00523001
    ADD ESI,0x100                       ; 00523002
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00523008 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x144]     ; 0052300d
    ADD ESP,0xc                         ; 00523013
    CMP EBP,EDX                         ; 00523016
    JL 0x00522ff3                       ; 00523018 | LAB_00522ff3
        ;   XREF to: 00522ff3 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0052301a
    CALL core_actor.cpp_resetActorTypeInfo_FUN_0040c7f0 ; 00523020 | void core_actor.cpp_resetActorTypeInfo_FUN_0040c7f0()
        ;   Label: LAB_00523020
        ;   XREF to: 0040c7f0 (UNCONDITIONAL_CALL)
    CMP dword ptr [EBX + 0x8],0x3       ; 00523025
    JL 0x00523115                       ; 00523029 | LAB_00523115
        ;   XREF to: 00523115 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x160]     ; 0052302f
    PUSH ESI                            ; 00523036
        ;   Label: LAB_00523036
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00523037 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052303c
    TEST EAX,EAX                        ; 0052303f
    JL 0x00523048                       ; 00523041 | LAB_00523048
        ;   XREF to: 00523048 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00523043
    JNZ 0x00523036                      ; 00523046 | LAB_00523036
        ;   XREF to: 00523036 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x138]               ; 00523048
        ;   Label: LAB_00523048
    PUSH EAX                            ; 0052304f
    PUSH 0x638ba8                       ; 00523050 | = "%d\n" | s_d_00638ba8 = %d

    MOV ESI,dword ptr [ESP + 0x168]     ; 00523055
    PUSH ESI                            ; 0052305c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0052305d | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00523062
    MOV EDI,dword ptr [ESP + 0x138]     ; 00523065
    XOR EBP,EBP                         ; 0052306c
    TEST EDI,EDI                        ; 0052306e
    JLE 0x00523115                      ; 00523070 | LAB_00523115
        ;   XREF to: 00523115 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x13c]               ; 00523076
        ;   Label: LAB_00523076
    PUSH EAX                            ; 0052307d
    LEA EAX,[ESP + 0x4]                 ; 0052307e
    PUSH EAX                            ; 00523082
    MOV ECX,0x19                        ; 00523083
    LEA EDI,[ESP + 0x8]                 ; 00523088
    PUSH 0x638bac                       ; 0052308c | = "%s %d\n" | s_s_d_00638bac = %s %d

    MOV EDX,dword ptr [ESP + 0x16c]     ; 00523091
    MOV ESI,0x67d558                    ; 00523098 | = "corrupt!" | s_corrupt_0067d558 = corrupt!
    PUSH EDX                            ; 0052309d
    MOVSD.REP ES:EDI,ESI                ; 0052309e | = "corrupt!" | s_corrupt_0067d558 = corrupt!
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005230a0 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005230a5
    MOV EAX,ESP                         ; 005230a8
    PUSH EAX                            ; 005230aa
    CALL core_actor.cpp_getActorClassByName_FUN_0040c3c0 ; 005230ab | CDemonActorType * core_actor.cpp_getActorClassByName_FUN_0040c3c0(char * className)
        ;   XREF to: 0040c3c0 (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 005230b0
    ADD ESP,0x4                         ; 005230b2
    MOV EDI,EAX                         ; 005230b5
    TEST EAX,EAX                        ; 005230b7
    JZ 0x00523105                       ; 005230b9 | LAB_00523105
        ;   XREF to: 00523105 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005230bb
    MOV ECX,dword ptr [ESI + 0x34]      ; 005230c2
    CMP EAX,ECX                         ; 005230c5
    JLE 0x005230f9                      ; 005230c7 | LAB_005230f9
        ;   XREF to: 005230f9 (CONDITIONAL_JUMP)
    PUSH ECX                            ; 005230c9
    MOV ESI,dword ptr [ESP + 0x140]     ; 005230ca
    MOV EAX,0x638bb3                    ; 005230d1 | = "..\\core\\mission.cpp" | s_core_mission_cpp_00638bb3 = ..\core\mission.cpp
    PUSH ESI                            ; 005230d6
    MOV [0x02f0ca48],EAX                ; 005230d7 | char * g_CurrentFilename
    LEA EAX,[ESP + 0x8]                 ; 005230dc
    PUSH EAX                            ; 005230e0
    MOV EDX,0x108                       ; 005230e1
    PUSH 0x638bc7                       ; 005230e6 | = "Actor type %s is saved in mission in ..." | s_Actor_type_s_is_saved_in_00638bc7 = Actor type %s is saved in mission in format version %d, but the latest version this .EXE supports is %d!
    MOV dword ptr [0x02f0ca4c],EDX      ; 005230eb | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005230f1 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005230f6
    MOV ESI,dword ptr [EDI + 0x30]      ; 005230f9
        ;   Label: LAB_005230f9
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005230fc
    MOV dword ptr [ESI],EAX             ; 00523103
    MOV EAX,dword ptr [ESP + 0x138]     ; 00523105
        ;   Label: LAB_00523105
    INC EBP                             ; 0052310c
    CMP EBP,EAX                         ; 0052310d
    JL 0x00523076                       ; 0052310f | LAB_00523076
        ;   XREF to: 00523076 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x160]     ; 00523115
        ;   Label: LAB_00523115
    PUSH ESI                            ; 0052311c
        ;   Label: LAB_0052311c
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0052311d | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00523122
    TEST EAX,EAX                        ; 00523125
    JL 0x0052312e                       ; 00523127 | LAB_0052312e
        ;   XREF to: 0052312e (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00523129
    JNZ 0x0052311c                      ; 0052312c | LAB_0052311c
        ;   XREF to: 0052311c (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x130]               ; 0052312e
        ;   Label: LAB_0052312e
    PUSH EAX                            ; 00523135
    PUSH 0x638c30                       ; 00523136 | = "%d\n" | s_d_00638c30 = %d

    MOV EDI,dword ptr [ESP + 0x168]     ; 0052313b
    PUSH EDI                            ; 00523142
    XOR EBP,EBP                         ; 00523143
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00523145 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052314a
    MOV dword ptr [ESP + 0x134],EBP     ; 0052314d
    CMP dword ptr [EBX + 0x8],0x6       ; 00523154
    JL 0x005233ed                       ; 00523158 | LAB_005233ed
        ;   XREF to: 005233ed (CONDITIONAL_JUMP)
    MOV ESI,EDI                         ; 0052315e
    PUSH ESI                            ; 00523160
        ;   Label: LAB_00523160
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00523161 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00523166
    TEST EAX,EAX                        ; 00523169
    JL 0x00523172                       ; 0052316b | LAB_00523172
        ;   XREF to: 00523172 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 0052316d
    JNZ 0x00523160                      ; 00523170 | LAB_00523160
        ;   XREF to: 00523160 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x134]               ; 00523172
        ;   Label: LAB_00523172
    PUSH EAX                            ; 00523179
    PUSH 0x638c34                       ; 0052317a | = "%d\n" | s_d_00638c34 = %d

    MOV EDX,dword ptr [ESP + 0x168]     ; 0052317f
    PUSH EDX                            ; 00523186
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00523187 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052318c
    MOV dword ptr [EBX + 0xc],0x1       ; 0052318f
    MOV ESI,dword ptr [ESP + 0x160]     ; 00523196
        ;   Label: LAB_00523196
    PUSH ESI                            ; 0052319d
        ;   Label: LAB_0052319d
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0052319e | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005231a3
    TEST EAX,EAX                        ; 005231a6
    JL 0x005231af                       ; 005231a8 | LAB_005231af
        ;   XREF to: 005231af (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 005231aa
    JNZ 0x0052319d                      ; 005231ad | LAB_0052319d
        ;   XREF to: 0052319d (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x88c],0x0     ; 005231af
        ;   Label: LAB_005231af
    XOR ECX,ECX                         ; 005231b9
    MOV dword ptr [EBX + 0x888],0x0     ; 005231bb
    MOV dword ptr [ESP + 0x144],ECX     ; 005231c5
    MOV EAX,dword ptr [ESP + 0x130]     ; 005231cc
        ;   Label: LAB_005231cc
    MOV ESI,dword ptr [ESP + 0x134]     ; 005231d3
    MOV EDI,dword ptr [ESP + 0x144]     ; 005231da
    ADD EAX,ESI                         ; 005231e1
    CMP EAX,EDI                         ; 005231e3
    JG 0x005233f5                       ; 005231e5 | LAB_005233f5
        ;   XREF to: 005233f5 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x160]     ; 005231eb
    PUSH ESI                            ; 005231f2
        ;   Label: LAB_005231f2
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005231f3 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005231f8
    TEST EAX,EAX                        ; 005231fb
    JL 0x00523204                       ; 005231fd | LAB_00523204
        ;   XREF to: 00523204 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 005231ff
    JNZ 0x005231f2                      ; 00523202 | LAB_005231f2
        ;   XREF to: 005231f2 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x130]     ; 00523204
        ;   Label: LAB_00523204
    MOV ESI,dword ptr [EBX + 0x548]     ; 0052320b
    XOR EBP,EBP                         ; 00523211
    TEST EDX,EDX                        ; 00523213
    JLE 0x00523261                      ; 00523215 | LAB_00523261
        ;   XREF to: 00523261 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 00523217
        ;   Label: LAB_00523217
    JNZ 0x0052323e                      ; 00523219 | LAB_0052323e
        ;   XREF to: 0052323e (CONDITIONAL_JUMP)
    MOV EDX,0x638c68                    ; 0052321b | = "..\\core\\mission.cpp" | s_core_mission_cpp_00638c68 = ..\core\mission.cpp
    MOV ECX,0x142                       ; 00523220
    PUSH 0x638c7c                       ; 00523225 | = "CDemonMission::load - actor list coun..." | s_CDemonMission_load_actor_00638c7c = CDemonMission::load - actor list count mismatch #1!
    MOV dword ptr [0x02f0ca48],EDX      ; 0052322a | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00523230 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00523236 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052323b
    MOV ECX,dword ptr [ESP + 0x160]     ; 0052323e
        ;   Label: LAB_0052323e
    PUSH ECX                            ; 00523245
    PUSH ESI                            ; 00523246
    CALL core_actor.cpp_CDemonActor_load_FUN_0040b050 ; 00523247 | void core_actor.cpp_CDemonActor_load_FUN_0040b050(CDemonActor * this_ptr, FILE * file_handle)
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052324c
    INC EBP                             ; 0052324f
    MOV EDI,dword ptr [ESP + 0x130]     ; 00523250
    MOV ESI,dword ptr [ESI + 0x14c]     ; 00523257
    CMP EBP,EDI                         ; 0052325d
    JL 0x00523217                       ; 0052325f | LAB_00523217
        ;   XREF to: 00523217 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xc],0x0       ; 00523261
        ;   Label: LAB_00523261
    JZ 0x005232df                       ; 00523265 | LAB_005232df
        ;   XREF to: 005232df (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x130]     ; 0052326b
    MOV ESI,dword ptr [EBX + 0x548]     ; 00523272
    XOR EBP,EBP                         ; 00523278
    TEST EAX,EAX                        ; 0052327a
    JLE 0x005232d8                      ; 0052327c | LAB_005232d8
        ;   XREF to: 005232d8 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 0052327e
        ;   Label: LAB_0052327e
    JNZ 0x005232a4                      ; 00523280 | LAB_005232a4
        ;   XREF to: 005232a4 (CONDITIONAL_JUMP)
    MOV EAX,0x638cb0                    ; 00523282 | = "..\\core\\mission.cpp" | s_core_mission_cpp_00638cb0 = ..\core\mission.cpp
    MOV EDX,0x14e                       ; 00523287
    PUSH 0x638cc4                       ; 0052328c | = "CDemonMission::load - actor list coun..." | s_CDemonMission_load_actor_00638cc4 = CDemonMission::load - actor list count mismatch #2!
    MOV [0x02f0ca48],EAX                ; 00523291 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00523296 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052329c | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005232a1
    MOV ECX,dword ptr [0x02db880c]      ; 005232a4 | g_CHeroClassInfo.name_hash
        ;   Label: LAB_005232a4
    PUSH ECX                            ; 005232aa
    PUSH ESI                            ; 005232ab
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005232ac | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005232b1
    TEST EAX,EAX                        ; 005232b4
    JZ 0x005232c6                       ; 005232b6 | LAB_005232c6
        ;   XREF to: 005232c6 (CONDITIONAL_JUMP)
    ADD EAX,0x1f738                     ; 005232b8
    PUSH EAX                            ; 005232bd
    CALL core_inv.cpp_CInventory_loadItems_FUN_004ff740 ; 005232be | void core_inv.cpp_CInventory_loadItems_FUN_004ff740(CInventory * this_ptr)
        ;   XREF to: 004ff740 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005232c3
    MOV EDI,dword ptr [ESP + 0x130]     ; 005232c6
        ;   Label: LAB_005232c6
    INC EBP                             ; 005232cd
    MOV ESI,dword ptr [ESI + 0x14c]     ; 005232ce
    CMP EBP,EDI                         ; 005232d4
    JL 0x0052327e                       ; 005232d6 | LAB_0052327e
        ;   XREF to: 0052327e (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xc],0x0       ; 005232d8
        ;   Label: LAB_005232d8
    TEST ESI,ESI                        ; 005232df
        ;   Label: LAB_005232df
    JZ 0x00523306                       ; 005232e1 | LAB_00523306
        ;   XREF to: 00523306 (CONDITIONAL_JUMP)
    MOV ESI,0x638cf8                    ; 005232e3 | = "..\\core\\mission.cpp" | s_core_mission_cpp_00638cf8 = ..\core\mission.cpp
    MOV EDI,0x155                       ; 005232e8
    PUSH 0x638d0c                       ; 005232ed | = "CDemonMission::load - actor list coun..." | s_CDemonMission_load_actor_00638d0c = CDemonMission::load - actor list count mismatch #3!
    MOV dword ptr [0x02f0ca48],ESI      ; 005232f2 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005232f8 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005232fe | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00523303
    CMP dword ptr [EBX + 0x888],0x0     ; 00523306
        ;   Label: LAB_00523306
    JZ 0x00523331                       ; 0052330d | LAB_00523331
        ;   XREF to: 00523331 (CONDITIONAL_JUMP)
    MOV EAX,0x638d40                    ; 0052330f | = "..\\core\\mission.cpp" | s_core_mission_cpp_00638d40 = ..\core\mission.cpp
    MOV EDX,0x156                       ; 00523314
    PUSH 0x638d54                       ; 00523319 | = "CDemonMission::load - actor list coun..." | s_CDemonMission_load_actor_00638d54 = CDemonMission::load - actor list count mismatch #4!
    MOV [0x02f0ca48],EAX                ; 0052331e | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00523323 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00523329 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052332e
    PUSH 0x15f                          ; 00523331
        ;   Label: LAB_00523331
    PUSH 0x638d88                       ; 00523336 | = "..\\core\\mission.cpp" | s_core_mission_cpp_00638d88 = ..\core\mission.cpp
    MOV dword ptr [EBX + 0x88c],0x0     ; 0052333b
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 00523345 | void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * filename, int context)
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBX + 0x3c]      ; 0052334a
    ADD ESP,0x8                         ; 0052334d
    TEST ECX,ECX                        ; 00523350
    JNZ 0x005233ad                      ; 00523352 | LAB_005233ad
        ;   XREF to: 005233ad (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x8],0x4       ; 00523354
    JGE 0x0052338c                      ; 00523358 | LAB_0052338c
        ;   XREF to: 0052338c (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x160]     ; 0052335a
    PUSH ESI                            ; 00523361
        ;   Label: LAB_00523361
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00523362 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00523367
    TEST EAX,EAX                        ; 0052336a
    JL 0x00523373                       ; 0052336c | LAB_00523373
        ;   XREF to: 00523373 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 0052336e
    JNZ 0x00523361                      ; 00523371 | LAB_00523361
        ;   XREF to: 00523361 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x160]     ; 00523373
        ;   Label: LAB_00523373
    PUSH ESI                            ; 0052337a
        ;   Label: LAB_0052337a
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0052337b | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00523380
    TEST EAX,EAX                        ; 00523383
    JL 0x0052338c                       ; 00523385 | LAB_0052338c
        ;   XREF to: 0052338c (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00523387
    JNZ 0x0052337a                      ; 0052338a | LAB_0052337a
        ;   XREF to: 0052337a (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x0067b9a0]      ; 0052338c | CGore * g_CGorePtr
        ;   Label: LAB_0052338c
    PUSH EDI                            ; 00523392 | CGore g_CGoreInstance
    MOV dword ptr [EBX],0xffffffff      ; 00523393
    CALL core_gore.cpp_FUN_004ed760     ; 00523399 | undefined core_gore.cpp_FUN_004ed760()
        ;   XREF to: 004ed760 (UNCONDITIONAL_CALL)
    MOV EBP,dword ptr [EBX + 0x8]       ; 0052339e
    ADD ESP,0x4                         ; 005233a1
    CMP EBP,0x7                         ; 005233a4
    JGE 0x005234f7                      ; 005233a7 | LAB_005234f7
        ;   XREF to: 005234f7 (CONDITIONAL_JUMP)
    ADD ESP,0x148                       ; 005233ad
        ;   Label: LAB_005233ad
    POP EBP                             ; 005233b3
    POP EDI                             ; 005233b4
    POP ESI                             ; 005233b5
    POP EBX                             ; 005233b6
    RET                                 ; 005233b7
    PUSH EBX                            ; 005233b8
        ;   Label: LAB_005233b8
    CALL core_mission.cpp_FUN_005248e0  ; 005233b9 | void core_mission.cpp_FUN_005248e0()
        ;   XREF to: 005248e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005233be
    JMP 0x00522ed8                      ; 005233c1 | LAB_00522ed8
        ;   XREF to: 00522ed8 (UNCONDITIONAL_JUMP)
    MOV EAX,0x638b75                    ; 005233c6 | = "..\\core\\mission.cpp" | s_core_mission_cpp_00638b75 = ..\core\mission.cpp
        ;   Label: LAB_005233c6
    MOV EDX,0xea                        ; 005233cb
    PUSH 0x638b89                       ; 005233d0 | = "No name in mission" | s_No_name_in_mission_00638b89 = No name in mission
    MOV [0x02f0ca48],EAX                ; 005233d5 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005233da | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005233e0 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005233e5
    JMP 0x00522f7a                      ; 005233e8 | LAB_00522f7a
        ;   XREF to: 00522f7a (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xc],EBP       ; 005233ed
        ;   Label: LAB_005233ed
    JMP 0x00523196                      ; 005233f0 | LAB_00523196
        ;   XREF to: 00523196 (UNCONDITIONAL_JUMP)
    MOV ECX,0x19                        ; 005233f5
        ;   Label: LAB_005233f5
    LEA EDI,[ESP + 0xc8]                ; 005233fa
    LEA EAX,[ESP + 0x64]                ; 00523401
    MOV ESI,0x67d5c0                    ; 00523405 | undefined4 DAT_0067d5c0
    PUSH EAX                            ; 0052340a
    LEA EAX,[ESP + 0xcc]                ; 0052340b
    MOVSD.REP ES:EDI,ESI                ; 00523412 | undefined4 DAT_0067d5c0 | DAT_0067d5c4 = 0x0
    PUSH EAX                            ; 00523414
    MOV EBP,dword ptr [ESP + 0x168]     ; 00523415
    MOV ECX,0x19                        ; 0052341c
    PUSH 0x638c38                       ; 00523421 | = "%s \"%[^\"]\"\n" | s_s_00638c38 = %s "%[^"]"

    LEA EDI,[ESP + 0x70]                ; 00523426
    MOV ESI,0x67d628                    ; 0052342a | undefined4 DAT_0067d628
    PUSH EBP                            ; 0052342f
    MOVSD.REP ES:EDI,ESI                ; 00523430 | undefined4 DAT_0067d628 | DAT_0067d62c = 0x0
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00523432 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00523437
    LEA EAX,[ESP + 0xc8]                ; 0052343a
    PUSH EAX                            ; 00523441
    LEA ESI,[ESP + 0x68]                ; 00523442
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 00523446 | CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)
    MOV EBP,EAX                         ; 0052344b
    ADD ESP,0x4                         ; 0052344d
    MOV EDI,EAX                         ; 00523450
    MOV dword ptr [ESP + 0x140],EAX     ; 00523452
    PUSH EDI                            ; 00523459
    MOV AL,byte ptr [ESI]               ; 0052345a
        ;   Label: LAB_0052345a
    MOV byte ptr [EDI],AL               ; 0052345c
    CMP AL,0x0                          ; 0052345e
    JZ 0x00523472                       ; 00523460 | LAB_00523472
        ;   XREF to: 00523472 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00523462
    ADD ESI,0x2                         ; 00523465
    MOV byte ptr [EDI + 0x1],AL         ; 00523468
    ADD EDI,0x2                         ; 0052346b
    CMP AL,0x0                          ; 0052346e
    JNZ 0x0052345a                      ; 00523470 | LAB_0052345a
        ;   XREF to: 0052345a (CONDITIONAL_JUMP)
    POP EDI                             ; 00523472
        ;   Label: LAB_00523472
    PUSH EBP                            ; 00523473
    PUSH EBX                            ; 00523474
    CALL core_mission.cpp_CDemonMission_FUN_00523b70 ; 00523475 | void core_mission.cpp_CDemonMission_FUN_00523b70(CDemonMission * this_ptr)
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052347a
    MOV EAX,dword ptr [ESP + 0x144]     ; 0052347d
    CMP EAX,dword ptr [ESP + 0x130]     ; 00523484
    JNZ 0x00523493                      ; 0052348b | LAB_00523493
        ;   XREF to: 00523493 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x888],EBP     ; 0052348d
    CMP dword ptr [EBX + 0x88c],0x7d0   ; 00523493
        ;   Label: LAB_00523493
    JL 0x005234c2                       ; 0052349d | LAB_005234c2
        ;   XREF to: 005234c2 (CONDITIONAL_JUMP)
    MOV ESI,0x638c44                    ; 0052349f | = "..\\core\\mission.cpp" | s_core_mission_cpp_00638c44 = ..\core\mission.cpp
    MOV EDI,0x135                       ; 005234a4
    PUSH 0x638c58                       ; 005234a9 | = "Too many actors" | s_Too_many_actors_00638c58 = Too many actors
    MOV dword ptr [0x02f0ca48],ESI      ; 005234ae | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005234b4 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005234ba | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005234bf
    MOV EAX,dword ptr [EBX + 0x88c]     ; 005234c2
        ;   Label: LAB_005234c2
    MOV ESI,dword ptr [ESP + 0x140]     ; 005234c8
    MOV dword ptr [EBX + EAX*0x4 + 0x890],ESI ; 005234cf
    MOV EAX,dword ptr [ESP + 0x144]     ; 005234d6
    MOV EBP,dword ptr [EBX + 0x88c]     ; 005234dd
    INC EAX                             ; 005234e3
    INC EBP                             ; 005234e4
    MOV dword ptr [ESP + 0x144],EAX     ; 005234e5
    MOV dword ptr [EBX + 0x88c],EBP     ; 005234ec
    JMP 0x005231cc                      ; 005234f2 | LAB_005231cc
        ;   XREF to: 005231cc (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x160]     ; 005234f7
        ;   Label: LAB_005234f7
    PUSH EAX                            ; 005234fe
    MOV EDX,dword ptr [0x0067b9a0]      ; 005234ff | CGore g_CGoreInstance | CGore * g_CGorePtr
    PUSH EDX                            ; 00523505 | CGore g_CGoreInstance
    CALL core_gore.cpp_FUN_004ee1e0     ; 00523506 | undefined core_gore.cpp_FUN_004ee1e0()
        ;   XREF to: 004ee1e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052350b
    ADD ESP,0x148                       ; 0052350e
    POP EBP                             ; 00523514
    POP EDI                             ; 00523515
    POP ESI                             ; 00523516
    POP EBX                             ; 00523517
    RET                                 ; 00523518

