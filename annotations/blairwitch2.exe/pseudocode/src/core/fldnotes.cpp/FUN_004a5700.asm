; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a5700(int param_1)
;
; Local Variables:
; undefined        Stack[-0x520]:1  local_520
; undefined        Stack[-0x420]:1  local_420
; undefined        Stack[-0x320]:1  local_320
; undefined        Stack[-0x220]:1  local_220
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b54c6
;
; Referenced Globals:
;   undefined4 DAT_005d59e3
;   TerminatedCString s_tab_s_005d59e8
;   TerminatedCString s_pentip_005d59ef
;   TerminatedCString s_pentipink_005d59f6
;   TerminatedCString s_xmarker_005d5a00
;   TerminatedCString s_questionmark_005d5a08
;   TerminatedCString s_ltarrow_005d5a15
;   TerminatedCString s_rtarrow_005d5a1d
;   TerminatedCString s_fieldnotes_exit_005d5a25
;   TerminatedCString s_underline_005d5a35
;   undefined4 DAT_005d645b
;   undefined4 DAT_00616010
;   undefined4 DAT_00616014
;   undefined4 DAT_00616018
;   undefined4 DAT_0061601c
;   ... and 40 more
;
; Called Functions:
;   core_flashlit.cpp_FUN_004a1570
;   core_flashlit.cpp_FUN_004a1bb0
;   core_flashlit.cpp_FUN_004a1c60
;   core_fldnotes.cpp_SNotesSection_layout_FUN_004a3740
;   core_fldnotes.cpp_STextPage_findResourceAt_FUN_004a2730
;   core_fldnotes.cpp_STextView_drawPage_FUN_004a3240
;   core_fldnotes.cpp_STextView_reset_FUN_004a27e0
;   core_fldnotes.cpp_STextView_setRect_FUN_004a2890
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
;   engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040dab0
;   engine_alphabit.cpp_FUN_0040d540
;   engine_alphabit.cpp_FUN_0040dd20
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5700
        ;   Label: core_fldnotes.cpp_FUN_004a5700
    PUSH ESI                            ; 004a5701
    PUSH EDI                            ; 004a5702
    PUSH EBP                            ; 004a5703
    SUB ESP,0x510                       ; 004a5704
    MOV ESI,0x1caf128                   ; 004a570a
    MOV EAX,dword ptr [ESP + 0x524]     ; 004a570f
    XOR EDX,EDX                         ; 004a5716
    ADD ESI,0x78                        ; 004a5718
    MOV ECX,dword ptr [EAX + 0x40]      ; 004a571b
    MOV dword ptr [ESP + 0x508],EDX     ; 004a571e
    TEST ECX,ECX                        ; 004a5725
    JZ 0x004a5aaf                       ; 004a5727
        ;   XREF to: 004a5aaf (CONDITIONAL_JUMP)  ; LAB_004a5aaf
    CMP dword ptr [0x00616010],0x0      ; 004a572d | DAT_00616010
    JNZ 0x004a5b70                      ; 004a5734
        ;   XREF to: 004a5b70 (CONDITIONAL_JUMP)  ; LAB_004a5b70
    CMP dword ptr [0x00616014],0x0      ; 004a573a | DAT_00616014
        ;   Label: LAB_004a573a
    JZ 0x004a57ae                       ; 004a5741
        ;   XREF to: 004a57ae (CONDITIONAL_JUMP)  ; LAB_004a57ae
    PUSH 0x1b8                          ; 004a5743
    PUSH 0x1eb                          ; 004a5748
    PUSH 0x40                           ; 004a574d
    PUSH 0x60                           ; 004a574f
    PUSH 0x1caf240                      ; 004a5751
    CALL core_fldnotes.cpp_STextView_setRect_FUN_004a2890 ; 004a5756
        ;   XREF to: 004a2890 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_setRect_FUN_004a2890(STextView * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4, ...)
    ADD ESP,0x14                        ; 004a575b
    PUSH 0x1caf240                      ; 004a575e
    XOR ESI,ESI                         ; 004a5763
    CALL core_fldnotes.cpp_STextView_reset_FUN_004a27e0 ; 004a5765
        ;   XREF to: 004a27e0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004a27e0(STextView * this_ptr)
    MOV EDI,dword ptr [0x01cab9f0]      ; 004a576a | DAT_01cab9f0
    XOR DH,DH                           ; 004a5770
    ADD ESP,0x4                         ; 004a5772
    MOV byte ptr [0x01cab7f0],DH        ; 004a5775 | DAT_01cab7f0
    TEST EDI,EDI                        ; 004a577b
    JLE 0x004a57a7                      ; 004a577d
        ;   XREF to: 004a57a7 (CONDITIONAL_JUMP)  ; LAB_004a57a7
    MOV EBX,0x1cab9f4                   ; 004a577f
    PUSH 0x1caf240                      ; 004a5784
        ;   Label: LAB_004a5784
    PUSH EBX                            ; 004a5789
    CALL core_fldnotes.cpp_SNotesSection_layout_FUN_004a3740 ; 004a578a
        ;   XREF to: 004a3740 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesSection_layout_FUN_004a3740(SNotesSection * this_ptr, int param_2)
    ADD ESP,0x8                         ; 004a578f
    TEST EAX,EAX                        ; 004a5792
    JZ 0x004a57ae                       ; 004a5794
        ;   XREF to: 004a57ae (CONDITIONAL_JUMP)  ; LAB_004a57ae
    MOV EBP,dword ptr [0x01cab9f0]      ; 004a5796 | DAT_01cab9f0
    INC ESI                             ; 004a579c
    ADD EBX,0x2e4                       ; 004a579d
    CMP ESI,EBP                         ; 004a57a3
    JL 0x004a5784                       ; 004a57a5
        ;   XREF to: 004a5784 (CONDITIONAL_JUMP)  ; LAB_004a5784
    XOR EAX,EAX                         ; 004a57a7
        ;   Label: LAB_004a57a7
    MOV [0x00616014],EAX                ; 004a57a9 | DAT_00616014
    PUSH 0xffff                         ; 004a57ae
        ;   Label: LAB_004a57ae
    PUSH 0x0                            ; 004a57b3
    PUSH 0x0                            ; 004a57b5
    PUSH 0x1caf114                      ; 004a57b7
    XOR EDI,EDI                         ; 004a57bc
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004a57be
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV EAX,[0x01caf110]                ; 004a57c3 | DAT_01caf110
    MOV EDX,dword ptr [0x01cab9f0]      ; 004a57c8 | DAT_01cab9f0
    ADD ESP,0x10                        ; 004a57ce
    TEST EDX,EDX                        ; 004a57d1
    JLE 0x004a5e51                      ; 004a57d3
        ;   XREF to: 004a5e51 (CONDITIONAL_JUMP)  ; LAB_004a5e51
    MOV EBX,0x1cab9f4                   ; 004a57d9
    MOV ECX,dword ptr [0x01cab9f0]      ; 004a57de | DAT_01cab9f0
    MOV ESI,dword ptr [EBX + 0x140]     ; 004a57e4 | SNotesSection_ARRAY_01cab9f4[0].first_page | SNotesSection_ARRAY_01cab9f4[1].first_page
        ;   Label: LAB_004a57e4
    CMP EAX,ESI                         ; 004a57ea
    JL 0x004a5e42                       ; 004a57ec
        ;   XREF to: 004a5e42 (CONDITIONAL_JUMP)  ; LAB_004a5e42
    ADD ESI,dword ptr [EBX + 0x144]     ; 004a57f2 | SNotesSection_ARRAY_01cab9f4[0].page_count | SNotesSection_ARRAY_01cab9f4[1].page_count
    CMP ESI,EAX                         ; 004a57f8
    JLE 0x004a5e42                      ; 004a57fa
        ;   XREF to: 004a5e42 (CONDITIONAL_JUMP)  ; LAB_004a5e42
    MOV ESI,EDI                         ; 004a5800
    MOV EAX,[0x01cab9f0]                ; 004a5802 | DAT_01cab9f0
        ;   Label: LAB_004a5802
    MOV dword ptr [ESP + 0x50c],ESI     ; 004a5807
    XOR ESI,ESI                         ; 004a580e
    TEST EAX,EAX                        ; 004a5810
    JLE 0x004a5864                      ; 004a5812
        ;   XREF to: 004a5864 (CONDITIONAL_JUMP)  ; LAB_004a5864
    MOV EBX,0x1cab9f4                   ; 004a5814
    MOV EDI,0x1caf128                   ; 004a5819
    IMUL EBP,ESI,0x14                   ; 004a581e
        ;   Label: LAB_004a581e
    CMP ESI,dword ptr [ESP + 0x50c]     ; 004a5821
    JNZ 0x004a5e5b                      ; 004a5828
        ;   XREF to: 004a5e5b (CONDITIONAL_JUMP)  ; LAB_004a5e5b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a582e | SNotesSection_ARRAY_01cab9f4[0].tab_y | SNotesSection_ARRAY_01cab9f4[1].tab_y
    PUSH 0xffff                         ; 004a5834
    SUB EAX,0x2                         ; 004a5839
    PUSH EAX                            ; 004a583c
    MOV EAX,dword ptr [EBX + 0x148]     ; 004a583d | SNotesSection_ARRAY_01cab9f4[0].tab_x | SNotesSection_ARRAY_01cab9f4[1].tab_x
    SUB EAX,0x2                         ; 004a5843
    PUSH EAX                            ; 004a5846
    PUSH EDI                            ; 004a5847
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004a5848
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004a584d
    MOV EDX,dword ptr [0x01cab9f0]      ; 004a5850 | DAT_01cab9f0
        ;   Label: LAB_004a5850
    ADD EDI,0x14                        ; 004a5856
    INC ESI                             ; 004a5859
    ADD EBX,0x2e4                       ; 004a585a
    CMP ESI,EDX                         ; 004a5860
    JL 0x004a581e                       ; 004a5862
        ;   XREF to: 004a581e (CONDITIONAL_JUMP)  ; LAB_004a581e
    MOV EBX,dword ptr [0x01caf110]      ; 004a5864 | DAT_01caf110
        ;   Label: LAB_004a5864
    PUSH EBX                            ; 004a586a
    XOR ECX,ECX                         ; 004a586b
    PUSH 0x1caf240                      ; 004a586d
    MOV dword ptr [0x01caf568],ECX      ; 004a5872 | DAT_01caf568
    CALL core_fldnotes.cpp_STextView_drawPage_FUN_004a3240 ; 004a5878
        ;   XREF to: 004a3240 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_drawPage_FUN_004a3240(STextView * this_ptr, int param_2)
    MOV EAX,[0x00616494]                ; 004a587d | g_CGamePtr | g_CGameInstance
    MOV ESI,dword ptr [EAX + 0x244]     ; 004a5882 | g_CGameInstance.letterbox_mode
    ADD ESP,0x8                         ; 004a5888
    TEST ESI,ESI                        ; 004a588b
    JNZ 0x004a5f2d                      ; 004a588d
        ;   XREF to: 004a5f2d (CONDITIONAL_JUMP)  ; LAB_004a5f2d
    MOV EDI,dword ptr [0x01c2a380]      ; 004a5893 | DAT_01c2a380
    PUSH EDI                            ; 004a5899
    MOV EBP,dword ptr [0x01c2a37c]      ; 004a589a | DAT_01c2a37c
    PUSH EBP                            ; 004a58a0
    CALL core_flashlit.cpp_FUN_004a1bb0 ; 004a58a1
        ;   XREF to: 004a1bb0 (UNCONDITIONAL_CALL)  ; undefined core_flashlit.cpp_FUN_004a1bb0()
    ADD ESP,0x8                         ; 004a58a6
    TEST EAX,EAX                        ; 004a58a9
    JL 0x004a58e0                       ; 004a58ab
        ;   XREF to: 004a58e0 (CONDITIONAL_JUMP)  ; LAB_004a58e0
    MOV EBX,EAX                         ; 004a58ad
    SHL EAX,0x3                         ; 004a58af
    ADD EAX,EBX                         ; 004a58b2
    SHL EAX,0x2                         ; 004a58b4
    ADD EAX,EBX                         ; 004a58b7
    SHL EAX,0x2                         ; 004a58b9
    MOV EBX,EAX                         ; 004a58bc
    SHL EAX,0x2                         ; 004a58be
    ADD EAX,EBX                         ; 004a58c1
    ADD EAX,0x1cab9f4                   ; 004a58c3
    ADD EAX,0x40                        ; 004a58c8
    PUSH EAX                            ; 004a58cb
    CALL core_flashlit.cpp_FUN_004a1570 ; 004a58cc
        ;   XREF to: 004a1570 (UNCONDITIONAL_CALL)  ; undefined core_flashlit.cpp_FUN_004a1570()
    MOV EAX,0x1                         ; 004a58d1
    ADD ESP,0x4                         ; 004a58d6
    MOV dword ptr [ESP + 0x508],EAX     ; 004a58d9
    MOV EDX,dword ptr [0x01c2a380]      ; 004a58e0 | DAT_01c2a380
        ;   Label: LAB_004a58e0
    PUSH EDX                            ; 004a58e6
    MOV ECX,dword ptr [0x01c2a37c]      ; 004a58e7 | DAT_01c2a37c
    PUSH ECX                            ; 004a58ed
    CALL core_flashlit.cpp_FUN_004a1c60 ; 004a58ee
        ;   XREF to: 004a1c60 (UNCONDITIONAL_CALL)  ; undefined core_flashlit.cpp_FUN_004a1c60()
    ADD ESP,0x8                         ; 004a58f3
    TEST EAX,EAX                        ; 004a58f6
    JZ 0x004a5905                       ; 004a58f8
        ;   XREF to: 004a5905 (CONDITIONAL_JUMP)  ; LAB_004a5905
    MOV dword ptr [ESP + 0x508],0x1     ; 004a58fa
    MOV EBX,dword ptr [0x01caf110]      ; 004a5905 | DAT_01caf110
        ;   Label: LAB_004a5905
    LEA EAX,[EBX*0x4 + 0x0]             ; 004a590b
    MOV ESI,dword ptr [0x01c2a380]      ; 004a5912 | DAT_01c2a380
    ADD EAX,EBX                         ; 004a5918
    MOV EDI,dword ptr [0x01c2a37c]      ; 004a591a | DAT_01c2a37c
    SHL EAX,0x4                         ; 004a5920
    PUSH ESI                            ; 004a5923
    ADD EAX,EBX                         ; 004a5924
    MOV EBX,dword ptr [0x01caf27c]      ; 004a5926 | g_STextViewInstance.pages
    SHL EAX,0x2                         ; 004a592c
    PUSH EDI                            ; 004a592f
    ADD EAX,EBX                         ; 004a5930
    PUSH EAX                            ; 004a5932
    CALL core_fldnotes.cpp_STextPage_findResourceAt_FUN_004a2730 ; 004a5933
        ;   XREF to: 004a2730 (UNCONDITIONAL_CALL)  ; int * core_fldnotes.cpp_STextPage_findResourceAt_FUN_004a2730(STextPage * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 004a5938
    TEST EAX,EAX                        ; 004a593b
    JZ 0x004a5971                       ; 004a593d
        ;   XREF to: 004a5971 (CONDITIONAL_JUMP)  ; LAB_004a5971
    MOV EBX,dword ptr [0x01c2a380]      ; 004a593f | DAT_01c2a380
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a5945
    MOV ESI,dword ptr [0x01c2a37c]      ; 004a5948 | DAT_01c2a37c
    SUB EBX,EDX                         ; 004a594e
    MOV EBP,dword ptr [EAX]             ; 004a5950
    PUSH EBX                            ; 004a5952
    SUB ESI,EBP                         ; 004a5953
    PUSH ESI                            ; 004a5955
    PUSH 0x0                            ; 004a5956
    MOV EDI,dword ptr [EAX + 0x14]      ; 004a5958
    PUSH EAX                            ; 004a595b
    CALL dword ptr [EDI + 0x8]          ; 004a595c
    ADD ESP,0x10                        ; 004a595f
    TEST EAX,EAX                        ; 004a5962
    JZ 0x004a5971                       ; 004a5964
        ;   XREF to: 004a5971 (CONDITIONAL_JUMP)  ; LAB_004a5971
    MOV dword ptr [ESP + 0x508],0x1     ; 004a5966
    CMP dword ptr [0x01caf110],0x0      ; 004a5971 | DAT_01caf110
        ;   Label: LAB_004a5971
    JLE 0x004a599a                      ; 004a5978
        ;   XREF to: 004a599a (CONDITIONAL_JUMP)  ; LAB_004a599a
    PUSH 0xffff                         ; 004a597a
    MOV ESI,dword ptr [0x0061601c]      ; 004a597f | DAT_0061601c
    PUSH ESI                            ; 004a5985
    MOV EDI,dword ptr [0x00616018]      ; 004a5986 | DAT_00616018
    PUSH EDI                            ; 004a598c
    PUSH 0x1caf1f0                      ; 004a598d
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004a5992
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004a5997
    MOV EAX,[0x01caf278]                ; 004a599a | g_STextViewInstance.page_count
        ;   Label: LAB_004a599a
    MOV EBP,dword ptr [0x01caf110]      ; 004a599f | DAT_01caf110
    SUB EAX,0x2                         ; 004a59a5
    CMP EAX,EBP                         ; 004a59a8
    JLE 0x004a59cb                      ; 004a59aa
        ;   XREF to: 004a59cb (CONDITIONAL_JUMP)  ; LAB_004a59cb
    PUSH 0xffff                         ; 004a59ac
    MOV EAX,[0x00616024]                ; 004a59b1 | DAT_00616024
    PUSH EAX                            ; 004a59b6
    MOV EDX,dword ptr [0x00616020]      ; 004a59b7 | DAT_00616020
    PUSH EDX                            ; 004a59bd
    PUSH 0x1caf204                      ; 004a59be
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004a59c3
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004a59c8
    PUSH 0xffff                         ; 004a59cb
        ;   Label: LAB_004a59cb
    MOV ECX,dword ptr [0x0061602c]      ; 004a59d0 | DAT_0061602c
    PUSH ECX                            ; 004a59d6
    MOV EBX,dword ptr [0x00616028]      ; 004a59d7 | DAT_00616028
    PUSH EBX                            ; 004a59dd
    PUSH 0x1caf218                      ; 004a59de
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004a59e3
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    MOV ESI,dword ptr [0x01c2a37c]      ; 004a59e8 | DAT_01c2a37c
    MOV EBX,dword ptr [0x01c2a380]      ; 004a59ee | DAT_01c2a380
    MOV EDI,dword ptr [0x00616028]      ; 004a59f4 | DAT_00616028
    ADD ESP,0x10                        ; 004a59fa
    CMP ESI,EDI                         ; 004a59fd
    JGE 0x004a5e9a                      ; 004a59ff
        ;   XREF to: 004a5e9a (CONDITIONAL_JUMP)  ; LAB_004a5e9a
    MOV ESI,dword ptr [0x00616040]      ; 004a5a05 | DAT_00616040
        ;   Label: LAB_004a5a05
    TEST ESI,ESI                        ; 004a5a0b
    JL 0x004a5a66                       ; 004a5a0d
        ;   XREF to: 004a5a66 (CONDITIONAL_JUMP)  ; LAB_004a5a66
    MOV EDI,dword ptr [0x01caf568]      ; 004a5a0f | DAT_01caf568
    TEST EDI,EDI                        ; 004a5a15
    JZ 0x004a5ef1                       ; 004a5a17
        ;   XREF to: 004a5ef1 (CONDITIONAL_JUMP)  ; LAB_004a5ef1
    MOV EAX,[0x01caf494]                ; 004a5a1d | DAT_01caf494
    PUSH 0x0                            ; 004a5a22
    DEC EAX                             ; 004a5a24
    PUSH EAX                            ; 004a5a25
    MOV EAX,[0x01caf490]                ; 004a5a26 | DAT_01caf490
    DEC EAX                             ; 004a5a2b
    PUSH EAX                            ; 004a5a2c
    MOV ECX,dword ptr [0x01caf48c]      ; 004a5a2d | DAT_01caf48c
    PUSH ECX                            ; 004a5a33
    PUSH ESI                            ; 004a5a34
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004a5a35
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004a5a3a
    PUSH -0x1                           ; 004a5a3d
    PUSH 0xff                           ; 004a5a3f
    MOV ESI,dword ptr [0x01caf49c]      ; 004a5a44 | DAT_01caf49c
    PUSH ESI                            ; 004a5a4a
    MOV EDI,dword ptr [0x01caf498]      ; 004a5a4b | DAT_01caf498
    PUSH EDI                            ; 004a5a51
    PUSH 0x1caf4a0                      ; 004a5a52 | DAT_01caf4a0
    MOV EBP,dword ptr [0x01511cbc]      ; 004a5a57 | DAT_01511cbc
    PUSH EBP                            ; 004a5a5d
    CALL engine_font.cpp_FUN_004a8df0   ; 004a5a5e
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a8df0()
    ADD ESP,0x18                        ; 004a5a63
    MOV ESI,dword ptr [ESP + 0x508]     ; 004a5a66
        ;   Label: LAB_004a5a66
    MOV EDX,dword ptr [0x00616030]      ; 004a5a6d | DAT_00616030
    MOV EBX,dword ptr [0x01c2a37c]      ; 004a5a73 | DAT_01c2a37c
    MOV EAX,[0x01c2a380]                ; 004a5a79 | DAT_01c2a380
    MOV ECX,dword ptr [0x00616034]      ; 004a5a7e | DAT_00616034
    SUB EBX,EDX                         ; 004a5a84
    SUB EAX,ECX                         ; 004a5a86
    TEST ESI,ESI                        ; 004a5a88
    JZ 0x004a5f0e                       ; 004a5a8a
        ;   XREF to: 004a5f0e (CONDITIONAL_JUMP)  ; LAB_004a5f0e
    PUSH 0xffff                         ; 004a5a90
    PUSH EAX                            ; 004a5a95
    PUSH EBX                            ; 004a5a96
    PUSH 0x1caf1b4                      ; 004a5a97
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004a5a9c
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004a5aa1
    ADD ESP,0x510                       ; 004a5aa4
    POP EBP                             ; 004a5aaa
    POP EDI                             ; 004a5aab
    POP ESI                             ; 004a5aac
    POP EBX                             ; 004a5aad
    RET                                 ; 004a5aae
    PUSH 0x1caf114                      ; 004a5aaf
        ;   Label: LAB_004a5aaf
    MOV EBX,0x1caf128                   ; 004a5ab4
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5ab9
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5abe
    PUSH EBX                            ; 004a5ac1
        ;   Label: LAB_004a5ac1
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5ac2
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004a5ac7
    ADD ESP,0x4                         ; 004a5aca
    CMP EBX,ESI                         ; 004a5acd
    JNZ 0x004a5ac1                      ; 004a5acf
        ;   XREF to: 004a5ac1 (CONDITIONAL_JUMP)  ; LAB_004a5ac1
    PUSH 0x1caf1a0                      ; 004a5ad1
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5ad6
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5adb
    PUSH 0x1caf1b4                      ; 004a5ade
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5ae3
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5ae8
    PUSH 0x1caf1c8                      ; 004a5aeb
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5af0
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5af5
    PUSH 0x1caf1dc                      ; 004a5af8
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5afd
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5b02
    PUSH 0x1caf1f0                      ; 004a5b05
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5b0a
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5b0f
    PUSH 0x1caf204                      ; 004a5b12
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5b17
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5b1c
    PUSH 0x1caf218                      ; 004a5b1f
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5b24
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5b29
    MOV ESI,0x1                         ; 004a5b2c
    PUSH 0x1caf22c                      ; 004a5b31
    MOV EBP,0xffffffff                  ; 004a5b36
    XOR EDI,EDI                         ; 004a5b3b
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5b3d
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5b42
    MOV dword ptr [0x00616010],ESI      ; 004a5b45 | DAT_00616010
    MOV dword ptr [0x01caf488],EDI      ; 004a5b4b | DAT_01caf488
    MOV dword ptr [0x00616040],EBP      ; 004a5b51 | DAT_00616040
    XOR AH,AH                           ; 004a5b57
    MOV dword ptr [0x01caf568],EDI      ; 004a5b59 | DAT_01caf568
    MOV byte ptr [0x01caf4a0],AH        ; 004a5b5f | DAT_01caf4a0
    ADD ESP,0x510                       ; 004a5b65
    POP EBP                             ; 004a5b6b
    POP EDI                             ; 004a5b6c
    POP ESI                             ; 004a5b6d
    POP EBX                             ; 004a5b6e
    RET                                 ; 004a5b6f
    PUSH 0x1caf114                      ; 004a5b70
        ;   Label: LAB_004a5b70
    MOV EBX,0x1caf128                   ; 004a5b75
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5b7a
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5b7f
    PUSH EBX                            ; 004a5b82
        ;   Label: LAB_004a5b82
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5b83
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004a5b88
    ADD ESP,0x4                         ; 004a5b8b
    CMP EBX,ESI                         ; 004a5b8e
    JNZ 0x004a5b82                      ; 004a5b90
        ;   XREF to: 004a5b82 (CONDITIONAL_JUMP)  ; LAB_004a5b82
    PUSH 0x1caf1a0                      ; 004a5b92
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5b97
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5b9c
    PUSH 0x1caf1b4                      ; 004a5b9f
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5ba4
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5ba9
    PUSH 0x1caf1c8                      ; 004a5bac
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5bb1
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5bb6
    PUSH 0x1caf1dc                      ; 004a5bb9
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5bbe
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5bc3
    PUSH 0x1caf1f0                      ; 004a5bc6
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5bcb
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5bd0
    PUSH 0x1caf204                      ; 004a5bd3
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5bd8
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5bdd
    PUSH 0x1caf218                      ; 004a5be0
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5be5
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5bea
    PUSH 0x1caf22c                      ; 004a5bed
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a5bf2
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5bf7
    XOR ECX,ECX                         ; 004a5bfa
    PUSH ECX                            ; 004a5bfc
    LEA EAX,[ESP + 0x104]               ; 004a5bfd
    PUSH EAX                            ; 004a5c04
    MOV EBX,0xffffffff                  ; 004a5c05
    MOV EDX,0x1                         ; 004a5c0a
    PUSH ECX                            ; 004a5c0f
    MOV dword ptr [0x00616040],EBX      ; 004a5c10 | DAT_00616040
    MOV dword ptr [0x00616010],EDX      ; 004a5c16 | DAT_00616010
    PUSH ECX                            ; 004a5c1c
    MOV dword ptr [0x01caf488],ECX      ; 004a5c1d | DAT_01caf488
    XOR DL,DL                           ; 004a5c23
    PUSH 0x1cab7a8                      ; 004a5c25 | DAT_01cab7a8
    MOV dword ptr [0x01caf568],ECX      ; 004a5c2a | DAT_01caf568
    MOV byte ptr [0x01caf4a0],DL        ; 004a5c30 | DAT_01caf4a0
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 004a5c36
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a5c3b
    PUSH 0x1cab788                      ; 004a5c3e | DAT_01cab788
    LEA EAX,[ESP + 0x104]               ; 004a5c43
    PUSH EAX                            ; 004a5c4a
    PUSH 0x5d59e3                       ; 004a5c4b | DAT_005d59e3
    LEA EAX,[ESP + 0x20c]               ; 004a5c50
    PUSH EAX                            ; 004a5c57
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a5c58
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a5c5d
    PUSH 0x1e0                          ; 004a5c60
    PUSH 0x280                          ; 004a5c65
    LEA EAX,[ESP + 0x208]               ; 004a5c6a
    PUSH EAX                            ; 004a5c71
    PUSH 0x1caf114                      ; 004a5c72
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a5c77
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a5c7c
    PUSH 0xff                           ; 004a5c7f
    PUSH 0x1caf114                      ; 004a5c84
    MOV EBP,0x9                         ; 004a5c89
    XOR EBX,EBX                         ; 004a5c8e
    CALL engine_alphabit.cpp_FUN_0040dd20 ; 004a5c90
        ;   XREF to: 0040dd20 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040dd20()
    MOV EDI,dword ptr [0x01cab9f0]      ; 004a5c95 | DAT_01cab9f0
    ADD ESP,0x8                         ; 004a5c9b
    TEST EDI,EDI                        ; 004a5c9e
    JLE 0x004a5d70                      ; 004a5ca0
        ;   XREF to: 004a5d70 (CONDITIONAL_JUMP)  ; LAB_004a5d70
    MOV ESI,0x1cab9f4                   ; 004a5ca6
    MOV EDI,0x1caf128                   ; 004a5cab
    IMUL EAX,EBX,0x2e4                  ; 004a5cb0
        ;   Label: LAB_004a5cb0
    PUSH ESI                            ; 004a5cb6
    PUSH 0x5d59e8                       ; 004a5cb7 | = "tab_%s"
    MOV dword ptr [ESP + 0x508],EAX     ; 004a5cbc
    LEA EAX,[ESP + 0x308]               ; 004a5cc3
    PUSH EAX                            ; 004a5cca
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a5ccb
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    IMUL EAX,EBX,0x14                   ; 004a5cd0
    ADD ESP,0xc                         ; 004a5cd3
    PUSH 0x0                            ; 004a5cd6
    MOV dword ptr [ESP + 0x508],EAX     ; 004a5cd8
    LEA EAX,[ESP + 0x404]               ; 004a5cdf
    PUSH EAX                            ; 004a5ce6
    PUSH 0x0                            ; 004a5ce7
    PUSH 0x0                            ; 004a5ce9
    LEA EAX,[ESP + 0x310]               ; 004a5ceb
    PUSH EAX                            ; 004a5cf2
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 004a5cf3
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a5cf8
    PUSH 0x1cab788                      ; 004a5cfb | DAT_01cab788
    LEA EAX,[ESP + 0x404]               ; 004a5d00
    PUSH EAX                            ; 004a5d07
    PUSH 0x5d59e3                       ; 004a5d08 | DAT_005d59e3
    LEA EAX,[ESP + 0xc]                 ; 004a5d0d
    PUSH EAX                            ; 004a5d11
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a5d12
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a5d17
    PUSH 0x36                           ; 004a5d1a
    PUSH 0x5a                           ; 004a5d1c
    LEA EAX,[ESP + 0x8]                 ; 004a5d1e
    PUSH EAX                            ; 004a5d22
    PUSH EDI                            ; 004a5d23
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a5d24
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a5d29
    MOV EAX,dword ptr [ESP + 0x500]     ; 004a5d2c
    MOV dword ptr [EAX + 0x1cabb3c],0x215 ; 004a5d33
    MOV dword ptr [EAX + 0x1cabb40],EBP ; 004a5d3d
    MOV EAX,dword ptr [ESP + 0x504]     ; 004a5d43
    ADD ESI,0x2e4                       ; 004a5d4a
    INC EBX                             ; 004a5d50
    MOV EAX,dword ptr [EAX + 0x1caf138] ; 004a5d51
    MOV ECX,dword ptr [0x01cab9f0]      ; 004a5d57 | DAT_01cab9f0
    ADD EAX,0xa                         ; 004a5d5d
    ADD EDI,0x14                        ; 004a5d60
    ADD EBP,EAX                         ; 004a5d63
    CMP EBX,ECX                         ; 004a5d65
    JL 0x004a5cb0                       ; 004a5d67
        ;   XREF to: 004a5cb0 (CONDITIONAL_JUMP)  ; LAB_004a5cb0
    LEA EAX,[EAX]                       ; 004a5d6d
    PUSH 0x20                           ; 004a5d70
        ;   Label: LAB_004a5d70
    PUSH 0x20                           ; 004a5d72
    PUSH 0x5d59ef                       ; 004a5d74 | = "pentip"
    PUSH 0x1caf1a0                      ; 004a5d79
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a5d7e
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a5d83
    PUSH 0x20                           ; 004a5d86
    PUSH 0x20                           ; 004a5d88
    PUSH 0x5d59f6                       ; 004a5d8a | = "pentipink"
    PUSH 0x1caf1b4                      ; 004a5d8f
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a5d94
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a5d99
    PUSH 0x20                           ; 004a5d9c
    PUSH 0x20                           ; 004a5d9e
    PUSH 0x5d5a00                       ; 004a5da0 | = "xmarker"
    PUSH 0x1caf1c8                      ; 004a5da5
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a5daa
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a5daf
    PUSH 0x3f                           ; 004a5db2
    PUSH 0x21                           ; 004a5db4
    PUSH 0x5d5a08                       ; 004a5db6 | = "questionmark"
    PUSH 0x1caf1dc                      ; 004a5dbb
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a5dc0
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a5dc5
    PUSH 0x20                           ; 004a5dc8
    PUSH 0x40                           ; 004a5dca
    PUSH 0x5d5a15                       ; 004a5dcc | = "ltarrow"
    PUSH 0x1caf1f0                      ; 004a5dd1
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a5dd6
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a5ddb
    PUSH 0x20                           ; 004a5dde
    PUSH 0x40                           ; 004a5de0
    PUSH 0x5d5a1d                       ; 004a5de2 | = "rtarrow"
    PUSH 0x1caf204                      ; 004a5de7
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a5dec
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a5df1
    PUSH 0x20                           ; 004a5df4
    PUSH 0x1e                           ; 004a5df6
    PUSH 0x5d5a25                       ; 004a5df8 | = "fieldnotes_exit"
    PUSH 0x1caf218                      ; 004a5dfd
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a5e02
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a5e07
    PUSH 0xff                           ; 004a5e0a
    PUSH 0x1caf218                      ; 004a5e0f
    CALL engine_alphabit.cpp_FUN_0040dd20 ; 004a5e14
        ;   XREF to: 0040dd20 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040dd20()
    ADD ESP,0x8                         ; 004a5e19
    PUSH 0x8                            ; 004a5e1c
    PUSH 0x100                          ; 004a5e1e
    PUSH 0x5d5a35                       ; 004a5e23 | = "underline"
    PUSH 0x1caf22c                      ; 004a5e28
    XOR EBX,EBX                         ; 004a5e2d
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a5e2f
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a5e34
    MOV dword ptr [0x00616010],EBX      ; 004a5e37 | DAT_00616010
    JMP 0x004a573a                      ; 004a5e3d
        ;   XREF to: 004a573a (UNCONDITIONAL_JUMP)  ; LAB_004a573a
    INC EDI                             ; 004a5e42
        ;   Label: LAB_004a5e42
    ADD EBX,0x2e4                       ; 004a5e43
    CMP EDI,ECX                         ; 004a5e49
    JL 0x004a57e4                       ; 004a5e4b
        ;   XREF to: 004a57e4 (CONDITIONAL_JUMP)  ; LAB_004a57e4
    MOV ESI,0xffffffff                  ; 004a5e51
        ;   Label: LAB_004a5e51
    JMP 0x004a5802                      ; 004a5e56
        ;   XREF to: 004a5802 (UNCONDITIONAL_JUMP)  ; LAB_004a5802
    MOV EAX,dword ptr [EBP + 0x1caf138] ; 004a5e5b | CAlphaBitmap_ARRAY_01caf128[1].height
        ;   Label: LAB_004a5e5b
    PUSH 0xffff                         ; 004a5e61
    DEC EAX                             ; 004a5e66
    PUSH EAX                            ; 004a5e67
    MOV EAX,dword ptr [EBP + 0x1caf134] ; 004a5e68 | CAlphaBitmap_ARRAY_01caf128[1].width
    DEC EAX                             ; 004a5e6e
    PUSH EAX                            ; 004a5e6f
    MOV ECX,dword ptr [EBX + 0x148]     ; 004a5e70 | SNotesSection_ARRAY_01cab9f4[1].tab_x
    MOV EAX,0x246                       ; 004a5e76
    PUSH 0x0                            ; 004a5e7b
    SUB EAX,ECX                         ; 004a5e7d
    PUSH EAX                            ; 004a5e7f
    MOV EBP,dword ptr [EBX + 0x14c]     ; 004a5e80 | SNotesSection_ARRAY_01cab9f4[1].tab_y
    PUSH EBP                            ; 004a5e86
    PUSH 0x246                          ; 004a5e87
    PUSH EDI                            ; 004a5e8c
    CALL engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040dab0 ; 004a5e8d
        ;   XREF to: 0040dab0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040dab0(CAlphaBitmap * this_ptr, int dest_x, int dest_y, int left_x, ...)
    ADD ESP,0x20                        ; 004a5e92
    JMP 0x004a5850                      ; 004a5e95
        ;   XREF to: 004a5850 (UNCONDITIONAL_JUMP)  ; LAB_004a5850
    MOV EBP,dword ptr [0x0061602c]      ; 004a5e9a | DAT_0061602c
        ;   Label: LAB_004a5e9a
    CMP EBX,EBP                         ; 004a5ea0
    JL 0x004a5a05                       ; 004a5ea2
        ;   XREF to: 004a5a05 (CONDITIONAL_JUMP)  ; LAB_004a5a05
    MOV EDX,dword ptr [0x01caf224]      ; 004a5ea8 | CAlphaBitmap_01caf218.width
    LEA EAX,[EDI + EDX*0x1]             ; 004a5eae
    CMP ESI,EAX                         ; 004a5eb1
    JGE 0x004a5a05                      ; 004a5eb3
        ;   XREF to: 004a5a05 (CONDITIONAL_JUMP)  ; LAB_004a5a05
    MOV ECX,dword ptr [0x01caf228]      ; 004a5eb9 | CAlphaBitmap_01caf218.height
    LEA EAX,[ECX + EBP*0x1]             ; 004a5ebf
    CMP EBX,EAX                         ; 004a5ec2
    JGE 0x004a5a05                      ; 004a5ec4
        ;   XREF to: 004a5a05 (CONDITIONAL_JUMP)  ; LAB_004a5a05
    PUSH 0x5d645b                       ; 004a5eca | DAT_005d645b
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004a5ecf
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004a5ed4
    PUSH EAX                            ; 004a5ed7
    MOV EBX,0x1                         ; 004a5ed8
    CALL core_flashlit.cpp_FUN_004a1570 ; 004a5edd
        ;   XREF to: 004a1570 (UNCONDITIONAL_CALL)  ; undefined core_flashlit.cpp_FUN_004a1570()
    ADD ESP,0x4                         ; 004a5ee2
    MOV dword ptr [ESP + 0x508],EBX     ; 004a5ee5
    JMP 0x004a5a05                      ; 004a5eec
        ;   XREF to: 004a5a05 (UNCONDITIONAL_JUMP)  ; LAB_004a5a05
    MOV EAX,0xffffffff                  ; 004a5ef1
        ;   Label: LAB_004a5ef1
    XOR BL,BL                           ; 004a5ef6
    MOV dword ptr [0x01caf488],EDI      ; 004a5ef8 | DAT_01caf488
    MOV byte ptr [0x01caf4a0],BL        ; 004a5efe | DAT_01caf4a0
    MOV [0x00616040],EAX                ; 004a5f04 | DAT_00616040
    JMP 0x004a5a66                      ; 004a5f09
        ;   XREF to: 004a5a66 (UNCONDITIONAL_JUMP)  ; LAB_004a5a66
    PUSH 0xffff                         ; 004a5f0e
        ;   Label: LAB_004a5f0e
    PUSH EAX                            ; 004a5f13
    PUSH EBX                            ; 004a5f14
    PUSH 0x1caf1a0                      ; 004a5f15
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004a5f1a
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004a5f1f
    ADD ESP,0x510                       ; 004a5f22
    POP EBP                             ; 004a5f28
    POP EDI                             ; 004a5f29
    POP ESI                             ; 004a5f2a
    POP EBX                             ; 004a5f2b
    RET                                 ; 004a5f2c
    MOV EBP,0xffffffff                  ; 004a5f2d
        ;   Label: LAB_004a5f2d
    XOR BH,BH                           ; 004a5f32
    XOR EDI,EDI                         ; 004a5f34
    MOV byte ptr [0x01caf4a0],BH        ; 004a5f36 | DAT_01caf4a0
    MOV dword ptr [0x00616040],EBP      ; 004a5f3c | DAT_00616040
    MOV dword ptr [0x01caf568],EDI      ; 004a5f42 | DAT_01caf568
    MOV dword ptr [0x01caf488],EDI      ; 004a5f48 | DAT_01caf488
    ADD ESP,0x510                       ; 004a5f4e
    POP EBP                             ; 004a5f54
    POP EDI                             ; 004a5f55
    POP ESI                             ; 004a5f56
    POP EBX                             ; 004a5f57
    RET                                 ; 004a5f58

