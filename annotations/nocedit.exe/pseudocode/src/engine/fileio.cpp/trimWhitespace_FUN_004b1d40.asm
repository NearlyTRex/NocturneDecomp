; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_fileio_cpp_trimWhitespace_FUN_004b1d40(char *string)
;
; Parameters:
; char *           Stack[0x4]:4   string
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1d40
        ;   Label: engine_fileio.cpp_trimWhitespace_FUN_004b1d40
    PUSH ESI                            ; 004b1d41
    PUSH EDI                            ; 004b1d42
    MOV ESI,dword ptr [ESP + 0x10]      ; 004b1d43
    MOV EDI,ESI                         ; 004b1d47
    SUB ECX,ECX                         ; 004b1d49
    DEC ECX                             ; 004b1d4b
    XOR EAX,EAX                         ; 004b1d4c
    SCASB.REPNE ES:EDI                  ; 004b1d4e
    NOT ECX                             ; 004b1d50
    DEC ECX                             ; 004b1d52
    MOV EBX,ECX                         ; 004b1d53
    TEST ECX,ECX                        ; 004b1d55
    JLE 0x004b1d70                      ; 004b1d57
        ;   XREF to: 004b1d70 (CONDITIONAL_JUMP)  ; LAB_004b1d70
    LEA EAX,[ECX + ESI*0x1]             ; 004b1d59
    MOV DL,byte ptr [EAX + -0x1]        ; 004b1d5c
        ;   Label: LAB_004b1d5c
    INC DL                              ; 004b1d5f
    AND EDX,0xff                        ; 004b1d61
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004b1d67 | g_CharacterClassificationTable
    JNZ 0x004b1d8f                      ; 004b1d6e
        ;   XREF to: 004b1d8f (CONDITIONAL_JUMP)  ; LAB_004b1d8f
    LEA EAX,[ESI + EBX*0x1]             ; 004b1d70
        ;   Label: LAB_004b1d70
    LEA EDI,[ESI + 0x1]                 ; 004b1d73
    MOV byte ptr [EAX],0x0              ; 004b1d76
    MOV AL,byte ptr [ESI]               ; 004b1d79
        ;   Label: LAB_004b1d79
    INC AL                              ; 004b1d7b
    AND EAX,0xff                        ; 004b1d7d
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004b1d82 | g_CharacterClassificationTable
    JNZ 0x004b1d97                      ; 004b1d89
        ;   XREF to: 004b1d97 (CONDITIONAL_JUMP)  ; LAB_004b1d97
    POP EDI                             ; 004b1d8b
    POP ESI                             ; 004b1d8c
    POP EBX                             ; 004b1d8d
    RET                                 ; 004b1d8e
    DEC EBX                             ; 004b1d8f
        ;   Label: LAB_004b1d8f
    DEC EAX                             ; 004b1d90
    TEST EBX,EBX                        ; 004b1d91
    JG 0x004b1d5c                       ; 004b1d93
        ;   XREF to: 004b1d5c (CONDITIONAL_JUMP)  ; LAB_004b1d5c
    JMP 0x004b1d70                      ; 004b1d95
        ;   XREF to: 004b1d70 (UNCONDITIONAL_JUMP)  ; LAB_004b1d70
    PUSH EBX                            ; 004b1d97
        ;   Label: LAB_004b1d97
    PUSH EDI                            ; 004b1d98
    PUSH ESI                            ; 004b1d99
    DEC EBX                             ; 004b1d9a
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b1d9b
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004b1da0
    JMP 0x004b1d79                      ; 004b1da3
        ;   XREF to: 004b1d79 (UNCONDITIONAL_JUMP)  ; LAB_004b1d79

