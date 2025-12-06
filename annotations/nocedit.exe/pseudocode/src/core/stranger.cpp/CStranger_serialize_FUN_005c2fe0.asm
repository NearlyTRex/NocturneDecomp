; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_stranger.cpp_CStranger_serialize_FUN_005c2fe0(CStranger * this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_objectToPickUp_00653bd4
;   TerminatedCString s_doorToOpen_00653be3
;   TerminatedCString s_leverToPull_00653bee
;   TerminatedCString s_ladderToClimb_00653bfa
;   TerminatedCString s_lhCarryObject_00653c08
;   TerminatedCString s_rhCarryObject_00653c16
;   TerminatedCString s_ladderToDescend_00653c24
;   TerminatedCString s_gunsDrawn_00653c34
;   TerminatedCString s_weapon_00653c3e
;   TerminatedCString s_actionPending_00653c45
;   TerminatedCString s_layerActionIndex_00653c53
;   TerminatedCString s_layerActionT_00653c64
;   int g_CStrangerClassVersion = 0x9
;
; Called Functions:
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_hero.cpp_CHero_serialize_FUN_004f2610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2fe0
        ;   Label: core_stranger.cpp_CStranger_serialize_FUN_005c2fe0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c2fe1
    PUSH EBX                            ; 005c2fe5
    CALL core_hero.cpp_CHero_serialize_FUN_004f2610 ; 005c2fe6 | void core_hero.cpp_CHero_serialize_FUN_004f2610(CHero * this_ptr)
        ;   XREF to: 004f2610 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x006841bc]      ; 005c2feb | int g_CStrangerClassVersion
    ADD ESP,0x4                         ; 005c2ff1
    CMP EDX,0x2                         ; 005c2ff4
    JL 0x005c304e                       ; 005c2ff7 | LAB_005c304e
        ;   XREF to: 005c304e (CONDITIONAL_JUMP)
    CMP EDX,0x4                         ; 005c2ff9
    JG 0x005c304e                       ; 005c2ffc | LAB_005c304e
        ;   XREF to: 005c304e (CONDITIONAL_JUMP)
    PUSH 0x653bd4                       ; 005c2ffe | = "objectToPickUp" | s_objectToPickUp_00653bd4 = objectToPickUp
    LEA EAX,[EBX + 0x1fba0]             ; 005c3003
    PUSH EAX                            ; 005c3009
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005c300a | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c300f
    PUSH 0x653be3                       ; 005c3012 | = "doorToOpen" | s_doorToOpen_00653be3 = doorToOpen
    LEA EAX,[EBX + 0x1fb9c]             ; 005c3017
    PUSH EAX                            ; 005c301d
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005c301e | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c3023
    PUSH 0x653bee                       ; 005c3026 | = "leverToPull" | s_leverToPull_00653bee = leverToPull
    LEA EAX,[EBX + 0x1fba8]             ; 005c302b
    PUSH EAX                            ; 005c3031
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005c3032 | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c3037
    PUSH 0x653bfa                       ; 005c303a | = "ladderToClimb" | s_ladderToClimb_00653bfa = ladderToClimb
    LEA EAX,[EBX + 0x1fbac]             ; 005c303f
    PUSH EAX                            ; 005c3045
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005c3046 | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c304b
    CMP dword ptr [0x006841bc],0x2      ; 005c304e | int g_CStrangerClassVersion
        ;   Label: LAB_005c304e
    JNZ 0x005c307f                      ; 005c3055 | LAB_005c307f
        ;   XREF to: 005c307f (CONDITIONAL_JUMP)
    PUSH 0x653c08                       ; 005c3057 | = "lhCarryObject" | s_lhCarryObject_00653c08 = lhCarryObject
    LEA EAX,[EBX + 0x24b4]              ; 005c305c
    PUSH EAX                            ; 005c3062
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005c3063 | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c3068
    PUSH 0x653c16                       ; 005c306b | = "rhCarryObject" | s_rhCarryObject_00653c16 = rhCarryObject
    LEA EAX,[EBX + 0x24f8]              ; 005c3070
    PUSH EAX                            ; 005c3076
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005c3077 | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c307c
    CMP dword ptr [0x006841bc],0x4      ; 005c307f | int g_CStrangerClassVersion
        ;   Label: LAB_005c307f
    JL 0x005c309c                       ; 005c3086 | LAB_005c309c
        ;   XREF to: 005c309c (CONDITIONAL_JUMP)
    PUSH 0x653c24                       ; 005c3088 | = "ladderToDescend" | s_ladderToDescend_00653c24 = ladderToDescend
    LEA EAX,[EBX + 0x1fc28]             ; 005c308d
    PUSH EAX                            ; 005c3093
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005c3094 | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c3099
    CMP dword ptr [0x006841bc],0x6      ; 005c309c | int g_CStrangerClassVersion
        ;   Label: LAB_005c309c
    JL 0x005c30b9                       ; 005c30a3 | LAB_005c30b9
        ;   XREF to: 005c30b9 (CONDITIONAL_JUMP)
    PUSH 0x653c34                       ; 005c30a5 | = "gunsDrawn" | s_gunsDrawn_00653c34 = gunsDrawn
    LEA EAX,[EBX + 0x1fbd4]             ; 005c30aa
    PUSH EAX                            ; 005c30b0
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005c30b1 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c30b6
    CMP dword ptr [0x006841bc],0x7      ; 005c30b9 | int g_CStrangerClassVersion
        ;   Label: LAB_005c30b9
    JL 0x005c30d6                       ; 005c30c0 | LAB_005c30d6
        ;   XREF to: 005c30d6 (CONDITIONAL_JUMP)
    PUSH 0x653c3e                       ; 005c30c2 | = "weapon" | s_weapon_00653c3e = weapon
    LEA EAX,[EBX + 0x1fc2c]             ; 005c30c7
    PUSH EAX                            ; 005c30cd
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005c30ce | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c30d3
    CMP dword ptr [0x006841bc],0x8      ; 005c30d6 | int g_CStrangerClassVersion
        ;   Label: LAB_005c30d6
    JL 0x005c30f3                       ; 005c30dd | LAB_005c30f3
        ;   XREF to: 005c30f3 (CONDITIONAL_JUMP)
    PUSH 0x653c45                       ; 005c30df | = "actionPending" | s_actionPending_00653c45 = actionPending
    LEA EAX,[EBX + 0x1fc38]             ; 005c30e4
    PUSH EAX                            ; 005c30ea
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005c30eb | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c30f0
    CMP dword ptr [0x006841bc],0x9      ; 005c30f3 | int g_CStrangerClassVersion
        ;   Label: LAB_005c30f3
    JGE 0x005c30fe                      ; 005c30fa | LAB_005c30fe
        ;   XREF to: 005c30fe (CONDITIONAL_JUMP)
    POP EBX                             ; 005c30fc
    RET                                 ; 005c30fd
    PUSH 0x653c53                       ; 005c30fe | = "layerActionIndex" | s_layerActionIndex_00653c53 = layerActionIndex
        ;   Label: LAB_005c30fe
    LEA EAX,[EBX + 0x2a8c]              ; 005c3103
    PUSH EAX                            ; 005c3109
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005c310a | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c310f
    PUSH 0x653c64                       ; 005c3112 | = "layerActionT" | s_layerActionT_00653c64 = layerActionT
    ADD EBX,0x2a90                      ; 005c3117
    PUSH EBX                            ; 005c311d
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005c311e | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c3123
    POP EBX                             ; 005c3126
    RET                                 ; 005c3127

