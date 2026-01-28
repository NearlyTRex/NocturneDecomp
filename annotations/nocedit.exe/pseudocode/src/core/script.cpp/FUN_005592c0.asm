; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_script_cpp_FUN_005592c0(void)
;
;
; XREF[1]:
;   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370 at 0055a3b8
;
; Referenced Globals:
;   TerminatedCString s_anon_0064151b
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   crt_string.c_strstr_FUN_005fedd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005592c0
        ;   Label: core_script.cpp_FUN_005592c0
    PUSH ESI                            ; 005592c1
    PUSH EDI                            ; 005592c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005592c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005592c7
    MOV byte ptr [EBX],0x0              ; 005592cb
    MOV AL,byte ptr [ESI]               ; 005592ce
        ;   Label: LAB_005592ce
    INC AL                              ; 005592d0
    AND EAX,0xff                        ; 005592d2
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 005592d7 | g_CharacterClassificationTable
    JZ 0x005592e3                       ; 005592de
        ;   XREF to: 005592e3 (CONDITIONAL_JUMP)  ; LAB_005592e3
    INC ESI                             ; 005592e0
    JMP 0x005592ce                      ; 005592e1
        ;   XREF to: 005592ce (UNCONDITIONAL_JUMP)  ; LAB_005592ce
    MOV EDI,EBX                         ; 005592e3
        ;   Label: LAB_005592e3
    PUSH EDI                            ; 005592e5
    MOV AL,byte ptr [ESI]               ; 005592e6
        ;   Label: LAB_005592e6
    MOV byte ptr [EDI],AL               ; 005592e8
    CMP AL,0x0                          ; 005592ea
    JZ 0x005592fe                       ; 005592ec
        ;   XREF to: 005592fe (CONDITIONAL_JUMP)  ; LAB_005592fe
    MOV AL,byte ptr [ESI + 0x1]         ; 005592ee
    ADD ESI,0x2                         ; 005592f1
    MOV byte ptr [EDI + 0x1],AL         ; 005592f4
    ADD EDI,0x2                         ; 005592f7
    CMP AL,0x0                          ; 005592fa
    JNZ 0x005592e6                      ; 005592fc
        ;   XREF to: 005592e6 (CONDITIONAL_JUMP)  ; LAB_005592e6
    POP EDI                             ; 005592fe
        ;   Label: LAB_005592fe
    PUSH 0x64151b                       ; 005592ff | = "//"
    PUSH EBX                            ; 00559304
    CALL crt_string.c_strstr_FUN_005fedd0 ; 00559305
        ;   XREF to: 005fedd0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005fedd0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 0055930a
    TEST EAX,EAX                        ; 0055930d
    JZ 0x00559314                       ; 0055930f
        ;   XREF to: 00559314 (CONDITIONAL_JUMP)  ; LAB_00559314
    MOV byte ptr [EAX],0x0              ; 00559311
    MOV ESI,EBX                         ; 00559314
        ;   Label: LAB_00559314
    XOR DL,DL                           ; 00559316
    MOV AL,byte ptr [ESI]               ; 00559318
        ;   Label: LAB_00559318
    CMP AL,DL                           ; 0055931a
    JZ 0x00559330                       ; 0055931c
        ;   XREF to: 00559330 (CONDITIONAL_JUMP)  ; LAB_00559330
    CMP AL,0x0                          ; 0055931e
    JZ 0x0055932e                       ; 00559320
        ;   XREF to: 0055932e (CONDITIONAL_JUMP)  ; LAB_0055932e
    INC ESI                             ; 00559322
    MOV AL,byte ptr [ESI]               ; 00559323
    CMP AL,DL                           ; 00559325
    JZ 0x00559330                       ; 00559327
        ;   XREF to: 00559330 (CONDITIONAL_JUMP)  ; LAB_00559330
    INC ESI                             ; 00559329
    CMP AL,0x0                          ; 0055932a
    JNZ 0x00559318                      ; 0055932c
        ;   XREF to: 00559318 (CONDITIONAL_JUMP)  ; LAB_00559318
    SUB ESI,ESI                         ; 0055932e
        ;   Label: LAB_0055932e
    MOV EAX,ESI                         ; 00559330
        ;   Label: LAB_00559330
    CMP ESI,EBX                         ; 00559332
    JBE 0x0055934f                      ; 00559334
        ;   XREF to: 0055934f (CONDITIONAL_JUMP)  ; LAB_0055934f
    MOV DL,byte ptr [EAX + -0x1]        ; 00559336
        ;   Label: LAB_00559336
    INC DL                              ; 00559339
    MOVZX ESI,DL                        ; 0055933b
    TEST byte ptr [ESI + 0x6849c4],0x2  ; 0055933e | g_CharacterClassificationTable
    JZ 0x0055934f                       ; 00559345
        ;   XREF to: 0055934f (CONDITIONAL_JUMP)  ; LAB_0055934f
    DEC EAX                             ; 00559347
    MOV byte ptr [EAX],0x0              ; 00559348
    CMP EAX,EBX                         ; 0055934b
    JA 0x00559336                       ; 0055934d
        ;   XREF to: 00559336 (CONDITIONAL_JUMP)  ; LAB_00559336
    POP EDI                             ; 0055934f
        ;   Label: LAB_0055934f
    POP ESI                             ; 00559350
    POP EBX                             ; 00559351
    RET                                 ; 00559352

