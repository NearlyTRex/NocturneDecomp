; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_goggles_cpp_staticInit_FUN_0059c000(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 0059c000
        ;   Label: core_goggles.cpp_staticInit_FUN_0059c000
    PUSH 0x1                            ; 0059c005
    PUSH 0x61ea38                       ; 0059c007
    PUSH 0x59c030                       ; 0059c00c
    PUSH 0x5ef5a8                       ; 0059c011
    PUSH 0x26680dc                      ; 0059c016
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0059c01b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0059c020
    RET                                 ; 0059c023

