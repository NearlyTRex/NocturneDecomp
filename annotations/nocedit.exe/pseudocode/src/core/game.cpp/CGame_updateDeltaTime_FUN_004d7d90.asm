; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[23]:
;   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 at 0043da67
;   core_course.cpp_FUN_00443bc0 at 00443fa1
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047ce71
;   core_game.cpp_CGame_finishAct_FUN_004e3b90 at 004e3c3b
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da1c2
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e42b3
;   core_menu.cpp_configureCustomKeys_FUN_00511890 at 005118d4
;   core_menu.cpp_configureGraphicsOptions_FUN_00510c80 at 00510d3a
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00511e99
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 00513017
;   ... and 13 more
;
; Referenced Globals:
;   float g_MovieRecordingFrameBase = 65536
;   double g_DeltaTimeToSeconds = 0.0000152587890625
;   float g_MovieRecordingTargetFPS = 30
;   int g_GlobalDeltaTimeInt
;   int g_DebugRecording
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7d90
        ;   Label: core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
    PUSH ESI                            ; 004d7d91
    PUSH EDI                            ; 004d7d92
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d7d93
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004d7d97 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x25c]     ; 004d7d9c
    MOV ESI,EAX                         ; 004d7da2
    SUB EAX,EDX                         ; 004d7da4
    MOV EDX,EAX                         ; 004d7da6
    MOV ECX,0x12                        ; 004d7da8
    SAR EDX,0x1f                        ; 004d7dad
    IDIV ECX                            ; 004d7db0
    MOV dword ptr [EBX + 0x260],EAX     ; 004d7db2
    TEST EAX,EAX                        ; 004d7db8
    JL 0x004d7e10                       ; 004d7dba | LAB_004d7e10
        ;   XREF to: 004d7e10 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x25c],ESI     ; 004d7dbc
        ;   Label: LAB_004d7dbc
    CMP dword ptr [EBX + 0x260],0x4000  ; 004d7dc2
    JG 0x004d7e1c                       ; 004d7dcc | LAB_004d7e1c
        ;   XREF to: 004d7e1c (CONDITIONAL_JUMP)
    FILD dword ptr [EBX + 0x260]        ; 004d7dce
        ;   Label: LAB_004d7dce
    FMUL float ptr [EBX + 0x1ec]        ; 004d7dd4
    MOV EDI,dword ptr [0x02d831b4]      ; 004d7dda | int g_DebugRecording
    CALL crt_math.c_round_FUN_005fe6b0  ; 004d7de0 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBX + 0x260]       ; 004d7de5
    TEST EDI,EDI                        ; 004d7deb
    JNZ 0x004d7e28                      ; 004d7ded | LAB_004d7e28
        ;   XREF to: 004d7e28 (CONDITIONAL_JUMP)
    FILD dword ptr [EBX + 0x260]        ; 004d7def
        ;   Label: LAB_004d7def
    MOV EAX,dword ptr [EBX + 0x260]     ; 004d7df5
    FMUL double ptr [0x0062b24d]        ; 004d7dfb | double g_DeltaTimeToSeconds
    MOV [0x02cf6a80],EAX                ; 004d7e01 | int g_GlobalDeltaTimeInt
    FSTP float ptr [EBX + 0x264]        ; 004d7e06
    POP EDI                             ; 004d7e0c
    POP ESI                             ; 004d7e0d
    POP EBX                             ; 004d7e0e
    RET                                 ; 004d7e0f
    MOV dword ptr [EBX + 0x260],0x0     ; 004d7e10
        ;   Label: LAB_004d7e10
    JMP 0x004d7dbc                      ; 004d7e1a | LAB_004d7dbc
        ;   XREF to: 004d7dbc (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x260],0x4000  ; 004d7e1c
        ;   Label: LAB_004d7e1c
    JMP 0x004d7dce                      ; 004d7e26 | LAB_004d7dce
        ;   XREF to: 004d7dce (UNCONDITIONAL_JUMP)
    FLD float ptr [0x0062b249]          ; 004d7e28 | float g_MovieRecordingFrameBase
        ;   Label: LAB_004d7e28
    FDIV float ptr [0x0067b660]         ; 004d7e2e | float g_MovieRecordingTargetFPS
    FMUL float ptr [EBX + 0x1ec]        ; 004d7e34
    CALL crt_math.c_round_FUN_005fe6b0  ; 004d7e3a | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBX + 0x260]       ; 004d7e3f
    JMP 0x004d7def                      ; 004d7e45 | LAB_004d7def
        ;   XREF to: 004d7def (UNCONDITIONAL_JUMP)

