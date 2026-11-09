; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_FUN_00419b40(CBoneGuy *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00419b24 = 0041a43b
;   TerminatedCString s_s_confused_while_walking_005b71b2
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005b71dc
;   TerminatedCString s_boneguy_swing_wav_005b71fd
;   TerminatedCString s_boneGuy_walkloop_wav_005b7210
;   undefined4 DAT_005b722a
;   undefined4 DAT_005b7232
;   undefined4 DAT_005b723a
;   undefined4 DAT_005b7242
;   undefined4 DAT_005b724a
;   undefined4 DAT_005b7252
;   undefined4 DAT_005dc138
;   undefined4 DAT_005dc144
;   CConsole* g_CConsolePtr = 007f7ea4
;   undefined4 DAT_005fba60
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_0040ce40
;   core_boneguy.cpp_FUN_00418930
;   core_boneguy.cpp_FUN_00419550
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042cd30
;   core_charactr.cpp_FUN_00431660
;   core_charactr.cpp_FUN_004319d0
;   core_charactr.cpp_FUN_00433350
;   core_charactr.cpp_FUN_00433fb0
;   core_charactr.cpp_FUN_00434850
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   ... and 22 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419b40
        ;   Label: core_boneguy.cpp_FUN_00419b40
    PUSH ESI                            ; 00419b41
    PUSH EDI                            ; 00419b42
    PUSH EBP                            ; 00419b43
    MOV EBP,ESP                         ; 00419b44
    SUB ESP,0x234                       ; 00419b46
    SUB EBP,0x7a                        ; 00419b4c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00419b4f
    LEA EAX,[EBX + 0xd07c]              ; 00419b55
    PUSH EAX                            ; 00419b5b
    MOV EDX,dword ptr [0x005fba60]      ; 00419b5c | DAT_005fba60
    PUSH EDX                            ; 00419b62
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00419b63
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00419b68
    TEST EAX,EAX                        ; 00419b6b
    JZ 0x00419bb3                       ; 00419b6d
        ;   XREF to: 00419bb3 (CONDITIONAL_JUMP)  ; LAB_00419bb3
    MOV dword ptr [EBX + 0x2538],0x0    ; 00419b6f
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 00419b79
    MOV ECX,dword ptr [EBX + 0xd0e4]    ; 00419b83
    MOV dword ptr [EBX + 0xd694],0x0    ; 00419b89
    TEST ECX,ECX                        ; 00419b93
    JNZ 0x00419ba0                      ; 00419b95
        ;   XREF to: 00419ba0 (CONDITIONAL_JUMP)  ; LAB_00419ba0
    PUSH EBX                            ; 00419b97
    CALL core_boneguy.cpp_FUN_00419550  ; 00419b98
        ;   XREF to: 00419550 (UNCONDITIONAL_CALL)  ; void core_boneguy.cpp_FUN_00419550(CBoneGuy * this_ptr)
    ADD ESP,0x4                         ; 00419b9d
    PUSH 0x0                            ; 00419ba0
        ;   Label: LAB_00419ba0
    PUSH 0x5                            ; 00419ba2
    LEA EAX,[EBX + 0x158]               ; 00419ba4
    PUSH EAX                            ; 00419baa
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 00419bab
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 00419bb0
    PUSH dword ptr [EBP + 0x92]         ; 00419bb3
        ;   Label: LAB_00419bb3
    MOV EAX,dword ptr [EBX + 0x154]     ; 00419bb9
    PUSH EBX                            ; 00419bbf
    CALL dword ptr [EAX + 0x148]        ; 00419bc0
    ADD ESP,0x8                         ; 00419bc6
    TEST EAX,EAX                        ; 00419bc9
    JZ 0x00419e20                       ; 00419bcb
        ;   XREF to: 00419e20 (CONDITIONAL_JUMP)  ; LAB_00419e20
    CMP dword ptr [EBX + 0xd0e4],0x1    ; 00419bd1
    JNZ 0x00419bed                      ; 00419bd8
        ;   XREF to: 00419bed (CONDITIONAL_JUMP)  ; LAB_00419bed
    FLD float ptr [EBX + 0x2538]        ; 00419bda
    FLDZ                                ; 00419be0
    FCOMPP                              ; 00419be2
    FNSTSW AX                           ; 00419be4
    SAHF                                ; 00419be6
    JC 0x00419e37                       ; 00419be7
        ;   XREF to: 00419e37 (CONDITIONAL_JUMP)  ; LAB_00419e37
    CMP dword ptr [EBX + 0xd0e4],0x2    ; 00419bed
        ;   Label: LAB_00419bed
    JNZ 0x00419ef5                      ; 00419bf4
        ;   XREF to: 00419ef5 (CONDITIONAL_JUMP)  ; LAB_00419ef5
    FLD float ptr [EBP + 0x92]          ; 00419bfa
    FDIV float ptr [0x005dc144]         ; 00419c00 | DAT_005dc144
    FADD float ptr [EBX + 0xd694]       ; 00419c06
    FST float ptr [EBX + 0xd694]        ; 00419c0c
    FLD1                                ; 00419c12
    FCOMPP                              ; 00419c14
    FNSTSW AX                           ; 00419c16
    SAHF                                ; 00419c18
    JBE 0x00419e70                      ; 00419c19
        ;   XREF to: 00419e70 (CONDITIONAL_JUMP)  ; LAB_00419e70
    XOR EDX,EDX                         ; 00419c1f
    MOV ECX,dword ptr [EBX + 0xd0e8]    ; 00419c21
    MOV dword ptr [EBP + 0x66],EDX      ; 00419c27
    TEST ECX,ECX                        ; 00419c2a
    JLE 0x00419e18                      ; 00419c2c
        ;   XREF to: 00419e18 (CONDITIONAL_JUMP)  ; LAB_00419e18
    LEA EAX,[EBX + 0xd0f0]              ; 00419c32
    MOV dword ptr [EBP + 0x52],EAX      ; 00419c38
    LEA EAX,[EBX + 0xd694]              ; 00419c3b
    MOV dword ptr [EBP + 0x5e],EAX      ; 00419c41
    LEA EAX,[EBX + 0xd108]              ; 00419c44
    MOV dword ptr [EBP + 0x5a],EAX      ; 00419c4a
    LEA EAX,[EBX + 0xd118]              ; 00419c4d
    MOV dword ptr [EBP + 0x62],EAX      ; 00419c53
    LEA EAX,[EBX + 0xd128]              ; 00419c56
    MOV dword ptr [EBP + 0x6a],EAX      ; 00419c5c
    IMUL EAX,dword ptr [EBP + 0x66],0x48 ; 00419c5f
        ;   Label: LAB_00419c5f
    ADD EAX,dword ptr [EBP + 0x52]      ; 00419c63
    LEA EDI,[EBP + 0xa]                 ; 00419c66
    FLD float ptr [EAX]                 ; 00419c69
    MOV EDX,dword ptr [EAX + 0x44]      ; 00419c6b
    FLD float ptr [EAX + 0x4]           ; 00419c6e
    MOV dword ptr [EBP + 0x36],EDX      ; 00419c71
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00419c74
    FLD float ptr [EAX + 0x8]           ; 00419c77
    LEA ESI,[EBP + 0xffffff4a]          ; 00419c7a
    FXCH ST2                            ; 00419c80
    FSUB float ptr [EDX]                ; 00419c82
    FXCH                                ; 00419c84
    FSUB float ptr [EDX + 0x4]          ; 00419c86
    FXCH ST2                            ; 00419c89
    FSUB float ptr [EDX + 0x8]          ; 00419c8b
    FXCH                                ; 00419c8e
    FSTP float ptr [EBP + 0xffffff4a]   ; 00419c90
    FXCH                                ; 00419c96
    FSTP float ptr [EBP + 0xffffff4e]   ; 00419c98
    FSTP float ptr [EBP + 0xffffff52]   ; 00419c9e
    MOVSD ES:EDI,ESI                    ; 00419ca4
    MOVSD ES:EDI,ESI                    ; 00419ca5
    MOVSD ES:EDI,ESI                    ; 00419ca6
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00419ca7
    FLD float ptr [EBP + 0xa]           ; 00419caa
    FMUL float ptr [EAX]                ; 00419cad
    FLD float ptr [EBP + 0xe]           ; 00419caf
    FMUL float ptr [EAX]                ; 00419cb2
    FLD float ptr [EBP + 0x12]          ; 00419cb4
    FMUL float ptr [EAX]                ; 00419cb7
    LEA EDI,[EBP + 0xfffffede]          ; 00419cb9
    LEA ESI,[EBP + 0xffffff62]          ; 00419cbf
    FXCH ST2                            ; 00419cc5
    FSTP float ptr [EBP + 0xffffff62]   ; 00419cc7
    FSTP float ptr [EBP + 0xffffff66]   ; 00419ccd
    FSTP float ptr [EBP + 0xffffff6a]   ; 00419cd3
    MOVSD ES:EDI,ESI                    ; 00419cd9
    MOVSD ES:EDI,ESI                    ; 00419cda
    MOVSD ES:EDI,ESI                    ; 00419cdb
    FLD float ptr [EDX]                 ; 00419cdc
    FLD float ptr [EDX + 0x4]           ; 00419cde
    FLD float ptr [EDX + 0x8]           ; 00419ce1
    LEA EDI,[EBP + -0xe]                ; 00419ce4
    LEA ESI,[EBP + -0x2]                ; 00419ce7
    FXCH ST2                            ; 00419cea
    FADD float ptr [EBP + 0xfffffede]   ; 00419cec
    FXCH                                ; 00419cf2
    FADD float ptr [EBP + 0xfffffee2]   ; 00419cf4
    FXCH ST2                            ; 00419cfa
    FADD float ptr [EBP + 0xfffffee6]   ; 00419cfc
    FXCH                                ; 00419d02
    FSTP float ptr [EBP + -0x2]         ; 00419d04
    FXCH                                ; 00419d07
    FSTP float ptr [EBP + 0x2]          ; 00419d09
    FSTP float ptr [EBP + 0x6]          ; 00419d0c
    MOVSD ES:EDI,ESI                    ; 00419d0f
    MOVSD ES:EDI,ESI                    ; 00419d10
    MOVSD ES:EDI,ESI                    ; 00419d11
    MOV EDI,dword ptr [EBP + 0x62]      ; 00419d12
    PUSH dword ptr [EBX + 0xd694]       ; 00419d15
    PUSH EDI                            ; 00419d1b
    MOV EAX,dword ptr [EBP + 0x5a]      ; 00419d1c
    PUSH EAX                            ; 00419d1f
    LEA ESI,[EBP + 0xfffffece]          ; 00419d20
    LEA EDI,[EBP + 0xfffffebe]          ; 00419d26
    CALL core_xform.cpp_FUN_00585b20    ; 00419d2c
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00585b20()
    LEA ESI,[EBP + 0xfffffece]          ; 00419d31
    LEA EAX,[EBP + 0xfffffebe]          ; 00419d37
    ADD ESP,0xc                         ; 00419d3d
    MOVSD ES:EDI,ESI                    ; 00419d40
    MOVSD ES:EDI,ESI                    ; 00419d41
    MOVSD ES:EDI,ESI                    ; 00419d42
    MOVSD ES:EDI,ESI                    ; 00419d43
    PUSH EAX                            ; 00419d44
    LEA ESI,[EBP + -0x3e]               ; 00419d45
    LEA EDI,[EBP + 0xffffff0e]          ; 00419d48
    CALL core_xform.cpp_FUN_00585de0    ; 00419d4e
        ;   XREF to: 00585de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00585de0()
    LEA ESI,[EBP + -0x3e]               ; 00419d53
    MOVSD ES:EDI,ESI                    ; 00419d56
    MOVSD ES:EDI,ESI                    ; 00419d57
    MOVSD ES:EDI,ESI                    ; 00419d58
    FLD float ptr [EBX + 0xd694]        ; 00419d59
    FMUL double ptr [0x005b7252]        ; 00419d5f | DAT_005b7252
    MOV EAX,dword ptr [EBP + -0xe]      ; 00419d65
    FLD float ptr [EBP + 0xffffff0e]    ; 00419d68
    FXCH                                ; 00419d6e
    FADD ST0,ST1                        ; 00419d70
    MOV ESI,dword ptr [EBP + 0x36]      ; 00419d72
    FSTP ST1                            ; 00419d75
    FSTP float ptr [EBP + 0xffffff0e]   ; 00419d77
    MOV dword ptr [ESI + 0x20],EAX      ; 00419d7d
    MOV EAX,dword ptr [EBP + -0xa]      ; 00419d80
    MOV dword ptr [ESI + 0x24],EAX      ; 00419d83
    MOV EAX,dword ptr [EBP + -0x6]      ; 00419d86
    LEA EDX,[ESI + 0x30]                ; 00419d89
    MOV dword ptr [ESI + 0x28],EAX      ; 00419d8c
    LEA EAX,[EBP + 0xffffff0e]          ; 00419d8f
    ADD ESP,0x4                         ; 00419d95
    CMP EDX,EAX                         ; 00419d98
    JNZ 0x00419e51                      ; 00419d9a
        ;   XREF to: 00419e51 (CONDITIONAL_JUMP)  ; LAB_00419e51
    LEA EAX,[EBP + -0xe]                ; 00419da0
        ;   Label: LAB_00419da0
    LEA EDX,[ESI + 0xcd0]               ; 00419da3
    CMP EDX,EAX                         ; 00419da9
    JZ 0x00419dbe                       ; 00419dab
        ;   XREF to: 00419dbe (CONDITIONAL_JUMP)  ; LAB_00419dbe
    MOV EAX,dword ptr [EBP + -0xe]      ; 00419dad
    MOV dword ptr [EDX],EAX             ; 00419db0
    MOV EAX,dword ptr [EBP + -0xa]      ; 00419db2
    MOV dword ptr [EDX + 0x4],EAX       ; 00419db5
    MOV EAX,dword ptr [EBP + -0x6]      ; 00419db8
    MOV dword ptr [EDX + 0x8],EAX       ; 00419dbb
    LEA EAX,[EBP + 0xffffff0e]          ; 00419dbe
        ;   Label: LAB_00419dbe
    LEA EDX,[ESI + 0xcdc]               ; 00419dc4
    CMP EDX,EAX                         ; 00419dca
    JZ 0x00419de8                       ; 00419dcc
        ;   XREF to: 00419de8 (CONDITIONAL_JUMP)  ; LAB_00419de8
    MOV EAX,dword ptr [EBP + 0xffffff0e] ; 00419dce
    MOV dword ptr [EDX],EAX             ; 00419dd4
    MOV EAX,dword ptr [EBP + 0xffffff12] ; 00419dd6
    MOV dword ptr [EDX + 0x4],EAX       ; 00419ddc
    MOV EAX,dword ptr [EBP + 0xffffff16] ; 00419ddf
    MOV dword ptr [EDX + 0x8],EAX       ; 00419de5
    MOV EDX,dword ptr [EBP + 0x5a]      ; 00419de8
        ;   Label: LAB_00419de8
    MOV ECX,dword ptr [EBP + 0x62]      ; 00419deb
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00419dee
    MOV EDI,dword ptr [EBP + 0x66]      ; 00419df1
    ADD EDX,0x48                        ; 00419df4
    ADD ECX,0x48                        ; 00419df7
    ADD ESI,0x48                        ; 00419dfa
    INC EDI                             ; 00419dfd
    MOV dword ptr [EBP + 0x5a],EDX      ; 00419dfe
    MOV dword ptr [EBP + 0x62],ECX      ; 00419e01
    MOV dword ptr [EBP + 0x6a],ESI      ; 00419e04
    MOV EDX,dword ptr [EBX + 0xd0e8]    ; 00419e07
    MOV dword ptr [EBP + 0x66],EDI      ; 00419e0d
    CMP EDI,EDX                         ; 00419e10
    JL 0x00419c5f                       ; 00419e12
        ;   XREF to: 00419c5f (CONDITIONAL_JUMP)  ; LAB_00419c5f
    LEA ESP,[EBP + 0x7a]                ; 00419e18
        ;   Label: LAB_00419e18
    POP EBP                             ; 00419e1b
    POP EDI                             ; 00419e1c
    POP ESI                             ; 00419e1d
    POP EBX                             ; 00419e1e
    RET                                 ; 00419e1f
    MOV ESI,dword ptr [EBX + 0xd078]    ; 00419e20
        ;   Label: LAB_00419e20
    PUSH ESI                            ; 00419e26
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00419e27
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00419e2c
    LEA ESP,[EBP + 0x7a]                ; 00419e2f
    POP EBP                             ; 00419e32
    POP EDI                             ; 00419e33
    POP ESI                             ; 00419e34
    POP EBX                             ; 00419e35
    RET                                 ; 00419e36
    FLD float ptr [EBX + 0xd694]        ; 00419e37
        ;   Label: LAB_00419e37
    FADD float ptr [EBP + 0x92]         ; 00419e3d
    FSTP float ptr [EBX + 0xd694]       ; 00419e43
    LEA ESP,[EBP + 0x7a]                ; 00419e49
    POP EBP                             ; 00419e4c
    POP EDI                             ; 00419e4d
    POP ESI                             ; 00419e4e
    POP EBX                             ; 00419e4f
    RET                                 ; 00419e50
    MOV EAX,dword ptr [EBP + 0xffffff0e] ; 00419e51
        ;   Label: LAB_00419e51
    MOV dword ptr [EDX],EAX             ; 00419e57
    MOV EAX,dword ptr [EBP + 0xffffff12] ; 00419e59
    MOV dword ptr [EDX + 0x4],EAX       ; 00419e5f
    MOV EAX,dword ptr [EBP + 0xffffff16] ; 00419e62
    MOV dword ptr [EDX + 0x8],EAX       ; 00419e68
    JMP 0x00419da0                      ; 00419e6b
        ;   XREF to: 00419da0 (UNCONDITIONAL_JUMP)  ; LAB_00419da0
    LEA EAX,[EBX + 0x158]               ; 00419e70
        ;   Label: LAB_00419e70
    PUSH EAX                            ; 00419e76
    XOR EDI,EDI                         ; 00419e77
    CALL core_skeleton.cpp_FUN_0054e670 ; 00419e79
        ;   XREF to: 0054e670 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054e670()
    MOV EAX,dword ptr [EBX + 0xd0e8]    ; 00419e7e
    ADD ESP,0x4                         ; 00419e84
    TEST EAX,EAX                        ; 00419e87
    JLE 0x00419ec0                      ; 00419e89
        ;   XREF to: 00419ec0 (CONDITIONAL_JUMP)  ; LAB_00419ec0
    MOV ESI,EBX                         ; 00419e8b
    PUSH 0x1                            ; 00419e8d
        ;   Label: LAB_00419e8d
    MOV EAX,dword ptr [ESI + 0xd134]    ; 00419e8f
    PUSH EAX                            ; 00419e95
    MOV EDX,dword ptr [0x00600530]      ; 00419e96 | DAT_00600530
    PUSH EDX                            ; 00419e9c | DAT_01d81080
    ADD ESI,0x48                        ; 00419e9d
    CALL core_mission.cpp_FUN_004f6f10  ; 00419ea0
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f6f10()
    MOV dword ptr [ESI + 0xd0ec],0x0    ; 00419ea5
    INC EDI                             ; 00419eaf
    MOV ECX,dword ptr [EBX + 0xd0e8]    ; 00419eb0
    ADD ESP,0xc                         ; 00419eb6
    CMP EDI,ECX                         ; 00419eb9
    JL 0x00419e8d                       ; 00419ebb
        ;   XREF to: 00419e8d (CONDITIONAL_JUMP)  ; LAB_00419e8d
    LEA EAX,[EAX]                       ; 00419ebd
    FLD float ptr [EBX + 0xd0e0]        ; 00419ec0
        ;   Label: LAB_00419ec0
    MOV dword ptr [EBX + 0xd0e4],0x0    ; 00419ec6
    FLD ST0                             ; 00419ed0
    FMUL double ptr [0x005b722a]        ; 00419ed2 | DAT_005b722a
    MOV dword ptr [EBX + 0x2538],0x41200000 ; 00419ed8
    FSTP ST1                            ; 00419ee2
    FST float ptr [EBX + 0xd0e0]        ; 00419ee4
    FCOMP double ptr [0x005b7232]       ; 00419eea | DAT_005b7232
    FNSTSW AX                           ; 00419ef0
    SAHF                                ; 00419ef2
    JBE 0x00419f52                      ; 00419ef3
        ;   XREF to: 00419f52 (CONDITIONAL_JUMP)  ; LAB_00419f52
    LEA EAX,[EBX + 0x249c]              ; 00419ef5
        ;   Label: LAB_00419ef5
    MOV dword ptr [EAX + 0x8],0x0       ; 00419efb
    FLD float ptr [EBP + 0x92]          ; 00419f02
    MOV EDX,dword ptr [EAX + 0x8]       ; 00419f08
    MOV dword ptr [EAX + 0x4],EDX       ; 00419f0b
    MOV EDX,dword ptr [EAX + 0x4]       ; 00419f0e
    MOV dword ptr [EAX],EDX             ; 00419f11
    LEA EAX,[EBX + 0x158]               ; 00419f13
    FMUL float ptr [EBX + 0xcdcc]       ; 00419f19
    MOV dword ptr [EBP + 0x56],EAX      ; 00419f1f
    FSTP float ptr [EBP + 0x42]         ; 00419f22
    MOV EDI,dword ptr [EBP + 0x56]      ; 00419f25
    FLD float ptr [EBP + 0x42]          ; 00419f28
        ;   Label: LAB_00419f28
    FLDZ                                ; 00419f2b
    FCOMPP                              ; 00419f2d
    FNSTSW AX                           ; 00419f2f
    SAHF                                ; 00419f31
    JNC 0x00419f87                      ; 00419f32
        ;   XREF to: 00419f87 (CONDITIONAL_JUMP)  ; LAB_00419f87
    LEA EAX,[EBP + 0x42]                ; 00419f34
    PUSH EAX                            ; 00419f37
    PUSH EDI                            ; 00419f38
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 00419f39
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00419f3e
    CMP EAX,0x64                        ; 00419f41
    JZ 0x00419f5e                       ; 00419f44
        ;   XREF to: 00419f5e (CONDITIONAL_JUMP)  ; LAB_00419f5e
    PUSH EAX                            ; 00419f46
    PUSH EBX                            ; 00419f47
    CALL core_charactr.cpp_FUN_00433fb0 ; 00419f48
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00419f4d
    JMP 0x00419f28                      ; 00419f50
        ;   XREF to: 00419f28 (UNCONDITIONAL_JUMP)  ; LAB_00419f28
    MOV dword ptr [EBX + 0xd0e0],0x40200000 ; 00419f52
        ;   Label: LAB_00419f52
    JMP 0x00419ef5                      ; 00419f5c
        ;   XREF to: 00419ef5 (UNCONDITIONAL_JUMP)  ; LAB_00419ef5
    MOV EAX,dword ptr [EBX + 0xd064]    ; 00419f5e
        ;   Label: LAB_00419f5e
    TEST EAX,EAX                        ; 00419f64
    JZ 0x00419f28                       ; 00419f66
        ;   XREF to: 00419f28 (CONDITIONAL_JUMP)  ; LAB_00419f28
    PUSH 0x0                            ; 00419f68
    PUSH 0x3e4ccccd                     ; 00419f6a
    PUSH EAX                            ; 00419f6f
    PUSH 0x1                            ; 00419f70
    PUSH EBX                            ; 00419f72
    MOV dword ptr [EBX + 0xd064],0x0    ; 00419f73
    CALL core_charactr.cpp_FUN_004319d0 ; 00419f7d
        ;   XREF to: 004319d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004319d0()
    ADD ESP,0x14                        ; 00419f82
    JMP 0x00419f28                      ; 00419f85
        ;   XREF to: 00419f28 (UNCONDITIONAL_JUMP)  ; LAB_00419f28
    FLD float ptr [EBP + 0x92]          ; 00419f87
        ;   Label: LAB_00419f87
    FMUL float ptr [EBX + 0xcdcc]       ; 00419f8d
    SUB ESP,0x4                         ; 00419f93
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00419f96
    MOV dword ptr [EBX + 0x2524],EAX    ; 00419f9c
    FSTP float ptr [ESP]                ; 00419fa2
    PUSH EBX                            ; 00419fa5
    CALL core_charactr.cpp_FUN_00434850 ; 00419fa6
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 00419fab
    MOV ESI,dword ptr [EBP + 0x56]      ; 00419fae
    PUSH ESI                            ; 00419fb1
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00419fb2
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00419fb7
    PUSH dword ptr [EBP + 0x92]         ; 00419fba
    MOV ESI,dword ptr [EAX + 0x24]      ; 00419fc0
    PUSH EBX                            ; 00419fc3
    MOV dword ptr [EBP + 0x4a],ESI      ; 00419fc4
    CALL core_charactr.cpp_FUN_00431660 ; 00419fc7
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00419fcc
    TEST EAX,EAX                        ; 00419fcf
    JZ 0x0041a7e3                       ; 00419fd1
        ;   XREF to: 0041a7e3 (CONDITIONAL_JUMP)  ; LAB_0041a7e3
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00419fd7
    CMP EAX,0x2                         ; 00419fdd
    JNC 0x0041a246                      ; 00419fe0
        ;   XREF to: 0041a246 (CONDITIONAL_JUMP)  ; LAB_0041a246
    CMP EAX,0x1                         ; 00419fe6
    JNZ 0x0041a251                      ; 00419fe9
        ;   XREF to: 0041a251 (CONDITIONAL_JUMP)  ; LAB_0041a251
    PUSH 0x1                            ; 00419fef
        ;   Label: LAB_00419fef
    PUSH 0x1                            ; 00419ff1
    LEA EAX,[EBX + 0x158]               ; 00419ff3
        ;   Label: LAB_00419ff3
    PUSH EAX                            ; 00419ff9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00419ffa
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00419fff
        ;   Label: LAB_00419fff
    LEA EAX,[EBX + 0x249c]              ; 0041a002
    MOV dword ptr [EAX + 0x8],0x0       ; 0041a008
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041a00f
    MOV dword ptr [EAX + 0x4],EDX       ; 0041a012
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041a015
    MOV dword ptr [EAX],EDX             ; 0041a018
    FLD float ptr [EBX + 0xcde0]        ; 0041a01a
        ;   Label: caseD_3
    FLDZ                                ; 0041a020
    FCOMPP                              ; 0041a022
    FNSTSW AX                           ; 0041a024
    SAHF                                ; 0041a026
    JNC 0x0041a03b                      ; 0041a027
        ;   XREF to: 0041a03b (CONDITIONAL_JUMP)  ; LAB_0041a03b
    FLD float ptr [EBX + 0xcde0]        ; 0041a029
    FSUB float ptr [EBP + 0x92]         ; 0041a02f
    FSTP float ptr [EBX + 0xcde0]       ; 0041a035
    PUSH EBX                            ; 0041a03b
        ;   Label: LAB_0041a03b
    CALL core_charactr.cpp_FUN_0042ccf0 ; 0041a03c
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041a041
    TEST EAX,EAX                        ; 0041a044
    JZ 0x0041a156                       ; 0041a046
        ;   XREF to: 0041a156 (CONDITIONAL_JUMP)  ; LAB_0041a156
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0041a04c
    TEST ESI,ESI                        ; 0041a052
    JZ 0x0041a07f                       ; 0041a054
        ;   XREF to: 0041a07f (CONDITIONAL_JUMP)  ; LAB_0041a07f
    PUSH ESI                            ; 0041a056
    MOV EDX,dword ptr [ESI + 0x154]     ; 0041a057
    CALL dword ptr [EDX + 0xf4]         ; 0041a05d
    ADD ESP,0x4                         ; 0041a063
    CMP EAX,EBX                         ; 0041a066
    JNZ 0x0041a07f                      ; 0041a068
        ;   XREF to: 0041a07f (CONDITIONAL_JUMP)  ; LAB_0041a07f
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 0041a06a
    PUSH EDI                            ; 0041a070
    MOV EAX,[0x00603b28]                ; 0041a071 | g_CDemonSetPtr
    PUSH EAX                            ; 0041a076 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0041a077
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0041a07c
    PUSH dword ptr [EBP + 0x92]         ; 0041a07f
        ;   Label: LAB_0041a07f
    PUSH EBX                            ; 0041a085
    LEA ESI,[EBX + 0x2518]              ; 0041a086
    CALL core_charactr.cpp_FUN_0042c1e0 ; 0041a08c
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 0041a091
    FMUL float ptr [EBP + 0x92]         ; 0041a093
    FLD float ptr [ESI + 0x4]           ; 0041a099
    FMUL float ptr [EBP + 0x92]         ; 0041a09c
    FLD float ptr [ESI + 0x8]           ; 0041a0a2
    FMUL float ptr [EBP + 0x92]         ; 0041a0a5
    LEA EDI,[EBP + -0x4a]               ; 0041a0ab
    LEA ESI,[EBP + -0x7a]               ; 0041a0ae
    FXCH ST2                            ; 0041a0b1
    FSTP float ptr [EBP + -0x7a]        ; 0041a0b3
    FSTP float ptr [EBP + -0x76]        ; 0041a0b6
    FSTP float ptr [EBP + -0x72]        ; 0041a0b9
    MOVSD ES:EDI,ESI                    ; 0041a0bc
    MOVSD ES:EDI,ESI                    ; 0041a0bd
    MOVSD ES:EDI,ESI                    ; 0041a0be
    LEA EAX,[EBX + 0x250c]              ; 0041a0bf
    FLD float ptr [EBP + -0x4a]         ; 0041a0c5
    FLD float ptr [EBP + -0x46]         ; 0041a0c8
    FLD float ptr [EBP + -0x42]         ; 0041a0cb
    LEA EDI,[EBP + -0x62]               ; 0041a0ce
    LEA ESI,[EBP + -0x6e]               ; 0041a0d1
    FXCH ST2                            ; 0041a0d4
    FADD float ptr [EAX]                ; 0041a0d6
    FXCH                                ; 0041a0d8
    FADD float ptr [EAX + 0x4]          ; 0041a0da
    FXCH ST2                            ; 0041a0dd
    FADD float ptr [EAX + 0x8]          ; 0041a0df
    FXCH                                ; 0041a0e2
    FSTP float ptr [EBP + -0x6e]        ; 0041a0e4
    FXCH                                ; 0041a0e7
    FSTP float ptr [EBP + -0x6a]        ; 0041a0e9
    FSTP float ptr [EBP + -0x66]        ; 0041a0ec
    MOVSD ES:EDI,ESI                    ; 0041a0ef
    MOVSD ES:EDI,ESI                    ; 0041a0f0
    MOVSD ES:EDI,ESI                    ; 0041a0f1
    LEA EDX,[EBX + 0x249c]              ; 0041a0f2
    FLD float ptr [EBP + -0x62]         ; 0041a0f8
    FLD float ptr [EBP + -0x5e]         ; 0041a0fb
    FLD float ptr [EBP + -0x5a]         ; 0041a0fe
    LEA EDI,[EBP + -0x56]               ; 0041a101
    LEA ESI,[EBP + -0x1a]               ; 0041a104
    FXCH ST2                            ; 0041a107
    FADD float ptr [EDX]                ; 0041a109
    FXCH                                ; 0041a10b
    FADD float ptr [EDX + 0x4]          ; 0041a10d
    FXCH ST2                            ; 0041a110
    FADD float ptr [EDX + 0x8]          ; 0041a112
    FXCH                                ; 0041a115
    FSTP float ptr [EBP + -0x1a]        ; 0041a117
    FXCH                                ; 0041a11a
    FSTP float ptr [EBP + -0x16]        ; 0041a11c
    FSTP float ptr [EBP + -0x12]        ; 0041a11f
    MOVSD ES:EDI,ESI                    ; 0041a122
    MOVSD ES:EDI,ESI                    ; 0041a123
    MOVSD ES:EDI,ESI                    ; 0041a124
    MOV dword ptr [EAX + 0x8],0x0       ; 0041a125
    ADD ESP,0x8                         ; 0041a12c
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041a12f
    MOV dword ptr [EAX + 0x4],ECX       ; 0041a132
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041a135
    MOV dword ptr [EAX],ECX             ; 0041a138
    MOV dword ptr [EDX + 0x8],0x0       ; 0041a13a
    LEA EAX,[EBP + -0x56]               ; 0041a141
    FLD float ptr [EDX + 0x8]           ; 0041a144
    PUSH EAX                            ; 0041a147
    FST float ptr [EDX + 0x4]           ; 0041a148
    PUSH EBX                            ; 0041a14b
    FSTP float ptr [EDX]                ; 0041a14c
    CALL core_charactr.cpp_FUN_0042c230 ; 0041a14e
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0041a153
    PUSH EBX                            ; 0041a156
        ;   Label: LAB_0041a156
    CALL core_charactr.cpp_FUN_0042cd30 ; 0041a157
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041a15c
    LEA EAX,[EBX + 0x158]               ; 0041a15f
    PUSH EAX                            ; 0041a165
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 0041a166
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041a16b
    PUSH dword ptr [EBP + 0x92]         ; 0041a16e
    PUSH EBX                            ; 0041a174
    CALL core_charactr.cpp_FUN_00433350 ; 0041a175
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433350(CCharacter * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBP + 0x4a]      ; 0041a17a
    ADD ESP,0x8                         ; 0041a17d
    CMP EDX,0x1                         ; 0041a180
    JNZ 0x0041a7f3                      ; 0041a183
        ;   XREF to: 0041a7f3 (CONDITIONAL_JUMP)  ; LAB_0041a7f3
    PUSH 0x42c80000                     ; 0041a189
    SUB ESP,0x8                         ; 0041a18e
    FLD float ptr [EBX + 0x28]          ; 0041a191
    FSTP double ptr [ESP]               ; 0041a194
    SUB ESP,0x8                         ; 0041a197
    FLD float ptr [EBX + 0x24]          ; 0041a19a
    FSTP double ptr [ESP]               ; 0041a19d
    SUB ESP,0x8                         ; 0041a1a0
    FLD float ptr [EBX + 0x20]          ; 0041a1a3
    FSTP double ptr [ESP]               ; 0041a1a6
    CALL sound_sndmain.cpp_FUN_00557170 ; 0041a1a9
        ;   XREF to: 00557170 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00557170()
    ADD ESP,0x1c                        ; 0041a1ae
    TEST EAX,EAX                        ; 0041a1b1
    JZ 0x0041a7f3                       ; 0041a1b3
        ;   XREF to: 0041a7f3 (CONDITIONAL_JUMP)  ; LAB_0041a7f3
    MOV ESI,dword ptr [EBX + 0xd078]    ; 0041a1b9
    PUSH ESI                            ; 0041a1bf
    CALL sound_sndmain.cpp_FUN_00556700 ; 0041a1c0
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0041a1c5
    TEST EAX,EAX                        ; 0041a1c8
    JNZ 0x00419e18                      ; 0041a1ca
        ;   XREF to: 00419e18 (CONDITIONAL_JUMP)  ; LAB_00419e18
    CALL sound_sndmain.cpp_FUN_00555fd0 ; 0041a1d0
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555fd0()
    PUSH 0x2                            ; 0041a1d5
    PUSH 0x3f800000                     ; 0041a1d7
    PUSH 0x0                            ; 0041a1dc
    CALL core_actor.cpp_FUN_0040ce40    ; 0041a1de
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    ADD ESP,0x8                         ; 0041a1e3
    MOV dword ptr [EBP + 0x76],EAX      ; 0041a1e6
    SUB ESP,0x8                         ; 0041a1e9
    FLD float ptr [EBP + 0x76]          ; 0041a1ec
    FSTP double ptr [ESP]               ; 0041a1ef
    CALL sound_sndmain.cpp_FUN_00555f60 ; 0041a1f2
        ;   XREF to: 00555f60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555f60(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 0041a1f7
    PUSH 0x5b7210                       ; 0041a1fa | = "boneGuy-walkloop.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041a1ff
    PUSH EBX                            ; 0041a205
    CALL dword ptr [EAX + 0x30]         ; 0041a206
    ADD ESP,0x8                         ; 0041a209
    MOV dword ptr [EBX + 0xd078],EAX    ; 0041a20c
    CALL sound_sndmain.cpp_FUN_00556050 ; 0041a212
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556050()
    LEA ESP,[EBP + 0x7a]                ; 0041a217
    POP EBP                             ; 0041a21a
    POP EDI                             ; 0041a21b
    POP ESI                             ; 0041a21c
    POP EBX                             ; 0041a21d
    RET                                 ; 0041a21e
    PUSH 0x1                            ; 0041a21f
        ;   Label: LAB_0041a21f
    PUSH 0x0                            ; 0041a221
    MOV EDX,dword ptr [EBP + 0x56]      ; 0041a223
    PUSH EDX                            ; 0041a226
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0041a227
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041a22c
    PUSH EBX                            ; 0041a22f
    PUSH 0x5b71b2                       ; 0041a230 | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x005f1690]      ; 0041a235 | g_CConsolePtr
    PUSH ECX                            ; 0041a23b | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0041a23c
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x00419fff                      ; 0041a241
        ;   XREF to: 00419fff (UNCONDITIONAL_JUMP)  ; LAB_00419fff
    JBE 0x00419fef                      ; 0041a246
        ;   XREF to: 00419fef (CONDITIONAL_JUMP)  ; LAB_00419fef
        ;   Label: LAB_0041a246
    CMP EAX,0x3                         ; 0041a24c
    JZ 0x0041a21f                       ; 0041a24f
        ;   XREF to: 0041a21f (CONDITIONAL_JUMP)  ; LAB_0041a21f
    PUSH 0x1                            ; 0041a251
        ;   Label: LAB_0041a251
    PUSH 0x0                            ; 0041a253
    JMP 0x00419ff3                      ; 0041a255
        ;   XREF to: 00419ff3 (UNCONDITIONAL_JUMP)  ; LAB_00419ff3
    LEA EAX,[EBP + 0xfffffe46]          ; 0041a25a
        ;   Label: caseD_2
    PUSH EAX                            ; 0041a260
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0041a261
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    FLD float ptr [EBX + 0xce5c]        ; 0041a266
    FMUL float ptr [0x005b7242]         ; 0041a26c | DAT_005b7242
    ADD ESP,0x4                         ; 0041a272
    LEA EAX,[EBP + 0xfffffe46]          ; 0041a275
    MOV EDX,dword ptr [0x007e1620]      ; 0041a27b | DAT_007e1620
    PUSH EAX                            ; 0041a281
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041a282
    SUB EAX,EDX                         ; 0041a289
    MOV dword ptr [EBP + 0xfffffe7a],EBX ; 0041a28b
    MOV EDX,EAX                         ; 0041a291
    MOV dword ptr [EBP + 0xfffffe7e],EBX ; 0041a293
    SHL EDX,0x4                         ; 0041a299
    LEA EAX,[EBX + 0xfd8]               ; 0041a29c
    ADD EAX,EDX                         ; 0041a2a2
    PUSH 0x3ecccccd                     ; 0041a2a4
    PUSH EAX                            ; 0041a2a9
    LEA ESI,[EBP + 0xffffff3e]          ; 0041a2aa
    LEA EDI,[EBP + 0xffffff32]          ; 0041a2b0
    PUSH 0x2cfd900                      ; 0041a2b6 | DAT_02cfd900
    FSTP float ptr [EBP + 0xfffffe4a]   ; 0041a2bb
    CALL core_xform.cpp_FUN_00583260    ; 0041a2c1
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0041a2c6
    LEA EAX,[EBP + 0xffffff32]          ; 0041a2c9
    LEA ESI,[EBP + 0xffffff3e]          ; 0041a2cf
    PUSH EAX                            ; 0041a2d5
    MOVSD ES:EDI,ESI                    ; 0041a2d6
    MOVSD ES:EDI,ESI                    ; 0041a2d7
    MOVSD ES:EDI,ESI                    ; 0041a2d8
    PUSH EBX                            ; 0041a2d9
    LEA ESI,[EBP + 0xffffff56]          ; 0041a2da
    CALL core_actor.cpp_FUN_00408b80    ; 0041a2e0
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0041a2e5
    LEA EAX,[EBP + 0xffffff1a]          ; 0041a2e8
    PUSH EAX                            ; 0041a2ee
    LEA EDI,[EBP + 0xffffff1a]          ; 0041a2ef
    LEA ESI,[EBP + 0xffffff56]          ; 0041a2f5
    PUSH EBX                            ; 0041a2fb
    MOVSD ES:EDI,ESI                    ; 0041a2fc
    MOVSD ES:EDI,ESI                    ; 0041a2fd
    MOVSD ES:EDI,ESI                    ; 0041a2fe
    CALL core_enemy.cpp_FUN_004893f0    ; 0041a2ff
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 0041a304
    JMP 0x0041a01a                      ; 0041a307
        ;   XREF to: 0041a01a (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDI,dword ptr [EBX + 0x2628]    ; 0041a30c
        ;   Label: caseD_6
    TEST EDI,EDI                        ; 0041a312
    JZ 0x0041a334                       ; 0041a314
        ;   XREF to: 0041a334 (CONDITIONAL_JUMP)  ; LAB_0041a334
    PUSH 0x2                            ; 0041a316
    MOV EDX,dword ptr [EDI + 0x154]     ; 0041a318
    PUSH EDI                            ; 0041a31e
    CALL dword ptr [EDX + 0x78]         ; 0041a31f
    ADD ESP,0x8                         ; 0041a322
    MOV dword ptr [EBX + 0xcde0],0x40200000 ; 0041a325
    JMP 0x0041a01a                      ; 0041a32f
        ;   XREF to: 0041a01a (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,dword ptr [EBP + 0x56]      ; 0041a334
        ;   Label: LAB_0041a334
    PUSH EAX                            ; 0041a337
    CALL core_motion.cpp_FUN_004fc930   ; 0041a338
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0041a33d
    ADD ESP,0x4                         ; 0041a340
    FLD float ptr [EBP + 0x76]          ; 0041a343
    FCOMP double ptr [0x005b723a]       ; 0041a346 | DAT_005b723a
    FNSTSW AX                           ; 0041a34c
    SAHF                                ; 0041a34e
    JBE 0x0041a01a                      ; 0041a34f
        ;   XREF to: 0041a01a (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0xcde0]        ; 0041a355
    FLDZ                                ; 0041a35b
    FCOMPP                              ; 0041a35d
    FNSTSW AX                           ; 0041a35f
    SAHF                                ; 0041a361
    JC 0x0041a01a                       ; 0041a362
        ;   XREF to: 0041a01a (CONDITIONAL_JUMP)  ; caseD_4
    LEA EAX,[EBP + 0xfffffe82]          ; 0041a368
    PUSH EAX                            ; 0041a36e
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0041a36f
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EAX,dword ptr [EBX + 0xce5c]    ; 0041a374
    ADD ESP,0x4                         ; 0041a37a
    MOV dword ptr [EBP + 0xfffffe86],EAX ; 0041a37d
    LEA EAX,[EBP + 0xfffffe82]          ; 0041a383
    MOV EDX,dword ptr [0x007e1628]      ; 0041a389 | DAT_007e1628
    PUSH EAX                            ; 0041a38f
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041a390
    SUB EAX,EDX                         ; 0041a397
    MOV dword ptr [EBP + 0xfffffeb6],EBX ; 0041a399
    MOV EDX,EAX                         ; 0041a39f
    MOV dword ptr [EBP + 0xfffffeba],EBX ; 0041a3a1
    SHL EDX,0x4                         ; 0041a3a7
    LEA EAX,[EBX + 0xfd8]               ; 0041a3aa
    ADD EAX,EDX                         ; 0041a3b0
    PUSH 0x40000000                     ; 0041a3b2
    PUSH EAX                            ; 0041a3b7
    PUSH 0x2cfd900                      ; 0041a3b8 | DAT_02cfd900
    LEA ESI,[EBP + 0xffffff26]          ; 0041a3bd
    LEA EDI,[EBP + -0x32]               ; 0041a3c3
    CALL core_xform.cpp_FUN_00583260    ; 0041a3c6
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0041a3cb
    LEA EAX,[EBP + -0x32]               ; 0041a3ce
    LEA ESI,[EBP + 0xffffff26]          ; 0041a3d1
    PUSH EAX                            ; 0041a3d7
    MOVSD ES:EDI,ESI                    ; 0041a3d8
    MOVSD ES:EDI,ESI                    ; 0041a3d9
    MOVSD ES:EDI,ESI                    ; 0041a3da
    PUSH EBX                            ; 0041a3db
    LEA ESI,[EBP + 0xffffff6e]          ; 0041a3dc
    CALL core_actor.cpp_FUN_00408b80    ; 0041a3e2
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0041a3e7
    LEA EAX,[EBP + 0x16]                ; 0041a3ea
    PUSH EAX                            ; 0041a3ed
    LEA EDI,[EBP + 0x16]                ; 0041a3ee
    LEA ESI,[EBP + 0xffffff6e]          ; 0041a3f1
    PUSH EBX                            ; 0041a3f7
    MOVSD ES:EDI,ESI                    ; 0041a3f8
    MOVSD ES:EDI,ESI                    ; 0041a3f9
    MOVSD ES:EDI,ESI                    ; 0041a3fa
    CALL core_enemy.cpp_FUN_004893f0    ; 0041a3fb
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 0041a400
    MOV dword ptr [EBX + 0xcde0],0x40200000 ; 0041a403
    JMP 0x0041a01a                      ; 0041a40d
        ;   XREF to: 0041a01a (UNCONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xcdd0],0x0    ; 0041a412
        ;   Label: caseD_5
    JNZ 0x0041a01a                      ; 0041a419
        ;   XREF to: 0041a01a (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xdc],0x0      ; 0041a41f
    JNZ 0x0041a01a                      ; 0041a426
        ;   XREF to: 0041a01a (CONDITIONAL_JUMP)  ; caseD_4
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 0041a42c
    JMP 0x0041a01a                      ; 0041a436
        ;   XREF to: 0041a01a (UNCONDITIONAL_JUMP)  ; caseD_4
    LEA EDI,[EBP + -0x26]               ; 0041a43b
        ;   Label: caseD_0
    LEA EDX,[EBX + 0x20]                ; 0041a43e
    LEA ESI,[EBP + 0xfffffeea]          ; 0041a441
    MOV EAX,[0x01d5ba14]                ; 0041a447 | DAT_01d5ba14
    FLD float ptr [EDX]                 ; 0041a44c
    FLD float ptr [EDX + 0x4]           ; 0041a44e
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0041a451
    FLD float ptr [EDX + 0x8]           ; 0041a458
    FXCH ST2                            ; 0041a45b
    FSUB float ptr [EAX + 0x20]         ; 0041a45d
    FXCH                                ; 0041a460
    FSUB float ptr [EAX + 0x24]         ; 0041a462
    FXCH ST2                            ; 0041a465
    FSUB float ptr [EAX + 0x28]         ; 0041a467
    FXCH                                ; 0041a46a
    FSTP float ptr [EBP + 0xfffffeea]   ; 0041a46c
    FXCH                                ; 0041a472
    FSTP float ptr [EBP + 0xfffffeee]   ; 0041a474
    FSTP float ptr [EBP + 0xfffffef2]   ; 0041a47a
    MOVSD ES:EDI,ESI                    ; 0041a480
    MOVSD ES:EDI,ESI                    ; 0041a481
    MOVSD ES:EDI,ESI                    ; 0041a482
    FLD float ptr [EBX + 0xcde0]        ; 0041a483
    FLDZ                                ; 0041a489
    FCOMPP                              ; 0041a48b
    FNSTSW AX                           ; 0041a48d
    SAHF                                ; 0041a48f
    JNC 0x0041a4d2                      ; 0041a490
        ;   XREF to: 0041a4d2 (CONDITIONAL_JUMP)  ; LAB_0041a4d2
    FLD float ptr [EBP + -0x22]         ; 0041a492
    FMUL ST0                            ; 0041a495
    FLD float ptr [EBP + -0x26]         ; 0041a497
    FMUL ST0                            ; 0041a49a
    FADDP                               ; 0041a49c
    FLD float ptr [EBP + -0x1e]         ; 0041a49e
    FMUL ST0                            ; 0041a4a1
    FADDP                               ; 0041a4a3
    FSTP float ptr [EBP + 0x2a]         ; 0041a4a5
    MOV EAX,dword ptr [EBP + 0x2a]      ; 0041a4a8
    MOV ESI,dword ptr [0x01d1a0a4]      ; 0041a4ab | DAT_01d1a0a4
    SAR EAX,0x1                         ; 0041a4b1
    ADD EAX,ESI                         ; 0041a4b3
    MOV dword ptr [EBP + 0x2e],EAX      ; 0041a4b5
    FLD float ptr [EBP + 0x2e]          ; 0041a4b8
    FLD float ptr [0x005dc138]          ; 0041a4bb | DAT_005dc138
    FADD double ptr [0x005b724a]        ; 0041a4c1 | DAT_005b724a
    FCOMPP                              ; 0041a4c7
    FNSTSW AX                           ; 0041a4c9
    SAHF                                ; 0041a4cb
    JNC 0x0041a01a                      ; 0041a4cc
        ;   XREF to: 0041a01a (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBP + -0x22]         ; 0041a4d2
        ;   Label: LAB_0041a4d2
    FMUL ST0                            ; 0041a4d5
    FLD float ptr [EBP + -0x26]         ; 0041a4d7
    FMUL ST0                            ; 0041a4da
    FADDP                               ; 0041a4dc
    FLD float ptr [EBP + -0x1e]         ; 0041a4de
    FMUL ST0                            ; 0041a4e1
    FADDP                               ; 0041a4e3
    FSTP float ptr [EBP + 0x6e]         ; 0041a4e5
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0041a4e8
    MOV EDI,dword ptr [0x01d1a0a4]      ; 0041a4eb | DAT_01d1a0a4
    SAR EAX,0x1                         ; 0041a4f1
    ADD EAX,EDI                         ; 0041a4f3
    MOV dword ptr [EBP + 0x32],EAX      ; 0041a4f5
    FLD float ptr [EBP + 0x32]          ; 0041a4f8
    FLD float ptr [0x005dc138]          ; 0041a4fb | DAT_005dc138
    FADD double ptr [0x005b724a]        ; 0041a501 | DAT_005b724a
    LEA ESI,[EBX + 0x158]               ; 0041a507
    FCOMPP                              ; 0041a50d
    FNSTSW AX                           ; 0041a50f
    SAHF                                ; 0041a511
    JC 0x0041a530                       ; 0041a512
        ;   XREF to: 0041a530 (CONDITIONAL_JUMP)  ; LAB_0041a530
    PUSH 0x1                            ; 0041a514
    PUSH 0x6                            ; 0041a516
    PUSH ESI                            ; 0041a518
    MOV dword ptr [EBX + 0xd690],0x1    ; 0041a519
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0041a523
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041a528
    JMP 0x0041a01a                      ; 0041a52b
        ;   XREF to: 0041a01a (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 0041a530
        ;   Label: LAB_0041a530
    PUSH EBX                            ; 0041a536
    CALL core_enemy.cpp_FUN_00489ff0    ; 0041a537
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041a53c
    TEST EAX,EAX                        ; 0041a53f
    JZ 0x0041a55f                       ; 0041a541
        ;   XREF to: 0041a55f (CONDITIONAL_JUMP)  ; LAB_0041a55f
    PUSH 0x1                            ; 0041a543
    PUSH 0x1                            ; 0041a545
    PUSH ESI                            ; 0041a547
    MOV dword ptr [EBX + 0xd690],0x0    ; 0041a548
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0041a552
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041a557
    JMP 0x0041a01a                      ; 0041a55a
        ;   XREF to: 0041a01a (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 0041a55f
        ;   Label: LAB_0041a55f
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041a565
    PUSH EBX                            ; 0041a56b
    CALL dword ptr [EAX + 0x144]        ; 0041a56c
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0041a572
    ADD ESP,0x8                         ; 0041a578
    TEST EAX,EAX                        ; 0041a57b
    JZ 0x0041a01a                       ; 0041a57d
        ;   XREF to: 0041a01a (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 0041a583
    PUSH 0x1                            ; 0041a585
    PUSH ESI                            ; 0041a587
    MOV dword ptr [EBX + 0xd690],0x0    ; 0041a588
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0041a592
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041a597
    JMP 0x0041a01a                      ; 0041a59a
        ;   XREF to: 0041a01a (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,[0x01d5ba14]                ; 0041a59f | DAT_01d5ba14
        ;   Label: caseD_1
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0041a5a4
    LEA EAX,[EBX + 0x20]                ; 0041a5ab
    LEA EDI,[EBP + 0xffffff02]          ; 0041a5ae
    LEA ESI,[EBP + 0xfffffef6]          ; 0041a5b4
    FLD float ptr [EAX]                 ; 0041a5ba
    FLD float ptr [EAX + 0x4]           ; 0041a5bc
    FLD float ptr [EAX + 0x8]           ; 0041a5bf
    FXCH ST2                            ; 0041a5c2
    FSUB float ptr [EDX + 0x20]         ; 0041a5c4
    FXCH                                ; 0041a5c7
    FSUB float ptr [EDX + 0x24]         ; 0041a5c9
    FXCH ST2                            ; 0041a5cc
    FSUB float ptr [EDX + 0x28]         ; 0041a5ce
    FXCH                                ; 0041a5d1
    FSTP float ptr [EBP + 0xfffffef6]   ; 0041a5d3
    FXCH                                ; 0041a5d9
    FSTP float ptr [EBP + 0xfffffefa]   ; 0041a5db
    FSTP float ptr [EBP + 0xfffffefe]   ; 0041a5e1
    MOVSD ES:EDI,ESI                    ; 0041a5e7
    MOVSD ES:EDI,ESI                    ; 0041a5e8
    MOVSD ES:EDI,ESI                    ; 0041a5e9
    FLD float ptr [EBP + 0xffffff06]    ; 0041a5ea
    FMUL ST0                            ; 0041a5f0
    FLD float ptr [EBP + 0xffffff02]    ; 0041a5f2
    FMUL ST0                            ; 0041a5f8
    FADDP                               ; 0041a5fa
    FLD float ptr [EBP + 0xffffff0a]    ; 0041a5fc
    FMUL ST0                            ; 0041a602
    FADDP                               ; 0041a604
    FSTP float ptr [EBP + 0x46]         ; 0041a606
    MOV EAX,dword ptr [EBP + 0x46]      ; 0041a609
    MOV ESI,dword ptr [0x01d1a0a4]      ; 0041a60c | DAT_01d1a0a4
    SAR EAX,0x1                         ; 0041a612
    ADD EAX,ESI                         ; 0041a614
    MOV dword ptr [EBP + 0x3a],EAX      ; 0041a616
    FLD float ptr [EBP + 0x3a]          ; 0041a619
    FLD float ptr [0x005dc138]          ; 0041a61c | DAT_005dc138
    FADD double ptr [0x005b724a]        ; 0041a622 | DAT_005b724a
    FCOMPP                              ; 0041a628
    FNSTSW AX                           ; 0041a62a
    SAHF                                ; 0041a62c
    JC 0x0041a648                       ; 0041a62d
        ;   XREF to: 0041a648 (CONDITIONAL_JUMP)  ; LAB_0041a648
    FLD float ptr [EBX + 0xcde0]        ; 0041a62f
    FLDZ                                ; 0041a635
    FCOMPP                              ; 0041a637
    FNSTSW AX                           ; 0041a639
    SAHF                                ; 0041a63b
    JNC 0x0041a648                      ; 0041a63c
        ;   XREF to: 0041a648 (CONDITIONAL_JUMP)  ; LAB_0041a648
    MOV EDI,dword ptr [EBX + 0xd690]    ; 0041a63e
    TEST EDI,EDI                        ; 0041a644
    JZ 0x0041a696                       ; 0041a646
        ;   XREF to: 0041a696 (CONDITIONAL_JUMP)  ; LAB_0041a696
    PUSH dword ptr [EBP + 0x92]         ; 0041a648
        ;   Label: LAB_0041a648
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041a64e
    PUSH EBX                            ; 0041a654
    CALL dword ptr [EAX + 0x144]        ; 0041a655
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 0041a65b
    ADD ESP,0x8                         ; 0041a661
    TEST EDX,EDX                        ; 0041a664
    JNZ 0x0041a6a7                      ; 0041a666
        ;   XREF to: 0041a6a7 (CONDITIONAL_JUMP)  ; LAB_0041a6a7
    PUSH dword ptr [EBP + 0x92]         ; 0041a668
    PUSH EBX                            ; 0041a66e
    CALL core_enemy.cpp_FUN_00489ff0    ; 0041a66f
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041a674
    TEST EAX,EAX                        ; 0041a677
    JNZ 0x0041a01a                      ; 0041a679
        ;   XREF to: 0041a01a (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 0041a67f
    PUSH EAX                            ; 0041a681
    LEA EAX,[EBX + 0x158]               ; 0041a682
    PUSH EAX                            ; 0041a688
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0041a689
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041a68e
    JMP 0x0041a01a                      ; 0041a691
        ;   XREF to: 0041a01a (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 0041a696
        ;   Label: LAB_0041a696
    PUSH EDI                            ; 0041a698
    MOV EAX,dword ptr [EBP + 0x56]      ; 0041a699
    PUSH EAX                            ; 0041a69c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0041a69d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041a6a2
    JMP 0x0041a648                      ; 0041a6a5
        ;   XREF to: 0041a648 (UNCONDITIONAL_JUMP)  ; LAB_0041a648
    PUSH dword ptr [EBP + 0x92]         ; 0041a6a7
        ;   Label: LAB_0041a6a7
    PUSH EBX                            ; 0041a6ad
    CALL core_boneguy.cpp_FUN_00418930  ; 0041a6ae
        ;   XREF to: 00418930 (UNCONDITIONAL_CALL)  ; int core_boneguy.cpp_FUN_00418930(CBoneGuy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041a6b3
    TEST EAX,EAX                        ; 0041a6b6
    JNZ 0x0041a01a                      ; 0041a6b8
        ;   XREF to: 0041a01a (CONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,[0x005dc138]                ; 0041a6be | DAT_005dc138
    MOV ECX,dword ptr [EBX + 0x2628]    ; 0041a6c3
    MOV dword ptr [EBP + 0x4e],EAX      ; 0041a6c9
    TEST ECX,ECX                        ; 0041a6cc
    PUSH 0x3e32b8c2                     ; 0041a6ce
    PUSH 0x3f000000                     ; 0041a6d3
    XOR ESI,ESI                         ; 0041a6d8
    MOV EAX,dword ptr [EBP + 0x4e]      ; 0041a6da
    MOV dword ptr [EBP + 0xffffff7a],ESI ; 0041a6dd
    MOV dword ptr [EBP + -0x7e],EAX     ; 0041a6e3
    LEA EAX,[EBP + 0xffffff7a]          ; 0041a6e6
    MOV dword ptr [EBP + 0xffffff7e],ESI ; 0041a6ec
    PUSH EAX                            ; 0041a6f2
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0041a6f3
    PUSH EAX                            ; 0041a6f9
    MOV EDX,dword ptr [EAX + 0x154]     ; 0041a6fa
    CALL dword ptr [EDX + 0xc4]         ; 0041a700
    ADD ESP,0x4                         ; 0041a706
    PUSH EAX                            ; 0041a709
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0041a70a
    ADD EAX,0x20                        ; 0041a710
    PUSH EAX                            ; 0041a713
    PUSH EBX                            ; 0041a714
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 0041a715
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0041a71a
    LEA ESI,[EBX + 0x158]               ; 0041a71d
    TEST EAX,EAX                        ; 0041a723
    JL 0x0041a7bc                       ; 0041a725
        ;   XREF to: 0041a7bc (CONDITIONAL_JUMP)  ; LAB_0041a7bc
    LEA EAX,[EBX + 0x20]                ; 0041a72b
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 0041a72e
    FLD float ptr [EAX]                 ; 0041a734
    FSUB float ptr [EDX + 0x20]         ; 0041a736
    FMUL ST0                            ; 0041a739
    FLD float ptr [EAX + 0x8]           ; 0041a73b
    FSUB float ptr [EDX + 0x28]         ; 0041a73e
    FMUL ST0                            ; 0041a741
    FADDP                               ; 0041a743
    FSQRT                               ; 0041a745
    FLD float ptr [EBP + 0x4e]          ; 0041a747
    FADD double ptr [0x005b722a]        ; 0041a74a | DAT_005b722a
    FCOMPP                              ; 0041a750
    FNSTSW AX                           ; 0041a752
    SAHF                                ; 0041a754
    JC 0x0041a01a                       ; 0041a755
        ;   XREF to: 0041a01a (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0xcde0]        ; 0041a75b
    FLDZ                                ; 0041a761
    FCOMPP                              ; 0041a763
    FNSTSW AX                           ; 0041a765
    SAHF                                ; 0041a767
    JC 0x0041a01a                       ; 0041a768
        ;   XREF to: 0041a01a (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0x2628],0x0    ; 0041a76e
    PUSH 0x1                            ; 0041a775
    PUSH 0x6                            ; 0041a777
    PUSH ESI                            ; 0041a779
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0041a77a
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041a77f
    MOV EDX,dword ptr [EBX + 0xd078]    ; 0041a782
    PUSH EDX                            ; 0041a788
    MOV dword ptr [EBX + 0xd690],0x1    ; 0041a789
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0041a793
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0041a798
    PUSH 0x5b71fd                       ; 0041a79b | = "boneguy-swing?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041a7a0
    PUSH EBX                            ; 0041a7a6
    CALL dword ptr [EAX + 0x2c]         ; 0041a7a7
    ADD ESP,0x8                         ; 0041a7aa
    MOV dword ptr [EBX + 0xcde0],0x3f800000 ; 0041a7ad
    JMP 0x0041a01a                      ; 0041a7b7
        ;   XREF to: 0041a01a (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH EBX                            ; 0041a7bc
        ;   Label: LAB_0041a7bc
    PUSH 0x5b71dc                       ; 0041a7bd | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x005f1690]      ; 0041a7c2 | g_CConsolePtr
    PUSH ECX                            ; 0041a7c8 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0041a7c9
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 0041a7ce
    PUSH 0x1                            ; 0041a7d1
    PUSH 0x0                            ; 0041a7d3
    PUSH ESI                            ; 0041a7d5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0041a7d6
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041a7db
    JMP 0x0041a01a                      ; 0041a7de
        ;   XREF to: 0041a01a (UNCONDITIONAL_JUMP)  ; caseD_4
    CMP ESI,0x6                         ; 0041a7e3
        ;   Label: LAB_0041a7e3
    JA 0x0041a01a                       ; 0041a7e6
        ;   XREF to: 0041a01a (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [ESI*0x4 + 0x419b24]  ; 0041a7ec | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ECX,dword ptr [EBX + 0xd078]    ; 0041a7f3
        ;   Label: LAB_0041a7f3
    PUSH ECX                            ; 0041a7f9
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0041a7fa
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0041a7ff
    LEA ESP,[EBP + 0x7a]                ; 0041a802
    POP EBP                             ; 0041a805
    POP EDI                             ; 0041a806
    POP ESI                             ; 0041a807
    POP EBX                             ; 0041a808
    RET                                 ; 0041a809

