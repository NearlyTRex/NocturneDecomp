; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_thehand_cpp_CTheHand_shouldIgnoreForTargeting_FUN_00599ba0(CTheHand *this_ptr)
;
; Parameters:
; CTheHand *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_stand_005f7feb+1
;
; Called Functions:
;   core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00599ba0
        ;   Label: core_thehand.cpp_CTheHand_shouldIgnoreForTargeting_FUN_00599ba0
    MOV EBP,ESP                         ; 00599ba1
    MOV EAX,dword ptr [EBP + 0x8]       ; 00599ba3
    PUSH 0x5f7fec                       ; 00599ba6 | s_stand_005f7feb+1
    ADD EAX,0x158                       ; 00599bab
    PUSH EAX                            ; 00599bb0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00599bb1
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00599bb6
    PUSH EAX                            ; 00599bb9
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00599bba
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00599bbf
    TEST EAX,EAX                        ; 00599bc2
    JNZ 0x00599bcd                      ; 00599bc4
        ;   XREF to: 00599bcd (CONDITIONAL_JUMP)  ; LAB_00599bcd
    MOV EAX,0x1                         ; 00599bc6
    POP EBP                             ; 00599bcb
    RET                                 ; 00599bcc
    MOV EDX,dword ptr [EBP + 0x8]       ; 00599bcd
        ;   Label: LAB_00599bcd
    PUSH EDX                            ; 00599bd0
    CALL core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0 ; 00599bd1
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00599bd6
    POP EBP                             ; 00599bd9
    RET                                 ; 00599bda

