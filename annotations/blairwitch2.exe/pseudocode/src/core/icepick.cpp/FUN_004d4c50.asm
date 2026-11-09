; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_icepick_cpp_FUN_004d4c50(CIcePick *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004d4c38 = 004d5259
;   TerminatedCString s_s_confused_while_walking_005da802
;   TerminatedCString s_icepick_miss_wav_005da82c
;   undefined4 DAT_005da83e
;   undefined4 DAT_005da842
;   undefined4 DAT_005da846
;   undefined4 DAT_005da84a
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01cee0b4
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_FUN_0040d0c0
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_00424470
;   core_charactr.cpp_FUN_004287f0
;   core_charactr.cpp_FUN_00429e90
;   core_charactr.cpp_FUN_0042b2a0
;   core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90
;   core_hero.cpp_FUN_004cec50
;   core_hero.cpp_FUN_004cf030
;   core_hero.cpp_FUN_004cf230
;   ... and 17 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4c50
        ;   Label: core_icepick.cpp_FUN_004d4c50
    PUSH ESI                            ; 004d4c51
    PUSH EDI                            ; 004d4c52
    PUSH EBP                            ; 004d4c53
    SUB ESP,0xb8                        ; 004d4c54
    MOV EBX,dword ptr [ESP + 0xcc]      ; 004d4c5a
    PUSH dword ptr [ESP + 0xd0]         ; 004d4c61
    PUSH EBX                            ; 004d4c68
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 004d4c69
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d4c6e
    TEST EAX,EAX                        ; 004d4c71
    JZ 0x004d4fee                       ; 004d4c73
        ;   XREF to: 004d4fee (CONDITIONAL_JUMP)  ; LAB_004d4fee
    CMP dword ptr [EBX + 0x25638],0x4   ; 004d4c79
    JZ 0x004d4fee                       ; 004d4c80
        ;   XREF to: 004d4fee (CONDITIONAL_JUMP)  ; LAB_004d4fee
    CMP dword ptr [EBX + 0x10a64],0x2   ; 004d4c86
    JZ 0x004d4ff9                       ; 004d4c8d
        ;   XREF to: 004d4ff9 (CONDITIONAL_JUMP)  ; LAB_004d4ff9
    CMP dword ptr [EBX + 0x2698],0x0    ; 004d4c93
        ;   Label: LAB_004d4c93
    SETNZ AL                            ; 004d4c9a
    PUSH dword ptr [ESP + 0xd0]         ; 004d4c9d
    AND EAX,0xff                        ; 004d4ca4
    PUSH EBX                            ; 004d4ca9
    MOV dword ptr [EBX + 0x25660],EAX   ; 004d4caa
    CALL core_charactr.cpp_FUN_0042b2a0 ; 004d4cb0
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 004d4cb5
    FLD float ptr [EBX + 0x10a60]       ; 004d4cb8
    FSUB float ptr [ESP + 0xd0]         ; 004d4cbe
    FST float ptr [EBX + 0x10a60]       ; 004d4cc5
    FLDZ                                ; 004d4ccb
    FCOMPP                              ; 004d4ccd
    FNSTSW AX                           ; 004d4ccf
    SAHF                                ; 004d4cd1
    JBE 0x004d4cde                      ; 004d4cd2
        ;   XREF to: 004d4cde (CONDITIONAL_JUMP)  ; LAB_004d4cde
    MOV dword ptr [EBX + 0x10a60],0x0   ; 004d4cd4
    LEA ESI,[EBX + 0x2508]              ; 004d4cde
        ;   Label: LAB_004d4cde
    PUSH dword ptr [ESP + 0xd0]         ; 004d4ce4
    MOV dword ptr [ESI + 0x8],0x0       ; 004d4ceb
    PUSH EBX                            ; 004d4cf2
    MOV EAX,dword ptr [ESI + 0x8]       ; 004d4cf3
    MOV dword ptr [ESI + 0x4],EAX       ; 004d4cf6
    MOV EAX,dword ptr [ESI + 0x4]       ; 004d4cf9
    MOV dword ptr [ESI],EAX             ; 004d4cfc
    CALL core_icepick.cpp_FUN_004d6140  ; 004d4cfe
        ;   XREF to: 004d6140 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_FUN_004d6140(CIcePick * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d4d03
    PUSH dword ptr [ESP + 0xd0]         ; 004d4d06
    FLD float ptr [EBX + 0x2510]        ; 004d4d0d
    PUSH EBX                            ; 004d4d13
    FSTP float ptr [EBX + 0x2594]       ; 004d4d14
    CALL core_charactr.cpp_FUN_004287f0 ; 004d4d1a
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d4d1f
    LEA EDX,[EBX + 0x2b4]               ; 004d4d22
    TEST EAX,EAX                        ; 004d4d28
    JZ 0x004d52c7                       ; 004d4d2a
        ;   XREF to: 004d52c7 (CONDITIONAL_JUMP)  ; LAB_004d52c7
    MOV dword ptr [ESI + 0x8],0x0       ; 004d4d30
    MOV EAX,dword ptr [ESI + 0x8]       ; 004d4d37
    MOV dword ptr [ESI + 0x4],EAX       ; 004d4d3a
    MOV EAX,dword ptr [ESI + 0x4]       ; 004d4d3d
    MOV dword ptr [ESI],EAX             ; 004d4d40
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 004d4d42
    CMP EAX,0x2                         ; 004d4d48
    JNC 0x004d503b                      ; 004d4d4b
        ;   XREF to: 004d503b (CONDITIONAL_JUMP)  ; LAB_004d503b
    CMP EAX,0x1                         ; 004d4d51
    JNZ 0x004d5042                      ; 004d4d54
        ;   XREF to: 004d5042 (CONDITIONAL_JUMP)  ; LAB_004d5042
    PUSH EAX                            ; 004d4d5a
    PUSH EAX                            ; 004d4d5b
    PUSH EDX                            ; 004d4d5c
        ;   Label: LAB_004d4d5c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d4d5d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004d4d5d
    ADD ESP,0xc                         ; 004d4d62
        ;   Label: LAB_004d4d62
    MOV EDI,dword ptr [EBX + 0x276c]    ; 004d4d65
        ;   Label: LAB_004d4d65
    TEST EDI,EDI                        ; 004d4d6b
    JZ 0x004d5365                       ; 004d4d6d
        ;   XREF to: 004d5365 (CONDITIONAL_JUMP)  ; LAB_004d5365
    CMP dword ptr [EBX + 0x2770],0x0    ; 004d4d73
    JNZ 0x004d4e9b                      ; 004d4d7a
        ;   XREF to: 004d4e9b (CONDITIONAL_JUMP)  ; LAB_004d4e9b
    LEA EAX,[EDI + 0x20]                ; 004d4d80
    PUSH EAX                            ; 004d4d83
    PUSH EBX                            ; 004d4d84
    LEA ESI,[ESP + 0x88]                ; 004d4d85
    LEA EDI,[ESP + 0x70]                ; 004d4d8c
    CALL core_actor.cpp_FUN_00408de0    ; 004d4d90
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x88]                ; 004d4d95
    ADD ESP,0x8                         ; 004d4d9c
    LEA EAX,[ESP + 0x68]                ; 004d4d9f
    MOVSD ES:EDI,ESI                    ; 004d4da3
    MOVSD ES:EDI,ESI                    ; 004d4da4
    MOVSD ES:EDI,ESI                    ; 004d4da5
    PUSH EAX                            ; 004d4da6
    LEA ESI,[ESP + 0x3c]                ; 004d4da7
    LEA EDI,[ESP + 0x78]                ; 004d4dab
    CALL core_vecdir.cpp_FUN_005838f0   ; 004d4daf
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0x3c]                ; 004d4db4
    ADD ESP,0x4                         ; 004d4db8
    MOVSD ES:EDI,ESI                    ; 004d4dbb
    MOVSD ES:EDI,ESI                    ; 004d4dbc
    MOVSD ES:EDI,ESI                    ; 004d4dbd
    PUSH dword ptr [ESP + 0x78]         ; 004d4dbe
    CALL core_actor.cpp_FUN_0040d0c0    ; 004d4dc2
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0xa8],EAX      ; 004d4dc7
    FLD float ptr [ESP + 0xa8]          ; 004d4dce
    ADD ESP,0x4                         ; 004d4dd5
    FST float ptr [ESP + 0xb4]          ; 004d4dd8
    FCOMP float ptr [0x005da83e]        ; 004d4ddf | DAT_005da83e
    FNSTSW AX                           ; 004d4de5
    SAHF                                ; 004d4de7
    JNC 0x004d4dfe                      ; 004d4de8
        ;   XREF to: 004d4dfe (CONDITIONAL_JUMP)  ; LAB_004d4dfe
    FLD float ptr [ESP + 0xb4]          ; 004d4dea
    FADD float ptr [0x005da842]         ; 004d4df1 | DAT_005da842
    FSTP float ptr [ESP + 0xb4]         ; 004d4df7
    FLD float ptr [ESP + 0xb4]          ; 004d4dfe
        ;   Label: LAB_004d4dfe
    FCOMP float ptr [0x005da846]        ; 004d4e05 | DAT_005da846
    FNSTSW AX                           ; 004d4e0b
    SAHF                                ; 004d4e0d
    JBE 0x004d4e24                      ; 004d4e0e
        ;   XREF to: 004d4e24 (CONDITIONAL_JUMP)  ; LAB_004d4e24
    FLD float ptr [ESP + 0xb4]          ; 004d4e10
    FADD float ptr [0x005da84a]         ; 004d4e17 | DAT_005da84a
    FSTP float ptr [ESP + 0xb4]         ; 004d4e1d
    FLD float ptr [ESP + 0xd0]          ; 004d4e24
        ;   Label: LAB_004d4e24
    FMUL float ptr [0x005da842]         ; 004d4e2b | DAT_005da842
    FLD float ptr [ESP + 0xb4]          ; 004d4e31
    FXCH                                ; 004d4e38
    FST float ptr [ESP + 0xb0]          ; 004d4e3a
    FCHS                                ; 004d4e41
    FSTP float ptr [ESP + 0xa8]         ; 004d4e43
    FCOMP float ptr [ESP + 0xa8]        ; 004d4e4a
    FNSTSW AX                           ; 004d4e51
    SAHF                                ; 004d4e53
    JNC 0x004d4e64                      ; 004d4e54
        ;   XREF to: 004d4e64 (CONDITIONAL_JUMP)  ; LAB_004d4e64
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004d4e56
    MOV dword ptr [ESP + 0xb4],EAX      ; 004d4e5d
    FLD float ptr [ESP + 0xb4]          ; 004d4e64
        ;   Label: LAB_004d4e64
    FCOMP float ptr [ESP + 0xb0]        ; 004d4e6b
    FNSTSW AX                           ; 004d4e72
    SAHF                                ; 004d4e74
    JBE 0x004d4e85                      ; 004d4e75
        ;   XREF to: 004d4e85 (CONDITIONAL_JUMP)  ; LAB_004d4e85
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004d4e77
    MOV dword ptr [ESP + 0xb4],EAX      ; 004d4e7e
    FLD float ptr [EBX + 0x34]          ; 004d4e85
        ;   Label: LAB_004d4e85
    FADD float ptr [ESP + 0xb4]         ; 004d4e88
    PUSH EBX                            ; 004d4e8f
    FSTP float ptr [EBX + 0x34]         ; 004d4e90
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 004d4e93
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d4e98
    MOV EBP,dword ptr [EBX + 0x276c]    ; 004d4e9b
        ;   Label: LAB_004d4e9b
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 004d4ea1
    PUSH 0x0                            ; 004d4ea7
    MOV dword ptr [ESP + 0xa8],EAX      ; 004d4ea9
    LEA EAX,[EBX + 0x2b4]               ; 004d4eb0
    PUSH EAX                            ; 004d4eb6
    LEA ESI,[ESP + 0xa0]                ; 004d4eb7
    MOV dword ptr [ESP + 0xb4],EAX      ; 004d4ebe
    CALL core_skeleton.cpp_FUN_00546a90 ; 004d4ec5
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    ADD ESP,0x8                         ; 004d4eca
    LEA EAX,[ESP + 0x50]                ; 004d4ecd
    PUSH EAX                            ; 004d4ed1
    LEA EDI,[ESP + 0x54]                ; 004d4ed2
    PUSH EBX                            ; 004d4ed6
    LEA ESI,[ESP + 0xa0]                ; 004d4ed7
    MOV EAX,dword ptr [ESP + 0xac]      ; 004d4ede
    PUSH EBP                            ; 004d4ee5
    MOVSD ES:EDI,ESI                    ; 004d4ee6
    MOVSD ES:EDI,ESI                    ; 004d4ee7
    MOVSD ES:EDI,ESI                    ; 004d4ee8
    CALL dword ptr [EAX + 0x118]        ; 004d4ee9
    ADD ESP,0xc                         ; 004d4eef
    TEST EAX,EAX                        ; 004d4ef2
    JZ 0x004d533d                       ; 004d4ef4
        ;   XREF to: 004d533d (CONDITIONAL_JUMP)  ; LAB_004d533d
    CMP dword ptr [EBX + 0x276c],0x0    ; 004d4efa
    JNZ 0x004d5348                      ; 004d4f01
        ;   XREF to: 004d5348 (CONDITIONAL_JUMP)  ; LAB_004d5348
    PUSH 0x1                            ; 004d4f07
        ;   Label: LAB_004d4f07
    PUSH 0x0                            ; 004d4f09
    LEA EAX,[EBX + 0x2b4]               ; 004d4f0b
    PUSH EAX                            ; 004d4f11
        ;   Label: LAB_004d4f11
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d4f12
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d4f17
    LEA EAX,[EBX + 0x2437c]             ; 004d4f1a
        ;   Label: LAB_004d4f1a
    PUSH EAX                            ; 004d4f20
    CALL core_inv.cpp_FUN_004dccd0      ; 004d4f21
        ;   XREF to: 004dccd0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dccd0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004d4f26
    MOV EDX,dword ptr [0x02661f38]      ; 004d4f29 | g_CWeaponClassInfo.name_hash
    PUSH EDX                            ; 004d4f2f
    MOV ECX,dword ptr [EBX + 0x2698]    ; 004d4f30
    PUSH ECX                            ; 004d4f36
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004d4f37
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV ESI,EAX                         ; 004d4f3c
    ADD ESP,0x8                         ; 004d4f3e
    TEST EAX,EAX                        ; 004d4f41
    JZ 0x004d4f63                       ; 004d4f43
        ;   XREF to: 004d4f63 (CONDITIONAL_JUMP)  ; LAB_004d4f63
    PUSH dword ptr [ESP + 0xd0]         ; 004d4f45
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004d4f4c
    PUSH ESI                            ; 004d4f52
    CALL dword ptr [EAX + 0x14]         ; 004d4f53
    ADD ESP,0x8                         ; 004d4f56
    MOV dword ptr [ESI + 0x6c4],0x64    ; 004d4f59
    PUSH EBX                            ; 004d4f63
        ;   Label: LAB_004d4f63
    CALL core_charactr.cpp_FUN_00424470 ; 004d4f64
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004d4f69
    LEA EBP,[EBX + 0x2b4]               ; 004d4f6c
    PUSH EBP                            ; 004d4f72
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 004d4f73
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d4f78
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d4f7b
    PUSH EBX                            ; 004d4f81
    CALL dword ptr [EAX + 0x114]        ; 004d4f82
    ADD ESP,0x4                         ; 004d4f88
    TEST EAX,EAX                        ; 004d4f8b
    JNZ 0x004d4fce                      ; 004d4f8d
        ;   XREF to: 004d4fce (CONDITIONAL_JUMP)  ; LAB_004d4fce
    PUSH 0x544cc0                       ; 004d4f8f
    MOV ESI,dword ptr [0x01cee0b4]      ; 004d4f94 | DAT_01cee0b4
    PUSH ESI                            ; 004d4f9a
    LEA EAX,[EBX + 0x25650]             ; 004d4f9b
    PUSH dword ptr [EBX + 0x2565c]      ; 004d4fa1
    PUSH EAX                            ; 004d4fa7
    LEA ESI,[ESP + 0x10]                ; 004d4fa8
    CALL core_xform.cpp_FUN_00594380    ; 004d4fac
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00594380()
    ADD ESP,0x4                         ; 004d4fb1
    LEA EAX,[ESP + 0x1c]                ; 004d4fb4
    PUSH EAX                            ; 004d4fb8
    LEA EDI,[ESP + 0x20]                ; 004d4fb9
    LEA ESI,[ESP + 0x10]                ; 004d4fbd
    PUSH EBP                            ; 004d4fc1
    MOVSD ES:EDI,ESI                    ; 004d4fc2
    MOVSD ES:EDI,ESI                    ; 004d4fc3
    MOVSD ES:EDI,ESI                    ; 004d4fc4
    MOVSD ES:EDI,ESI                    ; 004d4fc5
    CALL core_skeleton.cpp_FUN_005466c0 ; 004d4fc6
        ;   XREF to: 005466c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_005466c0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004d4fcb
    PUSH dword ptr [ESP + 0xd0]         ; 004d4fce
        ;   Label: LAB_004d4fce
    PUSH EBX                            ; 004d4fd5
    CALL core_icepick.cpp_FUN_004d5470  ; 004d4fd6
        ;   XREF to: 004d5470 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_FUN_004d5470(CIcePick * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d4fdb
    PUSH dword ptr [ESP + 0xd0]         ; 004d4fde
    PUSH EBX                            ; 004d4fe5
    CALL core_charactr.cpp_FUN_00429e90 ; 004d4fe6
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d4feb
    ADD ESP,0xb8                        ; 004d4fee
        ;   Label: LAB_004d4fee
    POP EBP                             ; 004d4ff4
    POP EDI                             ; 004d4ff5
    POP ESI                             ; 004d4ff6
    POP EBX                             ; 004d4ff7
    RET                                 ; 004d4ff8
    PUSH dword ptr [ESP + 0xd0]         ; 004d4ff9
        ;   Label: LAB_004d4ff9
    PUSH EBX                            ; 004d5000
    CALL core_icepick.cpp_FUN_004d5950  ; 004d5001
        ;   XREF to: 004d5950 (UNCONDITIONAL_CALL)  ; void core_icepick.cpp_FUN_004d5950(CIcePick * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d5006
    JMP 0x004d4c93                      ; 004d5009
        ;   XREF to: 004d4c93 (UNCONDITIONAL_JUMP)  ; LAB_004d4c93
    PUSH 0x1                            ; 004d500e
        ;   Label: LAB_004d500e
    PUSH 0x0                            ; 004d5010
    PUSH EDX                            ; 004d5012
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d5013
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5018
    PUSH EBX                            ; 004d501b
    PUSH 0x5da802                       ; 004d501c | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00609ed0]      ; 004d5021 | g_CConsolePtr
    PUSH ESI                            ; 004d5027 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004d5028
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    JMP 0x004d4d62                      ; 004d502d
        ;   XREF to: 004d4d62 (UNCONDITIONAL_JUMP)  ; LAB_004d4d62
    PUSH 0x1                            ; 004d5032
        ;   Label: LAB_004d5032
    PUSH 0x2                            ; 004d5034
    JMP 0x004d4d5c                      ; 004d5036
        ;   XREF to: 004d4d5c (UNCONDITIONAL_JUMP)  ; LAB_004d4d5c
    JBE 0x004d5032                      ; 004d503b
        ;   XREF to: 004d5032 (CONDITIONAL_JUMP)  ; LAB_004d5032
        ;   Label: LAB_004d503b
    CMP EAX,0x3                         ; 004d503d
    JZ 0x004d500e                       ; 004d5040
        ;   XREF to: 004d500e (CONDITIONAL_JUMP)  ; LAB_004d500e
    PUSH 0x1                            ; 004d5042
        ;   Label: LAB_004d5042
    PUSH 0x0                            ; 004d5044
    LEA EAX,[EBX + 0x2b4]               ; 004d5046
    PUSH EAX                            ; 004d504c
    JMP 0x004d4d5d                      ; 004d504d
        ;   XREF to: 004d4d5d (UNCONDITIONAL_JUMP)  ; LAB_004d4d5d
    CMP dword ptr [EBX + 0x2570],0x0    ; 004d5052
        ;   Label: LAB_004d5052
    JZ 0x004d4d65                       ; 004d5059
        ;   XREF to: 004d4d65 (CONDITIONAL_JUMP)  ; LAB_004d4d65
    MOV EBP,dword ptr [EBX + 0x25640]   ; 004d505f
    XOR ESI,ESI                         ; 004d5065
    TEST EBP,EBP                        ; 004d5067
    JZ 0x004d5078                       ; 004d5069
        ;   XREF to: 004d5078 (CONDITIONAL_JUMP)  ; LAB_004d5078
    CMP dword ptr [EBX + 0x25660],0x0   ; 004d506b
    JZ 0x004d51c2                       ; 004d5072
        ;   XREF to: 004d51c2 (CONDITIONAL_JUMP)  ; LAB_004d51c2
    CMP dword ptr [EBX + 0x10a68],0x0   ; 004d5078
        ;   Label: LAB_004d5078
    JZ 0x004d5093                       ; 004d507f
        ;   XREF to: 004d5093 (CONDITIONAL_JUMP)  ; LAB_004d5093
    CMP dword ptr [EBX + 0x10a70],0x0   ; 004d5081
    JZ 0x004d51cc                       ; 004d5088
        ;   XREF to: 004d51cc (CONDITIONAL_JUMP)  ; LAB_004d51cc
    MOV ESI,0x2                         ; 004d508e
    CMP dword ptr [EBX + 0x10a6c],0x0   ; 004d5093
        ;   Label: LAB_004d5093
    JZ 0x004d50a1                       ; 004d509a
        ;   XREF to: 004d50a1 (CONDITIONAL_JUMP)  ; LAB_004d50a1
    MOV ESI,0x3                         ; 004d509c
    CMP dword ptr [EBX + 0x10a80],0x0   ; 004d50a1
        ;   Label: LAB_004d50a1
    JZ 0x004d50db                       ; 004d50a8
        ;   XREF to: 004d50db (CONDITIONAL_JUMP)  ; LAB_004d50db
    MOV EDX,dword ptr [EBX + 0x25640]   ; 004d50aa
    MOV dword ptr [EBX + 0x10a80],0x0   ; 004d50b0
    TEST EDX,EDX                        ; 004d50ba
    SETZ AL                             ; 004d50bc
    AND EAX,0xff                        ; 004d50bf
    MOV dword ptr [EBX + 0x25640],EAX   ; 004d50c4
    JZ 0x004d50d9                       ; 004d50ca
        ;   XREF to: 004d50d9 (CONDITIONAL_JUMP)  ; LAB_004d50d9
    CMP dword ptr [EBX + 0x25660],0x0   ; 004d50cc
    JZ 0x004d51d6                       ; 004d50d3
        ;   XREF to: 004d51d6 (CONDITIONAL_JUMP)  ; LAB_004d51d6
    XOR ESI,ESI                         ; 004d50d9
        ;   Label: LAB_004d50d9
    CMP dword ptr [EBX + 0x10a74],0x0   ; 004d50db
        ;   Label: LAB_004d50db
    JZ 0x004d513c                       ; 004d50e2
        ;   XREF to: 004d513c (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0x25640]   ; 004d50e4
    MOV EBP,0x1                         ; 004d50ea
    TEST EAX,EAX                        ; 004d50ef
    JZ 0x004d51e0                       ; 004d50f1
        ;   XREF to: 004d51e0 (CONDITIONAL_JUMP)  ; LAB_004d51e0
    TEST EBP,EBP                        ; 004d50f7
        ;   Label: LAB_004d50f7
    JZ 0x004d513c                       ; 004d50f9
        ;   XREF to: 004d513c (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX + 0x25640],0x0   ; 004d50fb
        ;   Label: LAB_004d50fb
    JZ 0x004d513c                       ; 004d5102
        ;   XREF to: 004d513c (CONDITIONAL_JUMP)  ; default
    MOV EDI,dword ptr [EBX + 0x25660]   ; 004d5104
    TEST EDI,EDI                        ; 004d510a
    JZ 0x004d5277                       ; 004d510c
        ;   XREF to: 004d5277 (CONDITIONAL_JUMP)  ; LAB_004d5277
    MOV EBP,dword ptr [0x02661f38]      ; 004d5112 | g_CWeaponClassInfo.name_hash
    PUSH EBP                            ; 004d5118
    MOV EAX,dword ptr [EBX + 0x2698]    ; 004d5119
    PUSH EAX                            ; 004d511f
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004d5120
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004d5125
    TEST EAX,EAX                        ; 004d5128
    JZ 0x004d513c                       ; 004d512a
        ;   XREF to: 004d513c (CONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 004d512c
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004d512d
    CALL dword ptr [EDX + 0xec]         ; 004d5133
    ADD ESP,0x4                         ; 004d5139
    FLD float ptr [EBX + 0x10a90]       ; 004d513c
        ;   Label: default
    LEA EAX,[EBX + 0x2b4]               ; 004d5142
    FMUL float ptr [EBX + 0x2598]       ; 004d5148
    PUSH EAX                            ; 004d514e
    FSTP float ptr [EBX + 0x2578]       ; 004d514f
    CALL core_motion.cpp_FUN_005035c0   ; 004d5155
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d515a
    ADD ESP,0x4                         ; 004d515d
    CMP ESI,EAX                         ; 004d5160
    JZ 0x004d5196                       ; 004d5162
        ;   XREF to: 004d5196 (CONDITIONAL_JUMP)  ; LAB_004d5196
    CMP ESI,0xe                         ; 004d5164
    JNZ 0x004d5293                      ; 004d5167
        ;   XREF to: 004d5293 (CONDITIONAL_JUMP)  ; LAB_004d5293
    MOV EDX,dword ptr [EBX + 0x25648]   ; 004d516d
        ;   Label: LAB_004d516d
    PUSH EDX                            ; 004d5173
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004d5174
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004d5179
    TEST EAX,EAX                        ; 004d517c
    JZ 0x004d52aa                       ; 004d517e
        ;   XREF to: 004d52aa (CONDITIONAL_JUMP)  ; LAB_004d52aa
    PUSH 0x1                            ; 004d5184
        ;   Label: LAB_004d5184
    PUSH ESI                            ; 004d5186
    LEA EAX,[EBX + 0x2b4]               ; 004d5187
    PUSH EAX                            ; 004d518d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d518e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5193
    CMP dword ptr [EBX + 0x10a78],0x0   ; 004d5196
        ;   Label: LAB_004d5196
    JZ 0x004d4d65                       ; 004d519d
        ;   XREF to: 004d4d65 (CONDITIONAL_JUMP)  ; LAB_004d4d65
    PUSH EBX                            ; 004d51a3
    CALL core_icepick.cpp_FUN_004d55e0  ; 004d51a4
        ;   XREF to: 004d55e0 (UNCONDITIONAL_CALL)  ; int core_icepick.cpp_FUN_004d55e0(CIcePick * this_ptr)
    ADD ESP,0x4                         ; 004d51a9
    TEST EAX,EAX                        ; 004d51ac
    JNZ 0x004d4d65                      ; 004d51ae
        ;   XREF to: 004d4d65 (CONDITIONAL_JUMP)  ; LAB_004d4d65
    PUSH EBX                            ; 004d51b4
    CALL core_icepick.cpp_FUN_004d5780  ; 004d51b5
        ;   XREF to: 004d5780 (UNCONDITIONAL_CALL)  ; int core_icepick.cpp_FUN_004d5780(CIcePick * this_ptr)
    ADD ESP,0x4                         ; 004d51ba
    JMP 0x004d4d65                      ; 004d51bd
        ;   XREF to: 004d4d65 (UNCONDITIONAL_JUMP)  ; LAB_004d4d65
    MOV ESI,0xa                         ; 004d51c2
        ;   Label: LAB_004d51c2
    JMP 0x004d5078                      ; 004d51c7
        ;   XREF to: 004d5078 (UNCONDITIONAL_JUMP)  ; LAB_004d5078
    MOV ESI,0x1                         ; 004d51cc
        ;   Label: LAB_004d51cc
    JMP 0x004d5093                      ; 004d51d1
        ;   XREF to: 004d5093 (UNCONDITIONAL_JUMP)  ; LAB_004d5093
    MOV ESI,0xa                         ; 004d51d6
        ;   Label: LAB_004d51d6
    JMP 0x004d50db                      ; 004d51db
        ;   XREF to: 004d50db (UNCONDITIONAL_JUMP)  ; LAB_004d50db
    CMP dword ptr [EBX + 0x10a64],0x2   ; 004d51e0
        ;   Label: LAB_004d51e0
    JZ 0x004d50f7                       ; 004d51e7
        ;   XREF to: 004d50f7 (CONDITIONAL_JUMP)  ; LAB_004d50f7
    PUSH EBX                            ; 004d51ed
    CALL core_hero.cpp_FUN_004cec50     ; 004d51ee
        ;   XREF to: 004cec50 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cec50()
    XOR EBP,EBP                         ; 004d51f3
    ADD ESP,0x4                         ; 004d51f5
    TEST EAX,EAX                        ; 004d51f8
    JNZ 0x004d50f7                      ; 004d51fa
        ;   XREF to: 004d50f7 (CONDITIONAL_JUMP)  ; LAB_004d50f7
    PUSH EAX                            ; 004d5200
    PUSH EBX                            ; 004d5201
    CALL core_hero.cpp_FUN_004cf030     ; 004d5202
        ;   XREF to: 004cf030 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf030()
    ADD ESP,0x8                         ; 004d5207
    MOV EDI,EAX                         ; 004d520a
    TEST EAX,EAX                        ; 004d520c
    JBE 0x004d5215                      ; 004d520e
        ;   XREF to: 004d5215 (CONDITIONAL_JUMP)  ; LAB_004d5215
    CMP EAX,0x1                         ; 004d5210
    JNZ 0x004d5240                      ; 004d5213
        ;   XREF to: 004d5240 (CONDITIONAL_JUMP)  ; LAB_004d5240
    TEST EDI,EDI                        ; 004d5215
        ;   Label: LAB_004d5215
    JNZ 0x004d50f7                      ; 004d5217
        ;   XREF to: 004d50f7 (CONDITIONAL_JUMP)  ; LAB_004d50f7
    PUSH EBX                            ; 004d521d
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90 ; 004d521e
        ;   XREF to: 004cee90 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d5223
    TEST EAX,EAX                        ; 004d5226
    JNZ 0x004d50f7                      ; 004d5228
        ;   XREF to: 004d50f7 (CONDITIONAL_JUMP)  ; LAB_004d50f7
    PUSH EBX                            ; 004d522e
    CALL core_hero.cpp_FUN_004cf2b0     ; 004d522f
        ;   XREF to: 004cf2b0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004cf2b0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d5234
    TEST EAX,EAX                        ; 004d5237
    JNZ 0x004d524b                      ; 004d5239
        ;   XREF to: 004d524b (CONDITIONAL_JUMP)  ; LAB_004d524b
    JMP 0x004d50fb                      ; 004d523b
        ;   XREF to: 004d50fb (UNCONDITIONAL_JUMP)  ; LAB_004d50fb
    PUSH EBX                            ; 004d5240
        ;   Label: LAB_004d5240
    CALL core_hero.cpp_FUN_004cf230     ; 004d5241
        ;   XREF to: 004cf230 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_FUN_004cf230(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d5246
    JMP 0x004d5215                      ; 004d5249
        ;   XREF to: 004d5215 (UNCONDITIONAL_JUMP)  ; LAB_004d5215
    PUSH EBX                            ; 004d524b
        ;   Label: LAB_004d524b
    CALL core_hero.cpp_FUN_004cf440     ; 004d524c
        ;   XREF to: 004cf440 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cf440()
    ADD ESP,0x4                         ; 004d5251
    JMP 0x004d50f7                      ; 004d5254
        ;   XREF to: 004d50f7 (UNCONDITIONAL_JUMP)  ; LAB_004d50f7
    MOV ESI,0xe                         ; 004d5259
        ;   Label: caseD_0
    JMP 0x004d513c                      ; 004d525e
        ;   XREF to: 004d513c (UNCONDITIONAL_JUMP)  ; default
    MOV ESI,0xf                         ; 004d5263
        ;   Label: caseD_1
    JMP 0x004d513c                      ; 004d5268
        ;   XREF to: 004d513c (UNCONDITIONAL_JUMP)  ; default
    MOV ESI,0x10                        ; 004d526d
        ;   Label: caseD_4
    JMP 0x004d513c                      ; 004d5272
        ;   XREF to: 004d513c (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0x25644]   ; 004d5277
        ;   Label: LAB_004d5277
    MOV dword ptr [EBX + 0x10a74],EDI   ; 004d527d
    CMP EAX,0x4                         ; 004d5283
    JA 0x004d513c                       ; 004d5286
        ;   XREF to: 004d513c (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4d4c38]  ; 004d528c | caseD_2 | caseD_3 | caseD_4
        ;   Label: switchD
    CMP ESI,0xf                         ; 004d5293
        ;   Label: LAB_004d5293
    JZ 0x004d516d                       ; 004d5296
        ;   XREF to: 004d516d (CONDITIONAL_JUMP)  ; LAB_004d516d
    CMP ESI,0x10                        ; 004d529c
    JZ 0x004d516d                       ; 004d529f
        ;   XREF to: 004d516d (CONDITIONAL_JUMP)  ; LAB_004d516d
    JMP 0x004d5184                      ; 004d52a5
        ;   XREF to: 004d5184 (UNCONDITIONAL_JUMP)  ; LAB_004d5184
    PUSH 0x5da82c                       ; 004d52aa | = "icepick-miss?.wav"
        ;   Label: LAB_004d52aa
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d52af
    PUSH EBX                            ; 004d52b5
    CALL dword ptr [EAX + 0x34]         ; 004d52b6
    ADD ESP,0x8                         ; 004d52b9
    MOV dword ptr [EBX + 0x25648],EAX   ; 004d52bc
    JMP 0x004d5184                      ; 004d52c2
        ;   XREF to: 004d5184 (UNCONDITIONAL_JUMP)  ; LAB_004d5184
    PUSH EDX                            ; 004d52c7
        ;   Label: LAB_004d52c7
    CALL core_motion.cpp_FUN_005035c0   ; 004d52c8
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d52cd
    ADD ESP,0x4                         ; 004d52d0
    CMP EAX,0x9                         ; 004d52d3
    JNC 0x004d52ea                      ; 004d52d6
        ;   XREF to: 004d52ea (CONDITIONAL_JUMP)  ; LAB_004d52ea
    CMP EAX,0x1                         ; 004d52d8
    JNC 0x004d5320                      ; 004d52db
        ;   XREF to: 004d5320 (CONDITIONAL_JUMP)  ; LAB_004d5320
    TEST EAX,EAX                        ; 004d52dd
    JZ 0x004d5052                       ; 004d52df
        ;   XREF to: 004d5052 (CONDITIONAL_JUMP)  ; LAB_004d5052
    JMP 0x004d4d65                      ; 004d52e5
        ;   XREF to: 004d4d65 (UNCONDITIONAL_JUMP)  ; LAB_004d4d65
    JBE 0x004d4fee                      ; 004d52ea
        ;   XREF to: 004d4fee (CONDITIONAL_JUMP)  ; LAB_004d4fee
        ;   Label: LAB_004d52ea
    CMP EAX,0xf                         ; 004d52f0
    JNC 0x004d5303                      ; 004d52f3
        ;   XREF to: 004d5303 (CONDITIONAL_JUMP)  ; LAB_004d5303
    CMP EAX,0xa                         ; 004d52f5
    JBE 0x004d5052                      ; 004d52f8
        ;   XREF to: 004d5052 (CONDITIONAL_JUMP)  ; LAB_004d5052
    JMP 0x004d4d65                      ; 004d52fe
        ;   XREF to: 004d4d65 (UNCONDITIONAL_JUMP)  ; LAB_004d4d65
    JBE 0x004d4d65                      ; 004d5303
        ;   XREF to: 004d4d65 (CONDITIONAL_JUMP)  ; LAB_004d4d65
        ;   Label: LAB_004d5303
    CMP EAX,0x10                        ; 004d5309
    JBE 0x004d4d65                      ; 004d530c
        ;   XREF to: 004d4d65 (CONDITIONAL_JUMP)  ; LAB_004d4d65
    CMP EAX,0x15                        ; 004d5312
    JZ 0x004d5052                       ; 004d5315
        ;   XREF to: 004d5052 (CONDITIONAL_JUMP)  ; LAB_004d5052
    JMP 0x004d4d65                      ; 004d531b
        ;   XREF to: 004d4d65 (UNCONDITIONAL_JUMP)  ; LAB_004d4d65
    JBE 0x004d5052                      ; 004d5320
        ;   XREF to: 004d5052 (CONDITIONAL_JUMP)  ; LAB_004d5052
        ;   Label: LAB_004d5320
    CMP EAX,0x2                         ; 004d5326
    JBE 0x004d5052                      ; 004d5329
        ;   XREF to: 004d5052 (CONDITIONAL_JUMP)  ; LAB_004d5052
    CMP EAX,0x3                         ; 004d532f
    JZ 0x004d5052                       ; 004d5332
        ;   XREF to: 004d5052 (CONDITIONAL_JUMP)  ; LAB_004d5052
    JMP 0x004d4d65                      ; 004d5338
        ;   XREF to: 004d4d65 (UNCONDITIONAL_JUMP)  ; LAB_004d4d65
    MOV dword ptr [EBX + 0x276c],EAX    ; 004d533d
        ;   Label: LAB_004d533d
    JMP 0x004d4f07                      ; 004d5343
        ;   XREF to: 004d4f07 (UNCONDITIONAL_JUMP)  ; LAB_004d4f07
    CMP dword ptr [EBX + 0x10a74],0x0   ; 004d5348
        ;   Label: LAB_004d5348
    JZ 0x004d4f1a                       ; 004d534f
        ;   XREF to: 004d4f1a (CONDITIONAL_JUMP)  ; LAB_004d4f1a
    PUSH 0x1                            ; 004d5355
    PUSH 0x11                           ; 004d5357
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004d5359
    JMP 0x004d4f11                      ; 004d5360
        ;   XREF to: 004d4f11 (UNCONDITIONAL_JUMP)  ; LAB_004d4f11
    MOV dword ptr [ESP + 0x5c],EDI      ; 004d5365
        ;   Label: LAB_004d5365
    LEA EDX,[EBX + 0x2508]              ; 004d5369
    MOV dword ptr [ESP + 0x60],EDI      ; 004d536f
    MOV dword ptr [ESP + 0x64],EDI      ; 004d5373
    MOV EAX,dword ptr [EDX]             ; 004d5377
    MOV dword ptr [ESP + 0x5c],EAX      ; 004d5379
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d537d
    MOV dword ptr [ESP + 0x60],EAX      ; 004d5380
    PUSH dword ptr [ESP + 0xd0]         ; 004d5384
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d538b
    PUSH EBX                            ; 004d538e
    MOV dword ptr [ESP + 0x6c],EAX      ; 004d538f
    CALL core_charactr.cpp_FUN_00423a10 ; 004d5393
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    LEA EAX,[EBX + 0x2588]              ; 004d5398
    ADD ESP,0x8                         ; 004d539e
    FLD float ptr [EAX]                 ; 004d53a1
    FMUL float ptr [ESP + 0xd0]         ; 004d53a3
    FLD float ptr [EAX + 0x4]           ; 004d53aa
    FMUL float ptr [ESP + 0xd0]         ; 004d53ad
    FLD float ptr [EAX + 0x8]           ; 004d53b4
    FMUL float ptr [ESP + 0xd0]         ; 004d53b7
    LEA ESI,[ESP + 0x20]                ; 004d53be
    LEA EDI,[ESP + 0x44]                ; 004d53c2
    FLD float ptr [ESP + 0x5c]          ; 004d53c6
    FLD float ptr [ESP + 0x60]          ; 004d53ca
    FLD float ptr [ESP + 0x64]          ; 004d53ce
    LEA EDX,[EBX + 0x257c]              ; 004d53d2
    LEA EAX,[ESP + 0x5c]                ; 004d53d8
    FXCH ST5                            ; 004d53dc
    FSTP float ptr [ESP + 0x20]         ; 004d53de
    FXCH ST3                            ; 004d53e2
    FSTP float ptr [ESP + 0x24]         ; 004d53e4
    FXCH                                ; 004d53e8
    FSTP float ptr [ESP + 0x28]         ; 004d53ea
    MOVSD ES:EDI,ESI                    ; 004d53ee
    MOVSD ES:EDI,ESI                    ; 004d53ef
    MOVSD ES:EDI,ESI                    ; 004d53f0
    PUSH EAX                            ; 004d53f1
    FLD float ptr [ESP + 0x48]          ; 004d53f2
    FLD float ptr [ESP + 0x4c]          ; 004d53f6
    FLD float ptr [ESP + 0x50]          ; 004d53fa
    LEA EDI,[ESP + 0x30]                ; 004d53fe
    LEA ESI,[ESP + 0x90]                ; 004d5402
    FXCH ST2                            ; 004d5409
    FADD float ptr [EDX]                ; 004d540b
    FXCH                                ; 004d540d
    FADD float ptr [EDX + 0x4]          ; 004d540f
    FXCH ST2                            ; 004d5412
    FADD float ptr [EDX + 0x8]          ; 004d5414
    FXCH                                ; 004d5417
    FSTP float ptr [ESP + 0x90]         ; 004d5419
    FXCH                                ; 004d5420
    FSTP float ptr [ESP + 0x94]         ; 004d5422
    FSTP float ptr [ESP + 0x98]         ; 004d5429
    MOVSD ES:EDI,ESI                    ; 004d5430
    MOVSD ES:EDI,ESI                    ; 004d5431
    MOVSD ES:EDI,ESI                    ; 004d5432
    PUSH EBX                            ; 004d5433
    FADD float ptr [ESP + 0x34]         ; 004d5434
    FXCH                                ; 004d5438
    FADD float ptr [ESP + 0x38]         ; 004d543a
    FXCH ST2                            ; 004d543e
    FADD float ptr [ESP + 0x3c]         ; 004d5440
    FXCH                                ; 004d5444
    FSTP float ptr [ESP + 0x64]         ; 004d5446
    FXCH                                ; 004d544a
    FSTP float ptr [ESP + 0x68]         ; 004d544c
    FSTP float ptr [ESP + 0x6c]         ; 004d5450
    CALL core_charactr.cpp_FUN_00423a60 ; 004d5454
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004d5459
    JMP 0x004d4f1a                      ; 004d545c
        ;   XREF to: 004d4f1a (UNCONDITIONAL_JUMP)  ; LAB_004d4f1a

