; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_staticInit_FUN_00506b40(void)
;
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_ctor_FUN_0043fee0
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590
;   core_dtrace.cpp_CDemonRaytrace_ctor_FUN_004671e0
;   core_set.cpp_CDemonSet_ctor_FUN_00506bc0
;   crt_memory.c___arrinit_FUN_005644a7
;   crt_unknown.c__atexit_FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x1e57284                      ; 00506b40
        ;   Label: core_set.cpp_staticInit_FUN_00506b40
    CALL core_set.cpp_CDemonSet_ctor_FUN_00506bc0 ; 00506b45
        ;   XREF to: 00506bc0 (UNCONDITIONAL_CALL)  ; CDemonSet * core_set.cpp_CDemonSet_ctor_FUN_00506bc0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00506b4a
    PUSH 0x5be328                       ; 00506b4d
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 00506b52
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00506b57
    PUSH 0x1fb8508                      ; 00506b5a
    CALL core_dcamera.cpp_CDemonCamera_ctor_FUN_0043fee0 ; 00506b5f
        ;   XREF to: 0043fee0 (UNCONDITIONAL_CALL)  ; CDemonCamera * core_dcamera.cpp_CDemonCamera_ctor_FUN_0043fee0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 00506b64
    PUSH 0x5be338                       ; 00506b67
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 00506b6c
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00506b71
    PUSH 0x1fba938                      ; 00506b74
    CALL core_dtrace.cpp_CDemonRaytrace_ctor_FUN_004671e0 ; 00506b79
        ;   XREF to: 004671e0 (UNCONDITIONAL_CALL)  ; CDemonRaytrace * core_dtrace.cpp_CDemonRaytrace_ctor_FUN_004671e0(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 00506b7e
    PUSH 0x5be348                       ; 00506b81
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 00506b86
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00506b8b
    PUSH 0x1fbacc8                      ; 00506b8e
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590 ; 00506b93
        ;   XREF to: 00452590 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00506b98
    PUSH 0x5be358                       ; 00506b9b
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 00506ba0
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00506ba5
    PUSH 0x5993b0                       ; 00506ba8
    PUSH 0xfa0                          ; 00506bad
    PUSH 0x1fff5b0                      ; 00506bb2
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00506bb7
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00506bbc
    RET                                 ; 00506bbf

