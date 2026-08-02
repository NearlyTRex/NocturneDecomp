; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_0056808c(int param_1,int *param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   crt_unknown.c_FUN_00567560 at 005676ef
;
; Referenced Globals:
;   undefined4 DAT_005c168c
;
; Called Functions:
;   crt_math.c_multiply64_FUN_0056f14c
;   crt_unknown.c_FUN_00567540
;   crt_unknown.c_FUN_0056754c
;   crt_unknown.c_FUN_005684f8
;   crt_unknown.c_FUN_00568528
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056808c
        ;   Label: crt_unknown.c_FUN_0056808c
    PUSH ESI                            ; 0056808d
    PUSH EDI                            ; 0056808e
    PUSH ES                             ; 0056808f
    PUSH EBP                            ; 00568090
    SUB ESP,0x28                        ; 00568091
    MOV EDI,dword ptr [ESP + 0x48]      ; 00568094
    XOR EDX,EDX                         ; 00568098
    XOR EBP,EBP                         ; 0056809a
    MOV dword ptr [ESP],EDX             ; 0056809c
    MOV dword ptr [ESP + 0x4],EDX       ; 0056809f
    MOV dword ptr [ESP + 0x24],EDX      ; 005680a3
    MOV dword ptr [ESP + 0x20],EDX      ; 005680a7
    MOV EAX,dword ptr [ESP + 0x40]      ; 005680ab
        ;   Label: LAB_005680ab
    PUSH EAX                            ; 005680af
    CALL crt_unknown.c_FUN_00567540     ; 005680b0
        ;   XREF to: 00567540 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00567540()
    ADD ESP,0x4                         ; 005680b5
    MOV dword ptr [ESP + 0x18],EAX      ; 005680b8
    MOV BL,byte ptr [ESP + 0x18]        ; 005680bc
    INC BL                              ; 005680c0
    AND EBX,0xff                        ; 005680c2
    TEST byte ptr [EBX + 0x5c168c],0x2  ; 005680c8 | DAT_005c168c
    JZ 0x005680d7                       ; 005680cf
        ;   XREF to: 005680d7 (CONDITIONAL_JUMP)  ; LAB_005680d7
    INC dword ptr [ESP + 0x20]          ; 005680d1
    JMP 0x005680ab                      ; 005680d5
        ;   XREF to: 005680ab (UNCONDITIONAL_JUMP)  ; LAB_005680ab
    MOV EDX,dword ptr [ESP + 0x40]      ; 005680d7
        ;   Label: LAB_005680d7
    TEST byte ptr [EDX + 0x10],0x2      ; 005680db
    JNZ 0x005683a8                      ; 005680df
        ;   XREF to: 005683a8 (CONDITIONAL_JUMP)  ; LAB_005683a8
    MOV EBX,dword ptr [EDX + 0xc]       ; 005680e5
    LEA ESI,[EBX + -0x1]                ; 005680e8
    MOV dword ptr [EDX + 0xc],ESI       ; 005680eb
    TEST EBX,EBX                        ; 005680ee
    JZ 0x00568396                       ; 005680f0
        ;   XREF to: 00568396 (CONDITIONAL_JUMP)  ; LAB_00568396
    MOV EBX,0x2b                        ; 005680f6
    MOV ECX,dword ptr [ESP + 0x4c]      ; 005680fb
    MOV dword ptr [ESP + 0x1c],EBX      ; 005680ff
    TEST ECX,ECX                        ; 00568103
    JZ 0x0056813b                       ; 00568105
        ;   XREF to: 0056813b (CONDITIONAL_JUMP)  ; LAB_0056813b
    CMP EAX,EBX                         ; 00568107
    JZ 0x00568110                       ; 00568109
        ;   XREF to: 00568110 (CONDITIONAL_JUMP)  ; LAB_00568110
    CMP EAX,0x2d                        ; 0056810b
    JNZ 0x0056813b                      ; 0056810e
        ;   XREF to: 0056813b (CONDITIONAL_JUMP)  ; LAB_0056813b
    MOV EAX,dword ptr [ESP + 0x18]      ; 00568110
        ;   Label: LAB_00568110
    MOV dword ptr [ESP + 0x1c],EAX      ; 00568114
    MOV EAX,dword ptr [ESP + 0x20]      ; 00568118
    MOV ESI,dword ptr [ESP + 0x40]      ; 0056811c
    INC EAX                             ; 00568120
    PUSH ESI                            ; 00568121
    MOV dword ptr [ESP + 0x24],EAX      ; 00568122
    CALL crt_unknown.c_FUN_00568528     ; 00568126
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    ADD ESP,0x4                         ; 0056812b
    MOV dword ptr [ESP + 0x18],EAX      ; 0056812e
    CMP EAX,-0x1                        ; 00568132
    JZ 0x005683a8                       ; 00568135
        ;   XREF to: 005683a8 (CONDITIONAL_JUMP)  ; LAB_005683a8
    TEST EDI,EDI                        ; 0056813b
        ;   Label: LAB_0056813b
    JNZ 0x005681b2                      ; 0056813d
        ;   XREF to: 005681b2 (CONDITIONAL_JUMP)  ; LAB_005681b2
    CMP dword ptr [ESP + 0x18],0x30     ; 00568143
    JNZ 0x005681ab                      ; 00568148
        ;   XREF to: 005681ab (CONDITIONAL_JUMP)  ; LAB_005681ab
    MOV EAX,dword ptr [ESP + 0x40]      ; 0056814a
    PUSH EAX                            ; 0056814e
    CALL crt_unknown.c_FUN_00568528     ; 0056814f
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    ADD ESP,0x4                         ; 00568154
    MOV EBP,0x1                         ; 00568157
    MOV dword ptr [ESP + 0x18],EAX      ; 0056815c
    CMP EAX,-0x1                        ; 00568160
    JZ 0x005683a8                       ; 00568163
        ;   XREF to: 005683a8 (CONDITIONAL_JUMP)  ; LAB_005683a8
    CMP EAX,0x78                        ; 00568169
    JZ 0x00568173                       ; 0056816c
        ;   XREF to: 00568173 (CONDITIONAL_JUMP)  ; LAB_00568173
    CMP EAX,0x58                        ; 0056816e
    JNZ 0x005681a4                      ; 00568171
        ;   XREF to: 005681a4 (CONDITIONAL_JUMP)  ; LAB_005681a4
    MOV EDX,dword ptr [ESP + 0x40]      ; 00568173
        ;   Label: LAB_00568173
    MOV EBX,dword ptr [ESP + 0x20]      ; 00568177
    PUSH EDX                            ; 0056817b
    ADD EBX,0x2                         ; 0056817c
    CALL crt_unknown.c_FUN_00568528     ; 0056817f
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    MOV dword ptr [ESP + 0x24],EBX      ; 00568184
    ADD ESP,0x4                         ; 00568188
    XOR EBP,EBP                         ; 0056818b
    MOV dword ptr [ESP + 0x18],EAX      ; 0056818d
    CMP EAX,-0x1                        ; 00568191
    JZ 0x005683a8                       ; 00568194
        ;   XREF to: 005683a8 (CONDITIONAL_JUMP)  ; LAB_005683a8
    MOV EDI,0x10                        ; 0056819a
    JMP 0x0056820e                      ; 0056819f
        ;   XREF to: 0056820e (UNCONDITIONAL_JUMP)  ; LAB_0056820e
    MOV EDI,0x8                         ; 005681a4
        ;   Label: LAB_005681a4
    JMP 0x0056820e                      ; 005681a9
        ;   XREF to: 0056820e (UNCONDITIONAL_JUMP)  ; LAB_0056820e
    MOV EDI,0xa                         ; 005681ab
        ;   Label: LAB_005681ab
    JMP 0x0056820e                      ; 005681b0
        ;   XREF to: 0056820e (UNCONDITIONAL_JUMP)  ; LAB_0056820e
    CMP EDI,0x10                        ; 005681b2
        ;   Label: LAB_005681b2
    JNZ 0x0056820e                      ; 005681b5
        ;   XREF to: 0056820e (CONDITIONAL_JUMP)  ; LAB_0056820e
    CMP dword ptr [ESP + 0x18],0x30     ; 005681b7
    JNZ 0x0056820e                      ; 005681bc
        ;   XREF to: 0056820e (CONDITIONAL_JUMP)  ; LAB_0056820e
    MOV EBX,dword ptr [ESP + 0x40]      ; 005681be
    PUSH EBX                            ; 005681c2
    CALL crt_unknown.c_FUN_00568528     ; 005681c3
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    ADD ESP,0x4                         ; 005681c8
    MOV EBP,0x1                         ; 005681cb
    MOV dword ptr [ESP + 0x18],EAX      ; 005681d0
    CMP EAX,-0x1                        ; 005681d4
    JZ 0x005683a8                       ; 005681d7
        ;   XREF to: 005683a8 (CONDITIONAL_JUMP)  ; LAB_005683a8
    CMP EAX,0x78                        ; 005681dd
    JZ 0x005681e7                       ; 005681e0
        ;   XREF to: 005681e7 (CONDITIONAL_JUMP)  ; LAB_005681e7
    CMP EAX,0x58                        ; 005681e2
    JNZ 0x0056820e                      ; 005681e5
        ;   XREF to: 0056820e (CONDITIONAL_JUMP)  ; LAB_0056820e
    MOV ECX,dword ptr [ESP + 0x40]      ; 005681e7
        ;   Label: LAB_005681e7
    MOV ESI,dword ptr [ESP + 0x20]      ; 005681eb
    PUSH ECX                            ; 005681ef
    ADD ESI,0x2                         ; 005681f0
    CALL crt_unknown.c_FUN_00568528     ; 005681f3
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    MOV dword ptr [ESP + 0x24],ESI      ; 005681f8
    ADD ESP,0x4                         ; 005681fc
    XOR EBP,EBP                         ; 005681ff
    MOV dword ptr [ESP + 0x18],EAX      ; 00568201
    CMP EAX,-0x1                        ; 00568205
    JZ 0x005683a8                       ; 00568208
        ;   XREF to: 005683a8 (CONDITIONAL_JUMP)  ; LAB_005683a8
    MOV EAX,dword ptr [ESP + 0x40]      ; 0056820e
        ;   Label: LAB_0056820e
    TEST byte ptr [EAX + 0x10],0x40     ; 00568212
    JZ 0x0056831d                       ; 00568216
        ;   XREF to: 0056831d (CONDITIONAL_JUMP)  ; LAB_0056831d
    XOR ECX,ECX                         ; 0056821c
    MOV dword ptr [ESP + 0x10],EDI      ; 0056821e
    MOV dword ptr [ESP + 0x14],ECX      ; 00568222
    MOV ECX,dword ptr [ESP + 0x18]      ; 00568226
        ;   Label: LAB_00568226
    PUSH ECX                            ; 0056822a
    CALL crt_unknown.c_FUN_005684f8     ; 0056822b
        ;   XREF to: 005684f8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005684f8()
    ADD ESP,0x4                         ; 00568230
    CMP EAX,EDI                         ; 00568233
    JGE 0x00568295                      ; 00568235
        ;   XREF to: 00568295 (CONDITIONAL_JUMP)  ; LAB_00568295
    LEA EBX,[ESP + 0x10]                ; 00568237
    MOV dword ptr [ESP + 0x8],EAX       ; 0056823b
    XOR ESI,ESI                         ; 0056823f
    MOV EAX,ESP                         ; 00568241
    MOV dword ptr [ESP + 0xc],ESI       ; 00568243
    MOV ESI,ESP                         ; 00568247
    MOV EDX,dword ptr [EAX + 0x4]       ; 00568249
    MOV EAX,dword ptr [EAX]             ; 0056824c
    MOV ECX,dword ptr [EBX + 0x4]       ; 0056824e
    MOV EBX,dword ptr [EBX]             ; 00568251
    CALL crt_math.c_multiply64_FUN_0056f14c ; 00568253
        ;   XREF to: 0056f14c (UNCONDITIONAL_CALL)  ; ulonglong crt_math.c_multiply64_FUN_0056f14c(ulonglong a, ulonglong b)
    MOV dword ptr [ESI + 0x4],EDX       ; 00568258
    MOV dword ptr [ESI],EAX             ; 0056825b
    MOV ESI,ESP                         ; 0056825d
    LEA EBX,[ESP + 0x8]                 ; 0056825f
    MOV EAX,ESP                         ; 00568263
    MOV EDX,dword ptr [EAX + 0x4]       ; 00568265
    MOV EAX,dword ptr [EAX]             ; 00568268
    MOV ECX,dword ptr [EBX + 0x4]       ; 0056826a
    MOV EBX,dword ptr [EBX]             ; 0056826d
    ADD EAX,EBX                         ; 0056826f
    ADC EDX,ECX                         ; 00568271
    MOV dword ptr [ESI + 0x4],EDX       ; 00568273
    MOV dword ptr [ESI],EAX             ; 00568276
    MOV EAX,dword ptr [ESP + 0x40]      ; 00568278
    PUSH EAX                            ; 0056827c
    CALL crt_unknown.c_FUN_00568528     ; 0056827d
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    ADD ESP,0x4                         ; 00568282
    INC EBP                             ; 00568285
    MOV dword ptr [ESP + 0x18],EAX      ; 00568286
    CMP EAX,-0x1                        ; 0056828a
    JZ 0x005683a8                       ; 0056828d
        ;   XREF to: 005683a8 (CONDITIONAL_JUMP)  ; LAB_005683a8
    JMP 0x00568226                      ; 00568293
        ;   XREF to: 00568226 (UNCONDITIONAL_JUMP)  ; LAB_00568226
    CMP dword ptr [ESP + 0x18],0x3a     ; 00568295
        ;   Label: LAB_00568295
    JNZ 0x00568396                      ; 0056829a
        ;   XREF to: 00568396 (CONDITIONAL_JUMP)  ; LAB_00568396
    MOV EAX,dword ptr [ESP + 0x40]      ; 005682a0
    TEST byte ptr [EAX + 0x10],0x80     ; 005682a4
    JZ 0x00568396                       ; 005682a8
        ;   XREF to: 00568396 (CONDITIONAL_JUMP)  ; LAB_00568396
    MOV EBX,dword ptr [ESP + 0x40]      ; 005682ae
        ;   Label: LAB_005682ae
    PUSH EBX                            ; 005682b2
    CALL crt_unknown.c_FUN_00568528     ; 005682b3
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    ADD ESP,0x4                         ; 005682b8
    INC EBP                             ; 005682bb
    MOV dword ptr [ESP + 0x18],EAX      ; 005682bc
    CMP EAX,-0x1                        ; 005682c0
    JZ 0x005683a8                       ; 005682c3
        ;   XREF to: 005683a8 (CONDITIONAL_JUMP)  ; LAB_005683a8
    PUSH EAX                            ; 005682c9
    CALL crt_unknown.c_FUN_005684f8     ; 005682ca
        ;   XREF to: 005684f8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005684f8()
    ADD ESP,0x4                         ; 005682cf
    CMP EAX,EDI                         ; 005682d2
    JGE 0x00568396                      ; 005682d4
        ;   XREF to: 00568396 (CONDITIONAL_JUMP)  ; LAB_00568396
    MOV ESI,ESP                         ; 005682da
    LEA EBX,[ESP + 0x10]                ; 005682dc
    MOV dword ptr [ESP + 0x8],EAX       ; 005682e0
    XOR ECX,ECX                         ; 005682e4
    MOV EAX,ESP                         ; 005682e6
    MOV dword ptr [ESP + 0xc],ECX       ; 005682e8
    MOV EDX,dword ptr [EAX + 0x4]       ; 005682ec
    MOV EAX,dword ptr [EAX]             ; 005682ef
    MOV ECX,dword ptr [EBX + 0x4]       ; 005682f1
    MOV EBX,dword ptr [EBX]             ; 005682f4
    CALL crt_math.c_multiply64_FUN_0056f14c ; 005682f6
        ;   XREF to: 0056f14c (UNCONDITIONAL_CALL)  ; ulonglong crt_math.c_multiply64_FUN_0056f14c(ulonglong a, ulonglong b)
    MOV dword ptr [ESI + 0x4],EDX       ; 005682fb
    MOV dword ptr [ESI],EAX             ; 005682fe
    MOV ESI,ESP                         ; 00568300
    LEA EBX,[ESP + 0x8]                 ; 00568302
    MOV EAX,ESP                         ; 00568306
    MOV EDX,dword ptr [EAX + 0x4]       ; 00568308
    MOV EAX,dword ptr [EAX]             ; 0056830b
    MOV ECX,dword ptr [EBX + 0x4]       ; 0056830d
    MOV EBX,dword ptr [EBX]             ; 00568310
    ADD EAX,EBX                         ; 00568312
    ADC EDX,ECX                         ; 00568314
    MOV dword ptr [ESI + 0x4],EDX       ; 00568316
    MOV dword ptr [ESI],EAX             ; 00568319
    JMP 0x005682ae                      ; 0056831b
        ;   XREF to: 005682ae (UNCONDITIONAL_JUMP)  ; LAB_005682ae
    MOV ESI,dword ptr [ESP + 0x18]      ; 0056831d
        ;   Label: LAB_0056831d
    PUSH ESI                            ; 00568321
    CALL crt_unknown.c_FUN_005684f8     ; 00568322
        ;   XREF to: 005684f8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005684f8()
    ADD ESP,0x4                         ; 00568327
    CMP EAX,EDI                         ; 0056832a
    JGE 0x00568354                      ; 0056832c
        ;   XREF to: 00568354 (CONDITIONAL_JUMP)  ; LAB_00568354
    MOV EBX,dword ptr [ESP + 0x24]      ; 0056832e
    IMUL EBX,EDI                        ; 00568332
    ADD EBX,EAX                         ; 00568335
    MOV EAX,dword ptr [ESP + 0x40]      ; 00568337
    PUSH EAX                            ; 0056833b
    MOV dword ptr [ESP + 0x28],EBX      ; 0056833c
    CALL crt_unknown.c_FUN_00568528     ; 00568340
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    ADD ESP,0x4                         ; 00568345
    INC EBP                             ; 00568348
    MOV dword ptr [ESP + 0x18],EAX      ; 00568349
    CMP EAX,-0x1                        ; 0056834d
    JZ 0x005683a8                       ; 00568350
        ;   XREF to: 005683a8 (CONDITIONAL_JUMP)  ; LAB_005683a8
    JMP 0x0056831d                      ; 00568352
        ;   XREF to: 0056831d (UNCONDITIONAL_JUMP)  ; LAB_0056831d
    CMP ESI,0x3a                        ; 00568354
        ;   Label: LAB_00568354
    JNZ 0x00568396                      ; 00568357
        ;   XREF to: 00568396 (CONDITIONAL_JUMP)  ; LAB_00568396
    MOV EAX,dword ptr [ESP + 0x40]      ; 00568359
    TEST byte ptr [EAX + 0x10],0x80     ; 0056835d
    JZ 0x00568396                       ; 00568361
        ;   XREF to: 00568396 (CONDITIONAL_JUMP)  ; LAB_00568396
    MOV EBX,dword ptr [ESP + 0x40]      ; 00568363
        ;   Label: LAB_00568363
    PUSH EBX                            ; 00568367
    CALL crt_unknown.c_FUN_00568528     ; 00568368
        ;   XREF to: 00568528 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568528()
    ADD ESP,0x4                         ; 0056836d
    INC EBP                             ; 00568370
    MOV dword ptr [ESP + 0x18],EAX      ; 00568371
    CMP EAX,-0x1                        ; 00568375
    JZ 0x005683a8                       ; 00568378
        ;   XREF to: 005683a8 (CONDITIONAL_JUMP)  ; LAB_005683a8
    PUSH EAX                            ; 0056837a
    CALL crt_unknown.c_FUN_005684f8     ; 0056837b
        ;   XREF to: 005684f8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005684f8()
    ADD ESP,0x4                         ; 00568380
    CMP EAX,EDI                         ; 00568383
    JGE 0x00568396                      ; 00568385
        ;   XREF to: 00568396 (CONDITIONAL_JUMP)  ; LAB_00568396
    MOV EBX,dword ptr [ESP + 0x24]      ; 00568387
    IMUL EBX,EDI                        ; 0056838b
    ADD EBX,EAX                         ; 0056838e
    MOV dword ptr [ESP + 0x24],EBX      ; 00568390
    JMP 0x00568363                      ; 00568394
        ;   XREF to: 00568363 (UNCONDITIONAL_JUMP)  ; LAB_00568363
    MOV ESI,dword ptr [ESP + 0x40]      ; 00568396
        ;   Label: LAB_00568396
    PUSH ESI                            ; 0056839a
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0056839b
    PUSH EDI                            ; 0056839f
    CALL crt_unknown.c_FUN_0056754c     ; 005683a0
        ;   XREF to: 0056754c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056754c()
    ADD ESP,0x8                         ; 005683a5
    MOV EAX,dword ptr [ESP + 0x40]      ; 005683a8
        ;   Label: LAB_005683a8
    TEST byte ptr [EAX + 0x10],0x40     ; 005683ac
    JZ 0x0056845c                       ; 005683b0
        ;   XREF to: 0056845c (CONDITIONAL_JUMP)  ; LAB_0056845c
    CMP dword ptr [ESP + 0x1c],0x2d     ; 005683b6
    JNZ 0x005683e4                      ; 005683bb
        ;   XREF to: 005683e4 (CONDITIONAL_JUMP)  ; LAB_005683e4
    MOV EDX,dword ptr [ESP]             ; 005683bd
    MOV EBX,dword ptr [ESP + 0x4]       ; 005683c0
    NOT EDX                             ; 005683c4
    NOT EBX                             ; 005683c6
    MOV dword ptr [ESP],EDX             ; 005683c8
    LEA ECX,[EDX + 0x1]                 ; 005683cb
    MOV dword ptr [ESP + 0x4],EBX       ; 005683ce
    MOV dword ptr [ESP],ECX             ; 005683d2
    TEST ECX,ECX                        ; 005683d5
    JNZ 0x005683de                      ; 005683d7
        ;   XREF to: 005683de (CONDITIONAL_JUMP)  ; LAB_005683de
    LEA EAX,[EBX + 0x1]                 ; 005683d9
    JMP 0x005683e0                      ; 005683dc
        ;   XREF to: 005683e0 (UNCONDITIONAL_JUMP)  ; LAB_005683e0
    MOV EAX,EBX                         ; 005683de
        ;   Label: LAB_005683de
    MOV dword ptr [ESP + 0x4],EAX       ; 005683e0
        ;   Label: LAB_005683e0
    TEST EBP,EBP                        ; 005683e4
        ;   Label: LAB_005683e4
    JLE 0x005684ea                      ; 005683e6
        ;   XREF to: 005684ea (CONDITIONAL_JUMP)  ; LAB_005684ea
    MOV EAX,dword ptr [ESP + 0x40]      ; 005683ec
    MOV EDI,dword ptr [ESP + 0x20]      ; 005683f0
    MOV DL,byte ptr [EAX + 0x10]        ; 005683f4
    ADD EBP,EDI                         ; 005683f7
    TEST DL,0x1                         ; 005683f9
    JZ 0x005684ea                       ; 005683fc
        ;   XREF to: 005684ea (CONDITIONAL_JUMP)  ; LAB_005684ea
    TEST DL,0x4                         ; 00568402
    JZ 0x0056841b                       ; 00568405
        ;   XREF to: 0056841b (CONDITIONAL_JUMP)  ; LAB_0056841b
    MOV EAX,dword ptr [ESP + 0x44]      ; 00568407
    MOV ECX,dword ptr [EAX]             ; 0056840b
    ADD ECX,0x8                         ; 0056840d
    MOV dword ptr [EAX],ECX             ; 00568410
    MOV AX,word ptr [ECX + -0x4]        ; 00568412
    MOV EDI,dword ptr [ECX + -0x8]      ; 00568416
    JMP 0x0056844b                      ; 00568419
        ;   XREF to: 0056844b (UNCONDITIONAL_JUMP)  ; LAB_0056844b
    TEST DL,0x8                         ; 0056841b
        ;   Label: LAB_0056841b
    JZ 0x0056843b                       ; 0056841e
        ;   XREF to: 0056843b (CONDITIONAL_JUMP)  ; LAB_0056843b
    MOV EAX,dword ptr [ESP + 0x44]      ; 00568420
    MOV EBX,dword ptr [EAX]             ; 00568424
    ADD EBX,0x4                         ; 00568426
    MOV dword ptr [EAX],EBX             ; 00568429
    MOV AX,DS                           ; 0056842b
    MOV EDI,dword ptr [EBX + -0x4]      ; 0056842d
    MOV ESI,ESP                         ; 00568430
    MOV ES,AX                           ; 00568432
    MOVSD ES:EDI,ESI                    ; 00568434
    MOVSD ES:EDI,ESI                    ; 00568435
    JMP 0x005684ea                      ; 00568436
        ;   XREF to: 005684ea (UNCONDITIONAL_JUMP)  ; LAB_005684ea
    MOV EAX,dword ptr [ESP + 0x44]      ; 0056843b
        ;   Label: LAB_0056843b
    MOV EDX,dword ptr [EAX]             ; 0056843f
    ADD EDX,0x4                         ; 00568441
    MOV dword ptr [EAX],EDX             ; 00568444
    MOV AX,DS                           ; 00568446
    MOV EDI,dword ptr [EDX + -0x4]      ; 00568448
    MOV ESI,ESP                         ; 0056844b
        ;   Label: LAB_0056844b
    MOV ES,AX                           ; 0056844d
    MOVSD ES:EDI,ESI                    ; 0056844f
    MOVSD ES:EDI,ESI                    ; 00568450
    MOV EAX,EBP                         ; 00568451
    ADD ESP,0x28                        ; 00568453
    POP EBP                             ; 00568456
    POP ES                              ; 00568457
    POP EDI                             ; 00568458
    POP ESI                             ; 00568459
    POP EBX                             ; 0056845a
    RET                                 ; 0056845b
    CMP dword ptr [ESP + 0x1c],0x2d     ; 0056845c
        ;   Label: LAB_0056845c
    JNZ 0x00568467                      ; 00568461
        ;   XREF to: 00568467 (CONDITIONAL_JUMP)  ; LAB_00568467
    NEG dword ptr [ESP + 0x24]          ; 00568463
    TEST EBP,EBP                        ; 00568467
        ;   Label: LAB_00568467
    JLE 0x005684ea                      ; 00568469
        ;   XREF to: 005684ea (CONDITIONAL_JUMP)  ; LAB_005684ea
    MOV EAX,dword ptr [ESP + 0x40]      ; 0056846f
    MOV EBX,dword ptr [ESP + 0x20]      ; 00568473
    MOV DH,byte ptr [EAX + 0x10]        ; 00568477
    ADD EBP,EBX                         ; 0056847a
    TEST DH,0x1                         ; 0056847c
    JZ 0x005684ea                       ; 0056847f
        ;   XREF to: 005684ea (CONDITIONAL_JUMP)  ; LAB_005684ea
    TEST DH,0x4                         ; 00568481
    JZ 0x00568496                       ; 00568484
        ;   XREF to: 00568496 (CONDITIONAL_JUMP)  ; LAB_00568496
    MOV EAX,dword ptr [ESP + 0x44]      ; 00568486
    MOV EDI,dword ptr [EAX]             ; 0056848a
    ADD EDI,0x8                         ; 0056848c
    MOV dword ptr [EAX],EDI             ; 0056848f
    LES EAX,[EDI + -0x8]                ; 00568491
    JMP 0x005684c1                      ; 00568494
        ;   XREF to: 005684c1 (UNCONDITIONAL_JUMP)  ; LAB_005684c1
    TEST DH,0x8                         ; 00568496
        ;   Label: LAB_00568496
    JZ 0x005684af                       ; 00568499
        ;   XREF to: 005684af (CONDITIONAL_JUMP)  ; LAB_005684af
    MOV EAX,dword ptr [ESP + 0x44]      ; 0056849b
    MOV ESI,dword ptr [EAX]             ; 0056849f
    ADD ESI,0x4                         ; 005684a1
    MOV BX,DS                           ; 005684a4
    MOV dword ptr [EAX],ESI             ; 005684a6
    MOV ES,BX                           ; 005684a8
    MOV EAX,dword ptr [ESI + -0x4]      ; 005684aa
    JMP 0x005684c1                      ; 005684ad
        ;   XREF to: 005684c1 (UNCONDITIONAL_JUMP)  ; LAB_005684c1
    MOV EAX,dword ptr [ESP + 0x44]      ; 005684af
        ;   Label: LAB_005684af
    MOV ECX,dword ptr [EAX]             ; 005684b3
    ADD ECX,0x4                         ; 005684b5
    MOV BX,DS                           ; 005684b8
    MOV dword ptr [EAX],ECX             ; 005684ba
    MOV ES,BX                           ; 005684bc
    MOV EAX,dword ptr [ECX + -0x4]      ; 005684be
    MOV EDX,dword ptr [ESP + 0x40]      ; 005684c1
        ;   Label: LAB_005684c1
    MOV CL,byte ptr [EDX + 0x10]        ; 005684c5
    TEST CL,0x10                        ; 005684c8
    JZ 0x005684e0                       ; 005684cb
        ;   XREF to: 005684e0 (CONDITIONAL_JUMP)  ; LAB_005684e0
    MOV EBX,dword ptr [ESP + 0x24]      ; 005684cd
    MOV word ptr ES:[EAX],BX            ; 005684d1
    MOV EAX,EBP                         ; 005684d5
    ADD ESP,0x28                        ; 005684d7
    POP EBP                             ; 005684da
    POP ES                              ; 005684db
    POP EDI                             ; 005684dc
    POP ESI                             ; 005684dd
    POP EBX                             ; 005684de
    RET                                 ; 005684df
    TEST CL,0x20                        ; 005684e0
        ;   Label: LAB_005684e0
    MOV EBX,dword ptr [ESP + 0x24]      ; 005684e3
    MOV dword ptr ES:[EAX],EBX          ; 005684e7
    MOV EAX,EBP                         ; 005684ea
        ;   Label: LAB_005684ea
    ADD ESP,0x28                        ; 005684ec
    POP EBP                             ; 005684ef
    POP ES                              ; 005684f0
    POP EDI                             ; 005684f1
    POP ESI                             ; 005684f2
    POP EBX                             ; 005684f3
    RET                                 ; 005684f4

