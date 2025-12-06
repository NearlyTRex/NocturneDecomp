; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_charactr.cpp_CCharacter_FUN_0042de50(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_STAND_006174c3
;   double DOUBLE_006174ca = 0.950000000000000
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
;   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042de50
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042de50
    PUSH ESI                            ; 0042de51
    SUB ESP,0x4                         ; 0042de52
    MOV ESI,dword ptr [ESP + 0x10]      ; 0042de55
    PUSH ESI                            ; 0042de59
    MOV EAX,dword ptr [ESI + 0x154]     ; 0042de5a
    CALL dword ptr [EAX + 0x120]        ; 0042de60
    ADD ESP,0x4                         ; 0042de66
    CMP EAX,0x1                         ; 0042de69
    JG 0x0042de89                       ; 0042de6c | LAB_0042de89
        ;   XREF to: 0042de89 (CONDITIONAL_JUMP)
    MOV AH,byte ptr [ESI + 0x23b8]      ; 0042de6e
    LEA EBX,[ESI + 0x158]               ; 0042de74
    TEST AH,AH                          ; 0042de7a
    JNZ 0x0042de8d                      ; 0042de7c | LAB_0042de8d
        ;   XREF to: 0042de8d (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0042de7e
        ;   Label: LAB_0042de7e
    ADD ESP,0x4                         ; 0042de83
        ;   Label: LAB_0042de83
    POP ESI                             ; 0042de86
    POP EBX                             ; 0042de87
    RET                                 ; 0042de88
    XOR EAX,EAX                         ; 0042de89
        ;   Label: LAB_0042de89
    JMP 0x0042de83                      ; 0042de8b | LAB_0042de83
        ;   XREF to: 0042de83 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 0042de8d
        ;   Label: LAB_0042de8d
    PUSH 0x6174c3                       ; 0042de8f | = "STAND" | s_STAND_006174c3 = STAND
    PUSH EBX                            ; 0042de94
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 0042de95 | CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0042de9a
    PUSH EAX                            ; 0042de9d
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 ; 0042de9e | int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr)
        ;   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0042dea3
    TEST EAX,EAX                        ; 0042dea6
    JL 0x0042de7e                       ; 0042dea8 | LAB_0042de7e
        ;   XREF to: 0042de7e (CONDITIONAL_JUMP)
    PUSH EAX                            ; 0042deaa
    PUSH EBX                            ; 0042deab
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 0042deac | float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x8],EAX       ; 0042deb1
    FLD float ptr [ESP + 0x8]           ; 0042deb5
    ADD ESP,0x8                         ; 0042deb9
    FCOMP double ptr [0x006174ca]       ; 0042debc | double DOUBLE_006174ca
    FNSTSW AX                           ; 0042dec2
    SAHF                                ; 0042dec4
    JBE 0x0042de7e                      ; 0042dec5 | LAB_0042de7e
        ;   XREF to: 0042de7e (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0042dec7
    ADD ESP,0x4                         ; 0042dec9
    POP ESI                             ; 0042decc
    POP EBX                             ; 0042decd
    RET                                 ; 0042dece

