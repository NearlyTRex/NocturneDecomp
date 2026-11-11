; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_CFieldNotes_turnToEntry_FUN_004bde80(CFieldNotes *this_ptr,char *param_2)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_event.cpp_FUN_004a1d00 at 004a66ac
;
; Referenced Globals:
;   TerminatedCString s_CFieldNotes_turnToEntry_005e01f7
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_0061d2e4
;   undefined4 DAT_01cc4270
;   undefined4 DAT_01cc4470
;   undefined4 DAT_01cc7b90
;
; Called Functions:
;   core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0
;   core_fldnotes.cpp_SNotesSection_layout_FUN_004bc130
;   core_fldnotes.cpp_STextView_reset_FUN_004bb1c0
;   core_fldnotes.cpp_STextView_setRect_FUN_004bb270
;   shape_edittool.cpp_FUN_004943a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bde80
        ;   Label: core_fldnotes.cpp_CFieldNotes_turnToEntry_FUN_004bde80
    PUSH ESI                            ; 004bde81
    PUSH EDI                            ; 004bde82
    PUSH EBP                            ; 004bde83
    MOV EDI,dword ptr [ESP + 0x18]      ; 004bde84
    MOV EDX,dword ptr [0x01cc4470]      ; 004bde88 | DAT_01cc4470
    XOR EBP,EBP                         ; 004bde8e
    XOR EBX,EBX                         ; 004bde90
    TEST EDX,EDX                        ; 004bde92
    JLE 0x004bdf5e                      ; 004bde94
        ;   XREF to: 004bdf5e (CONDITIONAL_JUMP)  ; LAB_004bdf5e
    MOV ESI,0x1cc4474                   ; 004bde9a
    PUSH EDI                            ; 004bde9f
        ;   Label: LAB_004bde9f
    PUSH ESI                            ; 004bdea0
    CALL core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0 ; 004bdea1
        ;   XREF to: 004bbfd0 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0(SNotesSection * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004bdea6
    MOV EDX,EAX                         ; 004bdea9
    TEST EAX,EAX                        ; 004bdeab
    JZ 0x004bdf49                       ; 004bdead
        ;   XREF to: 004bdf49 (CONDITIONAL_JUMP)  ; LAB_004bdf49
    TEST EBP,EBP                        ; 004bdeb3
    JZ 0x004bdeba                       ; 004bdeb5
        ;   XREF to: 004bdeba (CONDITIONAL_JUMP)  ; LAB_004bdeba
    MOV dword ptr [EBP],EBX             ; 004bdeb7
    MOV EAX,EDX                         ; 004bdeba
        ;   Label: LAB_004bdeba
    MOV EDI,EAX                         ; 004bdebc
        ;   Label: LAB_004bdebc
    TEST EAX,EAX                        ; 004bdebe
    JZ 0x004bdf65                       ; 004bdec0
        ;   XREF to: 004bdf65 (CONDITIONAL_JUMP)  ; LAB_004bdf65
    CMP dword ptr [0x0061d2e4],0x0      ; 004bdec6 | DAT_0061d2e4
    JZ 0x004bdf39                       ; 004bdecd
        ;   XREF to: 004bdf39 (CONDITIONAL_JUMP)  ; LAB_004bdf39
    PUSH 0x1b8                          ; 004bdecf
    PUSH 0x1eb                          ; 004bded4
    PUSH 0x40                           ; 004bded9
    PUSH 0x60                           ; 004bdedb
    PUSH 0x1cc7cd4                      ; 004bdedd
    CALL core_fldnotes.cpp_STextView_setRect_FUN_004bb270 ; 004bdee2
        ;   XREF to: 004bb270 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_setRect_FUN_004bb270(STextView * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x14                        ; 004bdee7
    PUSH 0x1cc7cd4                      ; 004bdeea
    XOR ESI,ESI                         ; 004bdeef
    CALL core_fldnotes.cpp_STextView_reset_FUN_004bb1c0 ; 004bdef1
        ;   XREF to: 004bb1c0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004bb1c0(STextView * this_ptr)
    MOV EBP,dword ptr [0x01cc4470]      ; 004bdef6 | DAT_01cc4470
    ADD ESP,0x4                         ; 004bdefc
    XOR AH,AH                           ; 004bdeff
    MOV dword ptr [0x0061d2e4],ESI      ; 004bdf01 | DAT_0061d2e4
    MOV byte ptr [0x01cc4270],AH        ; 004bdf07 | DAT_01cc4270
    TEST EBP,EBP                        ; 004bdf0d
    JLE 0x004bdf39                      ; 004bdf0f
        ;   XREF to: 004bdf39 (CONDITIONAL_JUMP)  ; LAB_004bdf39
    MOV EBX,0x1cc4474                   ; 004bdf11
    PUSH 0x1cc7cd4                      ; 004bdf16
        ;   Label: LAB_004bdf16
    PUSH EBX                            ; 004bdf1b
    CALL core_fldnotes.cpp_SNotesSection_layout_FUN_004bc130 ; 004bdf1c
        ;   XREF to: 004bc130 (UNCONDITIONAL_CALL)  ; bool core_fldnotes.cpp_SNotesSection_layout_FUN_004bc130(SNotesSection * this_ptr, int param_2)
    ADD ESP,0x8                         ; 004bdf21
    TEST EAX,EAX                        ; 004bdf24
    JZ 0x004bdf39                       ; 004bdf26
        ;   XREF to: 004bdf39 (CONDITIONAL_JUMP)  ; LAB_004bdf39
    MOV ECX,dword ptr [0x01cc4470]      ; 004bdf28 | DAT_01cc4470
    INC ESI                             ; 004bdf2e
    ADD EBX,0x2e4                       ; 004bdf2f
    CMP ESI,ECX                         ; 004bdf35
    JL 0x004bdf16                       ; 004bdf37
        ;   XREF to: 004bdf16 (CONDITIONAL_JUMP)  ; LAB_004bdf16
    MOV EAX,dword ptr [EDI + 0x144]     ; 004bdf39
        ;   Label: LAB_004bdf39
    MOV [0x01cc7b90],EAX                ; 004bdf3f | DAT_01cc7b90
    POP EBP                             ; 004bdf44
    POP EDI                             ; 004bdf45
    POP ESI                             ; 004bdf46
    POP EBX                             ; 004bdf47
    RET                                 ; 004bdf48
    MOV ECX,dword ptr [0x01cc4470]      ; 004bdf49 | DAT_01cc4470
        ;   Label: LAB_004bdf49
    INC EBX                             ; 004bdf4f
    ADD ESI,0x2e4                       ; 004bdf50
    CMP EBX,ECX                         ; 004bdf56
    JL 0x004bde9f                       ; 004bdf58
        ;   XREF to: 004bde9f (CONDITIONAL_JUMP)  ; LAB_004bde9f
    XOR EAX,EAX                         ; 004bdf5e
        ;   Label: LAB_004bdf5e
    JMP 0x004bdebc                      ; 004bdf60
        ;   XREF to: 004bdebc (UNCONDITIONAL_JUMP)  ; LAB_004bdebc
    MOV EAX,dword ptr [ESP + 0x18]      ; 004bdf65
        ;   Label: LAB_004bdf65
    PUSH EAX                            ; 004bdf69
    PUSH 0x5e01f7                       ; 004bdf6a | = "CFieldNotes::turnToEntry - entry '%s'..."
    MOV EDX,dword ptr [0x0061abc0]      ; 004bdf6f | g_CEditorToolsPtr
    PUSH EDX                            ; 004bdf75
    CALL shape_edittool.cpp_FUN_004943a0 ; 004bdf76
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0xc                         ; 004bdf7b
    POP EBP                             ; 004bdf7e
    POP EDI                             ; 004bdf7f
    POP ESI                             ; 004bdf80
    POP EBX                             ; 004bdf81
    RET                                 ; 004bdf82

