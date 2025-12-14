; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_actor.cpp_FUN_0040fffe()
;
;
; XREF[1]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040ffe7
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEventList* g_CEventListPtr = 02d05310
;   CEditorTools g_CEditorToolsPtr
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_event.cpp_CEventList_FUN_004add40
;   core_event.cpp_CRuleList_insert_FUN_004b1680
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;
; *****************************************************************************

section .text

    LEA EAX,[ESP + 0x3678]              ; 0040fffe
        ;   Label: core_actor.cpp_FUN_0040fffe
    PUSH EAX                            ; 00410005
    MOV ECX,dword ptr [0x006793d0]      ; 00410006 | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 0041000c | g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004add40 ; 0041000d
        ;   XREF to: 004add40 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_FUN_004add40(CEventList * this_ptr)
    ADD ESP,0x8                         ; 00410012
    TEST EAX,EAX                        ; 00410015
    JNZ 0x00410052                      ; 00410017
        ;   XREF to: 00410052 (CONDITIONAL_JUMP)  ; LAB_00410052
    MOV ESI,dword ptr [EBX + 0x68]      ; 00410019
    MOV EAX,dword ptr [EBX + 0x5c]      ; 0041001c
    CMP EAX,dword ptr [ESI]             ; 0041001f
    JL 0x00410066                       ; 00410021
        ;   XREF to: 00410066 (CONDITIONAL_JUMP)  ; LAB_00410066
    LEA EAX,[ESP + 0x3678]              ; 00410023
    PUSH EAX                            ; 0041002a
    LEA EAX,[ESP + 0x3618]              ; 0041002b
    PUSH EAX                            ; 00410032
    MOV EBP,dword ptr [EBX + 0x5c]      ; 00410033
    PUSH EBP                            ; 00410036
    PUSH ESI                            ; 00410037
    CALL core_event.cpp_CRuleList_insert_FUN_004b1680 ; 00410038
        ;   XREF to: 004b1680 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CRuleList_insert_FUN_004b1680(CRuleList * this_ptr)
    ADD ESP,0x10                        ; 0041003d
    MOV ESI,0x1                         ; 00410040
    MOV EAX,ESI                         ; 00410045
    ADD ESP,0x37dc                      ; 00410047
    POP EBP                             ; 0041004d
    POP EDI                             ; 0041004e
    POP ESI                             ; 0041004f
    POP EBX                             ; 00410050
    RET                                 ; 00410051
    PUSH EAX                            ; 00410052
        ;   Label: LAB_00410052
    MOV EAX,[0x00678a60]                ; 00410053 | g_CEditorToolsPtr
    PUSH EAX                            ; 00410058 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00410059
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0041005e
    JMP 0x0040fdd3                      ; 00410061
        ;   XREF to: 0040fdd3 (UNCONDITIONAL_JUMP)  ; LAB_0040fdd3
    MOV EDX,EAX                         ; 00410066
        ;   Label: LAB_00410066
    SHL EAX,0x2                         ; 00410068
    SUB EAX,EDX                         ; 0041006b
    SHL EAX,0x3                         ; 0041006d
    ADD EAX,EDX                         ; 00410070
    ADD ESI,0x4                         ; 00410072
    SHL EAX,0x2                         ; 00410075
    LEA EDI,[ESI + EAX*0x1]             ; 00410078
    LEA ESI,[ESP + 0x3614]              ; 0041007b
    PUSH EDI                            ; 00410082
    MOV AL,byte ptr [ESI]               ; 00410083
        ;   Label: LAB_00410083
    MOV byte ptr [EDI],AL               ; 00410085
    CMP AL,0x0                          ; 00410087
    JZ 0x0041009b                       ; 00410089
        ;   XREF to: 0041009b (CONDITIONAL_JUMP)  ; LAB_0041009b
    MOV AL,byte ptr [ESI + 0x1]         ; 0041008b
    ADD ESI,0x2                         ; 0041008e
    MOV byte ptr [EDI + 0x1],AL         ; 00410091
    ADD EDI,0x2                         ; 00410094
    CMP AL,0x0                          ; 00410097
    JNZ 0x00410083                      ; 00410099
        ;   XREF to: 00410083 (CONDITIONAL_JUMP)  ; LAB_00410083
    POP EDI                             ; 0041009b
        ;   Label: LAB_0041009b
    MOV EDX,dword ptr [EBX + 0x5c]      ; 0041009c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041009f
    SUB EAX,EDX                         ; 004100a6
    SHL EAX,0x3                         ; 004100a8
    MOV EDI,dword ptr [EBX + 0x68]      ; 004100ab
    ADD EAX,EDX                         ; 004100ae
    ADD EDI,0x1f8                       ; 004100b0
    SHL EAX,0x2                         ; 004100b6
    LEA ESI,[ESP + 0x3678]              ; 004100b9
    ADD EDI,EAX                         ; 004100c0
    PUSH EDI                            ; 004100c2
    MOV AL,byte ptr [ESI]               ; 004100c3
        ;   Label: LAB_004100c3
    MOV byte ptr [EDI],AL               ; 004100c5
    CMP AL,0x0                          ; 004100c7
    JZ 0x004100db                       ; 004100c9
        ;   XREF to: 004100db (CONDITIONAL_JUMP)  ; LAB_004100db
    MOV AL,byte ptr [ESI + 0x1]         ; 004100cb
    ADD ESI,0x2                         ; 004100ce
    MOV byte ptr [EDI + 0x1],AL         ; 004100d1
    ADD EDI,0x2                         ; 004100d4
    CMP AL,0x0                          ; 004100d7
    JNZ 0x004100c3                      ; 004100d9
        ;   XREF to: 004100c3 (CONDITIONAL_JUMP)  ; LAB_004100c3
    POP EDI                             ; 004100db
        ;   Label: LAB_004100db
    MOV ESI,0x1                         ; 004100dc
    MOV EAX,ESI                         ; 004100e1
    ADD ESP,0x37dc                      ; 004100e3
    POP EBP                             ; 004100e9
    POP EDI                             ; 004100ea
    POP ESI                             ; 004100eb
    POP EBX                             ; 004100ec
    RET                                 ; 004100ed

