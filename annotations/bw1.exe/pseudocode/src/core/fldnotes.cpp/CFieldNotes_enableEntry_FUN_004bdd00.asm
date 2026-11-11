; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_CFieldNotes_enableEntry_FUN_004bdd00(CFieldNotes *this_ptr,char *param_2)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_event.cpp_FUN_004a1d00 at 004a251b
;
; Referenced Globals:
;   void* switchdataD_004bdcdc = 004bdd51
;   TerminatedCString s_CFieldNotes_enableEntry_005e0190
;   TerminatedCString s_core_fldnotes_cpp_005e01c0
;   TerminatedCString s_Field_note_s_has_invalid_005e01d5
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_0061d2e4
;   undefined4 DAT_01cc4470
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0
;   core_main.c_FUN_005030e0
;   shape_edittool.cpp_FUN_004943a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bdd00
        ;   Label: core_fldnotes.cpp_CFieldNotes_enableEntry_FUN_004bdd00
    PUSH ESI                            ; 004bdd01
    PUSH EDI                            ; 004bdd02
    PUSH EBP                            ; 004bdd03
    MOV EDI,dword ptr [ESP + 0x18]      ; 004bdd04
    MOV EDX,dword ptr [0x01cc4470]      ; 004bdd08 | DAT_01cc4470
    XOR EBP,EBP                         ; 004bdd0e
    XOR EBX,EBX                         ; 004bdd10
    TEST EDX,EDX                        ; 004bdd12
    JLE 0x004bdd9c                      ; 004bdd14
        ;   XREF to: 004bdd9c (CONDITIONAL_JUMP)  ; LAB_004bdd9c
    MOV ESI,0x1cc4474                   ; 004bdd1a
    PUSH EDI                            ; 004bdd1f
        ;   Label: LAB_004bdd1f
    PUSH ESI                            ; 004bdd20
    CALL core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0 ; 004bdd21
        ;   XREF to: 004bbfd0 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0(SNotesSection * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004bdd26
    MOV EDX,EAX                         ; 004bdd29
    TEST EAX,EAX                        ; 004bdd2b
    JZ 0x004bdd8b                       ; 004bdd2d
        ;   XREF to: 004bdd8b (CONDITIONAL_JUMP)  ; LAB_004bdd8b
    TEST EBP,EBP                        ; 004bdd2f
    JZ 0x004bdd36                       ; 004bdd31
        ;   XREF to: 004bdd36 (CONDITIONAL_JUMP)  ; LAB_004bdd36
    MOV dword ptr [EBP],EBX             ; 004bdd33
    MOV EAX,EDX                         ; 004bdd36
        ;   Label: LAB_004bdd36
    MOV EBX,EAX                         ; 004bdd38
        ;   Label: LAB_004bdd38
    TEST EAX,EAX                        ; 004bdd3a
    JZ 0x004bdda0                       ; 004bdd3c
        ;   XREF to: 004bdda0 (CONDITIONAL_JUMP)  ; LAB_004bdda0
    MOV EDX,dword ptr [EAX + 0x140]     ; 004bdd3e
    INC EDX                             ; 004bdd44
    CMP EDX,0x7                         ; 004bdd45
    JA 0x004bdd51                       ; 004bdd48
        ;   XREF to: 004bdd51 (CONDITIONAL_JUMP)  ; caseD_ffffffff
    JMP dword ptr [EDX*0x4 + 0x4bdcdc]  ; 004bdd4a | caseD_ffffffff | caseD_0 | caseD_6
        ;   Label: switchD
    MOV EBP,dword ptr [EBX + 0x140]     ; 004bdd51
        ;   Label: caseD_ffffffff
    PUSH EBP                            ; 004bdd57
    PUSH EBX                            ; 004bdd58
    MOV ESI,0x5e01c0                    ; 004bdd59 | = "..\\core\\fldnotes.cpp"
    MOV EDI,0xa72                       ; 004bdd5e
    PUSH 0x5e01d5                       ; 004bdd63 | = "Field note %s has invalid type %d"
    MOV dword ptr [0x01d1d400],ESI      ; 004bdd68 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004bdd6e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bdd74
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 004bdd79
    MOV dword ptr [0x0061d2e4],0x1      ; 004bdd7c | DAT_0061d2e4
        ;   Label: caseD_1
    POP EBP                             ; 004bdd86
    POP EDI                             ; 004bdd87
    POP ESI                             ; 004bdd88
    POP EBX                             ; 004bdd89
    RET                                 ; 004bdd8a
    MOV ECX,dword ptr [0x01cc4470]      ; 004bdd8b | DAT_01cc4470
        ;   Label: LAB_004bdd8b
    INC EBX                             ; 004bdd91
    ADD ESI,0x2e4                       ; 004bdd92
    CMP EBX,ECX                         ; 004bdd98
    JL 0x004bdd1f                       ; 004bdd9a
        ;   XREF to: 004bdd1f (CONDITIONAL_JUMP)  ; LAB_004bdd1f
    XOR EAX,EAX                         ; 004bdd9c
        ;   Label: LAB_004bdd9c
    JMP 0x004bdd38                      ; 004bdd9e
        ;   XREF to: 004bdd38 (UNCONDITIONAL_JUMP)  ; LAB_004bdd38
    MOV EAX,dword ptr [ESP + 0x18]      ; 004bdda0
        ;   Label: LAB_004bdda0
    PUSH EAX                            ; 004bdda4
    PUSH 0x5e0190                       ; 004bdda5 | = "CFieldNotes::enableEntry - entry '%s'..."
    MOV EDX,dword ptr [0x0061abc0]      ; 004bddaa | g_CEditorToolsPtr
    PUSH EDX                            ; 004bddb0
    CALL shape_edittool.cpp_FUN_004943a0 ; 004bddb1
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0xc                         ; 004bddb6
    MOV dword ptr [0x0061d2e4],0x1      ; 004bddb9 | DAT_0061d2e4
    POP EBP                             ; 004bddc3
    POP EDI                             ; 004bddc4
    POP ESI                             ; 004bddc5
    POP EBX                             ; 004bddc6
    RET                                 ; 004bddc7
    MOV dword ptr [EAX + 0x140],0x1     ; 004bddc8
        ;   Label: caseD_0
    MOV dword ptr [0x0061d2e4],0x1      ; 004bddd2 | DAT_0061d2e4
    POP EBP                             ; 004bdddc
    POP EDI                             ; 004bdddd
    POP ESI                             ; 004bddde
    POP EBX                             ; 004bdddf
    RET                                 ; 004bdde0
    MOV dword ptr [EAX + 0x140],0x3     ; 004bdde1
        ;   Label: caseD_2
    MOV dword ptr [0x0061d2e4],0x1      ; 004bddeb | DAT_0061d2e4
    POP EBP                             ; 004bddf5
    POP EDI                             ; 004bddf6
    POP ESI                             ; 004bddf7
    POP EBX                             ; 004bddf8
    RET                                 ; 004bddf9
    MOV dword ptr [EAX + 0x140],0x6     ; 004bddfa
        ;   Label: caseD_5
    MOV dword ptr [0x0061d2e4],0x1      ; 004bde04 | DAT_0061d2e4
    POP EBP                             ; 004bde0e
    POP EDI                             ; 004bde0f
    POP ESI                             ; 004bde10
    POP EBX                             ; 004bde11
    RET                                 ; 004bde12

