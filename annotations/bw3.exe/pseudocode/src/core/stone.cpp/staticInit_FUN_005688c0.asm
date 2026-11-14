; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stone_cpp_staticInit_FUN_005688c0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7e177c                       ; 005688c0
        ;   Label: core_stone.cpp_staticInit_FUN_005688c0
    PUSH 0x1                            ; 005688c5
    PUSH 0x606888                       ; 005688c7
    PUSH 0x5688f0                       ; 005688cc
    PUSH 0x5d5ca8                       ; 005688d1
    PUSH 0x2cf622c                      ; 005688d6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 005688db
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005688e0
    RET                                 ; 005688e3

