; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_0056b610(void)
;
;
; XREF[3]:
;   core_main.c_FUN_00503a30 at 00503a79
;   core_mission.cpp_FUN_0051bf10 at 0051bf1a
;   core_skeleton.cpp_FUN_0056b740 at 0056b747
;
; Referenced Globals:
;   undefined4 DAT_027902bc
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_free_FUN_005637d0
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b610
        ;   Label: core_skeleton.cpp_FUN_0056b610
    PUSH ESI                            ; 0056b611
    MOV EBX,0x26b82bc                   ; 0056b612
    LEA ESI,[EBX + 0xd8000]             ; 0056b617
    PUSH EBX                            ; 0056b61d
        ;   Label: LAB_0056b61d
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_005637d0 ; 0056b61e
        ;   XREF to: 005637d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_005637d0(CDeformableModel * this_ptr)
    ADD EBX,0x3600                      ; 0056b623
    ADD ESP,0x4                         ; 0056b629
    CMP EBX,ESI                         ; 0056b62c
    JNZ 0x0056b61d                      ; 0056b62e
        ;   XREF to: 0056b61d (CONDITIONAL_JUMP)  ; LAB_0056b61d
    PUSH 0x100                          ; 0056b630
    PUSH 0x0                            ; 0056b635
    PUSH 0x27902bc                      ; 0056b637 | DAT_027902bc
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0056b63c
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0056b641
    POP ESI                             ; 0056b644
    POP EBX                             ; 0056b645
    RET                                 ; 0056b646

