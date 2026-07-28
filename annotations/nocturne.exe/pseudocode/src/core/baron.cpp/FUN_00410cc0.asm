; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_baron_cpp_FUN_00410cc0(CDemonActor *param_1)
;
; Local Variables:
; undefined8       Stack[-0x150]:8  local_150
; undefined        Stack[-0x148]:1  local_148
; undefined        Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_baron.cpp_CBaron_advanceMotion_FUN_00411010 at 00411046
;
; Referenced Globals:
;   TerminatedCString s_baron_attack_wav_00578670
;   double DOUBLE_00578688 = -0.785398163375000
;   double DOUBLE_00578690 = 0.785398163375000
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;   undefined4 DAT_005b80f0
;   undefined4 DAT_0076431c
;   undefined4 DAT_00764320
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_FUN_004286d0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_fire.cpp_CFireEffect_createCrater_FUN_0048c370
;   core_fire.cpp_CFireEffect_createLightningBolt_FUN_0048c420
;   core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0
;   core_hero.cpp_CHero_closestEnemy_FUN_004b5d00
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;   crt_memory.c___arrinit_FUN_005644a7
;   crt_stdlib.c_rand_FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410cc0
        ;   Label: core_baron.cpp_FUN_00410cc0
    PUSH ESI                            ; 00410cc1
    PUSH EDI                            ; 00410cc2
    PUSH EBP                            ; 00410cc3
    MOV EBP,ESP                         ; 00410cc4
    SUB ESP,0x140                       ; 00410cc6
    AND ESP,0xfffffff8                  ; 00410ccc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00410ccf
    LEA EAX,[ESP + 0x134]               ; 00410cd2
    PUSH EAX                            ; 00410cd9
    PUSH EBX                            ; 00410cda
    CALL core_hero.cpp_CHero_closestEnemy_FUN_004b5d00 ; 00410cdb
        ;   XREF to: 004b5d00 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_closestEnemy_FUN_004b5d00()
    ADD ESP,0x8                         ; 00410ce0
    MOV ESI,EAX                         ; 00410ce3
    TEST EAX,EAX                        ; 00410ce5
    JNZ 0x00410cf0                      ; 00410ce7
        ;   XREF to: 00410cf0 (CONDITIONAL_JUMP)  ; LAB_00410cf0
    MOV ESP,EBP                         ; 00410ce9
    POP EBP                             ; 00410ceb
    POP EDI                             ; 00410cec
    POP ESI                             ; 00410ced
    POP EBX                             ; 00410cee
    RET                                 ; 00410cef
    ADD EAX,0x20                        ; 00410cf0
        ;   Label: LAB_00410cf0
    PUSH EAX                            ; 00410cf3
    LEA EAX,[ESP + 0x114]               ; 00410cf4
    PUSH EAX                            ; 00410cfb
    PUSH EBX                            ; 00410cfc
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00410cfd
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00410d02
    LEA EAX,[ESP + 0x110]               ; 00410d05
    PUSH EAX                            ; 00410d0c
    LEA EAX,[ESP + 0xd8]                ; 00410d0d
    PUSH EAX                            ; 00410d14
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00410d15
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    MOV EDX,EAX                         ; 00410d1a
    LEA EAX,[ESP + 0x118]               ; 00410d1c
    ADD ESP,0x8                         ; 00410d23
    CMP EAX,EDX                         ; 00410d26
    JZ 0x00410d47                       ; 00410d28
        ;   XREF to: 00410d47 (CONDITIONAL_JUMP)  ; LAB_00410d47
    MOV EAX,dword ptr [EDX]             ; 00410d2a
    MOV dword ptr [ESP + 0x110],EAX     ; 00410d2c
    MOV EAX,dword ptr [EDX + 0x4]       ; 00410d33
    MOV dword ptr [ESP + 0x114],EAX     ; 00410d36
    MOV EAX,dword ptr [EDX + 0x8]       ; 00410d3d
    MOV dword ptr [ESP + 0x118],EAX     ; 00410d40
    PUSH dword ptr [ESP + 0x114]        ; 00410d47
        ;   Label: LAB_00410d47
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00410d4e
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x140],EAX     ; 00410d53
    FLD float ptr [ESP + 0x140]         ; 00410d5a
    ADD ESP,0x4                         ; 00410d61
    FST float ptr [ESP + 0x114]         ; 00410d64
    FST double ptr [ESP]                ; 00410d6b
    FCOMP double ptr [0x00578688]       ; 00410d6e | DOUBLE_00578688
    FNSTSW AX                           ; 00410d74
    SAHF                                ; 00410d76
    JNC 0x00410e22                      ; 00410d77
        ;   XREF to: 00410e22 (CONDITIONAL_JUMP)  ; LAB_00410e22
    PUSH 0x0                            ; 00410d7d
        ;   Label: LAB_00410d7d
    PUSH 0x1                            ; 00410d7f
    LEA EDI,[ESI + 0x20]                ; 00410d81
    PUSH 0x41800000                     ; 00410d84
    PUSH EDI                            ; 00410d89
    MOV EDX,dword ptr [0x005b80f0]      ; 00410d8a | DAT_005b80f0
    PUSH EDX                            ; 00410d90
    CALL core_fire.cpp_CFireEffect_createLightningBolt_FUN_0048c420 ; 00410d91
        ;   XREF to: 0048c420 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBolt_FUN_0048c420(CFireEffect * this_ptr, CVector3f * start_position, float start_width, int enable_camera_shake, ...)
    ADD ESP,0x14                        ; 00410d96
    PUSH 0x40800000                     ; 00410d99
    PUSH EDI                            ; 00410d9e
    MOV ECX,dword ptr [0x005b80f0]      ; 00410d9f | DAT_005b80f0
    PUSH ECX                            ; 00410da5
    CALL core_fire.cpp_CFireEffect_createCrater_FUN_0048c370 ; 00410da6
        ;   XREF to: 0048c370 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createCrater_FUN_0048c370(CFireEffect * this_ptr, CVector3f * position, float radius)
    ADD ESP,0xc                         ; 00410dab
    LEA EAX,[ESP + 0x80]                ; 00410dae
        ;   Label: LAB_00410dae
    PUSH EAX                            ; 00410db5
    MOV EDI,0x6                         ; 00410db6
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00410dbb
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00410dc0
    MOV EAX,0x42c80000                  ; 00410dc3
    MOV dword ptr [ESP + 0xb0],EDI      ; 00410dc8
    MOV dword ptr [ESP + 0x84],EAX      ; 00410dcf
    MOV dword ptr [ESP + 0xb4],EBX      ; 00410dd6
    MOV EAX,dword ptr [EBX + 0x1fb14]   ; 00410ddd
    MOV dword ptr [ESP + 0xb8],EAX      ; 00410de3
    TEST EAX,EAX                        ; 00410dea
    JNZ 0x00410df5                      ; 00410dec
        ;   XREF to: 00410df5 (CONDITIONAL_JUMP)  ; LAB_00410df5
    MOV dword ptr [ESP + 0xb8],EBX      ; 00410dee
    LEA EAX,[ESP + 0x80]                ; 00410df5
        ;   Label: LAB_00410df5
    PUSH EAX                            ; 00410dfc
    MOV EDX,dword ptr [ESI + 0x14c]     ; 00410dfd
    PUSH ESI                            ; 00410e03
    CALL dword ptr [EDX + 0x100]        ; 00410e04
    ADD ESP,0x8                         ; 00410e0a
    PUSH 0x40400000                     ; 00410e0d
    PUSH ESI                            ; 00410e12
    CALL core_charactr.cpp_FUN_004286d0 ; 00410e13
        ;   XREF to: 004286d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004286d0()
    ADD ESP,0x8                         ; 00410e18
    MOV ESP,EBP                         ; 00410e1b
    POP EBP                             ; 00410e1d
    POP EDI                             ; 00410e1e
    POP ESI                             ; 00410e1f
    POP EBX                             ; 00410e20
    RET                                 ; 00410e21
    FLD double ptr [ESP]                ; 00410e22
        ;   Label: LAB_00410e22
    FCOMP double ptr [0x00578690]       ; 00410e25 | DOUBLE_00578690
    FNSTSW AX                           ; 00410e2b
    SAHF                                ; 00410e2d
    JA 0x00410d7d                       ; 00410e2e
        ;   XREF to: 00410d7d (CONDITIONAL_JUMP)  ; LAB_00410d7d
    PUSH 0x5993b0                       ; 00410e34 | g_CVectorTypeInfo_005993b0
    PUSH 0xa                            ; 00410e39
    LEA EAX,[ESP + 0x10]                ; 00410e3b
    PUSH EAX                            ; 00410e3f
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00410e40
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00410e45
    LEA EAX,[ESP + 0x8]                 ; 00410e48
    PUSH EAX                            ; 00410e4c
    MOV EDX,dword ptr [ESI + 0x14c]     ; 00410e4d
    PUSH ESI                            ; 00410e53
    CALL dword ptr [EDX + 0x4c]         ; 00410e54
    ADD ESP,0x8                         ; 00410e57
    MOV EDI,EAX                         ; 00410e5a
    MOV dword ptr [ESP + 0x138],EAX     ; 00410e5c
    CALL crt_stdlib.c_rand_FUN_0056488c ; 00410e63
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
    MOV EDX,EAX                         ; 00410e68
    SAR EDX,0x1f                        ; 00410e6a
    IDIV EDI                            ; 00410e6d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00410e6f
    SUB EAX,EDX                         ; 00410e76
    LEA EDX,[ESP + 0x8]                 ; 00410e78
    SHL EAX,0x2                         ; 00410e7c
    ADD EAX,EDX                         ; 00410e7f
    PUSH EAX                            ; 00410e81
    LEA EAX,[ESP + 0xc0]                ; 00410e82
    PUSH EAX                            ; 00410e89
    PUSH ESI                            ; 00410e8a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00410e8b
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 00410e90
    LEA EAX,[ESP + 0x134]               ; 00410e92
    ADD ESP,0xc                         ; 00410e99
    CMP EAX,EDX                         ; 00410e9c
    JZ 0x00410ebd                       ; 00410e9e
        ;   XREF to: 00410ebd (CONDITIONAL_JUMP)  ; LAB_00410ebd
    MOV EAX,dword ptr [EDX]             ; 00410ea0
    MOV dword ptr [ESP + 0x128],EAX     ; 00410ea2
    MOV EAX,dword ptr [EDX + 0x4]       ; 00410ea9
    MOV dword ptr [ESP + 0x12c],EAX     ; 00410eac
    MOV EAX,dword ptr [EDX + 0x8]       ; 00410eb3
    MOV dword ptr [ESP + 0x130],EAX     ; 00410eb6
    CALL crt_stdlib.c_rand_FUN_0056488c ; 00410ebd
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
        ;   Label: LAB_00410ebd
    MOV EDX,EAX                         ; 00410ec2
    MOV ECX,dword ptr [ESP + 0x138]     ; 00410ec4
    SAR EDX,0x1f                        ; 00410ecb
    IDIV ECX                            ; 00410ece
    LEA EAX,[EDX*0x4 + 0x0]             ; 00410ed0
    SUB EAX,EDX                         ; 00410ed7
    LEA EDX,[EAX*0x4 + 0x0]             ; 00410ed9
    LEA EAX,[ESP + 0x8]                 ; 00410ee0
    ADD EAX,EDX                         ; 00410ee4
    PUSH EAX                            ; 00410ee6
    LEA EAX,[ESP + 0xfc]                ; 00410ee7
    PUSH EAX                            ; 00410eee
    PUSH ESI                            ; 00410eef
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00410ef0
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 00410ef5
    LEA EAX,[ESP + 0x110]               ; 00410ef7
    ADD ESP,0xc                         ; 00410efe
    CMP EAX,EDX                         ; 00410f01
    JZ 0x00410f22                       ; 00410f03
        ;   XREF to: 00410f22 (CONDITIONAL_JUMP)  ; LAB_00410f22
    MOV EAX,dword ptr [EDX]             ; 00410f05
    MOV dword ptr [ESP + 0x104],EAX     ; 00410f07
    MOV EAX,dword ptr [EDX + 0x4]       ; 00410f0e
    MOV dword ptr [ESP + 0x108],EAX     ; 00410f11
    MOV EAX,dword ptr [EDX + 0x8]       ; 00410f18
    MOV dword ptr [ESP + 0x10c],EAX     ; 00410f1b
    MOV EDX,dword ptr [0x0076431c]      ; 00410f22 | DAT_0076431c
        ;   Label: LAB_00410f22
    LEA EAX,[EDX*0x4 + 0x0]             ; 00410f28
    SUB EAX,EDX                         ; 00410f2f
    LEA EDI,[EBX + 0xfd0]               ; 00410f31
    SHL EAX,0x4                         ; 00410f37
    ADD EAX,EDI                         ; 00410f3a
    PUSH EAX                            ; 00410f3c
    PUSH 0x2dd1184                      ; 00410f3d | DAT_02dd1184
    LEA EAX,[ESP + 0xf4]                ; 00410f42
    PUSH EAX                            ; 00410f49
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00410f4a
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00410f4f
    PUSH EAX                            ; 00410f52
    LEA EAX,[ESP + 0xe4]                ; 00410f53
    PUSH EAX                            ; 00410f5a
    PUSH EBX                            ; 00410f5b
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00410f5c
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,dword ptr [0x00764320]      ; 00410f61 | DAT_00764320
    LEA EAX,[EDX*0x4 + 0x0]             ; 00410f67
    SUB EAX,EDX                         ; 00410f6e
    SHL EAX,0x4                         ; 00410f70
    ADD ESP,0xc                         ; 00410f73
    ADD EDI,EAX                         ; 00410f76
    PUSH EDI                            ; 00410f78
    PUSH 0x2dd1184                      ; 00410f79 | DAT_02dd1184
    LEA EAX,[ESP + 0xd0]                ; 00410f7e
    PUSH EAX                            ; 00410f85
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00410f86
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00410f8b
    PUSH EAX                            ; 00410f8e
    LEA EAX,[ESP + 0x120]               ; 00410f8f
    PUSH EAX                            ; 00410f96
    PUSH EBX                            ; 00410f97
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00410f98
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00410f9d
    PUSH 0x40800000                     ; 00410fa0
    PUSH 0x3f000000                     ; 00410fa5
    PUSH 0x1                            ; 00410faa
    LEA EAX,[ESP + 0x134]               ; 00410fac
    PUSH EAX                            ; 00410fb3
    LEA EAX,[ESP + 0xf0]                ; 00410fb4
    PUSH EAX                            ; 00410fbb
    MOV EDI,dword ptr [0x005b80f0]      ; 00410fbc | DAT_005b80f0
    PUSH EDI                            ; 00410fc2
    CALL core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0 ; 00410fc3
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * end_position, int enable_camera_shake, ...)
    ADD ESP,0x18                        ; 00410fc8
    PUSH 0x40800000                     ; 00410fcb
    PUSH 0x3f000000                     ; 00410fd0
    PUSH 0x1                            ; 00410fd5
    LEA EAX,[ESP + 0x134]               ; 00410fd7
    PUSH EAX                            ; 00410fde
    LEA EAX,[ESP + 0x12c]               ; 00410fdf
    PUSH EAX                            ; 00410fe6
    MOV EAX,[0x005b80f0]                ; 00410fe7 | DAT_005b80f0
    PUSH EAX                            ; 00410fec
    CALL core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0 ; 00410fed
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * end_position, int enable_camera_shake, ...)
    ADD ESP,0x18                        ; 00410ff2
    PUSH 0x578670                       ; 00410ff5 | = "baron-attack.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00410ffa
    PUSH EBX                            ; 00411000
    CALL dword ptr [EAX + 0x24]         ; 00411001
    ADD ESP,0x8                         ; 00411004
    JMP 0x00410dae                      ; 00411007
        ;   XREF to: 00410dae (UNCONDITIONAL_JUMP)  ; LAB_00410dae

