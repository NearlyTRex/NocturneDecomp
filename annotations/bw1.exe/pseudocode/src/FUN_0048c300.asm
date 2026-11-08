; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048c300(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00558450 at 005584a3
;
; Referenced Globals:
;   undefined4 DAT_0152c2a8
;   undefined4 DAT_0152c2ac
;   undefined4 DAT_0152c2b0
;   undefined4 DAT_0152c2b4
;   undefined4 DAT_0152c2b8
;   undefined4 DAT_0152c2bc
;   undefined4 DAT_0152c2c0
;   undefined4 DAT_0152c2c4
;   undefined4 DAT_0152c2c8
;   undefined4 DAT_02c8af28
;   undefined4 DAT_02c8af2c
;   undefined4 DAT_02c8af30
;
; Called Functions:
;   FUN_004583d0
;   FUN_0048afe0
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c300
        ;   Label: FUN_0048c300
    PUSH ESI                            ; 0048c301
    PUSH EDI                            ; 0048c302
    PUSH EBP                            ; 0048c303
    SUB ESP,0x1c                        ; 0048c304
    MOV EBP,dword ptr [ESP + 0x34]      ; 0048c307
    MOV EAX,0x152c2c0                   ; 0048c30b
    CMP EAX,0x2c8af28                   ; 0048c310
    JNZ 0x0048c4a5                      ; 0048c315
        ;   XREF to: 0048c4a5 (CONDITIONAL_JUMP)  ; LAB_0048c4a5
    MOV EAX,0x152c2b4                   ; 0048c31b
        ;   Label: LAB_0048c31b
    CMP EAX,0x152c2c0                   ; 0048c320
    JZ 0x0048c349                       ; 0048c325
        ;   XREF to: 0048c349 (CONDITIONAL_JUMP)  ; LAB_0048c349
    FLD float ptr [0x0152c2c0]          ; 0048c327 | DAT_0152c2c0
    FLD float ptr [0x0152c2c8]          ; 0048c32d | DAT_0152c2c8
    MOV EAX,[0x0152c2c4]                ; 0048c333 | DAT_0152c2c4
    MOV [0x0152c2b8],EAX                ; 0048c338 | DAT_0152c2b8
    FSTP float ptr [0x0152c2bc]         ; 0048c33d | DAT_0152c2bc
    FSTP float ptr [0x0152c2b4]         ; 0048c343 | DAT_0152c2b4
    MOV EAX,0x152c2a8                   ; 0048c349
        ;   Label: LAB_0048c349
    CMP EAX,0x152c2b4                   ; 0048c34e
    JZ 0x0048c377                       ; 0048c353
        ;   XREF to: 0048c377 (CONDITIONAL_JUMP)  ; LAB_0048c377
    FLD float ptr [0x0152c2b4]          ; 0048c355 | DAT_0152c2b4
    FLD float ptr [0x0152c2bc]          ; 0048c35b | DAT_0152c2bc
    MOV EAX,[0x0152c2b8]                ; 0048c361 | DAT_0152c2b8
    MOV [0x0152c2ac],EAX                ; 0048c366 | DAT_0152c2ac
    FSTP float ptr [0x0152c2b0]         ; 0048c36b | DAT_0152c2b0
    FSTP float ptr [0x0152c2a8]         ; 0048c371 | DAT_0152c2a8
    FLDZ                                ; 0048c377
        ;   Label: LAB_0048c377
    FCOMP float ptr [EBP + 0x18]        ; 0048c379
    FNSTSW AX                           ; 0048c37c
    SAHF                                ; 0048c37e
    JNC 0x0048c4cc                      ; 0048c37f
        ;   XREF to: 0048c4cc (CONDITIONAL_JUMP)  ; LAB_0048c4cc
    MOV EAX,dword ptr [ESP + 0x30]      ; 0048c385
    FLD float ptr [EBP + 0x10]          ; 0048c389
    FSUB float ptr [EAX + 0x10]         ; 0048c38c
    FSUB float ptr [EBP + 0x20]         ; 0048c38f
    FLD1                                ; 0048c392
    FDIV float ptr [EAX + 0x28]         ; 0048c394
    FLD float ptr [EBP + 0x10]          ; 0048c397
    FADD float ptr [EBP + 0x18]         ; 0048c39a
    FSUB float ptr [EAX + 0x10]         ; 0048c39d
        ;   Label: LAB_0048c39d
    FADD float ptr [EBP + 0x20]         ; 0048c3a0
    FXCH ST2                            ; 0048c3a3
    FMUL ST1                            ; 0048c3a5
    FXCH ST2                            ; 0048c3a7
    FMULP                               ; 0048c3a9
    FXCH                                ; 0048c3ab
    CALL FUN_005c03a0                   ; 0048c3ad
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 0048c3b2
    CALL FUN_005c03a0                   ; 0048c3b4
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8]         ; 0048c3b9
    FISTP dword ptr [ESP + 0x4]         ; 0048c3bd
    MOV EAX,dword ptr [ESP + 0x30]      ; 0048c3c1
    FLD float ptr [EBP + 0x28]          ; 0048c3c5
    FSUB float ptr [EAX + 0x14]         ; 0048c3c8
    FLD1                                ; 0048c3cb
    FDIV float ptr [EAX + 0x2c]         ; 0048c3cd
    FLD float ptr [EBP + 0x24]          ; 0048c3d0
    FSUB float ptr [EAX + 0x14]         ; 0048c3d3
    FXCH ST2                            ; 0048c3d6
    FMUL ST1                            ; 0048c3d8
    FXCH ST2                            ; 0048c3da
    FMULP                               ; 0048c3dc
    FLDZ                                ; 0048c3de
    FXCH ST2                            ; 0048c3e0
    CALL FUN_005c03a0                   ; 0048c3e2
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 0048c3e7
    CALL FUN_005c03a0                   ; 0048c3e9
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 0048c3ee
    FISTP dword ptr [ESP + 0xc]         ; 0048c3f0
    FISTP dword ptr [ESP + 0x10]        ; 0048c3f4
    FCOMP float ptr [EBP + 0x1c]        ; 0048c3f8
    FNSTSW AX                           ; 0048c3fb
    SAHF                                ; 0048c3fd
    JNC 0x0048c4e9                      ; 0048c3fe
        ;   XREF to: 0048c4e9 (CONDITIONAL_JUMP)  ; LAB_0048c4e9
    MOV EAX,dword ptr [ESP + 0x30]      ; 0048c404
    FLD float ptr [EBP + 0x14]          ; 0048c408
    FSUB float ptr [EAX + 0x18]         ; 0048c40b
    FSUB float ptr [EBP + 0x20]         ; 0048c40e
    FLD1                                ; 0048c411
    FDIV float ptr [EAX + 0x30]         ; 0048c413
    FLD float ptr [EBP + 0x14]          ; 0048c416
    FADD float ptr [EBP + 0x1c]         ; 0048c419
    FSUB float ptr [EAX + 0x18]         ; 0048c41c
        ;   Label: LAB_0048c41c
    FADD float ptr [EBP + 0x20]         ; 0048c41f
    FXCH ST2                            ; 0048c422
    FMUL ST1                            ; 0048c424
    FXCH ST2                            ; 0048c426
    FMULP                               ; 0048c428
    FXCH                                ; 0048c42a
    CALL FUN_005c03a0                   ; 0048c42c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FXCH                                ; 0048c431
    CALL FUN_005c03a0                   ; 0048c433
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x18]        ; 0048c438
    FISTP dword ptr [ESP + 0x14]        ; 0048c43c
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048c440
    MOV EDI,dword ptr [ESP + 0x4]       ; 0048c444
    CMP EDI,EDX                         ; 0048c448
    JG 0x0048c49d                       ; 0048c44a
        ;   XREF to: 0048c49d (CONDITIONAL_JUMP)  ; LAB_0048c49d
    MOV EBX,dword ptr [ESP + 0x10]      ; 0048c44c
        ;   Label: LAB_0048c44c
    MOV ESI,dword ptr [ESP + 0xc]       ; 0048c450
    CMP ESI,EBX                         ; 0048c454
    JG 0x0048c494                       ; 0048c456
        ;   XREF to: 0048c494 (CONDITIONAL_JUMP)  ; LAB_0048c494
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048c458
        ;   Label: LAB_0048c458
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048c45c
    CMP EBX,EDX                         ; 0048c460
    JG 0x0048c48b                       ; 0048c462
        ;   XREF to: 0048c48b (CONDITIONAL_JUMP)  ; LAB_0048c48b
    PUSH EBX                            ; 0048c464
        ;   Label: LAB_0048c464
    PUSH ESI                            ; 0048c465
    PUSH EDI                            ; 0048c466
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0048c467
    PUSH EAX                            ; 0048c46b
    CALL FUN_0048afe0                   ; 0048c46c
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048afe0()
    ADD ESP,0x10                        ; 0048c471
    TEST EAX,EAX                        ; 0048c474
    JZ 0x0048c482                       ; 0048c476
        ;   XREF to: 0048c482 (CONDITIONAL_JUMP)  ; LAB_0048c482
    PUSH EBP                            ; 0048c478
    PUSH EAX                            ; 0048c479
    CALL FUN_004583d0                   ; 0048c47a
        ;   XREF to: 004583d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004583d0()
    ADD ESP,0x8                         ; 0048c47f
    MOV ECX,dword ptr [ESP + 0x18]      ; 0048c482
        ;   Label: LAB_0048c482
    INC EBX                             ; 0048c486
    CMP EBX,ECX                         ; 0048c487
    JLE 0x0048c464                      ; 0048c489
        ;   XREF to: 0048c464 (CONDITIONAL_JUMP)  ; LAB_0048c464
    MOV EAX,dword ptr [ESP + 0x10]      ; 0048c48b
        ;   Label: LAB_0048c48b
    INC ESI                             ; 0048c48f
    CMP ESI,EAX                         ; 0048c490
    JLE 0x0048c458                      ; 0048c492
        ;   XREF to: 0048c458 (CONDITIONAL_JUMP)  ; LAB_0048c458
    MOV ECX,dword ptr [ESP + 0x8]       ; 0048c494
        ;   Label: LAB_0048c494
    INC EDI                             ; 0048c498
    CMP EDI,ECX                         ; 0048c499
    JLE 0x0048c44c                      ; 0048c49b
        ;   XREF to: 0048c44c (CONDITIONAL_JUMP)  ; LAB_0048c44c
    ADD ESP,0x1c                        ; 0048c49d
        ;   Label: LAB_0048c49d
    POP EBP                             ; 0048c4a0
    POP EDI                             ; 0048c4a1
    POP ESI                             ; 0048c4a2
    POP EBX                             ; 0048c4a3
    RET                                 ; 0048c4a4
    FLD float ptr [0x02c8af28]          ; 0048c4a5 | DAT_02c8af28
        ;   Label: LAB_0048c4a5
    FLD float ptr [0x02c8af30]          ; 0048c4ab | DAT_02c8af30
    MOV EAX,[0x02c8af2c]                ; 0048c4b1 | DAT_02c8af2c
    MOV [0x0152c2c4],EAX                ; 0048c4b6 | DAT_0152c2c4
    FSTP float ptr [0x0152c2c8]         ; 0048c4bb | DAT_0152c2c8
    FSTP float ptr [0x0152c2c0]         ; 0048c4c1 | DAT_0152c2c0
    JMP 0x0048c31b                      ; 0048c4c7
        ;   XREF to: 0048c31b (UNCONDITIONAL_JUMP)  ; LAB_0048c31b
    FLD float ptr [EBP + 0x10]          ; 0048c4cc
        ;   Label: LAB_0048c4cc
    FADD float ptr [EBP + 0x18]         ; 0048c4cf
    MOV EAX,dword ptr [ESP + 0x30]      ; 0048c4d2
    FSUB float ptr [EAX + 0x10]         ; 0048c4d6
    FSUB float ptr [EBP + 0x20]         ; 0048c4d9
    FLD1                                ; 0048c4dc
    FDIV float ptr [EAX + 0x28]         ; 0048c4de
    FLD float ptr [EBP + 0x10]          ; 0048c4e1
    JMP 0x0048c39d                      ; 0048c4e4
        ;   XREF to: 0048c39d (UNCONDITIONAL_JUMP)  ; LAB_0048c39d
    FLD float ptr [EBP + 0x14]          ; 0048c4e9
        ;   Label: LAB_0048c4e9
    FADD float ptr [EBP + 0x1c]         ; 0048c4ec
    MOV EAX,dword ptr [ESP + 0x30]      ; 0048c4ef
    FSUB float ptr [EAX + 0x18]         ; 0048c4f3
    FSUB float ptr [EBP + 0x20]         ; 0048c4f6
    FLD1                                ; 0048c4f9
    FDIV float ptr [EAX + 0x30]         ; 0048c4fb
    FLD float ptr [EBP + 0x14]          ; 0048c4fe
    JMP 0x0048c41c                      ; 0048c501
        ;   XREF to: 0048c41c (UNCONDITIONAL_JUMP)  ; LAB_0048c41c

