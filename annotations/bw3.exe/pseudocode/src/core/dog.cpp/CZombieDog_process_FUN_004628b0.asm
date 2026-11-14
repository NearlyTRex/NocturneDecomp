; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dog_cpp_CZombieDog_process_FUN_004628b0(CZombieDog *this_ptr,float delta_time)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00462850 = 00462d29
;   TerminatedCString s_s_confused_while_walking_005bbbe7
;   TerminatedCString s_dog5_wav_005bbc11
;   TerminatedCString s_dog5_wav_005bbc1a
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005bbc23
;   undefined4 DAT_005bbc44
;   undefined4 DAT_005bbc4c
;   undefined4 DAT_005bbc54
;   undefined4 DAT_005bbc5c
;   undefined4 DAT_005de5b8
;   undefined4 DAT_005de5c4
;   CConsole* g_CConsolePtr = 007f7ea4
;   CGore* g_CGorePtr = 01d22e44
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_006045f8
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_00432330
;   core_charactr.cpp_FUN_00433c60
;   core_charactr.cpp_FUN_00434850
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004628b0
        ;   Label: core_dog.cpp_CZombieDog_process_FUN_004628b0
    PUSH ESI                            ; 004628b1
    PUSH EDI                            ; 004628b2
    PUSH EBP                            ; 004628b3
    MOV EBP,ESP                         ; 004628b4
    SUB ESP,0x1ec                       ; 004628b6
    SUB EBP,0x7a                        ; 004628bc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004628bf
    PUSH dword ptr [EBP + 0x92]         ; 004628c5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004628cb
    PUSH EBX                            ; 004628d1
    CALL dword ptr [EAX + 0x148]        ; 004628d2
    ADD ESP,0x8                         ; 004628d8
    TEST EAX,EAX                        ; 004628db
    JNZ 0x004628e7                      ; 004628dd
        ;   XREF to: 004628e7 (CONDITIONAL_JUMP)  ; LAB_004628e7
    LEA ESP,[EBP + 0x7a]                ; 004628df
    POP EBP                             ; 004628e2
    POP EDI                             ; 004628e3
    POP ESI                             ; 004628e4
    POP EBX                             ; 004628e5
    RET                                 ; 004628e6
    PUSH dword ptr [EBP + 0x92]         ; 004628e7
        ;   Label: LAB_004628e7
    PUSH EBX                            ; 004628ed
    CALL core_charactr.cpp_FUN_00433c60 ; 004628ee
        ;   XREF to: 00433c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433c60()
    ADD ESP,0x8                         ; 004628f3
    PUSH 0x0                            ; 004628f6
    PUSH dword ptr [EBP + 0x92]         ; 004628f8
    PUSH EBX                            ; 004628fe
    CALL core_charactr.cpp_FUN_00432330 ; 004628ff
        ;   XREF to: 00432330 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432330()
    LEA EAX,[EBX + 0x249c]              ; 00462904
    MOV dword ptr [EAX + 0x8],0x0       ; 0046290a
    FLD float ptr [EBP + 0x92]          ; 00462911
    MOV EDX,dword ptr [EAX + 0x8]       ; 00462917
    MOV dword ptr [EAX + 0x4],EDX       ; 0046291a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046291d
    MOV dword ptr [EAX],EDX             ; 00462920
    FMUL float ptr [EBX + 0xcdcc]       ; 00462922
    ADD ESP,0xc                         ; 00462928
    LEA ESI,[EBX + 0x158]               ; 0046292b
    FSTP float ptr [EBP + 0x46]         ; 00462931
    FLD float ptr [EBP + 0x46]          ; 00462934
        ;   Label: LAB_00462934
    FLDZ                                ; 00462937
    FCOMPP                              ; 00462939
    FNSTSW AX                           ; 0046293b
    SAHF                                ; 0046293d
    JNC 0x00462959                      ; 0046293e
        ;   XREF to: 00462959 (CONDITIONAL_JUMP)  ; LAB_00462959
    LEA EAX,[EBP + 0x46]                ; 00462940
    PUSH EAX                            ; 00462943
    PUSH ESI                            ; 00462944
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 00462945
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0046294a
    PUSH EAX                            ; 0046294d
    PUSH EBX                            ; 0046294e
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0046294f
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00462954
    JMP 0x00462934                      ; 00462957
        ;   XREF to: 00462934 (UNCONDITIONAL_JUMP)  ; LAB_00462934
    PUSH ESI                            ; 00462959
        ;   Label: LAB_00462959
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0046295a
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    FLD float ptr [EBP + 0x92]          ; 0046295f
    FMUL float ptr [EBX + 0xcdcc]       ; 00462965
    FLD float ptr [EBX + 0x24a4]        ; 0046296b
    ADD ESP,0x4                         ; 00462971
    MOV ESI,dword ptr [EAX + 0x24]      ; 00462974
    SUB ESP,0x4                         ; 00462977
    FSTP float ptr [EBX + 0x2524]       ; 0046297a
    FSTP float ptr [ESP]                ; 00462980
    PUSH EBX                            ; 00462983
    MOV dword ptr [EBP + 0x62],ESI      ; 00462984
    CALL core_charactr.cpp_FUN_00434850 ; 00462987
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 0046298c
    CMP ESI,0x8                         ; 0046298f
    JNZ 0x004629aa                      ; 00462992
        ;   XREF to: 004629aa (CONDITIONAL_JUMP)  ; LAB_004629aa
    FLD float ptr [EBX + 0x2528]        ; 00462994
    FLD ST0                             ; 0046299a
    FMUL double ptr [0x005bbc44]        ; 0046299c | DAT_005bbc44
    FSTP ST1                            ; 004629a2
    FSTP float ptr [EBX + 0x2528]       ; 004629a4
    PUSH dword ptr [EBP + 0x92]         ; 004629aa
        ;   Label: LAB_004629aa
    PUSH EBX                            ; 004629b0
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 004629b1
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004629b6
    TEST EAX,EAX                        ; 004629b9
    JZ 0x00463445                       ; 004629bb
        ;   XREF to: 00463445 (CONDITIONAL_JUMP)  ; LAB_00463445
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004629c1
    CMP EAX,0x2                         ; 004629c7
    JNC 0x00462bc1                      ; 004629ca
        ;   XREF to: 00462bc1 (CONDITIONAL_JUMP)  ; LAB_00462bc1
    CMP EAX,0x1                         ; 004629d0
    JNZ 0x00462bcc                      ; 004629d3
        ;   XREF to: 00462bcc (CONDITIONAL_JUMP)  ; LAB_00462bcc
    PUSH 0x1                            ; 004629d9
        ;   Label: LAB_004629d9
    PUSH 0x5                            ; 004629db
    LEA EAX,[EBX + 0x158]               ; 004629dd
        ;   Label: LAB_004629dd
    PUSH EAX                            ; 004629e3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004629e4
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004629e9
        ;   Label: LAB_004629e9
    LEA EAX,[EBX + 0x249c]              ; 004629ec
    MOV dword ptr [EAX + 0x8],0x0       ; 004629f2
    MOV EDX,dword ptr [EAX + 0x8]       ; 004629f9
    MOV dword ptr [EAX + 0x4],EDX       ; 004629fc
    MOV EDX,dword ptr [EAX + 0x4]       ; 004629ff
    MOV dword ptr [EAX],EDX             ; 00462a02
    FLD float ptr [EBX + 0xcde0]        ; 00462a04
        ;   Label: caseD_d
    FLDZ                                ; 00462a0a
    FCOMPP                              ; 00462a0c
    FNSTSW AX                           ; 00462a0e
    SAHF                                ; 00462a10
    JNC 0x00462a25                      ; 00462a11
        ;   XREF to: 00462a25 (CONDITIONAL_JUMP)  ; LAB_00462a25
    FLD float ptr [EBX + 0xcde0]        ; 00462a13
    FSUB float ptr [EBP + 0x92]         ; 00462a19
    FSTP float ptr [EBX + 0xcde0]       ; 00462a1f
    PUSH EBX                            ; 00462a25
        ;   Label: LAB_00462a25
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0 ; 00462a26
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00462a2b
    TEST EAX,EAX                        ; 00462a2e
    JZ 0x00462b68                       ; 00462a30
        ;   XREF to: 00462b68 (CONDITIONAL_JUMP)  ; LAB_00462b68
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 00462a36
    TEST EDI,EDI                        ; 00462a3c
    JZ 0x00462a6a                       ; 00462a3e
        ;   XREF to: 00462a6a (CONDITIONAL_JUMP)  ; LAB_00462a6a
    PUSH EDI                            ; 00462a40
    MOV EDX,dword ptr [EDI + 0x154]     ; 00462a41
    CALL dword ptr [EDX + 0xf4]         ; 00462a47
    ADD ESP,0x4                         ; 00462a4d
    CMP EAX,EBX                         ; 00462a50
    JNZ 0x00462a6a                      ; 00462a52
        ;   XREF to: 00462a6a (CONDITIONAL_JUMP)  ; LAB_00462a6a
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00462a54
    PUSH EAX                            ; 00462a5a
    MOV EDX,dword ptr [0x00603b28]      ; 00462a5b | g_CDemonSetPtr
    PUSH EDX                            ; 00462a61 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00462a62
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00462a67
    PUSH dword ptr [EBP + 0x92]         ; 00462a6a
        ;   Label: LAB_00462a6a
    PUSH EBX                            ; 00462a70
    LEA ESI,[EBX + 0x2518]              ; 00462a71
    CALL core_charactr.cpp_FUN_0042c1e0 ; 00462a77
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 00462a7c
    FMUL float ptr [EBP + 0x92]         ; 00462a7e
    FLD float ptr [ESI + 0x4]           ; 00462a84
    FMUL float ptr [EBP + 0x92]         ; 00462a87
    FLD float ptr [ESI + 0x8]           ; 00462a8d
    FMUL float ptr [EBP + 0x92]         ; 00462a90
    LEA EDI,[EBP + -0x22]               ; 00462a96
    LEA ESI,[EBP + 0xffffff7e]          ; 00462a99
    FXCH ST2                            ; 00462a9f
    FSTP float ptr [EBP + 0xffffff7e]   ; 00462aa1
    FSTP float ptr [EBP + -0x7e]        ; 00462aa7
    FSTP float ptr [EBP + -0x7a]        ; 00462aaa
    MOVSD ES:EDI,ESI                    ; 00462aad
    MOVSD ES:EDI,ESI                    ; 00462aae
    MOVSD ES:EDI,ESI                    ; 00462aaf
    LEA EDX,[EBX + 0x250c]              ; 00462ab0
    FLD float ptr [EBP + -0x22]         ; 00462ab6
    FLD float ptr [EBP + -0x1e]         ; 00462ab9
    FLD float ptr [EBP + -0x1a]         ; 00462abc
    LEA EDI,[EBP + 0xffffff5a]          ; 00462abf
    LEA ESI,[EBP + 0xffffff2a]          ; 00462ac5
    FXCH ST2                            ; 00462acb
    FADD float ptr [EDX]                ; 00462acd
    FXCH                                ; 00462acf
    FADD float ptr [EDX + 0x4]          ; 00462ad1
    FXCH ST2                            ; 00462ad4
    FADD float ptr [EDX + 0x8]          ; 00462ad6
    FXCH                                ; 00462ad9
    FSTP float ptr [EBP + 0xffffff2a]   ; 00462adb
    FXCH                                ; 00462ae1
    FSTP float ptr [EBP + 0xffffff2e]   ; 00462ae3
    FSTP float ptr [EBP + 0xffffff32]   ; 00462ae9
    MOVSD ES:EDI,ESI                    ; 00462aef
    MOVSD ES:EDI,ESI                    ; 00462af0
    MOVSD ES:EDI,ESI                    ; 00462af1
    LEA EAX,[EBX + 0x249c]              ; 00462af2
    FLD float ptr [EBP + 0xffffff5a]    ; 00462af8
    FLD float ptr [EBP + 0xffffff5e]    ; 00462afe
    FLD float ptr [EBP + 0xffffff62]    ; 00462b04
    LEA EDI,[EBP + 0xffffff1e]          ; 00462b0a
    LEA ESI,[EBP + -0x46]               ; 00462b10
    FXCH ST2                            ; 00462b13
    FADD float ptr [EAX]                ; 00462b15
    FXCH                                ; 00462b17
    FADD float ptr [EAX + 0x4]          ; 00462b19
    FXCH ST2                            ; 00462b1c
    FADD float ptr [EAX + 0x8]          ; 00462b1e
    FXCH                                ; 00462b21
    FSTP float ptr [EBP + -0x46]        ; 00462b23
    FXCH                                ; 00462b26
    FSTP float ptr [EBP + -0x42]        ; 00462b28
    FSTP float ptr [EBP + -0x3e]        ; 00462b2b
    MOVSD ES:EDI,ESI                    ; 00462b2e
    MOVSD ES:EDI,ESI                    ; 00462b2f
    MOVSD ES:EDI,ESI                    ; 00462b30
    MOV dword ptr [EDX + 0x8],0x0       ; 00462b31
    MOV ECX,dword ptr [EDX + 0x8]       ; 00462b38
    MOV dword ptr [EDX + 0x4],ECX       ; 00462b3b
    MOV ECX,dword ptr [EDX + 0x4]       ; 00462b3e
    MOV dword ptr [EDX],ECX             ; 00462b41
    MOV dword ptr [EAX + 0x8],0x0       ; 00462b43
    ADD ESP,0x8                         ; 00462b4a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00462b4d
    MOV dword ptr [EAX + 0x4],EDX       ; 00462b50
    MOV EDX,dword ptr [EAX + 0x4]       ; 00462b53
    MOV dword ptr [EAX],EDX             ; 00462b56
    LEA EAX,[EBP + 0xffffff1e]          ; 00462b58
    PUSH EAX                            ; 00462b5e
    PUSH EBX                            ; 00462b5f
    CALL core_charactr.cpp_FUN_0042c230 ; 00462b60
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00462b65
    PUSH EBX                            ; 00462b68
        ;   Label: LAB_00462b68
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30 ; 00462b69
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00462b6e
    LEA EAX,[EBX + 0x158]               ; 00462b71
    PUSH EAX                            ; 00462b77
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 00462b78
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00462b7d
    PUSH dword ptr [EBP + 0x92]         ; 00462b80
    PUSH EBX                            ; 00462b86
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 00462b87
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00462b8c
    LEA ESP,[EBP + 0x7a]                ; 00462b8f
    POP EBP                             ; 00462b92
    POP EDI                             ; 00462b93
    POP ESI                             ; 00462b94
    POP EBX                             ; 00462b95
    RET                                 ; 00462b96
    PUSH 0x1                            ; 00462b97
        ;   Label: LAB_00462b97
    PUSH 0x0                            ; 00462b99
    LEA EAX,[EBX + 0x158]               ; 00462b9b
    PUSH EAX                            ; 00462ba1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00462ba2
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00462ba7
    PUSH EBX                            ; 00462baa
    PUSH 0x5bbbe7                       ; 00462bab | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x005f1690]      ; 00462bb0 | g_CConsolePtr
    PUSH ESI                            ; 00462bb6 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00462bb7
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    JMP 0x004629e9                      ; 00462bbc
        ;   XREF to: 004629e9 (UNCONDITIONAL_JUMP)  ; LAB_004629e9
    JBE 0x004629d9                      ; 00462bc1
        ;   XREF to: 004629d9 (CONDITIONAL_JUMP)  ; LAB_004629d9
        ;   Label: LAB_00462bc1
    CMP EAX,0x3                         ; 00462bc7
    JZ 0x00462b97                       ; 00462bca
        ;   XREF to: 00462b97 (CONDITIONAL_JUMP)  ; LAB_00462b97
    PUSH 0x1                            ; 00462bcc
        ;   Label: LAB_00462bcc
    PUSH 0x0                            ; 00462bce
    JMP 0x004629dd                      ; 00462bd0
        ;   XREF to: 004629dd (UNCONDITIONAL_JUMP)  ; LAB_004629dd
    LEA EAX,[EBP + 0xfffffe8e]          ; 00462bd5
        ;   Label: caseD_9
    PUSH EAX                            ; 00462bdb
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00462bdc
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EAX,dword ptr [EBX + 0xce5c]    ; 00462be1
    ADD ESP,0x4                         ; 00462be7
    MOV dword ptr [EBP + 0xfffffe92],EAX ; 00462bea
    MOV dword ptr [EBP + 0xfffffec2],EBX ; 00462bf0
    MOV dword ptr [EBP + 0xfffffec6],EBX ; 00462bf6
    LEA EAX,[EBP + 0xfffffe8e]          ; 00462bfc
    MOV EDX,dword ptr [EBX + 0xd058]    ; 00462c02
    PUSH EAX                            ; 00462c08
    LEA EAX,[EDX*0x4 + 0x0]             ; 00462c09
    SUB EAX,EDX                         ; 00462c10
    SHL EAX,0x4                         ; 00462c12
    LEA EDX,[EBX + 0xfd8]               ; 00462c15
    ADD EAX,EDX                         ; 00462c1b
    PUSH 0x3f333333                     ; 00462c1d
    PUSH EAX                            ; 00462c22
    PUSH 0x2cfd900                      ; 00462c23 | DAT_02cfd900
    LEA ESI,[EBP + -0xa]                ; 00462c28
    LEA EDI,[EBP + -0x3a]               ; 00462c2b
    CALL core_xform.cpp_FUN_00583260    ; 00462c2e
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00462c33
    LEA EAX,[EBP + -0x3a]               ; 00462c36
    LEA ESI,[EBP + -0xa]                ; 00462c39
    PUSH EAX                            ; 00462c3c
    MOVSD ES:EDI,ESI                    ; 00462c3d
    MOVSD ES:EDI,ESI                    ; 00462c3e
    MOVSD ES:EDI,ESI                    ; 00462c3f
    PUSH EBX                            ; 00462c40
    LEA ESI,[EBP + -0x6a]               ; 00462c41
    CALL core_actor.cpp_FUN_00408b80    ; 00462c44
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00462c49
    LEA EAX,[EBP + -0x2e]               ; 00462c4c
    PUSH EAX                            ; 00462c4f
    LEA EDI,[EBP + -0x2e]               ; 00462c50
    LEA ESI,[EBP + -0x6a]               ; 00462c53
    PUSH EBX                            ; 00462c56
    MOVSD ES:EDI,ESI                    ; 00462c57
    MOVSD ES:EDI,ESI                    ; 00462c58
    MOVSD ES:EDI,ESI                    ; 00462c59
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 00462c5a
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00462c5f
    MOV EAX,dword ptr [EBX + 0xd05c]    ; 00462c62
    PUSH EAX                            ; 00462c68
    MOV EDX,dword ptr [0x006045f8]      ; 00462c69 | DAT_006045f8
    PUSH EDX                            ; 00462c6f
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0 ; 00462c70
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00462c75
    TEST EAX,EAX                        ; 00462c78
    JNZ 0x00462a04                      ; 00462c7a
        ;   XREF to: 00462a04 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x5bbc11                       ; 00462c80 | = "dog5.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00462c85
    PUSH EBX                            ; 00462c8b
    CALL dword ptr [EAX + 0x2c]         ; 00462c8c
    ADD ESP,0x8                         ; 00462c8f
    MOV dword ptr [EBX + 0xd05c],EAX    ; 00462c92
    JMP 0x00462a04                      ; 00462c98
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV ECX,dword ptr [EBX + 0xcdd0]    ; 00462c9d
        ;   Label: caseD_13
    TEST ECX,ECX                        ; 00462ca3
    JNZ 0x00462a04                      ; 00462ca5
        ;   XREF to: 00462a04 (CONDITIONAL_JUMP)  ; caseD_12
    CMP dword ptr [EBX + 0xdc],0x0      ; 00462cab
    JNZ 0x00462a04                      ; 00462cb2
        ;   XREF to: 00462a04 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH ECX                            ; 00462cb8
    LEA EAX,[EBX + 0x158]               ; 00462cb9
    PUSH EAX                            ; 00462cbf
    LEA ESI,[EBP + 0xffffff66]          ; 00462cc0
    LEA EDI,[EBP + 0xffffff4e]          ; 00462cc6
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0 ; 00462ccc
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 00462cd1
    LEA EAX,[EBP + 0xffffff4e]          ; 00462cd4
    LEA ESI,[EBP + 0xffffff66]          ; 00462cda
    PUSH EAX                            ; 00462ce0
    MOVSD ES:EDI,ESI                    ; 00462ce1
    MOVSD ES:EDI,ESI                    ; 00462ce2
    MOVSD ES:EDI,ESI                    ; 00462ce3
    PUSH EBX                            ; 00462ce4
    LEA ESI,[EBP + 0xffffff72]          ; 00462ce5
    LEA EDI,[EBP + 0xffffff42]          ; 00462ceb
    CALL core_actor.cpp_FUN_00408b80    ; 00462cf1
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00462cf6
    LEA ESI,[EBP + 0xffffff72]          ; 00462cf9
    LEA EAX,[EBP + 0xffffff42]          ; 00462cff
    PUSH 0x0                            ; 00462d05
    MOVSD ES:EDI,ESI                    ; 00462d07
    MOVSD ES:EDI,ESI                    ; 00462d08
    MOVSD ES:EDI,ESI                    ; 00462d09
    PUSH EAX                            ; 00462d0a
    MOV EDI,dword ptr [0x005fed24]      ; 00462d0b | g_CGorePtr
    PUSH EDI                            ; 00462d11
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 00462d12
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 00462d17
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 00462d1a
    JMP 0x00462a04                      ; 00462d24
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,[0x01d5ba14]                ; 00462d29 | DAT_01d5ba14
        ;   Label: caseD_0
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00462d2e
    LEA EDI,[EBP + -0x76]               ; 00462d35
    LEA ESI,[EBP + 0xfffffeee]          ; 00462d38
    FLD float ptr [EDX + 0x20]          ; 00462d3e
    FLD float ptr [EDX + 0x24]          ; 00462d41
    LEA EAX,[EBX + 0x20]                ; 00462d44
    FLD float ptr [EDX + 0x28]          ; 00462d47
    FXCH ST2                            ; 00462d4a
    FSUB float ptr [EAX]                ; 00462d4c
    FXCH                                ; 00462d4e
    FSUB float ptr [EAX + 0x4]          ; 00462d50
    FXCH ST2                            ; 00462d53
    FSUB float ptr [EAX + 0x8]          ; 00462d55
    FXCH                                ; 00462d58
    FSTP float ptr [EBP + 0xfffffeee]   ; 00462d5a
    FXCH                                ; 00462d60
    FSTP float ptr [EBP + 0xfffffef2]   ; 00462d62
    FSTP float ptr [EBP + 0xfffffef6]   ; 00462d68
    LEA EAX,[EBP + -0x76]               ; 00462d6e
    MOVSD ES:EDI,ESI                    ; 00462d71
    MOVSD ES:EDI,ESI                    ; 00462d72
    MOVSD ES:EDI,ESI                    ; 00462d73
    PUSH EAX                            ; 00462d74
    LEA ESI,[EBP + 0xffffff12]          ; 00462d75
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 00462d7b
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    FLD float ptr [EBP + -0x72]         ; 00462d80
    FMUL ST0                            ; 00462d83
    FLD float ptr [EBP + -0x76]         ; 00462d85
    FMUL ST0                            ; 00462d88
    FADDP                               ; 00462d8a
    FLD float ptr [EBP + -0x6e]         ; 00462d8c
    FMUL ST0                            ; 00462d8f
    LEA EDI,[EBP + 0xfffffeca]          ; 00462d91
    LEA ESI,[EBP + 0xffffff12]          ; 00462d97
    ADD ESP,0x4                         ; 00462d9d
    MOV EDX,dword ptr [0x01d1a0a4]      ; 00462da0 | DAT_01d1a0a4
    SUB ESP,0x4                         ; 00462da6
    FADDP                               ; 00462da9
    MOVSD ES:EDI,ESI                    ; 00462dab
    MOVSD ES:EDI,ESI                    ; 00462dac
    MOVSD ES:EDI,ESI                    ; 00462dad
    FSTP float ptr [EBP + 0x4a]         ; 00462dae
    MOV EAX,dword ptr [EBP + 0x4a]      ; 00462db1
    FLD float ptr [EBP + 0xfffffece]    ; 00462db4
    SAR EAX,0x1                         ; 00462dba
    FSUB float ptr [EBX + 0x34]         ; 00462dbc
    ADD EAX,EDX                         ; 00462dbf
    FSTP float ptr [ESP]                ; 00462dc1
    MOV dword ptr [EBP + 0x5e],EAX      ; 00462dc4
    MOV dword ptr [EBP + 0x56],EAX      ; 00462dc7
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 00462dca
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00462dcf
    FLD float ptr [EBP + 0x76]          ; 00462dd2
    FABS                                ; 00462dd5
    ADD ESP,0x4                         ; 00462dd7
    FCOMP double ptr [0x005bbc54]       ; 00462dda | DAT_005bbc54
    FNSTSW AX                           ; 00462de0
    SAHF                                ; 00462de2
    JNC 0x00462e6a                      ; 00462de3
        ;   XREF to: 00462e6a (CONDITIONAL_JUMP)  ; LAB_00462e6a
    FLD float ptr [EBX + 0xcde0]        ; 00462de9
    FLDZ                                ; 00462def
    FCOMPP                              ; 00462df1
    FNSTSW AX                           ; 00462df3
    SAHF                                ; 00462df5
    JNC 0x00462e12                      ; 00462df6
        ;   XREF to: 00462e12 (CONDITIONAL_JUMP)  ; LAB_00462e12
    FLD float ptr [0x005de5b8]          ; 00462df8 | DAT_005de5b8
    FADD double ptr [0x005bbc5c]        ; 00462dfe | DAT_005bbc5c
    FLD float ptr [EBP + 0x5e]          ; 00462e04
    FCOMPP                              ; 00462e07
    FNSTSW AX                           ; 00462e09
    SAHF                                ; 00462e0b
    JC 0x00462a04                       ; 00462e0c
        ;   XREF to: 00462a04 (CONDITIONAL_JUMP)  ; caseD_12
    FLD float ptr [EBX + 0xcde0]        ; 00462e12
        ;   Label: LAB_00462e12
    FLDZ                                ; 00462e18
    FCOMPP                              ; 00462e1a
    FNSTSW AX                           ; 00462e1c
    SAHF                                ; 00462e1e
    JC 0x00462e6a                       ; 00462e1f
        ;   XREF to: 00462e6a (CONDITIONAL_JUMP)  ; LAB_00462e6a
    FLD float ptr [EBP + 0x56]          ; 00462e21
    FCOMP float ptr [0x005de5b8]        ; 00462e24 | DAT_005de5b8
    FNSTSW AX                           ; 00462e2a
    SAHF                                ; 00462e2c
    JA 0x00462e6a                       ; 00462e2d
        ;   XREF to: 00462e6a (CONDITIONAL_JUMP)  ; LAB_00462e6a
    PUSH 0x64                           ; 00462e2f
    PUSH 0x0                            ; 00462e31
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00462e33
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    MOV EDX,EAX                         ; 00462e38
    ADD ESP,0x8                         ; 00462e3a
    LEA EAX,[EBX + 0x158]               ; 00462e3d
    CMP EDX,0x32                        ; 00462e43
    JGE 0x00462e64                      ; 00462e46
        ;   XREF to: 00462e64 (CONDITIONAL_JUMP)  ; LAB_00462e64
    PUSH 0x1                            ; 00462e48
    PUSH 0xb                            ; 00462e4a
    PUSH EAX                            ; 00462e4c
        ;   Label: LAB_00462e4c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00462e4d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00462e52
    MOV dword ptr [EBX + 0xcde0],0x40200000 ; 00462e55
    JMP 0x00462a04                      ; 00462e5f
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 00462e64
        ;   Label: LAB_00462e64
    PUSH 0xc                            ; 00462e66
    JMP 0x00462e4c                      ; 00462e68
        ;   XREF to: 00462e4c (UNCONDITIONAL_JUMP)  ; LAB_00462e4c
    PUSH dword ptr [EBP + 0x92]         ; 00462e6a
        ;   Label: LAB_00462e6a
    PUSH EBX                            ; 00462e70
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 00462e71
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    LEA EDX,[EBX + 0x158]               ; 00462e76
    ADD ESP,0x8                         ; 00462e7c
    MOV dword ptr [EBP + 0x6e],EDX      ; 00462e7f
    TEST EAX,EAX                        ; 00462e82
    JZ 0x00462edb                       ; 00462e84
        ;   XREF to: 00462edb (CONDITIONAL_JUMP)  ; LAB_00462edb
    PUSH 0x64                           ; 00462e86
    PUSH 0x0                            ; 00462e88
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00462e8a
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00462e8f
    CMP EAX,0x21                        ; 00462e92
    JL 0x00462eb1                       ; 00462e95
        ;   XREF to: 00462eb1 (CONDITIONAL_JUMP)  ; LAB_00462eb1
    CMP EAX,0x42                        ; 00462e97
    JGE 0x00462ec6                      ; 00462e9a
        ;   XREF to: 00462ec6 (CONDITIONAL_JUMP)  ; LAB_00462ec6
    PUSH 0x1                            ; 00462e9c
    PUSH 0x6                            ; 00462e9e
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00462ea0
    PUSH EDX                            ; 00462ea3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00462ea4
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00462ea9
    JMP 0x00462a04                      ; 00462eac
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 00462eb1
        ;   Label: LAB_00462eb1
    PUSH 0x5                            ; 00462eb3
    MOV ECX,dword ptr [EBP + 0x6e]      ; 00462eb5
    PUSH ECX                            ; 00462eb8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00462eb9
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00462ebe
    JMP 0x00462a04                      ; 00462ec1
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 00462ec6
        ;   Label: LAB_00462ec6
    PUSH 0x7                            ; 00462ec8
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00462eca
    PUSH EAX                            ; 00462ecd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00462ece
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00462ed3
    JMP 0x00462a04                      ; 00462ed6
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH dword ptr [EBP + 0x92]         ; 00462edb
        ;   Label: LAB_00462edb
    MOV EAX,dword ptr [EBX + 0x154]     ; 00462ee1
    PUSH EBX                            ; 00462ee7
    CALL dword ptr [EAX + 0x144]        ; 00462ee8
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 00462eee
    ADD ESP,0x8                         ; 00462ef4
    TEST ECX,ECX                        ; 00462ef7
    JZ 0x00462a04                       ; 00462ef9
        ;   XREF to: 00462a04 (CONDITIONAL_JUMP)  ; caseD_12
    LEA EDI,[EBP + 0xfffffee2]          ; 00462eff
    MOV EDX,ECX                         ; 00462f05
    LEA ESI,[EBP + 0x1a]                ; 00462f07
    LEA EAX,[EBX + 0x20]                ; 00462f0a
    FLD float ptr [EDX + 0x20]          ; 00462f0d
    FLD float ptr [EDX + 0x24]          ; 00462f10
    FLD float ptr [EDX + 0x28]          ; 00462f13
    FXCH ST2                            ; 00462f16
    FSUB float ptr [EAX]                ; 00462f18
    FXCH                                ; 00462f1a
    FSUB float ptr [EAX + 0x4]          ; 00462f1c
    FXCH ST2                            ; 00462f1f
    FSUB float ptr [EAX + 0x8]          ; 00462f21
    FXCH                                ; 00462f24
    FSTP float ptr [EBP + 0x1a]         ; 00462f26
    FXCH                                ; 00462f29
    FSTP float ptr [EBP + 0x1e]         ; 00462f2b
    FSTP float ptr [EBP + 0x22]         ; 00462f2e
    MOVSD ES:EDI,ESI                    ; 00462f31
    MOVSD ES:EDI,ESI                    ; 00462f32
    MOVSD ES:EDI,ESI                    ; 00462f33
    FLD float ptr [EBP + 0xfffffee6]    ; 00462f34
    FMUL ST0                            ; 00462f3a
    FLD float ptr [EBP + 0xfffffee2]    ; 00462f3c
    FMUL ST0                            ; 00462f42
    FADDP                               ; 00462f44
    FLD float ptr [EBP + 0xfffffeea]    ; 00462f46
    FMUL ST0                            ; 00462f4c
    FADDP                               ; 00462f4e
    FSTP float ptr [EBP + 0x4e]         ; 00462f50
    MOV EAX,dword ptr [EBP + 0x4e]      ; 00462f53
    MOV ESI,dword ptr [0x01d1a0a4]      ; 00462f56 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 00462f5c
    ADD EAX,ESI                         ; 00462f5e
    MOV dword ptr [EBP + 0x66],EAX      ; 00462f60
    FLD float ptr [EBP + 0x66]          ; 00462f63
    FCOMP float ptr [0x005de5c4]        ; 00462f66 | DAT_005de5c4
    FNSTSW AX                           ; 00462f6c
    SAHF                                ; 00462f6e
    JC 0x00462fbc                       ; 00462f6f
        ;   XREF to: 00462fbc (CONDITIONAL_JUMP)  ; LAB_00462fbc
    PUSH 0x1                            ; 00462f71
    PUSH 0x8                            ; 00462f73
    MOV EDI,dword ptr [EBP + 0x6e]      ; 00462f75
    PUSH EDI                            ; 00462f78
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00462f79
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00462f79
    ADD ESP,0xc                         ; 00462f7e
    MOV ESI,dword ptr [EBX + 0xd05c]    ; 00462f81
    PUSH ESI                            ; 00462f87
    MOV EDI,dword ptr [0x006045f8]      ; 00462f88 | DAT_006045f8
    PUSH EDI                            ; 00462f8e
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0 ; 00462f8f
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00462f94
    TEST EAX,EAX                        ; 00462f97
    JNZ 0x00462a04                      ; 00462f99
        ;   XREF to: 00462a04 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x5bbc1a                       ; 00462f9f | = "dog5.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00462fa4
    PUSH EBX                            ; 00462faa
    CALL dword ptr [EAX + 0x2c]         ; 00462fab
    ADD ESP,0x8                         ; 00462fae
    MOV dword ptr [EBX + 0xd05c],EAX    ; 00462fb1
    JMP 0x00462a04                      ; 00462fb7
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x64                           ; 00462fbc
        ;   Label: LAB_00462fbc
    PUSH 0x0                            ; 00462fbe
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00462fc0
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00462fc5
    CMP EAX,0x21                        ; 00462fc8
    JL 0x00462fdc                       ; 00462fcb
        ;   XREF to: 00462fdc (CONDITIONAL_JUMP)  ; LAB_00462fdc
    CMP EAX,0x42                        ; 00462fcd
    JGE 0x00462fe6                      ; 00462fd0
        ;   XREF to: 00462fe6 (CONDITIONAL_JUMP)  ; LAB_00462fe6
    PUSH 0x1                            ; 00462fd2
    PUSH 0x6                            ; 00462fd4
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00462fd6
    PUSH EDX                            ; 00462fd9
    JMP 0x00462f79                      ; 00462fda
        ;   XREF to: 00462f79 (UNCONDITIONAL_JUMP)  ; LAB_00462f79
    PUSH 0x1                            ; 00462fdc
        ;   Label: LAB_00462fdc
    PUSH 0x5                            ; 00462fde
    MOV ECX,dword ptr [EBP + 0x6e]      ; 00462fe0
    PUSH ECX                            ; 00462fe3
    JMP 0x00462f79                      ; 00462fe4
        ;   XREF to: 00462f79 (UNCONDITIONAL_JUMP)  ; LAB_00462f79
    PUSH 0x1                            ; 00462fe6
        ;   Label: LAB_00462fe6
    PUSH 0x7                            ; 00462fe8
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00462fea
    PUSH EAX                            ; 00462fed
    JMP 0x00462f79                      ; 00462fee
        ;   XREF to: 00462f79 (UNCONDITIONAL_JUMP)  ; LAB_00462f79
    PUSH dword ptr [EBP + 0x92]         ; 00462ff0
        ;   Label: caseD_5
    MOV EAX,dword ptr [EBX + 0x154]     ; 00462ff6
    PUSH EBX                            ; 00462ffc
    CALL dword ptr [EAX + 0x144]        ; 00462ffd
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 00463003
    ADD ESP,0x8                         ; 00463009
    TEST ECX,ECX                        ; 0046300c
    JZ 0x004631e5                       ; 0046300e
        ;   XREF to: 004631e5 (CONDITIONAL_JUMP)  ; LAB_004631e5
    LEA EDX,[EBX + 0x20]                ; 00463014
    LEA EDI,[EBP + 0x26]                ; 00463017
    LEA ESI,[EBP + -0x16]               ; 0046301a
    FLD float ptr [EDX]                 ; 0046301d
    FLD float ptr [EDX + 0x4]           ; 0046301f
    FLD float ptr [EDX + 0x8]           ; 00463022
    FXCH ST2                            ; 00463025
    FSUB float ptr [ECX + 0x20]         ; 00463027
    FXCH                                ; 0046302a
    FSUB float ptr [ECX + 0x24]         ; 0046302c
    FXCH ST2                            ; 0046302f
    FSUB float ptr [ECX + 0x28]         ; 00463031
    FXCH                                ; 00463034
    FSTP float ptr [EBP + -0x16]        ; 00463036
    FXCH                                ; 00463039
    FSTP float ptr [EBP + -0x12]        ; 0046303b
    FSTP float ptr [EBP + -0xe]         ; 0046303e
    MOVSD ES:EDI,ESI                    ; 00463041
    MOVSD ES:EDI,ESI                    ; 00463042
    MOVSD ES:EDI,ESI                    ; 00463043
    FLD float ptr [EBP + 0x2a]          ; 00463044
    FMUL ST0                            ; 00463047
    FLD float ptr [EBP + 0x26]          ; 00463049
    FMUL ST0                            ; 0046304c
    FADDP                               ; 0046304e
    FLD float ptr [EBP + 0x2e]          ; 00463050
    FMUL ST0                            ; 00463053
    FADDP                               ; 00463055
    FSQRT                               ; 00463057
    FCOMP float ptr [0x005de5c4]        ; 00463059 | DAT_005de5c4
    FNSTSW AX                           ; 0046305f
    SAHF                                ; 00463061
    JBE 0x00463083                      ; 00463062
        ;   XREF to: 00463083 (CONDITIONAL_JUMP)  ; LAB_00463083
    MOV ESI,dword ptr [EBP + 0x62]      ; 00463064
    CMP ESI,0x5                         ; 00463067
    JNZ 0x004632c3                      ; 0046306a
        ;   XREF to: 004632c3 (CONDITIONAL_JUMP)  ; LAB_004632c3
    PUSH 0x1                            ; 00463070
        ;   Label: LAB_00463070
    PUSH 0x8                            ; 00463072
    LEA EAX,[EBX + 0x158]               ; 00463074
    PUSH EAX                            ; 0046307a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0046307b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00463080
    PUSH 0x3e32b8c2                     ; 00463083
        ;   Label: LAB_00463083
    FLD float ptr [0x005de5b8]          ; 00463088 | DAT_005de5b8
    PUSH 0x3fc00000                     ; 0046308e
    LEA EAX,[EBX + 0x249c]              ; 00463093
    XOR EDX,EDX                         ; 00463099
    FADD double ptr [0x005bbc4c]        ; 0046309b | DAT_005bbc4c
    MOV dword ptr [EAX + 0x8],0x0       ; 004630a1
    FSTP float ptr [EBP + 0x5a]         ; 004630a8
    MOV ECX,dword ptr [EAX + 0x8]       ; 004630ab
    MOV dword ptr [EAX + 0x4],ECX       ; 004630ae
    MOV ECX,dword ptr [EAX + 0x4]       ; 004630b1
    MOV dword ptr [EAX],ECX             ; 004630b4
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004630b6
    MOV dword ptr [EBP + 0xfffffefa],EDX ; 004630b9
    MOV dword ptr [EBP + 0xffffff02],EAX ; 004630bf
    LEA EAX,[EBP + 0xfffffefa]          ; 004630c5
    MOV dword ptr [EBP + 0xfffffefe],EDX ; 004630cb
    PUSH EAX                            ; 004630d1
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004630d2
    PUSH EAX                            ; 004630d8
    MOV EDX,dword ptr [EAX + 0x154]     ; 004630d9
    CALL dword ptr [EDX + 0xc4]         ; 004630df
    ADD ESP,0x4                         ; 004630e5
    PUSH EAX                            ; 004630e8
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004630e9
    ADD EAX,0x20                        ; 004630ef
    PUSH EAX                            ; 004630f2
    PUSH EBX                            ; 004630f3
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 004630f4
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    MOV EDX,EAX                         ; 004630f9
    LEA EAX,[EBX + 0x158]               ; 004630fb
    ADD ESP,0x18                        ; 00463101
    MOV dword ptr [EBP + 0x6a],EAX      ; 00463104
    TEST EDX,EDX                        ; 00463107
    JL 0x004632da                       ; 00463109
        ;   XREF to: 004632da (CONDITIONAL_JUMP)  ; LAB_004632da
    LEA EAX,[EBX + 0x20]                ; 0046310f
    JLE 0x00463326                      ; 00463112
        ;   XREF to: 00463326 (CONDITIONAL_JUMP)  ; LAB_00463326
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 00463118
    LEA EDI,[EBP + -0x52]               ; 0046311e
    LEA ESI,[EBP + 0x2]                 ; 00463121
    FLD float ptr [EDX + 0x20]          ; 00463124
    FLD float ptr [EDX + 0x24]          ; 00463127
    FLD float ptr [EDX + 0x28]          ; 0046312a
    FXCH ST2                            ; 0046312d
    FSUB float ptr [EAX]                ; 0046312f
    FXCH                                ; 00463131
    FSUB float ptr [EAX + 0x4]          ; 00463133
    FXCH ST2                            ; 00463136
    FSUB float ptr [EAX + 0x8]          ; 00463138
    FXCH                                ; 0046313b
    FSTP float ptr [EBP + 0x2]          ; 0046313d
    FXCH                                ; 00463140
    FSTP float ptr [EBP + 0x6]          ; 00463142
    FSTP float ptr [EBP + 0xa]          ; 00463145
    LEA EAX,[EBP + -0x52]               ; 00463148
    MOVSD ES:EDI,ESI                    ; 0046314b
    MOVSD ES:EDI,ESI                    ; 0046314c
    MOVSD ES:EDI,ESI                    ; 0046314d
    PUSH EAX                            ; 0046314e
    LEA ESI,[EBP + 0xe]                 ; 0046314f
    LEA EDI,[EBP + 0x32]                ; 00463152
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 00463155
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xe]                 ; 0046315a
    MOVSD ES:EDI,ESI                    ; 0046315d
    MOVSD ES:EDI,ESI                    ; 0046315e
    MOVSD ES:EDI,ESI                    ; 0046315f
    ADD ESP,0x4                         ; 00463160
    FLD float ptr [EBP + 0x36]          ; 00463163
    FSUB float ptr [EBX + 0x34]         ; 00463166
    SUB ESP,0x4                         ; 00463169
    FSTP float ptr [ESP]                ; 0046316c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0046316f
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00463174
    FLD float ptr [EBP + 0x76]          ; 00463177
    FABS                                ; 0046317a
    ADD ESP,0x4                         ; 0046317c
    FCOMP double ptr [0x005bbc54]       ; 0046317f | DAT_005bbc54
    FNSTSW AX                           ; 00463185
    SAHF                                ; 00463187
    JNC 0x00462a04                      ; 00463188
        ;   XREF to: 00462a04 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x64                           ; 0046318e
    PUSH 0x0                            ; 00463190
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00463192
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    FLD float ptr [EBX + 0xcde0]        ; 00463197
    FLDZ                                ; 0046319d
    MOV EDX,EAX                         ; 0046319f
    ADD ESP,0x8                         ; 004631a1
    FCOMPP                              ; 004631a4
    FNSTSW AX                           ; 004631a6
    SAHF                                ; 004631a8
    JC 0x00463311                       ; 004631a9
        ;   XREF to: 00463311 (CONDITIONAL_JUMP)  ; LAB_00463311
    FLD float ptr [EBP + 0x5a]          ; 004631af
    FCOMP float ptr [0x005de5b8]        ; 004631b2 | DAT_005de5b8
    FNSTSW AX                           ; 004631b8
    SAHF                                ; 004631ba
    JBE 0x004631d6                      ; 004631bb
        ;   XREF to: 004631d6 (CONDITIONAL_JUMP)  ; LAB_004631d6
    CMP EDX,0x32                        ; 004631bd
    JGE 0x00463304                      ; 004631c0
        ;   XREF to: 00463304 (CONDITIONAL_JUMP)  ; LAB_00463304
    PUSH 0x1                            ; 004631c6
    PUSH 0x9                            ; 004631c8
    MOV ESI,dword ptr [EBP + 0x6a]      ; 004631ca
    PUSH ESI                            ; 004631cd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004631ce
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004631ce
    ADD ESP,0xc                         ; 004631d3
    MOV dword ptr [EBX + 0xcde0],0x40200000 ; 004631d6
        ;   Label: LAB_004631d6
    JMP 0x00462a04                      ; 004631e0
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH dword ptr [EBP + 0x92]         ; 004631e5
        ;   Label: LAB_004631e5
    PUSH EBX                            ; 004631eb
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 004631ec
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004631f1
    LEA ESI,[EBX + 0x158]               ; 004631f4
    TEST EAX,EAX                        ; 004631fa
    JZ 0x0046324a                       ; 004631fc
        ;   XREF to: 0046324a (CONDITIONAL_JUMP)  ; LAB_0046324a
    PUSH 0x64                           ; 004631fe
    PUSH 0x0                            ; 00463200
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00463202
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00463207
    CMP EAX,0x21                        ; 0046320a
    JL 0x00463226                       ; 0046320d
        ;   XREF to: 00463226 (CONDITIONAL_JUMP)  ; LAB_00463226
    CMP EAX,0x42                        ; 0046320f
    JGE 0x00463238                      ; 00463212
        ;   XREF to: 00463238 (CONDITIONAL_JUMP)  ; LAB_00463238
    PUSH 0x1                            ; 00463214
    PUSH 0x6                            ; 00463216
    PUSH ESI                            ; 00463218
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00463219
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046321e
    JMP 0x00462a04                      ; 00463221
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 00463226
        ;   Label: LAB_00463226
    PUSH 0x5                            ; 00463228
    PUSH ESI                            ; 0046322a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0046322b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00463230
    JMP 0x00462a04                      ; 00463233
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 00463238
        ;   Label: LAB_00463238
    PUSH 0x7                            ; 0046323a
    PUSH ESI                            ; 0046323c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0046323d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00463242
    JMP 0x00462a04                      ; 00463245
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x64                           ; 0046324a
        ;   Label: LAB_0046324a
    PUSH EAX                            ; 0046324c
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0046324d
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00463252
    CMP EAX,0x14                        ; 00463255
    JL 0x0046327b                       ; 00463258
        ;   XREF to: 0046327b (CONDITIONAL_JUMP)  ; LAB_0046327b
    CMP EAX,0x28                        ; 0046325a
    JL 0x0046328d                       ; 0046325d
        ;   XREF to: 0046328d (CONDITIONAL_JUMP)  ; LAB_0046328d
    CMP EAX,0x3c                        ; 0046325f
    JL 0x0046329f                       ; 00463262
        ;   XREF to: 0046329f (CONDITIONAL_JUMP)  ; LAB_0046329f
    CMP EAX,0x50                        ; 00463264
    JGE 0x004632b1                      ; 00463267
        ;   XREF to: 004632b1 (CONDITIONAL_JUMP)  ; LAB_004632b1
    PUSH 0x1                            ; 00463269
    PUSH 0x3                            ; 0046326b
    PUSH ESI                            ; 0046326d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0046326e
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00463273
    JMP 0x00462a04                      ; 00463276
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 0046327b
        ;   Label: LAB_0046327b
    PUSH 0x0                            ; 0046327d
    PUSH ESI                            ; 0046327f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00463280
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00463285
    JMP 0x00462a04                      ; 00463288
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 0046328d
        ;   Label: LAB_0046328d
    PUSH 0x1                            ; 0046328f
    PUSH ESI                            ; 00463291
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00463292
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00463297
    JMP 0x00462a04                      ; 0046329a
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 0046329f
        ;   Label: LAB_0046329f
    PUSH 0x2                            ; 004632a1
    PUSH ESI                            ; 004632a3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004632a4
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004632a9
    JMP 0x00462a04                      ; 004632ac
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 004632b1
        ;   Label: LAB_004632b1
    PUSH 0x4                            ; 004632b3
    PUSH ESI                            ; 004632b5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004632b6
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004632bb
    JMP 0x00462a04                      ; 004632be
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    CMP ESI,0x6                         ; 004632c3
        ;   Label: LAB_004632c3
    JZ 0x00463070                       ; 004632c6
        ;   XREF to: 00463070 (CONDITIONAL_JUMP)  ; LAB_00463070
    CMP ESI,0x7                         ; 004632cc
    JZ 0x00463070                       ; 004632cf
        ;   XREF to: 00463070 (CONDITIONAL_JUMP)  ; LAB_00463070
    JMP 0x00463083                      ; 004632d5
        ;   XREF to: 00463083 (UNCONDITIONAL_JUMP)  ; LAB_00463083
    PUSH EBX                            ; 004632da
        ;   Label: LAB_004632da
    PUSH 0x5bbc23                       ; 004632db | = "%s gave up chase - I'm confused\n"
    MOV EDI,dword ptr [0x005f1690]      ; 004632e0 | g_CConsolePtr
    PUSH EDI                            ; 004632e6 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004632e7
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004632ec
    PUSH 0x1                            ; 004632ef
    PUSH 0x0                            ; 004632f1
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004632f3
    PUSH EAX                            ; 004632f6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004632f7
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004632fc
    JMP 0x00462a04                      ; 004632ff
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 00463304
        ;   Label: LAB_00463304
    PUSH 0xa                            ; 00463306
    MOV ECX,dword ptr [EBP + 0x6a]      ; 00463308
    PUSH ECX                            ; 0046330b
    JMP 0x004631ce                      ; 0046330c
        ;   XREF to: 004631ce (UNCONDITIONAL_JUMP)  ; LAB_004631ce
    PUSH 0x1                            ; 00463311
        ;   Label: LAB_00463311
    PUSH 0x0                            ; 00463313
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00463315
    PUSH EDX                            ; 00463318
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00463319
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046331e
    JMP 0x00462a04                      ; 00463321
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    MOV EDX,dword ptr [0x01d5ba14]      ; 00463326 | DAT_01d5ba14
        ;   Label: LAB_00463326
    MOV EDX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 0046332c
    LEA EDI,[EBP + 0xfffffed6]          ; 00463333
    LEA ESI,[EBP + -0x5e]               ; 00463339
    FLD float ptr [EDX + 0x20]          ; 0046333c
    FLD float ptr [EDX + 0x24]          ; 0046333f
    FLD float ptr [EDX + 0x28]          ; 00463342
    FXCH ST2                            ; 00463345
    FSUB float ptr [EAX]                ; 00463347
    FXCH                                ; 00463349
    FSUB float ptr [EAX + 0x4]          ; 0046334b
    FXCH ST2                            ; 0046334e
    FSUB float ptr [EAX + 0x8]          ; 00463350
    FXCH                                ; 00463353
    FSTP float ptr [EBP + -0x5e]        ; 00463355
    FXCH                                ; 00463358
    FSTP float ptr [EBP + -0x5a]        ; 0046335a
    FSTP float ptr [EBP + -0x56]        ; 0046335d
    LEA EAX,[EBP + 0xfffffed6]          ; 00463360
    MOVSD ES:EDI,ESI                    ; 00463366
    MOVSD ES:EDI,ESI                    ; 00463367
    MOVSD ES:EDI,ESI                    ; 00463368
    PUSH EAX                            ; 00463369
    LEA ESI,[EBP + 0xffffff36]          ; 0046336a
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 00463370
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    FLD float ptr [EBP + 0xfffffeda]    ; 00463375
    FMUL ST0                            ; 0046337b
    FLD float ptr [EBP + 0xfffffed6]    ; 0046337d
    FMUL ST0                            ; 00463383
    FADDP                               ; 00463385
    FLD float ptr [EBP + 0xfffffede]    ; 00463387
    FMUL ST0                            ; 0046338d
    LEA EDI,[EBP + 0xffffff06]          ; 0046338f
    ADD ESP,0x4                         ; 00463395
    LEA ESI,[EBP + 0xffffff36]          ; 00463398
    SUB ESP,0x4                         ; 0046339e
    MOVSD ES:EDI,ESI                    ; 004633a1
    MOVSD ES:EDI,ESI                    ; 004633a2
    MOVSD ES:EDI,ESI                    ; 004633a3
    FADDP                               ; 004633a4
    FLD float ptr [EBP + 0xffffff0a]    ; 004633a6
    FXCH                                ; 004633ac
    FSTP float ptr [EBP + 0x52]         ; 004633ae
    MOV EAX,dword ptr [EBP + 0x52]      ; 004633b1
    MOV ESI,dword ptr [0x01d1a0a4]      ; 004633b4 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 004633ba
    FSUB float ptr [EBX + 0x34]         ; 004633bc
    ADD EAX,ESI                         ; 004633bf
    FSTP float ptr [ESP]                ; 004633c1
    MOV dword ptr [EBP + 0x72],EAX      ; 004633c4
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 004633c7
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004633cc
    FLD float ptr [EBP + 0x76]          ; 004633cf
    FABS                                ; 004633d2
    ADD ESP,0x4                         ; 004633d4
    FCOMP double ptr [0x005bbc54]       ; 004633d7 | DAT_005bbc54
    FNSTSW AX                           ; 004633dd
    SAHF                                ; 004633df
    JNC 0x00462a04                      ; 004633e0
        ;   XREF to: 00462a04 (CONDITIONAL_JUMP)  ; caseD_12
    FLD float ptr [EBX + 0xcde0]        ; 004633e6
    FLDZ                                ; 004633ec
    FCOMPP                              ; 004633ee
    FNSTSW AX                           ; 004633f0
    SAHF                                ; 004633f2
    JC 0x00462a04                       ; 004633f3
        ;   XREF to: 00462a04 (CONDITIONAL_JUMP)  ; caseD_12
    FLD float ptr [EBP + 0x72]          ; 004633f9
    FCOMP float ptr [0x005de5b8]        ; 004633fc | DAT_005de5b8
    FNSTSW AX                           ; 00463402
    SAHF                                ; 00463404
    JA 0x00462a04                       ; 00463405
        ;   XREF to: 00462a04 (CONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x64                           ; 0046340b
    PUSH 0x0                            ; 0046340d
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0046340f
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00463414
    CMP EAX,0x32                        ; 00463417
    JL 0x0046343b                       ; 0046341a
        ;   XREF to: 0046343b (CONDITIONAL_JUMP)  ; LAB_0046343b
    PUSH 0x1                            ; 0046341c
    PUSH 0xc                            ; 0046341e
    MOV EDI,dword ptr [EBP + 0x6a]      ; 00463420
    PUSH EDI                            ; 00463423
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00463424
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00463424
    ADD ESP,0xc                         ; 00463429
    MOV dword ptr [EBX + 0xcde0],0x40200000 ; 0046342c
    JMP 0x00462a04                      ; 00463436
        ;   XREF to: 00462a04 (UNCONDITIONAL_JUMP)  ; caseD_12
    PUSH 0x1                            ; 0046343b
        ;   Label: LAB_0046343b
    PUSH 0xb                            ; 0046343d
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0046343f
    PUSH EAX                            ; 00463442
    JMP 0x00463424                      ; 00463443
        ;   XREF to: 00463424 (UNCONDITIONAL_JUMP)  ; LAB_00463424
    MOV EDX,dword ptr [EBP + 0x62]      ; 00463445
        ;   Label: LAB_00463445
    CMP EDX,0x15                        ; 00463448
    JA 0x00462a04                       ; 0046344b
        ;   XREF to: 00462a04 (CONDITIONAL_JUMP)  ; caseD_12
    MOV EAX,EDX                         ; 00463451
    JMP dword ptr [EAX*0x4 + 0x462850]  ; 00463453 | caseD_4 | caseD_8 | caseD_c
        ;   Label: switchD

