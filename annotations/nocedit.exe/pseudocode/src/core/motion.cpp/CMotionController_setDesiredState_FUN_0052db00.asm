; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController *this_ptr,int desired_state_index,int force_immediate)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   desired_state_index
; int              Stack[0xc]:4   force_immediate
;
; XREF[97]:
;   core_baron.cpp_CBaron_engageTarget_FUN_00413470 at 0041355b
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 00412ebf
;   core_baron.cpp_CBaron_releaseTarget_FUN_004135a0 at 004135c4
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00416030 at 00416126
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 0041554b
;   core_batman.cpp_CBatman_pickRandomMovementState_FUN_004167f0 at 00416810
;   core_batman.cpp_CBatman_processDamage_FUN_004179a0 at 00417b42
;   core_batman.cpp_CBatman_process_FUN_00416870 at 0041694e
;   core_biggs.cpp_CBiggs_processDamage_FUN_00418b50 at 00418ba7
;   core_biggs.cpp_CBiggs_process_FUN_00418700 at 0041896a
;   ... and 87 more
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_0063aa47
;   TerminatedCString s_CMotionController_setDes_0063aa5a
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950
;   core_motion.cpp_CMotionController_reverseTransition_FUN_0052da50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052db00
        ;   Label: core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
    PUSH ESI                            ; 0052db01
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052db02
    MOV ESI,dword ptr [ESP + 0x10]      ; 0052db06
    TEST ESI,ESI                        ; 0052db0a
    JL 0x0052db40                       ; 0052db0c
        ;   XREF to: 0052db40 (CONDITIONAL_JUMP)  ; LAB_0052db40
    MOV EAX,dword ptr [EBX]             ; 0052db0e
    CMP ESI,dword ptr [EAX]             ; 0052db10
    JGE 0x0052db4a                      ; 0052db12
        ;   XREF to: 0052db4a (CONDITIONAL_JUMP)  ; LAB_0052db4a
    CMP ESI,dword ptr [EBX + 0x28]      ; 0052db14
        ;   Label: LAB_0052db14
    JZ 0x0052db36                       ; 0052db17
        ;   XREF to: 0052db36 (CONDITIONAL_JUMP)  ; LAB_0052db36
    CMP dword ptr [EBX + 0x2c],0x0      ; 0052db19
    JZ 0x0052db2c                       ; 0052db1d
        ;   XREF to: 0052db2c (CONDITIONAL_JUMP)  ; LAB_0052db2c
    CMP dword ptr [EBX + 0x20],0x0      ; 0052db1f
    JZ 0x0052db71                       ; 0052db23
        ;   XREF to: 0052db71 (CONDITIONAL_JUMP)  ; LAB_0052db71
    MOV dword ptr [EBX + 0x2c],0x0      ; 0052db25
        ;   Label: LAB_0052db25
    MOV dword ptr [EBX + 0x24],0x0      ; 0052db2c
        ;   Label: LAB_0052db2c
    MOV dword ptr [EBX + 0x28],ESI      ; 0052db33
    CMP dword ptr [ESP + 0x14],0x0      ; 0052db36
        ;   Label: LAB_0052db36
    JNZ 0x0052db7c                      ; 0052db3b
        ;   XREF to: 0052db7c (CONDITIONAL_JUMP)  ; LAB_0052db7c
    POP ESI                             ; 0052db3d
    POP EBX                             ; 0052db3e
    RET                                 ; 0052db3f
    MOV dword ptr [EBX + 0x28],0xffffffff ; 0052db40
        ;   Label: LAB_0052db40
    POP ESI                             ; 0052db47
    POP EBX                             ; 0052db48
    RET                                 ; 0052db49
    PUSH EDI                            ; 0052db4a
        ;   Label: LAB_0052db4a
    MOV ECX,0x63aa47                    ; 0052db4b | = "..\\core\\motion.cpp"
    MOV EDI,0x274                       ; 0052db50
    PUSH 0x63aa5a                       ; 0052db55 | = "CMotionController::setDesiredState - ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0052db5a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0052db60 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052db66
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0052db6b
    POP EDI                             ; 0052db6e
    JMP 0x0052db14                      ; 0052db6f
        ;   XREF to: 0052db14 (UNCONDITIONAL_JUMP)  ; LAB_0052db14
    PUSH EBX                            ; 0052db71
        ;   Label: LAB_0052db71
    CALL core_motion.cpp_CMotionController_reverseTransition_FUN_0052da50 ; 0052db72
        ;   XREF to: 0052da50 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_reverseTransition_FUN_0052da50(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052db77
    JMP 0x0052db25                      ; 0052db7a
        ;   XREF to: 0052db25 (UNCONDITIONAL_JUMP)  ; LAB_0052db25
    PUSH EBX                            ; 0052db7c
        ;   Label: LAB_0052db7c
    CALL core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950 ; 0052db7d
        ;   XREF to: 0052d950 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052db82
    POP ESI                             ; 0052db85
    POP EBX                             ; 0052db86
    RET                                 ; 0052db87

