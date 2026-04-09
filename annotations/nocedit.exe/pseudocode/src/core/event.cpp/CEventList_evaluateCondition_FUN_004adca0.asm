; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList *this_ptr,char *condition_expression)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   condition_expression
;
; XREF[49]:
;   core_anvil.cpp_CAnvil_process_FUN_00411d90 at 00411da6
;   core_armour.cpp_CArmour_process_FUN_00412260 at 0041233a
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 00412eae
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416ef6
;   core_biggs.cpp_CBiggs_process_FUN_00418700 at 00418901
;   core_bodypart.cpp_CBodyPart_process_FUN_00419be0 at 00419d8e
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041bfb3
;   core_bugs.cpp_CBugs_process_FUN_004250f0 at 00425149
;   core_conveyor.cpp_CConveyor_process_FUN_00441df0 at 00441e09
;   core_curtain.cpp_CCurtain_process_FUN_0044a920 at 0044a96e
;   ... and 39 more
;
; Referenced Globals:
;   TerminatedCString s_none_006252ae
;   TerminatedCString s_s_006252b3
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_CConsoleInstance
;   int g_EventDryRun
;   char[256] g_EventErrorMessageBuffer
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateExpression_FUN_004add80
;   crt_string.c__stricmp_FUN_005fe7f0
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004adca0
        ;   Label: core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004adca1
    TEST EBX,EBX                        ; 004adca5
    JZ 0x004adcae                       ; 004adca7
        ;   XREF to: 004adcae (CONDITIONAL_JUMP)  ; LAB_004adcae
    CMP byte ptr [EBX],0x0              ; 004adca9
    JNZ 0x004adcb2                      ; 004adcac
        ;   XREF to: 004adcb2 (CONDITIONAL_JUMP)  ; LAB_004adcb2
    XOR EAX,EAX                         ; 004adcae
        ;   Label: LAB_004adcae
    POP EBX                             ; 004adcb0
        ;   Label: LAB_004adcb0
    RET                                 ; 004adcb1
    PUSH 0x6252ae                       ; 004adcb2 | = "none"
        ;   Label: LAB_004adcb2
    PUSH EBX                            ; 004adcb7
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004adcb8
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004adcbd
    TEST EAX,EAX                        ; 004adcc0
    JZ 0x004adcb0                       ; 004adcc2
        ;   XREF to: 004adcb0 (CONDITIONAL_JUMP)  ; LAB_004adcb0
    PUSH EBX                            ; 004adcc4
    MOV ECX,dword ptr [ESP + 0xc]       ; 004adcc5
    XOR EDX,EDX                         ; 004adcc9
    PUSH ECX                            ; 004adccb
    MOV dword ptr [0x02d0a45c],EDX      ; 004adccc | g_EventDryRun
    CALL core_event.cpp_CEventList_evaluateExpression_FUN_004add80 ; 004adcd2
        ;   XREF to: 004add80 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateExpression_FUN_004add80(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 004adcd7
    TEST EAX,EAX                        ; 004adcda
    JGE 0x004adcb0                      ; 004adcdc
        ;   XREF to: 004adcb0 (CONDITIONAL_JUMP)  ; LAB_004adcb0
    PUSH 0x2d0a460                      ; 004adcde | g_EventErrorMessageBuffer
    PUSH 0x6252b3                       ; 004adce3 | = "%s\n"
    MOV EBX,dword ptr [0x0066e8e0]      ; 004adce8 | g_CConsoleInstance | g_CConsolePtr
    PUSH EBX                            ; 004adcee | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004adcef
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004adcf4
    XOR EAX,EAX                         ; 004adcf7
    POP EBX                             ; 004adcf9
    RET                                 ; 004adcfa

