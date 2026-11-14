; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fldnotes_cpp_CFieldNotes_showMapAnnotation_FUN_004ab8f0(CFieldNotes *this_ptr,char *entry_name,char *annotation_name,char *error_text)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   entry_name
; char *           Stack[0xc]:4   annotation_name
; char *           Stack[0x10]:4   error_text
;
; XREF[1]:
;   core_event.cpp_FUN_0048c2e0 at 0048ddb9
;
; Referenced Globals:
;   TerminatedCString s_No_such_entry_s_005c1632
;   TerminatedCString s_s_is_not_a_map_005c1645
;   TerminatedCString s_No_such_annotion_s_found_005c1657
;   undefined4 DAT_01d0d210
;
; Called Functions:
;   core_fldnotes.cpp_SNotesMap_showAnnotation_FUN_004aa1a0
;   core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a9c30
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab8f0
        ;   Label: core_fldnotes.cpp_CFieldNotes_showMapAnnotation_FUN_004ab8f0
    PUSH ESI                            ; 004ab8f1
    PUSH EDI                            ; 004ab8f2
    PUSH EBP                            ; 004ab8f3
    MOV EDI,dword ptr [ESP + 0x18]      ; 004ab8f4
    MOV EDX,dword ptr [0x01d0d210]      ; 004ab8f8 | DAT_01d0d210
    XOR EBP,EBP                         ; 004ab8fe
    XOR EBX,EBX                         ; 004ab900
    TEST EDX,EDX                        ; 004ab902
    JLE 0x004ab98c                      ; 004ab904
        ;   XREF to: 004ab98c (CONDITIONAL_JUMP)  ; LAB_004ab98c
    MOV ESI,0x1d0d214                   ; 004ab90a
    PUSH EDI                            ; 004ab90f
        ;   Label: LAB_004ab90f
    PUSH ESI                            ; 004ab910
    CALL core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a9c30 ; 004ab911
        ;   XREF to: 004a9c30 (UNCONDITIONAL_CALL)  ; SNotesEntry * core_fldnotes.cpp_SNotesSection_findEntry_FUN_004a9c30(SNotesSection * this_ptr, char * name)
    ADD ESP,0x8                         ; 004ab916
    MOV EDX,EAX                         ; 004ab919
    TEST EAX,EAX                        ; 004ab91b
    JZ 0x004ab97b                       ; 004ab91d
        ;   XREF to: 004ab97b (CONDITIONAL_JUMP)  ; LAB_004ab97b
    TEST EBP,EBP                        ; 004ab91f
    JZ 0x004ab926                       ; 004ab921
        ;   XREF to: 004ab926 (CONDITIONAL_JUMP)  ; LAB_004ab926
    MOV dword ptr [EBP],EBX             ; 004ab923
    MOV EAX,EDX                         ; 004ab926
        ;   Label: LAB_004ab926
    MOV EDX,EAX                         ; 004ab928
        ;   Label: LAB_004ab928
    TEST EAX,EAX                        ; 004ab92a
    JZ 0x004ab990                       ; 004ab92c
        ;   XREF to: 004ab990 (CONDITIONAL_JUMP)  ; LAB_004ab990
    MOV EBX,dword ptr [EAX + 0x140]     ; 004ab92e
    CMP EBX,0x5                         ; 004ab934
    JZ 0x004ab93e                       ; 004ab937
        ;   XREF to: 004ab93e (CONDITIONAL_JUMP)  ; LAB_004ab93e
    CMP EBX,0x6                         ; 004ab939
    JNZ 0x004ab9ae                      ; 004ab93c
        ;   XREF to: 004ab9ae (CONDITIONAL_JUMP)  ; LAB_004ab9ae
    MOV EDX,dword ptr [EDX + 0x158]     ; 004ab93e
        ;   Label: LAB_004ab93e
    MOV EAX,EDX                         ; 004ab944
    SHL EAX,0x5                         ; 004ab946
    ADD EAX,EDX                         ; 004ab949
    SHL EAX,0x2                         ; 004ab94b
    SUB EAX,EDX                         ; 004ab94e
    SHL EAX,0x2                         ; 004ab950
    MOV EDX,EAX                         ; 004ab953
    SHL EAX,0x3                         ; 004ab955
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004ab958
    ADD EAX,EDX                         ; 004ab95c
    PUSH EDI                            ; 004ab95e
    ADD EAX,0x1d0e370                   ; 004ab95f
    PUSH EAX                            ; 004ab964
    CALL core_fldnotes.cpp_SNotesMap_showAnnotation_FUN_004aa1a0 ; 004ab965
        ;   XREF to: 004aa1a0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_SNotesMap_showAnnotation_FUN_004aa1a0(SNotesMap * this_ptr, char * name)
    ADD ESP,0x8                         ; 004ab96a
    TEST EAX,EAX                        ; 004ab96d
    JZ 0x004ab9cc                       ; 004ab96f
        ;   XREF to: 004ab9cc (CONDITIONAL_JUMP)  ; LAB_004ab9cc
    MOV EAX,0x1                         ; 004ab971
    POP EBP                             ; 004ab976
    POP EDI                             ; 004ab977
    POP ESI                             ; 004ab978
    POP EBX                             ; 004ab979
    RET                                 ; 004ab97a
    MOV ECX,dword ptr [0x01d0d210]      ; 004ab97b | DAT_01d0d210
        ;   Label: LAB_004ab97b
    INC EBX                             ; 004ab981
    ADD ESI,0x2e4                       ; 004ab982
    CMP EBX,ECX                         ; 004ab988
    JL 0x004ab90f                       ; 004ab98a
        ;   XREF to: 004ab90f (CONDITIONAL_JUMP)  ; LAB_004ab90f
    XOR EAX,EAX                         ; 004ab98c
        ;   Label: LAB_004ab98c
    JMP 0x004ab928                      ; 004ab98e
        ;   XREF to: 004ab928 (UNCONDITIONAL_JUMP)  ; LAB_004ab928
    MOV ESI,dword ptr [ESP + 0x18]      ; 004ab990
        ;   Label: LAB_004ab990
    PUSH ESI                            ; 004ab994
    PUSH 0x5c1632                       ; 004ab995 | = "No such entry '%s'"
    MOV EDI,dword ptr [ESP + 0x28]      ; 004ab99a
    PUSH EDI                            ; 004ab99e
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004ab99f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004ab9a4
    XOR EAX,EAX                         ; 004ab9a7
    POP EBP                             ; 004ab9a9
    POP EDI                             ; 004ab9aa
    POP ESI                             ; 004ab9ab
    POP EBX                             ; 004ab9ac
    RET                                 ; 004ab9ad
    MOV ECX,dword ptr [ESP + 0x18]      ; 004ab9ae
        ;   Label: LAB_004ab9ae
    PUSH ECX                            ; 004ab9b2
    PUSH 0x5c1645                       ; 004ab9b3 | = "'%s' is not a map"
    MOV EBX,dword ptr [ESP + 0x28]      ; 004ab9b8
    PUSH EBX                            ; 004ab9bc
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004ab9bd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004ab9c2
    XOR EAX,EAX                         ; 004ab9c5
    POP EBP                             ; 004ab9c7
    POP EDI                             ; 004ab9c8
    POP ESI                             ; 004ab9c9
    POP EBX                             ; 004ab9ca
    RET                                 ; 004ab9cb
    MOV EBP,dword ptr [ESP + 0x18]      ; 004ab9cc
        ;   Label: LAB_004ab9cc
    PUSH EBP                            ; 004ab9d0
    PUSH EDI                            ; 004ab9d1
    PUSH 0x5c1657                       ; 004ab9d2 | = "No such annotion '%s' found on map '%s'"
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004ab9d7
    PUSH EDX                            ; 004ab9db
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004ab9dc
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ab9e1
    XOR EAX,EAX                         ; 004ab9e4
    POP EBP                             ; 004ab9e6
    POP EDI                             ; 004ab9e7
    POP ESI                             ; 004ab9e8
    POP EBX                             ; 004ab9e9
    RET                                 ; 004ab9ea

