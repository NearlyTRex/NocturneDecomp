; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_holycrss_cpp_staticInit_FUN_004d5070(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 004d5070
        ;   Label: core_holycrss.cpp_staticInit_FUN_004d5070
    PUSH 0x1                            ; 004d5075
    PUSH 0x600008                       ; 004d5077
    PUSH 0x4d50a0                       ; 004d507c
    PUSH 0x5c5193                       ; 004d5081
    PUSH 0x1d5bab0                      ; 004d5086
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004d508b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d5090
    RET                                 ; 004d5093

