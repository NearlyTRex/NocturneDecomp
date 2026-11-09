; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_0053ef40(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_mission.cpp_FUN_004f6d70 at 004f6dc0
;   core_set.cpp_FUN_00532b80 at 00533b6e
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_00478130
;   core_path.cpp_resetAllPathMaps_FUN_0050cf60
;
; *****************************************************************************

section .text

    PUSH 0x203b37c                      ; 0053ef40 | g_CDemonRaytraceInstance
        ;   Label: core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_0053ef40
    CALL core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_00478130 ; 0053ef45
        ;   XREF to: 00478130 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_00478130(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 0053ef4a
    JMP 0x0050cf60                      ; 0053ef4d
        ;   XREF to: 0050cf60 (UNCONDITIONAL_CALL)

