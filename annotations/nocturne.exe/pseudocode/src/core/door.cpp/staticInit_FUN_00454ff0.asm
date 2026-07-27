; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_staticInit_FUN_00454ff0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CDoor_0057d002
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 00454ff0
        ;   Label: core_door.cpp_staticInit_FUN_00454ff0
    PUSH 0xb                            ; 00454ff5
    PUSH 0x5ae690                       ; 00454ff7
    PUSH 0x455020                       ; 00454ffc
    PUSH 0x57d002                       ; 00455001 | = "CDoor"
    PUSH 0x1af4e9c                      ; 00455006
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0045500b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00455010
    RET                                 ; 00455013

