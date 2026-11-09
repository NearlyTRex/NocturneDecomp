; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_drawLineAA_FUN_00437250(int x0,int y0,int x1,int y1,int color)
;
; Parameters:
; int              Stack[0x4]:4   x0
; int              Stack[0x8]:4   y0
; int              Stack[0xc]:4   x1
; int              Stack[0x10]:4   y1
; int              Stack[0x14]:4   color
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00468e60 at 00468ee4
;
; Referenced Globals:
;   undefined4 DAT_005f12f0
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;
; Called Functions:
;   cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004378b0
;   cockpit_ckptutil.c_putPixel_FUN_00437b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437250
        ;   Label: cockpit_ckptutil.c_drawLineAA_FUN_00437250
    PUSH ESI                            ; 00437251
    PUSH EDI                            ; 00437252
    PUSH EBP                            ; 00437253
    MOV EBP,ESP                         ; 00437254
    SUB ESP,0x30                        ; 00437256
    AND ESP,0xfffffff8                  ; 00437259
    MOV ESI,dword ptr [EBP + 0x14]      ; 0043725c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0043725f
    MOV EDX,0x3b800000                  ; 00437262
    MOV ECX,dword ptr [EBP + 0x20]      ; 00437267
    MOV dword ptr [ESP],EDX             ; 0043726a
    CMP EBX,ECX                         ; 0043726d
    JG 0x00437317                       ; 0043726f
        ;   XREF to: 00437317 (CONDITIONAL_JUMP)  ; LAB_00437317
    CMP dword ptr [0x005f12f0],0x0      ; 00437275 | DAT_005f12f0
        ;   Label: LAB_00437275
    JNZ 0x004372ca                      ; 0043727c
        ;   XREF to: 004372ca (CONDITIONAL_JUMP)  ; LAB_004372ca
    CMP ESI,dword ptr [0x01c6b5a8]      ; 0043727e | DAT_01c6b5a8
    JGE 0x00437295                      ; 00437284
        ;   XREF to: 00437295 (CONDITIONAL_JUMP)  ; LAB_00437295
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00437286
    CMP EAX,dword ptr [0x01c6b5a8]      ; 00437289 | DAT_01c6b5a8
    JL 0x00437310                       ; 0043728f
        ;   XREF to: 00437310 (CONDITIONAL_JUMP)  ; LAB_00437310
    MOV ECX,dword ptr [0x01c6b5b0]      ; 00437295 | DAT_01c6b5b0
        ;   Label: LAB_00437295
    CMP ESI,ECX                         ; 0043729b
    JLE 0x004372a8                      ; 0043729d
        ;   XREF to: 004372a8 (CONDITIONAL_JUMP)  ; LAB_004372a8
    CMP ECX,dword ptr [EBP + 0x1c]      ; 0043729f
    JL 0x00437310                       ; 004372a2
        ;   XREF to: 00437310 (CONDITIONAL_JUMP)  ; LAB_00437310
    CMP EBX,dword ptr [0x01c6b5ac]      ; 004372a8 | DAT_01c6b5ac
        ;   Label: LAB_004372a8
    JGE 0x004372bb                      ; 004372ae
        ;   XREF to: 004372bb (CONDITIONAL_JUMP)  ; LAB_004372bb
    MOV EAX,dword ptr [EBP + 0x20]      ; 004372b0
    CMP EAX,dword ptr [0x01c6b5ac]      ; 004372b3 | DAT_01c6b5ac
    JL 0x00437310                       ; 004372b9
        ;   XREF to: 00437310 (CONDITIONAL_JUMP)  ; LAB_00437310
    MOV ECX,dword ptr [0x01c6b5b4]      ; 004372bb | DAT_01c6b5b4
        ;   Label: LAB_004372bb
    CMP EBX,ECX                         ; 004372c1
    JLE 0x004372ca                      ; 004372c3
        ;   XREF to: 004372ca (CONDITIONAL_JUMP)  ; LAB_004372ca
    CMP ECX,dword ptr [EBP + 0x20]      ; 004372c5
    JL 0x00437310                       ; 004372c8
        ;   XREF to: 00437310 (CONDITIONAL_JUMP)  ; LAB_00437310
    MOV EAX,dword ptr [EBP + 0x24]      ; 004372ca
        ;   Label: LAB_004372ca
    PUSH EAX                            ; 004372cd
    PUSH EBX                            ; 004372ce
    PUSH ESI                            ; 004372cf
    CALL cockpit_ckptutil.c_putPixel_FUN_00437b80 ; 004372d0
        ;   XREF to: 00437b80 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00437b80(int x, int y, int color)
    ADD ESP,0xc                         ; 004372d5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004372d8
    SUB EAX,ESI                         ; 004372db
    MOV dword ptr [ESP + 0x28],EAX      ; 004372dd
    TEST EAX,EAX                        ; 004372e1
    JL 0x0043732b                       ; 004372e3
        ;   XREF to: 0043732b (CONDITIONAL_JUMP)  ; LAB_0043732b
    MOV dword ptr [ESP + 0x24],0x1      ; 004372e5
    MOV EAX,dword ptr [EBP + 0x20]      ; 004372ed
        ;   Label: LAB_004372ed
    SUB EAX,EBX                         ; 004372f0
    MOV dword ptr [ESP + 0x2c],EAX      ; 004372f2
    JNZ 0x00437354                      ; 004372f6
        ;   XREF to: 00437354 (CONDITIONAL_JUMP)  ; LAB_00437354
    MOV EDI,0xffffffff                  ; 004372f8
    MOV ECX,dword ptr [ESP + 0x28]      ; 004372fd
        ;   Label: LAB_004372fd
    ADD ECX,EDI                         ; 00437301
    MOV dword ptr [ESP + 0x28],ECX      ; 00437303
    CMP EDI,ECX                         ; 00437307
    JNZ 0x0043733e                      ; 00437309
        ;   XREF to: 0043733e (CONDITIONAL_JUMP)  ; LAB_0043733e
    LEA EAX,[EAX]                       ; 0043730b
    MOV ECX,ECX                         ; 0043730e
    MOV ESP,EBP                         ; 00437310
        ;   Label: LAB_00437310
    POP EBP                             ; 00437312
    POP EDI                             ; 00437313
    POP ESI                             ; 00437314
    POP EBX                             ; 00437315
    RET                                 ; 00437316
    MOV EAX,EBX                         ; 00437317
        ;   Label: LAB_00437317
    MOV EBX,ECX                         ; 00437319
    MOV dword ptr [EBP + 0x20],EAX      ; 0043731b
    MOV EAX,ESI                         ; 0043731e
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00437320
    MOV dword ptr [EBP + 0x1c],EAX      ; 00437323
    JMP 0x00437275                      ; 00437326
        ;   XREF to: 00437275 (UNCONDITIONAL_JUMP)  ; LAB_00437275
    MOV EDI,EAX                         ; 0043732b
        ;   Label: LAB_0043732b
    MOV ECX,0xffffffff                  ; 0043732d
    NEG EDI                             ; 00437332
    MOV dword ptr [ESP + 0x24],ECX      ; 00437334
    MOV dword ptr [ESP + 0x28],EDI      ; 00437338
    JMP 0x004372ed                      ; 0043733c
        ;   XREF to: 004372ed (UNCONDITIONAL_JUMP)  ; LAB_004372ed
    MOV ECX,dword ptr [EBP + 0x24]      ; 0043733e
        ;   Label: LAB_0043733e
    PUSH ECX                            ; 00437341
    MOV EDX,dword ptr [ESP + 0x28]      ; 00437342
    PUSH EBX                            ; 00437346
    ADD ESI,EDX                         ; 00437347
    PUSH ESI                            ; 00437349
    CALL cockpit_ckptutil.c_putPixel_FUN_00437b80 ; 0043734a
        ;   XREF to: 00437b80 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00437b80(int x, int y, int color)
    ADD ESP,0xc                         ; 0043734f
    JMP 0x004372fd                      ; 00437352
        ;   XREF to: 004372fd (UNCONDITIONAL_JUMP)  ; LAB_004372fd
    MOV ECX,dword ptr [ESP + 0x28]      ; 00437354
        ;   Label: LAB_00437354
    TEST ECX,ECX                        ; 00437358
    JNZ 0x0043737d                      ; 0043735a
        ;   XREF to: 0043737d (CONDITIONAL_JUMP)  ; LAB_0043737d
    MOV EDI,dword ptr [EBP + 0x24]      ; 0043735c
    PUSH EDI                            ; 0043735f
        ;   Label: LAB_0043735f
    INC EBX                             ; 00437360
    PUSH EBX                            ; 00437361
    PUSH ESI                            ; 00437362
    CALL cockpit_ckptutil.c_putPixel_FUN_00437b80 ; 00437363
        ;   XREF to: 00437b80 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00437b80(int x, int y, int color)
    ADD ESP,0xc                         ; 00437368
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043736b
    DEC EAX                             ; 0043736f
    MOV dword ptr [ESP + 0x2c],EAX      ; 00437370
    JNZ 0x0043735f                      ; 00437374
        ;   XREF to: 0043735f (CONDITIONAL_JUMP)  ; LAB_0043735f
    MOV ESP,EBP                         ; 00437376
    POP EBP                             ; 00437378
    POP EDI                             ; 00437379
    POP ESI                             ; 0043737a
    POP EBX                             ; 0043737b
    RET                                 ; 0043737c
    CMP ECX,EAX                         ; 0043737d
        ;   Label: LAB_0043737d
    JNZ 0x004373a8                      ; 0043737f
        ;   XREF to: 004373a8 (CONDITIONAL_JUMP)  ; LAB_004373a8
    MOV EDI,dword ptr [ESP + 0x24]      ; 00437381
    MOV EAX,dword ptr [EBP + 0x24]      ; 00437385
        ;   Label: LAB_00437385
    PUSH EAX                            ; 00437388
    INC EBX                             ; 00437389
    PUSH EBX                            ; 0043738a
    ADD ESI,EDI                         ; 0043738b
    PUSH ESI                            ; 0043738d
    CALL cockpit_ckptutil.c_putPixel_FUN_00437b80 ; 0043738e
        ;   XREF to: 00437b80 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00437b80(int x, int y, int color)
    ADD ESP,0xc                         ; 00437393
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00437396
    DEC EDX                             ; 0043739a
    MOV dword ptr [ESP + 0x2c],EDX      ; 0043739b
    JNZ 0x00437385                      ; 0043739f
        ;   XREF to: 00437385 (CONDITIONAL_JUMP)  ; LAB_00437385
    MOV ESP,EBP                         ; 004373a1
    POP EBP                             ; 004373a3
    POP EDI                             ; 004373a4
    POP ESI                             ; 004373a5
    POP EBX                             ; 004373a6
    RET                                 ; 004373a7
    XOR EDI,EDI                         ; 004373a8
        ;   Label: LAB_004373a8
    CMP ECX,EAX                         ; 004373aa
    JLE 0x00437449                      ; 004373ac
        ;   XREF to: 00437449 (CONDITIONAL_JUMP)  ; LAB_00437449
    SHL EAX,0x10                        ; 004373b2
    XOR EDX,EDX                         ; 004373b5
    DIV ECX                             ; 004373b7
    MOV dword ptr [ESP + 0x20],EAX      ; 004373b9
    MOV ECX,dword ptr [ESP + 0x28]      ; 004373bd
        ;   Label: LAB_004373bd
    DEC ECX                             ; 004373c1
    MOV dword ptr [ESP + 0x28],ECX      ; 004373c2
    JZ 0x004374e7                       ; 004373c6
        ;   XREF to: 004374e7 (CONDITIONAL_JUMP)  ; LAB_004374e7
    MOV EDX,dword ptr [ESP + 0x20]      ; 004373cc
    MOV EAX,EDI                         ; 004373d0
    ADD EDI,EDX                         ; 004373d2
    AND EDI,0xffff                      ; 004373d4
    CMP EDI,EAX                         ; 004373da
    JBE 0x00437446                      ; 004373dc
        ;   XREF to: 00437446 (CONDITIONAL_JUMP)  ; LAB_00437446
    MOV EAX,EDI                         ; 004373de
        ;   Label: LAB_004373de
    XOR EDX,EDX                         ; 004373e0
    SHR EAX,0x8                         ; 004373e2
    MOV dword ptr [ESP + 0x8],EDX       ; 004373e5
    MOV dword ptr [ESP + 0x4],EAX       ; 004373e9
    FILD qword ptr [ESP + 0x4]          ; 004373ed
    FLD1                                ; 004373f1
    FADDP                               ; 004373f3
    FLD float ptr [ESP]                 ; 004373f5
    FMUL ST1                            ; 004373f8
    MOV ECX,dword ptr [ESP + 0x24]      ; 004373fa
    XOR AL,0xff                         ; 004373fe
    MOV dword ptr [ESP + 0x8],EDX       ; 00437400
    MOV dword ptr [ESP + 0x4],EAX       ; 00437404
    MOV EAX,dword ptr [EBP + 0x24]      ; 00437408
    ADD ESI,ECX                         ; 0043740b
    PUSH EAX                            ; 0043740d
    FXCH                                ; 0043740e
    FSTP float ptr [ESP + 0x10]         ; 00437410
    PUSH dword ptr [ESP + 0x10]         ; 00437414
    FILD qword ptr [ESP + 0xc]          ; 00437418
    PUSH EBX                            ; 0043741c
    FMULP                               ; 0043741d
    PUSH ESI                            ; 0043741f
    FSTP float ptr [ESP + 0x20]         ; 00437420
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004378b0 ; 00437424
        ;   XREF to: 004378b0 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004378b0()
    ADD ESP,0x10                        ; 00437429
    MOV EDX,dword ptr [EBP + 0x24]      ; 0043742c
    PUSH EDX                            ; 0043742f
    LEA EAX,[EBX + 0x1]                 ; 00437430
    PUSH dword ptr [ESP + 0x14]         ; 00437433
    PUSH EAX                            ; 00437437
    PUSH ESI                            ; 00437438
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004378b0 ; 00437439
        ;   XREF to: 004378b0 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004378b0()
    ADD ESP,0x10                        ; 0043743e
    JMP 0x004373bd                      ; 00437441
        ;   XREF to: 004373bd (UNCONDITIONAL_JUMP)  ; LAB_004373bd
    INC EBX                             ; 00437446
        ;   Label: LAB_00437446
    JMP 0x004373de                      ; 00437447
        ;   XREF to: 004373de (UNCONDITIONAL_JUMP)  ; LAB_004373de
    MOV EAX,ECX                         ; 00437449
        ;   Label: LAB_00437449
    XOR EDX,EDX                         ; 0043744b
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0043744d
    SHL EAX,0x10                        ; 00437451
    DIV ECX                             ; 00437454
    MOV dword ptr [ESP + 0x1c],EAX      ; 00437456
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043745a
        ;   Label: LAB_0043745a
    DEC EAX                             ; 0043745e
    MOV dword ptr [ESP + 0x2c],EAX      ; 0043745f
    JZ 0x004374e7                       ; 00437463
        ;   XREF to: 004374e7 (CONDITIONAL_JUMP)  ; LAB_004374e7
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00437469
    MOV EAX,EDI                         ; 0043746d
    ADD EDI,ECX                         ; 0043746f
    AND EDI,0xffff                      ; 00437471
    CMP EDI,EAX                         ; 00437477
    JBE 0x004374e1                      ; 00437479
        ;   XREF to: 004374e1 (CONDITIONAL_JUMP)  ; LAB_004374e1
    MOV EAX,EDI                         ; 0043747b
        ;   Label: LAB_0043747b
    XOR EDX,EDX                         ; 0043747d
    SHR EAX,0x8                         ; 0043747f
    MOV dword ptr [ESP + 0x8],EDX       ; 00437482
    MOV dword ptr [ESP + 0x4],EAX       ; 00437486
    FILD qword ptr [ESP + 0x4]          ; 0043748a
    FLD1                                ; 0043748e
    FADDP                               ; 00437490
    FLD float ptr [ESP]                 ; 00437492
    FMUL ST1                            ; 00437495
    XOR AL,0xff                         ; 00437497
    INC EBX                             ; 00437499
    MOV dword ptr [ESP + 0x4],EAX       ; 0043749a
    MOV EAX,dword ptr [EBP + 0x24]      ; 0043749e
    MOV dword ptr [ESP + 0x8],EDX       ; 004374a1
    PUSH EAX                            ; 004374a5
    FXCH                                ; 004374a6
    FSTP float ptr [ESP + 0x18]         ; 004374a8
    PUSH dword ptr [ESP + 0x18]         ; 004374ac
    FILD qword ptr [ESP + 0xc]          ; 004374b0
    PUSH EBX                            ; 004374b4
    FMULP                               ; 004374b5
    PUSH ESI                            ; 004374b7
    FSTP float ptr [ESP + 0x28]         ; 004374b8
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004378b0 ; 004374bc
        ;   XREF to: 004378b0 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004378b0()
    ADD ESP,0x10                        ; 004374c1
    MOV EDX,dword ptr [EBP + 0x24]      ; 004374c4
    PUSH EDX                            ; 004374c7
    PUSH dword ptr [ESP + 0x1c]         ; 004374c8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004374cc
    PUSH EBX                            ; 004374d0
    ADD EAX,ESI                         ; 004374d1
    PUSH EAX                            ; 004374d3
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004378b0 ; 004374d4
        ;   XREF to: 004378b0 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004378b0()
    ADD ESP,0x10                        ; 004374d9
    JMP 0x0043745a                      ; 004374dc
        ;   XREF to: 0043745a (UNCONDITIONAL_JUMP)  ; LAB_0043745a
    ADD ESI,dword ptr [ESP + 0x24]      ; 004374e1
        ;   Label: LAB_004374e1
    JMP 0x0043747b                      ; 004374e5
        ;   XREF to: 0043747b (UNCONDITIONAL_JUMP)  ; LAB_0043747b
    MOV ECX,dword ptr [EBP + 0x24]      ; 004374e7
        ;   Label: LAB_004374e7
    PUSH ECX                            ; 004374ea
    MOV EBX,dword ptr [EBP + 0x20]      ; 004374eb
    PUSH EBX                            ; 004374ee
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004374ef
    PUSH ESI                            ; 004374f2
    CALL cockpit_ckptutil.c_putPixel_FUN_00437b80 ; 004374f3
        ;   XREF to: 00437b80 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00437b80(int x, int y, int color)
    ADD ESP,0xc                         ; 004374f8
    MOV ESP,EBP                         ; 004374fb
    POP EBP                             ; 004374fd
    POP EDI                             ; 004374fe
    POP ESI                             ; 004374ff
    POP EBX                             ; 00437500
    RET                                 ; 00437501

