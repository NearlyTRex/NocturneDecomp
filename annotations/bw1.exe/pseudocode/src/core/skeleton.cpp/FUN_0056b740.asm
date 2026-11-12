; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_0056b740(void)
;
;
; XREF[2]:
;   core_main.c_FUN_00503a30 at 00503a7e
;   core_mission.cpp_CDemonMission_freeAllAssets_FUN_0051bf10 at 0051bf1f
;
; Referenced Globals:
;   undefined4 DAT_02c5fc1c
;
; Called Functions:
;   core_skeleton.cpp_FUN_00562f70
;   core_skeleton.cpp_FUN_0056b610
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b740
        ;   Label: core_skeleton.cpp_FUN_0056b740
    PUSH ESI                            ; 0056b741
    MOV EBX,0x27903bc                   ; 0056b742
    CALL core_skeleton.cpp_FUN_0056b610 ; 0056b747
        ;   XREF to: 0056b610 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0056b610()
    LEA ESI,[EBX + 0x4cf860]            ; 0056b74c
    PUSH 0x1                            ; 0056b752
        ;   Label: LAB_0056b752
    PUSH EBX                            ; 0056b754
    CALL core_skeleton.cpp_FUN_00562f70 ; 0056b755
        ;   XREF to: 00562f70 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00562f70()
    ADD EBX,0x1ec9c                     ; 0056b75a
    ADD ESP,0x8                         ; 0056b760
    CMP EBX,ESI                         ; 0056b763
    JNZ 0x0056b752                      ; 0056b765
        ;   XREF to: 0056b752 (CONDITIONAL_JUMP)  ; LAB_0056b752
    PUSH 0xa0                           ; 0056b767
    PUSH 0x0                            ; 0056b76c
    PUSH 0x2c5fc1c                      ; 0056b76e | DAT_02c5fc1c
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0056b773
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0056b778
    POP ESI                             ; 0056b77b
    POP EBX                             ; 0056b77c
    RET                                 ; 0056b77d

