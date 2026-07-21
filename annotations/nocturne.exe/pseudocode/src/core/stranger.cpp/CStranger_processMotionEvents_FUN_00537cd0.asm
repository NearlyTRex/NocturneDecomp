; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_processMotionEvents_FUN_00537cd0(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00535900 at 00535aeb
;
; Referenced Globals:
;   undefined4 s_actionPending_=_%d_stranger.cpp_l_005956b2+1
;   string s_actionPending_=_%d_stranger.cpp_l_005956db
;   string s_Object_to_pick_up_is_now_NULL_st_00595703
;   string s_actionPending_=_%d_stranger.cpp_l_00595736
;   string s_actionPending_=_%d_stranger.cpp_l_0059575e
;   string s_kick1.wav_00595786
;   string s_hit-gh[4,7].wav_00595790
;   string s_fall-1.wav_005957a0
;   string s_actionPending_=_%d_stranger.cpp_l_005957ab
;   string s_doorToOpen_==_NULL_stranger.cpp_l_005957d3
;   undefined4 DAT_005957ff
;   undefined4 DAT_00595807
;   undefined4 DAT_005a2710
;   undefined4 DAT_005a2718
;   undefined4 DAT_005b6d50
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
;   core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004b5c70
;   core_hero.cpp_CHero_executeLeverPull_FUN_004b5490
;   core_hero.cpp_CHero_executeObjectPickup_FUN_004b5c30
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;   core_stranger.cpp_CStranger_dropRightHandObject_FUN_0053bf30
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537cd0
        ;   Label: core_stranger.cpp_CStranger_processMotionEvents_FUN_00537cd0
    PUSH ESI                            ; 00537cd1
    PUSH EDI                            ; 00537cd2
    PUSH EBP                            ; 00537cd3
    MOV EBP,ESP                         ; 00537cd4
    SUB ESP,0xa8                        ; 00537cd6
    AND ESP,0xfffffff8                  ; 00537cdc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00537cdf
    LEA ESI,[EBX + 0x150]               ; 00537ce2
    LEA EAX,[EBX + 0x1fa2c]             ; 00537ce8
    MOV dword ptr [ESP + 0x9c],EAX      ; 00537cee
    LEA EAX,[EBX + 0x1fa20]             ; 00537cf5
    MOV dword ptr [ESP + 0x98],EAX      ; 00537cfb
    LEA EAX,[EBP + 0x18]                ; 00537d02
        ;   Label: LAB_00537d02
    PUSH EAX                            ; 00537d05
    PUSH ESI                            ; 00537d06
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 00537d07
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advance_FUN_004e11c0()
    ADD ESP,0x8                         ; 00537d0c
    MOV EDI,EAX                         ; 00537d0f
    CMP EAX,0x12                        ; 00537d11
    JNC 0x005382d8                      ; 00537d14
        ;   XREF to: 005382d8 (CONDITIONAL_JUMP)  ; LAB_005382d8
    CMP EAX,0x6                         ; 00537d1a
    JNC 0x0053837a                      ; 00537d1d
        ;   XREF to: 0053837a (CONDITIONAL_JUMP)  ; LAB_0053837a
    CMP EAX,0x2                         ; 00537d23
    JNC 0x005383bb                      ; 00537d26
        ;   XREF to: 005383bb (CONDITIONAL_JUMP)  ; LAB_005383bb
    CMP EAX,0x1                         ; 00537d2c
    JNZ 0x005383ca                      ; 00537d2f
        ;   XREF to: 005383ca (CONDITIONAL_JUMP)  ; LAB_005383ca
    CMP EDI,0x7                         ; 00537d35
        ;   Label: LAB_00537d35
    JNZ 0x00537fb1                      ; 00537d38
        ;   XREF to: 00537fb1 (CONDITIONAL_JUMP)  ; LAB_00537fb1
    MOV EAX,[0x02dc9f70]                ; 00537d3e | DAT_02dc9f70
    PUSH EAX                            ; 00537d43
        ;   Label: LAB_00537d43
    LEA EAX,[ESP + 0x60]                ; 00537d44
    PUSH EAX                            ; 00537d48
    PUSH ESI                            ; 00537d49
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 00537d4a
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    MOV ECX,dword ptr [EBX + 0x1fa14]   ; 00537d4f
    ADD ESP,0xc                         ; 00537d55
    TEST ECX,ECX                        ; 00537d58
    JZ 0x00537fbb                       ; 00537d5a
        ;   XREF to: 00537fbb (CONDITIONAL_JUMP)  ; LAB_00537fbb
    PUSH 0x3f800000                     ; 00537d60
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00537d65
    MOV EDI,dword ptr [ECX + 0x14c]     ; 00537d6b
    PUSH ECX                            ; 00537d71
    MOV dword ptr [ESP + 0xac],EAX      ; 00537d72
    CALL dword ptr [EDI + 0x3c]         ; 00537d79
    ADD ESP,0x4                         ; 00537d7c
    PUSH EAX                            ; 00537d7f
    LEA EAX,[ESP + 0x64]                ; 00537d80
    PUSH EAX                            ; 00537d84
    LEA EAX,[ESP + 0x5c]                ; 00537d85
    PUSH EAX                            ; 00537d89
    PUSH EBX                            ; 00537d8a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00537d8b
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00537d90
    PUSH EAX                            ; 00537d93
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00537d94
    PUSH EBX                            ; 00537d9b
    CALL dword ptr [EAX + 0x20]         ; 00537d9c
    ADD ESP,0x10                        ; 00537d9f
        ;   Label: LAB_00537d9f
    FLD float ptr [EBP + 0x18]          ; 00537da2
        ;   Label: LAB_00537da2
    FLDZ                                ; 00537da5
    FCOMPP                              ; 00537da7
    FNSTSW AX                           ; 00537da9
    SAHF                                ; 00537dab
    JC 0x00537d02                       ; 00537dac
        ;   XREF to: 00537d02 (CONDITIONAL_JUMP)  ; LAB_00537d02
    MOV ESP,EBP                         ; 00537db2
    POP EBP                             ; 00537db4
    POP EDI                             ; 00537db5
    POP ESI                             ; 00537db6
    POP EBX                             ; 00537db7
    RET                                 ; 00537db8
    PUSH EBX                            ; 00537db9
        ;   Label: LAB_00537db9
    MOV EDI,dword ptr [EBX + 0x24f0]    ; 00537dba
    CALL core_stranger.cpp_CStranger_dropRightHandObject_FUN_0053bf30 ; 00537dc0
        ;   XREF to: 0053bf30 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_CStranger_dropRightHandObject_FUN_0053bf30()
    MOV EAX,dword ptr [EBX + 0x1faa0]   ; 00537dc5
    ADD ESP,0x4                         ; 00537dcb
    CMP EAX,0x2                         ; 00537dce
    JNZ 0x00537e42                      ; 00537dd1
        ;   XREF to: 00537e42 (CONDITIONAL_JUMP)  ; LAB_00537e42
    TEST EDI,EDI                        ; 00537dd3
    JZ 0x00537df4                       ; 00537dd5
        ;   XREF to: 00537df4 (CONDITIONAL_JUMP)  ; LAB_00537df4
    MOV EDX,dword ptr [ESP + 0x9c]      ; 00537dd7
    PUSH EDX                            ; 00537dde
    MOV ECX,dword ptr [ESP + 0x9c]      ; 00537ddf
    PUSH ECX                            ; 00537de6
    MOV EAX,dword ptr [EDI + 0x14c]     ; 00537de7
    PUSH EDI                            ; 00537ded
    CALL dword ptr [EAX + 0x60]         ; 00537dee
    ADD ESP,0xc                         ; 00537df1
    MOV dword ptr [EBX + 0x1faa0],0x0   ; 00537df4
        ;   Label: LAB_00537df4
    MOV EAX,dword ptr [EBX + 0x2a84]    ; 00537dfe
        ;   Label: LAB_00537dfe
    MOV dword ptr [EBX + 0x1fa1c],0x0   ; 00537e04
    CMP EAX,0xe                         ; 00537e0e
    JNZ 0x00537e27                      ; 00537e11
        ;   XREF to: 00537e27 (CONDITIONAL_JUMP)  ; LAB_00537e27
    MOV dword ptr [EBX + 0x2a88],0x0    ; 00537e13
    MOV dword ptr [EBX + 0x2a84],0x0    ; 00537e1d
    CMP EDI,dword ptr [EBX + 0x1fa94]   ; 00537e27
        ;   Label: LAB_00537e27
    JNZ 0x00537da2                      ; 00537e2d
        ;   XREF to: 00537da2 (CONDITIONAL_JUMP)  ; LAB_00537da2
    MOV dword ptr [EBX + 0x1fa94],0x0   ; 00537e33
    JMP 0x00537da2                      ; 00537e3d
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    CMP EAX,0x6                         ; 00537e42
        ;   Label: LAB_00537e42
    JZ 0x00537df4                       ; 00537e45
        ;   XREF to: 00537df4 (CONDITIONAL_JUMP)  ; LAB_00537df4
    PUSH 0x75e                          ; 00537e47
    PUSH EAX                            ; 00537e4c
    MOV EAX,0x5956b3                    ; 00537e4d | s_actionPending_=_%d_stranger.cpp_l_005956b2+1
    PUSH EAX                            ; 00537e52 | s_actionPending_=_%d_stranger.cpp_l_005956b2+1
    MOV EAX,[0x005b6d50]                ; 00537e53 | DAT_005b6d50
    PUSH EAX                            ; 00537e58
    CALL FUN_0046fb40                   ; 00537e59
        ;   XREF to: 0046fb40 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fb40()
    ADD ESP,0x10                        ; 00537e5e
    JMP 0x00537dfe                      ; 00537e61
        ;   XREF to: 00537dfe (UNCONDITIONAL_JUMP)  ; LAB_00537dfe
    MOV ECX,dword ptr [EBX + 0x1faa0]   ; 00537e63
        ;   Label: LAB_00537e63
    CMP ECX,0x4                         ; 00537e69
    JNZ 0x00537ea1                      ; 00537e6c
        ;   XREF to: 00537ea1 (CONDITIONAL_JUMP)  ; LAB_00537ea1
    MOV dword ptr [EBX + 0x1faa0],0x0   ; 00537e6e
    MOV EDX,dword ptr [EBX + 0x1fa08]   ; 00537e78
        ;   Label: LAB_00537e78
    TEST EDX,EDX                        ; 00537e7e
    JZ 0x00537ebd                       ; 00537e80
        ;   XREF to: 00537ebd (CONDITIONAL_JUMP)  ; LAB_00537ebd
    PUSH EBX                            ; 00537e82
    MOV EDI,dword ptr [EDX + 0x14c]     ; 00537e83
    PUSH EDX                            ; 00537e89
    CALL dword ptr [EDI + 0x7c]         ; 00537e8a
    ADD ESP,0x8                         ; 00537e8d
    MOV EDI,EAX                         ; 00537e90
    TEST EAX,EAX                        ; 00537e92
    JNZ 0x00537edb                      ; 00537e94
        ;   XREF to: 00537edb (CONDITIONAL_JUMP)  ; LAB_00537edb
    MOV dword ptr [EBX + 0x1fa08],EAX   ; 00537e96
    JMP 0x00537da2                      ; 00537e9c
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    PUSH 0x77c                          ; 00537ea1
        ;   Label: LAB_00537ea1
    PUSH ECX                            ; 00537ea6
    MOV EAX,0x5956db                    ; 00537ea7 | = "actionPending = %d\nstranger.cpp line %d"
    PUSH EAX                            ; 00537eac | = "actionPending = %d\nstranger.cpp line %d"
    MOV EAX,[0x005b6d50]                ; 00537ead | DAT_005b6d50
    PUSH EAX                            ; 00537eb2
    CALL FUN_0046fb40                   ; 00537eb3
        ;   XREF to: 0046fb40 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fb40()
    ADD ESP,0x10                        ; 00537eb8
    JMP 0x00537e78                      ; 00537ebb
        ;   XREF to: 00537e78 (UNCONDITIONAL_JUMP)  ; LAB_00537e78
    PUSH 0x782                          ; 00537ebd
        ;   Label: LAB_00537ebd
    PUSH 0x595703                       ; 00537ec2 | = "Object to pick up is now NULL\nstrang..."
    MOV EDX,dword ptr [0x005b6d50]      ; 00537ec7 | DAT_005b6d50
    PUSH EDX                            ; 00537ecd
    CALL FUN_0046fb40                   ; 00537ece
        ;   XREF to: 0046fb40 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fb40()
    ADD ESP,0xc                         ; 00537ed3
    JMP 0x00537da2                      ; 00537ed6
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    MOV EAX,dword ptr [EBX + 0x1fa08]   ; 00537edb
        ;   Label: LAB_00537edb
    TEST EAX,EAX                        ; 00537ee1
    JNZ 0x00537f27                      ; 00537ee3
        ;   XREF to: 00537f27 (CONDITIONAL_JUMP)  ; LAB_00537f27
    CMP EDI,0x2                         ; 00537ee5
        ;   Label: LAB_00537ee5
    JNZ 0x00537f17                      ; 00537ee8
        ;   XREF to: 00537f17 (CONDITIONAL_JUMP)  ; LAB_00537f17
    MOV ECX,dword ptr [EBX + 0x1faa0]   ; 00537eea
    TEST ECX,ECX                        ; 00537ef0
    JZ 0x00537f0d                       ; 00537ef2
        ;   XREF to: 00537f0d (CONDITIONAL_JUMP)  ; LAB_00537f0d
    PUSH 0x7a0                          ; 00537ef4
    PUSH ECX                            ; 00537ef9
    PUSH 0x595736                       ; 00537efa | = "actionPending = %d\nstranger.cpp line %d"
    MOV EAX,[0x005b6d50]                ; 00537eff | DAT_005b6d50
    PUSH EAX                            ; 00537f04
    CALL FUN_0046fb40                   ; 00537f05
        ;   XREF to: 0046fb40 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fb40()
    ADD ESP,0x10                        ; 00537f0a
    MOV dword ptr [EBX + 0x1faa0],0x1   ; 00537f0d
        ;   Label: LAB_00537f0d
    PUSH 0x1                            ; 00537f17
        ;   Label: LAB_00537f17
    PUSH EBX                            ; 00537f19
    CALL core_hero.cpp_CHero_executeObjectPickup_FUN_004b5c30 ; 00537f1a
        ;   XREF to: 004b5c30 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_executeObjectPickup_FUN_004b5c30()
    ADD ESP,0x8                         ; 00537f1f
    JMP 0x00537da2                      ; 00537f22
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    PUSH EBX                            ; 00537f27
        ;   Label: LAB_00537f27
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00537f28
    PUSH EAX                            ; 00537f2e
    CALL dword ptr [EDX + 0x7c]         ; 00537f2f
    ADD ESP,0x8                         ; 00537f32
    CMP EAX,0x4                         ; 00537f35
    SETZ AL                             ; 00537f38
    AND EAX,0xff                        ; 00537f3b
    JZ 0x00537ee5                       ; 00537f40
        ;   XREF to: 00537ee5 (CONDITIONAL_JUMP)  ; LAB_00537ee5
    MOV dword ptr [EBX + 0x2a88],0x0    ; 00537f42
    MOV dword ptr [EBX + 0x2a84],0xe    ; 00537f4c
    JMP 0x00537ee5                      ; 00537f56
        ;   XREF to: 00537ee5 (UNCONDITIONAL_JUMP)  ; LAB_00537ee5
    MOV ECX,dword ptr [EBX + 0x24f0]    ; 00537f58
        ;   Label: LAB_00537f58
    CMP ECX,dword ptr [EBX + 0x1fa94]   ; 00537f5e
    JNZ 0x00537f70                      ; 00537f64
        ;   XREF to: 00537f70 (CONDITIONAL_JUMP)  ; LAB_00537f70
    MOV dword ptr [EBX + 0x1fa94],0x0   ; 00537f66
    PUSH 0x1                            ; 00537f70
        ;   Label: LAB_00537f70
    PUSH EBX                            ; 00537f72
    CALL core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004b5c70 ; 00537f73
        ;   XREF to: 004b5c70 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004b5c70()
    MOV EDI,dword ptr [EBX + 0x1faa0]   ; 00537f78
    ADD ESP,0x8                         ; 00537f7e
    CMP EDI,0x1                         ; 00537f81
    JNZ 0x00537f95                      ; 00537f84
        ;   XREF to: 00537f95 (CONDITIONAL_JUMP)  ; LAB_00537f95
    MOV dword ptr [EBX + 0x1faa0],0x0   ; 00537f86
    JMP 0x00537da2                      ; 00537f90
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    PUSH 0x7c0                          ; 00537f95
        ;   Label: LAB_00537f95
    PUSH EDI                            ; 00537f9a
    PUSH 0x59575e                       ; 00537f9b | = "actionPending = %d\nstranger.cpp line %d"
    MOV EDX,dword ptr [0x005b6d50]      ; 00537fa0 | DAT_005b6d50
    PUSH EDX                            ; 00537fa6
    CALL FUN_0046fb40                   ; 00537fa7
        ;   XREF to: 0046fb40 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fb40()
    JMP 0x00537d9f                      ; 00537fac
        ;   XREF to: 00537d9f (UNCONDITIONAL_JUMP)  ; LAB_00537d9f
    MOV EAX,[0x02dc9f6c]                ; 00537fb1 | DAT_02dc9f6c
        ;   Label: LAB_00537fb1
    JMP 0x00537d43                      ; 00537fb6
        ;   XREF to: 00537d43 (UNCONDITIONAL_JUMP)  ; LAB_00537d43
    CMP dword ptr [EBX + 0x1fa90],0x0   ; 00537fbb
        ;   Label: LAB_00537fbb
    JNZ 0x00538039                      ; 00537fc2
        ;   XREF to: 00538039 (CONDITIONAL_JUMP)  ; LAB_00538039
    CMP dword ptr [EBX + 0x2408],0x0    ; 00537fc4
    JZ 0x00537da2                       ; 00537fcb
        ;   XREF to: 00537da2 (CONDITIONAL_JUMP)  ; LAB_00537da2
    PUSH 0x3                            ; 00537fd1
    PUSH ESI                            ; 00537fd3
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00537fd4
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [ESP + 0xac],EAX      ; 00537fd9
    FLD float ptr [ESP + 0xac]          ; 00537fe0
    ADD ESP,0x8                         ; 00537fe7
    FCOMP double ptr [0x00595807]       ; 00537fea | DAT_00595807
    FNSTSW AX                           ; 00537ff0
    SAHF                                ; 00537ff2
    JA 0x00538078                       ; 00537ff3
        ;   XREF to: 00538078 (CONDITIONAL_JUMP)  ; LAB_00538078
    PUSH 0x1                            ; 00537ff9
    PUSH ESI                            ; 00537ffb
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00537ffc
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [ESP + 0xac],EAX      ; 00538001
    FLD float ptr [ESP + 0xac]          ; 00538008
    ADD ESP,0x8                         ; 0053800f
    FCOMP double ptr [0x00595807]       ; 00538012 | DAT_00595807
    FNSTSW AX                           ; 00538018
    SAHF                                ; 0053801a
    JBE 0x00538094                      ; 0053801b
        ;   XREF to: 00538094 (CONDITIONAL_JUMP)  ; LAB_00538094
    LEA EAX,[ESP + 0x5c]                ; 0053801d
    PUSH 0x3f800000                     ; 00538021
    PUSH EAX                            ; 00538026
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00538027
    PUSH EBX                            ; 0053802d
    CALL dword ptr [EDX + 0x1c]         ; 0053802e
    ADD ESP,0xc                         ; 00538031
    JMP 0x00537da2                      ; 00538034
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    MOV EAX,dword ptr [EBX + 0x1fa90]   ; 00538039
        ;   Label: LAB_00538039
    PUSH 0x3f800000                     ; 0053803f
    PUSH EAX                            ; 00538044
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00538045
    MOV EDI,dword ptr [EBX + 0x14c]     ; 0053804b
    CALL dword ptr [EDX + 0x3c]         ; 00538051
    ADD ESP,0x4                         ; 00538054
    PUSH EAX                            ; 00538057
    LEA EAX,[ESP + 0x64]                ; 00538058
    PUSH EAX                            ; 0053805c
    LEA EAX,[ESP + 0x98]                ; 0053805d
    PUSH EAX                            ; 00538064
    PUSH EBX                            ; 00538065
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00538066
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 0053806b
    PUSH EAX                            ; 0053806e
    PUSH EBX                            ; 0053806f
    CALL dword ptr [EDI + 0x20]         ; 00538070
    JMP 0x00537d9f                      ; 00538073
        ;   XREF to: 00537d9f (UNCONDITIONAL_JUMP)  ; LAB_00537d9f
    LEA EAX,[ESP + 0x5c]                ; 00538078
        ;   Label: LAB_00538078
    PUSH 0x3fd9999a                     ; 0053807c
    PUSH EAX                            ; 00538081
    MOV EDI,dword ptr [EBX + 0x14c]     ; 00538082
    PUSH EBX                            ; 00538088
    CALL dword ptr [EDI + 0x1c]         ; 00538089
    ADD ESP,0xc                         ; 0053808c
    JMP 0x00537da2                      ; 0053808f
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    PUSH 0x2                            ; 00538094
        ;   Label: LAB_00538094
    PUSH ESI                            ; 00538096
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00538097
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [ESP + 0xac],EAX      ; 0053809c
    FLD float ptr [ESP + 0xac]          ; 005380a3
    ADD ESP,0x8                         ; 005380aa
    FCOMP double ptr [0x00595807]       ; 005380ad | DAT_00595807
    FNSTSW AX                           ; 005380b3
    SAHF                                ; 005380b5
    JBE 0x00537da2                      ; 005380b6
        ;   XREF to: 00537da2 (CONDITIONAL_JUMP)  ; LAB_00537da2
    LEA EAX,[ESP + 0x5c]                ; 005380bc
    PUSH 0x3f800000                     ; 005380c0
    PUSH EAX                            ; 005380c5
    MOV EDX,dword ptr [EBX + 0x14c]     ; 005380c6
    PUSH EBX                            ; 005380cc
    CALL dword ptr [EDX + 0x1c]         ; 005380cd
    ADD ESP,0xc                         ; 005380d0
    JMP 0x00537da2                      ; 005380d3
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    MOV EDI,dword ptr [0x01bcdef4]      ; 005380d8 | DAT_01bcdef4
        ;   Label: LAB_005380d8
    PUSH EDI                            ; 005380de
    MOV EAX,dword ptr [EBX + 0x2590]    ; 005380df
    PUSH EAX                            ; 005380e5
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 005380e6
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 005380eb
    MOV EDI,EAX                         ; 005380ee
    MOV dword ptr [ESP + 0xa0],EAX      ; 005380f0
    TEST EAX,EAX                        ; 005380f7
    JZ 0x00538212                       ; 005380f9
        ;   XREF to: 00538212 (CONDITIONAL_JUMP)  ; LAB_00538212
    MOV EDX,dword ptr [0x02dc9f80]      ; 005380ff | DAT_02dc9f80
    PUSH EDX                            ; 00538105
    LEA EAX,[ESP + 0x78]                ; 00538106
    PUSH EAX                            ; 0053810a
    PUSH ESI                            ; 0053810b
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0053810c
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 00538111
    PUSH EAX                            ; 00538114
    LEA EAX,[ESP + 0x84]                ; 00538115
    PUSH EAX                            ; 0053811c
    PUSH EBX                            ; 0053811d
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0053811e
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00538123
    LEA EAX,[ESP + 0x8]                 ; 00538126
    PUSH EAX                            ; 0053812a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0053812b
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 00538130
    PUSH 0x41700000                     ; 00538133
    PUSH 0x41200000                     ; 00538138
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0053813d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xac],EAX      ; 00538142
    FLD float ptr [ESP + 0xac]          ; 00538149
    ADD ESP,0x8                         ; 00538150
    LEA EAX,[ESP + 0x80]                ; 00538153
    PUSH EAX                            ; 0053815a
    LEA EAX,[ESP + 0x6c]                ; 0053815b
    PUSH EAX                            ; 0053815f
    PUSH EDI                            ; 00538160
    FSTP float ptr [ESP + 0x18]         ; 00538161
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00538165
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    LEA EDX,[ESP + 0x30]                ; 0053816a
    ADD ESP,0xc                         ; 0053816e
    MOV EDI,EAX                         ; 00538171
    CMP EDX,EAX                         ; 00538173
    JZ 0x0053818b                       ; 00538175
        ;   XREF to: 0053818b (CONDITIONAL_JUMP)  ; LAB_0053818b
    MOV EAX,dword ptr [EAX]             ; 00538177
    MOV dword ptr [ESP + 0x24],EAX      ; 00538179
    MOV EAX,dword ptr [EDI + 0x4]       ; 0053817d
    MOV dword ptr [ESP + 0x28],EAX      ; 00538180
    MOV EAX,dword ptr [EDI + 0x8]       ; 00538184
    MOV dword ptr [ESP + 0x2c],EAX      ; 00538187
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0053818b
        ;   Label: LAB_0053818b
    LEA EDX,[ESP + 0x8]                 ; 00538192
    MOV dword ptr [ESP + 0x3c],EBX      ; 00538196
    MOV dword ptr [ESP + 0x40],EBX      ; 0053819a
    PUSH EDX                            ; 0053819e
    MOV ECX,dword ptr [ESP + 0xa4]      ; 0053819f
    MOV EAX,dword ptr [EAX + 0x14c]     ; 005381a6
    PUSH ECX                            ; 005381ac
    CALL dword ptr [EAX + 0x100]        ; 005381ad
    ADD ESP,0x8                         ; 005381b3
    FLDZ                                ; 005381b6
    FLD float ptr [ESP + 0xc]           ; 005381b8
    FSTP double ptr [ESP]               ; 005381bc
    FCOMP double ptr [ESP]              ; 005381bf
    FNSTSW AX                           ; 005381c2
    SAHF                                ; 005381c4
    JNC 0x00538212                      ; 005381c5
        ;   XREF to: 00538212 (CONDITIONAL_JUMP)  ; LAB_00538212
    FLD double ptr [ESP]                ; 005381c7
    FMUL double ptr [0x005957ff]        ; 005381ca | DAT_005957ff
    CALL crt_math.c_round_FUN_00563a30  ; 005381d0
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0xa4]        ; 005381d5
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005381dc
    PUSH 0x0                            ; 005381e3
    INC EAX                             ; 005381e5
    PUSH EAX                            ; 005381e6
    PUSH 0x0                            ; 005381e7
    LEA EAX,[ESP + 0x8c]                ; 005381e9
    PUSH EAX                            ; 005381f0
    MOV EDI,dword ptr [0x005b96c4]      ; 005381f1 | DAT_005b96c4
    PUSH EDI                            ; 005381f7
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200 ; 005381f8
        ;   XREF to: 004b0200 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200()
    ADD ESP,0x14                        ; 005381fd
    PUSH 0x595786                       ; 00538200 | = "kick1.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00538205
    PUSH EBX                            ; 0053820b
    CALL dword ptr [EAX + 0x24]         ; 0053820c
    ADD ESP,0x8                         ; 0053820f
    MOV dword ptr [EBX + 0x2590],0x0    ; 00538212
        ;   Label: LAB_00538212
    JMP 0x00537da2                      ; 0053821c
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    MOV ECX,dword ptr [EBX + 0x2590]    ; 00538221
        ;   Label: LAB_00538221
    TEST ECX,ECX                        ; 00538227
    JZ 0x00537da2                       ; 00538229
        ;   XREF to: 00537da2 (CONDITIONAL_JUMP)  ; LAB_00537da2
    LEA EAX,[ECX + 0x20]                ; 0053822f
    PUSH EAX                            ; 00538232
    LEA EAX,[ESP + 0x48]                ; 00538233
    PUSH EAX                            ; 00538237
    PUSH EBX                            ; 00538238
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00538239
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    FLDZ                                ; 0053823e
    ADD ESP,0xc                         ; 00538240
    FCOMP float ptr [EAX + 0x8]         ; 00538243
    FNSTSW AX                           ; 00538246
    SAHF                                ; 00538248
    JNC 0x00537da2                      ; 00538249
        ;   XREF to: 00537da2 (CONDITIONAL_JUMP)  ; LAB_00537da2
    PUSH 0x595790                       ; 0053824f | = "hit-gh[4,7].wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00538254
    PUSH EBX                            ; 0053825a
    CALL dword ptr [EAX + 0x24]         ; 0053825b
    ADD ESP,0x8                         ; 0053825e
    JMP 0x00537da2                      ; 00538261
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    PUSH 0x5957a0                       ; 00538266 | = "fall-1.wav"
        ;   Label: LAB_00538266
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0053826b
    PUSH EBX                            ; 00538271
    CALL dword ptr [EAX + 0x24]         ; 00538272
    ADD ESP,0x8                         ; 00538275
    JMP 0x00537da2                      ; 00538278
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    PUSH EBX                            ; 0053827d
        ;   Label: LAB_0053827d
    CALL core_stranger.cpp_CStranger_processPickupComplete_FUN_0053beb0 ; 0053827e
        ;   XREF to: 0053beb0 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_CStranger_processPickupComplete_FUN_0053beb0()
    ADD ESP,0x4                         ; 00538283
    JMP 0x00537da2                      ; 00538286
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    PUSH 0x813                          ; 0053828b
        ;   Label: LAB_0053828b
    PUSH EDX                            ; 00538290
    PUSH 0x5957ab                       ; 00538291 | = "actionPending = %d\nstranger.cpp line %d"
    MOV EDI,dword ptr [0x005b6d50]      ; 00538296 | DAT_005b6d50
    PUSH EDI                            ; 0053829c
    CALL FUN_0046fb40                   ; 0053829d
        ;   XREF to: 0046fb40 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fb40()
    ADD ESP,0x10                        ; 005382a2
    JMP 0x00538336                      ; 005382a5
        ;   XREF to: 00538336 (UNCONDITIONAL_JUMP)  ; LAB_00538336
    PUSH EBX                            ; 005382aa
        ;   Label: LAB_005382aa
    CALL core_hero.cpp_CHero_executeLeverPull_FUN_004b5490 ; 005382ab
        ;   XREF to: 004b5490 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_executeLeverPull_FUN_004b5490()
    ADD ESP,0x4                         ; 005382b0
    JMP 0x00537da2                      ; 005382b3
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    MOV EAX,[0x005a2710]                ; 005382b8 | DAT_005a2710
        ;   Label: LAB_005382b8
    MOV dword ptr [EBX + 0x2424],EAX    ; 005382bd
    JMP 0x00537da2                      ; 005382c3
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    MOV EAX,[0x005a2718]                ; 005382c8 | DAT_005a2718
        ;   Label: LAB_005382c8
    MOV dword ptr [EBX + 0x2424],EAX    ; 005382cd
    JMP 0x00537da2                      ; 005382d3
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    JBE 0x00537da2                      ; 005382d8
        ;   XREF to: 00537da2 (CONDITIONAL_JUMP)  ; LAB_00537da2
        ;   Label: LAB_005382d8
    CMP EAX,0x17                        ; 005382de
    JNC 0x005382f2                      ; 005382e1
        ;   XREF to: 005382f2 (CONDITIONAL_JUMP)  ; LAB_005382f2
    CMP EAX,0x15                        ; 005382e3
    JNC 0x00538317                      ; 005382e6
        ;   XREF to: 00538317 (CONDITIONAL_JUMP)  ; LAB_00538317
    CMP EAX,0x13                        ; 005382e8
    JZ 0x0053827d                       ; 005382eb
        ;   XREF to: 0053827d (CONDITIONAL_JUMP)  ; LAB_0053827d
    JMP 0x005383ca                      ; 005382ed
        ;   XREF to: 005383ca (UNCONDITIONAL_JUMP)  ; LAB_005383ca
    JBE 0x005382aa                      ; 005382f2
        ;   XREF to: 005382aa (CONDITIONAL_JUMP)  ; LAB_005382aa
        ;   Label: LAB_005382f2
    CMP EAX,0x29a                       ; 005382f4
    JNC 0x00538309                      ; 005382f9
        ;   XREF to: 00538309 (CONDITIONAL_JUMP)  ; LAB_00538309
    CMP EAX,0x18                        ; 005382fb
    JZ 0x00537da2                       ; 005382fe
        ;   XREF to: 00537da2 (CONDITIONAL_JUMP)  ; LAB_00537da2
    JMP 0x005383ca                      ; 00538304
        ;   XREF to: 005383ca (UNCONDITIONAL_JUMP)  ; LAB_005383ca
    JBE 0x005382b8                      ; 00538309
        ;   XREF to: 005382b8 (CONDITIONAL_JUMP)  ; LAB_005382b8
        ;   Label: LAB_00538309
    CMP EAX,0x29b                       ; 0053830b
    JZ 0x005382c8                       ; 00538310
        ;   XREF to: 005382c8 (CONDITIONAL_JUMP)  ; LAB_005382c8
    JMP 0x005383ca                      ; 00538312
        ;   XREF to: 005383ca (UNCONDITIONAL_JUMP)  ; LAB_005383ca
    JBE 0x00537f58                      ; 00538317
        ;   XREF to: 00537f58 (CONDITIONAL_JUMP)  ; LAB_00537f58
        ;   Label: LAB_00538317
    MOV EDX,dword ptr [EBX + 0x1faa0]   ; 0053831d
    CMP EDX,0x5                         ; 00538323
    JNZ 0x0053828b                      ; 00538326
        ;   XREF to: 0053828b (CONDITIONAL_JUMP)  ; LAB_0053828b
    MOV dword ptr [EBX + 0x1faa0],0x0   ; 0053832c
    CMP dword ptr [EBX + 0x1fa04],0x0   ; 00538336
        ;   Label: LAB_00538336
    JNZ 0x00538358                      ; 0053833d
        ;   XREF to: 00538358 (CONDITIONAL_JUMP)  ; LAB_00538358
    PUSH 0x819                          ; 0053833f
    PUSH 0x5957d3                       ; 00538344 | = "doorToOpen == NULL\nstranger.cpp line %d"
    MOV EDX,dword ptr [0x005b6d50]      ; 00538349 | DAT_005b6d50
    PUSH EDX                            ; 0053834f
    CALL FUN_0046fb40                   ; 00538350
        ;   XREF to: 0046fb40 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fb40()
    ADD ESP,0xc                         ; 00538355
    PUSH EBX                            ; 00538358
        ;   Label: LAB_00538358
    CALL FUN_004b5270                   ; 00538359
        ;   XREF to: 004b5270 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5270()
    ADD ESP,0x4                         ; 0053835e
    TEST EAX,EAX                        ; 00538361
    JNZ 0x00537da2                      ; 00538363
        ;   XREF to: 00537da2 (CONDITIONAL_JUMP)  ; LAB_00537da2
    PUSH 0x1                            ; 00538369
    PUSH EAX                            ; 0053836b
    PUSH ESI                            ; 0053836c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053836d
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00538372
    JMP 0x00537da2                      ; 00538375
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    JBE 0x005380d8                      ; 0053837a
        ;   XREF to: 005380d8 (CONDITIONAL_JUMP)  ; LAB_005380d8
        ;   Label: LAB_0053837a
    CMP EAX,0xf                         ; 00538380
    JNC 0x0053839d                      ; 00538383
        ;   XREF to: 0053839d (CONDITIONAL_JUMP)  ; LAB_0053839d
    CMP EAX,0x7                         ; 00538385
    JZ 0x00537d35                       ; 00538388
        ;   XREF to: 00537d35 (CONDITIONAL_JUMP)  ; LAB_00537d35
    PUSH EDI                            ; 0053838e
    PUSH EBX                            ; 0053838f
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 00538390
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processMotion_FUN_0042add0()
    ADD ESP,0x8                         ; 00538395
    JMP 0x00537da2                      ; 00538398
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    JBE 0x00538221                      ; 0053839d
        ;   XREF to: 00538221 (CONDITIONAL_JUMP)  ; LAB_00538221
        ;   Label: LAB_0053839d
    CMP EAX,0x11                        ; 005383a3
    JZ 0x00538266                       ; 005383a6
        ;   XREF to: 00538266 (CONDITIONAL_JUMP)  ; LAB_00538266
    PUSH EDI                            ; 005383ac
    PUSH EBX                            ; 005383ad
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 005383ae
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processMotion_FUN_0042add0()
    ADD ESP,0x8                         ; 005383b3
    JMP 0x00537da2                      ; 005383b6
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2
    JBE 0x00537e63                      ; 005383bb
        ;   XREF to: 00537e63 (CONDITIONAL_JUMP)  ; LAB_00537e63
        ;   Label: LAB_005383bb
    CMP EAX,0x3                         ; 005383c1
    JZ 0x00537db9                       ; 005383c4
        ;   XREF to: 00537db9 (CONDITIONAL_JUMP)  ; LAB_00537db9
    PUSH EDI                            ; 005383ca
        ;   Label: LAB_005383ca
    PUSH EBX                            ; 005383cb
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 005383cc
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processMotion_FUN_0042add0()
    ADD ESP,0x8                         ; 005383d1
    JMP 0x00537da2                      ; 005383d4
        ;   XREF to: 00537da2 (UNCONDITIONAL_JUMP)  ; LAB_00537da2

