; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList *this_ptr,char *condition_expression)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   condition_expression
;
; XREF[56]:
;   core_anvil.cpp_CAnvil_process_FUN_0040eae0 at 0040eaf6
;   core_armour.cpp_CArmour_process_FUN_0040ef00 at 0040efdb
;   core_baron.cpp_CBaron_process_FUN_0040f950 at 0040f97f
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 00413700
;   core_biggs.cpp_CBiggs_process_FUN_00414e50 at 00415066
;   core_bodypart.cpp_CBodyPart_process_FUN_004162b0 at 0041643c
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 004186e3
;   core_bugs.cpp_CBugs_process_FUN_0041f390 at 0041f3e9
;   core_conveyor.cpp_CConstruct_process_FUN_00436e80 at 00437ae3
;   core_conveyor.cpp_CConveyor_process_FUN_004385e0 at 004385f9
;   ... and 46 more
;
; Referenced Globals:
;   undefined4 DAT_005d4390
;   undefined4 DAT_005d4395
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01c3dd0c
;   undefined4 DAT_01c3dd10
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateExpression_FUN_0048e420
;   crt_string.c__stricmp_FUN_005b8130
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e340
        ;   Label: core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048e341
    TEST EBX,EBX                        ; 0048e345
    JZ 0x0048e34e                       ; 0048e347
        ;   XREF to: 0048e34e (CONDITIONAL_JUMP)  ; LAB_0048e34e
    CMP byte ptr [EBX],0x0              ; 0048e349
    JNZ 0x0048e352                      ; 0048e34c
        ;   XREF to: 0048e352 (CONDITIONAL_JUMP)  ; LAB_0048e352
    XOR EAX,EAX                         ; 0048e34e
        ;   Label: LAB_0048e34e
    POP EBX                             ; 0048e350
        ;   Label: LAB_0048e350
    RET                                 ; 0048e351
    PUSH 0x5d4390                       ; 0048e352 | DAT_005d4390
        ;   Label: LAB_0048e352
    PUSH EBX                            ; 0048e357
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048e358
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048e35d
    TEST EAX,EAX                        ; 0048e360
    JZ 0x0048e350                       ; 0048e362
        ;   XREF to: 0048e350 (CONDITIONAL_JUMP)  ; LAB_0048e350
    PUSH EBX                            ; 0048e364
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048e365
    XOR EDX,EDX                         ; 0048e369
    PUSH ECX                            ; 0048e36b
    MOV dword ptr [0x01c3dd0c],EDX      ; 0048e36c | DAT_01c3dd0c
    CALL core_event.cpp_CEventList_evaluateExpression_FUN_0048e420 ; 0048e372
        ;   XREF to: 0048e420 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateExpression_FUN_0048e420(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 0048e377
    TEST EAX,EAX                        ; 0048e37a
    JGE 0x0048e350                      ; 0048e37c
        ;   XREF to: 0048e350 (CONDITIONAL_JUMP)  ; LAB_0048e350
    PUSH 0x1c3dd10                      ; 0048e37e | DAT_01c3dd10
    PUSH 0x5d4395                       ; 0048e383 | DAT_005d4395
    MOV EBX,dword ptr [0x00609ed0]      ; 0048e388 | g_CConsolePtr
    PUSH EBX                            ; 0048e38e | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0048e38f
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 0048e394
    XOR EAX,EAX                         ; 0048e397
    POP EBX                             ; 0048e399
    RET                                 ; 0048e39a

