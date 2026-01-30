; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_event_cpp_FUN_004aa650(char *param_1)
;
; Parameters:
; char *           Stack[0x4]:4   param_1
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa650
        ;   Label: core_event.cpp_FUN_004aa650
    PUSH ESI                            ; 004aa651
    PUSH EDI                            ; 004aa652
    MOV ESI,dword ptr [ESP + 0x10]      ; 004aa653
    MOV EDI,ESI                         ; 004aa657
    SUB ECX,ECX                         ; 004aa659
    DEC ECX                             ; 004aa65b
    XOR EAX,EAX                         ; 004aa65c
    SCASB.REPNE ES:EDI                  ; 004aa65e
    NOT ECX                             ; 004aa660
    DEC ECX                             ; 004aa662
    MOV EBX,ECX                         ; 004aa663
    TEST ECX,ECX                        ; 004aa665
    JLE 0x004aa680                      ; 004aa667
        ;   XREF to: 004aa680 (CONDITIONAL_JUMP)  ; LAB_004aa680
    LEA EAX,[ECX + ESI*0x1]             ; 004aa669
    MOV DL,byte ptr [EAX + -0x1]        ; 004aa66c
        ;   Label: LAB_004aa66c
    INC DL                              ; 004aa66f
    AND EDX,0xff                        ; 004aa671
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004aa677 | g_CharacterClassificationTable
    JNZ 0x004aa69f                      ; 004aa67e
        ;   XREF to: 004aa69f (CONDITIONAL_JUMP)  ; LAB_004aa69f
    LEA EAX,[ESI + EBX*0x1]             ; 004aa680
        ;   Label: LAB_004aa680
    LEA EDI,[ESI + 0x1]                 ; 004aa683
    MOV byte ptr [EAX],0x0              ; 004aa686
    MOV AL,byte ptr [ESI]               ; 004aa689
        ;   Label: LAB_004aa689
    INC AL                              ; 004aa68b
    AND EAX,0xff                        ; 004aa68d
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004aa692 | g_CharacterClassificationTable
    JNZ 0x004aa6a7                      ; 004aa699
        ;   XREF to: 004aa6a7 (CONDITIONAL_JUMP)  ; LAB_004aa6a7
    POP EDI                             ; 004aa69b
    POP ESI                             ; 004aa69c
    POP EBX                             ; 004aa69d
    RET                                 ; 004aa69e
    DEC EBX                             ; 004aa69f
        ;   Label: LAB_004aa69f
    DEC EAX                             ; 004aa6a0
    TEST EBX,EBX                        ; 004aa6a1
    JG 0x004aa66c                       ; 004aa6a3
        ;   XREF to: 004aa66c (CONDITIONAL_JUMP)  ; LAB_004aa66c
    JMP 0x004aa680                      ; 004aa6a5
        ;   XREF to: 004aa680 (UNCONDITIONAL_JUMP)  ; LAB_004aa680
    PUSH EBX                            ; 004aa6a7
        ;   Label: LAB_004aa6a7
    PUSH EDI                            ; 004aa6a8
    PUSH ESI                            ; 004aa6a9
    DEC EBX                             ; 004aa6aa
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004aa6ab
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004aa6b0
    JMP 0x004aa689                      ; 004aa6b3
        ;   XREF to: 004aa689 (UNCONDITIONAL_JUMP)  ; LAB_004aa689

