; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_stone_cpp_staticInit_FUN_005baca0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CTempleStone_0065313b
;   int g_CTempleStoneClassVersion = 0x1
;   CDemonActorType g_CBoxActorClassInfo
;   CDemonActorType g_CTempleStoneClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x8229b0                       ; 005baca0 | g_CBoxActorClassInfo
        ;   Label: core_stone.cpp_staticInit_FUN_005baca0
    PUSH 0x1                            ; 005baca5
    PUSH 0x6841a4                       ; 005baca7 | g_CTempleStoneClassVersion
    PUSH 0x5bacd0                       ; 005bacac
    PUSH 0x65313b                       ; 005bacb1 | = "CTempleStone"
    PUSH 0x3f6ba60                      ; 005bacb6 | g_CTempleStoneClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005bacbb
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005bacc0
    RET                                 ; 005bacc3

