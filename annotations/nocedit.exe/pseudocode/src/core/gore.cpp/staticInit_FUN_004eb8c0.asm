; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gore_cpp_staticInit_FUN_004eb8c0(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CBloodParticleTypeInfo
;   WatcomTypeInfo g_CBloodSplatTypeInfo
;   WatcomTypeInfo g_CBloodPoolTypeInfo
;   WatcomTypeInfo g_CFootstepTypeInfo
;   WatcomStaticDestructorNode g_CGoreDestructorNode
;   WatcomStaticDestructorNode DAT_0067b980
;   WatcomStaticDestructorNode DAT_0067b990
;   CGore g_CGoreInstance
;   CBloodParticle[256] DAT_02d833d4
;   CBloodSplat[2000] DAT_02d873dc
;   CBloodPool[32] DAT_02da8724
;   CFootstep[1000] DAT_02da8c2c
;
; Called Functions:
;   core_gore.cpp_FUN_004ed730
;   crt_memory.c___arrinit_FUN_005fe667
;   crt_stdlib.c__atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH 0x2d83364                      ; 004eb8c0 | g_CGoreInstance
        ;   Label: core_gore.cpp_staticInit_FUN_004eb8c0
    CALL core_gore.cpp_FUN_004ed730     ; 004eb8c5
        ;   XREF to: 004ed730 (UNCONDITIONAL_CALL)  ; CGore * core_gore.cpp_FUN_004ed730(CGore * this_ptr)
    ADD ESP,0x4                         ; 004eb8ca
    PUSH 0x67b970                       ; 004eb8cd | g_CGoreDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 004eb8d2
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004eb8d7
    PUSH 0x65f080                       ; 004eb8da | g_CBloodParticleTypeInfo
    PUSH 0x100                          ; 004eb8df
    PUSH 0x2d833d4                      ; 004eb8e4 | DAT_02d833d4
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004eb8e9
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004eb8ee
    PUSH 0x67b980                       ; 004eb8f1 | DAT_0067b980
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 004eb8f6
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004eb8fb
    PUSH 0x65f0a0                       ; 004eb8fe | g_CBloodSplatTypeInfo
    PUSH 0x7d0                          ; 004eb903
    PUSH 0x2d873dc                      ; 004eb908 | DAT_02d873dc
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004eb90d
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004eb912
    PUSH 0x65f0c0                       ; 004eb915 | g_CBloodPoolTypeInfo
    PUSH 0x20                           ; 004eb91a
    PUSH 0x2da8724                      ; 004eb91c | DAT_02da8724
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004eb921
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004eb926
    PUSH 0x65f0e0                       ; 004eb929 | g_CFootstepTypeInfo
    PUSH 0x3e8                          ; 004eb92e
    PUSH 0x2da8c2c                      ; 004eb933 | DAT_02da8c2c
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004eb938
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004eb93d
    PUSH 0x67b990                       ; 004eb940 | DAT_0067b990
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 004eb945
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004eb94a
    RET                                 ; 004eb94d

