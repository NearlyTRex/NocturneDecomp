; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_trimLineAndRemoveComments_FUN_0056e0a0(char *line)
;
; Parameters:
; char *           Stack[0x4]:4   line
;
; Called Functions:
;   crt_string.c_memmove_FUN_005c25d0
;   crt_string.c_strstr_FUN_005c2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e0a0
        ;   Label: sound_sndmain.cpp_trimLineAndRemoveComments_FUN_0056e0a0
    PUSH ESI                            ; 0056e0a1
    PUSH EDI                            ; 0056e0a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056e0a3
    PUSH 0x5f2c52                       ; 0056e0a7
    PUSH EBX                            ; 0056e0ac
    CALL crt_string.c_strstr_FUN_005c2dc0 ; 0056e0ad
        ;   XREF to: 005c2dc0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005c2dc0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 0056e0b2
    TEST EAX,EAX                        ; 0056e0b5
    JZ 0x0056e0bc                       ; 0056e0b7
        ;   XREF to: 0056e0bc (CONDITIONAL_JUMP)  ; LAB_0056e0bc
    MOV byte ptr [EAX],0x0              ; 0056e0b9
    MOV ESI,EBX                         ; 0056e0bc
        ;   Label: LAB_0056e0bc
    XOR DL,DL                           ; 0056e0be
    MOV AL,byte ptr [ESI]               ; 0056e0c0
        ;   Label: LAB_0056e0c0
    CMP AL,DL                           ; 0056e0c2
    JZ 0x0056e0d8                       ; 0056e0c4
        ;   XREF to: 0056e0d8 (CONDITIONAL_JUMP)  ; LAB_0056e0d8
    CMP AL,0x0                          ; 0056e0c6
    JZ 0x0056e0d6                       ; 0056e0c8
        ;   XREF to: 0056e0d6 (CONDITIONAL_JUMP)  ; LAB_0056e0d6
    INC ESI                             ; 0056e0ca
    MOV AL,byte ptr [ESI]               ; 0056e0cb
    CMP AL,DL                           ; 0056e0cd
    JZ 0x0056e0d8                       ; 0056e0cf
        ;   XREF to: 0056e0d8 (CONDITIONAL_JUMP)  ; LAB_0056e0d8
    INC ESI                             ; 0056e0d1
    CMP AL,0x0                          ; 0056e0d2
    JNZ 0x0056e0c0                      ; 0056e0d4
        ;   XREF to: 0056e0c0 (CONDITIONAL_JUMP)  ; LAB_0056e0c0
    SUB ESI,ESI                         ; 0056e0d6
        ;   Label: LAB_0056e0d6
    MOV EAX,ESI                         ; 0056e0d8
        ;   Label: LAB_0056e0d8
    CMP ESI,EBX                         ; 0056e0da
    JBE 0x0056e0f2                      ; 0056e0dc
        ;   XREF to: 0056e0f2 (CONDITIONAL_JUMP)  ; LAB_0056e0f2
    MOV CL,byte ptr [EAX + -0x1]        ; 0056e0de
        ;   Label: LAB_0056e0de
    INC CL                              ; 0056e0e1
    AND ECX,0xff                        ; 0056e0e3
    TEST byte ptr [ECX + 0x626114],0x2  ; 0056e0e9
    JNZ 0x0056e10e                      ; 0056e0f0
        ;   XREF to: 0056e10e (CONDITIONAL_JUMP)  ; LAB_0056e10e
    LEA ESI,[EBX + 0x1]                 ; 0056e0f2
        ;   Label: LAB_0056e0f2
    MOV byte ptr [EAX],0x0              ; 0056e0f5
    MOV AL,byte ptr [EBX]               ; 0056e0f8
        ;   Label: LAB_0056e0f8
    INC AL                              ; 0056e0fa
    AND EAX,0xff                        ; 0056e0fc
    TEST byte ptr [EAX + 0x626114],0x2  ; 0056e101
    JNZ 0x0056e115                      ; 0056e108
        ;   XREF to: 0056e115 (CONDITIONAL_JUMP)  ; LAB_0056e115
    POP EDI                             ; 0056e10a
    POP ESI                             ; 0056e10b
    POP EBX                             ; 0056e10c
    RET                                 ; 0056e10d
    DEC EAX                             ; 0056e10e
        ;   Label: LAB_0056e10e
    CMP EAX,EBX                         ; 0056e10f
    JA 0x0056e0de                       ; 0056e111
        ;   XREF to: 0056e0de (CONDITIONAL_JUMP)  ; LAB_0056e0de
    JMP 0x0056e0f2                      ; 0056e113
        ;   XREF to: 0056e0f2 (UNCONDITIONAL_JUMP)  ; LAB_0056e0f2
    MOV EDI,EBX                         ; 0056e115
        ;   Label: LAB_0056e115
    SUB ECX,ECX                         ; 0056e117
    DEC ECX                             ; 0056e119
    XOR EAX,EAX                         ; 0056e11a
    SCASB.REPNE ES:EDI                  ; 0056e11c
    NOT ECX                             ; 0056e11e
    DEC ECX                             ; 0056e120
    PUSH ECX                            ; 0056e121
    PUSH ESI                            ; 0056e122
    PUSH EBX                            ; 0056e123
    CALL crt_string.c_memmove_FUN_005c25d0 ; 0056e124
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0056e129
    JMP 0x0056e0f8                      ; 0056e12c
        ;   XREF to: 0056e0f8 (UNCONDITIONAL_JUMP)  ; LAB_0056e0f8

