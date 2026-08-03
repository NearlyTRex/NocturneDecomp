; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setColor_FUN_00487010(int color_value)
;
; Parameters:
; int              Stack[0x4]:4   color_value
;
; XREF[2]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 00489df1
;   core_script.cpp_CScript_renderEditor_FUN_00559d80 at 00559dc8
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_00621c76
;   TerminatedCString s_Invalid_bitsPerPixel_in__00621c8e
;   int g_BitsPerPixel = 0x8
;   int g_CurrentDrawColor
;   int g_PaletteColorIndex
;   int g_UseRGBConversion
;   int g_OriginalColorValue
;   int g_ScaledRedComponent
;   int g_ScaledGreenComponent
;   int g_ScaledBlueComponent
;   int g_PackedPixelColor
;   int g_DuplicatedPixelColor
;   _BIT_INTEGER32 g_RedBitPosition
;   int g_RedScaleFactor
;   _BIT_INTEGER32 g_GreenBitPosition
;   ... and 8 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487010
        ;   Label: cockpit_drawsurf.cpp_setColor_FUN_00487010
    PUSH ESI                            ; 00487011
    PUSH EDI                            ; 00487012
    PUSH EBP                            ; 00487013
    SUB ESP,0x4                         ; 00487014
    MOV EAX,dword ptr [ESP + 0x18]      ; 00487017
    TEST EAX,EAX                        ; 0048701b
    JL 0x00487056                       ; 0048701d
        ;   XREF to: 00487056 (CONDITIONAL_JUMP)  ; LAB_00487056
    XOR EDX,EDX                         ; 0048701f
    MOV dword ptr [0x02c6d55c],EDX      ; 00487021 | g_UseRGBConversion
    AND EAX,0xff                        ; 00487027
        ;   Label: LAB_00487027
    MOV EDX,dword ptr [0x0067939c]      ; 0048702c | g_BitsPerPixel
    MOV [0x02c6d554],EAX                ; 00487032 | g_PaletteColorIndex
    CMP EDX,0x10                        ; 00487037
    JNC 0x004871d8                      ; 0048703a
        ;   XREF to: 004871d8 (CONDITIONAL_JUMP)  ; LAB_004871d8
    CMP EDX,0x8                         ; 00487040
    JNZ 0x004871ef                      ; 00487043
        ;   XREF to: 004871ef (CONDITIONAL_JUMP)  ; LAB_004871ef
    MOV [0x02c6d550],EAX                ; 00487049 | g_CurrentDrawColor
    ADD ESP,0x4                         ; 0048704e
    POP EBP                             ; 00487051
    POP EDI                             ; 00487052
    POP ESI                             ; 00487053
    POP EBX                             ; 00487054
    RET                                 ; 00487055
    MOV ESI,dword ptr [0x02d01f28]      ; 00487056 | g_RedScaleFactor
        ;   Label: LAB_00487056
    MOV [0x02c6d560],EAX                ; 0048705c | g_OriginalColorValue
    MOV EBX,EAX                         ; 00487061
    XOR EDX,EDX                         ; 00487063
    MOV EAX,0xff                        ; 00487065
    DIV ESI                             ; 0048706a
    MOV ECX,0x1                         ; 0048706c
    NEG EBX                             ; 00487071
    MOV dword ptr [0x02c6d55c],ECX      ; 00487073 | g_UseRGBConversion
    MOV ECX,EBX                         ; 00487079
    MOV EDI,dword ptr [0x02d01f34]      ; 0048707b | g_GreenScaleFactor
    SHR EAX,CL                          ; 00487081
    XOR EDX,EDX                         ; 00487083
    MOV [0x02c6d564],EAX                ; 00487085 | g_ScaledRedComponent
    MOV EAX,0xff                        ; 0048708a
    DIV EDI                             ; 0048708f
    MOV EBP,dword ptr [0x02d01f40]      ; 00487091 | g_BlueScaleFactor
    SHR EAX,CL                          ; 00487097
    XOR EDX,EDX                         ; 00487099
    MOV [0x02c6d568],EAX                ; 0048709b | g_ScaledGreenComponent
    MOV EAX,0xff                        ; 004870a0
    DIV EBP                             ; 004870a5
    MOV EDX,dword ptr [0x02c6d564]      ; 004870a7 | g_ScaledRedComponent
    SHR EAX,CL                          ; 004870ad
    MOV CL,byte ptr [0x02d01f24]        ; 004870af | g_RedBitPosition
    MOV [0x02c6d56c],EAX                ; 004870b5 | g_ScaledBlueComponent
    MOV EAX,[0x02c6d568]                ; 004870ba | g_ScaledGreenComponent
    SHL EDX,CL                          ; 004870bf
    MOV CL,byte ptr [0x02d01f30]        ; 004870c1 | g_GreenBitPosition
    SHL EAX,CL                          ; 004870c7
    MOV CL,byte ptr [0x02d01f3c]        ; 004870c9 | g_BlueBitPosition
    OR EDX,EAX                          ; 004870cf
    MOV EAX,[0x02c6d56c]                ; 004870d1 | g_ScaledBlueComponent
    SHL EAX,CL                          ; 004870d6
    OR EDX,EAX                          ; 004870d8
    MOV dword ptr [0x02c6d570],EDX      ; 004870da | g_PackedPixelColor
    MOV EAX,[0x02c6d570]                ; 004870e0 | g_PackedPixelColor
    SHL EDX,0x10                        ; 004870e5
    OR EAX,EDX                          ; 004870e8
    MOV dword ptr [0x02c6d560],EBX      ; 004870ea | g_OriginalColorValue
    MOV [0x02c6d574],EAX                ; 004870f0 | g_DuplicatedPixelColor
    XOR EAX,EAX                         ; 004870f5
    JMP 0x00487027                      ; 004870f7
        ;   XREF to: 00487027 (UNCONDITIONAL_JUMP)  ; LAB_00487027
    XOR EBX,EBX                         ; 004870fc
        ;   Label: LAB_004870fc
    XOR EAX,EAX                         ; 004870fe
    MOV BL,byte ptr [ECX + 0x2d01f49]   ; 00487100 | CHAR_ARRAY_02d01f49
    MOV AL,byte ptr [ECX + 0x2d01f48]   ; 00487106 | g_SourcePaletteData
    MOV CL,byte ptr [ECX + 0x2d01f4a]   ; 0048710c | CHAR_ARRAY_02d01f4a
    MOV ESI,dword ptr [0x02d01f28]      ; 00487112 | g_RedScaleFactor
    XOR EDX,EDX                         ; 00487118
    DIV ESI                             ; 0048711a
    MOV EDI,dword ptr [0x02d01f34]      ; 0048711c | g_GreenScaleFactor
    MOV ESI,EAX                         ; 00487122
    XOR EDX,EDX                         ; 00487124
    MOV EAX,EBX                         ; 00487126
    DIV EDI                             ; 00487128
    MOV EBP,dword ptr [0x02d01f40]      ; 0048712a | g_BlueScaleFactor
    AND ECX,0xff                        ; 00487130
    MOV EDI,EAX                         ; 00487136
    XOR EDX,EDX                         ; 00487138
    MOV EAX,ECX                         ; 0048713a
    DIV EBP                             ; 0048713c
    MOV dword ptr [ESP],ECX             ; 0048713e
    MOV CL,byte ptr [0x02d01f24]        ; 00487141 | g_RedBitPosition
    MOV dword ptr [ESP],EAX             ; 00487147
    MOV EAX,ESI                         ; 0048714a
    SHL EAX,CL                          ; 0048714c
    MOV CL,byte ptr [0x02d01f30]        ; 0048714e | g_GreenBitPosition
    MOV EDX,dword ptr [ESP]             ; 00487154
    SHL EDI,CL                          ; 00487157
    MOV CL,byte ptr [0x02d01f3c]        ; 00487159 | g_BlueBitPosition
    OR EAX,EDI                          ; 0048715f
    SHL EDX,CL                          ; 00487161
    OR EAX,EDX                          ; 00487163
    AND EAX,0xffff                      ; 00487165
    MOV [0x02c6d550],EAX                ; 0048716a | g_CurrentDrawColor
    ADD ESP,0x4                         ; 0048716f
    POP EBP                             ; 00487172
    POP EDI                             ; 00487173
    POP ESI                             ; 00487174
    POP EBX                             ; 00487175
    RET                                 ; 00487176
    MOVZX ESI,byte ptr [ECX + 0x2d01f48] ; 00487177 | g_SourcePaletteData
        ;   Label: LAB_00487177
    XOR EAX,EAX                         ; 0048717e
    XOR EBX,EBX                         ; 00487180
    MOV AL,byte ptr [ECX + 0x2d01f49]   ; 00487182 | CHAR_ARRAY_02d01f49
    MOV BL,byte ptr [ECX + 0x2d01f4a]   ; 00487188 | CHAR_ARRAY_02d01f4a
    CMP EDX,EDX                         ; 0048718e
    JNZ 0x004871be                      ; 00487190
        ;   XREF to: 004871be (CONDITIONAL_JUMP)  ; LAB_004871be
    MOV CL,byte ptr [0x02d01f24]        ; 00487192 | g_RedBitPosition
    SHL ESI,CL                          ; 00487198
    MOV CL,byte ptr [0x02d01f30]        ; 0048719a | g_GreenBitPosition
    SHL EAX,CL                          ; 004871a0
    MOV CL,byte ptr [0x02d01f3c]        ; 004871a2 | g_BlueBitPosition
    SHL EBX,CL                          ; 004871a8
    OR EAX,ESI                          ; 004871aa
    MOV ECX,EBX                         ; 004871ac
    OR ECX,EAX                          ; 004871ae
    MOV dword ptr [0x02c6d550],ECX      ; 004871b0 | g_CurrentDrawColor
    ADD ESP,0x4                         ; 004871b6
    POP EBP                             ; 004871b9
    POP EDI                             ; 004871ba
    POP ESI                             ; 004871bb
    POP EBX                             ; 004871bc
    RET                                 ; 004871bd
    MOV ECX,EAX                         ; 004871be
        ;   Label: LAB_004871be
    SHL ESI,0x10                        ; 004871c0
    SHL ECX,0x8                         ; 004871c3
    OR ECX,ESI                          ; 004871c6
    OR ECX,EBX                          ; 004871c8
    MOV dword ptr [0x02c6d550],ECX      ; 004871ca | g_CurrentDrawColor
    ADD ESP,0x4                         ; 004871d0
    POP EBP                             ; 004871d3
    POP EDI                             ; 004871d4
    POP ESI                             ; 004871d5
    POP EBX                             ; 004871d6
    RET                                 ; 004871d7
    LEA ECX,[EAX*0x4 + 0x0]             ; 004871d8
        ;   Label: LAB_004871d8
    SUB ECX,EAX                         ; 004871df
    CMP EDX,0x10                        ; 004871e1
    JBE 0x004870fc                      ; 004871e4
        ;   XREF to: 004870fc (CONDITIONAL_JUMP)  ; LAB_004870fc
    CMP EDX,0x20                        ; 004871ea
    JZ 0x00487177                       ; 004871ed
        ;   XREF to: 00487177 (CONDITIONAL_JUMP)  ; LAB_00487177
    MOV EAX,0x621c76                    ; 004871ef | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_004871ef
    MOV EDX,0xf6                        ; 004871f4
    PUSH 0x621c8e                       ; 004871f9 | = "Invalid bitsPerPixel in CDrawSurface:..."
    MOV [0x02f0ca48],EAX                ; 004871fe | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00487203 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00487209
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0048720e
    ADD ESP,0x4                         ; 00487211
    POP EBP                             ; 00487214
    POP EDI                             ; 00487215
    POP ESI                             ; 00487216
    POP EBX                             ; 00487217
    RET                                 ; 00487218

