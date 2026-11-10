; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_0047f1b0(CDrawSurface *this_ptr,int *x1,int *y1,int *x2,int *y2,int clip_left,int clip_top,int clip_right,int clip_bottom)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   x1
; int *            Stack[0xc]:4   y1
; int *            Stack[0x10]:4   x2
; int *            Stack[0x14]:4   y2
; int              Stack[0x18]:4   clip_left
; int              Stack[0x1c]:4   clip_top
; int              Stack[0x20]:4   clip_right
; int              Stack[0x24]:4   clip_bottom
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_0047ed30 at 0047ed91
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f1b0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_0047f1b0
    PUSH ESI                            ; 0047f1b1
    PUSH EDI                            ; 0047f1b2
    PUSH EBP                            ; 0047f1b3
    SUB ESP,0x48                        ; 0047f1b4
    MOV EBP,dword ptr [ESP + 0x60]      ; 0047f1b7
    MOV EDI,dword ptr [ESP + 0x64]      ; 0047f1bb
    MOV ECX,dword ptr [ESP + 0x70]      ; 0047f1bf
    MOV dword ptr [ESP + 0xc],ECX       ; 0047f1c3
    MOV ECX,dword ptr [ESP + 0x74]      ; 0047f1c7
    MOV EBX,dword ptr [EDI]             ; 0047f1cb
    MOV dword ptr [ESP + 0x4],ECX       ; 0047f1cd
    MOV ECX,dword ptr [ESP + 0x78]      ; 0047f1d1
    MOV ESI,dword ptr [EBP]             ; 0047f1d5
    MOV dword ptr [ESP + 0x14],ECX      ; 0047f1d8
    XOR ECX,ECX                         ; 0047f1dc
    CMP EBX,dword ptr [ESP + 0x7c]      ; 0047f1de
    JLE 0x0047f1e9                      ; 0047f1e2
        ;   XREF to: 0047f1e9 (CONDITIONAL_JUMP)  ; LAB_0047f1e9
    MOV ECX,0x1                         ; 0047f1e4
    CMP EBX,dword ptr [ESP + 0x4]       ; 0047f1e9
        ;   Label: LAB_0047f1e9
    JGE 0x0047f1f2                      ; 0047f1ed
        ;   XREF to: 0047f1f2 (CONDITIONAL_JUMP)  ; LAB_0047f1f2
    OR CL,0x2                           ; 0047f1ef
    CMP ESI,dword ptr [ESP + 0x14]      ; 0047f1f2
        ;   Label: LAB_0047f1f2
    JLE 0x0047f1fb                      ; 0047f1f6
        ;   XREF to: 0047f1fb (CONDITIONAL_JUMP)  ; LAB_0047f1fb
    OR CL,0x4                           ; 0047f1f8
    CMP ESI,dword ptr [ESP + 0xc]       ; 0047f1fb
        ;   Label: LAB_0047f1fb
    JGE 0x0047f204                      ; 0047f1ff
        ;   XREF to: 0047f204 (CONDITIONAL_JUMP)  ; LAB_0047f204
    OR CL,0x8                           ; 0047f201
    MOV ESI,dword ptr [ESP + 0x68]      ; 0047f204
        ;   Label: LAB_0047f204
    MOV dword ptr [ESP + 0x44],ECX      ; 0047f208
    MOV ECX,dword ptr [ESP + 0x70]      ; 0047f20c
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0047f210
    MOV dword ptr [ESP + 0x8],ECX       ; 0047f214
    MOV ECX,dword ptr [ESP + 0x74]      ; 0047f218
    MOV ESI,dword ptr [ESI]             ; 0047f21c
    MOV dword ptr [ESP + 0x10],ECX      ; 0047f21e
    MOV ECX,dword ptr [ESP + 0x78]      ; 0047f222
    MOV EBX,dword ptr [EBX]             ; 0047f226
    MOV dword ptr [ESP],ECX             ; 0047f228
    XOR ECX,ECX                         ; 0047f22b
    CMP EBX,dword ptr [ESP + 0x7c]      ; 0047f22d
    JLE 0x0047f238                      ; 0047f231
        ;   XREF to: 0047f238 (CONDITIONAL_JUMP)  ; LAB_0047f238
    MOV ECX,0x1                         ; 0047f233
    CMP EBX,dword ptr [ESP + 0x10]      ; 0047f238
        ;   Label: LAB_0047f238
    JGE 0x0047f241                      ; 0047f23c
        ;   XREF to: 0047f241 (CONDITIONAL_JUMP)  ; LAB_0047f241
    OR CL,0x2                           ; 0047f23e
    CMP ESI,dword ptr [ESP]             ; 0047f241
        ;   Label: LAB_0047f241
    JLE 0x0047f249                      ; 0047f244
        ;   XREF to: 0047f249 (CONDITIONAL_JUMP)  ; LAB_0047f249
    OR CL,0x4                           ; 0047f246
    CMP ESI,dword ptr [ESP + 0x8]       ; 0047f249
        ;   Label: LAB_0047f249
    JL 0x0047f29a                       ; 0047f24d
        ;   XREF to: 0047f29a (CONDITIONAL_JUMP)  ; LAB_0047f29a
    XOR ESI,ESI                         ; 0047f24f
        ;   Label: LAB_0047f24f
    MOV dword ptr [ESP + 0x3c],ECX      ; 0047f251
    MOV dword ptr [ESP + 0x38],ESI      ; 0047f255
    MOV ECX,dword ptr [ESP + 0x68]      ; 0047f259
        ;   Label: LAB_0047f259
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0047f25d
    MOV EBX,dword ptr [EBP]             ; 0047f261
    MOV ECX,dword ptr [ECX]             ; 0047f264
    MOV ESI,dword ptr [ESI]             ; 0047f266
    SUB ECX,EBX                         ; 0047f268
    SUB ESI,dword ptr [EDI]             ; 0047f26a
    CMP dword ptr [ESP + 0x44],0x0      ; 0047f26c
    JZ 0x0047f29f                       ; 0047f271
        ;   XREF to: 0047f29f (CONDITIONAL_JUMP)  ; LAB_0047f29f
    MOV EBX,dword ptr [ESP + 0x44]      ; 0047f273
        ;   Label: LAB_0047f273
    TEST dword ptr [ESP + 0x3c],EBX     ; 0047f277
    JZ 0x0047f2b0                       ; 0047f27b
        ;   XREF to: 0047f2b0 (CONDITIONAL_JUMP)  ; LAB_0047f2b0
    XOR ESI,ESI                         ; 0047f27d
    MOV dword ptr [ESP + 0x18],ESI      ; 0047f27f
    CMP dword ptr [ESP + 0x38],0x64     ; 0047f283
        ;   Label: LAB_0047f283
    JZ 0x0047f463                       ; 0047f288
        ;   XREF to: 0047f463 (CONDITIONAL_JUMP)  ; LAB_0047f463
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047f28e
    ADD ESP,0x48                        ; 0047f292
    POP EBP                             ; 0047f295
    POP EDI                             ; 0047f296
    POP ESI                             ; 0047f297
    POP EBX                             ; 0047f298
    RET                                 ; 0047f299
    OR CL,0x8                           ; 0047f29a
        ;   Label: LAB_0047f29a
    JMP 0x0047f24f                      ; 0047f29d
        ;   XREF to: 0047f24f (UNCONDITIONAL_JUMP)  ; LAB_0047f24f
    CMP dword ptr [ESP + 0x3c],0x0      ; 0047f29f
        ;   Label: LAB_0047f29f
    JNZ 0x0047f273                      ; 0047f2a4
        ;   XREF to: 0047f273 (CONDITIONAL_JUMP)  ; LAB_0047f273
    MOV dword ptr [ESP + 0x18],0x1      ; 0047f2a6
    JMP 0x0047f283                      ; 0047f2ae
        ;   XREF to: 0047f283 (UNCONDITIONAL_JUMP)  ; LAB_0047f283
    TEST EBX,EBX                        ; 0047f2b0
        ;   Label: LAB_0047f2b0
    JZ 0x0047f34f                       ; 0047f2b2
        ;   XREF to: 0047f34f (CONDITIONAL_JUMP)  ; LAB_0047f34f
    MOV dword ptr [ESP + 0x40],EBX      ; 0047f2b8
        ;   Label: LAB_0047f2b8
    MOV BL,byte ptr [ESP + 0x40]        ; 0047f2bc
    TEST BL,0x1                         ; 0047f2c0
    JZ 0x0047f358                       ; 0047f2c3
        ;   XREF to: 0047f358 (CONDITIONAL_JUMP)  ; LAB_0047f358
    TEST ESI,ESI                        ; 0047f2c9
    JZ 0x0047f2ed                       ; 0047f2cb
        ;   XREF to: 0047f2ed (CONDITIONAL_JUMP)  ; LAB_0047f2ed
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047f2cd
    MOV EBX,dword ptr [EDI]             ; 0047f2d1
    MOV EDX,0x10000                     ; 0047f2d3
    SUB EAX,EBX                         ; 0047f2d8
    MOV EBX,ESI                         ; 0047f2da
    IMUL EDX                            ; 0047f2dc
    IDIV EBX                            ; 0047f2de
    MOV EDX,ECX                         ; 0047f2e0
    IMUL EDX                            ; 0047f2e2
    SHRD EAX,EDX,0x10                   ; 0047f2e4
    MOV EDX,dword ptr [EBP]             ; 0047f2e8
    ADD EDX,EAX                         ; 0047f2eb
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047f2ed
        ;   Label: LAB_0047f2ed
    CMP dword ptr [ESP + 0x44],0x0      ; 0047f2f1
        ;   Label: LAB_0047f2f1
    JZ 0x0047f3ee                       ; 0047f2f6
        ;   XREF to: 0047f3ee (CONDITIONAL_JUMP)  ; LAB_0047f3ee
    MOV ECX,dword ptr [ESP + 0x70]      ; 0047f2fc
    MOV ESI,EAX                         ; 0047f300
    MOV dword ptr [EBP],EDX             ; 0047f302
    MOV dword ptr [ESP + 0x24],ECX      ; 0047f305
    MOV ECX,dword ptr [ESP + 0x74]      ; 0047f309
    MOV dword ptr [EDI],EAX             ; 0047f30d
    MOV dword ptr [ESP + 0x1c],ECX      ; 0047f30f
    MOV ECX,dword ptr [ESP + 0x78]      ; 0047f313
    MOV EBX,dword ptr [EBP]             ; 0047f317
    MOV dword ptr [ESP + 0x2c],ECX      ; 0047f31a
    XOR ECX,ECX                         ; 0047f31e
    CMP EAX,dword ptr [ESP + 0x7c]      ; 0047f320
    JLE 0x0047f32b                      ; 0047f324
        ;   XREF to: 0047f32b (CONDITIONAL_JUMP)  ; LAB_0047f32b
    MOV ECX,0x1                         ; 0047f326
    CMP ESI,dword ptr [ESP + 0x1c]      ; 0047f32b
        ;   Label: LAB_0047f32b
    JGE 0x0047f334                      ; 0047f32f
        ;   XREF to: 0047f334 (CONDITIONAL_JUMP)  ; LAB_0047f334
    OR CL,0x2                           ; 0047f331
    CMP EBX,dword ptr [ESP + 0x2c]      ; 0047f334
        ;   Label: LAB_0047f334
    JLE 0x0047f33d                      ; 0047f338
        ;   XREF to: 0047f33d (CONDITIONAL_JUMP)  ; LAB_0047f33d
    OR CL,0x4                           ; 0047f33a
    CMP EBX,dword ptr [ESP + 0x24]      ; 0047f33d
        ;   Label: LAB_0047f33d
    JGE 0x0047f346                      ; 0047f341
        ;   XREF to: 0047f346 (CONDITIONAL_JUMP)  ; LAB_0047f346
    OR CL,0x8                           ; 0047f343
    MOV dword ptr [ESP + 0x44],ECX      ; 0047f346
        ;   Label: LAB_0047f346
    JMP 0x0047f44c                      ; 0047f34a
        ;   XREF to: 0047f44c (UNCONDITIONAL_JUMP)  ; LAB_0047f44c
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0047f34f
        ;   Label: LAB_0047f34f
    JMP 0x0047f2b8                      ; 0047f353
        ;   XREF to: 0047f2b8 (UNCONDITIONAL_JUMP)  ; LAB_0047f2b8
    TEST BL,0x2                         ; 0047f358
        ;   Label: LAB_0047f358
    JZ 0x0047f38a                       ; 0047f35b
        ;   XREF to: 0047f38a (CONDITIONAL_JUMP)  ; LAB_0047f38a
    TEST ESI,ESI                        ; 0047f35d
    JZ 0x0047f381                       ; 0047f35f
        ;   XREF to: 0047f381 (CONDITIONAL_JUMP)  ; LAB_0047f381
    MOV EAX,dword ptr [ESP + 0x74]      ; 0047f361
    MOV EDX,dword ptr [EDI]             ; 0047f365
    MOV EBX,ESI                         ; 0047f367
    SUB EAX,EDX                         ; 0047f369
    MOV EDX,0x10000                     ; 0047f36b
    IMUL EDX                            ; 0047f370
    IDIV EBX                            ; 0047f372
    MOV EDX,ECX                         ; 0047f374
    IMUL EDX                            ; 0047f376
    SHRD EAX,EDX,0x10                   ; 0047f378
    MOV EDX,dword ptr [EBP]             ; 0047f37c
    ADD EDX,EAX                         ; 0047f37f
    MOV EAX,dword ptr [ESP + 0x74]      ; 0047f381
        ;   Label: LAB_0047f381
    JMP 0x0047f2f1                      ; 0047f385
        ;   XREF to: 0047f2f1 (UNCONDITIONAL_JUMP)  ; LAB_0047f2f1
    TEST BL,0x4                         ; 0047f38a
        ;   Label: LAB_0047f38a
    JZ 0x0047f3ba                       ; 0047f38d
        ;   XREF to: 0047f3ba (CONDITIONAL_JUMP)  ; LAB_0047f3ba
    TEST ECX,ECX                        ; 0047f38f
    JZ 0x0047f3b1                       ; 0047f391
        ;   XREF to: 0047f3b1 (CONDITIONAL_JUMP)  ; LAB_0047f3b1
    MOV EAX,dword ptr [ESP + 0x78]      ; 0047f393
    MOV EBX,dword ptr [EBP]             ; 0047f397
    MOV EDX,0x10000                     ; 0047f39a
    SUB EAX,EBX                         ; 0047f39f
    MOV EBX,ECX                         ; 0047f3a1
    IMUL EDX                            ; 0047f3a3
    IDIV EBX                            ; 0047f3a5
    MOV EDX,ESI                         ; 0047f3a7
    IMUL EDX                            ; 0047f3a9
    SHRD EAX,EDX,0x10                   ; 0047f3ab
    ADD EAX,dword ptr [EDI]             ; 0047f3af
    MOV EDX,dword ptr [ESP + 0x78]      ; 0047f3b1
        ;   Label: LAB_0047f3b1
    JMP 0x0047f2f1                      ; 0047f3b5
        ;   XREF to: 0047f2f1 (UNCONDITIONAL_JUMP)  ; LAB_0047f2f1
    TEST BL,0x8                         ; 0047f3ba
        ;   Label: LAB_0047f3ba
    JZ 0x0047f2f1                       ; 0047f3bd
        ;   XREF to: 0047f2f1 (CONDITIONAL_JUMP)  ; LAB_0047f2f1
    TEST ECX,ECX                        ; 0047f3c3
    JZ 0x0047f3e5                       ; 0047f3c5
        ;   XREF to: 0047f3e5 (CONDITIONAL_JUMP)  ; LAB_0047f3e5
    MOV EAX,dword ptr [ESP + 0x70]      ; 0047f3c7
    MOV EDX,dword ptr [EBP]             ; 0047f3cb
    MOV EBX,ECX                         ; 0047f3ce
    SUB EAX,EDX                         ; 0047f3d0
    MOV EDX,0x10000                     ; 0047f3d2
    IMUL EDX                            ; 0047f3d7
    IDIV EBX                            ; 0047f3d9
    MOV EDX,ESI                         ; 0047f3db
    IMUL EDX                            ; 0047f3dd
    SHRD EAX,EDX,0x10                   ; 0047f3df
    ADD EAX,dword ptr [EDI]             ; 0047f3e3
    MOV EDX,dword ptr [ESP + 0x70]      ; 0047f3e5
        ;   Label: LAB_0047f3e5
    JMP 0x0047f2f1                      ; 0047f3e9
        ;   XREF to: 0047f2f1 (UNCONDITIONAL_JUMP)  ; LAB_0047f2f1
    MOV ECX,dword ptr [ESP + 0x68]      ; 0047f3ee
        ;   Label: LAB_0047f3ee
    MOV dword ptr [ECX],EDX             ; 0047f3f2
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0047f3f4
    MOV dword ptr [ECX],EAX             ; 0047f3f8
    MOV ECX,dword ptr [ESP + 0x70]      ; 0047f3fa
    MOV EBX,dword ptr [ESP + 0x68]      ; 0047f3fe
    MOV dword ptr [ESP + 0x20],ECX      ; 0047f402
    MOV ECX,dword ptr [ESP + 0x74]      ; 0047f406
    MOV dword ptr [ESP + 0x34],EAX      ; 0047f40a
    MOV dword ptr [ESP + 0x28],ECX      ; 0047f40e
    MOV ECX,dword ptr [ESP + 0x78]      ; 0047f412
    MOV EBX,dword ptr [EBX]             ; 0047f416
    MOV dword ptr [ESP + 0x30],ECX      ; 0047f418
    XOR ECX,ECX                         ; 0047f41c
    CMP EAX,dword ptr [ESP + 0x7c]      ; 0047f41e
    JLE 0x0047f429                      ; 0047f422
        ;   XREF to: 0047f429 (CONDITIONAL_JUMP)  ; LAB_0047f429
    MOV ECX,0x1                         ; 0047f424
    MOV ESI,dword ptr [ESP + 0x34]      ; 0047f429
        ;   Label: LAB_0047f429
    CMP ESI,dword ptr [ESP + 0x28]      ; 0047f42d
    JGE 0x0047f436                      ; 0047f431
        ;   XREF to: 0047f436 (CONDITIONAL_JUMP)  ; LAB_0047f436
    OR CL,0x2                           ; 0047f433
    CMP EBX,dword ptr [ESP + 0x30]      ; 0047f436
        ;   Label: LAB_0047f436
    JLE 0x0047f43f                      ; 0047f43a
        ;   XREF to: 0047f43f (CONDITIONAL_JUMP)  ; LAB_0047f43f
    OR CL,0x4                           ; 0047f43c
    CMP EBX,dword ptr [ESP + 0x20]      ; 0047f43f
        ;   Label: LAB_0047f43f
    JGE 0x0047f448                      ; 0047f443
        ;   XREF to: 0047f448 (CONDITIONAL_JUMP)  ; LAB_0047f448
    OR CL,0x8                           ; 0047f445
    MOV dword ptr [ESP + 0x3c],ECX      ; 0047f448
        ;   Label: LAB_0047f448
    MOV ECX,dword ptr [ESP + 0x38]      ; 0047f44c
        ;   Label: LAB_0047f44c
    INC ECX                             ; 0047f450
    MOV dword ptr [ESP + 0x38],ECX      ; 0047f451
    CMP ECX,0x64                        ; 0047f455
    JL 0x0047f259                       ; 0047f458
        ;   XREF to: 0047f259 (CONDITIONAL_JUMP)  ; LAB_0047f259
    JMP 0x0047f283                      ; 0047f45e
        ;   XREF to: 0047f283 (UNCONDITIONAL_JUMP)  ; LAB_0047f283
    MOV EBP,0x5db0dd                    ; 0047f463
        ;   Label: LAB_0047f463
    MOV EAX,0x36a                       ; 0047f468
    PUSH 0x5db0f5                       ; 0047f46d
    MOV dword ptr [0x01d1d400],EBP      ; 0047f472 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0047f478 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0047f47d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0047f482
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047f485
    ADD ESP,0x48                        ; 0047f489
    POP EBP                             ; 0047f48c
    POP EDI                             ; 0047f48d
    POP ESI                             ; 0047f48e
    POP EBX                             ; 0047f48f
    RET                                 ; 0047f490

