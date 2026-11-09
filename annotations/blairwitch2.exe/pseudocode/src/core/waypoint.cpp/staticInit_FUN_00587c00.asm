; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_waypoint_cpp_staticInit_FUN_00587c00(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x26535f0                      ; 00587c00
        ;   Label: core_waypoint.cpp_staticInit_FUN_00587c00
    PUSH 0x2                            ; 00587c05
    PUSH 0x61e8c8                       ; 00587c07
    PUSH 0x587d40                       ; 00587c0c
    PUSH 0x5ee08f                       ; 00587c11
    PUSH 0x2661aa4                      ; 00587c16
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 00587c1b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00587c20
    RET                                 ; 00587c23

