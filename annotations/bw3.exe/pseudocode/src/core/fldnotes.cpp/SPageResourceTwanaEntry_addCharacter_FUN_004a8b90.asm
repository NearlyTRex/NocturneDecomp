; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_addCharacter_FUN_004a8b90(SPageResourceTwanaEntry *this_ptr,char *character)
;
; Parameters:
; SPageResourceTwanaEntry * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   character
;
; XREF[1]:
;   core_fldnotes.cpp_SPageResourceTwanaCharacter_onMouse_FUN_004a8890 at 004a88b3
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8b90
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaEntry_addCharacter_FUN_004a8b90
    PUSH ESI                            ; 004a8b91
    PUSH EDI                            ; 004a8b92
    PUSH EBP                            ; 004a8b93
    SUB ESP,0x104                       ; 004a8b94
    MOV EBP,dword ptr [ESP + 0x118]     ; 004a8b9a
    MOV ESI,dword ptr [ESP + 0x11c]     ; 004a8ba1
    MOV EBX,EBP                         ; 004a8ba8
    MOV AH,byte ptr [EBP + 0x18]        ; 004a8baa
    XOR EDX,EDX                         ; 004a8bad
    TEST AH,AH                          ; 004a8baf
    JZ 0x004a8bc2                       ; 004a8bb1
        ;   XREF to: 004a8bc2 (CONDITIONAL_JUMP)  ; LAB_004a8bc2
    INC EDX                             ; 004a8bb3
        ;   Label: LAB_004a8bb3
    ADD EBX,0x20                        ; 004a8bb4
    CMP EDX,0x3                         ; 004a8bb7
    JGE 0x004a8bc2                      ; 004a8bba
        ;   XREF to: 004a8bc2 (CONDITIONAL_JUMP)  ; LAB_004a8bc2
    CMP byte ptr [EBX + 0x18],0x0       ; 004a8bbc
    JNZ 0x004a8bb3                      ; 004a8bc0
        ;   XREF to: 004a8bb3 (CONDITIONAL_JUMP)  ; LAB_004a8bb3
    CMP EDX,0x3                         ; 004a8bc2
        ;   Label: LAB_004a8bc2
    JGE 0x004a8c8f                      ; 004a8bc5
        ;   XREF to: 004a8c8f (CONDITIONAL_JUMP)  ; LAB_004a8c8f
    SHL EDX,0x5                         ; 004a8bcb
        ;   Label: LAB_004a8bcb
    LEA EBX,[EBP + 0x18]                ; 004a8bce
    LEA EDI,[EBX + EDX*0x1]             ; 004a8bd1
    MOV ECX,0x40                        ; 004a8bd4
    PUSH EDI                            ; 004a8bd9
    MOV AL,byte ptr [ESI]               ; 004a8bda
        ;   Label: LAB_004a8bda
    MOV byte ptr [EDI],AL               ; 004a8bdc
    CMP AL,0x0                          ; 004a8bde
    JZ 0x004a8bf2                       ; 004a8be0
        ;   XREF to: 004a8bf2 (CONDITIONAL_JUMP)  ; LAB_004a8bf2
    MOV AL,byte ptr [ESI + 0x1]         ; 004a8be2
    ADD ESI,0x2                         ; 004a8be5
    MOV byte ptr [EDI + 0x1],AL         ; 004a8be8
    ADD EDI,0x2                         ; 004a8beb
    CMP AL,0x0                          ; 004a8bee
    JNZ 0x004a8bda                      ; 004a8bf0
        ;   XREF to: 004a8bda (CONDITIONAL_JUMP)  ; LAB_004a8bda
    POP EDI                             ; 004a8bf2
        ;   Label: LAB_004a8bf2
    MOV EDI,ESP                         ; 004a8bf3
    MOV ESI,0x5fe3b0                    ; 004a8bf5
    MOV dword ptr [ESP + 0x100],EBX     ; 004a8bfa
    XOR EDX,EDX                         ; 004a8c01
    MOV EBX,EBP                         ; 004a8c03
    MOVSD.REP ES:EDI,ESI                ; 004a8c05
    MOV EBP,EDX                         ; 004a8c07
        ;   Label: LAB_004a8c07
    MOV CH,byte ptr [EBX + 0x18]        ; 004a8c09
    SHL EBP,0x5                         ; 004a8c0c
    TEST CH,CH                          ; 004a8c0f
    JZ 0x004a8c69                       ; 004a8c11
        ;   XREF to: 004a8c69 (CONDITIONAL_JUMP)  ; LAB_004a8c69
    MOV ESI,0x5c0dfd                    ; 004a8c13
    MOV EDI,ESP                         ; 004a8c18
    PUSH EDI                            ; 004a8c1a
    SUB ECX,ECX                         ; 004a8c1b
    DEC ECX                             ; 004a8c1d
    MOV AL,0x0                          ; 004a8c1e
    SCASB.REPNE ES:EDI                  ; 004a8c20
    DEC EDI                             ; 004a8c22
    MOV AL,byte ptr [ESI]               ; 004a8c23
        ;   Label: LAB_004a8c23
    MOV byte ptr [EDI],AL               ; 004a8c25
    CMP AL,0x0                          ; 004a8c27
    JZ 0x004a8c3b                       ; 004a8c29
        ;   XREF to: 004a8c3b (CONDITIONAL_JUMP)  ; LAB_004a8c3b
    MOV AL,byte ptr [ESI + 0x1]         ; 004a8c2b
    ADD ESI,0x2                         ; 004a8c2e
    MOV byte ptr [EDI + 0x1],AL         ; 004a8c31
    ADD EDI,0x2                         ; 004a8c34
    CMP AL,0x0                          ; 004a8c37
    JNZ 0x004a8c23                      ; 004a8c39
        ;   XREF to: 004a8c23 (CONDITIONAL_JUMP)  ; LAB_004a8c23
    POP EDI                             ; 004a8c3b
        ;   Label: LAB_004a8c3b
    MOV ESI,dword ptr [ESP + 0x100]     ; 004a8c3c
    MOV EDI,ESP                         ; 004a8c43
    ADD ESI,EBP                         ; 004a8c45
    PUSH EDI                            ; 004a8c47
    SUB ECX,ECX                         ; 004a8c48
    DEC ECX                             ; 004a8c4a
    MOV AL,0x0                          ; 004a8c4b
    SCASB.REPNE ES:EDI                  ; 004a8c4d
    DEC EDI                             ; 004a8c4f
    MOV AL,byte ptr [ESI]               ; 004a8c50
        ;   Label: LAB_004a8c50
    MOV byte ptr [EDI],AL               ; 004a8c52
    CMP AL,0x0                          ; 004a8c54
    JZ 0x004a8c68                       ; 004a8c56
        ;   XREF to: 004a8c68 (CONDITIONAL_JUMP)  ; LAB_004a8c68
    MOV AL,byte ptr [ESI + 0x1]         ; 004a8c58
    ADD ESI,0x2                         ; 004a8c5b
    MOV byte ptr [EDI + 0x1],AL         ; 004a8c5e
    ADD EDI,0x2                         ; 004a8c61
    CMP AL,0x0                          ; 004a8c64
    JNZ 0x004a8c50                      ; 004a8c66
        ;   XREF to: 004a8c50 (CONDITIONAL_JUMP)  ; LAB_004a8c50
    POP EDI                             ; 004a8c68
        ;   Label: LAB_004a8c68
    INC EDX                             ; 004a8c69
        ;   Label: LAB_004a8c69
    ADD EBX,0x20                        ; 004a8c6a
    CMP EDX,0x3                         ; 004a8c6d
    JL 0x004a8c07                       ; 004a8c70
        ;   XREF to: 004a8c07 (CONDITIONAL_JUMP)  ; LAB_004a8c07
    MOV EDX,ESP                         ; 004a8c72
    PUSH EDX                            ; 004a8c74
    MOV EDX,dword ptr [0x005fba60]      ; 004a8c75 | DAT_005fba60
    PUSH EDX                            ; 004a8c7b
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 004a8c7c
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004a8c81
    ADD ESP,0x104                       ; 004a8c84
    POP EBP                             ; 004a8c8a
    POP EDI                             ; 004a8c8b
    POP ESI                             ; 004a8c8c
    POP EBX                             ; 004a8c8d
    RET                                 ; 004a8c8e
    PUSH 0x60                           ; 004a8c8f
        ;   Label: LAB_004a8c8f
    PUSH 0x0                            ; 004a8c91
    LEA EDX,[EBP + 0x18]                ; 004a8c93
    PUSH EDX                            ; 004a8c96
    CALL crt_memory.c_memset_FUN_005a28f0 ; 004a8c97
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004a8c9c
    XOR EDX,EDX                         ; 004a8c9f
    JMP 0x004a8bcb                      ; 004a8ca1
        ;   XREF to: 004a8bcb (UNCONDITIONAL_JUMP)  ; LAB_004a8bcb

