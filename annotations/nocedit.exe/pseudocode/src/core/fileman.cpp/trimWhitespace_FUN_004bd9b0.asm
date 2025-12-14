; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fileman.cpp_trimWhitespace_FUN_004bd9b0(char * str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd9b0
        ;   Label: core_fileman.cpp_trimWhitespace_FUN_004bd9b0
    PUSH ESI                            ; 004bd9b1
    PUSH EDI                            ; 004bd9b2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004bd9b3
    MOV EDI,ESI                         ; 004bd9b7
    SUB ECX,ECX                         ; 004bd9b9
    DEC ECX                             ; 004bd9bb
    XOR EAX,EAX                         ; 004bd9bc
    SCASB.REPNE ES:EDI                  ; 004bd9be
    NOT ECX                             ; 004bd9c0
    DEC ECX                             ; 004bd9c2
    MOV EBX,ECX                         ; 004bd9c3
    TEST ECX,ECX                        ; 004bd9c5
    JLE 0x004bd9e0                      ; 004bd9c7
        ;   XREF to: 004bd9e0 (CONDITIONAL_JUMP)  ; LAB_004bd9e0
    LEA EAX,[ECX + ESI*0x1]             ; 004bd9c9
    MOV DL,byte ptr [EAX + -0x1]        ; 004bd9cc
        ;   Label: LAB_004bd9cc
    INC DL                              ; 004bd9cf
    AND EDX,0xff                        ; 004bd9d1
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004bd9d7 | g_CharacterClassificationTable
    JNZ 0x004bd9ff                      ; 004bd9de
        ;   XREF to: 004bd9ff (CONDITIONAL_JUMP)  ; LAB_004bd9ff
    LEA EAX,[ESI + EBX*0x1]             ; 004bd9e0
        ;   Label: LAB_004bd9e0
    LEA EDI,[ESI + 0x1]                 ; 004bd9e3
    MOV byte ptr [EAX],0x0              ; 004bd9e6
    MOV AL,byte ptr [ESI]               ; 004bd9e9
        ;   Label: LAB_004bd9e9
    INC AL                              ; 004bd9eb
    AND EAX,0xff                        ; 004bd9ed
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004bd9f2 | g_CharacterClassificationTable
    JNZ 0x004bda07                      ; 004bd9f9
        ;   XREF to: 004bda07 (CONDITIONAL_JUMP)  ; LAB_004bda07
    POP EDI                             ; 004bd9fb
    POP ESI                             ; 004bd9fc
    POP EBX                             ; 004bd9fd
    RET                                 ; 004bd9fe
    DEC EBX                             ; 004bd9ff
        ;   Label: LAB_004bd9ff
    DEC EAX                             ; 004bda00
    TEST EBX,EBX                        ; 004bda01
    JG 0x004bd9cc                       ; 004bda03
        ;   XREF to: 004bd9cc (CONDITIONAL_JUMP)  ; LAB_004bd9cc
    JMP 0x004bd9e0                      ; 004bda05
        ;   XREF to: 004bd9e0 (UNCONDITIONAL_JUMP)  ; LAB_004bd9e0
    PUSH EBX                            ; 004bda07
        ;   Label: LAB_004bda07
    PUSH EDI                            ; 004bda08
    PUSH ESI                            ; 004bda09
    DEC EBX                             ; 004bda0a
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004bda0b
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004bda10
    JMP 0x004bd9e9                      ; 004bda13
        ;   XREF to: 004bd9e9 (UNCONDITIONAL_JUMP)  ; LAB_004bd9e9

