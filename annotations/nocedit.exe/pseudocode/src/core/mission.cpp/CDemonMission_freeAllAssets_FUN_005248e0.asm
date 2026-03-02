; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_freeAllAssets_FUN_005248e0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 at 005233b9
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 0053820f
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_00639394
;   TerminatedCString s_core_mission_cpp_006393a8
;
; Called Functions:
;   core_dmodel.cpp_freeAllModels_FUN_00478cb0
;   core_skeleton.cpp_freeAllModels_FUN_005a1dc0
;   core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0
;   engine_texture.cpp_clearTextureCache_FUN_005dd8e0
;   shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
;
; *****************************************************************************

section .text

    PUSH 0x5d4                          ; 005248e0
        ;   Label: core_mission.cpp_CDemonMission_freeAllAssets_FUN_005248e0
    PUSH 0x639394                       ; 005248e5 | = "..\\core\\mission.cpp"
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 005248ea
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * filename, int context)
    ADD ESP,0x8                         ; 005248ef
    CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0 ; 005248f2
        ;   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_clearTextureCache_FUN_005dd8e0()
    CALL core_dmodel.cpp_freeAllModels_FUN_00478cb0 ; 005248f7
        ;   XREF to: 00478cb0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_freeAllModels_FUN_00478cb0()
    CALL core_skeleton.cpp_freeAllModels_FUN_005a1dc0 ; 005248fc
        ;   XREF to: 005a1dc0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_freeAllModels_FUN_005a1dc0()
    CALL core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0 ; 00524901
        ;   XREF to: 005a1ea0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0()
    PUSH 0x5e2                          ; 00524906
    PUSH 0x6393a8                       ; 0052490b | = "..\\core\\mission.cpp"
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 00524910
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * filename, int context)
    ADD ESP,0x8                         ; 00524915
    RET                                 ; 00524918

