; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_setFogColorFromPalette_FUN_005b7b10(int palette_index)
;
; Parameters:
; int              Stack[0x4]:4   palette_index
;
; Referenced Globals:
;   uchar[768] g_SourcePaletteData
;   undefined4 CHAR_ARRAY_02d01f49
;   undefined4 CHAR_ARRAY_02d01f4a
;   int g_UseExternalRenderer
;   APIDLL_setFogColor* g_APIDLL_setFogColor
;   int g_FogColorRed
;   int g_FogColorGreen
;   int g_FogColorBlue
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b7b10
        ;   Label: wincore_windll.cpp_setFogColorFromPalette_FUN_005b7b10
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b7b14
    SUB EAX,EDX                         ; 005b7b1b
    XOR EDX,EDX                         ; 005b7b1d
    MOV DL,byte ptr [EAX + 0x2d01f48]   ; 005b7b1f | g_SourcePaletteData
    MOV dword ptr [0x03f6b980],EDX      ; 005b7b25 | g_FogColorRed
    XOR EDX,EDX                         ; 005b7b2b
    MOV DL,byte ptr [EAX + 0x2d01f49]   ; 005b7b2d | CHAR_ARRAY_02d01f49
    MOV dword ptr [0x03f6b984],EDX      ; 005b7b33 | g_FogColorGreen
    MOV AL,byte ptr [EAX + 0x2d01f4a]   ; 005b7b39 | CHAR_ARRAY_02d01f4a
    AND EAX,0xff                        ; 005b7b3f
    MOV EDX,dword ptr [0x02d03e94]      ; 005b7b44 | g_UseExternalRenderer
    MOV [0x03f6b988],EAX                ; 005b7b4a | g_FogColorBlue
    TEST EDX,EDX                        ; 005b7b4f
    JNZ 0x005b7b56                      ; 005b7b51
        ;   XREF to: 005b7b56 (CONDITIONAL_JUMP)  ; LAB_005b7b56
    XOR EAX,EAX                         ; 005b7b53
    RET                                 ; 005b7b55
    PUSH ESI                            ; 005b7b56
        ;   Label: LAB_005b7b56
    PUSH EBX                            ; 005b7b57
    PUSH EAX                            ; 005b7b58
    MOV EBX,dword ptr [0x03f6b984]      ; 005b7b59 | g_FogColorGreen
    PUSH EBX                            ; 005b7b5f
    MOV ESI,dword ptr [0x03f6b980]      ; 005b7b60 | g_FogColorRed
    PUSH ESI                            ; 005b7b66
    CALL dword ptr [0x03f6b8f0]         ; 005b7b67 | g_APIDLL_setFogColor
    ADD ESP,0xc                         ; 005b7b6d
    POP EBX                             ; 005b7b70
    POP ESI                             ; 005b7b71
    RET                                 ; 005b7b72

