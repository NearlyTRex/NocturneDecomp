; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_CFieldNotes_turnToEntry_FUN_004abb90(CFieldNotes *this_ptr,char *param_2)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_event.cpp_FUN_0048c2e0 at 0049105e
;
; Referenced Globals:
;   TerminatedCString s_CFieldNotes_turnToEntry_005c16e6
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_005fe374
;   undefined4 DAT_01d0d010
;   undefined4 DAT_01d0d210
;   undefined4 DAT_01d19ba8
;
; Called Functions:
;   core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a9c30
;   core_fldnotes.cpp_SNotesSection_layout_FUN_004a9d90
;   core_fldnotes.cpp_STextView_reset_FUN_004a8e00
;   core_fldnotes.cpp_STextView_setRect_FUN_004a8eb0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004abb90
        ;   Label: core_fldnotes.cpp_CFieldNotes_turnToEntry_FUN_004abb90
    PUSH ESI                            ; 004abb91
    PUSH EDI                            ; 004abb92
    PUSH EBP                            ; 004abb93
    MOV EDI,dword ptr [ESP + 0x18]      ; 004abb94
    MOV EDX,dword ptr [0x01d0d210]      ; 004abb98 | DAT_01d0d210
    XOR EBP,EBP                         ; 004abb9e
    XOR EBX,EBX                         ; 004abba0
    TEST EDX,EDX                        ; 004abba2
    JLE 0x004abc6e                      ; 004abba4
        ;   XREF to: 004abc6e (CONDITIONAL_JUMP)  ; LAB_004abc6e
    MOV ESI,0x1d0d214                   ; 004abbaa
    PUSH EDI                            ; 004abbaf
        ;   Label: LAB_004abbaf
    PUSH ESI                            ; 004abbb0
    CALL core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a9c30 ; 004abbb1
        ;   XREF to: 004a9c30 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a9c30(SNotesSection * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004abbb6
    MOV EDX,EAX                         ; 004abbb9
    TEST EAX,EAX                        ; 004abbbb
    JZ 0x004abc59                       ; 004abbbd
        ;   XREF to: 004abc59 (CONDITIONAL_JUMP)  ; LAB_004abc59
    TEST EBP,EBP                        ; 004abbc3
    JZ 0x004abbca                       ; 004abbc5
        ;   XREF to: 004abbca (CONDITIONAL_JUMP)  ; LAB_004abbca
    MOV dword ptr [EBP],EBX             ; 004abbc7
    MOV EAX,EDX                         ; 004abbca
        ;   Label: LAB_004abbca
    MOV EDI,EAX                         ; 004abbcc
        ;   Label: LAB_004abbcc
    TEST EAX,EAX                        ; 004abbce
    JZ 0x004abc75                       ; 004abbd0
        ;   XREF to: 004abc75 (CONDITIONAL_JUMP)  ; LAB_004abc75
    CMP dword ptr [0x005fe374],0x0      ; 004abbd6 | DAT_005fe374
    JZ 0x004abc49                       ; 004abbdd
        ;   XREF to: 004abc49 (CONDITIONAL_JUMP)  ; LAB_004abc49
    PUSH 0x1b8                          ; 004abbdf
    PUSH 0x1eb                          ; 004abbe4
    PUSH 0x40                           ; 004abbe9
    PUSH 0x60                           ; 004abbeb
    PUSH 0x1d19d30                      ; 004abbed
    CALL core_fldnotes.cpp_STextView_setRect_FUN_004a8eb0 ; 004abbf2
        ;   XREF to: 004a8eb0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_setRect_FUN_004a8eb0(STextView * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x14                        ; 004abbf7
    PUSH 0x1d19d30                      ; 004abbfa
    XOR ESI,ESI                         ; 004abbff
    CALL core_fldnotes.cpp_STextView_reset_FUN_004a8e00 ; 004abc01
        ;   XREF to: 004a8e00 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004a8e00(STextView * this_ptr)
    MOV EBP,dword ptr [0x01d0d210]      ; 004abc06 | DAT_01d0d210
    ADD ESP,0x4                         ; 004abc0c
    XOR AH,AH                           ; 004abc0f
    MOV dword ptr [0x005fe374],ESI      ; 004abc11 | DAT_005fe374
    MOV byte ptr [0x01d0d010],AH        ; 004abc17 | DAT_01d0d010
    TEST EBP,EBP                        ; 004abc1d
    JLE 0x004abc49                      ; 004abc1f
        ;   XREF to: 004abc49 (CONDITIONAL_JUMP)  ; LAB_004abc49
    MOV EBX,0x1d0d214                   ; 004abc21
    PUSH 0x1d19d30                      ; 004abc26
        ;   Label: LAB_004abc26
    PUSH EBX                            ; 004abc2b
    CALL core_fldnotes.cpp_SNotesSection_layout_FUN_004a9d90 ; 004abc2c
        ;   XREF to: 004a9d90 (UNCONDITIONAL_CALL)  ; bool core_fldnotes.cpp_SNotesSection_layout_FUN_004a9d90(SNotesSection * this_ptr, int param_2)
    ADD ESP,0x8                         ; 004abc31
    TEST EAX,EAX                        ; 004abc34
    JZ 0x004abc49                       ; 004abc36
        ;   XREF to: 004abc49 (CONDITIONAL_JUMP)  ; LAB_004abc49
    MOV ECX,dword ptr [0x01d0d210]      ; 004abc38 | DAT_01d0d210
    INC ESI                             ; 004abc3e
    ADD EBX,0x2e4                       ; 004abc3f
    CMP ESI,ECX                         ; 004abc45
    JL 0x004abc26                       ; 004abc47
        ;   XREF to: 004abc26 (CONDITIONAL_JUMP)  ; LAB_004abc26
    MOV EAX,dword ptr [EDI + 0x144]     ; 004abc49
        ;   Label: LAB_004abc49
    MOV [0x01d19ba8],EAX                ; 004abc4f | DAT_01d19ba8
    POP EBP                             ; 004abc54
    POP EDI                             ; 004abc55
    POP ESI                             ; 004abc56
    POP EBX                             ; 004abc57
    RET                                 ; 004abc58
    MOV ECX,dword ptr [0x01d0d210]      ; 004abc59 | DAT_01d0d210
        ;   Label: LAB_004abc59
    INC EBX                             ; 004abc5f
    ADD ESI,0x2e4                       ; 004abc60
    CMP EBX,ECX                         ; 004abc66
    JL 0x004abbaf                       ; 004abc68
        ;   XREF to: 004abbaf (CONDITIONAL_JUMP)  ; LAB_004abbaf
    XOR EAX,EAX                         ; 004abc6e
        ;   Label: LAB_004abc6e
    JMP 0x004abbcc                      ; 004abc70
        ;   XREF to: 004abbcc (UNCONDITIONAL_JUMP)  ; LAB_004abbcc
    MOV EAX,dword ptr [ESP + 0x18]      ; 004abc75
        ;   Label: LAB_004abc75
    PUSH EAX                            ; 004abc79
    PUSH 0x5c16e6                       ; 004abc7a | = "CFieldNotes::turnToEntry - entry '%s'..."
    MOV EDX,dword ptr [0x005fb140]      ; 004abc7f | g_CEditorToolsPtr
    PUSH EDX                            ; 004abc85
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004abc86
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004abc8b
    POP EBP                             ; 004abc8e
    POP EDI                             ; 004abc8f
    POP ESI                             ; 004abc90
    POP EBX                             ; 004abc91
    RET                                 ; 004abc92

