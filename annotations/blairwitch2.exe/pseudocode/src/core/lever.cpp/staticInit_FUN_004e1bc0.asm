; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lever_cpp_staticInit_FUN_004e1bc0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004e1bc0
        ;   Label: core_lever.cpp_staticInit_FUN_004e1bc0
    PUSH 0x8                            ; 004e1bc5
    PUSH 0x617e2c                       ; 004e1bc7
    PUSH 0x4e1bf0                       ; 004e1bcc
    PUSH 0x5dbf02                       ; 004e1bd1
    PUSH 0x1d034c8                      ; 004e1bd6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004e1bdb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004e1be0
    RET                                 ; 004e1be3

