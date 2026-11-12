; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_staticInit_FUN_0052bbe0(void)
;
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_ctor_FUN_0043b400
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10
;   core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00472400
;   core_set.cpp_CDemonSet_ctor_FUN_0052bd20
;   crt_memory.c___arrinit_FUN_005b7f5f
;   crt_stdlib.c__atexit_FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x1e661b8                      ; 0052bbe0
        ;   Label: core_set.cpp_staticInit_FUN_0052bbe0
    CALL core_set.cpp_CDemonSet_ctor_FUN_0052bd20 ; 0052bbe5
        ;   XREF to: 0052bd20 (UNCONDITIONAL_CALL)  ; CDemonSet * core_set.cpp_CDemonSet_ctor_FUN_0052bd20(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052bbea
    PUSH 0x61b568                       ; 0052bbed
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 0052bbf2
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0052bbf7
    PUSH 0x1fc7838                      ; 0052bbfa
    CALL core_dcamera.cpp_CDemonCamera_ctor_FUN_0043b400 ; 0052bbff
        ;   XREF to: 0043b400 (UNCONDITIONAL_CALL)  ; CDemonCamera * core_dcamera.cpp_CDemonCamera_ctor_FUN_0043b400(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0052bc04
    PUSH 0x61b578                       ; 0052bc07
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 0052bc0c
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0052bc11
    PUSH 0x1fc9c68                      ; 0052bc14
    CALL core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00472400 ; 0052bc19
        ;   XREF to: 00472400 (UNCONDITIONAL_CALL)  ; CDemonRaytrace * core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00472400(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 0052bc1e
    PUSH 0x61b588                       ; 0052bc21
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 0052bc26
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0052bc2b
    PUSH 0x1fc9ff8                      ; 0052bc2e
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10 ; 0052bc33
        ;   XREF to: 0044dc10 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0052bc38
    PUSH 0x61b598                       ; 0052bc3b
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 0052bc40
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0052bc45
    PUSH 0x5f22b0                       ; 0052bc48
    PUSH 0xfa0                          ; 0052bc4d
    PUSH 0x200e8f4                      ; 0052bc52
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0052bc57
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052bc5c
    RET                                 ; 0052bc5f

