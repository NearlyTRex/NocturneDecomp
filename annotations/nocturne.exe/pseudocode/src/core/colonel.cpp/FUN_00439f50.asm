; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_colonel_cpp_FUN_00439f50(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_00439f34 = 0043a234
;   TerminatedCString s_s_confused_while_walking_0057b10b
;   double DOUBLE_0057b13c = 12.5663706140000
;   double DOUBLE_0057b144 = 32
;   double DOUBLE_0057b14c = -1.57079632675000
;   double DOUBLE_0057b154 = 5.32864626443882E-315
;   double DOUBLE_0057b15c = 1.57079632675000
;   double DOUBLE_0057b164 = 1.59386252192652E-314
;   double DOUBLE_0057b16c = 3.14159265350000
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ac8c
;   undefined4 DAT_0077ad0c
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
;   core_colonel.cpp_CColonel_processAI_FUN_0043a470
;   core_colonel.cpp_CColonel_processMotionEvents_FUN_0043a980
;   core_hero.cpp_CHero_executeLeverPull_FUN_004b5490
;   core_hero.cpp_CHero_tryInteract_FUN_004b4e90
;   core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0
;   core_hero.cpp_FUN_004b5110
;   core_hero.cpp_FUN_004b5270
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439f50
        ;   Label: core_colonel.cpp_FUN_00439f50
    PUSH ESI                            ; 00439f51
    PUSH EDI                            ; 00439f52
    PUSH EBP                            ; 00439f53
    MOV EBP,ESP                         ; 00439f54
    SUB ESP,0x88                        ; 00439f56
    AND ESP,0xfffffff8                  ; 00439f5c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00439f5f
    PUSH dword ptr [EBP + 0x18]         ; 00439f62
    PUSH EBX                            ; 00439f65
    CALL core_charactr.cpp_FUN_004259f0 ; 00439f66
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004259f0()
    ADD ESP,0x8                         ; 00439f6b
    TEST EAX,EAX                        ; 00439f6e
    JZ 0x0043a1e9                       ; 00439f70
        ;   XREF to: 0043a1e9 (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EBX + 0xbc8c]        ; 00439f76
    FSUB float ptr [EBP + 0x18]         ; 00439f7c
    FST float ptr [EBX + 0xbc8c]        ; 00439f7f
    FLDZ                                ; 00439f85
    FCOMPP                              ; 00439f87
    FNSTSW AX                           ; 00439f89
    SAHF                                ; 00439f8b
    JBE 0x00439f98                      ; 00439f8c
        ;   XREF to: 00439f98 (CONDITIONAL_JUMP)  ; LAB_00439f98
    MOV dword ptr [EBX + 0xbc8c],0x0    ; 00439f8e
    LEA EAX,[EBX + 0x23a4]              ; 00439f98
        ;   Label: LAB_00439f98
    PUSH dword ptr [EBP + 0x18]         ; 00439f9e
    MOV dword ptr [EAX + 0x8],0x0       ; 00439fa1
    PUSH EBX                            ; 00439fa8
    MOV EDX,dword ptr [EAX + 0x8]       ; 00439fa9
    MOV dword ptr [EAX + 0x4],EDX       ; 00439fac
    MOV EDX,dword ptr [EAX + 0x4]       ; 00439faf
    MOV dword ptr [EAX],EDX             ; 00439fb2
    CALL core_colonel.cpp_CColonel_processMotionEvents_FUN_0043a980 ; 00439fb4
        ;   XREF to: 0043a980 (UNCONDITIONAL_CALL)  ; undefined core_colonel.cpp_CColonel_processMotionEvents_FUN_0043a980()
    MOV EDX,dword ptr [EBX + 0xbc90]    ; 00439fb9
    ADD ESP,0x8                         ; 00439fbf
    CMP EDX,0x2                         ; 00439fc2
    JNZ 0x00439fd3                      ; 00439fc5
        ;   XREF to: 00439fd3 (CONDITIONAL_JUMP)  ; LAB_00439fd3
    PUSH dword ptr [EBP + 0x18]         ; 00439fc7
    PUSH EBX                            ; 00439fca
    CALL core_colonel.cpp_CColonel_processAI_FUN_0043a470 ; 00439fcb
        ;   XREF to: 0043a470 (UNCONDITIONAL_CALL)  ; undefined core_colonel.cpp_CColonel_processAI_FUN_0043a470()
    ADD ESP,0x8                         ; 00439fd0
    FLD float ptr [EBP + 0x18]          ; 00439fd3
        ;   Label: LAB_00439fd3
    FMUL double ptr [0x0057b13c]        ; 00439fd6 | DOUBLE_0057b13c
    PUSH dword ptr [EBP + 0x18]         ; 00439fdc
    MOV EAX,dword ptr [EBX + 0x23ac]    ; 00439fdf
    MOV dword ptr [EBX + 0x242c],EAX    ; 00439fe5
    PUSH EBX                            ; 00439feb
    FSTP float ptr [EBX + 0x2430]       ; 00439fec
    CALL core_charactr.cpp_FUN_00428c00 ; 00439ff2
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428c00()
    LEA ESI,[EBX + 0x150]               ; 00439ff7
    ADD ESP,0x8                         ; 00439ffd
    TEST EAX,EAX                        ; 0043a000
    JZ 0x0043a372                       ; 0043a002
        ;   XREF to: 0043a372 (CONDITIONAL_JUMP)  ; LAB_0043a372
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 0043a008
    CMP EAX,0x2                         ; 0043a00e
    JNC 0x0043a21d                      ; 0043a011
        ;   XREF to: 0043a21d (CONDITIONAL_JUMP)  ; LAB_0043a21d
    CMP EAX,0x1                         ; 0043a017
    JNZ 0x0043a224                      ; 0043a01a
        ;   XREF to: 0043a224 (CONDITIONAL_JUMP)  ; LAB_0043a224
    PUSH EAX                            ; 0043a020
    PUSH EAX                            ; 0043a021
    PUSH ESI                            ; 0043a022
        ;   Label: LAB_0043a022
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0043a023
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
        ;   Label: LAB_0043a023
    ADD ESP,0xc                         ; 0043a028
        ;   Label: LAB_0043a028
    MOV EDI,dword ptr [EBX + 0x2590]    ; 0043a02b
        ;   Label: caseD_4
    TEST EDI,EDI                        ; 0043a031
    JZ 0x0043a3b0                       ; 0043a033
        ;   XREF to: 0043a3b0 (CONDITIONAL_JUMP)  ; LAB_0043a3b0
    CMP dword ptr [EBX + 0x2594],0x0    ; 0043a039
    JNZ 0x0043a100                      ; 0043a040
        ;   XREF to: 0043a100 (CONDITIONAL_JUMP)  ; LAB_0043a100
    LEA EAX,[EDI + 0x20]                ; 0043a046
    PUSH EAX                            ; 0043a049
    LEA EAX,[ESP + 0x40]                ; 0043a04a
    PUSH EAX                            ; 0043a04e
    PUSH EBX                            ; 0043a04f
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0043a050
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 0043a055
    PUSH EAX                            ; 0043a058
    LEA EAX,[ESP + 0x58]                ; 0043a059
    PUSH EAX                            ; 0043a05d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0043a05e
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 0043a063
    PUSH dword ptr [EAX + 0x4]          ; 0043a066
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0043a069
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x88],EAX      ; 0043a06e
    FLD float ptr [ESP + 0x88]          ; 0043a075
    ADD ESP,0x4                         ; 0043a07c
    FST float ptr [ESP]                 ; 0043a07f
    FCOMP double ptr [0x0057b14c]       ; 0043a082 | DOUBLE_0057b14c
    FNSTSW AX                           ; 0043a088
    SAHF                                ; 0043a08a
    JNC 0x0043a099                      ; 0043a08b
        ;   XREF to: 0043a099 (CONDITIONAL_JUMP)  ; LAB_0043a099
    FLD float ptr [ESP]                 ; 0043a08d
    FADD float ptr [0x0057b154]         ; 0043a090 | DOUBLE_0057b154
    FSTP float ptr [ESP]                ; 0043a096
    FLD float ptr [ESP]                 ; 0043a099
        ;   Label: LAB_0043a099
    FCOMP double ptr [0x0057b15c]       ; 0043a09c | DOUBLE_0057b15c
    FNSTSW AX                           ; 0043a0a2
    SAHF                                ; 0043a0a4
    JBE 0x0043a0b3                      ; 0043a0a5
        ;   XREF to: 0043a0b3 (CONDITIONAL_JUMP)  ; LAB_0043a0b3
    FLD float ptr [ESP]                 ; 0043a0a7
    FADD float ptr [0x0057b164]         ; 0043a0aa | DOUBLE_0057b164
    FSTP float ptr [ESP]                ; 0043a0b0
    FLD float ptr [EBP + 0x18]          ; 0043a0b3
        ;   Label: LAB_0043a0b3
    FMUL double ptr [0x0057b16c]        ; 0043a0b6 | DOUBLE_0057b16c
    FLD float ptr [ESP]                 ; 0043a0bc
    FXCH                                ; 0043a0bf
    FST float ptr [ESP + 0x7c]          ; 0043a0c1
    FCHS                                ; 0043a0c5
    FSTP float ptr [ESP + 0x78]         ; 0043a0c7
    FCOMP float ptr [ESP + 0x78]        ; 0043a0cb
    FNSTSW AX                           ; 0043a0cf
    SAHF                                ; 0043a0d1
    JNC 0x0043a0db                      ; 0043a0d2
        ;   XREF to: 0043a0db (CONDITIONAL_JUMP)  ; LAB_0043a0db
    MOV EAX,dword ptr [ESP + 0x78]      ; 0043a0d4
    MOV dword ptr [ESP],EAX             ; 0043a0d8
    FLD float ptr [ESP]                 ; 0043a0db
        ;   Label: LAB_0043a0db
    FCOMP float ptr [ESP + 0x7c]        ; 0043a0de
    FNSTSW AX                           ; 0043a0e2
    SAHF                                ; 0043a0e4
    JBE 0x0043a0ee                      ; 0043a0e5
        ;   XREF to: 0043a0ee (CONDITIONAL_JUMP)  ; LAB_0043a0ee
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0043a0e7
    MOV dword ptr [ESP],EAX             ; 0043a0eb
    FLD float ptr [EBX + 0x34]          ; 0043a0ee
        ;   Label: LAB_0043a0ee
    FADD float ptr [ESP]                ; 0043a0f1
    PUSH EBX                            ; 0043a0f4
    FSTP float ptr [EBX + 0x34]         ; 0043a0f5
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 0043a0f8
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    ADD ESP,0x4                         ; 0043a0fd
    MOV ESI,dword ptr [EBX + 0x2590]    ; 0043a100
        ;   Label: LAB_0043a100
    MOV EAX,dword ptr [ESI + 0x14c]     ; 0043a106
    PUSH 0x0                            ; 0043a10c
    MOV dword ptr [ESP + 0x88],EAX      ; 0043a10e
    LEA EAX,[ESP + 0x28]                ; 0043a115
    PUSH EAX                            ; 0043a119
    LEA EDI,[EBX + 0x150]               ; 0043a11a
    PUSH EDI                            ; 0043a120
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 0043a121
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 0043a126
    PUSH EAX                            ; 0043a129
    PUSH EBX                            ; 0043a12a
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0043a12b
    PUSH ESI                            ; 0043a132
    CALL dword ptr [EAX + 0x108]        ; 0043a133
    ADD ESP,0xc                         ; 0043a139
    TEST EAX,EAX                        ; 0043a13c
    JZ 0x0043a38e                       ; 0043a13e
        ;   XREF to: 0043a38e (CONDITIONAL_JUMP)  ; LAB_0043a38e
    CMP dword ptr [EBX + 0x2590],0x0    ; 0043a144
    JNZ 0x0043a399                      ; 0043a14b
        ;   XREF to: 0043a399 (CONDITIONAL_JUMP)  ; LAB_0043a399
    PUSH 0x1                            ; 0043a151
        ;   Label: LAB_0043a151
    PUSH 0x0                            ; 0043a153
    LEA EAX,[EBX + 0x150]               ; 0043a155
    PUSH EAX                            ; 0043a15b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0043a15c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
        ;   Label: LAB_0043a15c
    ADD ESP,0xc                         ; 0043a161
    PUSH EBX                            ; 0043a164
        ;   Label: LAB_0043a164
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 0043a165
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_preProcess_FUN_004259a0()
    ADD ESP,0x4                         ; 0043a16a
    LEA EAX,[EBX + 0x150]               ; 0043a16d
    PUSH EAX                            ; 0043a173
    MOV dword ptr [ESP + 0x84],EAX      ; 0043a174
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 0043a17b
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0()
    ADD ESP,0x4                         ; 0043a180
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0043a183
    PUSH EBX                            ; 0043a189
    CALL dword ptr [EAX + 0x104]        ; 0043a18a
    ADD ESP,0x4                         ; 0043a190
    TEST EAX,EAX                        ; 0043a193
    JNZ 0x0043a1dd                      ; 0043a195
        ;   XREF to: 0043a1dd (CONDITIONAL_JUMP)  ; LAB_0043a1dd
    PUSH 0x51b650                       ; 0043a197
    MOV EDI,dword ptr [0x0077ac8c]      ; 0043a19c | DAT_0077ac8c
    PUSH EDI                            ; 0043a1a2
    LEA EAX,[EBX + 0x1fa44]             ; 0043a1a3
    PUSH dword ptr [EBX + 0x1fa50]      ; 0043a1a9
    PUSH EAX                            ; 0043a1af
    LEA ESI,[ESP + 0x14]                ; 0043a1b0
    CALL core_xform.cpp_FUN_0055d610    ; 0043a1b4
        ;   XREF to: 0055d610 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d610()
    ADD ESP,0x4                         ; 0043a1b9
    LEA EAX,[ESP + 0x20]                ; 0043a1bc
    LEA EDI,[ESP + 0x20]                ; 0043a1c0
    PUSH EAX                            ; 0043a1c4
    MOV EAX,dword ptr [ESP + 0x90]      ; 0043a1c5
    LEA ESI,[ESP + 0x14]                ; 0043a1cc
    PUSH EAX                            ; 0043a1d0
    MOVSD ES:EDI,ESI                    ; 0043a1d1
    MOVSD ES:EDI,ESI                    ; 0043a1d2
    MOVSD ES:EDI,ESI                    ; 0043a1d3
    MOVSD ES:EDI,ESI                    ; 0043a1d4
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0 ; 0043a1d5
        ;   XREF to: 0051cfd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0()
    ADD ESP,0x14                        ; 0043a1da
    PUSH dword ptr [EBP + 0x18]         ; 0043a1dd
        ;   Label: LAB_0043a1dd
    PUSH EBX                            ; 0043a1e0
    CALL core_charactr.cpp_FUN_0042a150 ; 0043a1e1
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a150()
    ADD ESP,0x8                         ; 0043a1e6
    MOV ESP,EBP                         ; 0043a1e9
        ;   Label: caseD_6
    POP EBP                             ; 0043a1eb
    POP EDI                             ; 0043a1ec
    POP ESI                             ; 0043a1ed
    POP EBX                             ; 0043a1ee
    RET                                 ; 0043a1ef
    PUSH 0x1                            ; 0043a1f0
        ;   Label: LAB_0043a1f0
    PUSH 0x0                            ; 0043a1f2
    PUSH ESI                            ; 0043a1f4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0043a1f5
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0043a1fa
    PUSH EBX                            ; 0043a1fd
    PUSH 0x57b10b                       ; 0043a1fe | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x005ad350]      ; 0043a203 | PTR_DAT_005ad350
    PUSH ESI                            ; 0043a209 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0043a20a
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x0043a028                      ; 0043a20f
        ;   XREF to: 0043a028 (UNCONDITIONAL_JUMP)  ; LAB_0043a028
    PUSH 0x1                            ; 0043a214
        ;   Label: LAB_0043a214
    PUSH 0x2                            ; 0043a216
    JMP 0x0043a022                      ; 0043a218
        ;   XREF to: 0043a022 (UNCONDITIONAL_JUMP)  ; LAB_0043a022
    JBE 0x0043a214                      ; 0043a21d
        ;   XREF to: 0043a214 (CONDITIONAL_JUMP)  ; LAB_0043a214
        ;   Label: LAB_0043a21d
    CMP EAX,0x3                         ; 0043a21f
    JZ 0x0043a1f0                       ; 0043a222
        ;   XREF to: 0043a1f0 (CONDITIONAL_JUMP)  ; LAB_0043a1f0
    PUSH 0x1                            ; 0043a224
        ;   Label: LAB_0043a224
    PUSH 0x0                            ; 0043a226
    LEA EAX,[EBX + 0x150]               ; 0043a228
    PUSH EAX                            ; 0043a22e
    JMP 0x0043a023                      ; 0043a22f
        ;   XREF to: 0043a023 (UNCONDITIONAL_JUMP)  ; LAB_0043a023
    CMP dword ptr [EBX + 0x2408],0x0    ; 0043a234
        ;   Label: caseD_0
    JZ 0x0043a02b                       ; 0043a23b
        ;   XREF to: 0043a02b (CONDITIONAL_JUMP)  ; caseD_5
    MOV EDI,dword ptr [EBX + 0xbc94]    ; 0043a241
    XOR ESI,ESI                         ; 0043a247
    TEST EDI,EDI                        ; 0043a249
    JZ 0x0043a25f                       ; 0043a24b
        ;   XREF to: 0043a25f (CONDITIONAL_JUMP)  ; LAB_0043a25f
    CMP dword ptr [EBX + 0xbc9c],0x0    ; 0043a24d
    JZ 0x0043a2f3                       ; 0043a254
        ;   XREF to: 0043a2f3 (CONDITIONAL_JUMP)  ; LAB_0043a2f3
    MOV ESI,0x2                         ; 0043a25a
    CMP dword ptr [EBX + 0xbc98],0x0    ; 0043a25f
        ;   Label: LAB_0043a25f
    JZ 0x0043a26d                       ; 0043a266
        ;   XREF to: 0043a26d (CONDITIONAL_JUMP)  ; LAB_0043a26d
    MOV ESI,0x3                         ; 0043a268
    CMP dword ptr [EBX + 0xbcac],0x0    ; 0043a26d
        ;   Label: LAB_0043a26d
    JZ 0x0043a298                       ; 0043a274
        ;   XREF to: 0043a298 (CONDITIONAL_JUMP)  ; LAB_0043a298
    MOV ESI,dword ptr [EBX + 0x1fa3c]   ; 0043a276
    MOV dword ptr [EBX + 0xbcac],0x0    ; 0043a27c
    TEST ESI,ESI                        ; 0043a286
    SETZ AL                             ; 0043a288
    AND EAX,0xff                        ; 0043a28b
    XOR ESI,ESI                         ; 0043a290
    MOV dword ptr [EBX + 0x1fa3c],EAX   ; 0043a292
    CMP dword ptr [EBX + 0xbca0],0x0    ; 0043a298
        ;   Label: LAB_0043a298
    JZ 0x0043a2be                       ; 0043a29f
        ;   XREF to: 0043a2be (CONDITIONAL_JUMP)  ; LAB_0043a2be
    MOV EAX,dword ptr [EBX + 0x1fa3c]   ; 0043a2a1
    MOV EDI,0x1                         ; 0043a2a7
    TEST EAX,EAX                        ; 0043a2ac
    JZ 0x0043a2fd                       ; 0043a2ae
        ;   XREF to: 0043a2fd (CONDITIONAL_JUMP)  ; LAB_0043a2fd
    TEST EDI,EDI                        ; 0043a2b0
        ;   Label: LAB_0043a2b0
    JZ 0x0043a2be                       ; 0043a2b2
        ;   XREF to: 0043a2be (CONDITIONAL_JUMP)  ; LAB_0043a2be
    MOV dword ptr [EBX + 0xbca0],0x0    ; 0043a2b4
        ;   Label: LAB_0043a2b4
    FLD float ptr [EBX + 0xbcb8]        ; 0043a2be
        ;   Label: LAB_0043a2be
    LEA EDI,[EBX + 0x150]               ; 0043a2c4
    FMUL float ptr [EBX + 0x2430]       ; 0043a2ca
    PUSH EDI                            ; 0043a2d0
    FSTP float ptr [EBX + 0x2410]       ; 0043a2d1
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0043a2d7
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0043a2dc
    ADD ESP,0x4                         ; 0043a2df
    CMP ESI,EAX                         ; 0043a2e2
    JZ 0x0043a02b                       ; 0043a2e4
        ;   XREF to: 0043a02b (CONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 0043a2ea
    PUSH ESI                            ; 0043a2ec
    PUSH EDI                            ; 0043a2ed
    JMP 0x0043a023                      ; 0043a2ee
        ;   XREF to: 0043a023 (UNCONDITIONAL_JUMP)  ; LAB_0043a023
    MOV ESI,0x1                         ; 0043a2f3
        ;   Label: LAB_0043a2f3
    JMP 0x0043a25f                      ; 0043a2f8
        ;   XREF to: 0043a25f (UNCONDITIONAL_JUMP)  ; LAB_0043a25f
    CMP dword ptr [EBX + 0xbc90],0x2    ; 0043a2fd
        ;   Label: LAB_0043a2fd
    JZ 0x0043a2b0                       ; 0043a304
        ;   XREF to: 0043a2b0 (CONDITIONAL_JUMP)  ; LAB_0043a2b0
    PUSH EBX                            ; 0043a306
    CALL core_hero.cpp_CHero_tryInteract_FUN_004b4e90 ; 0043a307
        ;   XREF to: 004b4e90 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_tryInteract_FUN_004b4e90()
    XOR EDI,EDI                         ; 0043a30c
    ADD ESP,0x4                         ; 0043a30e
    TEST EAX,EAX                        ; 0043a311
    JNZ 0x0043a2b0                      ; 0043a313
        ;   XREF to: 0043a2b0 (CONDITIONAL_JUMP)  ; LAB_0043a2b0
    PUSH EBX                            ; 0043a315
    CALL core_hero.cpp_FUN_004b5110     ; 0043a316
        ;   XREF to: 004b5110 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004b5110()
    ADD ESP,0x4                         ; 0043a31b
    MOV dword ptr [ESP + 0x74],EAX      ; 0043a31e
    TEST EAX,EAX                        ; 0043a322
    JBE 0x0043a32b                      ; 0043a324
        ;   XREF to: 0043a32b (CONDITIONAL_JUMP)  ; LAB_0043a32b
    CMP EAX,0x1                         ; 0043a326
    JNZ 0x0043a359                      ; 0043a329
        ;   XREF to: 0043a359 (CONDITIONAL_JUMP)  ; LAB_0043a359
    CMP dword ptr [ESP + 0x74],0x0      ; 0043a32b
        ;   Label: LAB_0043a32b
    JNZ 0x0043a2b0                      ; 0043a330
        ;   XREF to: 0043a2b0 (CONDITIONAL_JUMP)  ; LAB_0043a2b0
    PUSH EBX                            ; 0043a336
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0 ; 0043a337
        ;   XREF to: 004b4fe0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0()
    ADD ESP,0x4                         ; 0043a33c
    TEST EAX,EAX                        ; 0043a33f
    JNZ 0x0043a2b0                      ; 0043a341
        ;   XREF to: 0043a2b0 (CONDITIONAL_JUMP)  ; LAB_0043a2b0
    PUSH EBX                            ; 0043a347
    CALL core_hero.cpp_FUN_004b52f0     ; 0043a348
        ;   XREF to: 004b52f0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004b52f0()
    ADD ESP,0x4                         ; 0043a34d
    TEST EAX,EAX                        ; 0043a350
    JNZ 0x0043a364                      ; 0043a352
        ;   XREF to: 0043a364 (CONDITIONAL_JUMP)  ; LAB_0043a364
    JMP 0x0043a2b4                      ; 0043a354
        ;   XREF to: 0043a2b4 (UNCONDITIONAL_JUMP)  ; LAB_0043a2b4
    PUSH EBX                            ; 0043a359
        ;   Label: LAB_0043a359
    CALL core_hero.cpp_FUN_004b5270     ; 0043a35a
        ;   XREF to: 004b5270 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004b5270()
    ADD ESP,0x4                         ; 0043a35f
    JMP 0x0043a32b                      ; 0043a362
        ;   XREF to: 0043a32b (UNCONDITIONAL_JUMP)  ; LAB_0043a32b
    PUSH EBX                            ; 0043a364
        ;   Label: LAB_0043a364
    CALL core_hero.cpp_CHero_executeLeverPull_FUN_004b5490 ; 0043a365
        ;   XREF to: 004b5490 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_executeLeverPull_FUN_004b5490()
    ADD ESP,0x4                         ; 0043a36a
    JMP 0x0043a2b0                      ; 0043a36d
        ;   XREF to: 0043a2b0 (UNCONDITIONAL_JUMP)  ; LAB_0043a2b0
    PUSH ESI                            ; 0043a372
        ;   Label: LAB_0043a372
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0043a373
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0043a378
    ADD ESP,0x4                         ; 0043a37b
    CMP EAX,0x6                         ; 0043a37e
    JA 0x0043a02b                       ; 0043a381
        ;   XREF to: 0043a02b (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EAX*0x4 + 0x439f34]  ; 0043a387 | caseD_3 | caseD_5 | caseD_6
        ;   Label: switchD
    MOV dword ptr [EBX + 0x2590],EAX    ; 0043a38e
        ;   Label: LAB_0043a38e
    JMP 0x0043a151                      ; 0043a394
        ;   XREF to: 0043a151 (UNCONDITIONAL_JUMP)  ; LAB_0043a151
    CMP dword ptr [EBX + 0xbca0],0x0    ; 0043a399
        ;   Label: LAB_0043a399
    JZ 0x0043a164                       ; 0043a3a0
        ;   XREF to: 0043a164 (CONDITIONAL_JUMP)  ; LAB_0043a164
    PUSH 0x1                            ; 0043a3a6
    PUSH 0x9                            ; 0043a3a8
    PUSH EDI                            ; 0043a3aa
    JMP 0x0043a15c                      ; 0043a3ab
        ;   XREF to: 0043a15c (UNCONDITIONAL_JUMP)  ; LAB_0043a15c
    FLD float ptr [EBP + 0x18]          ; 0043a3b0
        ;   Label: LAB_0043a3b0
    FLD ST0                             ; 0043a3b3
    FMUL double ptr [0x0057b144]        ; 0043a3b5 | DOUBLE_0057b144
    FLD float ptr [EBX + 0x2424]        ; 0043a3bb
    FXCH                                ; 0043a3c1
    FSUBR ST0,ST1                       ; 0043a3c3
    LEA EAX,[EBX + 0x2420]              ; 0043a3c5
    FSTP ST1                            ; 0043a3cb
    FSTP float ptr [EBX + 0x2424]       ; 0043a3cd
    FLD float ptr [EAX]                 ; 0043a3d3
    FMUL ST1                            ; 0043a3d5
    FSTP float ptr [ESP + 0x60]         ; 0043a3d7
    FLD float ptr [EAX + 0x4]           ; 0043a3db
    FMUL ST1                            ; 0043a3de
    FSTP float ptr [ESP + 0x64]         ; 0043a3e0
    FMUL float ptr [EAX + 0x8]          ; 0043a3e4
    LEA EAX,[EBX + 0x23a4]              ; 0043a3e7
    FSTP float ptr [ESP + 0x68]         ; 0043a3ed
    LEA EDX,[EBX + 0x2414]              ; 0043a3f1
    FLD float ptr [EAX]                 ; 0043a3f7
    FADD float ptr [EDX]                ; 0043a3f9
    FST float ptr [ESP + 0x48]          ; 0043a3fb
    FLD float ptr [EAX + 0x4]           ; 0043a3ff
    FADD float ptr [EDX + 0x4]          ; 0043a402
    FXCH                                ; 0043a405
    FADD float ptr [ESP + 0x60]         ; 0043a407
    FXCH                                ; 0043a40b
    FST float ptr [ESP + 0x4c]          ; 0043a40d
    FLD float ptr [EAX + 0x8]           ; 0043a411
    FADD float ptr [EDX + 0x8]          ; 0043a414
    FXCH                                ; 0043a417
    FADD float ptr [ESP + 0x64]         ; 0043a419
    FXCH                                ; 0043a41d
    FSTP float ptr [ESP + 0x50]         ; 0043a41f
    FXCH                                ; 0043a423
    FSTP float ptr [ESP + 0x30]         ; 0043a425
    FLD float ptr [ESP + 0x50]          ; 0043a429
    FADD float ptr [ESP + 0x68]         ; 0043a42d
    FXCH                                ; 0043a431
    FSTP float ptr [ESP + 0x34]         ; 0043a433
    FSTP float ptr [ESP + 0x38]         ; 0043a437
    MOV dword ptr [EAX + 0x8],EDI       ; 0043a43b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043a43e
    MOV dword ptr [EAX + 0x4],ECX       ; 0043a441
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043a444
    MOV dword ptr [EAX],ECX             ; 0043a447
    MOV dword ptr [EDX + 0x8],EDI       ; 0043a449
    LEA EAX,[ESP + 0x30]                ; 0043a44c
    FLD float ptr [EDX + 0x8]           ; 0043a450
    PUSH EAX                            ; 0043a453
    FST float ptr [EDX + 0x4]           ; 0043a454
    PUSH EBX                            ; 0043a457
    FSTP float ptr [EDX]                ; 0043a458
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 0043a45a
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050()
    ADD ESP,0x8                         ; 0043a45f
    JMP 0x0043a164                      ; 0043a462
        ;   XREF to: 0043a164 (UNCONDITIONAL_JUMP)  ; LAB_0043a164

