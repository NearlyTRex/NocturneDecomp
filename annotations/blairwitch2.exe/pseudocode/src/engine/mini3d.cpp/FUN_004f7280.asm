; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f7280(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_mini3d.cpp_FUN_004f6970 at 004f6a4c
;   engine_mini3d.cpp_FUN_004f6d00 at 004f6d60
;
; Referenced Globals:
;   undefined4 DAT_005ddee4
;   undefined4 DAT_005ddee8
;   undefined4 DAT_005ddeec
;   undefined4 DAT_005ddef0
;   undefined4 DAT_005ddef4
;   undefined4 DAT_005ddefc
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01d09858
;   undefined4 DAT_01d17ab4
;   undefined4 DAT_01d17ab8
;   undefined4 DAT_01d17abc
;   undefined4 DAT_01d17ac0
;   ... and 11 more
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f6df0
;   engine_mini3d.cpp_FUN_004f7260
;   engine_special.cpp_drawPolygon_FUN_0055f8f0
;   engine_special.cpp_FUN_0055c45c
;   engine_special.cpp_FUN_0055ca23
;   engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9
;   engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7280
        ;   Label: engine_mini3d.cpp_FUN_004f7280
    PUSH ESI                            ; 004f7281
    PUSH EDI                            ; 004f7282
    PUSH EBP                            ; 004f7283
    SUB ESP,0xa4                        ; 004f7284
    MOV EBP,dword ptr [ESP + 0xb8]      ; 004f728a
    MOV EBX,dword ptr [ESP + 0xbc]      ; 004f7291
    MOV ESI,dword ptr [ESP + 0xc0]      ; 004f7298
    FLD float ptr [EBX + 0x14]          ; 004f729f
    FLD float ptr [ESI + 0x18]          ; 004f72a2
    FSUB float ptr [EBX + 0x18]         ; 004f72a5
    FXCH                                ; 004f72a8
    FSUB float ptr [EBP + 0x14]         ; 004f72aa
    FMULP                               ; 004f72ad
    FLD float ptr [ESI + 0x14]          ; 004f72af
    FLD float ptr [EBX + 0x18]          ; 004f72b2
    FSUB float ptr [EBP + 0x18]         ; 004f72b5
    FXCH                                ; 004f72b8
    FSUB float ptr [EBX + 0x14]         ; 004f72ba
    FMULP                               ; 004f72bd
    FCOMPP                              ; 004f72bf
    FNSTSW AX                           ; 004f72c1
    SAHF                                ; 004f72c3
    JNC 0x004f770e                      ; 004f72c4
        ;   XREF to: 004f770e (CONDITIONAL_JUMP)  ; LAB_004f770e
    MOV EDX,dword ptr [0x01c37788]      ; 004f72ca | DAT_01c37788
    TEST EDX,EDX                        ; 004f72d0
    JZ 0x004f772e                       ; 004f72d2
        ;   XREF to: 004f772e (CONDITIONAL_JUMP)  ; LAB_004f772e
    FLD float ptr [EBP]                 ; 004f72d8
    FMUL float ptr [0x005ddee4]         ; 004f72db | DAT_005ddee4
    SUB ESP,0x4                         ; 004f72e1
    FSTP float ptr [ESP]                ; 004f72e4
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f72e7
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f72ec
    MOV dword ptr [ESP],EAX             ; 004f72ef
    FLD float ptr [EBP + 0x4]           ; 004f72f2
    FMUL float ptr [0x005ddee4]         ; 004f72f5 | DAT_005ddee4
    SUB ESP,0x4                         ; 004f72fb
    FSTP float ptr [ESP]                ; 004f72fe
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f7301
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f7306
    MOV dword ptr [ESP + 0x4],EAX       ; 004f7309
    FLD float ptr [EBP + 0x8]           ; 004f730d
    FMUL float ptr [0x005ddee4]         ; 004f7310 | DAT_005ddee4
    SUB ESP,0x4                         ; 004f7316
    FSTP float ptr [ESP]                ; 004f7319
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f731c
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f7321
    MOV dword ptr [ESP + 0x8],EAX       ; 004f7324
    FLD float ptr [EBP + 0xc]           ; 004f7328
    FMUL float ptr [0x005ddee8]         ; 004f732b | DAT_005ddee8
    SUB ESP,0x4                         ; 004f7331
    FSTP float ptr [ESP]                ; 004f7334
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f7337
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f733c
    MOV dword ptr [ESP + 0xc],EAX       ; 004f733f
    FLD float ptr [EBP + 0x14]          ; 004f7343
    FMUL float ptr [0x005ddeec]         ; 004f7346 | DAT_005ddeec
    SUB ESP,0x4                         ; 004f734c
    FSTP float ptr [ESP]                ; 004f734f
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f7352
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f7357
    MOV dword ptr [ESP + 0x10],EAX      ; 004f735a
    FLD float ptr [EBP + 0x18]          ; 004f735e
    FMUL float ptr [0x005ddeec]         ; 004f7361 | DAT_005ddeec
    SUB ESP,0x4                         ; 004f7367
    FSTP float ptr [ESP]                ; 004f736a
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f736d
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f7372
    MOV dword ptr [ESP + 0x14],EAX      ; 004f7375
    FLD float ptr [EBP + 0x1c]          ; 004f7379
    FMUL float ptr [0x005ddee4]         ; 004f737c | DAT_005ddee4
    FMUL float ptr [0x005ddeec]         ; 004f7382 | DAT_005ddeec
    SUB ESP,0x4                         ; 004f7388
    FSTP float ptr [ESP]                ; 004f738b
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f738e
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f7393
    MOV dword ptr [ESP + 0x18],EAX      ; 004f7396
    FLD float ptr [EBP + 0x20]          ; 004f739a
    FMUL float ptr [0x005ddee4]         ; 004f739d | DAT_005ddee4
    FMUL float ptr [0x005ddeec]         ; 004f73a3 | DAT_005ddeec
    SUB ESP,0x4                         ; 004f73a9
    FSTP float ptr [ESP]                ; 004f73ac
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f73af
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f73b4
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f73b7
    FLD float ptr [EBP + 0x2c]          ; 004f73bb
    FMUL float ptr [0x005ddef0]         ; 004f73be | DAT_005ddef0
    SUB ESP,0x4                         ; 004f73c4
    FSTP float ptr [ESP]                ; 004f73c7
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f73ca
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f73cf
    MOV dword ptr [ESP + 0x20],EAX      ; 004f73d2
    FLD float ptr [EBP + 0x28]          ; 004f73d6
    FMUL float ptr [0x005ddef0]         ; 004f73d9 | DAT_005ddef0
    SUB ESP,0x4                         ; 004f73df
    FSTP float ptr [ESP]                ; 004f73e2
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f73e5
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f73ea
    MOV dword ptr [ESP + 0x24],EAX      ; 004f73ed
    FLD float ptr [EBP + 0x24]          ; 004f73f1
    FMUL float ptr [0x005ddef0]         ; 004f73f4 | DAT_005ddef0
    SUB ESP,0x4                         ; 004f73fa
    FSTP float ptr [ESP]                ; 004f73fd
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f7400
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f7405
    MOV dword ptr [ESP + 0x28],EAX      ; 004f7408
    TEST byte ptr [0x01d09858],0x8      ; 004f740c | DAT_01d09858
    JZ 0x004f7719                       ; 004f7413
        ;   XREF to: 004f7719 (CONDITIONAL_JUMP)  ; LAB_004f7719
    FLD float ptr [EBP + 0x34]          ; 004f7419
    FMUL float ptr [0x005ddef0]         ; 004f741c | DAT_005ddef0
        ;   Label: LAB_004f741c
    SUB ESP,0x4                         ; 004f7422
    FSTP float ptr [ESP]                ; 004f7425
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f7428
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f742d
    MOV dword ptr [ESP + 0x2c],EAX      ; 004f7430
    FLD float ptr [EBX]                 ; 004f7434
    FMUL float ptr [0x005ddee4]         ; 004f7436 | DAT_005ddee4
    SUB ESP,0x4                         ; 004f743c
    FSTP float ptr [ESP]                ; 004f743f
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f7442
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f7447
    MOV dword ptr [ESP + 0x30],EAX      ; 004f744a
    FLD float ptr [EBX + 0x4]           ; 004f744e
    FMUL float ptr [0x005ddee4]         ; 004f7451 | DAT_005ddee4
    SUB ESP,0x4                         ; 004f7457
    FSTP float ptr [ESP]                ; 004f745a
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f745d
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f7462
    MOV dword ptr [ESP + 0x34],EAX      ; 004f7465
    FLD float ptr [EBX + 0x8]           ; 004f7469
    FMUL float ptr [0x005ddee4]         ; 004f746c | DAT_005ddee4
    SUB ESP,0x4                         ; 004f7472
    FSTP float ptr [ESP]                ; 004f7475
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f7478
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f747d
    MOV dword ptr [ESP + 0x38],EAX      ; 004f7480
    FLD float ptr [EBX + 0xc]           ; 004f7484
    FMUL float ptr [0x005ddee8]         ; 004f7487 | DAT_005ddee8
    SUB ESP,0x4                         ; 004f748d
    FSTP float ptr [ESP]                ; 004f7490
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f7493
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f7498
    MOV dword ptr [ESP + 0x3c],EAX      ; 004f749b
    FLD float ptr [EBX + 0x14]          ; 004f749f
    FMUL float ptr [0x005ddeec]         ; 004f74a2 | DAT_005ddeec
    SUB ESP,0x4                         ; 004f74a8
    FSTP float ptr [ESP]                ; 004f74ab
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f74ae
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f74b3
    MOV dword ptr [ESP + 0x40],EAX      ; 004f74b6
    FLD float ptr [EBX + 0x18]          ; 004f74ba
    FMUL float ptr [0x005ddeec]         ; 004f74bd | DAT_005ddeec
    SUB ESP,0x4                         ; 004f74c3
    FSTP float ptr [ESP]                ; 004f74c6
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f74c9
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f74ce
    MOV dword ptr [ESP + 0x44],EAX      ; 004f74d1
    FLD float ptr [EBX + 0x1c]          ; 004f74d5
    FMUL float ptr [0x005ddee4]         ; 004f74d8 | DAT_005ddee4
    FMUL float ptr [0x005ddeec]         ; 004f74de | DAT_005ddeec
    SUB ESP,0x4                         ; 004f74e4
    FSTP float ptr [ESP]                ; 004f74e7
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f74ea
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f74ef
    MOV dword ptr [ESP + 0x48],EAX      ; 004f74f2
    FLD float ptr [EBX + 0x20]          ; 004f74f6
    FMUL float ptr [0x005ddee4]         ; 004f74f9 | DAT_005ddee4
    FMUL float ptr [0x005ddeec]         ; 004f74ff | DAT_005ddeec
    SUB ESP,0x4                         ; 004f7505
    FSTP float ptr [ESP]                ; 004f7508
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f750b
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f7510
    MOV dword ptr [ESP + 0x4c],EAX      ; 004f7513
    FLD float ptr [EBX + 0x2c]          ; 004f7517
    FMUL float ptr [0x005ddef0]         ; 004f751a | DAT_005ddef0
    SUB ESP,0x4                         ; 004f7520
    FSTP float ptr [ESP]                ; 004f7523
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f7526
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f752b
    MOV dword ptr [ESP + 0x50],EAX      ; 004f752e
    FLD float ptr [EBX + 0x28]          ; 004f7532
    FMUL float ptr [0x005ddef0]         ; 004f7535 | DAT_005ddef0
    SUB ESP,0x4                         ; 004f753b
    FSTP float ptr [ESP]                ; 004f753e
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f7541
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f7546
    MOV dword ptr [ESP + 0x54],EAX      ; 004f7549
    FLD float ptr [EBX + 0x24]          ; 004f754d
    FMUL float ptr [0x005ddef0]         ; 004f7550 | DAT_005ddef0
    SUB ESP,0x4                         ; 004f7556
    FSTP float ptr [ESP]                ; 004f7559
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f755c
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f7561
    MOV DL,byte ptr [0x01d09858]        ; 004f7564 | DAT_01d09858
    MOV dword ptr [ESP + 0x58],EAX      ; 004f756a
    TEST DL,0x8                         ; 004f756e
    JZ 0x004f7721                       ; 004f7571
        ;   XREF to: 004f7721 (CONDITIONAL_JUMP)  ; LAB_004f7721
    FLD float ptr [EBX + 0x34]          ; 004f7577
    FMUL float ptr [0x005ddef0]         ; 004f757a | DAT_005ddef0
        ;   Label: LAB_004f757a
    SUB ESP,0x4                         ; 004f7580
    FSTP float ptr [ESP]                ; 004f7583
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f7586
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f758b
    MOV dword ptr [ESP + 0x5c],EAX      ; 004f758e
    FLD float ptr [ESI]                 ; 004f7592
    FMUL float ptr [0x005ddee4]         ; 004f7594 | DAT_005ddee4
    SUB ESP,0x4                         ; 004f759a
    FSTP float ptr [ESP]                ; 004f759d
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f75a0
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f75a5
    MOV dword ptr [ESP + 0x60],EAX      ; 004f75a8
    FLD float ptr [ESI + 0x4]           ; 004f75ac
    FMUL float ptr [0x005ddee4]         ; 004f75af | DAT_005ddee4
    SUB ESP,0x4                         ; 004f75b5
    FSTP float ptr [ESP]                ; 004f75b8
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f75bb
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f75c0
    MOV dword ptr [ESP + 0x64],EAX      ; 004f75c3
    FLD float ptr [ESI + 0x8]           ; 004f75c7
    FMUL float ptr [0x005ddee4]         ; 004f75ca | DAT_005ddee4
    SUB ESP,0x4                         ; 004f75d0
    FSTP float ptr [ESP]                ; 004f75d3
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f75d6
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f75db
    MOV dword ptr [ESP + 0x68],EAX      ; 004f75de
    FLD float ptr [ESI + 0xc]           ; 004f75e2
    FMUL float ptr [0x005ddee8]         ; 004f75e5 | DAT_005ddee8
    SUB ESP,0x4                         ; 004f75eb
    FSTP float ptr [ESP]                ; 004f75ee
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f75f1
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f75f6
    MOV dword ptr [ESP + 0x6c],EAX      ; 004f75f9
    FLD float ptr [ESI + 0x14]          ; 004f75fd
    FMUL float ptr [0x005ddeec]         ; 004f7600 | DAT_005ddeec
    SUB ESP,0x4                         ; 004f7606
    FSTP float ptr [ESP]                ; 004f7609
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f760c
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f7611
    MOV dword ptr [ESP + 0x70],EAX      ; 004f7614
    FLD float ptr [ESI + 0x18]          ; 004f7618
    FMUL float ptr [0x005ddeec]         ; 004f761b | DAT_005ddeec
    SUB ESP,0x4                         ; 004f7621
    FSTP float ptr [ESP]                ; 004f7624
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f7627
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f762c
    MOV dword ptr [ESP + 0x74],EAX      ; 004f762f
    FLD float ptr [ESI + 0x1c]          ; 004f7633
    FMUL double ptr [0x005ddef4]        ; 004f7636 | DAT_005ddef4
    FMUL double ptr [0x005ddefc]        ; 004f763c | DAT_005ddefc
    SUB ESP,0x4                         ; 004f7642
    FSTP float ptr [ESP]                ; 004f7645
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f7648
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f764d
    MOV dword ptr [ESP + 0x78],EAX      ; 004f7650
    FLD float ptr [ESI + 0x20]          ; 004f7654
    FMUL double ptr [0x005ddef4]        ; 004f7657 | DAT_005ddef4
    FMUL double ptr [0x005ddefc]        ; 004f765d | DAT_005ddefc
    SUB ESP,0x4                         ; 004f7663
    FSTP float ptr [ESP]                ; 004f7666
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f7669
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f766e
    MOV dword ptr [ESP + 0x7c],EAX      ; 004f7671
    FLD float ptr [ESI + 0x2c]          ; 004f7675
    FMUL float ptr [0x005ddef0]         ; 004f7678 | DAT_005ddef0
    SUB ESP,0x4                         ; 004f767e
    FSTP float ptr [ESP]                ; 004f7681
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f7684
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f7689
    MOV dword ptr [ESP + 0x80],EAX      ; 004f768c
    FLD float ptr [ESI + 0x28]          ; 004f7693
    FMUL float ptr [0x005ddef0]         ; 004f7696 | DAT_005ddef0
    SUB ESP,0x4                         ; 004f769c
    FSTP float ptr [ESP]                ; 004f769f
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f76a2
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f76a7
    MOV dword ptr [ESP + 0x84],EAX      ; 004f76aa
    FLD float ptr [ESI + 0x24]          ; 004f76b1
    FMUL float ptr [0x005ddef0]         ; 004f76b4 | DAT_005ddef0
    SUB ESP,0x4                         ; 004f76ba
    FSTP float ptr [ESP]                ; 004f76bd
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f76c0
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f76c5
    MOV DH,byte ptr [0x01d09858]        ; 004f76c8 | DAT_01d09858
    MOV dword ptr [ESP + 0x88],EAX      ; 004f76ce
    TEST DH,0x8                         ; 004f76d5
    JZ 0x004f7729                       ; 004f76d8
        ;   XREF to: 004f7729 (CONDITIONAL_JUMP)  ; LAB_004f7729
    FLD float ptr [ESI + 0x34]          ; 004f76da
    FMUL float ptr [0x005ddef0]         ; 004f76dd | DAT_005ddef0
        ;   Label: LAB_004f76dd
    SUB ESP,0x4                         ; 004f76e3
    FSTP float ptr [ESP]                ; 004f76e6
    CALL engine_mini3d.cpp_FUN_004f7260 ; 004f76e9
        ;   XREF to: 004f7260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7260()
    ADD ESP,0x4                         ; 004f76ee
    MOV dword ptr [ESP + 0x8c],EAX      ; 004f76f1
    MOV ESI,dword ptr [0x01c38b54]      ; 004f76f8 | DAT_01c38b54
    PUSH ESI                            ; 004f76fe
    PUSH 0x3                            ; 004f76ff
    LEA EAX,[ESP + 0x8]                 ; 004f7701
    PUSH EAX                            ; 004f7705
    CALL engine_special.cpp_drawPolygon_FUN_0055f8f0 ; 004f7706
        ;   XREF to: 0055f8f0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon_FUN_0055f8f0(SRenderVertex * vertices, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 004f770b
    ADD ESP,0xa4                        ; 004f770e
        ;   Label: LAB_004f770e
    POP EBP                             ; 004f7714
    POP EDI                             ; 004f7715
    POP ESI                             ; 004f7716
    POP EBX                             ; 004f7717
    RET                                 ; 004f7718
    FLD float ptr [EBP + 0x30]          ; 004f7719
        ;   Label: LAB_004f7719
    JMP 0x004f741c                      ; 004f771c
        ;   XREF to: 004f741c (UNCONDITIONAL_JUMP)  ; LAB_004f741c
    FLD float ptr [EBX + 0x30]          ; 004f7721
        ;   Label: LAB_004f7721
    JMP 0x004f757a                      ; 004f7724
        ;   XREF to: 004f757a (UNCONDITIONAL_JUMP)  ; LAB_004f757a
    FLD float ptr [ESI + 0x30]          ; 004f7729
        ;   Label: LAB_004f7729
    JMP 0x004f76dd                      ; 004f772c
        ;   XREF to: 004f76dd (UNCONDITIONAL_JUMP)  ; LAB_004f76dd
    PUSH EBX                            ; 004f772e
        ;   Label: LAB_004f772e
    MOV ECX,0x4b0                       ; 004f772f
    MOV dword ptr [0x01d17fbc],EDX      ; 004f7734 | DAT_01d17fbc
    PUSH EBP                            ; 004f773a
    MOV dword ptr [0x01d17ab4],EDX      ; 004f773b | DAT_01d17ab4
    MOV dword ptr [0x01d17fb8],ECX      ; 004f7741 | DAT_01d17fb8
    CALL engine_mini3d.cpp_FUN_004f6df0 ; 004f7747
        ;   XREF to: 004f6df0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6df0()
    ADD ESP,0x8                         ; 004f774c
    PUSH ESI                            ; 004f774f
    PUSH EBX                            ; 004f7750
    CALL engine_mini3d.cpp_FUN_004f6df0 ; 004f7751
        ;   XREF to: 004f6df0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6df0()
    ADD ESP,0x8                         ; 004f7756
    PUSH EBP                            ; 004f7759
    PUSH ESI                            ; 004f775a
    CALL engine_mini3d.cpp_FUN_004f6df0 ; 004f775b
        ;   XREF to: 004f6df0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6df0()
    MOV EAX,0x1d17ab8                   ; 004f7760 | DAT_01d17ab8
    MOV ECX,dword ptr [0x01d17fb8]      ; 004f7765 | DAT_01d17fb8
    MOV EBX,dword ptr [0x01d17ab4]      ; 004f776b | DAT_01d17ab4
    ADD ESP,0x8                         ; 004f7771
    XOR EDX,EDX                         ; 004f7774
    TEST EBX,EBX                        ; 004f7776
    JLE 0x004f79b2                      ; 004f7778
        ;   XREF to: 004f79b2 (CONDITIONAL_JUMP)  ; LAB_004f79b2
    MOV EDI,dword ptr [0x01d17ab4]      ; 004f777e | DAT_01d17ab4
    CMP ECX,dword ptr [EAX]             ; 004f7784 | DAT_01d17ab8 | DAT_01d17b08
        ;   Label: LAB_004f7784
    JNZ 0x004f79a6                      ; 004f7786
        ;   XREF to: 004f79a6 (CONDITIONAL_JUMP)  ; LAB_004f79a6
    TEST EAX,EAX                        ; 004f778c
    JZ 0x004f79a6                       ; 004f778e
        ;   XREF to: 004f79a6 (CONDITIONAL_JUMP)  ; LAB_004f79a6
    MOV EBP,EAX                         ; 004f7794
        ;   Label: LAB_004f7794
    TEST EAX,EAX                        ; 004f7796
    JZ 0x004f770e                       ; 004f7798
        ;   XREF to: 004f770e (CONDITIONAL_JUMP)  ; LAB_004f770e
    MOV ESI,dword ptr [0x01d17ab4]      ; 004f779e | DAT_01d17ab4
    MOV ECX,dword ptr [0x01d17fb8]      ; 004f77a4 | DAT_01d17fb8
    MOV EBX,EAX                         ; 004f77aa
    XOR EDX,EDX                         ; 004f77ac
    MOV EAX,0x1d17ab8                   ; 004f77ae
    TEST ESI,ESI                        ; 004f77b3
    JLE 0x004f79c5                      ; 004f77b5
        ;   XREF to: 004f79c5 (CONDITIONAL_JUMP)  ; LAB_004f79c5
    MOV EDI,dword ptr [0x01d17ab4]      ; 004f77bb | DAT_01d17ab4
    CMP ECX,dword ptr [EAX]             ; 004f77c1 | DAT_01d17ab8 | DAT_01d17b08
        ;   Label: LAB_004f77c1
    JNZ 0x004f79b9                      ; 004f77c3
        ;   XREF to: 004f79b9 (CONDITIONAL_JUMP)  ; LAB_004f79b9
    CMP EAX,EBX                         ; 004f77c9
    JZ 0x004f79b9                       ; 004f77cb
        ;   XREF to: 004f79b9 (CONDITIONAL_JUMP)  ; LAB_004f79b9
    MOV dword ptr [ESP + 0xa0],EAX      ; 004f77d1 | DAT_01d17b08 | DAT_01d17ab8
        ;   Label: LAB_004f77d1
    TEST EAX,EAX                        ; 004f77d8
    JZ 0x004f770e                       ; 004f77da
        ;   XREF to: 004f770e (CONDITIONAL_JUMP)  ; LAB_004f770e
    MOV EAX,[0x01d17fb8]                ; 004f77e0 | DAT_01d17fb8
    MOV dword ptr [ESP + 0x9c],EAX      ; 004f77e5
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004f77ec
        ;   Label: LAB_004f77ec
    CMP EAX,dword ptr [EBP + 0x4]       ; 004f77f3 | DAT_01d17abc
    JL 0x004f783d                       ; 004f77f6
        ;   XREF to: 004f783d (CONDITIONAL_JUMP)  ; LAB_004f783d
    MOV EBX,dword ptr [0x01d17ab4]      ; 004f77f8 | DAT_01d17ab4
    MOV ECX,EAX                         ; 004f77fe
    MOV dword ptr [EBP],0xffffffff      ; 004f7800 | DAT_01d17ab8
    XOR EDX,EDX                         ; 004f7807
    MOV EBP,dword ptr [ESP + 0xa0]      ; 004f7809
    MOV EAX,0x1d17ab8                   ; 004f7810
    TEST EBX,EBX                        ; 004f7815
    JLE 0x004f79d8                      ; 004f7817
        ;   XREF to: 004f79d8 (CONDITIONAL_JUMP)  ; LAB_004f79d8
    MOV ESI,dword ptr [0x01d17ab4]      ; 004f781d | DAT_01d17ab4
    CMP ECX,dword ptr [EAX]             ; 004f7823 | DAT_01d17ab8 | DAT_01d17b08
        ;   Label: LAB_004f7823
    JNZ 0x004f79cc                      ; 004f7825
        ;   XREF to: 004f79cc (CONDITIONAL_JUMP)  ; LAB_004f79cc
    CMP EAX,EBP                         ; 004f782b
    JZ 0x004f79cc                       ; 004f782d
        ;   XREF to: 004f79cc (CONDITIONAL_JUMP)  ; LAB_004f79cc
    MOV EBP,EAX                         ; 004f7833
        ;   Label: LAB_004f7833
    TEST EAX,EAX                        ; 004f7835
    JZ 0x004f770e                       ; 004f7837
        ;   XREF to: 004f770e (CONDITIONAL_JUMP)  ; LAB_004f770e
    MOV EDX,dword ptr [ESP + 0xa0]      ; 004f783d
        ;   Label: LAB_004f783d
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004f7844
    CMP EAX,dword ptr [EDX + 0x4]       ; 004f784b
    JL 0x004f7894                       ; 004f784e
        ;   XREF to: 004f7894 (CONDITIONAL_JUMP)  ; LAB_004f7894
    MOV ESI,dword ptr [0x01d17ab4]      ; 004f7850 | DAT_01d17ab4
    MOV EBX,EAX                         ; 004f7856
    MOV ECX,EBP                         ; 004f7858
    MOV dword ptr [EDX],0xffffffff      ; 004f785a
    MOV EAX,0x1d17ab8                   ; 004f7860
    XOR EDX,EDX                         ; 004f7865
    TEST ESI,ESI                        ; 004f7867
    JLE 0x004f79eb                      ; 004f7869
        ;   XREF to: 004f79eb (CONDITIONAL_JUMP)  ; LAB_004f79eb
    MOV EDI,dword ptr [0x01d17ab4]      ; 004f786f | DAT_01d17ab4
    CMP EBX,dword ptr [EAX]             ; 004f7875 | DAT_01d17ab8 | DAT_01d17b08
        ;   Label: LAB_004f7875
    JNZ 0x004f79df                      ; 004f7877
        ;   XREF to: 004f79df (CONDITIONAL_JUMP)  ; LAB_004f79df
    CMP EAX,ECX                         ; 004f787d
    JZ 0x004f79df                       ; 004f787f
        ;   XREF to: 004f79df (CONDITIONAL_JUMP)  ; LAB_004f79df
    MOV dword ptr [ESP + 0xa0],EAX      ; 004f7885 | DAT_01d17ab8 | DAT_01d17b08
        ;   Label: LAB_004f7885
    TEST EAX,EAX                        ; 004f788c
    JZ 0x004f770e                       ; 004f788e
        ;   XREF to: 004f770e (CONDITIONAL_JUMP)  ; LAB_004f770e
    CMP dword ptr [0x01c38b40],0x0      ; 004f7894 | DAT_01c38b40
        ;   Label: LAB_004f7894
    JZ 0x004f7a0c                       ; 004f789b
        ;   XREF to: 004f7a0c (CONDITIONAL_JUMP)  ; LAB_004f7a0c
    CMP dword ptr [0x006141c0],0x20     ; 004f78a1 | DAT_006141c0
    JNZ 0x004f79f2                      ; 004f78a8
        ;   XREF to: 004f79f2 (CONDITIONAL_JUMP)  ; LAB_004f79f2
    MOV EDI,dword ptr [ESP + 0xa0]      ; 004f78ae
    MOV EBX,dword ptr [ESP + 0x9c]      ; 004f78b5
    MOV ESI,EBP                         ; 004f78bc
    CALL engine_special.cpp_FUN_0055c45c ; 004f78be
        ;   XREF to: 0055c45c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_0055c45c()
    MOV ECX,dword ptr [EBP + 0x8]       ; 004f78c3 | DAT_01d17ac0
        ;   Label: LAB_004f78c3
    MOV EAX,dword ptr [EBP + 0xc]       ; 004f78c6 | DAT_01d17ac4
    MOV EBX,dword ptr [EBP + 0x18]      ; 004f78c9 | DAT_01d17ad0
    MOV ESI,dword ptr [EBP + 0x20]      ; 004f78cc | DAT_01d17ad8
    MOV EDI,dword ptr [EBP + 0x28]      ; 004f78cf | DAT_01d17ae0
    ADD ECX,EAX                         ; 004f78d2
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004f78d4 | DAT_01d17ad4
    MOV dword ptr [EBP + 0x8],ECX       ; 004f78d7 | DAT_01d17ac0
    ADD EBX,EAX                         ; 004f78da
    MOV EAX,dword ptr [EBP + 0x24]      ; 004f78dc | DAT_01d17adc
    MOV dword ptr [EBP + 0x18],EBX      ; 004f78df | DAT_01d17ad0
    ADD ESI,EAX                         ; 004f78e2
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004f78e4 | DAT_01d17ae4
    MOV dword ptr [EBP + 0x20],ESI      ; 004f78e7 | DAT_01d17ad8
    ADD EDI,EAX                         ; 004f78ea
    MOV dword ptr [EBP + 0x28],EDI      ; 004f78ec | DAT_01d17ae0
    MOV EDX,dword ptr [EBP + 0x10]      ; 004f78ef | DAT_01d17ac8
    MOV ECX,dword ptr [EBP + 0x38]      ; 004f78f2
    MOV EBX,dword ptr [EBP + 0x40]      ; 004f78f5
    MOV ESI,dword ptr [EBP + 0x48]      ; 004f78f8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f78fb
    MOV EDI,dword ptr [EBP + 0x30]      ; 004f78fe
    ADD EDX,EAX                         ; 004f7901
    MOV EAX,dword ptr [EBP + 0x3c]      ; 004f7903
    MOV dword ptr [EBP + 0x10],EDX      ; 004f7906
    ADD ECX,EAX                         ; 004f7909
    MOV EAX,dword ptr [EBP + 0x44]      ; 004f790b
    MOV dword ptr [EBP + 0x38],ECX      ; 004f790e
    ADD EBX,EAX                         ; 004f7911
    MOV EAX,dword ptr [EBP + 0x4c]      ; 004f7913
    MOV dword ptr [EBP + 0x40],EBX      ; 004f7916
    ADD ESI,EAX                         ; 004f7919
    MOV EAX,dword ptr [EBP + 0x34]      ; 004f791b
    MOV dword ptr [EBP + 0x48],ESI      ; 004f791e
    ADD EDI,EAX                         ; 004f7921
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004f7923
    MOV dword ptr [EBP + 0x30],EDI      ; 004f792a
    MOV EDX,dword ptr [ESP + 0xa0]      ; 004f792d
    MOV EAX,dword ptr [EAX + 0xc]       ; 004f7934
    ADD dword ptr [EDX + 0x8],EAX       ; 004f7937
    MOV EBX,dword ptr [EDX + 0x18]      ; 004f793a
    MOV ESI,dword ptr [EDX + 0x20]      ; 004f793d
    MOV EDI,dword ptr [EDX + 0x28]      ; 004f7940
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004f7943
    MOV ECX,dword ptr [EDX + 0x10]      ; 004f7946
    ADD EBX,EAX                         ; 004f7949
    MOV EAX,dword ptr [EDX + 0x24]      ; 004f794b
    MOV dword ptr [EDX + 0x18],EBX      ; 004f794e
    ADD ESI,EAX                         ; 004f7951
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004f7953
    MOV dword ptr [EDX + 0x20],ESI      ; 004f7956
    ADD EDI,EAX                         ; 004f7959
    MOV EAX,dword ptr [EDX + 0x14]      ; 004f795b
    MOV dword ptr [EDX + 0x28],EDI      ; 004f795e
    ADD ECX,EAX                         ; 004f7961
    MOV dword ptr [EDX + 0x10],ECX      ; 004f7963
    MOV EBX,dword ptr [EDX + 0x38]      ; 004f7966
    MOV ESI,dword ptr [EDX + 0x40]      ; 004f7969
    MOV EDI,dword ptr [EDX + 0x48]      ; 004f796c
    MOV EAX,dword ptr [EDX + 0x3c]      ; 004f796f
    MOV ECX,dword ptr [EDX + 0x30]      ; 004f7972
    ADD EBX,EAX                         ; 004f7975
    MOV EAX,dword ptr [EDX + 0x44]      ; 004f7977
    MOV dword ptr [EDX + 0x38],EBX      ; 004f797a
    MOV EBX,dword ptr [ESP + 0x9c]      ; 004f797d
    ADD ESI,EAX                         ; 004f7984
    INC EBX                             ; 004f7986
    MOV EAX,dword ptr [EDX + 0x4c]      ; 004f7987
    MOV dword ptr [EDX + 0x40],ESI      ; 004f798a
    ADD EDI,EAX                         ; 004f798d
    MOV EAX,dword ptr [EDX + 0x34]      ; 004f798f
    MOV dword ptr [EDX + 0x48],EDI      ; 004f7992
    ADD ECX,EAX                         ; 004f7995
    MOV dword ptr [ESP + 0x9c],EBX      ; 004f7997
    MOV dword ptr [EDX + 0x30],ECX      ; 004f799e
    JMP 0x004f77ec                      ; 004f79a1
        ;   XREF to: 004f77ec (UNCONDITIONAL_JUMP)  ; LAB_004f77ec
    INC EDX                             ; 004f79a6
        ;   Label: LAB_004f79a6
    ADD EAX,0x50                        ; 004f79a7
    CMP EDX,EDI                         ; 004f79aa
    JL 0x004f7784                       ; 004f79ac
        ;   XREF to: 004f7784 (CONDITIONAL_JUMP)  ; LAB_004f7784
    XOR EAX,EAX                         ; 004f79b2
        ;   Label: LAB_004f79b2
    JMP 0x004f7794                      ; 004f79b4
        ;   XREF to: 004f7794 (UNCONDITIONAL_JUMP)  ; LAB_004f7794
    INC EDX                             ; 004f79b9
        ;   Label: LAB_004f79b9
    ADD EAX,0x50                        ; 004f79ba
    CMP EDX,EDI                         ; 004f79bd
    JL 0x004f77c1                       ; 004f79bf
        ;   XREF to: 004f77c1 (CONDITIONAL_JUMP)  ; LAB_004f77c1
    XOR EAX,EAX                         ; 004f79c5
        ;   Label: LAB_004f79c5
    JMP 0x004f77d1                      ; 004f79c7
        ;   XREF to: 004f77d1 (UNCONDITIONAL_JUMP)  ; LAB_004f77d1
    INC EDX                             ; 004f79cc
        ;   Label: LAB_004f79cc
    ADD EAX,0x50                        ; 004f79cd
    CMP EDX,ESI                         ; 004f79d0
    JL 0x004f7823                       ; 004f79d2
        ;   XREF to: 004f7823 (CONDITIONAL_JUMP)  ; LAB_004f7823
    XOR EAX,EAX                         ; 004f79d8
        ;   Label: LAB_004f79d8
    JMP 0x004f7833                      ; 004f79da
        ;   XREF to: 004f7833 (UNCONDITIONAL_JUMP)  ; LAB_004f7833
    INC EDX                             ; 004f79df
        ;   Label: LAB_004f79df
    ADD EAX,0x50                        ; 004f79e0
    CMP EDX,EDI                         ; 004f79e3
    JL 0x004f7875                       ; 004f79e5
        ;   XREF to: 004f7875 (CONDITIONAL_JUMP)  ; LAB_004f7875
    XOR EAX,EAX                         ; 004f79eb
        ;   Label: LAB_004f79eb
    JMP 0x004f7885                      ; 004f79ed
        ;   XREF to: 004f7885 (UNCONDITIONAL_JUMP)  ; LAB_004f7885
    MOV EDI,dword ptr [ESP + 0xa0]      ; 004f79f2
        ;   Label: LAB_004f79f2
    MOV EBX,dword ptr [ESP + 0x9c]      ; 004f79f9
    MOV ESI,EBP                         ; 004f7a00
    CALL engine_special.cpp_FUN_0055ca23 ; 004f7a02
        ;   XREF to: 0055ca23 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_0055ca23()
    JMP 0x004f78c3                      ; 004f7a07
        ;   XREF to: 004f78c3 (UNCONDITIONAL_JUMP)  ; LAB_004f78c3
    CMP dword ptr [0x006141c0],0x20     ; 004f7a0c | DAT_006141c0
        ;   Label: LAB_004f7a0c
    JNZ 0x004f7a2f                      ; 004f7a13
        ;   XREF to: 004f7a2f (CONDITIONAL_JUMP)  ; LAB_004f7a2f
    MOV EDI,dword ptr [ESP + 0xa0]      ; 004f7a15
    MOV EBX,dword ptr [ESP + 0x9c]      ; 004f7a1c
    MOV ESI,EBP                         ; 004f7a23
    CALL engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3 ; 004f7a25
        ;   XREF to: 0055d0b3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3(SSoftwareEdge * left_vertex, SSoftwareEdge * right_vertex, int scanline_y)
    JMP 0x004f78c3                      ; 004f7a2a
        ;   XREF to: 004f78c3 (UNCONDITIONAL_JUMP)  ; LAB_004f78c3
    MOV EDI,dword ptr [ESP + 0xa0]      ; 004f7a2f
        ;   Label: LAB_004f7a2f
    MOV EBX,dword ptr [ESP + 0x9c]      ; 004f7a36
    MOV ESI,EBP                         ; 004f7a3d
    CALL engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9 ; 004f7a3f
        ;   XREF to: 0055d2e9 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9(SSoftwareEdge * left_vertex, SSoftwareEdge * right_vertex, int scanline_y)
    JMP 0x004f78c3                      ; 004f7a44
        ;   XREF to: 004f78c3 (UNCONDITIONAL_JUMP)  ; LAB_004f78c3

