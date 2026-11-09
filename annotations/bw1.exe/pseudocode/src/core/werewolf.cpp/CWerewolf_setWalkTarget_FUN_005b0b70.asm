; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_CWerewolf_setWalkTarget_FUN_005b0b70(CWerewolf *this_ptr,CDemonActor *target,float speed,float distance)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target
; float            Stack[0xc]:4   speed
; float            Stack[0x10]:4   distance
;
; Called Functions:
;   core_charactr.cpp_FUN_00432050
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b0b70
        ;   Label: core_werewolf.cpp_CWerewolf_setWalkTarget_FUN_005b0b70
    ADD EAX,0x158                       ; 005b0b74
    PUSH EAX                            ; 005b0b79
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005b0b7a
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005b0b7f
    ADD ESP,0x4                         ; 005b0b82
    CMP EAX,0x13                        ; 005b0b85
    JNZ 0x005b0b8b                      ; 005b0b88
        ;   XREF to: 005b0b8b (CONDITIONAL_JUMP)  ; LAB_005b0b8b
    RET                                 ; 005b0b8a
    PUSH dword ptr [ESP + 0x10]         ; 005b0b8b
        ;   Label: LAB_005b0b8b
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b0b8f
    PUSH dword ptr [ESP + 0x10]         ; 005b0b93
    PUSH EDX                            ; 005b0b97
    MOV ECX,dword ptr [ESP + 0x10]      ; 005b0b98
    PUSH ECX                            ; 005b0b9c
    CALL core_charactr.cpp_FUN_00432050 ; 005b0b9d
        ;   XREF to: 00432050 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432050()
    ADD ESP,0x10                        ; 005b0ba2
    RET                                 ; 005b0ba5

