; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_FUN_004691e0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; XREF[2]:
;   cockpit_drawsurf.cpp_FUN_00469080 at 004690c2
;   cockpit_drawsurf.cpp_FUN_004693b0 at 004693c2
;
; Referenced Globals:
;   undefined4 DAT_005bc340
;   undefined4 DAT_005f2aec
;   undefined4 DAT_005f2af0
;   undefined4 DAT_01bdd530
;   undefined4 DAT_01bdd534
;   undefined4 DAT_01bdd538
;   undefined4 DAT_01c5fad0
;   undefined4 DAT_01c5fad4
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004691e0
        ;   Label: cockpit_drawsurf.cpp_FUN_004691e0
    PUSH ESI                            ; 004691e1
    PUSH EDI                            ; 004691e2
    PUSH EBP                            ; 004691e3
    SUB ESP,0x8                         ; 004691e4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004691e7
    MOV EBP,dword ptr [ESP + 0x20]      ; 004691eb
    MOV EDI,dword ptr [ESP + 0x28]      ; 004691ef
    MOV ECX,dword ptr [0x01c5fad4]      ; 004691f3 | DAT_01c5fad4
    CMP ECX,dword ptr [0x01bdd538]      ; 004691f9 | DAT_01bdd538
    JNZ 0x0046932a                      ; 004691ff
        ;   XREF to: 0046932a (CONDITIONAL_JUMP)  ; LAB_0046932a
    FLD float ptr [0x01bdd534]          ; 00469205 | DAT_01bdd534
        ;   Label: LAB_00469205
    CALL crt_math.c_round_FUN_005a3120  ; 0046920b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP]               ; 00469210
    CMP EBP,EDI                         ; 00469213
    JLE 0x0046921d                      ; 00469215
        ;   XREF to: 0046921d (CONDITIONAL_JUMP)  ; LAB_0046921d
    MOV EDX,EBP                         ; 00469217
    MOV EBP,EDI                         ; 00469219
    MOV EDI,EDX                         ; 0046921b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0046921d
        ;   Label: LAB_0046921d
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00469221
    CMP EDX,ECX                         ; 00469225
    JLE 0x00469231                      ; 00469227
        ;   XREF to: 00469231 (CONDITIONAL_JUMP)  ; LAB_00469231
    MOV dword ptr [ESP + 0x24],ECX      ; 00469229
    MOV dword ptr [ESP + 0x2c],EDX      ; 0046922d
    MOV EBX,EBP                         ; 00469231
        ;   Label: LAB_00469231
    CMP EBP,EDI                         ; 00469233
    JGE 0x0046926c                      ; 00469235
        ;   XREF to: 0046926c (CONDITIONAL_JUMP)  ; LAB_0046926c
    MOV EAX,dword ptr [ESP]             ; 00469237
        ;   Label: LAB_00469237
    MOV ECX,dword ptr [0x005f2aec]      ; 0046923a | DAT_005f2aec
    MOV EDX,EAX                         ; 00469240
    ADD ECX,ECX                         ; 00469242
    SAR EDX,0x1f                        ; 00469244
    IDIV ECX                            ; 00469247
    CMP EDX,dword ptr [0x005f2aec]      ; 00469249 | DAT_005f2aec
    JGE 0x00469260                      ; 0046924f
        ;   XREF to: 00469260 (CONDITIONAL_JUMP)  ; LAB_00469260
    MOV EDX,dword ptr [ESP + 0x24]      ; 00469251
    PUSH EDX                            ; 00469255
    PUSH EBX                            ; 00469256
    PUSH ESI                            ; 00469257
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 00469258
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046925d
    MOV EAX,dword ptr [ESP]             ; 00469260
        ;   Label: LAB_00469260
    INC EAX                             ; 00469263
    INC EBX                             ; 00469264
    MOV dword ptr [ESP],EAX             ; 00469265
    CMP EBX,EDI                         ; 00469268
    JL 0x00469237                       ; 0046926a
        ;   XREF to: 00469237 (CONDITIONAL_JUMP)  ; LAB_00469237
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0046926c
        ;   Label: LAB_0046926c
    MOV EBX,dword ptr [ESP + 0x24]      ; 00469270
    CMP EBX,ECX                         ; 00469274
    JGE 0x004692ad                      ; 00469276
        ;   XREF to: 004692ad (CONDITIONAL_JUMP)  ; LAB_004692ad
    MOV EAX,dword ptr [ESP]             ; 00469278
        ;   Label: LAB_00469278
    MOV ECX,dword ptr [0x005f2aec]      ; 0046927b | DAT_005f2aec
    MOV EDX,EAX                         ; 00469281
    ADD ECX,ECX                         ; 00469283
    SAR EDX,0x1f                        ; 00469285
    IDIV ECX                            ; 00469288
    CMP EDX,dword ptr [0x005f2aec]      ; 0046928a | DAT_005f2aec
    JGE 0x0046929d                      ; 00469290
        ;   XREF to: 0046929d (CONDITIONAL_JUMP)  ; LAB_0046929d
    PUSH EBX                            ; 00469292
    PUSH EDI                            ; 00469293
    PUSH ESI                            ; 00469294
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 00469295
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046929a
    MOV ECX,dword ptr [ESP]             ; 0046929d
        ;   Label: LAB_0046929d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004692a0
    INC ECX                             ; 004692a4
    INC EBX                             ; 004692a5
    MOV dword ptr [ESP],ECX             ; 004692a6
    CMP EBX,EAX                         ; 004692a9
    JL 0x00469278                       ; 004692ab
        ;   XREF to: 00469278 (CONDITIONAL_JUMP)  ; LAB_00469278
    MOV EBX,EDI                         ; 004692ad
        ;   Label: LAB_004692ad
    CMP EDI,EBP                         ; 004692af
    JLE 0x004692e8                      ; 004692b1
        ;   XREF to: 004692e8 (CONDITIONAL_JUMP)  ; LAB_004692e8
    MOV EAX,dword ptr [ESP]             ; 004692b3
        ;   Label: LAB_004692b3
    MOV EDI,dword ptr [0x005f2aec]      ; 004692b6 | DAT_005f2aec
    MOV EDX,EAX                         ; 004692bc
    ADD EDI,EDI                         ; 004692be
    SAR EDX,0x1f                        ; 004692c0
    IDIV EDI                            ; 004692c3
    CMP EDX,dword ptr [0x005f2aec]      ; 004692c5 | DAT_005f2aec
    JGE 0x004692dc                      ; 004692cb
        ;   XREF to: 004692dc (CONDITIONAL_JUMP)  ; LAB_004692dc
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004692cd
    PUSH EDI                            ; 004692d1
    PUSH EBX                            ; 004692d2
    PUSH ESI                            ; 004692d3
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 004692d4
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004692d9
    MOV EDI,dword ptr [ESP]             ; 004692dc
        ;   Label: LAB_004692dc
    INC EDI                             ; 004692df
    DEC EBX                             ; 004692e0
    MOV dword ptr [ESP],EDI             ; 004692e1
    CMP EBX,EBP                         ; 004692e4
    JG 0x004692b3                       ; 004692e6
        ;   XREF to: 004692b3 (CONDITIONAL_JUMP)  ; LAB_004692b3
    MOV EAX,dword ptr [ESP + 0x24]      ; 004692e8
        ;   Label: LAB_004692e8
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004692ec
    CMP EBX,EAX                         ; 004692f0
    JLE 0x00469322                      ; 004692f2
        ;   XREF to: 00469322 (CONDITIONAL_JUMP)  ; LAB_00469322
    MOV EAX,dword ptr [ESP]             ; 004692f4
        ;   Label: LAB_004692f4
    MOV ECX,dword ptr [0x005f2aec]      ; 004692f7 | DAT_005f2aec
    MOV EDX,EAX                         ; 004692fd
    ADD ECX,ECX                         ; 004692ff
    SAR EDX,0x1f                        ; 00469301
    IDIV ECX                            ; 00469304
    CMP EDX,dword ptr [0x005f2aec]      ; 00469306 | DAT_005f2aec
    JL 0x004693a0                       ; 0046930c
        ;   XREF to: 004693a0 (CONDITIONAL_JUMP)  ; LAB_004693a0
    MOV EAX,dword ptr [ESP]             ; 00469312
        ;   Label: LAB_00469312
    MOV EDX,dword ptr [ESP + 0x24]      ; 00469315
    INC EAX                             ; 00469319
    DEC EBX                             ; 0046931a
    MOV dword ptr [ESP],EAX             ; 0046931b
    CMP EBX,EDX                         ; 0046931e
    JG 0x004692f4                       ; 00469320
        ;   XREF to: 004692f4 (CONDITIONAL_JUMP)  ; LAB_004692f4
    ADD ESP,0x8                         ; 00469322
        ;   Label: LAB_00469322
    POP EBP                             ; 00469325
    POP EDI                             ; 00469326
    POP ESI                             ; 00469327
    POP EBX                             ; 00469328
    RET                                 ; 00469329
    FILD dword ptr [0x01c5fad0]         ; 0046932a | DAT_01c5fad0
        ;   Label: LAB_0046932a
    FMUL float ptr [0x005bc340]         ; 00469330 | DAT_005bc340
    FADD float ptr [0x01bdd530]         ; 00469336 | DAT_01bdd530
    MOV dword ptr [0x01bdd538],ECX      ; 0046933c | DAT_01bdd538
    FST float ptr [0x01bdd530]          ; 00469342 | DAT_01bdd530
    FCOMP float ptr [0x005f2af0]        ; 00469348 | DAT_005f2af0
    FNSTSW AX                           ; 0046934e
    SAHF                                ; 00469350
    JBE 0x00469205                      ; 00469351
        ;   XREF to: 00469205 (CONDITIONAL_JUMP)  ; LAB_00469205
    FLD float ptr [0x01bdd530]          ; 00469357 | DAT_01bdd530
    FDIV float ptr [0x005f2af0]         ; 0046935d | DAT_005f2af0
    MOV EDX,dword ptr [0x005f2aec]      ; 00469363 | DAT_005f2aec
    ADD EDX,EDX                         ; 00469369
    MOV dword ptr [ESP + 0x4],EDX       ; 0046936b
    FADD float ptr [0x01bdd534]         ; 0046936f | DAT_01bdd534
    FILD dword ptr [ESP + 0x4]          ; 00469375
    FXCH                                ; 00469379
    FSTP float ptr [0x01bdd534]         ; 0046937b | DAT_01bdd534
    FCOMP float ptr [0x01bdd534]        ; 00469381 | DAT_01bdd534
    FNSTSW AX                           ; 00469387
    SAHF                                ; 00469389
    JNC 0x00469394                      ; 0046938a
        ;   XREF to: 00469394 (CONDITIONAL_JUMP)  ; LAB_00469394
    XOR EBX,EBX                         ; 0046938c
    MOV dword ptr [0x01bdd534],EBX      ; 0046938e | DAT_01bdd534
    XOR EAX,EAX                         ; 00469394
        ;   Label: LAB_00469394
    MOV [0x01bdd530],EAX                ; 00469396 | DAT_01bdd530
    JMP 0x00469205                      ; 0046939b
        ;   XREF to: 00469205 (UNCONDITIONAL_JUMP)  ; LAB_00469205
    PUSH EBX                            ; 004693a0
        ;   Label: LAB_004693a0
    PUSH EBP                            ; 004693a1
    PUSH ESI                            ; 004693a2
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 004693a3
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004693a8
    JMP 0x00469312                      ; 004693ab
        ;   XREF to: 00469312 (UNCONDITIONAL_JUMP)  ; LAB_00469312

