; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005b8590(uint param_1)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
;
; XREF[3]:
;   crt_unknown.c_FUN_005b8580 at 005b8585
;   crt_unknown.c_FUN_005b8cf8 at 005b8d09
;   crt_unknown.c_FUN_005c1c50 at 005c1c7d
;
; Referenced Globals:
;   undefined4 DAT_0061eea0
;   undefined4 DAT_0061eea4
;   undefined4 DAT_0061eea8
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2c0 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2c8 = 005bce04
;   undefined4 DAT_026807a0
;
; Called Functions:
;   crt_unknown.c_FUN_005bce04
;   crt_unknown.c_FUN_005be3d0
;   crt_unknown.c_FUN_005be6d8
;   crt_unknown.c_FUN_005be740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8590
        ;   Label: crt_unknown.c_FUN_005b8590
    PUSH ESI                            ; 005b8591
    PUSH EDI                            ; 005b8592
    PUSH ES                             ; 005b8593
    PUSH FS                             ; 005b8594
    PUSH GS                             ; 005b8596
    PUSH EBP                            ; 005b8598
    SUB ESP,0xc                         ; 005b8599
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005b859c
    TEST EBP,EBP                        ; 005b85a0
    JZ 0x005b85a9                       ; 005b85a2
        ;   XREF to: 005b85a9 (CONDITIONAL_JUMP)  ; LAB_005b85a9
    CMP EBP,-0x2c                       ; 005b85a4
    JBE 0x005b85b0                      ; 005b85a7
        ;   XREF to: 005b85b0 (CONDITIONAL_JUMP)  ; LAB_005b85b0
    XOR EAX,EAX                         ; 005b85a9
        ;   Label: LAB_005b85a9
    JMP 0x005b8691                      ; 005b85ab
        ;   XREF to: 005b8691 (UNCONDITIONAL_JUMP)  ; LAB_005b8691
    LEA EAX,[EBP + 0xb]                 ; 005b85b0
        ;   Label: LAB_005b85b0
    AND AL,0xf8                         ; 005b85b3
    MOV dword ptr [ESP + 0x4],EAX       ; 005b85b5
    CMP EAX,0x10                        ; 005b85b9
    JNC 0x005b85c6                      ; 005b85bc
        ;   XREF to: 005b85c6 (CONDITIONAL_JUMP)  ; LAB_005b85c6
    MOV dword ptr [ESP + 0x4],0x10      ; 005b85be
    CALL dword ptr [0x0061f2c0]         ; 005b85c6 | PTR_crt_unknown.c_FUN_005bce04_0061f2c0
        ;   Label: LAB_005b85c6
    XOR ECX,ECX                         ; 005b85cc
    XOR AH,AH                           ; 005b85ce
    MOV dword ptr [ESP],ECX             ; 005b85d0
    MOV byte ptr [ESP + 0x8],AH         ; 005b85d3
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b85d7
        ;   Label: LAB_005b85d7
    CMP EAX,dword ptr [0x0061eea8]      ; 005b85db | DAT_0061eea8
    JBE 0x005b85fb                      ; 005b85e1
        ;   XREF to: 005b85fb (CONDITIONAL_JUMP)  ; LAB_005b85fb
    MOV ESI,dword ptr [0x0061eea4]      ; 005b85e3 | DAT_0061eea4
    TEST ESI,ESI                        ; 005b85e9
    JNZ 0x005b8609                      ; 005b85eb
        ;   XREF to: 005b8609 (CONDITIONAL_JUMP)  ; LAB_005b8609
    MOV dword ptr [0x0061eea8],ESI      ; 005b85ed | DAT_0061eea8
    MOV ESI,dword ptr [0x0061eea0]      ; 005b85f3 | DAT_0061eea0
    JMP 0x005b8609                      ; 005b85f9
        ;   XREF to: 005b8609 (UNCONDITIONAL_JUMP)  ; LAB_005b8609
    XOR EDI,EDI                         ; 005b85fb
        ;   Label: LAB_005b85fb
    MOV ESI,dword ptr [0x0061eea0]      ; 005b85fd | DAT_0061eea0
    MOV dword ptr [0x0061eea8],EDI      ; 005b8603 | DAT_0061eea8
    TEST ESI,ESI                        ; 005b8609
        ;   Label: LAB_005b8609
    JZ 0x005b864a                       ; 005b860b
        ;   XREF to: 005b864a (CONDITIONAL_JUMP)  ; LAB_005b864a
    MOV EDI,dword ptr [ESI + 0x14]      ; 005b860d
    MOV dword ptr [0x0061eea4],ESI      ; 005b8610 | DAT_0061eea4
    CMP EDI,EBP                         ; 005b8616
    JC 0x005b8637                       ; 005b8618
        ;   XREF to: 005b8637 (CONDITIONAL_JUMP)  ; LAB_005b8637
    MOV EAX,0x61eea0                    ; 005b861a | DAT_0061eea0
    MOV DX,DS                           ; 005b861f
    AND EDX,0xffff                      ; 005b8621
    MOV EBX,ESI                         ; 005b8627
    MOV EAX,EBP                         ; 005b8629
    CALL crt_unknown.c_FUN_005be3d0     ; 005b862b
        ;   XREF to: 005be3d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be3d0()
    MOV dword ptr [ESP],EAX             ; 005b8630
    TEST EAX,EAX                        ; 005b8633
    JNZ 0x005b8680                      ; 005b8635
        ;   XREF to: 005b8680 (CONDITIONAL_JUMP)  ; LAB_005b8680
    CMP EDI,dword ptr [0x0061eea8]      ; 005b8637 | DAT_0061eea8
        ;   Label: LAB_005b8637
    JBE 0x005b8645                      ; 005b863d
        ;   XREF to: 005b8645 (CONDITIONAL_JUMP)  ; LAB_005b8645
    MOV dword ptr [0x0061eea8],EDI      ; 005b863f | DAT_0061eea8
    MOV ESI,dword ptr [ESI + 0x8]       ; 005b8645
        ;   Label: LAB_005b8645
    JMP 0x005b8609                      ; 005b8648
        ;   XREF to: 005b8609 (UNCONDITIONAL_JUMP)  ; LAB_005b8609
    CMP byte ptr [ESP + 0x8],0x0        ; 005b864a
        ;   Label: LAB_005b864a
    JNZ 0x005b865e                      ; 005b864f
        ;   XREF to: 005b865e (CONDITIONAL_JUMP)  ; LAB_005b865e
    PUSH EBP                            ; 005b8651
    CALL crt_unknown.c_FUN_005be6d8     ; 005b8652
        ;   XREF to: 005be6d8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be6d8()
    ADD ESP,0x4                         ; 005b8657
    TEST EAX,EAX                        ; 005b865a
    JNZ 0x005b8676                      ; 005b865c
        ;   XREF to: 005b8676 (CONDITIONAL_JUMP)  ; LAB_005b8676
    PUSH EBP                            ; 005b865e
        ;   Label: LAB_005b865e
    CALL crt_unknown.c_FUN_005be740     ; 005b865f
        ;   XREF to: 005be740 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be740()
    ADD ESP,0x4                         ; 005b8664
    TEST EAX,EAX                        ; 005b8667
    JZ 0x005b8680                       ; 005b8669
        ;   XREF to: 005b8680 (CONDITIONAL_JUMP)  ; LAB_005b8680
    XOR BL,BL                           ; 005b866b
    MOV byte ptr [ESP + 0x8],BL         ; 005b866d
    JMP 0x005b85d7                      ; 005b8671
        ;   XREF to: 005b85d7 (UNCONDITIONAL_JUMP)  ; LAB_005b85d7
    MOV byte ptr [ESP + 0x8],0x1        ; 005b8676
        ;   Label: LAB_005b8676
    JMP 0x005b85d7                      ; 005b867b
        ;   XREF to: 005b85d7 (UNCONDITIONAL_JUMP)  ; LAB_005b85d7
    XOR BH,BH                           ; 005b8680
        ;   Label: LAB_005b8680
    MOV byte ptr [0x026807a0],BH        ; 005b8682 | DAT_026807a0
    CALL dword ptr [0x0061f2c8]         ; 005b8688 | PTR_crt_unknown.c_FUN_005bce04_0061f2c8
    MOV EAX,dword ptr [ESP]             ; 005b868e
    ADD ESP,0xc                         ; 005b8691
        ;   Label: LAB_005b8691
    POP EBP                             ; 005b8694
    POP GS                              ; 005b8695
    POP FS                              ; 005b8697
    POP ES                              ; 005b8699
    POP EDI                             ; 005b869a
    POP ESI                             ; 005b869b
    POP EBX                             ; 005b869c
    RET                                 ; 005b869d

