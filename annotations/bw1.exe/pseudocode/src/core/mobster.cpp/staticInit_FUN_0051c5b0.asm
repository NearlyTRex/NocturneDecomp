; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_staticInit_FUN_0051c5b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 0051c5b0
        ;   Label: core_mobster.cpp_staticInit_FUN_0051c5b0
    PUSH 0x7                            ; 0051c5b5
    PUSH 0x61f7c4                       ; 0051c5b7
    PUSH 0x51c7a0                       ; 0051c5bc
    PUSH 0x5e9c2a                       ; 0051c5c1
    PUSH 0x1d33c30                      ; 0051c5c6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0051c5cb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0051c5d0
    RET                                 ; 0051c5d3

