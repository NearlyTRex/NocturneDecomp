; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mission_cpp_CDemonMission_save_FUN_00522e30(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_msnedit.cpp_CDemonMission_FUN_00538ba0 at 00538bf3
;   core_msnedit.cpp_CDemonMission_FUN_0053d190 at 0053d1c3
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 005389f0
;   core_msnedit.cpp_FUN_00537230 at 005372d2
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_00638a30
;   TerminatedCString s_wt_00638a44
;   TerminatedCString s_world_00638a47
;   TerminatedCString s_core_mission_cpp_00638a4d
;   TerminatedCString s_CDemonMission_save_Unabl_00638a61
;   TerminatedCString s_core_mission_cpp_00638a8b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_writeFile_FUN_00523600
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522e30
        ;   Label: core_mission.cpp_CDemonMission_save_FUN_00522e30
    PUSH EDI                            ; 00522e31
    PUSH 0xb0                           ; 00522e32
    PUSH 0x638a30                       ; 00522e37 | = "..\\core\\mission.cpp"
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 00522e3c
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * filename, int context)
    ADD ESP,0x8                         ; 00522e41
    PUSH 0x638a44                       ; 00522e44 | = "wt"
    MOV EDX,dword ptr [ESP + 0x14]      ; 00522e49
    PUSH EDX                            ; 00522e4d
    PUSH 0x638a47                       ; 00522e4e | = "world"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00522e53
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00522e58
    MOV EBX,EAX                         ; 00522e5b
    TEST EAX,EAX                        ; 00522e5d
    JZ 0x00522e85                       ; 00522e5f
        ;   XREF to: 00522e85 (CONDITIONAL_JUMP)  ; LAB_00522e85
    PUSH EBX                            ; 00522e61
        ;   Label: LAB_00522e61
    MOV EDI,dword ptr [ESP + 0x10]      ; 00522e62
    PUSH EDI                            ; 00522e66
    CALL core_mission.cpp_CDemonMission_writeFile_FUN_00523600 ; 00522e67
        ;   XREF to: 00523600 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_writeFile_FUN_00523600(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 00522e6c
    PUSH 0xb8                           ; 00522e6f
    PUSH 0x638a8b                       ; 00522e74 | = "..\\core\\mission.cpp"
    PUSH EBX                            ; 00522e79
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00522e7a
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00522e7f
    POP EDI                             ; 00522e82
    POP EBX                             ; 00522e83
    RET                                 ; 00522e84
    PUSH ESI                            ; 00522e85
        ;   Label: LAB_00522e85
    MOV ECX,0x638a4d                    ; 00522e86 | = "..\\core\\mission.cpp"
    MOV ESI,0xb6                        ; 00522e8b
    PUSH 0x638a61                       ; 00522e90 | = "CDemonMission::save - Unable to open ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00522e95 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00522e9b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00522ea1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00522ea6
    POP ESI                             ; 00522ea9
    JMP 0x00522e61                      ; 00522eaa
        ;   XREF to: 00522e61 (UNCONDITIONAL_JUMP)  ; LAB_00522e61

