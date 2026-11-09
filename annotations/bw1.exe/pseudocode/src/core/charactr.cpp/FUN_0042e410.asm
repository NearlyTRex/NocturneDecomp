; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042e410(int *param_1,int param_2,int param_3)
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
;   core_charactr.cpp_FUN_0042e580 at 0042e6f1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e410
        ;   Label: core_charactr.cpp_FUN_0042e410
    PUSH ESI                            ; 0042e411
    PUSH EDI                            ; 0042e412
    PUSH EBP                            ; 0042e413
    SUB ESP,0x1c                        ; 0042e414
    XOR EDX,EDX                         ; 0042e417
    MOV dword ptr [ESP + 0x8],EDX       ; 0042e419
    MOV EDX,dword ptr [ESP + 0x38]      ; 0042e41d
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042e421
    SUB EAX,EDX                         ; 0042e428
    MOV EDX,dword ptr [ESP + 0x30]      ; 0042e42a
    SHL EAX,0x5                         ; 0042e42e
    ADD EDX,EAX                         ; 0042e431
    MOV dword ptr [ESP],EDX             ; 0042e433
    MOV EDX,dword ptr [ESP + 0x34]      ; 0042e436
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042e43a
    SUB EAX,EDX                         ; 0042e441
    MOV ECX,dword ptr [ESP + 0x30]      ; 0042e443
    SHL EAX,0x5                         ; 0042e447
    XOR EBX,EBX                         ; 0042e44a
    ADD EAX,ECX                         ; 0042e44c
    MOV dword ptr [ESP + 0xc],EBX       ; 0042e44e
    MOV dword ptr [ESP + 0x4],EAX       ; 0042e452
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042e456
        ;   Label: LAB_0042e456
    MOV ESI,dword ptr [ESP + 0x8]       ; 0042e45a
    CMP ESI,dword ptr [EAX]             ; 0042e45e
    JGE 0x0042e571                      ; 0042e460
        ;   XREF to: 0042e571 (CONDITIONAL_JUMP)  ; LAB_0042e571
    MOV EBP,dword ptr [ESP + 0x4]       ; 0042e466
    MOV EBX,dword ptr [ESP + 0xc]       ; 0042e46a
    MOV EDI,dword ptr [ESP + 0x30]      ; 0042e46e
    MOV ESI,dword ptr [ESP + 0x34]      ; 0042e472
    XOR EAX,EAX                         ; 0042e476
    XOR ECX,ECX                         ; 0042e478
    MOV EBP,dword ptr [EBP + 0xc24]     ; 0042e47a
    LEA EDX,[EBX + EDI*0x1]             ; 0042e480
    TEST ESI,ESI                        ; 0042e483
    JLE 0x0042e49b                      ; 0042e485
        ;   XREF to: 0042e49b (CONDITIONAL_JUMP)  ; LAB_0042e49b
    MOV ESI,dword ptr [ESP + 0x34]      ; 0042e487
    MOV EDI,dword ptr [EDX + 0xc24]     ; 0042e48b
        ;   Label: LAB_0042e48b
    ADD EDX,0x60                        ; 0042e491
    INC ECX                             ; 0042e494
    ADD EAX,EDI                         ; 0042e495
    CMP ECX,ESI                         ; 0042e497
    JL 0x0042e48b                       ; 0042e499
        ;   XREF to: 0042e48b (CONDITIONAL_JUMP)  ; LAB_0042e48b
    IMUL EAX,EAX,0x12                   ; 0042e49b
        ;   Label: LAB_0042e49b
    MOV EDX,dword ptr [ESP + 0x30]      ; 0042e49e
    MOV EDI,dword ptr [ESP]             ; 0042e4a2
    MOV ESI,dword ptr [ESP + 0x30]      ; 0042e4a5
    MOV EDX,dword ptr [EDX + EBX*0x1 + 0x7c] ; 0042e4a9
    ADD EBX,EDI                         ; 0042e4ad
    ADD EDX,EAX                         ; 0042e4af
    MOV EDI,dword ptr [ESP + 0x38]      ; 0042e4b1
    MOV dword ptr [ESP + 0x10],EDX      ; 0042e4b5
    MOV EAX,dword ptr [EBX + 0xc24]     ; 0042e4b9
    MOV EBX,dword ptr [ESP + 0xc]       ; 0042e4bf
    MOV dword ptr [ESP + 0x14],EAX      ; 0042e4c3
    XOR EDX,EDX                         ; 0042e4c7
    XOR EAX,EAX                         ; 0042e4c9
    LEA ECX,[EBX + ESI*0x1]             ; 0042e4cb
    TEST EDI,EDI                        ; 0042e4ce
    JLE 0x0042e4e6                      ; 0042e4d0
        ;   XREF to: 0042e4e6 (CONDITIONAL_JUMP)  ; LAB_0042e4e6
    MOV EDI,dword ptr [ESP + 0x38]      ; 0042e4d2
    MOV ESI,dword ptr [ECX + 0xc24]     ; 0042e4d6
        ;   Label: LAB_0042e4d6
    ADD ECX,0x60                        ; 0042e4dc
    INC EDX                             ; 0042e4df
    ADD EAX,ESI                         ; 0042e4e0
    CMP EDX,EDI                         ; 0042e4e2
    JL 0x0042e4d6                       ; 0042e4e4
        ;   XREF to: 0042e4d6 (CONDITIONAL_JUMP)  ; LAB_0042e4d6
    IMUL EAX,EAX,0x12                   ; 0042e4e6
        ;   Label: LAB_0042e4e6
    MOV EDX,dword ptr [ESP + 0x30]      ; 0042e4e9
    MOV EDX,dword ptr [EDX + EBX*0x1 + 0x7c] ; 0042e4ed
    ADD EDX,EAX                         ; 0042e4f1
    XOR EAX,EAX                         ; 0042e4f3
    MOV ECX,dword ptr [ESP + 0x14]      ; 0042e4f5
    MOV dword ptr [ESP + 0x18],EAX      ; 0042e4f9
    TEST ECX,ECX                        ; 0042e4fd
    JLE 0x0042e54d                      ; 0042e4ff
        ;   XREF to: 0042e54d (CONDITIONAL_JUMP)  ; LAB_0042e54d
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042e501
        ;   Label: LAB_0042e501
    XOR ECX,ECX                         ; 0042e505
    TEST EBP,EBP                        ; 0042e507
    JLE 0x0042e539                      ; 0042e509
        ;   XREF to: 0042e539 (CONDITIONAL_JUMP)  ; LAB_0042e539
    MOV SI,word ptr [EDX]               ; 0042e50b
        ;   Label: LAB_0042e50b
    CMP SI,word ptr [EAX]               ; 0042e50e
    JNZ 0x0042e531                      ; 0042e511
        ;   XREF to: 0042e531 (CONDITIONAL_JUMP)  ; LAB_0042e531
    MOV DI,word ptr [EDX + 0x2]         ; 0042e513
    CMP DI,word ptr [EAX + 0x2]         ; 0042e517
    JNZ 0x0042e531                      ; 0042e51b
        ;   XREF to: 0042e531 (CONDITIONAL_JUMP)  ; LAB_0042e531
    MOV SI,word ptr [EDX + 0x4]         ; 0042e51d
    CMP SI,word ptr [EAX + 0x4]         ; 0042e521
    JNZ 0x0042e531                      ; 0042e525
        ;   XREF to: 0042e531 (CONDITIONAL_JUMP)  ; LAB_0042e531
    MOV EDI,EAX                         ; 0042e527
    MOV ESI,EDX                         ; 0042e529
    MOVSD ES:EDI,ESI                    ; 0042e52b
    MOVSD ES:EDI,ESI                    ; 0042e52c
    MOVSD ES:EDI,ESI                    ; 0042e52d
    MOVSD ES:EDI,ESI                    ; 0042e52e
    MOVSW ES:EDI,ESI                    ; 0042e52f
    INC ECX                             ; 0042e531
        ;   Label: LAB_0042e531
    ADD EAX,0x12                        ; 0042e532
    CMP ECX,EBP                         ; 0042e535
    JL 0x0042e50b                       ; 0042e537
        ;   XREF to: 0042e50b (CONDITIONAL_JUMP)  ; LAB_0042e50b
    MOV EBX,dword ptr [ESP + 0x18]      ; 0042e539
        ;   Label: LAB_0042e539
    MOV ESI,dword ptr [ESP + 0x14]      ; 0042e53d
    INC EBX                             ; 0042e541
    ADD EDX,0x12                        ; 0042e542
    MOV dword ptr [ESP + 0x18],EBX      ; 0042e545
    CMP EBX,ESI                         ; 0042e549
    JL 0x0042e501                       ; 0042e54b
        ;   XREF to: 0042e501 (CONDITIONAL_JUMP)  ; LAB_0042e501
    MOV EBP,dword ptr [ESP + 0xc]       ; 0042e54d
        ;   Label: LAB_0042e54d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042e551
    MOV EDI,dword ptr [ESP + 0x4]       ; 0042e555
    ADD EBP,0x4                         ; 0042e559
    INC EAX                             ; 0042e55c
    ADD EDI,0x4                         ; 0042e55d
    MOV dword ptr [ESP + 0xc],EBP       ; 0042e560
    MOV dword ptr [ESP + 0x8],EAX       ; 0042e564
    MOV dword ptr [ESP + 0x4],EDI       ; 0042e568
    JMP 0x0042e456                      ; 0042e56c
        ;   XREF to: 0042e456 (UNCONDITIONAL_JUMP)  ; LAB_0042e456
    ADD ESP,0x1c                        ; 0042e571
        ;   Label: LAB_0042e571
    POP EBP                             ; 0042e574
    POP EDI                             ; 0042e575
    POP ESI                             ; 0042e576
    POP EBX                             ; 0042e577
    RET                                 ; 0042e578

