; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_CDemonMission_loadScript_FUN_005235b0(CDemonMission *this_ptr,int is_loading)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   is_loading
; Local Variables:
; char[260]        Stack[-0x104]:260  local_104
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_startMission_FUN_00524760 at 00524816
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 005384e4
;
; Referenced Globals:
;   TerminatedCString s_scr_00638e4c
;   CScript* g_CScriptPtr = 0310f858
;   CScript g_CScriptInstance
;
; Called Functions:
;   core_script.cpp_CScript_loadScript_FUN_00559f80
;   crt_file.c_makepath_FUN_005febfc
;
; *****************************************************************************

section .text

    SUB ESP,0x104                       ; 005235b0
        ;   Label: core_mission.cpp_CDemonMission_loadScript_FUN_005235b0
    MOV EAX,dword ptr [ESP + 0x108]     ; 005235b6
    PUSH 0x638e4c                       ; 005235bd | = "scr"
    ADD EAX,0x44                        ; 005235c2
    PUSH EAX                            ; 005235c5
    PUSH 0x0                            ; 005235c6
    PUSH 0x0                            ; 005235c8
    LEA EAX,[ESP + 0x10]                ; 005235ca
    PUSH EAX                            ; 005235ce
    CALL crt_file.c_makepath_FUN_005febfc ; 005235cf
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 005235d4
    MOV EDX,dword ptr [ESP + 0x10c]     ; 005235d7
    PUSH EDX                            ; 005235de
    LEA EAX,[ESP + 0x4]                 ; 005235df
    PUSH EAX                            ; 005235e3
    MOV ECX,dword ptr [0x00680d50]      ; 005235e4 | g_CScriptInstance | g_CScriptPtr
    PUSH ECX                            ; 005235ea | g_CScriptInstance
    CALL core_script.cpp_CScript_loadScript_FUN_00559f80 ; 005235eb
        ;   XREF to: 00559f80 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_loadScript_FUN_00559f80(CScript * this_ptr, char * filename, int skip_validation)
    ADD ESP,0xc                         ; 005235f0
    ADD ESP,0x104                       ; 005235f3
    RET                                 ; 005235f9

