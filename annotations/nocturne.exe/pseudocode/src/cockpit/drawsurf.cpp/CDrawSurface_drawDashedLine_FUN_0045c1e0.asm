; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0(int param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_0057d976
;   undefined4 DAT_005ae6f4
;   undefined4 DAT_005ae6f8
;   undefined4 DAT_01b4d478
;   undefined4 DAT_01b4d47c
;   undefined4 DAT_01b4d480
;   undefined4 DAT_01bd1d80
;   undefined4 DAT_01bd1d84
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c1e0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0
    PUSH ESI                            ; 0045c1e1
    PUSH EDI                            ; 0045c1e2
    PUSH EBP                            ; 0045c1e3
    SUB ESP,0x24                        ; 0045c1e4
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0045c1e7
    MOV EBX,dword ptr [ESP + 0x40]      ; 0045c1eb
    MOV EBP,dword ptr [ESP + 0x44]      ; 0045c1ef
    MOV EDX,dword ptr [ESP + 0x48]      ; 0045c1f3
    MOV EDI,dword ptr [0x01bd1d84]      ; 0045c1f7 | DAT_01bd1d84
    CMP EDI,dword ptr [0x01b4d480]      ; 0045c1fd | DAT_01b4d480
    JNZ 0x0045c2db                      ; 0045c203
        ;   XREF to: 0045c2db (CONDITIONAL_JUMP)  ; LAB_0045c2db
    FLD float ptr [0x01b4d47c]          ; 0045c209 | DAT_01b4d47c
        ;   Label: LAB_0045c209
    MOV EDI,0x1                         ; 0045c20f
    MOV ECX,dword ptr [ESP + 0x38]      ; 0045c214
    CALL crt_math.c_round_FUN_00563a30  ; 0045c218
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x1c]        ; 0045c21d
    MOV dword ptr [ESP + 0xc],EDI       ; 0045c221
    MOV EAX,dword ptr [ECX + 0x8]       ; 0045c225
    MOV EDI,dword ptr [ECX + 0xc]       ; 0045c228
    SUB ESI,EAX                         ; 0045c22b
    SUB EBP,EAX                         ; 0045c22d
    MOV EAX,0x1                         ; 0045c22f
    SUB EBX,EDI                         ; 0045c234
    SUB EDX,EDI                         ; 0045c236
    MOV dword ptr [ESP + 0x8],EAX       ; 0045c238
    CMP EBX,EDX                         ; 0045c23c
    JG 0x0045c248                       ; 0045c23e
        ;   XREF to: 0045c248 (CONDITIONAL_JUMP)  ; LAB_0045c248
    MOV dword ptr [ESP + 0x8],0xffffffff ; 0045c240
    JLE 0x0045c256                      ; 0045c248
        ;   XREF to: 0045c256 (CONDITIONAL_JUMP)  ; LAB_0045c256
        ;   Label: LAB_0045c248
    MOV ECX,ESI                         ; 0045c24a
    MOV ESI,EBP                         ; 0045c24c
    MOV EBP,ECX                         ; 0045c24e
    MOV ECX,EBX                         ; 0045c250
    MOV EBX,EDX                         ; 0045c252
    MOV EDX,ECX                         ; 0045c254
    SUB EDX,EBX                         ; 0045c256
        ;   Label: LAB_0045c256
    SUB EBP,ESI                         ; 0045c258
    MOV dword ptr [ESP + 0x18],EDX      ; 0045c25a
    TEST EBP,EBP                        ; 0045c25e
    JL 0x0045c357                       ; 0045c260
        ;   XREF to: 0045c357 (CONDITIONAL_JUMP)  ; LAB_0045c357
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045c266
        ;   Label: LAB_0045c266
    CMP EBP,EAX                         ; 0045c26a
    JLE 0x0045c37b                      ; 0045c26c
        ;   XREF to: 0045c37b (CONDITIONAL_JUMP)  ; LAB_0045c37b
    XOR EDX,EDX                         ; 0045c272
    LEA EDI,[EAX + EAX*0x1]             ; 0045c274
    MOV dword ptr [ESP + 0x14],EDX      ; 0045c277
    SUB EDI,EBP                         ; 0045c27b
    TEST EBP,EBP                        ; 0045c27d
    JL 0x0045c2d3                       ; 0045c27f
        ;   XREF to: 0045c2d3 (CONDITIONAL_JUMP)  ; LAB_0045c2d3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045c281
        ;   Label: LAB_0045c281
    CDQ                                 ; 0045c285
    XOR EAX,EDX                         ; 0045c286
    SUB EAX,EDX                         ; 0045c288
    MOV EDX,EAX                         ; 0045c28a
    MOV ECX,dword ptr [0x005ae6f4]      ; 0045c28c | DAT_005ae6f4
    SAR EDX,0x1f                        ; 0045c292
    ADD ECX,ECX                         ; 0045c295
    IDIV ECX                            ; 0045c297
    CMP EDX,dword ptr [0x005ae6f4]      ; 0045c299 | DAT_005ae6f4
    JL 0x0045c367                       ; 0045c29f
        ;   XREF to: 0045c367 (CONDITIONAL_JUMP)  ; LAB_0045c367
    TEST EDI,EDI                        ; 0045c2a5
        ;   Label: LAB_0045c2a5
    JLE 0x0045c2ac                      ; 0045c2a7
        ;   XREF to: 0045c2ac (CONDITIONAL_JUMP)  ; LAB_0045c2ac
    INC EBX                             ; 0045c2a9
    SUB EDI,EBP                         ; 0045c2aa
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045c2ac
        ;   Label: LAB_0045c2ac
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045c2b0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045c2b4
    ADD ECX,EDX                         ; 0045c2b8
    ADD ESI,EAX                         ; 0045c2ba
    MOV dword ptr [ESP + 0x1c],ECX      ; 0045c2bc
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045c2c0
    MOV EDX,dword ptr [ESP + 0x18]      ; 0045c2c4
    INC ECX                             ; 0045c2c8
    ADD EDI,EDX                         ; 0045c2c9
    MOV dword ptr [ESP + 0x14],ECX      ; 0045c2cb
    CMP EBP,ECX                         ; 0045c2cf
    JGE 0x0045c281                      ; 0045c2d1
        ;   XREF to: 0045c281 (CONDITIONAL_JUMP)  ; LAB_0045c281
    ADD ESP,0x24                        ; 0045c2d3
        ;   Label: LAB_0045c2d3
    POP EBP                             ; 0045c2d6
    POP EDI                             ; 0045c2d7
    POP ESI                             ; 0045c2d8
    POP EBX                             ; 0045c2d9
    RET                                 ; 0045c2da
    FILD dword ptr [0x01bd1d80]         ; 0045c2db | DAT_01bd1d80
        ;   Label: LAB_0045c2db
    FMUL double ptr [0x0057d976]        ; 0045c2e1 | DAT_0057d976
    FLD float ptr [0x01b4d478]          ; 0045c2e7 | DAT_01b4d478
    FXCH                                ; 0045c2ed
    FADD ST0,ST1                        ; 0045c2ef
    MOV dword ptr [0x01b4d480],EDI      ; 0045c2f1 | DAT_01b4d480
    FSTP ST1                            ; 0045c2f7
    FST float ptr [0x01b4d478]          ; 0045c2f9 | DAT_01b4d478
    FCOMP float ptr [0x005ae6f8]        ; 0045c2ff | DAT_005ae6f8
    FNSTSW AX                           ; 0045c305
    SAHF                                ; 0045c307
    JBE 0x0045c209                      ; 0045c308
        ;   XREF to: 0045c209 (CONDITIONAL_JUMP)  ; LAB_0045c209
    FLD float ptr [0x01b4d478]          ; 0045c30e | DAT_01b4d478
    FDIV float ptr [0x005ae6f8]         ; 0045c314 | DAT_005ae6f8
    MOV ECX,dword ptr [0x005ae6f4]      ; 0045c31a | DAT_005ae6f4
    ADD ECX,ECX                         ; 0045c320
    MOV dword ptr [ESP + 0x20],ECX      ; 0045c322
    FADD float ptr [0x01b4d47c]         ; 0045c326 | DAT_01b4d47c
    FILD dword ptr [ESP + 0x20]         ; 0045c32c
    FXCH                                ; 0045c330
    FSTP float ptr [0x01b4d47c]         ; 0045c332 | DAT_01b4d47c
    FCOMP float ptr [0x01b4d47c]        ; 0045c338 | DAT_01b4d47c
    FNSTSW AX                           ; 0045c33e
    SAHF                                ; 0045c340
    JNC 0x0045c34a                      ; 0045c341
        ;   XREF to: 0045c34a (CONDITIONAL_JUMP)  ; LAB_0045c34a
    XOR EAX,EAX                         ; 0045c343
    MOV [0x01b4d47c],EAX                ; 0045c345 | DAT_01b4d47c
    XOR ECX,ECX                         ; 0045c34a
        ;   Label: LAB_0045c34a
    MOV dword ptr [0x01b4d478],ECX      ; 0045c34c | DAT_01b4d478
    JMP 0x0045c209                      ; 0045c352
        ;   XREF to: 0045c209 (UNCONDITIONAL_JUMP)  ; LAB_0045c209
    MOV EDI,0xffffffff                  ; 0045c357
        ;   Label: LAB_0045c357
    NEG EBP                             ; 0045c35c
    MOV dword ptr [ESP + 0xc],EDI       ; 0045c35e
    JMP 0x0045c266                      ; 0045c362
        ;   XREF to: 0045c266 (UNCONDITIONAL_JUMP)  ; LAB_0045c266
    PUSH EBX                            ; 0045c367
        ;   Label: LAB_0045c367
    PUSH ESI                            ; 0045c368
    MOV EAX,dword ptr [ESP + 0x40]      ; 0045c369
    PUSH EAX                            ; 0045c36d
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045c36e
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045c373
    JMP 0x0045c2a5                      ; 0045c376
        ;   XREF to: 0045c2a5 (UNCONDITIONAL_JUMP)  ; LAB_0045c2a5
    XOR ECX,ECX                         ; 0045c37b
        ;   Label: LAB_0045c37b
    LEA EDI,[EBP + EBP*0x1]             ; 0045c37d
    MOV dword ptr [ESP + 0x10],ECX      ; 0045c381
    SUB EDI,EAX                         ; 0045c385
    TEST EAX,EAX                        ; 0045c387
    JL 0x0045c2d3                       ; 0045c389
        ;   XREF to: 0045c2d3 (CONDITIONAL_JUMP)  ; LAB_0045c2d3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045c38f
        ;   Label: LAB_0045c38f
    CDQ                                 ; 0045c393
    XOR EAX,EDX                         ; 0045c394
    SUB EAX,EDX                         ; 0045c396
    MOV EDX,EAX                         ; 0045c398
    MOV ECX,dword ptr [0x005ae6f4]      ; 0045c39a | DAT_005ae6f4
    SAR EDX,0x1f                        ; 0045c3a0
    ADD ECX,ECX                         ; 0045c3a3
    IDIV ECX                            ; 0045c3a5
    CMP EDX,dword ptr [0x005ae6f4]      ; 0045c3a7 | DAT_005ae6f4
    JL 0x0045c3e7                       ; 0045c3ad
        ;   XREF to: 0045c3e7 (CONDITIONAL_JUMP)  ; LAB_0045c3e7
    TEST EDI,EDI                        ; 0045c3af
        ;   Label: LAB_0045c3af
    JLE 0x0045c3bf                      ; 0045c3b1
        ;   XREF to: 0045c3bf (CONDITIONAL_JUMP)  ; LAB_0045c3bf
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045c3b3
    MOV ECX,dword ptr [ESP + 0xc]       ; 0045c3b7
    SUB EDI,EAX                         ; 0045c3bb
    ADD ESI,ECX                         ; 0045c3bd
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045c3bf
        ;   Label: LAB_0045c3bf
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045c3c3
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045c3c7
    INC EBX                             ; 0045c3cb
    ADD EDI,EBP                         ; 0045c3cc
    ADD ECX,EDX                         ; 0045c3ce
    INC EAX                             ; 0045c3d0
    MOV dword ptr [ESP + 0x1c],ECX      ; 0045c3d1
    MOV ECX,dword ptr [ESP + 0x18]      ; 0045c3d5
    MOV dword ptr [ESP + 0x10],EAX      ; 0045c3d9
    CMP EAX,ECX                         ; 0045c3dd
    JG 0x0045c2d3                       ; 0045c3df
        ;   XREF to: 0045c2d3 (CONDITIONAL_JUMP)  ; LAB_0045c2d3
    JMP 0x0045c38f                      ; 0045c3e5
        ;   XREF to: 0045c38f (UNCONDITIONAL_JUMP)  ; LAB_0045c38f
    PUSH EBX                            ; 0045c3e7
        ;   Label: LAB_0045c3e7
    PUSH ESI                            ; 0045c3e8
    MOV EDX,dword ptr [ESP + 0x40]      ; 0045c3e9
    PUSH EDX                            ; 0045c3ed
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0 ; 0045c3ee
        ;   XREF to: 0045bab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0()
    ADD ESP,0xc                         ; 0045c3f3
    JMP 0x0045c3af                      ; 0045c3f6
        ;   XREF to: 0045c3af (UNCONDITIONAL_JUMP)  ; LAB_0045c3af

