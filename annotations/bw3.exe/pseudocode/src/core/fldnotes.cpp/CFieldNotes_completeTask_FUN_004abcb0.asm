; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_CFieldNotes_completeTask_FUN_004abcb0(CFieldNotes *this_ptr,char *param_2)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_event.cpp_FUN_0048c2e0 at 0048d01a
;
; Referenced Globals:
;   void* switchdataD_004abc94 = 004abd01
;   TerminatedCString s_CFieldNotes_completeTask_005c1716
;   TerminatedCString s_CFieldNotes_completeTask_005c1747
;   TerminatedCString s_core_fldnotes_cpp_005c177d
;   TerminatedCString s_Field_note_s_has_invalid_005c1792
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_005fe374
;   undefined4 DAT_01d0d210
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a9c30
;   core_main.c_FUN_004e4330
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004abcb0
        ;   Label: core_fldnotes.cpp_CFieldNotes_completeTask_FUN_004abcb0
    PUSH ESI                            ; 004abcb1
    PUSH EDI                            ; 004abcb2
    PUSH EBP                            ; 004abcb3
    MOV EDI,dword ptr [ESP + 0x18]      ; 004abcb4
    MOV EDX,dword ptr [0x01d0d210]      ; 004abcb8 | DAT_01d0d210
    XOR EBP,EBP                         ; 004abcbe
    XOR EBX,EBX                         ; 004abcc0
    TEST EDX,EDX                        ; 004abcc2
    JLE 0x004abd4c                      ; 004abcc4
        ;   XREF to: 004abd4c (CONDITIONAL_JUMP)  ; LAB_004abd4c
    MOV ESI,0x1d0d214                   ; 004abcca
    PUSH EDI                            ; 004abccf
        ;   Label: LAB_004abccf
    PUSH ESI                            ; 004abcd0
    CALL core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a9c30 ; 004abcd1
        ;   XREF to: 004a9c30 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a9c30(SNotesSection * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004abcd6
    MOV EDX,EAX                         ; 004abcd9
    TEST EAX,EAX                        ; 004abcdb
    JZ 0x004abd3b                       ; 004abcdd
        ;   XREF to: 004abd3b (CONDITIONAL_JUMP)  ; LAB_004abd3b
    TEST EBP,EBP                        ; 004abcdf
    JZ 0x004abce6                       ; 004abce1
        ;   XREF to: 004abce6 (CONDITIONAL_JUMP)  ; LAB_004abce6
    MOV dword ptr [EBP],EBX             ; 004abce3
    MOV EAX,EDX                         ; 004abce6
        ;   Label: LAB_004abce6
    MOV EDX,EAX                         ; 004abce8
        ;   Label: LAB_004abce8
    TEST EAX,EAX                        ; 004abcea
    JZ 0x004abd50                       ; 004abcec
        ;   XREF to: 004abd50 (CONDITIONAL_JUMP)  ; LAB_004abd50
    MOV EAX,dword ptr [EAX + 0x140]     ; 004abcee
    INC EAX                             ; 004abcf4
    CMP EAX,0x5                         ; 004abcf5
    JA 0x004abd01                       ; 004abcf8
        ;   XREF to: 004abd01 (CONDITIONAL_JUMP)  ; caseD_ffffffff
    JMP dword ptr [EAX*0x4 + 0x4abc94]  ; 004abcfa | caseD_ffffffff | caseD_1 | caseD_3
        ;   Label: switchD
    MOV EAX,dword ptr [EDX + 0x140]     ; 004abd01
        ;   Label: caseD_ffffffff
    PUSH EAX                            ; 004abd07
    PUSH EDX                            ; 004abd08
    MOV EDI,0x5c177d                    ; 004abd09 | = "..\\core\\fldnotes.cpp"
    MOV EBP,0xab4                       ; 004abd0e
    PUSH 0x5c1792                       ; 004abd13 | = "Field note %s has invalid type %d"
    MOV dword ptr [0x01d71de0],EDI      ; 004abd18 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004abd1e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004abd24
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 004abd29
    MOV dword ptr [0x005fe374],0x1      ; 004abd2c | DAT_005fe374
        ;   Label: caseD_4
    POP EBP                             ; 004abd36
    POP EDI                             ; 004abd37
    POP ESI                             ; 004abd38
    POP EBX                             ; 004abd39
    RET                                 ; 004abd3a
    MOV ECX,dword ptr [0x01d0d210]      ; 004abd3b | DAT_01d0d210
        ;   Label: LAB_004abd3b
    INC EBX                             ; 004abd41
    ADD ESI,0x2e4                       ; 004abd42
    CMP EBX,ECX                         ; 004abd48
    JL 0x004abccf                       ; 004abd4a
        ;   XREF to: 004abccf (CONDITIONAL_JUMP)  ; LAB_004abccf
    XOR EAX,EAX                         ; 004abd4c
        ;   Label: LAB_004abd4c
    JMP 0x004abce8                      ; 004abd4e
        ;   XREF to: 004abce8 (UNCONDITIONAL_JUMP)  ; LAB_004abce8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004abd50
        ;   Label: LAB_004abd50
    PUSH EDX                            ; 004abd54
    PUSH 0x5c1716                       ; 004abd55 | = "CFieldNotes::completeTask - entry '%s..."
    MOV ECX,dword ptr [0x005fb140]      ; 004abd5a | g_CEditorToolsPtr
    PUSH ECX                            ; 004abd60
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004abd61
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004abd66
    MOV dword ptr [0x005fe374],0x1      ; 004abd69 | DAT_005fe374
    POP EBP                             ; 004abd73
    POP EDI                             ; 004abd74
    POP ESI                             ; 004abd75
    POP EBX                             ; 004abd76
    RET                                 ; 004abd77
    MOV EBX,dword ptr [ESP + 0x18]      ; 004abd78
        ;   Label: caseD_0
    PUSH EBX                            ; 004abd7c
    PUSH 0x5c1747                       ; 004abd7d | = "CFieldNotes::completeTask - entry '%s..."
    MOV ESI,dword ptr [0x005fb140]      ; 004abd82 | g_CEditorToolsPtr
    PUSH ESI                            ; 004abd88
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004abd89
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004abd8e
    MOV dword ptr [0x005fe374],0x1      ; 004abd91 | DAT_005fe374
    POP EBP                             ; 004abd9b
    POP EDI                             ; 004abd9c
    POP ESI                             ; 004abd9d
    POP EBX                             ; 004abd9e
    RET                                 ; 004abd9f
    MOV dword ptr [EDX + 0x140],0x4     ; 004abda0
        ;   Label: caseD_2
    MOV dword ptr [0x005fe374],0x1      ; 004abdaa | DAT_005fe374
    POP EBP                             ; 004abdb4
    POP EDI                             ; 004abdb5
    POP ESI                             ; 004abdb6
    POP EBX                             ; 004abdb7
    RET                                 ; 004abdb8

