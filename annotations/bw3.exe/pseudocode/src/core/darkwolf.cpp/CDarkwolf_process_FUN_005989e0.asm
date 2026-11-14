; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_darkwolf_cpp_CDarkwolf_process_FUN_005989e0(CDarkwolf *this_ptr,float delta_time)
;
; Parameters:
; CDarkwolf *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_s_confused_while_walking_005d9839
;   TerminatedCString s_dog_howl_wav_005d9863
;   undefined4 DAT_005d9872
;   undefined4 DAT_005d987a
;   undefined4 DAT_005d9882
;   CConsole* g_CConsolePtr = 007f7ea4
;   undefined4 DAT_00600530
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d81080
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_00432330
;   core_charactr.cpp_FUN_00433c60
;   core_charactr.cpp_FUN_00434850
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930
;   core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10
;   core_motion.cpp_CMotionController_advance_FUN_004fbb70
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005989e0
        ;   Label: core_darkwolf.cpp_CDarkwolf_process_FUN_005989e0
    PUSH ESI                            ; 005989e1
    PUSH EDI                            ; 005989e2
    PUSH EBP                            ; 005989e3
    MOV EBP,ESP                         ; 005989e4
    SUB ESP,0x74                        ; 005989e6
    AND ESP,0xfffffff8                  ; 005989e9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005989ec
    FLD float ptr [EBX + 0xdc90]        ; 005989ef
    FLD1                                ; 005989f5
    FCOMPP                              ; 005989f7
    FNSTSW AX                           ; 005989f9
    SAHF                                ; 005989fb
    JA 0x00598a05                       ; 005989fc
        ;   XREF to: 00598a05 (CONDITIONAL_JUMP)  ; LAB_00598a05
    MOV ESP,EBP                         ; 005989fe
        ;   Label: LAB_005989fe
    POP EBP                             ; 00598a00
    POP EDI                             ; 00598a01
    POP ESI                             ; 00598a02
    POP EBX                             ; 00598a03
    RET                                 ; 00598a04
    PUSH dword ptr [EBP + 0x18]         ; 00598a05
        ;   Label: LAB_00598a05
    MOV EAX,dword ptr [EBX + 0x154]     ; 00598a08
    PUSH EBX                            ; 00598a0e
    CALL dword ptr [EAX + 0x148]        ; 00598a0f
    ADD ESP,0x8                         ; 00598a15
    TEST EAX,EAX                        ; 00598a18
    JZ 0x005989fe                       ; 00598a1a
        ;   XREF to: 005989fe (CONDITIONAL_JUMP)  ; LAB_005989fe
    PUSH dword ptr [EBP + 0x18]         ; 00598a1c
    PUSH EBX                            ; 00598a1f
    CALL core_charactr.cpp_FUN_00433c60 ; 00598a20
        ;   XREF to: 00433c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433c60()
    ADD ESP,0x8                         ; 00598a25
    PUSH 0x0                            ; 00598a28
    PUSH dword ptr [EBP + 0x18]         ; 00598a2a
    PUSH EBX                            ; 00598a2d
    CALL core_charactr.cpp_FUN_00432330 ; 00598a2e
        ;   XREF to: 00432330 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432330()
    LEA EAX,[EBX + 0x249c]              ; 00598a33
    ADD ESP,0xc                         ; 00598a39
    MOV dword ptr [EAX + 0x8],0x0       ; 00598a3c
    FLD float ptr [EBP + 0x18]          ; 00598a43
    MOV EDX,dword ptr [EAX + 0x8]       ; 00598a46
    MOV dword ptr [EAX + 0x4],EDX       ; 00598a49
    MOV EDX,dword ptr [EAX + 0x4]       ; 00598a4c
    MOV dword ptr [EAX],EDX             ; 00598a4f
    FMUL float ptr [EBX + 0xcdcc]       ; 00598a51
    LEA ESI,[EBX + 0x158]               ; 00598a57
    FSTP float ptr [ESP]                ; 00598a5d
    FLD float ptr [ESP]                 ; 00598a60
        ;   Label: LAB_00598a60
    FLDZ                                ; 00598a63
    FCOMPP                              ; 00598a65
    FNSTSW AX                           ; 00598a67
    SAHF                                ; 00598a69
    JNC 0x00598a84                      ; 00598a6a
        ;   XREF to: 00598a84 (CONDITIONAL_JUMP)  ; LAB_00598a84
    MOV EAX,ESP                         ; 00598a6c
    PUSH EAX                            ; 00598a6e
    PUSH ESI                            ; 00598a6f
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 00598a70
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00598a75
    PUSH EAX                            ; 00598a78
    PUSH EBX                            ; 00598a79
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 00598a7a
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00598a7f
    JMP 0x00598a60                      ; 00598a82
        ;   XREF to: 00598a60 (UNCONDITIONAL_JUMP)  ; LAB_00598a60
    PUSH ESI                            ; 00598a84
        ;   Label: LAB_00598a84
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00598a85
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00598a8a
    FLD float ptr [EBP + 0x18]          ; 00598a8d
    FMUL float ptr [EBX + 0xcdcc]       ; 00598a90
    FLD float ptr [EBX + 0x24a4]        ; 00598a96
    MOV ESI,dword ptr [EAX + 0x24]      ; 00598a9c
    SUB ESP,0x4                         ; 00598a9f
    FSTP float ptr [EBX + 0x2524]       ; 00598aa2
    FSTP float ptr [ESP]                ; 00598aa8
    PUSH EBX                            ; 00598aab
    CALL core_charactr.cpp_FUN_00434850 ; 00598aac
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 00598ab1
    CMP ESI,0x2                         ; 00598ab4
    JNZ 0x00598acf                      ; 00598ab7
        ;   XREF to: 00598acf (CONDITIONAL_JUMP)  ; LAB_00598acf
    FLD float ptr [EBX + 0x2528]        ; 00598ab9
    FLD ST0                             ; 00598abf
    FMUL double ptr [0x005d9872]        ; 00598ac1 | DAT_005d9872
    FSTP ST1                            ; 00598ac7
    FSTP float ptr [EBX + 0x2528]       ; 00598ac9
    PUSH dword ptr [EBP + 0x18]         ; 00598acf
        ;   Label: LAB_00598acf
    PUSH EBX                            ; 00598ad2
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 00598ad3
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00598ad8
    LEA ESI,[EBX + 0x158]               ; 00598adb
    TEST EAX,EAX                        ; 00598ae1
    JZ 0x00598c73                       ; 00598ae3
        ;   XREF to: 00598c73 (CONDITIONAL_JUMP)  ; LAB_00598c73
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00598ae9
    CMP EAX,0x2                         ; 00598aef
    JNC 0x00598c5c                      ; 00598af2
        ;   XREF to: 00598c5c (CONDITIONAL_JUMP)  ; LAB_00598c5c
    CMP EAX,0x1                         ; 00598af8
    JNZ 0x00598c63                      ; 00598afb
        ;   XREF to: 00598c63 (CONDITIONAL_JUMP)  ; LAB_00598c63
    PUSH EAX                            ; 00598b01
    PUSH EAX                            ; 00598b02
    PUSH ESI                            ; 00598b03
        ;   Label: LAB_00598b03
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00598b04
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00598b04
    ADD ESP,0xc                         ; 00598b09
        ;   Label: LAB_00598b09
    LEA EAX,[EBX + 0x249c]              ; 00598b0c
    MOV dword ptr [EAX + 0x8],0x0       ; 00598b12
    MOV EDX,dword ptr [EAX + 0x8]       ; 00598b19
    MOV dword ptr [EAX + 0x4],EDX       ; 00598b1c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00598b1f
    MOV dword ptr [EAX],EDX             ; 00598b22
    PUSH dword ptr [EBP + 0x18]         ; 00598b24
        ;   Label: LAB_00598b24
    PUSH EBX                            ; 00598b27
    LEA ESI,[EBX + 0x2518]              ; 00598b28
    CALL core_charactr.cpp_FUN_0042c1e0 ; 00598b2e
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    ADD ESP,0x8                         ; 00598b33
    FLD float ptr [ESI]                 ; 00598b36
    FMUL float ptr [EBP + 0x18]         ; 00598b38
    FLD float ptr [ESI + 0x4]           ; 00598b3b
    FMUL float ptr [EBP + 0x18]         ; 00598b3e
    FLD float ptr [ESI + 0x8]           ; 00598b41
    FMUL float ptr [EBP + 0x18]         ; 00598b44
    LEA EDI,[ESP + 0x58]                ; 00598b47
    LEA ESI,[ESP + 0x40]                ; 00598b4b
    FXCH ST2                            ; 00598b4f
    FSTP float ptr [ESP + 0x40]         ; 00598b51
    FSTP float ptr [ESP + 0x44]         ; 00598b55
    FSTP float ptr [ESP + 0x48]         ; 00598b59
    MOVSD ES:EDI,ESI                    ; 00598b5d
    MOVSD ES:EDI,ESI                    ; 00598b5e
    MOVSD ES:EDI,ESI                    ; 00598b5f
    LEA EAX,[EBX + 0x250c]              ; 00598b60
    FLD float ptr [ESP + 0x58]          ; 00598b66
    FLD float ptr [ESP + 0x5c]          ; 00598b6a
    FLD float ptr [ESP + 0x60]          ; 00598b6e
    LEA EDI,[ESP + 0x28]                ; 00598b72
    LEA ESI,[ESP + 0x4]                 ; 00598b76
    FXCH ST2                            ; 00598b7a
    FADD float ptr [EAX]                ; 00598b7c
    FXCH                                ; 00598b7e
    FADD float ptr [EAX + 0x4]          ; 00598b80
    FXCH ST2                            ; 00598b83
    FADD float ptr [EAX + 0x8]          ; 00598b85
    FXCH                                ; 00598b88
    FSTP float ptr [ESP + 0x4]          ; 00598b8a
    FXCH                                ; 00598b8e
    FSTP float ptr [ESP + 0x8]          ; 00598b90
    FSTP float ptr [ESP + 0xc]          ; 00598b94
    MOVSD ES:EDI,ESI                    ; 00598b98
    MOVSD ES:EDI,ESI                    ; 00598b99
    MOVSD ES:EDI,ESI                    ; 00598b9a
    LEA EDX,[EBX + 0x249c]              ; 00598b9b
    FLD float ptr [ESP + 0x28]          ; 00598ba1
    FLD float ptr [ESP + 0x2c]          ; 00598ba5
    FLD float ptr [ESP + 0x30]          ; 00598ba9
    LEA EDI,[ESP + 0x1c]                ; 00598bad
    LEA ESI,[ESP + 0x34]                ; 00598bb1
    FXCH ST2                            ; 00598bb5
    FADD float ptr [EDX]                ; 00598bb7
    FXCH                                ; 00598bb9
    FADD float ptr [EDX + 0x4]          ; 00598bbb
    FXCH ST2                            ; 00598bbe
    FADD float ptr [EDX + 0x8]          ; 00598bc0
    FXCH                                ; 00598bc3
    FSTP float ptr [ESP + 0x34]         ; 00598bc5
    FXCH                                ; 00598bc9
    FSTP float ptr [ESP + 0x38]         ; 00598bcb
    FSTP float ptr [ESP + 0x3c]         ; 00598bcf
    MOVSD ES:EDI,ESI                    ; 00598bd3
    MOVSD ES:EDI,ESI                    ; 00598bd4
    MOVSD ES:EDI,ESI                    ; 00598bd5
    MOV dword ptr [EAX + 0x8],0x0       ; 00598bd6
    MOV ECX,dword ptr [EAX + 0x8]       ; 00598bdd
    MOV dword ptr [EAX + 0x4],ECX       ; 00598be0
    MOV ECX,dword ptr [EAX + 0x4]       ; 00598be3
    MOV dword ptr [EAX],ECX             ; 00598be6
    MOV dword ptr [EDX + 0x8],0x0       ; 00598be8
    LEA EAX,[ESP + 0x1c]                ; 00598bef
    FLD float ptr [EDX + 0x8]           ; 00598bf3
    PUSH EAX                            ; 00598bf6
    FST float ptr [EDX + 0x4]           ; 00598bf7
    PUSH EBX                            ; 00598bfa
    FSTP float ptr [EDX]                ; 00598bfb
    CALL core_charactr.cpp_FUN_0042c230 ; 00598bfd
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00598c02
    PUSH EBX                            ; 00598c05
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30 ; 00598c06
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00598c0b
    LEA EAX,[EBX + 0x158]               ; 00598c0e
    PUSH EAX                            ; 00598c14
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 00598c15
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00598c1a
    PUSH dword ptr [EBP + 0x18]         ; 00598c1d
    PUSH EBX                            ; 00598c20
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 00598c21
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00598c26
    MOV ESP,EBP                         ; 00598c29
    POP EBP                             ; 00598c2b
    POP EDI                             ; 00598c2c
    POP ESI                             ; 00598c2d
    POP EBX                             ; 00598c2e
    RET                                 ; 00598c2f
    PUSH 0x1                            ; 00598c30
        ;   Label: LAB_00598c30
    PUSH 0x0                            ; 00598c32
    PUSH ESI                            ; 00598c34
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00598c35
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00598c3a
    PUSH EBX                            ; 00598c3d
    PUSH 0x5d9839                       ; 00598c3e | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x005f1690]                ; 00598c43 | g_CConsolePtr
    PUSH EAX                            ; 00598c48 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00598c49
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    JMP 0x00598b09                      ; 00598c4e
        ;   XREF to: 00598b09 (UNCONDITIONAL_JUMP)  ; LAB_00598b09
    PUSH 0x1                            ; 00598c53
        ;   Label: LAB_00598c53
    PUSH 0x2                            ; 00598c55
    JMP 0x00598b03                      ; 00598c57
        ;   XREF to: 00598b03 (UNCONDITIONAL_JUMP)  ; LAB_00598b03
    JBE 0x00598c53                      ; 00598c5c
        ;   XREF to: 00598c53 (CONDITIONAL_JUMP)  ; LAB_00598c53
        ;   Label: LAB_00598c5c
    CMP EAX,0x3                         ; 00598c5e
    JZ 0x00598c30                       ; 00598c61
        ;   XREF to: 00598c30 (CONDITIONAL_JUMP)  ; LAB_00598c30
    PUSH 0x1                            ; 00598c63
        ;   Label: LAB_00598c63
    PUSH 0x0                            ; 00598c65
    LEA EAX,[EBX + 0x158]               ; 00598c67
    PUSH EAX                            ; 00598c6d
    JMP 0x00598b04                      ; 00598c6e
        ;   XREF to: 00598b04 (UNCONDITIONAL_JUMP)  ; LAB_00598b04
    FLD float ptr [EBX + 0xdc90]        ; 00598c73
        ;   Label: LAB_00598c73
    FLD1                                ; 00598c79
    FCOMPP                              ; 00598c7b
    FNSTSW AX                           ; 00598c7d
    SAHF                                ; 00598c7f
    JBE 0x005989fe                      ; 00598c80
        ;   XREF to: 005989fe (CONDITIONAL_JUMP)  ; LAB_005989fe
    PUSH ESI                            ; 00598c86
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00598c87
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00598c8c
    MOV EAX,dword ptr [EAX + 0x24]      ; 00598c8f
    MOV dword ptr [ESP + 0x6c],EAX      ; 00598c92
    CMP EAX,0x6                         ; 00598c96
    JZ 0x00598d8c                       ; 00598c99
        ;   XREF to: 00598d8c (CONDITIONAL_JUMP)  ; LAB_00598d8c
    CMP EAX,0x7                         ; 00598c9f
    JZ 0x00598d8c                       ; 00598ca2
        ;   XREF to: 00598d8c (CONDITIONAL_JUMP)  ; LAB_00598d8c
    CMP dword ptr [ESP + 0x6c],0x0      ; 00598ca8
        ;   Label: LAB_00598ca8
    JZ 0x00598d18                       ; 00598cad
        ;   XREF to: 00598d18 (CONDITIONAL_JUMP)  ; LAB_00598d18
    LEA EAX,[EBX + 0x249c]              ; 00598caf
    PUSH EAX                            ; 00598cb5
    PUSH EBX                            ; 00598cb6
    LEA ESI,[ESP + 0x54]                ; 00598cb7
    LEA EDI,[ESP + 0x18]                ; 00598cbb
    CALL core_actor.cpp_FUN_00408b00    ; 00598cbf
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x54]                ; 00598cc4
    ADD ESP,0x8                         ; 00598cc8
    LEA EAX,[EBX + 0x20]                ; 00598ccb
    MOVSD ES:EDI,ESI                    ; 00598cce
    MOVSD ES:EDI,ESI                    ; 00598ccf
    MOVSD ES:EDI,ESI                    ; 00598cd0
    FLD float ptr [EAX]                 ; 00598cd1
    FLD float ptr [EAX + 0x4]           ; 00598cd3
    FLD float ptr [EAX + 0x8]           ; 00598cd6
    FXCH ST2                            ; 00598cd9
    FADD float ptr [ESP + 0x10]         ; 00598cdb
    FXCH                                ; 00598cdf
    FADD float ptr [ESP + 0x14]         ; 00598ce1
    FXCH ST2                            ; 00598ce5
    FADD float ptr [ESP + 0x18]         ; 00598ce7
    FXCH                                ; 00598ceb
    FSTP float ptr [EAX]                ; 00598ced
    FXCH                                ; 00598cef
    FSTP float ptr [EAX + 0x4]          ; 00598cf1
    FSTP float ptr [EAX + 0x8]          ; 00598cf4
    MOV ECX,dword ptr [EBX + 0xd060]    ; 00598cf7
    TEST ECX,ECX                        ; 00598cfd
    JZ 0x00598d18                       ; 00598cff
        ;   XREF to: 00598d18 (CONDITIONAL_JUMP)  ; LAB_00598d18
    MOV EDX,dword ptr [EAX]             ; 00598d01
    MOV dword ptr [ECX + 0x20],EDX      ; 00598d03
    MOV EDX,dword ptr [EAX + 0x4]       ; 00598d06
    MOV dword ptr [ECX + 0x24],EDX      ; 00598d09
    MOV EDX,dword ptr [EAX + 0x8]       ; 00598d0c
    MOV dword ptr [ECX + 0x28],EDX      ; 00598d0f
    MOV EAX,dword ptr [EAX + 0xc]       ; 00598d12
    MOV dword ptr [ECX + 0x2c],EAX      ; 00598d15
    CMP dword ptr [ESP + 0x6c],0x3      ; 00598d18
        ;   Label: LAB_00598d18
    JNZ 0x00598d6c                      ; 00598d1d
        ;   XREF to: 00598d6c (CONDITIONAL_JUMP)  ; LAB_00598d6c
    LEA EAX,[EBX + 0x158]               ; 00598d1f
    PUSH EAX                            ; 00598d25
    CALL core_motion.cpp_FUN_004fc930   ; 00598d26
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x74],EAX      ; 00598d2b
    FLD float ptr [ESP + 0x74]          ; 00598d2f
    ADD ESP,0x4                         ; 00598d33
    FCOMP double ptr [0x005d9882]       ; 00598d36 | DAT_005d9882
    FNSTSW AX                           ; 00598d3c
    SAHF                                ; 00598d3e
    JNC 0x00598d6c                      ; 00598d3f
        ;   XREF to: 00598d6c (CONDITIONAL_JUMP)  ; LAB_00598d6c
    MOV EDI,dword ptr [EBX + 0xdc94]    ; 00598d41
    PUSH EDI                            ; 00598d47
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 00598d48
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00598d4d
    TEST EAX,EAX                        ; 00598d50
    JNZ 0x00598d6c                      ; 00598d52
        ;   XREF to: 00598d6c (CONDITIONAL_JUMP)  ; LAB_00598d6c
    PUSH 0x5d9863                       ; 00598d54 | = "dog_howl.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00598d59
    PUSH EBX                            ; 00598d5f
    CALL dword ptr [EAX + 0x2c]         ; 00598d60
    ADD ESP,0x8                         ; 00598d63
    MOV dword ptr [EBX + 0xdc94],EAX    ; 00598d66
    LEA EAX,[EBX + 0x158]               ; 00598d6c
        ;   Label: LAB_00598d6c
    PUSH EAX                            ; 00598d72
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 00598d73
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00598d78
    PUSH dword ptr [EBP + 0x18]         ; 00598d7b
    PUSH EBX                            ; 00598d7e
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 00598d7f
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00598d84
    JMP 0x00598b24                      ; 00598d87
        ;   XREF to: 00598b24 (UNCONDITIONAL_JUMP)  ; LAB_00598b24
    CMP dword ptr [ESP + 0x6c],0x7      ; 00598d8c
        ;   Label: LAB_00598d8c
    JNZ 0x00598ca8                      ; 00598d91
        ;   XREF to: 00598ca8 (CONDITIONAL_JUMP)  ; LAB_00598ca8
    FLD float ptr [EBP + 0x18]          ; 00598d97
    FMUL double ptr [0x005d987a]        ; 00598d9a | DAT_005d987a
    FADD float ptr [EBX + 0xdc90]       ; 00598da0
    FST float ptr [EBX + 0xdc90]        ; 00598da6
    FLD1                                ; 00598dac
    FCOMPP                              ; 00598dae
    FNSTSW AX                           ; 00598db0
    SAHF                                ; 00598db2
    JA 0x00598ca8                       ; 00598db3
        ;   XREF to: 00598ca8 (CONDITIONAL_JUMP)  ; LAB_00598ca8
    MOV ECX,dword ptr [EBX + 0xd060]    ; 00598db9
    TEST ECX,ECX                        ; 00598dbf
    JZ 0x00598ca8                       ; 00598dc1
        ;   XREF to: 00598ca8 (CONDITIONAL_JUMP)  ; LAB_00598ca8
    PUSH ECX                            ; 00598dc7
    MOV EDI,dword ptr [0x00600530]      ; 00598dc8 | DAT_00600530
    PUSH EDI                            ; 00598dce | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 00598dcf
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00598dd4
    PUSH 0x1                            ; 00598dd7
    PUSH EBX                            ; 00598dd9
    MOV EAX,[0x00600530]                ; 00598dda | DAT_00600530
    PUSH EAX                            ; 00598ddf | DAT_01d81080
    MOV dword ptr [EBX + 0xd060],0x0    ; 00598de0
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10 ; 00598dea
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 00598def
    JMP 0x00598ca8                      ; 00598df2
        ;   XREF to: 00598ca8 (UNCONDITIONAL_JUMP)  ; LAB_00598ca8

