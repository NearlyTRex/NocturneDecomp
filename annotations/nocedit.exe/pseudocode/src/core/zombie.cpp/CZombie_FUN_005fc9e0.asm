; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_zombie_cpp_CZombie_FUN_005fc9e0(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005fc9e0
        ;   Label: core_zombie.cpp_CZombie_FUN_005fc9e0
    ADD EAX,0x158                       ; 005fc9e4
    PUSH EAX                            ; 005fc9e9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005fc9ea
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005fc9ef
    ADD ESP,0x4                         ; 005fc9f2
    CMP EAX,0xe                         ; 005fc9f5
    JNZ 0x005fca00                      ; 005fc9f8
        ;   XREF to: 005fca00 (CONDITIONAL_JUMP)  ; LAB_005fca00
    MOV EAX,0x1                         ; 005fc9fa
    RET                                 ; 005fc9ff
    MOV EDX,dword ptr [ESP + 0x4]       ; 005fca00
        ;   Label: LAB_005fca00
    PUSH EDX                            ; 005fca04
    CALL core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720 ; 005fca05
        ;   XREF to: 0040c720 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005fca0a
    RET                                 ; 005fca0d

