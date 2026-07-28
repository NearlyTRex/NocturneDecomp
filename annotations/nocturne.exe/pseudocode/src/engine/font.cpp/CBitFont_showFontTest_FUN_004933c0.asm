; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_CBitFont_showFontTest_FUN_004933c0(CBitFont *param_1,uint param_2)
;
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_one_00581995
;   undefined4 DAT_00581999
;   TerminatedCString s_two_0058199b
;   undefined4 DAT_0058199f
;   TerminatedCString s_three_005819a1
;   undefined4 DAT_005819a7
;   TerminatedCString s_four_005819a9
;   undefined4 DAT_005819ae
;   TerminatedCString s_s_01234_5_6_7_8_9_0_8_8_005819b1
;   TerminatedCString s_s_023_0_23_a_t_5_0_2_1_005819cf
;   TerminatedCString s_s_0A_1B_1_O_I_I_O_x_005819ed
;   TerminatedCString s_No_Hi_A_0A_G_V_00581a05
;   TerminatedCString s_s_2_00pm_21_000_isn_t_Uh_00581a26
;   TerminatedCString s_One_newline_Two_newlines_00581a43
;   TerminatedCString s_Here_is_a_newline_Next_l_00581a77
;   ... and 6 more
;
; Called Functions:
;   engine_2d.c_fillRectColor_FUN_00403e60
;   engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004933c0
        ;   Label: engine_font.cpp_CBitFont_showFontTest_FUN_004933c0
    PUSH ESI                            ; 004933c1
    PUSH EDI                            ; 004933c2
    PUSH EBP                            ; 004933c3
    MOV EBP,ESP                         ; 004933c4
    SUB ESP,0x20                        ; 004933c6
    PUSH 0x0                            ; 004933c9
    MOV EDX,dword ptr [0x01c00c64]      ; 004933cb | DAT_01c00c64
    PUSH EDX                            ; 004933d1
    MOV ECX,dword ptr [0x01c00c60]      ; 004933d2 | DAT_01c00c60
    PUSH ECX                            ; 004933d8
    MOV EBX,dword ptr [0x01c00c5c]      ; 004933d9 | DAT_01c00c5c
    PUSH EBX                            ; 004933df
    MOV ESI,dword ptr [0x01c00c58]      ; 004933e0 | DAT_01c00c58
    PUSH ESI                            ; 004933e6
    MOV EDI,0x20                        ; 004933e7
    CALL engine_2d.c_fillRectColor_FUN_00403e60 ; 004933ec
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403e60(int x1, int y1, int x2, int y2, ...)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004933f1
    MOV EDX,dword ptr [EBP + 0x14]      ; 004933f4
    MOV ESI,0xa                         ; 004933f7
    MOV EAX,dword ptr [EAX + 0x316c]    ; 004933fc
    MOV EDX,dword ptr [EDX + 0x3178]    ; 00493402
    ADD ESP,0x14                        ; 00493408
    ADD EAX,EDX                         ; 0049340b
    MOV EBX,ESI                         ; 0049340d
    MOV dword ptr [EBP + -0x4],EAX      ; 0049340f
    PUSH -0x1                           ; 00493412
        ;   Label: LAB_00493412
    PUSH 0x1                            ; 00493414
    PUSH EBX                            ; 00493416
    PUSH ESI                            ; 00493417
    PUSH EDI                            ; 00493418
    MOV EAX,dword ptr [EBP + 0x14]      ; 00493419
    PUSH EAX                            ; 0049341c
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0 ; 0049341d
        ;   XREF to: 004916c0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0()
    MOV EAX,dword ptr [EBP + 0x14]      ; 00493422
    MOV EAX,dword ptr [EAX + 0x3168]    ; 00493425
    ADD ESI,EAX                         ; 0049342b
    LEA EDX,[ESI + EAX*0x1]             ; 0049342d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00493430
    MOV EAX,dword ptr [EAX + 0x3174]    ; 00493433
    ADD EAX,EDX                         ; 00493439
    MOV EDX,dword ptr [EBP + 0x18]      ; 0049343b
    ADD ESP,0x18                        ; 0049343e
    CMP EAX,EDX                         ; 00493441
    JBE 0x0049344f                      ; 00493443
        ;   XREF to: 0049344f (CONDITIONAL_JUMP)  ; LAB_0049344f
    MOV ECX,dword ptr [EBP + -0x4]      ; 00493445
    MOV ESI,0xa                         ; 00493448
    ADD EBX,ECX                         ; 0049344d
    INC EDI                             ; 0049344f
        ;   Label: LAB_0049344f
    CMP EDI,0x7e                        ; 00493450
    JLE 0x00493412                      ; 00493453
        ;   XREF to: 00493412 (CONDITIONAL_JUMP)  ; LAB_00493412
    MOV EDI,dword ptr [EBP + -0x4]      ; 00493455
    MOV ESI,0xa                         ; 00493458
    ADD EBX,EDI                         ; 0049345d
    XOR EDI,EDI                         ; 0049345f
    PUSH -0x1                           ; 00493461
        ;   Label: LAB_00493461
    PUSH 0x1                            ; 00493463
    PUSH EBX                            ; 00493465
    PUSH ESI                            ; 00493466
    PUSH EDI                            ; 00493467
    MOV EAX,dword ptr [EBP + 0x14]      ; 00493468
    PUSH EAX                            ; 0049346b
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0 ; 0049346c
        ;   XREF to: 004916c0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0()
    MOV EDX,dword ptr [EBP + 0x14]      ; 00493471
    ADD ESI,EAX                         ; 00493474
    MOV EAX,dword ptr [EBP + 0x14]      ; 00493476
    MOV EDX,dword ptr [EDX + 0x3168]    ; 00493479
    MOV EAX,dword ptr [EAX + 0x3174]    ; 0049347f
    ADD EDX,ESI                         ; 00493485
    ADD EAX,EDX                         ; 00493487
    MOV EDX,dword ptr [EBP + 0x18]      ; 00493489
    ADD ESP,0x18                        ; 0049348c
    CMP EAX,EDX                         ; 0049348f
    JBE 0x0049349d                      ; 00493491
        ;   XREF to: 0049349d (CONDITIONAL_JUMP)  ; LAB_0049349d
    MOV ECX,dword ptr [EBP + -0x4]      ; 00493493
    MOV ESI,0xa                         ; 00493496
    ADD EBX,ECX                         ; 0049349b
    INC EDI                             ; 0049349d
        ;   Label: LAB_0049349d
    CMP EDI,0x7e                        ; 0049349e
    JLE 0x00493461                      ; 004934a1
        ;   XREF to: 00493461 (CONDITIONAL_JUMP)  ; LAB_00493461
    MOV EAX,dword ptr [EBP + -0x4]      ; 004934a3
    MOV EDX,dword ptr [EBP + 0x14]      ; 004934a6
    ADD EAX,0xa                         ; 004934a9
    MOV EDX,dword ptr [EDX + 0x316c]    ; 004934ac
    ADD EBX,EAX                         ; 004934b2
    LEA EAX,[EDX*0x4 + 0x0]             ; 004934b4
    SUB EAX,EDX                         ; 004934bb
    ADD EAX,EBX                         ; 004934bd
    PUSH 0x1                            ; 004934bf
    ADD EAX,0x8                         ; 004934c1
    PUSH EAX                            ; 004934c4
    MOV EAX,dword ptr [EBP + 0x18]      ; 004934c5
    DEC EAX                             ; 004934c8
    PUSH EAX                            ; 004934c9
    PUSH EBX                            ; 004934ca
    PUSH 0x0                            ; 004934cb
    CALL engine_2d.c_fillRectColor_FUN_00403e60 ; 004934cd
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403e60(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004934d2
    PUSH -0x1                           ; 004934d5
    PUSH 0x6                            ; 004934d7
    PUSH EBX                            ; 004934d9
    PUSH 0xa                            ; 004934da
    PUSH 0x581995                       ; 004934dc | = "one"
    MOV ESI,dword ptr [EBP + 0x14]      ; 004934e1
    PUSH ESI                            ; 004934e4
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004934e5
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004934ea
    PUSH -0x1                           ; 004934ed
    PUSH 0x6                            ; 004934ef
    PUSH EBX                            ; 004934f1
    LEA ESI,[EAX + 0xa]                 ; 004934f2
    PUSH ESI                            ; 004934f5
    PUSH 0x581999                       ; 004934f6 | DAT_00581999
    MOV EDI,dword ptr [EBP + 0x14]      ; 004934fb
    PUSH EDI                            ; 004934fe
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004934ff
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00493504
    PUSH -0x1                           ; 00493507
    PUSH 0x6                            ; 00493509
    PUSH EBX                            ; 0049350b
    ADD ESI,EAX                         ; 0049350c
    PUSH ESI                            ; 0049350e
    PUSH 0x58199b                       ; 0049350f | = "two"
    PUSH EDI                            ; 00493514
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00493515
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 0049351a
    PUSH -0x1                           ; 0049351d
    PUSH 0x6                            ; 0049351f
    PUSH EBX                            ; 00493521
    ADD ESI,EAX                         ; 00493522
    PUSH ESI                            ; 00493524
    PUSH 0x58199f                       ; 00493525 | DAT_0058199f
    PUSH EDI                            ; 0049352a
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049352b
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00493530
    PUSH -0x1                           ; 00493533
    PUSH 0x6                            ; 00493535
    PUSH EBX                            ; 00493537
    ADD ESI,EAX                         ; 00493538
    PUSH ESI                            ; 0049353a
    PUSH 0x5819a1                       ; 0049353b | = "three"
    PUSH EDI                            ; 00493540
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00493541
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00493546
    PUSH -0x1                           ; 00493549
    PUSH 0x6                            ; 0049354b
    PUSH EBX                            ; 0049354d
    ADD ESI,EAX                         ; 0049354e
    PUSH ESI                            ; 00493550
    PUSH 0x5819a7                       ; 00493551 | DAT_005819a7
    PUSH EDI                            ; 00493556
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00493557
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 0049355c
    ADD ESI,EAX                         ; 0049355f
    PUSH -0x1                           ; 00493561
    PUSH 0x6                            ; 00493563
    PUSH EBX                            ; 00493565
    PUSH ESI                            ; 00493566
    PUSH 0x5819a9                       ; 00493567 | = "four"
    PUSH EDI                            ; 0049356c
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049356d
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00493572
    PUSH -0x1                           ; 00493575
    PUSH 0x6                            ; 00493577
    PUSH EBX                            ; 00493579
    ADD ESI,EAX                         ; 0049357a
    PUSH ESI                            ; 0049357c
    PUSH 0x5819ae                       ; 0049357d | DAT_005819ae
    PUSH EDI                            ; 00493582
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00493583
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00493588
    PUSH -0x1                           ; 0049358b
    PUSH 0x6                            ; 0049358d
    PUSH EBX                            ; 0049358f
    ADD ESI,EAX                         ; 00493590
    PUSH ESI                            ; 00493592
    PUSH 0x5819b1                       ; 00493593 | = "(01234)+5-6/7*8=9.0  8<>+-=*8"
    PUSH EDI                            ; 00493598
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00493599
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 0049359e
    PUSH -0x1                           ; 004935a1
    MOV ESI,dword ptr [EBP + -0x4]      ; 004935a3
    PUSH 0x6                            ; 004935a6
    ADD EBX,ESI                         ; 004935a8
    PUSH EBX                            ; 004935aa
    PUSH 0xa                            ; 004935ab
    PUSH 0x5819cf                       ; 004935ad | = "#023  $0.23  a@t  5.0%  2^1  "
    PUSH EDI                            ; 004935b2
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004935b3
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004935b8
    PUSH -0x1                           ; 004935bb
    PUSH 0x6                            ; 004935bd
    PUSH EBX                            ; 004935bf
    LEA ESI,[EAX + 0xa]                 ; 004935c0
    PUSH ESI                            ; 004935c3
    PUSH 0x5819ed                       ; 004935c4 | = "{0A,1B} ~1 O<<I I|O &x;"
    PUSH EDI                            ; 004935c9
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004935ca
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004935cf
    PUSH -0x1                           ; 004935d2
    MOV EDX,dword ptr [EBP + -0x4]      ; 004935d4
    PUSH 0x6                            ; 004935d7
    ADD EBX,EDX                         ; 004935d9
    PUSH EBX                            ; 004935db
    PUSH 0xa                            ; 004935dc
    PUSH 0x581a05                       ; 004935de | = "No?!  \"Hi\"  'A'  ({[0A]})  G_V  "
    PUSH EDI                            ; 004935e3
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004935e4
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004935e9
    PUSH -0x1                           ; 004935ec
    PUSH 0x6                            ; 004935ee
    PUSH EBX                            ; 004935f0
    LEA ESI,[EAX + 0xa]                 ; 004935f1
    PUSH ESI                            ; 004935f4
    PUSH 0x581a26                       ; 004935f5 | = "2:00pm  21,000  isn't  Uh,.."
    PUSH EDI                            ; 004935fa
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004935fb
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00493600
    MOV EAX,dword ptr [EBP + -0x4]      ; 00493603
    PUSH -0x1                           ; 00493606
    ADD EAX,EAX                         ; 00493608
    PUSH 0x6                            ; 0049360a
    ADD EBX,EAX                         ; 0049360c
    PUSH EBX                            ; 0049360e
    PUSH 0x1c2                          ; 0049360f
    PUSH 0x581a43                       ; 00493614 | = "One newline:\nTwo newlines:\n\nThree ..."
    PUSH EDI                            ; 00493619
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049361a
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 0049361f
    PUSH 0x0                            ; 00493622
    PUSH 0xf8                           ; 00493624
    PUSH EBX                            ; 00493629
    MOV ESI,0x5b9268                    ; 0049362a | = "CART Precision Racing v1.00"
    PUSH 0x82                           ; 0049362f
    LEA EAX,[EBP + -0x20]               ; 00493634
    MOV ECX,0x7                         ; 00493637
    PUSH EAX                            ; 0049363c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049363d
    LEA EDI,[EBP + -0x20]               ; 00493640
    PUSH EAX                            ; 00493643
    MOVSD.REP ES:EDI,ESI                ; 00493644 | = "CART Precision Racing v1.00" | s_CART_Precision_Racing_v1_005b9268+4
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00493646
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 0049364b
    PUSH 0x0                            ; 0049364e
    MOV EDX,dword ptr [EBP + -0x4]      ; 00493650
    PUSH 0xf9                           ; 00493653
    ADD EBX,EDX                         ; 00493658
    PUSH EBX                            ; 0049365a
    PUSH 0x82                           ; 0049365b
    LEA EAX,[EBP + -0x20]               ; 00493660
    PUSH EAX                            ; 00493663
    MOV ECX,dword ptr [EBP + 0x14]      ; 00493664
    PUSH ECX                            ; 00493667
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00493668
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 0049366d
    PUSH 0x0                            ; 00493670
    MOV ESI,dword ptr [EBP + -0x4]      ; 00493672
    PUSH 0xfa                           ; 00493675
    ADD EBX,ESI                         ; 0049367a
    PUSH EBX                            ; 0049367c
    PUSH 0x82                           ; 0049367d
    LEA EAX,[EBP + -0x20]               ; 00493682
    PUSH EAX                            ; 00493685
    MOV EDI,dword ptr [EBP + 0x14]      ; 00493686
    PUSH EDI                            ; 00493689
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049368a
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 0049368f
    PUSH 0x0                            ; 00493692
    PUSH 0xfb                           ; 00493694
    ADD EBX,ESI                         ; 00493699
    PUSH EBX                            ; 0049369b
    PUSH 0x82                           ; 0049369c
    LEA EAX,[EBP + -0x20]               ; 004936a1
    PUSH EAX                            ; 004936a4
    PUSH EDI                            ; 004936a5
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004936a6
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004936ab
    PUSH 0x0                            ; 004936ae
    PUSH 0xfc                           ; 004936b0
    ADD EBX,ESI                         ; 004936b5
    PUSH EBX                            ; 004936b7
    PUSH 0x82                           ; 004936b8
    LEA EAX,[EBP + -0x20]               ; 004936bd
    PUSH EAX                            ; 004936c0
    PUSH EDI                            ; 004936c1
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004936c2
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004936c7
    PUSH 0x0                            ; 004936ca
    MOV ESI,EDI                         ; 004936cc
    MOV EDI,dword ptr [EBP + -0x4]      ; 004936ce
    PUSH 0xfd                           ; 004936d1
    ADD EBX,EDI                         ; 004936d6
    PUSH EBX                            ; 004936d8
    PUSH 0x82                           ; 004936d9
    LEA EAX,[EBP + -0x20]               ; 004936de
    PUSH EAX                            ; 004936e1
    MOV EAX,ESI                         ; 004936e2
    PUSH EAX                            ; 004936e4
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004936e5
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004936ea
    PUSH 0x0                            ; 004936ed
    PUSH 0xfe                           ; 004936ef
    ADD EBX,EDI                         ; 004936f4
    PUSH EBX                            ; 004936f6
    PUSH 0x82                           ; 004936f7
    LEA EAX,[EBP + -0x20]               ; 004936fc
    PUSH EAX                            ; 004936ff
    MOV ECX,ESI                         ; 00493700
    PUSH ECX                            ; 00493702
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00493703
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00493708
    PUSH 0x0                            ; 0049370b
    PUSH 0xff                           ; 0049370d
    ADD EBX,EDI                         ; 00493712
    PUSH EBX                            ; 00493714
    PUSH 0x82                           ; 00493715
    LEA EAX,[EBP + -0x20]               ; 0049371a
    PUSH EAX                            ; 0049371d
    MOV ESI,EDI                         ; 0049371e
    MOV EDI,dword ptr [EBP + 0x14]      ; 00493720
    PUSH EDI                            ; 00493723
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00493724
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00493729
    PUSH 0x0                            ; 0049372c
    MOV EAX,ESI                         ; 0049372e
    PUSH 0xff                           ; 00493730
    ADD EBX,EAX                         ; 00493735
    PUSH EBX                            ; 00493737
    PUSH 0x82                           ; 00493738
    PUSH 0x581a77                       ; 0049373d | = "Here is a newline:\nNext line!!\nAnd ..."
    PUSH EDI                            ; 00493742
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00493743
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00493748
    MOV ESP,EBP                         ; 0049374b
    POP EBP                             ; 0049374d
    POP EDI                             ; 0049374e
    POP ESI                             ; 0049374f
    POP EBX                             ; 00493750
    RET                                 ; 00493751

