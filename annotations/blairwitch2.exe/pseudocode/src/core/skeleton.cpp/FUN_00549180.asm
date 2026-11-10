; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00549180(void)
;
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_004fc350 at 004fc37a
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH 0xa0                           ; 00549180
        ;   Label: core_skeleton.cpp_FUN_00549180
    PUSH 0x0                            ; 00549185
    PUSH 0x2628554                      ; 00549187
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0054918c
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00549191
    PUSH 0x100                          ; 00549194
    PUSH 0x0                            ; 00549199
    PUSH 0x2177ff4                      ; 0054919b
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005491a0
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005491a5
    RET                                 ; 005491a8

