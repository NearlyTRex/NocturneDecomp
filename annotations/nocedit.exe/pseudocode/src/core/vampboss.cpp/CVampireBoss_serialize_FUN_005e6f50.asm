; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_vampboss.cpp_CVampireBoss_serialize_FUN_005e6f50(CVampireBoss * this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_human_model_motion_state_00656bfb
;   TerminatedCString s_bat_model_motion_state_00656c14
;   TerminatedCString s_wayPoint0_00656c2b
;   TerminatedCString s_wayPoint1_00656c35
;   TerminatedCString s_wayPoint2_00656c3f
;   TerminatedCString s_wayPoint3_00656c49
;   TerminatedCString s_form_00656c53
;   TerminatedCString s_morphT_00656c58
;   int g_CVampireBossVersion = 0x4
;
; Called Functions:
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeMotionState_FUN_0040b9f0
;   core_enemy.cpp_CEnemy_serialize_FUN_004a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e6f50
        ;   Label: core_vampboss.cpp_CVampireBoss_serialize_FUN_005e6f50
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e6f51
    PUSH EBX                            ; 005e6f55
    CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660 ; 005e6f56 | void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
        ;   XREF to: 004a9660 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x00684464]      ; 005e6f5b | int g_CVampireBossVersion
    ADD ESP,0x4                         ; 005e6f61
    CMP EDX,0x2                         ; 005e6f64
    JGE 0x005e6fcd                      ; 005e6f67 | LAB_005e6fcd
        ;   XREF to: 005e6fcd (CONDITIONAL_JUMP)
    CMP dword ptr [0x00684464],0x3      ; 005e6f69 | int g_CVampireBossVersion
        ;   Label: LAB_005e6f69
    JL 0x005e6fc2                       ; 005e6f70 | LAB_005e6fc2
        ;   XREF to: 005e6fc2 (CONDITIONAL_JUMP)
    PUSH 0x656c2b                       ; 005e6f72 | = "wayPoint0" | s_wayPoint0_00656c2b = wayPoint0
    LEA EAX,[EBX + 0xce90c]             ; 005e6f77
    PUSH EAX                            ; 005e6f7d
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005e6f7e | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e6f83
    PUSH 0x656c35                       ; 005e6f86 | = "wayPoint1" | s_wayPoint1_00656c35 = wayPoint1
    LEA EAX,[EBX + 0xce910]             ; 005e6f8b
    PUSH EAX                            ; 005e6f91
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005e6f92 | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e6f97
    PUSH 0x656c3f                       ; 005e6f9a | = "wayPoint2" | s_wayPoint2_00656c3f = wayPoint2
    LEA EAX,[EBX + 0xce914]             ; 005e6f9f
    PUSH EAX                            ; 005e6fa5
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005e6fa6 | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e6fab
    PUSH 0x656c49                       ; 005e6fae | = "wayPoint3" | s_wayPoint3_00656c49 = wayPoint3
    LEA EAX,[EBX + 0xce918]             ; 005e6fb3
    PUSH EAX                            ; 005e6fb9
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005e6fba | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e6fbf
    CMP dword ptr [0x00684464],0x4      ; 005e6fc2 | int g_CVampireBossVersion
        ;   Label: LAB_005e6fc2
    JGE 0x005e6ffa                      ; 005e6fc9 | LAB_005e6ffa
        ;   XREF to: 005e6ffa (CONDITIONAL_JUMP)
    POP EBX                             ; 005e6fcb
    RET                                 ; 005e6fcc
    PUSH 0x656bfb                       ; 005e6fcd | = "human model motion state" | s_human_model_motion_state_00656bfb = human model motion state
        ;   Label: LAB_005e6fcd
    LEA EAX,[EBX + 0x158]               ; 005e6fd2
    PUSH EAX                            ; 005e6fd8
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 005e6fd9 | void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e6fde
    PUSH 0x656c14                       ; 005e6fe1 | = "bat model motion state" | s_bat_model_motion_state_00656c14 = bat model motion state
    LEA EAX,[EBX + 0xbebc]              ; 005e6fe6
    PUSH EAX                            ; 005e6fec
    CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0 ; 005e6fed | void core_actor.cpp_serializeMotionState_FUN_0040b9f0(CMotionController * motion_controller, char * property_name)
        ;   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e6ff2
    JMP 0x005e6f69                      ; 005e6ff5 | LAB_005e6f69
        ;   XREF to: 005e6f69 (UNCONDITIONAL_JUMP)
    PUSH 0x656c53                       ; 005e6ffa | = "form" | s_form_00656c53 = form
        ;   Label: LAB_005e6ffa
    LEA EAX,[EBX + 0xcdcc0]             ; 005e6fff
    PUSH EAX                            ; 005e7005
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005e7006 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e700b
    PUSH 0x656c58                       ; 005e700e | = "morphT" | s_morphT_00656c58 = morphT
    ADD EBX,0xce8f0                     ; 005e7013
    PUSH EBX                            ; 005e7019
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e701a | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e701f
    POP EBX                             ; 005e7022
    RET                                 ; 005e7023

