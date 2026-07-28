; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_lightgun_cpp_CLightGun_isVampireType_FUN_004c6ef0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CDraculaBride_005879ef
;   TerminatedCString s_CBatman_005879fd
;   TerminatedCString s_CBatCreature_00587a05
;   TerminatedCString s_CBride_00587a12
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6ef0
        ;   Label: core_lightgun.cpp_CLightGun_isVampireType_FUN_004c6ef0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c6ef1
    PUSH 0x5879ef                       ; 004c6ef5 | = "CDraculaBride"
    PUSH EBX                            ; 004c6efa
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c6efb
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004c6f00
    TEST EAX,EAX                        ; 004c6f03
    JZ 0x004c6f0e                       ; 004c6f05
        ;   XREF to: 004c6f0e (CONDITIONAL_JUMP)  ; LAB_004c6f0e
    MOV EAX,0x1                         ; 004c6f07
        ;   Label: LAB_004c6f07
    POP EBX                             ; 004c6f0c
    RET                                 ; 004c6f0d
    PUSH 0x5879fd                       ; 004c6f0e | = "CBatman"
        ;   Label: LAB_004c6f0e
    PUSH EBX                            ; 004c6f13
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c6f14
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004c6f19
    TEST EAX,EAX                        ; 004c6f1c
    JNZ 0x004c6f07                      ; 004c6f1e
        ;   XREF to: 004c6f07 (CONDITIONAL_JUMP)  ; LAB_004c6f07
    PUSH 0x587a05                       ; 004c6f20 | = "CBatCreature"
    PUSH EBX                            ; 004c6f25
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c6f26
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004c6f2b
    TEST EAX,EAX                        ; 004c6f2e
    JNZ 0x004c6f07                      ; 004c6f30
        ;   XREF to: 004c6f07 (CONDITIONAL_JUMP)  ; LAB_004c6f07
    PUSH 0x587a12                       ; 004c6f32 | = "CBride"
    PUSH EBX                            ; 004c6f37
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c6f38
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004c6f3d
    TEST EAX,EAX                        ; 004c6f40
    JNZ 0x004c6f07                      ; 004c6f42
        ;   XREF to: 004c6f07 (CONDITIONAL_JUMP)  ; LAB_004c6f07
    POP EBX                             ; 004c6f44
    RET                                 ; 004c6f45

