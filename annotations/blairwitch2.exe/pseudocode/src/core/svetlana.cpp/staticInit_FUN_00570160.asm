; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_svetlana_cpp_staticInit_FUN_00570160(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1cedf18                      ; 00570160
        ;   Label: core_svetlana.cpp_staticInit_FUN_00570160
    PUSH 0x1                            ; 00570165
    PUSH 0x61e310                       ; 00570167
    PUSH 0x570190                       ; 0057016c
    PUSH 0x5ec16b                       ; 00570171
    PUSH 0x264bf84                      ; 00570176
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0057017b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00570180
    RET                                 ; 00570183

