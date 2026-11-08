; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004bb2f0(int param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0x314]:1  local_314
; undefined        Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004bb290 at 004bb2a7
;   FUN_004bbd10 at 004bbe55
;
; Referenced Globals:
;   TerminatedCString s_Incomplete_markup_tag_be_005df96d
;   TerminatedCString s_Markup_tag_beginning_wit_005df997
;   TerminatedCString s_Unexpected_found_near_s_005df9ca
;   undefined4 DAT_00626114
;   undefined4 DAT_01cc4270
;
; Called Functions:
;   FUN_004b9c50
;   FUN_004bb570
;   FUN_004bb630
;   FUN_004bb6c0
;   FUN_004bb6f0
;   FUN_004bbb30
;   FUN_004bbb90
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb2f0
        ;   Label: FUN_004bb2f0
    PUSH ESI                            ; 004bb2f1
    PUSH EDI                            ; 004bb2f2
    PUSH EBP                            ; 004bb2f3
    SUB ESP,0x304                       ; 004bb2f4
    MOV EDI,dword ptr [ESP + 0x318]     ; 004bb2fa
    MOV EAX,dword ptr [EDI + 0x10]      ; 004bb301
    MOV EBX,dword ptr [ESP + 0x31c]     ; 004bb304
    MOV dword ptr [ESP + 0x300],EAX     ; 004bb30b
    CMP EAX,EAX                         ; 004bb312
    JNZ 0x004bb3a6                      ; 004bb314
        ;   XREF to: 004bb3a6 (CONDITIONAL_JUMP)  ; LAB_004bb3a6
    MOV AL,byte ptr [EBX]               ; 004bb31a
        ;   Label: LAB_004bb31a
    INC AL                              ; 004bb31c
    AND EAX,0xff                        ; 004bb31e
    MOV DL,byte ptr [EAX + 0x626114]    ; 004bb323 | DAT_00626114
    LEA ESI,[EBX + 0x1]                 ; 004bb329
    TEST DL,0x2                         ; 004bb32c
    JZ 0x004bb335                       ; 004bb32f
        ;   XREF to: 004bb335 (CONDITIONAL_JUMP)  ; LAB_004bb335
    MOV EBX,ESI                         ; 004bb331
    JMP 0x004bb31a                      ; 004bb333
        ;   XREF to: 004bb31a (UNCONDITIONAL_JUMP)  ; LAB_004bb31a
    MOV DH,byte ptr [EBX]               ; 004bb335
        ;   Label: LAB_004bb335
    TEST DH,DH                          ; 004bb337
    JZ 0x004bb3a6                       ; 004bb339
        ;   XREF to: 004bb3a6 (CONDITIONAL_JUMP)  ; LAB_004bb3a6
    CMP DH,0x3c                         ; 004bb33b
    JZ 0x004bb3bc                       ; 004bb33e
        ;   XREF to: 004bb3bc (CONDITIONAL_JUMP)  ; LAB_004bb3bc
    CMP DH,0x3e                         ; 004bb340
    JZ 0x004bb49d                       ; 004bb343
        ;   XREF to: 004bb49d (CONDITIONAL_JUMP)  ; LAB_004bb49d
    MOV DL,byte ptr [EDI + 0x48]        ; 004bb349
    XOR EAX,EAX                         ; 004bb34c
    TEST DL,DL                          ; 004bb34e
    JNZ 0x004bb4c7                      ; 004bb350
        ;   XREF to: 004bb4c7 (CONDITIONAL_JUMP)  ; LAB_004bb4c7
    MOV ESI,EBX                         ; 004bb356
        ;   Label: LAB_004bb356
    MOV DL,byte ptr [ESI]               ; 004bb358
        ;   Label: LAB_004bb358
    INC DL                              ; 004bb35a
    AND EDX,0xff                        ; 004bb35c
    TEST byte ptr [EDX + 0x626114],0x2  ; 004bb362 | DAT_00626114
    JZ 0x004bb4d6                       ; 004bb369
        ;   XREF to: 004bb4d6 (CONDITIONAL_JUMP)  ; LAB_004bb4d6
    XOR CH,CH                           ; 004bb36f
        ;   Label: LAB_004bb36f
    MOV byte ptr [ESP + EAX*0x1],CH     ; 004bb371
    MOV EAX,ESP                         ; 004bb374
    PUSH EAX                            ; 004bb376
    PUSH EDI                            ; 004bb377
    CALL FUN_004bbb30                   ; 004bb378
        ;   XREF to: 004bbb30 (UNCONDITIONAL_CALL)  ; undefined FUN_004bbb30()
    ADD ESP,0x8                         ; 004bb37d
    TEST EAX,EAX                        ; 004bb380
    JZ 0x004bb4fd                       ; 004bb382
        ;   XREF to: 004bb4fd (CONDITIONAL_JUMP)  ; LAB_004bb4fd
    MOV EAX,ESP                         ; 004bb388
    PUSH EAX                            ; 004bb38a
    PUSH EDI                            ; 004bb38b
    MOV EBX,ESI                         ; 004bb38c
    CALL FUN_004bbb90                   ; 004bb38e
        ;   XREF to: 004bbb90 (UNCONDITIONAL_CALL)  ; undefined FUN_004bbb90()
    ADD ESP,0x8                         ; 004bb393
    MOV EAX,dword ptr [ESP + 0x300]     ; 004bb396
        ;   Label: LAB_004bb396
    CMP EAX,dword ptr [EDI + 0x10]      ; 004bb39d
    JZ 0x004bb31a                       ; 004bb3a0
        ;   XREF to: 004bb31a (CONDITIONAL_JUMP)  ; LAB_004bb31a
    MOV EBP,dword ptr [ESP + 0x31c]     ; 004bb3a6
        ;   Label: LAB_004bb3a6
    MOV EAX,EBX                         ; 004bb3ad
    SUB EAX,EBP                         ; 004bb3af
    ADD ESP,0x304                       ; 004bb3b1
    POP EBP                             ; 004bb3b7
    POP EDI                             ; 004bb3b8
    POP ESI                             ; 004bb3b9
    POP EBX                             ; 004bb3ba
    RET                                 ; 004bb3bb
    PUSH EDI                            ; 004bb3bc
        ;   Label: LAB_004bb3bc
    CALL FUN_004bb570                   ; 004bb3bd
        ;   XREF to: 004bb570 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb570()
    MOV EBP,EBX                         ; 004bb3c2
    ADD ESP,0x4                         ; 004bb3c4
    MOV EBX,ESI                         ; 004bb3c7
    MOV CL,byte ptr [ESI]               ; 004bb3c9
    XOR EAX,EAX                         ; 004bb3cb
    CMP CL,0x3e                         ; 004bb3cd
    JZ 0x004bb3f4                       ; 004bb3d0
        ;   XREF to: 004bb3f4 (CONDITIONAL_JUMP)  ; LAB_004bb3f4
    CMP byte ptr [EBX],0x0              ; 004bb3d2
        ;   Label: LAB_004bb3d2
    JZ 0x004bb439                       ; 004bb3d5
        ;   XREF to: 004bb439 (CONDITIONAL_JUMP)  ; LAB_004bb439
    CMP EAX,0xff                        ; 004bb3d7
    JNC 0x004bb463                      ; 004bb3dc
        ;   XREF to: 004bb463 (CONDITIONAL_JUMP)  ; LAB_004bb463
    MOV DL,byte ptr [EBX]               ; 004bb3e2
    INC EBX                             ; 004bb3e4
    MOV byte ptr [ESP + EAX*0x1 + 0x200],DL ; 004bb3e5
    MOV DL,byte ptr [EBX]               ; 004bb3ec
    INC EAX                             ; 004bb3ee
    CMP DL,0x3e                         ; 004bb3ef
    JNZ 0x004bb3d2                      ; 004bb3f2
        ;   XREF to: 004bb3d2 (CONDITIONAL_JUMP)  ; LAB_004bb3d2
    XOR DH,DH                           ; 004bb3f4
        ;   Label: LAB_004bb3f4
    MOV byte ptr [ESP + EAX*0x1 + 0x200],DH ; 004bb3f6
    LEA EAX,[ESP + 0x200]               ; 004bb3fd
    PUSH EAX                            ; 004bb404
    CALL FUN_004b9c50                   ; 004bb405
        ;   XREF to: 004b9c50 (UNCONDITIONAL_CALL)  ; undefined FUN_004b9c50()
    ADD ESP,0x4                         ; 004bb40a
    LEA EAX,[ESP + 0x200]               ; 004bb40d
    PUSH EAX                            ; 004bb414
    PUSH EDI                            ; 004bb415
    INC EBX                             ; 004bb416
    CALL FUN_004bb6f0                   ; 004bb417
        ;   XREF to: 004bb6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb6f0()
    ADD ESP,0x8                         ; 004bb41c
    TEST EAX,EAX                        ; 004bb41f
    JL 0x004bb48d                       ; 004bb421
        ;   XREF to: 004bb48d (CONDITIONAL_JUMP)  ; LAB_004bb48d
    JNZ 0x004bb396                      ; 004bb423
        ;   XREF to: 004bb396 (CONDITIONAL_JUMP)  ; LAB_004bb396
    PUSH EDI                            ; 004bb429
    CALL FUN_004bb6c0                   ; 004bb42a
        ;   XREF to: 004bb6c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb6c0()
    MOV EBX,EBP                         ; 004bb42f
    ADD ESP,0x4                         ; 004bb431
    JMP 0x004bb396                      ; 004bb434
        ;   XREF to: 004bb396 (UNCONDITIONAL_JUMP)  ; LAB_004bb396
    MOV EDI,dword ptr [ESP + 0x31c]     ; 004bb439
        ;   Label: LAB_004bb439
    PUSH EDI                            ; 004bb440
    PUSH 0x5df96d                       ; 004bb441 | = "Incomplete markup tag beginning with ..."
    PUSH 0x1cc4270                      ; 004bb446 | DAT_01cc4270
    CALL FUN_005bfb40                   ; 004bb44b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    MOV EAX,0xffffffff                  ; 004bb450
    ADD ESP,0xc                         ; 004bb455
    ADD ESP,0x304                       ; 004bb458
    POP EBP                             ; 004bb45e
    POP EDI                             ; 004bb45f
    POP ESI                             ; 004bb460
    POP EBX                             ; 004bb461
    RET                                 ; 004bb462
    MOV ESI,dword ptr [ESP + 0x31c]     ; 004bb463
        ;   Label: LAB_004bb463
    PUSH ESI                            ; 004bb46a
    PUSH 0x5df997                       ; 004bb46b | = "Markup tag beginning with '%s' - tag ..."
    PUSH 0x1cc4270                      ; 004bb470 | DAT_01cc4270
    CALL FUN_005bfb40                   ; 004bb475
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    MOV EAX,0xffffffff                  ; 004bb47a
    ADD ESP,0xc                         ; 004bb47f
    ADD ESP,0x304                       ; 004bb482
    POP EBP                             ; 004bb488
    POP EDI                             ; 004bb489
    POP ESI                             ; 004bb48a
    POP EBX                             ; 004bb48b
    RET                                 ; 004bb48c
    MOV EAX,0xffffffff                  ; 004bb48d
        ;   Label: LAB_004bb48d
    ADD ESP,0x304                       ; 004bb492
    POP EBP                             ; 004bb498
    POP EDI                             ; 004bb499
    POP ESI                             ; 004bb49a
    POP EBX                             ; 004bb49b
    RET                                 ; 004bb49c
    MOV EBX,dword ptr [ESP + 0x31c]     ; 004bb49d
        ;   Label: LAB_004bb49d
    PUSH EBX                            ; 004bb4a4
    PUSH 0x5df9ca                       ; 004bb4a5 | = "Unexpected '>' found near '%s'"
    PUSH 0x1cc4270                      ; 004bb4aa | DAT_01cc4270
    CALL FUN_005bfb40                   ; 004bb4af
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    MOV EAX,0xffffffff                  ; 004bb4b4
    ADD ESP,0xc                         ; 004bb4b9
    ADD ESP,0x304                       ; 004bb4bc
    POP EBP                             ; 004bb4c2
    POP EDI                             ; 004bb4c3
    POP ESI                             ; 004bb4c4
    POP EBX                             ; 004bb4c5
    RET                                 ; 004bb4c6
    MOV DH,0x20                         ; 004bb4c7
        ;   Label: LAB_004bb4c7
    MOV EAX,0x1                         ; 004bb4c9
    MOV byte ptr [ESP],DH               ; 004bb4ce
    JMP 0x004bb356                      ; 004bb4d1
        ;   XREF to: 004bb356 (UNCONDITIONAL_JUMP)  ; LAB_004bb356
    MOV DL,byte ptr [ESI]               ; 004bb4d6
        ;   Label: LAB_004bb4d6
    TEST DL,DL                          ; 004bb4d8
    JZ 0x004bb36f                       ; 004bb4da
        ;   XREF to: 004bb36f (CONDITIONAL_JUMP)  ; LAB_004bb36f
    CMP DL,0x3c                         ; 004bb4e0
    JZ 0x004bb36f                       ; 004bb4e3
        ;   XREF to: 004bb36f (CONDITIONAL_JUMP)  ; LAB_004bb36f
    CMP DL,0x3e                         ; 004bb4e9
    JZ 0x004bb36f                       ; 004bb4ec
        ;   XREF to: 004bb36f (CONDITIONAL_JUMP)  ; LAB_004bb36f
    INC EAX                             ; 004bb4f2
    INC ESI                             ; 004bb4f3
    MOV byte ptr [ESP + EAX*0x1 + -0x1],DL ; 004bb4f4
    JMP 0x004bb358                      ; 004bb4f8
        ;   XREF to: 004bb358 (UNCONDITIONAL_JUMP)  ; LAB_004bb358
    PUSH EDI                            ; 004bb4fd
        ;   Label: LAB_004bb4fd
    CALL FUN_004bb630                   ; 004bb4fe
        ;   XREF to: 004bb630 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb630()
    ADD ESP,0x4                         ; 004bb503
    JMP 0x004bb396                      ; 004bb506
        ;   XREF to: 004bb396 (UNCONDITIONAL_JUMP)  ; LAB_004bb396

