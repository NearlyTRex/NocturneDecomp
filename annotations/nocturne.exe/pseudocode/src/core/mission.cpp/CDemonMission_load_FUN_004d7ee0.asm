; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_load_FUN_004d7ee0(CDemonMission *this_ptr,char *mission_filename,int load_flags)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   mission_filename
; int              Stack[0xc]:4   load_flags
;
; XREF[3]:
;   core_game.cpp_FUN_004a4b50 at 004a4e9b
;   core_mission.cpp_CDemonMission_run_FUN_004d9440 at 004d958c
;   core_netgame.cpp_CNetGame_runLobby_FUN_004eb520 at 004ebb3c
;
; Referenced Globals:
;   TerminatedCString s_rt_00589612
;   TerminatedCString s_world_00589615
;   TerminatedCString s_core_mission_cpp_0058961b
;   TerminatedCString s_CDemonMission_load_Unabl_0058962f
;   TerminatedCString s_Loading_mission_00589659
;   int INT_005baca0 = 0x1cc3160
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_level.cpp_CLevelLoader_update_FUN_004c59e0
;   core_main.c_FUN_004c8440
;   core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0
;   crt_stdio.c_fclose_FUN_00563380
;   engine_dosio.cpp_getFile_FUN_00456a60
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7ee0
        ;   Label: core_mission.cpp_CDemonMission_load_FUN_004d7ee0
    PUSH EDI                            ; 004d7ee1
    PUSH EBP                            ; 004d7ee2
    PUSH 0x589612                       ; 004d7ee3 | = "rt"
    MOV EDX,dword ptr [ESP + 0x18]      ; 004d7ee8
    PUSH EDX                            ; 004d7eec
    PUSH 0x589615                       ; 004d7eed | = "world"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004d7ef2
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004d7ef7
    MOV EBX,EAX                         ; 004d7efa
    TEST EAX,EAX                        ; 004d7efc
    JZ 0x004d7f4c                       ; 004d7efe
        ;   XREF to: 004d7f4c (CONDITIONAL_JUMP)  ; LAB_004d7f4c
    PUSH 0x0                            ; 004d7f00
        ;   Label: LAB_004d7f00
    PUSH 0x589659                       ; 004d7f02 | = "Loading mission"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d7f07
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d7f0c
    PUSH EAX                            ; 004d7f0f
    MOV EDI,dword ptr [0x005baca0]      ; 004d7f10 | INT_005baca0
    PUSH EDI                            ; 004d7f16
    CALL core_level.cpp_CLevelLoader_update_FUN_004c59e0 ; 004d7f17
        ;   XREF to: 004c59e0 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_004c59e0(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 004d7f1c
    MOV EBP,dword ptr [ESP + 0x18]      ; 004d7f1f
    PUSH EBP                            ; 004d7f23
    PUSH EBX                            ; 004d7f24
    MOV EAX,dword ptr [ESP + 0x18]      ; 004d7f25
    PUSH EAX                            ; 004d7f29
    CALL core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0 ; 004d7f2a
        ;   XREF to: 004d7fe0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0(CDemonMission * this_ptr, _FILE * file_handle, int load_flags)
    ADD ESP,0xc                         ; 004d7f2f
    PUSH EBX                            ; 004d7f32
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004d7f33
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004d7f38
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d7f3b
    PUSH EDX                            ; 004d7f3f
    CALL core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20 ; 004d7f40
        ;   XREF to: 004d9c20 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004d7f45
    POP EBP                             ; 004d7f48
    POP EDI                             ; 004d7f49
    POP EBX                             ; 004d7f4a
    RET                                 ; 004d7f4b
    PUSH ESI                            ; 004d7f4c
        ;   Label: LAB_004d7f4c
    MOV ECX,0x58961b                    ; 004d7f4d | = "..\\core\\mission.cpp"
    MOV ESI,0x9c                        ; 004d7f52
    PUSH 0x58962f                       ; 004d7f57 | = "CDemonMission::load - Unable to open ..."
    MOV dword ptr [0x01cc4800],ECX      ; 004d7f5c | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004d7f62 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d7f68
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d7f6d
    POP ESI                             ; 004d7f70
    JMP 0x004d7f00                      ; 004d7f71
        ;   XREF to: 004d7f00 (UNCONDITIONAL_JUMP)  ; LAB_004d7f00

