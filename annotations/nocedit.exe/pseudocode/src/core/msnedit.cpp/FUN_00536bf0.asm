; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_FUN_00536bf0()
;
; Local Variables:
; undefined1       Stack[-0xd8]:1  local_d8
; undefined1       Stack[-0xd7]:1  local_d7
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   TerminatedCString s_none_0063b6e0
;   TerminatedCString s_true_0063b6e5
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00536bf0
        ;   Label: core_msnedit.cpp_FUN_00536bf0
    PUSH ESI                            ; 00536bf1
    PUSH EDI                            ; 00536bf2
    SUB ESP,0xcc                        ; 00536bf3
    MOV EBX,dword ptr [ESP + 0xdc]      ; 00536bf9
    MOV AH,byte ptr [EBX]               ; 00536c00
    MOV EDI,dword ptr [ESP + 0xe0]      ; 00536c02
    TEST AH,AH                          ; 00536c09
    JZ 0x00536c7b                       ; 00536c0b
        ;   XREF to: 00536c7b (CONDITIONAL_JUMP)  ; LAB_00536c7b
    XOR EAX,EAX                         ; 00536c11
        ;   Label: LAB_00536c11
    MOV AL,byte ptr [EBX]               ; 00536c13
    MOV EDX,EAX                         ; 00536c15
    INC DL                              ; 00536c17
    AND EDX,0xff                        ; 00536c19
    TEST byte ptr [EDX + 0x6849c4],0xe0 ; 00536c1f | g_CharacterClassificationTable
    JZ 0x00536c85                       ; 00536c26
        ;   XREF to: 00536c85 (CONDITIONAL_JUMP)  ; LAB_00536c85
    MOV EDX,ESP                         ; 00536c28
        ;   Label: LAB_00536c28
    MOV AL,byte ptr [EBX]               ; 00536c2a
        ;   Label: LAB_00536c2a
    MOV byte ptr [EDX],AL               ; 00536c2c
    XOR EAX,EAX                         ; 00536c2e
    MOV AL,byte ptr [EBX + 0x1]         ; 00536c30
    MOV dword ptr [ESP + 0xc8],EAX      ; 00536c33
    MOV CL,byte ptr [ESP + 0xc8]        ; 00536c3a
    INC CL                              ; 00536c41
    MOVZX ESI,CL                        ; 00536c43
    INC EBX                             ; 00536c46
    MOV CH,byte ptr [ESI + 0x6849c4]    ; 00536c47 | g_CharacterClassificationTable
    INC EDX                             ; 00536c4d
    TEST CH,0xe0                        ; 00536c4e
    JNZ 0x00536c2a                      ; 00536c51
        ;   XREF to: 00536c2a (CONDITIONAL_JUMP)  ; LAB_00536c2a
    CMP EAX,0x2d                        ; 00536c53
    JZ 0x00536c2a                       ; 00536c56
        ;   XREF to: 00536c2a (CONDITIONAL_JUMP)  ; LAB_00536c2a
    CMP EAX,0x5f                        ; 00536c58
    JZ 0x00536c2a                       ; 00536c5b
        ;   XREF to: 00536c2a (CONDITIONAL_JUMP)  ; LAB_00536c2a
    PUSH 0x63b6e0                       ; 00536c5d | = "none"
    LEA EAX,[ESP + 0x4]                 ; 00536c62
    PUSH EAX                            ; 00536c66
    MOV byte ptr [EDX],0x0              ; 00536c67
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00536c6a
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00536c6f
    TEST EAX,EAX                        ; 00536c72
    JNZ 0x00536c92                      ; 00536c74
        ;   XREF to: 00536c92 (CONDITIONAL_JUMP)  ; LAB_00536c92
    CMP byte ptr [EBX],0x0              ; 00536c76
        ;   Label: LAB_00536c76
    JNZ 0x00536c11                      ; 00536c79
        ;   XREF to: 00536c11 (CONDITIONAL_JUMP)  ; LAB_00536c11
    ADD ESP,0xcc                        ; 00536c7b
        ;   Label: LAB_00536c7b
    POP EDI                             ; 00536c81
    POP ESI                             ; 00536c82
    POP EBX                             ; 00536c83
    RET                                 ; 00536c84
    CMP EAX,0x2d                        ; 00536c85
        ;   Label: LAB_00536c85
    JZ 0x00536c28                       ; 00536c88
        ;   XREF to: 00536c28 (CONDITIONAL_JUMP)  ; LAB_00536c28
    CMP EAX,0x5f                        ; 00536c8a
    JZ 0x00536c28                       ; 00536c8d
        ;   XREF to: 00536c28 (CONDITIONAL_JUMP)  ; LAB_00536c28
    INC EBX                             ; 00536c8f
    JMP 0x00536c76                      ; 00536c90
        ;   XREF to: 00536c76 (UNCONDITIONAL_JUMP)  ; LAB_00536c76
    PUSH 0x63b6e5                       ; 00536c92 | = "true"
        ;   Label: LAB_00536c92
    LEA EAX,[ESP + 0x4]                 ; 00536c97
    PUSH EAX                            ; 00536c9b
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00536c9c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00536ca1
    TEST EAX,EAX                        ; 00536ca4
    JZ 0x00536c76                       ; 00536ca6
        ;   XREF to: 00536c76 (CONDITIONAL_JUMP)  ; LAB_00536c76
    MOV EAX,ESP                         ; 00536ca8
    PUSH EAX                            ; 00536caa
    PUSH EDI                            ; 00536cab
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00536cac
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00536cb1
    CMP byte ptr [EBX],0x0              ; 00536cb4
    JNZ 0x00536c11                      ; 00536cb7
        ;   XREF to: 00536c11 (CONDITIONAL_JUMP)  ; LAB_00536c11
    ADD ESP,0xcc                        ; 00536cbd
    POP EDI                             ; 00536cc3
    POP ESI                             ; 00536cc4
    POP EBX                             ; 00536cc5
    RET                                 ; 00536cc6

