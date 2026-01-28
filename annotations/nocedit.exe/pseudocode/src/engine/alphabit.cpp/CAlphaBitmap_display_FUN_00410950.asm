; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap *this_ptr,int x,int y,int alpha)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   alpha
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[12]:
;   core_game.cpp_CGame_displayActStats_FUN_004e3800 at 004e384f
;   core_game.cpp_CGame_finishAct_FUN_004e3b90 at 004e3cda
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e41ba
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 at 004daf48
;   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 at 00501222
;   core_level.cpp_CLevelLoader_show_FUN_00503dc0 at 00503ec4
;   core_main.c_finalizeGameSystems_FUN_00508570 at 00508615
;   core_main.c_initializeGameSystems_FUN_00507a60 at 005080e6
;   core_main.c_showPromoScreen_FUN_00508340 at 005083b4
;   core_menu.cpp_showCalibrationTestPattern_FUN_00510a50 at 00510aea
;   ... and 2 more
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0
;   wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7
;   wincore_windll.cpp_renderAlphaRow32_FUN_005b555c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410950
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
    PUSH ESI                            ; 00410951
    PUSH EDI                            ; 00410952
    PUSH EBP                            ; 00410953
    SUB ESP,0x1c                        ; 00410954
    MOV ESI,dword ptr [ESP + 0x30]      ; 00410957
    MOV EDI,dword ptr [ESP + 0x34]      ; 0041095b
    MOV EAX,dword ptr [ESI + 0xc]       ; 0041095f
    ADD EAX,EDI                         ; 00410962
    TEST EAX,EAX                        ; 00410964
    JL 0x00410987                       ; 00410966
        ;   XREF to: 00410987 (CONDITIONAL_JUMP)  ; LAB_00410987
    CMP EDI,dword ptr [0x00679394]      ; 00410968 | g_WindowWidth
    JGE 0x00410987                      ; 0041096e
        ;   XREF to: 00410987 (CONDITIONAL_JUMP)  ; LAB_00410987
    MOV EAX,dword ptr [ESP + 0x38]      ; 00410970
    ADD EAX,dword ptr [ESI + 0x10]      ; 00410974
    TEST EAX,EAX                        ; 00410977
    JL 0x00410987                       ; 00410979
        ;   XREF to: 00410987 (CONDITIONAL_JUMP)  ; LAB_00410987
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041097b
    CMP EAX,dword ptr [0x00679398]      ; 0041097f | g_WindowHeight
    JL 0x0041098f                       ; 00410985
        ;   XREF to: 0041098f (CONDITIONAL_JUMP)  ; LAB_0041098f
    ADD ESP,0x1c                        ; 00410987
        ;   Label: LAB_00410987
    POP EBP                             ; 0041098a
    POP EDI                             ; 0041098b
    POP ESI                             ; 0041098c
    POP EBX                             ; 0041098d
    RET                                 ; 0041098e
    PUSH ESI                            ; 0041098f
        ;   Label: LAB_0041098f
    CALL engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0 ; 00410990
        ;   XREF to: 00410cf0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 00410995
    MOV EAX,dword ptr [ESI]             ; 00410998
    MOV dword ptr [ESP + 0x18],EAX      ; 0041099a
    MOV EAX,[0x0067939c]                ; 0041099e | g_BitsPerPixel
    MOV EBP,dword ptr [ESI + 0x4]       ; 004109a3
    CMP EAX,0x20                        ; 004109a6
    JNZ 0x00410a55                      ; 004109a9
        ;   XREF to: 00410a55 (CONDITIONAL_JUMP)  ; LAB_00410a55
    XOR EBX,EBX                         ; 004109af
    MOV EAX,dword ptr [ESI + 0x10]      ; 004109b1
    MOV dword ptr [ESP + 0x8],EBX       ; 004109b4
    TEST EAX,EAX                        ; 004109b8
    JLE 0x00410987                      ; 004109ba
        ;   XREF to: 00410987 (CONDITIONAL_JUMP)  ; LAB_00410987
    LEA EAX,[EDI*0x4 + 0x0]             ; 004109bc
    MOV dword ptr [ESP + 0x4],EAX       ; 004109c3
    MOV EAX,dword ptr [ESP + 0x38]      ; 004109c7
    MOV dword ptr [ESP + 0x14],EAX      ; 004109cb
    MOV ECX,dword ptr [ESP + 0x14]      ; 004109cf
        ;   Label: LAB_004109cf
    TEST ECX,ECX                        ; 004109d3
    JL 0x00410a1f                       ; 004109d5
        ;   XREF to: 00410a1f (CONDITIONAL_JUMP)  ; LAB_00410a1f
    CMP ECX,dword ptr [0x00679398]      ; 004109d7 | g_WindowHeight
    JGE 0x00410a1f                      ; 004109dd
        ;   XREF to: 00410a1f (CONDITIONAL_JUMP)  ; LAB_00410a1f
    MOV ECX,dword ptr [ECX*0x4 + 0x2cf6a9c] ; 004109df | g_ScreenBufferArray
    MOV EAX,dword ptr [ESI + 0xc]       ; 004109e6
    XOR EDX,EDX                         ; 004109e9
    TEST EDI,EDI                        ; 004109eb
    JL 0x00410a4d                       ; 004109ed
        ;   XREF to: 00410a4d (CONDITIONAL_JUMP)  ; LAB_00410a4d
    ADD ECX,dword ptr [ESP + 0x4]       ; 004109ef
    LEA EBX,[EDI + EAX*0x1]             ; 004109f3
        ;   Label: LAB_004109f3
    CMP EBX,dword ptr [0x00679394]      ; 004109f6 | g_WindowWidth
    JLE 0x00410a05                      ; 004109fc
        ;   XREF to: 00410a05 (CONDITIONAL_JUMP)  ; LAB_00410a05
    MOV EAX,[0x00679394]                ; 004109fe | g_WindowWidth
    SUB EAX,EDI                         ; 00410a03
    PUSH EAX                            ; 00410a05
        ;   Label: LAB_00410a05
    MOV EAX,dword ptr [ESP + 0x40]      ; 00410a06
    PUSH EAX                            ; 00410a0a
    LEA EAX,[EDX + EBP*0x1]             ; 00410a0b
    MOV EBX,dword ptr [ESP + 0x20]      ; 00410a0e
    PUSH EAX                            ; 00410a12
    ADD EDX,EBX                         ; 00410a13
    PUSH EDX                            ; 00410a15
    PUSH ECX                            ; 00410a16
    CALL wincore_windll.cpp_renderAlphaRow32_FUN_005b555c ; 00410a17
        ;   XREF to: 005b555c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_renderAlphaRow32_FUN_005b555c(uint * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, ...)
    ADD ESP,0x14                        ; 00410a1c
    MOV EDX,dword ptr [ESP + 0x18]      ; 00410a1f
        ;   Label: LAB_00410a1f
    MOV EBX,dword ptr [ESP + 0x14]      ; 00410a23
    MOV EAX,dword ptr [ESI + 0xc]       ; 00410a27
    INC EBX                             ; 00410a2a
    ADD EDX,EAX                         ; 00410a2b
    ADD EBP,EAX                         ; 00410a2d
    MOV EAX,dword ptr [ESP + 0x8]       ; 00410a2f
    MOV dword ptr [ESP + 0x18],EDX      ; 00410a33
    MOV dword ptr [ESP + 0x14],EBX      ; 00410a37
    INC EAX                             ; 00410a3b
    MOV EDX,dword ptr [ESI + 0x10]      ; 00410a3c
    MOV dword ptr [ESP + 0x8],EAX       ; 00410a3f
    CMP EAX,EDX                         ; 00410a43
    JGE 0x00410987                      ; 00410a45
        ;   XREF to: 00410987 (CONDITIONAL_JUMP)  ; LAB_00410987
    JMP 0x004109cf                      ; 00410a4b
        ;   XREF to: 004109cf (UNCONDITIONAL_JUMP)  ; LAB_004109cf
    MOV EDX,EDI                         ; 00410a4d
        ;   Label: LAB_00410a4d
    NEG EDX                             ; 00410a4f
    SUB EAX,EDX                         ; 00410a51
    JMP 0x004109f3                      ; 00410a53
        ;   XREF to: 004109f3 (UNCONDITIONAL_JUMP)  ; LAB_004109f3
    XOR EDX,EDX                         ; 00410a55
        ;   Label: LAB_00410a55
    MOV ECX,dword ptr [ESI + 0x10]      ; 00410a57
    MOV dword ptr [ESP + 0xc],EDX       ; 00410a5a
    TEST ECX,ECX                        ; 00410a5e
    JLE 0x00410987                      ; 00410a60
        ;   XREF to: 00410987 (CONDITIONAL_JUMP)  ; LAB_00410987
    LEA EAX,[EDI + EDI*0x1]             ; 00410a66
    MOV dword ptr [ESP],EAX             ; 00410a69
    MOV EAX,dword ptr [ESP + 0x38]      ; 00410a6c
    MOV dword ptr [ESP + 0x10],EAX      ; 00410a70
    MOV ECX,dword ptr [ESP + 0x10]      ; 00410a74
        ;   Label: LAB_00410a74
    TEST ECX,ECX                        ; 00410a78
    JL 0x00410ac3                       ; 00410a7a
        ;   XREF to: 00410ac3 (CONDITIONAL_JUMP)  ; LAB_00410ac3
    CMP ECX,dword ptr [0x00679398]      ; 00410a7c | g_WindowHeight
    JGE 0x00410ac3                      ; 00410a82
        ;   XREF to: 00410ac3 (CONDITIONAL_JUMP)  ; LAB_00410ac3
    MOV ECX,dword ptr [ECX*0x4 + 0x2cf6a9c] ; 00410a84 | g_ScreenBufferArray
    MOV EAX,dword ptr [ESI + 0xc]       ; 00410a8b
    XOR EDX,EDX                         ; 00410a8e
    TEST EDI,EDI                        ; 00410a90
    JL 0x00410af1                       ; 00410a92
        ;   XREF to: 00410af1 (CONDITIONAL_JUMP)  ; LAB_00410af1
    ADD ECX,dword ptr [ESP]             ; 00410a94
    LEA EBX,[EDI + EAX*0x1]             ; 00410a97
        ;   Label: LAB_00410a97
    CMP EBX,dword ptr [0x00679394]      ; 00410a9a | g_WindowWidth
    JLE 0x00410aa9                      ; 00410aa0
        ;   XREF to: 00410aa9 (CONDITIONAL_JUMP)  ; LAB_00410aa9
    MOV EAX,[0x00679394]                ; 00410aa2 | g_WindowWidth
    SUB EAX,EDI                         ; 00410aa7
    PUSH EAX                            ; 00410aa9
        ;   Label: LAB_00410aa9
    MOV EAX,dword ptr [ESP + 0x40]      ; 00410aaa
    PUSH EAX                            ; 00410aae
    LEA EAX,[EDX + EBP*0x1]             ; 00410aaf
    MOV EBX,dword ptr [ESP + 0x20]      ; 00410ab2
    PUSH EAX                            ; 00410ab6
    ADD EDX,EBX                         ; 00410ab7
    PUSH EDX                            ; 00410ab9
    PUSH ECX                            ; 00410aba
    CALL wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7 ; 00410abb
        ;   XREF to: 005b55f7 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7(ushort * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, ...)
    ADD ESP,0x14                        ; 00410ac0
    MOV EDX,dword ptr [ESP + 0x18]      ; 00410ac3
        ;   Label: LAB_00410ac3
    MOV EBX,dword ptr [ESP + 0x10]      ; 00410ac7
    MOV EAX,dword ptr [ESI + 0xc]       ; 00410acb
    INC EBX                             ; 00410ace
    ADD EDX,EAX                         ; 00410acf
    ADD EBP,EAX                         ; 00410ad1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00410ad3
    MOV dword ptr [ESP + 0x18],EDX      ; 00410ad7
    MOV dword ptr [ESP + 0x10],EBX      ; 00410adb
    INC EAX                             ; 00410adf
    MOV EDX,dword ptr [ESI + 0x10]      ; 00410ae0
    MOV dword ptr [ESP + 0xc],EAX       ; 00410ae3
    CMP EAX,EDX                         ; 00410ae7
    JGE 0x00410987                      ; 00410ae9
        ;   XREF to: 00410987 (CONDITIONAL_JUMP)  ; LAB_00410987
    JMP 0x00410a74                      ; 00410aef
        ;   XREF to: 00410a74 (UNCONDITIONAL_JUMP)  ; LAB_00410a74
    MOV EDX,EDI                         ; 00410af1
        ;   Label: LAB_00410af1
    NEG EDX                             ; 00410af3
    SUB EAX,EDX                         ; 00410af5
    JMP 0x00410a97                      ; 00410af7
        ;   XREF to: 00410a97 (UNCONDITIONAL_JUMP)  ; LAB_00410a97

