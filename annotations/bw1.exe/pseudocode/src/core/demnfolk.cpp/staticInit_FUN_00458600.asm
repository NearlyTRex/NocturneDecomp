; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_demnfolk_cpp_staticInit_FUN_00458600(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 00458600
        ;   Label: core_demnfolk.cpp_staticInit_FUN_00458600
    PUSH 0xc                            ; 00458605
    PUSH 0x6112b0                       ; 00458607
    PUSH 0x4589e0                       ; 0045860c
    PUSH 0x5d7d03                       ; 00458611
    PUSH 0x152c2e0                      ; 00458616
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0045861b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00458620
    RET                                 ; 00458623

