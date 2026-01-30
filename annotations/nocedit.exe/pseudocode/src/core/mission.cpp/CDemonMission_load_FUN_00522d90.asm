; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mission_cpp_CDemonMission_load_FUN_00522d90 (CDemonMission *this_ptr,char *mission_filename,int load_flags)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   mission_filename
; int              Stack[0xc]:4   load_flags
;
; XREF[8]:
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bddc5
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e2025
;   core_mission.cpp_CDemonMission_run_FUN_00524420 at 0052456c
;   core_msnedit.cpp_CDemonMission_FUN_00538ba0 at 00538cf8
;   core_msnedit.cpp_CDemonMission_FUN_0053ccf0 at 0053cf3b
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 005384d9
;   core_msnedit.cpp_FUN_00537230 at 005372a9
;   core_netgame.cpp_FUN_00541390 at 005419ac
;
; Referenced Globals:
;   TerminatedCString s_rt_006389c5
;   TerminatedCString s_world_006389c8
;   TerminatedCString s_core_mission_cpp_006389ce
;   TerminatedCString s_CDemonMission_load_Unabl_006389e2
;   TerminatedCString s_Loading_mission_00638a0c
;   TerminatedCString s_core_mission_cpp_00638a1c
;   CLevelLoader* g_CLevelLoaderPtr = 02dcd850
;   CLevelLoader g_CLevelLoaderInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_level.cpp_CLevelLoader_update_FUN_00504160
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0
;   core_mission.cpp_FUN_00524c20
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522d90
        ;   Label: core_mission.cpp_CDemonMission_load_FUN_00522d90
    PUSH EDI                            ; 00522d91
    PUSH EBP                            ; 00522d92
    PUSH 0x6389c5                       ; 00522d93 | = "rt"
    MOV EDX,dword ptr [ESP + 0x18]      ; 00522d98
    PUSH EDX                            ; 00522d9c
    PUSH 0x6389c8                       ; 00522d9d | = "world"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00522da2
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00522da7
    MOV EBX,EAX                         ; 00522daa
    TEST EAX,EAX                        ; 00522dac
    JZ 0x00522e06                       ; 00522dae
        ;   XREF to: 00522e06 (CONDITIONAL_JUMP)  ; LAB_00522e06
    PUSH 0x0                            ; 00522db0
        ;   Label: LAB_00522db0
    PUSH 0x638a0c                       ; 00522db2 | = "Loading mission"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00522db7
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00522dbc
    PUSH EAX                            ; 00522dbf
    MOV EDI,dword ptr [0x0067cf80]      ; 00522dc0 | g_CLevelLoaderPtr
    PUSH EDI                            ; 00522dc6 | g_CLevelLoaderInstance
    CALL core_level.cpp_CLevelLoader_update_FUN_00504160 ; 00522dc7
        ;   XREF to: 00504160 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_00504160(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 00522dcc
    MOV EBP,dword ptr [ESP + 0x18]      ; 00522dcf
    PUSH EBP                            ; 00522dd3
    PUSH EBX                            ; 00522dd4
    MOV EAX,dword ptr [ESP + 0x18]      ; 00522dd5
    PUSH EAX                            ; 00522dd9
    CALL core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 ; 00522dda
        ;   XREF to: 00522eb0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0(CDemonMission * this_ptr)
    ADD ESP,0xc                         ; 00522ddf
    PUSH 0x9f                           ; 00522de2
    PUSH 0x638a1c                       ; 00522de7 | = "..\\core\\mission.cpp"
    PUSH EBX                            ; 00522dec
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00522ded
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00522df2
    MOV EDX,dword ptr [ESP + 0x10]      ; 00522df5
    PUSH EDX                            ; 00522df9
    CALL core_mission.cpp_FUN_00524c20  ; 00522dfa
        ;   XREF to: 00524c20 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_FUN_00524c20()
    ADD ESP,0x4                         ; 00522dff
    POP EBP                             ; 00522e02
    POP EDI                             ; 00522e03
    POP EBX                             ; 00522e04
    RET                                 ; 00522e05
    PUSH ESI                            ; 00522e06
        ;   Label: LAB_00522e06
    MOV ECX,0x6389ce                    ; 00522e07 | = "..\\core\\mission.cpp"
    MOV ESI,0x9c                        ; 00522e0c
    PUSH 0x6389e2                       ; 00522e11 | = "CDemonMission::load - Unable to open ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00522e16 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00522e1c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00522e22
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00522e27
    POP ESI                             ; 00522e2a
    JMP 0x00522db0                      ; 00522e2b
        ;   XREF to: 00522db0 (UNCONDITIONAL_JUMP)  ; LAB_00522db0

