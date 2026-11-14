; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spawner_cpp_staticInit_FUN_00563840(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 00563840
        ;   Label: core_spawner.cpp_staticInit_FUN_00563840
    PUSH 0x5                            ; 00563845
    PUSH 0x606710                       ; 00563847
    PUSH 0x563870                       ; 0056384c
    PUSH 0x5d549f                       ; 00563851
    PUSH 0x2cf5f90                      ; 00563856
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0056385b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00563860
    RET                                 ; 00563863

