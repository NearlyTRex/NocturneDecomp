; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_staticInit_FUN_00586920(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH 0x5f22b0                       ; 00586920
        ;   Label: core_wateract.cpp_staticInit_FUN_00586920
    PUSH 0x64                           ; 00586925
    PUSH 0x265b7f8                      ; 00586927
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0058692c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00586931
    PUSH 0x5fddb0                       ; 00586934
    PUSH 0x64                           ; 00586939
    PUSH 0x265bca8                      ; 0058693b
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00586940
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00586945
    PUSH 0x7bbff8                       ; 00586948
    PUSH 0x6                            ; 0058694d
    PUSH 0x61e884                       ; 0058694f
    PUSH 0x586970                       ; 00586954
    PUSH 0x5edf16                       ; 00586959
    PUSH 0x265fb28                      ; 0058695e
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 00586963
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00586968
    RET                                 ; 0058696b

