; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_0043d4fe(void)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0043d4e8 = 0043d568
;   undefined1* PTR_caseD_1_0043d4ec = 0043d5b2
;   undefined1* PTR_caseD_3_0043d4f4 = 0043d592
;   string caseD_0
;   string caseD_2
;   undefined4 DAT_007c7554
;   undefined4 DAT_007c7558
;   undefined4 DAT_007c842c
;   undefined4 DAT_007c9630
;   undefined4 DAT_007c9634
;   undefined4 DAT_007c9638
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0043d4fe
        ;   Label: engine_clipper.c_FUN_0043d4fe
    PUSH EBX                            ; 0043d500
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
    MOV EBP,0x7c9630                    ; 0043d532 | DAT_007c9630
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
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043d54e | DAT_007c9638
        ;   Label: LAB_0043d54e
    MOV ESI,dword ptr [EBP + 0x4]       ; 0043d551 | DAT_007c9634
    NEG EDI                             ; 0043d554
    CMP EDI,ESI                         ; 0043d556
    JL 0x0043d55c                       ; 0043d558
        ;   XREF to: 0043d55c (CONDITIONAL_JUMP)  ; LAB_0043d55c
    OR AL,0x2                           ; 0043d55a
    CMP EAX,0x3                         ; 0043d55c
        ;   Label: LAB_0043d55c
    JA 0x0043d592                       ; 0043d55f
        ;   XREF to: 0043d592 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43d4e8]  ; 0043d561 | = "k=Tu|" | caseD_1 | caseD_2
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
    IMUL EAX,dword ptr [0x007c7554],0x30 ; 0043d5b2 | DAT_007c7554
        ;   Label: caseD_1
    ADD EAX,0x7c7558                    ; 0043d5b9 | DAT_007c7558
    PUSH EAX                            ; 0043d5be
    PUSH EDX                            ; 0043d5bf
    PUSH EBP                            ; 0043d5c0
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000 ; 0043d5c1
        ;   XREF to: 0043d000 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000()
    MOV ESI,dword ptr [0x007c7554]      ; 0043d5c6 | DAT_007c7554
    INC ESI                             ; 0043d5cc
    ADD ESP,0xc                         ; 0043d5cd
    MOV dword ptr [0x007c7554],ESI      ; 0043d5d0 | DAT_007c7554
    JMP 0x0043d592                      ; 0043d5d6
        ;   XREF to: 0043d592 (UNCONDITIONAL_JUMP)  ; caseD_3

