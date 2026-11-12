; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_staticInit_FUN_005325b0(void)
;
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_ctor_FUN_00448be0
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00460490
;   core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00473470
;   core_set.cpp_CDemonSet_ctor_FUN_005327c0
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_stdlib.c__atexit_FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x1ed78c8                      ; 005325b0
        ;   Label: core_set.cpp_staticInit_FUN_005325b0
    CALL core_set.cpp_CDemonSet_ctor_FUN_005327c0 ; 005325b5
        ;   XREF to: 005327c0 (UNCONDITIONAL_CALL)  ; CDemonSet * core_set.cpp_CDemonSet_ctor_FUN_005327c0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005325ba
    PUSH 0x603ae8                       ; 005325bd
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 005325c2
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005325c7
    PUSH 0x2038f4c                      ; 005325ca
    CALL core_dcamera.cpp_CDemonCamera_ctor_FUN_00448be0 ; 005325cf
        ;   XREF to: 00448be0 (UNCONDITIONAL_CALL)  ; CDemonCamera * core_dcamera.cpp_CDemonCamera_ctor_FUN_00448be0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 005325d4
    PUSH 0x603af8                       ; 005325d7
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 005325dc
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005325e1
    PUSH 0x203b37c                      ; 005325e4
    CALL core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00473470 ; 005325e9
        ;   XREF to: 00473470 (UNCONDITIONAL_CALL)  ; CDemonRaytrace * core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00473470(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 005325ee
    PUSH 0x603b08                       ; 005325f1
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 005325f6
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005325fb
    PUSH 0x203b70c                      ; 005325fe
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00460490 ; 00532603
        ;   XREF to: 00460490 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00460490(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00532608
    PUSH 0x603b18                       ; 0053260b
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 00532610
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00532615
    PUSH 0x5db0f0                       ; 00532618
    PUSH 0xfa0                          ; 0053261d
    PUSH 0x2080010                      ; 00532622
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00532627
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0053262c
    RET                                 ; 0053262f

