; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_staticInit_FUN_004a1000(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2661f00                      ; 004a1000
        ;   Label: core_flashlit.cpp_staticInit_FUN_004a1000
    PUSH 0x1                            ; 004a1005
    PUSH 0x615ef8                       ; 004a1007
    PUSH 0x4a1030                       ; 004a100c
    PUSH 0x5d59b8                       ; 004a1011
    PUSH 0x1cab738                      ; 004a1016
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004a101b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004a1020
    RET                                 ; 004a1023

