; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_005c4c20(CStranger *this_ptr,float delta_time,int is_weapon_active)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   is_weapon_active
; Local Variables:
; float            Stack[-0xf8]:4  local_f8
; float            Stack[-0xf4]:4  local_f4
; float            Stack[-0xf0]:4  fStack_f0
; SCollisionInfo   Stack[-0xe4]:40  SStack_e4
; CVector3f        Stack[-0xbc]:12  local_bc
; CVector3f        Stack[-0xb0]:12  local_b0
; CVector3f        Stack[-0xa4]:12  local_a4
; CVector3f        Stack[-0x98]:12  local_98
; CVector3f        Stack[-0x8c]:12  local_8c
; CVector3f        Stack[-0x80]:12  local_80
; CVector3f        Stack[-0x74]:12  local_74
; CVector3f        Stack[-0x68]:12  local_68
; CVector3f        Stack[-0x5c]:12  local_5c
; CVector3f        Stack[-0x50]:12  local_50
; CVector3f        Stack[-0x44]:12  local_44
; CVector3f[2]     Stack[-0x38]:24  local_38
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_005bb960 at 005bc3a6
;
; Referenced Globals:
;   double DOUBLE_00653d74 = 0.400000000000000
;   double DOUBLE_00653d7c = 1.5
;   double DOUBLE_00653d84 = 4
;   double DOUBLE_00653d8c = -1.5
;   float FLOAT_0066373c = 0.05000000
;   float FLOAT_00663740 = 0.5
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.character_count
;   undefined4 g_CDemonSetInstance.characters[0]
;   undefined4 g_CDemonSetInstance.characters[1]
;   int INT_03f6bad0
;   int INT_03f6bad4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_init_FUN_00574180
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4c20
        ;   Label: core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_005c4c20
    PUSH ESI                            ; 005c4c21
    PUSH EDI                            ; 005c4c22
    PUSH EBP                            ; 005c4c23
    MOV EBP,ESP                         ; 005c4c24
    SUB ESP,0xfc                        ; 005c4c26
    AND ESP,0xfffffff8                  ; 005c4c2c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005c4c2f
    MOV EDX,dword ptr [EBP + 0x14]      ; 005c4c32
    MOV ECX,dword ptr [EDX + 0x1fc2c]   ; 005c4c35
    TEST ECX,ECX                        ; 005c4c3b
    JNZ 0x005c4c9b                      ; 005c4c3d
        ;   XREF to: 005c4c9b (CONDITIONAL_JUMP)  ; LAB_005c4c9b
    XOR EAX,EAX                         ; 005c4c3f
        ;   Label: LAB_005c4c3f
    XOR ESI,ESI                         ; 005c4c41
        ;   Label: LAB_005c4c41
    MOV dword ptr [ESP + 0x18],ESI      ; 005c4c43
    TEST EAX,EAX                        ; 005c4c47
    JZ 0x005c50a7                       ; 005c4c49
        ;   XREF to: 005c50a7 (CONDITIONAL_JUMP)  ; LAB_005c50a7
    XOR EDI,EDI                         ; 005c4c4f
    MOV EAX,[0x006810c8]                ; 005c4c51 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005c4c51
    CMP ESI,dword ptr [EAX + 0x14f098]  ; 005c4c56 | g_CDemonSetInstance.character_count
    JGE 0x005c4d62                      ; 005c4c5c
        ;   XREF to: 005c4d62 (CONDITIONAL_JUMP)  ; LAB_005c4d62
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14f09c] ; 005c4c62 | g_CDemonSetInstance.characters[0] | g_CDemonSetInstance.characters[1]
    LEA EAX,[EBX + 0x20]                ; 005c4c69
    PUSH EAX                            ; 005c4c6c
    LEA EAX,[ESP + 0xac]                ; 005c4c6d
    PUSH EAX                            ; 005c4c74
    MOV EAX,dword ptr [EBP + 0x14]      ; 005c4c75
    PUSH EAX                            ; 005c4c78
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005c4c79
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005c4c7e
    FLD float ptr [ESP + 0xa8]          ; 005c4c81
    FABS                                ; 005c4c88
    FCOMP double ptr [0x00653d7c]       ; 005c4c8a | DOUBLE_00653d7c
    FNSTSW AX                           ; 005c4c90
    SAHF                                ; 005c4c92
    JBE 0x005c4ca6                      ; 005c4c93
        ;   XREF to: 005c4ca6 (CONDITIONAL_JUMP)  ; LAB_005c4ca6
    INC ESI                             ; 005c4c95
        ;   Label: LAB_005c4c95
    ADD EDI,0x4                         ; 005c4c96
    JMP 0x005c4c51                      ; 005c4c99
        ;   XREF to: 005c4c51 (UNCONDITIONAL_JUMP)  ; LAB_005c4c51
    CMP dword ptr [ECX + 0x2e0],0x0     ; 005c4c9b
        ;   Label: LAB_005c4c9b
    JZ 0x005c4c41                       ; 005c4ca2
        ;   XREF to: 005c4c41 (CONDITIONAL_JUMP)  ; LAB_005c4c41
    JMP 0x005c4c3f                      ; 005c4ca4
        ;   XREF to: 005c4c3f (UNCONDITIONAL_JUMP)  ; LAB_005c4c3f
    FLD float ptr [ESP + 0xac]          ; 005c4ca6
        ;   Label: LAB_005c4ca6
    FABS                                ; 005c4cad
    FCOMP double ptr [0x00653d84]       ; 005c4caf | DOUBLE_00653d84
    FNSTSW AX                           ; 005c4cb5
    SAHF                                ; 005c4cb7
    JA 0x005c4c95                       ; 005c4cb8
        ;   XREF to: 005c4c95 (CONDITIONAL_JUMP)  ; LAB_005c4c95
    FLDZ                                ; 005c4cba
    FCOMP float ptr [ESP + 0xb0]        ; 005c4cbc
    FNSTSW AX                           ; 005c4cc3
    SAHF                                ; 005c4cc5
    JA 0x005c4c95                       ; 005c4cc6
        ;   XREF to: 005c4c95 (CONDITIONAL_JUMP)  ; LAB_005c4c95
    CMP dword ptr [ESP + 0xb0],0x40c00000 ; 005c4cc8
    JG 0x005c4c95                       ; 005c4cd3
        ;   XREF to: 005c4c95 (CONDITIONAL_JUMP)  ; LAB_005c4c95
    CMP EBX,dword ptr [EBP + 0x14]      ; 005c4cd5
    JZ 0x005c4c95                       ; 005c4cd8
        ;   XREF to: 005c4c95 (CONDITIONAL_JUMP)  ; LAB_005c4c95
    PUSH EBX                            ; 005c4cda
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c4cdb
    CALL dword ptr [EAX + 0x120]        ; 005c4ce1
    ADD ESP,0x4                         ; 005c4ce7
    TEST EAX,EAX                        ; 005c4cea
    JNZ 0x005c4c95                      ; 005c4cec
        ;   XREF to: 005c4c95 (CONDITIONAL_JUMP)  ; LAB_005c4c95
    LEA EAX,[ESP + 0x2c]                ; 005c4cee
    PUSH EAX                            ; 005c4cf2
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 005c4cf3
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 005c4cf8
    LEA EAX,[ESP + 0x2c]                ; 005c4cfb
    PUSH EAX                            ; 005c4cff
    MOV EDX,dword ptr [EBX + 0x154]     ; 005c4d00
    PUSH EBX                            ; 005c4d06
    CALL dword ptr [EDX + 0x34]         ; 005c4d07
    ADD ESP,0x8                         ; 005c4d0a
    CMP EAX,0x2                         ; 005c4d0d
    JNZ 0x005c4c95                      ; 005c4d10
        ;   XREF to: 005c4c95 (CONDITIONAL_JUMP)  ; LAB_005c4c95
    FLD float ptr [ESP + 0xb0]          ; 005c4d12
    FSUB float ptr [ESP + 0x48]         ; 005c4d19
    FADD double ptr [0x00653d8c]        ; 005c4d1d | DOUBLE_00653d8c
    FMUL double ptr [0x00653d74]        ; 005c4d23 | DOUBLE_00653d74
    FLD1                                ; 005c4d29
    FSUBRP                              ; 005c4d2b
    FST float ptr [ESP + 0x20]          ; 005c4d2d
    FCOMP float ptr [ESP + 0x18]        ; 005c4d31
    FNSTSW AX                           ; 005c4d35
    SAHF                                ; 005c4d37
    JC 0x005c4c95                       ; 005c4d38
        ;   XREF to: 005c4c95 (CONDITIONAL_JUMP)  ; LAB_005c4c95
    FLD float ptr [ESP + 0x20]          ; 005c4d3e
    FLDZ                                ; 005c4d42
    FCOMPP                              ; 005c4d44
    FNSTSW AX                           ; 005c4d46
    SAHF                                ; 005c4d48
    JBE 0x005c4d51                      ; 005c4d49
        ;   XREF to: 005c4d51 (CONDITIONAL_JUMP)  ; LAB_005c4d51
    XOR EBX,EBX                         ; 005c4d4b
    MOV dword ptr [ESP + 0x20],EBX      ; 005c4d4d
    MOV EAX,dword ptr [ESP + 0x20]      ; 005c4d51
        ;   Label: LAB_005c4d51
    MOV dword ptr [ESP + 0x18],EAX      ; 005c4d55
    INC ESI                             ; 005c4d59
    ADD EDI,0x4                         ; 005c4d5a
    JMP 0x005c4c51                      ; 005c4d5d
        ;   XREF to: 005c4c51 (UNCONDITIONAL_JUMP)  ; LAB_005c4c51
    PUSH EAX                            ; 005c4d62 | g_CDemonSetInstance
        ;   Label: LAB_005c4d62
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 005c4d63
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005c4d68
    MOV ECX,dword ptr [EBP + 0x14]      ; 005c4d6b
    PUSH ECX                            ; 005c4d6e
    MOV EBX,dword ptr [0x006810c8]      ; 005c4d6f | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 005c4d75 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005c4d76
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005c4d7b
    XOR EAX,EAX                         ; 005c4d7e
    MOV dword ptr [ESP + 0x6c],EAX      ; 005c4d80
    MOV dword ptr [ESP + 0x70],EAX      ; 005c4d84
    LEA EAX,[ESP + 0x6c]                ; 005c4d88
    MOV ESI,0x40600000                  ; 005c4d8c
    PUSH EAX                            ; 005c4d91
    LEA EAX,[ESP + 0x64]                ; 005c4d92
    MOV EDI,0x3fc00000                  ; 005c4d96
    PUSH EAX                            ; 005c4d9b
    MOV EBX,dword ptr [EBP + 0x14]      ; 005c4d9c
    MOV dword ptr [ESP + 0xf8],ESI      ; 005c4d9f
    PUSH EBX                            ; 005c4da6
    MOV dword ptr [ESP + 0x100],EDI     ; 005c4da7
    MOV dword ptr [ESP + 0x80],ESI      ; 005c4dae
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005c4db5
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 005c4dba
    LEA EAX,[ESP + 0x90]                ; 005c4dbc
    ADD ESP,0xc                         ; 005c4dc3
    CMP EAX,EDX                         ; 005c4dc6
    JZ 0x005c4de7                       ; 005c4dc8
        ;   XREF to: 005c4de7 (CONDITIONAL_JUMP)  ; LAB_005c4de7
    MOV EAX,dword ptr [EDX]             ; 005c4dca
    MOV dword ptr [ESP + 0x84],EAX      ; 005c4dcc
    MOV EAX,dword ptr [EDX + 0x4]       ; 005c4dd3
    MOV dword ptr [ESP + 0x88],EAX      ; 005c4dd6
    MOV EAX,dword ptr [EDX + 0x8]       ; 005c4ddd
    MOV dword ptr [ESP + 0x8c],EAX      ; 005c4de0
    MOV ESI,dword ptr [0x03f6bad0]      ; 005c4de7 | INT_03f6bad0
        ;   Label: LAB_005c4de7
    PUSH ESI                            ; 005c4ded
    LEA EAX,[ESP + 0x58]                ; 005c4dee
    PUSH EAX                            ; 005c4df2
    MOV EAX,dword ptr [EBP + 0x14]      ; 005c4df3
    ADD EAX,0x158                       ; 005c4df6
    PUSH EAX                            ; 005c4dfb
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005c4dfc
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005c4e01
    PUSH EAX                            ; 005c4e04
    LEA EAX,[ESP + 0x94]                ; 005c4e05
    PUSH EAX                            ; 005c4e0c
    MOV EDI,dword ptr [EBP + 0x14]      ; 005c4e0d
    PUSH EDI                            ; 005c4e10
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005c4e11
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 005c4e16
    LEA EAX,[ESP + 0xc0]                ; 005c4e18
    ADD ESP,0xc                         ; 005c4e1f
    CMP EAX,EDX                         ; 005c4e22
    JZ 0x005c4e43                       ; 005c4e24
        ;   XREF to: 005c4e43 (CONDITIONAL_JUMP)  ; LAB_005c4e43
    MOV EAX,dword ptr [EDX]             ; 005c4e26
    MOV dword ptr [ESP + 0xb4],EAX      ; 005c4e28
    MOV EAX,dword ptr [EDX + 0x4]       ; 005c4e2f
    MOV dword ptr [ESP + 0xb8],EAX      ; 005c4e32
    MOV EAX,dword ptr [EDX + 0x8]       ; 005c4e39
    MOV dword ptr [ESP + 0xbc],EAX      ; 005c4e3c
    FLD float ptr [ESP + 0xb4]          ; 005c4e43
        ;   Label: LAB_005c4e43
    FLD float ptr [ESP + 0xb8]          ; 005c4e4a
    FLD float ptr [ESP + 0xbc]          ; 005c4e51
    LEA EAX,[ESP + 0x9c]                ; 005c4e58
    LEA EDX,[ESP + 0x78]                ; 005c4e5f
    FXCH ST2                            ; 005c4e63
    FADD float ptr [ESP + 0x84]         ; 005c4e65
    FXCH                                ; 005c4e6c
    FADD float ptr [ESP + 0x88]         ; 005c4e6e
    FXCH ST2                            ; 005c4e75
    FADD float ptr [ESP + 0x8c]         ; 005c4e77
    FXCH ST2                            ; 005c4e7e
    FSTP float ptr [ESP + 0xa0]         ; 005c4e80
    FXCH                                ; 005c4e87
    FSTP float ptr [ESP + 0xa4]         ; 005c4e89
    FSTP float ptr [ESP + 0x9c]         ; 005c4e90
    CMP EDX,EAX                         ; 005c4e97
    JZ 0x005c4ebf                       ; 005c4e99
        ;   XREF to: 005c4ebf (CONDITIONAL_JUMP)  ; LAB_005c4ebf
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005c4e9b
    MOV dword ptr [ESP + 0x78],EAX      ; 005c4ea2
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005c4ea6
    MOV dword ptr [ESP + 0x7c],EAX      ; 005c4ead
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005c4eb1
    MOV dword ptr [ESP + 0x80],EAX      ; 005c4eb8
    LEA EAX,[ESP + 0x78]                ; 005c4ebf
        ;   Label: LAB_005c4ebf
    PUSH EAX                            ; 005c4ec3
    LEA EAX,[ESP + 0xb8]                ; 005c4ec4
    PUSH EAX                            ; 005c4ecb
    MOV EAX,[0x006810c8]                ; 005c4ecc | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 005c4ed1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 005c4ed2
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0x104],EAX     ; 005c4ed7
    FLD float ptr [ESP + 0x104]         ; 005c4ede
    ADD ESP,0xc                         ; 005c4ee5
    FLDZ                                ; 005c4ee8
    FXCH                                ; 005c4eea
    FST float ptr [ESP + 0x28]          ; 005c4eec
    FSTP double ptr [ESP]               ; 005c4ef0
    FCOMP double ptr [ESP]              ; 005c4ef3
    FNSTSW AX                           ; 005c4ef6
    SAHF                                ; 005c4ef8
    JA 0x005c4f3c                       ; 005c4ef9
        ;   XREF to: 005c4f3c (CONDITIONAL_JUMP)  ; LAB_005c4f3c
    FLD1                                ; 005c4efb
    FCOMP double ptr [ESP]              ; 005c4efd
    FNSTSW AX                           ; 005c4f00
    SAHF                                ; 005c4f02
    JBE 0x005c4f3c                      ; 005c4f03
        ;   XREF to: 005c4f3c (CONDITIONAL_JUMP)  ; LAB_005c4f3c
    FLD float ptr [ESP + 0xf0]          ; 005c4f05
    FLD float ptr [ESP + 0x28]          ; 005c4f0c
    FMUL ST1                            ; 005c4f10
    FLD float ptr [ESP + 0xf4]          ; 005c4f12
    FXCH                                ; 005c4f19
    FSUB ST0,ST1                        ; 005c4f1b
    FXCH ST2                            ; 005c4f1d
    FSUBRP                              ; 005c4f1f
    FDIVP                               ; 005c4f21
    FLD1                                ; 005c4f23
    FSUBRP                              ; 005c4f25
    FST float ptr [ESP + 0x28]          ; 005c4f27
    FCOMP float ptr [ESP + 0x18]        ; 005c4f2b
    FNSTSW AX                           ; 005c4f2f
    SAHF                                ; 005c4f31
    JBE 0x005c4f3c                      ; 005c4f32
        ;   XREF to: 005c4f3c (CONDITIONAL_JUMP)  ; LAB_005c4f3c
    MOV EAX,dword ptr [ESP + 0x28]      ; 005c4f34
    MOV dword ptr [ESP + 0x18],EAX      ; 005c4f38
    MOV EDX,dword ptr [0x03f6bad4]      ; 005c4f3c | INT_03f6bad4
        ;   Label: LAB_005c4f3c
    PUSH EDX                            ; 005c4f42
    LEA EAX,[ESP + 0xc4]                ; 005c4f43
    PUSH EAX                            ; 005c4f4a
    MOV EAX,dword ptr [EBP + 0x14]      ; 005c4f4b
    ADD EAX,0x158                       ; 005c4f4e
    PUSH EAX                            ; 005c4f53
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005c4f54
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005c4f59
    PUSH EAX                            ; 005c4f5c
    LEA EAX,[ESP + 0xd0]                ; 005c4f5d
    PUSH EAX                            ; 005c4f64
    MOV ECX,dword ptr [EBP + 0x14]      ; 005c4f65
    PUSH ECX                            ; 005c4f68
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005c4f69
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EDX,EAX                         ; 005c4f6e
    LEA EAX,[ESP + 0xc0]                ; 005c4f70
    ADD ESP,0xc                         ; 005c4f77
    CMP EAX,EDX                         ; 005c4f7a
    JZ 0x005c4f9b                       ; 005c4f7c
        ;   XREF to: 005c4f9b (CONDITIONAL_JUMP)  ; LAB_005c4f9b
    MOV EAX,dword ptr [EDX]             ; 005c4f7e
    MOV dword ptr [ESP + 0xb4],EAX      ; 005c4f80
    MOV EAX,dword ptr [EDX + 0x4]       ; 005c4f87
    MOV dword ptr [ESP + 0xb8],EAX      ; 005c4f8a
    MOV EAX,dword ptr [EDX + 0x8]       ; 005c4f91
    MOV dword ptr [ESP + 0xbc],EAX      ; 005c4f94
    FLD float ptr [ESP + 0xb4]          ; 005c4f9b
        ;   Label: LAB_005c4f9b
    FLD float ptr [ESP + 0xb8]          ; 005c4fa2
    FLD float ptr [ESP + 0xbc]          ; 005c4fa9
    LEA EAX,[ESP + 0xd8]                ; 005c4fb0
    LEA EDX,[ESP + 0x78]                ; 005c4fb7
    FXCH ST2                            ; 005c4fbb
    FADD float ptr [ESP + 0x84]         ; 005c4fbd
    FXCH                                ; 005c4fc4
    FADD float ptr [ESP + 0x88]         ; 005c4fc6
    FXCH ST2                            ; 005c4fcd
    FADD float ptr [ESP + 0x8c]         ; 005c4fcf
    FXCH ST2                            ; 005c4fd6
    FSTP float ptr [ESP + 0xdc]         ; 005c4fd8
    FXCH                                ; 005c4fdf
    FSTP float ptr [ESP + 0xe0]         ; 005c4fe1
    FSTP float ptr [ESP + 0xd8]         ; 005c4fe8
    CMP EDX,EAX                         ; 005c4fef
    JZ 0x005c5017                       ; 005c4ff1
        ;   XREF to: 005c5017 (CONDITIONAL_JUMP)  ; LAB_005c5017
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005c4ff3
    MOV dword ptr [ESP + 0x78],EAX      ; 005c4ffa
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005c4ffe
    MOV dword ptr [ESP + 0x7c],EAX      ; 005c5005
    MOV EAX,dword ptr [ESP + 0xe0]      ; 005c5009
    MOV dword ptr [ESP + 0x80],EAX      ; 005c5010
    LEA EAX,[ESP + 0x78]                ; 005c5017
        ;   Label: LAB_005c5017
    PUSH EAX                            ; 005c501b
    LEA EAX,[ESP + 0xb8]                ; 005c501c
    PUSH EAX                            ; 005c5023
    MOV EBX,dword ptr [0x006810c8]      ; 005c5024 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 005c502a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 005c502b
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0x104],EAX     ; 005c5030
    FLD float ptr [ESP + 0x104]         ; 005c5037
    ADD ESP,0xc                         ; 005c503e
    FLDZ                                ; 005c5041
    FXCH                                ; 005c5043
    FST float ptr [ESP + 0x24]          ; 005c5045
    FSTP double ptr [ESP + 0x10]        ; 005c5049
    FCOMP double ptr [ESP + 0x10]       ; 005c504d
    FNSTSW AX                           ; 005c5051
    SAHF                                ; 005c5053
    JA 0x005c5098                       ; 005c5054
        ;   XREF to: 005c5098 (CONDITIONAL_JUMP)  ; LAB_005c5098
    FLD1                                ; 005c5056
    FCOMP double ptr [ESP + 0x10]       ; 005c5058
    FNSTSW AX                           ; 005c505c
    SAHF                                ; 005c505e
    JBE 0x005c5098                      ; 005c505f
        ;   XREF to: 005c5098 (CONDITIONAL_JUMP)  ; LAB_005c5098
    FLD float ptr [ESP + 0xf0]          ; 005c5061
    FLD float ptr [ESP + 0x24]          ; 005c5068
    FMUL ST1                            ; 005c506c
    FLD float ptr [ESP + 0xf4]          ; 005c506e
    FXCH                                ; 005c5075
    FSUB ST0,ST1                        ; 005c5077
    FXCH ST2                            ; 005c5079
    FSUBRP                              ; 005c507b
    FDIVP                               ; 005c507d
    FLD1                                ; 005c507f
    FSUBRP                              ; 005c5081
    FST float ptr [ESP + 0x24]          ; 005c5083
    FCOMP float ptr [ESP + 0x18]        ; 005c5087
    FNSTSW AX                           ; 005c508b
    SAHF                                ; 005c508d
    JBE 0x005c5098                      ; 005c508e
        ;   XREF to: 005c5098 (CONDITIONAL_JUMP)  ; LAB_005c5098
    MOV EAX,dword ptr [ESP + 0x24]      ; 005c5090
    MOV dword ptr [ESP + 0x18],EAX      ; 005c5094
    MOV ESI,dword ptr [0x006810c8]      ; 005c5098 | g_CDemonSetPtr
        ;   Label: LAB_005c5098
    PUSH ESI                            ; 005c509e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 005c509f
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005c50a4
    FLD float ptr [ESP + 0x18]          ; 005c50a7
        ;   Label: LAB_005c50a7
    FLD1                                ; 005c50ab
    FCOMPP                              ; 005c50ad
    FNSTSW AX                           ; 005c50af
    SAHF                                ; 005c50b1
    JNC 0x005c50bc                      ; 005c50b2
        ;   XREF to: 005c50bc (CONDITIONAL_JUMP)  ; LAB_005c50bc
    MOV dword ptr [ESP + 0x18],0x3f800000 ; 005c50b4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005c50bc
        ;   Label: LAB_005c50bc
    FLD float ptr [ESP + 0x18]          ; 005c50bf
    FSUB float ptr [EAX + 0x1fc8c]      ; 005c50c3
    FLDZ                                ; 005c50c9
    FXCH                                ; 005c50cb
    FST float ptr [ESP + 0x1c]          ; 005c50cd
    FSTP double ptr [ESP + 0x8]         ; 005c50d1
    FCOMP double ptr [ESP + 0x8]        ; 005c50d5
    FNSTSW AX                           ; 005c50d9
    SAHF                                ; 005c50db
    JBE 0x005c513b                      ; 005c50dc
        ;   XREF to: 005c513b (CONDITIONAL_JUMP)  ; LAB_005c513b
    FLD1                                ; 005c50de
    FDIV float ptr [0x00663740]         ; 005c50e0 | FLOAT_00663740
    FLD float ptr [EBP + 0x18]          ; 005c50e6
    FCHS                                ; 005c50e9
    FXCH                                ; 005c50eb
    FSTP float ptr [ESP + 0xe4]         ; 005c50ed
    FMUL float ptr [ESP + 0xe4]         ; 005c50f4
    FLD float ptr [ESP + 0x1c]          ; 005c50fb
    FXCH                                ; 005c50ff
    FSTP float ptr [ESP + 0xec]         ; 005c5101
    FCOMP float ptr [ESP + 0xec]        ; 005c5108
    FNSTSW AX                           ; 005c510f
    SAHF                                ; 005c5111
    JC 0x005c512e                       ; 005c5112
        ;   XREF to: 005c512e (CONDITIONAL_JUMP)  ; LAB_005c512e
    MOV EAX,dword ptr [EBP + 0x14]      ; 005c5114
        ;   Label: LAB_005c5114
    FLD float ptr [EAX + 0x1fc8c]       ; 005c5117
    FADD float ptr [ESP + 0x1c]         ; 005c511d
    FSTP float ptr [EAX + 0x1fc8c]      ; 005c5121
    MOV ESP,EBP                         ; 005c5127
    POP EBP                             ; 005c5129
    POP EDI                             ; 005c512a
    POP ESI                             ; 005c512b
    POP EBX                             ; 005c512c
    RET                                 ; 005c512d
    MOV EAX,dword ptr [ESP + 0xec]      ; 005c512e
        ;   Label: LAB_005c512e
    MOV dword ptr [ESP + 0x1c],EAX      ; 005c5135
    JMP 0x005c5114                      ; 005c5139
        ;   XREF to: 005c5114 (UNCONDITIONAL_JUMP)  ; LAB_005c5114
    JNC 0x005c5114                      ; 005c513b
        ;   XREF to: 005c5114 (CONDITIONAL_JUMP)  ; LAB_005c5114
        ;   Label: LAB_005c513b
    FLD float ptr [EBP + 0x18]          ; 005c513d
    FDIV float ptr [0x0066373c]         ; 005c5140 | FLOAT_0066373c
    FLD float ptr [ESP + 0x1c]          ; 005c5146
    FXCH                                ; 005c514a
    FSTP float ptr [ESP + 0xe8]         ; 005c514c
    FCOMP float ptr [ESP + 0xe8]        ; 005c5153
    FNSTSW AX                           ; 005c515a
    SAHF                                ; 005c515c
    JBE 0x005c5114                      ; 005c515d
        ;   XREF to: 005c5114 (CONDITIONAL_JUMP)  ; LAB_005c5114
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005c515f
    MOV dword ptr [ESP + 0x1c],EAX      ; 005c5166
    JMP 0x005c5114                      ; 005c516a
        ;   XREF to: 005c5114 (UNCONDITIONAL_JUMP)  ; LAB_005c5114

