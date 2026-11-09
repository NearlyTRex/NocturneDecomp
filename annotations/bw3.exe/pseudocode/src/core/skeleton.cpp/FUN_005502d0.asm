; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_005502d0(void)
;
;
; XREF[2]:
;   core_main.c_FUN_004e4c70 at 004e4cbe
;   core_mission.cpp_FUN_004f76f0 at 004f76ff
;
; Referenced Globals:
;   undefined4 DAT_004cf860
;   undefined4 DAT_02cd28bc
;
; Called Functions:
;   core_skeleton.cpp_FUN_00547b90
;   core_skeleton.cpp_FUN_005501a0
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005502d0
        ;   Label: core_skeleton.cpp_FUN_005502d0
    PUSH ESI                            ; 005502d1
    MOV EBX,0x280305c                   ; 005502d2
    CALL core_skeleton.cpp_FUN_005501a0 ; 005502d7
        ;   XREF to: 005501a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_005501a0()
    LEA ESI,[EBX + 0x4cf860]            ; 005502dc | DAT_004cf860
    PUSH 0x1                            ; 005502e2
        ;   Label: LAB_005502e2
    PUSH EBX                            ; 005502e4
    CALL core_skeleton.cpp_FUN_00547b90 ; 005502e5
        ;   XREF to: 00547b90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00547b90()
    ADD EBX,0x1ec9c                     ; 005502ea
    ADD ESP,0x8                         ; 005502f0
    CMP EBX,ESI                         ; 005502f3
    JNZ 0x005502e2                      ; 005502f5
        ;   XREF to: 005502e2 (CONDITIONAL_JUMP)  ; LAB_005502e2
    PUSH 0xa0                           ; 005502f7
    PUSH 0x0                            ; 005502fc
    PUSH 0x2cd28bc                      ; 005502fe | DAT_02cd28bc
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00550303
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00550308
    POP ESI                             ; 0055030b
    POP EBX                             ; 0055030c
    RET                                 ; 0055030d

