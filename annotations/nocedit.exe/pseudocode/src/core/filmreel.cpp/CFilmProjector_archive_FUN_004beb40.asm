; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmProjector_archive_FUN_004beb40(CFilmProjector *this_ptr)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_s_35_loop_wav_00629b58
;   TerminatedCString s_core_filmreel_cpp_00629b64
;   TerminatedCString s_CFilmProjector_Need_to_p_00629b79
;   TerminatedCString s_s_35_start_wav_00629ba8
;   TerminatedCString s_s_35_end_wav_00629bb5
;   double DOUBLE_00629bc5 = 3.14159265350000
;   CFilterFx* g_CFilterFXPtr = 020a570c
;   CEventList* g_CEventListPtr = 02d05310
;   CFilterFx g_CFilterFXInstance
;   CEventList g_CEventListInstance
;   undefined4 g_CFilmReelClassInfo.name_hash
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_dest.cpp_CActorDestination_process_FUN_0046f9b0
;   core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730
;   core_event.cpp_CEventList_executeCommands_FUN_004aabe0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004beb40
        ;   Label: core_filmreel.cpp_CFilmProjector_archive_FUN_004beb40
    PUSH ESI                            ; 004beb41
    PUSH EDI                            ; 004beb42
    PUSH EBP                            ; 004beb43
    SUB ESP,0x10                        ; 004beb44
    MOV EBX,dword ptr [ESP + 0x24]      ; 004beb47
    MOV EDX,dword ptr [EBX + 0x184]     ; 004beb4b
    TEST EDX,EDX                        ; 004beb51
    JNZ 0x004beb83                      ; 004beb53
        ;   XREF to: 004beb83 (CONDITIONAL_JUMP)  ; LAB_004beb83
    CMP dword ptr [EBX + 0x3dc],0x0     ; 004beb55
    JNZ 0x004bec91                      ; 004beb5c
        ;   XREF to: 004bec91 (CONDITIONAL_JUMP)  ; LAB_004bec91
    PUSH dword ptr [ESP + 0x28]         ; 004beb62
        ;   Label: LAB_004beb62
    MOV EAX,dword ptr [EBX + 0x184]     ; 004beb66
    PUSH EBX                            ; 004beb6c
    MOV dword ptr [EBX + 0x3dc],EAX     ; 004beb6d
    CALL core_dest.cpp_CActorDestination_process_FUN_0046f9b0 ; 004beb73
        ;   XREF to: 0046f9b0 (UNCONDITIONAL_CALL)  ; void core_dest.cpp_CActorDestination_process_FUN_0046f9b0(CActorDestination * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004beb78
    ADD ESP,0x10                        ; 004beb7b
    POP EBP                             ; 004beb7e
    POP EDI                             ; 004beb7f
    POP ESI                             ; 004beb80
    POP EBX                             ; 004beb81
    RET                                 ; 004beb82
    FLD float ptr [ESP + 0x28]          ; 004beb83
        ;   Label: LAB_004beb83
    MOV EAX,dword ptr [EBX + 0x158]     ; 004beb87
    FMUL double ptr [0x00629bc5]        ; 004beb8d | DOUBLE_00629bc5
    FLD float ptr [EAX + 0x38]          ; 004beb93
    FLD ST0                             ; 004beb96
    FSUB ST0,ST2                        ; 004beb98
    FSTP ST1                            ; 004beb9a
    FSTP float ptr [EAX + 0x38]         ; 004beb9c
    FLD float ptr [EBX + 0x3d8]         ; 004beb9f
    FSUBR ST1,ST0                       ; 004beba5
    MOV EBP,dword ptr [EBX + 0x3dc]     ; 004beba7
    FXCH                                ; 004bebad
    FSTP ST1                            ; 004bebaf
    FSTP float ptr [EBX + 0x3d8]        ; 004bebb1
    TEST EBP,EBP                        ; 004bebb7
    JZ 0x004bec11                       ; 004bebb9
        ;   XREF to: 004bec11 (CONDITIONAL_JUMP)  ; LAB_004bec11
    MOV EDX,dword ptr [EBX + 0x3e0]     ; 004bebbb
    PUSH EDX                            ; 004bebc1
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004bebc2
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004bebc7
    TEST EAX,EAX                        ; 004bebca
    JZ 0x004bebf7                       ; 004bebcc
        ;   XREF to: 004bebf7 (CONDITIONAL_JUMP)  ; LAB_004bebf7
    MOV ECX,dword ptr [EBX + 0x370]     ; 004bebce
        ;   Label: LAB_004bebce
    CMP ECX,dword ptr [EBX + 0x158]     ; 004bebd4
    JNZ 0x004beb62                      ; 004bebda
        ;   XREF to: 004beb62 (CONDITIONAL_JUMP)  ; LAB_004beb62
    LEA EAX,[EBX + 0x374]               ; 004bebdc
    PUSH EAX                            ; 004bebe2
    MOV ESI,dword ptr [0x006793d0]      ; 004bebe3 | g_CEventListPtr
    PUSH ESI                            ; 004bebe9 | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 004bebea
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004bebef
    JMP 0x004beb62                      ; 004bebf2
        ;   XREF to: 004beb62 (UNCONDITIONAL_JUMP)  ; LAB_004beb62
    PUSH 0x629b58                       ; 004bebf7 | = "35-loop.wav"
        ;   Label: LAB_004bebf7
    MOV EAX,dword ptr [EBX + 0x154]     ; 004bebfc
    PUSH EBX                            ; 004bec02
    CALL dword ptr [EAX + 0x24]         ; 004bec03
    ADD ESP,0x8                         ; 004bec06
    MOV dword ptr [EBX + 0x3e0],EAX     ; 004bec09
    JMP 0x004bebce                      ; 004bec0f
        ;   XREF to: 004bebce (UNCONDITIONAL_JUMP)  ; LAB_004bebce
    MOV EAX,[0x02d12d70]                ; 004bec11 | g_CFilmReelClassInfo.name_hash
        ;   Label: LAB_004bec11
    PUSH EAX                            ; 004bec16
    MOV EDX,dword ptr [EBX + 0x158]     ; 004bec17
    PUSH EDX                            ; 004bec1d
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004bec1e
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004bec23
    MOV ESI,EAX                         ; 004bec26
    TEST EAX,EAX                        ; 004bec28
    JNZ 0x004bec4f                      ; 004bec2a
        ;   XREF to: 004bec4f (CONDITIONAL_JUMP)  ; LAB_004bec4f
    MOV ECX,0x629b64                    ; 004bec2c | = "..\\core\\filmreel.cpp"
    MOV EDI,0x11e                       ; 004bec31
    PUSH 0x629b79                       ; 004bec36 | = "CFilmProjector::Need to put CFilmReel..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004bec3b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004bec41 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004bec47
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004bec4c
    LEA EAX,[ESI + 0x2d8]               ; 004bec4f
        ;   Label: LAB_004bec4f
    PUSH EAX                            ; 004bec55
    MOV EBP,dword ptr [0x0066efd0]      ; 004bec56 | g_CFilterFXPtr
    PUSH EBP                            ; 004bec5c | g_CFilterFXInstance
    CALL core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730 ; 004bec5d
        ;   XREF to: 00470730 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730(CFilterFx * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004bec62
    MOV EAX,dword ptr [EBX + 0x3e0]     ; 004bec65
    PUSH EAX                            ; 004bec6b
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004bec6c
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 004bec71
    PUSH 0x629ba8                       ; 004bec74 | = "35-start.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004bec79
    PUSH EBX                            ; 004bec7f
    CALL dword ptr [EAX + 0x24]         ; 004bec80
    ADD ESP,0x8                         ; 004bec83
    MOV dword ptr [EBX + 0x3e0],EAX     ; 004bec86
    JMP 0x004bebce                      ; 004bec8c
        ;   XREF to: 004bebce (UNCONDITIONAL_JUMP)  ; LAB_004bebce
    PUSH EDX                            ; 004bec91
        ;   Label: LAB_004bec91
    MOV ESI,dword ptr [0x0066efd0]      ; 004bec92 | g_CFilterFXPtr
    PUSH ESI                            ; 004bec98 | g_CFilterFXInstance
    CALL core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730 ; 004bec99
        ;   XREF to: 00470730 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730(CFilterFx * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004bec9e
    MOV EDI,dword ptr [EBX + 0x3e0]     ; 004beca1
    PUSH EDI                            ; 004beca7
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004beca8
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 004becad
    PUSH 0x629bb5                       ; 004becb0 | = "35-end.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004becb5
    PUSH EBX                            ; 004becbb
    CALL dword ptr [EAX + 0x24]         ; 004becbc
    ADD ESP,0x8                         ; 004becbf
    MOV dword ptr [EBX + 0x3e0],EAX     ; 004becc2
    JMP 0x004beb62                      ; 004becc8
        ;   XREF to: 004beb62 (UNCONDITIONAL_JUMP)  ; LAB_004beb62

