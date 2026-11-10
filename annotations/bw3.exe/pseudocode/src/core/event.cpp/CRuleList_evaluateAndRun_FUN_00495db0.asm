; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CRuleList_evaluateAndRun_FUN_00495db0(CRuleList *this_ptr)
;
; Parameters:
; CRuleList *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_hero.cpp_FUN_004d4520 at 004d460a
;   core_prye.cpp_CPrye_doHeroAction_FUN_00525a20 at 00525aad
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_event.cpp_CRuleList_findFirst_FUN_00495d60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00495db0
        ;   Label: core_event.cpp_CRuleList_evaluateAndRun_FUN_00495db0
    PUSH EDX                            ; 00495db4
    CALL core_event.cpp_CRuleList_findFirst_FUN_00495d60 ; 00495db5
        ;   XREF to: 00495d60 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CRuleList_findFirst_FUN_00495d60(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 00495dba
    TEST EAX,EAX                        ; 00495dbd
    JGE 0x00495dc4                      ; 00495dbf
        ;   XREF to: 00495dc4 (CONDITIONAL_JUMP)  ; LAB_00495dc4
    XOR EAX,EAX                         ; 00495dc1
    RET                                 ; 00495dc3
    MOV EDX,EAX                         ; 00495dc4
        ;   Label: LAB_00495dc4
    SHL EAX,0x2                         ; 00495dc6
    SUB EAX,EDX                         ; 00495dc9
    SHL EAX,0x3                         ; 00495dcb
    ADD EAX,EDX                         ; 00495dce
    MOV EDX,dword ptr [ESP + 0x4]       ; 00495dd0
    SHL EAX,0x2                         ; 00495dd4
    ADD EDX,0x1f8                       ; 00495dd7
    ADD EAX,EDX                         ; 00495ddd
    PUSH EAX                            ; 00495ddf
    MOV ECX,dword ptr [0x005fba60]      ; 00495de0 | DAT_005fba60
    PUSH ECX                            ; 00495de6
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00495de7
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    MOV EAX,0x1                         ; 00495dec
    ADD ESP,0x8                         ; 00495df1
    RET                                 ; 00495df4

