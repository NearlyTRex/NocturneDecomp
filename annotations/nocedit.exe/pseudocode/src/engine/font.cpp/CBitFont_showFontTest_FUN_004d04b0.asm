; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_showFontTest_FUN_004d04b0(CBitFont *this_ptr,int screen_height)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   screen_height
; Local Variables:
; char[28]         Stack[-0x30]:28  local_30
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_one_0062a762
;   char s_BackspaceChar_0062a766 = \x08
;   TerminatedCString s_two_0062a768
;   char s_FormFeedChar_0062a76c = \x0c
;   TerminatedCString s_three_0062a76e
;   TerminatedCString s_anon_0062a774
;   TerminatedCString s_four_0062a776
;   TerminatedCString s_anon_0062a77b
;   TerminatedCString s_s_01234_5_6_7_8_9_0_8_8_0062a77e
;   TerminatedCString s_s_023_0_23_a_t_5_0_2_1_0062a79c
;   TerminatedCString s_s_0A_1B_1_O_I_I_O_x_0062a7ba
;   TerminatedCString s_No_Hi_A_0A_G_V_0062a7d2
;   TerminatedCString s_s_2_00pm_21_000_isn_t_Uh_0062a7f3
;   TerminatedCString s_One_newline_Two_newlines_0062a810
;   TerminatedCString s_Here_is_a_newline_Next_l_0062a844
;   ... and 5 more
;
; Called Functions:
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d04b0
        ;   Label: engine_font.cpp_CBitFont_showFontTest_FUN_004d04b0
    PUSH ESI                            ; 004d04b1
    PUSH EDI                            ; 004d04b2
    PUSH EBP                            ; 004d04b3
    MOV EBP,ESP                         ; 004d04b4
    SUB ESP,0x20                        ; 004d04b6
    PUSH 0x0                            ; 004d04b9
    MOV EDX,dword ptr [0x02d02564]      ; 004d04bb | g_ClipBottom
    PUSH EDX                            ; 004d04c1
    MOV ECX,dword ptr [0x02d02560]      ; 004d04c2 | g_ClipRight
    PUSH ECX                            ; 004d04c8
    MOV EBX,dword ptr [0x02d0255c]      ; 004d04c9 | g_ClipTop
    PUSH EBX                            ; 004d04cf
    MOV ESI,dword ptr [0x02d02558]      ; 004d04d0 | g_ClipLeft
    PUSH ESI                            ; 004d04d6
    MOV EDI,0x20                        ; 004d04d7
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 004d04dc
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d04e1
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d04e4
    MOV ESI,0xa                         ; 004d04e7
    MOV EAX,dword ptr [EAX + 0x316c]    ; 004d04ec
    MOV EDX,dword ptr [EDX + 0x3178]    ; 004d04f2
    ADD ESP,0x14                        ; 004d04f8
    ADD EAX,EDX                         ; 004d04fb
    MOV EBX,ESI                         ; 004d04fd
    MOV dword ptr [EBP + -0x4],EAX      ; 004d04ff
    PUSH -0x1                           ; 004d0502
        ;   Label: LAB_004d0502
    PUSH 0x1                            ; 004d0504
    PUSH EBX                            ; 004d0506
    PUSH ESI                            ; 004d0507
    PUSH EDI                            ; 004d0508
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d0509
    PUSH EAX                            ; 004d050c
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 ; 004d050d
        ;   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont * this_ptr, int character_code, int x, int y, ...)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d0512
    MOV EAX,dword ptr [EAX + 0x3168]    ; 004d0515
    ADD ESI,EAX                         ; 004d051b
    LEA EDX,[ESI + EAX*0x1]             ; 004d051d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d0520
    MOV EAX,dword ptr [EAX + 0x3174]    ; 004d0523
    ADD EAX,EDX                         ; 004d0529
    MOV EDX,dword ptr [EBP + 0x18]      ; 004d052b
    ADD ESP,0x18                        ; 004d052e
    CMP EAX,EDX                         ; 004d0531
    JBE 0x004d053f                      ; 004d0533
        ;   XREF to: 004d053f (CONDITIONAL_JUMP)  ; LAB_004d053f
    MOV ECX,dword ptr [EBP + -0x4]      ; 004d0535
    MOV ESI,0xa                         ; 004d0538
    ADD EBX,ECX                         ; 004d053d
    INC EDI                             ; 004d053f
        ;   Label: LAB_004d053f
    CMP EDI,0x7e                        ; 004d0540
    JLE 0x004d0502                      ; 004d0543
        ;   XREF to: 004d0502 (CONDITIONAL_JUMP)  ; LAB_004d0502
    MOV EDI,dword ptr [EBP + -0x4]      ; 004d0545
    MOV ESI,0xa                         ; 004d0548
    ADD EBX,EDI                         ; 004d054d
    XOR EDI,EDI                         ; 004d054f
    PUSH -0x1                           ; 004d0551
        ;   Label: LAB_004d0551
    PUSH 0x1                            ; 004d0553
    PUSH EBX                            ; 004d0555
    PUSH ESI                            ; 004d0556
    PUSH EDI                            ; 004d0557
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d0558
    PUSH EAX                            ; 004d055b
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 ; 004d055c
        ;   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont * this_ptr, int character_code, int x, int y, ...)
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d0561
    ADD ESI,EAX                         ; 004d0564
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d0566
    MOV EDX,dword ptr [EDX + 0x3168]    ; 004d0569
    MOV EAX,dword ptr [EAX + 0x3174]    ; 004d056f
    ADD EDX,ESI                         ; 004d0575
    ADD EAX,EDX                         ; 004d0577
    MOV EDX,dword ptr [EBP + 0x18]      ; 004d0579
    ADD ESP,0x18                        ; 004d057c
    CMP EAX,EDX                         ; 004d057f
    JBE 0x004d058d                      ; 004d0581
        ;   XREF to: 004d058d (CONDITIONAL_JUMP)  ; LAB_004d058d
    MOV ECX,dword ptr [EBP + -0x4]      ; 004d0583
    MOV ESI,0xa                         ; 004d0586
    ADD EBX,ECX                         ; 004d058b
    INC EDI                             ; 004d058d
        ;   Label: LAB_004d058d
    CMP EDI,0x7e                        ; 004d058e
    JLE 0x004d0551                      ; 004d0591
        ;   XREF to: 004d0551 (CONDITIONAL_JUMP)  ; LAB_004d0551
    MOV EAX,dword ptr [EBP + -0x4]      ; 004d0593
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d0596
    ADD EAX,0xa                         ; 004d0599
    MOV EDX,dword ptr [EDX + 0x316c]    ; 004d059c
    ADD EBX,EAX                         ; 004d05a2
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d05a4
    SUB EAX,EDX                         ; 004d05ab
    ADD EAX,EBX                         ; 004d05ad
    PUSH 0x1                            ; 004d05af
    ADD EAX,0x8                         ; 004d05b1
    PUSH EAX                            ; 004d05b4
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d05b5
    DEC EAX                             ; 004d05b8
    PUSH EAX                            ; 004d05b9
    PUSH EBX                            ; 004d05ba
    PUSH 0x0                            ; 004d05bb
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 004d05bd
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004d05c2
    PUSH -0x1                           ; 004d05c5
    PUSH 0x6                            ; 004d05c7
    PUSH EBX                            ; 004d05c9
    PUSH 0xa                            ; 004d05ca
    PUSH 0x62a762                       ; 004d05cc | = "one"
    MOV ESI,dword ptr [EBP + 0x14]      ; 004d05d1
    PUSH ESI                            ; 004d05d4
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d05d5
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d05da
    PUSH -0x1                           ; 004d05dd
    PUSH 0x6                            ; 004d05df
    PUSH EBX                            ; 004d05e1
    LEA ESI,[EAX + 0xa]                 ; 004d05e2
    PUSH ESI                            ; 004d05e5
    PUSH 0x62a766                       ; 004d05e6 | s_BackspaceChar_0062a766
    MOV EDI,dword ptr [EBP + 0x14]      ; 004d05eb
    PUSH EDI                            ; 004d05ee
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d05ef
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d05f4
    PUSH -0x1                           ; 004d05f7
    PUSH 0x6                            ; 004d05f9
    PUSH EBX                            ; 004d05fb
    ADD ESI,EAX                         ; 004d05fc
    PUSH ESI                            ; 004d05fe
    PUSH 0x62a768                       ; 004d05ff | = "two"
    PUSH EDI                            ; 004d0604
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d0605
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d060a
    PUSH -0x1                           ; 004d060d
    PUSH 0x6                            ; 004d060f
    PUSH EBX                            ; 004d0611
    ADD ESI,EAX                         ; 004d0612
    PUSH ESI                            ; 004d0614
    PUSH 0x62a76c                       ; 004d0615 | s_FormFeedChar_0062a76c
    PUSH EDI                            ; 004d061a
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d061b
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d0620
    PUSH -0x1                           ; 004d0623
    PUSH 0x6                            ; 004d0625
    PUSH EBX                            ; 004d0627
    ADD ESI,EAX                         ; 004d0628
    PUSH ESI                            ; 004d062a
    PUSH 0x62a76e                       ; 004d062b | = "three"
    PUSH EDI                            ; 004d0630
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d0631
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d0636
    PUSH -0x1                           ; 004d0639
    PUSH 0x6                            ; 004d063b
    PUSH EBX                            ; 004d063d
    ADD ESI,EAX                         ; 004d063e
    PUSH ESI                            ; 004d0640
    PUSH 0x62a774                       ; 004d0641 | = "\t"
    PUSH EDI                            ; 004d0646
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d0647
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d064c
    ADD ESI,EAX                         ; 004d064f
    PUSH -0x1                           ; 004d0651
    PUSH 0x6                            ; 004d0653
    PUSH EBX                            ; 004d0655
    PUSH ESI                            ; 004d0656
    PUSH 0x62a776                       ; 004d0657 | = "four"
    PUSH EDI                            ; 004d065c
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d065d
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d0662
    PUSH -0x1                           ; 004d0665
    PUSH 0x6                            ; 004d0667
    PUSH EBX                            ; 004d0669
    ADD ESI,EAX                         ; 004d066a
    PUSH ESI                            ; 004d066c
    PUSH 0x62a77b                       ; 004d066d | = "  "
    PUSH EDI                            ; 004d0672
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d0673
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d0678
    PUSH -0x1                           ; 004d067b
    PUSH 0x6                            ; 004d067d
    PUSH EBX                            ; 004d067f
    ADD ESI,EAX                         ; 004d0680
    PUSH ESI                            ; 004d0682
    PUSH 0x62a77e                       ; 004d0683 | = "(01234)+5-6/7*8=9.0  8<>+-=*8"
    PUSH EDI                            ; 004d0688
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d0689
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d068e
    PUSH -0x1                           ; 004d0691
    MOV ESI,dword ptr [EBP + -0x4]      ; 004d0693
    PUSH 0x6                            ; 004d0696
    ADD EBX,ESI                         ; 004d0698
    PUSH EBX                            ; 004d069a
    PUSH 0xa                            ; 004d069b
    PUSH 0x62a79c                       ; 004d069d | = "#023  $0.23  a@t  5.0%  2^1  "
    PUSH EDI                            ; 004d06a2
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d06a3
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d06a8
    PUSH -0x1                           ; 004d06ab
    PUSH 0x6                            ; 004d06ad
    PUSH EBX                            ; 004d06af
    LEA ESI,[EAX + 0xa]                 ; 004d06b0
    PUSH ESI                            ; 004d06b3
    PUSH 0x62a7ba                       ; 004d06b4 | = "{0A,1B} ~1 O<<I I|O &x;"
    PUSH EDI                            ; 004d06b9
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d06ba
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d06bf
    PUSH -0x1                           ; 004d06c2
    MOV EDX,dword ptr [EBP + -0x4]      ; 004d06c4
    PUSH 0x6                            ; 004d06c7
    ADD EBX,EDX                         ; 004d06c9
    PUSH EBX                            ; 004d06cb
    PUSH 0xa                            ; 004d06cc
    PUSH 0x62a7d2                       ; 004d06ce | = "No?!  \"Hi\"  'A'  ({[0A]})  G_V  "
    PUSH EDI                            ; 004d06d3
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d06d4
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d06d9
    PUSH -0x1                           ; 004d06dc
    PUSH 0x6                            ; 004d06de
    PUSH EBX                            ; 004d06e0
    LEA ESI,[EAX + 0xa]                 ; 004d06e1
    PUSH ESI                            ; 004d06e4
    PUSH 0x62a7f3                       ; 004d06e5 | = "2:00pm  21,000  isn't  Uh,.."
    PUSH EDI                            ; 004d06ea
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d06eb
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d06f0
    MOV EAX,dword ptr [EBP + -0x4]      ; 004d06f3
    PUSH -0x1                           ; 004d06f6
    ADD EAX,EAX                         ; 004d06f8
    PUSH 0x6                            ; 004d06fa
    ADD EBX,EAX                         ; 004d06fc
    PUSH EBX                            ; 004d06fe
    PUSH 0x1c2                          ; 004d06ff
    PUSH 0x62a810                       ; 004d0704 | = "One newline:\nTwo newlines:\n\nThree ..."
    PUSH EDI                            ; 004d0709
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d070a
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d070f
    PUSH 0x0                            ; 004d0712
    PUSH 0xf8                           ; 004d0714
    PUSH EBX                            ; 004d0719
    MOV ESI,0x67b568                    ; 004d071a | = "CART Precision Racing v1.00"
    PUSH 0x82                           ; 004d071f
    LEA EAX,[EBP + -0x20]               ; 004d0724
    JMP 0x03fc377d                      ; 004d0727
        ;   XREF to: 03fc377d (UNCONDITIONAL_JUMP)  ; LAB_03fc377d
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d0736
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
        ;   Label: LAB_004d0736
    ADD ESP,0x18                        ; 004d073b
    PUSH 0x0                            ; 004d073e
    MOV EDX,dword ptr [EBP + -0x4]      ; 004d0740
    PUSH 0xf9                           ; 004d0743
    ADD EBX,EDX                         ; 004d0748
    PUSH EBX                            ; 004d074a
    PUSH 0x82                           ; 004d074b
    LEA EAX,[EBP + -0x20]               ; 004d0750
    PUSH EAX                            ; 004d0753
    MOV ECX,dword ptr [EBP + 0x14]      ; 004d0754
    PUSH ECX                            ; 004d0757
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d0758
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d075d
    PUSH 0x0                            ; 004d0760
    MOV ESI,dword ptr [EBP + -0x4]      ; 004d0762
    PUSH 0xfa                           ; 004d0765
    ADD EBX,ESI                         ; 004d076a
    PUSH EBX                            ; 004d076c
    PUSH 0x82                           ; 004d076d
    LEA EAX,[EBP + -0x20]               ; 004d0772
    PUSH EAX                            ; 004d0775
    MOV EDI,dword ptr [EBP + 0x14]      ; 004d0776
    PUSH EDI                            ; 004d0779
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d077a
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d077f
    PUSH 0x0                            ; 004d0782
    PUSH 0xfb                           ; 004d0784
    ADD EBX,ESI                         ; 004d0789
    PUSH EBX                            ; 004d078b
    PUSH 0x82                           ; 004d078c
    LEA EAX,[EBP + -0x20]               ; 004d0791
    PUSH EAX                            ; 004d0794
    PUSH EDI                            ; 004d0795
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d0796
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d079b
    PUSH 0x0                            ; 004d079e
    PUSH 0xfc                           ; 004d07a0
    ADD EBX,ESI                         ; 004d07a5
    PUSH EBX                            ; 004d07a7
    PUSH 0x82                           ; 004d07a8
    LEA EAX,[EBP + -0x20]               ; 004d07ad
    PUSH EAX                            ; 004d07b0
    PUSH EDI                            ; 004d07b1
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d07b2
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d07b7
    PUSH 0x0                            ; 004d07ba
    MOV ESI,EDI                         ; 004d07bc
    MOV EDI,dword ptr [EBP + -0x4]      ; 004d07be
    PUSH 0xfd                           ; 004d07c1
    ADD EBX,EDI                         ; 004d07c6
    PUSH EBX                            ; 004d07c8
    PUSH 0x82                           ; 004d07c9
    LEA EAX,[EBP + -0x20]               ; 004d07ce
    PUSH EAX                            ; 004d07d1
    MOV EAX,ESI                         ; 004d07d2
    PUSH EAX                            ; 004d07d4
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d07d5
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d07da
    PUSH 0x0                            ; 004d07dd
    PUSH 0xfe                           ; 004d07df
    ADD EBX,EDI                         ; 004d07e4
    PUSH EBX                            ; 004d07e6
    PUSH 0x82                           ; 004d07e7
    LEA EAX,[EBP + -0x20]               ; 004d07ec
    PUSH EAX                            ; 004d07ef
    MOV ECX,ESI                         ; 004d07f0
    PUSH ECX                            ; 004d07f2
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d07f3
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d07f8
    PUSH 0x0                            ; 004d07fb
    PUSH 0xff                           ; 004d07fd
    ADD EBX,EDI                         ; 004d0802
    PUSH EBX                            ; 004d0804
    PUSH 0x82                           ; 004d0805
    LEA EAX,[EBP + -0x20]               ; 004d080a
    PUSH EAX                            ; 004d080d
    MOV ESI,EDI                         ; 004d080e
    MOV EDI,dword ptr [EBP + 0x14]      ; 004d0810
    PUSH EDI                            ; 004d0813
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d0814
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d0819
    PUSH 0x0                            ; 004d081c
    MOV EAX,ESI                         ; 004d081e
    PUSH 0xff                           ; 004d0820
    ADD EBX,EAX                         ; 004d0825
    PUSH EBX                            ; 004d0827
    PUSH 0x82                           ; 004d0828
    PUSH 0x62a844                       ; 004d082d | = "Here is a newline:\nNext line!!\nAnd ..."
    PUSH EDI                            ; 004d0832
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 004d0833
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004d0838
    MOV ESP,EBP                         ; 004d083b
    POP EBP                             ; 004d083d
    POP EDI                             ; 004d083e
    POP ESI                             ; 004d083f
    POP EBX                             ; 004d0840
    RET                                 ; 004d0841
    MOV ECX,0x7                         ; 03fc377d
        ;   Label: LAB_03fc377d
    PUSH EAX                            ; 03fc3782
    MOV EAX,dword ptr [EBP + 0x14]      ; 03fc3783
    LEA EDI,[EBP + -0x20]               ; 03fc3786
    PUSH EAX                            ; 03fc3789
    MOV ECX,dword ptr [ESI]             ; 03fc378a
    MOV dword ptr [EDI],ECX             ; 03fc378c
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc378e
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc3791
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc3794
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc3797
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc379a
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc379d
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc37a0
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc37a3
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc37a6
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc37a9
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc37ac
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc37af
    ADD ESI,0x1c                        ; 03fc37b2
    ADD EDI,0x1c                        ; 03fc37b5
    XOR ECX,ECX                         ; 03fc37b8
    JMP 0x004d0736                      ; 03fc37ba
        ;   XREF to: 004d0736 (UNCONDITIONAL_JUMP)  ; LAB_004d0736

