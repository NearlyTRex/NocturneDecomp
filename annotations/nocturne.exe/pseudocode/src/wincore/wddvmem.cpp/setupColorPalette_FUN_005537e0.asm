; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_005537e0(void)
;
;
; XREF[2]:
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 0040108b
;   wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00 at 00553140
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_00597a5d
;   TerminatedCString s_setpal_Unable_to_create_00597a74
;   TerminatedCString s_wincore_wddvmem_cpp_00597a9d
;   TerminatedCString s_setpal_Unable_to_set_fro_00597ab4
;   int g_BitsPerPixel = 0x8
;   uchar[768] g_SourcePaletteData
;   undefined4 g_SourcePaletteData+4
;   undefined4 g_SourcePaletteData+5
;   int g_UseExternalRenderer
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_02dc9ddc
;   IDirectDraw* g_DirectDrawObject
;   IDirectDrawSurface* g_DirectDrawSurface
;   IUnknown* g_DirectDrawUnknown
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   wincore_wddvmem.cpp_analyzePixelFormat_FUN_00553620
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004b63f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005537e0
        ;   Label: wincore_wddvmem.cpp_setupColorPalette_FUN_005537e0
    PUSH EDI                            ; 005537e1
    PUSH EBP                            ; 005537e2
    CMP dword ptr [0x01c02594],0x0      ; 005537e3 | g_UseExternalRenderer
    JNZ 0x005538d0                      ; 005537ea
        ;   XREF to: 005538d0 (CONDITIONAL_JUMP)  ; LAB_005538d0
    MOV ECX,dword ptr [0x02ddf55c]      ; 005537f0 | g_DirectDrawUnknown
    TEST ECX,ECX                        ; 005537f6
    JNZ 0x005538ec                      ; 005537f8
        ;   XREF to: 005538ec (CONDITIONAL_JUMP)  ; LAB_005538ec
    CMP dword ptr [0x005b7624],0x8      ; 005537fe | g_BitsPerPixel
        ;   Label: LAB_005537fe
    JNZ 0x005538c3                      ; 00553805
        ;   XREF to: 005538c3 (CONDITIONAL_JUMP)  ; LAB_005538c3
    XOR EDX,EDX                         ; 0055380b
    XOR EAX,EAX                         ; 0055380d
    ADD EAX,0x4                         ; 0055380f
        ;   Label: LAB_0055380f
    MOV BL,byte ptr [EDX + 0x1c00648]   ; 00553812 | g_SourcePaletteData
    MOV byte ptr [EAX + 0x2ddf56c],BL   ; 00553818
    MOV BL,byte ptr [EDX + 0x1c00649]   ; 0055381e | g_SourcePaletteData+4
    MOV byte ptr [EAX + 0x2ddf56d],BL   ; 00553824
    MOV BL,byte ptr [EDX + 0x1c0064a]   ; 0055382a | g_SourcePaletteData+5
    MOV byte ptr [EAX + 0x2ddf56e],BL   ; 00553830
    MOV BL,0x1                          ; 00553836
    ADD EDX,0x3                         ; 00553838
    MOV byte ptr [EAX + 0x2ddf56f],BL   ; 0055383b
    CMP EAX,0x400                       ; 00553841
    JNZ 0x0055380f                      ; 00553846
        ;   XREF to: 0055380f (CONDITIONAL_JUMP)  ; LAB_0055380f
    PUSH 0x0                            ; 00553848
    PUSH 0x2ddf55c                      ; 0055384a | g_DirectDrawUnknown
    PUSH 0x2ddf570                      ; 0055384f
    MOV EAX,[0x02ddf550]                ; 00553854 | g_DirectDrawObject
    PUSH 0x4                            ; 00553859
    MOV EDX,dword ptr [EAX]             ; 0055385b
    PUSH EAX                            ; 0055385d
    CALL dword ptr [EDX + 0x14]         ; 0055385e
    TEST EAX,EAX                        ; 00553861
    JZ 0x00553888                       ; 00553863
        ;   XREF to: 00553888 (CONDITIONAL_JUMP)  ; LAB_00553888
    MOV EDI,0x597a5d                    ; 00553865 | = "..\\wincore\\wddvmem.cpp"
    MOV EBP,0x2f1                       ; 0055386a
    PUSH 0x597a74                       ; 0055386f | = "setpal - Unable to create palette object"
    MOV dword ptr [0x01cc4800],EDI      ; 00553874 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBP      ; 0055387a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00553880
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00553885
    MOV ECX,dword ptr [0x02ddf55c]      ; 00553888 | g_DirectDrawUnknown
        ;   Label: LAB_00553888
    MOV EAX,[0x02ddf554]                ; 0055388e | g_DirectDrawSurface
    PUSH ECX                            ; 00553893
    MOV EDX,dword ptr [EAX]             ; 00553894
    PUSH EAX                            ; 00553896
    CALL dword ptr [EDX + 0x7c]         ; 00553897
    TEST EAX,EAX                        ; 0055389a
    JZ 0x005538c3                       ; 0055389c
        ;   XREF to: 005538c3 (CONDITIONAL_JUMP)  ; LAB_005538c3
    PUSH ESI                            ; 0055389e
    MOV EBX,0x597a9d                    ; 0055389f | = "..\\wincore\\wddvmem.cpp"
    MOV ESI,0x2f7                       ; 005538a4
    PUSH 0x597ab4                       ; 005538a9 | = "setpal - Unable to set front buffer p..."
    MOV dword ptr [0x01cc4800],EBX      ; 005538ae | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 005538b4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 005538ba
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 005538bf
    POP ESI                             ; 005538c2
    CMP dword ptr [0x005b7624],0x8      ; 005538c3 | g_BitsPerPixel
        ;   Label: LAB_005538c3
    JG 0x005538ff                       ; 005538ca
        ;   XREF to: 005538ff (CONDITIONAL_JUMP)  ; LAB_005538ff
    POP EBP                             ; 005538cc
    POP EDI                             ; 005538cd
    POP EBX                             ; 005538ce
    RET                                 ; 005538cf
    PUSH 0x1bff720                      ; 005538d0
        ;   Label: LAB_005538d0
    PUSH 0x1c00648                      ; 005538d5 | g_SourcePaletteData
    CALL dword ptr [0x02dc9ddc]         ; 005538da | DAT_02dc9ddc
    ADD ESP,0x8                         ; 005538e0
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004b63f0 ; 005538e3
        ;   XREF to: 004b63f0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004b63f0()
    POP EBP                             ; 005538e8
    POP EDI                             ; 005538e9
    POP EBX                             ; 005538ea
    RET                                 ; 005538eb
    PUSH ECX                            ; 005538ec
        ;   Label: LAB_005538ec
    MOV EDX,dword ptr [ECX]             ; 005538ed
    XOR EBX,EBX                         ; 005538ef
    CALL dword ptr [EDX + 0x8]          ; 005538f1
    MOV dword ptr [0x02ddf55c],EBX      ; 005538f4 | g_DirectDrawUnknown
    JMP 0x005537fe                      ; 005538fa
        ;   XREF to: 005537fe (UNCONDITIONAL_JUMP)  ; LAB_005537fe
    CALL wincore_wddvmem.cpp_analyzePixelFormat_FUN_00553620 ; 005538ff
        ;   XREF to: 00553620 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_analyzePixelFormat_FUN_00553620()
        ;   Label: LAB_005538ff
    POP EBP                             ; 00553904
    POP EDI                             ; 00553905
    POP EBX                             ; 00553906
    RET                                 ; 00553907

