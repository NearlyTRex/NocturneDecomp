; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList *this_ptr)
;
; Parameters:
; CMotionList *    Stack[0x4]:4   this_ptr
;
; XREF[13]:
;   core_charactr.cpp_CCharacter_FUN_0042c920 at 0042c9a5
;   core_charactr.cpp_CCharacter_FUN_0042de50 at 0042de9e
;   core_event.cpp_CEventList_FUN_004aacc0 at 004acfaf
;   core_hero.cpp_CHero_FUN_004f2890 at 004f28bf
;   core_hero.cpp_CHero_FUN_004f28d0 at 004f2916
;   core_hero.cpp_CHero_FUN_004f29b0 at 004f29e8
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_0052db90 at 0052dba0
;   core_npc.cpp_CNPC_FUN_00544c50 at 00544ccf
;   core_npc.cpp_CNPC_process_FUN_005448b0 at 00544b37
;   core_skeledit.cpp_CSkeleton_FUN_00592690 at 00592dd6
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_0063a934
;   TerminatedCString s_Can_t_find_state_s_in_mo_0063a947
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052d4f0
        ;   Label: core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
    PUSH ESI                            ; 0052d4f1
    PUSH EDI                            ; 0052d4f2
    PUSH EBP                            ; 0052d4f3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0052d4f4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0052d4f8
    MOV EDX,dword ptr [EDI]             ; 0052d4fc
    XOR EBX,EBX                         ; 0052d4fe
    TEST EDX,EDX                        ; 0052d500
    JLE 0x0052d51f                      ; 0052d502
        ;   XREF to: 0052d51f (CONDITIONAL_JUMP)  ; LAB_0052d51f
    LEA ESI,[EDI + 0x4]                 ; 0052d504
    PUSH EBP                            ; 0052d507
        ;   Label: LAB_0052d507
    PUSH ESI                            ; 0052d508
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0052d509
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052d50e
    TEST EAX,EAX                        ; 0052d511
    JZ 0x0052d530                       ; 0052d513
        ;   XREF to: 0052d530 (CONDITIONAL_JUMP)  ; LAB_0052d530
    INC EBX                             ; 0052d515
    MOV ECX,dword ptr [EDI]             ; 0052d516
    ADD ESI,0x1e                        ; 0052d518
    CMP EBX,ECX                         ; 0052d51b
    JL 0x0052d507                       ; 0052d51d
        ;   XREF to: 0052d507 (CONDITIONAL_JUMP)  ; LAB_0052d507
    CMP dword ptr [ESP + 0x1c],0x0      ; 0052d51f
        ;   Label: LAB_0052d51f
    JNZ 0x0052d537                      ; 0052d524
        ;   XREF to: 0052d537 (CONDITIONAL_JUMP)  ; LAB_0052d537
    MOV EAX,0xffffffff                  ; 0052d526
    POP EBP                             ; 0052d52b
    POP EDI                             ; 0052d52c
    POP ESI                             ; 0052d52d
    POP EBX                             ; 0052d52e
    RET                                 ; 0052d52f
    MOV EAX,EBX                         ; 0052d530
        ;   Label: LAB_0052d530
    POP EBP                             ; 0052d532
    POP EDI                             ; 0052d533
    POP ESI                             ; 0052d534
    POP EBX                             ; 0052d535
    RET                                 ; 0052d536
    PUSH EBP                            ; 0052d537
        ;   Label: LAB_0052d537
    MOV ESI,0x63a934                    ; 0052d538 | = "..\\core\\motion.cpp"
    MOV EDI,0x113                       ; 0052d53d
    PUSH 0x63a947                       ; 0052d542 | = "Can't find state \"%s\" in motion list"
    MOV dword ptr [0x02f0ca48],ESI      ; 0052d547 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0052d54d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052d553
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0052d558
    MOV EAX,0xffffffff                  ; 0052d55b
    POP EBP                             ; 0052d560
    POP EDI                             ; 0052d561
    POP ESI                             ; 0052d562
    POP EBX                             ; 0052d563
    RET                                 ; 0052d564

