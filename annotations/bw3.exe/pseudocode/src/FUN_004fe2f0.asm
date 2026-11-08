; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fe2f0(undefined4 param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
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
;   FUN_00502d60 at 0050312e
;
; Called Functions:
;   FUN_004fd5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe2f0
        ;   Label: FUN_004fe2f0
    PUSH ESI                            ; 004fe2f1
    PUSH EDI                            ; 004fe2f2
    PUSH EBP                            ; 004fe2f3
    SUB ESP,0x40                        ; 004fe2f4
    MOV EBP,dword ptr [ESP + 0x54]      ; 004fe2f7
    MOV EAX,dword ptr [ESP + 0x60]      ; 004fe2fb
    MOV EDX,dword ptr [EAX + 0x10]      ; 004fe2ff
    MOV dword ptr [ESP + 0x2c],EDX      ; 004fe302
    MOV EDX,dword ptr [EAX + 0x18]      ; 004fe306
    MOV dword ptr [ESP],EDX             ; 004fe309
    MOV EDX,dword ptr [EAX + 0x14]      ; 004fe30c
    MOV ECX,dword ptr [ESP]             ; 004fe30f
    MOV dword ptr [ESP + 0x14],EDX      ; 004fe312
    MOV EAX,dword ptr [EAX + 0x8]       ; 004fe316
    XOR EDX,EDX                         ; 004fe319
    MOV dword ptr [ESP + 0xc],EAX       ; 004fe31b
    MOV dword ptr [ESP + 0x24],EDX      ; 004fe31f
    TEST ECX,ECX                        ; 004fe323
    JLE 0x004fe434                      ; 004fe325
        ;   XREF to: 004fe434 (CONDITIONAL_JUMP)  ; LAB_004fe434
    MOV dword ptr [ESP + 0x4],EAX       ; 004fe32b
    MOV dword ptr [ESP + 0x8],EDX       ; 004fe32f
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fe333
        ;   Label: LAB_004fe333
    MOV dword ptr [ESP + 0x28],EAX      ; 004fe337
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fe33b
    SHL EAX,0x8                         ; 004fe33f
    MOV dword ptr [ESP + 0x10],EAX      ; 004fe342
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fe346
    MOV dword ptr [ESP + 0x3c],EAX      ; 004fe34a
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fe34e
    MOV dword ptr [ESP + 0x20],EAX      ; 004fe352
    MOV dword ptr [ESP + 0x18],EAX      ; 004fe356
    MOV dword ptr [ESP + 0x1c],EAX      ; 004fe35a
    MOV EAX,dword ptr [ESP + 0x58]      ; 004fe35e
    MOV EDI,dword ptr [ESP + 0x5c]      ; 004fe362
    MOV dword ptr [ESP + 0x38],EAX      ; 004fe366
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fe36a
    XOR ESI,ESI                         ; 004fe36e
    ADD EAX,EDI                         ; 004fe370
    MOV dword ptr [ESP + 0x30],ESI      ; 004fe372
    MOV dword ptr [ESP + 0x34],EAX      ; 004fe376
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fe37a
        ;   Label: LAB_004fe37a
    CMP EAX,dword ptr [ESP + 0x14]      ; 004fe37e
    JGE 0x004fe48f                      ; 004fe382
        ;   XREF to: 004fe48f (CONDITIONAL_JUMP)  ; LAB_004fe48f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004fe388
    MOV ECX,dword ptr [ESP + 0x30]      ; 004fe38c
        ;   Label: LAB_004fe38c
    CMP EAX,ECX                         ; 004fe390
    JLE 0x004fe407                      ; 004fe392
        ;   XREF to: 004fe407 (CONDITIONAL_JUMP)  ; LAB_004fe407
    MOV EAX,ECX                         ; 004fe394
    MOV ECX,dword ptr [ESP + 0x5c]      ; 004fe396
    SHL EAX,0x7                         ; 004fe39a
    ADD ECX,EAX                         ; 004fe39d
    MOV EAX,dword ptr [ESP + 0x34]      ; 004fe39f
    MOV EBX,dword ptr [EAX]             ; 004fe3a3
    TEST EBX,EBX                        ; 004fe3a5
    JNZ 0x004fe499                      ; 004fe3a7
        ;   XREF to: 004fe499 (CONDITIONAL_JUMP)  ; LAB_004fe499
    MOV EBX,dword ptr [ESP + 0x18]      ; 004fe3ad
    MOV ECX,dword ptr [ESP + 0x18]      ; 004fe3b1
    MOV ESI,dword ptr [ESP + 0x38]      ; 004fe3b5
    ADD EBX,0x180                       ; 004fe3b9
    ADD ECX,ESI                         ; 004fe3bf
    ADD EBX,ESI                         ; 004fe3c1
    MOV dword ptr [ECX],0x0             ; 004fe3c3
        ;   Label: LAB_004fe3c3
    ADD ECX,0x80                        ; 004fe3c9
    CMP ECX,EBX                         ; 004fe3cf
    JNZ 0x004fe3c3                      ; 004fe3d1
        ;   XREF to: 004fe3c3 (CONDITIONAL_JUMP)  ; LAB_004fe3c3
    CMP dword ptr [ESP + 0x2c],0x2      ; 004fe3d3
        ;   Label: LAB_004fe3d3
    JZ 0x004fe540                       ; 004fe3d8
        ;   XREF to: 004fe540 (CONDITIONAL_JUMP)  ; LAB_004fe540
    MOV EDX,dword ptr [ESP + 0x34]      ; 004fe3de
        ;   Label: LAB_004fe3de
    MOV ECX,dword ptr [ESP + 0x30]      ; 004fe3e2
    MOV EAX,dword ptr [ESP + 0x38]      ; 004fe3e6
    ADD EDX,0x80                        ; 004fe3ea
    INC ECX                             ; 004fe3f0
    ADD EAX,0x180                       ; 004fe3f1
    MOV dword ptr [ESP + 0x34],EDX      ; 004fe3f6
    MOV dword ptr [ESP + 0x30],ECX      ; 004fe3fa
    MOV dword ptr [ESP + 0x38],EAX      ; 004fe3fe
    JMP 0x004fe37a                      ; 004fe402
        ;   XREF to: 004fe37a (UNCONDITIONAL_JUMP)  ; LAB_004fe37a
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fe407
        ;   Label: LAB_004fe407
    MOV ESI,dword ptr [ESP + 0x4]       ; 004fe40b
    MOV EDI,dword ptr [ESP + 0x24]      ; 004fe40f
    MOV EDX,dword ptr [ESP]             ; 004fe413
    ADD EBX,0x4                         ; 004fe416
    ADD ESI,0x100                       ; 004fe419
    INC EDI                             ; 004fe41f
    MOV dword ptr [ESP + 0x8],EBX       ; 004fe420
    MOV dword ptr [ESP + 0x4],ESI       ; 004fe424
    MOV dword ptr [ESP + 0x24],EDI      ; 004fe428
    CMP EDI,EDX                         ; 004fe42c
    JL 0x004fe333                       ; 004fe42e
        ;   XREF to: 004fe333 (CONDITIONAL_JUMP)  ; LAB_004fe333
    MOV ECX,dword ptr [ESP]             ; 004fe434
        ;   Label: LAB_004fe434
    CMP ECX,0x20                        ; 004fe437
    JGE 0x004fe487                      ; 004fe43a
        ;   XREF to: 004fe487 (CONDITIONAL_JUMP)  ; LAB_004fe487
    LEA EDI,[ECX*0x4 + 0x0]             ; 004fe43c
    XOR EBP,EBP                         ; 004fe443
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004fe445
        ;   Label: LAB_004fe445
    MOV EDX,EBP                         ; 004fe449
    CMP EBP,EBX                         ; 004fe44b
    JGE 0x004fe47c                      ; 004fe44d
        ;   XREF to: 004fe47c (CONDITIONAL_JUMP)  ; LAB_004fe47c
    MOV EBX,EDI                         ; 004fe44f
    IMUL EAX,EDX,0x180                  ; 004fe451
        ;   Label: LAB_004fe451
    ADD EAX,dword ptr [ESP + 0x58]      ; 004fe457
    LEA ECX,[EBX + EAX*0x1]             ; 004fe45b
    LEA ESI,[EBX + 0x180]               ; 004fe45e
    ADD EAX,ESI                         ; 004fe464
    ADD ECX,0x80                        ; 004fe466
        ;   Label: LAB_004fe466
    MOV dword ptr [ECX + -0x80],EBP     ; 004fe46c
    CMP ECX,EAX                         ; 004fe46f
    JNZ 0x004fe466                      ; 004fe471
        ;   XREF to: 004fe466 (CONDITIONAL_JUMP)  ; LAB_004fe466
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004fe473
    INC EDX                             ; 004fe477
    CMP EDX,ESI                         ; 004fe478
    JL 0x004fe451                       ; 004fe47a
        ;   XREF to: 004fe451 (CONDITIONAL_JUMP)  ; LAB_004fe451
    ADD EDI,0x4                         ; 004fe47c
        ;   Label: LAB_004fe47c
    CMP EDI,0x80                        ; 004fe47f
    JL 0x004fe445                       ; 004fe485
        ;   XREF to: 004fe445 (CONDITIONAL_JUMP)  ; LAB_004fe445
    ADD ESP,0x40                        ; 004fe487
        ;   Label: LAB_004fe487
    POP EBP                             ; 004fe48a
    POP EDI                             ; 004fe48b
    POP ESI                             ; 004fe48c
    POP EBX                             ; 004fe48d
    RET                                 ; 004fe48e
    MOV EAX,0x1                         ; 004fe48f
        ;   Label: LAB_004fe48f
    JMP 0x004fe38c                      ; 004fe494
        ;   XREF to: 004fe38c (UNCONDITIONAL_JUMP)  ; LAB_004fe38c
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fe499
        ;   Label: LAB_004fe499
    MOV EAX,EBX                         ; 004fe49d
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fe49f
    SHL EAX,0x4                         ; 004fe4a3
    ADD EDX,EBX                         ; 004fe4a6
    ADD EAX,EDX                         ; 004fe4a8
    CMP dword ptr [EAX + 0x8],0x3       ; 004fe4aa
    JNZ 0x004fe4f6                      ; 004fe4ae
        ;   XREF to: 004fe4f6 (CONDITIONAL_JUMP)  ; LAB_004fe4f6
    MOV EBX,dword ptr [ESP + 0x28]      ; 004fe4b0
    MOV EDX,dword ptr [ESP + 0x38]      ; 004fe4b4
    MOV EDI,dword ptr [ESP + 0x28]      ; 004fe4b8
    MOV ESI,dword ptr [ESP + 0x28]      ; 004fe4bc
    ADD EDI,0x180                       ; 004fe4c0
    ADD EBX,EDX                         ; 004fe4c6
    ADD ESI,ECX                         ; 004fe4c8
    ADD EDI,EDX                         ; 004fe4ca
    MOV EAX,dword ptr [ESI]             ; 004fe4cc
        ;   Label: LAB_004fe4cc
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004fe4ce
    SHL EAX,0x4                         ; 004fe4d2
    ADD EAX,EDX                         ; 004fe4d5
    MOV EAX,dword ptr [EAX + 0x4]       ; 004fe4d7
    PUSH EAX                            ; 004fe4da
    PUSH EBP                            ; 004fe4db
    ADD EBX,0x80                        ; 004fe4dc
    CALL FUN_004fd5e0                   ; 004fe4e2
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fe4e7
    MOV dword ptr [EBX + -0x80],EAX     ; 004fe4ea
    CMP EBX,EDI                         ; 004fe4ed
    JNZ 0x004fe4cc                      ; 004fe4ef
        ;   XREF to: 004fe4cc (CONDITIONAL_JUMP)  ; LAB_004fe4cc
    JMP 0x004fe3d3                      ; 004fe4f1
        ;   XREF to: 004fe3d3 (UNCONDITIONAL_JUMP)  ; LAB_004fe3d3
    MOV ESI,dword ptr [EAX]             ; 004fe4f6
        ;   Label: LAB_004fe4f6
    MOV EAX,dword ptr [EAX + 0x4]       ; 004fe4f8
    PUSH EAX                            ; 004fe4fb
    PUSH EBP                            ; 004fe4fc
    CALL FUN_004fd5e0                   ; 004fe4fd
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fe502
    MOV EBX,dword ptr [ESP + 0x20]      ; 004fe505
    MOV EDI,dword ptr [ESP + 0x38]      ; 004fe509
    MOV ECX,EAX                         ; 004fe50d
    ADD EBX,EDI                         ; 004fe50f
    MOV EDI,dword ptr [ESP + 0x20]      ; 004fe511
    MOV EAX,dword ptr [ESP + 0x38]      ; 004fe515
    ADD EDI,0x180                       ; 004fe519
    ADD EDI,EAX                         ; 004fe51f
    MOV EAX,ECX                         ; 004fe521
        ;   Label: LAB_004fe521
    XOR EDX,EDX                         ; 004fe523
    DIV ESI                             ; 004fe525
    MOV EAX,ECX                         ; 004fe527
    MOV dword ptr [EBX],EDX             ; 004fe529
    XOR EDX,EDX                         ; 004fe52b
    DIV ESI                             ; 004fe52d
    ADD EBX,0x80                        ; 004fe52f
    MOV ECX,EAX                         ; 004fe535
    CMP EBX,EDI                         ; 004fe537
    JNZ 0x004fe521                      ; 004fe539
        ;   XREF to: 004fe521 (CONDITIONAL_JUMP)  ; LAB_004fe521
    JMP 0x004fe3d3                      ; 004fe53b
        ;   XREF to: 004fe3d3 (UNCONDITIONAL_JUMP)  ; LAB_004fe3d3
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fe540
        ;   Label: LAB_004fe540
    CMP EAX,dword ptr [ESP + 0x14]      ; 004fe544
    JL 0x004fe3de                       ; 004fe548
        ;   XREF to: 004fe3de (CONDITIONAL_JUMP)  ; LAB_004fe3de
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004fe54e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004fe552
    MOV ESI,dword ptr [ESP + 0x58]      ; 004fe556
    ADD EDX,0x180                       ; 004fe55a
    ADD ECX,ESI                         ; 004fe560
    ADD EDX,ESI                         ; 004fe562
    ADD ECX,0x80                        ; 004fe564
        ;   Label: LAB_004fe564
    MOV EAX,dword ptr [ECX + -0x80]     ; 004fe56a
    MOV dword ptr [ECX + 0x100],EAX     ; 004fe56d
    CMP ECX,EDX                         ; 004fe573
    JZ 0x004fe3de                       ; 004fe575
        ;   XREF to: 004fe3de (CONDITIONAL_JUMP)  ; LAB_004fe3de
    JMP 0x004fe564                      ; 004fe57b
        ;   XREF to: 004fe564 (UNCONDITIONAL_JUMP)  ; LAB_004fe564

