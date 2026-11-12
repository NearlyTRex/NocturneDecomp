; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_004179b0(CBoneGuy *this_ptr,float delta_time)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00417994 = 004182e5
;   TerminatedCString s_My_HP_f_005b6eb4
;   TerminatedCString s_State_d_005b6ebf
;   TerminatedCString s_s_confused_while_walking_005b6eca
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005b6ef4
;   TerminatedCString s_boneguy_swing_wav_005b6f15
;   TerminatedCString s_boneGuy_walkloop_wav_005b6f28
;   undefined4 DAT_005b6f42
;   undefined4 DAT_005b6f4a
;   undefined4 DAT_005b6f52
;   undefined4 DAT_005b6f5a
;   undefined4 DAT_005b6f62
;   undefined4 DAT_005b6f6a
;   undefined4 DAT_005b6f72
;   undefined4 DAT_005dc138
;   ... and 13 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_00419790
;   core_boneguy.cpp_CBoneGuy_explode_FUN_00419550
;   core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_00418930
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_004319d0
;   core_charactr.cpp_FUN_00434850
;   ... and 23 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004179b0
        ;   Label: core_boneguy.cpp_CBoneGuy_process_FUN_004179b0
    PUSH ESI                            ; 004179b1
    PUSH EDI                            ; 004179b2
    PUSH EBP                            ; 004179b3
    MOV EBP,ESP                         ; 004179b4
    SUB ESP,0x234                       ; 004179b6
    SUB EBP,0x7a                        ; 004179bc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004179bf
    SUB ESP,0x8                         ; 004179c5
    FLD float ptr [EBX + 0x2538]        ; 004179c8
    FSTP double ptr [ESP]               ; 004179ce
    PUSH 0x5b6eb4                       ; 004179d1 | = "My HP: %f\n"
    MOV EDX,dword ptr [0x005f1690]      ; 004179d6 | g_CConsolePtr
    PUSH EDX                            ; 004179dc | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004179dd
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 004179e2
    LEA EAX,[EBX + 0xd07c]              ; 004179e5
    PUSH EAX                            ; 004179eb
    MOV ECX,dword ptr [0x005fba60]      ; 004179ec | DAT_005fba60
    PUSH ECX                            ; 004179f2
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 004179f3
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004179f8
    TEST EAX,EAX                        ; 004179fb
    JZ 0x00417a43                       ; 004179fd
        ;   XREF to: 00417a43 (CONDITIONAL_JUMP)  ; LAB_00417a43
    MOV dword ptr [EBX + 0x2538],0x0    ; 004179ff
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 00417a09
    MOV ESI,dword ptr [EBX + 0xd0e4]    ; 00417a13
    MOV dword ptr [EBX + 0xd694],0x0    ; 00417a19
    TEST ESI,ESI                        ; 00417a23
    JNZ 0x00417a30                      ; 00417a25
        ;   XREF to: 00417a30 (CONDITIONAL_JUMP)  ; LAB_00417a30
    PUSH EBX                            ; 00417a27
    CALL core_boneguy.cpp_CBoneGuy_explode_FUN_00419550 ; 00417a28
        ;   XREF to: 00419550 (UNCONDITIONAL_CALL)  ; void core_boneguy.cpp_CBoneGuy_explode_FUN_00419550(CBoneGuy * this_ptr)
    ADD ESP,0x4                         ; 00417a2d
    PUSH 0x0                            ; 00417a30
        ;   Label: LAB_00417a30
    PUSH 0x5                            ; 00417a32
    LEA EAX,[EBX + 0x158]               ; 00417a34
    PUSH EAX                            ; 00417a3a
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 00417a3b
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 00417a40
    PUSH dword ptr [EBP + 0x92]         ; 00417a43
        ;   Label: LAB_00417a43
    MOV EAX,dword ptr [EBX + 0x154]     ; 00417a49
    PUSH EBX                            ; 00417a4f
    CALL dword ptr [EAX + 0x148]        ; 00417a50
    ADD ESP,0x8                         ; 00417a56
    TEST EAX,EAX                        ; 00417a59
    JZ 0x00417cd0                       ; 00417a5b
        ;   XREF to: 00417cd0 (CONDITIONAL_JUMP)  ; LAB_00417cd0
    CMP dword ptr [EBX + 0xd0e4],0x1    ; 00417a61
    JNZ 0x00417aa3                      ; 00417a68
        ;   XREF to: 00417aa3 (CONDITIONAL_JUMP)  ; LAB_00417aa3
    FLD float ptr [EBX + 0x2538]        ; 00417a6a
    FLDZ                                ; 00417a70
    FCOMPP                              ; 00417a72
    FNSTSW AX                           ; 00417a74
    SAHF                                ; 00417a76
    JNC 0x00417aa3                      ; 00417a77
        ;   XREF to: 00417aa3 (CONDITIONAL_JUMP)  ; LAB_00417aa3
    FLD float ptr [EBX + 0xd694]        ; 00417a79
    FADD float ptr [EBP + 0x92]         ; 00417a7f
    FST float ptr [EBX + 0xd694]        ; 00417a85
    FCOMP float ptr [EBX + 0xd0e0]      ; 00417a8b
    FNSTSW AX                           ; 00417a91
    SAHF                                ; 00417a93
    JBE 0x00417cc8                      ; 00417a94
        ;   XREF to: 00417cc8 (CONDITIONAL_JUMP)  ; LAB_00417cc8
    PUSH EBX                            ; 00417a9a
    CALL core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_00419790 ; 00417a9b
        ;   XREF to: 00419790 (UNCONDITIONAL_CALL)  ; void core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_00419790(CBoneGuy * this_ptr)
    ADD ESP,0x4                         ; 00417aa0
    CMP dword ptr [EBX + 0xd0e4],0x2    ; 00417aa3
        ;   Label: LAB_00417aa3
    JNZ 0x00417d87                      ; 00417aaa
        ;   XREF to: 00417d87 (CONDITIONAL_JUMP)  ; LAB_00417d87
    FLD float ptr [EBP + 0x92]          ; 00417ab0
    FDIV float ptr [0x005dc144]         ; 00417ab6 | DAT_005dc144
    FADD float ptr [EBX + 0xd694]       ; 00417abc
    FST float ptr [EBX + 0xd694]        ; 00417ac2
    FLD1                                ; 00417ac8
    FCOMPP                              ; 00417aca
    FNSTSW AX                           ; 00417acc
    SAHF                                ; 00417ace
    JBE 0x00417cfd                      ; 00417acf
        ;   XREF to: 00417cfd (CONDITIONAL_JUMP)  ; LAB_00417cfd
    XOR ECX,ECX                         ; 00417ad5
    MOV ESI,dword ptr [EBX + 0xd0e8]    ; 00417ad7
    MOV dword ptr [EBP + 0x6e],ECX      ; 00417add
    TEST ESI,ESI                        ; 00417ae0
    JLE 0x00417cc8                      ; 00417ae2
        ;   XREF to: 00417cc8 (CONDITIONAL_JUMP)  ; LAB_00417cc8
    LEA EAX,[EBX + 0xd0f0]              ; 00417ae8
    MOV dword ptr [EBP + 0x5a],EAX      ; 00417aee
    LEA EAX,[EBX + 0xd694]              ; 00417af1
    MOV dword ptr [EBP + 0x66],EAX      ; 00417af7
    LEA EAX,[EBX + 0xd108]              ; 00417afa
    MOV dword ptr [EBP + 0x62],EAX      ; 00417b00
    LEA EAX,[EBX + 0xd118]              ; 00417b03
    MOV dword ptr [EBP + 0x6a],EAX      ; 00417b09
    LEA EAX,[EBX + 0xd128]              ; 00417b0c
    MOV dword ptr [EBP + 0x72],EAX      ; 00417b12
    IMUL EAX,dword ptr [EBP + 0x6e],0x48 ; 00417b15
        ;   Label: LAB_00417b15
    ADD EAX,dword ptr [EBP + 0x5a]      ; 00417b19
    LEA EDI,[EBP + 0xffffff32]          ; 00417b1c
    LEA ESI,[EBP + 0xffffff1a]          ; 00417b22
    FLD float ptr [EAX]                 ; 00417b28
    MOV EDX,dword ptr [EAX + 0x44]      ; 00417b2a
    FLD float ptr [EAX + 0x4]           ; 00417b2d
    MOV dword ptr [EBP + 0x36],EDX      ; 00417b30
    MOV EDX,dword ptr [EBP + 0x72]      ; 00417b33
    FLD float ptr [EAX + 0x8]           ; 00417b36
    FXCH ST2                            ; 00417b39
    FSUB float ptr [EDX]                ; 00417b3b
    FXCH                                ; 00417b3d
    FSUB float ptr [EDX + 0x4]          ; 00417b3f
    FXCH ST2                            ; 00417b42
    FSUB float ptr [EDX + 0x8]          ; 00417b44
    FXCH                                ; 00417b47
    FSTP float ptr [EBP + 0xffffff1a]   ; 00417b49
    FXCH                                ; 00417b4f
    FSTP float ptr [EBP + 0xffffff1e]   ; 00417b51
    FSTP float ptr [EBP + 0xffffff22]   ; 00417b57
    MOVSD ES:EDI,ESI                    ; 00417b5d
    MOVSD ES:EDI,ESI                    ; 00417b5e
    MOVSD ES:EDI,ESI                    ; 00417b5f
    MOV EAX,dword ptr [EBP + 0x66]      ; 00417b60
    FLD float ptr [EBP + 0xffffff32]    ; 00417b63
    FMUL float ptr [EAX]                ; 00417b69
    FLD float ptr [EBP + 0xffffff36]    ; 00417b6b
    FMUL float ptr [EAX]                ; 00417b71
    FLD float ptr [EBP + 0xffffff3a]    ; 00417b73
    FMUL float ptr [EAX]                ; 00417b79
    LEA EDI,[EBP + -0x2]                ; 00417b7b
    LEA ESI,[EBP + -0xe]                ; 00417b7e
    FXCH ST2                            ; 00417b81
    FSTP float ptr [EBP + -0xe]         ; 00417b83
    FSTP float ptr [EBP + -0xa]         ; 00417b86
    FSTP float ptr [EBP + -0x6]         ; 00417b89
    MOVSD ES:EDI,ESI                    ; 00417b8c
    MOVSD ES:EDI,ESI                    ; 00417b8d
    MOVSD ES:EDI,ESI                    ; 00417b8e
    FLD float ptr [EDX]                 ; 00417b8f
    FLD float ptr [EDX + 0x4]           ; 00417b91
    FLD float ptr [EDX + 0x8]           ; 00417b94
    LEA EDI,[EBP + 0xfffffef6]          ; 00417b97
    LEA ESI,[EBP + -0x1a]               ; 00417b9d
    FXCH ST2                            ; 00417ba0
    FADD float ptr [EBP + -0x2]         ; 00417ba2
    FXCH                                ; 00417ba5
    FADD float ptr [EBP + 0x2]          ; 00417ba7
    FXCH ST2                            ; 00417baa
    FADD float ptr [EBP + 0x6]          ; 00417bac
    FXCH                                ; 00417baf
    FSTP float ptr [EBP + -0x1a]        ; 00417bb1
    FXCH                                ; 00417bb4
    FSTP float ptr [EBP + -0x16]        ; 00417bb6
    FSTP float ptr [EBP + -0x12]        ; 00417bb9
    MOVSD ES:EDI,ESI                    ; 00417bbc
    MOVSD ES:EDI,ESI                    ; 00417bbd
    MOVSD ES:EDI,ESI                    ; 00417bbe
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00417bbf
    PUSH dword ptr [EBX + 0xd694]       ; 00417bc2
    PUSH ESI                            ; 00417bc8
    MOV EDI,dword ptr [EBP + 0x62]      ; 00417bc9
    PUSH EDI                            ; 00417bcc
    LEA ESI,[EBP + 0xfffffece]          ; 00417bcd
    CALL core_xform.cpp_slerpQuaternion_FUN_00585b20 ; 00417bd3
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00585b20()
    LEA EDI,[EBP + 0xfffffebe]          ; 00417bd8
    LEA ESI,[EBP + 0xfffffece]          ; 00417bde
    LEA EAX,[EBP + 0xfffffebe]          ; 00417be4
    ADD ESP,0xc                         ; 00417bea
    MOVSD ES:EDI,ESI                    ; 00417bed
    MOVSD ES:EDI,ESI                    ; 00417bee
    MOVSD ES:EDI,ESI                    ; 00417bef
    MOVSD ES:EDI,ESI                    ; 00417bf0
    PUSH EAX                            ; 00417bf1
    LEA ESI,[EBP + 0xfffffede]          ; 00417bf2
    LEA EDI,[EBP + -0x6e]               ; 00417bf8
    CALL core_xform.cpp_FUN_00585de0    ; 00417bfb
        ;   XREF to: 00585de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00585de0()
    LEA ESI,[EBP + 0xfffffede]          ; 00417c00
    MOVSD ES:EDI,ESI                    ; 00417c06
    MOVSD ES:EDI,ESI                    ; 00417c07
    MOVSD ES:EDI,ESI                    ; 00417c08
    FLD float ptr [EBX + 0xd694]        ; 00417c09
    FMUL double ptr [0x005b6f72]        ; 00417c0f | DAT_005b6f72
    MOV EAX,dword ptr [EBP + 0xfffffef6] ; 00417c15
    FLD float ptr [EBP + -0x6e]         ; 00417c1b
    FXCH                                ; 00417c1e
    FADD ST0,ST1                        ; 00417c20
    MOV ESI,dword ptr [EBP + 0x36]      ; 00417c22
    FSTP ST1                            ; 00417c25
    FSTP float ptr [EBP + -0x6e]        ; 00417c27
    MOV dword ptr [ESI + 0x20],EAX      ; 00417c2a
    MOV EAX,dword ptr [EBP + 0xfffffefa] ; 00417c2d
    MOV dword ptr [ESI + 0x24],EAX      ; 00417c33
    MOV EAX,dword ptr [EBP + 0xfffffefe] ; 00417c36
    LEA EDX,[ESI + 0x30]                ; 00417c3c
    MOV dword ptr [ESI + 0x28],EAX      ; 00417c3f
    LEA EAX,[EBP + -0x6e]               ; 00417c42
    ADD ESP,0x4                         ; 00417c45
    CMP EDX,EAX                         ; 00417c48
    JNZ 0x00417ce7                      ; 00417c4a
        ;   XREF to: 00417ce7 (CONDITIONAL_JUMP)  ; LAB_00417ce7
    LEA EAX,[EBP + 0xfffffef6]          ; 00417c50
        ;   Label: LAB_00417c50
    LEA EDX,[ESI + 0xcd0]               ; 00417c56
    CMP EDX,EAX                         ; 00417c5c
    JZ 0x00417c7a                       ; 00417c5e
        ;   XREF to: 00417c7a (CONDITIONAL_JUMP)  ; LAB_00417c7a
    MOV EAX,dword ptr [EBP + 0xfffffef6] ; 00417c60
    MOV dword ptr [EDX],EAX             ; 00417c66
    MOV EAX,dword ptr [EBP + 0xfffffefa] ; 00417c68
    MOV dword ptr [EDX + 0x4],EAX       ; 00417c6e
    MOV EAX,dword ptr [EBP + 0xfffffefe] ; 00417c71
    MOV dword ptr [EDX + 0x8],EAX       ; 00417c77
    LEA EAX,[EBP + -0x6e]               ; 00417c7a
        ;   Label: LAB_00417c7a
    LEA EDX,[ESI + 0xcdc]               ; 00417c7d
    CMP EDX,EAX                         ; 00417c83
    JZ 0x00417c98                       ; 00417c85
        ;   XREF to: 00417c98 (CONDITIONAL_JUMP)  ; LAB_00417c98
    MOV EAX,dword ptr [EBP + -0x6e]     ; 00417c87
    MOV dword ptr [EDX],EAX             ; 00417c8a
    MOV EAX,dword ptr [EBP + -0x6a]     ; 00417c8c
    MOV dword ptr [EDX + 0x4],EAX       ; 00417c8f
    MOV EAX,dword ptr [EBP + -0x66]     ; 00417c92
    MOV dword ptr [EDX + 0x8],EAX       ; 00417c95
    MOV EAX,dword ptr [EBP + 0x62]      ; 00417c98
        ;   Label: LAB_00417c98
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00417c9b
    MOV ECX,dword ptr [EBP + 0x72]      ; 00417c9e
    MOV ESI,dword ptr [EBP + 0x6e]      ; 00417ca1
    MOV EDI,dword ptr [EBX + 0xd0e8]    ; 00417ca4
    ADD EAX,0x48                        ; 00417caa
    ADD EDX,0x48                        ; 00417cad
    ADD ECX,0x48                        ; 00417cb0
    INC ESI                             ; 00417cb3
    MOV dword ptr [EBP + 0x62],EAX      ; 00417cb4
    MOV dword ptr [EBP + 0x6a],EDX      ; 00417cb7
    MOV dword ptr [EBP + 0x72],ECX      ; 00417cba
    MOV dword ptr [EBP + 0x6e],ESI      ; 00417cbd
    CMP ESI,EDI                         ; 00417cc0
    JL 0x00417b15                       ; 00417cc2
        ;   XREF to: 00417b15 (CONDITIONAL_JUMP)  ; LAB_00417b15
    LEA ESP,[EBP + 0x7a]                ; 00417cc8
        ;   Label: LAB_00417cc8
    POP EBP                             ; 00417ccb
    POP EDI                             ; 00417ccc
    POP ESI                             ; 00417ccd
    POP EBX                             ; 00417cce
    RET                                 ; 00417ccf
    MOV EDI,dword ptr [EBX + 0xd078]    ; 00417cd0
        ;   Label: LAB_00417cd0
    PUSH EDI                            ; 00417cd6
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00417cd7
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00417cdc
    LEA ESP,[EBP + 0x7a]                ; 00417cdf
    POP EBP                             ; 00417ce2
    POP EDI                             ; 00417ce3
    POP ESI                             ; 00417ce4
    POP EBX                             ; 00417ce5
    RET                                 ; 00417ce6
    MOV EAX,dword ptr [EBP + -0x6e]     ; 00417ce7
        ;   Label: LAB_00417ce7
    MOV dword ptr [EDX],EAX             ; 00417cea
    MOV EAX,dword ptr [EBP + -0x6a]     ; 00417cec
    MOV dword ptr [EDX + 0x4],EAX       ; 00417cef
    MOV EAX,dword ptr [EBP + -0x66]     ; 00417cf2
    MOV dword ptr [EDX + 0x8],EAX       ; 00417cf5
    JMP 0x00417c50                      ; 00417cf8
        ;   XREF to: 00417c50 (UNCONDITIONAL_JUMP)  ; LAB_00417c50
    LEA EAX,[EBX + 0x158]               ; 00417cfd
        ;   Label: LAB_00417cfd
    PUSH EAX                            ; 00417d03
    XOR EDI,EDI                         ; 00417d04
    CALL core_skeleton.cpp_FUN_0054e670 ; 00417d06
        ;   XREF to: 0054e670 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054e670()
    MOV EDX,dword ptr [EBX + 0xd0e8]    ; 00417d0b
    ADD ESP,0x4                         ; 00417d11
    TEST EDX,EDX                        ; 00417d14
    JLE 0x00417d50                      ; 00417d16
        ;   XREF to: 00417d50 (CONDITIONAL_JUMP)  ; LAB_00417d50
    MOV ESI,EBX                         ; 00417d18
    PUSH 0x1                            ; 00417d1a
        ;   Label: LAB_00417d1a
    MOV EAX,dword ptr [ESI + 0xd134]    ; 00417d1c
    PUSH EAX                            ; 00417d22
    MOV EDX,dword ptr [0x00600530]      ; 00417d23 | DAT_00600530
    PUSH EDX                            ; 00417d29 | DAT_01d81080
    ADD ESI,0x48                        ; 00417d2a
    CALL core_mission.cpp_FUN_004f6f10  ; 00417d2d
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f6f10()
    MOV dword ptr [ESI + 0xd0ec],0x0    ; 00417d32
    INC EDI                             ; 00417d3c
    MOV ECX,dword ptr [EBX + 0xd0e8]    ; 00417d3d
    ADD ESP,0xc                         ; 00417d43
    CMP EDI,ECX                         ; 00417d46
    JL 0x00417d1a                       ; 00417d48
        ;   XREF to: 00417d1a (CONDITIONAL_JUMP)  ; LAB_00417d1a
    LEA EAX,[EAX]                       ; 00417d4a
    FLD float ptr [EBX + 0xd0e0]        ; 00417d50
        ;   Label: LAB_00417d50
    MOV dword ptr [EBX + 0xd0e4],0x0    ; 00417d56
    FLD ST0                             ; 00417d60
    FMUL double ptr [0x005b6f42]        ; 00417d62 | DAT_005b6f42
    MOV EAX,dword ptr [EBX + 0xd058]    ; 00417d68
    MOV dword ptr [EBX + 0x2538],EAX    ; 00417d6e
    FSTP ST1                            ; 00417d74
    FST float ptr [EBX + 0xd0e0]        ; 00417d76
    FCOMP double ptr [0x005b6f4a]       ; 00417d7c | DAT_005b6f4a
    FNSTSW AX                           ; 00417d82
    SAHF                                ; 00417d84
    JBE 0x00417de4                      ; 00417d85
        ;   XREF to: 00417de4 (CONDITIONAL_JUMP)  ; LAB_00417de4
    LEA EAX,[EBX + 0x249c]              ; 00417d87
        ;   Label: LAB_00417d87
    MOV dword ptr [EAX + 0x8],0x0       ; 00417d8d
    FLD float ptr [EBP + 0x92]          ; 00417d94
    MOV EDX,dword ptr [EAX + 0x8]       ; 00417d9a
    MOV dword ptr [EAX + 0x4],EDX       ; 00417d9d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00417da0
    MOV dword ptr [EAX],EDX             ; 00417da3
    LEA EAX,[EBX + 0x158]               ; 00417da5
    FMUL float ptr [EBX + 0xcdcc]       ; 00417dab
    MOV dword ptr [EBP + 0x5e],EAX      ; 00417db1
    FSTP float ptr [EBP + 0x2a]         ; 00417db4
    MOV ESI,dword ptr [EBP + 0x5e]      ; 00417db7
    FLD float ptr [EBP + 0x2a]          ; 00417dba
        ;   Label: LAB_00417dba
    FLDZ                                ; 00417dbd
    FCOMPP                              ; 00417dbf
    FNSTSW AX                           ; 00417dc1
    SAHF                                ; 00417dc3
    JNC 0x00417e19                      ; 00417dc4
        ;   XREF to: 00417e19 (CONDITIONAL_JUMP)  ; LAB_00417e19
    LEA EAX,[EBP + 0x2a]                ; 00417dc6
    PUSH EAX                            ; 00417dc9
    PUSH ESI                            ; 00417dca
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 00417dcb
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00417dd0
    CMP EAX,0x64                        ; 00417dd3
    JZ 0x00417df0                       ; 00417dd6
        ;   XREF to: 00417df0 (CONDITIONAL_JUMP)  ; LAB_00417df0
    PUSH EAX                            ; 00417dd8
    PUSH EBX                            ; 00417dd9
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 00417dda
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00417ddf
    JMP 0x00417dba                      ; 00417de2
        ;   XREF to: 00417dba (UNCONDITIONAL_JUMP)  ; LAB_00417dba
    MOV dword ptr [EBX + 0xd0e0],0x40200000 ; 00417de4
        ;   Label: LAB_00417de4
    JMP 0x00417d87                      ; 00417dee
        ;   XREF to: 00417d87 (UNCONDITIONAL_JUMP)  ; LAB_00417d87
    MOV EDI,dword ptr [EBX + 0xd064]    ; 00417df0
        ;   Label: LAB_00417df0
    TEST EDI,EDI                        ; 00417df6
    JZ 0x00417dba                       ; 00417df8
        ;   XREF to: 00417dba (CONDITIONAL_JUMP)  ; LAB_00417dba
    PUSH 0x0                            ; 00417dfa
    PUSH 0x3e4ccccd                     ; 00417dfc
    PUSH EDI                            ; 00417e01
    PUSH 0x1                            ; 00417e02
    PUSH EBX                            ; 00417e04
    MOV dword ptr [EBX + 0xd064],0x0    ; 00417e05
    CALL core_charactr.cpp_FUN_004319d0 ; 00417e0f
        ;   XREF to: 004319d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004319d0()
    ADD ESP,0x14                        ; 00417e14
    JMP 0x00417dba                      ; 00417e17
        ;   XREF to: 00417dba (UNCONDITIONAL_JUMP)  ; LAB_00417dba
    FLD float ptr [EBP + 0x92]          ; 00417e19
        ;   Label: LAB_00417e19
    FMUL float ptr [EBX + 0xcdcc]       ; 00417e1f
    SUB ESP,0x4                         ; 00417e25
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00417e28
    MOV dword ptr [EBX + 0x2524],EAX    ; 00417e2e
    FSTP float ptr [ESP]                ; 00417e34
    PUSH EBX                            ; 00417e37
    CALL core_charactr.cpp_FUN_00434850 ; 00417e38
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 00417e3d
    MOV ESI,dword ptr [EBP + 0x5e]      ; 00417e40
    PUSH ESI                            ; 00417e43
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00417e44
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00417e49
    MOV ESI,dword ptr [EAX + 0x24]      ; 00417e4c
    PUSH ESI                            ; 00417e4f
    PUSH 0x5b6ebf                       ; 00417e50 | = "State: %d\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00417e55 | g_CConsolePtr
    PUSH EDI                            ; 00417e5b | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00417e5c
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00417e61
    PUSH dword ptr [EBP + 0x92]         ; 00417e64
    PUSH EBX                            ; 00417e6a
    MOV dword ptr [EBP + 0x52],ESI      ; 00417e6b
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 00417e6e
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00417e73
    TEST EAX,EAX                        ; 00417e76
    JZ 0x00418688                       ; 00417e78
        ;   XREF to: 00418688 (CONDITIONAL_JUMP)  ; LAB_00418688
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00417e7e
    CMP EAX,0x2                         ; 00417e84
    JNC 0x004180f4                      ; 00417e87
        ;   XREF to: 004180f4 (CONDITIONAL_JUMP)  ; LAB_004180f4
    CMP EAX,0x1                         ; 00417e8d
    JNZ 0x004180ff                      ; 00417e90
        ;   XREF to: 004180ff (CONDITIONAL_JUMP)  ; LAB_004180ff
    PUSH 0x1                            ; 00417e96
        ;   Label: LAB_00417e96
    PUSH 0x1                            ; 00417e98
    LEA EAX,[EBX + 0x158]               ; 00417e9a
        ;   Label: LAB_00417e9a
    PUSH EAX                            ; 00417ea0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00417ea1
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00417ea6
        ;   Label: LAB_00417ea6
    LEA EAX,[EBX + 0x249c]              ; 00417ea9
    MOV dword ptr [EAX + 0x8],0x0       ; 00417eaf
    MOV EDX,dword ptr [EAX + 0x8]       ; 00417eb6
    MOV dword ptr [EAX + 0x4],EDX       ; 00417eb9
    MOV EDX,dword ptr [EAX + 0x4]       ; 00417ebc
    MOV dword ptr [EAX],EDX             ; 00417ebf
    FLD float ptr [EBX + 0xcde0]        ; 00417ec1
        ;   Label: caseD_3
    FLDZ                                ; 00417ec7
    FCOMPP                              ; 00417ec9
    FNSTSW AX                           ; 00417ecb
    SAHF                                ; 00417ecd
    JNC 0x00417ee2                      ; 00417ece
        ;   XREF to: 00417ee2 (CONDITIONAL_JUMP)  ; LAB_00417ee2
    FLD float ptr [EBX + 0xcde0]        ; 00417ed0
    FSUB float ptr [EBP + 0x92]         ; 00417ed6
    FSTP float ptr [EBX + 0xcde0]       ; 00417edc
    PUSH EBX                            ; 00417ee2
        ;   Label: LAB_00417ee2
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0 ; 00417ee3
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00417ee8
    TEST EAX,EAX                        ; 00417eeb
    JZ 0x00418004                       ; 00417eed
        ;   XREF to: 00418004 (CONDITIONAL_JUMP)  ; LAB_00418004
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 00417ef3
    TEST ECX,ECX                        ; 00417ef9
    JZ 0x00417f27                       ; 00417efb
        ;   XREF to: 00417f27 (CONDITIONAL_JUMP)  ; LAB_00417f27
    PUSH ECX                            ; 00417efd
    MOV EDX,dword ptr [ECX + 0x154]     ; 00417efe
    CALL dword ptr [EDX + 0xf4]         ; 00417f04
    ADD ESP,0x4                         ; 00417f0a
    CMP EAX,EBX                         ; 00417f0d
    JNZ 0x00417f27                      ; 00417f0f
        ;   XREF to: 00417f27 (CONDITIONAL_JUMP)  ; LAB_00417f27
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 00417f11
    PUSH ESI                            ; 00417f17
    MOV EDI,dword ptr [0x00603b28]      ; 00417f18 | g_CDemonSetPtr
    PUSH EDI                            ; 00417f1e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00417f1f
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00417f24
    PUSH dword ptr [EBP + 0x92]         ; 00417f27
        ;   Label: LAB_00417f27
    PUSH EBX                            ; 00417f2d
    LEA ESI,[EBX + 0x2518]              ; 00417f2e
    CALL core_charactr.cpp_FUN_0042c1e0 ; 00417f34
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 00417f39
    FMUL float ptr [EBP + 0x92]         ; 00417f3b
    FLD float ptr [ESI + 0x4]           ; 00417f41
    FMUL float ptr [EBP + 0x92]         ; 00417f44
    FLD float ptr [ESI + 0x8]           ; 00417f4a
    FMUL float ptr [EBP + 0x92]         ; 00417f4d
    LEA EDI,[EBP + -0x62]               ; 00417f53
    LEA ESI,[EBP + -0x56]               ; 00417f56
    FXCH ST2                            ; 00417f59
    FSTP float ptr [EBP + -0x56]        ; 00417f5b
    FSTP float ptr [EBP + -0x52]        ; 00417f5e
    FSTP float ptr [EBP + -0x4e]        ; 00417f61
    MOVSD ES:EDI,ESI                    ; 00417f64
    MOVSD ES:EDI,ESI                    ; 00417f65
    MOVSD ES:EDI,ESI                    ; 00417f66
    LEA EAX,[EBX + 0x250c]              ; 00417f67
    FLD float ptr [EBP + -0x62]         ; 00417f6d
    FLD float ptr [EBP + -0x5e]         ; 00417f70
    FLD float ptr [EBP + -0x5a]         ; 00417f73
    LEA EDI,[EBP + 0x16]                ; 00417f76
    LEA ESI,[EBP + -0x26]               ; 00417f79
    FXCH ST2                            ; 00417f7c
    FADD float ptr [EAX]                ; 00417f7e
    FXCH                                ; 00417f80
    FADD float ptr [EAX + 0x4]          ; 00417f82
    FXCH ST2                            ; 00417f85
    FADD float ptr [EAX + 0x8]          ; 00417f87
    FXCH                                ; 00417f8a
    FSTP float ptr [EBP + -0x26]        ; 00417f8c
    FXCH                                ; 00417f8f
    FSTP float ptr [EBP + -0x22]        ; 00417f91
    FSTP float ptr [EBP + -0x1e]        ; 00417f94
    MOVSD ES:EDI,ESI                    ; 00417f97
    MOVSD ES:EDI,ESI                    ; 00417f98
    MOVSD ES:EDI,ESI                    ; 00417f99
    LEA EDX,[EBX + 0x249c]              ; 00417f9a
    FLD float ptr [EBP + 0x16]          ; 00417fa0
    FLD float ptr [EBP + 0x1a]          ; 00417fa3
    FLD float ptr [EBP + 0x1e]          ; 00417fa6
    LEA EDI,[EBP + 0xffffff02]          ; 00417fa9
    LEA ESI,[EBP + -0x4a]               ; 00417faf
    FXCH ST2                            ; 00417fb2
    FADD float ptr [EDX]                ; 00417fb4
    FXCH                                ; 00417fb6
    FADD float ptr [EDX + 0x4]          ; 00417fb8
    FXCH ST2                            ; 00417fbb
    FADD float ptr [EDX + 0x8]          ; 00417fbd
    FXCH                                ; 00417fc0
    FSTP float ptr [EBP + -0x4a]        ; 00417fc2
    FXCH                                ; 00417fc5
    FSTP float ptr [EBP + -0x46]        ; 00417fc7
    FSTP float ptr [EBP + -0x42]        ; 00417fca
    MOVSD ES:EDI,ESI                    ; 00417fcd
    MOVSD ES:EDI,ESI                    ; 00417fce
    MOVSD ES:EDI,ESI                    ; 00417fcf
    MOV dword ptr [EAX + 0x8],0x0       ; 00417fd0
    ADD ESP,0x8                         ; 00417fd7
    MOV ECX,dword ptr [EAX + 0x8]       ; 00417fda
    MOV dword ptr [EAX + 0x4],ECX       ; 00417fdd
    MOV ECX,dword ptr [EAX + 0x4]       ; 00417fe0
    MOV dword ptr [EAX],ECX             ; 00417fe3
    MOV dword ptr [EDX + 0x8],0x0       ; 00417fe5
    LEA EAX,[EBP + 0xffffff02]          ; 00417fec
    FLD float ptr [EDX + 0x8]           ; 00417ff2
    PUSH EAX                            ; 00417ff5
    FST float ptr [EDX + 0x4]           ; 00417ff6
    PUSH EBX                            ; 00417ff9
    FSTP float ptr [EDX]                ; 00417ffa
    CALL core_charactr.cpp_FUN_0042c230 ; 00417ffc
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00418001
    PUSH EBX                            ; 00418004
        ;   Label: LAB_00418004
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30 ; 00418005
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041800a
    LEA EAX,[EBX + 0x158]               ; 0041800d
    PUSH EAX                            ; 00418013
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 00418014
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00418019
    PUSH dword ptr [EBP + 0x92]         ; 0041801c
    PUSH EBX                            ; 00418022
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 00418023
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    MOV EAX,dword ptr [EBP + 0x52]      ; 00418028
    ADD ESP,0x8                         ; 0041802b
    CMP EAX,0x1                         ; 0041802e
    JNZ 0x00418698                      ; 00418031
        ;   XREF to: 00418698 (CONDITIONAL_JUMP)  ; LAB_00418698
    PUSH 0x42c80000                     ; 00418037
    SUB ESP,0x8                         ; 0041803c
    FLD float ptr [EBX + 0x28]          ; 0041803f
    FSTP double ptr [ESP]               ; 00418042
    SUB ESP,0x8                         ; 00418045
    FLD float ptr [EBX + 0x24]          ; 00418048
    FSTP double ptr [ESP]               ; 0041804b
    SUB ESP,0x8                         ; 0041804e
    FLD float ptr [EBX + 0x20]          ; 00418051
    FSTP double ptr [ESP]               ; 00418054
    CALL sound_sndmain.cpp_FUN_00557170 ; 00418057
        ;   XREF to: 00557170 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00557170()
    ADD ESP,0x1c                        ; 0041805c
    TEST EAX,EAX                        ; 0041805f
    JZ 0x00418698                       ; 00418061
        ;   XREF to: 00418698 (CONDITIONAL_JUMP)  ; LAB_00418698
    MOV ECX,dword ptr [EBX + 0xd078]    ; 00418067
    PUSH ECX                            ; 0041806d
    CALL sound_sndmain.cpp_FUN_00556700 ; 0041806e
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00418073
    TEST EAX,EAX                        ; 00418076
    JNZ 0x00417cc8                      ; 00418078
        ;   XREF to: 00417cc8 (CONDITIONAL_JUMP)  ; LAB_00417cc8
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0 ; 0041807e
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0()
    PUSH 0x2                            ; 00418083
    PUSH 0x3f800000                     ; 00418085
    PUSH 0x0                            ; 0041808a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0041808c
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    ADD ESP,0x8                         ; 00418091
    MOV dword ptr [EBP + 0x76],EAX      ; 00418094
    SUB ESP,0x8                         ; 00418097
    FLD float ptr [EBP + 0x76]          ; 0041809a
    FSTP double ptr [ESP]               ; 0041809d
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00555f60 ; 004180a0
        ;   XREF to: 00555f60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00555f60(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 004180a5
    PUSH 0x5b6f28                       ; 004180a8 | = "boneGuy-walkloop.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004180ad
    PUSH EBX                            ; 004180b3
    CALL dword ptr [EAX + 0x30]         ; 004180b4
    ADD ESP,0x8                         ; 004180b7
    MOV dword ptr [EBX + 0xd078],EAX    ; 004180ba
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00556050 ; 004180c0
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00556050()
    LEA ESP,[EBP + 0x7a]                ; 004180c5
    POP EBP                             ; 004180c8
    POP EDI                             ; 004180c9
    POP ESI                             ; 004180ca
    POP EBX                             ; 004180cb
    RET                                 ; 004180cc
    PUSH 0x1                            ; 004180cd
        ;   Label: LAB_004180cd
    PUSH 0x0                            ; 004180cf
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004180d1
    PUSH EAX                            ; 004180d4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004180d5
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004180da
    PUSH EBX                            ; 004180dd
    PUSH 0x5b6eca                       ; 004180de | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x005f1690]      ; 004180e3 | g_CConsolePtr
    PUSH EDX                            ; 004180e9 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004180ea
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    JMP 0x00417ea6                      ; 004180ef
        ;   XREF to: 00417ea6 (UNCONDITIONAL_JUMP)  ; LAB_00417ea6
    JBE 0x00417e96                      ; 004180f4
        ;   XREF to: 00417e96 (CONDITIONAL_JUMP)  ; LAB_00417e96
        ;   Label: LAB_004180f4
    CMP EAX,0x3                         ; 004180fa
    JZ 0x004180cd                       ; 004180fd
        ;   XREF to: 004180cd (CONDITIONAL_JUMP)  ; LAB_004180cd
    PUSH 0x1                            ; 004180ff
        ;   Label: LAB_004180ff
    PUSH 0x0                            ; 00418101
    JMP 0x00417e9a                      ; 00418103
        ;   XREF to: 00417e9a (UNCONDITIONAL_JUMP)  ; LAB_00417e9a
    LEA EAX,[EBP + 0xfffffe46]          ; 00418108
        ;   Label: caseD_2
    PUSH EAX                            ; 0041810e
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0041810f
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    FLD float ptr [EBX + 0xce5c]        ; 00418114
    FMUL float ptr [0x005b6f5a]         ; 0041811a | DAT_005b6f5a
    ADD ESP,0x4                         ; 00418120
    LEA EAX,[EBP + 0xfffffe46]          ; 00418123
    MOV EDX,dword ptr [0x007e1620]      ; 00418129 | DAT_007e1620
    PUSH EAX                            ; 0041812f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00418130
    MOV dword ptr [EBP + 0xfffffe7a],EBX ; 00418137
    SUB EAX,EDX                         ; 0041813d
    MOV dword ptr [EBP + 0xfffffe7e],EBX ; 0041813f
    SHL EAX,0x4                         ; 00418145
    LEA EDX,[EBX + 0xfd8]               ; 00418148
    ADD EAX,EDX                         ; 0041814e
    PUSH 0x3ecccccd                     ; 00418150
    PUSH EAX                            ; 00418155
    LEA ESI,[EBP + 0xffffff3e]          ; 00418156
    LEA EDI,[EBP + 0xffffff0e]          ; 0041815c
    PUSH 0x2cfd900                      ; 00418162 | DAT_02cfd900
    FSTP float ptr [EBP + 0xfffffe4a]   ; 00418167
    CALL core_xform.cpp_FUN_00583260    ; 0041816d
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00418172
    LEA EAX,[EBP + 0xffffff0e]          ; 00418175
    LEA ESI,[EBP + 0xffffff3e]          ; 0041817b
    PUSH EAX                            ; 00418181
    MOVSD ES:EDI,ESI                    ; 00418182
    MOVSD ES:EDI,ESI                    ; 00418183
    MOVSD ES:EDI,ESI                    ; 00418184
    PUSH EBX                            ; 00418185
    LEA ESI,[EBP + 0xffffff56]          ; 00418186
    CALL core_actor.cpp_FUN_00408b80    ; 0041818c
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00418191
    LEA EAX,[EBP + 0xffffff6e]          ; 00418194
    PUSH EAX                            ; 0041819a
    LEA EDI,[EBP + 0xffffff6e]          ; 0041819b
    LEA ESI,[EBP + 0xffffff56]          ; 004181a1
    PUSH EBX                            ; 004181a7
    MOVSD ES:EDI,ESI                    ; 004181a8
    MOVSD ES:EDI,ESI                    ; 004181a9
    MOVSD ES:EDI,ESI                    ; 004181aa
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 004181ab
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004181b0
    JMP 0x00417ec1                      ; 004181b3
        ;   XREF to: 00417ec1 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,dword ptr [EBX + 0x2628]    ; 004181b8
        ;   Label: caseD_6
    TEST EAX,EAX                        ; 004181be
    JZ 0x004181e0                       ; 004181c0
        ;   XREF to: 004181e0 (CONDITIONAL_JUMP)  ; LAB_004181e0
    PUSH 0x2                            ; 004181c2
    MOV EDX,dword ptr [EAX + 0x154]     ; 004181c4
    PUSH EAX                            ; 004181ca
    CALL dword ptr [EDX + 0x78]         ; 004181cb
    ADD ESP,0x8                         ; 004181ce
    MOV dword ptr [EBX + 0xcde0],0x40200000 ; 004181d1
    JMP 0x00417ec1                      ; 004181db
        ;   XREF to: 00417ec1 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [EBP + 0x5e]      ; 004181e0
        ;   Label: LAB_004181e0
    PUSH EDX                            ; 004181e3
    CALL core_motion.cpp_FUN_004fc930   ; 004181e4
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004181e9
    ADD ESP,0x4                         ; 004181ec
    FLD float ptr [EBP + 0x76]          ; 004181ef
    FCOMP double ptr [0x005b6f52]       ; 004181f2 | DAT_005b6f52
    FNSTSW AX                           ; 004181f8
    SAHF                                ; 004181fa
    JBE 0x00417ec1                      ; 004181fb
        ;   XREF to: 00417ec1 (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0xcde0]        ; 00418201
    FLDZ                                ; 00418207
    FCOMPP                              ; 00418209
    FNSTSW AX                           ; 0041820b
    SAHF                                ; 0041820d
    JC 0x00417ec1                       ; 0041820e
        ;   XREF to: 00417ec1 (CONDITIONAL_JUMP)  ; caseD_4
    LEA EAX,[EBP + 0xfffffe82]          ; 00418214
    PUSH EAX                            ; 0041821a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0041821b
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EAX,dword ptr [EBX + 0xce5c]    ; 00418220
    ADD ESP,0x4                         ; 00418226
    MOV dword ptr [EBP + 0xfffffe86],EAX ; 00418229
    LEA EAX,[EBP + 0xfffffe82]          ; 0041822f
    MOV EDX,dword ptr [0x007e1628]      ; 00418235 | DAT_007e1628
    PUSH EAX                            ; 0041823b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041823c
    MOV dword ptr [EBP + 0xfffffeb6],EBX ; 00418243
    SUB EAX,EDX                         ; 00418249
    MOV dword ptr [EBP + 0xfffffeba],EBX ; 0041824b
    SHL EAX,0x4                         ; 00418251
    LEA EDX,[EBX + 0xfd8]               ; 00418254
    ADD EAX,EDX                         ; 0041825a
    PUSH 0x40000000                     ; 0041825c
    PUSH EAX                            ; 00418261
    PUSH 0x2cfd900                      ; 00418262 | DAT_02cfd900
    LEA ESI,[EBP + 0xffffff62]          ; 00418267
    LEA EDI,[EBP + -0x32]               ; 0041826d
    CALL core_xform.cpp_FUN_00583260    ; 00418270
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00418275
    LEA EAX,[EBP + -0x32]               ; 00418278
    LEA ESI,[EBP + 0xffffff62]          ; 0041827b
    PUSH EAX                            ; 00418281
    MOVSD ES:EDI,ESI                    ; 00418282
    MOVSD ES:EDI,ESI                    ; 00418283
    MOVSD ES:EDI,ESI                    ; 00418284
    PUSH EBX                            ; 00418285
    LEA ESI,[EBP + 0xa]                 ; 00418286
    CALL core_actor.cpp_FUN_00408b80    ; 00418289
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0041828e
    LEA EAX,[EBP + 0xfffffeea]          ; 00418291
    PUSH EAX                            ; 00418297
    LEA EDI,[EBP + 0xfffffeea]          ; 00418298
    LEA ESI,[EBP + 0xa]                 ; 0041829e
    PUSH EBX                            ; 004182a1
    MOVSD ES:EDI,ESI                    ; 004182a2
    MOVSD ES:EDI,ESI                    ; 004182a3
    MOVSD ES:EDI,ESI                    ; 004182a4
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 004182a5
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004182aa
    MOV dword ptr [EBX + 0xcde0],0x40200000 ; 004182ad
    JMP 0x00417ec1                      ; 004182b7
        ;   XREF to: 00417ec1 (UNCONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xcdd0],0x0    ; 004182bc
        ;   Label: caseD_5
    JNZ 0x00417ec1                      ; 004182c3
        ;   XREF to: 00417ec1 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xdc],0x0      ; 004182c9
    JNZ 0x00417ec1                      ; 004182d0
        ;   XREF to: 00417ec1 (CONDITIONAL_JUMP)  ; caseD_4
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 004182d6
    JMP 0x00417ec1                      ; 004182e0
        ;   XREF to: 00417ec1 (UNCONDITIONAL_JUMP)  ; caseD_4
    LEA EDI,[EBP + 0xffffff26]          ; 004182e5
        ;   Label: caseD_0
    LEA EAX,[EBX + 0x20]                ; 004182eb
    LEA ESI,[EBP + 0xffffff4a]          ; 004182ee
    MOV EDX,dword ptr [0x01d5ba14]      ; 004182f4 | DAT_01d5ba14
    FLD float ptr [EAX]                 ; 004182fa
    FLD float ptr [EAX + 0x4]           ; 004182fc
    MOV EDX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 004182ff
    FLD float ptr [EAX + 0x8]           ; 00418306
    FXCH ST2                            ; 00418309
    FSUB float ptr [EDX + 0x20]         ; 0041830b
    FXCH                                ; 0041830e
    FSUB float ptr [EDX + 0x24]         ; 00418310
    FXCH ST2                            ; 00418313
    FSUB float ptr [EDX + 0x28]         ; 00418315
    FXCH                                ; 00418318
    FSTP float ptr [EBP + 0xffffff4a]   ; 0041831a
    FXCH                                ; 00418320
    FSTP float ptr [EBP + 0xffffff4e]   ; 00418322
    FSTP float ptr [EBP + 0xffffff52]   ; 00418328
    MOVSD ES:EDI,ESI                    ; 0041832e
    MOVSD ES:EDI,ESI                    ; 0041832f
    MOVSD ES:EDI,ESI                    ; 00418330
    FLD float ptr [EBX + 0xcde0]        ; 00418331
    FLDZ                                ; 00418337
    FCOMPP                              ; 00418339
    FNSTSW AX                           ; 0041833b
    SAHF                                ; 0041833d
    JNC 0x00418389                      ; 0041833e
        ;   XREF to: 00418389 (CONDITIONAL_JUMP)  ; LAB_00418389
    FLD float ptr [EBP + 0xffffff2a]    ; 00418340
    FMUL ST0                            ; 00418346
    FLD float ptr [EBP + 0xffffff26]    ; 00418348
    FMUL ST0                            ; 0041834e
    FADDP                               ; 00418350
    FLD float ptr [EBP + 0xffffff2e]    ; 00418352
    FMUL ST0                            ; 00418358
    FADDP                               ; 0041835a
    FSTP float ptr [EBP + 0x2e]         ; 0041835c
    MOV EAX,dword ptr [EBP + 0x2e]      ; 0041835f
    MOV EDX,dword ptr [0x01d1a0a4]      ; 00418362 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 00418368
    ADD EAX,EDX                         ; 0041836a
    MOV dword ptr [EBP + 0x4e],EAX      ; 0041836c
    FLD float ptr [EBP + 0x4e]          ; 0041836f
    FLD float ptr [0x005dc138]          ; 00418372 | DAT_005dc138
    FADD double ptr [0x005b6f62]        ; 00418378 | DAT_005b6f62
    FCOMPP                              ; 0041837e
    FNSTSW AX                           ; 00418380
    SAHF                                ; 00418382
    JNC 0x00417ec1                      ; 00418383
        ;   XREF to: 00417ec1 (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBP + 0xffffff2a]    ; 00418389
        ;   Label: LAB_00418389
    FMUL ST0                            ; 0041838f
    FLD float ptr [EBP + 0xffffff26]    ; 00418391
    FMUL ST0                            ; 00418397
    FADDP                               ; 00418399
    FLD float ptr [EBP + 0xffffff2e]    ; 0041839b
    FMUL ST0                            ; 004183a1
    FADDP                               ; 004183a3
    FSTP float ptr [EBP + 0x32]         ; 004183a5
    MOV EAX,dword ptr [EBP + 0x32]      ; 004183a8
    MOV ECX,dword ptr [0x01d1a0a4]      ; 004183ab | DAT_01d1a0a4
    SAR EAX,0x1                         ; 004183b1
    ADD EAX,ECX                         ; 004183b3
    MOV dword ptr [EBP + 0x46],EAX      ; 004183b5
    FLD float ptr [EBP + 0x46]          ; 004183b8
    FLD float ptr [0x005dc138]          ; 004183bb | DAT_005dc138
    FADD double ptr [0x005b6f62]        ; 004183c1 | DAT_005b6f62
    LEA ESI,[EBX + 0x158]               ; 004183c7
    FCOMPP                              ; 004183cd
    FNSTSW AX                           ; 004183cf
    SAHF                                ; 004183d1
    JC 0x004183f0                       ; 004183d2
        ;   XREF to: 004183f0 (CONDITIONAL_JUMP)  ; LAB_004183f0
    PUSH 0x1                            ; 004183d4
    PUSH 0x6                            ; 004183d6
    PUSH ESI                            ; 004183d8
    MOV dword ptr [EBX + 0xd690],0x1    ; 004183d9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004183e3
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004183e8
    JMP 0x00417ec1                      ; 004183eb
        ;   XREF to: 00417ec1 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004183f0
        ;   Label: LAB_004183f0
    PUSH EBX                            ; 004183f6
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 004183f7
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004183fc
    TEST EAX,EAX                        ; 004183ff
    JZ 0x0041841f                       ; 00418401
        ;   XREF to: 0041841f (CONDITIONAL_JUMP)  ; LAB_0041841f
    PUSH 0x1                            ; 00418403
    PUSH 0x1                            ; 00418405
    PUSH ESI                            ; 00418407
    MOV dword ptr [EBX + 0xd690],0x0    ; 00418408
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00418412
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00418417
    JMP 0x00417ec1                      ; 0041841a
        ;   XREF to: 00417ec1 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 0041841f
        ;   Label: LAB_0041841f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00418425
    PUSH EBX                            ; 0041842b
    CALL dword ptr [EAX + 0x144]        ; 0041842c
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 00418432
    ADD ESP,0x8                         ; 00418438
    TEST EDI,EDI                        ; 0041843b
    JZ 0x00417ec1                       ; 0041843d
        ;   XREF to: 00417ec1 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 00418443
    PUSH 0x1                            ; 00418445
    PUSH ESI                            ; 00418447
    MOV dword ptr [EBX + 0xd690],0x0    ; 00418448
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00418452
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00418457
    JMP 0x00417ec1                      ; 0041845a
        ;   XREF to: 00417ec1 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,[0x01d5ba14]                ; 0041845f | DAT_01d5ba14
        ;   Label: caseD_1
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00418464
    LEA EAX,[EBX + 0x20]                ; 0041846b
    LEA EDI,[EBP + -0x7a]               ; 0041846e
    LEA ESI,[EBP + -0x3e]               ; 00418471
    FLD float ptr [EAX]                 ; 00418474
    FLD float ptr [EAX + 0x4]           ; 00418476
    FLD float ptr [EAX + 0x8]           ; 00418479
    FXCH ST2                            ; 0041847c
    FSUB float ptr [EDX + 0x20]         ; 0041847e
    FXCH                                ; 00418481
    FSUB float ptr [EDX + 0x24]         ; 00418483
    FXCH ST2                            ; 00418486
    FSUB float ptr [EDX + 0x28]         ; 00418488
    FXCH                                ; 0041848b
    FSTP float ptr [EBP + -0x3e]        ; 0041848d
    FXCH                                ; 00418490
    FSTP float ptr [EBP + -0x3a]        ; 00418492
    FSTP float ptr [EBP + -0x36]        ; 00418495
    MOVSD ES:EDI,ESI                    ; 00418498
    MOVSD ES:EDI,ESI                    ; 00418499
    MOVSD ES:EDI,ESI                    ; 0041849a
    FLD float ptr [EBP + -0x76]         ; 0041849b
    FMUL ST0                            ; 0041849e
    FLD float ptr [EBP + -0x7a]         ; 004184a0
    FMUL ST0                            ; 004184a3
    FADDP                               ; 004184a5
    FLD float ptr [EBP + -0x72]         ; 004184a7
    FMUL ST0                            ; 004184aa
    FADDP                               ; 004184ac
    FSTP float ptr [EBP + 0x4a]         ; 004184ae
    MOV EAX,dword ptr [EBP + 0x4a]      ; 004184b1
    MOV EDI,dword ptr [0x01d1a0a4]      ; 004184b4 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 004184ba
    ADD EAX,EDI                         ; 004184bc
    MOV dword ptr [EBP + 0x3a],EAX      ; 004184be
    FLD float ptr [EBP + 0x3a]          ; 004184c1
    FLD float ptr [0x005dc138]          ; 004184c4 | DAT_005dc138
    FADD double ptr [0x005b6f62]        ; 004184ca | DAT_005b6f62
    FCOMPP                              ; 004184d0
    FNSTSW AX                           ; 004184d2
    SAHF                                ; 004184d4
    JC 0x004184f0                       ; 004184d5
        ;   XREF to: 004184f0 (CONDITIONAL_JUMP)  ; LAB_004184f0
    FLD float ptr [EBX + 0xcde0]        ; 004184d7
    FLDZ                                ; 004184dd
    FCOMPP                              ; 004184df
    FNSTSW AX                           ; 004184e1
    SAHF                                ; 004184e3
    JNC 0x004184f0                      ; 004184e4
        ;   XREF to: 004184f0 (CONDITIONAL_JUMP)  ; LAB_004184f0
    MOV EAX,dword ptr [EBX + 0xd690]    ; 004184e6
    TEST EAX,EAX                        ; 004184ec
    JZ 0x0041853e                       ; 004184ee
        ;   XREF to: 0041853e (CONDITIONAL_JUMP)  ; LAB_0041853e
    PUSH dword ptr [EBP + 0x92]         ; 004184f0
        ;   Label: LAB_004184f0
    MOV EAX,dword ptr [EBX + 0x154]     ; 004184f6
    PUSH EBX                            ; 004184fc
    CALL dword ptr [EAX + 0x144]        ; 004184fd
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 00418503
    ADD ESP,0x8                         ; 00418509
    TEST ECX,ECX                        ; 0041850c
    JNZ 0x0041854f                      ; 0041850e
        ;   XREF to: 0041854f (CONDITIONAL_JUMP)  ; LAB_0041854f
    PUSH dword ptr [EBP + 0x92]         ; 00418510
    PUSH EBX                            ; 00418516
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 00418517
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041851c
    TEST EAX,EAX                        ; 0041851f
    JNZ 0x00417ec1                      ; 00418521
        ;   XREF to: 00417ec1 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 00418527
    PUSH EAX                            ; 00418529
    LEA EAX,[EBX + 0x158]               ; 0041852a
    PUSH EAX                            ; 00418530
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00418531
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00418536
    JMP 0x00417ec1                      ; 00418539
        ;   XREF to: 00417ec1 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 0041853e
        ;   Label: LAB_0041853e
    PUSH EAX                            ; 00418540
    MOV EDX,dword ptr [EBP + 0x5e]      ; 00418541
    PUSH EDX                            ; 00418544
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00418545
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041854a
    JMP 0x004184f0                      ; 0041854d
        ;   XREF to: 004184f0 (UNCONDITIONAL_JUMP)  ; LAB_004184f0
    PUSH dword ptr [EBP + 0x92]         ; 0041854f
        ;   Label: LAB_0041854f
    PUSH EBX                            ; 00418555
    CALL core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_00418930 ; 00418556
        ;   XREF to: 00418930 (UNCONDITIONAL_CALL)  ; int core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_00418930(CBoneGuy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041855b
    TEST EAX,EAX                        ; 0041855e
    JNZ 0x00417ec1                      ; 00418560
        ;   XREF to: 00417ec1 (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [0x005dc138]          ; 00418566 | DAT_005dc138
    FADD double ptr [0x005b6f6a]        ; 0041856c | DAT_005b6f6a
    MOV ESI,dword ptr [EBX + 0x2628]    ; 00418572
    FSTP float ptr [EBP + 0x56]         ; 00418578
    TEST ESI,ESI                        ; 0041857b
    PUSH 0x3e32b8c2                     ; 0041857d
    PUSH 0x3dcccccd                     ; 00418582
    XOR EDI,EDI                         ; 00418587
    MOV EAX,dword ptr [EBP + 0x56]      ; 00418589
    MOV dword ptr [EBP + 0xffffff7a],EDI ; 0041858c
    MOV dword ptr [EBP + -0x7e],EAX     ; 00418592
    LEA EAX,[EBP + 0xffffff7a]          ; 00418595
    MOV dword ptr [EBP + 0xffffff7e],EDI ; 0041859b
    PUSH EAX                            ; 004185a1
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004185a2
    PUSH EAX                            ; 004185a8
    MOV EDX,dword ptr [EAX + 0x154]     ; 004185a9
    CALL dword ptr [EDX + 0xc4]         ; 004185af
    ADD ESP,0x4                         ; 004185b5
    PUSH EAX                            ; 004185b8
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004185b9
    ADD EAX,0x20                        ; 004185bf
    PUSH EAX                            ; 004185c2
    PUSH EBX                            ; 004185c3
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 004185c4
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004185c9
    LEA ESI,[EBX + 0x158]               ; 004185cc
    TEST EAX,EAX                        ; 004185d2
    JL 0x00418661                       ; 004185d4
        ;   XREF to: 00418661 (CONDITIONAL_JUMP)  ; LAB_00418661
    LEA EDX,[EBX + 0x20]                ; 004185da
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004185dd
    FLD float ptr [EDX]                 ; 004185e3
    FSUB float ptr [EAX + 0x20]         ; 004185e5
    FMUL ST0                            ; 004185e8
    FLD float ptr [EDX + 0x8]           ; 004185ea
    FSUB float ptr [EAX + 0x28]         ; 004185ed
    FMUL ST0                            ; 004185f0
    FADDP                               ; 004185f2
    FSQRT                               ; 004185f4
    FLD float ptr [EBP + 0x56]          ; 004185f6
    FADD double ptr [0x005b6f42]        ; 004185f9 | DAT_005b6f42
    FCOMPP                              ; 004185ff
    FNSTSW AX                           ; 00418601
    SAHF                                ; 00418603
    JC 0x00417ec1                       ; 00418604
        ;   XREF to: 00417ec1 (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0xcde0]        ; 0041860a
    FLDZ                                ; 00418610
    FCOMPP                              ; 00418612
    FNSTSW AX                           ; 00418614
    SAHF                                ; 00418616
    JC 0x00417ec1                       ; 00418617
        ;   XREF to: 00417ec1 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0x2628],0x0    ; 0041861d
    PUSH 0x1                            ; 00418624
    PUSH 0x6                            ; 00418626
    PUSH ESI                            ; 00418628
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00418629
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041862e
    MOV ECX,dword ptr [EBX + 0xd078]    ; 00418631
    PUSH ECX                            ; 00418637
    MOV dword ptr [EBX + 0xd690],0x1    ; 00418638
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00418642
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00418647
    PUSH 0x5b6f15                       ; 0041864a | = "boneguy-swing?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041864f
    PUSH EBX                            ; 00418655
    CALL dword ptr [EAX + 0x2c]         ; 00418656
    ADD ESP,0x8                         ; 00418659
    JMP 0x00417ec1                      ; 0041865c
        ;   XREF to: 00417ec1 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH EBX                            ; 00418661
        ;   Label: LAB_00418661
    PUSH 0x5b6ef4                       ; 00418662 | = "%s gave up chase - I'm confused\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00418667 | g_CConsolePtr
    PUSH EDI                            ; 0041866d | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 0041866e
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00418673
    PUSH 0x1                            ; 00418676
    PUSH 0x0                            ; 00418678
    PUSH ESI                            ; 0041867a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0041867b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00418680
    JMP 0x00417ec1                      ; 00418683
        ;   XREF to: 00417ec1 (UNCONDITIONAL_JUMP)  ; caseD_4
    CMP ESI,0x6                         ; 00418688
        ;   Label: LAB_00418688
    JA 0x00417ec1                       ; 0041868b
        ;   XREF to: 00417ec1 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [ESI*0x4 + 0x417994]  ; 00418691 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDX,dword ptr [EBX + 0xd078]    ; 00418698
        ;   Label: LAB_00418698
    PUSH EDX                            ; 0041869e
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0041869f
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 004186a4
    LEA ESP,[EBP + 0x7a]                ; 004186a7
    POP EBP                             ; 004186aa
    POP EDI                             ; 004186ab
    POP ESI                             ; 004186ac
    POP EBX                             ; 004186ad
    RET                                 ; 004186ae

