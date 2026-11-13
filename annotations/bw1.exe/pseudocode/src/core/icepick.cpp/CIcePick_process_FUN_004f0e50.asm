; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f0e50(CIcePick *this_ptr,float delta_time)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_004f0e38 = 004f1459
;   TerminatedCString s_s_confused_while_walking_005e5363
;   TerminatedCString s_icepick_miss_wav_005e538d
;   undefined4 DAT_005e539f
;   undefined4 DAT_005e53a3
;   undefined4 DAT_005e53a7
;   undefined4 DAT_005e53ab
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d06c74
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
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
;   core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0
;   core_hero.cpp_CHero_tryInteract_FUN_004eb090
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0
;   core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240
;   ... and 17 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0e50
        ;   Label: core_icepick.cpp_CIcePick_process_FUN_004f0e50
    PUSH ESI                            ; 004f0e51
    PUSH EDI                            ; 004f0e52
    PUSH EBP                            ; 004f0e53
    SUB ESP,0xb8                        ; 004f0e54
    MOV EBX,dword ptr [ESP + 0xcc]      ; 004f0e5a
    PUSH dword ptr [ESP + 0xd0]         ; 004f0e61
    PUSH EBX                            ; 004f0e68
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 004f0e69
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f0e6e
    TEST EAX,EAX                        ; 004f0e71
    JZ 0x004f11ee                       ; 004f0e73
        ;   XREF to: 004f11ee (CONDITIONAL_JUMP)  ; LAB_004f11ee
    CMP dword ptr [EBX + 0x1ffa8],0x4   ; 004f0e79
    JZ 0x004f11ee                       ; 004f0e80
        ;   XREF to: 004f11ee (CONDITIONAL_JUMP)  ; LAB_004f11ee
    CMP dword ptr [EBX + 0xc1d4],0x2    ; 004f0e86
    JZ 0x004f11f9                       ; 004f0e8d
        ;   XREF to: 004f11f9 (CONDITIONAL_JUMP)  ; LAB_004f11f9
    CMP dword ptr [EBX + 0x2628],0x0    ; 004f0e93
        ;   Label: LAB_004f0e93
    SETNZ AL                            ; 004f0e9a
    PUSH dword ptr [ESP + 0xd0]         ; 004f0e9d
    AND EAX,0xff                        ; 004f0ea4
    PUSH EBX                            ; 004f0ea9
    MOV dword ptr [EBX + 0x1ffcc],EAX   ; 004f0eaa
    CALL core_charactr.cpp_FUN_00435320 ; 004f0eb0
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 004f0eb5
    FLD float ptr [EBX + 0xc1d0]        ; 004f0eb8
    FSUB float ptr [ESP + 0xd0]         ; 004f0ebe
    FST float ptr [EBX + 0xc1d0]        ; 004f0ec5
    FLDZ                                ; 004f0ecb
    FCOMPP                              ; 004f0ecd
    FNSTSW AX                           ; 004f0ecf
    SAHF                                ; 004f0ed1
    JBE 0x004f0ede                      ; 004f0ed2
        ;   XREF to: 004f0ede (CONDITIONAL_JUMP)  ; LAB_004f0ede
    MOV dword ptr [EBX + 0xc1d0],0x0    ; 004f0ed4
    LEA ESI,[EBX + 0x249c]              ; 004f0ede
        ;   Label: LAB_004f0ede
    PUSH dword ptr [ESP + 0xd0]         ; 004f0ee4
    MOV dword ptr [ESI + 0x8],0x0       ; 004f0eeb
    PUSH EBX                            ; 004f0ef2
    MOV EAX,dword ptr [ESI + 0x8]       ; 004f0ef3
    MOV dword ptr [ESI + 0x4],EAX       ; 004f0ef6
    MOV EAX,dword ptr [ESI + 0x4]       ; 004f0ef9
    MOV dword ptr [ESI],EAX             ; 004f0efc
    CALL core_icepick.cpp_CIcePick_processMotionEvents_FUN_004f2340 ; 004f0efe
        ;   XREF to: 004f2340 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_CIcePick_processMotionEvents_FUN_004f2340(CIcePick * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f0f03
    PUSH dword ptr [ESP + 0xd0]         ; 004f0f06
    FLD float ptr [EBX + 0x24a4]        ; 004f0f0d
    PUSH EBX                            ; 004f0f13
    FSTP float ptr [EBX + 0x2524]       ; 004f0f14
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 004f0f1a
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f0f1f
    LEA EDX,[EBX + 0x158]               ; 004f0f22
    TEST EAX,EAX                        ; 004f0f28
    JZ 0x004f14c7                       ; 004f0f2a
        ;   XREF to: 004f14c7 (CONDITIONAL_JUMP)  ; LAB_004f14c7
    MOV dword ptr [ESI + 0x8],0x0       ; 004f0f30
    MOV EAX,dword ptr [ESI + 0x8]       ; 004f0f37
    MOV dword ptr [ESI + 0x4],EAX       ; 004f0f3a
    MOV EAX,dword ptr [ESI + 0x4]       ; 004f0f3d
    MOV dword ptr [ESI],EAX             ; 004f0f40
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004f0f42
    CMP EAX,0x2                         ; 004f0f48
    JNC 0x004f123b                      ; 004f0f4b
        ;   XREF to: 004f123b (CONDITIONAL_JUMP)  ; LAB_004f123b
    CMP EAX,0x1                         ; 004f0f51
    JNZ 0x004f1242                      ; 004f0f54
        ;   XREF to: 004f1242 (CONDITIONAL_JUMP)  ; LAB_004f1242
    PUSH EAX                            ; 004f0f5a
    PUSH EAX                            ; 004f0f5b
    PUSH EDX                            ; 004f0f5c
        ;   Label: LAB_004f0f5c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f0f5d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004f0f5d
    ADD ESP,0xc                         ; 004f0f62
        ;   Label: LAB_004f0f62
    MOV EDI,dword ptr [EBX + 0x26fc]    ; 004f0f65
        ;   Label: LAB_004f0f65
    TEST EDI,EDI                        ; 004f0f6b
    JZ 0x004f1565                       ; 004f0f6d
        ;   XREF to: 004f1565 (CONDITIONAL_JUMP)  ; LAB_004f1565
    CMP dword ptr [EBX + 0x2700],0x0    ; 004f0f73
    JNZ 0x004f109b                      ; 004f0f7a
        ;   XREF to: 004f109b (CONDITIONAL_JUMP)  ; LAB_004f109b
    LEA EAX,[EDI + 0x20]                ; 004f0f80
    PUSH EAX                            ; 004f0f83
    PUSH EBX                            ; 004f0f84
    LEA ESI,[ESP + 0x88]                ; 004f0f85
    LEA EDI,[ESP + 0x70]                ; 004f0f8c
    CALL core_actor.cpp_FUN_00408bb0    ; 004f0f90
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x88]                ; 004f0f95
    ADD ESP,0x8                         ; 004f0f9c
    LEA EAX,[ESP + 0x68]                ; 004f0f9f
    MOVSD ES:EDI,ESI                    ; 004f0fa3
    MOVSD ES:EDI,ESI                    ; 004f0fa4
    MOVSD ES:EDI,ESI                    ; 004f0fa5
    PUSH EAX                            ; 004f0fa6
    LEA ESI,[ESP + 0x3c]                ; 004f0fa7
    LEA EDI,[ESP + 0x78]                ; 004f0fab
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004f0faf
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x3c]                ; 004f0fb4
    ADD ESP,0x4                         ; 004f0fb8
    MOVSD ES:EDI,ESI                    ; 004f0fbb
    MOVSD ES:EDI,ESI                    ; 004f0fbc
    MOVSD ES:EDI,ESI                    ; 004f0fbd
    PUSH dword ptr [ESP + 0x78]         ; 004f0fbe
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004f0fc2
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0xa8],EAX      ; 004f0fc7
    FLD float ptr [ESP + 0xa8]          ; 004f0fce
    ADD ESP,0x4                         ; 004f0fd5
    FST float ptr [ESP + 0xb4]          ; 004f0fd8
    FCOMP float ptr [0x005e539f]        ; 004f0fdf | DAT_005e539f
    FNSTSW AX                           ; 004f0fe5
    SAHF                                ; 004f0fe7
    JNC 0x004f0ffe                      ; 004f0fe8
        ;   XREF to: 004f0ffe (CONDITIONAL_JUMP)  ; LAB_004f0ffe
    FLD float ptr [ESP + 0xb4]          ; 004f0fea
    FADD float ptr [0x005e53a3]         ; 004f0ff1 | DAT_005e53a3
    FSTP float ptr [ESP + 0xb4]         ; 004f0ff7
    FLD float ptr [ESP + 0xb4]          ; 004f0ffe
        ;   Label: LAB_004f0ffe
    FCOMP float ptr [0x005e53a7]        ; 004f1005 | DAT_005e53a7
    FNSTSW AX                           ; 004f100b
    SAHF                                ; 004f100d
    JBE 0x004f1024                      ; 004f100e
        ;   XREF to: 004f1024 (CONDITIONAL_JUMP)  ; LAB_004f1024
    FLD float ptr [ESP + 0xb4]          ; 004f1010
    FADD float ptr [0x005e53ab]         ; 004f1017 | DAT_005e53ab
    FSTP float ptr [ESP + 0xb4]         ; 004f101d
    FLD float ptr [ESP + 0xd0]          ; 004f1024
        ;   Label: LAB_004f1024
    FMUL float ptr [0x005e53a3]         ; 004f102b | DAT_005e53a3
    FLD float ptr [ESP + 0xb4]          ; 004f1031
    FXCH                                ; 004f1038
    FST float ptr [ESP + 0xb0]          ; 004f103a
    FCHS                                ; 004f1041
    FSTP float ptr [ESP + 0xa8]         ; 004f1043
    FCOMP float ptr [ESP + 0xa8]        ; 004f104a
    FNSTSW AX                           ; 004f1051
    SAHF                                ; 004f1053
    JNC 0x004f1064                      ; 004f1054
        ;   XREF to: 004f1064 (CONDITIONAL_JUMP)  ; LAB_004f1064
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004f1056
    MOV dword ptr [ESP + 0xb4],EAX      ; 004f105d
    FLD float ptr [ESP + 0xb4]          ; 004f1064
        ;   Label: LAB_004f1064
    FCOMP float ptr [ESP + 0xb0]        ; 004f106b
    FNSTSW AX                           ; 004f1072
    SAHF                                ; 004f1074
    JBE 0x004f1085                      ; 004f1075
        ;   XREF to: 004f1085 (CONDITIONAL_JUMP)  ; LAB_004f1085
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004f1077
    MOV dword ptr [ESP + 0xb4],EAX      ; 004f107e
    FLD float ptr [EBX + 0x34]          ; 004f1085
        ;   Label: LAB_004f1085
    FADD float ptr [ESP + 0xb4]         ; 004f1088
    PUSH EBX                            ; 004f108f
    FSTP float ptr [EBX + 0x34]         ; 004f1090
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 004f1093
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f1098
    MOV EBP,dword ptr [EBX + 0x26fc]    ; 004f109b
        ;   Label: LAB_004f109b
    MOV EAX,dword ptr [EBP + 0x154]     ; 004f10a1
    PUSH 0x0                            ; 004f10a7
    MOV dword ptr [ESP + 0xa8],EAX      ; 004f10a9
    LEA EAX,[EBX + 0x158]               ; 004f10b0
    PUSH EAX                            ; 004f10b6
    LEA ESI,[ESP + 0xa0]                ; 004f10b7
    MOV dword ptr [ESP + 0xb4],EAX      ; 004f10be
    CALL core_skeleton.cpp_FUN_00569130 ; 004f10c5
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 004f10ca
    LEA EAX,[ESP + 0x50]                ; 004f10cd
    PUSH EAX                            ; 004f10d1
    LEA EDI,[ESP + 0x54]                ; 004f10d2
    PUSH EBX                            ; 004f10d6
    LEA ESI,[ESP + 0xa0]                ; 004f10d7
    MOV EAX,dword ptr [ESP + 0xac]      ; 004f10de
    PUSH EBP                            ; 004f10e5
    MOVSD ES:EDI,ESI                    ; 004f10e6
    MOVSD ES:EDI,ESI                    ; 004f10e7
    MOVSD ES:EDI,ESI                    ; 004f10e8
    CALL dword ptr [EAX + 0x110]        ; 004f10e9
    ADD ESP,0xc                         ; 004f10ef
    TEST EAX,EAX                        ; 004f10f2
    JZ 0x004f153d                       ; 004f10f4
        ;   XREF to: 004f153d (CONDITIONAL_JUMP)  ; LAB_004f153d
    CMP dword ptr [EBX + 0x26fc],0x0    ; 004f10fa
    JNZ 0x004f1548                      ; 004f1101
        ;   XREF to: 004f1548 (CONDITIONAL_JUMP)  ; LAB_004f1548
    PUSH 0x1                            ; 004f1107
        ;   Label: LAB_004f1107
    PUSH 0x0                            ; 004f1109
    LEA EAX,[EBX + 0x158]               ; 004f110b
    PUSH EAX                            ; 004f1111
        ;   Label: LAB_004f1111
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f1112
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f1117
    LEA EAX,[EBX + 0x1fae8]             ; 004f111a
        ;   Label: LAB_004f111a
    PUSH EAX                            ; 004f1120
    CALL core_inv.cpp_FUN_004f9f10      ; 004f1121
        ;   XREF to: 004f9f10 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f9f10()
    ADD ESP,0x4                         ; 004f1126
    MOV EDX,dword ptr [0x02c99770]      ; 004f1129 | g_CWeaponClassInfo.name_hash
    PUSH EDX                            ; 004f112f
    MOV ECX,dword ptr [EBX + 0x2628]    ; 004f1130
    PUSH ECX                            ; 004f1136
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f1137
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004f113c
    ADD ESP,0x8                         ; 004f113e
    TEST EAX,EAX                        ; 004f1141
    JZ 0x004f1163                       ; 004f1143
        ;   XREF to: 004f1163 (CONDITIONAL_JUMP)  ; LAB_004f1163
    PUSH dword ptr [ESP + 0xd0]         ; 004f1145
    MOV EAX,dword ptr [EAX + 0x154]     ; 004f114c
    PUSH ESI                            ; 004f1152
    CALL dword ptr [EAX + 0xc]          ; 004f1153
    ADD ESP,0x8                         ; 004f1156
    MOV dword ptr [ESI + 0x568],0x64    ; 004f1159
    PUSH EBX                            ; 004f1163
        ;   Label: LAB_004f1163
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 004f1164
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f1169
    LEA EBP,[EBX + 0x158]               ; 004f116c
    PUSH EBP                            ; 004f1172
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 004f1173
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f1178
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f117b
    PUSH EBX                            ; 004f1181
    CALL dword ptr [EAX + 0x10c]        ; 004f1182
    ADD ESP,0x4                         ; 004f1188
    TEST EAX,EAX                        ; 004f118b
    JNZ 0x004f11ce                      ; 004f118d
        ;   XREF to: 004f11ce (CONDITIONAL_JUMP)  ; LAB_004f11ce
    PUSH 0x567360                       ; 004f118f
    MOV ESI,dword ptr [0x01d06c74]      ; 004f1194 | DAT_01d06c74
    PUSH ESI                            ; 004f119a
    LEA EAX,[EBX + 0x1ffbc]             ; 004f119b
    PUSH dword ptr [EBX + 0x1ffc8]      ; 004f11a1
    PUSH EAX                            ; 004f11a7
    LEA ESI,[ESP + 0x10]                ; 004f11a8
    CALL core_xform.cpp_FUN_005b7ed0    ; 004f11ac
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7ed0()
    ADD ESP,0x4                         ; 004f11b1
    LEA EAX,[ESP + 0x1c]                ; 004f11b4
    PUSH EAX                            ; 004f11b8
    LEA EDI,[ESP + 0x20]                ; 004f11b9
    LEA ESI,[ESP + 0x10]                ; 004f11bd
    PUSH EBP                            ; 004f11c1
    MOVSD ES:EDI,ESI                    ; 004f11c2
    MOVSD ES:EDI,ESI                    ; 004f11c3
    MOVSD ES:EDI,ESI                    ; 004f11c4
    MOVSD ES:EDI,ESI                    ; 004f11c5
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60 ; 004f11c6
        ;   XREF to: 00568d60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004f11cb
    PUSH dword ptr [ESP + 0xd0]         ; 004f11ce
        ;   Label: LAB_004f11ce
    PUSH EBX                            ; 004f11d5
    CALL core_icepick.cpp_FUN_004f1670  ; 004f11d6
        ;   XREF to: 004f1670 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_FUN_004f1670(CIcePick * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f11db
    PUSH dword ptr [ESP + 0xd0]         ; 004f11de
    PUSH EBX                            ; 004f11e5
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 004f11e6
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f11eb
    ADD ESP,0xb8                        ; 004f11ee
        ;   Label: LAB_004f11ee
    POP EBP                             ; 004f11f4
    POP EDI                             ; 004f11f5
    POP ESI                             ; 004f11f6
    POP EBX                             ; 004f11f7
    RET                                 ; 004f11f8
    PUSH dword ptr [ESP + 0xd0]         ; 004f11f9
        ;   Label: LAB_004f11f9
    PUSH EBX                            ; 004f1200
    CALL core_icepick.cpp_FUN_004f1b50  ; 004f1201
        ;   XREF to: 004f1b50 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_FUN_004f1b50(CIcePick * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f1206
    JMP 0x004f0e93                      ; 004f1209
        ;   XREF to: 004f0e93 (UNCONDITIONAL_JUMP)  ; LAB_004f0e93
    PUSH 0x1                            ; 004f120e
        ;   Label: LAB_004f120e
    PUSH 0x0                            ; 004f1210
    PUSH EDX                            ; 004f1212
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f1213
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f1218
    PUSH EBX                            ; 004f121b
    PUSH 0x5e5363                       ; 004f121c | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00611100]      ; 004f1221 | g_CConsolePtr
    PUSH ESI                            ; 004f1227 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004f1228
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x004f0f62                      ; 004f122d
        ;   XREF to: 004f0f62 (UNCONDITIONAL_JUMP)  ; LAB_004f0f62
    PUSH 0x1                            ; 004f1232
        ;   Label: LAB_004f1232
    PUSH 0x2                            ; 004f1234
    JMP 0x004f0f5c                      ; 004f1236
        ;   XREF to: 004f0f5c (UNCONDITIONAL_JUMP)  ; LAB_004f0f5c
    JBE 0x004f1232                      ; 004f123b
        ;   XREF to: 004f1232 (CONDITIONAL_JUMP)  ; LAB_004f1232
        ;   Label: LAB_004f123b
    CMP EAX,0x3                         ; 004f123d
    JZ 0x004f120e                       ; 004f1240
        ;   XREF to: 004f120e (CONDITIONAL_JUMP)  ; LAB_004f120e
    PUSH 0x1                            ; 004f1242
        ;   Label: LAB_004f1242
    PUSH 0x0                            ; 004f1244
    LEA EAX,[EBX + 0x158]               ; 004f1246
    PUSH EAX                            ; 004f124c
    JMP 0x004f0f5d                      ; 004f124d
        ;   XREF to: 004f0f5d (UNCONDITIONAL_JUMP)  ; LAB_004f0f5d
    CMP dword ptr [EBX + 0x2500],0x0    ; 004f1252
        ;   Label: LAB_004f1252
    JZ 0x004f0f65                       ; 004f1259
        ;   XREF to: 004f0f65 (CONDITIONAL_JUMP)  ; LAB_004f0f65
    MOV EBP,dword ptr [EBX + 0x1ffac]   ; 004f125f
    XOR ESI,ESI                         ; 004f1265
    TEST EBP,EBP                        ; 004f1267
    JZ 0x004f1278                       ; 004f1269
        ;   XREF to: 004f1278 (CONDITIONAL_JUMP)  ; LAB_004f1278
    CMP dword ptr [EBX + 0x1ffcc],0x0   ; 004f126b
    JZ 0x004f13c2                       ; 004f1272
        ;   XREF to: 004f13c2 (CONDITIONAL_JUMP)  ; LAB_004f13c2
    CMP dword ptr [EBX + 0xc1d8],0x0    ; 004f1278
        ;   Label: LAB_004f1278
    JZ 0x004f1293                       ; 004f127f
        ;   XREF to: 004f1293 (CONDITIONAL_JUMP)  ; LAB_004f1293
    CMP dword ptr [EBX + 0xc1e0],0x0    ; 004f1281
    JZ 0x004f13cc                       ; 004f1288
        ;   XREF to: 004f13cc (CONDITIONAL_JUMP)  ; LAB_004f13cc
    MOV ESI,0x2                         ; 004f128e
    CMP dword ptr [EBX + 0xc1dc],0x0    ; 004f1293
        ;   Label: LAB_004f1293
    JZ 0x004f12a1                       ; 004f129a
        ;   XREF to: 004f12a1 (CONDITIONAL_JUMP)  ; LAB_004f12a1
    MOV ESI,0x3                         ; 004f129c
    CMP dword ptr [EBX + 0xc1f0],0x0    ; 004f12a1
        ;   Label: LAB_004f12a1
    JZ 0x004f12db                       ; 004f12a8
        ;   XREF to: 004f12db (CONDITIONAL_JUMP)  ; LAB_004f12db
    MOV EDX,dword ptr [EBX + 0x1ffac]   ; 004f12aa
    MOV dword ptr [EBX + 0xc1f0],0x0    ; 004f12b0
    TEST EDX,EDX                        ; 004f12ba
    SETZ AL                             ; 004f12bc
    AND EAX,0xff                        ; 004f12bf
    MOV dword ptr [EBX + 0x1ffac],EAX   ; 004f12c4
    JZ 0x004f12d9                       ; 004f12ca
        ;   XREF to: 004f12d9 (CONDITIONAL_JUMP)  ; LAB_004f12d9
    CMP dword ptr [EBX + 0x1ffcc],0x0   ; 004f12cc
    JZ 0x004f13d6                       ; 004f12d3
        ;   XREF to: 004f13d6 (CONDITIONAL_JUMP)  ; LAB_004f13d6
    XOR ESI,ESI                         ; 004f12d9
        ;   Label: LAB_004f12d9
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 004f12db
        ;   Label: LAB_004f12db
    JZ 0x004f133c                       ; 004f12e2
        ;   XREF to: 004f133c (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0x1ffac]   ; 004f12e4
    MOV EBP,0x1                         ; 004f12ea
    TEST EAX,EAX                        ; 004f12ef
    JZ 0x004f13e0                       ; 004f12f1
        ;   XREF to: 004f13e0 (CONDITIONAL_JUMP)  ; LAB_004f13e0
    TEST EBP,EBP                        ; 004f12f7
        ;   Label: LAB_004f12f7
    JZ 0x004f133c                       ; 004f12f9
        ;   XREF to: 004f133c (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 004f12fb
        ;   Label: LAB_004f12fb
    JZ 0x004f133c                       ; 004f1302
        ;   XREF to: 004f133c (CONDITIONAL_JUMP)  ; default
    MOV EDI,dword ptr [EBX + 0x1ffcc]   ; 004f1304
    TEST EDI,EDI                        ; 004f130a
    JZ 0x004f1477                       ; 004f130c
        ;   XREF to: 004f1477 (CONDITIONAL_JUMP)  ; LAB_004f1477
    MOV EBP,dword ptr [0x02c99770]      ; 004f1312 | g_CWeaponClassInfo.name_hash
    PUSH EBP                            ; 004f1318
    MOV EAX,dword ptr [EBX + 0x2628]    ; 004f1319
    PUSH EAX                            ; 004f131f
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f1320
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f1325
    TEST EAX,EAX                        ; 004f1328
    JZ 0x004f133c                       ; 004f132a
        ;   XREF to: 004f133c (CONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 004f132c
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f132d
    CALL dword ptr [EDX + 0xe4]         ; 004f1333
    ADD ESP,0x4                         ; 004f1339
    FLD float ptr [EBX + 0xc200]        ; 004f133c
        ;   Label: default
    LEA EAX,[EBX + 0x158]               ; 004f1342
    FMUL float ptr [EBX + 0x2528]       ; 004f1348
    PUSH EAX                            ; 004f134e
    FSTP float ptr [EBX + 0x2508]       ; 004f134f
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004f1355
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f135a
    ADD ESP,0x4                         ; 004f135d
    CMP ESI,EAX                         ; 004f1360
    JZ 0x004f1396                       ; 004f1362
        ;   XREF to: 004f1396 (CONDITIONAL_JUMP)  ; LAB_004f1396
    CMP ESI,0xe                         ; 004f1364
    JNZ 0x004f1493                      ; 004f1367
        ;   XREF to: 004f1493 (CONDITIONAL_JUMP)  ; LAB_004f1493
    MOV EDX,dword ptr [EBX + 0x1ffb4]   ; 004f136d
        ;   Label: LAB_004f136d
    PUSH EDX                            ; 004f1373
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 004f1374
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004f1379
    TEST EAX,EAX                        ; 004f137c
    JZ 0x004f14aa                       ; 004f137e
        ;   XREF to: 004f14aa (CONDITIONAL_JUMP)  ; LAB_004f14aa
    PUSH 0x1                            ; 004f1384
        ;   Label: LAB_004f1384
    PUSH ESI                            ; 004f1386
    LEA EAX,[EBX + 0x158]               ; 004f1387
    PUSH EAX                            ; 004f138d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f138e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f1393
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 004f1396
        ;   Label: LAB_004f1396
    JZ 0x004f0f65                       ; 004f139d
        ;   XREF to: 004f0f65 (CONDITIONAL_JUMP)  ; LAB_004f0f65
    PUSH EBX                            ; 004f13a3
    CALL core_icepick.cpp_FUN_004f17e0  ; 004f13a4
        ;   XREF to: 004f17e0 (UNCONDITIONAL_CALL)  ; int core_icepick.cpp_FUN_004f17e0(CIcePick * this_ptr)
    ADD ESP,0x4                         ; 004f13a9
    TEST EAX,EAX                        ; 004f13ac
    JNZ 0x004f0f65                      ; 004f13ae
        ;   XREF to: 004f0f65 (CONDITIONAL_JUMP)  ; LAB_004f0f65
    PUSH EBX                            ; 004f13b4
    CALL core_icepick.cpp_CIcePick_startThrowAttack_FUN_004f1980 ; 004f13b5
        ;   XREF to: 004f1980 (UNCONDITIONAL_CALL)  ; int core_icepick.cpp_CIcePick_startThrowAttack_FUN_004f1980(CIcePick * this_ptr)
    ADD ESP,0x4                         ; 004f13ba
    JMP 0x004f0f65                      ; 004f13bd
        ;   XREF to: 004f0f65 (UNCONDITIONAL_JUMP)  ; LAB_004f0f65
    MOV ESI,0xa                         ; 004f13c2
        ;   Label: LAB_004f13c2
    JMP 0x004f1278                      ; 004f13c7
        ;   XREF to: 004f1278 (UNCONDITIONAL_JUMP)  ; LAB_004f1278
    MOV ESI,0x1                         ; 004f13cc
        ;   Label: LAB_004f13cc
    JMP 0x004f1293                      ; 004f13d1
        ;   XREF to: 004f1293 (UNCONDITIONAL_JUMP)  ; LAB_004f1293
    MOV ESI,0xa                         ; 004f13d6
        ;   Label: LAB_004f13d6
    JMP 0x004f12db                      ; 004f13db
        ;   XREF to: 004f12db (UNCONDITIONAL_JUMP)  ; LAB_004f12db
    CMP dword ptr [EBX + 0xc1d4],0x2    ; 004f13e0
        ;   Label: LAB_004f13e0
    JZ 0x004f12f7                       ; 004f13e7
        ;   XREF to: 004f12f7 (CONDITIONAL_JUMP)  ; LAB_004f12f7
    PUSH EBX                            ; 004f13ed
    CALL core_hero.cpp_CHero_tryInteract_FUN_004eb090 ; 004f13ee
        ;   XREF to: 004eb090 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryInteract_FUN_004eb090(CHero * this_ptr)
    XOR EBP,EBP                         ; 004f13f3
    ADD ESP,0x4                         ; 004f13f5
    TEST EAX,EAX                        ; 004f13f8
    JNZ 0x004f12f7                      ; 004f13fa
        ;   XREF to: 004f12f7 (CONDITIONAL_JUMP)  ; LAB_004f12f7
    PUSH EAX                            ; 004f1400
    PUSH EBX                            ; 004f1401
    CALL core_hero.cpp_FUN_004eb3e0     ; 004f1402
        ;   XREF to: 004eb3e0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb3e0()
    ADD ESP,0x8                         ; 004f1407
    MOV EDI,EAX                         ; 004f140a
    TEST EAX,EAX                        ; 004f140c
    JBE 0x004f1415                      ; 004f140e
        ;   XREF to: 004f1415 (CONDITIONAL_JUMP)  ; LAB_004f1415
    CMP EAX,0x1                         ; 004f1410
    JNZ 0x004f1440                      ; 004f1413
        ;   XREF to: 004f1440 (CONDITIONAL_JUMP)  ; LAB_004f1440
    TEST EDI,EDI                        ; 004f1415
        ;   Label: LAB_004f1415
    JNZ 0x004f12f7                      ; 004f1417
        ;   XREF to: 004f12f7 (CONDITIONAL_JUMP)  ; LAB_004f12f7
    PUSH EBX                            ; 004f141d
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240 ; 004f141e
        ;   XREF to: 004eb240 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240(CHero * this_ptr)
    ADD ESP,0x4                         ; 004f1423
    TEST EAX,EAX                        ; 004f1426
    JNZ 0x004f12f7                      ; 004f1428
        ;   XREF to: 004f12f7 (CONDITIONAL_JUMP)  ; LAB_004f12f7
    PUSH EBX                            ; 004f142e
    CALL core_hero.cpp_FUN_004eb660     ; 004f142f
        ;   XREF to: 004eb660 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004eb660(CHero * this_ptr)
    ADD ESP,0x4                         ; 004f1434
    TEST EAX,EAX                        ; 004f1437
    JNZ 0x004f144b                      ; 004f1439
        ;   XREF to: 004f144b (CONDITIONAL_JUMP)  ; LAB_004f144b
    JMP 0x004f12fb                      ; 004f143b
        ;   XREF to: 004f12fb (UNCONDITIONAL_JUMP)  ; LAB_004f12fb
    PUSH EBX                            ; 004f1440
        ;   Label: LAB_004f1440
    CALL core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0 ; 004f1441
        ;   XREF to: 004eb5e0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004f1446
    JMP 0x004f1415                      ; 004f1449
        ;   XREF to: 004f1415 (UNCONDITIONAL_JUMP)  ; LAB_004f1415
    PUSH EBX                            ; 004f144b
        ;   Label: LAB_004f144b
    CALL core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0 ; 004f144c
        ;   XREF to: 004eb7f0 (UNCONDITIONAL_CALL)  ; undefined4 core_hero.cpp_CHero_toggleLeverNow_FUN_004eb7f0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004f1451
    JMP 0x004f12f7                      ; 004f1454
        ;   XREF to: 004f12f7 (UNCONDITIONAL_JUMP)  ; LAB_004f12f7
    MOV ESI,0xe                         ; 004f1459
        ;   Label: caseD_0
    JMP 0x004f133c                      ; 004f145e
        ;   XREF to: 004f133c (UNCONDITIONAL_JUMP)  ; default
    MOV ESI,0xf                         ; 004f1463
        ;   Label: caseD_1
    JMP 0x004f133c                      ; 004f1468
        ;   XREF to: 004f133c (UNCONDITIONAL_JUMP)  ; default
    MOV ESI,0x10                        ; 004f146d
        ;   Label: caseD_4
    JMP 0x004f133c                      ; 004f1472
        ;   XREF to: 004f133c (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0x1ffb0]   ; 004f1477
        ;   Label: LAB_004f1477
    MOV dword ptr [EBX + 0xc1e4],EDI    ; 004f147d
    CMP EAX,0x4                         ; 004f1483
    JA 0x004f133c                       ; 004f1486
        ;   XREF to: 004f133c (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4f0e38]  ; 004f148c | caseD_2 | caseD_3 | caseD_4
        ;   Label: switchD
    CMP ESI,0xf                         ; 004f1493
        ;   Label: LAB_004f1493
    JZ 0x004f136d                       ; 004f1496
        ;   XREF to: 004f136d (CONDITIONAL_JUMP)  ; LAB_004f136d
    CMP ESI,0x10                        ; 004f149c
    JZ 0x004f136d                       ; 004f149f
        ;   XREF to: 004f136d (CONDITIONAL_JUMP)  ; LAB_004f136d
    JMP 0x004f1384                      ; 004f14a5
        ;   XREF to: 004f1384 (UNCONDITIONAL_JUMP)  ; LAB_004f1384
    PUSH 0x5e538d                       ; 004f14aa | = "icepick-miss?.wav"
        ;   Label: LAB_004f14aa
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f14af
    PUSH EBX                            ; 004f14b5
    CALL dword ptr [EAX + 0x2c]         ; 004f14b6
    ADD ESP,0x8                         ; 004f14b9
    MOV dword ptr [EBX + 0x1ffb4],EAX   ; 004f14bc
    JMP 0x004f1384                      ; 004f14c2
        ;   XREF to: 004f1384 (UNCONDITIONAL_JUMP)  ; LAB_004f1384
    PUSH EDX                            ; 004f14c7
        ;   Label: LAB_004f14c7
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004f14c8
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f14cd
    ADD ESP,0x4                         ; 004f14d0
    CMP EAX,0x9                         ; 004f14d3
    JNC 0x004f14ea                      ; 004f14d6
        ;   XREF to: 004f14ea (CONDITIONAL_JUMP)  ; LAB_004f14ea
    CMP EAX,0x1                         ; 004f14d8
    JNC 0x004f1520                      ; 004f14db
        ;   XREF to: 004f1520 (CONDITIONAL_JUMP)  ; LAB_004f1520
    TEST EAX,EAX                        ; 004f14dd
    JZ 0x004f1252                       ; 004f14df
        ;   XREF to: 004f1252 (CONDITIONAL_JUMP)  ; LAB_004f1252
    JMP 0x004f0f65                      ; 004f14e5
        ;   XREF to: 004f0f65 (UNCONDITIONAL_JUMP)  ; LAB_004f0f65
    JBE 0x004f11ee                      ; 004f14ea
        ;   XREF to: 004f11ee (CONDITIONAL_JUMP)  ; LAB_004f11ee
        ;   Label: LAB_004f14ea
    CMP EAX,0xf                         ; 004f14f0
    JNC 0x004f1503                      ; 004f14f3
        ;   XREF to: 004f1503 (CONDITIONAL_JUMP)  ; LAB_004f1503
    CMP EAX,0xa                         ; 004f14f5
    JBE 0x004f1252                      ; 004f14f8
        ;   XREF to: 004f1252 (CONDITIONAL_JUMP)  ; LAB_004f1252
    JMP 0x004f0f65                      ; 004f14fe
        ;   XREF to: 004f0f65 (UNCONDITIONAL_JUMP)  ; LAB_004f0f65
    JBE 0x004f0f65                      ; 004f1503
        ;   XREF to: 004f0f65 (CONDITIONAL_JUMP)  ; LAB_004f0f65
        ;   Label: LAB_004f1503
    CMP EAX,0x10                        ; 004f1509
    JBE 0x004f0f65                      ; 004f150c
        ;   XREF to: 004f0f65 (CONDITIONAL_JUMP)  ; LAB_004f0f65
    CMP EAX,0x15                        ; 004f1512
    JZ 0x004f1252                       ; 004f1515
        ;   XREF to: 004f1252 (CONDITIONAL_JUMP)  ; LAB_004f1252
    JMP 0x004f0f65                      ; 004f151b
        ;   XREF to: 004f0f65 (UNCONDITIONAL_JUMP)  ; LAB_004f0f65
    JBE 0x004f1252                      ; 004f1520
        ;   XREF to: 004f1252 (CONDITIONAL_JUMP)  ; LAB_004f1252
        ;   Label: LAB_004f1520
    CMP EAX,0x2                         ; 004f1526
    JBE 0x004f1252                      ; 004f1529
        ;   XREF to: 004f1252 (CONDITIONAL_JUMP)  ; LAB_004f1252
    CMP EAX,0x3                         ; 004f152f
    JZ 0x004f1252                       ; 004f1532
        ;   XREF to: 004f1252 (CONDITIONAL_JUMP)  ; LAB_004f1252
    JMP 0x004f0f65                      ; 004f1538
        ;   XREF to: 004f0f65 (UNCONDITIONAL_JUMP)  ; LAB_004f0f65
    MOV dword ptr [EBX + 0x26fc],EAX    ; 004f153d
        ;   Label: LAB_004f153d
    JMP 0x004f1107                      ; 004f1543
        ;   XREF to: 004f1107 (UNCONDITIONAL_JUMP)  ; LAB_004f1107
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 004f1548
        ;   Label: LAB_004f1548
    JZ 0x004f111a                       ; 004f154f
        ;   XREF to: 004f111a (CONDITIONAL_JUMP)  ; LAB_004f111a
    PUSH 0x1                            ; 004f1555
    PUSH 0x11                           ; 004f1557
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004f1559
    JMP 0x004f1111                      ; 004f1560
        ;   XREF to: 004f1111 (UNCONDITIONAL_JUMP)  ; LAB_004f1111
    MOV dword ptr [ESP + 0x5c],EDI      ; 004f1565
        ;   Label: LAB_004f1565
    LEA EDX,[EBX + 0x249c]              ; 004f1569
    MOV dword ptr [ESP + 0x60],EDI      ; 004f156f
    MOV dword ptr [ESP + 0x64],EDI      ; 004f1573
    MOV EAX,dword ptr [EDX]             ; 004f1577
    MOV dword ptr [ESP + 0x5c],EAX      ; 004f1579
    MOV EAX,dword ptr [EDX + 0x4]       ; 004f157d
    MOV dword ptr [ESP + 0x60],EAX      ; 004f1580
    PUSH dword ptr [ESP + 0xd0]         ; 004f1584
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f158b
    PUSH EBX                            ; 004f158e
    MOV dword ptr [ESP + 0x6c],EAX      ; 004f158f
    CALL core_charactr.cpp_FUN_0042d700 ; 004f1593
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    LEA EAX,[EBX + 0x2518]              ; 004f1598
    ADD ESP,0x8                         ; 004f159e
    FLD float ptr [EAX]                 ; 004f15a1
    FMUL float ptr [ESP + 0xd0]         ; 004f15a3
    FLD float ptr [EAX + 0x4]           ; 004f15aa
    FMUL float ptr [ESP + 0xd0]         ; 004f15ad
    FLD float ptr [EAX + 0x8]           ; 004f15b4
    FMUL float ptr [ESP + 0xd0]         ; 004f15b7
    LEA ESI,[ESP + 0x20]                ; 004f15be
    LEA EDI,[ESP + 0x44]                ; 004f15c2
    FLD float ptr [ESP + 0x5c]          ; 004f15c6
    FLD float ptr [ESP + 0x60]          ; 004f15ca
    FLD float ptr [ESP + 0x64]          ; 004f15ce
    LEA EDX,[EBX + 0x250c]              ; 004f15d2
    LEA EAX,[ESP + 0x5c]                ; 004f15d8
    FXCH ST5                            ; 004f15dc
    FSTP float ptr [ESP + 0x20]         ; 004f15de
    FXCH ST3                            ; 004f15e2
    FSTP float ptr [ESP + 0x24]         ; 004f15e4
    FXCH                                ; 004f15e8
    FSTP float ptr [ESP + 0x28]         ; 004f15ea
    MOVSD ES:EDI,ESI                    ; 004f15ee
    MOVSD ES:EDI,ESI                    ; 004f15ef
    MOVSD ES:EDI,ESI                    ; 004f15f0
    PUSH EAX                            ; 004f15f1
    FLD float ptr [ESP + 0x48]          ; 004f15f2
    FLD float ptr [ESP + 0x4c]          ; 004f15f6
    FLD float ptr [ESP + 0x50]          ; 004f15fa
    LEA EDI,[ESP + 0x30]                ; 004f15fe
    LEA ESI,[ESP + 0x90]                ; 004f1602
    FXCH ST2                            ; 004f1609
    FADD float ptr [EDX]                ; 004f160b
    FXCH                                ; 004f160d
    FADD float ptr [EDX + 0x4]          ; 004f160f
    FXCH ST2                            ; 004f1612
    FADD float ptr [EDX + 0x8]          ; 004f1614
    FXCH                                ; 004f1617
    FSTP float ptr [ESP + 0x90]         ; 004f1619
    FXCH                                ; 004f1620
    FSTP float ptr [ESP + 0x94]         ; 004f1622
    FSTP float ptr [ESP + 0x98]         ; 004f1629
    MOVSD ES:EDI,ESI                    ; 004f1630
    MOVSD ES:EDI,ESI                    ; 004f1631
    MOVSD ES:EDI,ESI                    ; 004f1632
    PUSH EBX                            ; 004f1633
    FADD float ptr [ESP + 0x34]         ; 004f1634
    FXCH                                ; 004f1638
    FADD float ptr [ESP + 0x38]         ; 004f163a
    FXCH ST2                            ; 004f163e
    FADD float ptr [ESP + 0x3c]         ; 004f1640
    FXCH                                ; 004f1644
    FSTP float ptr [ESP + 0x64]         ; 004f1646
    FXCH                                ; 004f164a
    FSTP float ptr [ESP + 0x68]         ; 004f164c
    FSTP float ptr [ESP + 0x6c]         ; 004f1650
    CALL core_charactr.cpp_FUN_0042d750 ; 004f1654
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004f1659
    JMP 0x004f111a                      ; 004f165c
        ;   XREF to: 004f111a (UNCONDITIONAL_JUMP)  ; LAB_004f111a

