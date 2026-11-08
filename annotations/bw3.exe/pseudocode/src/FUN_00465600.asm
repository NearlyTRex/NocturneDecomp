; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00465600(char *param_1,char *param_2,char *param_3)
;
;
; XREF[1]:
;   FUN_00465660 at 00465670
;
; Referenced Globals:
;   TerminatedCString s_s_s_005bbf95
;
; Called Functions:
;   FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00465600
        ;   Label: FUN_00465600
    PUSH EDI                            ; 00465601
    MOV EDI,dword ptr [ESP + 0xc]       ; 00465602
    MOV EAX,dword ptr [ESP + 0x10]      ; 00465606
    MOV ESI,dword ptr [ESP + 0x14]      ; 0046560a
    TEST EAX,EAX                        ; 0046560e
    JZ 0x0046562a                       ; 00465610
        ;   XREF to: 0046562a (CONDITIONAL_JUMP)  ; LAB_0046562a
    CMP byte ptr [EAX],0x0              ; 00465612
    JZ 0x0046562a                       ; 00465615
        ;   XREF to: 0046562a (CONDITIONAL_JUMP)  ; LAB_0046562a
    PUSH ESI                            ; 00465617
    PUSH EAX                            ; 00465618
    PUSH 0x5bbf95                       ; 00465619 | = "%s\\%s"
    PUSH EDI                            ; 0046561e
    CALL FUN_005a28c0                   ; 0046561f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 00465624
    POP EDI                             ; 00465627
    POP ESI                             ; 00465628
    RET                                 ; 00465629
    PUSH EDI                            ; 0046562a
        ;   Label: LAB_0046562a
    MOV AL,byte ptr [ESI]               ; 0046562b
        ;   Label: LAB_0046562b
    MOV byte ptr [EDI],AL               ; 0046562d
    CMP AL,0x0                          ; 0046562f
    JZ 0x00465643                       ; 00465631
        ;   XREF to: 00465643 (CONDITIONAL_JUMP)  ; LAB_00465643
    MOV AL,byte ptr [ESI + 0x1]         ; 00465633
    ADD ESI,0x2                         ; 00465636
    MOV byte ptr [EDI + 0x1],AL         ; 00465639
    ADD EDI,0x2                         ; 0046563c
    CMP AL,0x0                          ; 0046563f
    JNZ 0x0046562b                      ; 00465641
        ;   XREF to: 0046562b (CONDITIONAL_JUMP)  ; LAB_0046562b
    POP EDI                             ; 00465643
        ;   Label: LAB_00465643
    POP EDI                             ; 00465644
    POP ESI                             ; 00465645
    RET                                 ; 00465646

