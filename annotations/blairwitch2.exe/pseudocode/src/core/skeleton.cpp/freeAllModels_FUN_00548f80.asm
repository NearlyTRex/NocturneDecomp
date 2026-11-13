; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_freeAllModels_FUN_00548f80(void)
;
;
; XREF[3]:
;   core_main.c_FUN_004e4e20 at 004e4e69
;   core_mission.cpp_CDemonMission_freeAllAssets_FUN_004fcf50 at 004fcf5a
;   core_skeleton.cpp_freeAllSkeletons_FUN_00549090 at 00549097
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_free_FUN_00541160
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548f80
        ;   Label: core_skeleton.cpp_freeAllModels_FUN_00548f80
    PUSH ESI                            ; 00548f81
    MOV EBX,0x20ccff4                   ; 00548f82
    LEA ESI,[EBX + 0xab000]             ; 00548f87
    PUSH EBX                            ; 00548f8d
        ;   Label: LAB_00548f8d
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_00541160 ; 00548f8e
        ;   XREF to: 00541160 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_00541160(CDeformableModel * this_ptr)
    ADD EBX,0x2ac0                      ; 00548f93
    ADD ESP,0x4                         ; 00548f99
    CMP EBX,ESI                         ; 00548f9c
    JNZ 0x00548f8d                      ; 00548f9e
        ;   XREF to: 00548f8d (CONDITIONAL_JUMP)  ; LAB_00548f8d
    PUSH 0x100                          ; 00548fa0
    PUSH 0x0                            ; 00548fa5
    PUSH 0x2177ff4                      ; 00548fa7
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00548fac
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00548fb1
    POP ESI                             ; 00548fb4
    POP EBX                             ; 00548fb5
    RET                                 ; 00548fb6

