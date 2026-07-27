; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_staticInit_FUN_004abaf0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CGlass_00584eb8
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 004abaf0
        ;   Label: core_glass.cpp_staticInit_FUN_004abaf0
    PUSH 0x6                            ; 004abaf5
    PUSH 0x5b9668                       ; 004abaf7
    PUSH 0x4abb20                       ; 004abafc
    PUSH 0x584eb8                       ; 004abb01 | = "CGlass"
    PUSH 0x1c78c40                      ; 004abb06
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004abb0b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004abb10
    RET                                 ; 004abb13

