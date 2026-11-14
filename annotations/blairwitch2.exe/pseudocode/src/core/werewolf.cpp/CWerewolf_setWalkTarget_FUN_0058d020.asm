; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_CWerewolf_setWalkTarget_FUN_0058d020(CWerewolf *this_ptr,CDemonActor *target,float speed,float distance)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target
; float            Stack[0xc]:4   speed
; float            Stack[0x10]:4   distance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setWalkTarget_FUN_004285f0
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0058d020
        ;   Label: core_werewolf.cpp_CWerewolf_setWalkTarget_FUN_0058d020
    ADD EAX,0x2b4                       ; 0058d024
    PUSH EAX                            ; 0058d029
    CALL core_motion.cpp_FUN_005035c0   ; 0058d02a
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058d02f
    ADD ESP,0x4                         ; 0058d032
    CMP EAX,0x13                        ; 0058d035
    JNZ 0x0058d03b                      ; 0058d038
        ;   XREF to: 0058d03b (CONDITIONAL_JUMP)  ; LAB_0058d03b
    RET                                 ; 0058d03a
    PUSH dword ptr [ESP + 0x10]         ; 0058d03b
        ;   Label: LAB_0058d03b
    MOV EDX,dword ptr [ESP + 0xc]       ; 0058d03f
    PUSH dword ptr [ESP + 0x10]         ; 0058d043
    PUSH EDX                            ; 0058d047
    MOV ECX,dword ptr [ESP + 0x10]      ; 0058d048
    PUSH ECX                            ; 0058d04c
    CALL core_charactr.cpp_CCharacter_setWalkTarget_FUN_004285f0 ; 0058d04d
        ;   XREF to: 004285f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setWalkTarget_FUN_004285f0(CCharacter * this_ptr, CDemonActor * target, float min_distance, float max_distance)
    ADD ESP,0x10                        ; 0058d052
    RET                                 ; 0058d055

