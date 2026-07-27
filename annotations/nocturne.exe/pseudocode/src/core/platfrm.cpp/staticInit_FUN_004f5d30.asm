; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_staticInit_FUN_004f5d30(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CPlatform_0058d755
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 004f5d30
        ;   Label: core_platfrm.cpp_staticInit_FUN_004f5d30
    PUSH 0xb                            ; 004f5d35
    PUSH 0x5be19c                       ; 004f5d37
    PUSH 0x4f5d60                       ; 004f5d3c
    PUSH 0x58d755                       ; 004f5d41 | = "CPlatform"
    PUSH 0x1e42894                      ; 004f5d46
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004f5d4b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004f5d50
    RET                                 ; 004f5d53

