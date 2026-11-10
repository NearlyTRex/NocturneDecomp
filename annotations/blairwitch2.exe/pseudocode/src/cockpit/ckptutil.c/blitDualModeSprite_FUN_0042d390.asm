; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitDualModeSprite_FUN_0042d390(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   span_data
; int              Stack[0xc]:4   dest_x
; int              Stack[0x10]:4   dest_y
; int              Stack[0x14]:4   width
; int              Stack[0x18]:4   height
;
; XREF[1]:
;   cockpit_ckptutil.c_blitFullScreen_FUN_0042d81c at 0042d83e
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042c410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d390
        ;   Label: cockpit_ckptutil.c_blitDualModeSprite_FUN_0042d390
    PUSH ESI                            ; 0042d391
    PUSH EDI                            ; 0042d392
    PUSH EBP                            ; 0042d393
    SUB ESP,0x28                        ; 0042d394
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0042d397
    MOV EDX,dword ptr [0x01c2a38c]      ; 0042d39b | DAT_01c2a38c
    MOV EAX,[0x01c2a390]                ; 0042d3a1 | DAT_01c2a390
    SUB EAX,EDX                         ; 0042d3a6
    MOV dword ptr [ESP + 0xc],EAX       ; 0042d3a8
    TEST EDI,EDI                        ; 0042d3ac
    JNZ 0x0042d3b8                      ; 0042d3ae
        ;   XREF to: 0042d3b8 (CONDITIONAL_JUMP)  ; LAB_0042d3b8
    ADD ESP,0x28                        ; 0042d3b0
        ;   Label: LAB_0042d3b0
    POP EBP                             ; 0042d3b3
    POP EDI                             ; 0042d3b4
    POP ESI                             ; 0042d3b5
    POP EBX                             ; 0042d3b6
    RET                                 ; 0042d3b7
    CALL cockpit_ckptutil.c_FUN_0042c410 ; 0042d3b8
        ;   XREF to: 0042c410 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0042c410()
        ;   Label: LAB_0042d3b8
    MOV EDX,dword ptr [ESP + 0x50]      ; 0042d3bd
    MOV ESI,dword ptr [ESP + 0x48]      ; 0042d3c1
    MOV EBX,EDX                         ; 0042d3c5
    MOV ECX,dword ptr [0x006141c0]      ; 0042d3c7 | DAT_006141c0
    SHL EBX,0x5                         ; 0042d3cd
    MOV EBP,EAX                         ; 0042d3d0
    ADD EBX,EDX                         ; 0042d3d2
    SHL ESI,0x2                         ; 0042d3d4
    SHL EBX,0x2                         ; 0042d3d7
    CMP ECX,0x8                         ; 0042d3da
    JNZ 0x0042d489                      ; 0042d3dd
        ;   XREF to: 0042d489 (CONDITIONAL_JUMP)  ; LAB_0042d489
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042d3e3
    MOV EAX,dword ptr [ESI + 0x1c2a38c] ; 0042d3e7
    ADD EDX,EAX                         ; 0042d3ed
    MOV EAX,dword ptr [ESP + 0x50]      ; 0042d3ef
    MOV dword ptr [ESP + 0x20],EDX      ; 0042d3f3
    TEST EAX,EAX                        ; 0042d3f7
    JLE 0x0042d3b0                      ; 0042d3f9
        ;   XREF to: 0042d3b0 (CONDITIONAL_JUMP)  ; LAB_0042d3b0
    XOR ECX,ECX                         ; 0042d3fb
    MOV dword ptr [ESP + 0x8],EBX       ; 0042d3fd
    MOV dword ptr [ESP + 0x10],ECX      ; 0042d401
    CMP dword ptr [ESP + 0x40],0x0      ; 0042d405
        ;   Label: LAB_0042d405
    JZ 0x0042d477                       ; 0042d40a
        ;   XREF to: 0042d477 (CONDITIONAL_JUMP)  ; LAB_0042d477
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042d40c
    XOR ESI,ESI                         ; 0042d410
    XOR EBX,EBX                         ; 0042d412
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042d414
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042d418
        ;   Label: LAB_0042d418
    ADD EAX,dword ptr [ESP + 0x1c]      ; 0042d41c
    CMP EBX,dword ptr [EAX]             ; 0042d420
    JGE 0x0042d447                      ; 0042d422
        ;   XREF to: 0042d447 (CONDITIONAL_JUMP)  ; LAB_0042d447
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x44] ; 0042d424
    PUSH EDX                            ; 0042d428
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0042d429
    ADD EDX,EDI                         ; 0042d42d
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0042d42f
    PUSH EDX                            ; 0042d433
    MOV EDX,dword ptr [ESP + 0x28]      ; 0042d434
    LEA EAX,[EDX + ECX*0x1]             ; 0042d438
    PUSH EAX                            ; 0042d43b
    ADD ESI,0x4                         ; 0042d43c
    INC EBX                             ; 0042d43f
    CALL EBP                            ; 0042d440
    ADD ESP,0xc                         ; 0042d442
    JMP 0x0042d418                      ; 0042d445
        ;   XREF to: 0042d418 (UNCONDITIONAL_JUMP)  ; LAB_0042d418
    MOV EBX,dword ptr [ESP + 0x10]      ; 0042d447
        ;   Label: LAB_0042d447
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042d44b
    MOV ESI,dword ptr [ESP + 0x20]      ; 0042d44f
    MOV EDX,dword ptr [ESP + 0x8]       ; 0042d453
    ADD EBX,0x84                        ; 0042d457
    ADD ESI,EAX                         ; 0042d45d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042d45f
    MOV dword ptr [ESP + 0x10],EBX      ; 0042d463
    MOV dword ptr [ESP + 0x20],ESI      ; 0042d467
    ADD EDI,EAX                         ; 0042d46b
    CMP EBX,EDX                         ; 0042d46d
    JGE 0x0042d3b0                      ; 0042d46f
        ;   XREF to: 0042d3b0 (CONDITIONAL_JUMP)  ; LAB_0042d3b0
    JMP 0x0042d405                      ; 0042d475
        ;   XREF to: 0042d405 (UNCONDITIONAL_JUMP)  ; LAB_0042d405
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0042d477
        ;   Label: LAB_0042d477
    PUSH ESI                            ; 0042d47b
    PUSH EDI                            ; 0042d47c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042d47d
    PUSH EAX                            ; 0042d481
    CALL EBP                            ; 0042d482
    ADD ESP,0xc                         ; 0042d484
    JMP 0x0042d447                      ; 0042d487
        ;   XREF to: 0042d447 (UNCONDITIONAL_JUMP)  ; LAB_0042d447
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042d489
        ;   Label: LAB_0042d489
    MOV EAX,dword ptr [ESI + 0x1c2a38c] ; 0042d48d
    ADD EDX,EDX                         ; 0042d493
    ADD EAX,EDX                         ; 0042d495
    MOV dword ptr [ESP + 0x24],EAX      ; 0042d497
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042d49b
    MOV EDX,EAX                         ; 0042d49f
    SAR EDX,0x1f                        ; 0042d4a1
    SUB EAX,EDX                         ; 0042d4a4
    SAR EAX,0x1                         ; 0042d4a6
    MOV ESI,dword ptr [ESP + 0x50]      ; 0042d4a8
    MOV dword ptr [ESP + 0xc],EAX       ; 0042d4ac
    TEST ESI,ESI                        ; 0042d4b0
    JLE 0x0042d3b0                      ; 0042d4b2
        ;   XREF to: 0042d3b0 (CONDITIONAL_JUMP)  ; LAB_0042d3b0
    ADD EAX,EAX                         ; 0042d4b8
    MOV dword ptr [ESP],EAX             ; 0042d4ba
    XOR EAX,EAX                         ; 0042d4bd
    MOV dword ptr [ESP + 0x4],EBX       ; 0042d4bf
    MOV dword ptr [ESP + 0x14],EAX      ; 0042d4c3
    CMP dword ptr [ESP + 0x40],0x0      ; 0042d4c7
        ;   Label: LAB_0042d4c7
    JZ 0x0042d539                       ; 0042d4cc
        ;   XREF to: 0042d539 (CONDITIONAL_JUMP)  ; LAB_0042d539
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042d4ce
    XOR ESI,ESI                         ; 0042d4d2
    XOR EBX,EBX                         ; 0042d4d4
    MOV dword ptr [ESP + 0x18],EAX      ; 0042d4d6
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042d4da
        ;   Label: LAB_0042d4da
    ADD EAX,dword ptr [ESP + 0x18]      ; 0042d4de
    CMP EBX,dword ptr [EAX]             ; 0042d4e2
    JGE 0x0042d50a                      ; 0042d4e4
        ;   XREF to: 0042d50a (CONDITIONAL_JUMP)  ; LAB_0042d50a
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x44] ; 0042d4e6
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042d4ea
    PUSH EDX                            ; 0042d4ee
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0042d4ef
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0042d4f3
    ADD EDX,EDI                         ; 0042d4f7
    ADD EAX,EAX                         ; 0042d4f9
    PUSH EDX                            ; 0042d4fb
    ADD EAX,ECX                         ; 0042d4fc
    PUSH EAX                            ; 0042d4fe
    ADD ESI,0x4                         ; 0042d4ff
    INC EBX                             ; 0042d502
    CALL EBP                            ; 0042d503
    ADD ESP,0xc                         ; 0042d505
    JMP 0x0042d4da                      ; 0042d508
        ;   XREF to: 0042d4da (UNCONDITIONAL_JUMP)  ; LAB_0042d4da
    MOV EDX,dword ptr [ESP + 0x14]      ; 0042d50a
        ;   Label: LAB_0042d50a
    MOV EAX,dword ptr [ESP]             ; 0042d50e
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042d511
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0042d515
    MOV ESI,dword ptr [ESP + 0x4]       ; 0042d519
    ADD EDX,0x84                        ; 0042d51d
    ADD ECX,EAX                         ; 0042d523
    ADD EDI,EBX                         ; 0042d525
    MOV dword ptr [ESP + 0x14],EDX      ; 0042d527
    MOV dword ptr [ESP + 0x24],ECX      ; 0042d52b
    CMP EDX,ESI                         ; 0042d52f
    JGE 0x0042d3b0                      ; 0042d531
        ;   XREF to: 0042d3b0 (CONDITIONAL_JUMP)  ; LAB_0042d3b0
    JMP 0x0042d4c7                      ; 0042d537
        ;   XREF to: 0042d4c7 (UNCONDITIONAL_JUMP)  ; LAB_0042d4c7
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0042d539
        ;   Label: LAB_0042d539
    PUSH ECX                            ; 0042d53d
    PUSH EDI                            ; 0042d53e
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0042d53f
    PUSH EBX                            ; 0042d543
    CALL EBP                            ; 0042d544
    ADD ESP,0xc                         ; 0042d546
    JMP 0x0042d50a                      ; 0042d549
        ;   XREF to: 0042d50a (UNCONDITIONAL_JUMP)  ; LAB_0042d50a

