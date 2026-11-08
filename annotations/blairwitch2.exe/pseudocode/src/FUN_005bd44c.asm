; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * FUN_005bd44c(byte *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005bd180 at 005bd211
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bd44c
        ;   Label: FUN_005bd44c
    PUSH ESI                            ; 005bd44d
    PUSH EDI                            ; 005bd44e
    MOV EDX,dword ptr [ESP + 0x10]      ; 005bd44f
    MOV EDI,dword ptr [ESP + 0x14]      ; 005bd453
    MOV AH,byte ptr [EDI + 0x10]        ; 005bd457
    OR AH,0x1                           ; 005bd45a
    MOV dword ptr [EDI + 0xc],0xffffffff ; 005bd45d
    MOV BL,AH                           ; 005bd464
    MOV byte ptr [EDI + 0x10],AH        ; 005bd466
    AND BL,0x3                          ; 005bd469
    MOV byte ptr [EDI + 0x10],BL        ; 005bd46c
    CMP byte ptr [EDX],0x2a             ; 005bd46f
    JNZ 0x005bd47e                      ; 005bd472
        ;   XREF to: 005bd47e (CONDITIONAL_JUMP)  ; LAB_005bd47e
    MOV CL,byte ptr [EDI + 0x10]        ; 005bd474
    AND CL,0xfe                         ; 005bd477
    INC EDX                             ; 005bd47a
    MOV byte ptr [EDI + 0x10],CL        ; 005bd47b
    XOR EBX,EBX                         ; 005bd47e
        ;   Label: LAB_005bd47e
    MOV BL,byte ptr [EDX]               ; 005bd480
    MOV AL,BL                           ; 005bd482
    INC AL                              ; 005bd484
    AND EAX,0xff                        ; 005bd486
    TEST byte ptr [EAX + 0x61ed94],0x20 ; 005bd48b | DAT_0061ed94
    JZ 0x005bd4b9                       ; 005bd492
        ;   XREF to: 005bd4b9 (CONDITIONAL_JUMP)  ; LAB_005bd4b9
    XOR EAX,EAX                         ; 005bd494
    IMUL EAX,EAX,0xa                    ; 005bd496
        ;   Label: LAB_005bd496
    SUB EBX,0x30                        ; 005bd499
    ADD EAX,EBX                         ; 005bd49c
    XOR EBX,EBX                         ; 005bd49e
    MOV BL,byte ptr [EDX + 0x1]         ; 005bd4a0
    MOV CL,BL                           ; 005bd4a3
    INC CL                              ; 005bd4a5
    MOVZX ESI,CL                        ; 005bd4a7
    MOV CL,byte ptr [ESI + 0x61ed94]    ; 005bd4aa | DAT_0061ed94
    INC EDX                             ; 005bd4b0
    TEST CL,0x20                        ; 005bd4b1
    JNZ 0x005bd496                      ; 005bd4b4
        ;   XREF to: 005bd496 (CONDITIONAL_JUMP)  ; LAB_005bd496
    MOV dword ptr [EDI + 0xc],EAX       ; 005bd4b6
    MOV CH,byte ptr [EDX]               ; 005bd4b9
        ;   Label: LAB_005bd4b9
    LEA EAX,[EDX + 0x1]                 ; 005bd4bb
    CMP CH,0x4e                         ; 005bd4be
    JNZ 0x005bd4d0                      ; 005bd4c1
        ;   XREF to: 005bd4d0 (CONDITIONAL_JUMP)  ; LAB_005bd4d0
    MOV CL,byte ptr [EDI + 0x10]        ; 005bd4c3
    OR CL,0x8                           ; 005bd4c6
    MOV EDX,EAX                         ; 005bd4c9
    MOV byte ptr [EDI + 0x10],CL        ; 005bd4cb
    JMP 0x005bd4e0                      ; 005bd4ce
        ;   XREF to: 005bd4e0 (UNCONDITIONAL_JUMP)  ; LAB_005bd4e0
    CMP CH,0x46                         ; 005bd4d0
        ;   Label: LAB_005bd4d0
    JNZ 0x005bd4e0                      ; 005bd4d3
        ;   XREF to: 005bd4e0 (CONDITIONAL_JUMP)  ; LAB_005bd4e0
    MOV BH,byte ptr [EDI + 0x10]        ; 005bd4d5
    OR BH,0x4                           ; 005bd4d8
    MOV EDX,EAX                         ; 005bd4db
    MOV byte ptr [EDI + 0x10],BH        ; 005bd4dd
    MOV AL,byte ptr [EDX]               ; 005bd4e0
        ;   Label: LAB_005bd4e0
    LEA EBX,[EDX + 0x1]                 ; 005bd4e2
    CMP AL,0x68                         ; 005bd4e5
    JC 0x005bd4f7                       ; 005bd4e7
        ;   XREF to: 005bd4f7 (CONDITIONAL_JUMP)  ; LAB_005bd4f7
    JBE 0x005bd503                      ; 005bd4e9
        ;   XREF to: 005bd503 (CONDITIONAL_JUMP)  ; LAB_005bd503
    CMP AL,0x6c                         ; 005bd4eb
    JC 0x005bd540                       ; 005bd4ed
        ;   XREF to: 005bd540 (CONDITIONAL_JUMP)  ; LAB_005bd540
    JBE 0x005bd50f                      ; 005bd4ef
        ;   XREF to: 005bd50f (CONDITIONAL_JUMP)  ; LAB_005bd50f
    CMP AL,0x77                         ; 005bd4f1
    JZ 0x005bd50f                       ; 005bd4f3
        ;   XREF to: 005bd50f (CONDITIONAL_JUMP)  ; LAB_005bd50f
    JMP 0x005bd540                      ; 005bd4f5
        ;   XREF to: 005bd540 (UNCONDITIONAL_JUMP)  ; LAB_005bd540
    CMP AL,0x49                         ; 005bd4f7
        ;   Label: LAB_005bd4f7
    JC 0x005bd540                       ; 005bd4f9
        ;   XREF to: 005bd540 (CONDITIONAL_JUMP)  ; LAB_005bd540
    JBE 0x005bd528                      ; 005bd4fb
        ;   XREF to: 005bd528 (CONDITIONAL_JUMP)  ; LAB_005bd528
    CMP AL,0x4c                         ; 005bd4fd
    JZ 0x005bd51b                       ; 005bd4ff
        ;   XREF to: 005bd51b (CONDITIONAL_JUMP)  ; LAB_005bd51b
    JMP 0x005bd540                      ; 005bd501
        ;   XREF to: 005bd540 (UNCONDITIONAL_JUMP)  ; LAB_005bd540
    MOV AL,byte ptr [EDI + 0x10]        ; 005bd503
        ;   Label: LAB_005bd503
    OR AL,0x10                          ; 005bd506
    MOV EDX,EBX                         ; 005bd508
    MOV byte ptr [EDI + 0x10],AL        ; 005bd50a
    JMP 0x005bd540                      ; 005bd50d
        ;   XREF to: 005bd540 (UNCONDITIONAL_JUMP)  ; LAB_005bd540
    MOV CH,byte ptr [EDI + 0x10]        ; 005bd50f
        ;   Label: LAB_005bd50f
    OR CH,0x20                          ; 005bd512
    INC EDX                             ; 005bd515
    MOV byte ptr [EDI + 0x10],CH        ; 005bd516
    JMP 0x005bd540                      ; 005bd519
        ;   XREF to: 005bd540 (UNCONDITIONAL_JUMP)  ; LAB_005bd540
    MOV AH,byte ptr [EDI + 0x10]        ; 005bd51b
        ;   Label: LAB_005bd51b
    OR AH,0x40                          ; 005bd51e
    MOV EDX,EBX                         ; 005bd521
    MOV byte ptr [EDI + 0x10],AH        ; 005bd523
    JMP 0x005bd540                      ; 005bd526
        ;   XREF to: 005bd540 (UNCONDITIONAL_JUMP)  ; LAB_005bd540
    CMP byte ptr [EDX + 0x1],0x36       ; 005bd528
        ;   Label: LAB_005bd528
    JNZ 0x005bd540                      ; 005bd52c
        ;   XREF to: 005bd540 (CONDITIONAL_JUMP)  ; LAB_005bd540
    CMP byte ptr [EDX + 0x2],0x34       ; 005bd52e
    JNZ 0x005bd540                      ; 005bd532
        ;   XREF to: 005bd540 (CONDITIONAL_JUMP)  ; LAB_005bd540
    MOV CL,byte ptr [EDI + 0x10]        ; 005bd534
    OR CL,0x40                          ; 005bd537
    ADD EDX,0x3                         ; 005bd53a
    MOV byte ptr [EDI + 0x10],CL        ; 005bd53d
    MOV EAX,EDX                         ; 005bd540
        ;   Label: LAB_005bd540
    POP EDI                             ; 005bd542
    POP ESI                             ; 005bd543
    POP EBX                             ; 005bd544
    RET                                 ; 005bd545

