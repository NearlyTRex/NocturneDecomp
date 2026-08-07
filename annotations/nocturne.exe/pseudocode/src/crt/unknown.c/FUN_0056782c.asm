; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_unknown_c_FUN_0056782c(byte *param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00567560 at 005675f1
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056782c
        ;   Label: crt_unknown.c_FUN_0056782c
    PUSH ESI                            ; 0056782d
    PUSH EDI                            ; 0056782e
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056782f
    MOV EDI,dword ptr [ESP + 0x14]      ; 00567833
    MOV AH,byte ptr [EDI + 0x10]        ; 00567837
    OR AH,0x1                           ; 0056783a
    MOV dword ptr [EDI + 0xc],0xffffffff ; 0056783d
    MOV BL,AH                           ; 00567844
    MOV byte ptr [EDI + 0x10],AH        ; 00567846
    AND BL,0x3                          ; 00567849
    MOV byte ptr [EDI + 0x10],BL        ; 0056784c
    CMP byte ptr [EDX],0x2a             ; 0056784f
    JNZ 0x0056785e                      ; 00567852
        ;   XREF to: 0056785e (CONDITIONAL_JUMP)  ; LAB_0056785e
    MOV CL,byte ptr [EDI + 0x10]        ; 00567854
    AND CL,0xfe                         ; 00567857
    INC EDX                             ; 0056785a
    MOV byte ptr [EDI + 0x10],CL        ; 0056785b
    XOR EBX,EBX                         ; 0056785e
        ;   Label: LAB_0056785e
    MOV BL,byte ptr [EDX]               ; 00567860
    MOV AL,BL                           ; 00567862
    INC AL                              ; 00567864
    AND EAX,0xff                        ; 00567866
    TEST byte ptr [EAX + 0x5c168c],0x20 ; 0056786b | g_CharacterClassificationTable
    JZ 0x00567899                       ; 00567872
        ;   XREF to: 00567899 (CONDITIONAL_JUMP)  ; LAB_00567899
    XOR EAX,EAX                         ; 00567874
    IMUL EAX,EAX,0xa                    ; 00567876
        ;   Label: LAB_00567876
    SUB EBX,0x30                        ; 00567879
    ADD EAX,EBX                         ; 0056787c
    XOR EBX,EBX                         ; 0056787e
    MOV BL,byte ptr [EDX + 0x1]         ; 00567880
    MOV CL,BL                           ; 00567883
    INC CL                              ; 00567885
    MOVZX ESI,CL                        ; 00567887
    MOV CL,byte ptr [ESI + 0x5c168c]    ; 0056788a | g_CharacterClassificationTable
    INC EDX                             ; 00567890
    TEST CL,0x20                        ; 00567891
    JNZ 0x00567876                      ; 00567894
        ;   XREF to: 00567876 (CONDITIONAL_JUMP)  ; LAB_00567876
    MOV dword ptr [EDI + 0xc],EAX       ; 00567896
    MOV CH,byte ptr [EDX]               ; 00567899
        ;   Label: LAB_00567899
    LEA EAX,[EDX + 0x1]                 ; 0056789b
    CMP CH,0x4e                         ; 0056789e
    JNZ 0x005678b0                      ; 005678a1
        ;   XREF to: 005678b0 (CONDITIONAL_JUMP)  ; LAB_005678b0
    MOV CL,byte ptr [EDI + 0x10]        ; 005678a3
    OR CL,0x8                           ; 005678a6
    MOV EDX,EAX                         ; 005678a9
    MOV byte ptr [EDI + 0x10],CL        ; 005678ab
    JMP 0x005678c0                      ; 005678ae
        ;   XREF to: 005678c0 (UNCONDITIONAL_JUMP)  ; LAB_005678c0
    CMP CH,0x46                         ; 005678b0
        ;   Label: LAB_005678b0
    JNZ 0x005678c0                      ; 005678b3
        ;   XREF to: 005678c0 (CONDITIONAL_JUMP)  ; LAB_005678c0
    MOV BH,byte ptr [EDI + 0x10]        ; 005678b5
    OR BH,0x4                           ; 005678b8
    MOV EDX,EAX                         ; 005678bb
    MOV byte ptr [EDI + 0x10],BH        ; 005678bd
    MOV AL,byte ptr [EDX]               ; 005678c0
        ;   Label: LAB_005678c0
    LEA EBX,[EDX + 0x1]                 ; 005678c2
    CMP AL,0x68                         ; 005678c5
    JC 0x005678d7                       ; 005678c7
        ;   XREF to: 005678d7 (CONDITIONAL_JUMP)  ; LAB_005678d7
    JBE 0x005678e3                      ; 005678c9
        ;   XREF to: 005678e3 (CONDITIONAL_JUMP)  ; LAB_005678e3
    CMP AL,0x6c                         ; 005678cb
    JC 0x00567920                       ; 005678cd
        ;   XREF to: 00567920 (CONDITIONAL_JUMP)  ; LAB_00567920
    JBE 0x005678ef                      ; 005678cf
        ;   XREF to: 005678ef (CONDITIONAL_JUMP)  ; LAB_005678ef
    CMP AL,0x77                         ; 005678d1
    JZ 0x005678ef                       ; 005678d3
        ;   XREF to: 005678ef (CONDITIONAL_JUMP)  ; LAB_005678ef
    JMP 0x00567920                      ; 005678d5
        ;   XREF to: 00567920 (UNCONDITIONAL_JUMP)  ; LAB_00567920
    CMP AL,0x49                         ; 005678d7
        ;   Label: LAB_005678d7
    JC 0x00567920                       ; 005678d9
        ;   XREF to: 00567920 (CONDITIONAL_JUMP)  ; LAB_00567920
    JBE 0x00567908                      ; 005678db
        ;   XREF to: 00567908 (CONDITIONAL_JUMP)  ; LAB_00567908
    CMP AL,0x4c                         ; 005678dd
    JZ 0x005678fb                       ; 005678df
        ;   XREF to: 005678fb (CONDITIONAL_JUMP)  ; LAB_005678fb
    JMP 0x00567920                      ; 005678e1
        ;   XREF to: 00567920 (UNCONDITIONAL_JUMP)  ; LAB_00567920
    MOV AL,byte ptr [EDI + 0x10]        ; 005678e3
        ;   Label: LAB_005678e3
    OR AL,0x10                          ; 005678e6
    MOV EDX,EBX                         ; 005678e8
    MOV byte ptr [EDI + 0x10],AL        ; 005678ea
    JMP 0x00567920                      ; 005678ed
        ;   XREF to: 00567920 (UNCONDITIONAL_JUMP)  ; LAB_00567920
    MOV CH,byte ptr [EDI + 0x10]        ; 005678ef
        ;   Label: LAB_005678ef
    OR CH,0x20                          ; 005678f2
    INC EDX                             ; 005678f5
    MOV byte ptr [EDI + 0x10],CH        ; 005678f6
    JMP 0x00567920                      ; 005678f9
        ;   XREF to: 00567920 (UNCONDITIONAL_JUMP)  ; LAB_00567920
    MOV AH,byte ptr [EDI + 0x10]        ; 005678fb
        ;   Label: LAB_005678fb
    OR AH,0x40                          ; 005678fe
    MOV EDX,EBX                         ; 00567901
    MOV byte ptr [EDI + 0x10],AH        ; 00567903
    JMP 0x00567920                      ; 00567906
        ;   XREF to: 00567920 (UNCONDITIONAL_JUMP)  ; LAB_00567920
    CMP byte ptr [EDX + 0x1],0x36       ; 00567908
        ;   Label: LAB_00567908
    JNZ 0x00567920                      ; 0056790c
        ;   XREF to: 00567920 (CONDITIONAL_JUMP)  ; LAB_00567920
    CMP byte ptr [EDX + 0x2],0x34       ; 0056790e
    JNZ 0x00567920                      ; 00567912
        ;   XREF to: 00567920 (CONDITIONAL_JUMP)  ; LAB_00567920
    MOV CL,byte ptr [EDI + 0x10]        ; 00567914
    OR CL,0x40                          ; 00567917
    ADD EDX,0x3                         ; 0056791a
    MOV byte ptr [EDI + 0x10],CL        ; 0056791d
    MOV EAX,EDX                         ; 00567920
        ;   Label: LAB_00567920
    POP EDI                             ; 00567922
    POP ESI                             ; 00567923
    POP EBX                             ; 00567924
    RET                                 ; 00567925

