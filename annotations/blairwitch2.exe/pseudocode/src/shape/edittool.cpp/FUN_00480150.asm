; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00480150(undefined4 param_1,int *param_2,int *param_3,uint param_4)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00480720 at 004807b0
;
; Referenced Globals:
;   undefined4 DAT_005d24ef
;   undefined4 DAT_005d24f3
;   undefined4 DAT_005f5cec
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;   engine_3d.c_clipAndDrawLine2D_FUN_00407cc0
;   engine_matrix.c_transformToCache_FUN_004e8e60
;   engine_mini3d.cpp_setColor_FUN_004f8e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480150
        ;   Label: shape_edittool.cpp_FUN_00480150
    PUSH ESI                            ; 00480151
    PUSH EDI                            ; 00480152
    PUSH EBP                            ; 00480153
    SUB ESP,0x16c                       ; 00480154
    MOV EBX,dword ptr [ESP + 0x184]     ; 0048015a
    MOV ESI,dword ptr [ESP + 0x188]     ; 00480161
    MOV EBP,dword ptr [ESP + 0x18c]     ; 00480168
    PUSH 0x5f22b0                       ; 0048016f
    PUSH 0x8                            ; 00480174
    LEA EAX,[ESP + 0x8]                 ; 00480176
    PUSH EAX                            ; 0048017a
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0048017b
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00480180
    XOR EAX,EAX                         ; 00480183
    MOV EDX,dword ptr [ESI]             ; 00480185
        ;   Label: LAB_00480185
    MOV dword ptr [ESP + 0x160],EDX     ; 00480187
    IMUL EDX,EAX,0xc                    ; 0048018e
    MOV EDI,dword ptr [ESP + 0x160]     ; 00480191
        ;   Label: LAB_00480191
    MOV dword ptr [ESP + EDX*0x1],EDI   ; 00480198
    TEST AL,0x2                         ; 0048019b
    JNZ 0x004801e5                      ; 0048019d
        ;   XREF to: 004801e5 (CONDITIONAL_JUMP)  ; LAB_004801e5
    MOV EDI,dword ptr [ESI + 0x4]       ; 0048019f
    MOV dword ptr [ESP + 0x164],EDI     ; 004801a2
        ;   Label: LAB_004801a2
    MOV EDI,dword ptr [ESP + 0x164]     ; 004801a9
    MOV dword ptr [ESP + EDX*0x1 + 0x4],EDI ; 004801b0
    TEST AL,0x4                         ; 004801b4
    JZ 0x004801ea                       ; 004801b6
        ;   XREF to: 004801ea (CONDITIONAL_JUMP)  ; LAB_004801ea
    MOV EDI,dword ptr [EBX + 0x8]       ; 004801b8
    MOV dword ptr [ESP + 0x168],EDI     ; 004801bb
        ;   Label: LAB_004801bb
    ADD EDX,0xc                         ; 004801c2
    MOV EDI,dword ptr [ESP + 0x168]     ; 004801c5
    INC EAX                             ; 004801cc
    MOV dword ptr [ESP + EDX*0x1 + -0x4],EDI ; 004801cd
    CMP EAX,0x8                         ; 004801d1
    JGE 0x004801ef                      ; 004801d4
        ;   XREF to: 004801ef (CONDITIONAL_JUMP)  ; LAB_004801ef
    TEST AL,0x1                         ; 004801d6
    JZ 0x00480185                       ; 004801d8
        ;   XREF to: 00480185 (CONDITIONAL_JUMP)  ; LAB_00480185
    MOV EDI,dword ptr [EBX]             ; 004801da
    MOV dword ptr [ESP + 0x160],EDI     ; 004801dc
    JMP 0x00480191                      ; 004801e3
        ;   XREF to: 00480191 (UNCONDITIONAL_JUMP)  ; LAB_00480191
    MOV EDI,dword ptr [EBX + 0x4]       ; 004801e5
        ;   Label: LAB_004801e5
    JMP 0x004801a2                      ; 004801e8
        ;   XREF to: 004801a2 (UNCONDITIONAL_JUMP)  ; LAB_004801a2
    MOV EDI,dword ptr [ESI + 0x8]       ; 004801ea
        ;   Label: LAB_004801ea
    JMP 0x004801bb                      ; 004801ed
        ;   XREF to: 004801bb (UNCONDITIONAL_JUMP)  ; LAB_004801bb
    CMP dword ptr [0x01c25f84],0x0      ; 004801ef | DAT_01c25f84
        ;   Label: LAB_004801ef
    JZ 0x0048070c                       ; 004801f6
        ;   XREF to: 0048070c (CONDITIONAL_JUMP)  ; LAB_0048070c
    MOV EDX,EBP                         ; 004801fc
    AND EDX,0xff                        ; 004801fe
    LEA EAX,[EDX*0x4 + 0x0]             ; 00480204
    SUB EAX,EDX                         ; 0048020b
    XOR EBX,EBX                         ; 0048020d
    XOR EDX,EDX                         ; 0048020f
    MOV BL,byte ptr [EAX + 0x1c35839]   ; 00480211
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 00480217
    SHL EBX,0x8                         ; 0048021d
    SHL EDX,0x10                        ; 00480220
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 00480223
    OR EDX,EBX                          ; 00480229
    AND EAX,0xff                        ; 0048022b
    OR EAX,EDX                          ; 00480230
    PUSH EAX                            ; 00480232
    CALL engine_mini3d.cpp_setColor_FUN_004f8e20 ; 00480233
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setColor_FUN_004f8e20(uint rgb)
    ADD ESP,0x4                         ; 00480238
    XOR ECX,ECX                         ; 0048023b
        ;   Label: LAB_0048023b
    MOV EBP,ESP                         ; 0048023d
    MOV dword ptr [ESP + 0x15c],ECX     ; 0048023f
    MOV ESI,dword ptr [ESP + 0x15c]     ; 00480246
        ;   Label: LAB_00480246
    XOR SI,0x1                          ; 0048024d
    IMUL ESI,ESI,0xc                    ; 00480251
    MOV EAX,ESP                         ; 00480254
    LEA EBX,[ESP + 0xe4]                ; 00480256
    ADD ESI,EAX                         ; 0048025d
    MOV EAX,EBP                         ; 0048025f
    FLD float ptr [EAX]                 ; 00480261
    FMUL float ptr [0x005f5cec]         ; 00480263 | DAT_005f5cec
    FISTP dword ptr [EBX]               ; 00480269
    FLD float ptr [EAX + 0x4]           ; 0048026b
    FMUL float ptr [0x005f5cec]         ; 0048026e | DAT_005f5cec
    FISTP dword ptr [EBX + 0x4]         ; 00480274
    FLD float ptr [EAX + 0x8]           ; 00480277
    FMUL float ptr [0x005f5cec]         ; 0048027a | DAT_005f5cec
    FISTP dword ptr [EBX + 0x8]         ; 00480280
    LEA EAX,[ESP + 0xe4]                ; 00480283
    PUSH EAX                            ; 0048028a
    PUSH 0x0                            ; 0048028b
    CALL engine_matrix.c_transformToCache_FUN_004e8e60 ; 0048028d
        ;   XREF to: 004e8e60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e8e60(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [ESI]                 ; 00480292
    FMUL float ptr [0x005d24ef]         ; 00480294 | DAT_005d24ef
    FLD float ptr [ESI + 0x4]           ; 0048029a
    FMUL float ptr [0x005d24ef]         ; 0048029d | DAT_005d24ef
    FLD float ptr [ESI + 0x8]           ; 004802a3
    FMUL float ptr [0x005d24ef]         ; 004802a6 | DAT_005d24ef
    LEA EDI,[ESP + 0x11c]               ; 004802ac
    ADD ESP,0x8                         ; 004802b3
    LEA ESI,[ESP + 0xfc]                ; 004802b6
    FXCH ST2                            ; 004802bd
    FSTP float ptr [ESP + 0xfc]         ; 004802bf
    FSTP float ptr [ESP + 0x100]        ; 004802c6
    FSTP float ptr [ESP + 0x104]        ; 004802cd
    MOVSD ES:EDI,ESI                    ; 004802d4
    MOVSD ES:EDI,ESI                    ; 004802d5
    MOVSD ES:EDI,ESI                    ; 004802d6
    FLD float ptr [EBP]                 ; 004802d7
    FMUL float ptr [0x005d24f3]         ; 004802da | DAT_005d24f3
    FLD float ptr [EBP + 0x4]           ; 004802e0
    FMUL float ptr [0x005d24f3]         ; 004802e3 | DAT_005d24f3
    FLD float ptr [EBP + 0x8]           ; 004802e9
    FMUL float ptr [0x005d24f3]         ; 004802ec | DAT_005d24f3
    LEA EBX,[ESP + 0xe4]                ; 004802f2
    LEA EDI,[ESP + 0x90]                ; 004802f9
    LEA ESI,[ESP + 0x60]                ; 00480300
    FXCH ST2                            ; 00480304
    FSTP float ptr [ESP + 0x60]         ; 00480306
    FSTP float ptr [ESP + 0x64]         ; 0048030a
    FSTP float ptr [ESP + 0x68]         ; 0048030e
    MOVSD ES:EDI,ESI                    ; 00480312
    MOVSD ES:EDI,ESI                    ; 00480313
    MOVSD ES:EDI,ESI                    ; 00480314
    LEA EAX,[ESP + 0xf0]                ; 00480315
    FLD float ptr [ESP + 0x90]          ; 0048031c
    FLD float ptr [ESP + 0x94]          ; 00480323
    FLD float ptr [ESP + 0x98]          ; 0048032a
    LEA EDI,[ESP + 0xf0]                ; 00480331
    LEA ESI,[ESP + 0x108]               ; 00480338
    FXCH ST2                            ; 0048033f
    FADD float ptr [ESP + 0x114]        ; 00480341
    FXCH                                ; 00480348
    FADD float ptr [ESP + 0x118]        ; 0048034a
    FXCH ST2                            ; 00480351
    FADD float ptr [ESP + 0x11c]        ; 00480353
    FXCH                                ; 0048035a
    FSTP float ptr [ESP + 0x108]        ; 0048035c
    FXCH                                ; 00480363
    FSTP float ptr [ESP + 0x10c]        ; 00480365
    FSTP float ptr [ESP + 0x110]        ; 0048036c
    MOVSD ES:EDI,ESI                    ; 00480373
    MOVSD ES:EDI,ESI                    ; 00480374
    MOVSD ES:EDI,ESI                    ; 00480375
    FLD float ptr [EAX]                 ; 00480376
    FMUL float ptr [0x005f5cec]         ; 00480378 | DAT_005f5cec
    FISTP dword ptr [EBX]               ; 0048037e
    FLD float ptr [EAX + 0x4]           ; 00480380
    FMUL float ptr [0x005f5cec]         ; 00480383 | DAT_005f5cec
    FISTP dword ptr [EBX + 0x4]         ; 00480389
    FLD float ptr [EAX + 0x8]           ; 0048038c
    FMUL float ptr [0x005f5cec]         ; 0048038f | DAT_005f5cec
    FISTP dword ptr [EBX + 0x8]         ; 00480395
    LEA EAX,[ESP + 0xe4]                ; 00480398
    PUSH EAX                            ; 0048039f
    PUSH 0x1                            ; 004803a0
    CALL engine_matrix.c_transformToCache_FUN_004e8e60 ; 004803a2
        ;   XREF to: 004e8e60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e8e60(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004803a7
    MOV ESI,0x622044                    ; 004803aa
    SUB ESP,0x30                        ; 004803af
    MOV ECX,0xc                         ; 004803b2
    MOV EDI,ESP                         ; 004803b7
    MOVSD.REP ES:EDI,ESI                ; 004803b9
    SUB ESP,0x30                        ; 004803bb
    MOV ECX,0xc                         ; 004803be
    MOV ESI,0x622014                    ; 004803c3
    MOV EDI,ESP                         ; 004803c8
    MOVSD.REP ES:EDI,ESI                ; 004803ca
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407cc0 ; 004803cc
        ;   XREF to: 00407cc0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407cc0(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004803d1
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004803d4
    XOR AL,0x2                          ; 004803db
    IMUL EAX,EAX,0xc                    ; 004803dd
    MOV ESI,ESP                         ; 004803e0
    LEA EBX,[ESP + 0x144]               ; 004803e2
    ADD ESI,EAX                         ; 004803e9
    MOV EAX,EBP                         ; 004803eb
    FLD float ptr [EAX]                 ; 004803ed
    FMUL float ptr [0x005f5cec]         ; 004803ef | DAT_005f5cec
    FISTP dword ptr [EBX]               ; 004803f5
    FLD float ptr [EAX + 0x4]           ; 004803f7
    FMUL float ptr [0x005f5cec]         ; 004803fa | DAT_005f5cec
    FISTP dword ptr [EBX + 0x4]         ; 00480400
    FLD float ptr [EAX + 0x8]           ; 00480403
    FMUL float ptr [0x005f5cec]         ; 00480406 | DAT_005f5cec
    FISTP dword ptr [EBX + 0x8]         ; 0048040c
    LEA EAX,[ESP + 0x144]               ; 0048040f
    PUSH EAX                            ; 00480416
    PUSH 0x0                            ; 00480417
    CALL engine_matrix.c_transformToCache_FUN_004e8e60 ; 00480419
        ;   XREF to: 004e8e60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e8e60(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [ESI]                 ; 0048041e
    FMUL float ptr [0x005d24ef]         ; 00480420 | DAT_005d24ef
    FLD float ptr [ESI + 0x4]           ; 00480426
    FMUL float ptr [0x005d24ef]         ; 00480429 | DAT_005d24ef
    FLD float ptr [ESI + 0x8]           ; 0048042f
    FMUL float ptr [0x005d24ef]         ; 00480432 | DAT_005d24ef
    LEA EDI,[ESP + 0x80]                ; 00480438
    ADD ESP,0x8                         ; 0048043f
    LEA ESI,[ESP + 0xcc]                ; 00480442
    FXCH ST2                            ; 00480449
    FSTP float ptr [ESP + 0xcc]         ; 0048044b
    FSTP float ptr [ESP + 0xd0]         ; 00480452
    FSTP float ptr [ESP + 0xd4]         ; 00480459
    MOVSD ES:EDI,ESI                    ; 00480460
    MOVSD ES:EDI,ESI                    ; 00480461
    MOVSD ES:EDI,ESI                    ; 00480462
    FLD float ptr [EBP]                 ; 00480463
    FMUL float ptr [0x005d24f3]         ; 00480466 | DAT_005d24f3
    FLD float ptr [EBP + 0x4]           ; 0048046c
    FMUL float ptr [0x005d24f3]         ; 0048046f | DAT_005d24f3
    FLD float ptr [EBP + 0x8]           ; 00480475
    FMUL float ptr [0x005d24f3]         ; 00480478 | DAT_005d24f3
    LEA EDI,[ESP + 0x150]               ; 0048047e
    LEA ESI,[ESP + 0x138]               ; 00480485
    FXCH ST2                            ; 0048048c
    FSTP float ptr [ESP + 0x138]        ; 0048048e
    FSTP float ptr [ESP + 0x13c]        ; 00480495
    FSTP float ptr [ESP + 0x140]        ; 0048049c
    MOVSD ES:EDI,ESI                    ; 004804a3
    MOVSD ES:EDI,ESI                    ; 004804a4
    MOVSD ES:EDI,ESI                    ; 004804a5
    FLD float ptr [ESP + 0x150]         ; 004804a6
    FLD float ptr [ESP + 0x154]         ; 004804ad
    FLD float ptr [ESP + 0x158]         ; 004804b4
    LEA EDI,[ESP + 0xb4]                ; 004804bb
    LEA ESI,[ESP + 0x12c]               ; 004804c2
    FXCH ST2                            ; 004804c9
    FADD float ptr [ESP + 0x78]         ; 004804cb
    FXCH                                ; 004804cf
    FADD float ptr [ESP + 0x7c]         ; 004804d1
    FXCH ST2                            ; 004804d5
    FADD float ptr [ESP + 0x80]         ; 004804d7
    FXCH                                ; 004804de
    FSTP float ptr [ESP + 0x12c]        ; 004804e0
    FXCH                                ; 004804e7
    FSTP float ptr [ESP + 0x130]        ; 004804e9
    FSTP float ptr [ESP + 0x134]        ; 004804f0
    MOVSD ES:EDI,ESI                    ; 004804f7
    MOVSD ES:EDI,ESI                    ; 004804f8
    MOVSD ES:EDI,ESI                    ; 004804f9
    LEA EBX,[ESP + 0x144]               ; 004804fa
    LEA EAX,[ESP + 0xb4]                ; 00480501
    FLD float ptr [EAX]                 ; 00480508
    FMUL float ptr [0x005f5cec]         ; 0048050a | DAT_005f5cec
    FISTP dword ptr [EBX]               ; 00480510
    FLD float ptr [EAX + 0x4]           ; 00480512
    FMUL float ptr [0x005f5cec]         ; 00480515 | DAT_005f5cec
    FISTP dword ptr [EBX + 0x4]         ; 0048051b
    FLD float ptr [EAX + 0x8]           ; 0048051e
    FMUL float ptr [0x005f5cec]         ; 00480521 | DAT_005f5cec
    FISTP dword ptr [EBX + 0x8]         ; 00480527
    LEA EAX,[ESP + 0x144]               ; 0048052a
    PUSH EAX                            ; 00480531
    PUSH 0x1                            ; 00480532
    CALL engine_matrix.c_transformToCache_FUN_004e8e60 ; 00480534
        ;   XREF to: 004e8e60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e8e60(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 00480539
    MOV ESI,0x622044                    ; 0048053c
    SUB ESP,0x30                        ; 00480541
    MOV ECX,0xc                         ; 00480544
    MOV EDI,ESP                         ; 00480549
    MOVSD.REP ES:EDI,ESI                ; 0048054b
    SUB ESP,0x30                        ; 0048054d
    MOV ECX,0xc                         ; 00480550
    MOV ESI,0x622014                    ; 00480555
    MOV EDI,ESP                         ; 0048055a
    MOVSD.REP ES:EDI,ESI                ; 0048055c
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407cc0 ; 0048055e
        ;   XREF to: 00407cc0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407cc0(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00480563
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00480566
    XOR AL,0x4                          ; 0048056d
    IMUL EAX,EAX,0xc                    ; 0048056f
    MOV ESI,ESP                         ; 00480572
    LEA EBX,[ESP + 0x6c]                ; 00480574
    ADD ESI,EAX                         ; 00480578
    MOV EAX,EBP                         ; 0048057a
    FLD float ptr [EAX]                 ; 0048057c
    FMUL float ptr [0x005f5cec]         ; 0048057e | DAT_005f5cec
    FISTP dword ptr [EBX]               ; 00480584
    FLD float ptr [EAX + 0x4]           ; 00480586
    FMUL float ptr [0x005f5cec]         ; 00480589 | DAT_005f5cec
    FISTP dword ptr [EBX + 0x4]         ; 0048058f
    FLD float ptr [EAX + 0x8]           ; 00480592
    FMUL float ptr [0x005f5cec]         ; 00480595 | DAT_005f5cec
    FISTP dword ptr [EBX + 0x8]         ; 0048059b
    LEA EAX,[ESP + 0x6c]                ; 0048059e
    PUSH EAX                            ; 004805a2
    PUSH 0x0                            ; 004805a3
    CALL engine_matrix.c_transformToCache_FUN_004e8e60 ; 004805a5
        ;   XREF to: 004e8e60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e8e60(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [0x005d24ef]          ; 004805aa | DAT_005d24ef
    FLD float ptr [ESI]                 ; 004805b0
    FMUL ST1                            ; 004805b2
    FLD float ptr [ESI + 0x4]           ; 004805b4
    FMUL ST2                            ; 004805b7
    FLD float ptr [ESI + 0x8]           ; 004805b9
    FMULP ST3                           ; 004805bc
    LEA EDI,[ESP + 0xa4]                ; 004805be
    ADD ESP,0x8                         ; 004805c5
    LEA ESI,[ESP + 0xa8]                ; 004805c8
    FXCH                                ; 004805cf
    FSTP float ptr [ESP + 0xa8]         ; 004805d1
    FSTP float ptr [ESP + 0xac]         ; 004805d8
    FSTP float ptr [ESP + 0xb0]         ; 004805df
    MOVSD ES:EDI,ESI                    ; 004805e6
    MOVSD ES:EDI,ESI                    ; 004805e7
    MOVSD ES:EDI,ESI                    ; 004805e8
    FLD float ptr [0x005d24f3]          ; 004805e9 | DAT_005d24f3
    FLD float ptr [EBP]                 ; 004805ef
    FMUL ST1                            ; 004805f2
    FLD float ptr [EBP + 0x4]           ; 004805f4
    FMUL ST2                            ; 004805f7
    FLD float ptr [EBP + 0x8]           ; 004805f9
    FMULP ST3                           ; 004805fc
    LEA EBX,[ESP + 0x6c]                ; 004805fe
    LEA EDI,[ESP + 0x120]               ; 00480602
    LEA ESI,[ESP + 0xd8]                ; 00480609
    FXCH                                ; 00480610
    FSTP float ptr [ESP + 0xd8]         ; 00480612
    FSTP float ptr [ESP + 0xdc]         ; 00480619
    FSTP float ptr [ESP + 0xe0]         ; 00480620
    MOVSD ES:EDI,ESI                    ; 00480627
    MOVSD ES:EDI,ESI                    ; 00480628
    MOVSD ES:EDI,ESI                    ; 00480629
    LEA EAX,[ESP + 0x84]                ; 0048062a
    FLD float ptr [ESP + 0x120]         ; 00480631
    FLD float ptr [ESP + 0x124]         ; 00480638
    FLD float ptr [ESP + 0x128]         ; 0048063f
    LEA EDI,[ESP + 0x84]                ; 00480646
    LEA ESI,[ESP + 0xc0]                ; 0048064d
    FXCH ST2                            ; 00480654
    FADD float ptr [ESP + 0x9c]         ; 00480656
    FXCH                                ; 0048065d
    FADD float ptr [ESP + 0xa0]         ; 0048065f
    FXCH ST2                            ; 00480666
    FADD float ptr [ESP + 0xa4]         ; 00480668
    FXCH                                ; 0048066f
    FSTP float ptr [ESP + 0xc0]         ; 00480671
    FXCH                                ; 00480678
    FSTP float ptr [ESP + 0xc4]         ; 0048067a
    FSTP float ptr [ESP + 0xc8]         ; 00480681
    MOVSD ES:EDI,ESI                    ; 00480688
    MOVSD ES:EDI,ESI                    ; 00480689
    MOVSD ES:EDI,ESI                    ; 0048068a
    FLD float ptr [EAX]                 ; 0048068b
    FMUL float ptr [0x005f5cec]         ; 0048068d | DAT_005f5cec
    FISTP dword ptr [EBX]               ; 00480693
    FLD float ptr [EAX + 0x4]           ; 00480695
    FMUL float ptr [0x005f5cec]         ; 00480698 | DAT_005f5cec
    FISTP dword ptr [EBX + 0x4]         ; 0048069e
    FLD float ptr [EAX + 0x8]           ; 004806a1
    FMUL float ptr [0x005f5cec]         ; 004806a4 | DAT_005f5cec
    FISTP dword ptr [EBX + 0x8]         ; 004806aa
    LEA EAX,[ESP + 0x6c]                ; 004806ad
    PUSH EAX                            ; 004806b1
    PUSH 0x1                            ; 004806b2
    CALL engine_matrix.c_transformToCache_FUN_004e8e60 ; 004806b4
        ;   XREF to: 004e8e60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e8e60(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004806b9
    MOV ESI,0x622044                    ; 004806bc
    SUB ESP,0x30                        ; 004806c1
    MOV ECX,0xc                         ; 004806c4
    MOV EDI,ESP                         ; 004806c9
    MOVSD.REP ES:EDI,ESI                ; 004806cb
    SUB ESP,0x30                        ; 004806cd
    MOV ECX,0xc                         ; 004806d0
    MOV ESI,0x622014                    ; 004806d5
    MOV EDI,ESP                         ; 004806da
    MOVSD.REP ES:EDI,ESI                ; 004806dc
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407cc0 ; 004806de
        ;   XREF to: 00407cc0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407cc0(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004806e3
    MOV EBX,dword ptr [ESP + 0x15c]     ; 004806e6
    INC EBX                             ; 004806ed
    ADD EBP,0xc                         ; 004806ee
    MOV dword ptr [ESP + 0x15c],EBX     ; 004806f1
    CMP EBX,0x8                         ; 004806f8
    JL 0x00480246                       ; 004806fb
        ;   XREF to: 00480246 (CONDITIONAL_JUMP)  ; LAB_00480246
    ADD ESP,0x16c                       ; 00480701
    POP EBP                             ; 00480707
    POP EDI                             ; 00480708
    POP ESI                             ; 00480709
    POP EBX                             ; 0048070a
    RET                                 ; 0048070b
    MOV dword ptr [0x01c35e60],EBP      ; 0048070c | DAT_01c35e60
        ;   Label: LAB_0048070c
    JMP 0x0048023b                      ; 00480712
        ;   XREF to: 0048023b (UNCONDITIONAL_JUMP)  ; LAB_0048023b

