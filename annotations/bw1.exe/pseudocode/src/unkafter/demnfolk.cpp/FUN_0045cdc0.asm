; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_demnfolk_cpp_FUN_0045cdc0(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045cdc0
        ;   Label: unkafter_demnfolk.cpp_FUN_0045cdc0
    ADD EAX,0x158                       ; 0045cdc4
    PUSH EAX                            ; 0045cdc9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0045cdca
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045cdcf
    ADD ESP,0x4                         ; 0045cdd2
    CMP EAX,0x24                        ; 0045cdd5
    JNZ 0x0045cde0                      ; 0045cdd8
        ;   XREF to: 0045cde0 (CONDITIONAL_JUMP)  ; LAB_0045cde0
    MOV EAX,0x1                         ; 0045cdda
    RET                                 ; 0045cddf
    MOV EDX,dword ptr [ESP + 0x4]       ; 0045cde0
        ;   Label: LAB_0045cde0
    PUSH EDX                            ; 0045cde4
    CALL core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0 ; 0045cde5
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0045cdea
    RET                                 ; 0045cded

