; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_windll.cpp_clearScreen_FUN_005b3e70(void)
;
;
; XREF[116]:
;   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 at 0043ca7b
;   core_cloth.cpp_FUN_0043c430 at 0043c454
;   core_cloth.cpp_FUN_0043ddf0 at 0043de1a
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 00443064
;   core_course.cpp_FUN_00443bc0 at 00443cca
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 at 0044c653
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 004795a7
;   core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0 at 0047c5ff
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be283
;   core_game.cpp_CGame_displayActStats_FUN_004e3800 at 004e3839
;   ... and 106 more
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   double g_SelectedClearColor = 0.0
;   double g_ClearColor = 0.0
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   int g_UseExternalRenderer
;
; Called Functions:
;   wincore_windll.cpp_clear_FUN_005b7a30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005b3e70
        ;   Label: wincore_windll.cpp_clearScreen_FUN_005b3e70
    PUSH EDI                            ; 005b3e71
    CMP dword ptr [0x02d03e94],0x0      ; 005b3e72 | g_UseExternalRenderer
    JZ 0x005b3e83                       ; 005b3e79
        ;   XREF to: 005b3e83 (CONDITIONAL_JUMP)  ; LAB_005b3e83
    CALL wincore_windll.cpp_clear_FUN_005b7a30 ; 005b3e7b
        ;   XREF to: 005b7a30 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_clear_FUN_005b7a30()
    POP EDI                             ; 005b3e80
    POP ESI                             ; 005b3e81
    RET                                 ; 005b3e82
    PUSHAD                              ; 005b3e83
        ;   Label: LAB_005b3e83
    CLD                                 ; 005b3e84
    PUSH DS                             ; 005b3e85
    POP ES                              ; 005b3e86
    MOV EAX,0x0                         ; 005b3e87
    MOV EBX,0x0                         ; 005b3e8c
    MOV EAX,[0x00679394]                ; 005b3e91 | g_WindowWidth
        ;   Label: LAB_005b3e91
    IMUL dword ptr [0x0067939c]         ; 005b3e96 | g_BitsPerPixel
    SHR EAX,0x3                         ; 005b3e9c
    MOV ECX,EAX                         ; 005b3e9f
    MOV EDI,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 005b3ea1 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    FLD double ptr [0x0068261c]         ; 005b3ea8 | g_SelectedClearColor
    FST double ptr [EDI]                ; 005b3eae
        ;   Label: LAB_005b3eae
    FST double ptr [EDI + 0x8]          ; 005b3eb0
    FST double ptr [EDI + 0x10]         ; 005b3eb3
    FST double ptr [EDI + 0x18]         ; 005b3eb6
    ADD EDI,0x20                        ; 005b3eb9
    SUB ECX,0x20                        ; 005b3ebc
    JG 0x005b3eae                       ; 005b3ebf
        ;   XREF to: 005b3eae (CONDITIONAL_JUMP)  ; LAB_005b3eae
    FSTP double ptr [0x00682624]        ; 005b3ec1 | g_ClearColor
    INC EBX                             ; 005b3ec7
    CMP EBX,dword ptr [0x00679398]      ; 005b3ec8 | g_WindowHeight
    JL 0x005b3e91                       ; 005b3ece
        ;   XREF to: 005b3e91 (CONDITIONAL_JUMP)  ; LAB_005b3e91
    POPAD                               ; 005b3ed0
    POP EDI                             ; 005b3ed1
    POP ESI                             ; 005b3ed2
    RET                                 ; 005b3ed3

