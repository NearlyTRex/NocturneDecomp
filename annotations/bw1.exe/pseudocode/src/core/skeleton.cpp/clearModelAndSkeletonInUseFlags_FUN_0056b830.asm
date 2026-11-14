; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_clearModelAndSkeletonInUseFlags_FUN_0056b830(void)
;
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_0051b2b0 at 0051b2da
;
; Referenced Globals:
;   undefined4 DAT_027902bc
;   undefined4 DAT_02c5fc1c
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH 0xa0                           ; 0056b830
        ;   Label: core_skeleton.cpp_clearModelAndSkeletonInUseFlags_FUN_0056b830
    PUSH 0x0                            ; 0056b835
    PUSH 0x2c5fc1c                      ; 0056b837 | DAT_02c5fc1c
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0056b83c
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0056b841
    PUSH 0x100                          ; 0056b844
    PUSH 0x0                            ; 0056b849
    PUSH 0x27902bc                      ; 0056b84b | DAT_027902bc
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0056b850
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0056b855
    RET                                 ; 0056b858

