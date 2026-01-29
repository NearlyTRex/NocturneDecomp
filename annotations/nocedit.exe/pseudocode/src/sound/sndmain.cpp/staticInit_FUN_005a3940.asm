; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_staticInit_FUN_005a3940(void)
;
;
; Referenced Globals:
;   float g_SoundDivisorConstant = 4
;   float g_SoundReferenceDistanceConstant = 20
;   WatcomTypeInfo g_SfxSlotTypeInfo
;   WatcomTypeInfo g_SfxOptionsTypeInfo
;   WatcomTypeInfo g_SfxSampleTypeInfo
;   WatcomStaticDestructorNode g_SfxSamplesDestructorNode
;   float g_SoundReferenceVolumeDistance
;   CSfxSlot[64] g_SfxSlots
;   CSfxOptions[8] g_SfxOptions
;   CSfxSample[64] g_SfxSamples
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005fe667
;   crt_stdlib.c__atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    FLD float ptr [0x0066315c]          ; 005a3940 | g_SoundReferenceDistanceConstant
        ;   Label: sound_sndmain.cpp_staticInit_FUN_005a3940
    FDIV float ptr [0x00663158]         ; 005a3946 | g_SoundDivisorConstant
    PUSH 0x663180                       ; 005a394c | g_SfxSlotTypeInfo
    PUSH 0x40                           ; 005a3951
    PUSH 0x3f5daa4                      ; 005a3953 | g_SfxSlots
    FSTP float ptr [0x03f5daa0]         ; 005a3958 | g_SoundReferenceVolumeDistance
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005a395e
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005a3963
    PUSH 0x6631a0                       ; 005a3966 | g_SfxOptionsTypeInfo
    PUSH 0x8                            ; 005a396b
    PUSH 0x3f624a8                      ; 005a396d | g_SfxOptions
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005a3972
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005a3977
    PUSH 0x6631c0                       ; 005a397a | g_SfxSampleTypeInfo
    PUSH 0x40                           ; 005a397f
    PUSH 0x3f6282c                      ; 005a3981 | g_SfxSamples
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005a3986
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005a398b
    PUSH 0x681ad0                       ; 005a398e | g_SfxSamplesDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 005a3993
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005a3998
    RET                                 ; 005a399b

