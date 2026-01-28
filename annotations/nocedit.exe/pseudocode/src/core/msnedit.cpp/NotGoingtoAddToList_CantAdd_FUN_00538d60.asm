; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_msnedit_cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60(void)
;
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538650
;
; Referenced Globals:
;   TerminatedCString s_I_m_not_going_to_add_s_i_0063c2c6
;   TerminatedCString s_Can_t_add_s_to_set_list__0063c30c
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   core_msnedit.cpp_FUN_00538f40
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538d60
        ;   Label: core_msnedit.cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60
    PUSH ESI                            ; 00538d61
    MOV EBX,dword ptr [ESP + 0xc]       ; 00538d62
    MOV ESI,dword ptr [ESP + 0x10]      ; 00538d66
    PUSH ESI                            ; 00538d6a
    PUSH EBX                            ; 00538d6b
    CALL core_msnedit.cpp_FUN_00538f40  ; 00538d6c
        ;   XREF to: 00538f40 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_00538f40()
    ADD ESP,0x8                         ; 00538d71
    TEST EAX,EAX                        ; 00538d74
    JGE 0x00538d9d                      ; 00538d76
        ;   XREF to: 00538d9d (CONDITIONAL_JUMP)  ; LAB_00538d9d
    MOV EDX,dword ptr [EBX + 0x144]     ; 00538d78
    CMP EDX,0x4                         ; 00538d7e
    JL 0x00538db5                       ; 00538d81
        ;   XREF to: 00538db5 (CONDITIONAL_JUMP)  ; LAB_00538db5
    PUSH 0x4                            ; 00538d83
    PUSH ESI                            ; 00538d85
    PUSH 0x63c30c                       ; 00538d86 | = "Can't add %s to set list - too many s..."
    MOV EBX,dword ptr [0x00678a60]      ; 00538d8b | g_CEditorToolsPtr
    PUSH EBX                            ; 00538d91 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00538d92
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 00538d97
    POP ESI                             ; 00538d9a
    POP EBX                             ; 00538d9b
    RET                                 ; 00538d9c
    PUSH ESI                            ; 00538d9d
        ;   Label: LAB_00538d9d
    PUSH 0x63c2c6                       ; 00538d9e | = "I'm not going to add %s into the set ..."
    MOV ESI,dword ptr [0x00678a60]      ; 00538da3 | g_CEditorToolsPtr
    PUSH ESI                            ; 00538da9 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00538daa
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00538daf
    POP ESI                             ; 00538db2
    POP EBX                             ; 00538db3
    RET                                 ; 00538db4
    PUSH EDI                            ; 00538db5
        ;   Label: LAB_00538db5
    MOV EDI,EDX                         ; 00538db6
    LEA EAX,[EBX + 0x148]               ; 00538db8
    SHL EDI,0x8                         ; 00538dbe
    ADD EDI,EAX                         ; 00538dc1
    PUSH EDI                            ; 00538dc3
    MOV AL,byte ptr [ESI]               ; 00538dc4
        ;   Label: LAB_00538dc4
    MOV byte ptr [EDI],AL               ; 00538dc6
    CMP AL,0x0                          ; 00538dc8
    JZ 0x00538ddc                       ; 00538dca
        ;   XREF to: 00538ddc (CONDITIONAL_JUMP)  ; LAB_00538ddc
    MOV AL,byte ptr [ESI + 0x1]         ; 00538dcc
    ADD ESI,0x2                         ; 00538dcf
    MOV byte ptr [EDI + 0x1],AL         ; 00538dd2
    ADD EDI,0x2                         ; 00538dd5
    CMP AL,0x0                          ; 00538dd8
    JNZ 0x00538dc4                      ; 00538dda
        ;   XREF to: 00538dc4 (CONDITIONAL_JUMP)  ; LAB_00538dc4
    POP EDI                             ; 00538ddc
        ;   Label: LAB_00538ddc
    INC dword ptr [EBX + 0x144]         ; 00538ddd
    POP EDI                             ; 00538de3
    POP ESI                             ; 00538de4
    POP EBX                             ; 00538de5
    RET                                 ; 00538de6

