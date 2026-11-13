; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_succubus_cpp_staticInit_FUN_00591eb0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 00591eb0
        ;   Label: core_succubus.cpp_staticInit_FUN_00591eb0
    PUSH 0x1                            ; 00591eb5
    PUSH 0x625948                       ; 00591eb7
    PUSH 0x591ee0                       ; 00591ebc
    PUSH 0x5f71fe                       ; 00591ec1
    PUSH 0x2c836cc                      ; 00591ec6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00591ecb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00591ed0
    RET                                 ; 00591ed3

