; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00559580(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_removeAllActors_FUN_0051b5a0 at 0051b5f0
;   core_set.cpp_FUN_0054d3c0 at 0054e3ae
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_0048f5b0
;   core_path.cpp_resetAllPathMaps_FUN_00535280
;
; *****************************************************************************

section .text

    PUSH 0x1fe5c1c                      ; 00559580 | g_CDemonRaytraceInstance
        ;   Label: core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00559580
    CALL core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_0048f5b0 ; 00559585
        ;   XREF to: 0048f5b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_0048f5b0(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 0055958a
    JMP 0x00535280                      ; 0055958d
        ;   XREF to: 00535280 (UNCONDITIONAL_CALL)

