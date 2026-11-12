; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_toxhand_cpp_CTheHand_shouldIgnoreForTargeting_FUN_0056cb90(CTheHand *this_ptr)
;
; Parameters:
; CTheHand *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_stand_005d655a+1
;
; Called Functions:
;   core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c7e0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056cb90
        ;   Label: core_toxhand.cpp_CTheHand_shouldIgnoreForTargeting_FUN_0056cb90
    MOV EBP,ESP                         ; 0056cb91
    MOV EAX,dword ptr [EBP + 0x8]       ; 0056cb93
    PUSH 0x5d655b                       ; 0056cb96 | s_stand_005d655a+1
    ADD EAX,0x158                       ; 0056cb9b
    PUSH EAX                            ; 0056cba0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0056cba1
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0056cba6
    PUSH EAX                            ; 0056cba9
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0056cbaa
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0056cbaf
    TEST EAX,EAX                        ; 0056cbb2
    JNZ 0x0056cbbd                      ; 0056cbb4
        ;   XREF to: 0056cbbd (CONDITIONAL_JUMP)  ; LAB_0056cbbd
    MOV EAX,0x1                         ; 0056cbb6
    POP EBP                             ; 0056cbbb
    RET                                 ; 0056cbbc
    MOV EDX,dword ptr [EBP + 0x8]       ; 0056cbbd
        ;   Label: LAB_0056cbbd
    PUSH EDX                            ; 0056cbc0
    CALL core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c7e0 ; 0056cbc1
        ;   XREF to: 0040c7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c7e0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056cbc6
    POP EBP                             ; 0056cbc9
    RET                                 ; 0056cbca

