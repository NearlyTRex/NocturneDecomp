; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_drawLineAAWithBlending_FUN_0042f330(int x0,int y0,int x1,int y1,int base_color,uchar blend_color,int blend_mode)
;
; Parameters:
; int              Stack[0x4]:4   x0
; int              Stack[0x8]:4   y0
; int              Stack[0xc]:4   x1
; int              Stack[0x10]:4   y1
; int              Stack[0x14]:4   base_color
; uchar            Stack[0x18]:1   blend_color
; int              Stack[0x1c]:4   blend_mode
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined8       Stack[-0x4c]:8  local_4c
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
; undefined1       Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[2]:
;   cockpit_ckptutil.c_drawLineListFromBitmap_FUN_0042f260 at 0042f307
;   cockpit_ckptutil.c_renderEdgeArrayWithBufferLookup_FUN_0042f190 at 0042f235
;
; Referenced Globals:
;   undefined4 DAT_00766c6c
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042f8c0
;   cockpit_ckptutil.c_putPixel_FUN_00430140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f330
        ;   Label: cockpit_ckptutil.c_drawLineAAWithBlending_FUN_0042f330
    PUSH ESI                            ; 0042f331
    PUSH EDI                            ; 0042f332
    PUSH EBP                            ; 0042f333
    MOV EBP,ESP                         ; 0042f334
    SUB ESP,0x3c                        ; 0042f336
    AND ESP,0xfffffff8                  ; 0042f339
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042f33c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0042f33f
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0042f342
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042f345
    MOV EDX,dword ptr [EBP + 0x24]      ; 0042f348
    MOV dword ptr [ESP],0x3b800000      ; 0042f34b
    CMP ESI,EAX                         ; 0042f352
    JG 0x0042f3d0                       ; 0042f354
        ;   XREF to: 0042f3d0 (CONDITIONAL_JUMP)  ; LAB_0042f3d0
    CMP dword ptr [0x00766c6c],0x0      ; 0042f35a | DAT_00766c6c
    JNZ 0x0042f39f                      ; 0042f361
        ;   XREF to: 0042f39f (CONDITIONAL_JUMP)  ; LAB_0042f39f
    MOV ECX,dword ptr [0x01c00c58]      ; 0042f363 | g_ClipLeft
    CMP EDI,ECX                         ; 0042f369
    JGE 0x0042f375                      ; 0042f36b
        ;   XREF to: 0042f375 (CONDITIONAL_JUMP)  ; LAB_0042f375
    CMP EBX,ECX                         ; 0042f36d
    JL 0x0042f3d0                       ; 0042f36f
        ;   XREF to: 0042f3d0 (CONDITIONAL_JUMP)  ; LAB_0042f3d0
    MOV ECX,dword ptr [0x01c00c60]      ; 0042f375 | g_ClipRight
        ;   Label: LAB_0042f375
    CMP EDI,ECX                         ; 0042f37b
    JLE 0x0042f383                      ; 0042f37d
        ;   XREF to: 0042f383 (CONDITIONAL_JUMP)  ; LAB_0042f383
    CMP EBX,ECX                         ; 0042f37f
    JG 0x0042f3d0                       ; 0042f381
        ;   XREF to: 0042f3d0 (CONDITIONAL_JUMP)  ; LAB_0042f3d0
    MOV ECX,dword ptr [0x01c00c5c]      ; 0042f383 | g_ClipTop
        ;   Label: LAB_0042f383
    CMP ESI,ECX                         ; 0042f389
    JGE 0x0042f391                      ; 0042f38b
        ;   XREF to: 0042f391 (CONDITIONAL_JUMP)  ; LAB_0042f391
    CMP EAX,ECX                         ; 0042f38d
    JL 0x0042f3d0                       ; 0042f38f
        ;   XREF to: 0042f3d0 (CONDITIONAL_JUMP)  ; LAB_0042f3d0
    MOV ECX,dword ptr [0x01c00c64]      ; 0042f391 | g_ClipBottom
        ;   Label: LAB_0042f391
    CMP ESI,ECX                         ; 0042f397
    JLE 0x0042f39f                      ; 0042f399
        ;   XREF to: 0042f39f (CONDITIONAL_JUMP)  ; LAB_0042f39f
    CMP EAX,ECX                         ; 0042f39b
    JG 0x0042f3d0                       ; 0042f39d
        ;   XREF to: 0042f3d0 (CONDITIONAL_JUMP)  ; LAB_0042f3d0
    SUB EBX,EDI                         ; 0042f39f
        ;   Label: LAB_0042f39f
    MOV dword ptr [ESP + 0x2c],EBX      ; 0042f3a1
    TEST EBX,EBX                        ; 0042f3a5
    JL 0x0042f3d7                       ; 0042f3a7
        ;   XREF to: 0042f3d7 (CONDITIONAL_JUMP)  ; LAB_0042f3d7
    MOV dword ptr [ESP + 0x24],0x1      ; 0042f3a9
    SUB EAX,ESI                         ; 0042f3b1
        ;   Label: LAB_0042f3b1
    MOV dword ptr [ESP + 0x28],EAX      ; 0042f3b3
    JNZ 0x0042f3fd                      ; 0042f3b7
        ;   XREF to: 0042f3fd (CONDITIONAL_JUMP)  ; LAB_0042f3fd
    MOV BL,DL                           ; 0042f3b9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042f3bb
        ;   Label: LAB_0042f3bb
    DEC EDX                             ; 0042f3bf
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042f3c0
    JNZ 0x0042f3e8                      ; 0042f3c4
        ;   XREF to: 0042f3e8 (CONDITIONAL_JUMP)  ; LAB_0042f3e8
    LEA EAX,[EAX]                       ; 0042f3c6
    LEA EDX,[EDX]                       ; 0042f3cc
    MOV ESP,EBP                         ; 0042f3d0
        ;   Label: LAB_0042f3d0
    POP EBP                             ; 0042f3d2
    POP EDI                             ; 0042f3d3
    POP ESI                             ; 0042f3d4
    POP EBX                             ; 0042f3d5
    RET                                 ; 0042f3d6
    NEG EBX                             ; 0042f3d7
        ;   Label: LAB_0042f3d7
    MOV ECX,0xffffffff                  ; 0042f3d9
    MOV dword ptr [ESP + 0x2c],EBX      ; 0042f3de
    MOV dword ptr [ESP + 0x24],ECX      ; 0042f3e2
    JMP 0x0042f3b1                      ; 0042f3e6
        ;   XREF to: 0042f3b1 (UNCONDITIONAL_JUMP)  ; LAB_0042f3b1
    ADD EDI,dword ptr [ESP + 0x24]      ; 0042f3e8
        ;   Label: LAB_0042f3e8
    XOR EAX,EAX                         ; 0042f3ec
    MOV AL,BL                           ; 0042f3ee
    PUSH EAX                            ; 0042f3f0
    PUSH ESI                            ; 0042f3f1
    PUSH EDI                            ; 0042f3f2
    CALL cockpit_ckptutil.c_putPixel_FUN_00430140 ; 0042f3f3
        ;   XREF to: 00430140 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00430140(int x, int y, int color)
    ADD ESP,0xc                         ; 0042f3f8
    JMP 0x0042f3bb                      ; 0042f3fb
        ;   XREF to: 0042f3bb (UNCONDITIONAL_JUMP)  ; LAB_0042f3bb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042f3fd
        ;   Label: LAB_0042f3fd
    TEST EAX,EAX                        ; 0042f401
    JNZ 0x0042f42c                      ; 0042f403
        ;   XREF to: 0042f42c (CONDITIONAL_JUMP)  ; LAB_0042f42c
    MOV BL,DL                           ; 0042f405
    XOR EAX,EAX                         ; 0042f407
        ;   Label: LAB_0042f407
    MOV AL,BL                           ; 0042f409
    PUSH EAX                            ; 0042f40b
    INC ESI                             ; 0042f40c
    PUSH ESI                            ; 0042f40d
    PUSH EDI                            ; 0042f40e
    CALL cockpit_ckptutil.c_putPixel_FUN_00430140 ; 0042f40f
        ;   XREF to: 00430140 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00430140(int x, int y, int color)
    ADD ESP,0xc                         ; 0042f414
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042f417
    DEC ECX                             ; 0042f41b
    MOV dword ptr [ESP + 0x28],ECX      ; 0042f41c
    CMP ECX,0x1                         ; 0042f420
    JNZ 0x0042f407                      ; 0042f423
        ;   XREF to: 0042f407 (CONDITIONAL_JUMP)  ; LAB_0042f407
    MOV ESP,EBP                         ; 0042f425
    POP EBP                             ; 0042f427
    POP EDI                             ; 0042f428
    POP ESI                             ; 0042f429
    POP EBX                             ; 0042f42a
    RET                                 ; 0042f42b
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042f42c
        ;   Label: LAB_0042f42c
    XOR EBX,EBX                         ; 0042f430
    CMP EAX,ECX                         ; 0042f432
    JLE 0x0042f4fa                      ; 0042f434
        ;   XREF to: 0042f4fa (CONDITIONAL_JUMP)  ; LAB_0042f4fa
    CMP dword ptr [EBP + 0x2c],0x0      ; 0042f43a
    JNZ 0x0042f4bd                      ; 0042f43e
        ;   XREF to: 0042f4bd (CONDITIONAL_JUMP)  ; LAB_0042f4bd
    MOV byte ptr [ESP + 0x38],DL        ; 0042f444
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042f448
        ;   Label: LAB_0042f448
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0042f44c
    XOR EDX,EDX                         ; 0042f450
    SHL EAX,0x10                        ; 0042f452
    DIV ECX                             ; 0042f455
    MOV dword ptr [ESP + 0x20],EAX      ; 0042f457
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0042f45b
        ;   Label: LAB_0042f45b
    DEC ECX                             ; 0042f45f
    MOV dword ptr [ESP + 0x2c],ECX      ; 0042f460
    JZ 0x0042f3d0                       ; 0042f464
        ;   XREF to: 0042f3d0 (CONDITIONAL_JUMP)  ; LAB_0042f3d0
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042f46a
    MOV EAX,EBX                         ; 0042f46e
    ADD EBX,EDX                         ; 0042f470
    AND EBX,0xffff                      ; 0042f472
    CMP EBX,EAX                         ; 0042f478
    JA 0x0042f47d                       ; 0042f47a
        ;   XREF to: 0042f47d (CONDITIONAL_JUMP)  ; LAB_0042f47d
    INC ESI                             ; 0042f47c
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042f47d
        ;   Label: LAB_0042f47d
    MOV EAX,EBX                         ; 0042f481
    MOV EDX,dword ptr [EBP + 0x2c]      ; 0042f483
    SHR EAX,0x8                         ; 0042f486
    ADD EDI,ECX                         ; 0042f489
    TEST EDX,EDX                        ; 0042f48b
    JNZ 0x0042f4c6                      ; 0042f48d
        ;   XREF to: 0042f4c6 (CONDITIONAL_JUMP)  ; LAB_0042f4c6
    MOV dword ptr [ESP + 0x8],EDX       ; 0042f48f
    MOV dword ptr [ESP + 0x4],EAX       ; 0042f493
    FILD qword ptr [ESP + 0x4]          ; 0042f497
    FLD1                                ; 0042f49b
    XOR EAX,EAX                         ; 0042f49d
    FADDP                               ; 0042f49f
    MOV AL,byte ptr [ESP + 0x38]        ; 0042f4a1
    FMUL float ptr [ESP]                ; 0042f4a5
    PUSH EAX                            ; 0042f4a8
    FSTP float ptr [ESP + 0x10]         ; 0042f4a9
    PUSH dword ptr [ESP + 0x10]         ; 0042f4ad
    PUSH ESI                            ; 0042f4b1
    PUSH EDI                            ; 0042f4b2
    CALL cockpit_ckptutil.c_FUN_0042f8c0 ; 0042f4b3
        ;   XREF to: 0042f8c0 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0042f8c0()
    ADD ESP,0x10                        ; 0042f4b8
    JMP 0x0042f45b                      ; 0042f4bb
        ;   XREF to: 0042f45b (UNCONDITIONAL_JUMP)  ; LAB_0042f45b
    MOV AL,byte ptr [EBP + 0x28]        ; 0042f4bd
        ;   Label: LAB_0042f4bd
    MOV byte ptr [ESP + 0x38],AL        ; 0042f4c0
    JMP 0x0042f448                      ; 0042f4c4
        ;   XREF to: 0042f448 (UNCONDITIONAL_JUMP)  ; LAB_0042f448
    XOR ECX,ECX                         ; 0042f4c6
        ;   Label: LAB_0042f4c6
    XOR AL,0xff                         ; 0042f4c8
    MOV dword ptr [ESP + 0x8],ECX       ; 0042f4ca
    MOV dword ptr [ESP + 0x4],EAX       ; 0042f4ce
    XOR EAX,EAX                         ; 0042f4d2
    FILD qword ptr [ESP + 0x4]          ; 0042f4d4
    MOV AL,byte ptr [ESP + 0x38]        ; 0042f4d8
    FMUL float ptr [ESP]                ; 0042f4dc
    PUSH EAX                            ; 0042f4df
    FSTP float ptr [ESP + 0x34]         ; 0042f4e0
    LEA EAX,[ESI + 0x1]                 ; 0042f4e4
    PUSH dword ptr [ESP + 0x34]         ; 0042f4e7
    PUSH EAX                            ; 0042f4eb
    PUSH EDI                            ; 0042f4ec
    CALL cockpit_ckptutil.c_FUN_0042f8c0 ; 0042f4ed
        ;   XREF to: 0042f8c0 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0042f8c0()
    ADD ESP,0x10                        ; 0042f4f2
    JMP 0x0042f45b                      ; 0042f4f5
        ;   XREF to: 0042f45b (UNCONDITIONAL_JUMP)  ; LAB_0042f45b
    CMP dword ptr [EBP + 0x2c],0x0      ; 0042f4fa
        ;   Label: LAB_0042f4fa
    JNZ 0x0042f59a                      ; 0042f4fe
        ;   XREF to: 0042f59a (CONDITIONAL_JUMP)  ; LAB_0042f59a
    CMP dword ptr [ESP + 0x24],0x1      ; 0042f504
    JNZ 0x0042f59a                      ; 0042f509
        ;   XREF to: 0042f59a (CONDITIONAL_JUMP)  ; LAB_0042f59a
    MOV EAX,0x1                         ; 0042f50f
        ;   Label: LAB_0042f50f
    MOV dword ptr [ESP + 0x18],EAX      ; 0042f514
        ;   Label: LAB_0042f514
    TEST EAX,EAX                        ; 0042f518
    JZ 0x0042f5b2                       ; 0042f51a
        ;   XREF to: 0042f5b2 (CONDITIONAL_JUMP)  ; LAB_0042f5b2
    MOV byte ptr [ESP + 0x34],DL        ; 0042f520
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042f524
        ;   Label: LAB_0042f524
    MOV ECX,dword ptr [ESP + 0x28]      ; 0042f528
    XOR EDX,EDX                         ; 0042f52c
    SHL EAX,0x10                        ; 0042f52e
    DIV ECX                             ; 0042f531
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042f533
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042f537
        ;   Label: LAB_0042f537
    DEC EAX                             ; 0042f53b
    MOV dword ptr [ESP + 0x28],EAX      ; 0042f53c
    JZ 0x0042f3d0                       ; 0042f540
        ;   XREF to: 0042f3d0 (CONDITIONAL_JUMP)  ; LAB_0042f3d0
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0042f546
    MOV EAX,EBX                         ; 0042f54a
    ADD EBX,ECX                         ; 0042f54c
    AND EBX,0xffff                      ; 0042f54e
    CMP EBX,EAX                         ; 0042f554
    JA 0x0042f55c                       ; 0042f556
        ;   XREF to: 0042f55c (CONDITIONAL_JUMP)  ; LAB_0042f55c
    ADD EDI,dword ptr [ESP + 0x24]      ; 0042f558
    MOV EDX,dword ptr [ESP + 0x18]      ; 0042f55c
        ;   Label: LAB_0042f55c
    MOV EAX,EBX                         ; 0042f560
    INC ESI                             ; 0042f562
    SHR EAX,0x8                         ; 0042f563
    TEST EDX,EDX                        ; 0042f566
    JZ 0x0042f5be                       ; 0042f568
        ;   XREF to: 0042f5be (CONDITIONAL_JUMP)  ; LAB_0042f5be
    XOR EDX,EDX                         ; 0042f56a
    MOV dword ptr [ESP + 0x4],EAX       ; 0042f56c
    MOV dword ptr [ESP + 0x8],EDX       ; 0042f570
    XOR EAX,EAX                         ; 0042f574
    FILD qword ptr [ESP + 0x4]          ; 0042f576
    FLD1                                ; 0042f57a
    FADDP                               ; 0042f57c
    MOV AL,byte ptr [ESP + 0x34]        ; 0042f57e
    FMUL float ptr [ESP]                ; 0042f582
    PUSH EAX                            ; 0042f585
    FSTP float ptr [ESP + 0x14]         ; 0042f586
    PUSH dword ptr [ESP + 0x14]         ; 0042f58a
    PUSH ESI                            ; 0042f58e
    PUSH EDI                            ; 0042f58f
    CALL cockpit_ckptutil.c_FUN_0042f8c0 ; 0042f590
        ;   XREF to: 0042f8c0 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0042f8c0()
    ADD ESP,0x10                        ; 0042f595
    JMP 0x0042f537                      ; 0042f598
        ;   XREF to: 0042f537 (UNCONDITIONAL_JUMP)  ; LAB_0042f537
    CMP dword ptr [EBP + 0x2c],0x1      ; 0042f59a
        ;   Label: LAB_0042f59a
    JNZ 0x0042f5ab                      ; 0042f59e
        ;   XREF to: 0042f5ab (CONDITIONAL_JUMP)  ; LAB_0042f5ab
    CMP dword ptr [ESP + 0x24],-0x1     ; 0042f5a0
    JZ 0x0042f50f                       ; 0042f5a5
        ;   XREF to: 0042f50f (CONDITIONAL_JUMP)  ; LAB_0042f50f
    XOR EAX,EAX                         ; 0042f5ab
        ;   Label: LAB_0042f5ab
    JMP 0x0042f514                      ; 0042f5ad
        ;   XREF to: 0042f514 (UNCONDITIONAL_JUMP)  ; LAB_0042f514
    MOV AL,byte ptr [EBP + 0x28]        ; 0042f5b2
        ;   Label: LAB_0042f5b2
    MOV byte ptr [ESP + 0x34],AL        ; 0042f5b5
    JMP 0x0042f524                      ; 0042f5b9
        ;   XREF to: 0042f524 (UNCONDITIONAL_JUMP)  ; LAB_0042f524
    XOR AL,0xff                         ; 0042f5be
        ;   Label: LAB_0042f5be
    MOV dword ptr [ESP + 0x8],EDX       ; 0042f5c0
    MOV dword ptr [ESP + 0x4],EAX       ; 0042f5c4
    XOR EAX,EAX                         ; 0042f5c8
    FILD qword ptr [ESP + 0x4]          ; 0042f5ca
    MOV AL,byte ptr [ESP + 0x34]        ; 0042f5ce
    FMUL float ptr [ESP]                ; 0042f5d2
    PUSH EAX                            ; 0042f5d5
    FSTP float ptr [ESP + 0x18]         ; 0042f5d6
    PUSH dword ptr [ESP + 0x18]         ; 0042f5da
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042f5de
    PUSH ESI                            ; 0042f5e2
    ADD EAX,EDI                         ; 0042f5e3
    PUSH EAX                            ; 0042f5e5
    CALL cockpit_ckptutil.c_FUN_0042f8c0 ; 0042f5e6
        ;   XREF to: 0042f8c0 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0042f8c0()
    ADD ESP,0x10                        ; 0042f5eb
    JMP 0x0042f537                      ; 0042f5ee
        ;   XREF to: 0042f537 (UNCONDITIONAL_JUMP)  ; LAB_0042f537

