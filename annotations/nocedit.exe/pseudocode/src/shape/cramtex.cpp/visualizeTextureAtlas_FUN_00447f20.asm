; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_cramtex_cpp_visualizeTextureAtlas_FUN_00447f20 (int visualization_mode,int completion_mode,int display_mode)
;
; Parameters:
; int              Stack[0x8]:4   visualization_mode
; int              Stack[0xc]:4   completion_mode
; int              Stack[0x10]:4   display_mode
; Local Variables:
; undefined8       Stack[-0x118]:8  local_118
; undefined8       Stack[-0x110]:8  local_110
; undefined1       Stack[-0x100]:1  local_100
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[3]:
;   shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 at 004452b4
;   shape_cramtex.cpp_generateTextureAtlas_FUN_00445820 at 00445c96
;   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 at 00446946
;
; Referenced Globals:
;   TerminatedCString s_result_00619a32
;   TerminatedCString s_progress_00619a39
;   TerminatedCString s_CramTex_II_s_N_d_Map_d_d_00619a42
;   TerminatedCString s_Done_Press_a_key_00619a96
;   TerminatedCString s_Hit_Esc_when_you_ve_had__00619aac
;   double g_CramPercentageMultiplier = 100
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   SCramWorkingEntry[1] g_CramSortedTextureEntries
;   undefined4 DAT_0083c20c
;   undefined4 DAT_0083c210
;   undefined4 DAT_0083c214
;   undefined4 DAT_0083c218
;   undefined4 DAT_0083c228
;   undefined4 DAT_0083c258
;   ... and 22 more
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_2d.c_plotPixel_FUN_00401140
;   shape_cramtex.cpp_renderTextureEntry_FUN_00447c20
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH 0x134                          ; 00447f20
        ;   Label: shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00447f25
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 00447f2a
    PUSH ESI                            ; 00447f2b
    PUSH EDI                            ; 00447f2c
    PUSH EBP                            ; 00447f2d
    MOV EBP,ESP                         ; 00447f2e
    SUB ESP,0xf0                        ; 00447f30
    SUB EBP,0x7a                        ; 00447f36
    MOV EAX,[0x0084a890]                ; 00447f39 | g_CramMapNumber
    MOV EDX,EAX                         ; 00447f3e
    MOV EBX,dword ptr [0x0084a858]      ; 00447f40 | g_CramTotalMaps
    SAR EDX,0x1f                        ; 00447f46
    IDIV EBX                            ; 00447f49
    FILD dword ptr [0x0084a878]         ; 00447f4b | g_CramAtlasWidth
    FMUL double ptr [0x00619ad2]        ; 00447f51 | g_CramPercentageMultiplier
    FILD dword ptr [0x0084a884]         ; 00447f57 | g_CramCurrentAcceptableSize
    FDIVP                               ; 00447f5d
    MOV dword ptr [0x0084a890],EDX      ; 00447f5f | g_CramMapNumber
    MOV EDX,dword ptr [0x0084a874]      ; 00447f65 | g_CramAcceptableSize
    PUSH EDX                            ; 00447f6b
    MOV ECX,dword ptr [0x0084a884]      ; 00447f6c | g_CramCurrentAcceptableSize
    PUSH ECX                            ; 00447f72
    MOV EDI,dword ptr [0x0084a854]      ; 00447f73 | g_CramTextureCount
    XOR ESI,ESI                         ; 00447f79
    SUB ESP,0x8                         ; 00447f7b
    XOR EBX,EBX                         ; 00447f7e
    FSTP double ptr [ESP]               ; 00447f80
    TEST EDI,EDI                        ; 00447f83
    JLE 0x00447fc0                      ; 00447f85
        ;   XREF to: 00447fc0 (CONDITIONAL_JUMP)  ; LAB_00447fc0
    MOV EAX,0x83c1dc                    ; 00447f87 | g_CramSortedTextureEntries
    MOV EDX,dword ptr [EAX + 0x38]      ; 00447f8c | DAT_0083c214 | DAT_0083c260
        ;   Label: LAB_00447f8c
    MOV ECX,dword ptr [EAX + 0x30]      ; 00447f8f | DAT_0083c20c | DAT_0083c258
    MOV EDI,dword ptr [0x0084a880]      ; 00447f92 | g_CramPaddingCalculation
    SUB EDX,ECX                         ; 00447f98
    SUB EDX,EDI                         ; 00447f9a
    MOV ECX,dword ptr [EAX + 0x34]      ; 00447f9c | DAT_0083c210 | DAT_0083c25c
    MOV EDI,EDX                         ; 00447f9f
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00447fa1 | DAT_0083c218 | DAT_0083c264
    SUB EDX,ECX                         ; 00447fa4
    SUB EDX,dword ptr [0x0084a880]      ; 00447fa6 | g_CramPaddingCalculation
    IMUL EDX,EDI                        ; 00447fac
    ADD EAX,0x4c                        ; 00447faf
    INC EBX                             ; 00447fb2
    MOV EDI,dword ptr [0x0084a854]      ; 00447fb3 | g_CramTextureCount
    ADD ESI,EDX                         ; 00447fb9
    CMP EBX,EDI                         ; 00447fbb
    JL 0x00447f8c                       ; 00447fbd
        ;   XREF to: 00447f8c (CONDITIONAL_JUMP)  ; LAB_00447f8c
    NOP                                 ; 00447fbf
    MOV EAX,[0x0084a884]                ; 00447fc0 | g_CramCurrentAcceptableSize
        ;   Label: LAB_00447fc0
    IMUL EAX,EAX                        ; 00447fc5
    MOV ECX,dword ptr [0x0084a858]      ; 00447fc8 | g_CramTotalMaps
    IMUL EAX,ECX                        ; 00447fce
    MOV dword ptr [EBP + 0x72],EAX      ; 00447fd1
    MOV dword ptr [EBP + 0x76],ESI      ; 00447fd4
    FILD dword ptr [EBP + 0x72]         ; 00447fd7
    FILD dword ptr [EBP + 0x76]         ; 00447fda
    FMUL double ptr [0x00619ad2]        ; 00447fdd | g_CramPercentageMultiplier
    FDIVRP                              ; 00447fe3
    SUB ESP,0x8                         ; 00447fe5
    FSTP double ptr [ESP]               ; 00447fe8
    MOV EAX,[0x0084a890]                ; 00447feb | g_CramMapNumber
    PUSH ECX                            ; 00447ff0
    INC EAX                             ; 00447ff1
    PUSH EAX                            ; 00447ff2
    MOV ESI,dword ptr [0x0084a854]      ; 00447ff3 | g_CramTextureCount
    MOV EDI,dword ptr [EBP + 0x92]      ; 00447ff9
    PUSH ESI                            ; 00447fff
    TEST EDI,EDI                        ; 00448000
    JZ 0x00448093                       ; 00448002
        ;   XREF to: 00448093 (CONDITIONAL_JUMP)  ; LAB_00448093
    MOV EAX,0x619a32                    ; 00448008 | = "result"
    PUSH EAX                            ; 0044800d | = "result" | s_progress_00619a39
        ;   Label: LAB_0044800d
    PUSH 0x619a42                       ; 0044800e | = "CramTex II %s:  N=%d  Map %d/%d  Cove..."
    LEA EAX,[EBP + -0x76]               ; 00448013
    PUSH EAX                            ; 00448016
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00448017
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x30                        ; 0044801c
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0044801f
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 00448024
    PUSH 0x0                            ; 00448026
    LEA EAX,[EBP + -0x76]               ; 00448028
    PUSH EAX                            ; 0044802b
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0044802c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00448031
    ADD ESP,0xc                         ; 00448037
    TEST EAX,EAX                        ; 0044803a
    JZ 0x0044809d                       ; 0044803c
        ;   XREF to: 0044809d (CONDITIONAL_JUMP)  ; LAB_0044809d
    PUSH 0x16                           ; 0044803e
    PUSH 0x0                            ; 00448040
    PUSH 0x619a96                       ; 00448042 | = "Done.  Press a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00448047
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   Label: LAB_00448047
    ADD ESP,0xc                         ; 0044804c
    MOV EDI,dword ptr [EBP + 0x8e]      ; 0044804f
    MOV ECX,0xa                         ; 00448055
    MOV EBX,0x36                        ; 0044805a
    MOV EDX,dword ptr [0x00679394]      ; 0044805f | g_WindowWidth
    MOV EAX,[0x00679398]                ; 00448065 | g_WindowHeight
    MOV ESI,dword ptr [0x0084a894]      ; 0044806a | g_CramVisualizationFlag
    SUB EDX,0xa                         ; 00448070
    SUB EAX,0xa                         ; 00448073
    MOV dword ptr [EBP + 0x62],ECX      ; 00448076
    MOV dword ptr [EBP + 0x66],EBX      ; 00448079
    MOV dword ptr [EBP + 0x6a],EDX      ; 0044807c
    MOV dword ptr [EBP + 0x5e],EAX      ; 0044807f
    TEST ESI,ESI                        ; 00448082
    JNZ 0x004480a7                      ; 00448084
        ;   XREF to: 004480a7 (CONDITIONAL_JUMP)  ; LAB_004480a7
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00448086
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_00448086
    LEA ESP,[EBP + 0x7a]                ; 0044808b
    POP EBP                             ; 0044808e
    POP EDI                             ; 0044808f
    POP ESI                             ; 00448090
    POP EBX                             ; 00448091
    RET                                 ; 00448092
    MOV EAX,0x619a39                    ; 00448093 | = "progress"
        ;   Label: LAB_00448093
    JMP 0x0044800d                      ; 00448098
        ;   XREF to: 0044800d (UNCONDITIONAL_JUMP)  ; LAB_0044800d
    PUSH 0x16                           ; 0044809d
        ;   Label: LAB_0044809d
    PUSH EAX                            ; 0044809f
    PUSH 0x619aac                       ; 004480a0 | = "Hit <Esc> when you've had enough..."
    JMP 0x00448047                      ; 004480a5
        ;   XREF to: 00448047 (UNCONDITIONAL_JUMP)  ; LAB_00448047
    PUSH 0x1                            ; 004480a7
        ;   Label: LAB_004480a7
    DEC EAX                             ; 004480a9
    PUSH EAX                            ; 004480aa
    DEC EDX                             ; 004480ab
    PUSH EDX                            ; 004480ac
    PUSH EBX                            ; 004480ad
    PUSH ECX                            ; 004480ae
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 004480af
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004480b4
    TEST EDI,EDI                        ; 004480b7
    JZ 0x004481bf                       ; 004480b9
        ;   XREF to: 004481bf (CONDITIONAL_JUMP)  ; LAB_004481bf
    MOV EAX,[0x0084a854]                ; 004480bf | g_CramTextureCount
    MOV dword ptr [EBP + 0x56],EAX      ; 004480c4
        ;   Label: LAB_004480c4
    XOR EBX,EBX                         ; 004480c7
    TEST EAX,EAX                        ; 004480c9
    JLE 0x00448100                      ; 004480cb
        ;   XREF to: 00448100 (CONDITIONAL_JUMP)  ; LAB_00448100
    MOV ESI,0x83c1dc                    ; 004480cd | g_CramSortedTextureEntries
    MOV EDX,dword ptr [EBP + 0x5e]      ; 004480d2
        ;   Label: LAB_004480d2
    PUSH EDX                            ; 004480d5
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004480d6
    PUSH ECX                            ; 004480d9
    MOV EAX,dword ptr [EBP + 0x66]      ; 004480da
    PUSH EAX                            ; 004480dd
    MOV EDX,dword ptr [EBP + 0x62]      ; 004480de
    PUSH EDX                            ; 004480e1
    PUSH EDI                            ; 004480e2
    PUSH ESI                            ; 004480e3 | g_CramSortedTextureEntries | DAT_0083c228
    INC EBX                             ; 004480e4
    CALL shape_cramtex.cpp_renderTextureEntry_FUN_00447c20 ; 004480e5
        ;   XREF to: 00447c20 (UNCONDITIONAL_CALL)  ; void shape_cramtex.cpp_renderTextureEntry_FUN_00447c20(SCramWorkingEntry * texture_entry, int visualization_mode, int draw_x, int draw_y, ...)
    MOV ECX,dword ptr [EBP + 0x56]      ; 004480ea
    ADD ESP,0x18                        ; 004480ed
    ADD ESI,0x4c                        ; 004480f0
    CMP EBX,ECX                         ; 004480f3
    JL 0x004480d2                       ; 004480f5
        ;   XREF to: 004480d2 (CONDITIONAL_JUMP)  ; LAB_004480d2
    LEA EAX,[EAX]                       ; 004480f7
    LEA EDX,[EDX]                       ; 004480fd
    TEST EDI,EDI                        ; 00448100
        ;   Label: LAB_00448100
    JNZ 0x00448086                      ; 00448102
        ;   XREF to: 00448086 (CONDITIONAL_JUMP)  ; LAB_00448086
    MOV ESI,dword ptr [0x0084a860]      ; 00448104 | g_CramRectangleCount
    MOV dword ptr [EBP + 0x6e],EDI      ; 0044810a
    TEST ESI,ESI                        ; 0044810d
    JLE 0x00448086                      ; 0044810f
        ;   XREF to: 00448086 (CONDITIONAL_JUMP)  ; LAB_00448086
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00448115
    SUB EAX,dword ptr [EBP + 0x62]      ; 00448118
    MOV EBX,dword ptr [EBP + 0x66]      ; 0044811b
    MOV dword ptr [EBP + 0x52],EAX      ; 0044811e
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00448121
    SUB EAX,EBX                         ; 00448124
    MOV EBX,0x840c14                    ; 00448126 | g_CramRectangles
    MOV dword ptr [EBP + 0x5a],EAX      ; 0044812b
    MOV ESI,dword ptr [0x0084a890]      ; 0044812e | g_CramMapNumber
        ;   Label: LAB_0044812e
    CMP ESI,dword ptr [EBX]             ; 00448134 | g_CramRectangles | DAT_00840c3c
    JNZ 0x004481a2                      ; 00448136
        ;   XREF to: 004481a2 (CONDITIONAL_JUMP)  ; LAB_004481a2
    CMP dword ptr [EBX + 0x24],0x0      ; 00448138 | DAT_00840c38 | DAT_00840c60
    JL 0x004481a2                       ; 0044813c
        ;   XREF to: 004481a2 (CONDITIONAL_JUMP)  ; LAB_004481a2
    MOV EAX,dword ptr [EBP + 0x52]      ; 0044813e
    MOV EDX,dword ptr [EBX + 0x4]       ; 00448141 | DAT_00840c18 | DAT_00840c40
    IMUL EDX,EAX                        ; 00448144
    MOV ECX,dword ptr [0x0084a884]      ; 00448147 | g_CramCurrentAcceptableSize
    MOV EAX,EDX                         ; 0044814d
    SAR EDX,0x1f                        ; 0044814f
    IDIV ECX                            ; 00448152
    MOV EDI,dword ptr [EBP + 0x5a]      ; 00448154
    MOV EDX,dword ptr [EBX + 0x8]       ; 00448157 | DAT_00840c1c | DAT_00840c44
    IMUL EDX,EDI                        ; 0044815a
    MOV ESI,dword ptr [EBP + 0x62]      ; 0044815d
    ADD ESI,EAX                         ; 00448160
    MOV EAX,EDX                         ; 00448162
    SAR EDX,0x1f                        ; 00448164
    IDIV ECX                            ; 00448167
    MOV EDI,dword ptr [EBP + 0x66]      ; 00448169
    ADD EDI,EAX                         ; 0044816c
    CMP ESI,dword ptr [EBP + 0x6a]      ; 0044816e
    JGE 0x004481a2                      ; 00448171
        ;   XREF to: 004481a2 (CONDITIONAL_JUMP)  ; LAB_004481a2
    CMP EDI,dword ptr [EBP + 0x5e]      ; 00448173
    JGE 0x004481a2                      ; 00448176
        ;   XREF to: 004481a2 (CONDITIONAL_JUMP)  ; LAB_004481a2
    PUSH EDI                            ; 00448178
    MOV EAX,dword ptr [EBX + 0x24]      ; 00448179 | DAT_00840c38
    PUSH ESI                            ; 0044817c
    MOV [0x02d02570],EAX                ; 0044817d | g_ActiveRenderColor
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00448182
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00448187
    PUSH EDI                            ; 0044818a
    LEA EAX,[ESI + 0x1]                 ; 0044818b
    PUSH EAX                            ; 0044818e
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0044818f
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00448194
    INC EDI                             ; 00448197
    PUSH EDI                            ; 00448198
    PUSH ESI                            ; 00448199
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0044819a
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0044819f
    MOV EDI,dword ptr [EBP + 0x6e]      ; 004481a2
        ;   Label: LAB_004481a2
    MOV EDX,dword ptr [0x0084a860]      ; 004481a5 | g_CramRectangleCount
    INC EDI                             ; 004481ab
    ADD EBX,0x28                        ; 004481ac | DAT_00840c3c
    MOV dword ptr [EBP + 0x6e],EDI      ; 004481af
    CMP EDI,EDX                         ; 004481b2
    JGE 0x00448086                      ; 004481b4
        ;   XREF to: 00448086 (CONDITIONAL_JUMP)  ; LAB_00448086
    JMP 0x0044812e                      ; 004481ba
        ;   XREF to: 0044812e (UNCONDITIONAL_JUMP)  ; LAB_0044812e
    MOV EAX,[0x0084a85c]                ; 004481bf | g_CramPlacedTextureCount
        ;   Label: LAB_004481bf
    JMP 0x004480c4                      ; 004481c4
        ;   XREF to: 004480c4 (UNCONDITIONAL_JUMP)  ; LAB_004480c4

