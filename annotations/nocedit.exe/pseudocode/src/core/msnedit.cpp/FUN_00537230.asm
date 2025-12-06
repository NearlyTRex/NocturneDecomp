; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_FUN_00537230()
;
; Local Variables:
; undefined        Stack[-0x124]:1  local_124
;
; Referenced Globals:
;   TerminatedCString s_world_msn_0063b744
;   TerminatedCString s_world_0063b750
;   TerminatedCString s_Loading_s_0063b756
;   TerminatedCString s_Saving_s_0063b764
;   TerminatedCString s_Not_converting_local_fil_0063b771
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonPod* g_CDemonPodPtr = 030e5090
;   CEditorTools g_CEditorToolsPtr
;   CDemonMission g_CDemonMissionInstance
;   CDemonPod g_CDemonPodInstance
;
; Called Functions:
;   core_mission.cpp_CDemonMission_load_FUN_00522d90
;   core_mission.cpp_CDemonMission_save_FUN_00522e30
;   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
;   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
;   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
;   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
;   engine_pod.cpp_CPod_locateFile_FUN_005512f0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537230
        ;   Label: core_msnedit.cpp_FUN_00537230
    PUSH ESI                            ; 00537231
    PUSH EDI                            ; 00537232
    PUSH EBP                            ; 00537233
    SUB ESP,0x114                       ; 00537234
    MOV EAX,ESP                         ; 0053723a
    PUSH EAX                            ; 0053723c
    CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30 ; 0053723d | CFileFinder * engine_dosio.c_CFileFinder_ctor_FUN_00481c30(CFileFinder * this_ptr)
        ;   XREF to: 00481c30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00537242
    PUSH 0x63b744                       ; 00537245 | = "world\\*.msn" | s_world_msn_0063b744 = world\*.msn
    LEA EAX,[ESP + 0x4]                 ; 0053724a
    PUSH EAX                            ; 0053724e
    CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70 ; 0053724f | int engine_dosio.c_CFileFinder_openSearch_FUN_00481c70(CFileFinder * this_ptr, char * search_pattern)
        ;   XREF to: 00481c70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00537254
    CMP byte ptr [ESP],0x0              ; 00537257
    JZ 0x005372ef                       ; 0053725b | LAB_005372ef
        ;   XREF to: 005372ef (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00537261
        ;   Label: LAB_00537261
    LEA EAX,[ESP + 0x4]                 ; 00537263
    PUSH EAX                            ; 00537267
    PUSH 0x63b750                       ; 00537268 | = "world" | s_world_0063b750 = world
    MOV EDX,dword ptr [0x00680cdc]      ; 0053726d | CDemonPod * g_CDemonPodPtr
    PUSH EDX                            ; 00537273 | CDemonPod g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_locateFile_FUN_005512f0 ; 00537274 | CPodFile * engine_pod.cpp_CPod_locateFile_FUN_005512f0(CPod * this_ptr, char * base_path, char * filename, int * file_index_out)
        ;   XREF to: 005512f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00537279
    TEST EAX,EAX                        ; 0053727c
    JNZ 0x00537309                      ; 0053727e | LAB_00537309
        ;   XREF to: 00537309 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00537284
    PUSH EAX                            ; 00537286
    PUSH 0x63b756                       ; 00537287 | = "Loading %s..." | s_Loading_s_0063b756 = Loading %s...
    MOV EBX,dword ptr [0x00678a60]      ; 0053728c | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 00537292 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00537293 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00537298
    PUSH 0x0                            ; 0053729b
    LEA EAX,[ESP + 0x4]                 ; 0053729d
    PUSH EAX                            ; 005372a1
    MOV ESI,dword ptr [0x0067d550]      ; 005372a2 | CDemonMission * g_CDemonMissionPtr
    PUSH ESI                            ; 005372a8 | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_load_FUN_00522d90 ; 005372a9 | void core_mission.cpp_CDemonMission_load_FUN_00522d90(CDemonMission * this_ptr, char * mission_filename, int load_flags)
        ;   XREF to: 00522d90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005372ae
    MOV EAX,ESP                         ; 005372b1
    PUSH EAX                            ; 005372b3
    PUSH 0x63b764                       ; 005372b4 | = "Saving %s..." | s_Saving_s_0063b764 = Saving %s...
    MOV EDI,dword ptr [0x00678a60]      ; 005372b9 | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 005372bf | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005372c0 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005372c5
    MOV EAX,ESP                         ; 005372c8
    PUSH EAX                            ; 005372ca
    MOV EBP,dword ptr [0x0067d550]      ; 005372cb | CDemonMission * g_CDemonMissionPtr
    PUSH EBP                            ; 005372d1 | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_save_FUN_00522e30 ; 005372d2 | void core_mission.cpp_CDemonMission_save_FUN_00522e30(CDemonMission * this_ptr)
        ;   XREF to: 00522e30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005372d7
    MOV EAX,ESP                         ; 005372da
        ;   Label: LAB_005372da
    PUSH EAX                            ; 005372dc
    CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0 ; 005372dd | int engine_dosio.c_CFileFinder_findNext_FUN_00481cf0(CFileFinder * this_ptr)
        ;   XREF to: 00481cf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005372e2
    CMP byte ptr [ESP],0x0              ; 005372e5
    JNZ 0x00537261                      ; 005372e9 | LAB_00537261
        ;   XREF to: 00537261 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005372ef
        ;   Label: LAB_005372ef
    LEA EAX,[ESP + 0x4]                 ; 005372f1
    PUSH EAX                            ; 005372f5
    CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50 ; 005372f6 | CFileFinder * engine_dosio.c_CFileFinder_dtor_FUN_00481c50(CFileFinder * this_ptr, uint d1)
        ;   XREF to: 00481c50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005372fb
    ADD ESP,0x114                       ; 005372fe
    POP EBP                             ; 00537304
    POP EDI                             ; 00537305
    POP ESI                             ; 00537306
    POP EBX                             ; 00537307
    RET                                 ; 00537308
    MOV EAX,ESP                         ; 00537309
        ;   Label: LAB_00537309
    PUSH EAX                            ; 0053730b
    PUSH 0x63b771                       ; 0053730c | = "Not converting local file %s - it is ..." | s_Not_converting_local_fil_0063b771 = Not converting local file %s - it is also in a pod
    MOV ECX,dword ptr [0x00678a60]      ; 00537311 | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 00537317 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00537318 | void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053731d
    JMP 0x005372da                      ; 00537320 | LAB_005372da
        ;   XREF to: 005372da (UNCONDITIONAL_JUMP)

