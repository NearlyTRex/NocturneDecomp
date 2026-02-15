; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_event_cpp_CEventList_validateCondition_FUN_004add00(CEventList *this_ptr,char *expression)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   expression
;
; XREF[4]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f91a
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004acd94
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055cc1f
;   core_script.cpp_parseConditionExpr_FUN_005594a0 at 005594d0
;
; Referenced Globals:
;   int g_EventDryRun
;   char[256] g_EventErrorMessageBuffer
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateExpression_FUN_004add80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004add00
        ;   Label: core_event.cpp_CEventList_validateCondition_FUN_004add00
    MOV EAX,dword ptr [ESP + 0xc]       ; 004add01
    CMP byte ptr [EAX],0x0              ; 004add05
    JNZ 0x004add0e                      ; 004add08
        ;   XREF to: 004add0e (CONDITIONAL_JUMP)  ; LAB_004add0e
    XOR EAX,EAX                         ; 004add0a
        ;   Label: LAB_004add0a
    POP EBX                             ; 004add0c
    RET                                 ; 004add0d
    PUSH EAX                            ; 004add0e
        ;   Label: LAB_004add0e
    MOV ECX,dword ptr [ESP + 0xc]       ; 004add0f
    MOV EDX,0x1                         ; 004add13
    PUSH ECX                            ; 004add18
    XOR EBX,EBX                         ; 004add19
    MOV dword ptr [0x02d0a45c],EDX      ; 004add1b | g_EventDryRun
    CALL core_event.cpp_CEventList_evaluateExpression_FUN_004add80 ; 004add21
        ;   XREF to: 004add80 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateExpression_FUN_004add80(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 004add26
    MOV dword ptr [0x02d0a45c],EBX      ; 004add29 | g_EventDryRun
    TEST EAX,EAX                        ; 004add2f
    JGE 0x004add0a                      ; 004add31
        ;   XREF to: 004add0a (CONDITIONAL_JUMP)  ; LAB_004add0a
    MOV EAX,0x2d0a460                   ; 004add33 | g_EventErrorMessageBuffer
    POP EBX                             ; 004add38
    RET                                 ; 004add39

