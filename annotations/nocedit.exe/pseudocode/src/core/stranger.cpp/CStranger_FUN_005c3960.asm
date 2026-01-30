; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_stranger_cpp_CStranger_FUN_005c3960(void)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bc4e5
;
; Referenced Globals:
;   double DOUBLE_00653c94 = 3.14159265350000
;   double DOUBLE_00653c9c = 2
;   double DOUBLE_00653ca4 = 0.0333333333333333
;   double DOUBLE_00653cac = 1.5
;   double DOUBLE_00653cb4 = 0.5
;   double DOUBLE_00653cbc = 0.0100000000000000
;   double DOUBLE_00653cc4 = 30
;   double DOUBLE_00653ccc = 10
;   WatcomTypeInfo g_CVectorTypeInfo
;   float FLOAT_00663770 = -1.047198
;   float FLOAT_00663774 = 1.221730
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CCharacterClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_03267198
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3960
        ;   Label: core_stranger.cpp_CStranger_FUN_005c3960
    PUSH ESI                            ; 005c3961
    PUSH EDI                            ; 005c3962
    PUSH EBP                            ; 005c3963
    MOV EBP,ESP                         ; 005c3964
    SUB ESP,0x1a4                       ; 005c3966
    AND ESP,0xfffffff8                  ; 005c396c
    MOV ESI,dword ptr [EBP + 0x18]      ; 005c396f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005c3972
    ADD EAX,0x1fc08                     ; 005c3975
    MOV dword ptr [ESP + 0x194],EAX     ; 005c397a
    CMP ESI,0x1                         ; 005c3981
    JZ 0x005c3d44                       ; 005c3984
        ;   XREF to: 005c3d44 (CONDITIONAL_JUMP)  ; LAB_005c3d44
    MOV EAX,dword ptr [EBP + 0x14]      ; 005c398a
        ;   Label: LAB_005c398a
    MOV EDX,dword ptr [EAX + 0x1fc2c]   ; 005c398d
    TEST EDX,EDX                        ; 005c3993
    JNZ 0x005c3d73                      ; 005c3995
        ;   XREF to: 005c3d73 (CONDITIONAL_JUMP)  ; LAB_005c3d73
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c399b
    MOV dword ptr [EAX + 0xc],EDX       ; 005c39a2
    MOV dword ptr [EAX + 0x4],EDX       ; 005c39a5
    MOV EAX,ESI                         ; 005c39a8
    SHL EAX,0x4                         ; 005c39aa
    ADD EAX,ESI                         ; 005c39ad
    MOV ECX,dword ptr [EBP + 0x14]      ; 005c39af
    SHL EAX,0x2                         ; 005c39b2
    ADD EAX,ECX                         ; 005c39b5
    MOV EBX,dword ptr [EAX + 0x24b4]    ; 005c39b7
    TEST EBX,EBX                        ; 005c39bd
    JZ 0x005c39d0                       ; 005c39bf
        ;   XREF to: 005c39d0 (CONDITIONAL_JUMP)  ; LAB_005c39d0
    PUSH EBX                            ; 005c39c1
    MOV EDX,dword ptr [EBX + 0x154]     ; 005c39c2
    CALL dword ptr [EDX + 0x6c]         ; 005c39c8
    ADD ESP,0x4                         ; 005c39cb
    MOV EDX,EAX                         ; 005c39ce
    TEST DL,0x4                         ; 005c39d0
        ;   Label: LAB_005c39d0
    JZ 0x005c3d58                       ; 005c39d3
        ;   XREF to: 005c3d58 (CONDITIONAL_JUMP)  ; LAB_005c3d58
    MOV dword ptr [ESP + 0x170],0x3     ; 005c39d9
    TEST ESI,ESI                        ; 005c39e4
        ;   Label: LAB_005c39e4
    JNZ 0x005c3d85                      ; 005c39e6
        ;   XREF to: 005c3d85 (CONDITIONAL_JUMP)  ; LAB_005c3d85
    MOV EAX,dword ptr [EBP + 0x14]      ; 005c39ec
    CMP dword ptr [EAX + 0x1f734],0x2   ; 005c39ef
    JNZ 0x005c3a06                      ; 005c39f6
        ;   XREF to: 005c3a06 (CONDITIONAL_JUMP)  ; LAB_005c3a06
    CMP dword ptr [ESP + 0x170],0x0     ; 005c39f8
    JZ 0x005c3d6c                       ; 005c3a00
        ;   XREF to: 005c3d6c (CONDITIONAL_JUMP)  ; LAB_005c3d6c
    MOV EBX,0xbfa78d36                  ; 005c3a06
        ;   Label: LAB_005c3a06
    MOV EAX,0x3f060a92                  ; 005c3a0b
    MOV ESI,dword ptr [0x03f6bb00]      ; 005c3a10 | INT_03f6bb00
    MOV EDI,dword ptr [0x03f6bad8]      ; 005c3a16 | INT_03f6bad8
    MOV dword ptr [ESP + 0x188],EBX     ; 005c3a1c
    MOV dword ptr [ESP + 0x18c],EAX     ; 005c3a23
    MOV EAX,dword ptr [EBP + 0x14]      ; 005c3a2a
        ;   Label: LAB_005c3a2a
    FLD float ptr [EAX + 0xbe54]        ; 005c3a2d
    FMUL double ptr [0x00653c94]        ; 005c3a33 | DOUBLE_00653c94
    FMUL double ptr [0x00653c9c]        ; 005c3a39 | DOUBLE_00653c9c
    FMUL float ptr [EBP + 0x1c]         ; 005c3a3f
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c3a42
    FLD float ptr [EAX]                 ; 005c3a49
    FXCH                                ; 005c3a4b
    FADD ST0,ST1                        ; 005c3a4d
    MOV dword ptr [EAX + 0x4],0x0       ; 005c3a4f
    FSTP ST1                            ; 005c3a56
    FST float ptr [EAX]                 ; 005c3a58
    FCOMP float ptr [0x00663770]        ; 005c3a5a | FLOAT_00663770
    FNSTSW AX                           ; 005c3a60
    SAHF                                ; 005c3a62
    JNC 0x005c3a74                      ; 005c3a63
        ;   XREF to: 005c3a74 (CONDITIONAL_JUMP)  ; LAB_005c3a74
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c3a65
    MOV EDX,dword ptr [0x00663770]      ; 005c3a6c | FLOAT_00663770
    MOV dword ptr [EAX],EDX             ; 005c3a72
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c3a74
        ;   Label: LAB_005c3a74
    FLD float ptr [EAX]                 ; 005c3a7b
    FCOMP float ptr [0x00663774]        ; 005c3a7d | FLOAT_00663774
    FNSTSW AX                           ; 005c3a83
    SAHF                                ; 005c3a85
    JBE 0x005c3a97                      ; 005c3a86
        ;   XREF to: 005c3a97 (CONDITIONAL_JUMP)  ; LAB_005c3a97
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c3a88
    MOV EDX,dword ptr [0x00663774]      ; 005c3a8f | FLOAT_00663774
    MOV dword ptr [EAX],EDX             ; 005c3a95
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c3a97
        ;   Label: LAB_005c3a97
    FLD float ptr [EAX + 0xc]           ; 005c3a9e
    FCOMP float ptr [ESP + 0x188]       ; 005c3aa1
    FNSTSW AX                           ; 005c3aa8
    SAHF                                ; 005c3aaa
    JNC 0x005c3abe                      ; 005c3aab
        ;   XREF to: 005c3abe (CONDITIONAL_JUMP)  ; LAB_005c3abe
    MOV EDX,dword ptr [ESP + 0x194]     ; 005c3aad
    MOV EAX,dword ptr [ESP + 0x188]     ; 005c3ab4
    MOV dword ptr [EDX + 0xc],EAX       ; 005c3abb
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c3abe
        ;   Label: LAB_005c3abe
    FLD float ptr [EAX + 0xc]           ; 005c3ac5
    FCOMP float ptr [ESP + 0x18c]       ; 005c3ac8
    FNSTSW AX                           ; 005c3acf
    SAHF                                ; 005c3ad1
    JBE 0x005c3ae5                      ; 005c3ad2
        ;   XREF to: 005c3ae5 (CONDITIONAL_JUMP)  ; LAB_005c3ae5
    MOV EDX,dword ptr [ESP + 0x194]     ; 005c3ad4
    MOV EAX,dword ptr [ESP + 0x18c]     ; 005c3adb
    MOV dword ptr [EDX + 0xc],EAX       ; 005c3ae2
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c3ae5
        ;   Label: LAB_005c3ae5
    FLD float ptr [EAX + 0x4]           ; 005c3aec
    FCOMP float ptr [ESP + 0x188]       ; 005c3aef
    FNSTSW AX                           ; 005c3af6
    SAHF                                ; 005c3af8
    JNC 0x005c3b0c                      ; 005c3af9
        ;   XREF to: 005c3b0c (CONDITIONAL_JUMP)  ; LAB_005c3b0c
    MOV EDX,dword ptr [ESP + 0x194]     ; 005c3afb
    MOV EAX,dword ptr [ESP + 0x188]     ; 005c3b02
    MOV dword ptr [EDX + 0x4],EAX       ; 005c3b09
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c3b0c
        ;   Label: LAB_005c3b0c
    FLD float ptr [EAX + 0x4]           ; 005c3b13
    FCOMP float ptr [ESP + 0x18c]       ; 005c3b16
    FNSTSW AX                           ; 005c3b1d
    SAHF                                ; 005c3b1f
    JBE 0x005c3b33                      ; 005c3b20
        ;   XREF to: 005c3b33 (CONDITIONAL_JUMP)  ; LAB_005c3b33
    MOV EDX,dword ptr [ESP + 0x194]     ; 005c3b22
    MOV EAX,dword ptr [ESP + 0x18c]     ; 005c3b29
    MOV dword ptr [EDX + 0x4],EAX       ; 005c3b30
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c3b33
        ;   Label: LAB_005c3b33
    MOV dword ptr [EAX + 0x1c],0x0      ; 005c3b3a
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c3b41
    MOV dword ptr [ESP + 0x180],EAX     ; 005c3b44
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c3b4b
    MOV EAX,dword ptr [EAX]             ; 005c3b52
    MOV EDX,dword ptr [ESP + 0x170]     ; 005c3b54
    MOV dword ptr [ESP + 0x184],EAX     ; 005c3b5b
    CMP EDX,0x3                         ; 005c3b62
    JZ 0x005c4143                       ; 005c3b65
        ;   XREF to: 005c4143 (CONDITIONAL_JUMP)  ; LAB_005c4143
    MOV EAX,dword ptr [EBP + 0x14]      ; 005c3b6b
    MOV ECX,dword ptr [EAX + 0x1f734]   ; 005c3b6e
    TEST ECX,ECX                        ; 005c3b74
    JNZ 0x005c4143                      ; 005c3b76
        ;   XREF to: 005c4143 (CONDITIONAL_JUMP)  ; LAB_005c4143
    MOV dword ptr [ESP + 0x140],ECX     ; 005c3b7c
    MOV dword ptr [ESP + 0x144],ECX     ; 005c3b83
    MOV dword ptr [ESP + 0x13c],ECX     ; 005c3b8a
    MOV ECX,dword ptr [EAX + 0x1fc2c]   ; 005c3b91
    TEST ECX,ECX                        ; 005c3b97
    JZ 0x005c3bdd                       ; 005c3b99
        ;   XREF to: 005c3bdd (CONDITIONAL_JUMP)  ; LAB_005c3bdd
    LEA EDX,[ESP + 0xd0]                ; 005c3b9b
    PUSH EDX                            ; 005c3ba2
    MOV EBX,dword ptr [ECX + 0x154]     ; 005c3ba3
    PUSH ECX                            ; 005c3ba9
    CALL dword ptr [EBX + 0xf4]         ; 005c3baa
    MOV EBX,EAX                         ; 005c3bb0
    LEA EAX,[ESP + 0x144]               ; 005c3bb2
    ADD ESP,0x8                         ; 005c3bb9
    CMP EAX,EBX                         ; 005c3bbc
    JZ 0x005c3bdd                       ; 005c3bbe
        ;   XREF to: 005c3bdd (CONDITIONAL_JUMP)  ; LAB_005c3bdd
    MOV EAX,dword ptr [EBX]             ; 005c3bc0
    MOV dword ptr [ESP + 0x13c],EAX     ; 005c3bc2
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c3bc9
    MOV dword ptr [ESP + 0x140],EAX     ; 005c3bcc
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c3bd3
    MOV dword ptr [ESP + 0x144],EAX     ; 005c3bd6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005c3bdd
        ;   Label: LAB_005c3bdd
    MOV EBX,dword ptr [ESP + 0x170]     ; 005c3be0
    ADD EAX,0x158                       ; 005c3be7
    TEST EBX,EBX                        ; 005c3bec
    JNZ 0x005c3df8                      ; 005c3bee
        ;   XREF to: 005c3df8 (CONDITIONAL_JUMP)  ; LAB_005c3df8
    PUSH EDI                            ; 005c3bf4
    LEA EDX,[ESP + 0x11c]               ; 005c3bf5
    PUSH EDX                            ; 005c3bfc
    PUSH EAX                            ; 005c3bfd
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005c3bfe
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EBX,EAX                         ; 005c3c03
    LEA EAX,[ESP + 0xc4]                ; 005c3c05
    ADD ESP,0xc                         ; 005c3c0c
    CMP EAX,EBX                         ; 005c3c0f
    JNZ 0x005c3dd6                      ; 005c3c11
        ;   XREF to: 005c3dd6 (CONDITIONAL_JUMP)  ; LAB_005c3dd6
    LEA EAX,[ESP + 0xb8]                ; 005c3c17
        ;   Label: LAB_005c3c17
    PUSH EAX                            ; 005c3c1e
    LEA EAX,[ESP + 0x128]               ; 005c3c1f
    PUSH EAX                            ; 005c3c26
    MOV ESI,dword ptr [EBP + 0x14]      ; 005c3c27
    PUSH ESI                            ; 005c3c2a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005c3c2b
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005c3c30
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c3c33
    MOV EAX,dword ptr [EAX]             ; 005c3c3a
    XOR EDI,EDI                         ; 005c3c3c
    MOV dword ptr [ESP + 0x148],EAX     ; 005c3c3e
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c3c45
    MOV dword ptr [ESP + 0x150],EDI     ; 005c3c4c
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c3c53
    MOV dword ptr [ESP + 0x14c],EAX     ; 005c3c56
    LEA EAX,[ESP + 0x148]               ; 005c3c5d
    PUSH EAX                            ; 005c3c64
    LEA EAX,[ESP + 0x94]                ; 005c3c65
    PUSH EAX                            ; 005c3c6c
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 005c3c6d
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005c3c72
    LEA EAX,[ESP + 0x10c]               ; 005c3c75
    MOV EBX,0x7149f2ca                  ; 005c3c7c
    PUSH EAX                            ; 005c3c81
    LEA EAX,[ESP + 0xec]                ; 005c3c82
    MOV ECX,0x3f800000                  ; 005c3c89
    PUSH EAX                            ; 005c3c8e
    LEA EAX,[ESP + 0x98]                ; 005c3c8f
    MOV dword ptr [ESP + 0x114],EDI     ; 005c3c96
    PUSH EAX                            ; 005c3c9d
    MOV dword ptr [ESP + 0x11c],EDI     ; 005c3c9e
    MOV dword ptr [ESP + 0x120],ECX     ; 005c3ca5
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 005c3cac
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005c3cb1
    MOV dword ptr [ESP + 0x198],EBX     ; 005c3cb4
    MOV dword ptr [ESP + 0x178],EDI     ; 005c3cbb
    MOV dword ptr [ESP + 0x17c],EDI     ; 005c3cc2
    MOV EAX,[0x006810c8]                ; 005c3cc9 | g_CDemonSetPtr
        ;   Label: LAB_005c3cc9
    MOV EDX,dword ptr [ESP + 0x178]     ; 005c3cce
    CMP EDX,dword ptr [EAX + 0x152f20]  ; 005c3cd5 | DAT_03267198
    JGE 0x005c4151                      ; 005c3cdb
        ;   XREF to: 005c4151 (CONDITIONAL_JUMP)  ; LAB_005c4151
    MOV ESI,dword ptr [ESP + 0x17c]     ; 005c3ce1
    MOV EBX,dword ptr [0x00823c4c]      ; 005c3ce8 | g_CCharacterClassInfo.name_hash
    ADD EAX,ESI                         ; 005c3cee
    PUSH EBX                            ; 005c3cf0
    MOV EDI,dword ptr [EAX + 0x152f24]  ; 005c3cf1 | DAT_0326719c | DAT_032671a0
    PUSH EDI                            ; 005c3cf7
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c3cf8
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 005c3cfd
    ADD ESP,0x8                         ; 005c3cff
    TEST EAX,EAX                        ; 005c3d02
    JZ 0x005c3e52                       ; 005c3d04
        ;   XREF to: 005c3e52 (CONDITIONAL_JUMP)  ; LAB_005c3e52
    PUSH EBX                            ; 005c3d0a
    MOV EAX,dword ptr [EAX + 0x154]     ; 005c3d0b
    CALL dword ptr [EAX + 0x120]        ; 005c3d11
    ADD ESP,0x4                         ; 005c3d17
    TEST EAX,EAX                        ; 005c3d1a
    JZ 0x005c3e3d                       ; 005c3d1c
        ;   XREF to: 005c3e3d (CONDITIONAL_JUMP)  ; LAB_005c3e3d
    MOV ECX,dword ptr [ESP + 0x178]     ; 005c3d22
        ;   Label: LAB_005c3d22
    MOV EDX,dword ptr [ESP + 0x17c]     ; 005c3d29
    INC ECX                             ; 005c3d30
    ADD EDX,0x4                         ; 005c3d31
    MOV dword ptr [ESP + 0x178],ECX     ; 005c3d34
    MOV dword ptr [ESP + 0x17c],EDX     ; 005c3d3b
    JMP 0x005c3cc9                      ; 005c3d42
        ;   XREF to: 005c3cc9 (UNCONDITIONAL_JUMP)  ; LAB_005c3cc9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005c3d44
        ;   Label: LAB_005c3d44
    ADD EAX,0x1fbe8                     ; 005c3d47
    MOV dword ptr [ESP + 0x194],EAX     ; 005c3d4c
    JMP 0x005c398a                      ; 005c3d53
        ;   XREF to: 005c398a (UNCONDITIONAL_JUMP)  ; LAB_005c398a
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c3d58
        ;   Label: LAB_005c3d58
    MOV dword ptr [EAX + 0x8],0x0       ; 005c3d5f
    MOV dword ptr [EAX],0x0             ; 005c3d66
    MOV ESP,EBP                         ; 005c3d6c
        ;   Label: LAB_005c3d6c
    POP EBP                             ; 005c3d6e
    POP EDI                             ; 005c3d6f
    POP ESI                             ; 005c3d70
    POP EBX                             ; 005c3d71
    RET                                 ; 005c3d72
    MOV EAX,dword ptr [EDX + 0x2e0]     ; 005c3d73
        ;   Label: LAB_005c3d73
    MOV dword ptr [ESP + 0x170],EAX     ; 005c3d79
    JMP 0x005c39e4                      ; 005c3d80
        ;   XREF to: 005c39e4 (UNCONDITIONAL_JUMP)  ; LAB_005c39e4
    MOV EAX,dword ptr [ESP + 0x170]     ; 005c3d85
        ;   Label: LAB_005c3d85
    MOV ESI,dword ptr [0x03f6bb04]      ; 005c3d8c | INT_03f6bb04
    MOV EDI,dword ptr [0x03f6badc]      ; 005c3d92 | INT_03f6badc
    TEST EAX,EAX                        ; 005c3d98
    JNZ 0x005c3db9                      ; 005c3d9a
        ;   XREF to: 005c3db9 (CONDITIONAL_JUMP)  ; LAB_005c3db9
    MOV EAX,0x3fa78d36                  ; 005c3d9c
    MOV EBX,0xbf060a92                  ; 005c3da1
    MOV dword ptr [ESP + 0x18c],EAX     ; 005c3da6
    MOV dword ptr [ESP + 0x188],EBX     ; 005c3dad
    JMP 0x005c3a2a                      ; 005c3db4
        ;   XREF to: 005c3a2a (UNCONDITIONAL_JUMP)  ; LAB_005c3a2a
    MOV ECX,0x3f060a92                  ; 005c3db9
        ;   Label: LAB_005c3db9
    MOV EDX,0xbf060a92                  ; 005c3dbe
    MOV dword ptr [ESP + 0x18c],ECX     ; 005c3dc3
    MOV dword ptr [ESP + 0x188],EDX     ; 005c3dca
    JMP 0x005c3a2a                      ; 005c3dd1
        ;   XREF to: 005c3a2a (UNCONDITIONAL_JUMP)  ; LAB_005c3a2a
    MOV EAX,dword ptr [EBX]             ; 005c3dd6
        ;   Label: LAB_005c3dd6
    MOV dword ptr [ESP + 0xb8],EAX      ; 005c3dd8
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c3ddf
    MOV dword ptr [ESP + 0xbc],EAX      ; 005c3de2
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c3de9
    MOV dword ptr [ESP + 0xc0],EAX      ; 005c3dec
    JMP 0x005c3c17                      ; 005c3df3
        ;   XREF to: 005c3c17 (UNCONDITIONAL_JUMP)  ; LAB_005c3c17
    PUSH ESI                            ; 005c3df8
        ;   Label: LAB_005c3df8
    LEA EDX,[ESP + 0xf8]                ; 005c3df9
    PUSH EDX                            ; 005c3e00
    PUSH EAX                            ; 005c3e01
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005c3e02
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EBX,EAX                         ; 005c3e07
    LEA EAX,[ESP + 0xc4]                ; 005c3e09
    ADD ESP,0xc                         ; 005c3e10
    CMP EAX,EBX                         ; 005c3e13
    JZ 0x005c3c17                       ; 005c3e15
        ;   XREF to: 005c3c17 (CONDITIONAL_JUMP)  ; LAB_005c3c17
    MOV EAX,dword ptr [EBX]             ; 005c3e1b
    MOV dword ptr [ESP + 0xb8],EAX      ; 005c3e1d
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c3e24
    MOV dword ptr [ESP + 0xbc],EAX      ; 005c3e27
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c3e2e
    MOV dword ptr [ESP + 0xc0],EAX      ; 005c3e31
    JMP 0x005c3c17                      ; 005c3e38
        ;   XREF to: 005c3c17 (UNCONDITIONAL_JUMP)  ; LAB_005c3c17
    PUSH EBX                            ; 005c3e3d
        ;   Label: LAB_005c3e3d
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c3e3e
    CALL dword ptr [EAX + 0x68]         ; 005c3e44
    ADD ESP,0x4                         ; 005c3e47
    TEST EAX,EAX                        ; 005c3e4a
    JNZ 0x005c3d22                      ; 005c3e4c
        ;   XREF to: 005c3d22 (CONDITIONAL_JUMP)  ; LAB_005c3d22
    MOV EDX,dword ptr [ESP + 0x17c]     ; 005c3e52
        ;   Label: LAB_005c3e52
    MOV EAX,[0x006810c8]                ; 005c3e59 | g_CDemonSetPtr
    ADD EAX,EDX                         ; 005c3e5e
    PUSH 0x6598c0                       ; 005c3e60 | g_CVectorTypeInfo
    MOV EAX,dword ptr [EAX + 0x152f24]  ; 005c3e65 | DAT_0326719c
    PUSH 0xa                            ; 005c3e6b
    MOV dword ptr [ESP + 0x1a4],EAX     ; 005c3e6d
    LEA EAX,[ESP + 0x20]                ; 005c3e74
    PUSH EAX                            ; 005c3e78
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005c3e79
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005c3e7e
    LEA EAX,[ESP + 0x18]                ; 005c3e81
    PUSH EAX                            ; 005c3e85
    MOV ECX,dword ptr [ESP + 0x1a0]     ; 005c3e86
    MOV EBX,dword ptr [ESP + 0x1a0]     ; 005c3e8d
    PUSH ECX                            ; 005c3e94
    MOV EBX,dword ptr [EBX + 0x154]     ; 005c3e95
    CALL dword ptr [EBX + 0x4c]         ; 005c3e9b
    ADD ESP,0x8                         ; 005c3e9e
    MOV dword ptr [ESP + 0x190],EAX     ; 005c3ea1
    CMP EAX,0x1                         ; 005c3ea8
    JL 0x005c3d22                       ; 005c3eab
        ;   XREF to: 005c3d22 (CONDITIONAL_JUMP)  ; LAB_005c3d22
    XOR EBX,EBX                         ; 005c3eb1
    TEST EAX,EAX                        ; 005c3eb3
    JLE 0x005c3d22                      ; 005c3eb5
        ;   XREF to: 005c3d22 (CONDITIONAL_JUMP)  ; LAB_005c3d22
    LEA ESI,[ESP + 0x18]                ; 005c3ebb
    PUSH ESI                            ; 005c3ebf
        ;   Label: LAB_005c3ebf
    LEA EAX,[ESP + 0x134]               ; 005c3ec0
    PUSH EAX                            ; 005c3ec7
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 005c3ec8
    PUSH EAX                            ; 005c3ecf
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005c3ed0
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005c3ed5
    LEA EAX,[ESP + 0x130]               ; 005c3ed8
    PUSH EAX                            ; 005c3edf
    LEA EAX,[ESP + 0xe0]                ; 005c3ee0
    PUSH EAX                            ; 005c3ee7
    MOV EDX,dword ptr [EBP + 0x14]      ; 005c3ee8
    PUSH EDX                            ; 005c3eeb
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c3eec
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005c3ef1
    FLDZ                                ; 005c3ef4
    FLD float ptr [ESP + 0xdc]          ; 005c3ef6
    FLD float ptr [ESP + 0xe0]          ; 005c3efd
    FLD float ptr [ESP + 0xe4]          ; 005c3f04
    FXCH ST2                            ; 005c3f0b
    FSUB float ptr [ESP + 0xb8]         ; 005c3f0d
    FXCH                                ; 005c3f14
    FSUB float ptr [ESP + 0xbc]         ; 005c3f16
    FXCH ST2                            ; 005c3f1d
    FSUB float ptr [ESP + 0xc0]         ; 005c3f1f
    FXCH                                ; 005c3f26
    FSTP float ptr [ESP + 0x100]        ; 005c3f28
    FXCH                                ; 005c3f2f
    FSTP float ptr [ESP + 0x104]        ; 005c3f31
    FST float ptr [ESP + 0x108]         ; 005c3f38
    FSTP double ptr [ESP]               ; 005c3f3f
    FCOMP double ptr [ESP]              ; 005c3f42
    FNSTSW AX                           ; 005c3f45
    SAHF                                ; 005c3f47
    JC 0x005c3f62                       ; 005c3f48
        ;   XREF to: 005c3f62 (CONDITIONAL_JUMP)  ; LAB_005c3f62
    MOV EDI,dword ptr [ESP + 0x190]     ; 005c3f4a
        ;   Label: LAB_005c3f4a
    INC EBX                             ; 005c3f51
    ADD ESI,0xc                         ; 005c3f52
    CMP EBX,EDI                         ; 005c3f55
    JGE 0x005c3d22                      ; 005c3f57
        ;   XREF to: 005c3d22 (CONDITIONAL_JUMP)  ; LAB_005c3d22
    JMP 0x005c3ebf                      ; 005c3f5d
        ;   XREF to: 005c3ebf (UNCONDITIONAL_JUMP)  ; LAB_005c3ebf
    FLD double ptr [ESP]                ; 005c3f62
        ;   Label: LAB_005c3f62
    FCOMP double ptr [0x00653cc4]       ; 005c3f65 | DOUBLE_00653cc4
    FNSTSW AX                           ; 005c3f6b
    SAHF                                ; 005c3f6d
    JA 0x005c3f4a                       ; 005c3f6e
        ;   XREF to: 005c3f4a (CONDITIONAL_JUMP)  ; LAB_005c3f4a
    LEA EAX,[ESP + 0x100]               ; 005c3f70
    PUSH EAX                            ; 005c3f77
    LEA EAX,[ESP + 0xc8]                ; 005c3f78
    PUSH EAX                            ; 005c3f7f
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005c3f80
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005c3f85
    MOV ECX,0x3f060a92                  ; 005c3f88
    FLD float ptr [ESP + 0x108]         ; 005c3f8d
    MOV dword ptr [ESP + 0x10],ECX      ; 005c3f94
    FCOMP double ptr [0x00653ccc]       ; 005c3f98 | DOUBLE_00653ccc
    FNSTSW AX                           ; 005c3f9e
    SAHF                                ; 005c3fa0
    JNC 0x005c3fab                      ; 005c3fa1
        ;   XREF to: 005c3fab (CONDITIONAL_JUMP)  ; LAB_005c3fab
    MOV dword ptr [ESP + 0x10],0x3fc90fdb ; 005c3fa3
    FLD float ptr [ESP + 0xc4]          ; 005c3fab
        ;   Label: LAB_005c3fab
    FABS                                ; 005c3fb2
    FLD float ptr [ESP + 0x10]          ; 005c3fb4
    FCOMPP                              ; 005c3fb8
    FNSTSW AX                           ; 005c3fba
    SAHF                                ; 005c3fbc
    JC 0x005c3f4a                       ; 005c3fbd
        ;   XREF to: 005c3f4a (CONDITIONAL_JUMP)  ; LAB_005c3f4a
    FLD float ptr [ESP + 0xc8]          ; 005c3fbf
    FCOMP float ptr [ESP + 0x188]       ; 005c3fc6
    FNSTSW AX                           ; 005c3fcd
    SAHF                                ; 005c3fcf
    JC 0x005c3f4a                       ; 005c3fd0
        ;   XREF to: 005c3f4a (CONDITIONAL_JUMP)  ; LAB_005c3f4a
    FLD float ptr [ESP + 0xc8]          ; 005c3fd6
    FCOMP float ptr [ESP + 0x18c]       ; 005c3fdd
    FNSTSW AX                           ; 005c3fe4
    SAHF                                ; 005c3fe6
    JA 0x005c3f4a                       ; 005c3fe7
        ;   XREF to: 005c3f4a (CONDITIONAL_JUMP)  ; LAB_005c3f4a
    FLD float ptr [ESP + 0x104]         ; 005c3fed
    FMUL ST0                            ; 005c3ff4
    FLD float ptr [ESP + 0x100]         ; 005c3ff6
    FMUL ST0                            ; 005c3ffd
    FADDP                               ; 005c3fff
    FLD float ptr [ESP + 0x108]         ; 005c4001
    FMUL ST0                            ; 005c4008
    FADDP                               ; 005c400a
    FSQRT                               ; 005c400c
    FLD1                                ; 005c400e
    FLD float ptr [ESP + 0x104]         ; 005c4010
    FXCH                                ; 005c4017
    FDIV ST0,ST2                        ; 005c4019
    FXCH                                ; 005c401b
    FMUL ST1                            ; 005c401d
    FLD float ptr [ESP + 0x100]         ; 005c401f
    FMUL ST2                            ; 005c4026
    FXCH                                ; 005c4028
    FST float ptr [ESP + 0x104]         ; 005c402a
    FMUL float ptr [ESP + 0xec]         ; 005c4031
    FXCH                                ; 005c4038
    FST float ptr [ESP + 0x100]         ; 005c403a
    FMUL float ptr [ESP + 0xe8]         ; 005c4041
    FLD float ptr [ESP + 0x108]         ; 005c4048
    FMULP ST3                           ; 005c404f
    FADDP                               ; 005c4051
    FXCH                                ; 005c4053
    FST float ptr [ESP + 0x108]         ; 005c4055
    FMUL float ptr [ESP + 0xf0]         ; 005c405c
    FADDP                               ; 005c4063
    FSUBR double ptr [0x00653c9c]       ; 005c4065 | DOUBLE_00653c9c
    FXCH                                ; 005c406b
    FMUL double ptr [0x00653ca4]        ; 005c406d | DOUBLE_00653ca4
    FADDP                               ; 005c4073
    FST float ptr [ESP + 0x14]          ; 005c4075
    FCOMP float ptr [ESP + 0x198]       ; 005c4079
    FNSTSW AX                           ; 005c4080
    SAHF                                ; 005c4082
    JNC 0x005c3f4a                      ; 005c4083
        ;   XREF to: 005c3f4a (CONDITIONAL_JUMP)  ; LAB_005c3f4a
    MOV EAX,[0x006810c8]                ; 005c4089 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 005c408e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 005c408f
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005c4094
    PUSH 0x2                            ; 005c4097
    MOV EDX,dword ptr [0x006810c8]      ; 005c4099 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 005c409f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230 ; 005c40a0
        ;   XREF to: 00574230 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 005c40a5
    MOV ECX,dword ptr [EBP + 0x14]      ; 005c40a8
    PUSH ECX                            ; 005c40ab
    MOV EDI,dword ptr [0x006810c8]      ; 005c40ac | g_CDemonSetPtr
    PUSH EDI                            ; 005c40b2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005c40b3
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005c40b8
    MOV EAX,dword ptr [ESP + 0x19c]     ; 005c40bb
    PUSH EAX                            ; 005c40c2
    MOV EDX,dword ptr [0x006810c8]      ; 005c40c3 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 005c40c9 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005c40ca
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005c40cf
    LEA EAX,[ESP + 0x130]               ; 005c40d2
    PUSH EAX                            ; 005c40d9
    LEA EAX,[ESP + 0x128]               ; 005c40da
    PUSH EAX                            ; 005c40e1
    MOV ECX,dword ptr [0x006810c8]      ; 005c40e2 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 005c40e8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460 ; 005c40e9
        ;   XREF to: 00572460 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 005c40ee
    MOV EDI,EAX                         ; 005c40f1
    MOV EAX,[0x006810c8]                ; 005c40f3 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 005c40f8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 005c40f9
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005c40fe
    TEST EDI,EDI                        ; 005c4101
    JNZ 0x005c3f4a                      ; 005c4103
        ;   XREF to: 005c3f4a (CONDITIONAL_JUMP)  ; LAB_005c3f4a
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c4109
    MOV dword ptr [ESP + 0x198],EAX     ; 005c410d
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005c4114
    MOV dword ptr [ESP + 0x180],EAX     ; 005c411b
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005c4122
    MOV dword ptr [ESP + 0x184],EAX     ; 005c4129
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c4130
    MOV dword ptr [EAX + 0x1c],0x1      ; 005c4137
    JMP 0x005c3f4a                      ; 005c413e
        ;   XREF to: 005c3f4a (UNCONDITIONAL_JUMP)  ; LAB_005c3f4a
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c4143
        ;   Label: LAB_005c4143
    MOV dword ptr [EAX + 0xc],0x0       ; 005c414a
    FLD float ptr [EBP + 0x1c]          ; 005c4151
        ;   Label: LAB_005c4151
    FMUL double ptr [0x00653c94]        ; 005c4154 | DOUBLE_00653c94
    FST double ptr [ESP + 0x8]          ; 005c415a
    FMUL double ptr [0x00653cac]        ; 005c415e | DOUBLE_00653cac
    MOV EBX,dword ptr [ESP + 0x170]     ; 005c4164
    FSTP float ptr [ESP + 0x174]        ; 005c416b
    TEST EBX,EBX                        ; 005c4172
    JZ 0x005c4187                       ; 005c4174
        ;   XREF to: 005c4187 (CONDITIONAL_JUMP)  ; LAB_005c4187
    FLD double ptr [ESP + 0x8]          ; 005c4176
    FMUL double ptr [0x00653cb4]        ; 005c417a | DOUBLE_00653cb4
    FSTP float ptr [ESP + 0x174]        ; 005c4180
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c4187
        ;   Label: LAB_005c4187
    FLD float ptr [ESP + 0x180]         ; 005c418e
    FSUB float ptr [EAX + 0xc]          ; 005c4195
    SUB ESP,0x4                         ; 005c4198
    FSTP float ptr [ESP]                ; 005c419b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005c419e
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x1a4],EAX     ; 005c41a3
    FLD float ptr [ESP + 0x1a4]         ; 005c41aa
    ADD ESP,0x4                         ; 005c41b1
    FLD float ptr [ESP + 0x184]         ; 005c41b4
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c41bb
    FXCH                                ; 005c41c2
    FSTP float ptr [ESP + 0x16c]        ; 005c41c4
    FSUB float ptr [EAX + 0x8]          ; 005c41cb
    SUB ESP,0x4                         ; 005c41ce
    FSTP float ptr [ESP]                ; 005c41d1
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005c41d4
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x1a4],EAX     ; 005c41d9
    FLD float ptr [ESP + 0x1a4]         ; 005c41e0
    ADD ESP,0x4                         ; 005c41e7
    FLD float ptr [ESP + 0x174]         ; 005c41ea
    FLD float ptr [ESP + 0x16c]         ; 005c41f1
    FXCH ST2                            ; 005c41f8
    FSTP float ptr [ESP + 0x168]        ; 005c41fa
    FCHS                                ; 005c4201
    FSTP float ptr [ESP + 0x164]        ; 005c4203
    FCOMP float ptr [ESP + 0x164]       ; 005c420a
    FNSTSW AX                           ; 005c4211
    SAHF                                ; 005c4213
    JNC 0x005c4224                      ; 005c4214
        ;   XREF to: 005c4224 (CONDITIONAL_JUMP)  ; LAB_005c4224
    MOV EAX,dword ptr [ESP + 0x164]     ; 005c4216
    MOV dword ptr [ESP + 0x16c],EAX     ; 005c421d
    FLD float ptr [ESP + 0x16c]         ; 005c4224
        ;   Label: LAB_005c4224
    FCOMP float ptr [ESP + 0x174]       ; 005c422b
    FNSTSW AX                           ; 005c4232
    SAHF                                ; 005c4234
    JBE 0x005c4245                      ; 005c4235
        ;   XREF to: 005c4245 (CONDITIONAL_JUMP)  ; LAB_005c4245
    MOV EAX,dword ptr [ESP + 0x174]     ; 005c4237
    MOV dword ptr [ESP + 0x16c],EAX     ; 005c423e
    FLD float ptr [ESP + 0x168]         ; 005c4245
        ;   Label: LAB_005c4245
    FLD float ptr [ESP + 0x174]         ; 005c424c
    FCHS                                ; 005c4253
    FSTP float ptr [ESP + 0x160]        ; 005c4255
    FCOMP float ptr [ESP + 0x160]       ; 005c425c
    FNSTSW AX                           ; 005c4263
    SAHF                                ; 005c4265
    JNC 0x005c4276                      ; 005c4266
        ;   XREF to: 005c4276 (CONDITIONAL_JUMP)  ; LAB_005c4276
    MOV EAX,dword ptr [ESP + 0x160]     ; 005c4268
    MOV dword ptr [ESP + 0x168],EAX     ; 005c426f
    FLD float ptr [ESP + 0x168]         ; 005c4276
        ;   Label: LAB_005c4276
    FCOMP float ptr [ESP + 0x174]       ; 005c427d
    FNSTSW AX                           ; 005c4284
    SAHF                                ; 005c4286
    JBE 0x005c4297                      ; 005c4287
        ;   XREF to: 005c4297 (CONDITIONAL_JUMP)  ; LAB_005c4297
    MOV EAX,dword ptr [ESP + 0x174]     ; 005c4289
    MOV dword ptr [ESP + 0x168],EAX     ; 005c4290
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c4297
        ;   Label: LAB_005c4297
    FLD float ptr [EAX + 0xc]           ; 005c429e
    FADD float ptr [ESP + 0x16c]        ; 005c42a1
    SUB ESP,0x4                         ; 005c42a8
    FSTP float ptr [ESP]                ; 005c42ab
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005c42ae
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x1a4],EAX     ; 005c42b3
    FLD float ptr [ESP + 0x1a4]         ; 005c42ba
    ADD ESP,0x4                         ; 005c42c1
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c42c4
    FLD float ptr [EAX + 0x8]           ; 005c42cb
    FADD float ptr [ESP + 0x168]        ; 005c42ce
    SUB ESP,0x4                         ; 005c42d5
    FXCH                                ; 005c42d8
    FSTP float ptr [EAX + 0xc]          ; 005c42da
    FSTP float ptr [ESP]                ; 005c42dd
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005c42e0
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x1a4],EAX     ; 005c42e5
    FLD float ptr [ESP + 0x1a4]         ; 005c42ec
    ADD ESP,0x4                         ; 005c42f3
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c42f6
    FSTP float ptr [EAX + 0x8]          ; 005c42fd
    MOV ESI,dword ptr [EAX + 0x1c]      ; 005c4300
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 005c4303
    CMP ESI,0x1                         ; 005c430a
    JNZ 0x005c3d6c                      ; 005c430d
        ;   XREF to: 005c3d6c (CONDITIONAL_JUMP)  ; LAB_005c3d6c
    FLD float ptr [EAX + 0xc]           ; 005c4313
    FSUB float ptr [ESP + 0x180]        ; 005c4316
    FABS                                ; 005c431d
    FCOMP double ptr [0x00653cbc]       ; 005c431f | DOUBLE_00653cbc
    FNSTSW AX                           ; 005c4325
    SAHF                                ; 005c4327
    JNC 0x005c3d6c                      ; 005c4328
        ;   XREF to: 005c3d6c (CONDITIONAL_JUMP)  ; LAB_005c3d6c
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c432e
    FLD float ptr [EAX + 0x8]           ; 005c4335
    FSUB float ptr [ESP + 0x184]        ; 005c4338
    FABS                                ; 005c433f
    FCOMP double ptr [0x00653cbc]       ; 005c4341 | DOUBLE_00653cbc
    FNSTSW AX                           ; 005c4347
    SAHF                                ; 005c4349
    JNC 0x005c3d6c                      ; 005c434a
        ;   XREF to: 005c3d6c (CONDITIONAL_JUMP)  ; LAB_005c3d6c
    MOV EAX,dword ptr [ESP + 0x194]     ; 005c4350
    MOV dword ptr [EAX + 0x1c],0x2      ; 005c4357
    MOV ESP,EBP                         ; 005c435e
    POP EBP                             ; 005c4360
    POP EDI                             ; 005c4361
    POP ESI                             ; 005c4362
    POP EBX                             ; 005c4363
    RET                                 ; 005c4364

