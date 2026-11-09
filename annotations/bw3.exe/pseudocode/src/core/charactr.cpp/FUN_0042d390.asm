; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042d390(int *param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_FUN_0042d500 at 0042d671
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d390
        ;   Label: core_charactr.cpp_FUN_0042d390
    PUSH ESI                            ; 0042d391
    PUSH EDI                            ; 0042d392
    PUSH EBP                            ; 0042d393
    SUB ESP,0x1c                        ; 0042d394
    XOR EDX,EDX                         ; 0042d397
    MOV dword ptr [ESP + 0x8],EDX       ; 0042d399
    MOV EDX,dword ptr [ESP + 0x38]      ; 0042d39d
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042d3a1
    SUB EAX,EDX                         ; 0042d3a8
    MOV EDX,dword ptr [ESP + 0x30]      ; 0042d3aa
    SHL EAX,0x5                         ; 0042d3ae
    ADD EDX,EAX                         ; 0042d3b1
    MOV dword ptr [ESP],EDX             ; 0042d3b3
    MOV EDX,dword ptr [ESP + 0x34]      ; 0042d3b6
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042d3ba
    SUB EAX,EDX                         ; 0042d3c1
    MOV ECX,dword ptr [ESP + 0x30]      ; 0042d3c3
    SHL EAX,0x5                         ; 0042d3c7
    XOR EBX,EBX                         ; 0042d3ca
    ADD EAX,ECX                         ; 0042d3cc
    MOV dword ptr [ESP + 0xc],EBX       ; 0042d3ce
    MOV dword ptr [ESP + 0x4],EAX       ; 0042d3d2
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042d3d6
        ;   Label: LAB_0042d3d6
    MOV ESI,dword ptr [ESP + 0x8]       ; 0042d3da
    CMP ESI,dword ptr [EAX]             ; 0042d3de
    JGE 0x0042d4f1                      ; 0042d3e0
        ;   XREF to: 0042d4f1 (CONDITIONAL_JUMP)  ; LAB_0042d4f1
    MOV EBP,dword ptr [ESP + 0x4]       ; 0042d3e6
    MOV EBX,dword ptr [ESP + 0xc]       ; 0042d3ea
    MOV EDI,dword ptr [ESP + 0x30]      ; 0042d3ee
    MOV ESI,dword ptr [ESP + 0x34]      ; 0042d3f2
    XOR EAX,EAX                         ; 0042d3f6
    XOR ECX,ECX                         ; 0042d3f8
    MOV EBP,dword ptr [EBP + 0xc24]     ; 0042d3fa
    LEA EDX,[EBX + EDI*0x1]             ; 0042d400
    TEST ESI,ESI                        ; 0042d403
    JLE 0x0042d41b                      ; 0042d405
        ;   XREF to: 0042d41b (CONDITIONAL_JUMP)  ; LAB_0042d41b
    MOV ESI,dword ptr [ESP + 0x34]      ; 0042d407
    MOV EDI,dword ptr [EDX + 0xc24]     ; 0042d40b
        ;   Label: LAB_0042d40b
    ADD EDX,0x60                        ; 0042d411
    INC ECX                             ; 0042d414
    ADD EAX,EDI                         ; 0042d415
    CMP ECX,ESI                         ; 0042d417
    JL 0x0042d40b                       ; 0042d419
        ;   XREF to: 0042d40b (CONDITIONAL_JUMP)  ; LAB_0042d40b
    IMUL EAX,EAX,0x12                   ; 0042d41b
        ;   Label: LAB_0042d41b
    MOV EDX,dword ptr [ESP + 0x30]      ; 0042d41e
    MOV EDI,dword ptr [ESP]             ; 0042d422
    MOV ESI,dword ptr [ESP + 0x30]      ; 0042d425
    MOV EDX,dword ptr [EDX + EBX*0x1 + 0x7c] ; 0042d429
    ADD EBX,EDI                         ; 0042d42d
    ADD EDX,EAX                         ; 0042d42f
    MOV EDI,dword ptr [ESP + 0x38]      ; 0042d431
    MOV dword ptr [ESP + 0x10],EDX      ; 0042d435
    MOV EAX,dword ptr [EBX + 0xc24]     ; 0042d439
    MOV EBX,dword ptr [ESP + 0xc]       ; 0042d43f
    MOV dword ptr [ESP + 0x14],EAX      ; 0042d443
    XOR EDX,EDX                         ; 0042d447
    XOR EAX,EAX                         ; 0042d449
    LEA ECX,[EBX + ESI*0x1]             ; 0042d44b
    TEST EDI,EDI                        ; 0042d44e
    JLE 0x0042d466                      ; 0042d450
        ;   XREF to: 0042d466 (CONDITIONAL_JUMP)  ; LAB_0042d466
    MOV EDI,dword ptr [ESP + 0x38]      ; 0042d452
    MOV ESI,dword ptr [ECX + 0xc24]     ; 0042d456
        ;   Label: LAB_0042d456
    ADD ECX,0x60                        ; 0042d45c
    INC EDX                             ; 0042d45f
    ADD EAX,ESI                         ; 0042d460
    CMP EDX,EDI                         ; 0042d462
    JL 0x0042d456                       ; 0042d464
        ;   XREF to: 0042d456 (CONDITIONAL_JUMP)  ; LAB_0042d456
    IMUL EAX,EAX,0x12                   ; 0042d466
        ;   Label: LAB_0042d466
    MOV EDX,dword ptr [ESP + 0x30]      ; 0042d469
    MOV EDX,dword ptr [EDX + EBX*0x1 + 0x7c] ; 0042d46d
    ADD EDX,EAX                         ; 0042d471
    XOR EAX,EAX                         ; 0042d473
    MOV ECX,dword ptr [ESP + 0x14]      ; 0042d475
    MOV dword ptr [ESP + 0x18],EAX      ; 0042d479
    TEST ECX,ECX                        ; 0042d47d
    JLE 0x0042d4cd                      ; 0042d47f
        ;   XREF to: 0042d4cd (CONDITIONAL_JUMP)  ; LAB_0042d4cd
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042d481
        ;   Label: LAB_0042d481
    XOR ECX,ECX                         ; 0042d485
    TEST EBP,EBP                        ; 0042d487
    JLE 0x0042d4b9                      ; 0042d489
        ;   XREF to: 0042d4b9 (CONDITIONAL_JUMP)  ; LAB_0042d4b9
    MOV SI,word ptr [EDX]               ; 0042d48b
        ;   Label: LAB_0042d48b
    CMP SI,word ptr [EAX]               ; 0042d48e
    JNZ 0x0042d4b1                      ; 0042d491
        ;   XREF to: 0042d4b1 (CONDITIONAL_JUMP)  ; LAB_0042d4b1
    MOV DI,word ptr [EDX + 0x2]         ; 0042d493
    CMP DI,word ptr [EAX + 0x2]         ; 0042d497
    JNZ 0x0042d4b1                      ; 0042d49b
        ;   XREF to: 0042d4b1 (CONDITIONAL_JUMP)  ; LAB_0042d4b1
    MOV SI,word ptr [EDX + 0x4]         ; 0042d49d
    CMP SI,word ptr [EAX + 0x4]         ; 0042d4a1
    JNZ 0x0042d4b1                      ; 0042d4a5
        ;   XREF to: 0042d4b1 (CONDITIONAL_JUMP)  ; LAB_0042d4b1
    MOV EDI,EAX                         ; 0042d4a7
    MOV ESI,EDX                         ; 0042d4a9
    MOVSD ES:EDI,ESI                    ; 0042d4ab
    MOVSD ES:EDI,ESI                    ; 0042d4ac
    MOVSD ES:EDI,ESI                    ; 0042d4ad
    MOVSD ES:EDI,ESI                    ; 0042d4ae
    MOVSW ES:EDI,ESI                    ; 0042d4af
    INC ECX                             ; 0042d4b1
        ;   Label: LAB_0042d4b1
    ADD EAX,0x12                        ; 0042d4b2
    CMP ECX,EBP                         ; 0042d4b5
    JL 0x0042d48b                       ; 0042d4b7
        ;   XREF to: 0042d48b (CONDITIONAL_JUMP)  ; LAB_0042d48b
    MOV EBX,dword ptr [ESP + 0x18]      ; 0042d4b9
        ;   Label: LAB_0042d4b9
    MOV ESI,dword ptr [ESP + 0x14]      ; 0042d4bd
    INC EBX                             ; 0042d4c1
    ADD EDX,0x12                        ; 0042d4c2
    MOV dword ptr [ESP + 0x18],EBX      ; 0042d4c5
    CMP EBX,ESI                         ; 0042d4c9
    JL 0x0042d481                       ; 0042d4cb
        ;   XREF to: 0042d481 (CONDITIONAL_JUMP)  ; LAB_0042d481
    MOV EBP,dword ptr [ESP + 0xc]       ; 0042d4cd
        ;   Label: LAB_0042d4cd
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042d4d1
    MOV EDI,dword ptr [ESP + 0x4]       ; 0042d4d5
    ADD EBP,0x4                         ; 0042d4d9
    INC EAX                             ; 0042d4dc
    ADD EDI,0x4                         ; 0042d4dd
    MOV dword ptr [ESP + 0xc],EBP       ; 0042d4e0
    MOV dword ptr [ESP + 0x8],EAX       ; 0042d4e4
    MOV dword ptr [ESP + 0x4],EDI       ; 0042d4e8
    JMP 0x0042d3d6                      ; 0042d4ec
        ;   XREF to: 0042d3d6 (UNCONDITIONAL_JUMP)  ; LAB_0042d3d6
    ADD ESP,0x1c                        ; 0042d4f1
        ;   Label: LAB_0042d4f1
    POP EBP                             ; 0042d4f4
    POP EDI                             ; 0042d4f5
    POP ESI                             ; 0042d4f6
    POP EBX                             ; 0042d4f7
    RET                                 ; 0042d4f8

