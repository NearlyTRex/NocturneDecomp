; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_keyactor_cpp_staticInit_FUN_004fc4b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004fc4b0
        ;   Label: core_keyactor.cpp_staticInit_FUN_004fc4b0
    PUSH 0x3                            ; 004fc4b5
    PUSH 0x61f28c                       ; 004fc4b7
    PUSH 0x4fc4e0                       ; 004fc4bc
    PUSH 0x5e69b3                       ; 004fc4c1
    PUSH 0x1d1bc64                      ; 004fc4c6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004fc4cb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004fc4d0
    RET                                 ; 004fc4d3

