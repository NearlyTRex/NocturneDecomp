; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_lightgun_cpp_FUN_004e2ae0(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2ae0
        ;   Label: core_lightgun.cpp_FUN_004e2ae0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e2ae1
    PUSH 0x5dc005                       ; 004e2ae5
    PUSH EBX                            ; 004e2aea
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e2aeb
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e2af0
    TEST EAX,EAX                        ; 004e2af3
    JZ 0x004e2afe                       ; 004e2af5
        ;   XREF to: 004e2afe (CONDITIONAL_JUMP)  ; LAB_004e2afe
    MOV EAX,0x1                         ; 004e2af7
        ;   Label: LAB_004e2af7
    POP EBX                             ; 004e2afc
    RET                                 ; 004e2afd
    PUSH 0x5dc013                       ; 004e2afe
        ;   Label: LAB_004e2afe
    PUSH EBX                            ; 004e2b03
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e2b04
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e2b09
    TEST EAX,EAX                        ; 004e2b0c
    JNZ 0x004e2af7                      ; 004e2b0e
        ;   XREF to: 004e2af7 (CONDITIONAL_JUMP)  ; LAB_004e2af7
    PUSH 0x5dc01b                       ; 004e2b10
    PUSH EBX                            ; 004e2b15
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e2b16
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e2b1b
    TEST EAX,EAX                        ; 004e2b1e
    JNZ 0x004e2af7                      ; 004e2b20
        ;   XREF to: 004e2af7 (CONDITIONAL_JUMP)  ; LAB_004e2af7
    PUSH 0x5dc028                       ; 004e2b22
    PUSH EBX                            ; 004e2b27
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e2b28
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e2b2d
    TEST EAX,EAX                        ; 004e2b30
    JNZ 0x004e2af7                      ; 004e2b32
        ;   XREF to: 004e2af7 (CONDITIONAL_JUMP)  ; LAB_004e2af7
    PUSH 0x5dc02f                       ; 004e2b34
    PUSH EBX                            ; 004e2b39
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e2b3a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e2b3f
    TEST EAX,EAX                        ; 004e2b42
    JNZ 0x004e2af7                      ; 004e2b44
        ;   XREF to: 004e2af7 (CONDITIONAL_JUMP)  ; LAB_004e2af7
    POP EBX                             ; 004e2b46
    RET                                 ; 004e2b47

