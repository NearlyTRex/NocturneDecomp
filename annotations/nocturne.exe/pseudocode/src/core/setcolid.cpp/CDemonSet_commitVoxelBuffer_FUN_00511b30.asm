; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30(void)
;
;
; XREF[2]:
;   core_mission.cpp_FUN_004d8fc0 at 004d900c
;   core_set.cpp_CDemonSet_load_FUN_00506f10 at 00507c6b
;
; Referenced Globals:
;   undefined4 DAT_01fba938
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_0046bcf0
;   core_path.cpp_resetAllPathMaps_FUN_004f1e90
;
; *****************************************************************************

section .text

    PUSH 0x1fba938                      ; 00511b30 | DAT_01fba938
        ;   Label: core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30
    CALL core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_0046bcf0 ; 00511b35
        ;   XREF to: 0046bcf0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_0046bcf0()
    ADD ESP,0x4                         ; 00511b3a
    JMP 0x004f1e90                      ; 00511b3d
        ;   XREF to: 004f1e90 (UNCONDITIONAL_CALL)

