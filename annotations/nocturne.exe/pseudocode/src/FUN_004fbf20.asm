; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fbf20(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_004fbee8 = 004fc3bd
;   TerminatedCString s_s_confused_while_walking_0058de70
;   double DOUBLE_0058de9e = 12.5663706140000
;   double DOUBLE_0058dea6 = 0.333333333333333
;   double DOUBLE_0058deae = 32
;   double DOUBLE_0058deb6 = -1.57079632675000
;   float FLOAT_0058debe = 3.141593
;   double DOUBLE_0058dec6 = 1.57079632675000
;   double DOUBLE_0058dece = 1.59386252192652E-314
;   double DOUBLE_0058ded6 = 3.14159265350000
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005b9354
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_01c77814
;   undefined4 DAT_01e53388
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_00428c00
;   core_charactr.cpp_FUN_0042a150
;   core_inv.cpp_CInventory_updateInventory_FUN_004c1850
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_004fca50
;   core_scat.cpp_CScat_blendLayerAction_FUN_004fcff0
;   core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fbf20
        ;   Label: FUN_004fbf20
    PUSH ESI                            ; 004fbf21
    PUSH EDI                            ; 004fbf22
    PUSH EBP                            ; 004fbf23
    MOV EBP,ESP                         ; 004fbf24
    SUB ESP,0x78                        ; 004fbf26
    AND ESP,0xfffffff8                  ; 004fbf29
    MOV EBX,dword ptr [EBP + 0x14]      ; 004fbf2c
    PUSH dword ptr [EBP + 0x18]         ; 004fbf2f
    PUSH EBX                            ; 004fbf32
    CALL core_charactr.cpp_FUN_004259f0 ; 004fbf33
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004259f0()
    ADD ESP,0x8                         ; 004fbf38
    TEST EAX,EAX                        ; 004fbf3b
    JZ 0x004fc2e3                       ; 004fbf3d
        ;   XREF to: 004fc2e3 (CONDITIONAL_JUMP)  ; caseD_5
    FLD float ptr [EBP + 0x18]          ; 004fbf43
    FMUL double ptr [0x0058de9e]        ; 004fbf46 | DOUBLE_0058de9e
    MOV EAX,[0x005b9354]                ; 004fbf4c | DAT_005b9354
    FSTP float ptr [EBX + 0x2430]       ; 004fbf51
    CMP dword ptr [EAX + 0x228],0x0     ; 004fbf57 | DAT_01c77814
    JNZ 0x004fc2ea                      ; 004fbf5e
        ;   XREF to: 004fc2ea (CONDITIONAL_JUMP)  ; LAB_004fc2ea
    FLD float ptr [EBX + 0xbc8c]        ; 004fbf64
        ;   Label: LAB_004fbf64
    FSUB float ptr [EBP + 0x18]         ; 004fbf6a
    FST float ptr [EBX + 0xbc8c]        ; 004fbf6d
    FLDZ                                ; 004fbf73
    FCOMPP                              ; 004fbf75
    FNSTSW AX                           ; 004fbf77
    SAHF                                ; 004fbf79
    JBE 0x004fbf86                      ; 004fbf7a
        ;   XREF to: 004fbf86 (CONDITIONAL_JUMP)  ; LAB_004fbf86
    MOV dword ptr [EBX + 0xbc8c],0x0    ; 004fbf7c
    LEA ESI,[EBX + 0x23a4]              ; 004fbf86
        ;   Label: LAB_004fbf86
    PUSH dword ptr [EBP + 0x18]         ; 004fbf8c
    MOV dword ptr [ESI + 0x8],0x0       ; 004fbf8f
    PUSH EBX                            ; 004fbf96
    MOV EAX,dword ptr [ESI + 0x8]       ; 004fbf97
    MOV dword ptr [ESI + 0x4],EAX       ; 004fbf9a
    MOV EAX,dword ptr [ESI + 0x4]       ; 004fbf9d
    MOV dword ptr [ESI],EAX             ; 004fbfa0
    CALL core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_004fca50 ; 004fbfa2
        ;   XREF to: 004fca50 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_004fca50()
    ADD ESP,0x8                         ; 004fbfa7
    PUSH dword ptr [EBP + 0x18]         ; 004fbfaa
    FLD float ptr [EBX + 0x23ac]        ; 004fbfad
    PUSH EBX                            ; 004fbfb3
    FSTP float ptr [EBX + 0x242c]       ; 004fbfb4
    CALL core_charactr.cpp_FUN_00428c00 ; 004fbfba
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428c00()
    ADD ESP,0x8                         ; 004fbfbf
    TEST EAX,EAX                        ; 004fbfc2
    JZ 0x004fc386                       ; 004fbfc4
        ;   XREF to: 004fc386 (CONDITIONAL_JUMP)  ; LAB_004fc386
    MOV dword ptr [ESI + 0x8],0x0       ; 004fbfca
    MOV EAX,dword ptr [ESI + 0x8]       ; 004fbfd1
    MOV dword ptr [ESI + 0x4],EAX       ; 004fbfd4
    MOV EAX,dword ptr [ESI + 0x4]       ; 004fbfd7
    MOV dword ptr [ESI],EAX             ; 004fbfda
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 004fbfdc
    LEA ESI,[EBX + 0x150]               ; 004fbfe2
    CMP EAX,0x2                         ; 004fbfe8
    JNC 0x004fc360                      ; 004fbfeb
        ;   XREF to: 004fc360 (CONDITIONAL_JUMP)  ; LAB_004fc360
    CMP EAX,0x1                         ; 004fbff1
    JNZ 0x004fc367                      ; 004fbff4
        ;   XREF to: 004fc367 (CONDITIONAL_JUMP)  ; LAB_004fc367
    PUSH EBX                            ; 004fbffa
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40 ; 004fbffb
        ;   XREF to: 004fcd40 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40()
    ADD ESP,0x4                         ; 004fc000
    TEST EAX,EAX                        ; 004fc003
    JZ 0x004fc334                       ; 004fc005
        ;   XREF to: 004fc334 (CONDITIONAL_JUMP)  ; LAB_004fc334
    PUSH 0x1                            ; 004fc00b
        ;   Label: LAB_004fc00b
    PUSH 0x9                            ; 004fc00d
    PUSH ESI                            ; 004fc00f
        ;   Label: LAB_004fc00f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004fc010
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
        ;   Label: LAB_004fc010
    ADD ESP,0xc                         ; 004fc015
    MOV ESI,dword ptr [EBX + 0x2590]    ; 004fc018
        ;   Label: caseD_4
    TEST ESI,ESI                        ; 004fc01e
    JZ 0x004fc542                       ; 004fc020
        ;   XREF to: 004fc542 (CONDITIONAL_JUMP)  ; LAB_004fc542
    LEA EAX,[ESI + 0x20]                ; 004fc026
    PUSH EAX                            ; 004fc029
    LEA EAX,[ESP + 0x4c]                ; 004fc02a
    PUSH EAX                            ; 004fc02e
    PUSH EBX                            ; 004fc02f
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004fc030
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 004fc035
    PUSH EAX                            ; 004fc038
    LEA EAX,[ESP + 0x34]                ; 004fc039
    PUSH EAX                            ; 004fc03d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004fc03e
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 004fc043
    PUSH dword ptr [EAX + 0x4]          ; 004fc046
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004fc049
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x78],EAX      ; 004fc04e
    FLD float ptr [ESP + 0x78]          ; 004fc052
    ADD ESP,0x4                         ; 004fc056
    FST float ptr [ESP]                 ; 004fc059
    FCOMP double ptr [0x0058deb6]       ; 004fc05c | DOUBLE_0058deb6
    FNSTSW AX                           ; 004fc062
    SAHF                                ; 004fc064
    JNC 0x004fc073                      ; 004fc065
        ;   XREF to: 004fc073 (CONDITIONAL_JUMP)  ; LAB_004fc073
    FLD float ptr [ESP]                 ; 004fc067
    FADD float ptr [0x0058debe]         ; 004fc06a | FLOAT_0058debe
    FSTP float ptr [ESP]                ; 004fc070
    FLD float ptr [ESP]                 ; 004fc073
        ;   Label: LAB_004fc073
    FCOMP double ptr [0x0058dec6]       ; 004fc076 | DOUBLE_0058dec6
    FNSTSW AX                           ; 004fc07c
    SAHF                                ; 004fc07e
    JBE 0x004fc08d                      ; 004fc07f
        ;   XREF to: 004fc08d (CONDITIONAL_JUMP)  ; LAB_004fc08d
    FLD float ptr [ESP]                 ; 004fc081
    FADD float ptr [0x0058dece]         ; 004fc084 | DOUBLE_0058dece
    FSTP float ptr [ESP]                ; 004fc08a
    FLD float ptr [EBP + 0x18]          ; 004fc08d
        ;   Label: LAB_004fc08d
    FMUL double ptr [0x0058ded6]        ; 004fc090 | DOUBLE_0058ded6
    FLD float ptr [ESP]                 ; 004fc096
    FXCH                                ; 004fc099
    FST float ptr [ESP + 0x70]          ; 004fc09b
    FCHS                                ; 004fc09f
    FSTP float ptr [ESP + 0x6c]         ; 004fc0a1
    FCOMP float ptr [ESP + 0x6c]        ; 004fc0a5
    FNSTSW AX                           ; 004fc0a9
    SAHF                                ; 004fc0ab
    JNC 0x004fc0b5                      ; 004fc0ac
        ;   XREF to: 004fc0b5 (CONDITIONAL_JUMP)  ; LAB_004fc0b5
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004fc0ae
    MOV dword ptr [ESP],EAX             ; 004fc0b2
    FLD float ptr [ESP]                 ; 004fc0b5
        ;   Label: LAB_004fc0b5
    FCOMP float ptr [ESP + 0x70]        ; 004fc0b8
    FNSTSW AX                           ; 004fc0bc
    SAHF                                ; 004fc0be
    JBE 0x004fc0c8                      ; 004fc0bf
        ;   XREF to: 004fc0c8 (CONDITIONAL_JUMP)  ; LAB_004fc0c8
    MOV EAX,dword ptr [ESP + 0x70]      ; 004fc0c1
    MOV dword ptr [ESP],EAX             ; 004fc0c5
    FLD float ptr [EBX + 0x34]          ; 004fc0c8
        ;   Label: LAB_004fc0c8
    FADD float ptr [ESP]                ; 004fc0cb
    PUSH EBX                            ; 004fc0ce
    FSTP float ptr [EBX + 0x34]         ; 004fc0cf
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 004fc0d2
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    MOV ESI,dword ptr [EBX + 0x2590]    ; 004fc0d7
    ADD ESP,0x4                         ; 004fc0dd
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004fc0e0
    PUSH 0x0                            ; 004fc0e6
    MOV dword ptr [ESP + 0x78],EAX      ; 004fc0e8
    LEA EAX,[ESP + 0x58]                ; 004fc0ec
    PUSH EAX                            ; 004fc0f0
    LEA EDI,[EBX + 0x150]               ; 004fc0f1
    PUSH EDI                            ; 004fc0f7
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004fc0f8
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 004fc0fd
    PUSH EAX                            ; 004fc100
    PUSH EBX                            ; 004fc101
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004fc102
    PUSH ESI                            ; 004fc106
    CALL dword ptr [EAX + 0x108]        ; 004fc107
    ADD ESP,0xc                         ; 004fc10d
    TEST EAX,EAX                        ; 004fc110
    JZ 0x004fc520                       ; 004fc112
        ;   XREF to: 004fc520 (CONDITIONAL_JUMP)  ; LAB_004fc520
    CMP dword ptr [EBX + 0x2590],0x0    ; 004fc118
    JNZ 0x004fc52b                      ; 004fc11f
        ;   XREF to: 004fc52b (CONDITIONAL_JUMP)  ; LAB_004fc52b
    PUSH 0x1                            ; 004fc125
        ;   Label: LAB_004fc125
    PUSH 0x0                            ; 004fc127
    LEA EAX,[EBX + 0x150]               ; 004fc129
    PUSH EAX                            ; 004fc12f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004fc130
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
        ;   Label: LAB_004fc130
    ADD ESP,0xc                         ; 004fc135
    LEA EAX,[EBX + 0x1f5a0]             ; 004fc138
        ;   Label: LAB_004fc138
    PUSH EAX                            ; 004fc13e
    CALL core_inv.cpp_CInventory_updateInventory_FUN_004c1850 ; 004fc13f
        ;   XREF to: 004c1850 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_updateInventory_FUN_004c1850()
    MOV ECX,dword ptr [EBX + 0x1fa50]   ; 004fc144
    ADD ESP,0x4                         ; 004fc14a
    TEST ECX,ECX                        ; 004fc14d
    JZ 0x004fc161                       ; 004fc14f
        ;   XREF to: 004fc161 (CONDITIONAL_JUMP)  ; LAB_004fc161
    PUSH dword ptr [EBP + 0x18]         ; 004fc151
    MOV ESI,dword ptr [ECX + 0x14c]     ; 004fc154
    PUSH ECX                            ; 004fc15a
    CALL dword ptr [ESI + 0x4]          ; 004fc15b
    ADD ESP,0x8                         ; 004fc15e
    PUSH dword ptr [EBP + 0x18]         ; 004fc161
        ;   Label: LAB_004fc161
    PUSH EBX                            ; 004fc164
    CALL FUN_004fcd90                   ; 004fc165
        ;   XREF to: 004fcd90 (UNCONDITIONAL_CALL)  ; undefined FUN_004fcd90()
    ADD ESP,0x8                         ; 004fc16a
    PUSH EBX                            ; 004fc16d
    XOR ESI,ESI                         ; 004fc16e
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 004fc170
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_preProcess_FUN_004259a0()
    FLD float ptr [EBX + 0x2434]        ; 004fc175
    FLDZ                                ; 004fc17b
    ADD ESP,0x4                         ; 004fc17d
    FCOMPP                              ; 004fc180
    FNSTSW AX                           ; 004fc182
    SAHF                                ; 004fc184
    JC 0x004fc18c                       ; 004fc185
        ;   XREF to: 004fc18c (CONDITIONAL_JUMP)  ; LAB_004fc18c
    MOV ESI,0x1                         ; 004fc187
    PUSH EBX                            ; 004fc18c
        ;   Label: LAB_004fc18c
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004fc18d
    CALL dword ptr [EAX + 0xec]         ; 004fc193
    ADD ESP,0x4                         ; 004fc199
    TEST EAX,EAX                        ; 004fc19c
    JZ 0x004fc1a5                       ; 004fc19e
        ;   XREF to: 004fc1a5 (CONDITIONAL_JUMP)  ; LAB_004fc1a5
    MOV ESI,0x1                         ; 004fc1a0
    PUSH 0xc                            ; 004fc1a5
        ;   Label: LAB_004fc1a5
    LEA EAX,[EBX + 0x150]               ; 004fc1a7
    PUSH EAX                            ; 004fc1ad
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004fc1ae
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [ESP + 0x7c],EAX      ; 004fc1b3
    FLD float ptr [ESP + 0x7c]          ; 004fc1b7
    FLDZ                                ; 004fc1bb
    ADD ESP,0x8                         ; 004fc1bd
    FCOMPP                              ; 004fc1c0
    FNSTSW AX                           ; 004fc1c2
    SAHF                                ; 004fc1c4
    JNC 0x004fc1cc                      ; 004fc1c5
        ;   XREF to: 004fc1cc (CONDITIONAL_JUMP)  ; LAB_004fc1cc
    MOV ESI,0x1                         ; 004fc1c7
    PUSH 0xd                            ; 004fc1cc
        ;   Label: LAB_004fc1cc
    LEA EAX,[EBX + 0x150]               ; 004fc1ce
    PUSH EAX                            ; 004fc1d4
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004fc1d5
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [ESP + 0x7c],EAX      ; 004fc1da
    FLD float ptr [ESP + 0x7c]          ; 004fc1de
    FLDZ                                ; 004fc1e2
    ADD ESP,0x8                         ; 004fc1e4
    FCOMPP                              ; 004fc1e7
    FNSTSW AX                           ; 004fc1e9
    SAHF                                ; 004fc1eb
    JNC 0x004fc1f3                      ; 004fc1ec
        ;   XREF to: 004fc1f3 (CONDITIONAL_JUMP)  ; LAB_004fc1f3
    MOV ESI,0x1                         ; 004fc1ee
    PUSH 0x4                            ; 004fc1f3
        ;   Label: LAB_004fc1f3
    LEA EAX,[EBX + 0x150]               ; 004fc1f5
    PUSH EAX                            ; 004fc1fb
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004fc1fc
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [ESP + 0x7c],EAX      ; 004fc201
    FLD float ptr [ESP + 0x7c]          ; 004fc205
    FLDZ                                ; 004fc209
    ADD ESP,0x8                         ; 004fc20b
    FCOMPP                              ; 004fc20e
    FNSTSW AX                           ; 004fc210
    SAHF                                ; 004fc212
    JNC 0x004fc21a                      ; 004fc213
        ;   XREF to: 004fc21a (CONDITIONAL_JUMP)  ; LAB_004fc21a
    MOV ESI,0x1                         ; 004fc215
    PUSH 0x5                            ; 004fc21a
        ;   Label: LAB_004fc21a
    LEA EAX,[EBX + 0x150]               ; 004fc21c
    PUSH EAX                            ; 004fc222
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 004fc223
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [ESP + 0x7c],EAX      ; 004fc228
    FLD float ptr [ESP + 0x7c]          ; 004fc22c
    FLDZ                                ; 004fc230
    ADD ESP,0x8                         ; 004fc232
    FCOMPP                              ; 004fc235
    FNSTSW AX                           ; 004fc237
    SAHF                                ; 004fc239
    JNC 0x004fc241                      ; 004fc23a
        ;   XREF to: 004fc241 (CONDITIONAL_JUMP)  ; LAB_004fc241
    MOV ESI,0x1                         ; 004fc23c
    PUSH ESI                            ; 004fc241
        ;   Label: LAB_004fc241
    PUSH dword ptr [EBP + 0x18]         ; 004fc242
    PUSH EBX                            ; 004fc245
    CALL core_scat.cpp_CScat_updateAiming_FUN_004fd450 ; 004fc246
        ;   XREF to: 004fd450 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_CScat_updateAiming_FUN_004fd450()
    ADD ESP,0xc                         ; 004fc24b
    LEA EAX,[EBX + 0x150]               ; 004fc24e
    PUSH EAX                            ; 004fc254
    MOV dword ptr [ESP + 0x6c],EAX      ; 004fc255
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 004fc259
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0()
    ADD ESP,0x4                         ; 004fc25e
    PUSH EBX                            ; 004fc261
    CALL core_scat.cpp_CScat_blendLayerAction_FUN_004fcff0 ; 004fc262
        ;   XREF to: 004fcff0 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_CScat_blendLayerAction_FUN_004fcff0()
    ADD ESP,0x4                         ; 004fc267
    PUSH EBX                            ; 004fc26a
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40 ; 004fc26b
        ;   XREF to: 004fcd40 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40()
    ADD ESP,0x4                         ; 004fc270
    TEST EAX,EAX                        ; 004fc273
    JNZ 0x004fc2ce                      ; 004fc275
        ;   XREF to: 004fc2ce (CONDITIONAL_JUMP)  ; LAB_004fc2ce
    PUSH EBX                            ; 004fc277
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004fc278
    CALL dword ptr [EAX + 0x104]        ; 004fc27e
    ADD ESP,0x4                         ; 004fc284
    TEST EAX,EAX                        ; 004fc287
    JNZ 0x004fc2ce                      ; 004fc289
        ;   XREF to: 004fc2ce (CONDITIONAL_JUMP)  ; LAB_004fc2ce
    PUSH 0x51b650                       ; 004fc28b
    MOV EDI,dword ptr [0x01e53388]      ; 004fc290 | DAT_01e53388
    PUSH EDI                            ; 004fc296
    LEA EAX,[EBX + 0x1fa40]             ; 004fc297
    PUSH dword ptr [EBX + 0x1fa4c]      ; 004fc29d
    PUSH EAX                            ; 004fc2a3
    LEA ESI,[ESP + 0x24]                ; 004fc2a4
    CALL core_xform.cpp_FUN_0055d610    ; 004fc2a8
        ;   XREF to: 0055d610 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d610()
    ADD ESP,0x4                         ; 004fc2ad
    LEA EAX,[ESP + 0x10]                ; 004fc2b0
    LEA EDI,[ESP + 0x10]                ; 004fc2b4
    PUSH EAX                            ; 004fc2b8
    MOV EAX,dword ptr [ESP + 0x78]      ; 004fc2b9
    LEA ESI,[ESP + 0x24]                ; 004fc2bd
    PUSH EAX                            ; 004fc2c1
    MOVSD ES:EDI,ESI                    ; 004fc2c2
    MOVSD ES:EDI,ESI                    ; 004fc2c3
    MOVSD ES:EDI,ESI                    ; 004fc2c4
    MOVSD ES:EDI,ESI                    ; 004fc2c5
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0 ; 004fc2c6
        ;   XREF to: 0051cfd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0()
    ADD ESP,0x14                        ; 004fc2cb
    PUSH dword ptr [EBP + 0x18]         ; 004fc2ce
        ;   Label: LAB_004fc2ce
    PUSH EBX                            ; 004fc2d1
    CALL core_charactr.cpp_FUN_0042a150 ; 004fc2d2
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a150()
    ADD ESP,0x8                         ; 004fc2d7
    PUSH EBX                            ; 004fc2da
    CALL FUN_004fdd00                   ; 004fc2db
        ;   XREF to: 004fdd00 (UNCONDITIONAL_CALL)  ; undefined FUN_004fdd00()
    ADD ESP,0x4                         ; 004fc2e0
    MOV ESP,EBP                         ; 004fc2e3
        ;   Label: caseD_5
    POP EBP                             ; 004fc2e5
    POP EDI                             ; 004fc2e6
    POP ESI                             ; 004fc2e7
    POP EBX                             ; 004fc2e8
    RET                                 ; 004fc2e9
    FLD float ptr [EBX + 0x2430]        ; 004fc2ea
        ;   Label: LAB_004fc2ea
    FMUL double ptr [0x0058dea6]        ; 004fc2f0 | DOUBLE_0058dea6
    FSTP float ptr [EBX + 0x2430]       ; 004fc2f6
    JMP 0x004fbf64                      ; 004fc2fc
        ;   XREF to: 004fbf64 (UNCONDITIONAL_JUMP)  ; LAB_004fbf64
    PUSH EBX                            ; 004fc301
        ;   Label: LAB_004fc301
    PUSH 0x58de70                       ; 004fc302 | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x005ad350]      ; 004fc307 | PTR_DAT_005ad350
    PUSH ECX                            ; 004fc30d | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004fc30e
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 004fc313
    PUSH EBX                            ; 004fc316
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40 ; 004fc317
        ;   XREF to: 004fcd40 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40()
    ADD ESP,0x4                         ; 004fc31c
    TEST EAX,EAX                        ; 004fc31f
    JZ 0x004fc32c                       ; 004fc321
        ;   XREF to: 004fc32c (CONDITIONAL_JUMP)  ; LAB_004fc32c
    PUSH 0x1                            ; 004fc323
    PUSH 0x7                            ; 004fc325
    JMP 0x004fc00f                      ; 004fc327
        ;   XREF to: 004fc00f (UNCONDITIONAL_JUMP)  ; LAB_004fc00f
    PUSH 0x1                            ; 004fc32c
        ;   Label: LAB_004fc32c
    PUSH EAX                            ; 004fc32e
    JMP 0x004fc00f                      ; 004fc32f
        ;   XREF to: 004fc00f (UNCONDITIONAL_JUMP)  ; LAB_004fc00f
    PUSH 0x1                            ; 004fc334
        ;   Label: LAB_004fc334
    PUSH 0x1                            ; 004fc336
    JMP 0x004fc00f                      ; 004fc338
        ;   XREF to: 004fc00f (UNCONDITIONAL_JUMP)  ; LAB_004fc00f
    PUSH EBX                            ; 004fc33d
        ;   Label: LAB_004fc33d
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40 ; 004fc33e
        ;   XREF to: 004fcd40 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40()
    ADD ESP,0x4                         ; 004fc343
    TEST EAX,EAX                        ; 004fc346
    JNZ 0x004fc00b                      ; 004fc348
        ;   XREF to: 004fc00b (CONDITIONAL_JUMP)  ; LAB_004fc00b
    PUSH 0x1                            ; 004fc34e
    PUSH 0x2                            ; 004fc350
    JMP 0x004fc00f                      ; 004fc352
        ;   XREF to: 004fc00f (UNCONDITIONAL_JUMP)  ; LAB_004fc00f
    PUSH 0x1                            ; 004fc357
        ;   Label: LAB_004fc357
    PUSH ESI                            ; 004fc359
    PUSH EAX                            ; 004fc35a
    JMP 0x004fc010                      ; 004fc35b
        ;   XREF to: 004fc010 (UNCONDITIONAL_JUMP)  ; LAB_004fc010
    JBE 0x004fc33d                      ; 004fc360
        ;   XREF to: 004fc33d (CONDITIONAL_JUMP)  ; LAB_004fc33d
        ;   Label: LAB_004fc360
    CMP EAX,0x3                         ; 004fc362
    JZ 0x004fc301                       ; 004fc365
        ;   XREF to: 004fc301 (CONDITIONAL_JUMP)  ; LAB_004fc301
    PUSH EBX                            ; 004fc367
        ;   Label: LAB_004fc367
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40 ; 004fc368
        ;   XREF to: 004fcd40 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40()
    MOV ESI,EAX                         ; 004fc36d
    ADD ESP,0x4                         ; 004fc36f
    LEA EAX,[EBX + 0x150]               ; 004fc372
    TEST ESI,ESI                        ; 004fc378
    JZ 0x004fc357                       ; 004fc37a
        ;   XREF to: 004fc357 (CONDITIONAL_JUMP)  ; LAB_004fc357
    PUSH 0x1                            ; 004fc37c
    PUSH 0x7                            ; 004fc37e
    PUSH EAX                            ; 004fc380
    JMP 0x004fc010                      ; 004fc381
        ;   XREF to: 004fc010 (UNCONDITIONAL_JUMP)  ; LAB_004fc010
    CMP dword ptr [EBX + 0xbc90],0x2    ; 004fc386
        ;   Label: LAB_004fc386
    JNZ 0x004fc39b                      ; 004fc38d
        ;   XREF to: 004fc39b (CONDITIONAL_JUMP)  ; LAB_004fc39b
    PUSH dword ptr [EBP + 0x18]         ; 004fc38f
    PUSH EBX                            ; 004fc392
    CALL core_scat.cpp_CScat_updateAI_FUN_004fc610 ; 004fc393
        ;   XREF to: 004fc610 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_CScat_updateAI_FUN_004fc610()
    ADD ESP,0x8                         ; 004fc398
    LEA EAX,[EBX + 0x150]               ; 004fc39b
        ;   Label: LAB_004fc39b
    PUSH EAX                            ; 004fc3a1
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004fc3a2
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fc3a7
    ADD ESP,0x4                         ; 004fc3aa
    CMP EAX,0xa                         ; 004fc3ad
    JA 0x004fc018                       ; 004fc3b0
        ;   XREF to: 004fc018 (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x4fbee8]  ; 004fc3b6 | caseD_a | caseD_8 | caseD_5
        ;   Label: switchD
    CMP dword ptr [EBX + 0x2408],0x0    ; 004fc3bd
        ;   Label: caseD_0
    JZ 0x004fc018                       ; 004fc3c4
        ;   XREF to: 004fc018 (CONDITIONAL_JUMP)  ; caseD_8
    PUSH EBX                            ; 004fc3ca
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40 ; 004fc3cb
        ;   XREF to: 004fcd40 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40()
    XOR ESI,ESI                         ; 004fc3d0
    ADD ESP,0x4                         ; 004fc3d2
    TEST EAX,EAX                        ; 004fc3d5
    JZ 0x004fc3de                       ; 004fc3d7
        ;   XREF to: 004fc3de (CONDITIONAL_JUMP)  ; LAB_004fc3de
    MOV ESI,0x7                         ; 004fc3d9
    CMP dword ptr [EBX + 0xbc94],0x0    ; 004fc3de
        ;   Label: LAB_004fc3de
    JZ 0x004fc3fd                       ; 004fc3e5
        ;   XREF to: 004fc3fd (CONDITIONAL_JUMP)  ; LAB_004fc3fd
    PUSH EBX                            ; 004fc3e7
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40 ; 004fc3e8
        ;   XREF to: 004fcd40 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40()
    ADD ESP,0x4                         ; 004fc3ed
    TEST EAX,EAX                        ; 004fc3f0
    JZ 0x004fc4f9                       ; 004fc3f2
        ;   XREF to: 004fc4f9 (CONDITIONAL_JUMP)  ; LAB_004fc4f9
    MOV ESI,0x9                         ; 004fc3f8
    CMP dword ptr [EBX + 0xbc98],0x0    ; 004fc3fd
        ;   Label: LAB_004fc3fd
    JZ 0x004fc41c                       ; 004fc404
        ;   XREF to: 004fc41c (CONDITIONAL_JUMP)  ; LAB_004fc41c
    PUSH EBX                            ; 004fc406
    CALL core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40 ; 004fc407
        ;   XREF to: 004fcd40 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40()
    ADD ESP,0x4                         ; 004fc40c
    TEST EAX,EAX                        ; 004fc40f
    JZ 0x004fc516                       ; 004fc411
        ;   XREF to: 004fc516 (CONDITIONAL_JUMP)  ; LAB_004fc516
    MOV ESI,0xa                         ; 004fc417
    CMP dword ptr [EBX + 0xbca0],0x0    ; 004fc41c
        ;   Label: LAB_004fc41c
    JZ 0x004fc482                       ; 004fc423
        ;   XREF to: 004fc482 (CONDITIONAL_JUMP)  ; LAB_004fc482
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 004fc425
    JZ 0x004fc482                       ; 004fc42c
        ;   XREF to: 004fc482 (CONDITIONAL_JUMP)  ; LAB_004fc482
    MOV EAX,dword ptr [EBX + 0x1fa50]   ; 004fc42e
    TEST EAX,EAX                        ; 004fc434
    JZ 0x004fc482                       ; 004fc436
        ;   XREF to: 004fc482 (CONDITIONAL_JUMP)  ; LAB_004fc482
    PUSH EAX                            ; 004fc438
    MOV EDI,dword ptr [EAX + 0x14c]     ; 004fc439
    CALL dword ptr [EDI + 0xe0]         ; 004fc43f
    ADD ESP,0x4                         ; 004fc445
    TEST EAX,EAX                        ; 004fc448
    JZ 0x004fc482                       ; 004fc44a
        ;   XREF to: 004fc482 (CONDITIONAL_JUMP)  ; LAB_004fc482
    MOV EAX,dword ptr [EBX + 0x1fa50]   ; 004fc44c
    PUSH EAX                            ; 004fc452
    MOV EDI,dword ptr [EAX + 0x14c]     ; 004fc453
    CALL dword ptr [EDI + 0xdc]         ; 004fc459
    MOV EAX,dword ptr [EBX + 0x1fa50]   ; 004fc45f
    MOV dword ptr [EBX + 0xbca0],0x0    ; 004fc465
    MOV EDX,dword ptr [EAX + 0x2d8]     ; 004fc46f
    ADD ESP,0x4                         ; 004fc475
    CMP EDX,0x8                         ; 004fc478
    JNZ 0x004fc482                      ; 004fc47b
        ;   XREF to: 004fc482 (CONDITIONAL_JUMP)  ; LAB_004fc482
    MOV ESI,0xb                         ; 004fc47d
    FLD float ptr [EBX + 0xbcb8]        ; 004fc482
        ;   Label: LAB_004fc482
    FMUL float ptr [EBX + 0x2430]       ; 004fc488
    LEA EDI,[EBX + 0x150]               ; 004fc48e
    FADD float ptr [EBX + 0x2410]       ; 004fc494
    PUSH EDI                            ; 004fc49a
    FSTP float ptr [EBX + 0x2410]       ; 004fc49b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004fc4a1
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fc4a6
    ADD ESP,0x4                         ; 004fc4a9
    CMP ESI,EAX                         ; 004fc4ac
    JZ 0x004fc4bc                       ; 004fc4ae
        ;   XREF to: 004fc4bc (CONDITIONAL_JUMP)  ; LAB_004fc4bc
    PUSH 0x1                            ; 004fc4b0
    PUSH ESI                            ; 004fc4b2
    PUSH EDI                            ; 004fc4b3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004fc4b4
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004fc4b9
    CMP dword ptr [EBX + 0xbcac],0x0    ; 004fc4bc
        ;   Label: LAB_004fc4bc
    JZ 0x004fc018                       ; 004fc4c3
        ;   XREF to: 004fc018 (CONDITIONAL_JUMP)  ; caseD_8
    MOV dword ptr [EBX + 0xbcac],0x0    ; 004fc4c9
    MOV EDX,dword ptr [EBX + 0x1fa3c]   ; 004fc4d3
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004fc4d9
    TEST EDX,EDX                        ; 004fc4df
    SETZ AL                             ; 004fc4e1
    AND EAX,0xff                        ; 004fc4e4
    PUSH EAX                            ; 004fc4e9
    PUSH EBX                            ; 004fc4ea
    CALL dword ptr [ESI + 0x13c]        ; 004fc4eb
    ADD ESP,0x8                         ; 004fc4f1
    JMP 0x004fc018                      ; 004fc4f4
        ;   XREF to: 004fc018 (UNCONDITIONAL_JUMP)  ; caseD_8
    CMP dword ptr [EBX + 0xbc9c],0x0    ; 004fc4f9
        ;   Label: LAB_004fc4f9
    JZ 0x004fc50c                       ; 004fc500
        ;   XREF to: 004fc50c (CONDITIONAL_JUMP)  ; LAB_004fc50c
    MOV ESI,0x2                         ; 004fc502
    JMP 0x004fc3fd                      ; 004fc507
        ;   XREF to: 004fc3fd (UNCONDITIONAL_JUMP)  ; LAB_004fc3fd
    MOV ESI,0x1                         ; 004fc50c
        ;   Label: LAB_004fc50c
    JMP 0x004fc3fd                      ; 004fc511
        ;   XREF to: 004fc3fd (UNCONDITIONAL_JUMP)  ; LAB_004fc3fd
    MOV ESI,0x3                         ; 004fc516
        ;   Label: LAB_004fc516
    JMP 0x004fc41c                      ; 004fc51b
        ;   XREF to: 004fc41c (UNCONDITIONAL_JUMP)  ; LAB_004fc41c
    MOV dword ptr [EBX + 0x2590],EAX    ; 004fc520
        ;   Label: LAB_004fc520
    JMP 0x004fc125                      ; 004fc526
        ;   XREF to: 004fc125 (UNCONDITIONAL_JUMP)  ; LAB_004fc125
    CMP dword ptr [EBX + 0xbca0],0x0    ; 004fc52b
        ;   Label: LAB_004fc52b
    JZ 0x004fc138                       ; 004fc532
        ;   XREF to: 004fc138 (CONDITIONAL_JUMP)  ; LAB_004fc138
    PUSH 0x1                            ; 004fc538
    PUSH 0xf                            ; 004fc53a
    PUSH EDI                            ; 004fc53c
    JMP 0x004fc130                      ; 004fc53d
        ;   XREF to: 004fc130 (UNCONDITIONAL_JUMP)  ; LAB_004fc130
    LEA EAX,[EBX + 0x23a4]              ; 004fc542
        ;   Label: LAB_004fc542
    LEA ESI,[EBX + 0x2414]              ; 004fc548
    FLD float ptr [EAX]                 ; 004fc54e
    FADD float ptr [ESI]                ; 004fc550
    FSTP float ptr [ESP + 0x3c]         ; 004fc552
    FLD float ptr [EAX + 0x4]           ; 004fc556
    FADD float ptr [ESI + 0x4]          ; 004fc559
    FLD float ptr [EBP + 0x18]          ; 004fc55c
    FLD ST0                             ; 004fc55f
    FXCH ST2                            ; 004fc561
    FSTP float ptr [ESP + 0x40]         ; 004fc563
    FLD float ptr [EAX + 0x8]           ; 004fc567
    FADD float ptr [ESI + 0x8]          ; 004fc56a
    FXCH ST2                            ; 004fc56d
    FMUL double ptr [0x0058deae]        ; 004fc56f | DOUBLE_0058deae
    FXCH ST2                            ; 004fc575
    FSTP float ptr [ESP + 0x44]         ; 004fc577
    MOV dword ptr [EAX + 0x8],0x0       ; 004fc57b
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fc582
    MOV dword ptr [EAX + 0x4],EDX       ; 004fc585
    MOV EDX,dword ptr [EAX + 0x4]       ; 004fc588
    MOV dword ptr [EAX],EDX             ; 004fc58b
    MOV dword ptr [ESI + 0x8],0x0       ; 004fc58d
    MOV EAX,dword ptr [ESI + 0x8]       ; 004fc594
    MOV dword ptr [ESI + 0x4],EAX       ; 004fc597
    MOV EAX,dword ptr [ESI + 0x4]       ; 004fc59a
    MOV dword ptr [ESI],EAX             ; 004fc59d
    FLD float ptr [EBX + 0x2424]        ; 004fc59f
    FXCH ST2                            ; 004fc5a5
    FSUBR ST0,ST2                       ; 004fc5a7
    LEA EAX,[EBX + 0x2420]              ; 004fc5a9
    FSTP ST2                            ; 004fc5af
    FXCH                                ; 004fc5b1
    FSTP float ptr [EBX + 0x2424]       ; 004fc5b3
    FLD float ptr [EAX]                 ; 004fc5b9
    FMUL ST1                            ; 004fc5bb
    FSTP float ptr [ESP + 0x24]         ; 004fc5bd
    FLD float ptr [EAX + 0x4]           ; 004fc5c1
    FMUL ST1                            ; 004fc5c4
    FSTP float ptr [ESP + 0x28]         ; 004fc5c6
    FMUL float ptr [EAX + 0x8]          ; 004fc5ca
    FLD float ptr [ESP + 0x40]          ; 004fc5cd
    FLD float ptr [ESP + 0x3c]          ; 004fc5d1
    FADD float ptr [ESP + 0x24]         ; 004fc5d5
    FLD float ptr [ESP + 0x44]          ; 004fc5d9
    FXCH                                ; 004fc5dd
    FSTP float ptr [ESP + 0x3c]         ; 004fc5df
    FXCH                                ; 004fc5e3
    FADD float ptr [ESP + 0x28]         ; 004fc5e5
    LEA EAX,[ESP + 0x3c]                ; 004fc5e9
    FSTP float ptr [ESP + 0x40]         ; 004fc5ed
    FXCH                                ; 004fc5f1
    FSTP float ptr [ESP + 0x2c]         ; 004fc5f3
    PUSH EAX                            ; 004fc5f7
    FADD float ptr [ESP + 0x30]         ; 004fc5f8
    PUSH EBX                            ; 004fc5fc
    FSTP float ptr [ESP + 0x4c]         ; 004fc5fd
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 004fc601
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050()
    ADD ESP,0x8                         ; 004fc606
    JMP 0x004fc138                      ; 004fc609
        ;   XREF to: 004fc138 (UNCONDITIONAL_JUMP)  ; LAB_004fc138

