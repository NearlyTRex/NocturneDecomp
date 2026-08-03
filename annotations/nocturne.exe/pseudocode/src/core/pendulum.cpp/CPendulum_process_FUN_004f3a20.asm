; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_CPendulum_process_FUN_004f3a20(CPendulum *this_ptr,float delta_time)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   double DOUBLE_0058d080 = -1
;   double DOUBLE_0058d088 = 0.100000000000000
;   undefined4 DAT_005b7650
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 g_CEnemyActorType_01bcdebc.name_hash
;   undefined4 g_CHeroActorType_01cae0ec.name_hash
;   CDemonSet g_CDemonSet_01e57284
;   undefined4 g_CDemonSet_01e57284.character_count
;   undefined4 g_CDemonSet_01e57284.characters[0]
;   undefined4 g_CDemonSet_01e57284.characters[1]
;   undefined4 g_CDemonSet_01e57284.characters[2]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_004f2e60
;   core_pendulum.cpp_CPendulum_updateSwing_FUN_004f3430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3a20
        ;   Label: core_pendulum.cpp_CPendulum_process_FUN_004f3a20
    PUSH ESI                            ; 004f3a21
    PUSH EDI                            ; 004f3a22
    PUSH EBP                            ; 004f3a23
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f3a24
    CMP dword ptr [ESI + 0x394],0x0     ; 004f3a28
    JZ 0x004f3af4                       ; 004f3a2f
        ;   XREF to: 004f3af4 (CONDITIONAL_JUMP)  ; LAB_004f3af4
    LEA EAX,[ESI + 0x330]               ; 004f3a35
        ;   Label: LAB_004f3a35
    PUSH EAX                            ; 004f3a3b
    MOV EBX,dword ptr [0x005b7650]      ; 004f3a3c | DAT_005b7650
    PUSH EBX                            ; 004f3a42
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004f3a43
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004f3a48
    TEST EAX,EAX                        ; 004f3a4b
    JZ 0x004f3a6f                       ; 004f3a4d
        ;   XREF to: 004f3a6f (CONDITIONAL_JUMP)  ; LAB_004f3a6f
    CMP dword ptr [ESI + 0x428],0x3f800000 ; 004f3a4f
    JZ 0x004f3a6f                       ; 004f3a59
        ;   XREF to: 004f3a6f (CONDITIONAL_JUMP)  ; LAB_004f3a6f
    MOV dword ptr [ESI + 0x42c],0x0     ; 004f3a5b
    MOV dword ptr [ESI + 0x428],0x3f800000 ; 004f3a65
    PUSH dword ptr [ESP + 0x18]         ; 004f3a6f
        ;   Label: LAB_004f3a6f
    PUSH ESI                            ; 004f3a73
    CALL core_pendulum.cpp_CPendulum_updateSwing_FUN_004f3430 ; 004f3a74
        ;   XREF to: 004f3430 (UNCONDITIONAL_CALL)  ; void core_pendulum.cpp_CPendulum_updateSwing_FUN_004f3430(CPendulum * this_ptr, float delta_time)
    FLD float ptr [ESI + 0x428]         ; 004f3a79
    FMUL double ptr [0x0058d080]        ; 004f3a7f | DOUBLE_0058d080
    FMUL float ptr [ESI + 0x42c]        ; 004f3a85
    FLD1                                ; 004f3a8b
    FLDL2E                              ; 004f3a8d
    FMUL ST2                            ; 004f3a8f
    FST ST2                             ; 004f3a91
    FPREM                               ; 004f3a93
    F2XM1                               ; 004f3a95
    FADDP                               ; 004f3a97
    FSCALE                              ; 004f3a99
    FSTP ST1                            ; 004f3a9b
    ADD ESP,0x8                         ; 004f3a9d
    FCOMP double ptr [0x0058d088]       ; 004f3aa0 | DOUBLE_0058d088
    FNSTSW AX                           ; 004f3aa6
    SAHF                                ; 004f3aa8
    JBE 0x004f3b77                      ; 004f3aa9
        ;   XREF to: 004f3b77 (CONDITIONAL_JUMP)  ; LAB_004f3b77
    MOV EBP,dword ptr [ESI + 0x420]     ; 004f3aaf
    MOV dword ptr [ESI + 0x438],0x0     ; 004f3ab5
    TEST EBP,EBP                        ; 004f3abf
    JZ 0x004f3b1d                       ; 004f3ac1
        ;   XREF to: 004f3b1d (CONDITIONAL_JUMP)  ; LAB_004f3b1d
    XOR EDI,EDI                         ; 004f3ac3
        ;   Label: LAB_004f3ac3
    XOR EBP,EBP                         ; 004f3ac5
    MOV EAX,[0x005be368]                ; 004f3ac7 | g_CDemonSet_PTR_005be368 | g_CDemonSet_01e57284
        ;   Label: LAB_004f3ac7
    CMP EBP,dword ptr [EAX + 0x14ecb0]  ; 004f3acc | g_CDemonSet_01e57284.character_count
    JGE 0x004f3b26                      ; 004f3ad2
        ;   XREF to: 004f3b26 (CONDITIONAL_JUMP)  ; LAB_004f3b26
    MOV ECX,dword ptr [ESI + 0x420]     ; 004f3ad4
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14ecb4] ; 004f3ada | g_CDemonSet_01e57284.characters[0] | g_CDemonSet_01e57284.characters[1] | g_CDemonSet_01e57284.characters[2]
    TEST ECX,ECX                        ; 004f3ae1
    JNZ 0x004f3b2b                      ; 004f3ae3
        ;   XREF to: 004f3b2b (CONDITIONAL_JUMP)  ; LAB_004f3b2b
    CMP dword ptr [ESI + 0x424],0x0     ; 004f3ae5
        ;   Label: LAB_004f3ae5
    JNZ 0x004f3b4d                      ; 004f3aec
        ;   XREF to: 004f3b4d (CONDITIONAL_JUMP)  ; LAB_004f3b4d
    INC EBP                             ; 004f3aee
        ;   Label: LAB_004f3aee
    ADD EDI,0x4                         ; 004f3aef
    JMP 0x004f3ac7                      ; 004f3af2
        ;   XREF to: 004f3ac7 (UNCONDITIONAL_JUMP)  ; LAB_004f3ac7
    LEA EAX,[ESI + 0x2cc]               ; 004f3af4
        ;   Label: LAB_004f3af4
    PUSH EAX                            ; 004f3afa
    MOV ECX,dword ptr [0x005b7650]      ; 004f3afb | DAT_005b7650
    PUSH ECX                            ; 004f3b01
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 004f3b02
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004f3b07
    TEST EAX,EAX                        ; 004f3b0a
    JZ 0x004f3b26                       ; 004f3b0c
        ;   XREF to: 004f3b26 (CONDITIONAL_JUMP)  ; LAB_004f3b26
    MOV dword ptr [ESI + 0x394],0x1     ; 004f3b0e
    JMP 0x004f3a35                      ; 004f3b18
        ;   XREF to: 004f3a35 (UNCONDITIONAL_JUMP)  ; LAB_004f3a35
    CMP dword ptr [ESI + 0x424],0x0     ; 004f3b1d
        ;   Label: LAB_004f3b1d
    JNZ 0x004f3ac3                      ; 004f3b24
        ;   XREF to: 004f3ac3 (CONDITIONAL_JUMP)  ; LAB_004f3ac3
    POP EBP                             ; 004f3b26
        ;   Label: LAB_004f3b26
    POP EDI                             ; 004f3b27
    POP ESI                             ; 004f3b28
    POP EBX                             ; 004f3b29
    RET                                 ; 004f3b2a
    MOV EAX,[0x01cae124]                ; 004f3b2b | g_CHeroActorType_01cae0ec.name_hash
        ;   Label: LAB_004f3b2b
    PUSH EAX                            ; 004f3b30
    PUSH EBX                            ; 004f3b31
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004f3b32
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f3b37
    TEST EAX,EAX                        ; 004f3b3a
    JZ 0x004f3ae5                       ; 004f3b3c
        ;   XREF to: 004f3ae5 (CONDITIONAL_JUMP)  ; LAB_004f3ae5
    PUSH 0x0                            ; 004f3b3e
    PUSH EAX                            ; 004f3b40
    PUSH EBX                            ; 004f3b41
    PUSH ESI                            ; 004f3b42
    CALL core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_004f2e60 ; 004f3b43
        ;   XREF to: 004f2e60 (UNCONDITIONAL_CALL)  ; void core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_004f2e60(CPendulum * this_ptr, CDemonActor * actor, CDemonActor * left_hand_actor, CDemonActor * right_hand_actor)
    ADD ESP,0x10                        ; 004f3b48
    JMP 0x004f3aee                      ; 004f3b4b
        ;   XREF to: 004f3aee (UNCONDITIONAL_JUMP)  ; LAB_004f3aee
    MOV ECX,dword ptr [0x01bcdef4]      ; 004f3b4d | g_CEnemyActorType_01bcdebc.name_hash
        ;   Label: LAB_004f3b4d
    PUSH ECX                            ; 004f3b53
    PUSH EBX                            ; 004f3b54
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004f3b55
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f3b5a
    TEST EAX,EAX                        ; 004f3b5d
    JZ 0x004f3aee                       ; 004f3b5f
        ;   XREF to: 004f3aee (CONDITIONAL_JUMP)  ; LAB_004f3aee
    PUSH EAX                            ; 004f3b61
    PUSH 0x0                            ; 004f3b62
    PUSH EBX                            ; 004f3b64
    PUSH ESI                            ; 004f3b65
    CALL core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_004f2e60 ; 004f3b66
        ;   XREF to: 004f2e60 (UNCONDITIONAL_CALL)  ; void core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_004f2e60(CPendulum * this_ptr, CDemonActor * actor, CDemonActor * left_hand_actor, CDemonActor * right_hand_actor)
    ADD ESP,0x10                        ; 004f3b6b
    INC EBP                             ; 004f3b6e
    ADD EDI,0x4                         ; 004f3b6f
    JMP 0x004f3ac7                      ; 004f3b72
        ;   XREF to: 004f3ac7 (UNCONDITIONAL_JUMP)  ; LAB_004f3ac7
    MOV dword ptr [ESI + 0x438],0x1     ; 004f3b77
        ;   Label: LAB_004f3b77
    POP EBP                             ; 004f3b81
    POP EDI                             ; 004f3b82
    POP ESI                             ; 004f3b83
    POP EBX                             ; 004f3b84
    RET                                 ; 004f3b85

