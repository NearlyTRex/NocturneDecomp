; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_fldnotes_cpp_SNotesSection_addEntry_FUN_004a9c80(SNotesSection *this_ptr,char *param_2,int param_3)
;
; Parameters:
; SNotesSection *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
;
; XREF[1]:
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004aa810 at 004aaed8
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005c1081
;   TerminatedCString s_Too_many_field_note_entr_005c1096
;   TerminatedCString s_core_fldnotes_cpp_005c10d1
;   TerminatedCString s_Out_of_memory_005c10e6
;   TerminatedCString s_core_fldnotes_cpp_005c10f5
;   TerminatedCString s_Entry_name_s_is_too_long_005c110a
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_fldnotes.cpp_SNotesEntry_ctor_FUN_004a98f0
;   core_main.c_FUN_004e4330
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9c80
        ;   Label: core_fldnotes.cpp_SNotesSection_addEntry_FUN_004a9c80
    PUSH ESI                            ; 004a9c81
    PUSH EDI                            ; 004a9c82
    PUSH EBP                            ; 004a9c83
    MOV EBP,dword ptr [ESP + 0x14]      ; 004a9c84
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a9c88
    CMP dword ptr [EBP + 0x150],0x64    ; 004a9c8c
    JGE 0x004a9d33                      ; 004a9c93
        ;   XREF to: 004a9d33 (CONDITIONAL_JUMP)  ; LAB_004a9d33
    PUSH 0x15c                          ; 004a9c99
        ;   Label: LAB_004a9c99
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004a9c9e
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004a9ca3
    TEST EAX,EAX                        ; 004a9ca6
    JZ 0x004a9cb3                       ; 004a9ca8
        ;   XREF to: 004a9cb3 (CONDITIONAL_JUMP)  ; LAB_004a9cb3
    PUSH EAX                            ; 004a9caa
    CALL core_fldnotes.cpp_SNotesEntry_ctor_FUN_004a98f0 ; 004a9cab
        ;   XREF to: 004a98f0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesEntry_ctor_FUN_004a98f0(SNotesEntry * this_ptr)
    ADD ESP,0x4                         ; 004a9cb0
    MOV EBX,EAX                         ; 004a9cb3
        ;   Label: LAB_004a9cb3
    TEST EAX,EAX                        ; 004a9cb5
    JNZ 0x004a9cdb                      ; 004a9cb7
        ;   XREF to: 004a9cdb (CONDITIONAL_JUMP)  ; LAB_004a9cdb
    MOV EDI,0x5c10d1                    ; 004a9cb9 | = "..\\core\\fldnotes.cpp"
    MOV EAX,0x728                       ; 004a9cbe
    PUSH 0x5c10e6                       ; 004a9cc3 | = "Out of memory!"
    MOV dword ptr [0x01d71de0],EDI      ; 004a9cc8 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004a9cce | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004a9cd3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004a9cd8
    MOV EDI,ESI                         ; 004a9cdb
        ;   Label: LAB_004a9cdb
    SUB ECX,ECX                         ; 004a9cdd
    DEC ECX                             ; 004a9cdf
    XOR EAX,EAX                         ; 004a9ce0
    SCASB.REPNE ES:EDI                  ; 004a9ce2
    NOT ECX                             ; 004a9ce4
    DEC ECX                             ; 004a9ce6
    CMP ECX,0x40                        ; 004a9ce7
    JNC 0x004a9d5d                      ; 004a9cea
        ;   XREF to: 004a9d5d (CONDITIONAL_JUMP)  ; LAB_004a9d5d
    MOV EDI,EBX                         ; 004a9cec
        ;   Label: LAB_004a9cec
    PUSH EDI                            ; 004a9cee
    MOV AL,byte ptr [ESI]               ; 004a9cef
        ;   Label: LAB_004a9cef
    MOV byte ptr [EDI],AL               ; 004a9cf1
    CMP AL,0x0                          ; 004a9cf3
    JZ 0x004a9d07                       ; 004a9cf5
        ;   XREF to: 004a9d07 (CONDITIONAL_JUMP)  ; LAB_004a9d07
    MOV AL,byte ptr [ESI + 0x1]         ; 004a9cf7
    ADD ESI,0x2                         ; 004a9cfa
    MOV byte ptr [EDI + 0x1],AL         ; 004a9cfd
    ADD EDI,0x2                         ; 004a9d00
    CMP AL,0x0                          ; 004a9d03
    JNZ 0x004a9cef                      ; 004a9d05
        ;   XREF to: 004a9cef (CONDITIONAL_JUMP)  ; LAB_004a9cef
    POP EDI                             ; 004a9d07
        ;   Label: LAB_004a9d07
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a9d08
    MOV dword ptr [EBX + 0x140],EAX     ; 004a9d0c
    MOV EAX,dword ptr [EBP + 0x150]     ; 004a9d12
    MOV dword ptr [EBP + EAX*0x4 + 0x154],EBX ; 004a9d18
    MOV ESI,dword ptr [EBP + 0x150]     ; 004a9d1f
    INC ESI                             ; 004a9d25
    MOV EAX,EBX                         ; 004a9d26
    MOV dword ptr [EBP + 0x150],ESI     ; 004a9d28
    POP EBP                             ; 004a9d2e
    POP EDI                             ; 004a9d2f
    POP ESI                             ; 004a9d30
    POP EBX                             ; 004a9d31
    RET                                 ; 004a9d32
    PUSH ESI                            ; 004a9d33
        ;   Label: LAB_004a9d33
    PUSH EBP                            ; 004a9d34
    MOV ECX,0x5c1081                    ; 004a9d35 | = "..\\core\\fldnotes.cpp"
    MOV EBX,0x722                       ; 004a9d3a
    PUSH 0x5c1096                       ; 004a9d3f | = "Too many field note entries in sectio..."
    MOV dword ptr [0x01d71de0],ECX      ; 004a9d44 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 004a9d4a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004a9d50
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 004a9d55
    JMP 0x004a9c99                      ; 004a9d58
        ;   XREF to: 004a9c99 (UNCONDITIONAL_JUMP)  ; LAB_004a9c99
    PUSH ESI                            ; 004a9d5d
        ;   Label: LAB_004a9d5d
    MOV EDX,0x5c10f5                    ; 004a9d5e | = "..\\core\\fldnotes.cpp"
    MOV ECX,0x72d                       ; 004a9d63
    PUSH 0x5c110a                       ; 004a9d68 | = "Entry name '%s' is too long"
    MOV dword ptr [0x01d71de0],EDX      ; 004a9d6d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004a9d73 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004a9d79
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004a9d7e
    JMP 0x004a9cec                      ; 004a9d81
        ;   XREF to: 004a9cec (UNCONDITIONAL_JUMP)  ; LAB_004a9cec

