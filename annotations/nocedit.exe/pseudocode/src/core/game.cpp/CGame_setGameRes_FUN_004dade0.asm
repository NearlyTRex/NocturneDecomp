; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_setGameRes_FUN_004dade0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db181
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 00539141
;   core_msnedit.cpp_CDemonMission_editGore_FUN_0053e220 at 0053e250
;   core_setedit.cpp_CDemonSet_computeCameraFog_FUN_00581320 at 0058135b
;   core_setedit.cpp_CDemonSet_rebuildAllFogAndPVS_FUN_005805a0 at 00580651
;   core_setedit.cpp_CDemonSet_showLightEditor_FUN_0057c5d0 at 0057c5f4
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_0062b5ed
;   TerminatedCString s_CGame_setGameRes_Unable__0062b5fe
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   CBitFont* g_SmallEditorFont
;   CBitFont* g_EditorFont
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentGraphicsBoard
;   CDemonCamera g_CDemonCameraInstance
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_2d.c_resetGraphicsSystem_FUN_00402a70
;   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
;   wincore_windll.cpp_selectCard_FUN_005b7d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dade0
        ;   Label: core_game.cpp_CGame_setGameRes_FUN_004dade0
    PUSH ESI                            ; 004dade1
    PUSH EDI                            ; 004dade2
    PUSH EBP                            ; 004dade3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004dade4
    MOV EDX,dword ptr [0x02f275f4]      ; 004dade8 | g_CurrentGraphicsBoard
    TEST EDX,EDX                        ; 004dadee
    JNZ 0x004dae98                      ; 004dadf0
        ;   XREF to: 004dae98 (CONDITIONAL_JUMP)  ; LAB_004dae98
    MOV EAX,[0x00679398]                ; 004dadf6 | g_WindowHeight
        ;   Label: LAB_004dadf6
    CMP EAX,dword ptr [EBX + 0x4]       ; 004dadfb
    JZ 0x004daea6                       ; 004dadfe
        ;   XREF to: 004daea6 (CONDITIONAL_JUMP)  ; LAB_004daea6
    MOV EBP,dword ptr [EBX + 0x8]       ; 004dae04
        ;   Label: LAB_004dae04
    PUSH EBP                            ; 004dae07
    MOV EAX,dword ptr [EBX + 0x4]       ; 004dae08
    PUSH EAX                            ; 004dae0b
    MOV EDX,dword ptr [EBX]             ; 004dae0c
    PUSH EDX                            ; 004dae0e
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 ; 004dae0f
        ;   XREF to: 005ecef0 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 004dae14
    TEST EAX,EAX                        ; 004dae17
    JNZ 0x004dae6c                      ; 004dae19
        ;   XREF to: 004dae6c (CONDITIONAL_JUMP)  ; LAB_004dae6c
    MOV ECX,dword ptr [EBX + 0x8]       ; 004dae1b
    MOV dword ptr [EBX + 0x4],0x1e0     ; 004dae1e
    PUSH ECX                            ; 004dae25
    MOV ESI,dword ptr [EBX + 0x4]       ; 004dae26
    MOV dword ptr [EBX],0x280           ; 004dae29
    PUSH ESI                            ; 004dae2f
    MOV EDI,dword ptr [EBX]             ; 004dae30
    PUSH EDI                            ; 004dae32
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 ; 004dae33
        ;   XREF to: 005ecef0 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 004dae38
    TEST EAX,EAX                        ; 004dae3b
    JNZ 0x004dae6c                      ; 004dae3d
        ;   XREF to: 004dae6c (CONDITIONAL_JUMP)  ; LAB_004dae6c
    MOV EDX,dword ptr [EBX + 0x8]       ; 004dae3f
    PUSH EDX                            ; 004dae42
    MOV ECX,dword ptr [EBX + 0x4]       ; 004dae43
    PUSH ECX                            ; 004dae46
    MOV ESI,dword ptr [EBX]             ; 004dae47
    PUSH ESI                            ; 004dae49
    MOV EBP,0x62b5ed                    ; 004dae4a | = "..\\core\\game.cpp"
    MOV EAX,0x4a3                       ; 004dae4f
    PUSH 0x62b5fe                       ; 004dae54 | = "CGame::setGameRes - Unable to set the..."
    MOV dword ptr [0x02f0ca48],EBP      ; 004dae59 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004dae5f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004dae64
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 004dae69
    CALL engine_2d.c_resetGraphicsSystem_FUN_00402a70 ; 004dae6c
        ;   XREF to: 00402a70 (UNCONDITIONAL_CALL)  ; void engine_2d.c_resetGraphicsSystem_FUN_00402a70()
        ;   Label: LAB_004dae6c
    MOV EDI,dword ptr [0x00679398]      ; 004dae71 | g_WindowHeight
    PUSH EDI                            ; 004dae77
    PUSH 0x32758e4                      ; 004dae78 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_0044c190 ; 004dae7d
        ;   XREF to: 0044c190 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_0044c190(CDemonCamera * this_ptr, int screen_height)
    MOV EBP,dword ptr [0x00679398]      ; 004dae82 | g_WindowHeight
    ADD ESP,0x8                         ; 004dae88
    CMP EBP,0x180                       ; 004dae8b
    JL 0x004daeb7                       ; 004dae91
        ;   XREF to: 004daeb7 (CONDITIONAL_JUMP)  ; LAB_004daeb7
    POP EBP                             ; 004dae93
    POP EDI                             ; 004dae94
    POP ESI                             ; 004dae95
    POP EBX                             ; 004dae96
    RET                                 ; 004dae97
    PUSH EDX                            ; 004dae98
        ;   Label: LAB_004dae98
    CALL wincore_windll.cpp_selectCard_FUN_005b7d90 ; 004dae99
        ;   XREF to: 005b7d90 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_selectCard_FUN_005b7d90(int card_index)
    ADD ESP,0x4                         ; 004dae9e
    JMP 0x004dadf6                      ; 004daea1
        ;   XREF to: 004dadf6 (UNCONDITIONAL_JUMP)  ; LAB_004dadf6
    MOV EDI,dword ptr [0x0067939c]      ; 004daea6 | g_BitsPerPixel
        ;   Label: LAB_004daea6
    CMP EDI,dword ptr [EBX + 0x8]       ; 004daeac
    JNZ 0x004dae04                      ; 004daeaf
        ;   XREF to: 004dae04 (CONDITIONAL_JUMP)  ; LAB_004dae04
    JMP 0x004dae6c                      ; 004daeb5
        ;   XREF to: 004dae6c (UNCONDITIONAL_JUMP)  ; LAB_004dae6c
    MOV EAX,[0x020a5724]                ; 004daeb7 | g_SmallEditorFont
        ;   Label: LAB_004daeb7
    MOV [0x02cf1cd0],EAX                ; 004daebc | g_EditorFont
    POP EBP                             ; 004daec1
    POP EDI                             ; 004daec2
    POP ESI                             ; 004daec3
    POP EBX                             ; 004daec4
    RET                                 ; 004daec5

