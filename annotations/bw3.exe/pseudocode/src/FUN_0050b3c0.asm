; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0050b3c0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)
;
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0050baa0 at 0050bee3
;
; Referenced Globals:
;   undefined4 DAT_01ec1514
;
; Called Functions:
;   FUN_0050b320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b3c0
        ;   Label: FUN_0050b3c0
    PUSH ESI                            ; 0050b3c1
    PUSH EDI                            ; 0050b3c2
    PUSH EBP                            ; 0050b3c3
    SUB ESP,0x28                        ; 0050b3c4
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0050b3c7
    MOV ESI,dword ptr [ESP + 0x40]      ; 0050b3cb
    MOV ECX,dword ptr [ESP + 0x44]      ; 0050b3cf
    MOV EBX,dword ptr [ESP + 0x48]      ; 0050b3d3
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0050b3d7
    MOV EDI,dword ptr [ESP + 0x50]      ; 0050b3db
    MOV dword ptr [ESP + 0x4],0x1       ; 0050b3df
    CMP ECX,EDI                         ; 0050b3e7
    JG 0x0050b456                       ; 0050b3e9
        ;   XREF to: 0050b456 (CONDITIONAL_JUMP)  ; LAB_0050b456
    SUB EDX,ESI                         ; 0050b3eb
        ;   Label: LAB_0050b3eb
    SUB EDI,ECX                         ; 0050b3ed
    MOV dword ptr [ESP + 0x1c],EDX      ; 0050b3ef
    MOV dword ptr [ESP + 0x18],EDI      ; 0050b3f3
    TEST EDX,EDX                        ; 0050b3f7
    JL 0x0050b471                       ; 0050b3f9
        ;   XREF to: 0050b471 (CONDITIONAL_JUMP)  ; LAB_0050b471
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050b3fb
        ;   Label: LAB_0050b3fb
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050b3ff
    MOV EDI,ECX                         ; 0050b403
    CMP EAX,EDX                         ; 0050b405
    JLE 0x0050b529                      ; 0050b407
        ;   XREF to: 0050b529 (CONDITIONAL_JUMP)  ; LAB_0050b529
    LEA EAX,[EDX + EDX*0x1]             ; 0050b40d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050b410
    SUB EAX,EDX                         ; 0050b414
    MOV dword ptr [ESP + 0x24],EAX      ; 0050b416
    XOR EAX,EAX                         ; 0050b41a
    MOV dword ptr [ESP + 0xc],EAX       ; 0050b41c
    TEST EDX,EDX                        ; 0050b420
    JL 0x0050b517                       ; 0050b422
        ;   XREF to: 0050b517 (CONDITIONAL_JUMP)  ; LAB_0050b517
    DEC ECX                             ; 0050b428
    MOV dword ptr [ESP + 0x10],ECX      ; 0050b429
    PUSH EBX                            ; 0050b42d
        ;   Label: LAB_0050b42d
    PUSH ESI                            ; 0050b42e
    MOV ECX,dword ptr [ESP + 0x18]      ; 0050b42f
    PUSH ECX                            ; 0050b433
    PUSH EBP                            ; 0050b434
    CALL FUN_0050b320                   ; 0050b435
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b43a
    SUB EAX,EBX                         ; 0050b43d
    CDQ                                 ; 0050b43f
    XOR EAX,EDX                         ; 0050b440
    SUB EAX,EDX                         ; 0050b442
    CMP EAX,dword ptr [0x01ec1514]      ; 0050b444 | DAT_01ec1514
    JLE 0x0050b487                      ; 0050b44a
        ;   XREF to: 0050b487 (CONDITIONAL_JUMP)  ; LAB_0050b487
    XOR EAX,EAX                         ; 0050b44c
        ;   Label: LAB_0050b44c
    ADD ESP,0x28                        ; 0050b44e
    POP EBP                             ; 0050b451
    POP EDI                             ; 0050b452
    POP ESI                             ; 0050b453
    POP EBX                             ; 0050b454
    RET                                 ; 0050b455
    MOV EAX,ESI                         ; 0050b456
        ;   Label: LAB_0050b456
    MOV ESI,EDX                         ; 0050b458
    MOV EDX,EAX                         ; 0050b45a
    MOV EAX,ECX                         ; 0050b45c
    MOV ECX,EDI                         ; 0050b45e
    MOV EDI,EAX                         ; 0050b460
    MOV EAX,EBX                         ; 0050b462
    MOV EBX,dword ptr [ESP + 0x54]      ; 0050b464
    MOV dword ptr [ESP + 0x54],EAX      ; 0050b468
    JMP 0x0050b3eb                      ; 0050b46c
        ;   XREF to: 0050b3eb (UNCONDITIONAL_JUMP)  ; LAB_0050b3eb
    MOV EDI,EDX                         ; 0050b471
        ;   Label: LAB_0050b471
    MOV EAX,0xffffffff                  ; 0050b473
    NEG EDI                             ; 0050b478
    MOV dword ptr [ESP + 0x4],EAX       ; 0050b47a
    MOV dword ptr [ESP + 0x1c],EDI      ; 0050b47e
    JMP 0x0050b3fb                      ; 0050b482
        ;   XREF to: 0050b3fb (UNCONDITIONAL_JUMP)  ; LAB_0050b3fb
    PUSH EBX                            ; 0050b487
        ;   Label: LAB_0050b487
    PUSH ESI                            ; 0050b488
    LEA EAX,[EDI + 0x1]                 ; 0050b489
    PUSH EAX                            ; 0050b48c
    PUSH EBP                            ; 0050b48d
    MOV dword ptr [ESP + 0x18],EAX      ; 0050b48e
    CALL FUN_0050b320                   ; 0050b492
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b497
    SUB EAX,EBX                         ; 0050b49a
    CDQ                                 ; 0050b49c
    XOR EAX,EDX                         ; 0050b49d
    SUB EAX,EDX                         ; 0050b49f
    CMP EAX,dword ptr [0x01ec1514]      ; 0050b4a1 | DAT_01ec1514
    JG 0x0050b44c                       ; 0050b4a7
        ;   XREF to: 0050b44c (CONDITIONAL_JUMP)  ; LAB_0050b44c
    PUSH EBX                            ; 0050b4a9
    PUSH ESI                            ; 0050b4aa
    PUSH EDI                            ; 0050b4ab
    PUSH EBP                            ; 0050b4ac
    CALL FUN_0050b320                   ; 0050b4ad
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b4b2
    MOV ECX,EAX                         ; 0050b4b5
    MOV dword ptr [ESP],EAX             ; 0050b4b7
    SUB EAX,EBX                         ; 0050b4ba
    CDQ                                 ; 0050b4bc
    XOR EAX,EDX                         ; 0050b4bd
    SUB EAX,EDX                         ; 0050b4bf
    CMP EAX,dword ptr [0x01ec1514]      ; 0050b4c1 | DAT_01ec1514
    JG 0x0050b44c                       ; 0050b4c7
        ;   XREF to: 0050b44c (CONDITIONAL_JUMP)  ; LAB_0050b44c
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050b4c9
    MOV EBX,ECX                         ; 0050b4cd
    TEST EAX,EAX                        ; 0050b4cf
    JLE 0x0050b4ee                      ; 0050b4d1
        ;   XREF to: 0050b4ee (CONDITIONAL_JUMP)  ; LAB_0050b4ee
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050b4d3
    MOV ECX,dword ptr [ESP + 0x24]      ; 0050b4d7
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050b4db
    MOV EDI,dword ptr [ESP + 0x8]       ; 0050b4df
    SUB ECX,EAX                         ; 0050b4e3
    INC EDX                             ; 0050b4e5
    MOV dword ptr [ESP + 0x24],ECX      ; 0050b4e6
    MOV dword ptr [ESP + 0x10],EDX      ; 0050b4ea
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050b4ee
        ;   Label: LAB_0050b4ee
    MOV EDX,dword ptr [ESP + 0x24]      ; 0050b4f2
    ADD ESI,EAX                         ; 0050b4f6
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050b4f8
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050b4fc
    ADD EDX,EAX                         ; 0050b500
    INC ECX                             ; 0050b502
    MOV dword ptr [ESP + 0x24],EDX      ; 0050b503
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050b507
    MOV dword ptr [ESP + 0xc],ECX       ; 0050b50b
    CMP ECX,EDX                         ; 0050b50f
    JLE 0x0050b42d                      ; 0050b511
        ;   XREF to: 0050b42d (CONDITIONAL_JUMP)  ; LAB_0050b42d
    MOV EAX,dword ptr [ESP]             ; 0050b517
        ;   Label: LAB_0050b517
    CMP EAX,dword ptr [ESP + 0x54]      ; 0050b51a
    JZ 0x0050b5f8                       ; 0050b51e
        ;   XREF to: 0050b5f8 (CONDITIONAL_JUMP)  ; LAB_0050b5f8
    JMP 0x0050b44c                      ; 0050b524
        ;   XREF to: 0050b44c (UNCONDITIONAL_JUMP)  ; LAB_0050b44c
    ADD EAX,EAX                         ; 0050b529
        ;   Label: LAB_0050b529
    SUB EAX,EDX                         ; 0050b52b
    MOV dword ptr [ESP + 0x20],EAX      ; 0050b52d
    XOR EAX,EAX                         ; 0050b531
    MOV dword ptr [ESP + 0x14],EAX      ; 0050b533
    TEST EDX,EDX                        ; 0050b537
    JL 0x0050b517                       ; 0050b539
        ;   XREF to: 0050b517 (CONDITIONAL_JUMP)  ; LAB_0050b517
    PUSH EBX                            ; 0050b53b
        ;   Label: LAB_0050b53b
    LEA EAX,[ESI + 0x1]                 ; 0050b53c
    PUSH EAX                            ; 0050b53f
    PUSH EDI                            ; 0050b540
    PUSH EBP                            ; 0050b541
    CALL FUN_0050b320                   ; 0050b542
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b547
    SUB EAX,EBX                         ; 0050b54a
    CDQ                                 ; 0050b54c
    XOR EAX,EDX                         ; 0050b54d
    SUB EAX,EDX                         ; 0050b54f
    CMP EAX,dword ptr [0x01ec1514]      ; 0050b551 | DAT_01ec1514
    JLE 0x0050b563                      ; 0050b557
        ;   XREF to: 0050b563 (CONDITIONAL_JUMP)  ; LAB_0050b563
    XOR EAX,EAX                         ; 0050b559
    ADD ESP,0x28                        ; 0050b55b
    POP EBP                             ; 0050b55e
    POP EDI                             ; 0050b55f
    POP ESI                             ; 0050b560
    POP EBX                             ; 0050b561
    RET                                 ; 0050b562
    PUSH EBX                            ; 0050b563
        ;   Label: LAB_0050b563
    LEA EAX,[ESI + -0x1]                ; 0050b564
    PUSH EAX                            ; 0050b567
    PUSH EDI                            ; 0050b568
    PUSH EBP                            ; 0050b569
    CALL FUN_0050b320                   ; 0050b56a
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b56f
    SUB EAX,EBX                         ; 0050b572
    CDQ                                 ; 0050b574
    XOR EAX,EDX                         ; 0050b575
    SUB EAX,EDX                         ; 0050b577
    CMP EAX,dword ptr [0x01ec1514]      ; 0050b579 | DAT_01ec1514
    JG 0x0050b44c                       ; 0050b57f
        ;   XREF to: 0050b44c (CONDITIONAL_JUMP)  ; LAB_0050b44c
    PUSH EBX                            ; 0050b585
    PUSH ESI                            ; 0050b586
    PUSH EDI                            ; 0050b587
    PUSH EBP                            ; 0050b588
    CALL FUN_0050b320                   ; 0050b589
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b320()
    ADD ESP,0x10                        ; 0050b58e
    MOV ECX,EAX                         ; 0050b591
    MOV dword ptr [ESP],EAX             ; 0050b593
    SUB EAX,EBX                         ; 0050b596
    CDQ                                 ; 0050b598
    XOR EAX,EDX                         ; 0050b599
    SUB EAX,EDX                         ; 0050b59b
    CMP EAX,dword ptr [0x01ec1514]      ; 0050b59d | DAT_01ec1514
    JG 0x0050b44c                       ; 0050b5a3
        ;   XREF to: 0050b44c (CONDITIONAL_JUMP)  ; LAB_0050b44c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050b5a9
    MOV EBX,ECX                         ; 0050b5ad
    TEST EAX,EAX                        ; 0050b5af
    JLE 0x0050b5c7                      ; 0050b5b1
        ;   XREF to: 0050b5c7 (CONDITIONAL_JUMP)  ; LAB_0050b5c7
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050b5b3
    MOV ECX,dword ptr [ESP + 0x20]      ; 0050b5b7
    MOV EDX,dword ptr [ESP + 0x4]       ; 0050b5bb
    SUB ECX,EAX                         ; 0050b5bf
    ADD ESI,EDX                         ; 0050b5c1
    MOV dword ptr [ESP + 0x20],ECX      ; 0050b5c3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050b5c7
        ;   Label: LAB_0050b5c7
    MOV ECX,dword ptr [ESP + 0x20]      ; 0050b5cb
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050b5cf
    ADD ECX,EAX                         ; 0050b5d3
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050b5d5
    INC EDI                             ; 0050b5d9
    INC EAX                             ; 0050b5da
    MOV dword ptr [ESP + 0x20],ECX      ; 0050b5db
    MOV dword ptr [ESP + 0x14],EAX      ; 0050b5df
    CMP EAX,EDX                         ; 0050b5e3
    JLE 0x0050b53b                      ; 0050b5e5
        ;   XREF to: 0050b53b (CONDITIONAL_JUMP)  ; LAB_0050b53b
    MOV EAX,dword ptr [ESP]             ; 0050b5eb
    CMP EAX,dword ptr [ESP + 0x54]      ; 0050b5ee
    JNZ 0x0050b44c                      ; 0050b5f2
        ;   XREF to: 0050b44c (CONDITIONAL_JUMP)  ; LAB_0050b44c
    MOV EAX,0x1                         ; 0050b5f8
        ;   Label: LAB_0050b5f8
    ADD ESP,0x28                        ; 0050b5fd
    POP EBP                             ; 0050b600
    POP EDI                             ; 0050b601
    POP ESI                             ; 0050b602
    POP EBX                             ; 0050b603
    RET                                 ; 0050b604

