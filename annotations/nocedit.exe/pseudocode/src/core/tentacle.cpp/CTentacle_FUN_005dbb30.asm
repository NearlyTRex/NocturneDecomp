; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_tentacle.cpp_CTentacle_FUN_005dbb30(CTentacle * this_ptr)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_wait_00654e94
;
; Called Functions:
;   core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005dbb30
        ;   Label: core_tentacle.cpp_CTentacle_FUN_005dbb30
    MOV EBP,ESP                         ; 005dbb31
    MOV EAX,dword ptr [EBP + 0x8]       ; 005dbb33
    PUSH 0x654e94                       ; 005dbb36 | = "wait" | s_wait_00654e94 = wait
    ADD EAX,0x158                       ; 005dbb3b
    PUSH EAX                            ; 005dbb40
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005dbb41 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005dbb46
    PUSH EAX                            ; 005dbb49
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005dbb4a | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005dbb4f
    TEST EAX,EAX                        ; 005dbb52
    JNZ 0x005dbb5d                      ; 005dbb54 | LAB_005dbb5d
        ;   XREF to: 005dbb5d (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005dbb56
    POP EBP                             ; 005dbb5b
    RET                                 ; 005dbb5c
    MOV EDX,dword ptr [EBP + 0x8]       ; 005dbb5d
        ;   Label: LAB_005dbb5d
    PUSH EDX                            ; 005dbb60
    CALL core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720 ; 005dbb61 | int core_actor.cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720(CDemonActor * this_ptr)
        ;   XREF to: 0040c720 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005dbb66
    POP EBP                             ; 005dbb69
    RET                                 ; 005dbb6a

