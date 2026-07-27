; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hiram_cpp_staticInit_FUN_004b65b0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CHiram_005859c4
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1d46820                      ; 004b65b0
        ;   Label: core_hiram.cpp_staticInit_FUN_004b65b0
    PUSH 0x1                            ; 004b65b5
    PUSH 0x5ba960                       ; 004b65b7
    PUSH 0x4b65e0                       ; 004b65bc
    PUSH 0x5859c4                       ; 004b65c1 | = "CHiram"
    PUSH 0x1cae164                      ; 004b65c6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004b65cb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004b65d0
    RET                                 ; 004b65d3

