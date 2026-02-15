; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_mapFrameBuffer_FUN_00403430(int width,int height,int bits_per_pixel,int stride,void *frame_buffer)
;
; Parameters:
; int              Stack[0x4]:4   width
; int              Stack[0x8]:4   height
; int              Stack[0xc]:4   bits_per_pixel
; int              Stack[0x10]:4   stride
; void *           Stack[0x14]:4   frame_buffer
;
; XREF[1]:
;   engine_2d.c_mapTextureFrameBuffer_FUN_00403650 at 00403663
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_00613239
;   TerminatedCString s_mapFrameBuffer_already_m_00613248
;   TerminatedCString s_engine_2d_c_00613269
;   TerminatedCString s_mapFrameBuffer_invalid_b_00613278
;   TerminatedCString s_engine_2d_c_0061329c
;   TerminatedCString s_mapFrameBuffer_invalid_s_006132ab
;   TerminatedCString s_engine_2d_c_006132cb
;   TerminatedCString s_mapFrameBuffer_invalid_s_006132da
;   TerminatedCString s_engine_2d_c_006132f8
;   TerminatedCString s_mapFrameBuffer_ySize_too_00613307
;   TerminatedCString s_engine_2d_c_00613327
;   TerminatedCString s_mapFrameBuffer_invalid_b_00613336
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   ... and 17 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403430
        ;   Label: engine_2d.c_mapFrameBuffer_FUN_00403430
    PUSH ESI                            ; 00403431
    PUSH EDI                            ; 00403432
    PUSH EBP                            ; 00403433
    MOV EBP,dword ptr [ESP + 0x18]      ; 00403434
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00403438
    MOV ESI,dword ptr [ESP + 0x20]      ; 0040343c
    MOV EBX,dword ptr [ESP + 0x24]      ; 00403440
    CMP dword ptr [0x00772a38],0x0      ; 00403444 | g_StoredWindowWidth
    JNZ 0x00403615                      ; 0040344b
        ;   XREF to: 00403615 (CONDITIONAL_JUMP)  ; LAB_00403615
    TEST EBX,EBX                        ; 00403451
        ;   Label: LAB_00403451
    JNZ 0x00403469                      ; 00403453
        ;   XREF to: 00403469 (CONDITIONAL_JUMP)  ; LAB_00403469
    MOV EDX,EBP                         ; 00403455
    IMUL EDX,ESI                        ; 00403457
    MOV EAX,EDX                         ; 0040345a
    SAR EDX,0x1f                        ; 0040345c
    SHL EDX,0x3                         ; 0040345f
    SBB EAX,EDX                         ; 00403462
    SAR EAX,0x3                         ; 00403464
    MOV EBX,EAX                         ; 00403467
    CMP ESI,0x8                         ; 00403469
        ;   Label: LAB_00403469
    JZ 0x0040349b                       ; 0040346c
        ;   XREF to: 0040349b (CONDITIONAL_JUMP)  ; LAB_0040349b
    CMP ESI,0x10                        ; 0040346e
    JZ 0x0040349b                       ; 00403471
        ;   XREF to: 0040349b (CONDITIONAL_JUMP)  ; LAB_0040349b
    CMP ESI,0x20                        ; 00403473
    JZ 0x0040349b                       ; 00403476
        ;   XREF to: 0040349b (CONDITIONAL_JUMP)  ; LAB_0040349b
    MOV EDX,0x613269                    ; 00403478 | = "..\\engine\\2d.c"
    MOV ECX,0x9a2                       ; 0040347d
    PUSH 0x613278                       ; 00403482 | = "mapFrameBuffer - invalid bits/pixel"
    MOV dword ptr [0x02f0ca48],EDX      ; 00403487 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0040348d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00403493
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00403498
    MOV EDX,EBP                         ; 0040349b
        ;   Label: LAB_0040349b
    IMUL EDX,ESI                        ; 0040349d
    MOV EAX,EDX                         ; 004034a0
    SAR EDX,0x1f                        ; 004034a2
    SHL EDX,0x3                         ; 004034a5
    SBB EAX,EDX                         ; 004034a8
    SAR EAX,0x3                         ; 004034aa
    MOV ECX,EAX                         ; 004034ad
    MOV EAX,EBX                         ; 004034af
    CDQ                                 ; 004034b1
    XOR EAX,EDX                         ; 004034b2
    SUB EAX,EDX                         ; 004034b4
    CMP EAX,ECX                         ; 004034b6
    JGE 0x004034dc                      ; 004034b8
        ;   XREF to: 004034dc (CONDITIONAL_JUMP)  ; LAB_004034dc
    MOV EAX,0x61329c                    ; 004034ba | = "..\\engine\\2d.c"
    MOV EDX,0x9a3                       ; 004034bf
    PUSH 0x6132ab                       ; 004034c4 | = "mapFrameBuffer - invalid stride"
    MOV [0x02f0ca48],EAX                ; 004034c9 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004034ce | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004034d4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004034d9
    CMP EBP,0x1                         ; 004034dc
        ;   Label: LAB_004034dc
    JGE 0x0040363c                      ; 004034df
        ;   XREF to: 0040363c (CONDITIONAL_JUMP)  ; LAB_0040363c
    MOV ECX,0x6132cb                    ; 004034e5 | = "..\\engine\\2d.c"
        ;   Label: LAB_004034e5
    MOV EAX,0x9a4                       ; 004034ea
    PUSH 0x6132da                       ; 004034ef | = "mapFrameBuffer - invalid size"
    MOV dword ptr [0x02f0ca48],ECX      ; 004034f4 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004034fa | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004034ff
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00403504
    CMP EDI,0x4b0                       ; 00403507
        ;   Label: LAB_00403507
    JLE 0x00403532                      ; 0040350d
        ;   XREF to: 00403532 (CONDITIONAL_JUMP)  ; LAB_00403532
    MOV EDX,0x6132f8                    ; 0040350f | = "..\\engine\\2d.c"
    MOV ECX,0x9a5                       ; 00403514
    PUSH 0x613307                       ; 00403519 | = "mapFrameBuffer - ySize too big!"
    MOV dword ptr [0x02f0ca48],EDX      ; 0040351e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00403524 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040352a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0040352f
    CMP dword ptr [ESP + 0x14],0x0      ; 00403532
        ;   Label: LAB_00403532
    JNZ 0x0040355c                      ; 00403537
        ;   XREF to: 0040355c (CONDITIONAL_JUMP)  ; LAB_0040355c
    MOV EDX,0x613327                    ; 00403539 | = "..\\engine\\2d.c"
    MOV ECX,0x9a6                       ; 0040353e
    PUSH 0x613336                       ; 00403543 | = "mapFrameBuffer - invalid buffer!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00403548 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0040354e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00403554
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00403559
    MOV EAX,[0x00679394]                ; 0040355c | g_WindowWidth
        ;   Label: LAB_0040355c
    MOV [0x00772a38],EAX                ; 00403561 | g_StoredWindowWidth
    MOV EAX,[0x00679398]                ; 00403566 | g_WindowHeight
    MOV EDX,dword ptr [0x02cf6a9c]      ; 0040356b | g_ScreenBufferArray
    MOV [0x00772a3c],EAX                ; 00403571 | g_StoredWindowHeight
    MOV EAX,[0x02d02558]                ; 00403576 | g_ClipLeft
    XOR ECX,ECX                         ; 0040357b
    MOV [0x00772a40],EAX                ; 0040357d | g_StoredClipLeft
    MOV EAX,[0x02d0255c]                ; 00403582 | g_ClipTop
    MOV dword ptr [0x00679394],EBP      ; 00403587 | g_WindowWidth
    MOV [0x00772a44],EAX                ; 0040358d | g_StoredClipTop
    MOV EAX,[0x02d02560]                ; 00403592 | g_ClipRight
    DEC EBP                             ; 00403597
    MOV [0x00772a48],EAX                ; 00403598 | g_StoredClipRight
    MOV EAX,[0x02d02564]                ; 0040359d | g_ClipBottom
    MOV dword ptr [0x00679398],EDI      ; 004035a2 | g_WindowHeight
    MOV [0x00772a4c],EAX                ; 004035a8 | g_StoredClipBottom
    MOV EAX,[0x0067939c]                ; 004035ad | g_BitsPerPixel
    MOV dword ptr [0x02d02558],ECX      ; 004035b2 | g_ClipLeft
    MOV [0x00772a50],EAX                ; 004035b8 | g_StoredBitsPerPixel
    MOV EAX,[0x02cf6a9c]                ; 004035bd | g_ScreenBufferArray
    MOV dword ptr [0x02d0255c],ECX      ; 004035c2 | g_ClipTop
    MOV [0x00772a54],EAX                ; 004035c8 | g_StoredMappedFrameBuffer
    MOV EAX,[0x02cf6aa0]                ; 004035cd | g_ScreenBufferArray[1]
    MOV dword ptr [0x02d02560],EBP      ; 004035d2 | g_ClipRight
    SUB EAX,EDX                         ; 004035d8
    MOV dword ptr [0x0067939c],ESI      ; 004035da | g_BitsPerPixel
    MOV [0x00772a58],EAX                ; 004035e0 | g_ScreenBufferStride
    LEA EAX,[EDI + -0x1]                ; 004035e5
    MOV EDX,dword ptr [ESP + 0x14]      ; 004035e8
    MOV [0x02d02564],EAX                ; 004035ec | g_ClipBottom
    TEST EDI,EDI                        ; 004035f1
    JLE 0x00403610                      ; 004035f3
        ;   XREF to: 00403610 (CONDITIONAL_JUMP)  ; LAB_00403610
    LEA ECX,[EDI*0x4 + 0x0]             ; 004035f5
    XOR EAX,EAX                         ; 004035fc
    MOV dword ptr [EAX + 0x2cf6a9c],EDX ; 004035fe | g_ScreenBufferArray | g_ScreenBufferArray[1]
        ;   Label: LAB_004035fe
    ADD EAX,0x4                         ; 00403604
    ADD EDX,EBX                         ; 00403607
    CMP EAX,ECX                         ; 00403609
    JL 0x004035fe                       ; 0040360b
        ;   XREF to: 004035fe (CONDITIONAL_JUMP)  ; LAB_004035fe
    LEA EAX,[EAX]                       ; 0040360d
    POP EBP                             ; 00403610
        ;   Label: LAB_00403610
    POP EDI                             ; 00403611
    POP ESI                             ; 00403612
    POP EBX                             ; 00403613
    RET                                 ; 00403614
    MOV ECX,0x613239                    ; 00403615 | = "..\\engine\\2d.c"
        ;   Label: LAB_00403615
    MOV EAX,0x99a                       ; 0040361a
    PUSH 0x613248                       ; 0040361f | = "mapFrameBuffer - already mapped!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00403624 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0040362a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040362f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00403634
    JMP 0x00403451                      ; 00403637
        ;   XREF to: 00403451 (UNCONDITIONAL_JUMP)  ; LAB_00403451
    CMP EDI,0x1                         ; 0040363c
        ;   Label: LAB_0040363c
    JL 0x004034e5                       ; 0040363f
        ;   XREF to: 004034e5 (CONDITIONAL_JUMP)  ; LAB_004034e5
    JMP 0x00403507                      ; 00403645
        ;   XREF to: 00403507 (UNCONDITIONAL_JUMP)  ; LAB_00403507

