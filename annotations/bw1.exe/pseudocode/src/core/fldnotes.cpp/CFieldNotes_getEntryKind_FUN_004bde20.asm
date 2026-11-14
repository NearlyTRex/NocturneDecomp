; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004bde20(CFieldNotes *this_ptr,char *entry_name)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   entry_name
;
; XREF[1]:
;   core_event.cpp_FUN_004a1d00 at 004a2574
;
; Referenced Globals:
;   undefined4 DAT_01cc4470
;
; Called Functions:
;   core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bde20
        ;   Label: core_fldnotes.cpp_CFieldNotes_getEntryKind_FUN_004bde20
    PUSH ESI                            ; 004bde21
    PUSH EDI                            ; 004bde22
    PUSH EBP                            ; 004bde23
    MOV EDI,dword ptr [ESP + 0x18]      ; 004bde24
    MOV EDX,dword ptr [0x01cc4470]      ; 004bde28 | DAT_01cc4470
    XOR EBP,EBP                         ; 004bde2e
    XOR EBX,EBX                         ; 004bde30
    TEST EDX,EDX                        ; 004bde32
    JLE 0x004bde56                      ; 004bde34
        ;   XREF to: 004bde56 (CONDITIONAL_JUMP)  ; LAB_004bde56
    MOV ESI,0x1cc4474                   ; 004bde36
    PUSH EDI                            ; 004bde3b
        ;   Label: LAB_004bde3b
    PUSH ESI                            ; 004bde3c
    CALL core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0 ; 004bde3d
        ;   XREF to: 004bbfd0 (UNCONDITIONAL_CALL)  ; SNotesEntry * core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0(SNotesSection * this_ptr, char * name)
    ADD ESP,0x8                         ; 004bde42
    MOV EDX,EAX                         ; 004bde45
    TEST EAX,EAX                        ; 004bde47
    JZ 0x004bde60                       ; 004bde49
        ;   XREF to: 004bde60 (CONDITIONAL_JUMP)  ; LAB_004bde60
    TEST EBP,EBP                        ; 004bde4b
    JZ 0x004bde52                       ; 004bde4d
        ;   XREF to: 004bde52 (CONDITIONAL_JUMP)  ; LAB_004bde52
    MOV dword ptr [EBP],EBX             ; 004bde4f
    TEST EDX,EDX                        ; 004bde52
        ;   Label: LAB_004bde52
    JNZ 0x004bde73                      ; 004bde54
        ;   XREF to: 004bde73 (CONDITIONAL_JUMP)  ; LAB_004bde73
    MOV EAX,0xffffffff                  ; 004bde56
        ;   Label: LAB_004bde56
    POP EBP                             ; 004bde5b
    POP EDI                             ; 004bde5c
    POP ESI                             ; 004bde5d
    POP EBX                             ; 004bde5e
    RET                                 ; 004bde5f
    MOV ECX,dword ptr [0x01cc4470]      ; 004bde60 | DAT_01cc4470
        ;   Label: LAB_004bde60
    INC EBX                             ; 004bde66
    ADD ESI,0x2e4                       ; 004bde67
    CMP EBX,ECX                         ; 004bde6d
    JL 0x004bde3b                       ; 004bde6f
        ;   XREF to: 004bde3b (CONDITIONAL_JUMP)  ; LAB_004bde3b
    JMP 0x004bde56                      ; 004bde71
        ;   XREF to: 004bde56 (UNCONDITIONAL_JUMP)  ; LAB_004bde56
    MOV EAX,dword ptr [EDX + 0x140]     ; 004bde73
        ;   Label: LAB_004bde73
    POP EBP                             ; 004bde79
    POP EDI                             ; 004bde7a
    POP ESI                             ; 004bde7b
    POP EBX                             ; 004bde7c
    RET                                 ; 004bde7d

