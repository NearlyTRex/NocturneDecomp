; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_charactr_cpp_CCharacter_FUN_0042c580(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_CStranger_isDamageable_FUN_005c67c0 at 005c67e0
;
; Referenced Globals:
;   TerminatedCString s_DIE_006171a2
;   TerminatedCString s_DEAD_006171a6
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
;   crt_string.c_stricmp_FUN_005fe7f0
;   crt_string.c_strnicmp_FUN_005ff070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c580
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042c580
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042c581
    MOV EDX,dword ptr [EBX + 0x70]      ; 0042c585
    CMP EDX,0x2                         ; 0042c588
    JNZ 0x0042c591                      ; 0042c58b
        ;   XREF to: 0042c591 (CONDITIONAL_JUMP)  ; LAB_0042c591
    MOV EAX,EDX                         ; 0042c58d
    POP EBX                             ; 0042c58f
    RET                                 ; 0042c590
    PUSH 0x3                            ; 0042c591
        ;   Label: LAB_0042c591
    PUSH 0x6171a2                       ; 0042c593 | = "DIE"
    ADD EBX,0x158                       ; 0042c598
    PUSH EBX                            ; 0042c59e
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0 ; 0042c59f
        ;   XREF to: 0052dcf0 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0042c5a4
    PUSH EAX                            ; 0042c5a7
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 0042c5a8
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0042c5ad
    TEST EAX,EAX                        ; 0042c5b0
    JNZ 0x0042c5bb                      ; 0042c5b2
        ;   XREF to: 0042c5bb (CONDITIONAL_JUMP)  ; LAB_0042c5bb
    MOV EAX,0x1                         ; 0042c5b4
    POP EBX                             ; 0042c5b9
    RET                                 ; 0042c5ba
    PUSH 0x6171a6                       ; 0042c5bb | = "DEAD"
        ;   Label: LAB_0042c5bb
    PUSH EBX                            ; 0042c5c0
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0 ; 0042c5c1
        ;   XREF to: 0052dcf0 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0042c5c6
    PUSH EAX                            ; 0042c5c9
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0042c5ca
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0042c5cf
    TEST EAX,EAX                        ; 0042c5d2
    JNZ 0x0042c5dd                      ; 0042c5d4
        ;   XREF to: 0042c5dd (CONDITIONAL_JUMP)  ; LAB_0042c5dd
    MOV EAX,0x2                         ; 0042c5d6
    POP EBX                             ; 0042c5db
    RET                                 ; 0042c5dc
    XOR EAX,EAX                         ; 0042c5dd
        ;   Label: LAB_0042c5dd
    POP EBX                             ; 0042c5df
    RET                                 ; 0042c5e0

