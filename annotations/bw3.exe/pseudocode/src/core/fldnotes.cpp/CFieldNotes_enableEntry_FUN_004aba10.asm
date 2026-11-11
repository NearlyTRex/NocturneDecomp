; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_CFieldNotes_enableEntry_FUN_004aba10(CFieldNotes *this_ptr,char *param_2)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_event.cpp_FUN_0048c2e0 at 0048caf2
;
; Referenced Globals:
;   void* switchdataD_004ab9ec = 004aba61
;   TerminatedCString s_CFieldNotes_enableEntry_005c167f
;   TerminatedCString s_core_fldnotes_cpp_005c16af
;   TerminatedCString s_Field_note_s_has_invalid_005c16c4
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

    PUSH EBX                            ; 004aba10
        ;   Label: core_fldnotes.cpp_CFieldNotes_enableEntry_FUN_004aba10
    PUSH ESI                            ; 004aba11
    PUSH EDI                            ; 004aba12
    PUSH EBP                            ; 004aba13
    MOV EDI,dword ptr [ESP + 0x18]      ; 004aba14
    MOV EDX,dword ptr [0x01d0d210]      ; 004aba18 | DAT_01d0d210
    XOR EBP,EBP                         ; 004aba1e
    XOR EBX,EBX                         ; 004aba20
    TEST EDX,EDX                        ; 004aba22
    JLE 0x004abaac                      ; 004aba24
        ;   XREF to: 004abaac (CONDITIONAL_JUMP)  ; LAB_004abaac
    MOV ESI,0x1d0d214                   ; 004aba2a
    PUSH EDI                            ; 004aba2f
        ;   Label: LAB_004aba2f
    PUSH ESI                            ; 004aba30
    CALL core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a9c30 ; 004aba31
        ;   XREF to: 004a9c30 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a9c30(SNotesSection * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004aba36
    MOV EDX,EAX                         ; 004aba39
    TEST EAX,EAX                        ; 004aba3b
    JZ 0x004aba9b                       ; 004aba3d
        ;   XREF to: 004aba9b (CONDITIONAL_JUMP)  ; LAB_004aba9b
    TEST EBP,EBP                        ; 004aba3f
    JZ 0x004aba46                       ; 004aba41
        ;   XREF to: 004aba46 (CONDITIONAL_JUMP)  ; LAB_004aba46
    MOV dword ptr [EBP],EBX             ; 004aba43
    MOV EAX,EDX                         ; 004aba46
        ;   Label: LAB_004aba46
    MOV EBX,EAX                         ; 004aba48
        ;   Label: LAB_004aba48
    TEST EAX,EAX                        ; 004aba4a
    JZ 0x004abab0                       ; 004aba4c
        ;   XREF to: 004abab0 (CONDITIONAL_JUMP)  ; LAB_004abab0
    MOV EDX,dword ptr [EAX + 0x140]     ; 004aba4e
    INC EDX                             ; 004aba54
    CMP EDX,0x7                         ; 004aba55
    JA 0x004aba61                       ; 004aba58
        ;   XREF to: 004aba61 (CONDITIONAL_JUMP)  ; caseD_ffffffff
    JMP dword ptr [EDX*0x4 + 0x4ab9ec]  ; 004aba5a | caseD_ffffffff | caseD_0 | caseD_6
        ;   Label: switchD
    MOV EBP,dword ptr [EBX + 0x140]     ; 004aba61
        ;   Label: caseD_ffffffff
    PUSH EBP                            ; 004aba67
    PUSH EBX                            ; 004aba68
    MOV ESI,0x5c16af                    ; 004aba69 | = "..\\core\\fldnotes.cpp"
    MOV EDI,0xa7f                       ; 004aba6e
    PUSH 0x5c16c4                       ; 004aba73 | = "Field note %s has invalid type %d"
    MOV dword ptr [0x01d71de0],ESI      ; 004aba78 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004aba7e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004aba84
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 004aba89
    MOV dword ptr [0x005fe374],0x1      ; 004aba8c | DAT_005fe374
        ;   Label: caseD_1
    POP EBP                             ; 004aba96
    POP EDI                             ; 004aba97
    POP ESI                             ; 004aba98
    POP EBX                             ; 004aba99
    RET                                 ; 004aba9a
    MOV ECX,dword ptr [0x01d0d210]      ; 004aba9b | DAT_01d0d210
        ;   Label: LAB_004aba9b
    INC EBX                             ; 004abaa1
    ADD ESI,0x2e4                       ; 004abaa2
    CMP EBX,ECX                         ; 004abaa8
    JL 0x004aba2f                       ; 004abaaa
        ;   XREF to: 004aba2f (CONDITIONAL_JUMP)  ; LAB_004aba2f
    XOR EAX,EAX                         ; 004abaac
        ;   Label: LAB_004abaac
    JMP 0x004aba48                      ; 004abaae
        ;   XREF to: 004aba48 (UNCONDITIONAL_JUMP)  ; LAB_004aba48
    MOV EAX,dword ptr [ESP + 0x18]      ; 004abab0
        ;   Label: LAB_004abab0
    PUSH EAX                            ; 004abab4
    PUSH 0x5c167f                       ; 004abab5 | = "CFieldNotes::enableEntry - entry '%s'..."
    MOV EDX,dword ptr [0x005fb140]      ; 004ababa | g_CEditorToolsPtr
    PUSH EDX                            ; 004abac0
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004abac1
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004abac6
    MOV dword ptr [0x005fe374],0x1      ; 004abac9 | DAT_005fe374
    POP EBP                             ; 004abad3
    POP EDI                             ; 004abad4
    POP ESI                             ; 004abad5
    POP EBX                             ; 004abad6
    RET                                 ; 004abad7
    MOV dword ptr [EAX + 0x140],0x1     ; 004abad8
        ;   Label: caseD_0
    MOV dword ptr [0x005fe374],0x1      ; 004abae2 | DAT_005fe374
    POP EBP                             ; 004abaec
    POP EDI                             ; 004abaed
    POP ESI                             ; 004abaee
    POP EBX                             ; 004abaef
    RET                                 ; 004abaf0
    MOV dword ptr [EAX + 0x140],0x3     ; 004abaf1
        ;   Label: caseD_2
    MOV dword ptr [0x005fe374],0x1      ; 004abafb | DAT_005fe374
    POP EBP                             ; 004abb05
    POP EDI                             ; 004abb06
    POP ESI                             ; 004abb07
    POP EBX                             ; 004abb08
    RET                                 ; 004abb09
    MOV dword ptr [EAX + 0x140],0x6     ; 004abb0a
        ;   Label: caseD_5
    MOV dword ptr [0x005fe374],0x1      ; 004abb14 | DAT_005fe374
    POP EBP                             ; 004abb1e
    POP EDI                             ; 004abb1f
    POP ESI                             ; 004abb20
    POP EBX                             ; 004abb21
    RET                                 ; 004abb22

