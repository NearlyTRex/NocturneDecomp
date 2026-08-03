; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList *this_ptr,char *condition_expression)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   condition_expression
;
; XREF[49]:
;   core_anvil.cpp_CAnvil_process_FUN_0040f610 at 0040f626
;   core_armour.cpp_CArmour_process_FUN_0040fa20 at 0040fafa
;   core_baron.cpp_CBaron_process_FUN_00410490 at 004104be
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413e86
;   core_biggs.cpp_CBiggs_process_FUN_004154b0 at 004156b1
;   core_bodypart.cpp_CBodyPart_process_FUN_004168d0 at 00416a7e
;   core_boneguy.cpp_CBoneGuy_process_FUN_00418a00 at 00418a23
;   core_bugs.cpp_CBugs_process_FUN_00421480 at 004214d9
;   core_conveyor.cpp_CConveyor_process_FUN_0043b1a0 at 0043b1b9
;   core_curtain.cpp_CCurtain_process_FUN_0043ebf0 at 0043ec3e
;   ... and 39 more
;
; Referenced Globals:
;   TerminatedCString s_none_0058022c
;   TerminatedCString s_s_00580231
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CConsole g_CConsole_0077ad0c
;   undefined4 DAT_01c08b5c
;   undefined4 DAT_01c08b60
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateExpression_FUN_0047dd10
;   crt_string.c__stricmp_FUN_00564520
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047dc30
        ;   Label: core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
    MOV EBX,dword ptr [ESP + 0xc]       ; 0047dc31
    TEST EBX,EBX                        ; 0047dc35
    JZ 0x0047dc3e                       ; 0047dc37
        ;   XREF to: 0047dc3e (CONDITIONAL_JUMP)  ; LAB_0047dc3e
    CMP byte ptr [EBX],0x0              ; 0047dc39
    JNZ 0x0047dc42                      ; 0047dc3c
        ;   XREF to: 0047dc42 (CONDITIONAL_JUMP)  ; LAB_0047dc42
    XOR EAX,EAX                         ; 0047dc3e
        ;   Label: LAB_0047dc3e
    POP EBX                             ; 0047dc40
        ;   Label: LAB_0047dc40
    RET                                 ; 0047dc41
    PUSH 0x58022c                       ; 0047dc42 | = "none"
        ;   Label: LAB_0047dc42
    PUSH EBX                            ; 0047dc47
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047dc48
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047dc4d
    TEST EAX,EAX                        ; 0047dc50
    JZ 0x0047dc40                       ; 0047dc52
        ;   XREF to: 0047dc40 (CONDITIONAL_JUMP)  ; LAB_0047dc40
    PUSH EBX                            ; 0047dc54
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047dc55
    XOR EDX,EDX                         ; 0047dc59
    PUSH ECX                            ; 0047dc5b
    MOV dword ptr [0x01c08b5c],EDX      ; 0047dc5c | DAT_01c08b5c
    CALL core_event.cpp_CEventList_evaluateExpression_FUN_0047dd10 ; 0047dc62
        ;   XREF to: 0047dd10 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateExpression_FUN_0047dd10(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 0047dc67
    TEST EAX,EAX                        ; 0047dc6a
    JGE 0x0047dc40                      ; 0047dc6c
        ;   XREF to: 0047dc40 (CONDITIONAL_JUMP)  ; LAB_0047dc40
    PUSH 0x1c08b60                      ; 0047dc6e | DAT_01c08b60
    PUSH 0x580231                       ; 0047dc73 | = "%s\n"
    MOV EBX,dword ptr [0x005ad350]      ; 0047dc78 | g_CConsole_PTR_005ad350
    PUSH EBX                            ; 0047dc7e | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0047dc7f
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0047dc84
    XOR EAX,EAX                         ; 0047dc87
    POP EBX                             ; 0047dc89
    RET                                 ; 0047dc8a

