; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColorRGB_FUN_00487220(int red,int green,int blue)
;
; Parameters:
; int              Stack[0x4]:4   red
; int              Stack[0x8]:4   green
; int              Stack[0xc]:4   blue
;
; XREF[12]:
;   cockpit_drawsurf.cpp_setColorBlack_FUN_00487380 at 00487386
;   cockpit_drawsurf.cpp_setColorBlue_FUN_004873f0 at 004873f9
;   cockpit_drawsurf.cpp_setColorCyan_FUN_00487450 at 0048745c
;   cockpit_drawsurf.cpp_setColorDarkGray_FUN_00487470 at 00487476
;   cockpit_drawsurf.cpp_setColorGray_FUN_00487480 at 0048748f
;   cockpit_drawsurf.cpp_setColorGreen_FUN_004873d0 at 004873d9
;   cockpit_drawsurf.cpp_setColorLightGray_FUN_004874a0 at 004874af
;   cockpit_drawsurf.cpp_setColorMagenta_FUN_00487430 at 0048743c
;   cockpit_drawsurf.cpp_setColorRed_FUN_004873b0 at 004873b9
;   cockpit_drawsurf.cpp_setColorWhite_FUN_00487390 at 0048739f
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_00621cbd
;   TerminatedCString s_Invalid_bitsPerPixel_in__00621cd5
;   int g_BitsPerPixel = 0x8
;   int g_CurrentDrawColor
;   int g_PaletteColorIndex
;   int g_UseRGBConversion
;   uchar[32768] g_ColorCubeLookup
;   _BIT_INTEGER32 g_RedBitPosition
;   int g_RedScaleFactor
;   _BIT_INTEGER32 g_GreenBitPosition
;   int g_GreenScaleFactor
;   _BIT_INTEGER32 g_BlueBitPosition
;   int g_BlueScaleFactor
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487220
        ;   Label: cockpit_drawsurf.cpp_setColorRGB_FUN_00487220
    PUSH ESI                            ; 00487221
    PUSH EDI                            ; 00487222
    PUSH EBP                            ; 00487223
    SUB ESP,0x8                         ; 00487224
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00487227
    MOV ESI,dword ptr [ESP + 0x20]      ; 0048722b
    MOV EBX,dword ptr [ESP + 0x24]      ; 0048722f
    AND EAX,0xff                        ; 00487233
    AND ESI,0xff                        ; 00487238
    MOV EDI,EAX                         ; 0048723e
    MOV ECX,ESI                         ; 00487240
    SAR EDI,0x3                         ; 00487242
    SAR ECX,0x3                         ; 00487245
    SHL EDI,0xa                         ; 00487248
    SHL ECX,0x5                         ; 0048724b
    AND EBX,0xff                        ; 0048724e
    ADD ECX,EDI                         ; 00487254
    MOV EDI,EBX                         ; 00487256
    SAR EDI,0x3                         ; 00487258
    ADD EDI,ECX                         ; 0048725b
    XOR ECX,ECX                         ; 0048725d
    MOV CL,byte ptr [EDI + 0x2cf9020]   ; 0048725f | g_ColorCubeLookup
    XOR EDX,EDX                         ; 00487265
    MOV dword ptr [0x02c6d554],ECX      ; 00487267 | g_PaletteColorIndex
    MOV ECX,dword ptr [0x0067939c]      ; 0048726d | g_BitsPerPixel
    MOV dword ptr [0x02c6d55c],EDX      ; 00487273 | g_UseRGBConversion
    CMP ECX,0x10                        ; 00487279
    JNC 0x0048734b                      ; 0048727c
        ;   XREF to: 0048734b (CONDITIONAL_JUMP)  ; LAB_0048734b
    CMP ECX,0x8                         ; 00487282
    JNZ 0x00487356                      ; 00487285
        ;   XREF to: 00487356 (CONDITIONAL_JUMP)  ; LAB_00487356
    XOR EAX,EAX                         ; 0048728b
    MOV AL,byte ptr [EDI + 0x2cf9020]   ; 0048728d | g_ColorCubeLookup
    MOV [0x02c6d550],EAX                ; 00487293 | g_CurrentDrawColor
    ADD ESP,0x8                         ; 00487298
    POP EBP                             ; 0048729b
    POP EDI                             ; 0048729c
    POP ESI                             ; 0048729d
    POP EBX                             ; 0048729e
    RET                                 ; 0048729f
    DIV dword ptr [0x02d01f28]          ; 004872a0 | g_RedScaleFactor
        ;   Label: LAB_004872a0
    MOV dword ptr [ESP],ESI             ; 004872a6
    MOV EDI,EAX                         ; 004872a9
    XOR EDX,EDX                         ; 004872ab
    MOV EAX,ESI                         ; 004872ad
    DIV dword ptr [0x02d01f34]          ; 004872af | g_GreenScaleFactor
    MOV EBP,dword ptr [0x02d01f40]      ; 004872b5 | g_BlueScaleFactor
    MOV dword ptr [ESP],EAX             ; 004872bb
    XOR EDX,EDX                         ; 004872be
    MOV EAX,EBX                         ; 004872c0
    DIV EBP                             ; 004872c2
    MOV CL,byte ptr [0x02d01f24]        ; 004872c4 | g_RedBitPosition
    MOV dword ptr [ESP + 0x4],EBX       ; 004872ca
    SHL EDI,CL                          ; 004872ce
    MOV CL,byte ptr [0x02d01f30]        ; 004872d0 | g_GreenBitPosition
    MOV dword ptr [ESP + 0x4],EAX       ; 004872d6
    MOV EAX,dword ptr [ESP]             ; 004872da
    SHL EAX,CL                          ; 004872dd
    MOV CL,byte ptr [0x02d01f3c]        ; 004872df | g_BlueBitPosition
    OR EDI,EAX                          ; 004872e5
    MOV EAX,dword ptr [ESP + 0x4]       ; 004872e7
    SHL EAX,CL                          ; 004872eb
    OR EAX,EDI                          ; 004872ed
    AND EAX,0xffff                      ; 004872ef
    MOV [0x02c6d550],EAX                ; 004872f4 | g_CurrentDrawColor
    ADD ESP,0x8                         ; 004872f9
    POP EBP                             ; 004872fc
    POP EDI                             ; 004872fd
    POP ESI                             ; 004872fe
    POP EBX                             ; 004872ff
    RET                                 ; 00487300
    CMP ECX,ECX                         ; 00487301
        ;   Label: LAB_00487301
    JNZ 0x00487331                      ; 00487303
        ;   XREF to: 00487331 (CONDITIONAL_JUMP)  ; LAB_00487331
    MOV CL,byte ptr [0x02d01f24]        ; 00487305 | g_RedBitPosition
    SHL EAX,CL                          ; 0048730b
    MOV CL,byte ptr [0x02d01f30]        ; 0048730d | g_GreenBitPosition
    SHL ESI,CL                          ; 00487313
    MOV CL,byte ptr [0x02d01f3c]        ; 00487315 | g_BlueBitPosition
    SHL EBX,CL                          ; 0048731b
    OR EAX,ESI                          ; 0048731d
    MOV ECX,EBX                         ; 0048731f
    OR ECX,EAX                          ; 00487321
    MOV dword ptr [0x02c6d550],ECX      ; 00487323 | g_CurrentDrawColor
    ADD ESP,0x8                         ; 00487329
    POP EBP                             ; 0048732c
    POP EDI                             ; 0048732d
    POP ESI                             ; 0048732e
    POP EBX                             ; 0048732f
    RET                                 ; 00487330
    MOV ECX,EAX                         ; 00487331
        ;   Label: LAB_00487331
    SHL ESI,0x8                         ; 00487333
    SHL ECX,0x10                        ; 00487336
    OR ECX,ESI                          ; 00487339
    OR ECX,EBX                          ; 0048733b
    MOV dword ptr [0x02c6d550],ECX      ; 0048733d | g_CurrentDrawColor
    ADD ESP,0x8                         ; 00487343
    POP EBP                             ; 00487346
    POP EDI                             ; 00487347
    POP ESI                             ; 00487348
    POP EBX                             ; 00487349
    RET                                 ; 0048734a
    JBE 0x004872a0                      ; 0048734b
        ;   XREF to: 004872a0 (CONDITIONAL_JUMP)  ; LAB_004872a0
        ;   Label: LAB_0048734b
    CMP ECX,0x20                        ; 00487351
    JZ 0x00487301                       ; 00487354
        ;   XREF to: 00487301 (CONDITIONAL_JUMP)  ; LAB_00487301
    MOV EAX,0x621cbd                    ; 00487356 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_00487356
    MOV EDX,0x11d                       ; 0048735b
    PUSH 0x621cd5                       ; 00487360 | = "Invalid bitsPerPixel in CDrawSurface:..."
    MOV [0x02f0ca48],EAX                ; 00487365 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0048736a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00487370
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00487375
    ADD ESP,0x8                         ; 00487378
    POP EBP                             ; 0048737b
    POP EDI                             ; 0048737c
    POP ESI                             ; 0048737d
    POP EBX                             ; 0048737e
    RET                                 ; 0048737f

