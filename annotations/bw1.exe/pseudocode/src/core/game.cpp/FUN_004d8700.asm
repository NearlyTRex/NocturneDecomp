; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004d8700(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x548]:1  local_548
; undefined1       Stack[-0x547]:1  local_547
; undefined        Stack[-0x148]:1  local_148
; undefined1       Stack[-0x147]:1  local_147
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_run_FUN_0051bad0 at 0051bc56
;
; Referenced Globals:
;   TerminatedCString s_stats_005e34ac
;   TerminatedCString s_Level_time_005e34b2
;   undefined1 DAT_005e34bd
;   undefined1 DAT_005e34be
;   undefined1 DAT_005e34bf
;   TerminatedCString s_s_2d_2d_2d_2d_005e34c0
;   TerminatedCString s_Body_count_005e34d2
;   TerminatedCString s_anon_005e34dd
;   undefined4 s_anon_005e34dd+1
;   undefined4 s_anon_005e34dd+2
;   undefined4 DAT_005e34e0
;   undefined4 DAT_005e34ec
;   undefined4 DAT_005e34f4
;   undefined4 DAT_005e34fc
;   undefined4 DAT_005e3504
;   ... and 2 more
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   crt_unknown.c_FUN_005bfb40
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350
;   engine_font.cpp_FUN_004c4260
;   engine_font.cpp_FUN_004c4510
;   engine_special.cpp_clearScreen_FUN_0057dc40
;   support_newmsg.cpp_getLocalizedString_FUN_00531090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8700
        ;   Label: core_game.cpp_FUN_004d8700
    PUSH ESI                            ; 004d8701
    PUSH EDI                            ; 004d8702
    PUSH EBP                            ; 004d8703
    SUB ESP,0x538                       ; 004d8704
    LEA EAX,[ESP + 0x500]               ; 004d870a
    PUSH EAX                            ; 004d8711
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004d8712
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004d8717
    PUSH 0x1e0                          ; 004d871a
    PUSH 0x280                          ; 004d871f
    PUSH 0x5e34ac                       ; 004d8724 | = "stats"
    LEA EAX,[ESP + 0x50c]               ; 004d8729
    PUSH EAX                            ; 004d8730
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004d8731
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004d8736
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 004d8739
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    PUSH 0xffff                         ; 004d873e
    PUSH 0x0                            ; 004d8743
    PUSH 0x0                            ; 004d8745
    LEA EAX,[ESP + 0x50c]               ; 004d8747
    PUSH EAX                            ; 004d874e
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004d874f
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004d8754
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004d8757
    FLD float ptr [EAX + 0x270]         ; 004d875e
    FADD float ptr [EAX + 0x268]        ; 004d8764
    MOV ECX,dword ptr [ESP + 0x54c]     ; 004d876a
    FSTP float ptr [EAX + 0x268]        ; 004d8771
    FLD float ptr [ECX + 0x270]         ; 004d8777
    MOV EAX,dword ptr [EAX + 0x26c]     ; 004d877d
    MOV EDX,dword ptr [ECX + 0x274]     ; 004d8783
    FLD ST0                             ; 004d8789
    FMUL double ptr [0x005e34ec]        ; 004d878b | DAT_005e34ec
    ADD EDX,EAX                         ; 004d8791
    CALL crt_math.c_round_FUN_005c03a0  ; 004d8793
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x528]       ; 004d8798
    MOV EAX,dword ptr [ESP + 0x528]     ; 004d879f
    MOV dword ptr [ESP + 0x534],EAX     ; 004d87a6
    FILD dword ptr [ESP + 0x534]        ; 004d87ad
    FMUL double ptr [0x005e34f4]        ; 004d87b4 | DAT_005e34f4
    FSUBP                               ; 004d87ba
    FLD ST0                             ; 004d87bc
    FMUL double ptr [0x005e34fc]        ; 004d87be | DAT_005e34fc
    CALL crt_math.c_round_FUN_005c03a0  ; 004d87c4
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x51c]       ; 004d87c9
    MOV EAX,dword ptr [ESP + 0x51c]     ; 004d87d0
    MOV dword ptr [ESP + 0x534],EAX     ; 004d87d7
    FILD dword ptr [ESP + 0x534]        ; 004d87de
    FMUL double ptr [0x005e3504]        ; 004d87e5 | DAT_005e3504
    FSUBP                               ; 004d87eb
    FST float ptr [ECX + 0x270]         ; 004d87ed
    CALL crt_math.c_round_FUN_005c03a0  ; 004d87f3
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x520]       ; 004d87f8
    MOV EAX,dword ptr [ESP + 0x520]     ; 004d87ff
    MOV dword ptr [ESP + 0x534],EAX     ; 004d8806
    FILD dword ptr [ESP + 0x534]        ; 004d880d
    FSUBR float ptr [ECX + 0x270]       ; 004d8814
    FST float ptr [ECX + 0x270]         ; 004d881a
    FMUL double ptr [0x005e350c]        ; 004d8820 | DAT_005e350c
    PUSH 0x5e34b2                       ; 004d8826 | = "Level time"
    MOV dword ptr [ECX + 0x274],EDX     ; 004d882b
    CALL crt_math.c_round_FUN_005c03a0  ; 004d8831
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x528]       ; 004d8836
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d883d
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d8842
    MOV EDI,ESP                         ; 004d8845
    MOV ESI,EAX                         ; 004d8847
    PUSH EDI                            ; 004d8849
    MOV AL,byte ptr [ESI]               ; 004d884a
        ;   Label: LAB_004d884a
    MOV byte ptr [EDI],AL               ; 004d884c
    CMP AL,0x0                          ; 004d884e
    JZ 0x004d8862                       ; 004d8850
        ;   XREF to: 004d8862 (CONDITIONAL_JUMP)  ; LAB_004d8862
    MOV AL,byte ptr [ESI + 0x1]         ; 004d8852
    ADD ESI,0x2                         ; 004d8855
    MOV byte ptr [EDI + 0x1],AL         ; 004d8858
    ADD EDI,0x2                         ; 004d885b
    CMP AL,0x0                          ; 004d885e
    JNZ 0x004d884a                      ; 004d8860
        ;   XREF to: 004d884a (CONDITIONAL_JUMP)  ; LAB_004d884a
    POP EDI                             ; 004d8862
        ;   Label: LAB_004d8862
    MOV ESI,0x5e34bd                    ; 004d8863 | DAT_005e34bd
    MOV EDI,ESP                         ; 004d8868
    PUSH EDI                            ; 004d886a
    SUB ECX,ECX                         ; 004d886b
    DEC ECX                             ; 004d886d
    MOV AL,0x0                          ; 004d886e
    SCASB.REPNE ES:EDI                  ; 004d8870
    DEC EDI                             ; 004d8872
    MOV AL,byte ptr [ESI]               ; 004d8873 | DAT_005e34bd | DAT_005e34bf
        ;   Label: LAB_004d8873
    MOV byte ptr [EDI],AL               ; 004d8875
    CMP AL,0x0                          ; 004d8877
    JZ 0x004d888b                       ; 004d8879
        ;   XREF to: 004d888b (CONDITIONAL_JUMP)  ; LAB_004d888b
    MOV AL,byte ptr [ESI + 0x1]         ; 004d887b | DAT_005e34be | = "%2d:%2d:%2d.%2d\n\n"
    ADD ESI,0x2                         ; 004d887e
    MOV byte ptr [EDI + 0x1],AL         ; 004d8881
    ADD EDI,0x2                         ; 004d8884
    CMP AL,0x0                          ; 004d8887
    JNZ 0x004d8873                      ; 004d8889
        ;   XREF to: 004d8873 (CONDITIONAL_JUMP)  ; LAB_004d8873
    POP EDI                             ; 004d888b
        ;   Label: LAB_004d888b
    MOV ECX,dword ptr [ESP + 0x524]     ; 004d888c
    PUSH ECX                            ; 004d8893
    MOV EBX,dword ptr [ESP + 0x524]     ; 004d8894
    PUSH EBX                            ; 004d889b
    MOV ESI,dword ptr [ESP + 0x524]     ; 004d889c
    PUSH ESI                            ; 004d88a3
    MOV EDI,dword ptr [ESP + 0x534]     ; 004d88a4
    PUSH EDI                            ; 004d88ab
    PUSH 0x5e34c0                       ; 004d88ac | = "%2d:%2d:%2d.%2d\n\n"
    LEA EAX,[ESP + 0x414]               ; 004d88b1
    PUSH EAX                            ; 004d88b8
    XOR ESI,ESI                         ; 004d88b9
    CALL crt_unknown.c_FUN_005bfb40     ; 004d88bb
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    MOV DL,0x30                         ; 004d88c0
    ADD ESP,0x18                        ; 004d88c2
    LEA EDI,[ESP + 0x400]               ; 004d88c5
        ;   Label: LAB_004d88c5
    SUB ECX,ECX                         ; 004d88cc
    DEC ECX                             ; 004d88ce
    XOR EAX,EAX                         ; 004d88cf
    SCASB.REPNE ES:EDI                  ; 004d88d1
    NOT ECX                             ; 004d88d3
    DEC ECX                             ; 004d88d5
    CMP ESI,ECX                         ; 004d88d6
    JNC 0x004d88f0                      ; 004d88d8
        ;   XREF to: 004d88f0 (CONDITIONAL_JUMP)  ; LAB_004d88f0
    CMP byte ptr [ESP + ESI*0x1 + 0x400],0x20 ; 004d88da
    JZ 0x004d88e7                       ; 004d88e2
        ;   XREF to: 004d88e7 (CONDITIONAL_JUMP)  ; LAB_004d88e7
    INC ESI                             ; 004d88e4
        ;   Label: LAB_004d88e4
    JMP 0x004d88c5                      ; 004d88e5
        ;   XREF to: 004d88c5 (UNCONDITIONAL_JUMP)  ; LAB_004d88c5
    MOV byte ptr [ESP + ESI*0x1 + 0x400],DL ; 004d88e7
        ;   Label: LAB_004d88e7
    JMP 0x004d88e4                      ; 004d88ee
        ;   XREF to: 004d88e4 (UNCONDITIONAL_JUMP)  ; LAB_004d88e4
    LEA ESI,[ESP + 0x400]               ; 004d88f0
        ;   Label: LAB_004d88f0
    MOV EDI,ESP                         ; 004d88f7
    PUSH EDI                            ; 004d88f9
    SUB ECX,ECX                         ; 004d88fa
    DEC ECX                             ; 004d88fc
    MOV AL,0x0                          ; 004d88fd
    SCASB.REPNE ES:EDI                  ; 004d88ff
    DEC EDI                             ; 004d8901
    MOV AL,byte ptr [ESI]               ; 004d8902
        ;   Label: LAB_004d8902
    MOV byte ptr [EDI],AL               ; 004d8904
    CMP AL,0x0                          ; 004d8906
    JZ 0x004d891a                       ; 004d8908
        ;   XREF to: 004d891a (CONDITIONAL_JUMP)  ; LAB_004d891a
    MOV AL,byte ptr [ESI + 0x1]         ; 004d890a
    ADD ESI,0x2                         ; 004d890d
    MOV byte ptr [EDI + 0x1],AL         ; 004d8910
    ADD EDI,0x2                         ; 004d8913
    CMP AL,0x0                          ; 004d8916
    JNZ 0x004d8902                      ; 004d8918
        ;   XREF to: 004d8902 (CONDITIONAL_JUMP)  ; LAB_004d8902
    POP EDI                             ; 004d891a
        ;   Label: LAB_004d891a
    PUSH 0x5e34d2                       ; 004d891b | = "Body count"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d8920
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d8925
    MOV EDI,ESP                         ; 004d8928
    MOV ESI,EAX                         ; 004d892a
    PUSH EDI                            ; 004d892c
    SUB ECX,ECX                         ; 004d892d
    DEC ECX                             ; 004d892f
    MOV AL,0x0                          ; 004d8930
    SCASB.REPNE ES:EDI                  ; 004d8932
    DEC EDI                             ; 004d8934
    MOV AL,byte ptr [ESI]               ; 004d8935
        ;   Label: LAB_004d8935
    MOV byte ptr [EDI],AL               ; 004d8937
    CMP AL,0x0                          ; 004d8939
    JZ 0x004d894d                       ; 004d893b
        ;   XREF to: 004d894d (CONDITIONAL_JUMP)  ; LAB_004d894d
    MOV AL,byte ptr [ESI + 0x1]         ; 004d893d
    ADD ESI,0x2                         ; 004d8940
    MOV byte ptr [EDI + 0x1],AL         ; 004d8943
    ADD EDI,0x2                         ; 004d8946
    CMP AL,0x0                          ; 004d8949
    JNZ 0x004d8935                      ; 004d894b
        ;   XREF to: 004d8935 (CONDITIONAL_JUMP)  ; LAB_004d8935
    POP EDI                             ; 004d894d
        ;   Label: LAB_004d894d
    MOV ESI,0x5e34dd                    ; 004d894e | = "\n\n"
    MOV EDI,ESP                         ; 004d8953
    PUSH EDI                            ; 004d8955
    SUB ECX,ECX                         ; 004d8956
    DEC ECX                             ; 004d8958
    MOV AL,0x0                          ; 004d8959
    SCASB.REPNE ES:EDI                  ; 004d895b
    DEC EDI                             ; 004d895d
    MOV AL,byte ptr [ESI]               ; 004d895e | = "\n\n" | s_anon_005e34dd+2
        ;   Label: LAB_004d895e
    MOV byte ptr [EDI],AL               ; 004d8960
    CMP AL,0x0                          ; 004d8962
    JZ 0x004d8976                       ; 004d8964
        ;   XREF to: 004d8976 (CONDITIONAL_JUMP)  ; LAB_004d8976
    MOV AL,byte ptr [ESI + 0x1]         ; 004d8966 | s_anon_005e34dd+1 | DAT_005e34e0
    ADD ESI,0x2                         ; 004d8969
    MOV byte ptr [EDI + 0x1],AL         ; 004d896c
    ADD EDI,0x2                         ; 004d896f
    CMP AL,0x0                          ; 004d8972
    JNZ 0x004d895e                      ; 004d8974
        ;   XREF to: 004d895e (CONDITIONAL_JUMP)  ; LAB_004d895e
    POP EDI                             ; 004d8976
        ;   Label: LAB_004d8976
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004d8977
    MOV EBP,dword ptr [EAX + 0x26c]     ; 004d897e
    PUSH EBP                            ; 004d8984
    PUSH 0x5e34e0                       ; 004d8985 | DAT_005e34e0
    LEA EAX,[ESP + 0x408]               ; 004d898a
    PUSH EAX                            ; 004d8991
    CALL crt_unknown.c_FUN_005bfb40     ; 004d8992
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 004d8997
    LEA ESI,[ESP + 0x400]               ; 004d899a
    MOV EDI,ESP                         ; 004d89a1
    PUSH EDI                            ; 004d89a3
    SUB ECX,ECX                         ; 004d89a4
    DEC ECX                             ; 004d89a6
    MOV AL,0x0                          ; 004d89a7
    SCASB.REPNE ES:EDI                  ; 004d89a9
    DEC EDI                             ; 004d89ab
    MOV AL,byte ptr [ESI]               ; 004d89ac
        ;   Label: LAB_004d89ac
    MOV byte ptr [EDI],AL               ; 004d89ae
    CMP AL,0x0                          ; 004d89b0
    JZ 0x004d89c4                       ; 004d89b2
        ;   XREF to: 004d89c4 (CONDITIONAL_JUMP)  ; LAB_004d89c4
    MOV AL,byte ptr [ESI + 0x1]         ; 004d89b4
    ADD ESI,0x2                         ; 004d89b7
    MOV byte ptr [EDI + 0x1],AL         ; 004d89ba
    ADD EDI,0x2                         ; 004d89bd
    CMP AL,0x0                          ; 004d89c0
    JNZ 0x004d89ac                      ; 004d89c2
        ;   XREF to: 004d89ac (CONDITIONAL_JUMP)  ; LAB_004d89ac
    POP EDI                             ; 004d89c4
        ;   Label: LAB_004d89c4
    PUSH 0xffff                         ; 004d89c5
    MOV EBP,dword ptr [0x0152d244]      ; 004d89ca | DAT_0152d244
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 004d89d0
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 004d89d5
    PUSH 0xc0                           ; 004d89d8
    PUSH 0x100                          ; 004d89dd
    PUSH 0x14                           ; 004d89e2
    PUSH 0x1cc9bb0                      ; 004d89e4
    LEA EAX,[ESP + 0x10]                ; 004d89e9
    PUSH EAX                            ; 004d89ed
    PUSH EBP                            ; 004d89ee
    CALL engine_font.cpp_FUN_004c4260   ; 004d89ef
        ;   XREF to: 004c4260 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c4260()
    ADD ESP,0x18                        ; 004d89f4
    PUSH 0x58                           ; 004d89f7
    XOR EBX,EBX                         ; 004d89f9
    PUSH EBP                            ; 004d89fb
    MOV EDI,EAX                         ; 004d89fc
    MOV dword ptr [ESP + 0x538],EAX     ; 004d89fe
    CALL engine_font.cpp_FUN_004c4510   ; 004d8a05
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d8a0a
    MOV ESI,0xf0                        ; 004d8a0d
    MOV dword ptr [ESP + 0x52c],EAX     ; 004d8a12
    TEST EDI,EDI                        ; 004d8a19
    JLE 0x004d8a60                      ; 004d8a1b
        ;   XREF to: 004d8a60 (CONDITIONAL_JUMP)  ; LAB_004d8a60
    MOV EDI,0x1cc9bb0                   ; 004d8a1d
    PUSH EDI                            ; 004d8a22
        ;   Label: LAB_004d8a22
    PUSH 0x0                            ; 004d8a23
    PUSH 0xf8                           ; 004d8a25
    PUSH ESI                            ; 004d8a2a
    PUSH 0x27f                          ; 004d8a2b
    PUSH 0x1c0                          ; 004d8a30
    PUSH EBP                            ; 004d8a35
    INC EBX                             ; 004d8a36
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350 ; 004d8a37
        ;   XREF to: 004c2350 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004d8a3c
    ADD EDI,0x100                       ; 004d8a3f
    MOV EAX,dword ptr [ESP + 0x52c]     ; 004d8a45
    MOV EDX,dword ptr [ESP + 0x530]     ; 004d8a4c
    ADD ESI,EAX                         ; 004d8a53
    CMP EBX,EDX                         ; 004d8a55
    JL 0x004d8a22                       ; 004d8a57
        ;   XREF to: 004d8a22 (CONDITIONAL_JUMP)  ; LAB_004d8a22
    LEA EAX,[EAX]                       ; 004d8a59
    NOP                                 ; 004d8a5f
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004d8a60
        ;   Label: LAB_004d8a60
    PUSH 0x0                            ; 004d8a67
    MOV dword ptr [EAX + 0x270],0x0     ; 004d8a69
    LEA EAX,[ESP + 0x504]               ; 004d8a73
    PUSH EAX                            ; 004d8a7a
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0 ; 004d8a7b
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d8a80
    ADD ESP,0x538                       ; 004d8a83
    POP EBP                             ; 004d8a89
    POP EDI                             ; 004d8a8a
    POP ESI                             ; 004d8a8b
    POP EBX                             ; 004d8a8c
    RET                                 ; 004d8a8d

