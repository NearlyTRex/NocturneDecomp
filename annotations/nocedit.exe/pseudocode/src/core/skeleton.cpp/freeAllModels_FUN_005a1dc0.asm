; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_freeAllModels_FUN_005a1dc0(void)
;
;
; XREF[6]:
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be3db
;   core_main.c_finalizeGameSystems_FUN_00508570 at 005087eb
;   core_mission.cpp_CDemonMission_FUN_005248e0 at 005248fc
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005968ce
;   core_skeledit.cpp_viewModel_FUN_00598fc0 at 00599172
;   core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0 at 005a1ea7
;
; Referenced Globals:
;   int g_DeformableModelCount
;   CDeformableModel[64] g_DeformableModelPool
;   undefined4 DAT_036958a0
;   int g_SkeletonPoolCount
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1dc0
        ;   Label: core_skeleton.cpp_freeAllModels_FUN_005a1dc0
    PUSH ESI                            ; 005a1dc1
    MOV EBX,0x368c8a0                   ; 005a1dc2 | g_DeformableModelPool
    LEA ESI,[EBX + 0x240000]            ; 005a1dc7 | g_SkeletonPoolCount
    PUSH EBX                            ; 005a1dcd | g_DeformableModelPool | DAT_036958a0
        ;   Label: LAB_005a1dcd
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0 ; 005a1dce
        ;   XREF to: 0059a2b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0(CDeformableModel * this_ptr)
    ADD EBX,0x9000                      ; 005a1dd3 | DAT_036958a0
    ADD ESP,0x4                         ; 005a1dd9
    CMP EBX,ESI                         ; 005a1ddc
    JNZ 0x005a1dcd                      ; 005a1dde
        ;   XREF to: 005a1dcd (CONDITIONAL_JUMP)  ; LAB_005a1dcd
    XOR EDX,EDX                         ; 005a1de0
    MOV dword ptr [0x0368c89c],EDX      ; 005a1de2 | g_DeformableModelCount
    POP ESI                             ; 005a1de8
    POP EBX                             ; 005a1de9
    RET                                 ; 005a1dea

