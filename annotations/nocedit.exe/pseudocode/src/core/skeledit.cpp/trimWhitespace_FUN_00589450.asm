; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_trimWhitespace_FUN_00589450(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    NOP                                 ; 00589450
        ;   Label: core_skeledit.cpp_trimWhitespace_FUN_00589450
    NOP                                 ; 00589451
    NOP                                 ; 00589452
    NOP                                 ; 00589453
    NOP                                 ; 00589454
    NOP                                 ; 00589455
    NOP                                 ; 00589456
    NOP                                 ; 00589457
    NOP                                 ; 00589458
    NOP                                 ; 00589459
    PUSH EBX                            ; 0058945a
    PUSH ESI                            ; 0058945b
    PUSH EDI                            ; 0058945c
    MOV ESI,dword ptr [ESP + 0x10]      ; 0058945d
    MOV EDI,ESI                         ; 00589461
    SUB ECX,ECX                         ; 00589463
    DEC ECX                             ; 00589465
    XOR EAX,EAX                         ; 00589466
    SCASB.REPNE ES:EDI                  ; 00589468
    NOT ECX                             ; 0058946a
    DEC ECX                             ; 0058946c
    MOV EBX,ECX                         ; 0058946d
    TEST ECX,ECX                        ; 0058946f
    JLE 0x0058948a                      ; 00589471
        ;   XREF to: 0058948a (CONDITIONAL_JUMP)  ; LAB_0058948a
    LEA EAX,[ECX + ESI*0x1]             ; 00589473
    MOV DL,byte ptr [EAX + -0x1]        ; 00589476
        ;   Label: LAB_00589476
    INC DL                              ; 00589479
    AND EDX,0xff                        ; 0058947b
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 00589481 | g_CharacterClassificationTable
    JNZ 0x005894a9                      ; 00589488
        ;   XREF to: 005894a9 (CONDITIONAL_JUMP)  ; LAB_005894a9
    LEA EAX,[ESI + EBX*0x1]             ; 0058948a
        ;   Label: LAB_0058948a
    LEA EDI,[ESI + 0x1]                 ; 0058948d
    MOV byte ptr [EAX],0x0              ; 00589490
    MOV AL,byte ptr [ESI]               ; 00589493
        ;   Label: LAB_00589493
    INC AL                              ; 00589495
    AND EAX,0xff                        ; 00589497
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 0058949c | g_CharacterClassificationTable
    JNZ 0x005894b1                      ; 005894a3
        ;   XREF to: 005894b1 (CONDITIONAL_JUMP)  ; LAB_005894b1
    POP EDI                             ; 005894a5
    POP ESI                             ; 005894a6
    POP EBX                             ; 005894a7
    RET                                 ; 005894a8
    DEC EBX                             ; 005894a9
        ;   Label: LAB_005894a9
    DEC EAX                             ; 005894aa
    TEST EBX,EBX                        ; 005894ab
    JG 0x00589476                       ; 005894ad
        ;   XREF to: 00589476 (CONDITIONAL_JUMP)  ; LAB_00589476
    JMP 0x0058948a                      ; 005894af
        ;   XREF to: 0058948a (UNCONDITIONAL_JUMP)  ; LAB_0058948a
    PUSH EBX                            ; 005894b1
        ;   Label: LAB_005894b1
    PUSH EDI                            ; 005894b2
    PUSH ESI                            ; 005894b3
    DEC EBX                             ; 005894b4
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005894b5
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005894ba
    JMP 0x00589493                      ; 005894bd
        ;   XREF to: 00589493 (UNCONDITIONAL_JUMP)  ; LAB_00589493

