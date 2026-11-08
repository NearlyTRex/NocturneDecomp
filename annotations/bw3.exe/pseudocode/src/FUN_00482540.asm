; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00482540(int *param_1,char *param_2)
;
;
; Called Functions:
;   FUN_00482440
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482540
        ;   Label: FUN_00482540
    PUSH ESI                            ; 00482541
    PUSH EDI                            ; 00482542
    SUB ESP,0x190                       ; 00482543
    MOV EDI,dword ptr [ESP + 0x1a0]     ; 00482549
    MOV ECX,dword ptr [ESP + 0x1a4]     ; 00482550
    LEA EDX,[ESP + 0xc8]                ; 00482557
    MOV BL,byte ptr [ECX]               ; 0048255e
    MOV EAX,ECX                         ; 00482560
    TEST BL,BL                          ; 00482562
    JZ 0x0048256b                       ; 00482564
        ;   XREF to: 0048256b (CONDITIONAL_JUMP)  ; LAB_0048256b
    CMP byte ptr [EAX],0x9              ; 00482566
        ;   Label: LAB_00482566
    JNZ 0x004825bf                      ; 00482569
        ;   XREF to: 004825bf (CONDITIONAL_JUMP)  ; LAB_004825bf
    MOV byte ptr [EDX],0x0              ; 0048256b
        ;   Label: LAB_0048256b
    MOV EDX,dword ptr [EDI]             ; 0048256e
    XOR ESI,ESI                         ; 00482570
    TEST EDX,EDX                        ; 00482572
    JLE 0x004825b0                      ; 00482574
        ;   XREF to: 004825b0 (CONDITIONAL_JUMP)  ; LAB_004825b0
    PUSH ESI                            ; 00482576
        ;   Label: LAB_00482576
    PUSH EDI                            ; 00482577
    CALL FUN_00482440                   ; 00482578
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; undefined FUN_00482440()
    LEA EDX,[ESP + 0x8]                 ; 0048257d
    MOV BL,byte ptr [EAX]               ; 00482581
    ADD ESP,0x8                         ; 00482583
    TEST BL,BL                          ; 00482586
    JZ 0x0048258f                       ; 00482588
        ;   XREF to: 0048258f (CONDITIONAL_JUMP)  ; LAB_0048258f
    CMP byte ptr [EAX],0x9              ; 0048258a
        ;   Label: LAB_0048258a
    JNZ 0x004825cd                      ; 0048258d
        ;   XREF to: 004825cd (CONDITIONAL_JUMP)  ; LAB_004825cd
    MOV byte ptr [EDX],0x0              ; 0048258f
        ;   Label: LAB_0048258f
    LEA EAX,[ESP + 0xc8]                ; 00482592
    PUSH EAX                            ; 00482599
    LEA EAX,[ESP + 0x4]                 ; 0048259a
    PUSH EAX                            ; 0048259e
    CALL FUN_005a3260                   ; 0048259f
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004825a4
    TEST EAX,EAX                        ; 004825a7
    JZ 0x004825db                       ; 004825a9
        ;   XREF to: 004825db (CONDITIONAL_JUMP)  ; LAB_004825db
    INC ESI                             ; 004825ab
    CMP ESI,dword ptr [EDI]             ; 004825ac
    JL 0x00482576                       ; 004825ae
        ;   XREF to: 00482576 (CONDITIONAL_JUMP)  ; LAB_00482576
    MOV EAX,0xffffffff                  ; 004825b0
        ;   Label: LAB_004825b0
    ADD ESP,0x190                       ; 004825b5
    POP EDI                             ; 004825bb
    POP ESI                             ; 004825bc
    POP EBX                             ; 004825bd
    RET                                 ; 004825be
    MOV BL,byte ptr [EAX]               ; 004825bf
        ;   Label: LAB_004825bf
    INC EAX                             ; 004825c1
    MOV byte ptr [EDX],BL               ; 004825c2
    MOV BH,byte ptr [EAX]               ; 004825c4
    INC EDX                             ; 004825c6
    TEST BH,BH                          ; 004825c7
    JNZ 0x00482566                      ; 004825c9
        ;   XREF to: 00482566 (CONDITIONAL_JUMP)  ; LAB_00482566
    JMP 0x0048256b                      ; 004825cb
        ;   XREF to: 0048256b (UNCONDITIONAL_JUMP)  ; LAB_0048256b
    MOV BL,byte ptr [EAX]               ; 004825cd
        ;   Label: LAB_004825cd
    INC EAX                             ; 004825cf
    MOV byte ptr [EDX],BL               ; 004825d0
    MOV BH,byte ptr [EAX]               ; 004825d2
    INC EDX                             ; 004825d4
    TEST BH,BH                          ; 004825d5
    JNZ 0x0048258a                      ; 004825d7
        ;   XREF to: 0048258a (CONDITIONAL_JUMP)  ; LAB_0048258a
    JMP 0x0048258f                      ; 004825d9
        ;   XREF to: 0048258f (UNCONDITIONAL_JUMP)  ; LAB_0048258f
    MOV EAX,ESI                         ; 004825db
        ;   Label: LAB_004825db
    ADD ESP,0x190                       ; 004825dd
    POP EDI                             ; 004825e3
    POP ESI                             ; 004825e4
    POP EBX                             ; 004825e5
    RET                                 ; 004825e6

