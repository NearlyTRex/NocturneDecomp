; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_staticInit_FUN_004ea5f0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c6344                       ; 004ea5f0
        ;   Label: core_hero.cpp_staticInit_FUN_004ea5f0
    PUSH 0xd                            ; 004ea5f5
    PUSH 0x61ef20                       ; 004ea5f7
    PUSH 0x0                            ; 004ea5fc
    PUSH 0x5e45fd                       ; 004ea5fe
    PUSH 0x1d06ad8                      ; 004ea603
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004ea608
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004ea60d
    PUSH 0x7c2ff8                       ; 004ea610
    PUSH 0x2                            ; 004ea615
    PUSH 0x61ef24                       ; 004ea617
    PUSH 0x4ecb70                       ; 004ea61c
    PUSH 0x5e4603                       ; 004ea621
    PUSH 0x1d06b14                      ; 004ea626
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004ea62b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004ea630
    RET                                 ; 004ea633

