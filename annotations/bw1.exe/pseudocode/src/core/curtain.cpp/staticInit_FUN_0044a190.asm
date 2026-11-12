; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_curtain_cpp_staticInit_FUN_0044a190(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH 0x5fb430                       ; 0044a190
        ;   Label: core_curtain.cpp_staticInit_FUN_0044a190
    PUSH 0x64                           ; 0044a195
    PUSH 0x7dc71c                       ; 0044a197
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0044a19c
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0044a1a1
    PUSH 0x5fe590                       ; 0044a1a4
    PUSH 0x64                           ; 0044a1a9
    PUSH 0x7dcbcc                       ; 0044a1ab
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0044a1b0
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0044a1b5
    PUSH 0x7c2ff8                       ; 0044a1b8
    PUSH 0x6                            ; 0044a1bd
    PUSH 0x6111d0                       ; 0044a1bf
    PUSH 0x44a1e0                       ; 0044a1c4
    PUSH 0x5d73c2                       ; 0044a1c9
    PUSH 0x7ddb6c                       ; 0044a1ce
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0044a1d3
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0044a1d8
    RET                                 ; 0044a1db

