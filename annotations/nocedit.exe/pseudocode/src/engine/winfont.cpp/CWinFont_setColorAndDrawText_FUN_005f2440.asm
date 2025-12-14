; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440(CWinFont * this_ptr, HDC device_context, int x_position, int y_position, char * text_string, int foreground_color, int background_color)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
; typedef HDC HDC__ * Stack[0x8]:4   device_context
; int              Stack[0xc]:4   x_position
; int              Stack[0x10]:4   y_position
; char *           Stack[0x14]:4   text_string
; int              Stack[0x18]:4   foreground_color
; int              Stack[0x1c]:4   background_color
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x28]:4  local_28
;
; XREF[1]:
;   engine_winfont.cpp_CWinFont_drawText_FUN_005f23f0 at 005f242a
;
; Referenced Globals:
;   SetTextColor* SetTextColor = 00211800
;   TextOutA* TextOutA = 00211810
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   void*[1024] g_ScreenBufferArray
;   int g_RedBitPosition
;   int g_RedBitCount
;   int g_GreenBitPosition
;   int g_GreenBitCount
;   int g_BlueBitPosition
;   int g_BlueBitCount
;   char[768] g_SourcePaletteData
;   undefined4 CHAR_ARRAY_02d01f49
;   undefined4 CHAR_ARRAY_02d01f4a
;
; Called Functions:
;   crt_string.c_strcmp_FUN_005fef20
;   engine_font.cpp_getDefaultTextColor_FUN_004ce220
;   SetTextColor
;   TextOutA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f2440
        ;   Label: engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440
    PUSH ESI                            ; 005f2441
    PUSH EDI                            ; 005f2442
    PUSH EBP                            ; 005f2443
    SUB ESP,0x24                        ; 005f2444
    MOV EBX,dword ptr [ESP + 0x38]      ; 005f2447
    MOV EBP,dword ptr [ESP + 0x40]      ; 005f244b
    MOV ESI,dword ptr [ESP + 0x4c]      ; 005f244f
    CMP ESI,dword ptr [EBX + 0x12c]     ; 005f2453
    JNZ 0x005f246b                      ; 005f2459
        ;   XREF to: 005f246b (CONDITIONAL_JUMP)  ; LAB_005f246b
    MOV ECX,dword ptr [ESP + 0x50]      ; 005f245b
    CMP ECX,dword ptr [EBX + 0x130]     ; 005f245f
    JZ 0x005f264f                       ; 005f2465
        ;   XREF to: 005f264f (CONDITIONAL_JUMP)  ; LAB_005f264f
    MOV EAX,dword ptr [ESP + 0x50]      ; 005f246b
        ;   Label: LAB_005f246b
    XOR EDI,EDI                         ; 005f246f
    MOV dword ptr [EBX + 0x12c],ESI     ; 005f2471
    MOV dword ptr [ESP + 0xc],EDI       ; 005f2477
    MOV dword ptr [EBX + 0x130],EAX     ; 005f247b
    TEST ESI,ESI                        ; 005f2481
    JL 0x005f2669                       ; 005f2483
        ;   XREF to: 005f2669 (CONDITIONAL_JUMP)  ; LAB_005f2669
    MOV EDX,ESI                         ; 005f2489
    LEA EAX,[ESI*0x4 + 0x0]             ; 005f248b
    SUB EAX,ESI                         ; 005f2492
    XOR EDX,ESI                         ; 005f2494
    XOR ECX,ECX                         ; 005f2496
    MOV DL,byte ptr [EAX + 0x2d01f49]   ; 005f2498 | CHAR_ARRAY_02d01f49
    MOV CL,byte ptr [EAX + 0x2d01f48]   ; 005f249e | g_SourcePaletteData
    SHL EDX,0x8                         ; 005f24a4
    MOV AL,byte ptr [EAX + 0x2d01f4a]   ; 005f24a7 | CHAR_ARRAY_02d01f4a
    OR EDX,ECX                          ; 005f24ad
    AND EAX,0xff                        ; 005f24af
    SHL EAX,0x10                        ; 005f24b4
    OR EDX,EAX                          ; 005f24b7
        ;   Label: LAB_005f24b7
    MOV dword ptr [ESP],EDX             ; 005f24b9
    MOV ECX,dword ptr [ESP + 0x50]      ; 005f24bc
        ;   Label: LAB_005f24bc
    CMP ECX,-0x1                        ; 005f24c0
    JZ 0x005f24f9                       ; 005f24c3
        ;   XREF to: 005f24f9 (CONDITIONAL_JUMP)  ; LAB_005f24f9
    MOV EDX,ECX                         ; 005f24c5
    LEA EAX,[ECX*0x4 + 0x0]             ; 005f24c7
    SUB EAX,ECX                         ; 005f24ce
    XOR EDX,ECX                         ; 005f24d0
    MOV DL,byte ptr [EAX + 0x2d01f49]   ; 005f24d2 | CHAR_ARRAY_02d01f49
    XOR ECX,ECX                         ; 005f24d8
    SHL EDX,0x8                         ; 005f24da
    MOV CL,byte ptr [EAX + 0x2d01f48]   ; 005f24dd | g_SourcePaletteData
    MOV AL,byte ptr [EAX + 0x2d01f4a]   ; 005f24e3 | CHAR_ARRAY_02d01f4a
    OR EDX,ECX                          ; 005f24e9
    AND EAX,0xff                        ; 005f24eb
    SHL EAX,0x10                        ; 005f24f0
    OR EDX,EAX                          ; 005f24f3
    MOV dword ptr [ESP + 0xc],EDX       ; 005f24f5
    LEA EAX,[EBX + 0x18]                ; 005f24f9
        ;   Label: LAB_005f24f9
    MOV ESI,EBP                         ; 005f24fc
    MOV EDI,EAX                         ; 005f24fe
    PUSH EDI                            ; 005f2500
    MOV AL,byte ptr [ESI]               ; 005f2501
        ;   Label: LAB_005f2501
    MOV byte ptr [EDI],AL               ; 005f2503
    CMP AL,0x0                          ; 005f2505
    JZ 0x005f2519                       ; 005f2507
        ;   XREF to: 005f2519 (CONDITIONAL_JUMP)  ; LAB_005f2519
    MOV AL,byte ptr [ESI + 0x1]         ; 005f2509
    ADD ESI,0x2                         ; 005f250c
    MOV byte ptr [EDI + 0x1],AL         ; 005f250f
    ADD EDI,0x2                         ; 005f2512
    CMP AL,0x0                          ; 005f2515
    JNZ 0x005f2501                      ; 005f2517
        ;   XREF to: 005f2501 (CONDITIONAL_JUMP)  ; LAB_005f2501
    POP EDI                             ; 005f2519
        ;   Label: LAB_005f2519
    PUSH EBP                            ; 005f251a
    MOV EAX,dword ptr [EBX]             ; 005f251b
    PUSH EBX                            ; 005f251d
    CALL dword ptr [EAX + 0x8]          ; 005f251e
    ADD ESP,0x8                         ; 005f2521
    MOV dword ptr [EBX + 0x118],EAX     ; 005f2524
    PUSH EBP                            ; 005f252a
    MOV EAX,dword ptr [EBX]             ; 005f252b
    PUSH EBX                            ; 005f252d
    CALL dword ptr [EAX + 0xc]          ; 005f252e
    ADD ESP,0x8                         ; 005f2531
    MOV dword ptr [EBX + 0x11c],EAX     ; 005f2534
    SUB ECX,ECX                         ; 005f253a
    DEC ECX                             ; 005f253c
    XOR EAX,EAX                         ; 005f253d
    SCASB.REPNE ES:EDI                  ; 005f253f
    NOT ECX                             ; 005f2541
    DEC ECX                             ; 005f2543
    MOV EAX,dword ptr [ESP + 0x50]      ; 005f2544
    MOV ESI,ECX                         ; 005f2548
    MOV EDI,ECX                         ; 005f254a
    CMP EAX,-0x1                        ; 005f254c
    JZ 0x005f2572                       ; 005f254f
        ;   XREF to: 005f2572 (CONDITIONAL_JUMP)  ; LAB_005f2572
    MOV EDX,dword ptr [ESP + 0xc]       ; 005f2551
    PUSH EDX                            ; 005f2555
    MOV ECX,dword ptr [EBX + 0x4]       ; 005f2556
    PUSH ECX                            ; 005f2559
    CALL dword ptr CS:[0x6113f8]        ; 005f255a | SetTextColor
    PUSH ESI                            ; 005f2561
    PUSH EBP                            ; 005f2562
    PUSH 0x1                            ; 005f2563
    PUSH 0x1                            ; 005f2565
    MOV ESI,dword ptr [EBX + 0x4]       ; 005f2567
    PUSH ESI                            ; 005f256a
    CALL dword ptr CS:[0x6113fc]        ; 005f256b | TextOutA
    MOV EAX,dword ptr [ESP]             ; 005f2572
        ;   Label: LAB_005f2572
    PUSH EAX                            ; 005f2575
    MOV EDX,dword ptr [EBX + 0x4]       ; 005f2576
    PUSH EDX                            ; 005f2579
    CALL dword ptr CS:[0x6113f8]        ; 005f257a | SetTextColor
    PUSH EDI                            ; 005f2581
    PUSH EBP                            ; 005f2582
    PUSH 0x0                            ; 005f2583
    PUSH 0x0                            ; 005f2585
    MOV ECX,dword ptr [EBX + 0x4]       ; 005f2587
    PUSH ECX                            ; 005f258a
    CALL dword ptr CS:[0x6113fc]        ; 005f258b | TextOutA
    MOV ESI,dword ptr [ESP + 0x44]      ; 005f2592
        ;   Label: LAB_005f2592
    MOV EAX,dword ptr [EBX + 0x120]     ; 005f2596
    MOV EDI,dword ptr [0x00679394]      ; 005f259c | g_WindowWidth
    ADD EAX,ESI                         ; 005f25a2
    CMP EAX,EDI                         ; 005f25a4
    JL 0x005f26e5                       ; 005f25a6
        ;   XREF to: 005f26e5 (CONDITIONAL_JUMP)  ; LAB_005f26e5
    MOV EBP,EDI                         ; 005f25ac
    SUB EBP,ESI                         ; 005f25ae
    MOV EDX,dword ptr [ESP + 0x48]      ; 005f25b0
        ;   Label: LAB_005f25b0
    MOV EAX,dword ptr [EBX + 0x124]     ; 005f25b4
    MOV ECX,dword ptr [0x00679398]      ; 005f25ba | g_WindowHeight
    ADD EAX,EDX                         ; 005f25c0
    CMP EAX,ECX                         ; 005f25c2
    JL 0x005f26f0                       ; 005f25c4
        ;   XREF to: 005f26f0 (CONDITIONAL_JUMP)  ; LAB_005f26f0
    MOV EAX,ECX                         ; 005f25ca
    SUB EAX,EDX                         ; 005f25cc
    MOV EDI,dword ptr [EBX + 0x118]     ; 005f25ce
        ;   Label: LAB_005f25ce
    MOV dword ptr [ESP + 0x10],EAX      ; 005f25d4
    CMP EBP,EDI                         ; 005f25d8
    JLE 0x005f25de                      ; 005f25da
        ;   XREF to: 005f25de (CONDITIONAL_JUMP)  ; LAB_005f25de
    MOV EBP,EDI                         ; 005f25dc
    MOV EAX,dword ptr [ESP + 0x10]      ; 005f25de
        ;   Label: LAB_005f25de
    MOV EDX,dword ptr [EBX + 0x11c]     ; 005f25e2
    CMP EAX,EDX                         ; 005f25e8
    JLE 0x005f25f0                      ; 005f25ea
        ;   XREF to: 005f25f0 (CONDITIONAL_JUMP)  ; LAB_005f25f0
    MOV dword ptr [ESP + 0x10],EDX      ; 005f25ec
    CMP dword ptr [0x0067939c],0x10     ; 005f25f0 | g_BitsPerPixel
        ;   Label: LAB_005f25f0
    JNZ 0x005f27d7                      ; 005f25f7
        ;   XREF to: 005f27d7 (CONDITIONAL_JUMP)  ; LAB_005f27d7
    XOR EDI,EDI                         ; 005f25fd
    MOV EAX,dword ptr [ESP + 0x10]      ; 005f25ff
    MOV dword ptr [ESP + 0x1c],EDI      ; 005f2603
    TEST EAX,EAX                        ; 005f2607
    JLE 0x005f2647                      ; 005f2609
        ;   XREF to: 005f2647 (CONDITIONAL_JUMP)  ; LAB_005f2647
    MOV EAX,dword ptr [ESP + 0x48]      ; 005f260b
    MOV dword ptr [ESP + 0x18],EAX      ; 005f260f
    MOV EAX,dword ptr [ESP + 0x18]      ; 005f2613
        ;   Label: LAB_005f2613
    ADD EAX,dword ptr [EBX + 0x134]     ; 005f2617
    TEST EAX,EAX                        ; 005f261d
    JL 0x005f262d                       ; 005f261f
        ;   XREF to: 005f262d (CONDITIONAL_JUMP)  ; LAB_005f262d
    CMP EAX,dword ptr [0x00679398]      ; 005f2621 | g_WindowHeight
    JL 0x005f26fb                       ; 005f2627
        ;   XREF to: 005f26fb (CONDITIONAL_JUMP)  ; LAB_005f26fb
    MOV ECX,dword ptr [ESP + 0x18]      ; 005f262d
        ;   Label: LAB_005f262d
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005f2631
    MOV EDI,dword ptr [ESP + 0x10]      ; 005f2635
    INC ECX                             ; 005f2639
    INC ESI                             ; 005f263a
    MOV dword ptr [ESP + 0x18],ECX      ; 005f263b
    MOV dword ptr [ESP + 0x1c],ESI      ; 005f263f
    CMP ESI,EDI                         ; 005f2643
    JL 0x005f2613                       ; 005f2645
        ;   XREF to: 005f2613 (CONDITIONAL_JUMP)  ; LAB_005f2613
    ADD ESP,0x24                        ; 005f2647
        ;   Label: LAB_005f2647
    POP EBP                             ; 005f264a
    POP EDI                             ; 005f264b
    POP ESI                             ; 005f264c
    POP EBX                             ; 005f264d
    RET                                 ; 005f264e
    PUSH EBP                            ; 005f264f
        ;   Label: LAB_005f264f
    LEA EAX,[EBX + 0x18]                ; 005f2650
    PUSH EAX                            ; 005f2653
    CALL crt_string.c_strcmp_FUN_005fef20 ; 005f2654
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 005f2659
    TEST EAX,EAX                        ; 005f265c
    JNZ 0x005f246b                      ; 005f265e
        ;   XREF to: 005f246b (CONDITIONAL_JUMP)  ; LAB_005f246b
    JMP 0x005f2592                      ; 005f2664
        ;   XREF to: 005f2592 (UNCONDITIONAL_JUMP)  ; LAB_005f2592
    CALL engine_font.cpp_getDefaultTextColor_FUN_004ce220 ; 005f2669
        ;   XREF to: 004ce220 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_getDefaultTextColor_FUN_004ce220()
        ;   Label: LAB_005f2669
    MOV EDX,dword ptr [0x0067939c]      ; 005f266e | g_BitsPerPixel
    MOV dword ptr [ESP],EAX             ; 005f2674
    CMP EDX,0x10                        ; 005f2677
    JNZ 0x005f24bc                      ; 005f267a
        ;   XREF to: 005f24bc (CONDITIONAL_JUMP)  ; LAB_005f24bc
    MOV CL,byte ptr [0x02d01f24]        ; 005f2680 | g_RedBitPosition
    MOV EDX,EAX                         ; 005f2686
    SHR EDX,CL                          ; 005f2688
    MOV CL,byte ptr [0x02d01f2c]        ; 005f268a | g_RedBitCount
    SHL EDX,CL                          ; 005f2690
    AND EDX,0xff                        ; 005f2692
    MOV CL,byte ptr [0x02d01f30]        ; 005f2698 | g_GreenBitPosition
    MOV ESI,EDX                         ; 005f269e
    MOV EDX,EAX                         ; 005f26a0
    SHR EDX,CL                          ; 005f26a2
    MOV CL,byte ptr [0x02d01f38]        ; 005f26a4 | g_GreenBitCount
    SHL EDX,CL                          ; 005f26aa
    AND EDX,0xff                        ; 005f26ac
    MOV CL,byte ptr [0x02d01f3c]        ; 005f26b2 | g_BlueBitPosition
    MOV EDI,EDX                         ; 005f26b8
    SHR EAX,CL                          ; 005f26ba
    MOV CL,byte ptr [0x02d01f44]        ; 005f26bc | g_BlueBitCount
    XOR EDX,EDX                         ; 005f26c2
    SHL EAX,CL                          ; 005f26c4
    XOR ECX,ECX                         ; 005f26c6
    MOV DX,SI                           ; 005f26c8
    MOV CX,DI                           ; 005f26cb
    SHL EDX,0x10                        ; 005f26ce
    SHL ECX,0x8                         ; 005f26d1
    AND EAX,0xff                        ; 005f26d4
    OR EDX,ECX                          ; 005f26d9
    AND EAX,0xffff                      ; 005f26db
    JMP 0x005f24b7                      ; 005f26e0
        ;   XREF to: 005f24b7 (UNCONDITIONAL_JUMP)  ; LAB_005f24b7
    MOV EBP,dword ptr [EBX + 0x120]     ; 005f26e5
        ;   Label: LAB_005f26e5
    JMP 0x005f25b0                      ; 005f26eb
        ;   XREF to: 005f25b0 (UNCONDITIONAL_JUMP)  ; LAB_005f25b0
    MOV EAX,dword ptr [EBX + 0x124]     ; 005f26f0
        ;   Label: LAB_005f26f0
    JMP 0x005f25ce                      ; 005f26f6
        ;   XREF to: 005f25ce (UNCONDITIONAL_JUMP)  ; LAB_005f25ce
    MOV ESI,dword ptr [EAX*0x4 + 0x2cf6a9c] ; 005f26fb | g_ScreenBufferArray
        ;   Label: LAB_005f26fb
    XOR EAX,EAX                         ; 005f2702
    TEST EBP,EBP                        ; 005f2704
    JLE 0x005f262d                      ; 005f2706
        ;   XREF to: 005f262d (CONDITIONAL_JUMP)  ; LAB_005f262d
    MOV EDX,dword ptr [ESP + 0x44]      ; 005f270c
    ADD EDX,EDX                         ; 005f2710
    ADD ESI,EDX                         ; 005f2712
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005f2714
        ;   Label: LAB_005f2714
    IMUL EDX,dword ptr [EBX + 0x120]    ; 005f2718
    MOV ECX,dword ptr [EBX + 0x14]      ; 005f271f
    ADD EDX,EAX                         ; 005f2722
    MOV DX,word ptr [ECX + EDX*0x2]     ; 005f2724
    CMP DX,0x7c1f                       ; 005f2728
    JZ 0x005f27c6                       ; 005f272d
        ;   XREF to: 005f27c6 (CONDITIONAL_JUMP)  ; LAB_005f27c6
    XOR ECX,ECX                         ; 005f2733
    MOV CX,DX                           ; 005f2735
    MOV EDI,ECX                         ; 005f2738
    SAR EDI,0xa                         ; 005f273a
    SAR ECX,0x5                         ; 005f273d
    SHL ECX,0x3                         ; 005f2740
    SHL EDI,0x3                         ; 005f2743
    AND ECX,0xff                        ; 005f2746
    AND EDI,0xff                        ; 005f274c
    MOV dword ptr [ESP + 0x20],ECX      ; 005f2752
    MOV dword ptr [ESP + 0x4],EDI       ; 005f2756
    XOR ECX,ECX                         ; 005f275a
    MOV EDI,dword ptr [ESP + 0x4]       ; 005f275c
    MOV CX,DI                           ; 005f2760
    MOV dword ptr [ESP + 0x4],ECX       ; 005f2763
    MOV EDI,dword ptr [ESP + 0x4]       ; 005f2767
    MOV CL,byte ptr [0x02d01f2c]        ; 005f276b | g_RedBitCount
    SHR EDI,CL                          ; 005f2771
    MOV CL,byte ptr [0x02d01f24]        ; 005f2773 | g_RedBitPosition
    SHL EDI,CL                          ; 005f2779
    XOR ECX,ECX                         ; 005f277b
    MOV CX,word ptr [ESP + 0x20]        ; 005f277d
    MOV dword ptr [ESP + 0x4],ECX       ; 005f2782
    MOV dword ptr [ESP + 0x8],EDI       ; 005f2786
    MOV EDI,dword ptr [ESP + 0x4]       ; 005f278a
    MOV CL,byte ptr [0x02d01f38]        ; 005f278e | g_GreenBitCount
    SHR EDI,CL                          ; 005f2794
    MOV CL,byte ptr [0x02d01f30]        ; 005f2796 | g_GreenBitPosition
    SHL EDI,CL                          ; 005f279c
    SHL EDX,0x3                         ; 005f279e
    MOV ECX,EDI                         ; 005f27a1
    MOV EDI,dword ptr [ESP + 0x8]       ; 005f27a3
    XOR DH,DH                           ; 005f27a7
    OR EDI,ECX                          ; 005f27a9
    MOV CL,byte ptr [0x02d01f44]        ; 005f27ab | g_BlueBitCount
    AND EDX,0xffff                      ; 005f27b1
    SHR EDX,CL                          ; 005f27b7
    MOV CL,byte ptr [0x02d01f3c]        ; 005f27b9 | g_BlueBitPosition
    SHL EDX,CL                          ; 005f27bf
    OR EDX,EDI                          ; 005f27c1
    MOV word ptr [ESI],DX               ; 005f27c3
    INC EAX                             ; 005f27c6
        ;   Label: LAB_005f27c6
    ADD ESI,0x2                         ; 005f27c7
    CMP EAX,EBP                         ; 005f27ca
    JGE 0x005f262d                      ; 005f27cc
        ;   XREF to: 005f262d (CONDITIONAL_JUMP)  ; LAB_005f262d
    JMP 0x005f2714                      ; 005f27d2
        ;   XREF to: 005f2714 (UNCONDITIONAL_JUMP)  ; LAB_005f2714
    MOV ESI,dword ptr [ESP + 0x10]      ; 005f27d7
        ;   Label: LAB_005f27d7
    XOR EDI,EDI                         ; 005f27db
    TEST ESI,ESI                        ; 005f27dd
    JLE 0x005f2647                      ; 005f27df
        ;   XREF to: 005f2647 (CONDITIONAL_JUMP)  ; LAB_005f2647
    MOV EAX,dword ptr [ESP + 0x48]      ; 005f27e5
    MOV dword ptr [ESP + 0x14],EAX      ; 005f27e9
    MOV EAX,dword ptr [ESP + 0x14]      ; 005f27ed
        ;   Label: LAB_005f27ed
    ADD EAX,dword ptr [EBX + 0x134]     ; 005f27f1
    TEST EAX,EAX                        ; 005f27f7
    JL 0x005f2803                       ; 005f27f9
        ;   XREF to: 005f2803 (CONDITIONAL_JUMP)  ; LAB_005f2803
    CMP EAX,dword ptr [0x00679398]      ; 005f27fb | g_WindowHeight
    JL 0x005f281b                       ; 005f2801
        ;   XREF to: 005f281b (CONDITIONAL_JUMP)  ; LAB_005f281b
    MOV EDX,dword ptr [ESP + 0x14]      ; 005f2803
        ;   Label: LAB_005f2803
    MOV ECX,dword ptr [ESP + 0x10]      ; 005f2807
    INC EDX                             ; 005f280b
    INC EDI                             ; 005f280c
    MOV dword ptr [ESP + 0x14],EDX      ; 005f280d
    CMP EDI,ECX                         ; 005f2811
    JGE 0x005f2647                      ; 005f2813
        ;   XREF to: 005f2647 (CONDITIONAL_JUMP)  ; LAB_005f2647
    JMP 0x005f27ed                      ; 005f2819
        ;   XREF to: 005f27ed (UNCONDITIONAL_JUMP)  ; LAB_005f27ed
    MOV EDX,dword ptr [EAX*0x4 + 0x2cf6a9c] ; 005f281b | g_ScreenBufferArray
        ;   Label: LAB_005f281b
    XOR EAX,EAX                         ; 005f2822
    TEST EBP,EBP                        ; 005f2824
    JLE 0x005f2803                      ; 005f2826
        ;   XREF to: 005f2803 (CONDITIONAL_JUMP)  ; LAB_005f2803
    MOV ESI,dword ptr [ESP + 0x44]      ; 005f2828
    SHL ESI,0x2                         ; 005f282c
    ADD ESI,EDX                         ; 005f282f
    MOV EDX,dword ptr [EBX + 0x120]     ; 005f2831
        ;   Label: LAB_005f2831
    IMUL EDX,EDI                        ; 005f2837
    ADD EDX,EAX                         ; 005f283a
    LEA ECX,[EDX*0x4 + 0x0]             ; 005f283c
    MOV EDX,dword ptr [EBX + 0x14]      ; 005f2843
    MOV EDX,dword ptr [ECX + EDX*0x1]   ; 005f2846
    CMP EDX,0xff00ff                    ; 005f2849
    JZ 0x005f2853                       ; 005f284f
        ;   XREF to: 005f2853 (CONDITIONAL_JUMP)  ; LAB_005f2853
    MOV dword ptr [ESI],EDX             ; 005f2851
    INC EAX                             ; 005f2853
        ;   Label: LAB_005f2853
    ADD ESI,0x4                         ; 005f2854
    CMP EAX,EBP                         ; 005f2857
    JGE 0x005f2803                      ; 005f2859
        ;   XREF to: 005f2803 (CONDITIONAL_JUMP)  ; LAB_005f2803
    JMP 0x005f2831                      ; 005f285b
        ;   XREF to: 005f2831 (UNCONDITIONAL_JUMP)  ; LAB_005f2831

