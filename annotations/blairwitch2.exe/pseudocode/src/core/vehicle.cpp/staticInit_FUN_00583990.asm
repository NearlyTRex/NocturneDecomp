; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vehicle_cpp_staticInit_FUN_00583990(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 00583990
        ;   Label: core_vehicle.cpp_staticInit_FUN_00583990
    PUSH 0x3                            ; 00583995
    PUSH 0x61e4d4                       ; 00583997
    PUSH 0x5839c0                       ; 0058399c
    PUSH 0x5edc1f                       ; 005839a1
    PUSH 0x2653718                      ; 005839a6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005839ab
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005839b0
    RET                                 ; 005839b3

