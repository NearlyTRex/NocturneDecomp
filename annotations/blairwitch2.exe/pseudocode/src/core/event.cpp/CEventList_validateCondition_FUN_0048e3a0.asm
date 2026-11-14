; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_event_cpp_CEventList_validateCondition_FUN_0048e3a0(CEventList *this_ptr,char *expression)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   expression
;
; XREF[3]:
;   core_event.cpp_FUN_00489670 at 00489b3e
;   core_script.cpp_CScript_step_FUN_00522350 at 00525015
;   core_script.cpp_parseConditionExpr_FUN_00521250 at 00521280
;
; Referenced Globals:
;   undefined4 DAT_01c3dd0c
;   undefined4 DAT_01c3dd10
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateExpression_FUN_0048e420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e3a0
        ;   Label: core_event.cpp_CEventList_validateCondition_FUN_0048e3a0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048e3a1
    CMP byte ptr [EAX],0x0              ; 0048e3a5
    JNZ 0x0048e3ae                      ; 0048e3a8
        ;   XREF to: 0048e3ae (CONDITIONAL_JUMP)  ; LAB_0048e3ae
    XOR EAX,EAX                         ; 0048e3aa
        ;   Label: LAB_0048e3aa
    POP EBX                             ; 0048e3ac
    RET                                 ; 0048e3ad
    PUSH EAX                            ; 0048e3ae
        ;   Label: LAB_0048e3ae
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048e3af
    MOV EDX,0x1                         ; 0048e3b3
    PUSH ECX                            ; 0048e3b8
    XOR EBX,EBX                         ; 0048e3b9
    MOV dword ptr [0x01c3dd0c],EDX      ; 0048e3bb | DAT_01c3dd0c
    CALL core_event.cpp_CEventList_evaluateExpression_FUN_0048e420 ; 0048e3c1
        ;   XREF to: 0048e420 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateExpression_FUN_0048e420(CEventList * this_ptr, char * expression)
    ADD ESP,0x8                         ; 0048e3c6
    MOV dword ptr [0x01c3dd0c],EBX      ; 0048e3c9 | DAT_01c3dd0c
    TEST EAX,EAX                        ; 0048e3cf
    JGE 0x0048e3aa                      ; 0048e3d1
        ;   XREF to: 0048e3aa (CONDITIONAL_JUMP)  ; LAB_0048e3aa
    MOV EAX,0x1c3dd10                   ; 0048e3d3 | DAT_01c3dd10
    POP EBX                             ; 0048e3d8
    RET                                 ; 0048e3d9

