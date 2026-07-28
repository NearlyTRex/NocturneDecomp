; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_werewolf_cpp_CWerewolf_setWalkTarget_FUN_00557020(CCharacter *param_1,CDemonActor *param_2,float param_3,float param_4)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setWalkTarget_FUN_00428ab0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00557020
        ;   Label: core_werewolf.cpp_CWerewolf_setWalkTarget_FUN_00557020
    ADD EAX,0x150                       ; 00557024
    PUSH EAX                            ; 00557029
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0055702a
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0055702f
    ADD ESP,0x4                         ; 00557032
    CMP EAX,0x13                        ; 00557035
    JNZ 0x0055703b                      ; 00557038
        ;   XREF to: 0055703b (CONDITIONAL_JUMP)  ; LAB_0055703b
    RET                                 ; 0055703a
    PUSH dword ptr [ESP + 0x10]         ; 0055703b
        ;   Label: LAB_0055703b
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055703f
    PUSH dword ptr [ESP + 0x10]         ; 00557043
    PUSH EDX                            ; 00557047
    MOV ECX,dword ptr [ESP + 0x10]      ; 00557048
    PUSH ECX                            ; 0055704c
    CALL core_charactr.cpp_CCharacter_setWalkTarget_FUN_00428ab0 ; 0055704d
        ;   XREF to: 00428ab0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setWalkTarget_FUN_00428ab0(CCharacter * this_ptr, CDemonActor * target, float min_distance, float max_distance)
    ADD ESP,0x10                        ; 00557052
    RET                                 ; 00557055

