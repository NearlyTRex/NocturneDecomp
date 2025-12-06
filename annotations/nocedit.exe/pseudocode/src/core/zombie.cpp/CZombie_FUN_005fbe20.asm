; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_zombie.cpp_CZombie_FUN_005fbe20(CZombie * this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;
; Called Functions:
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fbe20
        ;   Label: core_zombie.cpp_CZombie_FUN_005fbe20
    MOV EBX,dword ptr [ESP + 0x8]       ; 005fbe21
    LEA EAX,[EBX + 0x158]               ; 005fbe25
    PUSH EAX                            ; 005fbe2b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005fbe2c | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005fbe31
    ADD ESP,0x4                         ; 005fbe34
    CMP EAX,0xe                         ; 005fbe37
    JNZ 0x005fbe52                      ; 005fbe3a | LAB_005fbe52
        ;   XREF to: 005fbe52 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067d550]                ; 005fbe3c | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 005fbe41 | DAT_02f33744
    JZ 0x005fbe5d                       ; 005fbe45 | LAB_005fbe5d
        ;   XREF to: 005fbe5d (CONDITIONAL_JUMP)
    PUSH 0x3                            ; 005fbe47
    PUSH EBX                            ; 005fbe49
    CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 ; 005fbe4a | void core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor * this_ptr, uint32_t color)
        ;   XREF to: 0040d940 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005fbe4f
    PUSH EBX                            ; 005fbe52
        ;   Label: LAB_005fbe52
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 ; 005fbe53 | int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter * this_ptr)
        ;   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005fbe58
    POP EBX                             ; 005fbe5b
    RET                                 ; 005fbe5c
    XOR EAX,EAX                         ; 005fbe5d
        ;   Label: LAB_005fbe5d
    POP EBX                             ; 005fbe5f
    RET                                 ; 005fbe60

