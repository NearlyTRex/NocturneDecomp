; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_FUN_004d4d80(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x200]:4  local_200
; undefined4       Stack[-0x1f8]:4  local_1f8
; undefined1       Stack[-0x1f4]:1  local_1f4
; undefined1       Stack[-0x1e4]:1  local_1e4
; undefined1       Stack[-0x1d4]:1  local_1d4
; undefined1       Stack[-0x1c4]:1  local_1c4
; undefined1       Stack[-0x1b4]:1  local_1b4
; undefined1       Stack[-0x1a4]:1  local_1a4
; undefined1       Stack[-0x194]:1  local_194
; undefined1       Stack[-0x184]:1  local_184
; undefined1       Stack[-0x174]:1  local_174
; undefined1       Stack[-0x164]:1  local_164
; undefined1       Stack[-0x154]:1  local_154
; undefined1       Stack[-0x144]:1  local_144
; undefined1       Stack[-0x134]:1  local_134
; undefined1       Stack[-0x124]:1  local_124
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0x104]:1  local_104
; undefined1       Stack[-0xf4]:1  local_f4
; undefined1       Stack[-0xe4]:1  local_e4
; undefined1       Stack[-0xd4]:1  local_d4
; undefined1       Stack[-0xc4]:1  local_c4
; undefined1       Stack[-0xb4]:1  local_b4
; undefined1       Stack[-0xa4]:1  local_a4
; undefined1       Stack[-0x94]:1  local_94
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined8       Stack[-0x58]:8  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d34cf
;
; Referenced Globals:
;   TerminatedCString s_CGun_0062af71
;   double DOUBLE_0062af7d = 0.00100000000000000
;   double DOUBLE_0062af85 = 0.900000000000000
;   float FLOAT_0062af8d = 3.141593
;   float FLOAT_0062af91 = 180
;   float FLOAT_0062af95 = 0.005555556
;   float FLOAT_0062af99 = -1.221730
;   double DOUBLE_0062af9d = 1.30000000000000
;   float FLOAT_0065e7b0 = 0.2000000
;   float FLOAT_0065e7b4 = 0.6400000
;   float FLOAT_0065e7b8 = 0.8200000
;   CQuaternion4f CQuaternion4f_02d7b7f4
;   undefined4 DAT_02d7b7f8
;   undefined4 DAT_02d7b7fc
;   undefined4 DAT_02d7b800
;   ... and 15 more
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_gabriela.cpp_CGabriella_FUN_004d4c90
;   core_gabriela.cpp_CGabriella_FUN_004d4ce0
;   core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
;   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
;   core_xform.cpp_multiplyQuaternion_FUN_005f7640
;   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
;   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
;   core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
;   core_xform.cpp_slerpQuaternion_FUN_005f77e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4d80
        ;   Label: core_gabriela.cpp_CGabriella_FUN_004d4d80
    PUSH ESI                            ; 004d4d81
    PUSH EDI                            ; 004d4d82
    PUSH EBP                            ; 004d4d83
    MOV EBP,ESP                         ; 004d4d84
    SUB ESP,0x1e4                       ; 004d4d86
    SUB EBP,0x7e                        ; 004d4d8c
    MOV EBX,dword ptr [EBP + 0x92]      ; 004d4d8f
    LEA EAX,[EBX + 0x158]               ; 004d4d95
    PUSH EAX                            ; 004d4d9b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 004d4d9c
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1fc04]   ; 004d4da1
    XOR EDX,EDX                         ; 004d4da7
    MOV dword ptr [EBP + 0x16],EAX      ; 004d4da9
    MOV dword ptr [EBP + 0x1e],EDX      ; 004d4dac
    MOV EAX,dword ptr [EBX + 0x1fc08]   ; 004d4daf
    ADD ESP,0x4                         ; 004d4db5
    MOV dword ptr [EBP + 0x1a],EAX      ; 004d4db8
    LEA EAX,[EBP + 0x16]                ; 004d4dbb
    PUSH EAX                            ; 004d4dbe
    LEA ESI,[EBP + 0xffffff6a]          ; 004d4dbf
    LEA EDI,[EBP + 0xfffffeea]          ; 004d4dc5
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 004d4dcb
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    LEA ESI,[EBP + 0xffffff6a]          ; 004d4dd0
    MOVSD ES:EDI,ESI                    ; 004d4dd6
    MOVSD ES:EDI,ESI                    ; 004d4dd7
    MOVSD ES:EDI,ESI                    ; 004d4dd8
    MOVSD ES:EDI,ESI                    ; 004d4dd9
    ADD ESP,0x4                         ; 004d4dda
    FLD float ptr [EBX + 0x1fbdc]       ; 004d4ddd
    FLDZ                                ; 004d4de3
    FCOMPP                              ; 004d4de5
    FNSTSW AX                           ; 004d4de7
    SAHF                                ; 004d4de9
    JC 0x004d4f88                       ; 004d4dea
        ;   XREF to: 004d4f88 (CONDITIONAL_JUMP)  ; LAB_004d4f88
    FLD float ptr [EBP + 0x16]          ; 004d4df0
        ;   Label: LAB_004d4df0
    MOV EDX,0x3f490fdb                  ; 004d4df3
    MOV ECX,0xbfdf66f3                  ; 004d4df8
    MOV ESI,0x3fdf66f3                  ; 004d4dfd
    MOV dword ptr [EBP + 0x52],EDX      ; 004d4e02
    MOV dword ptr [EBP + 0x5e],ECX      ; 004d4e05
    MOV dword ptr [EBP + 0x56],ESI      ; 004d4e08
    FCOMP float ptr [0x0062af99]        ; 004d4e0b | FLOAT_0062af99
    FNSTSW AX                           ; 004d4e11
    SAHF                                ; 004d4e13
    JNC 0x004d4e1d                      ; 004d4e14
        ;   XREF to: 004d4e1d (CONDITIONAL_JUMP)  ; LAB_004d4e1d
    MOV dword ptr [EBP + 0x16],0xbf9c61aa ; 004d4e16
    FLD float ptr [EBP + 0x16]          ; 004d4e1d
        ;   Label: LAB_004d4e1d
    FCOMP float ptr [EBP + 0x52]        ; 004d4e20
    FNSTSW AX                           ; 004d4e23
    SAHF                                ; 004d4e25
    JBE 0x004d4e2e                      ; 004d4e26
        ;   XREF to: 004d4e2e (CONDITIONAL_JUMP)  ; LAB_004d4e2e
    MOV EAX,dword ptr [EBP + 0x52]      ; 004d4e28
    MOV dword ptr [EBP + 0x16],EAX      ; 004d4e2b
    FLD float ptr [EBP + 0x1a]          ; 004d4e2e
        ;   Label: LAB_004d4e2e
    FCOMP float ptr [EBP + 0x5e]        ; 004d4e31
    FNSTSW AX                           ; 004d4e34
    SAHF                                ; 004d4e36
    JNC 0x004d4e3f                      ; 004d4e37
        ;   XREF to: 004d4e3f (CONDITIONAL_JUMP)  ; LAB_004d4e3f
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004d4e39
    MOV dword ptr [EBP + 0x1a],EAX      ; 004d4e3c
    FLD float ptr [EBP + 0x1a]          ; 004d4e3f
        ;   Label: LAB_004d4e3f
    FCOMP float ptr [EBP + 0x56]        ; 004d4e42
    FNSTSW AX                           ; 004d4e45
    SAHF                                ; 004d4e47
    JBE 0x004d4e50                      ; 004d4e48
        ;   XREF to: 004d4e50 (CONDITIONAL_JUMP)  ; LAB_004d4e50
    MOV EAX,dword ptr [EBP + 0x56]      ; 004d4e4a
    MOV dword ptr [EBP + 0x1a],EAX      ; 004d4e4d
    PUSH 0x59ddb0                       ; 004d4e50
        ;   Label: LAB_004d4e50
    MOV EAX,[0x02d7b848]                ; 004d4e55 | INT_02d7b848
    FLD float ptr [EBX + 0x1fbe0]       ; 004d4e5a
    PUSH EAX                            ; 004d4e60
    FMUL float ptr [EBX + 0x1fc10]      ; 004d4e61
    SUB ESP,0x4                         ; 004d4e67
    LEA EAX,[EBP + 0x16]                ; 004d4e6a
    FSTP float ptr [ESP]                ; 004d4e6d
    PUSH EAX                            ; 004d4e70
    LEA ESI,[EBP + -0x36]               ; 004d4e71
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 004d4e74
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 004d4e79
    LEA EAX,[EBP + 0xfffffefa]          ; 004d4e7c
    LEA EDI,[EBP + 0xfffffefa]          ; 004d4e82
    PUSH EAX                            ; 004d4e88
    LEA EAX,[EBX + 0x158]               ; 004d4e89
    LEA ESI,[EBP + -0x36]               ; 004d4e8f
    PUSH EAX                            ; 004d4e92
    MOVSD ES:EDI,ESI                    ; 004d4e93
    MOVSD ES:EDI,ESI                    ; 004d4e94
    MOVSD ES:EDI,ESI                    ; 004d4e95
    MOVSD ES:EDI,ESI                    ; 004d4e96
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 ; 004d4e97
        ;   XREF to: 0059f750 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004d4e9c
    PUSH EBX                            ; 004d4e9f
    CALL core_gabriela.cpp_CGabriella_FUN_004d4c90 ; 004d4ea0
        ;   XREF to: 004d4c90 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_CGabriella_FUN_004d4c90(CGabriella * this_ptr)
    MOV dword ptr [EBP + 0x7a],EAX      ; 004d4ea5
    ADD ESP,0x4                         ; 004d4ea8
    FLD float ptr [EBP + 0x7a]          ; 004d4eab
    PUSH EBX                            ; 004d4eae
    FSTP float ptr [EBP + 0x42]         ; 004d4eaf
    CALL core_gabriela.cpp_CGabriella_FUN_004d4ce0 ; 004d4eb2
        ;   XREF to: 004d4ce0 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_CGabriella_FUN_004d4ce0(CGabriella * this_ptr)
    FLD float ptr [EBX + 0x1fbe8]       ; 004d4eb7
    MOV dword ptr [EBP + 0x7a],EAX      ; 004d4ebd
    FSUB float ptr [EBP + 0x42]         ; 004d4ec0
    FLD float ptr [EBP + 0x7a]          ; 004d4ec3
    FSUB float ptr [EBP + 0x42]         ; 004d4ec6
    FDIVP                               ; 004d4ec9
    FLD1                                ; 004d4ecb
    FSUBRP                              ; 004d4ecd
    FMUL double ptr [0x0062af9d]        ; 004d4ecf | DOUBLE_0062af9d
    ADD ESP,0x4                         ; 004d4ed5
    FST float ptr [0x02d7b844]          ; 004d4ed8 | FLOAT_02d7b844
    FLD1                                ; 004d4ede
    FCOMPP                              ; 004d4ee0
    FNSTSW AX                           ; 004d4ee2
    SAHF                                ; 004d4ee4
    JNC 0x004d4ef1                      ; 004d4ee5
        ;   XREF to: 004d4ef1 (CONDITIONAL_JUMP)  ; LAB_004d4ef1
    MOV dword ptr [0x02d7b844],0x3f800000 ; 004d4ee7 | FLOAT_02d7b844
    PUSH 0x4d2a30                       ; 004d4ef1
        ;   Label: LAB_004d4ef1
    MOV ECX,dword ptr [0x02d7b84c]      ; 004d4ef6 | INT_02d7b84c
    PUSH ECX                            ; 004d4efc
    PUSH dword ptr [EBX + 0x1fbe4]      ; 004d4efd
    LEA ESI,[EBP + -0x46]               ; 004d4f03
    PUSH dword ptr [EBX + 0x1fbe8]      ; 004d4f06
    LEA EDI,[EBP + 0xffffff3a]          ; 004d4f0c
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0 ; 004d4f12
        ;   XREF to: 005f79b0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleX_FUN_005f79b0(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 004d4f17
    LEA EAX,[EBP + 0xffffff3a]          ; 004d4f1a
    LEA ESI,[EBP + -0x46]               ; 004d4f20
    PUSH EAX                            ; 004d4f23
    MOVSD ES:EDI,ESI                    ; 004d4f24
    MOVSD ES:EDI,ESI                    ; 004d4f25
    MOVSD ES:EDI,ESI                    ; 004d4f26
    MOVSD ES:EDI,ESI                    ; 004d4f27
    PUSH 0x3fc90fdb                     ; 004d4f28
    LEA ESI,[EBP + 0xffffff5a]          ; 004d4f2d
    LEA EDI,[EBP + 0xffffff2a]          ; 004d4f33
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 004d4f39
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[EBP + 0xffffff5a]          ; 004d4f3e
    LEA EAX,[EBP + 0xffffff2a]          ; 004d4f44
    ADD ESP,0x4                         ; 004d4f4a
    MOVSD ES:EDI,ESI                    ; 004d4f4d
    MOVSD ES:EDI,ESI                    ; 004d4f4e
    MOVSD ES:EDI,ESI                    ; 004d4f4f
    MOVSD ES:EDI,ESI                    ; 004d4f50
    PUSH EAX                            ; 004d4f51
    LEA ESI,[EBP + -0x6]                ; 004d4f52
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 004d4f55
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    ADD ESP,0x8                         ; 004d4f5a
    LEA EAX,[EBP + 0xffffff4a]          ; 004d4f5d
    ADD EBX,0x158                       ; 004d4f63
    PUSH EAX                            ; 004d4f69
    LEA EDI,[EBP + 0xffffff4a]          ; 004d4f6a
    LEA ESI,[EBP + -0x6]                ; 004d4f70
    PUSH EBX                            ; 004d4f73
    MOVSD ES:EDI,ESI                    ; 004d4f74
    MOVSD ES:EDI,ESI                    ; 004d4f75
    MOVSD ES:EDI,ESI                    ; 004d4f76
    MOVSD ES:EDI,ESI                    ; 004d4f77
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 ; 004d4f78
        ;   XREF to: 0059f750 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004d4f7d
    LEA ESP,[EBP + 0x7e]                ; 004d4f80
    POP EBP                             ; 004d4f83
    POP EDI                             ; 004d4f84
    POP ESI                             ; 004d4f85
    POP EBX                             ; 004d4f86
    RET                                 ; 004d4f87
    FLD float ptr [EBX + 0x1fbdc]       ; 004d4f88
        ;   Label: LAB_004d4f88
    FDIV float ptr [0x0065e7b0]         ; 004d4f8e | FLOAT_0065e7b0
    FST float ptr [EBP + 0x66]          ; 004d4f94
    FLD1                                ; 004d4f97
    FCOMPP                              ; 004d4f99
    FNSTSW AX                           ; 004d4f9b
    SAHF                                ; 004d4f9d
    JNC 0x004d4fa7                      ; 004d4f9e
        ;   XREF to: 004d4fa7 (CONDITIONAL_JUMP)  ; LAB_004d4fa7
    MOV dword ptr [EBP + 0x66],0x3f800000 ; 004d4fa0
    FLD float ptr [EBX + 0x1fbdc]       ; 004d4fa7
        ;   Label: LAB_004d4fa7
    FCOMP float ptr [0x0065e7b8]        ; 004d4fad | FLOAT_0065e7b8
    FNSTSW AX                           ; 004d4fb3
    SAHF                                ; 004d4fb5
    JBE 0x004d4fe2                      ; 004d4fb6
        ;   XREF to: 004d4fe2 (CONDITIONAL_JUMP)  ; LAB_004d4fe2
    FLD float ptr [0x0065e7b8]          ; 004d4fb8 | FLOAT_0065e7b8
    FLD float ptr [EBX + 0x1fbdc]       ; 004d4fbe
    FSUB ST0,ST1                        ; 004d4fc4
    FLD1                                ; 004d4fc6
    FSUBRP ST2,ST0                      ; 004d4fc8
    FDIVRP                              ; 004d4fca
    FLD float ptr [EBX + 0x1fc10]       ; 004d4fcc
    FLD1                                ; 004d4fd2
    FSUBRP                              ; 004d4fd4
    FMULP                               ; 004d4fd6
    FLD1                                ; 004d4fd8
    FSUBRP                              ; 004d4fda
    FMUL float ptr [EBP + 0x66]         ; 004d4fdc
    FSTP float ptr [EBP + 0x66]         ; 004d4fdf
    LEA EAX,[EBX + 0x1f738]             ; 004d4fe2
        ;   Label: LAB_004d4fe2
    PUSH 0x62af71                       ; 004d4fe8 | = "CGun"
    MOV EAX,dword ptr [EAX + 0x330]     ; 004d4fed
    PUSH EAX                            ; 004d4ff3
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004d4ff4
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004d4ff9
    TEST EAX,EAX                        ; 004d4ffc
    JZ 0x004d5288                       ; 004d4ffe
        ;   XREF to: 004d5288 (CONDITIONAL_JUMP)  ; LAB_004d5288
    FLD float ptr [EBX + 0x1fbdc]       ; 004d5004
    FDIV float ptr [0x0065e7b4]         ; 004d500a | FLOAT_0065e7b4
    MOV ESI,dword ptr [0x02d7b860]      ; 004d5010 | INT_02d7b860
    LEA EAX,[EBX + 0x808]               ; 004d5016
    SHL ESI,0x4                         ; 004d501c
    SUB ESP,0x4                         ; 004d501f
    ADD ESI,EAX                         ; 004d5022
    FSTP float ptr [ESP]                ; 004d5024
    PUSH ESI                            ; 004d5027
    MOV ESI,dword ptr [0x02d7b88c]      ; 004d5028 | INT_02d7b88c
    SHL ESI,0x4                         ; 004d502e
    ADD EAX,ESI                         ; 004d5031
    PUSH EAX                            ; 004d5033
    LEA ESI,[EBP + 0xfffffeca]          ; 004d5034
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 004d503a
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    MOV EAX,[0x02d7b88c]                ; 004d503f | INT_02d7b88c
    SHL EAX,0x4                         ; 004d5044
    LEA ESI,[EBP + 0xfffffeca]          ; 004d5047
    LEA EDI,[EBX + EAX*0x1 + 0x808]     ; 004d504d
    FLD float ptr [EBP + 0x66]          ; 004d5054
    ADD ESP,0xc                         ; 004d5057
    MOVSD ES:EDI,ESI                    ; 004d505a
    MOVSD ES:EDI,ESI                    ; 004d505b
    MOVSD ES:EDI,ESI                    ; 004d505c
    MOVSD ES:EDI,ESI                    ; 004d505d
    FCOMP double ptr [0x0062af7d]       ; 004d505e | DOUBLE_0062af7d
    FNSTSW AX                           ; 004d5064
    SAHF                                ; 004d5066
    JBE 0x004d519f                      ; 004d5067
        ;   XREF to: 004d519f (CONDITIONAL_JUMP)  ; LAB_004d519f
    MOV EAX,dword ptr [EBX + 0x1fbdc]   ; 004d506d
    MOV dword ptr [EBP + 0x6e],EAX      ; 004d5073
    FLD float ptr [EBP + 0x6e]          ; 004d5076
    FCOMP float ptr [0x0065e7b8]        ; 004d5079 | FLOAT_0065e7b8
    FNSTSW AX                           ; 004d507f
    SAHF                                ; 004d5081
    JBE 0x004d508c                      ; 004d5082
        ;   XREF to: 004d508c (CONDITIONAL_JUMP)  ; LAB_004d508c
    MOV EAX,[0x0065e7b8]                ; 004d5084 | FLOAT_0065e7b8
    MOV dword ptr [EBP + 0x6e],EAX      ; 004d5089
    FLD float ptr [0x0065e7b0]          ; 004d508c | FLOAT_0065e7b0
        ;   Label: LAB_004d508c
    FLD float ptr [EBP + 0x6e]          ; 004d5092
    FSUB ST0,ST1                        ; 004d5095
    FLD1                                ; 004d5097
    FSUBRP ST2,ST0                      ; 004d5099
    FDIVRP                              ; 004d509b
    FST float ptr [EBP + 0x6e]          ; 004d509d
    FLDZ                                ; 004d50a0
    FCOMPP                              ; 004d50a2
    FNSTSW AX                           ; 004d50a4
    SAHF                                ; 004d50a6
    JBE 0x004d50ae                      ; 004d50a7
        ;   XREF to: 004d50ae (CONDITIONAL_JUMP)  ; LAB_004d50ae
    XOR EDX,EDX                         ; 004d50a9
    MOV dword ptr [EBP + 0x6e],EDX      ; 004d50ab
    FLD float ptr [EBP + 0x6e]          ; 004d50ae
        ;   Label: LAB_004d50ae
    FLD1                                ; 004d50b1
    FCOMPP                              ; 004d50b3
    FNSTSW AX                           ; 004d50b5
    SAHF                                ; 004d50b7
    JNC 0x004d50c1                      ; 004d50b8
        ;   XREF to: 004d50c1 (CONDITIONAL_JUMP)  ; LAB_004d50c1
    MOV dword ptr [EBP + 0x6e],0x3f800000 ; 004d50ba
    MOV ESI,dword ptr [0x02d7b87c]      ; 004d50c1 | INT_02d7b87c
        ;   Label: LAB_004d50c1
    PUSH dword ptr [EBP + 0x6e]         ; 004d50c7
    PUSH ESI                            ; 004d50ca
    LEA ESI,[EBX + 0x158]               ; 004d50cb
    PUSH ESI                            ; 004d50d1
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0 ; 004d50d2
        ;   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0(CMotionController * this_ptr, int motion_index, float marker_position)
    ADD ESP,0xc                         ; 004d50d7
    PUSH 0x59ddb0                       ; 004d50da
    MOV EDI,dword ptr [0x02d7b858]      ; 004d50df | INT_02d7b858
    MOV dword ptr [EBP + 0x7a],EAX      ; 004d50e5
    PUSH EDI                            ; 004d50e8
    FLD float ptr [EBP + 0x7a]          ; 004d50e9
    MOV EAX,[0x02d7b87c]                ; 004d50ec | INT_02d7b87c
    PUSH dword ptr [EBP + 0x66]         ; 004d50f1
    FSTP float ptr [EBP + 0x4a]         ; 004d50f4
    PUSH dword ptr [EBP + 0x4a]         ; 004d50f7
    PUSH EAX                            ; 004d50fa
    PUSH ESI                            ; 004d50fb
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 004d50fc
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    FLD float ptr [EBX + 0x1fbdc]       ; 004d5101
    ADD ESP,0x18                        ; 004d5107
    FCOMP float ptr [0x0065e7b8]        ; 004d510a | FLOAT_0065e7b8
    FNSTSW AX                           ; 004d5110
    SAHF                                ; 004d5112
    JC 0x004d519f                       ; 004d5113
        ;   XREF to: 004d519f (CONDITIONAL_JUMP)  ; LAB_004d519f
    FLD float ptr [0x0065e7b8]          ; 004d5119 | FLOAT_0065e7b8
    FLD float ptr [EBX + 0x1fbdc]       ; 004d511f
    FSUB ST0,ST1                        ; 004d5125
    FLD1                                ; 004d5127
    FSUBRP ST2,ST0                      ; 004d5129
    FDIVRP                              ; 004d512b
    FMUL float ptr [EBX + 0x1fc10]      ; 004d512d
    FST float ptr [EBP + 0x4e]          ; 004d5133
    FCOMP double ptr [0x0062af7d]       ; 004d5136 | DOUBLE_0062af7d
    FNSTSW AX                           ; 004d513c
    SAHF                                ; 004d513e
    JBE 0x004d519f                      ; 004d513f
        ;   XREF to: 004d519f (CONDITIONAL_JUMP)  ; LAB_004d519f
    MOV AH,byte ptr [0x02d7b804]        ; 004d5141 | DAT_02d7b804
    TEST AH,0x1                         ; 004d5147
    JZ 0x004d5219                       ; 004d514a
        ;   XREF to: 004d5219 (CONDITIONAL_JUMP)  ; LAB_004d5219
    LEA EAX,[EBP + 0xfffffeea]          ; 004d5150
        ;   Label: LAB_004d5150
    PUSH EAX                            ; 004d5156
    PUSH 0x2d7b7f4                      ; 004d5157 | CQuaternion4f_02d7b7f4
    LEA ESI,[EBP + 0xfffffeba]          ; 004d515c
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 004d5162
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    ADD ESP,0x8                         ; 004d5167
    PUSH 0x4d29f0                       ; 004d516a
    MOV EDX,dword ptr [0x02d7b858]      ; 004d516f | INT_02d7b858
    PUSH EDX                            ; 004d5175
    LEA EAX,[EBP + 0xffffff7a]          ; 004d5176
    PUSH dword ptr [EBP + 0x4e]         ; 004d517c
    LEA EDI,[EBP + 0xffffff7a]          ; 004d517f
    PUSH EAX                            ; 004d5185
    LEA EAX,[EBX + 0x158]               ; 004d5186
    LEA ESI,[EBP + 0xfffffeba]          ; 004d518c
    PUSH EAX                            ; 004d5192
    MOVSD ES:EDI,ESI                    ; 004d5193
    MOVSD ES:EDI,ESI                    ; 004d5194
    MOVSD ES:EDI,ESI                    ; 004d5195
    MOVSD ES:EDI,ESI                    ; 004d5196
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 ; 004d5197
        ;   XREF to: 0059f750 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004d519c
    FLD float ptr [EBX + 0x1fc0c]       ; 004d519f
        ;   Label: LAB_004d519f
    FLDZ                                ; 004d51a5
    FCOMPP                              ; 004d51a7
    FNSTSW AX                           ; 004d51a9
    SAHF                                ; 004d51ab
    JNC 0x004d4df0                      ; 004d51ac
        ;   XREF to: 004d4df0 (CONDITIONAL_JUMP)  ; LAB_004d4df0
    FLD float ptr [EBX + 0x1fc0c]       ; 004d51b2
    FMUL double ptr [0x0062af85]        ; 004d51b8 | DOUBLE_0062af85
    SUB ESP,0x4                         ; 004d51be
    MOV dword ptr [EBX + 0x23a8],0x2    ; 004d51c1
    FLD1                                ; 004d51cb
    FSUBRP                              ; 004d51cd
    MOV ECX,dword ptr [0x02d7b884]      ; 004d51cf | INT_02d7b884
    FSTP float ptr [ESP]                ; 004d51d5
    PUSH ECX                            ; 004d51d8
    LEA ESI,[EBX + 0x158]               ; 004d51d9
    PUSH ESI                            ; 004d51df
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0 ; 004d51e0
        ;   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0(CMotionController * this_ptr, int motion_index, float marker_position)
    MOV EDI,dword ptr [0x02d7b860]      ; 004d51e5 | INT_02d7b860
    MOV dword ptr [EBP + 0x7a],EAX      ; 004d51eb
    ADD ESP,0xc                         ; 004d51ee
    FLD float ptr [EBP + 0x7a]          ; 004d51f1
    MOV EAX,[0x02d7b884]                ; 004d51f4 | INT_02d7b884
    PUSH EDI                            ; 004d51f9
    FSTP float ptr [EBP + 0x76]         ; 004d51fa
    PUSH dword ptr [EBP + 0x76]         ; 004d51fd
    PUSH EAX                            ; 004d5200
    PUSH ESI                            ; 004d5201
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0 ; 004d5202
        ;   XREF to: 0059e0a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0(CDeformableModelInstance * this_ptr, int motion_index, float frame_number, int bone_index)
    ADD ESP,0x10                        ; 004d5207
    MOV dword ptr [EBX + 0x23a8],0x0    ; 004d520a
    JMP 0x004d4df0                      ; 004d5214
        ;   XREF to: 004d4df0 (UNCONDITIONAL_JUMP)  ; LAB_004d4df0
    PUSH 0xbfc90fdb                     ; 004d5219
        ;   Label: LAB_004d5219
    MOV DL,AH                           ; 004d521e
    LEA ESI,[EBP + -0x56]               ; 004d5220
    OR DL,0x1                           ; 004d5223
    LEA EDI,[EBP + -0x16]               ; 004d5226
    MOV byte ptr [0x02d7b804],DL        ; 004d5229 | DAT_02d7b804
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30 ; 004d522f
        ;   XREF to: 005f7a30 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30(float angle_radians, CQuaternion4f * quat_out)
    ADD ESP,0x4                         ; 004d5234
    LEA EAX,[EBP + -0x16]               ; 004d5237
    LEA ESI,[EBP + -0x56]               ; 004d523a
    PUSH EAX                            ; 004d523d
    MOVSD ES:EDI,ESI                    ; 004d523e
    MOVSD ES:EDI,ESI                    ; 004d523f
    MOVSD ES:EDI,ESI                    ; 004d5240
    MOVSD ES:EDI,ESI                    ; 004d5241
    PUSH 0xbfc90fdb                     ; 004d5242
    LEA ESI,[EBP + 0xfffffe9a]          ; 004d5247
    LEA EDI,[EBP + -0x26]               ; 004d524d
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0 ; 004d5250
        ;   XREF to: 005f79f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_005f79f0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[EBP + 0xfffffe9a]          ; 004d5255
    LEA EAX,[EBP + -0x26]               ; 004d525b
    ADD ESP,0x4                         ; 004d525e
    MOVSD ES:EDI,ESI                    ; 004d5261
    MOVSD ES:EDI,ESI                    ; 004d5262
    MOVSD ES:EDI,ESI                    ; 004d5263
    MOVSD ES:EDI,ESI                    ; 004d5264
    PUSH EAX                            ; 004d5265
    LEA ESI,[EBP + 0xfffffeaa]          ; 004d5266
    MOV EDI,0x2d7b7f4                   ; 004d526c | CQuaternion4f_02d7b7f4
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 004d5271
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[EBP + 0xfffffeaa]          ; 004d5276
    ADD ESP,0x8                         ; 004d527c
    MOVSD ES:EDI,ESI                    ; 004d527f | CQuaternion4f_02d7b7f4
    MOVSD ES:EDI,ESI                    ; 004d5280 | DAT_02d7b7f8
    MOVSD ES:EDI,ESI                    ; 004d5281 | DAT_02d7b7fc
    MOVSD ES:EDI,ESI                    ; 004d5282 | DAT_02d7b800
    JMP 0x004d5150                      ; 004d5283
        ;   XREF to: 004d5150 (UNCONDITIONAL_JUMP)  ; LAB_004d5150
    FLD float ptr [EBP + 0x66]          ; 004d5288
        ;   Label: LAB_004d5288
    FCOMP double ptr [0x0062af7d]       ; 004d528b | DOUBLE_0062af7d
    FNSTSW AX                           ; 004d5291
    SAHF                                ; 004d5293
    JBE 0x004d548b                      ; 004d5294
        ;   XREF to: 004d548b (CONDITIONAL_JUMP)  ; LAB_004d548b
    MOV EAX,dword ptr [EBX + 0x1fbdc]   ; 004d529a
    MOV dword ptr [EBP + 0x6a],EAX      ; 004d52a0
    FLD float ptr [EBP + 0x6a]          ; 004d52a3
    FCOMP float ptr [0x0065e7b8]        ; 004d52a6 | FLOAT_0065e7b8
    FNSTSW AX                           ; 004d52ac
    SAHF                                ; 004d52ae
    JBE 0x004d52b9                      ; 004d52af
        ;   XREF to: 004d52b9 (CONDITIONAL_JUMP)  ; LAB_004d52b9
    MOV EAX,[0x0065e7b8]                ; 004d52b1 | FLOAT_0065e7b8
    MOV dword ptr [EBP + 0x6a],EAX      ; 004d52b6
    FLD float ptr [0x0065e7b0]          ; 004d52b9 | FLOAT_0065e7b0
        ;   Label: LAB_004d52b9
    FLD float ptr [EBP + 0x6a]          ; 004d52bf
    FSUB ST0,ST1                        ; 004d52c2
    FLD1                                ; 004d52c4
    FSUBRP ST2,ST0                      ; 004d52c6
    FDIVRP                              ; 004d52c8
    FST float ptr [EBP + 0x6a]          ; 004d52ca
    FLDZ                                ; 004d52cd
    FCOMPP                              ; 004d52cf
    FNSTSW AX                           ; 004d52d1
    SAHF                                ; 004d52d3
    JBE 0x004d52db                      ; 004d52d4
        ;   XREF to: 004d52db (CONDITIONAL_JUMP)  ; LAB_004d52db
    XOR ESI,ESI                         ; 004d52d6
    MOV dword ptr [EBP + 0x6a],ESI      ; 004d52d8
    FLD float ptr [EBP + 0x6a]          ; 004d52db
        ;   Label: LAB_004d52db
    FLD1                                ; 004d52de
    FCOMPP                              ; 004d52e0
    FNSTSW AX                           ; 004d52e2
    SAHF                                ; 004d52e4
    JNC 0x004d52ee                      ; 004d52e5
        ;   XREF to: 004d52ee (CONDITIONAL_JUMP)  ; LAB_004d52ee
    MOV dword ptr [EBP + 0x6a],0x3f800000 ; 004d52e7
    MOV EAX,[0x02d7b87c]                ; 004d52ee | INT_02d7b87c
        ;   Label: LAB_004d52ee
    PUSH dword ptr [EBP + 0x6a]         ; 004d52f3
    PUSH EAX                            ; 004d52f6
    LEA ESI,[EBX + 0x158]               ; 004d52f7
    PUSH ESI                            ; 004d52fd
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0 ; 004d52fe
        ;   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0(CMotionController * this_ptr, int motion_index, float marker_position)
    ADD ESP,0xc                         ; 004d5303
    MOV EDX,dword ptr [0x02d7b858]      ; 004d5306 | INT_02d7b858
    PUSH 0x59ddb0                       ; 004d530c
    MOV ECX,dword ptr [0x02d7b87c]      ; 004d5311 | INT_02d7b87c
    MOV dword ptr [EBP + 0x7a],EAX      ; 004d5317
    PUSH EDX                            ; 004d531a
    FLD float ptr [EBP + 0x7a]          ; 004d531b
    PUSH dword ptr [EBP + 0x66]         ; 004d531e
    FSTP float ptr [EBP + 0x3e]         ; 004d5321
    PUSH dword ptr [EBP + 0x3e]         ; 004d5324
    PUSH ECX                            ; 004d5327
    PUSH ESI                            ; 004d5328
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 004d5329
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    FLD float ptr [EBX + 0x1fbdc]       ; 004d532e
    ADD ESP,0x18                        ; 004d5334
    FCOMP float ptr [0x0065e7b8]        ; 004d5337 | FLOAT_0065e7b8
    FNSTSW AX                           ; 004d533d
    SAHF                                ; 004d533f
    JC 0x004d548b                       ; 004d5340
        ;   XREF to: 004d548b (CONDITIONAL_JUMP)  ; LAB_004d548b
    FLD float ptr [0x0065e7b8]          ; 004d5346 | FLOAT_0065e7b8
    FLD float ptr [EBX + 0x1fbdc]       ; 004d534c
    FSUB ST0,ST1                        ; 004d5352
    FLD1                                ; 004d5354
    FSUBRP ST2,ST0                      ; 004d5356
    FDIVRP                              ; 004d5358
    FMUL float ptr [EBX + 0x1fc10]      ; 004d535a
    FST float ptr [EBP + 0x62]          ; 004d5360
    FCOMP float ptr [EBX + 0x1fc0c]     ; 004d5363
    FNSTSW AX                           ; 004d5369
    SAHF                                ; 004d536b
    JNC 0x004d5377                      ; 004d536c
        ;   XREF to: 004d5377 (CONDITIONAL_JUMP)  ; LAB_004d5377
    MOV EAX,dword ptr [EBX + 0x1fc0c]   ; 004d536e
    MOV dword ptr [EBP + 0x62],EAX      ; 004d5374
    FLD float ptr [EBP + 0x62]          ; 004d5377
        ;   Label: LAB_004d5377
    FCOMP double ptr [0x0062af7d]       ; 004d537a | DOUBLE_0062af7d
    FNSTSW AX                           ; 004d5380
    SAHF                                ; 004d5382
    JBE 0x004d548b                      ; 004d5383
        ;   XREF to: 004d548b (CONDITIONAL_JUMP)  ; LAB_004d548b
    FLDZ                                ; 004d5389
    FLD float ptr [EBX + 0x1fc0c]       ; 004d538b
    XOR ESI,ESI                         ; 004d5391
    FSTP double ptr [EBP + 0x36]        ; 004d5393
    MOV dword ptr [EBP + 0x5a],ESI      ; 004d5396
    FCOMP double ptr [EBP + 0x36]       ; 004d5399
    FNSTSW AX                           ; 004d539c
    SAHF                                ; 004d539e
    JNC 0x004d53a9                      ; 004d539f
        ;   XREF to: 004d53a9 (CONDITIONAL_JUMP)  ; LAB_004d53a9
    FLD1                                ; 004d53a1
    FSUB double ptr [EBP + 0x36]        ; 004d53a3
    FSTP float ptr [EBP + 0x5a]         ; 004d53a6
    PUSH 0x59ddb0                       ; 004d53a9
        ;   Label: LAB_004d53a9
    MOV EDI,dword ptr [0x02d7b890]      ; 004d53ae | INT_02d7b890
    FLD float ptr [EBP + 0x62]          ; 004d53b4
    PUSH EDI                            ; 004d53b7
    FMUL double ptr [0x0062af85]        ; 004d53b8 | DOUBLE_0062af85
    SUB ESP,0x4                         ; 004d53be
    FSTP float ptr [ESP]                ; 004d53c1
    MOV EAX,[0x02d7b880]                ; 004d53c4 | INT_02d7b880
    PUSH dword ptr [EBP + 0x5a]         ; 004d53c9
    PUSH EAX                            ; 004d53cc
    LEA EAX,[EBX + 0x158]               ; 004d53cd
    PUSH EAX                            ; 004d53d3
    MOV dword ptr [EBP + 0x7a],EAX      ; 004d53d4
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 004d53d7
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    FLD float ptr [0x0062af8d]          ; 004d53dc | FLOAT_0062af8d
    FLD float ptr [0x02d7b838]          ; 004d53e2 | FLOAT_02d7b838
    FMUL ST1                            ; 004d53e8
    FST float ptr [EBP + 0xa]           ; 004d53ea
    FDIV float ptr [0x0062af91]         ; 004d53ed | FLOAT_0062af91
    FLD float ptr [0x02d7b83c]          ; 004d53f3 | FLOAT_02d7b83c
    FMUL ST2                            ; 004d53f9
    FLD float ptr [0x02d7b840]          ; 004d53fb | FLOAT_02d7b840
    FMULP ST3                           ; 004d5401
    FST float ptr [EBP + 0xe]           ; 004d5403
    FLD float ptr [0x0062af95]          ; 004d5406 | FLOAT_0062af95
    FXCH                                ; 004d540c
    FMUL ST1                            ; 004d540e
    FXCH ST3                            ; 004d5410
    FST float ptr [EBP + 0x12]          ; 004d5412
    FMULP                               ; 004d5415
    ADD ESP,0x18                        ; 004d5417
    LEA EAX,[EBP + 0xfffffeea]          ; 004d541a
    LEA ESI,[EBP + 0xffffff0a]          ; 004d5420
    PUSH EAX                            ; 004d5426
    LEA EAX,[EBP + 0x22]                ; 004d5427
    LEA EDI,[EBP + 0xffffff1a]          ; 004d542a
    PUSH EAX                            ; 004d5430
    FXCH ST2                            ; 004d5431
    FSTP float ptr [EBP + 0x26]         ; 004d5433
    FXCH                                ; 004d5436
    FSTP float ptr [EBP + 0x2a]         ; 004d5438
    FSTP float ptr [EBP + 0x22]         ; 004d543b
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 004d543e
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    LEA ESI,[EBP + 0xffffff0a]          ; 004d5443
    LEA EAX,[EBP + 0xffffff1a]          ; 004d5449
    ADD ESP,0x4                         ; 004d544f
    MOVSD ES:EDI,ESI                    ; 004d5452
    MOVSD ES:EDI,ESI                    ; 004d5453
    MOVSD ES:EDI,ESI                    ; 004d5454
    MOVSD ES:EDI,ESI                    ; 004d5455
    PUSH EAX                            ; 004d5456
    LEA ESI,[EBP + -0x66]               ; 004d5457
    CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640 ; 004d545a
        ;   XREF to: 005f7640 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    ADD ESP,0x8                         ; 004d545f
    PUSH 0x4d2a80                       ; 004d5462
    MOV ECX,dword ptr [0x02d7b894]      ; 004d5467 | INT_02d7b894
    LEA EDI,[EBP + -0x76]               ; 004d546d
    PUSH ECX                            ; 004d5470
    LEA ESI,[EBP + -0x66]               ; 004d5471
    LEA EAX,[EBP + -0x76]               ; 004d5474
    PUSH dword ptr [EBP + 0x62]         ; 004d5477
    MOVSD ES:EDI,ESI                    ; 004d547a
    MOVSD ES:EDI,ESI                    ; 004d547b
    MOVSD ES:EDI,ESI                    ; 004d547c
    MOVSD ES:EDI,ESI                    ; 004d547d
    PUSH EAX                            ; 004d547e
    MOV ESI,dword ptr [EBP + 0x7a]      ; 004d547f
    PUSH ESI                            ; 004d5482
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 ; 004d5483
        ;   XREF to: 0059ff20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004d5488
    FLD float ptr [EBX + 0x1fbdc]       ; 004d548b
        ;   Label: LAB_004d548b
    FDIV float ptr [0x0065e7b4]         ; 004d5491 | FLOAT_0065e7b4
    MOV ESI,dword ptr [0x02d7b860]      ; 004d5497 | INT_02d7b860
    LEA EAX,[EBX + 0x808]               ; 004d549d
    SHL ESI,0x4                         ; 004d54a3
    SUB ESP,0x4                         ; 004d54a6
    ADD ESI,EAX                         ; 004d54a9
    FSTP float ptr [ESP]                ; 004d54ab
    PUSH ESI                            ; 004d54ae
    MOV ESI,dword ptr [0x02d7b88c]      ; 004d54af | INT_02d7b88c
    SHL ESI,0x4                         ; 004d54b5
    ADD EAX,ESI                         ; 004d54b8
    PUSH EAX                            ; 004d54ba
    LEA ESI,[EBP + 0xfffffeda]          ; 004d54bb
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 004d54c1
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    MOV ESI,dword ptr [0x02d7b88c]      ; 004d54c6 | INT_02d7b88c
    SHL ESI,0x4                         ; 004d54cc
    LEA EDI,[ESI + EBX*0x1 + 0x808]     ; 004d54cf
    LEA ESI,[EBP + 0xfffffeda]          ; 004d54d6
    MOVSD ES:EDI,ESI                    ; 004d54dc
    MOVSD ES:EDI,ESI                    ; 004d54dd
    MOVSD ES:EDI,ESI                    ; 004d54de
    MOVSD ES:EDI,ESI                    ; 004d54df
    ADD ESP,0xc                         ; 004d54e0
    FLD float ptr [EBX + 0x1fc0c]       ; 004d54e3
    FLDZ                                ; 004d54e9
    FCOMPP                              ; 004d54eb
    FNSTSW AX                           ; 004d54ed
    SAHF                                ; 004d54ef
    JNC 0x004d4df0                      ; 004d54f0
        ;   XREF to: 004d4df0 (CONDITIONAL_JUMP)  ; LAB_004d4df0
    MOV EDI,dword ptr [0x02d7b880]      ; 004d54f6 | INT_02d7b880
    PUSH dword ptr [EBX + 0x1fc0c]      ; 004d54fc
    PUSH EDI                            ; 004d5502
    LEA ESI,[EBX + 0x158]               ; 004d5503
    PUSH ESI                            ; 004d5509
    MOV dword ptr [EBX + 0x23a8],0x2    ; 004d550a
    CALL core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0 ; 004d5514
        ;   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0(CMotionController * this_ptr, int motion_index, float marker_position)
    MOV dword ptr [EBP + 0x7a],EAX      ; 004d5519
    ADD ESP,0xc                         ; 004d551c
    FLD float ptr [EBP + 0x7a]          ; 004d551f
    PUSH 0x0                            ; 004d5522
    MOV EAX,[0x02d7b880]                ; 004d5524 | INT_02d7b880
    FSTP float ptr [EBP + 0x72]         ; 004d5529
    PUSH dword ptr [EBP + 0x72]         ; 004d552c
    PUSH EAX                            ; 004d552f
    PUSH ESI                            ; 004d5530
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0 ; 004d5531
        ;   XREF to: 0059e0a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0(CDeformableModelInstance * this_ptr, int motion_index, float frame_number, int bone_index)
    ADD ESP,0x10                        ; 004d5536
    MOV dword ptr [EBX + 0x23a8],0x0    ; 004d5539
    JMP 0x004d4df0                      ; 004d5543
        ;   XREF to: 004d4df0 (UNCONDITIONAL_JUMP)  ; LAB_004d4df0

