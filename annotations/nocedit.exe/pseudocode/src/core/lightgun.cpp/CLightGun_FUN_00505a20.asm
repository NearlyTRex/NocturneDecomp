; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_lightgun_cpp_CLightGun_FUN_00505a20(CLightGun *this_ptr)
;
; Parameters:
; CLightGun *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_CGhoul_00631487
;   TerminatedCString s_CTVBat_0063148e
;   TerminatedCString s_CBatCreature_00631495
;   TerminatedCString s_CWerewolf_006314a2
;   TerminatedCString s_CSvetlana_006314ac
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505a20
        ;   Label: core_lightgun.cpp_CLightGun_FUN_00505a20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00505a21
    PUSH EBX                            ; 00505a25
    MOV EAX,dword ptr [EBX + 0x154]     ; 00505a26
    CALL dword ptr [EAX + 0xf4]         ; 00505a2c
    ADD ESP,0x4                         ; 00505a32
    TEST EAX,EAX                        ; 00505a35
    JZ 0x00505a3d                       ; 00505a37
        ;   XREF to: 00505a3d (CONDITIONAL_JUMP)  ; LAB_00505a3d
    XOR EAX,EAX                         ; 00505a39
    POP EBX                             ; 00505a3b
        ;   Label: LAB_00505a3b
    RET                                 ; 00505a3c
    PUSH 0x631487                       ; 00505a3d | = "CGhoul"
        ;   Label: LAB_00505a3d
    PUSH EBX                            ; 00505a42
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00505a43
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00505a48
    TEST EAX,EAX                        ; 00505a4b
    JZ 0x00505a56                       ; 00505a4d
        ;   XREF to: 00505a56 (CONDITIONAL_JUMP)  ; LAB_00505a56
    MOV EAX,0x1                         ; 00505a4f
    POP EBX                             ; 00505a54
    RET                                 ; 00505a55
    PUSH 0x63148e                       ; 00505a56 | = "CTVBat"
        ;   Label: LAB_00505a56
    PUSH EBX                            ; 00505a5b
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00505a5c
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00505a61
    TEST EAX,EAX                        ; 00505a64
    JZ 0x00505a6f                       ; 00505a66
        ;   XREF to: 00505a6f (CONDITIONAL_JUMP)  ; LAB_00505a6f
    MOV EAX,0x1                         ; 00505a68
    POP EBX                             ; 00505a6d
    RET                                 ; 00505a6e
    PUSH 0x631495                       ; 00505a6f | = "CBatCreature"
        ;   Label: LAB_00505a6f
    PUSH EBX                            ; 00505a74
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00505a75
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00505a7a
    TEST EAX,EAX                        ; 00505a7d
    JZ 0x00505a88                       ; 00505a7f
        ;   XREF to: 00505a88 (CONDITIONAL_JUMP)  ; LAB_00505a88
    MOV EAX,0x1                         ; 00505a81
    POP EBX                             ; 00505a86
    RET                                 ; 00505a87
    PUSH 0x6314a2                       ; 00505a88 | = "CWerewolf"
        ;   Label: LAB_00505a88
    PUSH EBX                            ; 00505a8d
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00505a8e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00505a93
    TEST EAX,EAX                        ; 00505a96
    JZ 0x00505aa1                       ; 00505a98
        ;   XREF to: 00505aa1 (CONDITIONAL_JUMP)  ; LAB_00505aa1
    MOV EAX,0x1                         ; 00505a9a
    POP EBX                             ; 00505a9f
    RET                                 ; 00505aa0
    PUSH 0x6314ac                       ; 00505aa1 | = "CSvetlana"
        ;   Label: LAB_00505aa1
    PUSH EBX                            ; 00505aa6
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00505aa7
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00505aac
    TEST EAX,EAX                        ; 00505aaf
    JZ 0x00505a3b                       ; 00505ab1
        ;   XREF to: 00505a3b (CONDITIONAL_JUMP)  ; LAB_00505a3b
    MOV EAX,0x1                         ; 00505ab3
    POP EBX                             ; 00505ab8
    RET                                 ; 00505ab9

