; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_staticInit_FUN_00421c00(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdlib.c__atexit_FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 00421c00
        ;   Label: core_boxactor.cpp_staticInit_FUN_00421c00
    PUSH 0x10                           ; 00421c05
    PUSH 0x610b5c                       ; 00421c07
    PUSH 0x421c70                       ; 00421c0c
    PUSH 0x5d4bd8                       ; 00421c11
    PUSH 0x7c505c                       ; 00421c16
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00421c1b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00421c20
    PUSH 0x5fd010                       ; 00421c23
    PUSH 0x8                            ; 00421c28
    PUSH 0x7c5098                       ; 00421c2a
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00421c2f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00421c34
    PUSH 0x610b4c                       ; 00421c37
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 00421c3c
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00421c41
    PUSH 0x7c505c                       ; 00421c44
    PUSH 0x2                            ; 00421c49
    PUSH 0x610b60                       ; 00421c4b
    PUSH 0x422ea0                       ; 00421c50
    PUSH 0x5d4be2                       ; 00421c55
    PUSH 0x7c52f8                       ; 00421c5a
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00421c5f
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00421c64
    RET                                 ; 00421c67

