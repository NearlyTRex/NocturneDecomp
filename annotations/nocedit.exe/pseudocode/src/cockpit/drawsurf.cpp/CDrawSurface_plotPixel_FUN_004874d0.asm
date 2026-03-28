; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface *this_ptr,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
;
; XREF[5]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0 at 00488818
;   cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0 at 00487d4e
;   cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0 at 00487b92
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_004878e0 at 004878ff
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 00489ff5
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_00621d04
;   TerminatedCString s_Invalid_bitsPerPixel_00621d1c
;   TerminatedCString s_cockpit_drawsurf_cpp_00621d32
;   TerminatedCString s_Invalid_bitsPerPixel_00621d4a
;   int g_BitsPerPixel = 0x8
;   int g_CurrentDrawColor
;   int g_UseRGBConversion
;   int g_OriginalColorValue
;   int g_PackedPixelColor
;   void*[1200] g_ScreenBufferArray
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004874d0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
    PUSH ESI                            ; 004874d1
    PUSH EDI                            ; 004874d2
    PUSH EBP                            ; 004874d3
    MOV EDX,dword ptr [ESP + 0x14]      ; 004874d4
    MOV EAX,dword ptr [ESP + 0x18]      ; 004874d8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004874dc
    MOV EBX,dword ptr [EDX + 0x8]       ; 004874e0
    MOV ESI,dword ptr [EDX + 0xc]       ; 004874e3
    MOV EDI,dword ptr [EDX + 0x10]      ; 004874e6
    ADD EAX,EBX                         ; 004874e9
    ADD ECX,ESI                         ; 004874eb
    CMP EAX,EDI                         ; 004874ed
    JL 0x0048753b                       ; 004874ef
        ;   XREF to: 0048753b (CONDITIONAL_JUMP)  ; LAB_0048753b
    CMP EAX,dword ptr [EDX + 0x18]      ; 004874f1
    JG 0x0048753b                       ; 004874f4
        ;   XREF to: 0048753b (CONDITIONAL_JUMP)  ; LAB_0048753b
    CMP ECX,dword ptr [EDX + 0x14]      ; 004874f6
    JL 0x0048753b                       ; 004874f9
        ;   XREF to: 0048753b (CONDITIONAL_JUMP)  ; LAB_0048753b
    CMP ECX,dword ptr [EDX + 0x1c]      ; 004874fb
    JG 0x0048753b                       ; 004874fe
        ;   XREF to: 0048753b (CONDITIONAL_JUMP)  ; LAB_0048753b
    MOV EDI,dword ptr [0x02c6d55c]      ; 00487500 | g_UseRGBConversion
    LEA ESI,[EAX + EAX*0x1]             ; 00487506
    SHL ECX,0x2                         ; 00487509
    LEA EBX,[EAX*0x4 + 0x0]             ; 0048750c
    TEST EDI,EDI                        ; 00487513
    JNZ 0x004875e2                      ; 00487515
        ;   XREF to: 004875e2 (CONDITIONAL_JUMP)  ; LAB_004875e2
    MOV EDX,dword ptr [0x0067939c]      ; 0048751b | g_BitsPerPixel
    CMP EDX,0x10                        ; 00487521
    JNC 0x00487592                      ; 00487524
        ;   XREF to: 00487592 (CONDITIONAL_JUMP)  ; LAB_00487592
    CMP EDX,0x8                         ; 00487526
    JNZ 0x0048756a                      ; 00487529
        ;   XREF to: 0048756a (CONDITIONAL_JUMP)  ; LAB_0048756a
    MOV EDX,dword ptr [ECX + 0x2cf6a9c] ; 0048752b | g_ScreenBufferArray
    ADD EAX,EDX                         ; 00487531
    MOV DL,byte ptr [0x02c6d550]        ; 00487533 | g_CurrentDrawColor
    MOV byte ptr [EAX],DL               ; 00487539
    POP EBP                             ; 0048753b
        ;   Label: LAB_0048753b
    POP EDI                             ; 0048753c
    POP ESI                             ; 0048753d
    POP EBX                             ; 0048753e
    RET                                 ; 0048753f
    MOV EAX,dword ptr [ECX + 0x2cf6a9c] ; 00487540 | g_ScreenBufferArray
        ;   Label: LAB_00487540
    ADD ESI,EAX                         ; 00487546
    MOV AX,[0x02c6d550]                 ; 00487548 | g_CurrentDrawColor
    MOV word ptr [ESI],AX               ; 0048754e
    POP EBP                             ; 00487551
    POP EDI                             ; 00487552
    POP ESI                             ; 00487553
    POP EBX                             ; 00487554
    RET                                 ; 00487555
    MOV EAX,dword ptr [ECX + 0x2cf6a9c] ; 00487556 | g_ScreenBufferArray
        ;   Label: LAB_00487556
    ADD EBX,EAX                         ; 0048755c
    MOV EAX,[0x02c6d550]                ; 0048755e | g_CurrentDrawColor
    MOV dword ptr [EBX],EAX             ; 00487563
    POP EBP                             ; 00487565
    POP EDI                             ; 00487566
    POP ESI                             ; 00487567
    POP EBX                             ; 00487568
    RET                                 ; 00487569
    MOV ECX,0x621d04                    ; 0048756a | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_0048756a
    MOV EBX,0x18d                       ; 0048756f
    PUSH 0x621d1c                       ; 00487574 | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00487579 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0048757f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00487585
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0048758a
    POP EBP                             ; 0048758d
    POP EDI                             ; 0048758e
    POP ESI                             ; 0048758f
    POP EBX                             ; 00487590
    RET                                 ; 00487591
    JBE 0x00487540                      ; 00487592
        ;   XREF to: 00487540 (CONDITIONAL_JUMP)  ; LAB_00487540
        ;   Label: LAB_00487592
    CMP EDX,0x20                        ; 00487594
    JZ 0x00487556                       ; 00487597
        ;   XREF to: 00487556 (CONDITIONAL_JUMP)  ; LAB_00487556
    JMP 0x0048756a                      ; 00487599
        ;   XREF to: 0048756a (UNCONDITIONAL_JUMP)  ; LAB_0048756a
    MOV EAX,dword ptr [ECX + 0x2cf6a9c] ; 0048759b | g_ScreenBufferArray
        ;   Label: LAB_0048759b
    XOR EDX,EDX                         ; 004875a1
    MOV CL,byte ptr [0x02c6d560]        ; 004875a3 | g_OriginalColorValue
    MOV DX,word ptr [ESI + EAX*0x1]     ; 004875a9
    MOV EBP,dword ptr [0x02c6d570]      ; 004875ad | g_PackedPixelColor
    SHR EDX,CL                          ; 004875b3
    AND EDX,EBP                         ; 004875b5
    MOV word ptr [ESI + EAX*0x1],DX     ; 004875b7
    POP EBP                             ; 004875bb
    POP EDI                             ; 004875bc
    POP ESI                             ; 004875bd
    POP EBX                             ; 004875be
    RET                                 ; 004875bf
    MOV EDX,dword ptr [ECX + 0x2cf6a9c] ; 004875c0 | g_ScreenBufferArray
        ;   Label: LAB_004875c0
    MOV CL,byte ptr [0x02c6d560]        ; 004875c6 | g_OriginalColorValue
    MOV EAX,dword ptr [EDX + EBX*0x1]   ; 004875cc
    SHR EAX,CL                          ; 004875cf
    MOV ECX,EAX                         ; 004875d1
    MOV EAX,[0x02c6d570]                ; 004875d3 | g_PackedPixelColor
    AND ECX,EAX                         ; 004875d8
    MOV dword ptr [EDX + EBX*0x1],ECX   ; 004875da
    POP EBP                             ; 004875dd
    POP EDI                             ; 004875de
    POP ESI                             ; 004875df
    POP EBX                             ; 004875e0
    RET                                 ; 004875e1
    MOV EAX,[0x0067939c]                ; 004875e2 | g_BitsPerPixel
        ;   Label: LAB_004875e2
    CMP EAX,0x10                        ; 004875e7
    JNC 0x004875f7                      ; 004875ea
        ;   XREF to: 004875f7 (CONDITIONAL_JUMP)  ; LAB_004875f7
    CMP EAX,0x8                         ; 004875ec
    JZ 0x0048753b                       ; 004875ef
        ;   XREF to: 0048753b (CONDITIONAL_JUMP)  ; LAB_0048753b
    JMP 0x004875fe                      ; 004875f5
        ;   XREF to: 004875fe (UNCONDITIONAL_JUMP)  ; LAB_004875fe
    JBE 0x0048759b                      ; 004875f7
        ;   XREF to: 0048759b (CONDITIONAL_JUMP)  ; LAB_0048759b
        ;   Label: LAB_004875f7
    CMP EAX,0x20                        ; 004875f9
    JZ 0x004875c0                       ; 004875fc
        ;   XREF to: 004875c0 (CONDITIONAL_JUMP)  ; LAB_004875c0
    MOV EAX,0x621d32                    ; 004875fe | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_004875fe
    MOV EDX,0x19e                       ; 00487603
    PUSH 0x621d4a                       ; 00487608 | = "Invalid bitsPerPixel!"
    MOV [0x02f0ca48],EAX                ; 0048760d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00487612 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00487618
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0048761d
    POP EBP                             ; 00487620
    POP EDI                             ; 00487621
    POP ESI                             ; 00487622
    POP EBX                             ; 00487623
    RET                                 ; 00487624

