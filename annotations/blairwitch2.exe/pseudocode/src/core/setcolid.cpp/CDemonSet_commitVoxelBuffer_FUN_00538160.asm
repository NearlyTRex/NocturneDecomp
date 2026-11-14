; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00538160(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_removeAllActors_FUN_004fc640 at 004fc690
;   core_set.cpp_CDemonSet_load_FUN_0052c0e0 at 0052d0ce
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_004770c0
;   core_path.cpp_resetAllPathMaps_FUN_00513f30
;
; *****************************************************************************

section .text

    PUSH 0x1fc9c68                      ; 00538160 | g_CDemonRaytraceInstance
        ;   Label: core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00538160
    CALL core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_004770c0 ; 00538165
        ;   XREF to: 004770c0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_004770c0(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 0053816a
    JMP 0x00513f30                      ; 0053816d
        ;   XREF to: 00513f30 (UNCONDITIONAL_CALL)

