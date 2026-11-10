; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * core_fldnotes_cpp_FUN_004bc020(int param_1,char *param_2,undefined4 param_3)
;
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004bcba0 at 004bd1eb
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005dfb94
;   TerminatedCString s_Too_many_field_note_entr_005dfba9
;   TerminatedCString s_core_fldnotes_cpp_005dfbe4
;   TerminatedCString s_Out_of_memory_005dfbf9
;   TerminatedCString s_core_fldnotes_cpp_005dfc08
;   TerminatedCString s_Entry_name_s_is_too_long_005dfc1d
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004bbcb0
;   core_main.c_FUN_005030e0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc020
        ;   Label: core_fldnotes.cpp_FUN_004bc020
    PUSH ESI                            ; 004bc021
    PUSH EDI                            ; 004bc022
    PUSH EBP                            ; 004bc023
    MOV EBP,dword ptr [ESP + 0x14]      ; 004bc024
    MOV ESI,dword ptr [ESP + 0x18]      ; 004bc028
    CMP dword ptr [EBP + 0x150],0x64    ; 004bc02c
    JGE 0x004bc0d3                      ; 004bc033
        ;   XREF to: 004bc0d3 (CONDITIONAL_JUMP)  ; LAB_004bc0d3
    PUSH 0x15c                          ; 004bc039
        ;   Label: LAB_004bc039
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 004bc03e
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 004bc043
    TEST EAX,EAX                        ; 004bc046
    JZ 0x004bc053                       ; 004bc048
        ;   XREF to: 004bc053 (CONDITIONAL_JUMP)  ; LAB_004bc053
    PUSH EAX                            ; 004bc04a
    CALL core_fldnotes.cpp_FUN_004bbcb0 ; 004bc04b
        ;   XREF to: 004bbcb0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bbcb0()
    ADD ESP,0x4                         ; 004bc050
    MOV EBX,EAX                         ; 004bc053
        ;   Label: LAB_004bc053
    TEST EAX,EAX                        ; 004bc055
    JNZ 0x004bc07b                      ; 004bc057
        ;   XREF to: 004bc07b (CONDITIONAL_JUMP)  ; LAB_004bc07b
    MOV EDI,0x5dfbe4                    ; 004bc059 | = "..\\core\\fldnotes.cpp"
    MOV EAX,0x731                       ; 004bc05e
    PUSH 0x5dfbf9                       ; 004bc063 | = "Out of memory!"
    MOV dword ptr [0x01d1d400],EDI      ; 004bc068 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004bc06e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bc073
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bc078
    MOV EDI,ESI                         ; 004bc07b
        ;   Label: LAB_004bc07b
    SUB ECX,ECX                         ; 004bc07d
    DEC ECX                             ; 004bc07f
    XOR EAX,EAX                         ; 004bc080
    SCASB.REPNE ES:EDI                  ; 004bc082
    NOT ECX                             ; 004bc084
    DEC ECX                             ; 004bc086
    CMP ECX,0x40                        ; 004bc087
    JNC 0x004bc0fd                      ; 004bc08a
        ;   XREF to: 004bc0fd (CONDITIONAL_JUMP)  ; LAB_004bc0fd
    MOV EDI,EBX                         ; 004bc08c
        ;   Label: LAB_004bc08c
    PUSH EDI                            ; 004bc08e
    MOV AL,byte ptr [ESI]               ; 004bc08f
        ;   Label: LAB_004bc08f
    MOV byte ptr [EDI],AL               ; 004bc091
    CMP AL,0x0                          ; 004bc093
    JZ 0x004bc0a7                       ; 004bc095
        ;   XREF to: 004bc0a7 (CONDITIONAL_JUMP)  ; LAB_004bc0a7
    MOV AL,byte ptr [ESI + 0x1]         ; 004bc097
    ADD ESI,0x2                         ; 004bc09a
    MOV byte ptr [EDI + 0x1],AL         ; 004bc09d
    ADD EDI,0x2                         ; 004bc0a0
    CMP AL,0x0                          ; 004bc0a3
    JNZ 0x004bc08f                      ; 004bc0a5
        ;   XREF to: 004bc08f (CONDITIONAL_JUMP)  ; LAB_004bc08f
    POP EDI                             ; 004bc0a7
        ;   Label: LAB_004bc0a7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004bc0a8
    MOV dword ptr [EBX + 0x140],EAX     ; 004bc0ac
    MOV EAX,dword ptr [EBP + 0x150]     ; 004bc0b2
    MOV dword ptr [EBP + EAX*0x4 + 0x154],EBX ; 004bc0b8
    MOV ESI,dword ptr [EBP + 0x150]     ; 004bc0bf
    INC ESI                             ; 004bc0c5
    MOV EAX,EBX                         ; 004bc0c6
    MOV dword ptr [EBP + 0x150],ESI     ; 004bc0c8
    POP EBP                             ; 004bc0ce
    POP EDI                             ; 004bc0cf
    POP ESI                             ; 004bc0d0
    POP EBX                             ; 004bc0d1
    RET                                 ; 004bc0d2
    PUSH ESI                            ; 004bc0d3
        ;   Label: LAB_004bc0d3
    PUSH EBP                            ; 004bc0d4
    MOV ECX,0x5dfb94                    ; 004bc0d5 | = "..\\core\\fldnotes.cpp"
    MOV EBX,0x72b                       ; 004bc0da
    PUSH 0x5dfba9                       ; 004bc0df | = "Too many field note entries in sectio..."
    MOV dword ptr [0x01d1d400],ECX      ; 004bc0e4 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 004bc0ea | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bc0f0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 004bc0f5
    JMP 0x004bc039                      ; 004bc0f8
        ;   XREF to: 004bc039 (UNCONDITIONAL_JUMP)  ; LAB_004bc039
    PUSH ESI                            ; 004bc0fd
        ;   Label: LAB_004bc0fd
    MOV EDX,0x5dfc08                    ; 004bc0fe | = "..\\core\\fldnotes.cpp"
    MOV ECX,0x736                       ; 004bc103
    PUSH 0x5dfc1d                       ; 004bc108 | = "Entry name '%s' is too long"
    MOV dword ptr [0x01d1d400],EDX      ; 004bc10d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004bc113 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bc119
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004bc11e
    JMP 0x004bc08c                      ; 004bc121
        ;   XREF to: 004bc08c (UNCONDITIONAL_JUMP)  ; LAB_004bc08c

