; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_staticInit_FUN_0054f8c0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CCryptVessel_0059743b
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 0054f8c0
        ;   Label: core_vessel.cpp_staticInit_FUN_0054f8c0
    PUSH 0x4                            ; 0054f8c5
    PUSH 0x5c11c4                       ; 0054f8c7
    PUSH 0x54f8f0                       ; 0054f8cc
    PUSH 0x59743b                       ; 0054f8d1 | = "CCryptVessel"
    PUSH 0x2dd11cc                      ; 0054f8d6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0054f8db
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0054f8e0
    RET                                 ; 0054f8e3

