; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_process_FUN_00540df0(CScat *this_ptr,float delta_time)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00540db8 = 00541327
;   TerminatedCString s_s_confused_while_walking_005ede21
;   undefined4 DAT_005ede4b
;   undefined4 DAT_005ede4f
;   undefined4 DAT_005ede53
;   undefined4 DAT_005ede57
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01e7e014
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00435320
;   core_inv.cpp_FUN_004f9f10
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_motion.cpp_FUN_00524a40
;   core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_00541af0
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540df0
        ;   Label: core_scat.cpp_CScat_process_FUN_00540df0
    PUSH ESI                            ; 00540df1
    PUSH EDI                            ; 00540df2
    PUSH EBP                            ; 00540df3
    SUB ESP,0xac                        ; 00540df4
    MOV EBX,dword ptr [ESP + 0xc0]      ; 00540dfa
    PUSH dword ptr [ESP + 0xc4]         ; 00540e01
    PUSH EBX                            ; 00540e08
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 00540e09
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00540e0e
    TEST EAX,EAX                        ; 00540e11
    JNZ 0x00540e20                      ; 00540e13
        ;   XREF to: 00540e20 (CONDITIONAL_JUMP)  ; LAB_00540e20
    ADD ESP,0xac                        ; 00540e15
        ;   Label: caseD_5
    POP EBP                             ; 00540e1b
    POP EDI                             ; 00540e1c
    POP ESI                             ; 00540e1d
    POP EBX                             ; 00540e1e
    RET                                 ; 00540e1f
    PUSH dword ptr [ESP + 0xc4]         ; 00540e20
        ;   Label: LAB_00540e20
    PUSH EBX                            ; 00540e27
    CALL core_charactr.cpp_FUN_00435320 ; 00540e28
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 00540e2d
    FLD float ptr [EBX + 0xc1d0]        ; 00540e30
    FSUB float ptr [ESP + 0xc4]         ; 00540e36
    FST float ptr [EBX + 0xc1d0]        ; 00540e3d
    FLDZ                                ; 00540e43
    FCOMPP                              ; 00540e45
    FNSTSW AX                           ; 00540e47
    SAHF                                ; 00540e49
    JBE 0x00540e56                      ; 00540e4a
        ;   XREF to: 00540e56 (CONDITIONAL_JUMP)  ; LAB_00540e56
    MOV dword ptr [EBX + 0xc1d0],0x0    ; 00540e4c
    LEA ESI,[EBX + 0x249c]              ; 00540e56
        ;   Label: LAB_00540e56
    PUSH dword ptr [ESP + 0xc4]         ; 00540e5c
    MOV dword ptr [ESI + 0x8],0x0       ; 00540e63
    PUSH EBX                            ; 00540e6a
    MOV EAX,dword ptr [ESI + 0x8]       ; 00540e6b
    MOV dword ptr [ESI + 0x4],EAX       ; 00540e6e
    MOV EAX,dword ptr [ESI + 0x4]       ; 00540e71
    MOV dword ptr [ESI],EAX             ; 00540e74
    CALL core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_00541af0 ; 00540e76
        ;   XREF to: 00541af0 (UNCONDITIONAL_CALL)  ; void core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_00541af0(CScat * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00540e7b
    PUSH dword ptr [ESP + 0xc4]         ; 00540e7e
    FLD float ptr [EBX + 0x24a4]        ; 00540e85
    PUSH EBX                            ; 00540e8b
    FSTP float ptr [EBX + 0x2524]       ; 00540e8c
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 00540e92
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00540e97
    TEST EAX,EAX                        ; 00540e9a
    JZ 0x005412ec                       ; 00540e9c
        ;   XREF to: 005412ec (CONDITIONAL_JUMP)  ; LAB_005412ec
    MOV dword ptr [ESI + 0x8],0x0       ; 00540ea2
    MOV EAX,dword ptr [ESI + 0x8]       ; 00540ea9
    MOV dword ptr [ESI + 0x4],EAX       ; 00540eac
    MOV EAX,dword ptr [ESI + 0x4]       ; 00540eaf
    MOV dword ptr [ESI],EAX             ; 00540eb2
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00540eb4
    LEA ESI,[EBX + 0x158]               ; 00540eba
    CMP EAX,0x2                         ; 00540ec0
    JNC 0x005412c6                      ; 00540ec3
        ;   XREF to: 005412c6 (CONDITIONAL_JUMP)  ; LAB_005412c6
    CMP EAX,0x1                         ; 00540ec9
    JNZ 0x005412cd                      ; 00540ecc
        ;   XREF to: 005412cd (CONDITIONAL_JUMP)  ; LAB_005412cd
    PUSH EBX                            ; 00540ed2
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_00541de0 ; 00540ed3
        ;   XREF to: 00541de0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_CScat_isWeaponReady_FUN_00541de0(CScat * this_ptr)
    ADD ESP,0x4                         ; 00540ed8
    TEST EAX,EAX                        ; 00540edb
    JZ 0x0054129a                       ; 00540edd
        ;   XREF to: 0054129a (CONDITIONAL_JUMP)  ; LAB_0054129a
    PUSH 0x1                            ; 00540ee3
        ;   Label: LAB_00540ee3
    PUSH 0x9                            ; 00540ee5
    PUSH ESI                            ; 00540ee7
        ;   Label: LAB_00540ee7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00540ee8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00540ee8
    ADD ESP,0xc                         ; 00540eed
    MOV EBP,dword ptr [EBX + 0x26fc]    ; 00540ef0
        ;   Label: caseD_4
    TEST EBP,EBP                        ; 00540ef6
    JZ 0x005414b3                       ; 00540ef8
        ;   XREF to: 005414b3 (CONDITIONAL_JUMP)  ; LAB_005414b3
    LEA EAX,[EBP + 0x20]                ; 00540efe
    PUSH EAX                            ; 00540f01
    PUSH EBX                            ; 00540f02
    LEA ESI,[ESP + 0x34]                ; 00540f03
    LEA EDI,[ESP + 0x58]                ; 00540f07
    CALL core_actor.cpp_FUN_00408bb0    ; 00540f0b
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x34]                ; 00540f10
    ADD ESP,0x8                         ; 00540f14
    LEA EAX,[ESP + 0x50]                ; 00540f17
    MOVSD ES:EDI,ESI                    ; 00540f1b
    MOVSD ES:EDI,ESI                    ; 00540f1c
    MOVSD ES:EDI,ESI                    ; 00540f1d
    PUSH EAX                            ; 00540f1e
    LEA ESI,[ESP + 0x84]                ; 00540f1f
    LEA EDI,[ESP + 0x48]                ; 00540f26
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00540f2a
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x84]                ; 00540f2f
    ADD ESP,0x4                         ; 00540f36
    MOVSD ES:EDI,ESI                    ; 00540f39
    MOVSD ES:EDI,ESI                    ; 00540f3a
    MOVSD ES:EDI,ESI                    ; 00540f3b
    PUSH dword ptr [ESP + 0x48]         ; 00540f3c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00540f40
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0xac],EAX      ; 00540f45
    FLD float ptr [ESP + 0xac]          ; 00540f4c
    ADD ESP,0x4                         ; 00540f53
    FST float ptr [ESP + 0xa4]          ; 00540f56
    FCOMP float ptr [0x005ede4b]        ; 00540f5d | DAT_005ede4b
    FNSTSW AX                           ; 00540f63
    SAHF                                ; 00540f65
    JNC 0x00540f7c                      ; 00540f66
        ;   XREF to: 00540f7c (CONDITIONAL_JUMP)  ; LAB_00540f7c
    FLD float ptr [ESP + 0xa4]          ; 00540f68
    FADD float ptr [0x005ede4f]         ; 00540f6f | DAT_005ede4f
    FSTP float ptr [ESP + 0xa4]         ; 00540f75
    FLD float ptr [ESP + 0xa4]          ; 00540f7c
        ;   Label: LAB_00540f7c
    FCOMP float ptr [0x005ede53]        ; 00540f83 | DAT_005ede53
    FNSTSW AX                           ; 00540f89
    SAHF                                ; 00540f8b
    JBE 0x00540fa2                      ; 00540f8c
        ;   XREF to: 00540fa2 (CONDITIONAL_JUMP)  ; LAB_00540fa2
    FLD float ptr [ESP + 0xa4]          ; 00540f8e
    FADD float ptr [0x005ede57]         ; 00540f95 | DAT_005ede57
    FSTP float ptr [ESP + 0xa4]         ; 00540f9b
    FLD float ptr [ESP + 0xc4]          ; 00540fa2
        ;   Label: LAB_00540fa2
    FMUL float ptr [0x005ede4f]         ; 00540fa9 | DAT_005ede4f
    FLD float ptr [ESP + 0xa4]          ; 00540faf
    FXCH                                ; 00540fb6
    FST float ptr [ESP + 0xa0]          ; 00540fb8
    FCHS                                ; 00540fbf
    FSTP float ptr [ESP + 0x9c]         ; 00540fc1
    FCOMP float ptr [ESP + 0x9c]        ; 00540fc8
    FNSTSW AX                           ; 00540fcf
    SAHF                                ; 00540fd1
    JNC 0x00540fe2                      ; 00540fd2
        ;   XREF to: 00540fe2 (CONDITIONAL_JUMP)  ; LAB_00540fe2
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00540fd4
    MOV dword ptr [ESP + 0xa4],EAX      ; 00540fdb
    FLD float ptr [ESP + 0xa4]          ; 00540fe2
        ;   Label: LAB_00540fe2
    FCOMP float ptr [ESP + 0xa0]        ; 00540fe9
    FNSTSW AX                           ; 00540ff0
    SAHF                                ; 00540ff2
    JBE 0x00541003                      ; 00540ff3
        ;   XREF to: 00541003 (CONDITIONAL_JUMP)  ; LAB_00541003
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00540ff5
    MOV dword ptr [ESP + 0xa4],EAX      ; 00540ffc
    FLD float ptr [EBX + 0x34]          ; 00541003
        ;   Label: LAB_00541003
    FADD float ptr [ESP + 0xa4]         ; 00541006
    PUSH EBX                            ; 0054100d
    FSTP float ptr [EBX + 0x34]         ; 0054100e
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 00541011
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    MOV EBP,dword ptr [EBX + 0x26fc]    ; 00541016
    ADD ESP,0x4                         ; 0054101c
    MOV EAX,dword ptr [EBP + 0x154]     ; 0054101f
    PUSH 0x0                            ; 00541025
    MOV dword ptr [ESP + 0xac],EAX      ; 00541027
    LEA EAX,[EBX + 0x158]               ; 0054102e
    PUSH EAX                            ; 00541034
    LEA ESI,[ESP + 0x28]                ; 00541035
    MOV dword ptr [ESP + 0xa0],EAX      ; 00541039
    CALL core_skeleton.cpp_FUN_00569130 ; 00541040
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 00541045
    LEA EAX,[ESP + 0x74]                ; 00541048
    PUSH EAX                            ; 0054104c
    LEA EDI,[ESP + 0x78]                ; 0054104d
    PUSH EBX                            ; 00541051
    LEA ESI,[ESP + 0x28]                ; 00541052
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00541056
    PUSH EBP                            ; 0054105d
    MOVSD ES:EDI,ESI                    ; 0054105e
    MOVSD ES:EDI,ESI                    ; 0054105f
    MOVSD ES:EDI,ESI                    ; 00541060
    CALL dword ptr [EAX + 0x110]        ; 00541061
    ADD ESP,0xc                         ; 00541067
    TEST EAX,EAX                        ; 0054106a
    JZ 0x0054148a                       ; 0054106c
        ;   XREF to: 0054148a (CONDITIONAL_JUMP)  ; LAB_0054148a
    CMP dword ptr [EBX + 0x26fc],0x0    ; 00541072
    JNZ 0x00541495                      ; 00541079
        ;   XREF to: 00541495 (CONDITIONAL_JUMP)  ; LAB_00541495
    PUSH 0x1                            ; 0054107f
        ;   Label: LAB_0054107f
    PUSH 0x0                            ; 00541081
    LEA EAX,[EBX + 0x158]               ; 00541083
    PUSH EAX                            ; 00541089
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0054108a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0054108a
    ADD ESP,0xc                         ; 0054108f
    LEA EAX,[EBX + 0x1fae8]             ; 00541092
        ;   Label: LAB_00541092
    PUSH EAX                            ; 00541098
    CALL core_inv.cpp_FUN_004f9f10      ; 00541099
        ;   XREF to: 004f9f10 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f9f10()
    MOV EDI,dword ptr [EBX + 0x1ffc0]   ; 0054109e
    ADD ESP,0x4                         ; 005410a4
    TEST EDI,EDI                        ; 005410a7
    JZ 0x005410bf                       ; 005410a9
        ;   XREF to: 005410bf (CONDITIONAL_JUMP)  ; LAB_005410bf
    PUSH dword ptr [ESP + 0xc4]         ; 005410ab
    MOV EDX,dword ptr [EDI + 0x154]     ; 005410b2
    PUSH EDI                            ; 005410b8
    CALL dword ptr [EDX + 0xc]          ; 005410b9
    ADD ESP,0x8                         ; 005410bc
    PUSH dword ptr [ESP + 0xc4]         ; 005410bf
        ;   Label: LAB_005410bf
    PUSH EBX                            ; 005410c6
    CALL core_scat.cpp_CScat_updateWeaponState_FUN_00541e30 ; 005410c7
        ;   XREF to: 00541e30 (UNCONDITIONAL_CALL)  ; void core_scat.cpp_CScat_updateWeaponState_FUN_00541e30(CScat * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005410cc
    PUSH EBX                            ; 005410cf
    XOR ESI,ESI                         ; 005410d0
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 005410d2
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    FLD float ptr [EBX + 0x2538]        ; 005410d7
    FLDZ                                ; 005410dd
    ADD ESP,0x4                         ; 005410df
    FCOMPP                              ; 005410e2
    FNSTSW AX                           ; 005410e4
    SAHF                                ; 005410e6
    JC 0x005410ee                       ; 005410e7
        ;   XREF to: 005410ee (CONDITIONAL_JUMP)  ; LAB_005410ee
    MOV ESI,0x1                         ; 005410e9
    PUSH EBX                            ; 005410ee
        ;   Label: LAB_005410ee
    MOV EAX,dword ptr [EBX + 0x154]     ; 005410ef
    CALL dword ptr [EAX + 0xf4]         ; 005410f5
    ADD ESP,0x4                         ; 005410fb
    TEST EAX,EAX                        ; 005410fe
    JZ 0x00541107                       ; 00541100
        ;   XREF to: 00541107 (CONDITIONAL_JUMP)  ; LAB_00541107
    MOV ESI,0x1                         ; 00541102
    PUSH 0xc                            ; 00541107
        ;   Label: LAB_00541107
    LEA EAX,[EBX + 0x158]               ; 00541109
    PUSH EAX                            ; 0054110f
    CALL core_motion.cpp_FUN_00524a40   ; 00541110
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xb0],EAX      ; 00541115
    FLD float ptr [ESP + 0xb0]          ; 0054111c
    FLDZ                                ; 00541123
    ADD ESP,0x8                         ; 00541125
    FCOMPP                              ; 00541128
    FNSTSW AX                           ; 0054112a
    SAHF                                ; 0054112c
    JNC 0x00541134                      ; 0054112d
        ;   XREF to: 00541134 (CONDITIONAL_JUMP)  ; LAB_00541134
    MOV ESI,0x1                         ; 0054112f
    PUSH 0xd                            ; 00541134
        ;   Label: LAB_00541134
    LEA EAX,[EBX + 0x158]               ; 00541136
    PUSH EAX                            ; 0054113c
    CALL core_motion.cpp_FUN_00524a40   ; 0054113d
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xb0],EAX      ; 00541142
    FLD float ptr [ESP + 0xb0]          ; 00541149
    FLDZ                                ; 00541150
    ADD ESP,0x8                         ; 00541152
    FCOMPP                              ; 00541155
    FNSTSW AX                           ; 00541157
    SAHF                                ; 00541159
    JNC 0x00541161                      ; 0054115a
        ;   XREF to: 00541161 (CONDITIONAL_JUMP)  ; LAB_00541161
    MOV ESI,0x1                         ; 0054115c
    PUSH 0x4                            ; 00541161
        ;   Label: LAB_00541161
    LEA EAX,[EBX + 0x158]               ; 00541163
    PUSH EAX                            ; 00541169
    CALL core_motion.cpp_FUN_00524a40   ; 0054116a
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xb0],EAX      ; 0054116f
    FLD float ptr [ESP + 0xb0]          ; 00541176
    FLDZ                                ; 0054117d
    ADD ESP,0x8                         ; 0054117f
    FCOMPP                              ; 00541182
    FNSTSW AX                           ; 00541184
    SAHF                                ; 00541186
    JNC 0x0054118e                      ; 00541187
        ;   XREF to: 0054118e (CONDITIONAL_JUMP)  ; LAB_0054118e
    MOV ESI,0x1                         ; 00541189
    PUSH 0x5                            ; 0054118e
        ;   Label: LAB_0054118e
    LEA EAX,[EBX + 0x158]               ; 00541190
    PUSH EAX                            ; 00541196
    CALL core_motion.cpp_FUN_00524a40   ; 00541197
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0xb0],EAX      ; 0054119c
    FLD float ptr [ESP + 0xb0]          ; 005411a3
    FLDZ                                ; 005411aa
    ADD ESP,0x8                         ; 005411ac
    FCOMPP                              ; 005411af
    FNSTSW AX                           ; 005411b1
    SAHF                                ; 005411b3
    JNC 0x005411bb                      ; 005411b4
        ;   XREF to: 005411bb (CONDITIONAL_JUMP)  ; LAB_005411bb
    MOV ESI,0x1                         ; 005411b6
    PUSH ESI                            ; 005411bb
        ;   Label: LAB_005411bb
    PUSH dword ptr [ESP + 0xc8]         ; 005411bc
    PUSH EBX                            ; 005411c3
    CALL core_scat.cpp_FUN_005424f0     ; 005411c4
        ;   XREF to: 005424f0 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_FUN_005424f0()
    ADD ESP,0xc                         ; 005411c9
    LEA EBP,[EBX + 0x158]               ; 005411cc
    PUSH EBP                            ; 005411d2
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 005411d3
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005411d8
    PUSH EBX                            ; 005411db
    CALL core_scat.cpp_CScat_blendLayerAction_FUN_00542090 ; 005411dc
        ;   XREF to: 00542090 (UNCONDITIONAL_CALL)  ; void core_scat.cpp_CScat_blendLayerAction_FUN_00542090(CScat * this_ptr)
    ADD ESP,0x4                         ; 005411e1
    PUSH EBX                            ; 005411e4
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_00541de0 ; 005411e5
        ;   XREF to: 00541de0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_CScat_isWeaponReady_FUN_00541de0(CScat * this_ptr)
    ADD ESP,0x4                         ; 005411ea
    TEST EAX,EAX                        ; 005411ed
    JNZ 0x00541243                      ; 005411ef
        ;   XREF to: 00541243 (CONDITIONAL_JUMP)  ; LAB_00541243
    PUSH EBX                            ; 005411f1
    MOV EAX,dword ptr [EBX + 0x154]     ; 005411f2
    CALL dword ptr [EAX + 0x10c]        ; 005411f8
    ADD ESP,0x4                         ; 005411fe
    TEST EAX,EAX                        ; 00541201
    JNZ 0x00541243                      ; 00541203
        ;   XREF to: 00541243 (CONDITIONAL_JUMP)  ; LAB_00541243
    PUSH 0x567360                       ; 00541205
    MOV EAX,[0x01e7e014]                ; 0054120a | DAT_01e7e014
    PUSH EAX                            ; 0054120f
    LEA EAX,[EBX + 0x1ffb0]             ; 00541210
    PUSH dword ptr [EBX + 0x1ffbc]      ; 00541216
    PUSH EAX                            ; 0054121c
    LEA ESI,[ESP + 0x10]                ; 0054121d
    CALL core_xform.cpp_FUN_005b7ed0    ; 00541221
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7ed0()
    ADD ESP,0x4                         ; 00541226
    LEA EAX,[ESP + 0x1c]                ; 00541229
    PUSH EAX                            ; 0054122d
    LEA EDI,[ESP + 0x20]                ; 0054122e
    LEA ESI,[ESP + 0x10]                ; 00541232
    PUSH EBP                            ; 00541236
    MOVSD ES:EDI,ESI                    ; 00541237
    MOVSD ES:EDI,ESI                    ; 00541238
    MOVSD ES:EDI,ESI                    ; 00541239
    MOVSD ES:EDI,ESI                    ; 0054123a
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60 ; 0054123b
        ;   XREF to: 00568d60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00541240
    PUSH dword ptr [ESP + 0xc4]         ; 00541243
        ;   Label: LAB_00541243
    PUSH EBX                            ; 0054124a
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 0054124b
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00541250
    PUSH EBX                            ; 00541253
    CALL core_scat.cpp_FUN_00542f20     ; 00541254
        ;   XREF to: 00542f20 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_FUN_00542f20()
    ADD ESP,0x4                         ; 00541259
    ADD ESP,0xac                        ; 0054125c
    POP EBP                             ; 00541262
    POP EDI                             ; 00541263
    POP ESI                             ; 00541264
    POP EBX                             ; 00541265
    RET                                 ; 00541266
    PUSH EBX                            ; 00541267
        ;   Label: LAB_00541267
    PUSH 0x5ede21                       ; 00541268 | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x00611100]      ; 0054126d | g_CConsolePtr
    PUSH EDI                            ; 00541273 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00541274
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 00541279
    PUSH EBX                            ; 0054127c
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_00541de0 ; 0054127d
        ;   XREF to: 00541de0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_CScat_isWeaponReady_FUN_00541de0(CScat * this_ptr)
    ADD ESP,0x4                         ; 00541282
    TEST EAX,EAX                        ; 00541285
    JZ 0x00541292                       ; 00541287
        ;   XREF to: 00541292 (CONDITIONAL_JUMP)  ; LAB_00541292
    PUSH 0x1                            ; 00541289
    PUSH 0x7                            ; 0054128b
    JMP 0x00540ee7                      ; 0054128d
        ;   XREF to: 00540ee7 (UNCONDITIONAL_JUMP)  ; LAB_00540ee7
    PUSH 0x1                            ; 00541292
        ;   Label: LAB_00541292
    PUSH EAX                            ; 00541294
    JMP 0x00540ee7                      ; 00541295
        ;   XREF to: 00540ee7 (UNCONDITIONAL_JUMP)  ; LAB_00540ee7
    PUSH 0x1                            ; 0054129a
        ;   Label: LAB_0054129a
    PUSH 0x1                            ; 0054129c
    JMP 0x00540ee7                      ; 0054129e
        ;   XREF to: 00540ee7 (UNCONDITIONAL_JUMP)  ; LAB_00540ee7
    PUSH EBX                            ; 005412a3
        ;   Label: LAB_005412a3
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_00541de0 ; 005412a4
        ;   XREF to: 00541de0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_CScat_isWeaponReady_FUN_00541de0(CScat * this_ptr)
    ADD ESP,0x4                         ; 005412a9
    TEST EAX,EAX                        ; 005412ac
    JNZ 0x00540ee3                      ; 005412ae
        ;   XREF to: 00540ee3 (CONDITIONAL_JUMP)  ; LAB_00540ee3
    PUSH 0x1                            ; 005412b4
    PUSH 0x2                            ; 005412b6
    JMP 0x00540ee7                      ; 005412b8
        ;   XREF to: 00540ee7 (UNCONDITIONAL_JUMP)  ; LAB_00540ee7
    PUSH 0x1                            ; 005412bd
        ;   Label: LAB_005412bd
    PUSH EDX                            ; 005412bf
    PUSH EAX                            ; 005412c0
    JMP 0x00540ee8                      ; 005412c1
        ;   XREF to: 00540ee8 (UNCONDITIONAL_JUMP)  ; LAB_00540ee8
    JBE 0x005412a3                      ; 005412c6
        ;   XREF to: 005412a3 (CONDITIONAL_JUMP)  ; LAB_005412a3
        ;   Label: LAB_005412c6
    CMP EAX,0x3                         ; 005412c8
    JZ 0x00541267                       ; 005412cb
        ;   XREF to: 00541267 (CONDITIONAL_JUMP)  ; LAB_00541267
    PUSH EBX                            ; 005412cd
        ;   Label: LAB_005412cd
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_00541de0 ; 005412ce
        ;   XREF to: 00541de0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_CScat_isWeaponReady_FUN_00541de0(CScat * this_ptr)
    MOV EDX,EAX                         ; 005412d3
    ADD ESP,0x4                         ; 005412d5
    LEA EAX,[EBX + 0x158]               ; 005412d8
    TEST EDX,EDX                        ; 005412de
    JZ 0x005412bd                       ; 005412e0
        ;   XREF to: 005412bd (CONDITIONAL_JUMP)  ; LAB_005412bd
    PUSH 0x1                            ; 005412e2
    PUSH 0x7                            ; 005412e4
    PUSH EAX                            ; 005412e6
    JMP 0x00540ee8                      ; 005412e7
        ;   XREF to: 00540ee8 (UNCONDITIONAL_JUMP)  ; LAB_00540ee8
    CMP dword ptr [EBX + 0xc1d4],0x2    ; 005412ec
        ;   Label: LAB_005412ec
    JNZ 0x00541305                      ; 005412f3
        ;   XREF to: 00541305 (CONDITIONAL_JUMP)  ; LAB_00541305
    PUSH dword ptr [ESP + 0xc4]         ; 005412f5
    PUSH EBX                            ; 005412fc
    CALL core_scat.cpp_CScat_updateAI_FUN_005415c0 ; 005412fd
        ;   XREF to: 005415c0 (UNCONDITIONAL_CALL)  ; void core_scat.cpp_CScat_updateAI_FUN_005415c0(CScat * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00541302
    LEA EAX,[EBX + 0x158]               ; 00541305
        ;   Label: LAB_00541305
    PUSH EAX                            ; 0054130b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0054130c
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00541311
    ADD ESP,0x4                         ; 00541314
    CMP EAX,0xa                         ; 00541317
    JA 0x00540ef0                       ; 0054131a
        ;   XREF to: 00540ef0 (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x540db8]  ; 00541320 | caseD_a | caseD_8 | caseD_5
        ;   Label: switchD
    CMP dword ptr [EBX + 0x2500],0x0    ; 00541327
        ;   Label: caseD_0
    JZ 0x00540ef0                       ; 0054132e
        ;   XREF to: 00540ef0 (CONDITIONAL_JUMP)  ; caseD_8
    PUSH EBX                            ; 00541334
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_00541de0 ; 00541335
        ;   XREF to: 00541de0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_CScat_isWeaponReady_FUN_00541de0(CScat * this_ptr)
    XOR ESI,ESI                         ; 0054133a
    ADD ESP,0x4                         ; 0054133c
    TEST EAX,EAX                        ; 0054133f
    JZ 0x00541348                       ; 00541341
        ;   XREF to: 00541348 (CONDITIONAL_JUMP)  ; LAB_00541348
    MOV ESI,0x7                         ; 00541343
    CMP dword ptr [EBX + 0xc1d8],0x0    ; 00541348
        ;   Label: LAB_00541348
    JZ 0x00541367                       ; 0054134f
        ;   XREF to: 00541367 (CONDITIONAL_JUMP)  ; LAB_00541367
    PUSH EBX                            ; 00541351
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_00541de0 ; 00541352
        ;   XREF to: 00541de0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_CScat_isWeaponReady_FUN_00541de0(CScat * this_ptr)
    ADD ESP,0x4                         ; 00541357
    TEST EAX,EAX                        ; 0054135a
    JZ 0x00541463                       ; 0054135c
        ;   XREF to: 00541463 (CONDITIONAL_JUMP)  ; LAB_00541463
    MOV ESI,0x9                         ; 00541362
    CMP dword ptr [EBX + 0xc1dc],0x0    ; 00541367
        ;   Label: LAB_00541367
    JZ 0x00541386                       ; 0054136e
        ;   XREF to: 00541386 (CONDITIONAL_JUMP)  ; LAB_00541386
    PUSH EBX                            ; 00541370
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_00541de0 ; 00541371
        ;   XREF to: 00541de0 (UNCONDITIONAL_CALL)  ; int core_scat.cpp_CScat_isWeaponReady_FUN_00541de0(CScat * this_ptr)
    ADD ESP,0x4                         ; 00541376
    TEST EAX,EAX                        ; 00541379
    JZ 0x00541480                       ; 0054137b
        ;   XREF to: 00541480 (CONDITIONAL_JUMP)  ; LAB_00541480
    MOV ESI,0xa                         ; 00541381
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 00541386
        ;   Label: LAB_00541386
    JZ 0x005413ec                       ; 0054138d
        ;   XREF to: 005413ec (CONDITIONAL_JUMP)  ; LAB_005413ec
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 0054138f
    JZ 0x005413ec                       ; 00541396
        ;   XREF to: 005413ec (CONDITIONAL_JUMP)  ; LAB_005413ec
    MOV EDI,dword ptr [EBX + 0x1ffc0]   ; 00541398
    TEST EDI,EDI                        ; 0054139e
    JZ 0x005413ec                       ; 005413a0
        ;   XREF to: 005413ec (CONDITIONAL_JUMP)  ; LAB_005413ec
    PUSH EDI                            ; 005413a2
    MOV EDX,dword ptr [EDI + 0x154]     ; 005413a3
    CALL dword ptr [EDX + 0xe8]         ; 005413a9
    ADD ESP,0x4                         ; 005413af
    TEST EAX,EAX                        ; 005413b2
    JZ 0x005413ec                       ; 005413b4
        ;   XREF to: 005413ec (CONDITIONAL_JUMP)  ; LAB_005413ec
    MOV EAX,dword ptr [EBX + 0x1ffc0]   ; 005413b6
    PUSH EAX                            ; 005413bc
    MOV EDX,dword ptr [EAX + 0x154]     ; 005413bd
    CALL dword ptr [EDX + 0xe4]         ; 005413c3
    MOV EAX,dword ptr [EBX + 0x1ffc0]   ; 005413c9
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 005413cf
    MOV EBP,dword ptr [EAX + 0x2e0]     ; 005413d9
    ADD ESP,0x4                         ; 005413df
    CMP EBP,0x8                         ; 005413e2
    JNZ 0x005413ec                      ; 005413e5
        ;   XREF to: 005413ec (CONDITIONAL_JUMP)  ; LAB_005413ec
    MOV ESI,0xb                         ; 005413e7
    FLD float ptr [EBX + 0xc200]        ; 005413ec
        ;   Label: LAB_005413ec
    FMUL float ptr [EBX + 0x2528]       ; 005413f2
    LEA EDI,[EBX + 0x158]               ; 005413f8
    FADD float ptr [EBX + 0x2508]       ; 005413fe
    PUSH EDI                            ; 00541404
    FSTP float ptr [EBX + 0x2508]       ; 00541405
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0054140b
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00541410
    ADD ESP,0x4                         ; 00541413
    CMP ESI,EAX                         ; 00541416
    JZ 0x00541426                       ; 00541418
        ;   XREF to: 00541426 (CONDITIONAL_JUMP)  ; LAB_00541426
    PUSH 0x1                            ; 0054141a
    PUSH ESI                            ; 0054141c
    PUSH EDI                            ; 0054141d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0054141e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00541423
    CMP dword ptr [EBX + 0xc1f0],0x0    ; 00541426
        ;   Label: LAB_00541426
    JZ 0x00540ef0                       ; 0054142d
        ;   XREF to: 00540ef0 (CONDITIONAL_JUMP)  ; caseD_8
    MOV dword ptr [EBX + 0xc1f0],0x0    ; 00541433
    MOV ECX,dword ptr [EBX + 0x1ffac]   ; 0054143d
    MOV EDX,dword ptr [EBX + 0x154]     ; 00541443
    TEST ECX,ECX                        ; 00541449
    SETZ AL                             ; 0054144b
    AND EAX,0xff                        ; 0054144e
    PUSH EAX                            ; 00541453
    PUSH EBX                            ; 00541454
    CALL dword ptr [EDX + 0x144]        ; 00541455
    ADD ESP,0x8                         ; 0054145b
    JMP 0x00540ef0                      ; 0054145e
        ;   XREF to: 00540ef0 (UNCONDITIONAL_JUMP)  ; caseD_8
    CMP dword ptr [EBX + 0xc1e0],0x0    ; 00541463
        ;   Label: LAB_00541463
    JZ 0x00541476                       ; 0054146a
        ;   XREF to: 00541476 (CONDITIONAL_JUMP)  ; LAB_00541476
    MOV ESI,0x2                         ; 0054146c
    JMP 0x00541367                      ; 00541471
        ;   XREF to: 00541367 (UNCONDITIONAL_JUMP)  ; LAB_00541367
    MOV ESI,0x1                         ; 00541476
        ;   Label: LAB_00541476
    JMP 0x00541367                      ; 0054147b
        ;   XREF to: 00541367 (UNCONDITIONAL_JUMP)  ; LAB_00541367
    MOV ESI,0x3                         ; 00541480
        ;   Label: LAB_00541480
    JMP 0x00541386                      ; 00541485
        ;   XREF to: 00541386 (UNCONDITIONAL_JUMP)  ; LAB_00541386
    MOV dword ptr [EBX + 0x26fc],EAX    ; 0054148a
        ;   Label: LAB_0054148a
    JMP 0x0054107f                      ; 00541490
        ;   XREF to: 0054107f (UNCONDITIONAL_JUMP)  ; LAB_0054107f
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 00541495
        ;   Label: LAB_00541495
    JZ 0x00541092                       ; 0054149c
        ;   XREF to: 00541092 (CONDITIONAL_JUMP)  ; LAB_00541092
    PUSH 0x1                            ; 005414a2
    PUSH 0xf                            ; 005414a4
    MOV ESI,dword ptr [ESP + 0xa0]      ; 005414a6
    PUSH ESI                            ; 005414ad
    JMP 0x0054108a                      ; 005414ae
        ;   XREF to: 0054108a (UNCONDITIONAL_JUMP)  ; LAB_0054108a
    LEA EAX,[EBX + 0x249c]              ; 005414b3
        ;   Label: LAB_005414b3
    LEA EDI,[ESP + 0x8c]                ; 005414b9
    LEA ESI,[ESP + 0x68]                ; 005414c0
    FLD float ptr [EAX]                 ; 005414c4
    FLD float ptr [EAX + 0x4]           ; 005414c6
    LEA EDX,[EBX + 0x250c]              ; 005414c9
    FLD float ptr [EAX + 0x8]           ; 005414cf
    FXCH ST2                            ; 005414d2
    FADD float ptr [EDX]                ; 005414d4
    FXCH                                ; 005414d6
    FADD float ptr [EDX + 0x4]          ; 005414d8
    FXCH ST2                            ; 005414db
    FADD float ptr [EDX + 0x8]          ; 005414dd
    FXCH                                ; 005414e0
    FSTP float ptr [ESP + 0x68]         ; 005414e2
    FXCH                                ; 005414e6
    FSTP float ptr [ESP + 0x6c]         ; 005414e8
    FSTP float ptr [ESP + 0x70]         ; 005414ec
    MOVSD ES:EDI,ESI                    ; 005414f0
    MOVSD ES:EDI,ESI                    ; 005414f1
    MOVSD ES:EDI,ESI                    ; 005414f2
    MOV dword ptr [EAX + 0x8],EBP       ; 005414f3
    PUSH dword ptr [ESP + 0xc4]         ; 005414f6
    MOV ECX,dword ptr [EAX + 0x8]       ; 005414fd
    MOV dword ptr [EAX + 0x4],ECX       ; 00541500
    MOV ECX,dword ptr [EAX + 0x4]       ; 00541503
    MOV dword ptr [EAX],ECX             ; 00541506
    MOV dword ptr [EDX + 0x8],EBP       ; 00541508
    PUSH EBX                            ; 0054150b
    MOV EAX,dword ptr [EDX + 0x8]       ; 0054150c
    MOV dword ptr [EDX + 0x4],EAX       ; 0054150f
    MOV EAX,dword ptr [EDX + 0x4]       ; 00541512
    MOV dword ptr [EDX],EAX             ; 00541515
    CALL core_charactr.cpp_FUN_0042d700 ; 00541517
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    LEA EAX,[EBX + 0x2518]              ; 0054151c
    ADD ESP,0x8                         ; 00541522
    FLD float ptr [EAX]                 ; 00541525
    FMUL float ptr [ESP + 0xc4]         ; 00541527
    FLD float ptr [EAX + 0x4]           ; 0054152e
    FMUL float ptr [ESP + 0xc4]         ; 00541531
    FLD float ptr [EAX + 0x8]           ; 00541538
    FMUL float ptr [ESP + 0xc4]         ; 0054153b
    LEA EDI,[ESP + 0x38]                ; 00541542
    LEA ESI,[ESP + 0x5c]                ; 00541546
    FLD float ptr [ESP + 0x8c]          ; 0054154a
    FLD float ptr [ESP + 0x90]          ; 00541551
    FLD float ptr [ESP + 0x94]          ; 00541558
    LEA EAX,[ESP + 0x8c]                ; 0054155f
    FXCH ST5                            ; 00541566
    FSTP float ptr [ESP + 0x5c]         ; 00541568
    FXCH ST3                            ; 0054156c
    FSTP float ptr [ESP + 0x60]         ; 0054156e
    FXCH                                ; 00541572
    FSTP float ptr [ESP + 0x64]         ; 00541574
    PUSH EAX                            ; 00541578
    MOVSD ES:EDI,ESI                    ; 00541579
    MOVSD ES:EDI,ESI                    ; 0054157a
    MOVSD ES:EDI,ESI                    ; 0054157b
    PUSH EBX                            ; 0054157c
    FADD float ptr [ESP + 0x40]         ; 0054157d
    FXCH                                ; 00541581
    FADD float ptr [ESP + 0x44]         ; 00541583
    FXCH ST2                            ; 00541587
    FADD float ptr [ESP + 0x48]         ; 00541589
    FXCH                                ; 0054158d
    FSTP float ptr [ESP + 0x94]         ; 0054158f
    FXCH                                ; 00541596
    FSTP float ptr [ESP + 0x98]         ; 00541598
    FSTP float ptr [ESP + 0x9c]         ; 0054159f
    CALL core_charactr.cpp_FUN_0042d750 ; 005415a6
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 005415ab
    JMP 0x00541092                      ; 005415ae
        ;   XREF to: 00541092 (UNCONDITIONAL_JUMP)  ; LAB_00541092

