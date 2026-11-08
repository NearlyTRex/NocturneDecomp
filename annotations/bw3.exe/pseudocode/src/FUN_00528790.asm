; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00528790(char *param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_005295e0 at 00529628
;
; Referenced Globals:
;   undefined4 DAT_005cdbe3
;   undefined4 DAT_006074b8
;
; Called Functions:
;   FUN_005a4010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528790
        ;   Label: FUN_00528790
    PUSH ESI                            ; 00528791
    PUSH EDI                            ; 00528792
    MOV ESI,dword ptr [ESP + 0x10]      ; 00528793
    MOV EBX,dword ptr [ESP + 0x14]      ; 00528797
    MOV byte ptr [EBX],0x0              ; 0052879b
    MOV AL,byte ptr [ESI]               ; 0052879e
        ;   Label: LAB_0052879e
    INC AL                              ; 005287a0
    AND EAX,0xff                        ; 005287a2
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 005287a7 | DAT_006074b8
    JZ 0x005287b3                       ; 005287ae
        ;   XREF to: 005287b3 (CONDITIONAL_JUMP)  ; LAB_005287b3
    INC ESI                             ; 005287b0
    JMP 0x0052879e                      ; 005287b1
        ;   XREF to: 0052879e (UNCONDITIONAL_JUMP)  ; LAB_0052879e
    MOV EDI,EBX                         ; 005287b3
        ;   Label: LAB_005287b3
    PUSH EDI                            ; 005287b5
    MOV AL,byte ptr [ESI]               ; 005287b6
        ;   Label: LAB_005287b6
    MOV byte ptr [EDI],AL               ; 005287b8
    CMP AL,0x0                          ; 005287ba
    JZ 0x005287ce                       ; 005287bc
        ;   XREF to: 005287ce (CONDITIONAL_JUMP)  ; LAB_005287ce
    MOV AL,byte ptr [ESI + 0x1]         ; 005287be
    ADD ESI,0x2                         ; 005287c1
    MOV byte ptr [EDI + 0x1],AL         ; 005287c4
    ADD EDI,0x2                         ; 005287c7
    CMP AL,0x0                          ; 005287ca
    JNZ 0x005287b6                      ; 005287cc
        ;   XREF to: 005287b6 (CONDITIONAL_JUMP)  ; LAB_005287b6
    POP EDI                             ; 005287ce
        ;   Label: LAB_005287ce
    PUSH 0x5cdbe3                       ; 005287cf | DAT_005cdbe3
    PUSH EBX                            ; 005287d4
    CALL FUN_005a4010                   ; 005287d5
        ;   XREF to: 005a4010 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4010()
    ADD ESP,0x8                         ; 005287da
    TEST EAX,EAX                        ; 005287dd
    JZ 0x005287e4                       ; 005287df
        ;   XREF to: 005287e4 (CONDITIONAL_JUMP)  ; LAB_005287e4
    MOV byte ptr [EAX],0x0              ; 005287e1
    MOV ESI,EBX                         ; 005287e4
        ;   Label: LAB_005287e4
    XOR DL,DL                           ; 005287e6
    MOV AL,byte ptr [ESI]               ; 005287e8
        ;   Label: LAB_005287e8
    CMP AL,DL                           ; 005287ea
    JZ 0x00528800                       ; 005287ec
        ;   XREF to: 00528800 (CONDITIONAL_JUMP)  ; LAB_00528800
    CMP AL,0x0                          ; 005287ee
    JZ 0x005287fe                       ; 005287f0
        ;   XREF to: 005287fe (CONDITIONAL_JUMP)  ; LAB_005287fe
    INC ESI                             ; 005287f2
    MOV AL,byte ptr [ESI]               ; 005287f3
    CMP AL,DL                           ; 005287f5
    JZ 0x00528800                       ; 005287f7
        ;   XREF to: 00528800 (CONDITIONAL_JUMP)  ; LAB_00528800
    INC ESI                             ; 005287f9
    CMP AL,0x0                          ; 005287fa
    JNZ 0x005287e8                      ; 005287fc
        ;   XREF to: 005287e8 (CONDITIONAL_JUMP)  ; LAB_005287e8
    SUB ESI,ESI                         ; 005287fe
        ;   Label: LAB_005287fe
    MOV EAX,ESI                         ; 00528800
        ;   Label: LAB_00528800
    CMP ESI,EBX                         ; 00528802
    JBE 0x0052881f                      ; 00528804
        ;   XREF to: 0052881f (CONDITIONAL_JUMP)  ; LAB_0052881f
    MOV DL,byte ptr [EAX + -0x1]        ; 00528806
        ;   Label: LAB_00528806
    INC DL                              ; 00528809
    MOVZX ESI,DL                        ; 0052880b
    TEST byte ptr [ESI + 0x6074b8],0x2  ; 0052880e | DAT_006074b8
    JZ 0x0052881f                       ; 00528815
        ;   XREF to: 0052881f (CONDITIONAL_JUMP)  ; LAB_0052881f
    DEC EAX                             ; 00528817
    MOV byte ptr [EAX],0x0              ; 00528818
    CMP EAX,EBX                         ; 0052881b
    JA 0x00528806                       ; 0052881d
        ;   XREF to: 00528806 (CONDITIONAL_JUMP)  ; LAB_00528806
    POP EDI                             ; 0052881f
        ;   Label: LAB_0052881f
    POP ESI                             ; 00528820
    POP EBX                             ; 00528821
    RET                                 ; 00528822

