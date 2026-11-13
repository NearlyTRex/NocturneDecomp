; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_waypoint_cpp_staticInit_FUN_00579100(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2cfd85c                      ; 00579100
        ;   Label: core_waypoint.cpp_staticInit_FUN_00579100
    PUSH 0x2                            ; 00579105
    PUSH 0x6071c4                       ; 00579107
    PUSH 0x579240                       ; 0057910c
    PUSH 0x5d7364                       ; 00579111
    PUSH 0x2d0bca0                      ; 00579116
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0057911b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00579120
    RET                                 ; 00579123

