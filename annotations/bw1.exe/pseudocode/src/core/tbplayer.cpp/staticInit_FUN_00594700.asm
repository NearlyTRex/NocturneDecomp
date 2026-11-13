; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tbplayer_cpp_staticInit_FUN_00594700(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1d8136c                      ; 00594700
        ;   Label: core_tbplayer.cpp_staticInit_FUN_00594700
    PUSH 0x1                            ; 00594705
    PUSH 0x625990                       ; 00594707
    PUSH 0x594750                       ; 0059470c
    PUSH 0x5f7642                       ; 00594711
    PUSH 0x2c83790                      ; 00594716
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0059471b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00594720
    PUSH 0x1d8136c                      ; 00594723
    PUSH 0x1                            ; 00594728
    PUSH 0x625994                       ; 0059472a
    PUSH 0x5949d0                       ; 0059472f
    PUSH 0x5f764e                       ; 00594734
    PUSH 0x2c837cc                      ; 00594739
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0059473e
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00594743
    RET                                 ; 00594746

