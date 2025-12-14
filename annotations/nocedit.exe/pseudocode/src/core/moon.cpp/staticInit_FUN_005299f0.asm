; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_moon.cpp_staticInit_FUN_005299f0(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CCourseTypeInfo
;   WatcomTypeInfo g_CAlphaBitmapTypeInfo
;   WatcomTypeInfo g_SBatTypeInfo
;   WatcomStaticDestructorNode DAT_0067d718
;   WatcomStaticDestructorNode DAT_0067d728
;   WatcomStaticDestructorNode DAT_0067d738
;   WatcomStaticDestructorNode DAT_0067d748
;   CAlphaBitmap g_MoonCloudTexture
;   CAlphaBitmap[30] g_MoonAnimTextures
;   CCourse[3] g_MoonBatCourses
;   SBat[30] g_MoonBats
;   CKeyFramedModel g_MoonBatModel
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;   crt_stdlib.c_atexit_FUN_005ff060
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
;
; *****************************************************************************

section .text

    PUSH 0x2f37f70                      ; 005299f0 | g_MoonCloudTexture
        ;   Label: core_moon.cpp_staticInit_FUN_005299f0
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 005299f5
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 005299fa
    PUSH 0x67d718                       ; 005299fd | DAT_0067d718
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00529a02
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00529a07
    PUSH 0x65e9f0                       ; 00529a0a | g_CAlphaBitmapTypeInfo
    PUSH 0x1e                           ; 00529a0f
    PUSH 0x2f37f84                      ; 00529a11 | g_MoonAnimTextures
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00529a16
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00529a1b
    PUSH 0x67d728                       ; 00529a1e | DAT_0067d728
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00529a23
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00529a28
    PUSH 0x65c9d0                       ; 00529a2b | g_CCourseTypeInfo
    PUSH 0x3                            ; 00529a30
    PUSH 0x2f381e8                      ; 00529a32 | g_MoonBatCourses
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00529a37
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00529a3c
    PUSH 0x67d738                       ; 00529a3f | DAT_0067d738
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00529a44
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00529a49
    PUSH 0x661b20                       ; 00529a4c | g_SBatTypeInfo
    PUSH 0x1e                           ; 00529a51
    PUSH 0x2f3820c                      ; 00529a53 | g_MoonBats
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00529a58
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00529a5d
    PUSH 0x2f384dc                      ; 00529a60 | g_MoonBatModel
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0 ; 00529a65
        ;   XREF to: 00476cf0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00529a6a
    PUSH 0x67d748                       ; 00529a6d | DAT_0067d748
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00529a72
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00529a77
    RET                                 ; 00529a7a

