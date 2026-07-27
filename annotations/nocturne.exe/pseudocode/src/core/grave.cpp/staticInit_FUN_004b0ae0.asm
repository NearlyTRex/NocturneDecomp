; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grave_cpp_staticInit_FUN_004b0ae0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CGrave_005851f6
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 004b0ae0
        ;   Label: core_grave.cpp_staticInit_FUN_004b0ae0
    PUSH 0x4                            ; 004b0ae5
    PUSH 0x5ba8c8                       ; 004b0ae7
    PUSH 0x4b0b10                       ; 004b0aec
    PUSH 0x5851f6                       ; 004b0af1 | = "CGrave"
    PUSH 0x1cadf44                      ; 004b0af6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004b0afb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004b0b00
    RET                                 ; 004b0b03

