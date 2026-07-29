; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_0053ecc0(CStranger *this_ptr,float delta_time,int is_weapon_active)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   is_weapon_active
; Local Variables:
; undefined8       Stack[-0x110]:8  local_110
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined        Stack[-0xbc]:1  local_bc
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
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
;   core_stranger.cpp_FUN_00535900 at 00536344
;
; Referenced Globals:
;   double DOUBLE_00595daf = 0.400000000000000
;   double DOUBLE_00595db7 = 1.5
;   double DOUBLE_00595dbf = 4
;   double DOUBLE_00595dc7 = -1.5
;   float FLOAT_005a26fc = 0.05000000
;   float FLOAT_005a2700 = 0.5
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa5f34
;   undefined4 DAT_01fa5f38
;   undefined4 DAT_01fa5f3c
;   undefined4 DAT_02dc9f54
;   undefined4 DAT_02dc9f58
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ecc0
        ;   Label: core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_0053ecc0
    PUSH ESI                            ; 0053ecc1
    PUSH EDI                            ; 0053ecc2
    PUSH EBP                            ; 0053ecc3
    MOV EBP,ESP                         ; 0053ecc4
    SUB ESP,0xfc                        ; 0053ecc6
    AND ESP,0xfffffff8                  ; 0053eccc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0053eccf
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053ecd2
    MOV ECX,dword ptr [EDX + 0x1fa94]   ; 0053ecd5
    TEST ECX,ECX                        ; 0053ecdb
    JNZ 0x0053ed3b                      ; 0053ecdd
        ;   XREF to: 0053ed3b (CONDITIONAL_JUMP)  ; LAB_0053ed3b
    XOR EAX,EAX                         ; 0053ecdf
        ;   Label: LAB_0053ecdf
    XOR ESI,ESI                         ; 0053ece1
        ;   Label: LAB_0053ece1
    MOV dword ptr [ESP + 0x18],ESI      ; 0053ece3
    TEST EAX,EAX                        ; 0053ece7
    JZ 0x0053f147                       ; 0053ece9
        ;   XREF to: 0053f147 (CONDITIONAL_JUMP)  ; LAB_0053f147
    XOR EDI,EDI                         ; 0053ecef
    MOV EAX,[0x005be368]                ; 0053ecf1 | DAT_005be368
        ;   Label: LAB_0053ecf1
    CMP ESI,dword ptr [EAX + 0x14ecb0]  ; 0053ecf6 | DAT_01fa5f34
    JGE 0x0053ee02                      ; 0053ecfc
        ;   XREF to: 0053ee02 (CONDITIONAL_JUMP)  ; LAB_0053ee02
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14ecb4] ; 0053ed02 | DAT_01fa5f38 | DAT_01fa5f3c
    LEA EAX,[EBX + 0x20]                ; 0053ed09
    PUSH EAX                            ; 0053ed0c
    LEA EAX,[ESP + 0xac]                ; 0053ed0d
    PUSH EAX                            ; 0053ed14
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053ed15
    PUSH EAX                            ; 0053ed18
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0053ed19
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0053ed1e
    FLD float ptr [ESP + 0xa8]          ; 0053ed21
    FABS                                ; 0053ed28
    FCOMP double ptr [0x00595db7]       ; 0053ed2a | DOUBLE_00595db7
    FNSTSW AX                           ; 0053ed30
    SAHF                                ; 0053ed32
    JBE 0x0053ed46                      ; 0053ed33
        ;   XREF to: 0053ed46 (CONDITIONAL_JUMP)  ; LAB_0053ed46
    INC ESI                             ; 0053ed35
        ;   Label: LAB_0053ed35
    ADD EDI,0x4                         ; 0053ed36
    JMP 0x0053ecf1                      ; 0053ed39
        ;   XREF to: 0053ecf1 (UNCONDITIONAL_JUMP)  ; LAB_0053ecf1
    CMP dword ptr [ECX + 0x2d8],0x0     ; 0053ed3b
        ;   Label: LAB_0053ed3b
    JZ 0x0053ece1                       ; 0053ed42
        ;   XREF to: 0053ece1 (CONDITIONAL_JUMP)  ; LAB_0053ece1
    JMP 0x0053ecdf                      ; 0053ed44
        ;   XREF to: 0053ecdf (UNCONDITIONAL_JUMP)  ; LAB_0053ecdf
    FLD float ptr [ESP + 0xac]          ; 0053ed46
        ;   Label: LAB_0053ed46
    FABS                                ; 0053ed4d
    FCOMP double ptr [0x00595dbf]       ; 0053ed4f | DOUBLE_00595dbf
    FNSTSW AX                           ; 0053ed55
    SAHF                                ; 0053ed57
    JA 0x0053ed35                       ; 0053ed58
        ;   XREF to: 0053ed35 (CONDITIONAL_JUMP)  ; LAB_0053ed35
    FLDZ                                ; 0053ed5a
    FCOMP float ptr [ESP + 0xb0]        ; 0053ed5c
    FNSTSW AX                           ; 0053ed63
    SAHF                                ; 0053ed65
    JA 0x0053ed35                       ; 0053ed66
        ;   XREF to: 0053ed35 (CONDITIONAL_JUMP)  ; LAB_0053ed35
    CMP dword ptr [ESP + 0xb0],0x40c00000 ; 0053ed68
    JG 0x0053ed35                       ; 0053ed73
        ;   XREF to: 0053ed35 (CONDITIONAL_JUMP)  ; LAB_0053ed35
    CMP EBX,dword ptr [EBP + 0x14]      ; 0053ed75
    JZ 0x0053ed35                       ; 0053ed78
        ;   XREF to: 0053ed35 (CONDITIONAL_JUMP)  ; LAB_0053ed35
    PUSH EBX                            ; 0053ed7a
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0053ed7b
    CALL dword ptr [EAX + 0x104]        ; 0053ed81
    ADD ESP,0x4                         ; 0053ed87
    TEST EAX,EAX                        ; 0053ed8a
    JNZ 0x0053ed35                      ; 0053ed8c
        ;   XREF to: 0053ed35 (CONDITIONAL_JUMP)  ; LAB_0053ed35
    LEA EAX,[ESP + 0x2c]                ; 0053ed8e
    PUSH EAX                            ; 0053ed92
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990 ; 0053ed93
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00511990(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 0053ed98
    LEA EAX,[ESP + 0x2c]                ; 0053ed9b
    PUSH EAX                            ; 0053ed9f
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0053eda0
    PUSH EBX                            ; 0053eda6
    CALL dword ptr [EDX + 0x34]         ; 0053eda7
    ADD ESP,0x8                         ; 0053edaa
    CMP EAX,0x2                         ; 0053edad
    JNZ 0x0053ed35                      ; 0053edb0
        ;   XREF to: 0053ed35 (CONDITIONAL_JUMP)  ; LAB_0053ed35
    FLD float ptr [ESP + 0xb0]          ; 0053edb2
    FSUB float ptr [ESP + 0x48]         ; 0053edb9
    FADD double ptr [0x00595dc7]        ; 0053edbd | DOUBLE_00595dc7
    FMUL double ptr [0x00595daf]        ; 0053edc3 | DOUBLE_00595daf
    FLD1                                ; 0053edc9
    FSUBRP                              ; 0053edcb
    FST float ptr [ESP + 0x20]          ; 0053edcd
    FCOMP float ptr [ESP + 0x18]        ; 0053edd1
    FNSTSW AX                           ; 0053edd5
    SAHF                                ; 0053edd7
    JC 0x0053ed35                       ; 0053edd8
        ;   XREF to: 0053ed35 (CONDITIONAL_JUMP)  ; LAB_0053ed35
    FLD float ptr [ESP + 0x20]          ; 0053edde
    FLDZ                                ; 0053ede2
    FCOMPP                              ; 0053ede4
    FNSTSW AX                           ; 0053ede6
    SAHF                                ; 0053ede8
    JBE 0x0053edf1                      ; 0053ede9
        ;   XREF to: 0053edf1 (CONDITIONAL_JUMP)  ; LAB_0053edf1
    XOR EBX,EBX                         ; 0053edeb
    MOV dword ptr [ESP + 0x20],EBX      ; 0053eded
    MOV EAX,dword ptr [ESP + 0x20]      ; 0053edf1
        ;   Label: LAB_0053edf1
    MOV dword ptr [ESP + 0x18],EAX      ; 0053edf5
    INC ESI                             ; 0053edf9
    ADD EDI,0x4                         ; 0053edfa
    JMP 0x0053ecf1                      ; 0053edfd
        ;   XREF to: 0053ecf1 (UNCONDITIONAL_JUMP)  ; LAB_0053ecf1
    PUSH EAX                            ; 0053ee02 | DAT_01e57284
        ;   Label: LAB_0053ee02
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 0053ee03
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053ee08
    MOV ECX,dword ptr [EBP + 0x14]      ; 0053ee0b
    PUSH ECX                            ; 0053ee0e
    MOV EBX,dword ptr [0x005be368]      ; 0053ee0f | DAT_005be368
    PUSH EBX                            ; 0053ee15 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0053ee16
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053ee1b
    XOR EAX,EAX                         ; 0053ee1e
    MOV dword ptr [ESP + 0x6c],EAX      ; 0053ee20
    MOV dword ptr [ESP + 0x70],EAX      ; 0053ee24
    LEA EAX,[ESP + 0x6c]                ; 0053ee28
    MOV ESI,0x40600000                  ; 0053ee2c
    PUSH EAX                            ; 0053ee31
    LEA EAX,[ESP + 0x64]                ; 0053ee32
    MOV EDI,0x3fc00000                  ; 0053ee36
    PUSH EAX                            ; 0053ee3b
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053ee3c
    MOV dword ptr [ESP + 0xf8],ESI      ; 0053ee3f
    PUSH EBX                            ; 0053ee46
    MOV dword ptr [ESP + 0x100],EDI     ; 0053ee47
    MOV dword ptr [ESP + 0x80],ESI      ; 0053ee4e
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0053ee55
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 0053ee5a
    LEA EAX,[ESP + 0x90]                ; 0053ee5c
    ADD ESP,0xc                         ; 0053ee63
    CMP EAX,EDX                         ; 0053ee66
    JZ 0x0053ee87                       ; 0053ee68
        ;   XREF to: 0053ee87 (CONDITIONAL_JUMP)  ; LAB_0053ee87
    MOV EAX,dword ptr [EDX]             ; 0053ee6a
    MOV dword ptr [ESP + 0x84],EAX      ; 0053ee6c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0053ee73
    MOV dword ptr [ESP + 0x88],EAX      ; 0053ee76
    MOV EAX,dword ptr [EDX + 0x8]       ; 0053ee7d
    MOV dword ptr [ESP + 0x8c],EAX      ; 0053ee80
    MOV ESI,dword ptr [0x02dc9f54]      ; 0053ee87 | DAT_02dc9f54
        ;   Label: LAB_0053ee87
    PUSH ESI                            ; 0053ee8d
    LEA EAX,[ESP + 0x58]                ; 0053ee8e
    PUSH EAX                            ; 0053ee92
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053ee93
    ADD EAX,0x150                       ; 0053ee96
    PUSH EAX                            ; 0053ee9b
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0053ee9c
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0053eea1
    PUSH EAX                            ; 0053eea4
    LEA EAX,[ESP + 0x94]                ; 0053eea5
    PUSH EAX                            ; 0053eeac
    MOV EDI,dword ptr [EBP + 0x14]      ; 0053eead
    PUSH EDI                            ; 0053eeb0
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0053eeb1
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 0053eeb6
    LEA EAX,[ESP + 0xc0]                ; 0053eeb8
    ADD ESP,0xc                         ; 0053eebf
    CMP EAX,EDX                         ; 0053eec2
    JZ 0x0053eee3                       ; 0053eec4
        ;   XREF to: 0053eee3 (CONDITIONAL_JUMP)  ; LAB_0053eee3
    MOV EAX,dword ptr [EDX]             ; 0053eec6
    MOV dword ptr [ESP + 0xb4],EAX      ; 0053eec8
    MOV EAX,dword ptr [EDX + 0x4]       ; 0053eecf
    MOV dword ptr [ESP + 0xb8],EAX      ; 0053eed2
    MOV EAX,dword ptr [EDX + 0x8]       ; 0053eed9
    MOV dword ptr [ESP + 0xbc],EAX      ; 0053eedc
    FLD float ptr [ESP + 0xb4]          ; 0053eee3
        ;   Label: LAB_0053eee3
    FLD float ptr [ESP + 0xb8]          ; 0053eeea
    FLD float ptr [ESP + 0xbc]          ; 0053eef1
    LEA EAX,[ESP + 0x9c]                ; 0053eef8
    LEA EDX,[ESP + 0x78]                ; 0053eeff
    FXCH ST2                            ; 0053ef03
    FADD float ptr [ESP + 0x84]         ; 0053ef05
    FXCH                                ; 0053ef0c
    FADD float ptr [ESP + 0x88]         ; 0053ef0e
    FXCH ST2                            ; 0053ef15
    FADD float ptr [ESP + 0x8c]         ; 0053ef17
    FXCH ST2                            ; 0053ef1e
    FSTP float ptr [ESP + 0xa0]         ; 0053ef20
    FXCH                                ; 0053ef27
    FSTP float ptr [ESP + 0xa4]         ; 0053ef29
    FSTP float ptr [ESP + 0x9c]         ; 0053ef30
    CMP EDX,EAX                         ; 0053ef37
    JZ 0x0053ef5f                       ; 0053ef39
        ;   XREF to: 0053ef5f (CONDITIONAL_JUMP)  ; LAB_0053ef5f
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0053ef3b
    MOV dword ptr [ESP + 0x78],EAX      ; 0053ef42
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0053ef46
    MOV dword ptr [ESP + 0x7c],EAX      ; 0053ef4d
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0053ef51
    MOV dword ptr [ESP + 0x80],EAX      ; 0053ef58
    LEA EAX,[ESP + 0x78]                ; 0053ef5f
        ;   Label: LAB_0053ef5f
    PUSH EAX                            ; 0053ef63
    LEA EAX,[ESP + 0xb8]                ; 0053ef64
    PUSH EAX                            ; 0053ef6b
    MOV EAX,[0x005be368]                ; 0053ef6c | DAT_005be368
    PUSH EAX                            ; 0053ef71 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 ; 0053ef72
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0x104],EAX     ; 0053ef77
    FLD float ptr [ESP + 0x104]         ; 0053ef7e
    ADD ESP,0xc                         ; 0053ef85
    FLDZ                                ; 0053ef88
    FXCH                                ; 0053ef8a
    FST float ptr [ESP + 0x28]          ; 0053ef8c
    FSTP double ptr [ESP]               ; 0053ef90
    FCOMP double ptr [ESP]              ; 0053ef93
    FNSTSW AX                           ; 0053ef96
    SAHF                                ; 0053ef98
    JA 0x0053efdc                       ; 0053ef99
        ;   XREF to: 0053efdc (CONDITIONAL_JUMP)  ; LAB_0053efdc
    FLD1                                ; 0053ef9b
    FCOMP double ptr [ESP]              ; 0053ef9d
    FNSTSW AX                           ; 0053efa0
    SAHF                                ; 0053efa2
    JBE 0x0053efdc                      ; 0053efa3
        ;   XREF to: 0053efdc (CONDITIONAL_JUMP)  ; LAB_0053efdc
    FLD float ptr [ESP + 0xf0]          ; 0053efa5
    FLD float ptr [ESP + 0x28]          ; 0053efac
    FMUL ST1                            ; 0053efb0
    FLD float ptr [ESP + 0xf4]          ; 0053efb2
    FXCH                                ; 0053efb9
    FSUB ST0,ST1                        ; 0053efbb
    FXCH ST2                            ; 0053efbd
    FSUBRP                              ; 0053efbf
    FDIVP                               ; 0053efc1
    FLD1                                ; 0053efc3
    FSUBRP                              ; 0053efc5
    FST float ptr [ESP + 0x28]          ; 0053efc7
    FCOMP float ptr [ESP + 0x18]        ; 0053efcb
    FNSTSW AX                           ; 0053efcf
    SAHF                                ; 0053efd1
    JBE 0x0053efdc                      ; 0053efd2
        ;   XREF to: 0053efdc (CONDITIONAL_JUMP)  ; LAB_0053efdc
    MOV EAX,dword ptr [ESP + 0x28]      ; 0053efd4
    MOV dword ptr [ESP + 0x18],EAX      ; 0053efd8
    MOV EDX,dword ptr [0x02dc9f58]      ; 0053efdc | DAT_02dc9f58
        ;   Label: LAB_0053efdc
    PUSH EDX                            ; 0053efe2
    LEA EAX,[ESP + 0xc4]                ; 0053efe3
    PUSH EAX                            ; 0053efea
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053efeb
    ADD EAX,0x150                       ; 0053efee
    PUSH EAX                            ; 0053eff3
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0053eff4
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0053eff9
    PUSH EAX                            ; 0053effc
    LEA EAX,[ESP + 0xd0]                ; 0053effd
    PUSH EAX                            ; 0053f004
    MOV ECX,dword ptr [EBP + 0x14]      ; 0053f005
    PUSH ECX                            ; 0053f008
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0053f009
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 0053f00e
    LEA EAX,[ESP + 0xc0]                ; 0053f010
    ADD ESP,0xc                         ; 0053f017
    CMP EAX,EDX                         ; 0053f01a
    JZ 0x0053f03b                       ; 0053f01c
        ;   XREF to: 0053f03b (CONDITIONAL_JUMP)  ; LAB_0053f03b
    MOV EAX,dword ptr [EDX]             ; 0053f01e
    MOV dword ptr [ESP + 0xb4],EAX      ; 0053f020
    MOV EAX,dword ptr [EDX + 0x4]       ; 0053f027
    MOV dword ptr [ESP + 0xb8],EAX      ; 0053f02a
    MOV EAX,dword ptr [EDX + 0x8]       ; 0053f031
    MOV dword ptr [ESP + 0xbc],EAX      ; 0053f034
    FLD float ptr [ESP + 0xb4]          ; 0053f03b
        ;   Label: LAB_0053f03b
    FLD float ptr [ESP + 0xb8]          ; 0053f042
    FLD float ptr [ESP + 0xbc]          ; 0053f049
    LEA EAX,[ESP + 0xd8]                ; 0053f050
    LEA EDX,[ESP + 0x78]                ; 0053f057
    FXCH ST2                            ; 0053f05b
    FADD float ptr [ESP + 0x84]         ; 0053f05d
    FXCH                                ; 0053f064
    FADD float ptr [ESP + 0x88]         ; 0053f066
    FXCH ST2                            ; 0053f06d
    FADD float ptr [ESP + 0x8c]         ; 0053f06f
    FXCH ST2                            ; 0053f076
    FSTP float ptr [ESP + 0xdc]         ; 0053f078
    FXCH                                ; 0053f07f
    FSTP float ptr [ESP + 0xe0]         ; 0053f081
    FSTP float ptr [ESP + 0xd8]         ; 0053f088
    CMP EDX,EAX                         ; 0053f08f
    JZ 0x0053f0b7                       ; 0053f091
        ;   XREF to: 0053f0b7 (CONDITIONAL_JUMP)  ; LAB_0053f0b7
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0053f093
    MOV dword ptr [ESP + 0x78],EAX      ; 0053f09a
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0053f09e
    MOV dword ptr [ESP + 0x7c],EAX      ; 0053f0a5
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0053f0a9
    MOV dword ptr [ESP + 0x80],EAX      ; 0053f0b0
    LEA EAX,[ESP + 0x78]                ; 0053f0b7
        ;   Label: LAB_0053f0b7
    PUSH EAX                            ; 0053f0bb
    LEA EAX,[ESP + 0xb8]                ; 0053f0bc
    PUSH EAX                            ; 0053f0c3
    MOV EBX,dword ptr [0x005be368]      ; 0053f0c4 | DAT_005be368
    PUSH EBX                            ; 0053f0ca | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 ; 0053f0cb
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0x104],EAX     ; 0053f0d0
    FLD float ptr [ESP + 0x104]         ; 0053f0d7
    ADD ESP,0xc                         ; 0053f0de
    FLDZ                                ; 0053f0e1
    FXCH                                ; 0053f0e3
    FST float ptr [ESP + 0x24]          ; 0053f0e5
    FSTP double ptr [ESP + 0x10]        ; 0053f0e9
    FCOMP double ptr [ESP + 0x10]       ; 0053f0ed
    FNSTSW AX                           ; 0053f0f1
    SAHF                                ; 0053f0f3
    JA 0x0053f138                       ; 0053f0f4
        ;   XREF to: 0053f138 (CONDITIONAL_JUMP)  ; LAB_0053f138
    FLD1                                ; 0053f0f6
    FCOMP double ptr [ESP + 0x10]       ; 0053f0f8
    FNSTSW AX                           ; 0053f0fc
    SAHF                                ; 0053f0fe
    JBE 0x0053f138                      ; 0053f0ff
        ;   XREF to: 0053f138 (CONDITIONAL_JUMP)  ; LAB_0053f138
    FLD float ptr [ESP + 0xf0]          ; 0053f101
    FLD float ptr [ESP + 0x24]          ; 0053f108
    FMUL ST1                            ; 0053f10c
    FLD float ptr [ESP + 0xf4]          ; 0053f10e
    FXCH                                ; 0053f115
    FSUB ST0,ST1                        ; 0053f117
    FXCH ST2                            ; 0053f119
    FSUBRP                              ; 0053f11b
    FDIVP                               ; 0053f11d
    FLD1                                ; 0053f11f
    FSUBRP                              ; 0053f121
    FST float ptr [ESP + 0x24]          ; 0053f123
    FCOMP float ptr [ESP + 0x18]        ; 0053f127
    FNSTSW AX                           ; 0053f12b
    SAHF                                ; 0053f12d
    JBE 0x0053f138                      ; 0053f12e
        ;   XREF to: 0053f138 (CONDITIONAL_JUMP)  ; LAB_0053f138
    MOV EAX,dword ptr [ESP + 0x24]      ; 0053f130
    MOV dword ptr [ESP + 0x18],EAX      ; 0053f134
    MOV ESI,dword ptr [0x005be368]      ; 0053f138 | DAT_005be368
        ;   Label: LAB_0053f138
    PUSH ESI                            ; 0053f13e | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 0053f13f
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053f144
    FLD float ptr [ESP + 0x18]          ; 0053f147
        ;   Label: LAB_0053f147
    FLD1                                ; 0053f14b
    FCOMPP                              ; 0053f14d
    FNSTSW AX                           ; 0053f14f
    SAHF                                ; 0053f151
    JNC 0x0053f15c                      ; 0053f152
        ;   XREF to: 0053f15c (CONDITIONAL_JUMP)  ; LAB_0053f15c
    MOV dword ptr [ESP + 0x18],0x3f800000 ; 0053f154
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053f15c
        ;   Label: LAB_0053f15c
    FLD float ptr [ESP + 0x18]          ; 0053f15f
    FSUB float ptr [EAX + 0x1faf4]      ; 0053f163
    FLDZ                                ; 0053f169
    FXCH                                ; 0053f16b
    FST float ptr [ESP + 0x1c]          ; 0053f16d
    FSTP double ptr [ESP + 0x8]         ; 0053f171
    FCOMP double ptr [ESP + 0x8]        ; 0053f175
    FNSTSW AX                           ; 0053f179
    SAHF                                ; 0053f17b
    JBE 0x0053f1db                      ; 0053f17c
        ;   XREF to: 0053f1db (CONDITIONAL_JUMP)  ; LAB_0053f1db
    FLD1                                ; 0053f17e
    FDIV float ptr [0x005a2700]         ; 0053f180 | FLOAT_005a2700
    FLD float ptr [EBP + 0x18]          ; 0053f186
    FCHS                                ; 0053f189
    FXCH                                ; 0053f18b
    FSTP float ptr [ESP + 0xe4]         ; 0053f18d
    FMUL float ptr [ESP + 0xe4]         ; 0053f194
    FLD float ptr [ESP + 0x1c]          ; 0053f19b
    FXCH                                ; 0053f19f
    FSTP float ptr [ESP + 0xec]         ; 0053f1a1
    FCOMP float ptr [ESP + 0xec]        ; 0053f1a8
    FNSTSW AX                           ; 0053f1af
    SAHF                                ; 0053f1b1
    JC 0x0053f1ce                       ; 0053f1b2
        ;   XREF to: 0053f1ce (CONDITIONAL_JUMP)  ; LAB_0053f1ce
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053f1b4
        ;   Label: LAB_0053f1b4
    FLD float ptr [EAX + 0x1faf4]       ; 0053f1b7
    FADD float ptr [ESP + 0x1c]         ; 0053f1bd
    FSTP float ptr [EAX + 0x1faf4]      ; 0053f1c1
    MOV ESP,EBP                         ; 0053f1c7
    POP EBP                             ; 0053f1c9
    POP EDI                             ; 0053f1ca
    POP ESI                             ; 0053f1cb
    POP EBX                             ; 0053f1cc
    RET                                 ; 0053f1cd
    MOV EAX,dword ptr [ESP + 0xec]      ; 0053f1ce
        ;   Label: LAB_0053f1ce
    MOV dword ptr [ESP + 0x1c],EAX      ; 0053f1d5
    JMP 0x0053f1b4                      ; 0053f1d9
        ;   XREF to: 0053f1b4 (UNCONDITIONAL_JUMP)  ; LAB_0053f1b4
    JNC 0x0053f1b4                      ; 0053f1db
        ;   XREF to: 0053f1b4 (CONDITIONAL_JUMP)  ; LAB_0053f1b4
        ;   Label: LAB_0053f1db
    FLD float ptr [EBP + 0x18]          ; 0053f1dd
    FDIV float ptr [0x005a26fc]         ; 0053f1e0 | FLOAT_005a26fc
    FLD float ptr [ESP + 0x1c]          ; 0053f1e6
    FXCH                                ; 0053f1ea
    FSTP float ptr [ESP + 0xe8]         ; 0053f1ec
    FCOMP float ptr [ESP + 0xe8]        ; 0053f1f3
    FNSTSW AX                           ; 0053f1fa
    SAHF                                ; 0053f1fc
    JBE 0x0053f1b4                      ; 0053f1fd
        ;   XREF to: 0053f1b4 (CONDITIONAL_JUMP)  ; LAB_0053f1b4
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0053f1ff
    MOV dword ptr [ESP + 0x1c],EAX      ; 0053f206
    JMP 0x0053f1b4                      ; 0053f20a
        ;   XREF to: 0053f1b4 (UNCONDITIONAL_JUMP)  ; LAB_0053f1b4

