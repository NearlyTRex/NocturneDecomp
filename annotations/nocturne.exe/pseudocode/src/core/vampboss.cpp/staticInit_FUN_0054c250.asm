; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_staticInit_FUN_0054c250(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CVampireBoss_0059701d
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 0054c250
        ;   Label: core_vampboss.cpp_staticInit_FUN_0054c250
    PUSH 0x4                            ; 0054c255
    PUSH 0x5c1188                       ; 0054c257
    PUSH 0x54c280                       ; 0054c25c
    PUSH 0x59701d                       ; 0054c261 | = "CVampireBoss"
    PUSH 0x2dd1148                      ; 0054c266
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0054c26b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0054c270
    RET                                 ; 0054c273

