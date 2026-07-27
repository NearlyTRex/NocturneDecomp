; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stone_cpp_staticInit_FUN_00534ca0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CTempleStone_005951aa
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x764800                       ; 00534ca0
        ;   Label: core_stone.cpp_staticInit_FUN_00534ca0
    PUSH 0x1                            ; 00534ca5
    PUSH 0x5c0fd8                       ; 00534ca7
    PUSH 0x534cd0                       ; 00534cac
    PUSH 0x5951aa                       ; 00534cb1 | = "CTempleStone"
    PUSH 0x2dc9ee4                      ; 00534cb6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00534cbb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00534cc0
    RET                                 ; 00534cc3

