; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_rollCredits_FUN_004be430(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1158]:4  local_1158
; undefined        Stack[-0x154]:1  local_154
; undefined1       Stack[-0x153]:1  local_153
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_game.cpp_FUN_004bdfb0 at 004be07a
;   core_menu.cpp_FUN_004ee1a0 at 004ee39a
;
; Referenced Globals:
;   TerminatedCString s_title_bw_005d8a3b
;   undefined4 DAT_005d8a44
;   TerminatedCString s_credits_txt_005d8a47
;   undefined4 DAT_005d8a53
;   undefined4 DAT_005d8a58
;   TerminatedCString s_core_game_cpp_005d8a5d
;   TerminatedCString s_CGame_rollCredits_Out_of_005d8a6e
;   TerminatedCString s_XBLAIRMENU_WAV_005d8a91
;   undefined4 DAT_005d8aa3
;   undefined4 DAT_005d8aab
;   undefined4 DAT_005d8ab3
;   undefined4 DAT_005d8abb
;   undefined4 DAT_005d8ac3
;   undefined4 DAT_00617dd4
;   undefined4 DAT_01511cc0
;   ... and 4 more
;
; Called Functions:
;   core_game.cpp_FUN_004b3000
;   core_game.cpp_FUN_004b3010
;   core_main.c_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fgets_FUN_005b9600
;   crt_string.c__strcmp_FUN_005b8c30
;   crt_unknown.c_FUN_005b8580
;   crt_unknown.c_FUN_005b86a0
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
;   ... and 14 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be430
        ;   Label: core_game.cpp_CGame_rollCredits_FUN_004be430
    PUSH ESI                            ; 004be431
    PUSH EDI                            ; 004be432
    PUSH EBP                            ; 004be433
    MOV EBP,ESP                         ; 004be434
    SUB ESP,0x1144                      ; 004be436
    AND ESP,0xfffffff8                  ; 004be43c
    XOR EDX,EDX                         ; 004be43f
    MOV ECX,0x43f00000                  ; 004be441
    MOV dword ptr [ESP + 0x1118],EDX    ; 004be446
    MOV dword ptr [ESP + 0x1130],ECX    ; 004be44d
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004be454
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    XOR EAX,EAX                         ; 004be459
    ADD EAX,0x4                         ; 004be45b
        ;   Label: LAB_004be45b
    XOR EBX,EBX                         ; 004be45e
    MOV dword ptr [ESP + EAX*0x1],EBX   ; 004be460
    CMP EAX,0x1000                      ; 004be463
    JNZ 0x004be45b                      ; 004be468
        ;   XREF to: 004be45b (CONDITIONAL_JUMP)  ; LAB_004be45b
    LEA EAX,[ESP + 0x1104]              ; 004be46a
    PUSH EAX                            ; 004be471
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 004be472
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be477
    PUSH 0x1e0                          ; 004be47a
    PUSH 0x280                          ; 004be47f
    PUSH 0x5d8a3b                       ; 004be484 | = "title_bw"
    LEA EAX,[ESP + 0x1110]              ; 004be489
    PUSH EAX                            ; 004be490
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004be491
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004be496
    PUSH 0x5d8a44                       ; 004be499 | DAT_005d8a44
    PUSH 0x5d8a47                       ; 004be49e | = "credits.txt"
    PUSH 0x5d8a53                       ; 004be4a3 | DAT_005d8a53
    CALL engine_dosio.cpp_FUN_00460c70  ; 004be4a8
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004be4ad
    MOV dword ptr [ESP + 0x1128],EAX    ; 004be4b0
    TEST EAX,EAX                        ; 004be4b7
    JZ 0x004be789                       ; 004be4b9
        ;   XREF to: 004be789 (CONDITIONAL_JUMP)  ; LAB_004be789
    MOV EBX,dword ptr [ESP + 0x1118]    ; 004be4bf
    SHL EBX,0x2                         ; 004be4c6
    MOV EAX,dword ptr [ESP + 0x1128]    ; 004be4c9
        ;   Label: LAB_004be4c9
    TEST byte ptr [EAX + 0xc],0x10      ; 004be4d0
    JNZ 0x004be511                      ; 004be4d4
        ;   XREF to: 004be511 (CONDITIONAL_JUMP)  ; LAB_004be511
    CMP EBX,0x1000                      ; 004be4d6
    JGE 0x004be511                      ; 004be4dc
        ;   XREF to: 004be511 (CONDITIONAL_JUMP)  ; LAB_004be511
    PUSH EAX                            ; 004be4de
    PUSH 0xff                           ; 004be4df
    LEA EAX,[ESP + 0x100c]              ; 004be4e4
    PUSH EAX                            ; 004be4eb
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004be4ec
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 004be4f1
    PUSH 0x5d8a58                       ; 004be4f4 | DAT_005d8a58
    LEA EAX,[ESP + 0x1008]              ; 004be4f9
    PUSH EAX                            ; 004be500
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004be501
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004be506
    TEST EAX,EAX                        ; 004be509
    JNZ 0x004be78c                      ; 004be50b
        ;   XREF to: 004be78c (CONDITIONAL_JUMP)  ; LAB_004be78c
    MOV EBX,dword ptr [ESP + 0x1128]    ; 004be511
        ;   Label: LAB_004be511
    PUSH EBX                            ; 004be518
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004be519
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004be51e
    XOR ESI,ESI                         ; 004be521
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005526b0 ; 004be523
        ;   XREF to: 005526b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005526b0()
    CALL sound_sndmain.cpp_FUN_005524b0 ; 004be528
        ;   XREF to: 005524b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005524b0()
    PUSH 0x1                            ; 004be52d
    MOV dword ptr [ESP + 0x1130],ESI    ; 004be52f
    CALL sound_sndmain.cpp_FUN_005512a0 ; 004be536
        ;   XREF to: 005512a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005512a0(int channel_index)
    ADD ESP,0x4                         ; 004be53b
    TEST EAX,EAX                        ; 004be53e
    JNZ 0x004be80f                      ; 004be540
        ;   XREF to: 004be80f (CONDITIONAL_JUMP)  ; LAB_004be80f
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004be546
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_004be546
    PUSH 0x58                           ; 004be54b
    MOV EAX,[0x01511cc0]                ; 004be54d | DAT_01511cc0
    PUSH EAX                            ; 004be552
    MOV dword ptr [ESP + 0x1140],EAX    ; 004be553
    MOV dword ptr [EAX + 0x4210],0x0    ; 004be55a
    CALL engine_font.cpp_FUN_004ab560   ; 004be564
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004be569
    MOV EBX,EAX                         ; 004be56c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004be56e
    MOV dword ptr [ESP + 0x1134],EAX    ; 004be571
    MOV EAX,0xffffffff                  ; 004be578
    PUSH EDX                            ; 004be57d
    MOV dword ptr [ESP + 0x1124],EAX    ; 004be57e
    CALL core_game.cpp_FUN_004b3000     ; 004be585
        ;   XREF to: 004b3000 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b3000(CGame * this_ptr)
    ADD ESP,0x4                         ; 004be58a
    PUSH 0xffff                         ; 004be58d
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 004be592
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    MOV EAX,0x1df                       ; 004be597
    ADD ESP,0x4                         ; 004be59c
    SUB EAX,EBX                         ; 004be59f
    MOV dword ptr [ESP + 0x1124],EAX    ; 004be5a1
    FLD float ptr [ESP + 0x1130]        ; 004be5a8
        ;   Label: LAB_004be5a8
    MOV ECX,dword ptr [ESP + 0x1120]    ; 004be5af
    CALL crt_math.c_round_FUN_005b7ff0  ; 004be5b6
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 004be5bb
    MOV EAX,dword ptr [ESP]             ; 004be5be
    CMP EAX,ECX                         ; 004be5c1
    JZ 0x004be702                       ; 004be5c3
        ;   XREF to: 004be702 (CONDITIONAL_JUMP)  ; LAB_004be702
    MOV dword ptr [ESP + 0x1120],EAX    ; 004be5c9
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 004be5d0
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    PUSH 0xffff                         ; 004be5d5
    PUSH 0x7                            ; 004be5da
    PUSH 0xa                            ; 004be5dc
    LEA EAX,[ESP + 0x1110]              ; 004be5de
    PUSH EAX                            ; 004be5e5
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004be5e6
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004be5eb
    MOV EBX,dword ptr [ESP + 0x1118]    ; 004be5ee
    TEST EBX,EBX                        ; 004be5f5
    JLE 0x004be6ea                      ; 004be5f7
        ;   XREF to: 004be6ea (CONDITIONAL_JUMP)  ; LAB_004be6ea
    LEA EAX,[EBX*0x4 + 0x0]             ; 004be5fd
    XOR ESI,ESI                         ; 004be604
    MOV dword ptr [ESP + 0x113c],EAX    ; 004be606
    MOV EBX,dword ptr [ESP + ESI*0x1 + 0x4] ; 004be60d
        ;   Label: LAB_004be60d
    MOV DH,byte ptr [EBX]               ; 004be611
    MOV EDI,0xf8                        ; 004be613
    CMP DH,0x5c                         ; 004be618
    JNZ 0x004be62b                      ; 004be61b
        ;   XREF to: 004be62b (CONDITIONAL_JUMP)  ; LAB_004be62b
    CMP byte ptr [EBX + 0x1],0x62       ; 004be61d
    JNZ 0x004be628                      ; 004be621
        ;   XREF to: 004be628 (CONDITIONAL_JUMP)  ; LAB_004be628
    MOV EDI,0x2                         ; 004be623
    ADD EBX,0x2                         ; 004be628
        ;   Label: LAB_004be628
    MOV EAX,dword ptr [ESP]             ; 004be62b
        ;   Label: LAB_004be62b
    TEST EAX,EAX                        ; 004be62e
    JL 0x004be6c9                       ; 004be630
        ;   XREF to: 004be6c9 (CONDITIONAL_JUMP)  ; LAB_004be6c9
    CMP EAX,dword ptr [ESP + 0x1124]    ; 004be636
    JGE 0x004be6c9                      ; 004be63d
        ;   XREF to: 004be6c9 (CONDITIONAL_JUMP)  ; LAB_004be6c9
    MOV dword ptr [ESP + 0x1140],EAX    ; 004be643
    FILD dword ptr [ESP + 0x1140]       ; 004be64a
    FADD double ptr [0x005d8abb]        ; 004be651 | DAT_005d8abb
    CALL crt_math.c_round_FUN_005b7ff0  ; 004be657
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x1140]      ; 004be65c
    MOV EAX,dword ptr [ESP + 0x1140]    ; 004be663
    CDQ                                 ; 004be66a
    XOR EAX,EDX                         ; 004be66b
    SUB EAX,EDX                         ; 004be66d
    MOV dword ptr [ESP + 0x1140],EAX    ; 004be66f
    FILD dword ptr [ESP + 0x1140]       ; 004be676
    FMUL double ptr [0x005d8aa3]        ; 004be67d | DAT_005d8aa3
    FLD1                                ; 004be683
    FSUBRP                              ; 004be685
    FMUL double ptr [0x005d8aab]        ; 004be687 | DAT_005d8aab
    CALL crt_math.c_round_FUN_005b7ff0  ; 004be68d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x111c]      ; 004be692
    MOV ECX,dword ptr [ESP + 0x111c]    ; 004be699
    PUSH ECX                            ; 004be6a0
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 004be6a1
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 004be6a6
    PUSH EBX                            ; 004be6a9
    PUSH 0x0                            ; 004be6aa
    PUSH EDI                            ; 004be6ac
    MOV EBX,dword ptr [ESP + 0xc]       ; 004be6ad
    PUSH EBX                            ; 004be6b1
    PUSH 0x280                          ; 004be6b2
    PUSH 0x0                            ; 004be6b7
    MOV EDI,dword ptr [ESP + 0x1150]    ; 004be6b9
    PUSH EDI                            ; 004be6c0
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0 ; 004be6c1
        ;   XREF to: 004a93a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004be6c6
    MOV EAX,dword ptr [ESP + 0x1134]    ; 004be6c9
        ;   Label: LAB_004be6c9
    MOV EDI,dword ptr [ESP]             ; 004be6d0
    ADD ESI,0x4                         ; 004be6d3
    ADD EDI,EAX                         ; 004be6d6
    MOV EAX,dword ptr [ESP + 0x113c]    ; 004be6d8
    MOV dword ptr [ESP],EDI             ; 004be6df
    CMP ESI,EAX                         ; 004be6e2
    JL 0x004be60d                       ; 004be6e4
        ;   XREF to: 004be60d (CONDITIONAL_JUMP)  ; LAB_004be60d
    MOV EDX,dword ptr [ESP + 0x112c]    ; 004be6ea
        ;   Label: LAB_004be6ea
    TEST EDX,EDX                        ; 004be6f1
    JZ 0x004be702                       ; 004be6f3
        ;   XREF to: 004be702 (CONDITIONAL_JUMP)  ; LAB_004be702
    PUSH EDX                            ; 004be6f5
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004be6f6
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004be6fb
    TEST EAX,EAX                        ; 004be6fe
    JZ 0x004be71e                       ; 004be700
        ;   XREF to: 004be71e (CONDITIONAL_JUMP)  ; LAB_004be71e
    CALL wincore_wddvmem.cpp_FUN_00589560 ; 004be702
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589560()
        ;   Label: LAB_004be702
    PUSH 0x1                            ; 004be707
    MOV EAX,[0x00617dd4]                ; 004be709 | DAT_00617dd4
    PUSH EAX                            ; 004be70e | DAT_01d02f84
    MOV ECX,dword ptr [EAX]             ; 004be70f | DAT_01d02f84
    CALL dword ptr [ECX]                ; 004be711
    ADD ESP,0x8                         ; 004be713
    TEST EAX,EAX                        ; 004be716
    JZ 0x004be846                       ; 004be718
        ;   XREF to: 004be846 (CONDITIONAL_JUMP)  ; LAB_004be846
    CMP dword ptr [0x01d63250],0x0      ; 004be71e | DAT_01d63250
        ;   Label: LAB_004be71e
    JZ 0x004be738                       ; 004be725
        ;   XREF to: 004be738 (CONDITIONAL_JUMP)  ; LAB_004be738
    MOV EAX,dword ptr [ESP + 0x1138]    ; 004be727
    MOV dword ptr [EAX + 0x4210],0x1    ; 004be72e
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005526b0 ; 004be738
        ;   XREF to: 005526b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005526b0()
        ;   Label: LAB_004be738
    MOV ESI,dword ptr [ESP + 0x1118]    ; 004be73d
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004be744
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    TEST ESI,ESI                        ; 004be749
    JLE 0x004be770                      ; 004be74b
        ;   XREF to: 004be770 (CONDITIONAL_JUMP)  ; LAB_004be770
    SHL ESI,0x2                         ; 004be74d
    XOR EBX,EBX                         ; 004be750
    MOV EDI,dword ptr [ESP + EBX*0x1 + 0x4] ; 004be752
        ;   Label: LAB_004be752
    PUSH EDI                            ; 004be756
    ADD EBX,0x4                         ; 004be757
    CALL crt_unknown.c_FUN_005b86a0     ; 004be75a
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 004be75f
    CMP EBX,ESI                         ; 004be762
    JL 0x004be752                       ; 004be764
        ;   XREF to: 004be752 (CONDITIONAL_JUMP)  ; LAB_004be752
    LEA EAX,[EAX]                       ; 004be766
    LEA EDX,[EDX]                       ; 004be76c
    PUSH 0x0                            ; 004be770
        ;   Label: LAB_004be770
    LEA EAX,[ESP + 0x1108]              ; 004be772
        ;   Label: LAB_004be772
    PUSH EAX                            ; 004be779
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440 ; 004be77a
        ;   XREF to: 0040d440 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004be77f
    MOV ESP,EBP                         ; 004be782
    POP EBP                             ; 004be784
    POP EDI                             ; 004be785
    POP ESI                             ; 004be786
    POP EBX                             ; 004be787
    RET                                 ; 004be788
    PUSH EBX                            ; 004be789
        ;   Label: LAB_004be789
    JMP 0x004be772                      ; 004be78a
        ;   XREF to: 004be772 (UNCONDITIONAL_JUMP)  ; LAB_004be772
    LEA EDI,[ESP + 0x1004]              ; 004be78c
        ;   Label: LAB_004be78c
    SUB ECX,ECX                         ; 004be793
    DEC ECX                             ; 004be795
    XOR EAX,EAX                         ; 004be796
    SCASB.REPNE ES:EDI                  ; 004be798
    NOT ECX                             ; 004be79a
    DEC ECX                             ; 004be79c
    ADD ECX,0xa                         ; 004be79d
    PUSH ECX                            ; 004be7a0
    CALL crt_unknown.c_FUN_005b8580     ; 004be7a1
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 004be7a6
    MOV dword ptr [ESP + EBX*0x1 + 0x4],EAX ; 004be7a9
    TEST EAX,EAX                        ; 004be7ad
    JNZ 0x004be7d3                      ; 004be7af
        ;   XREF to: 004be7d3 (CONDITIONAL_JUMP)  ; LAB_004be7d3
    MOV EAX,0x5d8a5d                    ; 004be7b1 | = "..\\core\\game.cpp"
    MOV EDX,0x14ad                      ; 004be7b6
    PUSH 0x5d8a6e                       ; 004be7bb | = "CGame::rollCredits - Out of memory"
    MOV [0x01d046a0],EAX                ; 004be7c0 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004be7c5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004be7cb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004be7d0
    LEA ESI,[ESP + 0x1004]              ; 004be7d3
        ;   Label: LAB_004be7d3
    MOV EDI,dword ptr [ESP + EBX*0x1 + 0x4] ; 004be7da
    MOV ECX,dword ptr [ESP + 0x1118]    ; 004be7de
    PUSH EDI                            ; 004be7e5
    MOV AL,byte ptr [ESI]               ; 004be7e6
        ;   Label: LAB_004be7e6
    MOV byte ptr [EDI],AL               ; 004be7e8
    CMP AL,0x0                          ; 004be7ea
    JZ 0x004be7fe                       ; 004be7ec
        ;   XREF to: 004be7fe (CONDITIONAL_JUMP)  ; LAB_004be7fe
    MOV AL,byte ptr [ESI + 0x1]         ; 004be7ee
    ADD ESI,0x2                         ; 004be7f1
    MOV byte ptr [EDI + 0x1],AL         ; 004be7f4
    ADD EDI,0x2                         ; 004be7f7
    CMP AL,0x0                          ; 004be7fa
    JNZ 0x004be7e6                      ; 004be7fc
        ;   XREF to: 004be7e6 (CONDITIONAL_JUMP)  ; LAB_004be7e6
    POP EDI                             ; 004be7fe
        ;   Label: LAB_004be7fe
    INC ECX                             ; 004be7ff
    ADD EBX,0x4                         ; 004be800
    MOV dword ptr [ESP + 0x1118],ECX    ; 004be803
    JMP 0x004be4c9                      ; 004be80a
        ;   XREF to: 004be4c9 (UNCONDITIONAL_JUMP)  ; LAB_004be4c9
    CALL sound_sndmain.cpp_FUN_00550450 ; 004be80f
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00550450()
        ;   Label: LAB_004be80f
    PUSH 0x1                            ; 004be814
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_00550310 ; 004be816
        ;   XREF to: 00550310 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_00550310(int channel_index)
    ADD ESP,0x4                         ; 004be81b
    PUSH 0x1                            ; 004be81e
    CALL sound_sndmain.cpp_setNextSfxFlags_FUN_00550380 ; 004be820
        ;   XREF to: 00550380 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlags_FUN_00550380(uint flags)
    ADD ESP,0x4                         ; 004be825
    PUSH 0x5d8a91                       ; 004be828 | = "XBLAIRMENU.WAV"
    CALL sound_sndmain.cpp_FUN_005506b0 ; 004be82d
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005506b0()
    ADD ESP,0x4                         ; 004be832
    MOV dword ptr [ESP + 0x112c],EAX    ; 004be835
    CALL sound_sndmain.cpp_FUN_005504d0 ; 004be83c
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005504d0()
    JMP 0x004be546                      ; 004be841
        ;   XREF to: 004be546 (UNCONDITIONAL_JUMP)  ; LAB_004be546
    MOV EAX,dword ptr [EBP + 0x14]      ; 004be846
        ;   Label: LAB_004be846
    PUSH EAX                            ; 004be849
    CALL core_game.cpp_FUN_004b3010     ; 004be84a
        ;   XREF to: 004b3010 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b3010(CGame * this_ptr)
    ADD ESP,0x4                         ; 004be84f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004be852
    FLD float ptr [EAX + 0x284]         ; 004be855
    FMUL float ptr [0x005d8ab3]         ; 004be85b | DAT_005d8ab3
    FSUBR float ptr [ESP + 0x1130]      ; 004be861
    FST float ptr [ESP + 0x1130]        ; 004be868
    FCOMP float ptr [0x005d8ac3]        ; 004be86f | DAT_005d8ac3
    FNSTSW AX                           ; 004be875
    SAHF                                ; 004be877
    JNC 0x004be5a8                      ; 004be878
        ;   XREF to: 004be5a8 (CONDITIONAL_JUMP)  ; LAB_004be5a8
    MOV ECX,0xffffffff                  ; 004be87e
    MOV EDX,0x43fa0000                  ; 004be883
    MOV dword ptr [ESP + 0x1120],ECX    ; 004be888
    MOV dword ptr [ESP + 0x1130],EDX    ; 004be88f
    JMP 0x004be5a8                      ; 004be896
        ;   XREF to: 004be5a8 (UNCONDITIONAL_JUMP)  ; LAB_004be5a8

