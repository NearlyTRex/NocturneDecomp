; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_staticInit_FUN_00569040(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   WatcomStaticDestructorNode g_CDemonSetDestructorNode
;   WatcomStaticDestructorNode g_CDemonCameraDestructorNode
;   WatcomStaticDestructorNode g_CDemonRaytraceDestructorNode
;   WatcomStaticDestructorNode g_CKeyFramedModelDestructorNode
;   CDemonSet g_CDemonSetInstance
;   CDemonCamera g_CDemonCameraInstance
;   CDemonRaytrace g_CDemonRaytraceInstance
;   CKeyFramedModel g_CKeyFramedModelInstance
;   CVector3f[4000] g_FaceNormalArray
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
;   core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00494200
;   core_set.cpp_CDemonSet_ctor_FUN_005690c0
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;   crt_stdlib.c_atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH 0x3114278                      ; 00569040 | CDemonSet g_CDemonSetInstance
        ;   Label: core_set.cpp_staticInit_FUN_00569040
    CALL core_set.cpp_CDemonSet_ctor_FUN_005690c0 ; 00569045 | CDemonSet * core_set.cpp_CDemonSet_ctor_FUN_005690c0(CDemonSet * this_ptr)
        ;   XREF to: 005690c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056904a
    PUSH 0x681088                       ; 0056904d | WatcomStaticDestructorNode g_CDemonSetDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00569052 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00569057
    PUSH 0x32758e4                      ; 0056905a | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030 ; 0056905f | CDemonCamera * core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030(CDemonCamera * this_ptr)
        ;   XREF to: 0044c030 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00569064
    PUSH 0x681098                       ; 00569067 | WatcomStaticDestructorNode g_CDemonCameraDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 0056906c | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00569071
    PUSH 0x3277d14                      ; 00569074 | CDemonRaytrace g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00494200 ; 00569079 | CDemonRaytrace * core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00494200(CDemonRaytrace * this_ptr)
        ;   XREF to: 00494200 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056907e
    PUSH 0x6810a8                       ; 00569081 | WatcomStaticDestructorNode g_CDemonRaytraceDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00569086 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056908b
    PUSH 0x32780a4                      ; 0056908e | CKeyFramedModel g_CKeyFramedModelInstance
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0 ; 00569093 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0(CKeyFramedModel * this_ptr)
        ;   XREF to: 00476cf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00569098
    PUSH 0x6810b8                       ; 0056909b | WatcomStaticDestructorNode g_CKeyFramedModelDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 005690a0 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005690a5
    PUSH 0x6598c0                       ; 005690a8 | WatcomTypeInfo g_CVectorTypeInfo
    PUSH 0xfa0                          ; 005690ad
    PUSH 0x32c1ccc                      ; 005690b2 | CVector3f[4000] g_FaceNormalArray
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 005690b7 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005690bc
    RET                                 ; 005690bf

