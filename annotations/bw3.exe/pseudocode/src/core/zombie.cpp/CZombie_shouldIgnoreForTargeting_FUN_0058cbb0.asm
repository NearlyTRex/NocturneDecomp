; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_shouldIgnoreForTargeting_FUN_0058cbb0(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c7e0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0058cbb0
        ;   Label: core_zombie.cpp_CZombie_shouldIgnoreForTargeting_FUN_0058cbb0
    ADD EAX,0x158                       ; 0058cbb4
    PUSH EAX                            ; 0058cbb9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0058cbba
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058cbbf
    ADD ESP,0x4                         ; 0058cbc2
    CMP EAX,0xf                         ; 0058cbc5
    JNZ 0x0058cbd0                      ; 0058cbc8
        ;   XREF to: 0058cbd0 (CONDITIONAL_JUMP)  ; LAB_0058cbd0
    MOV EAX,0x1                         ; 0058cbca
    RET                                 ; 0058cbcf
    MOV EDX,dword ptr [ESP + 0x4]       ; 0058cbd0
        ;   Label: LAB_0058cbd0
    PUSH EDX                            ; 0058cbd4
    CALL core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c7e0 ; 0058cbd5
        ;   XREF to: 0040c7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c7e0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0058cbda
    RET                                 ; 0058cbdd

