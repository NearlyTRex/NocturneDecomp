; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_displayActStats_FUN_004e3800(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; char[1024]       Stack[-0x548]:1024  local_548
; char[256]        Stack[-0x148]:256  local_148
; CAlphaBitmap     Stack[-0x48]:20  local_48
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_run_FUN_00524420 at 005245fd
;
; Referenced Globals:
;   TerminatedCString s_stats_0062d4ed
;   TerminatedCString s_Level_time_0062d4f3
;   TerminatedCString s_anon_0062d4fe
;   undefined4 s_anon_0062d4fe+1
;   undefined4 s_anon_0062d4fe+2
;   TerminatedCString s_s_2d_2d_2d_2d_0062d501
;   TerminatedCString s_Body_count_0062d513
;   TerminatedCString s_anon_0062d51e
;   undefined4 s_anon_0062d51e+1
;   undefined4 s_anon_0062d51e+2
;   TerminatedCString s_d_0062d521
;   double DOUBLE_0062d52d = 0.000277777777777778
;   double DOUBLE_0062d535 = 3600
;   double DOUBLE_0062d53d = 0.0166666666666667
;   double DOUBLE_0062d545 = 60
;   ... and 4 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0
;   engine_font.cpp_CBitFont_wrapText_FUN_004d0010
;   engine_special.cpp_clearScreen_FUN_005b3e70
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3800
        ;   Label: core_game.cpp_CGame_displayActStats_FUN_004e3800
    PUSH ESI                            ; 004e3801
    PUSH EDI                            ; 004e3802
    PUSH EBP                            ; 004e3803
    SUB ESP,0x538                       ; 004e3804
    LEA EAX,[ESP + 0x500]               ; 004e380a
    PUSH EAX                            ; 004e3811
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004e3812
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004e3817
    PUSH 0x1e0                          ; 004e381a
    PUSH 0x280                          ; 004e381f
    PUSH 0x62d4ed                       ; 004e3824 | = "stats"
    LEA EAX,[ESP + 0x50c]               ; 004e3829
    PUSH EAX                            ; 004e3830
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004e3831
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004e3836
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 004e3839
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
    PUSH 0xffff                         ; 004e383e
    PUSH 0x0                            ; 004e3843
    PUSH 0x0                            ; 004e3845
    LEA EAX,[ESP + 0x50c]               ; 004e3847
    PUSH EAX                            ; 004e384e
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 004e384f
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004e3854
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004e3857
    FLD float ptr [EAX + 0x250]         ; 004e385e
    FADD float ptr [EAX + 0x248]        ; 004e3864
    MOV ECX,dword ptr [ESP + 0x54c]     ; 004e386a
    FSTP float ptr [EAX + 0x248]        ; 004e3871
    FLD float ptr [ECX + 0x250]         ; 004e3877
    MOV EAX,dword ptr [EAX + 0x24c]     ; 004e387d
    MOV EDX,dword ptr [ECX + 0x254]     ; 004e3883
    FLD ST0                             ; 004e3889
    FMUL double ptr [0x0062d52d]        ; 004e388b | DOUBLE_0062d52d
    ADD EDX,EAX                         ; 004e3891
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e3893
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x528]       ; 004e3898
    MOV EAX,dword ptr [ESP + 0x528]     ; 004e389f
    MOV dword ptr [ESP + 0x534],EAX     ; 004e38a6
    FILD dword ptr [ESP + 0x534]        ; 004e38ad
    FMUL double ptr [0x0062d535]        ; 004e38b4 | DOUBLE_0062d535
    FSUBP                               ; 004e38ba
    FLD ST0                             ; 004e38bc
    FMUL double ptr [0x0062d53d]        ; 004e38be | DOUBLE_0062d53d
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e38c4
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x51c]       ; 004e38c9
    MOV EAX,dword ptr [ESP + 0x51c]     ; 004e38d0
    MOV dword ptr [ESP + 0x534],EAX     ; 004e38d7
    FILD dword ptr [ESP + 0x534]        ; 004e38de
    FMUL double ptr [0x0062d545]        ; 004e38e5 | DOUBLE_0062d545
    FSUBP                               ; 004e38eb
    FST float ptr [ECX + 0x250]         ; 004e38ed
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e38f3
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x520]       ; 004e38f8
    MOV EAX,dword ptr [ESP + 0x520]     ; 004e38ff
    MOV dword ptr [ESP + 0x534],EAX     ; 004e3906
    FILD dword ptr [ESP + 0x534]        ; 004e390d
    FSUBR float ptr [ECX + 0x250]       ; 004e3914
    FST float ptr [ECX + 0x250]         ; 004e391a
    FMUL double ptr [0x0062d54d]        ; 004e3920 | DOUBLE_0062d54d
    PUSH 0x62d4f3                       ; 004e3926 | = "Level time"
    MOV dword ptr [ECX + 0x254],EDX     ; 004e392b
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e3931
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x528]       ; 004e3936
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e393d
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004e3942
    MOV EDI,ESP                         ; 004e3945
    MOV ESI,EAX                         ; 004e3947
    PUSH EDI                            ; 004e3949
    MOV AL,byte ptr [ESI]               ; 004e394a
        ;   Label: LAB_004e394a
    MOV byte ptr [EDI],AL               ; 004e394c
    CMP AL,0x0                          ; 004e394e
    JZ 0x004e3962                       ; 004e3950
        ;   XREF to: 004e3962 (CONDITIONAL_JUMP)  ; LAB_004e3962
    MOV AL,byte ptr [ESI + 0x1]         ; 004e3952
    ADD ESI,0x2                         ; 004e3955
    MOV byte ptr [EDI + 0x1],AL         ; 004e3958
    ADD EDI,0x2                         ; 004e395b
    CMP AL,0x0                          ; 004e395e
    JNZ 0x004e394a                      ; 004e3960
        ;   XREF to: 004e394a (CONDITIONAL_JUMP)  ; LAB_004e394a
    POP EDI                             ; 004e3962
        ;   Label: LAB_004e3962
    MOV ESI,0x62d4fe                    ; 004e3963 | = "\n\n"
    MOV EDI,ESP                         ; 004e3968
    PUSH EDI                            ; 004e396a
    SUB ECX,ECX                         ; 004e396b
    DEC ECX                             ; 004e396d
    MOV AL,0x0                          ; 004e396e
    SCASB.REPNE ES:EDI                  ; 004e3970
    DEC EDI                             ; 004e3972
    MOV AL,byte ptr [ESI]               ; 004e3973 | = "\n\n" | s_anon_0062d4fe+2
        ;   Label: LAB_004e3973
    MOV byte ptr [EDI],AL               ; 004e3975
    CMP AL,0x0                          ; 004e3977
    JZ 0x004e398b                       ; 004e3979
        ;   XREF to: 004e398b (CONDITIONAL_JUMP)  ; LAB_004e398b
    MOV AL,byte ptr [ESI + 0x1]         ; 004e397b | s_anon_0062d4fe+1 | = "%2d:%2d:%2d.%2d\n\n"
    ADD ESI,0x2                         ; 004e397e
    MOV byte ptr [EDI + 0x1],AL         ; 004e3981
    ADD EDI,0x2                         ; 004e3984
    CMP AL,0x0                          ; 004e3987
    JNZ 0x004e3973                      ; 004e3989
        ;   XREF to: 004e3973 (CONDITIONAL_JUMP)  ; LAB_004e3973
    POP EDI                             ; 004e398b
        ;   Label: LAB_004e398b
    MOV ECX,dword ptr [ESP + 0x524]     ; 004e398c
    PUSH ECX                            ; 004e3993
    MOV EBX,dword ptr [ESP + 0x524]     ; 004e3994
    PUSH EBX                            ; 004e399b
    MOV ESI,dword ptr [ESP + 0x524]     ; 004e399c
    PUSH ESI                            ; 004e39a3
    MOV EDI,dword ptr [ESP + 0x534]     ; 004e39a4
    PUSH EDI                            ; 004e39ab
    PUSH 0x62d501                       ; 004e39ac | = "%2d:%2d:%2d.%2d\n\n"
    LEA EAX,[ESP + 0x414]               ; 004e39b1
    PUSH EAX                            ; 004e39b8
    XOR ESI,ESI                         ; 004e39b9
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004e39bb
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV DL,0x30                         ; 004e39c0
    ADD ESP,0x18                        ; 004e39c2
    LEA EDI,[ESP + 0x400]               ; 004e39c5
        ;   Label: LAB_004e39c5
    SUB ECX,ECX                         ; 004e39cc
    DEC ECX                             ; 004e39ce
    XOR EAX,EAX                         ; 004e39cf
    SCASB.REPNE ES:EDI                  ; 004e39d1
    NOT ECX                             ; 004e39d3
    DEC ECX                             ; 004e39d5
    CMP ESI,ECX                         ; 004e39d6
    JNC 0x004e39f0                      ; 004e39d8
        ;   XREF to: 004e39f0 (CONDITIONAL_JUMP)  ; LAB_004e39f0
    CMP byte ptr [ESP + ESI*0x1 + 0x400],0x20 ; 004e39da
    JZ 0x004e39e7                       ; 004e39e2
        ;   XREF to: 004e39e7 (CONDITIONAL_JUMP)  ; LAB_004e39e7
    INC ESI                             ; 004e39e4
        ;   Label: LAB_004e39e4
    JMP 0x004e39c5                      ; 004e39e5
        ;   XREF to: 004e39c5 (UNCONDITIONAL_JUMP)  ; LAB_004e39c5
    MOV byte ptr [ESP + ESI*0x1 + 0x400],DL ; 004e39e7
        ;   Label: LAB_004e39e7
    JMP 0x004e39e4                      ; 004e39ee
        ;   XREF to: 004e39e4 (UNCONDITIONAL_JUMP)  ; LAB_004e39e4
    LEA ESI,[ESP + 0x400]               ; 004e39f0
        ;   Label: LAB_004e39f0
    MOV EDI,ESP                         ; 004e39f7
    PUSH EDI                            ; 004e39f9
    SUB ECX,ECX                         ; 004e39fa
    DEC ECX                             ; 004e39fc
    MOV AL,0x0                          ; 004e39fd
    SCASB.REPNE ES:EDI                  ; 004e39ff
    DEC EDI                             ; 004e3a01
    MOV AL,byte ptr [ESI]               ; 004e3a02
        ;   Label: LAB_004e3a02
    MOV byte ptr [EDI],AL               ; 004e3a04
    CMP AL,0x0                          ; 004e3a06
    JZ 0x004e3a1a                       ; 004e3a08
        ;   XREF to: 004e3a1a (CONDITIONAL_JUMP)  ; LAB_004e3a1a
    MOV AL,byte ptr [ESI + 0x1]         ; 004e3a0a
    ADD ESI,0x2                         ; 004e3a0d
    MOV byte ptr [EDI + 0x1],AL         ; 004e3a10
    ADD EDI,0x2                         ; 004e3a13
    CMP AL,0x0                          ; 004e3a16
    JNZ 0x004e3a02                      ; 004e3a18
        ;   XREF to: 004e3a02 (CONDITIONAL_JUMP)  ; LAB_004e3a02
    POP EDI                             ; 004e3a1a
        ;   Label: LAB_004e3a1a
    PUSH 0x62d513                       ; 004e3a1b | = "Body count"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e3a20
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004e3a25
    MOV EDI,ESP                         ; 004e3a28
    MOV ESI,EAX                         ; 004e3a2a
    PUSH EDI                            ; 004e3a2c
    SUB ECX,ECX                         ; 004e3a2d
    DEC ECX                             ; 004e3a2f
    MOV AL,0x0                          ; 004e3a30
    SCASB.REPNE ES:EDI                  ; 004e3a32
    DEC EDI                             ; 004e3a34
    MOV AL,byte ptr [ESI]               ; 004e3a35
        ;   Label: LAB_004e3a35
    MOV byte ptr [EDI],AL               ; 004e3a37
    CMP AL,0x0                          ; 004e3a39
    JZ 0x004e3a4d                       ; 004e3a3b
        ;   XREF to: 004e3a4d (CONDITIONAL_JUMP)  ; LAB_004e3a4d
    MOV AL,byte ptr [ESI + 0x1]         ; 004e3a3d
    ADD ESI,0x2                         ; 004e3a40
    MOV byte ptr [EDI + 0x1],AL         ; 004e3a43
    ADD EDI,0x2                         ; 004e3a46
    CMP AL,0x0                          ; 004e3a49
    JNZ 0x004e3a35                      ; 004e3a4b
        ;   XREF to: 004e3a35 (CONDITIONAL_JUMP)  ; LAB_004e3a35
    POP EDI                             ; 004e3a4d
        ;   Label: LAB_004e3a4d
    MOV ESI,0x62d51e                    ; 004e3a4e | = "\n\n"
    MOV EDI,ESP                         ; 004e3a53
    PUSH EDI                            ; 004e3a55
    SUB ECX,ECX                         ; 004e3a56
    DEC ECX                             ; 004e3a58
    MOV AL,0x0                          ; 004e3a59
    SCASB.REPNE ES:EDI                  ; 004e3a5b
    DEC EDI                             ; 004e3a5d
    MOV AL,byte ptr [ESI]               ; 004e3a5e | = "\n\n" | s_anon_0062d51e+2
        ;   Label: LAB_004e3a5e
    MOV byte ptr [EDI],AL               ; 004e3a60
    CMP AL,0x0                          ; 004e3a62
    JZ 0x004e3a76                       ; 004e3a64
        ;   XREF to: 004e3a76 (CONDITIONAL_JUMP)  ; LAB_004e3a76
    MOV AL,byte ptr [ESI + 0x1]         ; 004e3a66 | s_anon_0062d51e+1 | = "%d\n\n"
    ADD ESI,0x2                         ; 004e3a69
    MOV byte ptr [EDI + 0x1],AL         ; 004e3a6c
    ADD EDI,0x2                         ; 004e3a6f
    CMP AL,0x0                          ; 004e3a72
    JNZ 0x004e3a5e                      ; 004e3a74
        ;   XREF to: 004e3a5e (CONDITIONAL_JUMP)  ; LAB_004e3a5e
    POP EDI                             ; 004e3a76
        ;   Label: LAB_004e3a76
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004e3a77
    MOV EBP,dword ptr [EAX + 0x24c]     ; 004e3a7e
    PUSH EBP                            ; 004e3a84
    PUSH 0x62d521                       ; 004e3a85 | = "%d\n\n"
    LEA EAX,[ESP + 0x408]               ; 004e3a8a
    PUSH EAX                            ; 004e3a91
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004e3a92
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004e3a97
    LEA ESI,[ESP + 0x400]               ; 004e3a9a
    MOV EDI,ESP                         ; 004e3aa1
    PUSH EDI                            ; 004e3aa3
    SUB ECX,ECX                         ; 004e3aa4
    DEC ECX                             ; 004e3aa6
    MOV AL,0x0                          ; 004e3aa7
    SCASB.REPNE ES:EDI                  ; 004e3aa9
    DEC EDI                             ; 004e3aab
    MOV AL,byte ptr [ESI]               ; 004e3aac
        ;   Label: LAB_004e3aac
    MOV byte ptr [EDI],AL               ; 004e3aae
    CMP AL,0x0                          ; 004e3ab0
    JZ 0x004e3ac4                       ; 004e3ab2
        ;   XREF to: 004e3ac4 (CONDITIONAL_JUMP)  ; LAB_004e3ac4
    MOV AL,byte ptr [ESI + 0x1]         ; 004e3ab4
    ADD ESI,0x2                         ; 004e3ab7
    MOV byte ptr [EDI + 0x1],AL         ; 004e3aba
    ADD EDI,0x2                         ; 004e3abd
    CMP AL,0x0                          ; 004e3ac0
    JNZ 0x004e3aac                      ; 004e3ac2
        ;   XREF to: 004e3aac (CONDITIONAL_JUMP)  ; LAB_004e3aac
    POP EDI                             ; 004e3ac4
        ;   Label: LAB_004e3ac4
    PUSH 0xffff                         ; 004e3ac5
    MOV EBP,dword ptr [0x020a5720]      ; 004e3aca | g_ThemeFont
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 004e3ad0
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 004e3ad5
    PUSH 0xc0                           ; 004e3ad8
    PUSH 0x100                          ; 004e3add
    PUSH 0x14                           ; 004e3ae2
    PUSH 0x2d7c2f0                      ; 004e3ae4 | g_ActStatsTextBuffer1
    LEA EAX,[ESP + 0x10]                ; 004e3ae9
    PUSH EAX                            ; 004e3aed
    PUSH EBP                            ; 004e3aee
    CALL engine_font.cpp_CBitFont_wrapText_FUN_004d0010 ; 004e3aef
        ;   XREF to: 004d0010 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_wrapText_FUN_004d0010(CBitFont * this_ptr, char * source_text, char * dest_buffer, int max_lines, ...)
    ADD ESP,0x18                        ; 004e3af4
    PUSH 0x58                           ; 004e3af7
    XOR EBX,EBX                         ; 004e3af9
    PUSH EBP                            ; 004e3afb
    MOV EDI,EAX                         ; 004e3afc
    MOV dword ptr [ESP + 0x538],EAX     ; 004e3afe
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0 ; 004e3b05
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004e3b0a
    MOV ESI,0xf0                        ; 004e3b0d
    MOV dword ptr [ESP + 0x52c],EAX     ; 004e3b12
    TEST EDI,EDI                        ; 004e3b19
    JLE 0x004e3b60                      ; 004e3b1b
        ;   XREF to: 004e3b60 (CONDITIONAL_JUMP)  ; LAB_004e3b60
    MOV EDI,0x2d7c2f0                   ; 004e3b1d | g_ActStatsTextBuffer1
    PUSH EDI                            ; 004e3b22 | g_ActStatsTextBuffer1 | g_ActStatsTextBuffer1+0x100
        ;   Label: LAB_004e3b22
    PUSH 0x0                            ; 004e3b23
    PUSH 0xf8                           ; 004e3b25
    PUSH ESI                            ; 004e3b2a
    PUSH 0x27f                          ; 004e3b2b
    PUSH 0x1c0                          ; 004e3b30
    PUSH EBP                            ; 004e3b35
    INC EBX                             ; 004e3b36
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0 ; 004e3b37
        ;   XREF to: 004cdee0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004e3b3c
    ADD EDI,0x100                       ; 004e3b3f
    MOV EAX,dword ptr [ESP + 0x52c]     ; 004e3b45
    MOV EDX,dword ptr [ESP + 0x530]     ; 004e3b4c
    ADD ESI,EAX                         ; 004e3b53
    CMP EBX,EDX                         ; 004e3b55
    JL 0x004e3b22                       ; 004e3b57
        ;   XREF to: 004e3b22 (CONDITIONAL_JUMP)  ; LAB_004e3b22
    LEA EAX,[EAX]                       ; 004e3b59
    NOP                                 ; 004e3b5f
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004e3b60
        ;   Label: LAB_004e3b60
    PUSH 0x0                            ; 004e3b67
    MOV dword ptr [EAX + 0x250],0x0     ; 004e3b69
    LEA EAX,[ESP + 0x504]               ; 004e3b73
    PUSH EAX                            ; 004e3b7a
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540 ; 004e3b7b
        ;   XREF to: 00410540 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e3b80
    ADD ESP,0x538                       ; 004e3b83
    POP EBP                             ; 004e3b89
    POP EDI                             ; 004e3b8a
    POP ESI                             ; 004e3b8b
    POP EBX                             ; 004e3b8c
    RET                                 ; 004e3b8d

