; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044c310(int *param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x10c]:1  local_10c
;
; Referenced Globals:
;   undefined4 s_movscrn.raw_0057c06c+1
;   string s_movscrn.raw_0057c079
;   string s_%s.txt_0057c085
;   undefined4 DAT_0057c08c
;   string s_..\\core\\dfilter.cpp_0057c08f
;   string s_Can't_open_movie_%s.txt_0057c0a3
;   undefined4 DAT_0057c0bb
;   string s_%s.mov_0057c0bf
;   undefined4 DAT_0057c0c6
;   string s_..\\core\\dfilter.cpp_0057c0c9
;   string s_Can't_open_movie_%s.mov_0057c0dd
;   undefined4 DAT_005ad54c
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_0044be60
;   FUN_0044bf90
;   FUN_0044c2f0
;   FUN_00456a60
;   FUN_004c8440
;   FUN_00563350
;   FUN_00563380
;   FUN_005635b0
;   FUN_005636d0
;   FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c310
        ;   Label: FUN_0044c310
    PUSH ESI                            ; 0044c311
    PUSH EBP                            ; 0044c312
    SUB ESP,0x100                       ; 0044c313
    MOV ESI,dword ptr [ESP + 0x110]     ; 0044c319
    MOV EBX,dword ptr [ESP + 0x114]     ; 0044c320
    PUSH ESI                            ; 0044c327
    CALL FUN_0044c2f0                   ; 0044c328
        ;   XREF to: 0044c2f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044c2f0()
    ADD ESP,0x4                         ; 0044c32d
    TEST EBX,EBX                        ; 0044c330
    JZ 0x0044c431                       ; 0044c332
        ;   XREF to: 0044c431 (CONDITIONAL_JUMP)  ; LAB_0044c431
    PUSH EDI                            ; 0044c338
    PUSH EBX                            ; 0044c339
    PUSH 0x57c085                       ; 0044c33a | = "%s.txt"
    LEA EAX,[ESP + 0xc]                 ; 0044c33f
    PUSH EAX                            ; 0044c343
    CALL FUN_00563c90                   ; 0044c344
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 0044c349
    PUSH 0x57c08c                       ; 0044c34c | DAT_0057c08c
    LEA EAX,[ESP + 0x8]                 ; 0044c351
    PUSH EAX                            ; 0044c355
    PUSH EBX                            ; 0044c356
    CALL FUN_00456a60                   ; 0044c357
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00456a60()
    ADD ESP,0xc                         ; 0044c35c
    MOV EDI,EAX                         ; 0044c35f
    TEST EAX,EAX                        ; 0044c361
    JNZ 0x0044c389                      ; 0044c363
        ;   XREF to: 0044c389 (CONDITIONAL_JUMP)  ; LAB_0044c389
    PUSH EBX                            ; 0044c365
    MOV EDX,0x57c08f                    ; 0044c366 | = "..\\core\\dfilter.cpp"
    MOV ECX,0x15a                       ; 0044c36b
    PUSH 0x57c0a3                       ; 0044c370 | = "Can't open movie %s.txt"
    MOV dword ptr [0x01cc4800],EDX      ; 0044c375 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0044c37b | DAT_01cc4804
    CALL FUN_004c8440                   ; 0044c381
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0044c386
    PUSH ESI                            ; 0044c389
        ;   Label: LAB_0044c389
    PUSH 0x57c0bb                       ; 0044c38a | DAT_0057c0bb
    PUSH EDI                            ; 0044c38f
    CALL FUN_00563350                   ; 0044c390
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined FUN_00563350()
    ADD ESP,0xc                         ; 0044c395
    PUSH EDI                            ; 0044c398
    CALL FUN_00563380                   ; 0044c399
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined FUN_00563380()
    MOV EAX,dword ptr [ESI]             ; 0044c39e
    ADD ESP,0x4                         ; 0044c3a0
    SHL EAX,0xd                         ; 0044c3a3
    PUSH EAX                            ; 0044c3a6
    CALL FUN_005635b0                   ; 0044c3a7
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005635b0()
    ADD ESP,0x4                         ; 0044c3ac
    PUSH EBX                            ; 0044c3af
    PUSH 0x57c0bf                       ; 0044c3b0 | = "%s.mov"
    MOV dword ptr [ESI + 0x4],EAX       ; 0044c3b5
    LEA EAX,[ESP + 0xc]                 ; 0044c3b8
    PUSH EAX                            ; 0044c3bc
    CALL FUN_00563c90                   ; 0044c3bd
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 0044c3c2
    PUSH 0x57c0c6                       ; 0044c3c5 | DAT_0057c0c6
    LEA EAX,[ESP + 0x8]                 ; 0044c3ca
    PUSH EAX                            ; 0044c3ce
    PUSH EBX                            ; 0044c3cf
    CALL FUN_00456a60                   ; 0044c3d0
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00456a60()
    ADD ESP,0xc                         ; 0044c3d5
    MOV EDI,EAX                         ; 0044c3d8
    TEST EAX,EAX                        ; 0044c3da
    JZ 0x0044c45d                       ; 0044c3dc
        ;   XREF to: 0044c45d (CONDITIONAL_JUMP)  ; LAB_0044c45d
    PUSH EDI                            ; 0044c3e2
        ;   Label: LAB_0044c3e2
    MOV EDX,dword ptr [ESI]             ; 0044c3e3
    PUSH EDX                            ; 0044c3e5
    PUSH 0x2000                         ; 0044c3e6
    MOV ECX,dword ptr [ESI + 0x4]       ; 0044c3eb
    PUSH ECX                            ; 0044c3ee
    CALL FUN_005636d0                   ; 0044c3ef
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005636d0()
    ADD ESP,0x10                        ; 0044c3f4
    PUSH EDI                            ; 0044c3f7
    CALL FUN_00563380                   ; 0044c3f8
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined FUN_00563380()
    ADD ESP,0x4                         ; 0044c3fd
    XOR ECX,ECX                         ; 0044c400
    POP EDI                             ; 0044c402
    MOV EAX,dword ptr [ESI]             ; 0044c403
        ;   Label: LAB_0044c403
    SHL EAX,0xd                         ; 0044c405
    CMP ECX,EAX                         ; 0044c408
    JGE 0x0044c485                      ; 0044c40a
        ;   XREF to: 0044c485 (CONDITIONAL_JUMP)  ; LAB_0044c485
    MOV EBX,dword ptr [ESI + 0x4]       ; 0044c40c
    XOR EDX,EDX                         ; 0044c40f
    MOV DL,byte ptr [ECX + EBX*0x1]     ; 0044c411
    MOV EAX,EDX                         ; 0044c414
    SAR EDX,0x1f                        ; 0044c416
    SHL EDX,0x2                         ; 0044c419
    SBB EAX,EDX                         ; 0044c41c
    SAR EAX,0x2                         ; 0044c41e
    MOV EDX,EAX                         ; 0044c421
    SAR EDX,0x1f                        ; 0044c423
    SUB EAX,EDX                         ; 0044c426
    SAR EAX,0x1                         ; 0044c428
    INC ECX                             ; 0044c42a
    MOV byte ptr [ECX + EBX*0x1 + -0x1],AL ; 0044c42b
    JMP 0x0044c403                      ; 0044c42f
        ;   XREF to: 0044c403 (UNCONDITIONAL_JUMP)  ; LAB_0044c403
    PUSH 0x57c06d                       ; 0044c431 | s_movscrn.raw_0057c06c+1
        ;   Label: LAB_0044c431
    MOV EBX,dword ptr [0x005ad54c]      ; 0044c436 | DAT_005ad54c
    PUSH EBX                            ; 0044c43c
    CALL FUN_0044be60                   ; 0044c43d
        ;   XREF to: 0044be60 (UNCONDITIONAL_CALL)  ; undefined FUN_0044be60()
    ADD ESP,0x8                         ; 0044c442
    PUSH 0x57c079                       ; 0044c445 | = "movscrn.raw"
    PUSH EAX                            ; 0044c44a
    CALL FUN_0044bf90                   ; 0044c44b
        ;   XREF to: 0044bf90 (UNCONDITIONAL_CALL)  ; undefined FUN_0044bf90()
    ADD ESP,0x8                         ; 0044c450
    ADD ESP,0x100                       ; 0044c453
    POP EBP                             ; 0044c459
    POP ESI                             ; 0044c45a
    POP EBX                             ; 0044c45b
    RET                                 ; 0044c45c
    PUSH EBX                            ; 0044c45d
        ;   Label: LAB_0044c45d
    MOV EBP,0x57c0c9                    ; 0044c45e | = "..\\core\\dfilter.cpp"
    MOV EAX,0x166                       ; 0044c463
    PUSH 0x57c0dd                       ; 0044c468 | = "Can't open movie %s.mov"
    MOV dword ptr [0x01cc4800],EBP      ; 0044c46d | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0044c473 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0044c478
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0044c47d
    JMP 0x0044c3e2                      ; 0044c480
        ;   XREF to: 0044c3e2 (UNCONDITIONAL_JUMP)  ; LAB_0044c3e2
    MOV dword ptr [ESI + 0x8],0x0       ; 0044c485
        ;   Label: LAB_0044c485
    ADD ESP,0x100                       ; 0044c48c
    POP EBP                             ; 0044c492
    POP ESI                             ; 0044c493
    POP EBX                             ; 0044c494
    RET                                 ; 0044c495

