; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047f210(CEditorTools *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_game.cpp_FUN_004b5190 at 004b5c3f
;   shape_edittool.cpp_FUN_0047c0f0 at 0047c6f6
;   shape_edittool.cpp_FUN_004831d0 at 004837d2
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800 at 0047ba6e
;   shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0 at 0047b42f
;   unkaddr_0059aa80.cpp_FUN_0059ada0 at 0059add8
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d2487
;   TerminatedCString s_CEditorTools_setMousePoi_005d249d
;   undefined4 DAT_006138e4
;   undefined4 DAT_006138e8
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c25f80
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;   undefined4 DAT_01c35838
;   undefined4 DAT_01c35839
;   undefined4 DAT_01c3583a
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   ... and 5 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_mini3d.cpp_FUN_004f8e20
;   engine_mini3d.cpp_FUN_004f8fe0
;   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_0047f1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f210
        ;   Label: shape_edittool.cpp_FUN_0047f210
    PUSH ESI                            ; 0047f211
    PUSH EDI                            ; 0047f212
    PUSH EBP                            ; 0047f213
    SUB ESP,0x10                        ; 0047f214
    MOV EBX,dword ptr [ESP + 0x28]      ; 0047f217
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047f21b
    PUSH EDX                            ; 0047f21f
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_0047f1c0 ; 0047f220
        ;   XREF to: 0047f1c0 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_0047f1c0(CEditorTools * this_ptr)
    MOV ECX,dword ptr [0x01c25f84]      ; 0047f225 | DAT_01c25f84
    ADD ESP,0x4                         ; 0047f22b
    TEST ECX,ECX                        ; 0047f22e
    JNZ 0x0047f2f3                      ; 0047f230
        ;   XREF to: 0047f2f3 (CONDITIONAL_JUMP)  ; LAB_0047f2f3
    MOV [0x01c35e60],EAX                ; 0047f236 | DAT_01c35e60
    MOV EAX,[0x01c25f80]                ; 0047f23b | DAT_01c25f80
        ;   Label: LAB_0047f23b
    CMP EAX,0x1                         ; 0047f240
    JNC 0x0047fb6f                      ; 0047f243
        ;   XREF to: 0047fb6f (CONDITIONAL_JUMP)  ; LAB_0047fb6f
    TEST EAX,EAX                        ; 0047f249
    JNZ 0x0047fb7e                      ; 0047f24b
        ;   XREF to: 0047fb7e (CONDITIONAL_JUMP)  ; LAB_0047fb7e
    MOV EDX,dword ptr [0x01c2a37c]      ; 0047f251 | DAT_01c2a37c
    MOV EAX,[0x01c2a380]                ; 0047f257 | DAT_01c2a380
    TEST EDX,EDX                        ; 0047f25c
    JL 0x0047f270                       ; 0047f25e
        ;   XREF to: 0047f270 (CONDITIONAL_JUMP)  ; LAB_0047f270
    TEST EAX,EAX                        ; 0047f260
    JL 0x0047f270                       ; 0047f262
        ;   XREF to: 0047f270 (CONDITIONAL_JUMP)  ; LAB_0047f270
    CMP EDX,dword ptr [0x006141b8]      ; 0047f264 | DAT_006141b8
    JL 0x0047f334                       ; 0047f26a
        ;   XREF to: 0047f334 (CONDITIONAL_JUMP)  ; LAB_0047f334
    MOV EDI,0x1                         ; 0047f270
        ;   Label: LAB_0047f270
    XOR EBP,EBP                         ; 0047f275
    MOV EAX,[0x006138e4]                ; 0047f277 | DAT_006138e4
        ;   Label: LAB_0047f277
    MOV EDX,EAX                         ; 0047f27c
    SAR EDX,0x1f                        ; 0047f27e
    SUB EAX,EDX                         ; 0047f281
    SAR EAX,0x1                         ; 0047f283
    CMP EDI,EAX                         ; 0047f285
    JLE 0x0047f39b                      ; 0047f287
        ;   XREF to: 0047f39b (CONDITIONAL_JUMP)  ; LAB_0047f39b
    MOV EDI,0x1                         ; 0047f28d
    XOR EBP,EBP                         ; 0047f292
    MOV EAX,[0x006138e8]                ; 0047f294 | DAT_006138e8
        ;   Label: LAB_0047f294
    MOV EDX,EAX                         ; 0047f299
    SAR EDX,0x1f                        ; 0047f29b
    SUB EAX,EDX                         ; 0047f29e
    SAR EAX,0x1                         ; 0047f2a0
    CMP EDI,EAX                         ; 0047f2a2
    JG 0x0047fba0                       ; 0047f2a4
        ;   XREF to: 0047fba0 (CONDITIONAL_JUMP)  ; LAB_0047fba0
    MOV ESI,dword ptr [0x01c2a380]      ; 0047f2aa | DAT_01c2a380
    SUB ESI,EDI                         ; 0047f2b0
    MOV EAX,[0x01c2a37c]                ; 0047f2b2 | DAT_01c2a37c
    MOV EDX,ESI                         ; 0047f2b7
    TEST EAX,EAX                        ; 0047f2b9
    JL 0x0047f2cd                       ; 0047f2bb
        ;   XREF to: 0047f2cd (CONDITIONAL_JUMP)  ; LAB_0047f2cd
    TEST ESI,ESI                        ; 0047f2bd
    JL 0x0047f2cd                       ; 0047f2bf
        ;   XREF to: 0047f2cd (CONDITIONAL_JUMP)  ; LAB_0047f2cd
    CMP EAX,dword ptr [0x006141b8]      ; 0047f2c1 | DAT_006141b8
    JL 0x0047f4b3                       ; 0047f2c7
        ;   XREF to: 0047f4b3 (CONDITIONAL_JUMP)  ; LAB_0047f4b3
    MOV ESI,dword ptr [0x01c2a380]      ; 0047f2cd | DAT_01c2a380
        ;   Label: LAB_0047f2cd
    ADD ESI,EDI                         ; 0047f2d3
    MOV EAX,[0x01c2a37c]                ; 0047f2d5 | DAT_01c2a37c
    MOV EDX,ESI                         ; 0047f2da
    TEST EAX,EAX                        ; 0047f2dc
    JL 0x0047f2f0                       ; 0047f2de
        ;   XREF to: 0047f2f0 (CONDITIONAL_JUMP)  ; LAB_0047f2f0
    TEST ESI,ESI                        ; 0047f2e0
    JL 0x0047f2f0                       ; 0047f2e2
        ;   XREF to: 0047f2f0 (CONDITIONAL_JUMP)  ; LAB_0047f2f0
    CMP EAX,dword ptr [0x006141b8]      ; 0047f2e4 | DAT_006141b8
    JL 0x0047f519                       ; 0047f2ea
        ;   XREF to: 0047f519 (CONDITIONAL_JUMP)  ; LAB_0047f519
    INC EDI                             ; 0047f2f0
        ;   Label: LAB_0047f2f0
    JMP 0x0047f294                      ; 0047f2f1
        ;   XREF to: 0047f294 (UNCONDITIONAL_JUMP)  ; LAB_0047f294
    AND EAX,0xff                        ; 0047f2f3
        ;   Label: LAB_0047f2f3
    MOV EDX,EAX                         ; 0047f2f8
    SHL EAX,0x2                         ; 0047f2fa
    SUB EAX,EDX                         ; 0047f2fd
    XOR EDX,EDX                         ; 0047f2ff
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047f301 | DAT_01c35839
    MOV ESI,EDX                         ; 0047f307
    XOR EDX,EDX                         ; 0047f309
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047f30b | DAT_01c35838
    SHL ESI,0x8                         ; 0047f311
    SHL EDX,0x10                        ; 0047f314
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047f317 | DAT_01c3583a
    OR EDX,ESI                          ; 0047f31d
    AND EAX,0xff                        ; 0047f31f
    OR EAX,EDX                          ; 0047f324
    PUSH EAX                            ; 0047f326
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047f327
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047f32c
    JMP 0x0047f23b                      ; 0047f32f
        ;   XREF to: 0047f23b (UNCONDITIONAL_JUMP)  ; LAB_0047f23b
    CMP EAX,dword ptr [0x006141bc]      ; 0047f334 | DAT_006141bc
        ;   Label: LAB_0047f334
    JGE 0x0047f270                      ; 0047f33a
        ;   XREF to: 0047f270 (CONDITIONAL_JUMP)  ; LAB_0047f270
    TEST EBX,EBX                        ; 0047f340
    JZ 0x0047f374                       ; 0047f342
        ;   XREF to: 0047f374 (CONDITIONAL_JUMP)  ; LAB_0047f374
    CMP EDX,dword ptr [0x01c35e48]      ; 0047f344 | DAT_01c35e48
    JL 0x0047f270                       ; 0047f34a
        ;   XREF to: 0047f270 (CONDITIONAL_JUMP)  ; LAB_0047f270
    CMP EDX,dword ptr [0x01c35e50]      ; 0047f350 | DAT_01c35e50
    JGE 0x0047f270                      ; 0047f356
        ;   XREF to: 0047f270 (CONDITIONAL_JUMP)  ; LAB_0047f270
    CMP EAX,dword ptr [0x01c35e4c]      ; 0047f35c | DAT_01c35e4c
    JL 0x0047f270                       ; 0047f362
        ;   XREF to: 0047f270 (CONDITIONAL_JUMP)  ; LAB_0047f270
    CMP EAX,dword ptr [0x01c35e54]      ; 0047f368 | DAT_01c35e54
    JGE 0x0047f270                      ; 0047f36e
        ;   XREF to: 0047f270 (CONDITIONAL_JUMP)  ; LAB_0047f270
    CMP dword ptr [0x01c25f84],0x0      ; 0047f374 | DAT_01c25f84
        ;   Label: LAB_0047f374
    JZ 0x0047f38c                       ; 0047f37b
        ;   XREF to: 0047f38c (CONDITIONAL_JUMP)  ; LAB_0047f38c
    PUSH EAX                            ; 0047f37d
    PUSH EDX                            ; 0047f37e
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047f37f
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047f384
    JMP 0x0047f270                      ; 0047f387
        ;   XREF to: 0047f270 (UNCONDITIONAL_JUMP)  ; LAB_0047f270
    PUSH EAX                            ; 0047f38c
        ;   Label: LAB_0047f38c
    PUSH EDX                            ; 0047f38d
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047f38e
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047f393
    JMP 0x0047f270                      ; 0047f396
        ;   XREF to: 0047f270 (UNCONDITIONAL_JUMP)  ; LAB_0047f270
    MOV ESI,dword ptr [0x01c2a37c]      ; 0047f39b | DAT_01c2a37c
        ;   Label: LAB_0047f39b
    SUB ESI,EDI                         ; 0047f3a1
    MOV EAX,[0x01c2a380]                ; 0047f3a3 | DAT_01c2a380
    MOV EDX,ESI                         ; 0047f3a8
    TEST ESI,ESI                        ; 0047f3aa
    JL 0x0047f3be                       ; 0047f3ac
        ;   XREF to: 0047f3be (CONDITIONAL_JUMP)  ; LAB_0047f3be
    TEST EAX,EAX                        ; 0047f3ae
    JL 0x0047f3be                       ; 0047f3b0
        ;   XREF to: 0047f3be (CONDITIONAL_JUMP)  ; LAB_0047f3be
    CMP ESI,dword ptr [0x006141b8]      ; 0047f3b2 | DAT_006141b8
    JL 0x0047f43d                       ; 0047f3b8
        ;   XREF to: 0047f43d (CONDITIONAL_JUMP)  ; LAB_0047f43d
    MOV ESI,dword ptr [0x01c2a37c]      ; 0047f3be | DAT_01c2a37c
        ;   Label: LAB_0047f3be
    ADD ESI,EDI                         ; 0047f3c4
    MOV EAX,[0x01c2a380]                ; 0047f3c6 | DAT_01c2a380
    MOV EDX,ESI                         ; 0047f3cb
    TEST ESI,ESI                        ; 0047f3cd
    JL 0x0047f4ad                       ; 0047f3cf
        ;   XREF to: 0047f4ad (CONDITIONAL_JUMP)  ; LAB_0047f4ad
    TEST EAX,EAX                        ; 0047f3d5
    JL 0x0047f4ad                       ; 0047f3d7
        ;   XREF to: 0047f4ad (CONDITIONAL_JUMP)  ; LAB_0047f4ad
    CMP ESI,dword ptr [0x006141b8]      ; 0047f3dd | DAT_006141b8
    JGE 0x0047f4ad                      ; 0047f3e3
        ;   XREF to: 0047f4ad (CONDITIONAL_JUMP)  ; LAB_0047f4ad
    CMP EAX,dword ptr [0x006141bc]      ; 0047f3e9 | DAT_006141bc
    JGE 0x0047f4ad                      ; 0047f3ef
        ;   XREF to: 0047f4ad (CONDITIONAL_JUMP)  ; LAB_0047f4ad
    TEST EBX,EBX                        ; 0047f3f5
    JZ 0x0047f429                       ; 0047f3f7
        ;   XREF to: 0047f429 (CONDITIONAL_JUMP)  ; LAB_0047f429
    CMP ESI,dword ptr [0x01c35e48]      ; 0047f3f9 | DAT_01c35e48
    JL 0x0047f4ad                       ; 0047f3ff
        ;   XREF to: 0047f4ad (CONDITIONAL_JUMP)  ; LAB_0047f4ad
    CMP ESI,dword ptr [0x01c35e50]      ; 0047f405 | DAT_01c35e50
    JGE 0x0047f4ad                      ; 0047f40b
        ;   XREF to: 0047f4ad (CONDITIONAL_JUMP)  ; LAB_0047f4ad
    CMP EAX,dword ptr [0x01c35e4c]      ; 0047f411 | DAT_01c35e4c
    JL 0x0047f4ad                       ; 0047f417
        ;   XREF to: 0047f4ad (CONDITIONAL_JUMP)  ; LAB_0047f4ad
    CMP EAX,dword ptr [0x01c35e54]      ; 0047f41d | DAT_01c35e54
    JGE 0x0047f4ad                      ; 0047f423
        ;   XREF to: 0047f4ad (CONDITIONAL_JUMP)  ; LAB_0047f4ad
    CMP EBP,dword ptr [0x01c25f84]      ; 0047f429 | DAT_01c25f84
        ;   Label: LAB_0047f429
    JZ 0x0047f4a3                       ; 0047f42f
        ;   XREF to: 0047f4a3 (CONDITIONAL_JUMP)  ; LAB_0047f4a3
    PUSH EAX                            ; 0047f431
    PUSH EDX                            ; 0047f432
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047f433
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047f438
    JMP 0x0047f4ad                      ; 0047f43b
        ;   XREF to: 0047f4ad (UNCONDITIONAL_JUMP)  ; LAB_0047f4ad
    CMP EAX,dword ptr [0x006141bc]      ; 0047f43d | DAT_006141bc
        ;   Label: LAB_0047f43d
    JGE 0x0047f3be                      ; 0047f443
        ;   XREF to: 0047f3be (CONDITIONAL_JUMP)  ; LAB_0047f3be
    TEST EBX,EBX                        ; 0047f449
    JZ 0x0047f47d                       ; 0047f44b
        ;   XREF to: 0047f47d (CONDITIONAL_JUMP)  ; LAB_0047f47d
    CMP ESI,dword ptr [0x01c35e48]      ; 0047f44d | DAT_01c35e48
    JL 0x0047f3be                       ; 0047f453
        ;   XREF to: 0047f3be (CONDITIONAL_JUMP)  ; LAB_0047f3be
    CMP ESI,dword ptr [0x01c35e50]      ; 0047f459 | DAT_01c35e50
    JGE 0x0047f3be                      ; 0047f45f
        ;   XREF to: 0047f3be (CONDITIONAL_JUMP)  ; LAB_0047f3be
    CMP EAX,dword ptr [0x01c35e4c]      ; 0047f465 | DAT_01c35e4c
    JL 0x0047f3be                       ; 0047f46b
        ;   XREF to: 0047f3be (CONDITIONAL_JUMP)  ; LAB_0047f3be
    CMP EAX,dword ptr [0x01c35e54]      ; 0047f471 | DAT_01c35e54
    JGE 0x0047f3be                      ; 0047f477
        ;   XREF to: 0047f3be (CONDITIONAL_JUMP)  ; LAB_0047f3be
    CMP EBP,dword ptr [0x01c25f84]      ; 0047f47d | DAT_01c25f84
        ;   Label: LAB_0047f47d
    JZ 0x0047f494                       ; 0047f483
        ;   XREF to: 0047f494 (CONDITIONAL_JUMP)  ; LAB_0047f494
    PUSH EAX                            ; 0047f485
    PUSH EDX                            ; 0047f486
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047f487
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047f48c
    JMP 0x0047f3be                      ; 0047f48f
        ;   XREF to: 0047f3be (UNCONDITIONAL_JUMP)  ; LAB_0047f3be
    PUSH EAX                            ; 0047f494
        ;   Label: LAB_0047f494
    PUSH EDX                            ; 0047f495
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047f496
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047f49b
    JMP 0x0047f3be                      ; 0047f49e
        ;   XREF to: 0047f3be (UNCONDITIONAL_JUMP)  ; LAB_0047f3be
    PUSH EAX                            ; 0047f4a3
        ;   Label: LAB_0047f4a3
    PUSH EDX                            ; 0047f4a4
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047f4a5
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047f4aa
    INC EDI                             ; 0047f4ad
        ;   Label: LAB_0047f4ad
    JMP 0x0047f277                      ; 0047f4ae
        ;   XREF to: 0047f277 (UNCONDITIONAL_JUMP)  ; LAB_0047f277
    CMP ESI,dword ptr [0x006141bc]      ; 0047f4b3 | DAT_006141bc
        ;   Label: LAB_0047f4b3
    JGE 0x0047f2cd                      ; 0047f4b9
        ;   XREF to: 0047f2cd (CONDITIONAL_JUMP)  ; LAB_0047f2cd
    TEST EBX,EBX                        ; 0047f4bf
    JZ 0x0047f4f3                       ; 0047f4c1
        ;   XREF to: 0047f4f3 (CONDITIONAL_JUMP)  ; LAB_0047f4f3
    CMP EAX,dword ptr [0x01c35e48]      ; 0047f4c3 | DAT_01c35e48
    JL 0x0047f2cd                       ; 0047f4c9
        ;   XREF to: 0047f2cd (CONDITIONAL_JUMP)  ; LAB_0047f2cd
    CMP EAX,dword ptr [0x01c35e50]      ; 0047f4cf | DAT_01c35e50
    JGE 0x0047f2cd                      ; 0047f4d5
        ;   XREF to: 0047f2cd (CONDITIONAL_JUMP)  ; LAB_0047f2cd
    CMP ESI,dword ptr [0x01c35e4c]      ; 0047f4db | DAT_01c35e4c
    JL 0x0047f2cd                       ; 0047f4e1
        ;   XREF to: 0047f2cd (CONDITIONAL_JUMP)  ; LAB_0047f2cd
    CMP ESI,dword ptr [0x01c35e54]      ; 0047f4e7 | DAT_01c35e54
    JGE 0x0047f2cd                      ; 0047f4ed
        ;   XREF to: 0047f2cd (CONDITIONAL_JUMP)  ; LAB_0047f2cd
    CMP EBP,dword ptr [0x01c25f84]      ; 0047f4f3 | DAT_01c25f84
        ;   Label: LAB_0047f4f3
    JZ 0x0047f50a                       ; 0047f4f9
        ;   XREF to: 0047f50a (CONDITIONAL_JUMP)  ; LAB_0047f50a
    PUSH EDX                            ; 0047f4fb
    PUSH EAX                            ; 0047f4fc
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047f4fd
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047f502
    JMP 0x0047f2cd                      ; 0047f505
        ;   XREF to: 0047f2cd (UNCONDITIONAL_JUMP)  ; LAB_0047f2cd
    PUSH EDX                            ; 0047f50a
        ;   Label: LAB_0047f50a
    PUSH EAX                            ; 0047f50b
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047f50c
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047f511
    JMP 0x0047f2cd                      ; 0047f514
        ;   XREF to: 0047f2cd (UNCONDITIONAL_JUMP)  ; LAB_0047f2cd
    CMP ESI,dword ptr [0x006141bc]      ; 0047f519 | DAT_006141bc
        ;   Label: LAB_0047f519
    JGE 0x0047f2f0                      ; 0047f51f
        ;   XREF to: 0047f2f0 (CONDITIONAL_JUMP)  ; LAB_0047f2f0
    TEST EBX,EBX                        ; 0047f525
    JZ 0x0047f559                       ; 0047f527
        ;   XREF to: 0047f559 (CONDITIONAL_JUMP)  ; LAB_0047f559
    CMP EAX,dword ptr [0x01c35e48]      ; 0047f529 | DAT_01c35e48
    JL 0x0047f2f0                       ; 0047f52f
        ;   XREF to: 0047f2f0 (CONDITIONAL_JUMP)  ; LAB_0047f2f0
    CMP EAX,dword ptr [0x01c35e50]      ; 0047f535 | DAT_01c35e50
    JGE 0x0047f2f0                      ; 0047f53b
        ;   XREF to: 0047f2f0 (CONDITIONAL_JUMP)  ; LAB_0047f2f0
    CMP ESI,dword ptr [0x01c35e4c]      ; 0047f541 | DAT_01c35e4c
    JL 0x0047f2f0                       ; 0047f547
        ;   XREF to: 0047f2f0 (CONDITIONAL_JUMP)  ; LAB_0047f2f0
    CMP ESI,dword ptr [0x01c35e54]      ; 0047f54d | DAT_01c35e54
    JGE 0x0047f2f0                      ; 0047f553
        ;   XREF to: 0047f2f0 (CONDITIONAL_JUMP)  ; LAB_0047f2f0
    CMP EBP,dword ptr [0x01c25f84]      ; 0047f559 | DAT_01c25f84
        ;   Label: LAB_0047f559
    JZ 0x0047f571                       ; 0047f55f
        ;   XREF to: 0047f571 (CONDITIONAL_JUMP)  ; LAB_0047f571
    PUSH EDX                            ; 0047f561
    PUSH EAX                            ; 0047f562
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047f563
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047f568
    INC EDI                             ; 0047f56b
    JMP 0x0047f294                      ; 0047f56c
        ;   XREF to: 0047f294 (UNCONDITIONAL_JUMP)  ; LAB_0047f294
    PUSH EDX                            ; 0047f571
        ;   Label: LAB_0047f571
    PUSH EAX                            ; 0047f572
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047f573
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047f578
    INC EDI                             ; 0047f57b
    JMP 0x0047f294                      ; 0047f57c
        ;   XREF to: 0047f294 (UNCONDITIONAL_JUMP)  ; LAB_0047f294
    MOV EAX,[0x01c2a37c]                ; 0047f581 | DAT_01c2a37c
        ;   Label: LAB_0047f581
    MOV EDX,dword ptr [0x01c2a380]      ; 0047f586 | DAT_01c2a380
    TEST EAX,EAX                        ; 0047f58c
    JL 0x0047f5a0                       ; 0047f58e
        ;   XREF to: 0047f5a0 (CONDITIONAL_JUMP)  ; LAB_0047f5a0
    TEST EDX,EDX                        ; 0047f590
    JL 0x0047f5a0                       ; 0047f592
        ;   XREF to: 0047f5a0 (CONDITIONAL_JUMP)  ; LAB_0047f5a0
    CMP EAX,dword ptr [0x006141b8]      ; 0047f594 | DAT_006141b8
    JL 0x0047f65d                       ; 0047f59a
        ;   XREF to: 0047f65d (CONDITIONAL_JUMP)  ; LAB_0047f65d
    MOV ESI,0x1                         ; 0047f5a0
        ;   Label: LAB_0047f5a0
    MOV EAX,[0x006138e4]                ; 0047f5a5 | DAT_006138e4
        ;   Label: LAB_0047f5a5
    MOV EDX,EAX                         ; 0047f5aa
    SAR EDX,0x1f                        ; 0047f5ac
    SUB EAX,EDX                         ; 0047f5af
    SAR EAX,0x1                         ; 0047f5b1
    CMP ESI,EAX                         ; 0047f5b3
    JG 0x0047fba0                       ; 0047f5b5
        ;   XREF to: 0047fba0 (CONDITIONAL_JUMP)  ; LAB_0047fba0
    MOV EDI,dword ptr [0x01c2a37c]      ; 0047f5bb | DAT_01c2a37c
    MOV EAX,[0x01c2a380]                ; 0047f5c1 | DAT_01c2a380
    SUB EDI,ESI                         ; 0047f5c6
    SUB EAX,ESI                         ; 0047f5c8
    MOV EBP,EDI                         ; 0047f5ca
    MOV EDX,EAX                         ; 0047f5cc
    TEST EDI,EDI                        ; 0047f5ce
    JL 0x0047f5e2                       ; 0047f5d0
        ;   XREF to: 0047f5e2 (CONDITIONAL_JUMP)  ; LAB_0047f5e2
    TEST EAX,EAX                        ; 0047f5d2
    JL 0x0047f5e2                       ; 0047f5d4
        ;   XREF to: 0047f5e2 (CONDITIONAL_JUMP)  ; LAB_0047f5e2
    CMP EDI,dword ptr [0x006141b8]      ; 0047f5d6 | DAT_006141b8
    JL 0x0047f6c4                       ; 0047f5dc
        ;   XREF to: 0047f6c4 (CONDITIONAL_JUMP)  ; LAB_0047f6c4
    MOV EAX,[0x01c2a37c]                ; 0047f5e2 | DAT_01c2a37c
        ;   Label: LAB_0047f5e2
    MOV EDI,dword ptr [0x01c2a380]      ; 0047f5e7 | DAT_01c2a380
    ADD EAX,ESI                         ; 0047f5ed
    SUB EDI,ESI                         ; 0047f5ef
    MOV EDX,EAX                         ; 0047f5f1
    MOV EBP,EDI                         ; 0047f5f3
    TEST EAX,EAX                        ; 0047f5f5
    JL 0x0047f609                       ; 0047f5f7
        ;   XREF to: 0047f609 (CONDITIONAL_JUMP)  ; LAB_0047f609
    TEST EDI,EDI                        ; 0047f5f9
    JL 0x0047f609                       ; 0047f5fb
        ;   XREF to: 0047f609 (CONDITIONAL_JUMP)  ; LAB_0047f609
    CMP EAX,dword ptr [0x006141b8]      ; 0047f5fd | DAT_006141b8
    JL 0x0047f72b                       ; 0047f603
        ;   XREF to: 0047f72b (CONDITIONAL_JUMP)  ; LAB_0047f72b
    MOV EDI,dword ptr [0x01c2a37c]      ; 0047f609 | DAT_01c2a37c
        ;   Label: LAB_0047f609
    MOV EAX,[0x01c2a380]                ; 0047f60f | DAT_01c2a380
    SUB EDI,ESI                         ; 0047f614
    ADD EAX,ESI                         ; 0047f616
    MOV EDX,EDI                         ; 0047f618
    MOV EBP,EAX                         ; 0047f61a
    TEST EDI,EDI                        ; 0047f61c
    JL 0x0047f630                       ; 0047f61e
        ;   XREF to: 0047f630 (CONDITIONAL_JUMP)  ; LAB_0047f630
    TEST EAX,EAX                        ; 0047f620
    JL 0x0047f630                       ; 0047f622
        ;   XREF to: 0047f630 (CONDITIONAL_JUMP)  ; LAB_0047f630
    CMP EDI,dword ptr [0x006141b8]      ; 0047f624 | DAT_006141b8
    JL 0x0047f792                       ; 0047f62a
        ;   XREF to: 0047f792 (CONDITIONAL_JUMP)  ; LAB_0047f792
    MOV EAX,[0x01c2a37c]                ; 0047f630 | DAT_01c2a37c
        ;   Label: LAB_0047f630
    MOV EDI,dword ptr [0x01c2a380]      ; 0047f635 | DAT_01c2a380
    ADD EAX,ESI                         ; 0047f63b
    ADD EDI,ESI                         ; 0047f63d
    MOV EDX,EAX                         ; 0047f63f
    MOV EBP,EDI                         ; 0047f641
    TEST EAX,EAX                        ; 0047f643
    JL 0x0047f657                       ; 0047f645
        ;   XREF to: 0047f657 (CONDITIONAL_JUMP)  ; LAB_0047f657
    TEST EDI,EDI                        ; 0047f647
    JL 0x0047f657                       ; 0047f649
        ;   XREF to: 0047f657 (CONDITIONAL_JUMP)  ; LAB_0047f657
    CMP EAX,dword ptr [0x006141b8]      ; 0047f64b | DAT_006141b8
    JL 0x0047f7f9                       ; 0047f651
        ;   XREF to: 0047f7f9 (CONDITIONAL_JUMP)  ; LAB_0047f7f9
    INC ESI                             ; 0047f657
        ;   Label: LAB_0047f657
    JMP 0x0047f5a5                      ; 0047f658
        ;   XREF to: 0047f5a5 (UNCONDITIONAL_JUMP)  ; LAB_0047f5a5
    CMP EDX,dword ptr [0x006141bc]      ; 0047f65d | DAT_006141bc
        ;   Label: LAB_0047f65d
    JGE 0x0047f5a0                      ; 0047f663
        ;   XREF to: 0047f5a0 (CONDITIONAL_JUMP)  ; LAB_0047f5a0
    TEST EBX,EBX                        ; 0047f669
    JZ 0x0047f69d                       ; 0047f66b
        ;   XREF to: 0047f69d (CONDITIONAL_JUMP)  ; LAB_0047f69d
    CMP EAX,dword ptr [0x01c35e48]      ; 0047f66d | DAT_01c35e48
    JL 0x0047f5a0                       ; 0047f673
        ;   XREF to: 0047f5a0 (CONDITIONAL_JUMP)  ; LAB_0047f5a0
    CMP EAX,dword ptr [0x01c35e50]      ; 0047f679 | DAT_01c35e50
    JGE 0x0047f5a0                      ; 0047f67f
        ;   XREF to: 0047f5a0 (CONDITIONAL_JUMP)  ; LAB_0047f5a0
    CMP EDX,dword ptr [0x01c35e4c]      ; 0047f685 | DAT_01c35e4c
    JL 0x0047f5a0                       ; 0047f68b
        ;   XREF to: 0047f5a0 (CONDITIONAL_JUMP)  ; LAB_0047f5a0
    CMP EDX,dword ptr [0x01c35e54]      ; 0047f691 | DAT_01c35e54
    JGE 0x0047f5a0                      ; 0047f697
        ;   XREF to: 0047f5a0 (CONDITIONAL_JUMP)  ; LAB_0047f5a0
    CMP dword ptr [0x01c25f84],0x0      ; 0047f69d | DAT_01c25f84
        ;   Label: LAB_0047f69d
    JZ 0x0047f6b5                       ; 0047f6a4
        ;   XREF to: 0047f6b5 (CONDITIONAL_JUMP)  ; LAB_0047f6b5
    PUSH EDX                            ; 0047f6a6
    PUSH EAX                            ; 0047f6a7
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047f6a8
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047f6ad
    JMP 0x0047f5a0                      ; 0047f6b0
        ;   XREF to: 0047f5a0 (UNCONDITIONAL_JUMP)  ; LAB_0047f5a0
    PUSH EDX                            ; 0047f6b5
        ;   Label: LAB_0047f6b5
    PUSH EAX                            ; 0047f6b6
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047f6b7
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047f6bc
    JMP 0x0047f5a0                      ; 0047f6bf
        ;   XREF to: 0047f5a0 (UNCONDITIONAL_JUMP)  ; LAB_0047f5a0
    CMP EAX,dword ptr [0x006141bc]      ; 0047f6c4 | DAT_006141bc
        ;   Label: LAB_0047f6c4
    JGE 0x0047f5e2                      ; 0047f6ca
        ;   XREF to: 0047f5e2 (CONDITIONAL_JUMP)  ; LAB_0047f5e2
    TEST EBX,EBX                        ; 0047f6d0
    JZ 0x0047f704                       ; 0047f6d2
        ;   XREF to: 0047f704 (CONDITIONAL_JUMP)  ; LAB_0047f704
    CMP EDI,dword ptr [0x01c35e48]      ; 0047f6d4 | DAT_01c35e48
    JL 0x0047f5e2                       ; 0047f6da
        ;   XREF to: 0047f5e2 (CONDITIONAL_JUMP)  ; LAB_0047f5e2
    CMP EDI,dword ptr [0x01c35e50]      ; 0047f6e0 | DAT_01c35e50
    JGE 0x0047f5e2                      ; 0047f6e6
        ;   XREF to: 0047f5e2 (CONDITIONAL_JUMP)  ; LAB_0047f5e2
    CMP EAX,dword ptr [0x01c35e4c]      ; 0047f6ec | DAT_01c35e4c
    JL 0x0047f5e2                       ; 0047f6f2
        ;   XREF to: 0047f5e2 (CONDITIONAL_JUMP)  ; LAB_0047f5e2
    CMP EAX,dword ptr [0x01c35e54]      ; 0047f6f8 | DAT_01c35e54
    JGE 0x0047f5e2                      ; 0047f6fe
        ;   XREF to: 0047f5e2 (CONDITIONAL_JUMP)  ; LAB_0047f5e2
    CMP dword ptr [0x01c25f84],0x0      ; 0047f704 | DAT_01c25f84
        ;   Label: LAB_0047f704
    JZ 0x0047f71c                       ; 0047f70b
        ;   XREF to: 0047f71c (CONDITIONAL_JUMP)  ; LAB_0047f71c
    PUSH EDX                            ; 0047f70d
    PUSH EBP                            ; 0047f70e
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047f70f
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047f714
    JMP 0x0047f5e2                      ; 0047f717
        ;   XREF to: 0047f5e2 (UNCONDITIONAL_JUMP)  ; LAB_0047f5e2
    PUSH EDX                            ; 0047f71c
        ;   Label: LAB_0047f71c
    PUSH EBP                            ; 0047f71d
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047f71e
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047f723
    JMP 0x0047f5e2                      ; 0047f726
        ;   XREF to: 0047f5e2 (UNCONDITIONAL_JUMP)  ; LAB_0047f5e2
    CMP EDI,dword ptr [0x006141bc]      ; 0047f72b | DAT_006141bc
        ;   Label: LAB_0047f72b
    JGE 0x0047f609                      ; 0047f731
        ;   XREF to: 0047f609 (CONDITIONAL_JUMP)  ; LAB_0047f609
    TEST EBX,EBX                        ; 0047f737
    JZ 0x0047f76b                       ; 0047f739
        ;   XREF to: 0047f76b (CONDITIONAL_JUMP)  ; LAB_0047f76b
    CMP EAX,dword ptr [0x01c35e48]      ; 0047f73b | DAT_01c35e48
    JL 0x0047f609                       ; 0047f741
        ;   XREF to: 0047f609 (CONDITIONAL_JUMP)  ; LAB_0047f609
    CMP EAX,dword ptr [0x01c35e50]      ; 0047f747 | DAT_01c35e50
    JGE 0x0047f609                      ; 0047f74d
        ;   XREF to: 0047f609 (CONDITIONAL_JUMP)  ; LAB_0047f609
    CMP EDI,dword ptr [0x01c35e4c]      ; 0047f753 | DAT_01c35e4c
    JL 0x0047f609                       ; 0047f759
        ;   XREF to: 0047f609 (CONDITIONAL_JUMP)  ; LAB_0047f609
    CMP EDI,dword ptr [0x01c35e54]      ; 0047f75f | DAT_01c35e54
    JGE 0x0047f609                      ; 0047f765
        ;   XREF to: 0047f609 (CONDITIONAL_JUMP)  ; LAB_0047f609
    CMP dword ptr [0x01c25f84],0x0      ; 0047f76b | DAT_01c25f84
        ;   Label: LAB_0047f76b
    JZ 0x0047f783                       ; 0047f772
        ;   XREF to: 0047f783 (CONDITIONAL_JUMP)  ; LAB_0047f783
    PUSH EBP                            ; 0047f774
    PUSH EDX                            ; 0047f775
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047f776
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047f77b
    JMP 0x0047f609                      ; 0047f77e
        ;   XREF to: 0047f609 (UNCONDITIONAL_JUMP)  ; LAB_0047f609
    PUSH EBP                            ; 0047f783
        ;   Label: LAB_0047f783
    PUSH EDX                            ; 0047f784
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047f785
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047f78a
    JMP 0x0047f609                      ; 0047f78d
        ;   XREF to: 0047f609 (UNCONDITIONAL_JUMP)  ; LAB_0047f609
    CMP EAX,dword ptr [0x006141bc]      ; 0047f792 | DAT_006141bc
        ;   Label: LAB_0047f792
    JGE 0x0047f630                      ; 0047f798
        ;   XREF to: 0047f630 (CONDITIONAL_JUMP)  ; LAB_0047f630
    TEST EBX,EBX                        ; 0047f79e
    JZ 0x0047f7d2                       ; 0047f7a0
        ;   XREF to: 0047f7d2 (CONDITIONAL_JUMP)  ; LAB_0047f7d2
    CMP EDI,dword ptr [0x01c35e48]      ; 0047f7a2 | DAT_01c35e48
    JL 0x0047f630                       ; 0047f7a8
        ;   XREF to: 0047f630 (CONDITIONAL_JUMP)  ; LAB_0047f630
    CMP EDI,dword ptr [0x01c35e50]      ; 0047f7ae | DAT_01c35e50
    JGE 0x0047f630                      ; 0047f7b4
        ;   XREF to: 0047f630 (CONDITIONAL_JUMP)  ; LAB_0047f630
    CMP EAX,dword ptr [0x01c35e4c]      ; 0047f7ba | DAT_01c35e4c
    JL 0x0047f630                       ; 0047f7c0
        ;   XREF to: 0047f630 (CONDITIONAL_JUMP)  ; LAB_0047f630
    CMP EAX,dword ptr [0x01c35e54]      ; 0047f7c6 | DAT_01c35e54
    JGE 0x0047f630                      ; 0047f7cc
        ;   XREF to: 0047f630 (CONDITIONAL_JUMP)  ; LAB_0047f630
    CMP dword ptr [0x01c25f84],0x0      ; 0047f7d2 | DAT_01c25f84
        ;   Label: LAB_0047f7d2
    JZ 0x0047f7ea                       ; 0047f7d9
        ;   XREF to: 0047f7ea (CONDITIONAL_JUMP)  ; LAB_0047f7ea
    PUSH EBP                            ; 0047f7db
    PUSH EDX                            ; 0047f7dc
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047f7dd
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047f7e2
    JMP 0x0047f630                      ; 0047f7e5
        ;   XREF to: 0047f630 (UNCONDITIONAL_JUMP)  ; LAB_0047f630
    PUSH EBP                            ; 0047f7ea
        ;   Label: LAB_0047f7ea
    PUSH EDX                            ; 0047f7eb
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047f7ec
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047f7f1
    JMP 0x0047f630                      ; 0047f7f4
        ;   XREF to: 0047f630 (UNCONDITIONAL_JUMP)  ; LAB_0047f630
    CMP EDI,dword ptr [0x006141bc]      ; 0047f7f9 | DAT_006141bc
        ;   Label: LAB_0047f7f9
    JGE 0x0047f657                      ; 0047f7ff
        ;   XREF to: 0047f657 (CONDITIONAL_JUMP)  ; LAB_0047f657
    TEST EBX,EBX                        ; 0047f805
    JZ 0x0047f839                       ; 0047f807
        ;   XREF to: 0047f839 (CONDITIONAL_JUMP)  ; LAB_0047f839
    CMP EAX,dword ptr [0x01c35e48]      ; 0047f809 | DAT_01c35e48
    JL 0x0047f657                       ; 0047f80f
        ;   XREF to: 0047f657 (CONDITIONAL_JUMP)  ; LAB_0047f657
    CMP EAX,dword ptr [0x01c35e50]      ; 0047f815 | DAT_01c35e50
    JGE 0x0047f657                      ; 0047f81b
        ;   XREF to: 0047f657 (CONDITIONAL_JUMP)  ; LAB_0047f657
    CMP EDI,dword ptr [0x01c35e4c]      ; 0047f821 | DAT_01c35e4c
    JL 0x0047f657                       ; 0047f827
        ;   XREF to: 0047f657 (CONDITIONAL_JUMP)  ; LAB_0047f657
    CMP EDI,dword ptr [0x01c35e54]      ; 0047f82d | DAT_01c35e54
    JGE 0x0047f657                      ; 0047f833
        ;   XREF to: 0047f657 (CONDITIONAL_JUMP)  ; LAB_0047f657
    CMP dword ptr [0x01c25f84],0x0      ; 0047f839 | DAT_01c25f84
        ;   Label: LAB_0047f839
    JZ 0x0047f852                       ; 0047f840
        ;   XREF to: 0047f852 (CONDITIONAL_JUMP)  ; LAB_0047f852
    PUSH EBP                            ; 0047f842
    PUSH EDX                            ; 0047f843
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047f844
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047f849
    INC ESI                             ; 0047f84c
    JMP 0x0047f5a5                      ; 0047f84d
        ;   XREF to: 0047f5a5 (UNCONDITIONAL_JUMP)  ; LAB_0047f5a5
    PUSH EBP                            ; 0047f852
        ;   Label: LAB_0047f852
    PUSH EDX                            ; 0047f853
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047f854
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047f859
    INC ESI                             ; 0047f85c
    JMP 0x0047f5a5                      ; 0047f85d
        ;   XREF to: 0047f5a5 (UNCONDITIONAL_JUMP)  ; LAB_0047f5a5
    MOV EAX,[0x006138e8]                ; 0047f862 | DAT_006138e8
        ;   Label: LAB_0047f862
    MOV EDX,EAX                         ; 0047f867
    SAR EDX,0x1f                        ; 0047f869
    SUB EAX,EDX                         ; 0047f86c
    SAR EAX,0x1                         ; 0047f86e
    MOV EDI,dword ptr [0x01c2a380]      ; 0047f870 | DAT_01c2a380
    MOV ESI,dword ptr [0x006138e8]      ; 0047f876 | DAT_006138e8
    SUB EDI,EAX                         ; 0047f87c
    ADD ESI,EDI                         ; 0047f87e
    DEC ESI                             ; 0047f880
    LEA EBP,[EDI + 0x1]                 ; 0047f881
    CMP EBP,ESI                         ; 0047f884
    JGE 0x0047f8a8                      ; 0047f886
        ;   XREF to: 0047f8a8 (CONDITIONAL_JUMP)  ; LAB_0047f8a8
    MOV EAX,[0x01c2a37c]                ; 0047f888 | DAT_01c2a37c
        ;   Label: LAB_0047f888
    MOV EDX,EBP                         ; 0047f88d
    TEST EAX,EAX                        ; 0047f88f
    JL 0x0047f8a3                       ; 0047f891
        ;   XREF to: 0047f8a3 (CONDITIONAL_JUMP)  ; LAB_0047f8a3
    TEST EBP,EBP                        ; 0047f893
    JL 0x0047f8a3                       ; 0047f895
        ;   XREF to: 0047f8a3 (CONDITIONAL_JUMP)  ; LAB_0047f8a3
    CMP EAX,dword ptr [0x006141b8]      ; 0047f897 | DAT_006141b8
    JL 0x0047f94c                       ; 0047f89d
        ;   XREF to: 0047f94c (CONDITIONAL_JUMP)  ; LAB_0047f94c
    INC EBP                             ; 0047f8a3
        ;   Label: LAB_0047f8a3
    CMP EBP,ESI                         ; 0047f8a4
    JL 0x0047f888                       ; 0047f8a6
        ;   XREF to: 0047f888 (CONDITIONAL_JUMP)  ; LAB_0047f888
    MOV EBP,0x1                         ; 0047f8a8
        ;   Label: LAB_0047f8a8
    MOV EAX,[0x006138e4]                ; 0047f8ad | DAT_006138e4
        ;   Label: LAB_0047f8ad
    MOV EDX,EAX                         ; 0047f8b2
    SAR EDX,0x1f                        ; 0047f8b4
    SUB EAX,EDX                         ; 0047f8b7
    SAR EAX,0x1                         ; 0047f8b9
    CMP EBP,EAX                         ; 0047f8bb
    JG 0x0047fba0                       ; 0047f8bd
        ;   XREF to: 0047fba0 (CONDITIONAL_JUMP)  ; LAB_0047fba0
    MOV EAX,[0x01c2a37c]                ; 0047f8c3 | DAT_01c2a37c
    SUB EAX,EBP                         ; 0047f8c8
    MOV dword ptr [ESP + 0xc],EDI       ; 0047f8ca
    MOV EDX,EAX                         ; 0047f8ce
    TEST EAX,EAX                        ; 0047f8d0
    JL 0x0047f8e4                       ; 0047f8d2
        ;   XREF to: 0047f8e4 (CONDITIONAL_JUMP)  ; LAB_0047f8e4
    TEST EDI,EDI                        ; 0047f8d4
    JL 0x0047f8e4                       ; 0047f8d6
        ;   XREF to: 0047f8e4 (CONDITIONAL_JUMP)  ; LAB_0047f8e4
    CMP EAX,dword ptr [0x006141b8]      ; 0047f8d8 | DAT_006141b8
    JL 0x0047f9b3                       ; 0047f8de
        ;   XREF to: 0047f9b3 (CONDITIONAL_JUMP)  ; LAB_0047f9b3
    MOV EAX,[0x01c2a37c]                ; 0047f8e4 | DAT_01c2a37c
        ;   Label: LAB_0047f8e4
    ADD EAX,EBP                         ; 0047f8e9
    MOV EDX,EDI                         ; 0047f8eb
    MOV dword ptr [ESP + 0x8],EAX       ; 0047f8ed
    TEST EAX,EAX                        ; 0047f8f1
    JL 0x0047f905                       ; 0047f8f3
        ;   XREF to: 0047f905 (CONDITIONAL_JUMP)  ; LAB_0047f905
    TEST EDI,EDI                        ; 0047f8f5
    JL 0x0047f905                       ; 0047f8f7
        ;   XREF to: 0047f905 (CONDITIONAL_JUMP)  ; LAB_0047f905
    CMP EAX,dword ptr [0x006141b8]      ; 0047f8f9 | DAT_006141b8
    JL 0x0047fa22                       ; 0047f8ff
        ;   XREF to: 0047fa22 (CONDITIONAL_JUMP)  ; LAB_0047fa22
    MOV EAX,[0x01c2a37c]                ; 0047f905 | DAT_01c2a37c
        ;   Label: LAB_0047f905
    SUB EAX,EBP                         ; 0047f90a
    MOV dword ptr [ESP],ESI             ; 0047f90c
    MOV EDX,EAX                         ; 0047f90f
    TEST EAX,EAX                        ; 0047f911
    JL 0x0047f925                       ; 0047f913
        ;   XREF to: 0047f925 (CONDITIONAL_JUMP)  ; LAB_0047f925
    TEST ESI,ESI                        ; 0047f915
    JL 0x0047f925                       ; 0047f917
        ;   XREF to: 0047f925 (CONDITIONAL_JUMP)  ; LAB_0047f925
    CMP EAX,dword ptr [0x006141b8]      ; 0047f919 | DAT_006141b8
    JL 0x0047fa91                       ; 0047f91f
        ;   XREF to: 0047fa91 (CONDITIONAL_JUMP)  ; LAB_0047fa91
    MOV EAX,[0x01c2a37c]                ; 0047f925 | DAT_01c2a37c
        ;   Label: LAB_0047f925
    ADD EAX,EBP                         ; 0047f92a
    MOV dword ptr [ESP + 0x4],ESI       ; 0047f92c
    MOV EDX,EAX                         ; 0047f930
    TEST EAX,EAX                        ; 0047f932
    JL 0x0047f946                       ; 0047f934
        ;   XREF to: 0047f946 (CONDITIONAL_JUMP)  ; LAB_0047f946
    TEST ESI,ESI                        ; 0047f936
    JL 0x0047f946                       ; 0047f938
        ;   XREF to: 0047f946 (CONDITIONAL_JUMP)  ; LAB_0047f946
    CMP EAX,dword ptr [0x006141b8]      ; 0047f93a | DAT_006141b8
    JL 0x0047fafe                       ; 0047f940
        ;   XREF to: 0047fafe (CONDITIONAL_JUMP)  ; LAB_0047fafe
    INC EBP                             ; 0047f946
        ;   Label: LAB_0047f946
    JMP 0x0047f8ad                      ; 0047f947
        ;   XREF to: 0047f8ad (UNCONDITIONAL_JUMP)  ; LAB_0047f8ad
    CMP EBP,dword ptr [0x006141bc]      ; 0047f94c | DAT_006141bc
        ;   Label: LAB_0047f94c
    JGE 0x0047f8a3                      ; 0047f952
        ;   XREF to: 0047f8a3 (CONDITIONAL_JUMP)  ; LAB_0047f8a3
    TEST EBX,EBX                        ; 0047f958
    JZ 0x0047f98c                       ; 0047f95a
        ;   XREF to: 0047f98c (CONDITIONAL_JUMP)  ; LAB_0047f98c
    CMP EAX,dword ptr [0x01c35e48]      ; 0047f95c | DAT_01c35e48
    JL 0x0047f8a3                       ; 0047f962
        ;   XREF to: 0047f8a3 (CONDITIONAL_JUMP)  ; LAB_0047f8a3
    CMP EAX,dword ptr [0x01c35e50]      ; 0047f968 | DAT_01c35e50
    JGE 0x0047f8a3                      ; 0047f96e
        ;   XREF to: 0047f8a3 (CONDITIONAL_JUMP)  ; LAB_0047f8a3
    CMP EBP,dword ptr [0x01c35e4c]      ; 0047f974 | DAT_01c35e4c
    JL 0x0047f8a3                       ; 0047f97a
        ;   XREF to: 0047f8a3 (CONDITIONAL_JUMP)  ; LAB_0047f8a3
    CMP EBP,dword ptr [0x01c35e54]      ; 0047f980 | DAT_01c35e54
    JGE 0x0047f8a3                      ; 0047f986
        ;   XREF to: 0047f8a3 (CONDITIONAL_JUMP)  ; LAB_0047f8a3
    CMP dword ptr [0x01c25f84],0x0      ; 0047f98c | DAT_01c25f84
        ;   Label: LAB_0047f98c
    JZ 0x0047f9a4                       ; 0047f993
        ;   XREF to: 0047f9a4 (CONDITIONAL_JUMP)  ; LAB_0047f9a4
    PUSH EDX                            ; 0047f995
    PUSH EAX                            ; 0047f996
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047f997
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047f99c
    JMP 0x0047f8a3                      ; 0047f99f
        ;   XREF to: 0047f8a3 (UNCONDITIONAL_JUMP)  ; LAB_0047f8a3
    PUSH EDX                            ; 0047f9a4
        ;   Label: LAB_0047f9a4
    PUSH EAX                            ; 0047f9a5
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047f9a6
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047f9ab
    JMP 0x0047f8a3                      ; 0047f9ae
        ;   XREF to: 0047f8a3 (UNCONDITIONAL_JUMP)  ; LAB_0047f8a3
    CMP EDI,dword ptr [0x006141bc]      ; 0047f9b3 | DAT_006141bc
        ;   Label: LAB_0047f9b3
    JGE 0x0047f8e4                      ; 0047f9b9
        ;   XREF to: 0047f8e4 (CONDITIONAL_JUMP)  ; LAB_0047f8e4
    TEST EBX,EBX                        ; 0047f9bf
    JZ 0x0047f9f3                       ; 0047f9c1
        ;   XREF to: 0047f9f3 (CONDITIONAL_JUMP)  ; LAB_0047f9f3
    CMP EAX,dword ptr [0x01c35e48]      ; 0047f9c3 | DAT_01c35e48
    JL 0x0047f8e4                       ; 0047f9c9
        ;   XREF to: 0047f8e4 (CONDITIONAL_JUMP)  ; LAB_0047f8e4
    CMP EAX,dword ptr [0x01c35e50]      ; 0047f9cf | DAT_01c35e50
    JGE 0x0047f8e4                      ; 0047f9d5
        ;   XREF to: 0047f8e4 (CONDITIONAL_JUMP)  ; LAB_0047f8e4
    CMP EDI,dword ptr [0x01c35e4c]      ; 0047f9db | DAT_01c35e4c
    JL 0x0047f8e4                       ; 0047f9e1
        ;   XREF to: 0047f8e4 (CONDITIONAL_JUMP)  ; LAB_0047f8e4
    CMP EDI,dword ptr [0x01c35e54]      ; 0047f9e7 | DAT_01c35e54
    JGE 0x0047f8e4                      ; 0047f9ed
        ;   XREF to: 0047f8e4 (CONDITIONAL_JUMP)  ; LAB_0047f8e4
    CMP dword ptr [0x01c25f84],0x0      ; 0047f9f3 | DAT_01c25f84
        ;   Label: LAB_0047f9f3
    JZ 0x0047fa0f                       ; 0047f9fa
        ;   XREF to: 0047fa0f (CONDITIONAL_JUMP)  ; LAB_0047fa0f
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047f9fc
    PUSH EAX                            ; 0047fa00
    PUSH EDX                            ; 0047fa01
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047fa02
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047fa07
    JMP 0x0047f8e4                      ; 0047fa0a
        ;   XREF to: 0047f8e4 (UNCONDITIONAL_JUMP)  ; LAB_0047f8e4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047fa0f
        ;   Label: LAB_0047fa0f
    PUSH ECX                            ; 0047fa13
    PUSH EDX                            ; 0047fa14
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047fa15
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047fa1a
    JMP 0x0047f8e4                      ; 0047fa1d
        ;   XREF to: 0047f8e4 (UNCONDITIONAL_JUMP)  ; LAB_0047f8e4
    CMP EDI,dword ptr [0x006141bc]      ; 0047fa22 | DAT_006141bc
        ;   Label: LAB_0047fa22
    JGE 0x0047f905                      ; 0047fa28
        ;   XREF to: 0047f905 (CONDITIONAL_JUMP)  ; LAB_0047f905
    TEST EBX,EBX                        ; 0047fa2e
    JZ 0x0047fa62                       ; 0047fa30
        ;   XREF to: 0047fa62 (CONDITIONAL_JUMP)  ; LAB_0047fa62
    CMP EAX,dword ptr [0x01c35e48]      ; 0047fa32 | DAT_01c35e48
    JL 0x0047f905                       ; 0047fa38
        ;   XREF to: 0047f905 (CONDITIONAL_JUMP)  ; LAB_0047f905
    CMP EAX,dword ptr [0x01c35e50]      ; 0047fa3e | DAT_01c35e50
    JGE 0x0047f905                      ; 0047fa44
        ;   XREF to: 0047f905 (CONDITIONAL_JUMP)  ; LAB_0047f905
    CMP EDI,dword ptr [0x01c35e4c]      ; 0047fa4a | DAT_01c35e4c
    JL 0x0047f905                       ; 0047fa50
        ;   XREF to: 0047f905 (CONDITIONAL_JUMP)  ; LAB_0047f905
    CMP EDI,dword ptr [0x01c35e54]      ; 0047fa56 | DAT_01c35e54
    JGE 0x0047f905                      ; 0047fa5c
        ;   XREF to: 0047f905 (CONDITIONAL_JUMP)  ; LAB_0047f905
    CMP dword ptr [0x01c25f84],0x0      ; 0047fa62 | DAT_01c25f84
        ;   Label: LAB_0047fa62
    JZ 0x0047fa7e                       ; 0047fa69
        ;   XREF to: 0047fa7e (CONDITIONAL_JUMP)  ; LAB_0047fa7e
    PUSH EDX                            ; 0047fa6b
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047fa6c
    PUSH ECX                            ; 0047fa70
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047fa71
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047fa76
    JMP 0x0047f905                      ; 0047fa79
        ;   XREF to: 0047f905 (UNCONDITIONAL_JUMP)  ; LAB_0047f905
    PUSH EDX                            ; 0047fa7e
        ;   Label: LAB_0047fa7e
    MOV EDX,dword ptr [ESP + 0xc]       ; 0047fa7f
    PUSH EDX                            ; 0047fa83
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047fa84
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047fa89
    JMP 0x0047f905                      ; 0047fa8c
        ;   XREF to: 0047f905 (UNCONDITIONAL_JUMP)  ; LAB_0047f905
    CMP ESI,dword ptr [0x006141bc]      ; 0047fa91 | DAT_006141bc
        ;   Label: LAB_0047fa91
    JGE 0x0047f925                      ; 0047fa97
        ;   XREF to: 0047f925 (CONDITIONAL_JUMP)  ; LAB_0047f925
    TEST EBX,EBX                        ; 0047fa9d
    JZ 0x0047fad1                       ; 0047fa9f
        ;   XREF to: 0047fad1 (CONDITIONAL_JUMP)  ; LAB_0047fad1
    CMP EAX,dword ptr [0x01c35e48]      ; 0047faa1 | DAT_01c35e48
    JL 0x0047f925                       ; 0047faa7
        ;   XREF to: 0047f925 (CONDITIONAL_JUMP)  ; LAB_0047f925
    CMP EAX,dword ptr [0x01c35e50]      ; 0047faad | DAT_01c35e50
    JGE 0x0047f925                      ; 0047fab3
        ;   XREF to: 0047f925 (CONDITIONAL_JUMP)  ; LAB_0047f925
    CMP ESI,dword ptr [0x01c35e4c]      ; 0047fab9 | DAT_01c35e4c
    JL 0x0047f925                       ; 0047fabf
        ;   XREF to: 0047f925 (CONDITIONAL_JUMP)  ; LAB_0047f925
    CMP ESI,dword ptr [0x01c35e54]      ; 0047fac5 | DAT_01c35e54
    JGE 0x0047f925                      ; 0047facb
        ;   XREF to: 0047f925 (CONDITIONAL_JUMP)  ; LAB_0047f925
    CMP dword ptr [0x01c25f84],0x0      ; 0047fad1 | DAT_01c25f84
        ;   Label: LAB_0047fad1
    JZ 0x0047faec                       ; 0047fad8
        ;   XREF to: 0047faec (CONDITIONAL_JUMP)  ; LAB_0047faec
    MOV EAX,dword ptr [ESP]             ; 0047fada
    PUSH EAX                            ; 0047fadd
    PUSH EDX                            ; 0047fade
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047fadf
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047fae4
    JMP 0x0047f925                      ; 0047fae7
        ;   XREF to: 0047f925 (UNCONDITIONAL_JUMP)  ; LAB_0047f925
    MOV ECX,dword ptr [ESP]             ; 0047faec
        ;   Label: LAB_0047faec
    PUSH ECX                            ; 0047faef
    PUSH EDX                            ; 0047faf0
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047faf1
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047faf6
    JMP 0x0047f925                      ; 0047faf9
        ;   XREF to: 0047f925 (UNCONDITIONAL_JUMP)  ; LAB_0047f925
    CMP ESI,dword ptr [0x006141bc]      ; 0047fafe | DAT_006141bc
        ;   Label: LAB_0047fafe
    JGE 0x0047f946                      ; 0047fb04
        ;   XREF to: 0047f946 (CONDITIONAL_JUMP)  ; LAB_0047f946
    TEST EBX,EBX                        ; 0047fb0a
    JZ 0x0047fb3e                       ; 0047fb0c
        ;   XREF to: 0047fb3e (CONDITIONAL_JUMP)  ; LAB_0047fb3e
    CMP EAX,dword ptr [0x01c35e48]      ; 0047fb0e | DAT_01c35e48
    JL 0x0047f946                       ; 0047fb14
        ;   XREF to: 0047f946 (CONDITIONAL_JUMP)  ; LAB_0047f946
    CMP EAX,dword ptr [0x01c35e50]      ; 0047fb1a | DAT_01c35e50
    JGE 0x0047f946                      ; 0047fb20
        ;   XREF to: 0047f946 (CONDITIONAL_JUMP)  ; LAB_0047f946
    CMP ESI,dword ptr [0x01c35e4c]      ; 0047fb26 | DAT_01c35e4c
    JL 0x0047f946                       ; 0047fb2c
        ;   XREF to: 0047f946 (CONDITIONAL_JUMP)  ; LAB_0047f946
    CMP ESI,dword ptr [0x01c35e54]      ; 0047fb32 | DAT_01c35e54
    JGE 0x0047f946                      ; 0047fb38
        ;   XREF to: 0047f946 (CONDITIONAL_JUMP)  ; LAB_0047f946
    CMP dword ptr [0x01c25f84],0x0      ; 0047fb3e | DAT_01c25f84
        ;   Label: LAB_0047fb3e
    JZ 0x0047fb5b                       ; 0047fb45
        ;   XREF to: 0047fb5b (CONDITIONAL_JUMP)  ; LAB_0047fb5b
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047fb47
    PUSH EAX                            ; 0047fb4b
    PUSH EDX                            ; 0047fb4c
    CALL engine_mini3d.cpp_FUN_004f8fe0 ; 0047fb4d
        ;   XREF to: 004f8fe0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8fe0()
    ADD ESP,0x8                         ; 0047fb52
    INC EBP                             ; 0047fb55
    JMP 0x0047f8ad                      ; 0047fb56
        ;   XREF to: 0047f8ad (UNCONDITIONAL_JUMP)  ; LAB_0047f8ad
    MOV ECX,dword ptr [ESP + 0x4]       ; 0047fb5b
        ;   Label: LAB_0047fb5b
    PUSH ECX                            ; 0047fb5f
    PUSH EDX                            ; 0047fb60
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0047fb61
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0047fb66
    INC EBP                             ; 0047fb69
    JMP 0x0047f8ad                      ; 0047fb6a
        ;   XREF to: 0047f8ad (UNCONDITIONAL_JUMP)  ; LAB_0047f8ad
    JBE 0x0047f862                      ; 0047fb6f
        ;   XREF to: 0047f862 (CONDITIONAL_JUMP)  ; LAB_0047f862
        ;   Label: LAB_0047fb6f
    CMP EAX,0x2                         ; 0047fb75
    JZ 0x0047f581                       ; 0047fb78
        ;   XREF to: 0047f581 (CONDITIONAL_JUMP)  ; LAB_0047f581
    MOV EAX,0x5d2487                    ; 0047fb7e | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047fb7e
    MOV EDX,0x9a7                       ; 0047fb83
    PUSH 0x5d249d                       ; 0047fb88 | = "CEditorTools::setMousePointerType - i..."
    MOV [0x01d046a0],EAX                ; 0047fb8d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0047fb92 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047fb98
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047fb9d
    ADD ESP,0x10                        ; 0047fba0
        ;   Label: LAB_0047fba0
    POP EBP                             ; 0047fba3
    POP EDI                             ; 0047fba4
    POP ESI                             ; 0047fba5
    POP EBX                             ; 0047fba6
    RET                                 ; 0047fba7

