; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_00549090(void)
;
;
; XREF[2]:
;   core_main.c_FUN_004e4e20 at 004e4e6e
;   core_mission.cpp_CDemonMission_freeAllAssets_FUN_004fcf50 at 004fcf5f
;
; Called Functions:
;   core_skeleton.cpp_FUN_00540980
;   core_skeleton.cpp_FUN_00548f80
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00549090
        ;   Label: core_skeleton.cpp_FUN_00549090
    PUSH ESI                            ; 00549091
    MOV EBX,0x21780f4                   ; 00549092
    CALL core_skeleton.cpp_FUN_00548f80 ; 00549097
        ;   XREF to: 00548f80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00548f80()
    LEA ESI,[EBX + 0x4b0460]            ; 0054909c | LAB_004b045f+1
    PUSH 0x1                            ; 005490a2
        ;   Label: LAB_005490a2
    PUSH EBX                            ; 005490a4
    CALL core_skeleton.cpp_FUN_00540980 ; 005490a5
        ;   XREF to: 00540980 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00540980()
    ADD EBX,0x1e01c                     ; 005490aa
    ADD ESP,0x8                         ; 005490b0
    CMP EBX,ESI                         ; 005490b3
    JNZ 0x005490a2                      ; 005490b5
        ;   XREF to: 005490a2 (CONDITIONAL_JUMP)  ; LAB_005490a2
    PUSH 0xa0                           ; 005490b7
    PUSH 0x0                            ; 005490bc
    PUSH 0x2628554                      ; 005490be
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005490c3
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005490c8
    POP ESI                             ; 005490cb
    POP EBX                             ; 005490cc
    RET                                 ; 005490cd

