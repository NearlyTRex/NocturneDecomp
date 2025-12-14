; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_trimLineAndRemoveComments_FUN_005a4530(char * line)
;
; Parameters:
; char *           Stack[0x4]:4   line
;
; Referenced Globals:
;   TerminatedCString s_anon_0064f583
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;   crt_string.c_strstr_FUN_005fedd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4530
        ;   Label: sound_sndmain.cpp_trimLineAndRemoveComments_FUN_005a4530
    PUSH ESI                            ; 005a4531
    PUSH EDI                            ; 005a4532
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a4533
    PUSH 0x64f583                       ; 005a4537 | = "//"
    PUSH EBX                            ; 005a453c
    CALL crt_string.c_strstr_FUN_005fedd0 ; 005a453d
        ;   XREF to: 005fedd0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005fedd0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 005a4542
    TEST EAX,EAX                        ; 005a4545
    JZ 0x005a454c                       ; 005a4547
        ;   XREF to: 005a454c (CONDITIONAL_JUMP)  ; LAB_005a454c
    MOV byte ptr [EAX],0x0              ; 005a4549
    MOV ESI,EBX                         ; 005a454c
        ;   Label: LAB_005a454c
    XOR DL,DL                           ; 005a454e
    MOV AL,byte ptr [ESI]               ; 005a4550
        ;   Label: LAB_005a4550
    CMP AL,DL                           ; 005a4552
    JZ 0x005a4568                       ; 005a4554
        ;   XREF to: 005a4568 (CONDITIONAL_JUMP)  ; LAB_005a4568
    CMP AL,0x0                          ; 005a4556
    JZ 0x005a4566                       ; 005a4558
        ;   XREF to: 005a4566 (CONDITIONAL_JUMP)  ; LAB_005a4566
    INC ESI                             ; 005a455a
    MOV AL,byte ptr [ESI]               ; 005a455b
    CMP AL,DL                           ; 005a455d
    JZ 0x005a4568                       ; 005a455f
        ;   XREF to: 005a4568 (CONDITIONAL_JUMP)  ; LAB_005a4568
    INC ESI                             ; 005a4561
    CMP AL,0x0                          ; 005a4562
    JNZ 0x005a4550                      ; 005a4564
        ;   XREF to: 005a4550 (CONDITIONAL_JUMP)  ; LAB_005a4550
    SUB ESI,ESI                         ; 005a4566
        ;   Label: LAB_005a4566
    MOV EAX,ESI                         ; 005a4568
        ;   Label: LAB_005a4568
    CMP ESI,EBX                         ; 005a456a
    JBE 0x005a4582                      ; 005a456c
        ;   XREF to: 005a4582 (CONDITIONAL_JUMP)  ; LAB_005a4582
    MOV CL,byte ptr [EAX + -0x1]        ; 005a456e
        ;   Label: LAB_005a456e
    INC CL                              ; 005a4571
    AND ECX,0xff                        ; 005a4573
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 005a4579 | g_CharacterClassificationTable
    JNZ 0x005a459e                      ; 005a4580
        ;   XREF to: 005a459e (CONDITIONAL_JUMP)  ; LAB_005a459e
    LEA ESI,[EBX + 0x1]                 ; 005a4582
        ;   Label: LAB_005a4582
    MOV byte ptr [EAX],0x0              ; 005a4585
    MOV AL,byte ptr [EBX]               ; 005a4588
        ;   Label: LAB_005a4588
    INC AL                              ; 005a458a
    AND EAX,0xff                        ; 005a458c
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 005a4591 | g_CharacterClassificationTable
    JNZ 0x005a45a5                      ; 005a4598
        ;   XREF to: 005a45a5 (CONDITIONAL_JUMP)  ; LAB_005a45a5
    POP EDI                             ; 005a459a
    POP ESI                             ; 005a459b
    POP EBX                             ; 005a459c
    RET                                 ; 005a459d
    DEC EAX                             ; 005a459e
        ;   Label: LAB_005a459e
    CMP EAX,EBX                         ; 005a459f
    JA 0x005a456e                       ; 005a45a1
        ;   XREF to: 005a456e (CONDITIONAL_JUMP)  ; LAB_005a456e
    JMP 0x005a4582                      ; 005a45a3
        ;   XREF to: 005a4582 (UNCONDITIONAL_JUMP)  ; LAB_005a4582
    MOV EDI,EBX                         ; 005a45a5
        ;   Label: LAB_005a45a5
    SUB ECX,ECX                         ; 005a45a7
    DEC ECX                             ; 005a45a9
    XOR EAX,EAX                         ; 005a45aa
    SCASB.REPNE ES:EDI                  ; 005a45ac
    NOT ECX                             ; 005a45ae
    DEC ECX                             ; 005a45b0
    PUSH ECX                            ; 005a45b1
    PUSH ESI                            ; 005a45b2
    PUSH EBX                            ; 005a45b3
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005a45b4
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005a45b9
    JMP 0x005a4588                      ; 005a45bc
        ;   XREF to: 005a4588 (UNCONDITIONAL_JUMP)  ; LAB_005a4588

