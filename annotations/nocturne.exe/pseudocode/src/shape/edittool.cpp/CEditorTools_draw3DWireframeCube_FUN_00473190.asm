; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_00473190(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   corner1
; CVector3f *      Stack[0xc]:4   corner2
; int              Stack[0x10]:4   color_value
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_drawCenteredWireframeCube_FUN_00473650 at 004736ae
;
; Referenced Globals:
;   float FLOAT_0057eaaa = 0.2000000
;   double DOUBLE_0057eaae = 0.0000305175853213768
;   undefined4 DAT_0059ca4c
;   undefined4 DAT_01c00c70
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;   engine_3d.c_clipAndDrawLine2D_FUN_00409290
;   engine_matrix.c_transformToCache_FUN_004cd210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473190
        ;   Label: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_00473190
    PUSH ESI                            ; 00473191
    PUSH EDI                            ; 00473192
    PUSH EBP                            ; 00473193
    SUB ESP,0x100                       ; 00473194
    MOV EBX,dword ptr [ESP + 0x118]     ; 0047319a
    MOV ESI,dword ptr [ESP + 0x11c]     ; 004731a1
    PUSH 0x5993b0                       ; 004731a8
    PUSH 0x8                            ; 004731ad
    LEA EAX,[ESP + 0x8]                 ; 004731af
    PUSH EAX                            ; 004731b3
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004731b4
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004731b9
    XOR EAX,EAX                         ; 004731bc
    MOV EDX,dword ptr [ESI]             ; 004731be
        ;   Label: LAB_004731be
    MOV dword ptr [ESP + 0xf4],EDX      ; 004731c0
    IMUL EDX,EAX,0xc                    ; 004731c7
    MOV EDI,dword ptr [ESP + 0xf4]      ; 004731ca
        ;   Label: LAB_004731ca
    MOV dword ptr [ESP + EDX*0x1],EDI   ; 004731d1
    TEST AL,0x2                         ; 004731d4
    JNZ 0x0047363b                      ; 004731d6
        ;   XREF to: 0047363b (CONDITIONAL_JUMP)  ; LAB_0047363b
    MOV EDI,dword ptr [ESI + 0x4]       ; 004731dc
    MOV dword ptr [ESP + 0xfc],EDI      ; 004731df
        ;   Label: LAB_004731df
    MOV EDI,dword ptr [ESP + 0xfc]      ; 004731e6
    MOV dword ptr [ESP + EDX*0x1 + 0x4],EDI ; 004731ed
    TEST AL,0x4                         ; 004731f1
    JZ 0x00473643                       ; 004731f3
        ;   XREF to: 00473643 (CONDITIONAL_JUMP)  ; LAB_00473643
    MOV EDI,dword ptr [EBX + 0x8]       ; 004731f9
    MOV dword ptr [ESP + 0xf8],EDI      ; 004731fc
        ;   Label: LAB_004731fc
    ADD EDX,0xc                         ; 00473203
    MOV EDI,dword ptr [ESP + 0xf8]      ; 00473206
    INC EAX                             ; 0047320d
    MOV dword ptr [ESP + EDX*0x1 + -0x4],EDI ; 0047320e
    CMP EAX,0x8                         ; 00473212
    JL 0x00473625                       ; 00473215
        ;   XREF to: 00473625 (CONDITIONAL_JUMP)  ; LAB_00473625
    MOV EAX,dword ptr [ESP + 0x120]     ; 0047321b
    XOR EDX,EDX                         ; 00473222
    MOV EBP,ESP                         ; 00473224
    MOV dword ptr [ESP + 0xf0],EDX      ; 00473226
    MOV [0x01c00c70],EAX                ; 0047322d | DAT_01c00c70
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00473232
        ;   Label: LAB_00473232
    XOR AL,0x1                          ; 00473239
    IMUL EAX,EAX,0xc                    ; 0047323b
    MOV ESI,ESP                         ; 0047323e
    LEA EBX,[ESP + 0x84]                ; 00473240
    ADD ESI,EAX                         ; 00473247
    MOV EAX,EBP                         ; 00473249
    FLD float ptr [EAX]                 ; 0047324b
    FMUL float ptr [0x0059ca4c]         ; 0047324d | DAT_0059ca4c
    FISTP dword ptr [EBX]               ; 00473253
    FLD float ptr [EAX + 0x4]           ; 00473255
    FMUL float ptr [0x0059ca4c]         ; 00473258 | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x4]         ; 0047325e
    FLD float ptr [EAX + 0x8]           ; 00473261
    FMUL float ptr [0x0059ca4c]         ; 00473264 | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x8]         ; 0047326a
    LEA EAX,[ESP + 0x84]                ; 0047326d
    PUSH EAX                            ; 00473274
    PUSH 0x0                            ; 00473275
    CALL engine_matrix.c_transformToCache_FUN_004cd210 ; 00473277
        ;   XREF to: 004cd210 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004cd210(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [ESI]                 ; 0047327c
    FMUL float ptr [0x0057eaaa]         ; 0047327e | FLOAT_0057eaaa
    ADD ESP,0x8                         ; 00473284
    FSTP float ptr [ESP + 0xa8]         ; 00473287
    FLD float ptr [ESI + 0x4]           ; 0047328e
    FMUL float ptr [0x0057eaaa]         ; 00473291 | FLOAT_0057eaaa
    FSTP float ptr [ESP + 0xac]         ; 00473297
    FLD float ptr [ESI + 0x8]           ; 0047329e
    FMUL float ptr [0x0057eaaa]         ; 004732a1 | FLOAT_0057eaaa
    FSTP float ptr [ESP + 0xb0]         ; 004732a7
    FLD float ptr [EBP]                 ; 004732ae
    FMUL float ptr [0x0057eaae]         ; 004732b1 | DOUBLE_0057eaae
    FSTP float ptr [ESP + 0xd8]         ; 004732b7
    FLD float ptr [EBP + 0x4]           ; 004732be
    FMUL float ptr [0x0057eaae]         ; 004732c1 | DOUBLE_0057eaae
    FSTP float ptr [ESP + 0xdc]         ; 004732c7
    FLD float ptr [EBP + 0x8]           ; 004732ce
    FMUL float ptr [0x0057eaae]         ; 004732d1 | DOUBLE_0057eaae
    LEA EBX,[ESP + 0x84]                ; 004732d7
    LEA EAX,[ESP + 0xcc]                ; 004732de
    FLD float ptr [ESP + 0xd8]          ; 004732e5
    FADD float ptr [ESP + 0xa8]         ; 004732ec
    FLD float ptr [ESP + 0xdc]          ; 004732f3
    FXCH                                ; 004732fa
    FSTP float ptr [ESP + 0xcc]         ; 004732fc
    FADD float ptr [ESP + 0xac]         ; 00473303
    FXCH                                ; 0047330a
    FST float ptr [ESP + 0xe0]          ; 0047330c
    FADD float ptr [ESP + 0xb0]         ; 00473313
    FXCH                                ; 0047331a
    FSTP float ptr [ESP + 0xd0]         ; 0047331c
    FSTP float ptr [ESP + 0xd4]         ; 00473323
    FLD float ptr [EAX]                 ; 0047332a
    FMUL float ptr [0x0059ca4c]         ; 0047332c | DAT_0059ca4c
    FISTP dword ptr [EBX]               ; 00473332
    FLD float ptr [EAX + 0x4]           ; 00473334
    FMUL float ptr [0x0059ca4c]         ; 00473337 | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x4]         ; 0047333d
    FLD float ptr [EAX + 0x8]           ; 00473340
    FMUL float ptr [0x0059ca4c]         ; 00473343 | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x8]         ; 00473349
    LEA EAX,[ESP + 0x84]                ; 0047334c
    PUSH EAX                            ; 00473353
    PUSH 0x1                            ; 00473354
    CALL engine_matrix.c_transformToCache_FUN_004cd210 ; 00473356
        ;   XREF to: 004cd210 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004cd210(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 0047335b
    MOV ESI,0x5c5044                    ; 0047335e
    SUB ESP,0x30                        ; 00473363
    MOV ECX,0xc                         ; 00473366
    MOV EDI,ESP                         ; 0047336b
    MOVSD.REP ES:EDI,ESI                ; 0047336d
    SUB ESP,0x30                        ; 0047336f
    MOV ECX,0xc                         ; 00473372
    MOV ESI,0x5c5014                    ; 00473377
    MOV EDI,ESP                         ; 0047337c
    MOVSD.REP ES:EDI,ESI                ; 0047337e
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00409290 ; 00473380
        ;   XREF to: 00409290 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_clipAndDrawLine2D_FUN_00409290()
    ADD ESP,0x60                        ; 00473385
    MOV ESI,dword ptr [ESP + 0xf0]      ; 00473388
    XOR SI,0x2                          ; 0047338f
    IMUL ESI,ESI,0xc                    ; 00473393
    MOV EAX,ESP                         ; 00473396
    LEA EBX,[ESP + 0x60]                ; 00473398
    ADD ESI,EAX                         ; 0047339c
    MOV EAX,EBP                         ; 0047339e
    FLD float ptr [EAX]                 ; 004733a0
    FMUL float ptr [0x0059ca4c]         ; 004733a2 | DAT_0059ca4c
    FISTP dword ptr [EBX]               ; 004733a8
    FLD float ptr [EAX + 0x4]           ; 004733aa
    FMUL float ptr [0x0059ca4c]         ; 004733ad | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x4]         ; 004733b3
    FLD float ptr [EAX + 0x8]           ; 004733b6
    FMUL float ptr [0x0059ca4c]         ; 004733b9 | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x8]         ; 004733bf
    LEA EAX,[ESP + 0x60]                ; 004733c2
    PUSH EAX                            ; 004733c6
    PUSH 0x0                            ; 004733c7
    CALL engine_matrix.c_transformToCache_FUN_004cd210 ; 004733c9
        ;   XREF to: 004cd210 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004cd210(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [ESI]                 ; 004733ce
    FMUL float ptr [0x0057eaaa]         ; 004733d0 | FLOAT_0057eaaa
    ADD ESP,0x8                         ; 004733d6
    FSTP float ptr [ESP + 0x78]         ; 004733d9
    FLD float ptr [ESI + 0x4]           ; 004733dd
    FMUL float ptr [0x0057eaaa]         ; 004733e0 | FLOAT_0057eaaa
    FSTP float ptr [ESP + 0x7c]         ; 004733e6
    FLD float ptr [ESI + 0x8]           ; 004733ea
    FMUL float ptr [0x0057eaaa]         ; 004733ed | FLOAT_0057eaaa
    FSTP float ptr [ESP + 0x80]         ; 004733f3
    FLD float ptr [EBP]                 ; 004733fa
    FMUL float ptr [0x0057eaae]         ; 004733fd | DOUBLE_0057eaae
    FSTP float ptr [ESP + 0x9c]         ; 00473403
    FLD float ptr [EBP + 0x4]           ; 0047340a
    FMUL float ptr [0x0057eaae]         ; 0047340d | DOUBLE_0057eaae
    FSTP float ptr [ESP + 0xa0]         ; 00473413
    FLD float ptr [EBP + 0x8]           ; 0047341a
    FMUL float ptr [0x0057eaae]         ; 0047341d | DOUBLE_0057eaae
    FLD float ptr [ESP + 0x9c]          ; 00473423
    FADD float ptr [ESP + 0x78]         ; 0047342a
    FLD float ptr [ESP + 0xa0]          ; 0047342e
    FXCH                                ; 00473435
    FSTP float ptr [ESP + 0xe4]         ; 00473437
    FADD float ptr [ESP + 0x7c]         ; 0047343e
    FXCH                                ; 00473442
    FST float ptr [ESP + 0xa4]          ; 00473444
    FADD float ptr [ESP + 0x80]         ; 0047344b
    FXCH                                ; 00473452
    FSTP float ptr [ESP + 0xe8]         ; 00473454
    FSTP float ptr [ESP + 0xec]         ; 0047345b
    LEA EBX,[ESP + 0x60]                ; 00473462
    LEA EAX,[ESP + 0xe4]                ; 00473466
    FLD float ptr [EAX]                 ; 0047346d
    FMUL float ptr [0x0059ca4c]         ; 0047346f | DAT_0059ca4c
    FISTP dword ptr [EBX]               ; 00473475
    FLD float ptr [EAX + 0x4]           ; 00473477
    FMUL float ptr [0x0059ca4c]         ; 0047347a | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x4]         ; 00473480
    FLD float ptr [EAX + 0x8]           ; 00473483
    FMUL float ptr [0x0059ca4c]         ; 00473486 | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x8]         ; 0047348c
    LEA EAX,[ESP + 0x60]                ; 0047348f
    PUSH EAX                            ; 00473493
    PUSH 0x1                            ; 00473494
    CALL engine_matrix.c_transformToCache_FUN_004cd210 ; 00473496
        ;   XREF to: 004cd210 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004cd210(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 0047349b
    MOV ESI,0x5c5044                    ; 0047349e
    SUB ESP,0x30                        ; 004734a3
    MOV ECX,0xc                         ; 004734a6
    MOV EDI,ESP                         ; 004734ab
    MOVSD.REP ES:EDI,ESI                ; 004734ad
    SUB ESP,0x30                        ; 004734af
    MOV ECX,0xc                         ; 004734b2
    MOV ESI,0x5c5014                    ; 004734b7
    MOV EDI,ESP                         ; 004734bc
    MOVSD.REP ES:EDI,ESI                ; 004734be
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00409290 ; 004734c0
        ;   XREF to: 00409290 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_clipAndDrawLine2D_FUN_00409290()
    ADD ESP,0x60                        ; 004734c5
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004734c8
    XOR AL,0x4                          ; 004734cf
    IMUL EAX,EAX,0xc                    ; 004734d1
    MOV ESI,ESP                         ; 004734d4
    LEA EBX,[ESP + 0xc0]                ; 004734d6
    ADD ESI,EAX                         ; 004734dd
    MOV EAX,EBP                         ; 004734df
    FLD float ptr [EAX]                 ; 004734e1
    FMUL float ptr [0x0059ca4c]         ; 004734e3 | DAT_0059ca4c
    FISTP dword ptr [EBX]               ; 004734e9
    FLD float ptr [EAX + 0x4]           ; 004734eb
    FMUL float ptr [0x0059ca4c]         ; 004734ee | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x4]         ; 004734f4
    FLD float ptr [EAX + 0x8]           ; 004734f7
    FMUL float ptr [0x0059ca4c]         ; 004734fa | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x8]         ; 00473500
    LEA EAX,[ESP + 0xc0]                ; 00473503
    PUSH EAX                            ; 0047350a
    PUSH 0x0                            ; 0047350b
    CALL engine_matrix.c_transformToCache_FUN_004cd210 ; 0047350d
        ;   XREF to: 004cd210 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004cd210(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [0x0057eaaa]          ; 00473512 | FLOAT_0057eaaa
    FLD float ptr [ESI]                 ; 00473518
    FMUL ST1                            ; 0047351a
    ADD ESP,0x8                         ; 0047351c
    FSTP float ptr [ESP + 0x90]         ; 0047351f
    FLD float ptr [ESI + 0x4]           ; 00473526
    FMUL ST1                            ; 00473529
    FSTP float ptr [ESP + 0x94]         ; 0047352b
    FMUL float ptr [ESI + 0x8]          ; 00473532
    FSTP float ptr [ESP + 0x98]         ; 00473535
    FLD float ptr [0x0057eaae]          ; 0047353c | DOUBLE_0057eaae
    FLD float ptr [EBP]                 ; 00473542
    FMUL ST1                            ; 00473545
    FSTP float ptr [ESP + 0x6c]         ; 00473547
    FLD float ptr [EBP + 0x4]           ; 0047354b
    FMUL ST1                            ; 0047354e
    FSTP float ptr [ESP + 0x70]         ; 00473550
    FMUL float ptr [EBP + 0x8]          ; 00473554
    LEA EBX,[ESP + 0xc0]                ; 00473557
    LEA EAX,[ESP + 0xb4]                ; 0047355e
    FLD float ptr [ESP + 0x6c]          ; 00473565
    FADD float ptr [ESP + 0x90]         ; 00473569
    FLD float ptr [ESP + 0x70]          ; 00473570
    FXCH                                ; 00473574
    FSTP float ptr [ESP + 0xb4]         ; 00473576
    FADD float ptr [ESP + 0x94]         ; 0047357d
    FXCH                                ; 00473584
    FST float ptr [ESP + 0x74]          ; 00473586
    FADD float ptr [ESP + 0x98]         ; 0047358a
    FXCH                                ; 00473591
    FSTP float ptr [ESP + 0xb8]         ; 00473593
    FSTP float ptr [ESP + 0xbc]         ; 0047359a
    FLD float ptr [EAX]                 ; 004735a1
    FMUL float ptr [0x0059ca4c]         ; 004735a3 | DAT_0059ca4c
    FISTP dword ptr [EBX]               ; 004735a9
    FLD float ptr [EAX + 0x4]           ; 004735ab
    FMUL float ptr [0x0059ca4c]         ; 004735ae | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x4]         ; 004735b4
    FLD float ptr [EAX + 0x8]           ; 004735b7
    FMUL float ptr [0x0059ca4c]         ; 004735ba | DAT_0059ca4c
    FISTP dword ptr [EBX + 0x8]         ; 004735c0
    LEA EAX,[ESP + 0xc0]                ; 004735c3
    PUSH EAX                            ; 004735ca
    PUSH 0x1                            ; 004735cb
    CALL engine_matrix.c_transformToCache_FUN_004cd210 ; 004735cd
        ;   XREF to: 004cd210 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004cd210(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004735d2
    MOV ESI,0x5c5044                    ; 004735d5
    SUB ESP,0x30                        ; 004735da
    MOV ECX,0xc                         ; 004735dd
    MOV EDI,ESP                         ; 004735e2
    MOVSD.REP ES:EDI,ESI                ; 004735e4
    SUB ESP,0x30                        ; 004735e6
    MOV ECX,0xc                         ; 004735e9
    MOV ESI,0x5c5014                    ; 004735ee
    MOV EDI,ESP                         ; 004735f3
    MOVSD.REP ES:EDI,ESI                ; 004735f5
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00409290 ; 004735f7
        ;   XREF to: 00409290 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_clipAndDrawLine2D_FUN_00409290()
    ADD ESP,0x60                        ; 004735fc
    MOV ECX,dword ptr [ESP + 0xf0]      ; 004735ff
    INC ECX                             ; 00473606
    ADD EBP,0xc                         ; 00473607
    MOV dword ptr [ESP + 0xf0],ECX      ; 0047360a
    CMP ECX,0x8                         ; 00473611
    JL 0x00473232                       ; 00473614
        ;   XREF to: 00473232 (CONDITIONAL_JUMP)  ; LAB_00473232
    ADD ESP,0x100                       ; 0047361a
    POP EBP                             ; 00473620
    POP EDI                             ; 00473621
    POP ESI                             ; 00473622
    POP EBX                             ; 00473623
    RET                                 ; 00473624
    TEST AL,0x1                         ; 00473625
        ;   Label: LAB_00473625
    JZ 0x004731be                       ; 00473627
        ;   XREF to: 004731be (CONDITIONAL_JUMP)  ; LAB_004731be
    MOV EDI,dword ptr [EBX]             ; 0047362d
    MOV dword ptr [ESP + 0xf4],EDI      ; 0047362f
    JMP 0x004731ca                      ; 00473636
        ;   XREF to: 004731ca (UNCONDITIONAL_JUMP)  ; LAB_004731ca
    MOV EDI,dword ptr [EBX + 0x4]       ; 0047363b
        ;   Label: LAB_0047363b
    JMP 0x004731df                      ; 0047363e
        ;   XREF to: 004731df (UNCONDITIONAL_JUMP)  ; LAB_004731df
    MOV EDI,dword ptr [ESI + 0x8]       ; 00473643
        ;   Label: LAB_00473643
    JMP 0x004731fc                      ; 00473646
        ;   XREF to: 004731fc (UNCONDITIONAL_JUMP)  ; LAB_004731fc

