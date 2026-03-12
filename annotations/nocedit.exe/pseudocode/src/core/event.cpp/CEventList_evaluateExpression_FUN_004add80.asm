; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_evaluateExpression_FUN_004add80(CEventList *this_ptr,char *expression)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   expression
; Local Variables:
; int              Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 at 004adcd2
;   core_event.cpp_CEventList_validateCondition_FUN_004add00 at 004add21
;
; Referenced Globals:
;   TerminatedCString s_Syntax_error_006252b7
;   undefined4 s_yntax_error_006252b8
;   undefined4 s_ntax_error_006252b9
;   undefined4 s_tax_error_006252ba
;   char[256] g_EventErrorMessageBuffer
;   undefined4 CHAR_ARRAY_02d0a461
;   undefined4 CHAR_ARRAY_02d0a462
;   undefined4 DAT_02d0a463
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateLogicalExpr_FUN_004b0270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004add80
        ;   Label: core_event.cpp_CEventList_evaluateExpression_FUN_004add80
    SUB ESP,0x4                         ; 004add81
    XOR AH,AH                           ; 004add84
    MOV byte ptr [0x02d0a460],AH        ; 004add86 | g_EventErrorMessageBuffer
    MOV EAX,ESP                         ; 004add8c
    PUSH EAX                            ; 004add8e
    MOV ECX,dword ptr [ESP + 0x14]      ; 004add8f
    PUSH ECX                            ; 004add93
    MOV EBX,dword ptr [ESP + 0x14]      ; 004add94
    XOR EDX,EDX                         ; 004add98
    PUSH EBX                            ; 004add9a
    MOV dword ptr [ESP + 0xc],EDX       ; 004add9b
    CALL core_event.cpp_CEventList_evaluateLogicalExpr_FUN_004b0270 ; 004add9f
        ;   XREF to: 004b0270 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateLogicalExpr_FUN_004b0270(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 004adda4
    TEST EAX,EAX                        ; 004adda7
    JL 0x004addb7                       ; 004adda9
        ;   XREF to: 004addb7 (CONDITIONAL_JUMP)  ; LAB_004addb7
    MOV EDX,dword ptr [ESP + 0x10]      ; 004addab
    ADD EDX,dword ptr [ESP]             ; 004addaf
    CMP byte ptr [EDX],0x0              ; 004addb2
    JNZ 0x004addbc                      ; 004addb5
        ;   XREF to: 004addbc (CONDITIONAL_JUMP)  ; LAB_004addbc
    ADD ESP,0x4                         ; 004addb7
        ;   Label: LAB_004addb7
    POP EBX                             ; 004addba
    RET                                 ; 004addbb
    PUSH EDI                            ; 004addbc
        ;   Label: LAB_004addbc
    PUSH ESI                            ; 004addbd
    MOV ESI,0x6252b7                    ; 004addbe | = "Syntax error"
    MOV EDI,0x2d0a460                   ; 004addc3 | g_EventErrorMessageBuffer
    PUSH EDI                            ; 004addc8 | g_EventErrorMessageBuffer
    MOV AL,byte ptr [ESI]               ; 004addc9 | = "Syntax error" | s_ntax_error_006252b9
        ;   Label: LAB_004addc9
    MOV byte ptr [EDI],AL               ; 004addcb | g_EventErrorMessageBuffer | CHAR_ARRAY_02d0a462
    CMP AL,0x0                          ; 004addcd
    JZ 0x004adde1                       ; 004addcf
        ;   XREF to: 004adde1 (CONDITIONAL_JUMP)  ; LAB_004adde1
    MOV AL,byte ptr [ESI + 0x1]         ; 004addd1 | s_yntax_error_006252b8 | s_tax_error_006252ba
    ADD ESI,0x2                         ; 004addd4
    MOV byte ptr [EDI + 0x1],AL         ; 004addd7 | CHAR_ARRAY_02d0a461 | DAT_02d0a463
    ADD EDI,0x2                         ; 004addda
    CMP AL,0x0                          ; 004adddd
    JNZ 0x004addc9                      ; 004adddf
        ;   XREF to: 004addc9 (CONDITIONAL_JUMP)  ; LAB_004addc9
    POP EDI                             ; 004adde1
        ;   Label: LAB_004adde1
    MOV EAX,0xffffffff                  ; 004adde2
    POP ESI                             ; 004adde7
    POP EDI                             ; 004adde8
    ADD ESP,0x4                         ; 004adde9
    POP EBX                             ; 004addec
    RET                                 ; 004added

