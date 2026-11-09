; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_trimLineAndRemoveComments_FUN_00551590(char *line)
;
; Parameters:
; char *           Stack[0x4]:4   line
;
; Called Functions:
;   crt_string.c_memmove_FUN_005a54c0
;   crt_string.c_strstr_FUN_005a4010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551590
        ;   Label: sound_sndmain.cpp_trimLineAndRemoveComments_FUN_00551590
    PUSH ESI                            ; 00551591
    PUSH EDI                            ; 00551592
    MOV EBX,dword ptr [ESP + 0x10]      ; 00551593
    PUSH 0x5d253c                       ; 00551597
    PUSH EBX                            ; 0055159c
    CALL crt_string.c_strstr_FUN_005a4010 ; 0055159d
        ;   XREF to: 005a4010 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005a4010(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 005515a2
    TEST EAX,EAX                        ; 005515a5
    JZ 0x005515ac                       ; 005515a7
        ;   XREF to: 005515ac (CONDITIONAL_JUMP)  ; LAB_005515ac
    MOV byte ptr [EAX],0x0              ; 005515a9
    MOV ESI,EBX                         ; 005515ac
        ;   Label: LAB_005515ac
    XOR DL,DL                           ; 005515ae
    MOV AL,byte ptr [ESI]               ; 005515b0
        ;   Label: LAB_005515b0
    CMP AL,DL                           ; 005515b2
    JZ 0x005515c8                       ; 005515b4
        ;   XREF to: 005515c8 (CONDITIONAL_JUMP)  ; LAB_005515c8
    CMP AL,0x0                          ; 005515b6
    JZ 0x005515c6                       ; 005515b8
        ;   XREF to: 005515c6 (CONDITIONAL_JUMP)  ; LAB_005515c6
    INC ESI                             ; 005515ba
    MOV AL,byte ptr [ESI]               ; 005515bb
    CMP AL,DL                           ; 005515bd
    JZ 0x005515c8                       ; 005515bf
        ;   XREF to: 005515c8 (CONDITIONAL_JUMP)  ; LAB_005515c8
    INC ESI                             ; 005515c1
    CMP AL,0x0                          ; 005515c2
    JNZ 0x005515b0                      ; 005515c4
        ;   XREF to: 005515b0 (CONDITIONAL_JUMP)  ; LAB_005515b0
    SUB ESI,ESI                         ; 005515c6
        ;   Label: LAB_005515c6
    MOV EAX,ESI                         ; 005515c8
        ;   Label: LAB_005515c8
    CMP ESI,EBX                         ; 005515ca
    JBE 0x005515e2                      ; 005515cc
        ;   XREF to: 005515e2 (CONDITIONAL_JUMP)  ; LAB_005515e2
    MOV CL,byte ptr [EAX + -0x1]        ; 005515ce
        ;   Label: LAB_005515ce
    INC CL                              ; 005515d1
    AND ECX,0xff                        ; 005515d3
    TEST byte ptr [ECX + 0x6074b8],0x2  ; 005515d9
    JNZ 0x005515fe                      ; 005515e0
        ;   XREF to: 005515fe (CONDITIONAL_JUMP)  ; LAB_005515fe
    LEA ESI,[EBX + 0x1]                 ; 005515e2
        ;   Label: LAB_005515e2
    MOV byte ptr [EAX],0x0              ; 005515e5
    MOV AL,byte ptr [EBX]               ; 005515e8
        ;   Label: LAB_005515e8
    INC AL                              ; 005515ea
    AND EAX,0xff                        ; 005515ec
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 005515f1
    JNZ 0x00551605                      ; 005515f8
        ;   XREF to: 00551605 (CONDITIONAL_JUMP)  ; LAB_00551605
    POP EDI                             ; 005515fa
    POP ESI                             ; 005515fb
    POP EBX                             ; 005515fc
    RET                                 ; 005515fd
    DEC EAX                             ; 005515fe
        ;   Label: LAB_005515fe
    CMP EAX,EBX                         ; 005515ff
    JA 0x005515ce                       ; 00551601
        ;   XREF to: 005515ce (CONDITIONAL_JUMP)  ; LAB_005515ce
    JMP 0x005515e2                      ; 00551603
        ;   XREF to: 005515e2 (UNCONDITIONAL_JUMP)  ; LAB_005515e2
    MOV EDI,EBX                         ; 00551605
        ;   Label: LAB_00551605
    SUB ECX,ECX                         ; 00551607
    DEC ECX                             ; 00551609
    XOR EAX,EAX                         ; 0055160a
    SCASB.REPNE ES:EDI                  ; 0055160c
    NOT ECX                             ; 0055160e
    DEC ECX                             ; 00551610
    PUSH ECX                            ; 00551611
    PUSH ESI                            ; 00551612
    PUSH EBX                            ; 00551613
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00551614
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00551619
    JMP 0x005515e8                      ; 0055161c
        ;   XREF to: 005515e8 (UNCONDITIONAL_JUMP)  ; LAB_005515e8

