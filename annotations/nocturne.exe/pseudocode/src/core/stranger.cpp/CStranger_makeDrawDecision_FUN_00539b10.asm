; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_00539b10(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x10c]:4  local_10c
; undefined8       Stack[-0x108]:8  local_108
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined        Stack[-0xf0]:1  local_f0
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xc0]:1  local_c0
; undefined        Stack[-0xb0]:1  local_b0
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_005384d0 at 005385b3
;
; Referenced Globals:
;   TerminatedCString s_core_stranger_cpp_005958e7
;   TerminatedCString s_CStranger_makeDrawDecisi_005958fc
;   double DOUBLE_00595937 = 0.25
;   double DOUBLE_0059593f = 4
;   double DOUBLE_00595947 = -0.75
;   double DOUBLE_0059594f = 0.000100000000000000
;   double DOUBLE_00595957 = 0.5
;   float FLOAT_0059595f = 0.3490658
;   float FLOAT_00595963 = 0.6000000
;   float FLOAT_005a2730 = -1.047198
;   float FLOAT_005a2734 = 1.221730
;   float FLOAT_005a2738 = 2.700000
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dc9f5c
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
;   core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
;   core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_xform.cpp_FUN_0055d4a0
;   core_xform.cpp_FUN_0055d4e0
;   core_xform.cpp_slerpQuaternion_FUN_0055d2d0
;   FUN_004c8440
;   FUN_0053a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00539b10
        ;   Label: core_stranger.cpp_CStranger_makeDrawDecision_FUN_00539b10
    PUSH ESI                            ; 00539b11
    PUSH EDI                            ; 00539b12
    PUSH EBP                            ; 00539b13
    MOV EBP,ESP                         ; 00539b14
    SUB ESP,0xf4                        ; 00539b16
    AND ESP,0xfffffff8                  ; 00539b1c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00539b1f
    MOV EDX,dword ptr [EBX + 0x2a84]    ; 00539b22
    TEST EDX,EDX                        ; 00539b28
    JL 0x00539b31                       ; 00539b2a
        ;   XREF to: 00539b31 (CONDITIONAL_JUMP)  ; LAB_00539b31
    CMP EDX,0x11                        ; 00539b2c
    JL 0x00539b54                       ; 00539b2f
        ;   XREF to: 00539b54 (CONDITIONAL_JUMP)  ; LAB_00539b54
    MOV ESI,0x5958e7                    ; 00539b31 | = "..\\core\\stranger.cpp"
        ;   Label: LAB_00539b31
    MOV EDI,0xa7c                       ; 00539b36
    PUSH 0x5958fc                       ; 00539b3b | = "CStranger::makeDrawDecision - draw mo..."
    MOV dword ptr [0x01cc4800],ESI      ; 00539b40 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00539b46 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00539b4c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00539b51
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 00539b54
        ;   Label: LAB_00539b54
    MOV EAX,dword ptr [EBX + 0x2a84]    ; 00539b5c
    SHL EAX,0x3                         ; 00539b62
    MOV ESI,EAX                         ; 00539b65
    SHL EAX,0x3                         ; 00539b67
    SUB EAX,ESI                         ; 00539b6a
    CMP dword ptr [EBX + EAX*0x1 + 0x2624],0x0 ; 00539b6c
    JNZ 0x00539b80                      ; 00539b74
        ;   XREF to: 00539b80 (CONDITIONAL_JUMP)  ; LAB_00539b80
    MOV EAX,dword ptr [EBX + 0x2a88]    ; 00539b76
    MOV dword ptr [ESP + 0x10],EAX      ; 00539b7c
    MOV EAX,dword ptr [EBX + 0x2a84]    ; 00539b80
        ;   Label: LAB_00539b80
    SHL EAX,0x3                         ; 00539b86
    MOV ESI,EAX                         ; 00539b89
    SHL EAX,0x3                         ; 00539b8b
    SUB EAX,ESI                         ; 00539b8e
    CMP dword ptr [EBX + EAX*0x1 + 0x2628],0x0 ; 00539b90
    JNZ 0x00539bac                      ; 00539b98
        ;   XREF to: 00539bac (CONDITIONAL_JUMP)  ; LAB_00539bac
    FLD float ptr [EBX + 0x2a88]        ; 00539b9a
    FLD1                                ; 00539ba0
    FSUBRP                              ; 00539ba2
    FMUL float ptr [ESP + 0x10]         ; 00539ba4
    FSTP float ptr [ESP + 0x10]         ; 00539ba8
    PUSH 0x28                           ; 00539bac
        ;   Label: LAB_00539bac
    LEA ESI,[EBX + 0x150]               ; 00539bae
    PUSH ESI                            ; 00539bb4
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00539bb5
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [ESP + 0xe0],EAX      ; 00539bba
    ADD ESP,0x8                         ; 00539bc1
    PUSH 0x29                           ; 00539bc4
    PUSH ESI                            ; 00539bc6
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00539bc7
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [ESP + 0xf8],EAX      ; 00539bcc
    FLD float ptr [ESP + 0xf8]          ; 00539bd3
    ADD ESP,0x8                         ; 00539bda
    PUSH 0x24                           ; 00539bdd
    FADD float ptr [ESP + 0xdc]         ; 00539bdf
    PUSH ESI                            ; 00539be6
    FSTP float ptr [ESP + 0xe0]         ; 00539be7
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00539bee
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [ESP + 0xf8],EAX      ; 00539bf3
    FLD float ptr [ESP + 0xf8]          ; 00539bfa
    ADD ESP,0x8                         ; 00539c01
    PUSH 0x22                           ; 00539c04
    FADD float ptr [ESP + 0xdc]         ; 00539c06
    PUSH ESI                            ; 00539c0d
    FSTP float ptr [ESP + 0xe0]         ; 00539c0e
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00539c15
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [ESP + 0xf8],EAX      ; 00539c1a
    FLD float ptr [ESP + 0xf8]          ; 00539c21
    ADD ESP,0x8                         ; 00539c28
    FADD float ptr [ESP + 0xd8]         ; 00539c2b
    FLD1                                ; 00539c32
    FSUBRP                              ; 00539c34
    FLD float ptr [ESP + 0x10]          ; 00539c36
    FXCH                                ; 00539c3a
    FMUL ST1                            ; 00539c3c
    FLDZ                                ; 00539c3e
    FXCH                                ; 00539c40
    FSTP ST2                            ; 00539c42
    FXCH                                ; 00539c44
    FSTP float ptr [ESP + 0x10]         ; 00539c46
    FCOMP float ptr [ESP + 0x10]        ; 00539c4a
    FNSTSW AX                           ; 00539c4e
    SAHF                                ; 00539c50
    JBE 0x00539c59                      ; 00539c51
        ;   XREF to: 00539c59 (CONDITIONAL_JUMP)  ; LAB_00539c59
    XOR ESI,ESI                         ; 00539c53
    MOV dword ptr [ESP + 0x10],ESI      ; 00539c55
    CMP dword ptr [EBX + 0x2a84],0xe    ; 00539c59
        ;   Label: LAB_00539c59
    JNZ 0x00539cea                      ; 00539c60
        ;   XREF to: 00539cea (CONDITIONAL_JUMP)  ; LAB_00539cea
    LEA ESI,[EBX + 0x150]               ; 00539c66
    PUSH ESI                            ; 00539c6c
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60 ; 00539c6d
        ;   XREF to: 004e1e60 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60()
    MOV dword ptr [ESP + 0xf4],EAX      ; 00539c72
    FLD float ptr [ESP + 0xf4]          ; 00539c79
    ADD ESP,0x4                         ; 00539c80
    MOV EAX,0x3f800000                  ; 00539c83
    PUSH ESI                            ; 00539c88
    FSTP float ptr [ESP + 0x18]         ; 00539c89
    MOV dword ptr [ESP + 0xf0],EAX      ; 00539c8d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00539c94
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00539c99
    ADD ESP,0x4                         ; 00539c9c
    CMP EAX,0x17                        ; 00539c9f
    JNZ 0x0053a133                      ; 00539ca2
        ;   XREF to: 0053a133 (CONDITIONAL_JUMP)  ; LAB_0053a133
    FLD float ptr [ESP + 0x14]          ; 00539ca8
        ;   Label: LAB_00539ca8
    FADD double ptr [0x00595947]        ; 00539cac | DOUBLE_00595947
    FMUL double ptr [0x0059593f]        ; 00539cb2 | DOUBLE_0059593f
        ;   Label: LAB_00539cb2
    FSTP float ptr [ESP + 0xec]         ; 00539cb8
    CMP dword ptr [ESP + 0xec],0x3f800000 ; 00539cbf
        ;   Label: LAB_00539cbf
    JLE 0x0053a15a                      ; 00539cca
        ;   XREF to: 0053a15a (CONDITIONAL_JUMP)  ; LAB_0053a15a
    MOV dword ptr [ESP + 0xec],0x3f800000 ; 00539cd0
    FLD float ptr [ESP + 0x10]          ; 00539cdb
        ;   Label: LAB_00539cdb
    FMUL float ptr [ESP + 0xec]         ; 00539cdf
    FSTP float ptr [ESP + 0x10]         ; 00539ce6
    FLD float ptr [ESP + 0x10]          ; 00539cea
        ;   Label: LAB_00539cea
    FST double ptr [ESP]                ; 00539cee
    FCOMP double ptr [0x0059594f]       ; 00539cf1 | DOUBLE_0059594f
    FNSTSW AX                           ; 00539cf7
    SAHF                                ; 00539cf9
    JBE 0x0053a12c                      ; 00539cfa
        ;   XREF to: 0053a12c (CONDITIONAL_JUMP)  ; LAB_0053a12c
    FLD1                                ; 00539d00
    FCOMP double ptr [ESP]              ; 00539d02
    FNSTSW AX                           ; 00539d05
    SAHF                                ; 00539d07
    JNC 0x00539d12                      ; 00539d08
        ;   XREF to: 00539d12 (CONDITIONAL_JUMP)  ; LAB_00539d12
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 00539d0a
    MOV EAX,dword ptr [EBX + 0x2a84]    ; 00539d12
        ;   Label: LAB_00539d12
    SHL EAX,0x3                         ; 00539d18
    MOV ESI,EAX                         ; 00539d1b
    SHL EAX,0x3                         ; 00539d1d
    SUB EAX,ESI                         ; 00539d20
    MOV ESI,EAX                         ; 00539d22
    LEA EAX,[EBX + 0x2624]              ; 00539d24
    ADD EAX,ESI                         ; 00539d2a
    PUSH 0x1                            ; 00539d2c
    ADD EAX,0x8                         ; 00539d2e
    PUSH EAX                            ; 00539d31
    LEA ESI,[EBX + 0x150]               ; 00539d32
    PUSH ESI                            ; 00539d38
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 00539d39
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 00539d3e
    PUSH EAX                            ; 00539d41
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 00539d42
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010()
    ADD ESP,0xc                         ; 00539d47
    PUSH dword ptr [EBX + 0x2a88]       ; 00539d4a
    PUSH EAX                            ; 00539d50
    PUSH ESI                            ; 00539d51
    MOV dword ptr [ESP + 0xf4],EAX      ; 00539d52
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50 ; 00539d59
        ;   XREF to: 004e1f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50()
    MOV dword ptr [ESP + 0xfc],EAX      ; 00539d5e
    FLD float ptr [ESP + 0xfc]          ; 00539d65
    ADD ESP,0xc                         ; 00539d6c
    MOV EAX,dword ptr [EBX + 0x2a84]    ; 00539d6f
    FSTP float ptr [ESP + 0xe4]         ; 00539d75
    CMP EAX,0x9                         ; 00539d7c
    JNZ 0x00539e03                      ; 00539d7f
        ;   XREF to: 00539e03 (CONDITIONAL_JUMP)  ; LAB_00539e03
    FLD float ptr [EBX + 0x2a88]        ; 00539d85
    FLD1                                ; 00539d8b
    FCOMPP                              ; 00539d8d
    FNSTSW AX                           ; 00539d8f
    SAHF                                ; 00539d91
    JA 0x00539e03                       ; 00539d92
        ;   XREF to: 00539e03 (CONDITIONAL_JUMP)  ; LAB_00539e03
    CMP dword ptr [EBX + 0x1fa9c],0x0   ; 00539d94
    JZ 0x00539e03                       ; 00539d9b
        ;   XREF to: 00539e03 (CONDITIONAL_JUMP)  ; LAB_00539e03
    PUSH 0x1                            ; 00539d9d
    LEA EAX,[EBX + 0x285c]              ; 00539d9f
    PUSH EAX                            ; 00539da5
    PUSH ESI                            ; 00539da6
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 00539da7
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 00539dac
    PUSH EAX                            ; 00539daf
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 00539db0
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010()
    ADD ESP,0xc                         ; 00539db5
    PUSH 0x3f800000                     ; 00539db8
    MOV EDI,EAX                         ; 00539dbd
    PUSH 0x0                            ; 00539dbf
    MOV dword ptr [ESP + 0xf0],EAX      ; 00539dc1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00539dc8
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xf8],EAX      ; 00539dcd
    FLD float ptr [ESP + 0xf8]          ; 00539dd4
    ADD ESP,0x8                         ; 00539ddb
    SUB ESP,0x4                         ; 00539dde
    FSTP float ptr [ESP]                ; 00539de1
    PUSH EDI                            ; 00539de4
    PUSH ESI                            ; 00539de5
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50 ; 00539de6
        ;   XREF to: 004e1f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50()
    MOV dword ptr [ESP + 0xfc],EAX      ; 00539deb
    FLD float ptr [ESP + 0xfc]          ; 00539df2
    ADD ESP,0xc                         ; 00539df9
    FSTP float ptr [ESP + 0xe4]         ; 00539dfc
    PUSH 0x51b650                       ; 00539e03
        ;   Label: LAB_00539e03
    MOV ECX,dword ptr [0x02dc9f94]      ; 00539e08 | DAT_02dc9f94
    PUSH ECX                            ; 00539e0e
    PUSH dword ptr [ESP + 0x18]         ; 00539e0f
    MOV ESI,dword ptr [ESP + 0xf4]      ; 00539e13
    PUSH dword ptr [ESP + 0xf0]         ; 00539e1a
    PUSH ESI                            ; 00539e21
    LEA EAX,[EBX + 0x150]               ; 00539e22
    PUSH EAX                            ; 00539e28
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 ; 00539e29
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0()
    MOV EDI,dword ptr [EBX + 0x2a84]    ; 00539e2e
    ADD ESP,0x18                        ; 00539e34
    TEST EDI,EDI                        ; 00539e37
    JNZ 0x00539ed1                      ; 00539e39
        ;   XREF to: 00539ed1 (CONDITIONAL_JUMP)  ; LAB_00539ed1
    MOV EAX,[0x02dc9f68]                ; 00539e3f | DAT_02dc9f68
    LEA ESI,[EBX + 0x800]               ; 00539e44
    SHL EAX,0x4                         ; 00539e4a
    ADD EAX,ESI                         ; 00539e4d
    PUSH dword ptr [EBX + 0x2a88]       ; 00539e4f
    PUSH EAX                            ; 00539e55
    MOV EAX,[0x02dc9f88]                ; 00539e56 | DAT_02dc9f88
    SHL EAX,0x4                         ; 00539e5b
    ADD EAX,ESI                         ; 00539e5e
    PUSH EAX                            ; 00539e60
    MOV dword ptr [ESP + 0xe4],ESI      ; 00539e61
    LEA ESI,[ESP + 0x54]                ; 00539e68
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 00539e6c
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_0055d2d0()
    MOV EAX,[0x02dc9f88]                ; 00539e71 | DAT_02dc9f88
    SHL EAX,0x4                         ; 00539e76
    LEA ESI,[ESP + 0x54]                ; 00539e79
    LEA EDI,[EBX + EAX*0x1 + 0x800]     ; 00539e7d
    ADD ESP,0xc                         ; 00539e84
    MOVSD ES:EDI,ESI                    ; 00539e87
    MOVSD ES:EDI,ESI                    ; 00539e88
    MOVSD ES:EDI,ESI                    ; 00539e89
    MOVSD ES:EDI,ESI                    ; 00539e8a
    MOV EAX,[0x02dc9f64]                ; 00539e8b | DAT_02dc9f64
    MOV ESI,dword ptr [ESP + 0xd8]      ; 00539e90
    SHL EAX,0x4                         ; 00539e97
    ADD EAX,ESI                         ; 00539e9a
    PUSH dword ptr [EBX + 0x2a88]       ; 00539e9c
    PUSH EAX                            ; 00539ea2
    MOV EAX,[0x02dc9f84]                ; 00539ea3 | DAT_02dc9f84
    SHL EAX,0x4                         ; 00539ea8
    ADD EAX,ESI                         ; 00539eab
    PUSH EAX                            ; 00539ead
    LEA ESI,[ESP + 0x24]                ; 00539eae
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 00539eb2
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_0055d2d0()
    MOV EAX,[0x02dc9f84]                ; 00539eb7 | DAT_02dc9f84
    SHL EAX,0x4                         ; 00539ebc
    LEA ESI,[ESP + 0x24]                ; 00539ebf
    LEA EDI,[EBX + EAX*0x1 + 0x800]     ; 00539ec3
    ADD ESP,0xc                         ; 00539eca
    MOVSD ES:EDI,ESI                    ; 00539ecd
    MOVSD ES:EDI,ESI                    ; 00539ece
    MOVSD ES:EDI,ESI                    ; 00539ecf
    MOVSD ES:EDI,ESI                    ; 00539ed0
    CMP dword ptr [EBX + 0x2a84],0x1    ; 00539ed1
        ;   Label: LAB_00539ed1
    JNZ 0x0053a044                      ; 00539ed8
        ;   XREF to: 0053a044 (CONDITIONAL_JUMP)  ; LAB_0053a044
    FLD float ptr [EBX + 0x1fa58]       ; 00539ede
    FADD float ptr [EBX + 0x1fa78]      ; 00539ee4
    FMUL double ptr [0x00595957]        ; 00539eea | DOUBLE_00595957
    MOV ECX,0x3e860a92                  ; 00539ef0
    XOR EDX,EDX                         ; 00539ef5
    MOV ESI,0x3f19999a                  ; 00539ef7
    MOV dword ptr [ESP + 0x8],EDX       ; 00539efc
    MOV dword ptr [ESP + 0xe0],ECX      ; 00539f00
    MOV dword ptr [ESP + 0xdc],ESI      ; 00539f07
    FST float ptr [ESP + 0xc]           ; 00539f0e
    FLDZ                                ; 00539f12
    FCOMPP                              ; 00539f14
    FNSTSW AX                           ; 00539f16
    SAHF                                ; 00539f18
    JBE 0x00539f3b                      ; 00539f19
        ;   XREF to: 00539f3b (CONDITIONAL_JUMP)  ; LAB_00539f3b
    FLD float ptr [0x0059595f]          ; 00539f1b | FLOAT_0059595f
    FLD float ptr [ESP + 0xc]           ; 00539f21
    FADD ST0,ST1                        ; 00539f25
    FLD float ptr [0x005a2730]          ; 00539f27 | FLOAT_005a2730
    FADDP ST2,ST0                       ; 00539f2d
    FDIVRP                              ; 00539f2f
    FMUL float ptr [0x00595963]         ; 00539f31 | FLOAT_00595963
    FSTP float ptr [ESP + 0x8]          ; 00539f37
    FLD float ptr [ESP + 0xc]           ; 00539f3b
        ;   Label: LAB_00539f3b
    FLDZ                                ; 00539f3f
    FCOMPP                              ; 00539f41
    FNSTSW AX                           ; 00539f43
    SAHF                                ; 00539f45
    JNC 0x00539f6a                      ; 00539f46
        ;   XREF to: 00539f6a (CONDITIONAL_JUMP)  ; LAB_00539f6a
    FLD float ptr [ESP + 0xe0]          ; 00539f48
    FLD float ptr [ESP + 0xc]           ; 00539f4f
    FSUB ST0,ST1                        ; 00539f53
    FLD float ptr [0x005a2734]          ; 00539f55 | FLOAT_005a2734
    FSUBRP ST2,ST0                      ; 00539f5b
    FDIVRP                              ; 00539f5d
    FMUL float ptr [ESP + 0xdc]         ; 00539f5f
    FSTP float ptr [ESP + 0x8]          ; 00539f66
    PUSH 0x3                            ; 00539f6a
        ;   Label: LAB_00539f6a
    PUSH EBX                            ; 00539f6c
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0 ; 00539f6d
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0()
    MOV dword ptr [ESP + 0xf8],EAX      ; 00539f72
    FLD float ptr [ESP + 0xf8]          ; 00539f79
    FLD1                                ; 00539f80
    FSUBRP                              ; 00539f82
    ADD ESP,0x8                         ; 00539f84
    FMUL float ptr [ESP + 0x10]         ; 00539f87
    FMUL float ptr [ESP + 0x8]          ; 00539f8b
    FST float ptr [ESP + 0x8]           ; 00539f8f
    FLDZ                                ; 00539f93
    FCOMPP                              ; 00539f95
    FNSTSW AX                           ; 00539f97
    SAHF                                ; 00539f99
    JNC 0x00539fe8                      ; 00539f9a
        ;   XREF to: 00539fe8 (CONDITIONAL_JUMP)  ; LAB_00539fe8
    PUSH 0x534e90                       ; 00539f9c
    MOV EDI,dword ptr [0x02dc9f94]      ; 00539fa1 | DAT_02dc9f94
    PUSH EDI                            ; 00539fa7
    PUSH dword ptr [ESP + 0x10]         ; 00539fa8
    LEA ESI,[ESP + 0x84]                ; 00539fac
    PUSH dword ptr [ESP + 0x18]         ; 00539fb3
    CALL core_xform.cpp_FUN_0055d4a0    ; 00539fb7
        ;   XREF to: 0055d4a0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d4a0()
    ADD ESP,0x4                         ; 00539fbc
    LEA EAX,[ESP + 0xa4]                ; 00539fbf
    LEA EDI,[ESP + 0xa4]                ; 00539fc6
    PUSH EAX                            ; 00539fcd
    LEA EAX,[EBX + 0x150]               ; 00539fce
    LEA ESI,[ESP + 0x88]                ; 00539fd4
    PUSH EAX                            ; 00539fdb
    MOVSD ES:EDI,ESI                    ; 00539fdc
    MOVSD ES:EDI,ESI                    ; 00539fdd
    MOVSD ES:EDI,ESI                    ; 00539fde
    MOVSD ES:EDI,ESI                    ; 00539fdf
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0 ; 00539fe0
        ;   XREF to: 0051d7a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0()
    ADD ESP,0x14                        ; 00539fe5
    PUSH 0x0                            ; 00539fe8
        ;   Label: LAB_00539fe8
    PUSH EBX                            ; 00539fea
    CALL FUN_0053a260                   ; 00539feb
        ;   XREF to: 0053a260 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a260()
    ADD ESP,0x8                         ; 00539ff0
    PUSH 0x1                            ; 00539ff3
    PUSH EBX                            ; 00539ff5
    CALL FUN_0053a260                   ; 00539ff6
        ;   XREF to: 0053a260 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a260()
    MOV EAX,[0x02dc9f88]                ; 00539ffb | DAT_02dc9f88
    MOV ESI,dword ptr [0x02dc9f68]      ; 0053a000 | DAT_02dc9f68
    SHL EAX,0x4                         ; 0053a006
    SHL ESI,0x4                         ; 0053a009
    LEA EDI,[EBX + EAX*0x1 + 0x800]     ; 0053a00c
    LEA ESI,[ESI + EBX*0x1 + 0x800]     ; 0053a013
    MOVSD ES:EDI,ESI                    ; 0053a01a
    MOVSD ES:EDI,ESI                    ; 0053a01b
    MOVSD ES:EDI,ESI                    ; 0053a01c
    MOVSD ES:EDI,ESI                    ; 0053a01d
    MOV ESI,dword ptr [0x02dc9f84]      ; 0053a01e | DAT_02dc9f84
    MOV EAX,[0x02dc9f64]                ; 0053a024 | DAT_02dc9f64
    SHL ESI,0x4                         ; 0053a029
    SHL EAX,0x4                         ; 0053a02c
    LEA EDI,[ESI + EBX*0x1 + 0x800]     ; 0053a02f
    LEA ESI,[EBX + EAX*0x1 + 0x800]     ; 0053a036
    ADD ESP,0x8                         ; 0053a03d
    MOVSD ES:EDI,ESI                    ; 0053a040
    MOVSD ES:EDI,ESI                    ; 0053a041
    MOVSD ES:EDI,ESI                    ; 0053a042
    MOVSD ES:EDI,ESI                    ; 0053a043
    MOV EAX,dword ptr [EBX + 0x2a84]    ; 0053a044
        ;   Label: LAB_0053a044
    CMP EAX,0x3                         ; 0053a04a
    JNZ 0x0053a17a                      ; 0053a04d
        ;   XREF to: 0053a17a (CONDITIONAL_JUMP)  ; LAB_0053a17a
    PUSH 0x3                            ; 0053a053
        ;   Label: LAB_0053a053
    PUSH EBX                            ; 0053a055
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0 ; 0053a056
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0()
    MOV dword ptr [ESP + 0xf8],EAX      ; 0053a05b
    FLD float ptr [ESP + 0xf8]          ; 0053a062
    FLD1                                ; 0053a069
    FSUBRP                              ; 0053a06b
    ADD ESP,0x8                         ; 0053a06d
    FMUL float ptr [ESP + 0x10]         ; 0053a070
    LEA ESI,[ESP + 0x88]                ; 0053a074
    PUSH dword ptr [EBX + 0x1fa58]      ; 0053a07b
    FSTP float ptr [ESP + 0xd4]         ; 0053a081
    CALL core_xform.cpp_FUN_0055d4a0    ; 0053a088
        ;   XREF to: 0055d4a0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d4a0()
    ADD ESP,0x4                         ; 0053a08d
    PUSH 0x534e90                       ; 0053a090
    MOV EDX,dword ptr [0x02dc9f94]      ; 0053a095 | DAT_02dc9f94
    PUSH EDX                            ; 0053a09b
    LEA EAX,[ESP + 0x30]                ; 0053a09c
    PUSH dword ptr [ESP + 0xd8]         ; 0053a0a0
    LEA EDI,[ESP + 0x34]                ; 0053a0a7
    PUSH EAX                            ; 0053a0ab
    LEA EAX,[EBX + 0x150]               ; 0053a0ac
    LEA ESI,[ESP + 0x98]                ; 0053a0b2
    PUSH EAX                            ; 0053a0b9
    MOVSD ES:EDI,ESI                    ; 0053a0ba
    MOVSD ES:EDI,ESI                    ; 0053a0bb
    MOVSD ES:EDI,ESI                    ; 0053a0bc
    MOVSD ES:EDI,ESI                    ; 0053a0bd
    MOV dword ptr [ESP + 0xec],EAX      ; 0053a0be
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0 ; 0053a0c5
        ;   XREF to: 0051d7a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0()
    ADD ESP,0x14                        ; 0053a0ca
    LEA ESI,[ESP + 0xa8]                ; 0053a0cd
    PUSH dword ptr [EBX + 0x1fa5c]      ; 0053a0d4
    LEA EDI,[ESP + 0xbc]                ; 0053a0da
    CALL core_xform.cpp_FUN_0055d4e0    ; 0053a0e1
        ;   XREF to: 0055d4e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d4e0()
    LEA ESI,[ESP + 0xac]                ; 0053a0e6
    ADD ESP,0x4                         ; 0053a0ed
    MOVSD ES:EDI,ESI                    ; 0053a0f0
    MOVSD ES:EDI,ESI                    ; 0053a0f1
    MOVSD ES:EDI,ESI                    ; 0053a0f2
    MOVSD ES:EDI,ESI                    ; 0053a0f3
    PUSH 0x534e90                       ; 0053a0f4
    MOV ESI,dword ptr [0x02dc9f94]      ; 0053a0f9 | DAT_02dc9f94
    PUSH ESI                            ; 0053a0ff
    LEA EAX,[ESP + 0xc0]                ; 0053a100
    PUSH dword ptr [ESP + 0xd8]         ; 0053a107
    PUSH EAX                            ; 0053a10e
    MOV EDI,dword ptr [ESP + 0xe8]      ; 0053a10f
    PUSH EDI                            ; 0053a116
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0 ; 0053a117
        ;   XREF to: 0051d7a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0()
    ADD ESP,0x14                        ; 0053a11c
    CMP dword ptr [EBX + 0x2a84],0xe    ; 0053a11f
    JZ 0x0053a1b7                       ; 0053a126
        ;   XREF to: 0053a1b7 (CONDITIONAL_JUMP)  ; LAB_0053a1b7
    MOV ESP,EBP                         ; 0053a12c
        ;   Label: LAB_0053a12c
    POP EBP                             ; 0053a12e
    POP EDI                             ; 0053a12f
    POP ESI                             ; 0053a130
    POP EBX                             ; 0053a131
    RET                                 ; 0053a132
    CMP EAX,0x18                        ; 0053a133
        ;   Label: LAB_0053a133
    JZ 0x00539ca8                       ; 0053a136
        ;   XREF to: 00539ca8 (CONDITIONAL_JUMP)  ; LAB_00539ca8
    CMP EAX,0x19                        ; 0053a13c
    JNZ 0x0053a150                      ; 0053a13f
        ;   XREF to: 0053a150 (CONDITIONAL_JUMP)  ; LAB_0053a150
    FLD float ptr [ESP + 0x14]          ; 0053a141
        ;   Label: LAB_0053a141
    FSUBR double ptr [0x00595937]       ; 0053a145 | DOUBLE_00595937
    JMP 0x00539cb2                      ; 0053a14b
        ;   XREF to: 00539cb2 (UNCONDITIONAL_JUMP)  ; LAB_00539cb2
    CMP EAX,0x1a                        ; 0053a150
        ;   Label: LAB_0053a150
    JZ 0x0053a141                       ; 0053a153
        ;   XREF to: 0053a141 (CONDITIONAL_JUMP)  ; LAB_0053a141
    JMP 0x00539cbf                      ; 0053a155
        ;   XREF to: 00539cbf (UNCONDITIONAL_JUMP)  ; LAB_00539cbf
    FLDZ                                ; 0053a15a
        ;   Label: LAB_0053a15a
    FCOMP float ptr [ESP + 0xec]        ; 0053a15c
    FNSTSW AX                           ; 0053a163
    SAHF                                ; 0053a165
    JBE 0x00539cdb                      ; 0053a166
        ;   XREF to: 00539cdb (CONDITIONAL_JUMP)  ; LAB_00539cdb
    XOR ECX,ECX                         ; 0053a16c
    MOV dword ptr [ESP + 0xec],ECX      ; 0053a16e
    JMP 0x00539cdb                      ; 0053a175
        ;   XREF to: 00539cdb (UNCONDITIONAL_JUMP)  ; LAB_00539cdb
    CMP EAX,0x4                         ; 0053a17a
        ;   Label: LAB_0053a17a
    JZ 0x0053a053                       ; 0053a17d
        ;   XREF to: 0053a053 (CONDITIONAL_JUMP)  ; LAB_0053a053
    CMP EAX,0x9                         ; 0053a183
    JZ 0x0053a053                       ; 0053a186
        ;   XREF to: 0053a053 (CONDITIONAL_JUMP)  ; LAB_0053a053
    CMP EAX,0x6                         ; 0053a18c
    JZ 0x0053a053                       ; 0053a18f
        ;   XREF to: 0053a053 (CONDITIONAL_JUMP)  ; LAB_0053a053
    CMP EAX,0x7                         ; 0053a195
    JZ 0x0053a053                       ; 0053a198
        ;   XREF to: 0053a053 (CONDITIONAL_JUMP)  ; LAB_0053a053
    CMP EAX,0x8                         ; 0053a19e
    JZ 0x0053a053                       ; 0053a1a1
        ;   XREF to: 0053a053 (CONDITIONAL_JUMP)  ; LAB_0053a053
    CMP dword ptr [EBX + 0x2a84],0xe    ; 0053a1a7
    JZ 0x0053a1b7                       ; 0053a1ae
        ;   XREF to: 0053a1b7 (CONDITIONAL_JUMP)  ; LAB_0053a1b7
    MOV ESP,EBP                         ; 0053a1b0
    POP EBP                             ; 0053a1b2
    POP EDI                             ; 0053a1b3
    POP ESI                             ; 0053a1b4
    POP EBX                             ; 0053a1b5
    RET                                 ; 0053a1b6
    FLD float ptr [EBX + 0x1fb18]       ; 0053a1b7
        ;   Label: LAB_0053a1b7
    FDIV float ptr [0x005a2738]         ; 0053a1bd | FLOAT_005a2738
    FLD1                                ; 0053a1c3
    FPATAN                              ; 0053a1c5
    LEA ESI,[ESP + 0x38]                ; 0053a1c7
    FSTP float ptr [ESP + 0xd4]         ; 0053a1cb
    PUSH dword ptr [ESP + 0xd4]         ; 0053a1d2
    CALL core_xform.cpp_FUN_0055d4e0    ; 0053a1d9
        ;   XREF to: 0055d4e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d4e0()
    ADD ESP,0x4                         ; 0053a1de
    PUSH 0x51b650                       ; 0053a1e1
    MOV EDX,dword ptr [0x02dc9f60]      ; 0053a1e6 | DAT_02dc9f60
    PUSH EDX                            ; 0053a1ec
    LEA EAX,[ESP + 0x70]                ; 0053a1ed
    PUSH 0x3f800000                     ; 0053a1f1
    LEA EDI,[ESP + 0x74]                ; 0053a1f6
    PUSH EAX                            ; 0053a1fa
    ADD EBX,0x150                       ; 0053a1fb
    LEA ESI,[ESP + 0x48]                ; 0053a201
    PUSH EBX                            ; 0053a205
    MOVSD ES:EDI,ESI                    ; 0053a206
    MOVSD ES:EDI,ESI                    ; 0053a207
    MOVSD ES:EDI,ESI                    ; 0053a208
    MOVSD ES:EDI,ESI                    ; 0053a209
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0 ; 0053a20a
        ;   XREF to: 0051d7a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0()
    ADD ESP,0x14                        ; 0053a20f
    LEA ESI,[ESP + 0x58]                ; 0053a212
    FLD float ptr [ESP + 0xd4]          ; 0053a216
    SUB ESP,0x4                         ; 0053a21d
    FCHS                                ; 0053a220
    FSTP float ptr [ESP]                ; 0053a222
    CALL core_xform.cpp_FUN_0055d4e0    ; 0053a225
        ;   XREF to: 0055d4e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d4e0()
    ADD ESP,0x4                         ; 0053a22a
    PUSH 0x51b650                       ; 0053a22d
    MOV ECX,dword ptr [0x02dc9f5c]      ; 0053a232 | DAT_02dc9f5c
    PUSH ECX                            ; 0053a238
    LEA EAX,[ESP + 0x70]                ; 0053a239
    PUSH 0x3f800000                     ; 0053a23d
    PUSH EAX                            ; 0053a242
    LEA EDI,[ESP + 0x78]                ; 0053a243
    LEA ESI,[ESP + 0x68]                ; 0053a247
    PUSH EBX                            ; 0053a24b
    MOVSD ES:EDI,ESI                    ; 0053a24c
    MOVSD ES:EDI,ESI                    ; 0053a24d
    MOVSD ES:EDI,ESI                    ; 0053a24e
    MOVSD ES:EDI,ESI                    ; 0053a24f
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0 ; 0053a250
        ;   XREF to: 0051d7a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0()
    ADD ESP,0x14                        ; 0053a255
    MOV ESP,EBP                         ; 0053a258
    POP EBP                             ; 0053a25a
    POP EDI                             ; 0053a25b
    POP ESI                             ; 0053a25c
    POP EBX                             ; 0053a25d
    RET                                 ; 0053a25e

