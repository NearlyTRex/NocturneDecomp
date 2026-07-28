; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_evaluateExpression_FUN_0047dd10(CEventList *this_ptr,char *expression)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   expression
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 at 0047dc62
;   core_event.cpp_CEventList_validateCondition_FUN_0047dc90 at 0047dcb1
;
; Referenced Globals:
;   TerminatedCString s_Syntax_error_00580235
;   undefined4 s_yntax_error_00580235+1
;   undefined4 s_ntax_error_00580235+2
;   undefined4 s_tax_error_00580235+3
;   undefined4 DAT_01c08b60
;   undefined4 DAT_01c08b61
;   undefined4 DAT_01c08b62
;   undefined4 DAT_01c08b63
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00480220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047dd10
        ;   Label: core_event.cpp_CEventList_evaluateExpression_FUN_0047dd10
    SUB ESP,0x4                         ; 0047dd11
    XOR AH,AH                           ; 0047dd14
    MOV byte ptr [0x01c08b60],AH        ; 0047dd16 | DAT_01c08b60
    MOV EAX,ESP                         ; 0047dd1c
    PUSH EAX                            ; 0047dd1e
    MOV ECX,dword ptr [ESP + 0x14]      ; 0047dd1f
    PUSH ECX                            ; 0047dd23
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047dd24
    XOR EDX,EDX                         ; 0047dd28
    PUSH EBX                            ; 0047dd2a
    MOV dword ptr [ESP + 0xc],EDX       ; 0047dd2b
    CALL core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00480220 ; 0047dd2f
        ;   XREF to: 00480220 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00480220(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 0047dd34
    TEST EAX,EAX                        ; 0047dd37
    JL 0x0047dd47                       ; 0047dd39
        ;   XREF to: 0047dd47 (CONDITIONAL_JUMP)  ; LAB_0047dd47
    MOV EDX,dword ptr [ESP + 0x10]      ; 0047dd3b
    ADD EDX,dword ptr [ESP]             ; 0047dd3f
    CMP byte ptr [EDX],0x0              ; 0047dd42
    JNZ 0x0047dd4c                      ; 0047dd45
        ;   XREF to: 0047dd4c (CONDITIONAL_JUMP)  ; LAB_0047dd4c
    ADD ESP,0x4                         ; 0047dd47
        ;   Label: LAB_0047dd47
    POP EBX                             ; 0047dd4a
    RET                                 ; 0047dd4b
    PUSH EDI                            ; 0047dd4c
        ;   Label: LAB_0047dd4c
    PUSH ESI                            ; 0047dd4d
    MOV ESI,0x580235                    ; 0047dd4e | = "Syntax error"
    MOV EDI,0x1c08b60                   ; 0047dd53
    PUSH EDI                            ; 0047dd58 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047dd59 | = "Syntax error" | s_ntax_error_00580235+2
        ;   Label: LAB_0047dd59
    MOV byte ptr [EDI],AL               ; 0047dd5b | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047dd5d
    JZ 0x0047dd71                       ; 0047dd5f
        ;   XREF to: 0047dd71 (CONDITIONAL_JUMP)  ; LAB_0047dd71
    MOV AL,byte ptr [ESI + 0x1]         ; 0047dd61 | s_yntax_error_00580235+1 | s_tax_error_00580235+3
    ADD ESI,0x2                         ; 0047dd64
    MOV byte ptr [EDI + 0x1],AL         ; 0047dd67 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047dd6a
    CMP AL,0x0                          ; 0047dd6d
    JNZ 0x0047dd59                      ; 0047dd6f
        ;   XREF to: 0047dd59 (CONDITIONAL_JUMP)  ; LAB_0047dd59
    POP EDI                             ; 0047dd71
        ;   Label: LAB_0047dd71
    MOV EAX,0xffffffff                  ; 0047dd72
    POP ESI                             ; 0047dd77
    POP EDI                             ; 0047dd78
    ADD ESP,0x4                         ; 0047dd79
    POP EBX                             ; 0047dd7c
    RET                                 ; 0047dd7d

