; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_evaluateExpression_FUN_0048e420(CEventList *this_ptr,char *expression)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   expression
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 at 0048e372
;   core_event.cpp_CEventList_validateCondition_FUN_0048e3a0 at 0048e3c1
;
; Referenced Globals:
;   TerminatedCString s_Syntax_error_005d4399
;   undefined4 s_yntax_error_005d4399+1
;   undefined4 s_ntax_error_005d4399+2
;   undefined4 s_tax_error_005d4399+3
;   undefined4 DAT_01c3dd10
;   undefined4 DAT_01c3dd11
;   undefined4 DAT_01c3dd12
;   undefined4 DAT_01c3dd13
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00490ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e420
        ;   Label: core_event.cpp_CEventList_evaluateExpression_FUN_0048e420
    SUB ESP,0x4                         ; 0048e421
    XOR AH,AH                           ; 0048e424
    MOV byte ptr [0x01c3dd10],AH        ; 0048e426 | DAT_01c3dd10
    MOV EAX,ESP                         ; 0048e42c
    PUSH EAX                            ; 0048e42e
    MOV ECX,dword ptr [ESP + 0x14]      ; 0048e42f
    PUSH ECX                            ; 0048e433
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048e434
    XOR EDX,EDX                         ; 0048e438
    PUSH EBX                            ; 0048e43a
    MOV dword ptr [ESP + 0xc],EDX       ; 0048e43b
    CALL core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00490ec0 ; 0048e43f
        ;   XREF to: 00490ec0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00490ec0(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 0048e444
    TEST EAX,EAX                        ; 0048e447
    JL 0x0048e457                       ; 0048e449
        ;   XREF to: 0048e457 (CONDITIONAL_JUMP)  ; LAB_0048e457
    MOV EDX,dword ptr [ESP + 0x10]      ; 0048e44b
    ADD EDX,dword ptr [ESP]             ; 0048e44f
    CMP byte ptr [EDX],0x0              ; 0048e452
    JNZ 0x0048e45c                      ; 0048e455
        ;   XREF to: 0048e45c (CONDITIONAL_JUMP)  ; LAB_0048e45c
    ADD ESP,0x4                         ; 0048e457
        ;   Label: LAB_0048e457
    POP EBX                             ; 0048e45a
    RET                                 ; 0048e45b
    PUSH EDI                            ; 0048e45c
        ;   Label: LAB_0048e45c
    PUSH ESI                            ; 0048e45d
    MOV ESI,0x5d4399                    ; 0048e45e | = "Syntax error"
    MOV EDI,0x1c3dd10                   ; 0048e463
    PUSH EDI                            ; 0048e468 | DAT_01c3dd10
    MOV AL,byte ptr [ESI]               ; 0048e469 | = "Syntax error" | s_ntax_error_005d4399+2
        ;   Label: LAB_0048e469
    MOV byte ptr [EDI],AL               ; 0048e46b | DAT_01c3dd10 | DAT_01c3dd12
    CMP AL,0x0                          ; 0048e46d
    JZ 0x0048e481                       ; 0048e46f
        ;   XREF to: 0048e481 (CONDITIONAL_JUMP)  ; LAB_0048e481
    MOV AL,byte ptr [ESI + 0x1]         ; 0048e471 | s_yntax_error_005d4399+1 | s_tax_error_005d4399+3
    ADD ESI,0x2                         ; 0048e474
    MOV byte ptr [EDI + 0x1],AL         ; 0048e477 | DAT_01c3dd11 | DAT_01c3dd13
    ADD EDI,0x2                         ; 0048e47a
    CMP AL,0x0                          ; 0048e47d
    JNZ 0x0048e469                      ; 0048e47f
        ;   XREF to: 0048e469 (CONDITIONAL_JUMP)  ; LAB_0048e469
    POP EDI                             ; 0048e481
        ;   Label: LAB_0048e481
    MOV EAX,0xffffffff                  ; 0048e482
    POP ESI                             ; 0048e487
    POP EDI                             ; 0048e488
    ADD ESP,0x4                         ; 0048e489
    POP EBX                             ; 0048e48c
    RET                                 ; 0048e48d

