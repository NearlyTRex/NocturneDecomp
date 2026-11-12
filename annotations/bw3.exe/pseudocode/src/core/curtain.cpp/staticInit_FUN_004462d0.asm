; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_curtain_cpp_staticInit_FUN_004462d0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH 0x5db0f0                       ; 004462d0
        ;   Label: core_curtain.cpp_staticInit_FUN_004462d0
    PUSH 0x64                           ; 004462d5
    PUSH 0x7f8fd0                       ; 004462d7
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004462dc
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004462e1
    PUSH 0x5ddf50                       ; 004462e4
    PUSH 0x64                           ; 004462e9
    PUSH 0x7f9480                       ; 004462eb
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004462f0
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004462f5
    PUSH 0x7df978                       ; 004462f8
    PUSH 0x6                            ; 004462fd
    PUSH 0x5f1784                       ; 004462ff
    PUSH 0x446320                       ; 00446304
    PUSH 0x5b9a29                       ; 00446309
    PUSH 0x7fa420                       ; 0044630e
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00446313
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00446318
    RET                                 ; 0044631b

