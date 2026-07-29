; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_autoAimAtThreat_FUN_0053d910(CStranger *this_ptr,int hand_index,float delta_time)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; float            Stack[0xc]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
;
; XREF[1]:
;   core_stranger.cpp_FUN_00535900 at 00536483
;
; Referenced Globals:
;   double DOUBLE_00595cb7 = 3.14159265350000
;   double DOUBLE_00595cbf = 2
;   double DOUBLE_00595cc7 = 0.0333333333333333
;   double DOUBLE_00595ccf = 1.5
;   double DOUBLE_00595cd7 = 0.5
;   double DOUBLE_00595cdf = 0.0100000000000000
;   double DOUBLE_00595ce7 = 30
;   double DOUBLE_00595cef = 10
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;   float FLOAT_005a2730 = -1.047198
;   float FLOAT_005a2734 = 1.221730
;   undefined4 DAT_005be368
;   undefined4 g_CCharacterActorType_00765a60.name_hash
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa9dbc
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d910
        ;   Label: core_stranger.cpp_CStranger_autoAimAtThreat_FUN_0053d910
    PUSH ESI                            ; 0053d911
    PUSH EDI                            ; 0053d912
    PUSH EBP                            ; 0053d913
    MOV EBP,ESP                         ; 0053d914
    SUB ESP,0x1a4                       ; 0053d916
    AND ESP,0xfffffff8                  ; 0053d91c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0053d91f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053d922
    ADD EAX,0x1fa70                     ; 0053d925
    MOV dword ptr [ESP + 0x194],EAX     ; 0053d92a
    CMP ESI,0x1                         ; 0053d931
    JZ 0x0053dcf4                       ; 0053d934
        ;   XREF to: 0053dcf4 (CONDITIONAL_JUMP)  ; LAB_0053dcf4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053d93a
        ;   Label: LAB_0053d93a
    MOV EDX,dword ptr [EAX + 0x1fa94]   ; 0053d93d
    TEST EDX,EDX                        ; 0053d943
    JNZ 0x0053dd23                      ; 0053d945
        ;   XREF to: 0053dd23 (CONDITIONAL_JUMP)  ; LAB_0053dd23
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053d94b
    MOV dword ptr [EAX + 0xc],EDX       ; 0053d952
    MOV dword ptr [EAX + 0x4],EDX       ; 0053d955
    MOV EAX,ESI                         ; 0053d958
    SHL EAX,0x4                         ; 0053d95a
    ADD EAX,ESI                         ; 0053d95d
    MOV ECX,dword ptr [EBP + 0x14]      ; 0053d95f
    SHL EAX,0x2                         ; 0053d962
    ADD EAX,ECX                         ; 0053d965
    MOV EBX,dword ptr [EAX + 0x24ac]    ; 0053d967
    TEST EBX,EBX                        ; 0053d96d
    JZ 0x0053d980                       ; 0053d96f
        ;   XREF to: 0053d980 (CONDITIONAL_JUMP)  ; LAB_0053d980
    PUSH EBX                            ; 0053d971
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0053d972
    CALL dword ptr [EDX + 0x6c]         ; 0053d978
    ADD ESP,0x4                         ; 0053d97b
    MOV EDX,EAX                         ; 0053d97e
    TEST DL,0x4                         ; 0053d980
        ;   Label: LAB_0053d980
    JZ 0x0053dd08                       ; 0053d983
        ;   XREF to: 0053dd08 (CONDITIONAL_JUMP)  ; LAB_0053dd08
    MOV dword ptr [ESP + 0x170],0x3     ; 0053d989
    TEST ESI,ESI                        ; 0053d994
        ;   Label: LAB_0053d994
    JNZ 0x0053dd35                      ; 0053d996
        ;   XREF to: 0053dd35 (CONDITIONAL_JUMP)  ; LAB_0053dd35
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053d99c
    CMP dword ptr [EAX + 0x1f59c],0x2   ; 0053d99f
    JNZ 0x0053d9b6                      ; 0053d9a6
        ;   XREF to: 0053d9b6 (CONDITIONAL_JUMP)  ; LAB_0053d9b6
    CMP dword ptr [ESP + 0x170],0x0     ; 0053d9a8
    JZ 0x0053dd1c                       ; 0053d9b0
        ;   XREF to: 0053dd1c (CONDITIONAL_JUMP)  ; LAB_0053dd1c
    MOV EBX,0xbfa78d36                  ; 0053d9b6
        ;   Label: LAB_0053d9b6
    MOV EAX,0x3f060a92                  ; 0053d9bb
    MOV ESI,dword ptr [0x02dc9f84]      ; 0053d9c0 | DAT_02dc9f84
    MOV EDI,dword ptr [0x02dc9f5c]      ; 0053d9c6 | DAT_02dc9f5c
    MOV dword ptr [ESP + 0x188],EBX     ; 0053d9cc
    MOV dword ptr [ESP + 0x18c],EAX     ; 0053d9d3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053d9da
        ;   Label: LAB_0053d9da
    FLD float ptr [EAX + 0xbcbc]        ; 0053d9dd
    FMUL double ptr [0x00595cb7]        ; 0053d9e3 | DOUBLE_00595cb7
    FMUL double ptr [0x00595cbf]        ; 0053d9e9 | DOUBLE_00595cbf
    FMUL float ptr [EBP + 0x1c]         ; 0053d9ef
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053d9f2
    FLD float ptr [EAX]                 ; 0053d9f9
    FXCH                                ; 0053d9fb
    FADD ST0,ST1                        ; 0053d9fd
    MOV dword ptr [EAX + 0x4],0x0       ; 0053d9ff
    FSTP ST1                            ; 0053da06
    FST float ptr [EAX]                 ; 0053da08
    FCOMP float ptr [0x005a2730]        ; 0053da0a | FLOAT_005a2730
    FNSTSW AX                           ; 0053da10
    SAHF                                ; 0053da12
    JNC 0x0053da24                      ; 0053da13
        ;   XREF to: 0053da24 (CONDITIONAL_JUMP)  ; LAB_0053da24
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053da15
    MOV EDX,dword ptr [0x005a2730]      ; 0053da1c | FLOAT_005a2730
    MOV dword ptr [EAX],EDX             ; 0053da22
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053da24
        ;   Label: LAB_0053da24
    FLD float ptr [EAX]                 ; 0053da2b
    FCOMP float ptr [0x005a2734]        ; 0053da2d | FLOAT_005a2734
    FNSTSW AX                           ; 0053da33
    SAHF                                ; 0053da35
    JBE 0x0053da47                      ; 0053da36
        ;   XREF to: 0053da47 (CONDITIONAL_JUMP)  ; LAB_0053da47
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053da38
    MOV EDX,dword ptr [0x005a2734]      ; 0053da3f | FLOAT_005a2734
    MOV dword ptr [EAX],EDX             ; 0053da45
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053da47
        ;   Label: LAB_0053da47
    FLD float ptr [EAX + 0xc]           ; 0053da4e
    FCOMP float ptr [ESP + 0x188]       ; 0053da51
    FNSTSW AX                           ; 0053da58
    SAHF                                ; 0053da5a
    JNC 0x0053da6e                      ; 0053da5b
        ;   XREF to: 0053da6e (CONDITIONAL_JUMP)  ; LAB_0053da6e
    MOV EDX,dword ptr [ESP + 0x194]     ; 0053da5d
    MOV EAX,dword ptr [ESP + 0x188]     ; 0053da64
    MOV dword ptr [EDX + 0xc],EAX       ; 0053da6b
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053da6e
        ;   Label: LAB_0053da6e
    FLD float ptr [EAX + 0xc]           ; 0053da75
    FCOMP float ptr [ESP + 0x18c]       ; 0053da78
    FNSTSW AX                           ; 0053da7f
    SAHF                                ; 0053da81
    JBE 0x0053da95                      ; 0053da82
        ;   XREF to: 0053da95 (CONDITIONAL_JUMP)  ; LAB_0053da95
    MOV EDX,dword ptr [ESP + 0x194]     ; 0053da84
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0053da8b
    MOV dword ptr [EDX + 0xc],EAX       ; 0053da92
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053da95
        ;   Label: LAB_0053da95
    FLD float ptr [EAX + 0x4]           ; 0053da9c
    FCOMP float ptr [ESP + 0x188]       ; 0053da9f
    FNSTSW AX                           ; 0053daa6
    SAHF                                ; 0053daa8
    JNC 0x0053dabc                      ; 0053daa9
        ;   XREF to: 0053dabc (CONDITIONAL_JUMP)  ; LAB_0053dabc
    MOV EDX,dword ptr [ESP + 0x194]     ; 0053daab
    MOV EAX,dword ptr [ESP + 0x188]     ; 0053dab2
    MOV dword ptr [EDX + 0x4],EAX       ; 0053dab9
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053dabc
        ;   Label: LAB_0053dabc
    FLD float ptr [EAX + 0x4]           ; 0053dac3
    FCOMP float ptr [ESP + 0x18c]       ; 0053dac6
    FNSTSW AX                           ; 0053dacd
    SAHF                                ; 0053dacf
    JBE 0x0053dae3                      ; 0053dad0
        ;   XREF to: 0053dae3 (CONDITIONAL_JUMP)  ; LAB_0053dae3
    MOV EDX,dword ptr [ESP + 0x194]     ; 0053dad2
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0053dad9
    MOV dword ptr [EDX + 0x4],EAX       ; 0053dae0
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053dae3
        ;   Label: LAB_0053dae3
    MOV dword ptr [EAX + 0x1c],0x0      ; 0053daea
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053daf1
    MOV dword ptr [ESP + 0x180],EAX     ; 0053daf4
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053dafb
    MOV EAX,dword ptr [EAX]             ; 0053db02
    MOV EDX,dword ptr [ESP + 0x170]     ; 0053db04
    MOV dword ptr [ESP + 0x184],EAX     ; 0053db0b
    CMP EDX,0x3                         ; 0053db12
    JZ 0x0053e0f3                       ; 0053db15
        ;   XREF to: 0053e0f3 (CONDITIONAL_JUMP)  ; LAB_0053e0f3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053db1b
    MOV ECX,dword ptr [EAX + 0x1f59c]   ; 0053db1e
    TEST ECX,ECX                        ; 0053db24
    JNZ 0x0053e0f3                      ; 0053db26
        ;   XREF to: 0053e0f3 (CONDITIONAL_JUMP)  ; LAB_0053e0f3
    MOV dword ptr [ESP + 0x140],ECX     ; 0053db2c
    MOV dword ptr [ESP + 0x144],ECX     ; 0053db33
    MOV dword ptr [ESP + 0x13c],ECX     ; 0053db3a
    MOV ECX,dword ptr [EAX + 0x1fa94]   ; 0053db41
    TEST ECX,ECX                        ; 0053db47
    JZ 0x0053db8d                       ; 0053db49
        ;   XREF to: 0053db8d (CONDITIONAL_JUMP)  ; LAB_0053db8d
    LEA EDX,[ESP + 0xd0]                ; 0053db4b
    PUSH EDX                            ; 0053db52
    MOV EBX,dword ptr [ECX + 0x14c]     ; 0053db53
    PUSH ECX                            ; 0053db59
    CALL dword ptr [EBX + 0xd8]         ; 0053db5a
    MOV EBX,EAX                         ; 0053db60
    LEA EAX,[ESP + 0x144]               ; 0053db62
    ADD ESP,0x8                         ; 0053db69
    CMP EAX,EBX                         ; 0053db6c
    JZ 0x0053db8d                       ; 0053db6e
        ;   XREF to: 0053db8d (CONDITIONAL_JUMP)  ; LAB_0053db8d
    MOV EAX,dword ptr [EBX]             ; 0053db70
    MOV dword ptr [ESP + 0x13c],EAX     ; 0053db72
    MOV EAX,dword ptr [EBX + 0x4]       ; 0053db79
    MOV dword ptr [ESP + 0x140],EAX     ; 0053db7c
    MOV EAX,dword ptr [EBX + 0x8]       ; 0053db83
    MOV dword ptr [ESP + 0x144],EAX     ; 0053db86
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053db8d
        ;   Label: LAB_0053db8d
    MOV EBX,dword ptr [ESP + 0x170]     ; 0053db90
    ADD EAX,0x150                       ; 0053db97
    TEST EBX,EBX                        ; 0053db9c
    JNZ 0x0053dda8                      ; 0053db9e
        ;   XREF to: 0053dda8 (CONDITIONAL_JUMP)  ; LAB_0053dda8
    PUSH EDI                            ; 0053dba4
    LEA EDX,[ESP + 0x11c]               ; 0053dba5
    PUSH EDX                            ; 0053dbac
    PUSH EAX                            ; 0053dbad
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0053dbae
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EBX,EAX                         ; 0053dbb3
    LEA EAX,[ESP + 0xc4]                ; 0053dbb5
    ADD ESP,0xc                         ; 0053dbbc
    CMP EAX,EBX                         ; 0053dbbf
    JNZ 0x0053dd86                      ; 0053dbc1
        ;   XREF to: 0053dd86 (CONDITIONAL_JUMP)  ; LAB_0053dd86
    LEA EAX,[ESP + 0xb8]                ; 0053dbc7
        ;   Label: LAB_0053dbc7
    PUSH EAX                            ; 0053dbce
    LEA EAX,[ESP + 0x128]               ; 0053dbcf
    PUSH EAX                            ; 0053dbd6
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053dbd7
    PUSH ESI                            ; 0053dbda
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0053dbdb
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0053dbe0
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053dbe3
    MOV EAX,dword ptr [EAX]             ; 0053dbea
    XOR EDI,EDI                         ; 0053dbec
    MOV dword ptr [ESP + 0x148],EAX     ; 0053dbee
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053dbf5
    MOV dword ptr [ESP + 0x150],EDI     ; 0053dbfc
    MOV EAX,dword ptr [EAX + 0x4]       ; 0053dc03
    MOV dword ptr [ESP + 0x14c],EAX     ; 0053dc06
    LEA EAX,[ESP + 0x148]               ; 0053dc0d
    PUSH EAX                            ; 0053dc14
    LEA EAX,[ESP + 0x94]                ; 0053dc15
    PUSH EAX                            ; 0053dc1c
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0053dc1d
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0053dc22
    LEA EAX,[ESP + 0x10c]               ; 0053dc25
    MOV EBX,0x7149f2ca                  ; 0053dc2c
    PUSH EAX                            ; 0053dc31
    LEA EAX,[ESP + 0xec]                ; 0053dc32
    MOV ECX,0x3f800000                  ; 0053dc39
    PUSH EAX                            ; 0053dc3e
    LEA EAX,[ESP + 0x98]                ; 0053dc3f
    MOV dword ptr [ESP + 0x114],EDI     ; 0053dc46
    PUSH EAX                            ; 0053dc4d
    MOV dword ptr [ESP + 0x11c],EDI     ; 0053dc4e
    MOV dword ptr [ESP + 0x120],ECX     ; 0053dc55
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0053dc5c
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0053dc61
    MOV dword ptr [ESP + 0x198],EBX     ; 0053dc64
    MOV dword ptr [ESP + 0x178],EDI     ; 0053dc6b
    MOV dword ptr [ESP + 0x17c],EDI     ; 0053dc72
    MOV EAX,[0x005be368]                ; 0053dc79 | DAT_005be368
        ;   Label: LAB_0053dc79
    MOV EDX,dword ptr [ESP + 0x178]     ; 0053dc7e
    CMP EDX,dword ptr [EAX + 0x152b38]  ; 0053dc85 | DAT_01fa9dbc
    JGE 0x0053e101                      ; 0053dc8b
        ;   XREF to: 0053e101 (CONDITIONAL_JUMP)  ; LAB_0053e101
    MOV ESI,dword ptr [ESP + 0x17c]     ; 0053dc91
    MOV EBX,dword ptr [0x00765a98]      ; 0053dc98 | g_CCharacterActorType_00765a60.name_hash
    ADD EAX,ESI                         ; 0053dc9e
    PUSH EBX                            ; 0053dca0
    MOV EDI,dword ptr [EAX + 0x152b3c]  ; 0053dca1
    PUSH EDI                            ; 0053dca7
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0053dca8
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 0053dcad
    ADD ESP,0x8                         ; 0053dcaf
    TEST EAX,EAX                        ; 0053dcb2
    JZ 0x0053de02                       ; 0053dcb4
        ;   XREF to: 0053de02 (CONDITIONAL_JUMP)  ; LAB_0053de02
    PUSH EBX                            ; 0053dcba
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0053dcbb
    CALL dword ptr [EAX + 0x104]        ; 0053dcc1
    ADD ESP,0x4                         ; 0053dcc7
    TEST EAX,EAX                        ; 0053dcca
    JZ 0x0053dded                       ; 0053dccc
        ;   XREF to: 0053dded (CONDITIONAL_JUMP)  ; LAB_0053dded
    MOV ECX,dword ptr [ESP + 0x178]     ; 0053dcd2
        ;   Label: LAB_0053dcd2
    MOV EDX,dword ptr [ESP + 0x17c]     ; 0053dcd9
    INC ECX                             ; 0053dce0
    ADD EDX,0x4                         ; 0053dce1
    MOV dword ptr [ESP + 0x178],ECX     ; 0053dce4
    MOV dword ptr [ESP + 0x17c],EDX     ; 0053dceb
    JMP 0x0053dc79                      ; 0053dcf2
        ;   XREF to: 0053dc79 (UNCONDITIONAL_JUMP)  ; LAB_0053dc79
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053dcf4
        ;   Label: LAB_0053dcf4
    ADD EAX,0x1fa50                     ; 0053dcf7
    MOV dword ptr [ESP + 0x194],EAX     ; 0053dcfc
    JMP 0x0053d93a                      ; 0053dd03
        ;   XREF to: 0053d93a (UNCONDITIONAL_JUMP)  ; LAB_0053d93a
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053dd08
        ;   Label: LAB_0053dd08
    MOV dword ptr [EAX + 0x8],0x0       ; 0053dd0f
    MOV dword ptr [EAX],0x0             ; 0053dd16
    MOV ESP,EBP                         ; 0053dd1c
        ;   Label: LAB_0053dd1c
    POP EBP                             ; 0053dd1e
    POP EDI                             ; 0053dd1f
    POP ESI                             ; 0053dd20
    POP EBX                             ; 0053dd21
    RET                                 ; 0053dd22
    MOV EAX,dword ptr [EDX + 0x2d8]     ; 0053dd23
        ;   Label: LAB_0053dd23
    MOV dword ptr [ESP + 0x170],EAX     ; 0053dd29
    JMP 0x0053d994                      ; 0053dd30
        ;   XREF to: 0053d994 (UNCONDITIONAL_JUMP)  ; LAB_0053d994
    MOV EAX,dword ptr [ESP + 0x170]     ; 0053dd35
        ;   Label: LAB_0053dd35
    MOV ESI,dword ptr [0x02dc9f88]      ; 0053dd3c | DAT_02dc9f88
    MOV EDI,dword ptr [0x02dc9f60]      ; 0053dd42 | DAT_02dc9f60
    TEST EAX,EAX                        ; 0053dd48
    JNZ 0x0053dd69                      ; 0053dd4a
        ;   XREF to: 0053dd69 (CONDITIONAL_JUMP)  ; LAB_0053dd69
    MOV EAX,0x3fa78d36                  ; 0053dd4c
    MOV EBX,0xbf060a92                  ; 0053dd51
    MOV dword ptr [ESP + 0x18c],EAX     ; 0053dd56
    MOV dword ptr [ESP + 0x188],EBX     ; 0053dd5d
    JMP 0x0053d9da                      ; 0053dd64
        ;   XREF to: 0053d9da (UNCONDITIONAL_JUMP)  ; LAB_0053d9da
    MOV ECX,0x3f060a92                  ; 0053dd69
        ;   Label: LAB_0053dd69
    MOV EDX,0xbf060a92                  ; 0053dd6e
    MOV dword ptr [ESP + 0x18c],ECX     ; 0053dd73
    MOV dword ptr [ESP + 0x188],EDX     ; 0053dd7a
    JMP 0x0053d9da                      ; 0053dd81
        ;   XREF to: 0053d9da (UNCONDITIONAL_JUMP)  ; LAB_0053d9da
    MOV EAX,dword ptr [EBX]             ; 0053dd86
        ;   Label: LAB_0053dd86
    MOV dword ptr [ESP + 0xb8],EAX      ; 0053dd88
    MOV EAX,dword ptr [EBX + 0x4]       ; 0053dd8f
    MOV dword ptr [ESP + 0xbc],EAX      ; 0053dd92
    MOV EAX,dword ptr [EBX + 0x8]       ; 0053dd99
    MOV dword ptr [ESP + 0xc0],EAX      ; 0053dd9c
    JMP 0x0053dbc7                      ; 0053dda3
        ;   XREF to: 0053dbc7 (UNCONDITIONAL_JUMP)  ; LAB_0053dbc7
    PUSH ESI                            ; 0053dda8
        ;   Label: LAB_0053dda8
    LEA EDX,[ESP + 0xf8]                ; 0053dda9
    PUSH EDX                            ; 0053ddb0
    PUSH EAX                            ; 0053ddb1
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0053ddb2
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EBX,EAX                         ; 0053ddb7
    LEA EAX,[ESP + 0xc4]                ; 0053ddb9
    ADD ESP,0xc                         ; 0053ddc0
    CMP EAX,EBX                         ; 0053ddc3
    JZ 0x0053dbc7                       ; 0053ddc5
        ;   XREF to: 0053dbc7 (CONDITIONAL_JUMP)  ; LAB_0053dbc7
    MOV EAX,dword ptr [EBX]             ; 0053ddcb
    MOV dword ptr [ESP + 0xb8],EAX      ; 0053ddcd
    MOV EAX,dword ptr [EBX + 0x4]       ; 0053ddd4
    MOV dword ptr [ESP + 0xbc],EAX      ; 0053ddd7
    MOV EAX,dword ptr [EBX + 0x8]       ; 0053ddde
    MOV dword ptr [ESP + 0xc0],EAX      ; 0053dde1
    JMP 0x0053dbc7                      ; 0053dde8
        ;   XREF to: 0053dbc7 (UNCONDITIONAL_JUMP)  ; LAB_0053dbc7
    PUSH EBX                            ; 0053dded
        ;   Label: LAB_0053dded
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0053ddee
    CALL dword ptr [EAX + 0x68]         ; 0053ddf4
    ADD ESP,0x4                         ; 0053ddf7
    TEST EAX,EAX                        ; 0053ddfa
    JNZ 0x0053dcd2                      ; 0053ddfc
        ;   XREF to: 0053dcd2 (CONDITIONAL_JUMP)  ; LAB_0053dcd2
    MOV EDX,dword ptr [ESP + 0x17c]     ; 0053de02
        ;   Label: LAB_0053de02
    MOV EAX,[0x005be368]                ; 0053de09 | DAT_005be368
    ADD EAX,EDX                         ; 0053de0e
    PUSH 0x5993b0                       ; 0053de10 | g_CVectorTypeInfo_005993b0
    MOV EAX,dword ptr [EAX + 0x152b3c]  ; 0053de15
    PUSH 0xa                            ; 0053de1b
    MOV dword ptr [ESP + 0x1a4],EAX     ; 0053de1d
    LEA EAX,[ESP + 0x20]                ; 0053de24
    PUSH EAX                            ; 0053de28
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0053de29
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0053de2e
    LEA EAX,[ESP + 0x18]                ; 0053de31
    PUSH EAX                            ; 0053de35
    MOV ECX,dword ptr [ESP + 0x1a0]     ; 0053de36
    MOV EBX,dword ptr [ESP + 0x1a0]     ; 0053de3d
    PUSH ECX                            ; 0053de44
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0053de45
    CALL dword ptr [EBX + 0x4c]         ; 0053de4b
    ADD ESP,0x8                         ; 0053de4e
    MOV dword ptr [ESP + 0x190],EAX     ; 0053de51
    CMP EAX,0x1                         ; 0053de58
    JL 0x0053dcd2                       ; 0053de5b
        ;   XREF to: 0053dcd2 (CONDITIONAL_JUMP)  ; LAB_0053dcd2
    XOR EBX,EBX                         ; 0053de61
    TEST EAX,EAX                        ; 0053de63
    JLE 0x0053dcd2                      ; 0053de65
        ;   XREF to: 0053dcd2 (CONDITIONAL_JUMP)  ; LAB_0053dcd2
    LEA ESI,[ESP + 0x18]                ; 0053de6b
    PUSH ESI                            ; 0053de6f
        ;   Label: LAB_0053de6f
    LEA EAX,[ESP + 0x134]               ; 0053de70
    PUSH EAX                            ; 0053de77
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 0053de78
    PUSH EAX                            ; 0053de7f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0053de80
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0053de85
    LEA EAX,[ESP + 0x130]               ; 0053de88
    PUSH EAX                            ; 0053de8f
    LEA EAX,[ESP + 0xe0]                ; 0053de90
    PUSH EAX                            ; 0053de97
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053de98
    PUSH EDX                            ; 0053de9b
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0053de9c
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0053dea1
    FLDZ                                ; 0053dea4
    FLD float ptr [ESP + 0xdc]          ; 0053dea6
    FLD float ptr [ESP + 0xe0]          ; 0053dead
    FLD float ptr [ESP + 0xe4]          ; 0053deb4
    FXCH ST2                            ; 0053debb
    FSUB float ptr [ESP + 0xb8]         ; 0053debd
    FXCH                                ; 0053dec4
    FSUB float ptr [ESP + 0xbc]         ; 0053dec6
    FXCH ST2                            ; 0053decd
    FSUB float ptr [ESP + 0xc0]         ; 0053decf
    FXCH                                ; 0053ded6
    FSTP float ptr [ESP + 0x100]        ; 0053ded8
    FXCH                                ; 0053dedf
    FSTP float ptr [ESP + 0x104]        ; 0053dee1
    FST float ptr [ESP + 0x108]         ; 0053dee8
    FSTP double ptr [ESP]               ; 0053deef
    FCOMP double ptr [ESP]              ; 0053def2
    FNSTSW AX                           ; 0053def5
    SAHF                                ; 0053def7
    JC 0x0053df12                       ; 0053def8
        ;   XREF to: 0053df12 (CONDITIONAL_JUMP)  ; LAB_0053df12
    MOV EDI,dword ptr [ESP + 0x190]     ; 0053defa
        ;   Label: LAB_0053defa
    INC EBX                             ; 0053df01
    ADD ESI,0xc                         ; 0053df02
    CMP EBX,EDI                         ; 0053df05
    JGE 0x0053dcd2                      ; 0053df07
        ;   XREF to: 0053dcd2 (CONDITIONAL_JUMP)  ; LAB_0053dcd2
    JMP 0x0053de6f                      ; 0053df0d
        ;   XREF to: 0053de6f (UNCONDITIONAL_JUMP)  ; LAB_0053de6f
    FLD double ptr [ESP]                ; 0053df12
        ;   Label: LAB_0053df12
    FCOMP double ptr [0x00595ce7]       ; 0053df15 | DOUBLE_00595ce7
    FNSTSW AX                           ; 0053df1b
    SAHF                                ; 0053df1d
    JA 0x0053defa                       ; 0053df1e
        ;   XREF to: 0053defa (CONDITIONAL_JUMP)  ; LAB_0053defa
    LEA EAX,[ESP + 0x100]               ; 0053df20
    PUSH EAX                            ; 0053df27
    LEA EAX,[ESP + 0xc8]                ; 0053df28
    PUSH EAX                            ; 0053df2f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0053df30
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0053df35
    MOV ECX,0x3f060a92                  ; 0053df38
    FLD float ptr [ESP + 0x108]         ; 0053df3d
    MOV dword ptr [ESP + 0x10],ECX      ; 0053df44
    FCOMP double ptr [0x00595cef]       ; 0053df48 | DOUBLE_00595cef
    FNSTSW AX                           ; 0053df4e
    SAHF                                ; 0053df50
    JNC 0x0053df5b                      ; 0053df51
        ;   XREF to: 0053df5b (CONDITIONAL_JUMP)  ; LAB_0053df5b
    MOV dword ptr [ESP + 0x10],0x3fc90fdb ; 0053df53
    FLD float ptr [ESP + 0xc4]          ; 0053df5b
        ;   Label: LAB_0053df5b
    FABS                                ; 0053df62
    FLD float ptr [ESP + 0x10]          ; 0053df64
    FCOMPP                              ; 0053df68
    FNSTSW AX                           ; 0053df6a
    SAHF                                ; 0053df6c
    JC 0x0053defa                       ; 0053df6d
        ;   XREF to: 0053defa (CONDITIONAL_JUMP)  ; LAB_0053defa
    FLD float ptr [ESP + 0xc8]          ; 0053df6f
    FCOMP float ptr [ESP + 0x188]       ; 0053df76
    FNSTSW AX                           ; 0053df7d
    SAHF                                ; 0053df7f
    JC 0x0053defa                       ; 0053df80
        ;   XREF to: 0053defa (CONDITIONAL_JUMP)  ; LAB_0053defa
    FLD float ptr [ESP + 0xc8]          ; 0053df86
    FCOMP float ptr [ESP + 0x18c]       ; 0053df8d
    FNSTSW AX                           ; 0053df94
    SAHF                                ; 0053df96
    JA 0x0053defa                       ; 0053df97
        ;   XREF to: 0053defa (CONDITIONAL_JUMP)  ; LAB_0053defa
    FLD float ptr [ESP + 0x104]         ; 0053df9d
    FMUL ST0                            ; 0053dfa4
    FLD float ptr [ESP + 0x100]         ; 0053dfa6
    FMUL ST0                            ; 0053dfad
    FADDP                               ; 0053dfaf
    FLD float ptr [ESP + 0x108]         ; 0053dfb1
    FMUL ST0                            ; 0053dfb8
    FADDP                               ; 0053dfba
    FSQRT                               ; 0053dfbc
    FLD1                                ; 0053dfbe
    FLD float ptr [ESP + 0x104]         ; 0053dfc0
    FXCH                                ; 0053dfc7
    FDIV ST0,ST2                        ; 0053dfc9
    FXCH                                ; 0053dfcb
    FMUL ST1                            ; 0053dfcd
    FLD float ptr [ESP + 0x100]         ; 0053dfcf
    FMUL ST2                            ; 0053dfd6
    FXCH                                ; 0053dfd8
    FST float ptr [ESP + 0x104]         ; 0053dfda
    FMUL float ptr [ESP + 0xec]         ; 0053dfe1
    FXCH                                ; 0053dfe8
    FST float ptr [ESP + 0x100]         ; 0053dfea
    FMUL float ptr [ESP + 0xe8]         ; 0053dff1
    FLD float ptr [ESP + 0x108]         ; 0053dff8
    FMULP ST3                           ; 0053dfff
    FADDP                               ; 0053e001
    FXCH                                ; 0053e003
    FST float ptr [ESP + 0x108]         ; 0053e005
    FMUL float ptr [ESP + 0xf0]         ; 0053e00c
    FADDP                               ; 0053e013
    FSUBR double ptr [0x00595cbf]       ; 0053e015 | DOUBLE_00595cbf
    FXCH                                ; 0053e01b
    FMUL double ptr [0x00595cc7]        ; 0053e01d | DOUBLE_00595cc7
    FADDP                               ; 0053e023
    FST float ptr [ESP + 0x14]          ; 0053e025
    FCOMP float ptr [ESP + 0x198]       ; 0053e029
    FNSTSW AX                           ; 0053e030
    SAHF                                ; 0053e032
    JNC 0x0053defa                      ; 0053e033
        ;   XREF to: 0053defa (CONDITIONAL_JUMP)  ; LAB_0053defa
    MOV EAX,[0x005be368]                ; 0053e039 | DAT_005be368
    PUSH EAX                            ; 0053e03e | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 0053e03f
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053e044
    PUSH 0x2                            ; 0053e047
    MOV EDX,dword ptr [0x005be368]      ; 0053e049 | DAT_005be368
    PUSH EDX                            ; 0053e04f | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800 ; 0053e050
        ;   XREF to: 00511800 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0053e055
    MOV ECX,dword ptr [EBP + 0x14]      ; 0053e058
    PUSH ECX                            ; 0053e05b
    MOV EDI,dword ptr [0x005be368]      ; 0053e05c | DAT_005be368
    PUSH EDI                            ; 0053e062 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0053e063
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053e068
    MOV EAX,dword ptr [ESP + 0x19c]     ; 0053e06b
    PUSH EAX                            ; 0053e072
    MOV EDX,dword ptr [0x005be368]      ; 0053e073 | DAT_005be368
    PUSH EDX                            ; 0053e079 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0053e07a
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053e07f
    LEA EAX,[ESP + 0x130]               ; 0053e082
    PUSH EAX                            ; 0053e089
    LEA EAX,[ESP + 0x128]               ; 0053e08a
    PUSH EAX                            ; 0053e091
    MOV ECX,dword ptr [0x005be368]      ; 0053e092 | DAT_005be368
    PUSH ECX                            ; 0053e098 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30 ; 0053e099
        ;   XREF to: 0050fa30 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 0053e09e
    MOV EDI,EAX                         ; 0053e0a1
    MOV EAX,[0x005be368]                ; 0053e0a3 | DAT_005be368
    PUSH EAX                            ; 0053e0a8 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 0053e0a9
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053e0ae
    TEST EDI,EDI                        ; 0053e0b1
    JNZ 0x0053defa                      ; 0053e0b3
        ;   XREF to: 0053defa (CONDITIONAL_JUMP)  ; LAB_0053defa
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053e0b9
    MOV dword ptr [ESP + 0x198],EAX     ; 0053e0bd
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0053e0c4
    MOV dword ptr [ESP + 0x180],EAX     ; 0053e0cb
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0053e0d2
    MOV dword ptr [ESP + 0x184],EAX     ; 0053e0d9
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053e0e0
    MOV dword ptr [EAX + 0x1c],0x1      ; 0053e0e7
    JMP 0x0053defa                      ; 0053e0ee
        ;   XREF to: 0053defa (UNCONDITIONAL_JUMP)  ; LAB_0053defa
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053e0f3
        ;   Label: LAB_0053e0f3
    MOV dword ptr [EAX + 0xc],0x0       ; 0053e0fa
    FLD float ptr [EBP + 0x1c]          ; 0053e101
        ;   Label: LAB_0053e101
    FMUL double ptr [0x00595cb7]        ; 0053e104 | DOUBLE_00595cb7
    FST double ptr [ESP + 0x8]          ; 0053e10a
    FMUL double ptr [0x00595ccf]        ; 0053e10e | DOUBLE_00595ccf
    MOV EBX,dword ptr [ESP + 0x170]     ; 0053e114
    FSTP float ptr [ESP + 0x174]        ; 0053e11b
    TEST EBX,EBX                        ; 0053e122
    JZ 0x0053e137                       ; 0053e124
        ;   XREF to: 0053e137 (CONDITIONAL_JUMP)  ; LAB_0053e137
    FLD double ptr [ESP + 0x8]          ; 0053e126
    FMUL double ptr [0x00595cd7]        ; 0053e12a | DOUBLE_00595cd7
    FSTP float ptr [ESP + 0x174]        ; 0053e130
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053e137
        ;   Label: LAB_0053e137
    FLD float ptr [ESP + 0x180]         ; 0053e13e
    FSUB float ptr [EAX + 0xc]          ; 0053e145
    SUB ESP,0x4                         ; 0053e148
    FSTP float ptr [ESP]                ; 0053e14b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0053e14e
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x1a4],EAX     ; 0053e153
    FLD float ptr [ESP + 0x1a4]         ; 0053e15a
    ADD ESP,0x4                         ; 0053e161
    FLD float ptr [ESP + 0x184]         ; 0053e164
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053e16b
    FXCH                                ; 0053e172
    FSTP float ptr [ESP + 0x16c]        ; 0053e174
    FSUB float ptr [EAX + 0x8]          ; 0053e17b
    SUB ESP,0x4                         ; 0053e17e
    FSTP float ptr [ESP]                ; 0053e181
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0053e184
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x1a4],EAX     ; 0053e189
    FLD float ptr [ESP + 0x1a4]         ; 0053e190
    ADD ESP,0x4                         ; 0053e197
    FLD float ptr [ESP + 0x174]         ; 0053e19a
    FLD float ptr [ESP + 0x16c]         ; 0053e1a1
    FXCH ST2                            ; 0053e1a8
    FSTP float ptr [ESP + 0x168]        ; 0053e1aa
    FCHS                                ; 0053e1b1
    FSTP float ptr [ESP + 0x164]        ; 0053e1b3
    FCOMP float ptr [ESP + 0x164]       ; 0053e1ba
    FNSTSW AX                           ; 0053e1c1
    SAHF                                ; 0053e1c3
    JNC 0x0053e1d4                      ; 0053e1c4
        ;   XREF to: 0053e1d4 (CONDITIONAL_JUMP)  ; LAB_0053e1d4
    MOV EAX,dword ptr [ESP + 0x164]     ; 0053e1c6
    MOV dword ptr [ESP + 0x16c],EAX     ; 0053e1cd
    FLD float ptr [ESP + 0x16c]         ; 0053e1d4
        ;   Label: LAB_0053e1d4
    FCOMP float ptr [ESP + 0x174]       ; 0053e1db
    FNSTSW AX                           ; 0053e1e2
    SAHF                                ; 0053e1e4
    JBE 0x0053e1f5                      ; 0053e1e5
        ;   XREF to: 0053e1f5 (CONDITIONAL_JUMP)  ; LAB_0053e1f5
    MOV EAX,dword ptr [ESP + 0x174]     ; 0053e1e7
    MOV dword ptr [ESP + 0x16c],EAX     ; 0053e1ee
    FLD float ptr [ESP + 0x168]         ; 0053e1f5
        ;   Label: LAB_0053e1f5
    FLD float ptr [ESP + 0x174]         ; 0053e1fc
    FCHS                                ; 0053e203
    FSTP float ptr [ESP + 0x160]        ; 0053e205
    FCOMP float ptr [ESP + 0x160]       ; 0053e20c
    FNSTSW AX                           ; 0053e213
    SAHF                                ; 0053e215
    JNC 0x0053e226                      ; 0053e216
        ;   XREF to: 0053e226 (CONDITIONAL_JUMP)  ; LAB_0053e226
    MOV EAX,dword ptr [ESP + 0x160]     ; 0053e218
    MOV dword ptr [ESP + 0x168],EAX     ; 0053e21f
    FLD float ptr [ESP + 0x168]         ; 0053e226
        ;   Label: LAB_0053e226
    FCOMP float ptr [ESP + 0x174]       ; 0053e22d
    FNSTSW AX                           ; 0053e234
    SAHF                                ; 0053e236
    JBE 0x0053e247                      ; 0053e237
        ;   XREF to: 0053e247 (CONDITIONAL_JUMP)  ; LAB_0053e247
    MOV EAX,dword ptr [ESP + 0x174]     ; 0053e239
    MOV dword ptr [ESP + 0x168],EAX     ; 0053e240
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053e247
        ;   Label: LAB_0053e247
    FLD float ptr [EAX + 0xc]           ; 0053e24e
    FADD float ptr [ESP + 0x16c]        ; 0053e251
    SUB ESP,0x4                         ; 0053e258
    FSTP float ptr [ESP]                ; 0053e25b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0053e25e
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x1a4],EAX     ; 0053e263
    FLD float ptr [ESP + 0x1a4]         ; 0053e26a
    ADD ESP,0x4                         ; 0053e271
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053e274
    FLD float ptr [EAX + 0x8]           ; 0053e27b
    FADD float ptr [ESP + 0x168]        ; 0053e27e
    SUB ESP,0x4                         ; 0053e285
    FXCH                                ; 0053e288
    FSTP float ptr [EAX + 0xc]          ; 0053e28a
    FSTP float ptr [ESP]                ; 0053e28d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0053e290
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x1a4],EAX     ; 0053e295
    FLD float ptr [ESP + 0x1a4]         ; 0053e29c
    ADD ESP,0x4                         ; 0053e2a3
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053e2a6
    FSTP float ptr [EAX + 0x8]          ; 0053e2ad
    MOV ESI,dword ptr [EAX + 0x1c]      ; 0053e2b0
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 0053e2b3
    CMP ESI,0x1                         ; 0053e2ba
    JNZ 0x0053dd1c                      ; 0053e2bd
        ;   XREF to: 0053dd1c (CONDITIONAL_JUMP)  ; LAB_0053dd1c
    FLD float ptr [EAX + 0xc]           ; 0053e2c3
    FSUB float ptr [ESP + 0x180]        ; 0053e2c6
    FABS                                ; 0053e2cd
    FCOMP double ptr [0x00595cdf]       ; 0053e2cf | DOUBLE_00595cdf
    FNSTSW AX                           ; 0053e2d5
    SAHF                                ; 0053e2d7
    JNC 0x0053dd1c                      ; 0053e2d8
        ;   XREF to: 0053dd1c (CONDITIONAL_JUMP)  ; LAB_0053dd1c
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053e2de
    FLD float ptr [EAX + 0x8]           ; 0053e2e5
    FSUB float ptr [ESP + 0x184]        ; 0053e2e8
    FABS                                ; 0053e2ef
    FCOMP double ptr [0x00595cdf]       ; 0053e2f1 | DOUBLE_00595cdf
    FNSTSW AX                           ; 0053e2f7
    SAHF                                ; 0053e2f9
    JNC 0x0053dd1c                      ; 0053e2fa
        ;   XREF to: 0053dd1c (CONDITIONAL_JUMP)  ; LAB_0053dd1c
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053e300
    MOV dword ptr [EAX + 0x1c],0x2      ; 0053e307
    MOV ESP,EBP                         ; 0053e30e
    POP EBP                             ; 0053e310
    POP EDI                             ; 0053e311
    POP ESI                             ; 0053e312
    POP EBX                             ; 0053e313
    RET                                 ; 0053e314

