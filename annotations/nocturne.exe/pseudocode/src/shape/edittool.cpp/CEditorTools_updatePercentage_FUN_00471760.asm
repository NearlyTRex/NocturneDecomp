; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_00471760(CEditorTools *this_ptr,float current_progress,float total_progress)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   current_progress
; float            Stack[0xc]:4   total_progress
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_dtrace.cpp_FUN_004673e0 at 0046752d
;   core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 at 004ea049
;   engine_pod.cpp_CPodFile_verifyChecksum_FUN_004f8240 at 004f8490
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660 at 00471725
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e833
;   TerminatedCString s_CEditorTools_updatePerce_0057e849
;   TerminatedCString s_d_complete_0057e880
;   TerminatedCString s_d_02d_elapsed_approximat_0057e88e
;   double DOUBLE_0057e8c2 = 100
;   double DOUBLE_0057e8ca = 0.5
;   double DOUBLE_0057e8d2 = 8.47710503472222E-7
;   double DOUBLE_0057e8da = 5
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd07c
;   undefined4 DAT_01bcd9bc
;   undefined4 DAT_01bcddec
;   undefined4 DAT_01bcddf8
;   undefined4 DAT_01bcddfc
;   undefined4 DAT_01bcde00
;   ... and 6 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_math.c_round_FUN_00563a30
;   engine_2d.c_fillRectColor_FUN_00403e60
;   engine_2d.c_fillRectWithBorder_FUN_00403ef0
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30
;   shape_edittool.cpp_FUN_004722b0
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471760
        ;   Label: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760
    PUSH ESI                            ; 00471761
    PUSH EDI                            ; 00471762
    PUSH EBP                            ; 00471763
    MOV EBP,ESP                         ; 00471764
    SUB ESP,0x28                        ; 00471766
    AND ESP,0xfffffff8                  ; 00471769
    CMP dword ptr [0x01bcd07c],0x1      ; 0047176c | DAT_01bcd07c
    JL 0x00471a58                       ; 00471773
        ;   XREF to: 00471a58 (CONDITIONAL_JUMP)  ; LAB_00471a58
    FLD float ptr [EBP + 0x1c]          ; 00471779
        ;   Label: LAB_00471779
    XOR ESI,ESI                         ; 0047177c
    FLDZ                                ; 0047177e
    MOV dword ptr [ESP + 0xc],ESI       ; 00471780
    FCOMPP                              ; 00471784
    FNSTSW AX                           ; 00471786
    SAHF                                ; 00471788
    JNC 0x004717b5                      ; 00471789
        ;   XREF to: 004717b5 (CONDITIONAL_JUMP)  ; LAB_004717b5
    FLD float ptr [EBP + 0x18]          ; 0047178b
    FLDZ                                ; 0047178e
    FCOMPP                              ; 00471790
    FNSTSW AX                           ; 00471792
    SAHF                                ; 00471794
    JBE 0x0047179a                      ; 00471795
        ;   XREF to: 0047179a (CONDITIONAL_JUMP)  ; LAB_0047179a
    MOV dword ptr [EBP + 0x18],ESI      ; 00471797
    FLD float ptr [EBP + 0x18]          ; 0047179a
        ;   Label: LAB_0047179a
    FCOMP float ptr [EBP + 0x1c]        ; 0047179d
    FNSTSW AX                           ; 004717a0
    SAHF                                ; 004717a2
    JBE 0x004717ab                      ; 004717a3
        ;   XREF to: 004717ab (CONDITIONAL_JUMP)  ; LAB_004717ab
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004717a5
    MOV dword ptr [EBP + 0x18],EAX      ; 004717a8
    FLD float ptr [EBP + 0x18]          ; 004717ab
        ;   Label: LAB_004717ab
    FDIV float ptr [EBP + 0x1c]         ; 004717ae
    FSTP float ptr [ESP + 0xc]          ; 004717b1
    FLD float ptr [ESP + 0xc]           ; 004717b5
        ;   Label: LAB_004717b5
    FMUL double ptr [0x0057e8c2]        ; 004717b9 | DOUBLE_0057e8c2
    FADD double ptr [0x0057e8ca]        ; 004717bf | DOUBLE_0057e8ca
    CALL crt_math.c_round_FUN_00563a30  ; 004717c5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x1c]        ; 004717ca
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004717ce
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EBX,EAX                         ; 004717d3
    MOV dword ptr [ESP + 0x18],EAX      ; 004717d5
    MOV EAX,[0x01bcd07c]                ; 004717d9 | DAT_01bcd07c
    LEA ESI,[EAX + -0x1]                ; 004717de
    MOV EAX,ESI                         ; 004717e1
    SHL EAX,0x4                         ; 004717e3
    SUB EAX,ESI                         ; 004717e6
    SHL EAX,0x2                         ; 004717e8
    SUB EAX,ESI                         ; 004717eb
    LEA ESI,[EAX*0x8 + 0x0]             ; 004717ed
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004717f4
    CMP EAX,dword ptr [ESI + 0x1bcd250] ; 004717f8
    JNZ 0x00471812                      ; 004717fe
        ;   XREF to: 00471812 (CONDITIONAL_JUMP)  ; LAB_00471812
    SUB EBX,dword ptr [ESI + 0x1bcd254] ; 00471800
    CMP EBX,0x480000                    ; 00471806
    JL 0x00471a51                       ; 0047180c
        ;   XREF to: 00471a51 (CONDITIONAL_JUMP)  ; LAB_00471a51
    MOV EBX,dword ptr [EBP + 0x14]      ; 00471812
        ;   Label: LAB_00471812
    PUSH EBX                            ; 00471815
    CALL shape_edittool.cpp_FUN_004722b0 ; 00471816
        ;   XREF to: 004722b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004722b0()
    ADD ESP,0x4                         ; 0047181b
    PUSH 0xffff                         ; 0047181e
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 00471823
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    ADD ESP,0x4                         ; 00471828
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0047182b
    PUSH ESI                            ; 0047182f
    PUSH 0x57e880                       ; 00471830 | = "%d%% complete"
    PUSH -0x1                           ; 00471835
    MOV EDI,dword ptr [0x01bcddec]      ; 00471837 | DAT_01bcddec
    PUSH EDI                            ; 0047183d
    MOV EAX,[0x01c00c5c]                ; 0047183e | g_ClipTop
    PUSH EAX                            ; 00471843
    MOV EDX,dword ptr [0x01c00c60]      ; 00471844 | g_ClipRight
    PUSH EDX                            ; 0047184a
    MOV ECX,dword ptr [0x01c00c58]      ; 0047184b | g_ClipLeft
    PUSH ECX                            ; 00471851
    MOV EBX,dword ptr [0x01bcd070]      ; 00471852 | DAT_01bcd070
    PUSH EBX                            ; 00471858
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30 ; 00471859
        ;   XREF to: 00490e30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    MOV EAX,[0x01bcd9bc]                ; 0047185e | DAT_01bcd9bc
    MOV EDI,dword ptr [0x01c00c5c]      ; 00471863 | g_ClipTop
    ADD EAX,EAX                         ; 00471869
    ADD EAX,EDI                         ; 0047186b
    LEA EDI,[EAX + 0x1]                 ; 0047186d
    MOV EAX,[0x01bcd9bc]                ; 00471870 | DAT_01bcd9bc
    MOV EDX,dword ptr [0x01c00c5c]      ; 00471875 | g_ClipTop
    SHL EAX,0x2                         ; 0047187b
    ADD ESP,0x20                        ; 0047187e
    ADD EAX,EDX                         ; 00471881
    MOV ECX,dword ptr [0x01bcde00]      ; 00471883 | DAT_01bcde00
    DEC EAX                             ; 00471889
    PUSH ECX                            ; 0047188a
    MOV dword ptr [ESP + 0x18],EAX      ; 0047188b
    MOV EAX,[0x01bcddf8]                ; 0047188f | DAT_01bcddf8
    PUSH EAX                            ; 00471894
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00471895
    MOV ESI,dword ptr [0x01c00c60]      ; 00471899 | g_ClipRight
    PUSH EDX                            ; 0047189f
    DEC ESI                             ; 004718a0
    PUSH ESI                            ; 004718a1
    MOV EBX,dword ptr [0x01c00c58]      ; 004718a2 | g_ClipLeft
    PUSH EDI                            ; 004718a8
    INC EBX                             ; 004718a9
    PUSH EBX                            ; 004718aa
    CALL engine_2d.c_fillRectWithBorder_FUN_00403ef0 ; 004718ab
        ;   XREF to: 00403ef0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403ef0(int x1, int y1, int x2, int y2, ...)
    MOV EAX,ESI                         ; 004718b0
    SUB EAX,EBX                         ; 004718b2
    ADD ESP,0x18                        ; 004718b4
    INC EAX                             ; 004718b7
    MOV dword ptr [ESP + 0x24],EAX      ; 004718b8
    FILD dword ptr [ESP + 0x24]         ; 004718bc
    FMUL float ptr [ESP + 0xc]          ; 004718c0
    FADD double ptr [0x0057e8ca]        ; 004718c4 | DOUBLE_0057e8ca
    CALL crt_math.c_round_FUN_00563a30  ; 004718ca
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x24]        ; 004718cf
    MOV EAX,dword ptr [ESP + 0x24]      ; 004718d3
    ADD EAX,EBX                         ; 004718d7
    CMP EAX,EBX                         ; 004718d9
    JLE 0x004718fb                      ; 004718db
        ;   XREF to: 004718fb (CONDITIONAL_JUMP)  ; LAB_004718fb
    CMP EAX,ESI                         ; 004718dd
    JL 0x004718e4                       ; 004718df
        ;   XREF to: 004718e4 (CONDITIONAL_JUMP)  ; LAB_004718e4
    LEA EAX,[ESI + -0x1]                ; 004718e1
    MOV ECX,dword ptr [0x01bcddfc]      ; 004718e4 | DAT_01bcddfc
        ;   Label: LAB_004718e4
    PUSH ECX                            ; 004718ea
    MOV ESI,dword ptr [ESP + 0x18]      ; 004718eb
    PUSH ESI                            ; 004718ef
    PUSH EAX                            ; 004718f0
    PUSH EDI                            ; 004718f1
    PUSH EBX                            ; 004718f2
    CALL engine_2d.c_fillRectColor_FUN_00403e60 ; 004718f3
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403e60(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004718f8
    CMP dword ptr [ESP + 0x1c],0x0      ; 004718fb
        ;   Label: LAB_004718fb
    JLE 0x00471a1d                      ; 00471900
        ;   XREF to: 00471a1d (CONDITIONAL_JUMP)  ; LAB_00471a1d
    MOV EAX,[0x01bcd07c]                ; 00471906 | DAT_01bcd07c
    LEA EBX,[EAX + -0x1]                ; 0047190b
    MOV EAX,EBX                         ; 0047190e
    SHL EAX,0x4                         ; 00471910
    SUB EAX,EBX                         ; 00471913
    SHL EAX,0x2                         ; 00471915
    SUB EAX,EBX                         ; 00471918
    MOV EBX,dword ptr [ESP + 0x18]      ; 0047191a
    MOV EDX,dword ptr [EAX*0x8 + 0x1bcd24c] ; 0047191e
    MOV EAX,EBX                         ; 00471925
    SUB EAX,EDX                         ; 00471927
    MOV dword ptr [ESP + 0x24],EAX      ; 00471929
    FILD dword ptr [ESP + 0x24]         ; 0047192d
    FMUL double ptr [0x0057e8d2]        ; 00471931 | DOUBLE_0057e8d2
    FST float ptr [ESP + 0x8]           ; 00471937
    FST double ptr [ESP]                ; 0047193b
    FCOMP double ptr [0x0057e8da]       ; 0047193e | DOUBLE_0057e8da
    FNSTSW AX                           ; 00471944
    SAHF                                ; 00471946
    JBE 0x00471a1d                      ; 00471947
        ;   XREF to: 00471a1d (CONDITIONAL_JUMP)  ; LAB_00471a1d
    FLD float ptr [EBP + 0x18]          ; 0047194d
    FLD float ptr [EBP + 0x1c]          ; 00471950
    FSUB ST0,ST1                        ; 00471953
    FMUL float ptr [ESP + 0x8]          ; 00471955
    FDIVRP                              ; 00471959
    FADD double ptr [0x0057e8ca]        ; 0047195b | DOUBLE_0057e8ca
    CALL crt_math.c_round_FUN_00563a30  ; 00471961
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x20]        ; 00471966
    MOV ECX,dword ptr [ESP + 0x20]      ; 0047196a
    TEST ECX,ECX                        ; 0047196e
    JLE 0x00471a1d                      ; 00471970
        ;   XREF to: 00471a1d (CONDITIONAL_JUMP)  ; LAB_00471a1d
    MOV EBX,0x3c                        ; 00471976
    MOV EDX,ECX                         ; 0047197b
    MOV EAX,ECX                         ; 0047197d
    SAR EDX,0x1f                        ; 0047197f
    IDIV EBX                            ; 00471982
    MOV ESI,0x3c                        ; 00471984
    MOV EBX,EAX                         ; 00471989
    MOV EDX,ECX                         ; 0047198b
    MOV EAX,ECX                         ; 0047198d
    SAR EDX,0x1f                        ; 0047198f
    IDIV ESI                            ; 00471992
    FLD double ptr [ESP]                ; 00471994
    FADD double ptr [0x0057e8ca]        ; 00471997 | DOUBLE_0057e8ca
    CALL crt_math.c_round_FUN_00563a30  ; 0047199d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x10]        ; 004719a2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004719a6
    MOV dword ptr [ESP + 0x20],EDX      ; 004719aa
    MOV EDX,EAX                         ; 004719ae
    SAR EDX,0x1f                        ; 004719b0
    IDIV ESI                            ; 004719b3
    MOV ESI,EAX                         ; 004719b5
    MOV EAX,dword ptr [ESP + 0x10]      ; 004719b7
    MOV EDX,EAX                         ; 004719bb
    MOV EDI,0x3c                        ; 004719bd
    SAR EDX,0x1f                        ; 004719c2
    IDIV EDI                            ; 004719c5
    PUSH 0xffff                         ; 004719c7
    MOV dword ptr [ESP + 0x14],EDX      ; 004719cc
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 004719d0
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    ADD ESP,0x4                         ; 004719d5
    MOV EDI,dword ptr [ESP + 0x20]      ; 004719d8
    PUSH EDI                            ; 004719dc
    PUSH EBX                            ; 004719dd
    MOV EAX,dword ptr [ESP + 0x18]      ; 004719de
    PUSH EAX                            ; 004719e2
    PUSH ESI                            ; 004719e3
    PUSH 0x57e88e                       ; 004719e4 | = "%d:%02d elapsed, approximately %d:%02..."
    MOV EDX,dword ptr [0x01bcddec]      ; 004719e9 | DAT_01bcddec
    PUSH -0x1                           ; 004719ef
    MOV ECX,dword ptr [0x01bcd9bc]      ; 004719f1 | DAT_01bcd9bc
    MOV EAX,[0x01c00c64]                ; 004719f7 | g_ClipBottom
    PUSH EDX                            ; 004719fc
    SUB EAX,ECX                         ; 004719fd
    PUSH EAX                            ; 004719ff
    MOV EBX,dword ptr [0x01c00c60]      ; 00471a00 | g_ClipRight
    PUSH EBX                            ; 00471a06
    MOV ESI,dword ptr [0x01c00c58]      ; 00471a07 | g_ClipLeft
    PUSH ESI                            ; 00471a0d
    MOV EDI,dword ptr [0x01bcd070]      ; 00471a0e | DAT_01bcd070
    PUSH EDI                            ; 00471a14
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30 ; 00471a15
        ;   XREF to: 00490e30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x2c                        ; 00471a1a
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 00471a1d
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
        ;   Label: LAB_00471a1d
    MOV EAX,[0x01bcd07c]                ; 00471a22 | DAT_01bcd07c
    LEA EBX,[EAX + -0x1]                ; 00471a27
    MOV EAX,EBX                         ; 00471a2a
    SHL EAX,0x4                         ; 00471a2c
    SUB EAX,EBX                         ; 00471a2f
    SHL EAX,0x2                         ; 00471a31
    SUB EAX,EBX                         ; 00471a34
    LEA EBX,[EAX*0x8 + 0x0]             ; 00471a36
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00471a3d
    MOV dword ptr [EBX + 0x1bcd250],EAX ; 00471a41
    MOV EAX,dword ptr [ESP + 0x18]      ; 00471a47
    MOV dword ptr [EBX + 0x1bcd254],EAX ; 00471a4b
    MOV ESP,EBP                         ; 00471a51
        ;   Label: LAB_00471a51
    POP EBP                             ; 00471a53
    POP EDI                             ; 00471a54
    POP ESI                             ; 00471a55
    POP EBX                             ; 00471a56
    RET                                 ; 00471a57
    MOV ECX,0x57e833                    ; 00471a58 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00471a58
    MOV EBX,0x605                       ; 00471a5d
    PUSH 0x57e849                       ; 00471a62 | = "CEditorTools::updatePercentageWindow ..."
    MOV dword ptr [0x01cc4800],ECX      ; 00471a67 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 00471a6d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00471a73
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00471a78
    JMP 0x00471779                      ; 00471a7b
        ;   XREF to: 00471779 (UNCONDITIONAL_JUMP)  ; LAB_00471779

