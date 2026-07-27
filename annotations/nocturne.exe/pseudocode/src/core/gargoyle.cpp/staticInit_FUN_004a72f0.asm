; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gargoyle_cpp_staticInit_FUN_004a72f0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CGargoyle_00584820
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 004a72f0
        ;   Label: core_gargoyle.cpp_staticInit_FUN_004a72f0
    PUSH 0x2                            ; 004a72f5
    PUSH 0x5b9624                       ; 004a72f7
    PUSH 0x4a7320                       ; 004a72fc
    PUSH 0x584820                       ; 004a7301 | = "CGargoyle"
    PUSH 0x1c78b48                      ; 004a7306
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004a730b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004a7310
    RET                                 ; 004a7313

