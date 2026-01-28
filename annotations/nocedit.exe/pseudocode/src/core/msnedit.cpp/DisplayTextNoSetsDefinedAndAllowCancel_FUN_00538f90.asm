; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown int core_msnedit_cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90(void)
;
; Local Variables:
; undefined1       Stack[-0x3b8]:1  local_3b8
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538665
;
; Referenced Globals:
;   TerminatedCString s_No_sets_defined_0063c33b
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538f90
        ;   Label: core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90
    PUSH ESI                            ; 00538f91
    PUSH EDI                            ; 00538f92
    PUSH EBP                            ; 00538f93
    SUB ESP,0x3a8                       ; 00538f94
    MOV EDI,dword ptr [ESP + 0x3bc]     ; 00538f9a
    CMP dword ptr [EDI + 0x144],0x1     ; 00538fa1
    JL 0x0053902d                       ; 00538fa8
        ;   XREF to: 0053902d (CONDITIONAL_JUMP)  ; LAB_0053902d
    MOV EAX,ESP                         ; 00538fae
    PUSH EAX                            ; 00538fb0
    XOR EBX,EBX                         ; 00538fb1
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00538fb3
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    MOV ECX,dword ptr [EDI + 0x144]     ; 00538fb8
    ADD ESP,0x4                         ; 00538fbe
    TEST ECX,ECX                        ; 00538fc1
    JLE 0x00538ff0                      ; 00538fc3
        ;   XREF to: 00538ff0 (CONDITIONAL_JUMP)  ; LAB_00538ff0
    LEA ESI,[EDI + 0x148]               ; 00538fc5
    PUSH ESI                            ; 00538fcb
        ;   Label: LAB_00538fcb
    LEA EAX,[ESP + 0x4]                 ; 00538fcc
    PUSH EAX                            ; 00538fd0
    INC EBX                             ; 00538fd1
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00538fd2
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESI,0x100                       ; 00538fd7
    MOV EBP,dword ptr [EDI + 0x144]     ; 00538fdd
    ADD ESP,0x8                         ; 00538fe3
    CMP EBX,EBP                         ; 00538fe6
    JL 0x00538fcb                       ; 00538fe8
        ;   XREF to: 00538fcb (CONDITIONAL_JUMP)  ; LAB_00538fcb
    LEA EAX,[EAX]                       ; 00538fea
    PUSH 0x0                            ; 00538ff0
        ;   Label: LAB_00538ff0
    MOV EAX,dword ptr [ESP + 0x3c8]     ; 00538ff2
    PUSH EAX                            ; 00538ff9
    MOV EDX,dword ptr [ESP + 0x3c8]     ; 00538ffa
    PUSH EDX                            ; 00539001
    LEA EAX,[ESP + 0xc]                 ; 00539002
    PUSH EAX                            ; 00539006
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00539007
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0053900c
    PUSH 0x0                            ; 0053900f
    MOV ESI,EAX                         ; 00539011
    LEA EAX,[ESP + 0x4]                 ; 00539013
    PUSH EAX                            ; 00539017
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00539018
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0053901d
    MOV EAX,ESI                         ; 00539020
    ADD ESP,0x3a8                       ; 00539022
    POP EBP                             ; 00539028
    POP EDI                             ; 00539029
    POP ESI                             ; 0053902a
    POP EBX                             ; 0053902b
    RET                                 ; 0053902c
    PUSH 0x63c33b                       ; 0053902d | = "No sets defined."
        ;   Label: LAB_0053902d
    MOV EBX,dword ptr [0x00678a60]      ; 00539032 | g_CEditorToolsPtr
    PUSH EBX                            ; 00539038 | g_CEditorToolsInstance
    MOV ESI,0xffffffff                  ; 00539039
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0053903e
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00539043
    MOV EAX,ESI                         ; 00539046
    ADD ESP,0x3a8                       ; 00539048
    POP EBP                             ; 0053904e
    POP EDI                             ; 0053904f
    POP ESI                             ; 00539050
    POP EBX                             ; 00539051
    RET                                 ; 00539052

