; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cow_cpp_staticInit_FUN_00448340(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 00448340
        ;   Label: core_cow.cpp_staticInit_FUN_00448340
    PUSH 0x2                            ; 00448345
    PUSH 0x61118c                       ; 00448347
    PUSH 0x448370                       ; 0044834c
    PUSH 0x5d71ee                       ; 00448351
    PUSH 0x7dc664                       ; 00448356
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0044835b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00448360
    RET                                 ; 00448363

