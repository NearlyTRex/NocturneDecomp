; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fldnotes_cpp_SNotesMap_showAnnotation_FUN_004a3b50(SNotesMap *this_ptr,char *name)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[1]:
;   core_fldnotes.cpp_CFieldNotes_showMapAnnotation_FUN_004a5200 at 004a5263
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3b50
        ;   Label: core_fldnotes.cpp_SNotesMap_showAnnotation_FUN_004a3b50
    PUSH ESI                            ; 004a3b51
    PUSH EDI                            ; 004a3b52
    PUSH EBP                            ; 004a3b53
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a3b54
    MOV EDX,dword ptr [EDI + 0x2c0]     ; 004a3b58
    XOR EBX,EBX                         ; 004a3b5e
    TEST EDX,EDX                        ; 004a3b60
    JLE 0x004a3b93                      ; 004a3b62
        ;   XREF to: 004a3b93 (CONDITIONAL_JUMP)  ; LAB_004a3b93
    LEA ESI,[EDI + 0x2c4]               ; 004a3b64
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a3b6a
        ;   Label: LAB_004a3b6a
    PUSH EBP                            ; 004a3b6e
    IMUL EBP,EBX,0xd4                   ; 004a3b6f
    PUSH ESI                            ; 004a3b75
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004a3b76
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a3b7b
    TEST EAX,EAX                        ; 004a3b7e
    JZ 0x004a3b9a                       ; 004a3b80
        ;   XREF to: 004a3b9a (CONDITIONAL_JUMP)  ; LAB_004a3b9a
    INC EBX                             ; 004a3b82
    MOV ECX,dword ptr [EDI + 0x2c0]     ; 004a3b83
    ADD ESI,0xd4                        ; 004a3b89
    CMP EBX,ECX                         ; 004a3b8f
    JL 0x004a3b6a                       ; 004a3b91
        ;   XREF to: 004a3b6a (CONDITIONAL_JUMP)  ; LAB_004a3b6a
    XOR EAX,EAX                         ; 004a3b93
        ;   Label: LAB_004a3b93
    POP EBP                             ; 004a3b95
    POP EDI                             ; 004a3b96
    POP ESI                             ; 004a3b97
    POP EBX                             ; 004a3b98
    RET                                 ; 004a3b99
    MOV EAX,0x1                         ; 004a3b9a
        ;   Label: LAB_004a3b9a
    MOV dword ptr [EDI + EBP*0x1 + 0x394],0x1 ; 004a3b9f
    POP EBP                             ; 004a3baa
    POP EDI                             ; 004a3bab
    POP ESI                             ; 004a3bac
    POP EBX                             ; 004a3bad
    RET                                 ; 004a3bae

