; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_shouldIgnoreForTargeting_FUN_005bed50(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005bed50
        ;   Label: core_zombie.cpp_CZombie_shouldIgnoreForTargeting_FUN_005bed50
    ADD EAX,0x158                       ; 005bed54
    PUSH EAX                            ; 005bed59
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005bed5a
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005bed5f
    ADD ESP,0x4                         ; 005bed62
    CMP EAX,0xe                         ; 005bed65
    JNZ 0x005bed70                      ; 005bed68
        ;   XREF to: 005bed70 (CONDITIONAL_JUMP)  ; LAB_005bed70
    MOV EAX,0x1                         ; 005bed6a
    RET                                 ; 005bed6f
    MOV EDX,dword ptr [ESP + 0x4]       ; 005bed70
        ;   Label: LAB_005bed70
    PUSH EDX                            ; 005bed74
    CALL core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0 ; 005bed75
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005bed7a
    RET                                 ; 005bed7d

