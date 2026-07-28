; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_event_cpp_CEventList_validateCondition_FUN_0047dc90(CEventList *this_ptr,char *expression)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   expression
;
; XREF[3]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047cd24
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 005016cf
;   core_script.cpp_parseConditionExpr_FUN_004fe140 at 004fe170
;
; Referenced Globals:
;   undefined4 DAT_01c08b5c
;   undefined4 DAT_01c08b60
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateExpression_FUN_0047dd10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047dc90
        ;   Label: core_event.cpp_CEventList_validateCondition_FUN_0047dc90
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047dc91
    CMP byte ptr [EAX],0x0              ; 0047dc95
    JNZ 0x0047dc9e                      ; 0047dc98
        ;   XREF to: 0047dc9e (CONDITIONAL_JUMP)  ; LAB_0047dc9e
    XOR EAX,EAX                         ; 0047dc9a
        ;   Label: LAB_0047dc9a
    POP EBX                             ; 0047dc9c
    RET                                 ; 0047dc9d
    PUSH EAX                            ; 0047dc9e
        ;   Label: LAB_0047dc9e
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047dc9f
    MOV EDX,0x1                         ; 0047dca3
    PUSH ECX                            ; 0047dca8
    XOR EBX,EBX                         ; 0047dca9
    MOV dword ptr [0x01c08b5c],EDX      ; 0047dcab | DAT_01c08b5c
    CALL core_event.cpp_CEventList_evaluateExpression_FUN_0047dd10 ; 0047dcb1
        ;   XREF to: 0047dd10 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateExpression_FUN_0047dd10(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 0047dcb6
    MOV dword ptr [0x01c08b5c],EBX      ; 0047dcb9 | DAT_01c08b5c
    TEST EAX,EAX                        ; 0047dcbf
    JGE 0x0047dc9a                      ; 0047dcc1
        ;   XREF to: 0047dc9a (CONDITIONAL_JUMP)  ; LAB_0047dc9a
    MOV EAX,0x1c08b60                   ; 0047dcc3 | DAT_01c08b60
    POP EBX                             ; 0047dcc8
    RET                                 ; 0047dcc9

