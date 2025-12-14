; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_beast.cpp_staticInit_FUN_004181b0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBeast_00615a55
;   int g_CBeastClassVersion = 0x1
;   CDemonActorType g_CBeastClassInfo
;   CDemonActorType g_CEnemyClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x2cf2bb8                      ; 004181b0 | g_CEnemyClassInfo
        ;   Label: core_beast.cpp_staticInit_FUN_004181b0
    PUSH 0x1                            ; 004181b5
    PUSH 0x66e504                       ; 004181b7 | g_CBeastClassVersion
    PUSH 0x4181e0                       ; 004181bc
    PUSH 0x615a55                       ; 004181c1 | = "CBeast"
    PUSH 0x822860                       ; 004181c6 | g_CBeastClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004181cb
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004181d0
    RET                                 ; 004181d3

