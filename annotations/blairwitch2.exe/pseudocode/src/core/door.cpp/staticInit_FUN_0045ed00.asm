; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_staticInit_FUN_0045ed00(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 0045ed00
        ;   Label: core_door.cpp_staticInit_FUN_0045ed00
    PUSH 0xd                            ; 0045ed05
    PUSH 0x60b214                       ; 0045ed07
    PUSH 0x45ed30                       ; 0045ed0c
    PUSH 0x5d0950                       ; 0045ed11
    PUSH 0x1b4d334                      ; 0045ed16
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0045ed1b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0045ed20
    RET                                 ; 0045ed23

