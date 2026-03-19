; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_freeAllSkeletons_FUN_005a1ea0(void)
;
;
; XREF[5]:
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be3e0
;   core_main.c_finalizeGameSystems_FUN_00508570 at 005087f0
;   core_mission.cpp_CDemonMission_freeAllAssets_FUN_005248e0 at 00524901
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005968c9
;   core_skeledit.cpp_viewModel_FUN_00598fc0 at 0059916d
;
; Referenced Globals:
;   undefined4 s_.RAW_0067c6e0
;   int g_SkeletonPoolCount
;   CSkeleton[40] g_SkeletonPool
;   undefined4 g_SkeletonPool[1].motion_list.state_count
;
; Called Functions:
;   core_skeleton.cpp_CSkeleton_free_FUN_00599a50
;   core_skeleton.cpp_freeAllModels_FUN_005a1dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1ea0
        ;   Label: core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0
    PUSH ESI                            ; 005a1ea1
    MOV EBX,0x38cc8a4                   ; 005a1ea2 | g_SkeletonPool
    CALL core_skeleton.cpp_freeAllModels_FUN_005a1dc0 ; 005a1ea7
        ;   XREF to: 005a1dc0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_freeAllModels_FUN_005a1dc0()
    LEA ESI,[EBX + 0x67c6e0]            ; 005a1eac | s_.RAW_0067c6e0
    PUSH EBX                            ; 005a1eb2 | g_SkeletonPool | g_SkeletonPool[1].motion_list.state_count
        ;   Label: LAB_005a1eb2
    CALL core_skeleton.cpp_CSkeleton_free_FUN_00599a50 ; 005a1eb3
        ;   XREF to: 00599a50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_free_FUN_00599a50(CSkeleton * this_ptr)
    ADD EBX,0x2982c                     ; 005a1eb8 | g_SkeletonPool[1].motion_list.state_count
    ADD ESP,0x4                         ; 005a1ebe
    CMP EBX,ESI                         ; 005a1ec1
    JNZ 0x005a1eb2                      ; 005a1ec3
        ;   XREF to: 005a1eb2 (CONDITIONAL_JUMP)  ; LAB_005a1eb2
    XOR EDX,EDX                         ; 005a1ec5
    MOV dword ptr [0x038cc8a0],EDX      ; 005a1ec7 | g_SkeletonPoolCount
    POP ESI                             ; 005a1ecd
    POP EBX                             ; 005a1ece
    RET                                 ; 005a1ecf

