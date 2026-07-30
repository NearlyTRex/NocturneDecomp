; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_filmreel_cpp_CFilmReel_canPickup_FUN_00481d30(undefined4 param_1,CDemonActor *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_00580fab
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH 0x580fab                       ; 00481d30 | = "CHero"
        ;   Label: core_filmreel.cpp_CFilmReel_canPickup_FUN_00481d30
    MOV EDX,dword ptr [ESP + 0xc]       ; 00481d35
    PUSH EDX                            ; 00481d39
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 00481d3a
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00481d3f
    TEST EAX,EAX                        ; 00481d42
    JZ 0x00481d4b                       ; 00481d44
        ;   XREF to: 00481d4b (CONDITIONAL_JUMP)  ; LAB_00481d4b
    MOV EAX,0x2                         ; 00481d46
    RET                                 ; 00481d4b
        ;   Label: LAB_00481d4b

