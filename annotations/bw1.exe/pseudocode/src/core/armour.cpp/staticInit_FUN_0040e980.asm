; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_armour_cpp_staticInit_FUN_0040e980(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 0040e980
        ;   Label: core_armour.cpp_staticInit_FUN_0040e980
    PUSH 0x1                            ; 0040e985
    PUSH 0x6108c0                       ; 0040e987
    PUSH 0x40e9b0                       ; 0040e98c
    PUSH 0x5d32c1                       ; 0040e991
    PUSH 0x7c3420                       ; 0040e996
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0040e99b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040e9a0
    RET                                 ; 0040e9a3

