; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005eda20(void)
;
; Local Variables:
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[132]:
;   core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590 at 0043da5b
;   core_cloth.cpp_CCloth_showMenu_FUN_0043ddf0 at 0043dea7
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 00443142
;   core_course.cpp_FUN_00443bc0 at 00443f95
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 0047968a
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047ce65
;   core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0 at 0047c615
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be3ba
;   core_game.cpp_CGame_FUN_004e2910 at 004e2ce3
;   core_game.cpp_CGame_finishAct_FUN_004e3b90 at 004e3fe0
;   ... and 122 more
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_00657a2b
;   TerminatedCString s_Unable_to_unlock_front_b_00657a42
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   int g_WindowActive = -0x1
;   void* g_BackBuffer
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   int g_UseExternalRenderer
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   IDirectDrawSurface* g_DirectDrawSurface
;   int g_RenderingInProgress
;   int g_UseSoftwareRendering
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
;   wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
;   wincore_wddvmem.cpp_videoRestore_FUN_005edc80
;   wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30
;   wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005eda20
        ;   Label: wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
    PUSH ESI                            ; 005eda21
    PUSH EDI                            ; 005eda22
    PUSH EBP                            ; 005eda23
    MOV EBP,ESP                         ; 005eda24
    SUB ESP,0x7c                        ; 005eda26
    CMP dword ptr [0x006849a4],0x0      ; 005eda29 | g_WindowActive
    JZ 0x005edaf2                       ; 005eda30
        ;   XREF to: 005edaf2 (CONDITIONAL_JUMP)  ; LAB_005edaf2
    MOV ECX,dword ptr [0x02d03e94]      ; 005eda36 | g_UseExternalRenderer
    TEST ECX,ECX                        ; 005eda3c
    JNZ 0x005edb06                      ; 005eda3e
        ;   XREF to: 005edb06 (CONDITIONAL_JUMP)  ; LAB_005edb06
    MOV EBX,dword ptr [0x03f95934]      ; 005eda44 | g_RenderingInProgress
    TEST EBX,EBX                        ; 005eda4a
    JNZ 0x005edace                      ; 005eda4c
        ;   XREF to: 005edace (CONDITIONAL_JUMP)  ; LAB_005edace
    MOV ESI,dword ptr [0x03f9593c]      ; 005eda52 | g_UseSoftwareRendering
    TEST ESI,ESI                        ; 005eda58
    JZ 0x005edb24                       ; 005eda5a
        ;   XREF to: 005edb24 (CONDITIONAL_JUMP)  ; LAB_005edb24
    MOV EBX,dword ptr [0x00688010]      ; 005eda60 | g_BackBuffer
    MOV dword ptr [0x03f9593c],ECX      ; 005eda66 | g_UseSoftwareRendering
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580 ; 005eda6c
        ;   XREF to: 005ed580 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580()
    MOV ESI,dword ptr [0x00679398]      ; 005eda71 | g_WindowHeight
    XOR EDI,EDI                         ; 005eda77
    TEST ESI,ESI                        ; 005eda79
    JLE 0x005edabf                      ; 005eda7b
        ;   XREF to: 005edabf (CONDITIONAL_JUMP)  ; LAB_005edabf
    XOR ESI,ESI                         ; 005eda7d
    MOV ECX,dword ptr [0x00679394]      ; 005eda7f | g_WindowWidth
        ;   Label: LAB_005eda7f
    MOV EAX,dword ptr [ESI + 0x2cf6a9c] ; 005eda85 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    XOR EDX,EDX                         ; 005eda8b
    TEST ECX,ECX                        ; 005eda8d
    JLE 0x005edab2                      ; 005eda8f
        ;   XREF to: 005edab2 (CONDITIONAL_JUMP)  ; LAB_005edab2
    MOV CL,byte ptr [EBX]               ; 005eda91
        ;   Label: LAB_005eda91
    MOV byte ptr [EAX],CL               ; 005eda93
    MOV CL,byte ptr [EBX + 0x1]         ; 005eda95
    ADD EBX,0x4                         ; 005eda98
    MOV byte ptr [EAX + 0x1],CL         ; 005eda9b
    MOV CL,byte ptr [EBX + -0x2]        ; 005eda9e
    INC EDX                             ; 005edaa1
    MOV byte ptr [EAX + 0x2],CL         ; 005edaa2
    MOV ECX,dword ptr [0x00679394]      ; 005edaa5 | g_WindowWidth
    ADD EAX,0x3                         ; 005edaab
    CMP EDX,ECX                         ; 005edaae
    JL 0x005eda91                       ; 005edab0
        ;   XREF to: 005eda91 (CONDITIONAL_JUMP)  ; LAB_005eda91
    MOV EAX,[0x00679398]                ; 005edab2 | g_WindowHeight
        ;   Label: LAB_005edab2
    INC EDI                             ; 005edab7
    ADD ESI,0x4                         ; 005edab8
    CMP EDI,EAX                         ; 005edabb
    JL 0x005eda7f                       ; 005edabd
        ;   XREF to: 005eda7f (CONDITIONAL_JUMP)  ; LAB_005eda7f
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630 ; 005edabf
        ;   XREF to: 005ed630 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630()
        ;   Label: LAB_005edabf
    MOV dword ptr [0x03f9593c],0x1      ; 005edac4 | g_UseSoftwareRendering
    MOV EBX,dword ptr [0x03f95924]      ; 005edace | g_DirectDrawSurface
        ;   Label: LAB_005edace
    TEST EBX,EBX                        ; 005edad4
    JZ 0x005edaf2                       ; 005edad6
        ;   XREF to: 005edaf2 (CONDITIONAL_JUMP)  ; LAB_005edaf2
    PUSH 0x1                            ; 005edad8
    PUSH 0x0                            ; 005edada
    MOV EDX,dword ptr [EBX]             ; 005edadc
    PUSH EBX                            ; 005edade
    CALL dword ptr [EDX + 0x2c]         ; 005edadf
    TEST EAX,EAX                        ; 005edae2
    JZ 0x005edaf2                       ; 005edae4
        ;   XREF to: 005edaf2 (CONDITIONAL_JUMP)  ; LAB_005edaf2
    CMP EAX,0x887601c2                  ; 005edae6
    JNZ 0x005edaf2                      ; 005edaeb
        ;   XREF to: 005edaf2 (CONDITIONAL_JUMP)  ; LAB_005edaf2
    CALL wincore_wddvmem.cpp_videoRestore_FUN_005edc80 ; 005edaed
        ;   XREF to: 005edc80 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_videoRestore_FUN_005edc80()
    XOR ESI,ESI                         ; 005edaf2
        ;   Label: LAB_005edaf2
    MOV dword ptr [0x03f95934],ESI      ; 005edaf4 | g_RenderingInProgress
    CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0 ; 005edafa
        ;   XREF to: 005f35e0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_processWindowMessages_FUN_005f35e0()
    MOV ESP,EBP                         ; 005edaff
    POP EBP                             ; 005edb01
    POP EDI                             ; 005edb02
    POP ESI                             ; 005edb03
    POP EBX                             ; 005edb04
    RET                                 ; 005edb05
    PUSH 0x0                            ; 005edb06
        ;   Label: LAB_005edb06
    CALL wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30 ; 005edb08
        ;   XREF to: 005b7c30 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30(int skip_buffer_copy)
    ADD ESP,0x4                         ; 005edb0d
    XOR ESI,ESI                         ; 005edb10
    MOV dword ptr [0x03f95934],ESI      ; 005edb12 | g_RenderingInProgress
    CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0 ; 005edb18
        ;   XREF to: 005f35e0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_processWindowMessages_FUN_005f35e0()
    MOV ESP,EBP                         ; 005edb1d
    POP EBP                             ; 005edb1f
    POP EDI                             ; 005edb20
    POP ESI                             ; 005edb21
    POP EBX                             ; 005edb22
    RET                                 ; 005edb23
    MOV EAX,[0x00688010]                ; 005edb24 | g_BackBuffer
        ;   Label: LAB_005edb24
    MOV dword ptr [EBP + -0x10],EAX     ; 005edb29
    MOV EAX,[0x0067939c]                ; 005edb2c | g_BitsPerPixel
    MOV EDX,EAX                         ; 005edb31
    SAR EDX,0x1f                        ; 005edb33
    SHL EDX,0x3                         ; 005edb36
    SBB EAX,EDX                         ; 005edb39
    SAR EAX,0x3                         ; 005edb3b
    MOV EDX,dword ptr [0x00679394]      ; 005edb3e | g_WindowWidth
    IMUL EDX,EAX                        ; 005edb44
    PUSH 0x6c                           ; 005edb47
    PUSH ECX                            ; 005edb49
    MOV dword ptr [EBP + -0xc],EDX      ; 005edb4a
    LEA EAX,[EBP + -0x7c]               ; 005edb4d
    PUSH EAX                            ; 005edb50
    CALL crt_memory.c_memset_FUN_005fde40 ; 005edb51
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005edb56
    PUSH EBX                            ; 005edb59
    PUSH 0x1                            ; 005edb5a
    LEA EBX,[EBP + -0x7c]               ; 005edb5c
    MOV EDI,0x6c                        ; 005edb5f
    PUSH EBX                            ; 005edb64
    MOV EAX,[0x03f95924]                ; 005edb65 | g_DirectDrawSurface
    MOV dword ptr [EBP + -0x7c],EDI     ; 005edb6a
    PUSH ESI                            ; 005edb6d
    MOV EDX,dword ptr [EAX]             ; 005edb6e
    PUSH EAX                            ; 005edb70
    CALL dword ptr [EDX + 0x64]         ; 005edb71
    MOV EDX,EAX                         ; 005edb74
    MOV EAX,dword ptr [EBP + -0x58]     ; 005edb76
    MOV dword ptr [EBP + -0x8],EAX      ; 005edb79
    TEST EDX,EDX                        ; 005edb7c
    JNZ 0x005edaf2                      ; 005edb7e
        ;   XREF to: 005edaf2 (CONDITIONAL_JUMP)  ; LAB_005edaf2
    CMP dword ptr [EBP + -0x8],0x0      ; 005edb84
    JZ 0x005edaf2                       ; 005edb88
        ;   XREF to: 005edaf2 (CONDITIONAL_JUMP)  ; LAB_005edaf2
    MOV ECX,dword ptr [0x00679398]      ; 005edb8e | g_WindowHeight
    MOV dword ptr [EBP + -0x4],EDX      ; 005edb94
    TEST ECX,ECX                        ; 005edb97
    JLE 0x005edc00                      ; 005edb99
        ;   XREF to: 005edc00 (CONDITIONAL_JUMP)  ; LAB_005edc00
    MOV ECX,dword ptr [EBP + 0xfffffff4] ; 005edb9b
        ;   Label: LAB_005edb9b
    MOV ESI,dword ptr [EBP + 0xfffffff0] ; 005edba1
    MOV EDI,dword ptr [EBP + 0xfffffff8] ; 005edba7
    MOVQ MM0,qword ptr [ESI]            ; 005edbad
        ;   Label: LAB_005edbad
    MOVQ MM1,qword ptr [ESI + 0x8]      ; 005edbb0
    MOVQ MM2,qword ptr [ESI + 0x10]     ; 005edbb4
    MOVQ MM3,qword ptr [ESI + 0x18]     ; 005edbb8
    MOVQ qword ptr [EDI],MM0            ; 005edbbc
    MOVQ qword ptr [EDI + 0x8],MM1      ; 005edbbf
    MOVQ qword ptr [EDI + 0x10],MM2     ; 005edbc3
    MOVQ qword ptr [EDI + 0x18],MM3     ; 005edbc7
    ADD ESI,0x20                        ; 005edbcb
    ADD EDI,0x20                        ; 005edbce
    SUB ECX,0x20                        ; 005edbd1
    JG 0x005edbad                       ; 005edbd4
        ;   XREF to: 005edbad (CONDITIONAL_JUMP)  ; LAB_005edbad
    EMMS                                ; 005edbd6
    MOV EAX,dword ptr [EBP + -0xc]      ; 005edbd8
    ADD dword ptr [EBP + -0x10],EAX     ; 005edbdb
    MOV EAX,dword ptr [EBP + -0x6c]     ; 005edbde
    ADD dword ptr [EBP + -0x8],EAX      ; 005edbe1
    MOV ECX,dword ptr [EBP + -0x4]      ; 005edbe4
    INC ECX                             ; 005edbe7
    MOV EBX,dword ptr [0x00679398]      ; 005edbe8 | g_WindowHeight
    MOV dword ptr [EBP + -0x4],ECX      ; 005edbee
    CMP ECX,EBX                         ; 005edbf1
    JL 0x005edb9b                       ; 005edbf3
        ;   XREF to: 005edb9b (CONDITIONAL_JUMP)  ; LAB_005edb9b
    LEA EAX,[EAX]                       ; 005edbf5
    LEA EDX,[EDX]                       ; 005edbfb
    MOV EBX,EBX                         ; 005edbfe
    PUSH 0x0                            ; 005edc00
        ;   Label: LAB_005edc00
    MOV EAX,[0x03f95924]                ; 005edc02 | g_DirectDrawSurface
    PUSH EAX                            ; 005edc07
    MOV EDX,dword ptr [EAX]             ; 005edc08
    CALL dword ptr [EDX + 0x80]         ; 005edc0a
    TEST EAX,EAX                        ; 005edc10
    JZ 0x005edaf2                       ; 005edc12
        ;   XREF to: 005edaf2 (CONDITIONAL_JUMP)  ; LAB_005edaf2
    MOV ESI,0x657a2b                    ; 005edc18 | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0x36e                       ; 005edc1d
    PUSH 0x657a42                       ; 005edc22 | = "Unable to unlock front buffer"
    MOV dword ptr [0x02f0ca48],ESI      ; 005edc27 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005edc2d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005edc33
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005edc38
    XOR ESI,ESI                         ; 005edc3b
    MOV dword ptr [0x03f95934],ESI      ; 005edc3d | g_RenderingInProgress
    CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0 ; 005edc43
        ;   XREF to: 005f35e0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_processWindowMessages_FUN_005f35e0()
    MOV ESP,EBP                         ; 005edc48
    POP EBP                             ; 005edc4a
    POP EDI                             ; 005edc4b
    POP ESI                             ; 005edc4c
    POP EBX                             ; 005edc4d
    RET                                 ; 005edc4e

