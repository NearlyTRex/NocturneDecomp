; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_staticInit_FUN_004442d0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1d06ad8                      ; 004442d0
        ;   Label: core_colonel.cpp_staticInit_FUN_004442d0
    PUSH 0x1                            ; 004442d5
    PUSH 0x6110d0                       ; 004442d7
    PUSH 0x444300                       ; 004442dc
    PUSH 0x5d6b6f                       ; 004442e1
    PUSH 0x7db5b4                       ; 004442e6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004442eb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004442f0
    RET                                 ; 004442f3

