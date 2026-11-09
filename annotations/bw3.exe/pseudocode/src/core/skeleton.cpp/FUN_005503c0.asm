; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_005503c0(void)
;
;
; XREF[1]:
;   core_mission.cpp_FUN_004f6a80 at 004f6aaa
;
; Referenced Globals:
;   undefined4 DAT_02802f5c
;   undefined4 DAT_02cd28bc
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH 0xa0                           ; 005503c0
        ;   Label: core_skeleton.cpp_FUN_005503c0
    PUSH 0x0                            ; 005503c5
    PUSH 0x2cd28bc                      ; 005503c7 | DAT_02cd28bc
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005503cc
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005503d1
    PUSH 0x100                          ; 005503d4
    PUSH 0x0                            ; 005503d9
    PUSH 0x2802f5c                      ; 005503db | DAT_02802f5c
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005503e0
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005503e5
    RET                                 ; 005503e8

