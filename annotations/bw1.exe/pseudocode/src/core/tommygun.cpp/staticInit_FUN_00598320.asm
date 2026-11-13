; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tommygun_cpp_staticInit_FUN_00598320(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x2c99738                      ; 00598320
        ;   Label: core_tommygun.cpp_staticInit_FUN_00598320
    PUSH 0x1                            ; 00598325
    PUSH 0x625a30                       ; 00598327
    PUSH 0x598350                       ; 0059832c
    PUSH 0x5f7ed0                       ; 00598331
    PUSH 0x2c8ad0c                      ; 00598336
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0059833b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00598340
    RET                                 ; 00598343

