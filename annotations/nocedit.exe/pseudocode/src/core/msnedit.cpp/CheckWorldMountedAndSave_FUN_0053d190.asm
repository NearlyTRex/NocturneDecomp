; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_msnedit_cpp_CheckWorldMountedAndSave_FUN_0053d190(void)
;
; Local Variables:
; undefined1       Stack[-0x10c]:1  local_10c
;
; XREF[3]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538727
;   core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60 at 00537fc7
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053a640
;
; Referenced Globals:
;   TerminatedCString s_world_0063cb13
;   TerminatedCString s_Warning_s_exists_in_moun_0063cb19
;   TerminatedCString s_scr_0063cb90
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonPod* g_CDemonPodPtr = 030e5090
;   CScript* g_CScriptPtr = 0310f858
;   CEditorTools g_CEditorToolsInstance
;   CDemonPod g_CDemonPodInstance
;   CScript g_CScriptInstance
;
; Called Functions:
;   core_mission.cpp_CDemonMission_save_FUN_00522e30
;   core_script.cpp_FUN_00566180
;   crt_file.c_makepath_FUN_005febfc
;   engine_pod.cpp_CPod_locateFile_FUN_005512f0
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d190
        ;   Label: core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190
    PUSH ESI                            ; 0053d191
    SUB ESP,0x104                       ; 0053d192
    MOV EBX,dword ptr [ESP + 0x114]     ; 0053d198
    PUSH 0x0                            ; 0053d19f
    PUSH EBX                            ; 0053d1a1
    PUSH 0x63cb13                       ; 0053d1a2 | = "world"
    MOV EDX,dword ptr [0x00680cdc]      ; 0053d1a7 | g_CDemonPodInstance | g_CDemonPodPtr
    PUSH EDX                            ; 0053d1ad | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_locateFile_FUN_005512f0 ; 0053d1ae
        ;   XREF to: 005512f0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPod_locateFile_FUN_005512f0(CPod * this_ptr, char * base_path, char * filename, int * file_index_out)
    ADD ESP,0x10                        ; 0053d1b3
    TEST EAX,EAX                        ; 0053d1b6
    JNZ 0x0053d200                      ; 0053d1b8
        ;   XREF to: 0053d200 (CONDITIONAL_JUMP)  ; LAB_0053d200
    PUSH EBX                            ; 0053d1ba
        ;   Label: LAB_0053d1ba
    MOV EBX,dword ptr [ESP + 0x114]     ; 0053d1bb
    PUSH EBX                            ; 0053d1c2
    CALL core_mission.cpp_CDemonMission_save_FUN_00522e30 ; 0053d1c3
        ;   XREF to: 00522e30 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_save_FUN_00522e30(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 0053d1c8
    PUSH 0x63cb90                       ; 0053d1cb | = "scr"
    LEA EAX,[EBX + 0x44]                ; 0053d1d0
    PUSH EAX                            ; 0053d1d3
    PUSH 0x0                            ; 0053d1d4
    PUSH 0x0                            ; 0053d1d6
    LEA EAX,[ESP + 0x10]                ; 0053d1d8
    PUSH EAX                            ; 0053d1dc
    CALL crt_file.c_makepath_FUN_005febfc ; 0053d1dd
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0053d1e2
    MOV EAX,ESP                         ; 0053d1e5
    PUSH EAX                            ; 0053d1e7
    MOV ESI,dword ptr [0x00680d50]      ; 0053d1e8 | g_CScriptPtr
    PUSH ESI                            ; 0053d1ee | g_CScriptInstance
    CALL core_script.cpp_FUN_00566180   ; 0053d1ef
        ;   XREF to: 00566180 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00566180()
    ADD ESP,0x8                         ; 0053d1f4
    ADD ESP,0x104                       ; 0053d1f7
    POP ESI                             ; 0053d1fd
    POP EBX                             ; 0053d1fe
    RET                                 ; 0053d1ff
    ADD EAX,0x4                         ; 0053d200
        ;   Label: LAB_0053d200
    PUSH EAX                            ; 0053d203
    PUSH EBX                            ; 0053d204
    PUSH 0x63cb19                       ; 0053d205 | = "Warning: %s exists in mounted pod %s...."
    MOV ECX,dword ptr [0x00678a60]      ; 0053d20a | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0053d210 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 0053d211
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0053d216
    JMP 0x0053d1ba                      ; 0053d219
        ;   XREF to: 0053d1ba (UNCONDITIONAL_JUMP)  ; LAB_0053d1ba

