; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_sound_cpp_staticInit_FUN_005b1760(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_STrainNoiseTypeInfo
;   WatcomStaticDestructorNode DAT_00681ed0
;   CSound g_CSoundInstance
;   CStrList g_SoundFileList
;   STrainNoise[10] g_TrainNoiseArray
;
; Called Functions:
;   core_sound.cpp_CSound_ctor_FUN_005b2ce0
;   crt_memory.c___arrinit_FUN_005fe667
;   crt_stdlib.c__atexit_FUN_005ff060
;   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
;
; *****************************************************************************

section .text

    PUSH 0x3f6af64                      ; 005b1760 | g_CSoundInstance
        ;   Label: core_sound.cpp_staticInit_FUN_005b1760
    CALL core_sound.cpp_CSound_ctor_FUN_005b2ce0 ; 005b1765
        ;   XREF to: 005b2ce0 (UNCONDITIONAL_CALL)  ; CSound * core_sound.cpp_CSound_ctor_FUN_005b2ce0(CSound * this_ptr)
    ADD ESP,0x4                         ; 005b176a
    PUSH 0x3f6b128                      ; 005b176d | g_SoundFileList
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 005b1772
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 005b1777
    PUSH 0x681ed0                       ; 005b177a | DAT_00681ed0
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 005b177f
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005b1784
    PUSH 0x663320                       ; 005b1787 | g_STrainNoiseTypeInfo
    PUSH 0xa                            ; 005b178c
    PUSH 0x3f6b7bc                      ; 005b178e | g_TrainNoiseArray
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005b1793
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005b1798
    RET                                 ; 005b179b

