; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_displayActStats_FUN_004a6680(int param_1)
;
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
;   core_mission.cpp_CDemonMission_run_FUN_004d9440 at 004d961d
;
; Referenced Globals:
;   TerminatedCString s_stats_0058458a
;   TerminatedCString s_Level_time_00584590
;   TerminatedCString s_anon_0058459b
;   undefined4 s_anon_0058459b+1
;   undefined4 s_anon_0058459b+2
;   TerminatedCString s_s_2d_2d_2d_2d_0058459e
;   TerminatedCString s_Body_count_005845b0
;   TerminatedCString s_anon_005845bb
;   undefined4 s_anon_005845bb+1
;   undefined4 s_anon_005845bb+2
;   TerminatedCString s_d_005845be
;   double DOUBLE_005845ca = 0.000277777777777778
;   double DOUBLE_005845d2 = 3600
;   double DOUBLE_005845da = 0.0166666666666667
;   double DOUBLE_005845e2 = 60
;   ... and 2 more
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_wrapText_FUN_00492f30
;   engine_special.cpp_clearScreen_FUN_0052ee70
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6680
        ;   Label: core_game.cpp_CGame_displayActStats_FUN_004a6680
    PUSH ESI                            ; 004a6681
    PUSH EDI                            ; 004a6682
    PUSH EBP                            ; 004a6683
    SUB ESP,0x538                       ; 004a6684
    LEA EAX,[ESP + 0x500]               ; 004a668a
    PUSH EAX                            ; 004a6691
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320 ; 004a6692
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320()
    ADD ESP,0x4                         ; 004a6697
    PUSH 0x1e0                          ; 004a669a
    PUSH 0x280                          ; 004a669f
    PUSH 0x58458a                       ; 004a66a4 | = "stats"
    LEA EAX,[ESP + 0x50c]               ; 004a66a9
    PUSH EAX                            ; 004a66b0
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0 ; 004a66b1
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0()
    ADD ESP,0x10                        ; 004a66b6
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 004a66b9
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_clearScreen_FUN_0052ee70()
    PUSH 0xffff                         ; 004a66be
    PUSH 0x0                            ; 004a66c3
    PUSH 0x0                            ; 004a66c5
    LEA EAX,[ESP + 0x50c]               ; 004a66c7
    PUSH EAX                            ; 004a66ce
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710 ; 004a66cf
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710()
    ADD ESP,0x10                        ; 004a66d4
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004a66d7
    FLD float ptr [EAX + 0x250]         ; 004a66de
    FADD float ptr [EAX + 0x248]        ; 004a66e4
    MOV ECX,dword ptr [ESP + 0x54c]     ; 004a66ea
    FSTP float ptr [EAX + 0x248]        ; 004a66f1
    FLD float ptr [ECX + 0x250]         ; 004a66f7
    MOV EAX,dword ptr [EAX + 0x24c]     ; 004a66fd
    MOV EDX,dword ptr [ECX + 0x254]     ; 004a6703
    FLD ST0                             ; 004a6709
    FMUL double ptr [0x005845ca]        ; 004a670b | DOUBLE_005845ca
    ADD EDX,EAX                         ; 004a6711
    CALL crt_math.c_round_FUN_00563a30  ; 004a6713
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x528]       ; 004a6718
    MOV EAX,dword ptr [ESP + 0x528]     ; 004a671f
    MOV dword ptr [ESP + 0x534],EAX     ; 004a6726
    FILD dword ptr [ESP + 0x534]        ; 004a672d
    FMUL double ptr [0x005845d2]        ; 004a6734 | DOUBLE_005845d2
    FSUBP                               ; 004a673a
    FLD ST0                             ; 004a673c
    FMUL double ptr [0x005845da]        ; 004a673e | DOUBLE_005845da
    CALL crt_math.c_round_FUN_00563a30  ; 004a6744
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x51c]       ; 004a6749
    MOV EAX,dword ptr [ESP + 0x51c]     ; 004a6750
    MOV dword ptr [ESP + 0x534],EAX     ; 004a6757
    FILD dword ptr [ESP + 0x534]        ; 004a675e
    FMUL double ptr [0x005845e2]        ; 004a6765 | DOUBLE_005845e2
    FSUBP                               ; 004a676b
    FST float ptr [ECX + 0x250]         ; 004a676d
    CALL crt_math.c_round_FUN_00563a30  ; 004a6773
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x520]       ; 004a6778
    MOV EAX,dword ptr [ESP + 0x520]     ; 004a677f
    MOV dword ptr [ESP + 0x534],EAX     ; 004a6786
    FILD dword ptr [ESP + 0x534]        ; 004a678d
    FSUBR float ptr [ECX + 0x250]       ; 004a6794
    FST float ptr [ECX + 0x250]         ; 004a679a
    FMUL double ptr [0x005845ea]        ; 004a67a0 | DOUBLE_005845ea
    PUSH 0x584590                       ; 004a67a6 | = "Level time"
    MOV dword ptr [ECX + 0x254],EDX     ; 004a67ab
    CALL crt_math.c_round_FUN_00563a30  ; 004a67b1
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x528]       ; 004a67b6
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a67bd
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004a67c2
    MOV EDI,ESP                         ; 004a67c5
    MOV ESI,EAX                         ; 004a67c7
    PUSH EDI                            ; 004a67c9
    MOV AL,byte ptr [ESI]               ; 004a67ca
        ;   Label: LAB_004a67ca
    MOV byte ptr [EDI],AL               ; 004a67cc
    CMP AL,0x0                          ; 004a67ce
    JZ 0x004a67e2                       ; 004a67d0
        ;   XREF to: 004a67e2 (CONDITIONAL_JUMP)  ; LAB_004a67e2
    MOV AL,byte ptr [ESI + 0x1]         ; 004a67d2
    ADD ESI,0x2                         ; 004a67d5
    MOV byte ptr [EDI + 0x1],AL         ; 004a67d8
    ADD EDI,0x2                         ; 004a67db
    CMP AL,0x0                          ; 004a67de
    JNZ 0x004a67ca                      ; 004a67e0
        ;   XREF to: 004a67ca (CONDITIONAL_JUMP)  ; LAB_004a67ca
    POP EDI                             ; 004a67e2
        ;   Label: LAB_004a67e2
    MOV ESI,0x58459b                    ; 004a67e3 | = "\n\n"
    MOV EDI,ESP                         ; 004a67e8
    PUSH EDI                            ; 004a67ea
    SUB ECX,ECX                         ; 004a67eb
    DEC ECX                             ; 004a67ed
    MOV AL,0x0                          ; 004a67ee
    SCASB.REPNE ES:EDI                  ; 004a67f0
    DEC EDI                             ; 004a67f2
    MOV AL,byte ptr [ESI]               ; 004a67f3 | = "\n\n" | s_anon_0058459b+2
        ;   Label: LAB_004a67f3
    MOV byte ptr [EDI],AL               ; 004a67f5
    CMP AL,0x0                          ; 004a67f7
    JZ 0x004a680b                       ; 004a67f9
        ;   XREF to: 004a680b (CONDITIONAL_JUMP)  ; LAB_004a680b
    MOV AL,byte ptr [ESI + 0x1]         ; 004a67fb | s_anon_0058459b+1 | = "%2d:%2d:%2d.%2d\n\n"
    ADD ESI,0x2                         ; 004a67fe
    MOV byte ptr [EDI + 0x1],AL         ; 004a6801
    ADD EDI,0x2                         ; 004a6804
    CMP AL,0x0                          ; 004a6807
    JNZ 0x004a67f3                      ; 004a6809
        ;   XREF to: 004a67f3 (CONDITIONAL_JUMP)  ; LAB_004a67f3
    POP EDI                             ; 004a680b
        ;   Label: LAB_004a680b
    MOV ECX,dword ptr [ESP + 0x524]     ; 004a680c
    PUSH ECX                            ; 004a6813
    MOV EBX,dword ptr [ESP + 0x524]     ; 004a6814
    PUSH EBX                            ; 004a681b
    MOV ESI,dword ptr [ESP + 0x524]     ; 004a681c
    PUSH ESI                            ; 004a6823
    MOV EDI,dword ptr [ESP + 0x534]     ; 004a6824
    PUSH EDI                            ; 004a682b
    PUSH 0x58459e                       ; 004a682c | = "%2d:%2d:%2d.%2d\n\n"
    LEA EAX,[ESP + 0x414]               ; 004a6831
    PUSH EAX                            ; 004a6838
    XOR ESI,ESI                         ; 004a6839
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004a683b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV DL,0x30                         ; 004a6840
    ADD ESP,0x18                        ; 004a6842
    LEA EDI,[ESP + 0x400]               ; 004a6845
        ;   Label: LAB_004a6845
    SUB ECX,ECX                         ; 004a684c
    DEC ECX                             ; 004a684e
    XOR EAX,EAX                         ; 004a684f
    SCASB.REPNE ES:EDI                  ; 004a6851
    NOT ECX                             ; 004a6853
    DEC ECX                             ; 004a6855
    CMP ESI,ECX                         ; 004a6856
    JNC 0x004a6870                      ; 004a6858
        ;   XREF to: 004a6870 (CONDITIONAL_JUMP)  ; LAB_004a6870
    CMP byte ptr [ESP + ESI*0x1 + 0x400],0x20 ; 004a685a
    JZ 0x004a6867                       ; 004a6862
        ;   XREF to: 004a6867 (CONDITIONAL_JUMP)  ; LAB_004a6867
    INC ESI                             ; 004a6864
        ;   Label: LAB_004a6864
    JMP 0x004a6845                      ; 004a6865
        ;   XREF to: 004a6845 (UNCONDITIONAL_JUMP)  ; LAB_004a6845
    MOV byte ptr [ESP + ESI*0x1 + 0x400],DL ; 004a6867
        ;   Label: LAB_004a6867
    JMP 0x004a6864                      ; 004a686e
        ;   XREF to: 004a6864 (UNCONDITIONAL_JUMP)  ; LAB_004a6864
    LEA ESI,[ESP + 0x400]               ; 004a6870
        ;   Label: LAB_004a6870
    MOV EDI,ESP                         ; 004a6877
    PUSH EDI                            ; 004a6879
    SUB ECX,ECX                         ; 004a687a
    DEC ECX                             ; 004a687c
    MOV AL,0x0                          ; 004a687d
    SCASB.REPNE ES:EDI                  ; 004a687f
    DEC EDI                             ; 004a6881
    MOV AL,byte ptr [ESI]               ; 004a6882
        ;   Label: LAB_004a6882
    MOV byte ptr [EDI],AL               ; 004a6884
    CMP AL,0x0                          ; 004a6886
    JZ 0x004a689a                       ; 004a6888
        ;   XREF to: 004a689a (CONDITIONAL_JUMP)  ; LAB_004a689a
    MOV AL,byte ptr [ESI + 0x1]         ; 004a688a
    ADD ESI,0x2                         ; 004a688d
    MOV byte ptr [EDI + 0x1],AL         ; 004a6890
    ADD EDI,0x2                         ; 004a6893
    CMP AL,0x0                          ; 004a6896
    JNZ 0x004a6882                      ; 004a6898
        ;   XREF to: 004a6882 (CONDITIONAL_JUMP)  ; LAB_004a6882
    POP EDI                             ; 004a689a
        ;   Label: LAB_004a689a
    PUSH 0x5845b0                       ; 004a689b | = "Body count"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a68a0
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004a68a5
    MOV EDI,ESP                         ; 004a68a8
    MOV ESI,EAX                         ; 004a68aa
    PUSH EDI                            ; 004a68ac
    SUB ECX,ECX                         ; 004a68ad
    DEC ECX                             ; 004a68af
    MOV AL,0x0                          ; 004a68b0
    SCASB.REPNE ES:EDI                  ; 004a68b2
    DEC EDI                             ; 004a68b4
    MOV AL,byte ptr [ESI]               ; 004a68b5
        ;   Label: LAB_004a68b5
    MOV byte ptr [EDI],AL               ; 004a68b7
    CMP AL,0x0                          ; 004a68b9
    JZ 0x004a68cd                       ; 004a68bb
        ;   XREF to: 004a68cd (CONDITIONAL_JUMP)  ; LAB_004a68cd
    MOV AL,byte ptr [ESI + 0x1]         ; 004a68bd
    ADD ESI,0x2                         ; 004a68c0
    MOV byte ptr [EDI + 0x1],AL         ; 004a68c3
    ADD EDI,0x2                         ; 004a68c6
    CMP AL,0x0                          ; 004a68c9
    JNZ 0x004a68b5                      ; 004a68cb
        ;   XREF to: 004a68b5 (CONDITIONAL_JUMP)  ; LAB_004a68b5
    POP EDI                             ; 004a68cd
        ;   Label: LAB_004a68cd
    MOV ESI,0x5845bb                    ; 004a68ce | = "\n\n"
    MOV EDI,ESP                         ; 004a68d3
    PUSH EDI                            ; 004a68d5
    SUB ECX,ECX                         ; 004a68d6
    DEC ECX                             ; 004a68d8
    MOV AL,0x0                          ; 004a68d9
    SCASB.REPNE ES:EDI                  ; 004a68db
    DEC EDI                             ; 004a68dd
    MOV AL,byte ptr [ESI]               ; 004a68de | = "\n\n" | s_anon_005845bb+2
        ;   Label: LAB_004a68de
    MOV byte ptr [EDI],AL               ; 004a68e0
    CMP AL,0x0                          ; 004a68e2
    JZ 0x004a68f6                       ; 004a68e4
        ;   XREF to: 004a68f6 (CONDITIONAL_JUMP)  ; LAB_004a68f6
    MOV AL,byte ptr [ESI + 0x1]         ; 004a68e6 | s_anon_005845bb+1 | = "%d\n\n"
    ADD ESI,0x2                         ; 004a68e9
    MOV byte ptr [EDI + 0x1],AL         ; 004a68ec
    ADD EDI,0x2                         ; 004a68ef
    CMP AL,0x0                          ; 004a68f2
    JNZ 0x004a68de                      ; 004a68f4
        ;   XREF to: 004a68de (CONDITIONAL_JUMP)  ; LAB_004a68de
    POP EDI                             ; 004a68f6
        ;   Label: LAB_004a68f6
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004a68f7
    MOV EBP,dword ptr [EAX + 0x24c]     ; 004a68fe
    PUSH EBP                            ; 004a6904
    PUSH 0x5845be                       ; 004a6905 | = "%d\n\n"
    LEA EAX,[ESP + 0x408]               ; 004a690a
    PUSH EAX                            ; 004a6911
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004a6912
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004a6917
    LEA ESI,[ESP + 0x400]               ; 004a691a
    MOV EDI,ESP                         ; 004a6921
    PUSH EDI                            ; 004a6923
    SUB ECX,ECX                         ; 004a6924
    DEC ECX                             ; 004a6926
    MOV AL,0x0                          ; 004a6927
    SCASB.REPNE ES:EDI                  ; 004a6929
    DEC EDI                             ; 004a692b
    MOV AL,byte ptr [ESI]               ; 004a692c
        ;   Label: LAB_004a692c
    MOV byte ptr [EDI],AL               ; 004a692e
    CMP AL,0x0                          ; 004a6930
    JZ 0x004a6944                       ; 004a6932
        ;   XREF to: 004a6944 (CONDITIONAL_JUMP)  ; LAB_004a6944
    MOV AL,byte ptr [ESI + 0x1]         ; 004a6934
    ADD ESI,0x2                         ; 004a6937
    MOV byte ptr [EDI + 0x1],AL         ; 004a693a
    ADD EDI,0x2                         ; 004a693d
    CMP AL,0x0                          ; 004a6940
    JNZ 0x004a692c                      ; 004a6942
        ;   XREF to: 004a692c (CONDITIONAL_JUMP)  ; LAB_004a692c
    POP EDI                             ; 004a6944
        ;   Label: LAB_004a6944
    PUSH 0xffff                         ; 004a6945
    MOV EBP,dword ptr [0x014b9900]      ; 004a694a | DAT_014b9900
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 004a6950
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setRenderAlpha_FUN_00408370()
    ADD ESP,0x4                         ; 004a6955
    PUSH 0xc0                           ; 004a6958
    PUSH 0x100                          ; 004a695d
    PUSH 0x14                           ; 004a6962
    PUSH 0x1c71e40                      ; 004a6964
    LEA EAX,[ESP + 0x10]                ; 004a6969
    PUSH EAX                            ; 004a696d
    PUSH EBP                            ; 004a696e
    CALL engine_font.cpp_CBitFont_wrapText_FUN_00492f30 ; 004a696f
        ;   XREF to: 00492f30 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_wrapText_FUN_00492f30()
    ADD ESP,0x18                        ; 004a6974
    PUSH 0x58                           ; 004a6977
    XOR EBX,EBX                         ; 004a6979
    PUSH EBP                            ; 004a697b
    MOV EDI,EAX                         ; 004a697c
    MOV dword ptr [ESP + 0x538],EAX     ; 004a697e
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004a6985
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    ADD ESP,0x8                         ; 004a698a
    MOV ESI,0xf0                        ; 004a698d
    MOV dword ptr [ESP + 0x52c],EAX     ; 004a6992
    TEST EDI,EDI                        ; 004a6999
    JLE 0x004a69e0                      ; 004a699b
        ;   XREF to: 004a69e0 (CONDITIONAL_JUMP)  ; LAB_004a69e0
    MOV EDI,0x1c71e40                   ; 004a699d
    PUSH EDI                            ; 004a69a2
        ;   Label: LAB_004a69a2
    PUSH 0x0                            ; 004a69a3
    PUSH 0xf8                           ; 004a69a5
    PUSH ESI                            ; 004a69aa
    PUSH 0x27f                          ; 004a69ab
    PUSH 0x1c0                          ; 004a69b0
    PUSH EBP                            ; 004a69b5
    INC EBX                             ; 004a69b6
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0 ; 004a69b7
        ;   XREF to: 00490de0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0()
    ADD ESP,0x1c                        ; 004a69bc
    ADD EDI,0x100                       ; 004a69bf
    MOV EAX,dword ptr [ESP + 0x52c]     ; 004a69c5
    MOV EDX,dword ptr [ESP + 0x530]     ; 004a69cc
    ADD ESI,EAX                         ; 004a69d3
    CMP EBX,EDX                         ; 004a69d5
    JL 0x004a69a2                       ; 004a69d7
        ;   XREF to: 004a69a2 (CONDITIONAL_JUMP)  ; LAB_004a69a2
    LEA EAX,[EAX]                       ; 004a69d9
    NOP                                 ; 004a69df
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004a69e0
        ;   Label: LAB_004a69e0
    PUSH 0x0                            ; 004a69e7
    MOV dword ptr [EAX + 0x250],0x0     ; 004a69e9
    LEA EAX,[ESP + 0x504]               ; 004a69f3
    PUSH EAX                            ; 004a69fa
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340 ; 004a69fb
        ;   XREF to: 0040e340 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340()
    ADD ESP,0x8                         ; 004a6a00
    ADD ESP,0x538                       ; 004a6a03
    POP EBP                             ; 004a6a09
    POP EDI                             ; 004a6a0a
    POP ESI                             ; 004a6a0b
    POP EBX                             ; 004a6a0c
    RET                                 ; 004a6a0d

