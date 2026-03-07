; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_lightgun_cpp_CLightGun_isVampireType_FUN_005059c0(CLightGun *this_ptr)
;
; Parameters:
; CLightGun *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_CDraculaBride_0063145d
;   TerminatedCString s_CBatman_0063146b
;   TerminatedCString s_CBatCreature_00631473
;   TerminatedCString s_CBride_00631480
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005059c0
        ;   Label: core_lightgun.cpp_CLightGun_isVampireType_FUN_005059c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005059c1
    PUSH 0x63145d                       ; 005059c5 | = "CDraculaBride"
    PUSH EBX                            ; 005059ca
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005059cb
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005059d0
    TEST EAX,EAX                        ; 005059d3
    JZ 0x005059de                       ; 005059d5
        ;   XREF to: 005059de (CONDITIONAL_JUMP)  ; LAB_005059de
    MOV EAX,0x1                         ; 005059d7
        ;   Label: LAB_005059d7
    POP EBX                             ; 005059dc
    RET                                 ; 005059dd
    PUSH 0x63146b                       ; 005059de | = "CBatman"
        ;   Label: LAB_005059de
    PUSH EBX                            ; 005059e3
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005059e4
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005059e9
    TEST EAX,EAX                        ; 005059ec
    JNZ 0x005059d7                      ; 005059ee
        ;   XREF to: 005059d7 (CONDITIONAL_JUMP)  ; LAB_005059d7
    PUSH 0x631473                       ; 005059f0 | = "CBatCreature"
    PUSH EBX                            ; 005059f5
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005059f6
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005059fb
    TEST EAX,EAX                        ; 005059fe
    JNZ 0x005059d7                      ; 00505a00
        ;   XREF to: 005059d7 (CONDITIONAL_JUMP)  ; LAB_005059d7
    PUSH 0x631480                       ; 00505a02 | = "CBride"
    PUSH EBX                            ; 00505a07
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00505a08
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00505a0d
    TEST EAX,EAX                        ; 00505a10
    JNZ 0x005059d7                      ; 00505a12
        ;   XREF to: 005059d7 (CONDITIONAL_JUMP)  ; LAB_005059d7
    POP EBX                             ; 00505a14
    RET                                 ; 00505a15

