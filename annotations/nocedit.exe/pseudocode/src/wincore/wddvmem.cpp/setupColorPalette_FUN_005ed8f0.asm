; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0(void)
;
;
; XREF[4]:
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 00401083
;   shape_design.c_loadPalette_FUN_0046e810 at 0046eb51
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f2ee
;   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 at 005ed250
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_006579a8
;   TerminatedCString s_setpal_Unable_to_create__006579bf
;   TerminatedCString s_wincore_wddvmem_cpp_006579e8
;   TerminatedCString s_setpal_Unable_to_set_fro_006579ff
;   int g_BitsPerPixel = 0x8
;   ushort[256] g_ColorTable16
;   char[768] g_SourcePaletteData
;   undefined4 CHAR_ARRAY_02d01f49
;   undefined4 CHAR_ARRAY_02d01f4a
;   undefined4 CHAR_ARRAY_02d01f4b
;   undefined4 CHAR_ARRAY_02d01f4c
;   undefined4 CHAR_ARRAY_02d01f4d
;   int g_UseExternalRenderer
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   ... and 12 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ed8f0
        ;   Label: wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0
    PUSH EDI                            ; 005ed8f1
    PUSH EBP                            ; 005ed8f2
    CMP dword ptr [0x02d03e94],0x0      ; 005ed8f3 | g_UseExternalRenderer
    JNZ 0x005ed9e0                      ; 005ed8fa
        ;   XREF to: 005ed9e0 (CONDITIONAL_JUMP)  ; LAB_005ed9e0
    MOV ECX,dword ptr [0x03f9592c]      ; 005ed900 | g_DirectDrawUnknown
    TEST ECX,ECX                        ; 005ed906
    JNZ 0x005ed9fc                      ; 005ed908
        ;   XREF to: 005ed9fc (CONDITIONAL_JUMP)  ; LAB_005ed9fc
    CMP dword ptr [0x0067939c],0x8      ; 005ed90e | g_BitsPerPixel
        ;   Label: LAB_005ed90e
    JNZ 0x005ed9d3                      ; 005ed915
        ;   XREF to: 005ed9d3 (CONDITIONAL_JUMP)  ; LAB_005ed9d3
    XOR EDX,EDX                         ; 005ed91b
    XOR EAX,EAX                         ; 005ed91d
    ADD EAX,0x4                         ; 005ed91f
        ;   Label: LAB_005ed91f
    MOV BL,byte ptr [EDX + 0x2d01f48]   ; 005ed922 | g_SourcePaletteData | CHAR_ARRAY_02d01f4b
    MOV byte ptr [EAX + 0x3f9593c],BL   ; 005ed928 | g_DDPaletteBuffer | g_DDPaletteBuffer[1].red
    MOV BL,byte ptr [EDX + 0x2d01f49]   ; 005ed92e | CHAR_ARRAY_02d01f49 | CHAR_ARRAY_02d01f4c
    MOV byte ptr [EAX + 0x3f9593d],BL   ; 005ed934 | g_DDPaletteBuffer[0].green | g_DDPaletteBuffer[1].green
    MOV BL,byte ptr [EDX + 0x2d01f4a]   ; 005ed93a | CHAR_ARRAY_02d01f4a | CHAR_ARRAY_02d01f4d
    MOV byte ptr [EAX + 0x3f9593e],BL   ; 005ed940 | g_DDPaletteBuffer[0].blue | g_DDPaletteBuffer[1].blue
    MOV BL,0x1                          ; 005ed946
    ADD EDX,0x3                         ; 005ed948
    MOV byte ptr [EAX + 0x3f9593f],BL   ; 005ed94b | g_DDPaletteBuffer[0].flags | g_DDPaletteBuffer[1].flags
    CMP EAX,0x400                       ; 005ed951
    JNZ 0x005ed91f                      ; 005ed956
        ;   XREF to: 005ed91f (CONDITIONAL_JUMP)  ; LAB_005ed91f
    PUSH 0x0                            ; 005ed958
    PUSH 0x3f9592c                      ; 005ed95a | g_DirectDrawUnknown
    PUSH 0x3f95940                      ; 005ed95f | g_DDPaletteBuffer
    MOV EAX,[0x03f95920]                ; 005ed964 | g_DirectDrawObject
    PUSH 0x4                            ; 005ed969
    MOV EDX,dword ptr [EAX]             ; 005ed96b
    PUSH EAX                            ; 005ed96d
    CALL dword ptr [EDX + 0x14]         ; 005ed96e
    TEST EAX,EAX                        ; 005ed971
    JZ 0x005ed998                       ; 005ed973
        ;   XREF to: 005ed998 (CONDITIONAL_JUMP)  ; LAB_005ed998
    MOV EDI,0x6579a8                    ; 005ed975 | = "..\\wincore\\wddvmem.cpp"
    MOV EBP,0x2f1                       ; 005ed97a
    PUSH 0x6579bf                       ; 005ed97f | = "setpal - Unable to create palette object"
    MOV dword ptr [0x02f0ca48],EDI      ; 005ed984 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 005ed98a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ed990
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ed995
    MOV ECX,dword ptr [0x03f9592c]      ; 005ed998 | g_DirectDrawUnknown
        ;   Label: LAB_005ed998
    MOV EAX,[0x03f95924]                ; 005ed99e | g_DirectDrawSurface
    PUSH ECX                            ; 005ed9a3
    MOV EDX,dword ptr [EAX]             ; 005ed9a4
    PUSH EAX                            ; 005ed9a6
    CALL dword ptr [EDX + 0x7c]         ; 005ed9a7
    TEST EAX,EAX                        ; 005ed9aa
    JZ 0x005ed9d3                       ; 005ed9ac
        ;   XREF to: 005ed9d3 (CONDITIONAL_JUMP)  ; LAB_005ed9d3
    PUSH ESI                            ; 005ed9ae
    MOV EBX,0x6579e8                    ; 005ed9af | = "..\\wincore\\wddvmem.cpp"
    MOV ESI,0x2f7                       ; 005ed9b4
    PUSH 0x6579ff                       ; 005ed9b9 | = "setpal - Unable to set front buffer p..."
    MOV dword ptr [0x02f0ca48],EBX      ; 005ed9be | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005ed9c4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ed9ca
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ed9cf
    POP ESI                             ; 005ed9d2
    CMP dword ptr [0x0067939c],0x8      ; 005ed9d3 | g_BitsPerPixel
        ;   Label: LAB_005ed9d3
    JG 0x005eda0f                       ; 005ed9da
        ;   XREF to: 005eda0f (CONDITIONAL_JUMP)  ; LAB_005eda0f
    POP EBP                             ; 005ed9dc
    POP EDI                             ; 005ed9dd
    POP EBX                             ; 005ed9de
    RET                                 ; 005ed9df
    PUSH 0x2d01020                      ; 005ed9e0 | g_ColorTable16
        ;   Label: LAB_005ed9e0
    PUSH 0x2d01f48                      ; 005ed9e5 | g_SourcePaletteData
    CALL dword ptr [0x03f6b900]         ; 005ed9ea | g_APIDLL_setColorTable16
    ADD ESP,0x8                         ; 005ed9f0
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0 ; 005ed9f3
        ;   XREF to: 004f41c0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0()
    POP EBP                             ; 005ed9f8
    POP EDI                             ; 005ed9f9
    POP EBX                             ; 005ed9fa
    RET                                 ; 005ed9fb
    PUSH ECX                            ; 005ed9fc
        ;   Label: LAB_005ed9fc
    MOV EDX,dword ptr [ECX]             ; 005ed9fd
    XOR EBX,EBX                         ; 005ed9ff
    CALL dword ptr [EDX + 0x8]          ; 005eda01
    MOV dword ptr [0x03f9592c],EBX      ; 005eda04 | g_DirectDrawUnknown
    JMP 0x005ed90e                      ; 005eda0a
        ;   XREF to: 005ed90e (UNCONDITIONAL_JUMP)  ; LAB_005ed90e
    CALL wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730 ; 005eda0f
        ;   XREF to: 005ed730 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730()
        ;   Label: LAB_005eda0f
    POP EBP                             ; 005eda14
    POP EDI                             ; 005eda15
    POP EBX                             ; 005eda16
    RET                                 ; 005eda17

