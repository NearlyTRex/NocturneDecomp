; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl core_fldnotes_cpp_SNotesSection_layout_FUN_004bc130(SNotesSection *this_ptr,int param_2)
;
; Parameters:
; SNotesSection *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; XREF[5]:
;   core_flashlit.cpp_FUN_004ba62e at 004ba682
;   core_flashlit.cpp_FUN_004ba6ae at 004ba70f
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0 at 004bcd7b
;   core_fldnotes.cpp_CFieldNotes_turnToEntry_FUN_004bde80 at 004bdf1c
;   core_fldnotes.cpp_FUN_004be0f0 at 004be182
;
; Referenced Globals:
;   undefined4 DAT_005dfc39
;
; Called Functions:
;   core_fldnotes.cpp_SNotesEntry_layout_FUN_004bbd10
;   core_fldnotes.cpp_STextView_addText_FUN_004bb290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc130
        ;   Label: core_fldnotes.cpp_SNotesSection_layout_FUN_004bc130
    PUSH ESI                            ; 004bc131
    PUSH EDI                            ; 004bc132
    PUSH EBP                            ; 004bc133
    MOV EDI,dword ptr [ESP + 0x14]      ; 004bc134
    MOV EBP,dword ptr [ESP + 0x18]      ; 004bc138
    MOV EAX,dword ptr [EBP + 0x10]      ; 004bc13c
    MOV EDX,dword ptr [EDI + 0x150]     ; 004bc13f
    XOR EBX,EBX                         ; 004bc145
    MOV dword ptr [EDI + 0x140],EAX     ; 004bc147
    TEST EDX,EDX                        ; 004bc14d
    JLE 0x004bc175                      ; 004bc14f
        ;   XREF to: 004bc175 (CONDITIONAL_JUMP)  ; LAB_004bc175
    MOV ESI,EDI                         ; 004bc151
    PUSH EBP                            ; 004bc153
        ;   Label: LAB_004bc153
    MOV EAX,dword ptr [ESI + 0x154]     ; 004bc154
    PUSH EAX                            ; 004bc15a
    CALL core_fldnotes.cpp_SNotesEntry_layout_FUN_004bbd10 ; 004bc15b
        ;   XREF to: 004bbd10 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesEntry_layout_FUN_004bbd10(SNotesEntry * this_ptr, int param_2)
    ADD ESP,0x8                         ; 004bc160
    TEST EAX,EAX                        ; 004bc163
    JZ 0x004bc19d                       ; 004bc165
        ;   XREF to: 004bc19d (CONDITIONAL_JUMP)  ; LAB_004bc19d
    INC EBX                             ; 004bc167
    MOV ECX,dword ptr [EDI + 0x150]     ; 004bc168
    ADD ESI,0x4                         ; 004bc16e
    CMP EBX,ECX                         ; 004bc171
    JL 0x004bc153                       ; 004bc173
        ;   XREF to: 004bc153 (CONDITIONAL_JUMP)  ; LAB_004bc153
    PUSH 0x5dfc39                       ; 004bc175 | DAT_005dfc39
        ;   Label: LAB_004bc175
    PUSH EBP                            ; 004bc17a
    CALL core_fldnotes.cpp_STextView_addText_FUN_004bb290 ; 004bc17b
        ;   XREF to: 004bb290 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_STextView_addText_FUN_004bb290(STextView * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004bc180
    TEST EAX,EAX                        ; 004bc183
    JZ 0x004bc19d                       ; 004bc185
        ;   XREF to: 004bc19d (CONDITIONAL_JUMP)  ; LAB_004bc19d
    MOV EBX,dword ptr [EDI + 0x140]     ; 004bc187
    MOV EAX,dword ptr [EBP + 0x10]      ; 004bc18d
    SUB EAX,EBX                         ; 004bc190
    MOV dword ptr [EDI + 0x144],EAX     ; 004bc192
    MOV EAX,0x1                         ; 004bc198
    POP EBP                             ; 004bc19d
        ;   Label: LAB_004bc19d
    POP EDI                             ; 004bc19e
    POP ESI                             ; 004bc19f
    POP EBX                             ; 004bc1a0
    RET                                 ; 004bc1a1

