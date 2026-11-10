; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_prye_cpp_FUN_0051ee10(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x240]:4  local_240
; undefined        Stack[-0x23c]:1  local_23c
; undefined        Stack[-0x22c]:1  local_22c
; undefined        Stack[-0x21c]:1  local_21c
; undefined        Stack[-0x20c]:1  local_20c
; undefined        Stack[-0x1fc]:1  local_1fc
; undefined        Stack[-0x1ec]:1  local_1ec
; undefined        Stack[-0x1dc]:1  local_1dc
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined        Stack[-0x1bc]:1  local_1bc
; undefined        Stack[-0x1ac]:1  local_1ac
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0x18c]:1  local_18c
; undefined        Stack[-0x17c]:1  local_17c
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x15c]:1  local_15c
; undefined        Stack[-0x14c]:1  local_14c
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x12c]:1  local_12c
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0xec]:1  local_ec
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0xbc]:1  local_bc
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x4c]:1  local_4c
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
;   core_prye.cpp_FUN_0051e6d0 at 0051ec3c
;
; Referenced Globals:
;   undefined4 s_Bip01_L_Finger1_005cd466+1
;   TerminatedCString s_Bip01_L_Finger11_005cd477
;   undefined4 DAT_005cd48f
;   undefined4 DAT_005e65b0
;   undefined4 DAT_01ed36e8
;   undefined4 DAT_01ed36ec
;   undefined4 DAT_01ed36f0
;   undefined4 DAT_01ed36f4
;
; Called Functions:
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0
;   core_motion.cpp_FUN_004fca20
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;   core_xform.cpp_multiplyQuaternion_FUN_00585990
;   core_xform.cpp_quaternionFromAngleX_FUN_00585cd0
;   core_xform.cpp_quaternionFromAngleY_FUN_00585d10
;   core_xform.cpp_quaternionFromAngleZ_FUN_00585d50
;   core_xform.cpp_slerpQuaternion_FUN_00585b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ee10
        ;   Label: core_prye.cpp_FUN_0051ee10
    PUSH ESI                            ; 0051ee11
    PUSH EDI                            ; 0051ee12
    PUSH EBP                            ; 0051ee13
    MOV EBP,ESP                         ; 0051ee14
    SUB ESP,0x22c                       ; 0051ee16
    AND ESP,0xfffffff8                  ; 0051ee1c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051ee1f
    CMP dword ptr [EBP + 0x18],0x0      ; 0051ee22
    JZ 0x0051f256                       ; 0051ee26
        ;   XREF to: 0051f256 (CONDITIONAL_JUMP)  ; LAB_0051f256
    PUSH 0xbfc90fdb                     ; 0051ee2c
    MOV EAX,[0x01ed36ec]                ; 0051ee31 | DAT_01ed36ec
    LEA ESI,[ESP + 0xe8]                ; 0051ee36
    MOV dword ptr [ESP + 0x220],EAX     ; 0051ee3d
    MOV EAX,[0x01ed36f4]                ; 0051ee44 | DAT_01ed36f4
    LEA EDI,[ESP + 0x18]                ; 0051ee49
    MOV dword ptr [ESP + 0x218],EAX     ; 0051ee4d
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00585d10 ; 0051ee54
        ;   XREF to: 00585d10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00585d10()
    LEA ESI,[ESP + 0xe8]                ; 0051ee59
    ADD ESP,0x4                         ; 0051ee60
    MOVSD ES:EDI,ESI                    ; 0051ee63
    MOVSD ES:EDI,ESI                    ; 0051ee64
    MOVSD ES:EDI,ESI                    ; 0051ee65
    MOVSD ES:EDI,ESI                    ; 0051ee66
    PUSH 0xbfc90fdb                     ; 0051ee67
    LEA ESI,[ESP + 0xf8]                ; 0051ee6c
    LEA EDI,[ESP + 0x28]                ; 0051ee73
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_00585d50 ; 0051ee77
        ;   XREF to: 00585d50 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_00585d50()
    ADD ESP,0x4                         ; 0051ee7c
    LEA EAX,[EBX + 0x20be0]             ; 0051ee7f
    LEA ESI,[ESP + 0xf4]                ; 0051ee85
    MOV dword ptr [ESP + 0x220],EAX     ; 0051ee8c
        ;   Label: LAB_0051ee8c
    MOVSD ES:EDI,ESI                    ; 0051ee93
    MOVSD ES:EDI,ESI                    ; 0051ee94
    MOVSD ES:EDI,ESI                    ; 0051ee95
    MOVSD ES:EDI,ESI                    ; 0051ee96
    MOV EAX,dword ptr [EBX + 0x2f04]    ; 0051ee97
    MOV dword ptr [ESP],EAX             ; 0051ee9d
    MOV EAX,dword ptr [ESP + 0x220]     ; 0051eea0
    FLD float ptr [EAX + 0x14]          ; 0051eea7
    FLD1                                ; 0051eeaa
    FSUBRP                              ; 0051eeac
    FLD float ptr [ESP]                 ; 0051eeae
    FXCH                                ; 0051eeb1
    FMUL ST1                            ; 0051eeb3
    FLD1                                ; 0051eeb5
    FSUBRP                              ; 0051eeb7
    FMULP                               ; 0051eeb9
    FST float ptr [ESP]                 ; 0051eebb
    FLDZ                                ; 0051eebe
    FCOMPP                              ; 0051eec0
    FNSTSW AX                           ; 0051eec2
    SAHF                                ; 0051eec4
    JNC 0x0051f24f                      ; 0051eec5
        ;   XREF to: 0051f24f (CONDITIONAL_JUMP)  ; LAB_0051f24f
    MOV EAX,dword ptr [EBX + 0x2f00]    ; 0051eecb
    SHL EAX,0x3                         ; 0051eed1
    MOV ESI,EAX                         ; 0051eed4
    SHL EAX,0x3                         ; 0051eed6
    SUB EAX,ESI                         ; 0051eed9
    LEA ESI,[EBX + 0x27c8]              ; 0051eedb
    ADD EAX,ESI                         ; 0051eee1
    PUSH 0x1                            ; 0051eee3
    ADD EAX,0x8                         ; 0051eee5
    PUSH EAX                            ; 0051eee8
    LEA EAX,[EBX + 0x158]               ; 0051eee9
    PUSH EAX                            ; 0051eeef
    MOV dword ptr [ESP + 0x230],EAX     ; 0051eef0
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0051eef7
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051eefc
    PUSH EAX                            ; 0051eeff
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0 ; 0051ef00
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0051ef05
    PUSH dword ptr [EBX + 0x2f04]       ; 0051ef08
    PUSH EAX                            ; 0051ef0e
    MOV EDI,dword ptr [ESP + 0x22c]     ; 0051ef0f
    PUSH EDI                            ; 0051ef16
    MOV ESI,EAX                         ; 0051ef17
    CALL core_motion.cpp_FUN_004fca20   ; 0051ef19
        ;   XREF to: 004fca20 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fca20()
    MOV dword ptr [ESP + 0x234],EAX     ; 0051ef1e
    FLD float ptr [ESP + 0x234]         ; 0051ef25
    ADD ESP,0xc                         ; 0051ef2c
    PUSH 0x54bef0                       ; 0051ef2f
    MOV EAX,dword ptr [ESP + 0x220]     ; 0051ef34
    PUSH EAX                            ; 0051ef3b
    PUSH dword ptr [ESP + 0x8]          ; 0051ef3c
    FSTP float ptr [ESP + 0x21c]        ; 0051ef40
    PUSH dword ptr [ESP + 0x21c]        ; 0051ef47
    PUSH ESI                            ; 0051ef4e
    PUSH EDI                            ; 0051ef4f
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90 ; 0051ef50
        ;   XREF to: 0054cc90 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 0051ef55
    MOV EAX,dword ptr [ESP + 0x220]     ; 0051ef58
    LEA ESI,[ESP + 0x154]               ; 0051ef5f
    PUSH dword ptr [EAX + 0xc]          ; 0051ef66
    LEA EDI,[ESP + 0x78]                ; 0051ef69
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00585d10 ; 0051ef6d
        ;   XREF to: 00585d10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00585d10()
    ADD ESP,0x4                         ; 0051ef72
    LEA EAX,[ESP + 0x74]                ; 0051ef75
    LEA ESI,[ESP + 0x154]               ; 0051ef79
    PUSH EAX                            ; 0051ef80
    MOVSD ES:EDI,ESI                    ; 0051ef81
    MOVSD ES:EDI,ESI                    ; 0051ef82
    MOVSD ES:EDI,ESI                    ; 0051ef83
    MOVSD ES:EDI,ESI                    ; 0051ef84
    MOV EAX,dword ptr [ESP + 0x224]     ; 0051ef85
    LEA ESI,[ESP + 0x168]               ; 0051ef8c
    PUSH dword ptr [EAX + 0x8]          ; 0051ef93
    LEA EDI,[ESP + 0x6c]                ; 0051ef96
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00585cd0 ; 0051ef9a
        ;   XREF to: 00585cd0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00585cd0()
    LEA ESI,[ESP + 0x16c]               ; 0051ef9f
    ADD ESP,0x4                         ; 0051efa6
    LEA EAX,[ESP + 0x68]                ; 0051efa9
    MOVSD ES:EDI,ESI                    ; 0051efad
    MOVSD ES:EDI,ESI                    ; 0051efae
    MOVSD ES:EDI,ESI                    ; 0051efaf
    MOVSD ES:EDI,ESI                    ; 0051efb0
    PUSH EAX                            ; 0051efb1
    LEA ESI,[ESP + 0x17c]               ; 0051efb2
    LEA EDI,[ESP + 0x5c]                ; 0051efb9
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0051efbd
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    ADD ESP,0x8                         ; 0051efc2
    LEA ESI,[ESP + 0x174]               ; 0051efc5
    LEA EAX,[ESP + 0x14]                ; 0051efcc
    PUSH 0x3f733333                     ; 0051efd0
    PUSH EAX                            ; 0051efd5
    MOVSD ES:EDI,ESI                    ; 0051efd6
    MOVSD ES:EDI,ESI                    ; 0051efd7
    MOVSD ES:EDI,ESI                    ; 0051efd8
    MOVSD ES:EDI,ESI                    ; 0051efd9
    PUSH 0x5e65b0                       ; 0051efda | DAT_005e65b0
    LEA ESI,[ESP + 0x200]               ; 0051efdf
    LEA EDI,[ESP + 0x90]                ; 0051efe6
    CALL core_xform.cpp_slerpQuaternion_FUN_00585b20 ; 0051efed
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00585b20()
    ADD ESP,0xc                         ; 0051eff2
    LEA EAX,[ESP + 0x54]                ; 0051eff5
    PUSH dword ptr [ESP]                ; 0051eff9
    LEA ESI,[ESP + 0x1f8]               ; 0051effc
    PUSH EAX                            ; 0051f003
    LEA EAX,[ESP + 0x8c]                ; 0051f004
    MOVSD ES:EDI,ESI                    ; 0051f00b
    MOVSD ES:EDI,ESI                    ; 0051f00c
    MOVSD ES:EDI,ESI                    ; 0051f00d
    MOVSD ES:EDI,ESI                    ; 0051f00e
    PUSH EAX                            ; 0051f00f
    LEA ESI,[ESP + 0x50]                ; 0051f010
    LEA EDI,[ESP + 0xa0]                ; 0051f014
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0051f01b
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    LEA ESI,[ESP + 0x50]                ; 0051f020
    ADD ESP,0x8                         ; 0051f024
    LEA EAX,[ESP + 0x98]                ; 0051f027
    MOVSD ES:EDI,ESI                    ; 0051f02e
    MOVSD ES:EDI,ESI                    ; 0051f02f
    MOVSD ES:EDI,ESI                    ; 0051f030
    MOVSD ES:EDI,ESI                    ; 0051f031
    PUSH EAX                            ; 0051f032
    MOV EDI,dword ptr [ESP + 0x224]     ; 0051f033
    LEA EAX,[EBX + 0x808]               ; 0051f03a
    SHL EDI,0x4                         ; 0051f040
    MOV dword ptr [ESP + 0x220],EAX     ; 0051f043
    ADD EAX,EDI                         ; 0051f04a
    PUSH EAX                            ; 0051f04c
    LEA ESI,[ESP + 0x140]               ; 0051f04d
    CALL core_xform.cpp_slerpQuaternion_FUN_00585b20 ; 0051f054
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00585b20()
    LEA ESI,[ESP + 0x140]               ; 0051f059
    LEA EDI,[EDI + EBX*0x1 + 0x808]     ; 0051f060
    ADD ESP,0xc                         ; 0051f067
    MOVSD ES:EDI,ESI                    ; 0051f06a
    MOVSD ES:EDI,ESI                    ; 0051f06b
    MOVSD ES:EDI,ESI                    ; 0051f06c
    MOVSD ES:EDI,ESI                    ; 0051f06d
    LEA EAX,[ESP + 0x54]                ; 0051f06e
    PUSH EAX                            ; 0051f072
    LEA EAX,[ESP + 0x28]                ; 0051f073
    PUSH EAX                            ; 0051f077
    LEA EAX,[ESP + 0x1c]                ; 0051f078
    PUSH EAX                            ; 0051f07c
    LEA ESI,[ESP + 0x150]               ; 0051f07d
    LEA EDI,[ESP + 0xc0]                ; 0051f084
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0051f08b
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    LEA ESI,[ESP + 0x150]               ; 0051f090
    ADD ESP,0x8                         ; 0051f097
    LEA EAX,[ESP + 0xb8]                ; 0051f09a
    MOVSD ES:EDI,ESI                    ; 0051f0a1
    MOVSD ES:EDI,ESI                    ; 0051f0a2
    MOVSD ES:EDI,ESI                    ; 0051f0a3
    MOVSD ES:EDI,ESI                    ; 0051f0a4
    PUSH EAX                            ; 0051f0a5
    LEA ESI,[ESP + 0x1ac]               ; 0051f0a6
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0051f0ad
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    ADD ESP,0x8                         ; 0051f0b2
    PUSH 0x54bef0                       ; 0051f0b5
    MOV ECX,dword ptr [ESP + 0x218]     ; 0051f0ba
    LEA EDI,[ESP + 0xa8]                ; 0051f0c1
    PUSH ECX                            ; 0051f0c8
    LEA ESI,[ESP + 0x1ac]               ; 0051f0c9
    LEA EAX,[ESP + 0xac]                ; 0051f0d0
    PUSH dword ptr [ESP + 0x8]          ; 0051f0d7
    MOVSD ES:EDI,ESI                    ; 0051f0db
    MOVSD ES:EDI,ESI                    ; 0051f0dc
    MOVSD ES:EDI,ESI                    ; 0051f0dd
    MOVSD ES:EDI,ESI                    ; 0051f0de
    PUSH EAX                            ; 0051f0df
    MOV ESI,dword ptr [ESP + 0x234]     ; 0051f0e0
    PUSH ESI                            ; 0051f0e7
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0 ; 0051f0e8
        ;   XREF to: 0054d8f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 0051f0ed
    CMP dword ptr [EBP + 0x18],0x0      ; 0051f0f0
    JNZ 0x0051f23e                      ; 0051f0f4
        ;   XREF to: 0051f23e (CONDITIONAL_JUMP)  ; LAB_0051f23e
    PUSH ESI                            ; 0051f0fa
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0051f0fb
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051f100
    PUSH 0x1                            ; 0051f103
    PUSH 0x5cd467                       ; 0051f105 | s_Bip01_L_Finger1_005cd466+1
    PUSH EAX                            ; 0051f10a
    MOV ESI,EAX                         ; 0051f10b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0051f10d
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [ESP + 0x234],EAX     ; 0051f112
    ADD ESP,0xc                         ; 0051f119
    PUSH 0x1                            ; 0051f11c
    PUSH 0x5cd477                       ; 0051f11e | = "Bip01 L Finger11"
    PUSH ESI                            ; 0051f123
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0051f124
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [ESP + 0x218],EAX     ; 0051f129
    ADD ESP,0xc                         ; 0051f130
    LEA ESI,[ESP + 0x1d4]               ; 0051f133
    PUSH 0x3fc90fdb                     ; 0051f13a
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00585cd0 ; 0051f13f
        ;   XREF to: 00585cd0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00585cd0()
    ADD ESP,0x4                         ; 0051f144
    LEA EAX,[ESP + 0x1b4]               ; 0051f147
    PUSH EAX                            ; 0051f14e
    MOV EAX,dword ptr [ESP + 0x22c]     ; 0051f14f
    SHL EAX,0x4                         ; 0051f156
    LEA EDI,[ESP + 0x1b8]               ; 0051f159
    MOV dword ptr [ESP + 0x22c],EAX     ; 0051f160
    MOV EAX,dword ptr [ESP + 0x21c]     ; 0051f167
    MOV EDX,dword ptr [ESP + 0x22c]     ; 0051f16e
    LEA ESI,[ESP + 0x1d8]               ; 0051f175
    ADD EAX,EDX                         ; 0051f17c
    MOVSD ES:EDI,ESI                    ; 0051f17e
    MOVSD ES:EDI,ESI                    ; 0051f17f
    MOVSD ES:EDI,ESI                    ; 0051f180
    MOVSD ES:EDI,ESI                    ; 0051f181
    PUSH EAX                            ; 0051f182
    LEA ESI,[ESP + 0x1ec]               ; 0051f183
    LEA EDI,[ESP + 0xac]                ; 0051f18a
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0051f191
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    LEA ESI,[ESP + 0x1ec]               ; 0051f196
    ADD ESP,0x8                         ; 0051f19d
    MOVSD ES:EDI,ESI                    ; 0051f1a0
    MOVSD ES:EDI,ESI                    ; 0051f1a1
    MOVSD ES:EDI,ESI                    ; 0051f1a2
    MOVSD ES:EDI,ESI                    ; 0051f1a3
    MOV ESI,dword ptr [ESP + 0x228]     ; 0051f1a4
    LEA EDI,[ESI + EBX*0x1 + 0x808]     ; 0051f1ab
    LEA ESI,[ESP + 0x1e4]               ; 0051f1b2
    MOVSD ES:EDI,ESI                    ; 0051f1b9
    MOVSD ES:EDI,ESI                    ; 0051f1ba
    MOVSD ES:EDI,ESI                    ; 0051f1bb
    MOVSD ES:EDI,ESI                    ; 0051f1bc
    LEA ESI,[ESP + 0x104]               ; 0051f1bd
    PUSH 0x40490fdb                     ; 0051f1c4
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00585cd0 ; 0051f1c9
        ;   XREF to: 00585cd0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00585cd0()
    ADD ESP,0x4                         ; 0051f1ce
    LEA EAX,[ESP + 0x1c4]               ; 0051f1d1
    PUSH EAX                            ; 0051f1d8
    MOV EAX,dword ptr [ESP + 0x210]     ; 0051f1d9
    SHL EAX,0x4                         ; 0051f1e0
    LEA EDI,[ESP + 0x1c8]               ; 0051f1e3
    MOV dword ptr [ESP + 0x22c],EAX     ; 0051f1ea
    MOV EAX,dword ptr [ESP + 0x21c]     ; 0051f1f1
    MOV ECX,dword ptr [ESP + 0x22c]     ; 0051f1f8
    LEA ESI,[ESP + 0x108]               ; 0051f1ff
    ADD EAX,ECX                         ; 0051f206
    MOVSD ES:EDI,ESI                    ; 0051f208
    MOVSD ES:EDI,ESI                    ; 0051f209
    MOVSD ES:EDI,ESI                    ; 0051f20a
    MOVSD ES:EDI,ESI                    ; 0051f20b
    PUSH EAX                            ; 0051f20c
    LEA ESI,[ESP + 0xc]                 ; 0051f20d
    LEA EDI,[ESP + 0xac]                ; 0051f211
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0051f218
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    LEA ESI,[ESP + 0xc]                 ; 0051f21d
    ADD ESP,0x8                         ; 0051f221
    MOVSD ES:EDI,ESI                    ; 0051f224
    MOVSD ES:EDI,ESI                    ; 0051f225
    MOVSD ES:EDI,ESI                    ; 0051f226
    MOVSD ES:EDI,ESI                    ; 0051f227
    MOV ESI,dword ptr [ESP + 0x228]     ; 0051f228
    LEA EDI,[ESI + EBX*0x1 + 0x808]     ; 0051f22f
    LEA ESI,[ESP + 0x4]                 ; 0051f236
    MOVSD ES:EDI,ESI                    ; 0051f23a
    MOVSD ES:EDI,ESI                    ; 0051f23b
    MOVSD ES:EDI,ESI                    ; 0051f23c
    MOVSD ES:EDI,ESI                    ; 0051f23d
    FLD float ptr [EBX + 0x20c80]       ; 0051f23e
        ;   Label: LAB_0051f23e
    FCOMP double ptr [0x005cd48f]       ; 0051f244 | DAT_005cd48f
    FNSTSW AX                           ; 0051f24a
    SAHF                                ; 0051f24c
    JA 0x0051f2b2                       ; 0051f24d
        ;   XREF to: 0051f2b2 (CONDITIONAL_JUMP)  ; LAB_0051f2b2
    MOV ESP,EBP                         ; 0051f24f
        ;   Label: LAB_0051f24f
    POP EBP                             ; 0051f251
    POP EDI                             ; 0051f252
    POP ESI                             ; 0051f253
    POP EBX                             ; 0051f254
    RET                                 ; 0051f255
    PUSH 0x3fc90fdb                     ; 0051f256
        ;   Label: LAB_0051f256
    MOV EAX,[0x01ed36e8]                ; 0051f25b | DAT_01ed36e8
    LEA ESI,[ESP + 0xc8]                ; 0051f260
    MOV dword ptr [ESP + 0x220],EAX     ; 0051f267
    MOV EAX,[0x01ed36f0]                ; 0051f26e | DAT_01ed36f0
    LEA EDI,[ESP + 0x18]                ; 0051f273
    MOV dword ptr [ESP + 0x218],EAX     ; 0051f277
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00585d10 ; 0051f27e
        ;   XREF to: 00585d10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00585d10()
    LEA ESI,[ESP + 0xc8]                ; 0051f283
    ADD ESP,0x4                         ; 0051f28a
    MOVSD ES:EDI,ESI                    ; 0051f28d
    MOVSD ES:EDI,ESI                    ; 0051f28e
    MOVSD ES:EDI,ESI                    ; 0051f28f
    MOVSD ES:EDI,ESI                    ; 0051f290
    PUSH 0x0                            ; 0051f291
    LEA ESI,[ESP + 0x38]                ; 0051f293
    LEA EDI,[ESP + 0x28]                ; 0051f297
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_00585d50 ; 0051f29b
        ;   XREF to: 00585d50 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_00585d50()
    ADD ESP,0x4                         ; 0051f2a0
    LEA EAX,[EBX + 0x20c00]             ; 0051f2a3
    LEA ESI,[ESP + 0x34]                ; 0051f2a9
    JMP 0x0051ee8c                      ; 0051f2ad
        ;   XREF to: 0051ee8c (UNCONDITIONAL_JUMP)  ; LAB_0051ee8c
    PUSH 0x3fc90fdb                     ; 0051f2b2
        ;   Label: LAB_0051f2b2
    LEA ESI,[ESP + 0x188]               ; 0051f2b7
    LEA EDI,[ESP + 0xd8]                ; 0051f2be
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00585cd0 ; 0051f2c5
        ;   XREF to: 00585cd0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00585cd0()
    ADD ESP,0x4                         ; 0051f2ca
    LEA EAX,[ESP + 0xd4]                ; 0051f2cd
    LEA ESI,[ESP + 0x184]               ; 0051f2d4
    PUSH EAX                            ; 0051f2db
    LEA EAX,[ESP + 0x88]                ; 0051f2dc
    MOVSD ES:EDI,ESI                    ; 0051f2e3
    MOVSD ES:EDI,ESI                    ; 0051f2e4
    MOVSD ES:EDI,ESI                    ; 0051f2e5
    MOVSD ES:EDI,ESI                    ; 0051f2e6
    PUSH EAX                            ; 0051f2e7
    LEA ESI,[ESP + 0x19c]               ; 0051f2e8
    LEA EDI,[ESP + 0x11c]               ; 0051f2ef
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0051f2f6
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    LEA ESI,[ESP + 0x19c]               ; 0051f2fb
    ADD ESP,0x8                         ; 0051f302
    MOVSD ES:EDI,ESI                    ; 0051f305
    MOVSD ES:EDI,ESI                    ; 0051f306
    MOVSD ES:EDI,ESI                    ; 0051f307
    MOVSD ES:EDI,ESI                    ; 0051f308
    LEA EAX,[ESP + 0x114]               ; 0051f309
    PUSH dword ptr [EBX + 0x20c80]      ; 0051f310
    MOV EDI,dword ptr [ESP + 0x220]     ; 0051f316
    PUSH EAX                            ; 0051f31d
    SHL EDI,0x4                         ; 0051f31e
    LEA EAX,[EBX + 0x808]               ; 0051f321
    ADD EAX,EDI                         ; 0051f327
    PUSH EAX                            ; 0051f329
    LEA ESI,[ESP + 0x130]               ; 0051f32a
    CALL core_xform.cpp_slerpQuaternion_FUN_00585b20 ; 0051f331
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00585b20()
    LEA ESI,[ESP + 0x130]               ; 0051f336
    LEA EDI,[EDI + EBX*0x1 + 0x808]     ; 0051f33d
    ADD ESP,0xc                         ; 0051f344
    MOVSD ES:EDI,ESI                    ; 0051f347
    MOVSD ES:EDI,ESI                    ; 0051f348
    MOVSD ES:EDI,ESI                    ; 0051f349
    MOVSD ES:EDI,ESI                    ; 0051f34a
    MOV ESP,EBP                         ; 0051f34b
    POP EBP                             ; 0051f34d
    POP EDI                             ; 0051f34e
    POP ESI                             ; 0051f34f
    POP EBX                             ; 0051f350
    RET                                 ; 0051f351

