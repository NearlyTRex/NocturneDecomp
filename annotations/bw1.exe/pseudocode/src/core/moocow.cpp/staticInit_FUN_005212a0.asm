; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moocow_cpp_staticInit_FUN_005212a0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c6344                       ; 005212a0
        ;   Label: core_moocow.cpp_staticInit_FUN_005212a0
    PUSH 0x1                            ; 005212a5
    PUSH 0x61f7ec                       ; 005212a7
    PUSH 0x5212d0                       ; 005212ac
    PUSH 0x5ea32a                       ; 005212b1
    PUSH 0x1d33ca8                      ; 005212b6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 005212bb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005212c0
    RET                                 ; 005212c3

