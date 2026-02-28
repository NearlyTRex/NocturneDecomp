; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList *this_ptr)
;
; Parameters:
; CMotionList *    Stack[0x4]:4   this_ptr
;
; XREF[19]:
;   core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042e670 at 0042e6f8
;   core_charactr.cpp_CCharacter_initGesture_FUN_0042d390 at 0042d3b6
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ad5a6
;   core_gabriela.cpp_CGabriella_setup_FUN_004d2c40 at 004d2e50
;   core_ghoul.cpp_CGhoul_processDamage_FUN_004e87e0 at 004e8b85
;   core_hostage.cpp_CHostage_setup_FUN_004f4970 at 004f4b2a
;   core_icepick.cpp_CIcePick_FUN_004f8810 at 004f8872
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0 at 0052ddbf
;   core_motion.cpp_CMotionController_setMotionList_FUN_0052dcb0 at 0052dccc
;   core_passngr.cpp_CPassenger_setup_FUN_00545d30 at 00545ec4
;   ... and 9 more
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_0063a8fb
;   TerminatedCString s_Can_t_find_motion_s_in_m_0063a90e
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052d460
        ;   Label: core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
    PUSH ESI                            ; 0052d461
    PUSH EDI                            ; 0052d462
    PUSH EBP                            ; 0052d463
    MOV EDI,dword ptr [ESP + 0x14]      ; 0052d464
    MOV EBP,dword ptr [ESP + 0x18]      ; 0052d468
    MOV EDX,dword ptr [EDI + 0x964]     ; 0052d46c
    XOR EBX,EBX                         ; 0052d472
    TEST EDX,EDX                        ; 0052d474
    JLE 0x0052d49d                      ; 0052d476
        ;   XREF to: 0052d49d (CONDITIONAL_JUMP)  ; LAB_0052d49d
    LEA ESI,[EDI + 0x968]               ; 0052d478
    PUSH EBP                            ; 0052d47e
        ;   Label: LAB_0052d47e
    PUSH ESI                            ; 0052d47f
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0052d480
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052d485
    TEST EAX,EAX                        ; 0052d488
    JZ 0x0052d4ae                       ; 0052d48a
        ;   XREF to: 0052d4ae (CONDITIONAL_JUMP)  ; LAB_0052d4ae
    INC EBX                             ; 0052d48c
    MOV ECX,dword ptr [EDI + 0x964]     ; 0052d48d
    ADD ESI,0x54c                       ; 0052d493
    CMP EBX,ECX                         ; 0052d499
    JL 0x0052d47e                       ; 0052d49b
        ;   XREF to: 0052d47e (CONDITIONAL_JUMP)  ; LAB_0052d47e
    CMP dword ptr [ESP + 0x1c],0x0      ; 0052d49d
        ;   Label: LAB_0052d49d
    JNZ 0x0052d4b5                      ; 0052d4a2
        ;   XREF to: 0052d4b5 (CONDITIONAL_JUMP)  ; LAB_0052d4b5
    MOV EAX,0xffffffff                  ; 0052d4a4
    POP EBP                             ; 0052d4a9
    POP EDI                             ; 0052d4aa
    POP ESI                             ; 0052d4ab
    POP EBX                             ; 0052d4ac
    RET                                 ; 0052d4ad
    MOV EAX,EBX                         ; 0052d4ae
        ;   Label: LAB_0052d4ae
    POP EBP                             ; 0052d4b0
    POP EDI                             ; 0052d4b1
    POP ESI                             ; 0052d4b2
    POP EBX                             ; 0052d4b3
    RET                                 ; 0052d4b4
    PUSH EBP                            ; 0052d4b5
        ;   Label: LAB_0052d4b5
    MOV ESI,0x63a8fb                    ; 0052d4b6 | = "..\\core\\motion.cpp"
    MOV EDI,0x100                       ; 0052d4bb
    PUSH 0x63a90e                       ; 0052d4c0 | = "Can't find motion \"%s\" in motion list"
    MOV dword ptr [0x02f0ca48],ESI      ; 0052d4c5 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0052d4cb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052d4d1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0052d4d6
    MOV EAX,0xffffffff                  ; 0052d4d9
    POP EBP                             ; 0052d4de
    POP EDI                             ; 0052d4df
    POP ESI                             ; 0052d4e0
    POP EBX                             ; 0052d4e1
    RET                                 ; 0052d4e2

