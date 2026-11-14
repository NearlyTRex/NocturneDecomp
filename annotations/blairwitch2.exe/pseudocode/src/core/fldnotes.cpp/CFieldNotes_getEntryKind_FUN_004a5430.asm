; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fldnotes_cpp_CFieldNotes_getEntryKind_FUN_004a5430(CFieldNotes *this_ptr,char *entry_name)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   entry_name
;
; XREF[1]:
;   core_event.cpp_FUN_00489670 at 00489e70
;
; Referenced Globals:
;   undefined4 DAT_01cab9f0
;
; Called Functions:
;   core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a35e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5430
        ;   Label: core_fldnotes.cpp_CFieldNotes_getEntryKind_FUN_004a5430
    PUSH ESI                            ; 004a5431
    PUSH EDI                            ; 004a5432
    PUSH EBP                            ; 004a5433
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a5434
    MOV EDX,dword ptr [0x01cab9f0]      ; 004a5438 | DAT_01cab9f0
    XOR EBP,EBP                         ; 004a543e
    XOR EBX,EBX                         ; 004a5440
    TEST EDX,EDX                        ; 004a5442
    JLE 0x004a5466                      ; 004a5444
        ;   XREF to: 004a5466 (CONDITIONAL_JUMP)  ; LAB_004a5466
    MOV ESI,0x1cab9f4                   ; 004a5446
    PUSH EDI                            ; 004a544b
        ;   Label: LAB_004a544b
    PUSH ESI                            ; 004a544c
    CALL core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a35e0 ; 004a544d
        ;   XREF to: 004a35e0 (UNCONDITIONAL_CALL)  ; SNotesEntry * core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a35e0(SNotesSection * this_ptr, char * name)
    ADD ESP,0x8                         ; 004a5452
    MOV EDX,EAX                         ; 004a5455
    TEST EAX,EAX                        ; 004a5457
    JZ 0x004a5470                       ; 004a5459
        ;   XREF to: 004a5470 (CONDITIONAL_JUMP)  ; LAB_004a5470
    TEST EBP,EBP                        ; 004a545b
    JZ 0x004a5462                       ; 004a545d
        ;   XREF to: 004a5462 (CONDITIONAL_JUMP)  ; LAB_004a5462
    MOV dword ptr [EBP],EBX             ; 004a545f
    TEST EDX,EDX                        ; 004a5462
        ;   Label: LAB_004a5462
    JNZ 0x004a5483                      ; 004a5464
        ;   XREF to: 004a5483 (CONDITIONAL_JUMP)  ; LAB_004a5483
    MOV EAX,0xffffffff                  ; 004a5466
        ;   Label: LAB_004a5466
    POP EBP                             ; 004a546b
    POP EDI                             ; 004a546c
    POP ESI                             ; 004a546d
    POP EBX                             ; 004a546e
    RET                                 ; 004a546f
    MOV ECX,dword ptr [0x01cab9f0]      ; 004a5470 | DAT_01cab9f0
        ;   Label: LAB_004a5470
    INC EBX                             ; 004a5476
    ADD ESI,0x2e4                       ; 004a5477
    CMP EBX,ECX                         ; 004a547d
    JL 0x004a544b                       ; 004a547f
        ;   XREF to: 004a544b (CONDITIONAL_JUMP)  ; LAB_004a544b
    JMP 0x004a5466                      ; 004a5481
        ;   XREF to: 004a5466 (UNCONDITIONAL_JUMP)  ; LAB_004a5466
    MOV EAX,dword ptr [EDX + 0x140]     ; 004a5483
        ;   Label: LAB_004a5483
    POP EBP                             ; 004a5489
    POP EDI                             ; 004a548a
    POP ESI                             ; 004a548b
    POP EBX                             ; 004a548c
    RET                                 ; 004a548d

