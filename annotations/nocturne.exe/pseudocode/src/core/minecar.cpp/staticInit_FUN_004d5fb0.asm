; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_minecar_cpp_staticInit_FUN_004d5fb0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CMineCar_005895e1
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1e42894                      ; 004d5fb0
        ;   Label: core_minecar.cpp_staticInit_FUN_004d5fb0
    PUSH 0x1                            ; 004d5fb5
    PUSH 0x5baf5c                       ; 004d5fb7
    PUSH 0x4d5fe0                       ; 004d5fbc
    PUSH 0x5895e1                       ; 004d5fc1 | = "CMineCar"
    PUSH 0x1cc90e4                      ; 004d5fc6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004d5fcb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d5fd0
    RET                                 ; 004d5fd3

