; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spireagl_cpp_staticInit_FUN_00599170(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7e2cb4                       ; 00599170
        ;   Label: core_spireagl.cpp_staticInit_FUN_00599170
    PUSH 0x2                            ; 00599175
    PUSH 0x607418                       ; 00599177
    PUSH 0x5991a0                       ; 0059917c
    PUSH 0x5d98cd                       ; 00599181
    PUSH 0x2d24b98                      ; 00599186
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0059918b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00599190
    RET                                 ; 00599193

