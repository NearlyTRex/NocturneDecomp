; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_FUN_00574560(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_FUN_00523f50 at 00523f9c
;   core_set.cpp_CDemonSet_load_FUN_00569410 at 0056a17b
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70
;   core_path.cpp_FUN_00548590
;
; *****************************************************************************

section .text

    PUSH 0x3277d14                      ; 00574560 | g_CDemonRaytraceInstance
        ;   Label: core_setcolid.cpp_CDemonSet_FUN_00574560
    CALL core_dtrace.cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70 ; 00574565
        ;   XREF to: 00499e70 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 0057456a
    JMP 0x00548590                      ; 0057456d
        ;   XREF to: 00548590 (UNCONDITIONAL_CALL)

