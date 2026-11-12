; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_load_FUN_004e7340(CGround *this_ptr,char *filename)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined1       Stack[-0xcc]:1  local_cc
; undefined1       Stack[-0xcb]:1  local_cb
; undefined1       Stack[-0xc8]:1  local_c8
; undefined        Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x7b]:1  local_7b
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_init_FUN_0059f380 at 0059f3ab
;
; Referenced Globals:
;   TerminatedCString s_core_ground_cpp_005e41f2
;   TerminatedCString s_eopen_ext_not_found_005e4205
;   TerminatedCString s_core_ground_cpp_005e421c
;   TerminatedCString s_eopen_Cannot_open_file_005e422f
;   TerminatedCString s_rb_005e438b
;   TerminatedCString s_raw_005e438e
;   undefined4 s_aw_005e438e+1
;   undefined4 s_w_005e438e+2
;   undefined4 s__005e438e+3
;   TerminatedCString s_data_005e4392
;   TerminatedCString s_rb_005e4397
;   TerminatedCString s_clr_005e439a
;   undefined4 s_lr_005e439a+1
;   undefined4 s_r_005e439a+2
;   undefined4 s__005e439a+3
;   ... and 3 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_texlist.cpp_CTextureList_load_FUN_005960d0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_stdio.c_fread_FUN_005c0b10
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7340
        ;   Label: core_ground.cpp_CGround_load_FUN_004e7340
    PUSH ESI                            ; 004e7341
    PUSH EDI                            ; 004e7342
    PUSH EBP                            ; 004e7343
    SUB ESP,0xbc                        ; 004e7344
    MOV EBX,dword ptr [ESP + 0xd0]      ; 004e734a
    MOV EDX,0x5e4392                    ; 004e7351 | = "data"
    MOV EBP,0x5e438e                    ; 004e7356 | = "raw"
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004e735b
    MOV EDI,ESP                         ; 004e7362
    MOV ECX,0x5e438b                    ; 004e7364 | = "rb"
    PUSH EDI                            ; 004e7369
    MOV AL,byte ptr [ESI]               ; 004e736a
        ;   Label: LAB_004e736a
    MOV byte ptr [EDI],AL               ; 004e736c
    CMP AL,0x0                          ; 004e736e
    JZ 0x004e7382                       ; 004e7370
        ;   XREF to: 004e7382 (CONDITIONAL_JUMP)  ; LAB_004e7382
    MOV AL,byte ptr [ESI + 0x1]         ; 004e7372
    ADD ESI,0x2                         ; 004e7375
    MOV byte ptr [EDI + 0x1],AL         ; 004e7378
    ADD EDI,0x2                         ; 004e737b
    CMP AL,0x0                          ; 004e737e
    JNZ 0x004e736a                      ; 004e7380
        ;   XREF to: 004e736a (CONDITIONAL_JUMP)  ; LAB_004e736a
    POP EDI                             ; 004e7382
        ;   Label: LAB_004e7382
    MOV ESI,ESP                         ; 004e7383
    MOV dword ptr [ESP + 0xa8],EDX      ; 004e7385 | = "data"
    MOV DL,0x2e                         ; 004e738c
    MOV dword ptr [ESP + 0xac],ECX      ; 004e738e | = "rb"
    MOV AL,byte ptr [ESI]               ; 004e7395
        ;   Label: LAB_004e7395
    CMP AL,DL                           ; 004e7397
    JZ 0x004e73ad                       ; 004e7399
        ;   XREF to: 004e73ad (CONDITIONAL_JUMP)  ; LAB_004e73ad
    CMP AL,0x0                          ; 004e739b
    JZ 0x004e73ab                       ; 004e739d
        ;   XREF to: 004e73ab (CONDITIONAL_JUMP)  ; LAB_004e73ab
    INC ESI                             ; 004e739f
    MOV AL,byte ptr [ESI]               ; 004e73a0
    CMP AL,DL                           ; 004e73a2
    JZ 0x004e73ad                       ; 004e73a4
        ;   XREF to: 004e73ad (CONDITIONAL_JUMP)  ; LAB_004e73ad
    INC ESI                             ; 004e73a6
    CMP AL,0x0                          ; 004e73a7
    JNZ 0x004e7395                      ; 004e73a9
        ;   XREF to: 004e7395 (CONDITIONAL_JUMP)  ; LAB_004e7395
    SUB ESI,ESI                         ; 004e73ab
        ;   Label: LAB_004e73ab
    MOV EDI,ESI                         ; 004e73ad
        ;   Label: LAB_004e73ad
    TEST ESI,ESI                        ; 004e73af
    JZ 0x004e7621                       ; 004e73b1
        ;   XREF to: 004e7621 (CONDITIONAL_JUMP)  ; LAB_004e7621
    INC EDI                             ; 004e73b7
        ;   Label: LAB_004e73b7
    MOV ESI,EBP                         ; 004e73b8
    MOV EDX,dword ptr [ESP + 0xac]      ; 004e73ba
    PUSH EDI                            ; 004e73c1
    MOV AL,byte ptr [ESI]               ; 004e73c2 | = "raw" | s_w_005e438e+2
        ;   Label: LAB_004e73c2
    MOV byte ptr [EDI],AL               ; 004e73c4
    CMP AL,0x0                          ; 004e73c6
    JZ 0x004e73da                       ; 004e73c8
        ;   XREF to: 004e73da (CONDITIONAL_JUMP)  ; LAB_004e73da
    MOV AL,byte ptr [ESI + 0x1]         ; 004e73ca | s_aw_005e438e+1 | s__005e438e+3
    ADD ESI,0x2                         ; 004e73cd
    MOV byte ptr [EDI + 0x1],AL         ; 004e73d0
    ADD EDI,0x2                         ; 004e73d3
    CMP AL,0x0                          ; 004e73d6
    JNZ 0x004e73c2                      ; 004e73d8
        ;   XREF to: 004e73c2 (CONDITIONAL_JUMP)  ; LAB_004e73c2
    POP EDI                             ; 004e73da
        ;   Label: LAB_004e73da
    PUSH EDX                            ; 004e73db | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 004e73dc
    PUSH EAX                            ; 004e73e0
    MOV ECX,dword ptr [ESP + 0xb0]      ; 004e73e1
    PUSH ECX                            ; 004e73e8 | = "data"
    CALL engine_dosio.cpp_FUN_00479180  ; 004e73e9
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004e73ee
    MOV ESI,EAX                         ; 004e73f1
    TEST EAX,EAX                        ; 004e73f3
    JNZ 0x004e741a                      ; 004e73f5
        ;   XREF to: 004e741a (CONDITIONAL_JUMP)  ; LAB_004e741a
    MOV EDI,0x5e421c                    ; 004e73f7 | = "..\\core\\ground.cpp"
    MOV EBP,0x44                        ; 004e73fc
    PUSH 0x5e422f                       ; 004e7401 | = "eopen - Cannot open file"
    MOV dword ptr [0x01d1d400],EDI      ; 004e7406 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 004e740c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004e7412
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004e7417
    XOR EAX,EAX                         ; 004e741a
        ;   Label: LAB_004e741a
    MOV EDX,dword ptr [EBX + 0x4]       ; 004e741c
    MOV dword ptr [ESP + 0xb4],EAX      ; 004e741f
    TEST EDX,EDX                        ; 004e7426
    JLE 0x004e748e                      ; 004e7428
        ;   XREF to: 004e748e (CONDITIONAL_JUMP)  ; LAB_004e748e
    MOV EBP,dword ptr [EBX]             ; 004e742a
        ;   Label: LAB_004e742a
    XOR EDI,EDI                         ; 004e742c
    TEST EBP,EBP                        ; 004e742e
    JLE 0x004e7478                      ; 004e7430
        ;   XREF to: 004e7478 (CONDITIONAL_JUMP)  ; LAB_004e7478
    MOV EBP,dword ptr [ESI + 0x4]       ; 004e7432
        ;   Label: LAB_004e7432
    TEST EBP,EBP                        ; 004e7435
    JLE 0x004e7450                      ; 004e7437
        ;   XREF to: 004e7450 (CONDITIONAL_JUMP)  ; LAB_004e7450
    MOV EAX,dword ptr [ESI]             ; 004e7439
    MOV AL,byte ptr [EAX]               ; 004e743b
    AND EAX,0xff                        ; 004e743d
    SUB EAX,0xd                         ; 004e7442
    CMP EAX,0xfd                        ; 004e7445
    JA 0x004e7648                       ; 004e744a
        ;   XREF to: 004e7648 (CONDITIONAL_JUMP)  ; LAB_004e7648
    PUSH ESI                            ; 004e7450
        ;   Label: LAB_004e7450
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 004e7451
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 004e7456
    SHL EAX,0x7                         ; 004e7459
        ;   Label: LAB_004e7459
    MOV EDX,dword ptr [EBX]             ; 004e745c
    MOV ECX,EAX                         ; 004e745e
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004e7460
    IMUL EAX,EDX                        ; 004e7467
    MOV EDX,dword ptr [EBX + 0x24]      ; 004e746a
    ADD EAX,EDI                         ; 004e746d
    MOV word ptr [EDX + EAX*0x4],CX     ; 004e746f
    INC EDI                             ; 004e7473
    CMP EDI,dword ptr [EBX]             ; 004e7474
    JL 0x004e7432                       ; 004e7476
        ;   XREF to: 004e7432 (CONDITIONAL_JUMP)  ; LAB_004e7432
    MOV ECX,dword ptr [ESP + 0xb4]      ; 004e7478
        ;   Label: LAB_004e7478
    INC ECX                             ; 004e747f
    MOV EDI,dword ptr [EBX + 0x4]       ; 004e7480
    MOV dword ptr [ESP + 0xb4],ECX      ; 004e7483
    CMP ECX,EDI                         ; 004e748a
    JL 0x004e742a                       ; 004e748c
        ;   XREF to: 004e742a (CONDITIONAL_JUMP)  ; LAB_004e742a
    PUSH ESI                            ; 004e748e
        ;   Label: LAB_004e748e
    MOV EBP,0x5e439e                    ; 004e748f | = "data"
    LEA EDI,[ESP + 0x54]                ; 004e7494
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004e7498
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    MOV EAX,0x5e4397                    ; 004e749d | = "rb"
    ADD ESP,0x4                         ; 004e74a2
    MOV DL,0x2e                         ; 004e74a5
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004e74a7
    MOV dword ptr [ESP + 0xa4],EBP      ; 004e74ae | = "data"
    MOV dword ptr [ESP + 0xa0],EAX      ; 004e74b5 | = "rb"
    PUSH EDI                            ; 004e74bc
    MOV AL,byte ptr [ESI]               ; 004e74bd
        ;   Label: LAB_004e74bd
    MOV byte ptr [EDI],AL               ; 004e74bf
    CMP AL,0x0                          ; 004e74c1
    JZ 0x004e74d5                       ; 004e74c3
        ;   XREF to: 004e74d5 (CONDITIONAL_JUMP)  ; LAB_004e74d5
    MOV AL,byte ptr [ESI + 0x1]         ; 004e74c5
    ADD ESI,0x2                         ; 004e74c8
    MOV byte ptr [EDI + 0x1],AL         ; 004e74cb
    ADD EDI,0x2                         ; 004e74ce
    CMP AL,0x0                          ; 004e74d1
    JNZ 0x004e74bd                      ; 004e74d3
        ;   XREF to: 004e74bd (CONDITIONAL_JUMP)  ; LAB_004e74bd
    POP EDI                             ; 004e74d5
        ;   Label: LAB_004e74d5
    LEA ESI,[ESP + 0x50]                ; 004e74d6
    MOV EBP,0x5e439a                    ; 004e74da | = "clr"
    MOV AL,byte ptr [ESI]               ; 004e74df
        ;   Label: LAB_004e74df
    CMP AL,DL                           ; 004e74e1
    JZ 0x004e74f7                       ; 004e74e3
        ;   XREF to: 004e74f7 (CONDITIONAL_JUMP)  ; LAB_004e74f7
    CMP AL,0x0                          ; 004e74e5
    JZ 0x004e74f5                       ; 004e74e7
        ;   XREF to: 004e74f5 (CONDITIONAL_JUMP)  ; LAB_004e74f5
    INC ESI                             ; 004e74e9
    MOV AL,byte ptr [ESI]               ; 004e74ea
    CMP AL,DL                           ; 004e74ec
    JZ 0x004e74f7                       ; 004e74ee
        ;   XREF to: 004e74f7 (CONDITIONAL_JUMP)  ; LAB_004e74f7
    INC ESI                             ; 004e74f0
    CMP AL,0x0                          ; 004e74f1
    JNZ 0x004e74df                      ; 004e74f3
        ;   XREF to: 004e74df (CONDITIONAL_JUMP)  ; LAB_004e74df
    SUB ESI,ESI                         ; 004e74f5
        ;   Label: LAB_004e74f5
    MOV EDI,ESI                         ; 004e74f7
        ;   Label: LAB_004e74f7
    TEST ESI,ESI                        ; 004e74f9
    JNZ 0x004e7520                      ; 004e74fb
        ;   XREF to: 004e7520 (CONDITIONAL_JUMP)  ; LAB_004e7520
    MOV EDX,0x5e41f2                    ; 004e74fd | = "..\\core\\ground.cpp"
    MOV ECX,0x40                        ; 004e7502
    PUSH 0x5e4205                       ; 004e7507 | = "eopen - ext not found!"
    MOV dword ptr [0x01d1d400],EDX      ; 004e750c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004e7512 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004e7518
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004e751d
    INC EDI                             ; 004e7520
        ;   Label: LAB_004e7520
    MOV ESI,EBP                         ; 004e7521
    PUSH EDI                            ; 004e7523
    MOV AL,byte ptr [ESI]               ; 004e7524 | = "clr" | s_r_005e439a+2
        ;   Label: LAB_004e7524
    MOV byte ptr [EDI],AL               ; 004e7526
    CMP AL,0x0                          ; 004e7528
    JZ 0x004e753c                       ; 004e752a
        ;   XREF to: 004e753c (CONDITIONAL_JUMP)  ; LAB_004e753c
    MOV AL,byte ptr [ESI + 0x1]         ; 004e752c | s_lr_005e439a+1 | s__005e439a+3
    ADD ESI,0x2                         ; 004e752f
    MOV byte ptr [EDI + 0x1],AL         ; 004e7532
    ADD EDI,0x2                         ; 004e7535
    CMP AL,0x0                          ; 004e7538
    JNZ 0x004e7524                      ; 004e753a
        ;   XREF to: 004e7524 (CONDITIONAL_JUMP)  ; LAB_004e7524
    POP EDI                             ; 004e753c
        ;   Label: LAB_004e753c
    MOV ESI,dword ptr [ESP + 0xa0]      ; 004e753d
    PUSH ESI                            ; 004e7544 | = "rb"
    LEA EAX,[ESP + 0x54]                ; 004e7545
    PUSH EAX                            ; 004e7549
    MOV EDI,dword ptr [ESP + 0xac]      ; 004e754a
    PUSH EDI                            ; 004e7551 | = "data"
    CALL engine_dosio.cpp_FUN_00479180  ; 004e7552
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004e7557
    MOV ESI,EAX                         ; 004e755a
    TEST EAX,EAX                        ; 004e755c
    JNZ 0x004e7582                      ; 004e755e
        ;   XREF to: 004e7582 (CONDITIONAL_JUMP)  ; LAB_004e7582
    MOV EBP,0x5e421c                    ; 004e7560 | = "..\\core\\ground.cpp"
    MOV EAX,0x44                        ; 004e7565
    PUSH 0x5e422f                       ; 004e756a | = "eopen - Cannot open file"
    MOV dword ptr [0x01d1d400],EBP      ; 004e756f | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004e7575 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004e757a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004e757f
    MOV dword ptr [ESP + 0xb0],ESI      ; 004e7582
        ;   Label: LAB_004e7582
    XOR EDX,EDX                         ; 004e7589
    MOV ECX,dword ptr [EBX + 0x4]       ; 004e758b
    MOV dword ptr [ESP + 0xb8],EDX      ; 004e758e
    TEST ECX,ECX                        ; 004e7595
    JLE 0x004e75f0                      ; 004e7597
        ;   XREF to: 004e75f0 (CONDITIONAL_JUMP)  ; LAB_004e75f0
    MOV EBP,0x2                         ; 004e7599
    MOV EDI,dword ptr [EBX]             ; 004e759e
        ;   Label: LAB_004e759e
    XOR ESI,ESI                         ; 004e75a0
    TEST EDI,EDI                        ; 004e75a2
    JLE 0x004e75da                      ; 004e75a4
        ;   XREF to: 004e75da (CONDITIONAL_JUMP)  ; LAB_004e75da
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004e75a6
        ;   Label: LAB_004e75a6
    MOV EDX,dword ptr [EBX]             ; 004e75ad
    PUSH EAX                            ; 004e75af
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004e75b0
    IMUL EAX,EDX                        ; 004e75b7
    ADD EAX,ESI                         ; 004e75ba
    MOV EDI,dword ptr [EBX + 0x24]      ; 004e75bc
    SHL EAX,0x2                         ; 004e75bf
    PUSH EBP                            ; 004e75c2
    ADD EAX,EDI                         ; 004e75c3
    PUSH 0x1                            ; 004e75c5
    ADD EAX,0x2                         ; 004e75c7
    PUSH EAX                            ; 004e75ca
    INC ESI                             ; 004e75cb
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 004e75cc
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005c0b10(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    MOV ECX,dword ptr [EBX]             ; 004e75d1
    ADD ESP,0x10                        ; 004e75d3
    CMP ESI,ECX                         ; 004e75d6
    JL 0x004e75a6                       ; 004e75d8
        ;   XREF to: 004e75a6 (CONDITIONAL_JUMP)  ; LAB_004e75a6
    MOV EDX,dword ptr [ESP + 0xb8]      ; 004e75da
        ;   Label: LAB_004e75da
    INC EDX                             ; 004e75e1
    MOV ECX,dword ptr [EBX + 0x4]       ; 004e75e2
    MOV dword ptr [ESP + 0xb8],EDX      ; 004e75e5
    CMP EDX,ECX                         ; 004e75ec
    JL 0x004e759e                       ; 004e75ee
        ;   XREF to: 004e759e (CONDITIONAL_JUMP)  ; LAB_004e759e
    MOV ESI,dword ptr [ESP + 0xb0]      ; 004e75f0
        ;   Label: LAB_004e75f0
    PUSH ESI                            ; 004e75f7
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004e75f8
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004e75fd
    MOV EDI,dword ptr [ESP + 0xd4]      ; 004e7600
    PUSH EDI                            ; 004e7607
    MOV EBP,dword ptr [EBX + 0x28]      ; 004e7608
    PUSH EBP                            ; 004e760b
    CALL core_texlist.cpp_CTextureList_load_FUN_005960d0 ; 004e760c
        ;   XREF to: 005960d0 (UNCONDITIONAL_CALL)  ; void core_texlist.cpp_CTextureList_load_FUN_005960d0(CTextureList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004e7611
    ADD ESP,0xbc                        ; 004e7614
    POP EBP                             ; 004e761a
    POP EDI                             ; 004e761b
    POP ESI                             ; 004e761c
    POP EBX                             ; 004e761d
    MOV EAX,EAX                         ; 004e761e
    RET                                 ; 004e7620
    MOV ESI,0x5e41f2                    ; 004e7621 | = "..\\core\\ground.cpp"
        ;   Label: LAB_004e7621
    MOV EAX,0x40                        ; 004e7626
    PUSH 0x5e4205                       ; 004e762b | = "eopen - ext not found!"
    MOV dword ptr [0x01d1d400],ESI      ; 004e7630 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004e7636 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004e763b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004e7640
    JMP 0x004e73b7                      ; 004e7643
        ;   XREF to: 004e73b7 (UNCONDITIONAL_JUMP)  ; LAB_004e73b7
    LEA EAX,[EBP + -0x1]                ; 004e7648
        ;   Label: LAB_004e7648
    MOV dword ptr [ESI + 0x4],EAX       ; 004e764b
    MOV EAX,dword ptr [ESI]             ; 004e764e
    LEA EDX,[EAX + 0x1]                 ; 004e7650
    MOV dword ptr [ESI],EDX             ; 004e7653
    MOV AL,byte ptr [EAX]               ; 004e7655
    AND EAX,0xff                        ; 004e7657
    JMP 0x004e7459                      ; 004e765c
        ;   XREF to: 004e7459 (UNCONDITIONAL_JUMP)  ; LAB_004e7459

