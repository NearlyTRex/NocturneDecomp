; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_0043d500(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007c842c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d500
        ;   Label: engine_clipper.c_FUN_0043d500
    PUSH ESI                            ; 0043d501
    PUSH EDI                            ; 0043d502
    PUSH EBP                            ; 0043d503
    SUB ESP,0x4                         ; 0043d504
    XOR EDX,EDX                         ; 0043d507
    MOV ECX,dword ptr [0x007c842c]      ; 0043d509 | DAT_007c842c
    MOV dword ptr [ESP],EDX             ; 0043d50f
    TEST ECX,ECX                        ; 0043d512
    JLE 0x0043d5aa                      ; 0043d514
        ;   XREF to: 0043d5aa (CONDITIONAL_JUMP)  ; LAB_0043d5aa
    MOV EBX,0x7c9630                    ; 0043d51a
    MOV EAX,dword ptr [ESP]             ; 0043d51f
        ;   Label: LAB_0043d51f
    MOV EBP,dword ptr [0x007c842c]      ; 0043d522 | DAT_007c842c
    INC EAX                             ; 0043d528
    CMP EAX,EBP                         ; 0043d529
    JNZ 0x0043d52f                      ; 0043d52b
        ;   XREF to: 0043d52f (CONDITIONAL_JUMP)  ; LAB_0043d52f
    XOR EAX,EBP                         ; 0043d52d
    IMUL EAX,EAX,0x30                   ; 0043d52f
        ;   Label: LAB_0043d52f
    MOV EBP,0x7c9630                    ; 0043d532
    MOV EDX,EBX                         ; 0043d537
    MOV EDI,dword ptr [EBX + 0x8]       ; 0043d539
    MOV ECX,dword ptr [EBX + 0x4]       ; 0043d53c
    NEG EDI                             ; 0043d53f
    ADD EBP,EAX                         ; 0043d541
    XOR EAX,EAX                         ; 0043d543
    CMP EDI,ECX                         ; 0043d545
    JL 0x0043d54e                       ; 0043d547
        ;   XREF to: 0043d54e (CONDITIONAL_JUMP)  ; LAB_0043d54e
    MOV EAX,0x1                         ; 0043d549
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043d54e
        ;   Label: LAB_0043d54e
    MOV ESI,dword ptr [EBP + 0x4]       ; 0043d551
    NEG EDI                             ; 0043d554
    CMP EDI,ESI                         ; 0043d556
    JL 0x0043d55c                       ; 0043d558
        ;   XREF to: 0043d55c (CONDITIONAL_JUMP)  ; LAB_0043d55c
    OR AL,0x2                           ; 0043d55a
    CMP EAX,0x3                         ; 0043d55c
        ;   Label: LAB_0043d55c
    JA 0x0043d592                       ; 0043d55f
        ;   XREF to: 0043d592 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43d4e8]  ; 0043d561
        ;   Label: switchD
    MOV ESI,dword ptr [ESP]             ; 0043d592
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x007c842c]      ; 0043d595 | DAT_007c842c
    INC ESI                             ; 0043d59b
    ADD EBX,0x30                        ; 0043d59c
    MOV dword ptr [ESP],ESI             ; 0043d59f
    CMP ESI,EDI                         ; 0043d5a2
    JL 0x0043d51f                       ; 0043d5a4
        ;   XREF to: 0043d51f (CONDITIONAL_JUMP)  ; LAB_0043d51f
    ADD ESP,0x4                         ; 0043d5aa
        ;   Label: LAB_0043d5aa
    POP EBP                             ; 0043d5ad
    POP EDI                             ; 0043d5ae
    POP ESI                             ; 0043d5af
    POP EBX                             ; 0043d5b0
    RET                                 ; 0043d5b1

