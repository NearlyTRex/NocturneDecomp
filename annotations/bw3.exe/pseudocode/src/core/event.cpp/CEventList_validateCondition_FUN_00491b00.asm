; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_event_cpp_CEventList_validateCondition_FUN_00491b00(CEventList *this_ptr,char *expression)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   expression
;
; XREF[3]:
;   core_event.cpp_FUN_0048c2e0 at 0048c81a
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052c5b1
;   core_script.cpp_parseConditionExpr_FUN_00528970 at 005289a0
;
; Referenced Globals:
;   undefined4 DAT_01c734ac
;   undefined4 DAT_01c734b0
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateExpression_FUN_00491b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491b00
        ;   Label: core_event.cpp_CEventList_validateCondition_FUN_00491b00
    MOV EAX,dword ptr [ESP + 0xc]       ; 00491b01
    CMP byte ptr [EAX],0x0              ; 00491b05
    JNZ 0x00491b0e                      ; 00491b08
        ;   XREF to: 00491b0e (CONDITIONAL_JUMP)  ; LAB_00491b0e
    XOR EAX,EAX                         ; 00491b0a
        ;   Label: LAB_00491b0a
    POP EBX                             ; 00491b0c
    RET                                 ; 00491b0d
    PUSH EAX                            ; 00491b0e
        ;   Label: LAB_00491b0e
    MOV ECX,dword ptr [ESP + 0xc]       ; 00491b0f
    MOV EDX,0x1                         ; 00491b13
    PUSH ECX                            ; 00491b18
    XOR EBX,EBX                         ; 00491b19
    MOV dword ptr [0x01c734ac],EDX      ; 00491b1b | DAT_01c734ac
    CALL core_event.cpp_CEventList_evaluateExpression_FUN_00491b80 ; 00491b21
        ;   XREF to: 00491b80 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateExpression_FUN_00491b80(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 00491b26
    MOV dword ptr [0x01c734ac],EBX      ; 00491b29 | DAT_01c734ac
    TEST EAX,EAX                        ; 00491b2f
    JGE 0x00491b0a                      ; 00491b31
        ;   XREF to: 00491b0a (CONDITIONAL_JUMP)  ; LAB_00491b0a
    MOV EAX,0x1c734b0                   ; 00491b33 | DAT_01c734b0
    POP EBX                             ; 00491b38
    RET                                 ; 00491b39

