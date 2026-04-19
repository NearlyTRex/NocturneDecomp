; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_main_c_showPromoScreen_FUN_00508340(void)
;
; Local Variables:
; char[256]        Stack[-0x110]:256  local_110
;
; Referenced Globals:
;   TerminatedCString s_load_d_006355e6
;   TerminatedCString s_In_stores_10_26_99_006355ed
;   TerminatedCString s_www_nocturnegame_com_00635600
;   TerminatedCString s_Press_any_key_to_continu_00635615
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CBitFont* g_MediumFont
;   CBitFont* g_ThemeFont
;   int g_GlobalDeltaTimeInt
;   CKeys g_CKeysInstance
;   CAlphaBitmap g_LoadingScreenBitmap1
;   CAlphaBitmap g_LoadingScreenBitmap2
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdlib.c_rand_FUN_005feb5c
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508340
        ;   Label: core_main.c_showPromoScreen_FUN_00508340
    PUSH ESI                            ; 00508341
    PUSH EDI                            ; 00508342
    PUSH EBP                            ; 00508343
    SUB ESP,0x100                       ; 00508344
    PUSH 0x58                           ; 0050834a
    MOV EDX,dword ptr [0x020a5720]      ; 0050834c | g_ThemeFont
    PUSH EDX                            ; 00508352
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0 ; 00508353
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00508358
    MOV ESI,EAX                         ; 0050835b
    MOV EDI,EAX                         ; 0050835d
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0050835f
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00508364
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 00508369
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    AND EAX,0x3                         ; 0050836e
    INC EAX                             ; 00508371
    PUSH EAX                            ; 00508372
    PUSH 0x6355e6                       ; 00508373 | = "load%d"
    LEA EAX,[ESP + 0x8]                 ; 00508378
    PUSH EAX                            ; 0050837c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0050837d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00508382
    PUSH 0x1e0                          ; 00508385
    PUSH 0x280                          ; 0050838a
    LEA EAX,[ESP + 0x8]                 ; 0050838f
    PUSH EAX                            ; 00508393
    PUSH 0x2f0ca54                      ; 00508394 | g_LoadingScreenBitmap1
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 00508399
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 0050839e
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 005083a1
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0xffff                         ; 005083a6
    PUSH 0x0                            ; 005083ab
    PUSH 0x0                            ; 005083ad
    PUSH 0x2f0ca54                      ; 005083af | g_LoadingScreenBitmap1
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 005083b4
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 005083b9
    PUSH 0x6355ed                       ; 005083bc | = "In stores 10/26/99"
    MOV ECX,dword ptr [0x020a5718]      ; 005083c1 | g_MediumFont
    PUSH ECX                            ; 005083c7
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 005083c8
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 005083cd
    SAR EDX,0x1f                        ; 005083cf
    SUB EAX,EDX                         ; 005083d2
    SAR EAX,0x1                         ; 005083d4
    ADD ESP,0x8                         ; 005083d6
    PUSH 0x0                            ; 005083d9
    PUSH 0x7                            ; 005083db
    MOV EDX,0x140                       ; 005083dd
    PUSH 0xdc                           ; 005083e2
    SUB EDX,EAX                         ; 005083e7
    PUSH EDX                            ; 005083e9
    PUSH 0x6355ed                       ; 005083ea | = "In stores 10/26/99"
    MOV EBX,dword ptr [0x020a5718]      ; 005083ef | g_MediumFont
    PUSH EBX                            ; 005083f5
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 005083f6
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 005083fb
    MOV EBX,0x1e0                       ; 005083fe
    PUSH 0x635600                       ; 00508403 | = "www.nocturnegame.com"
    SUB EBX,ESI                         ; 00508408
    MOV ESI,dword ptr [0x020a5718]      ; 0050840a | g_MediumFont
    PUSH ESI                            ; 00508410
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 00508411
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 00508416
    SAR EDX,0x1f                        ; 00508418
    SUB EAX,EDX                         ; 0050841b
    SAR EAX,0x1                         ; 0050841d
    ADD ESP,0x8                         ; 0050841f
    PUSH 0x0                            ; 00508422
    PUSH 0x7                            ; 00508424
    MOV EDX,0x140                       ; 00508426
    PUSH EBX                            ; 0050842b
    SUB EDX,EAX                         ; 0050842c
    PUSH EDX                            ; 0050842e
    PUSH 0x635600                       ; 0050842f | = "www.nocturnegame.com"
    MOV EBP,dword ptr [0x020a5718]      ; 00508434 | g_MediumFont
    PUSH EBP                            ; 0050843a
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 0050843b
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00508440
    MOV EBX,0xa0000                     ; 00508443
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00508448
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0050844d
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV ESI,EAX                         ; 00508452
    XOR EBP,EBP                         ; 00508454
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00508456
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_00508456
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0050845b
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV ECX,EAX                         ; 00508460
    SUB EAX,ESI                         ; 00508462
    MOV EDX,EAX                         ; 00508464
    MOV ESI,0x12                        ; 00508466
    SAR EDX,0x1f                        ; 0050846b
    IDIV ESI                            ; 0050846e
    MOV [0x02cf6a80],EAX                ; 00508470 | g_GlobalDeltaTimeInt
    CMP EBP,EAX                         ; 00508475
    JG 0x00508543                       ; 00508477
        ;   XREF to: 00508543 (CONDITIONAL_JUMP)  ; LAB_00508543
    MOV EDX,dword ptr [0x02cf6a80]      ; 0050847d | g_GlobalDeltaTimeInt
        ;   Label: LAB_0050847d
    MOV ESI,ECX                         ; 00508483
    CMP EDX,0x4000                      ; 00508485
    JLE 0x00508497                      ; 0050848b
        ;   XREF to: 00508497 (CONDITIONAL_JUMP)  ; LAB_00508497
    MOV dword ptr [0x02cf6a80],0x4000   ; 0050848d | g_GlobalDeltaTimeInt
    MOV EAX,[0x02cf6a80]                ; 00508497 | g_GlobalDeltaTimeInt
        ;   Label: LAB_00508497
    PUSH 0x2a                           ; 0050849c
    SUB EBX,EAX                         ; 0050849e
    MOV EAX,[0x0067cf44]                ; 005084a0 | g_CKeysPtr
    PUSH EAX                            ; 005084a5 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005084a6 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005084a8
    ADD ESP,0x8                         ; 005084aa
    TEST EAX,EAX                        ; 005084ad
    JNZ 0x0050854e                      ; 005084af
        ;   XREF to: 0050854e (CONDITIONAL_JUMP)  ; LAB_0050854e
    TEST EBX,EBX                        ; 005084b5
        ;   Label: LAB_005084b5
    JG 0x00508456                       ; 005084b7
        ;   XREF to: 00508456 (CONDITIONAL_JUMP)  ; LAB_00508456
    MOV EAX,0x1e0                       ; 005084b9
        ;   Label: LAB_005084b9
    LEA ESI,[EDI + EDI*0x1]             ; 005084be
    SUB EAX,ESI                         ; 005084c1
    PUSH 0x635615                       ; 005084c3 | = "Press any key to continue..."
    MOV ESI,EAX                         ; 005084c8
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005084ca
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 005084cf
    PUSH EAX                            ; 005084d2
    MOV EDX,dword ptr [0x020a5718]      ; 005084d3 | g_MediumFont
    PUSH EDX                            ; 005084d9
    MOV EBX,EAX                         ; 005084da
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 005084dc
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 005084e1
    SAR EDX,0x1f                        ; 005084e3
    SUB EAX,EDX                         ; 005084e6
    SAR EAX,0x1                         ; 005084e8
    ADD ESP,0x8                         ; 005084ea
    PUSH 0x0                            ; 005084ed
    PUSH 0x7                            ; 005084ef
    MOV EDX,0x140                       ; 005084f1
    PUSH ESI                            ; 005084f6
    SUB EDX,EAX                         ; 005084f7
    PUSH EDX                            ; 005084f9
    PUSH EBX                            ; 005084fa
    MOV ECX,dword ptr [0x020a5718]      ; 005084fb | g_MediumFont
    PUSH ECX                            ; 00508501
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 00508502
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00508507
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0050850a
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0050850f
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00508514
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00508519
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH 0x2f0ca54                      ; 0050851e | g_LoadingScreenBitmap1
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 00508523
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00508528
    PUSH 0x2f0ca68                      ; 0050852b | g_LoadingScreenBitmap2
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 00508530
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00508535
    ADD ESP,0x100                       ; 00508538
    POP EBP                             ; 0050853e
    POP EDI                             ; 0050853f
    POP ESI                             ; 00508540
    POP EBX                             ; 00508541
    RET                                 ; 00508542
    MOV dword ptr [0x02cf6a80],EBP      ; 00508543 | g_GlobalDeltaTimeInt
        ;   Label: LAB_00508543
    JMP 0x0050847d                      ; 00508549
        ;   XREF to: 0050847d (UNCONDITIONAL_JUMP)  ; LAB_0050847d
    PUSH 0x1                            ; 0050854e
        ;   Label: LAB_0050854e
    MOV EAX,[0x0067cf44]                ; 00508550 | g_CKeysPtr
    PUSH EAX                            ; 00508555 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00508556 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00508558
    ADD ESP,0x8                         ; 0050855a
    TEST EAX,EAX                        ; 0050855d
    JNZ 0x005084b9                      ; 0050855f
        ;   XREF to: 005084b9 (CONDITIONAL_JUMP)  ; LAB_005084b9
    JMP 0x005084b5                      ; 00508565
        ;   XREF to: 005084b5 (UNCONDITIONAL_JUMP)  ; LAB_005084b5

