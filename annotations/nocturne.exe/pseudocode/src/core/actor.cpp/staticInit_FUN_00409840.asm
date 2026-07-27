; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_staticInit_FUN_00409840(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CDemonActor_00577571
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00409840
        ;   Label: core_actor.cpp_staticInit_FUN_00409840
    PUSH 0x7                            ; 00409842
    PUSH 0x5acc88                       ; 00409844
    PUSH 0x0                            ; 00409849
    PUSH 0x577571                       ; 0040984b | = "CDemonActor"
    PUSH 0x763e48                       ; 00409850
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00409855
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040985a
    RET                                 ; 0040985d

