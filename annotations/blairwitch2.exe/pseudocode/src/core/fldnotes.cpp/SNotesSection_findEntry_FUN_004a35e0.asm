; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNotesEntry * __cdecl core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a35e0(SNotesSection *this_ptr,char *name)
;
; Parameters:
; SNotesSection *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[8]:
;   core_flashlit.cpp_FUN_004a14f0 at 004a150a
;   core_fldnotes.cpp_CFieldNotes_completeTask_FUN_004a55b0 at 004a55d1
;   core_fldnotes.cpp_CFieldNotes_enableEntry_FUN_004a5310 at 004a5331
;   core_fldnotes.cpp_CFieldNotes_getEntryKind_FUN_004a5430 at 004a544d
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004a41b0 at 004a47ca
;   core_fldnotes.cpp_CFieldNotes_loadState_FUN_004a61b0 at 004a6367
;   core_fldnotes.cpp_CFieldNotes_showMapAnnotation_FUN_004a5200 at 004a5221
;   core_fldnotes.cpp_CFieldNotes_turnToEntry_FUN_004a5490 at 004a54b1
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a35e0
        ;   Label: core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a35e0
    PUSH ESI                            ; 004a35e1
    PUSH EDI                            ; 004a35e2
    PUSH EBP                            ; 004a35e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a35e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a35e8
    MOV EDX,dword ptr [EDI + 0x150]     ; 004a35ec
    XOR ESI,ESI                         ; 004a35f2
    TEST EDX,EDX                        ; 004a35f4
    JLE 0x004a361c                      ; 004a35f6
        ;   XREF to: 004a361c (CONDITIONAL_JUMP)  ; LAB_004a361c
    MOV EBX,EDI                         ; 004a35f8
    PUSH EBP                            ; 004a35fa
        ;   Label: LAB_004a35fa
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a35fb
    PUSH EAX                            ; 004a3601
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004a3602
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a3607
    TEST EAX,EAX                        ; 004a360a
    JZ 0x004a3623                       ; 004a360c
        ;   XREF to: 004a3623 (CONDITIONAL_JUMP)  ; LAB_004a3623
    INC ESI                             ; 004a360e
    MOV ECX,dword ptr [EDI + 0x150]     ; 004a360f
    ADD EBX,0x4                         ; 004a3615
    CMP ESI,ECX                         ; 004a3618
    JL 0x004a35fa                       ; 004a361a
        ;   XREF to: 004a35fa (CONDITIONAL_JUMP)  ; LAB_004a35fa
    XOR EAX,EAX                         ; 004a361c
        ;   Label: LAB_004a361c
    POP EBP                             ; 004a361e
    POP EDI                             ; 004a361f
    POP ESI                             ; 004a3620
    POP EBX                             ; 004a3621
    RET                                 ; 004a3622
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a3623
        ;   Label: LAB_004a3623
    POP EBP                             ; 004a3629
    POP EDI                             ; 004a362a
    POP ESI                             ; 004a362b
    POP EBX                             ; 004a362c
    RET                                 ; 004a362d

