; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00433c60(CCharacter *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[14]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a0d6f
;   core_bird.cpp_CBird_process_FUN_0040fb40 at 0040fb6d
;   core_darkwolf.cpp_CDarkwolf_process_FUN_005989e0 at 00598a20
;   core_dog.cpp_CZombieDog_process_FUN_004628b0 at 004628ee
;   core_hecaitmx.cpp_CHecaitomix_process_FUN_00597f40 at 00597f99
;   core_npc.cpp_CNPC_process_FUN_00509120 at 005091a9
;   core_prye.cpp_FUN_00518cd0 at 00518ec4
;   core_shadow.cpp_FUN_005438d0 at 00543919
;   core_shotgun.cpp_CShadowsc_process_FUN_00546400 at 0054643e
;   core_spirbear.cpp_CSpiritBear_process_FUN_0059ae00 at 0059ae16
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 s_CZombieDog_005b883d+1
;   TerminatedCString s_Bip01_head_005b8849
;   TerminatedCString s_Bip01_head_005b8854
;   undefined4 DAT_005b8866
;   undefined4 DAT_005b886e
;   undefined4 DAT_005fc5a0
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_007e2cb0
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field112_0x15ac84
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560
;   core_setcolid.cpp_CDemonSet_isPointInWater_FUN_0053ef60
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;   core_xform.cpp_FUN_00583260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433c60
        ;   Label: core_charactr.cpp_FUN_00433c60
    PUSH ESI                            ; 00433c61
    PUSH EDI                            ; 00433c62
    PUSH EBP                            ; 00433c63
    MOV EBP,ESP                         ; 00433c64
    SUB ESP,0xa0                        ; 00433c66
    SUB EBP,0x7a                        ; 00433c6c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00433c6f
    CMP dword ptr [EBX + 0x27bc],0x0    ; 00433c75
    JZ 0x00433ce2                       ; 00433c7c
        ;   XREF to: 00433ce2 (CONDITIONAL_JUMP)  ; LAB_00433ce2
    CMP dword ptr [EBX + 0x27a8],0x0    ; 00433c7e
    JZ 0x00433cea                       ; 00433c85
        ;   XREF to: 00433cea (CONDITIONAL_JUMP)  ; LAB_00433cea
    CMP dword ptr [EBX + 0x27a8],0x0    ; 00433c87
        ;   Label: LAB_00433c87
    JZ 0x00433d20                       ; 00433c8e
        ;   XREF to: 00433d20 (CONDITIONAL_JUMP)  ; LAB_00433d20
    FLD float ptr [EBX + 0x30c8]        ; 00433c94
    FSUB float ptr [EBP + 0x92]         ; 00433c9a
    FST float ptr [EBX + 0x30c8]        ; 00433ca0
    FLDZ                                ; 00433ca6
    FCOMPP                              ; 00433ca8
    FNSTSW AX                           ; 00433caa
    SAHF                                ; 00433cac
    JBE 0x00433ce2                      ; 00433cad
        ;   XREF to: 00433ce2 (CONDITIONAL_JUMP)  ; LAB_00433ce2
    CMP dword ptr [EBX + 0x30cc],0x0    ; 00433caf
    JZ 0x00433d00                       ; 00433cb6
        ;   XREF to: 00433d00 (CONDITIONAL_JUMP)  ; LAB_00433d00
    FLD1                                ; 00433cb8
    FADD float ptr [EBX + 0x30c8]       ; 00433cba
    FSTP float ptr [EBX + 0x30c8]       ; 00433cc0
        ;   Label: LAB_00433cc0
    CMP dword ptr [EBX + 0x30cc],0x0    ; 00433cc6
    SETZ AL                             ; 00433ccd
    AND EAX,0xff                        ; 00433cd0
    MOV dword ptr [EBX + 0x30cc],EAX    ; 00433cd5
    XOR EAX,EAX                         ; 00433cdb
    MOV [0x007e2cb0],EAX                ; 00433cdd | DAT_007e2cb0
    LEA ESP,[EBP + 0x7a]                ; 00433ce2
        ;   Label: LAB_00433ce2
    POP EBP                             ; 00433ce5
    POP EDI                             ; 00433ce6
    POP ESI                             ; 00433ce7
    POP EBX                             ; 00433ce8
    RET                                 ; 00433ce9
    PUSH EBX                            ; 00433cea
        ;   Label: LAB_00433cea
    MOV EAX,dword ptr [EBX + 0x154]     ; 00433ceb
    CALL dword ptr [EAX + 0x10c]        ; 00433cf1
    ADD ESP,0x4                         ; 00433cf7
    TEST EAX,EAX                        ; 00433cfa
    JNZ 0x00433ce2                      ; 00433cfc
        ;   XREF to: 00433ce2 (CONDITIONAL_JUMP)  ; LAB_00433ce2
    JMP 0x00433c87                      ; 00433cfe
        ;   XREF to: 00433c87 (UNCONDITIONAL_JUMP)  ; LAB_00433c87
    PUSH 0x41000000                     ; 00433d00
        ;   Label: LAB_00433d00
    PUSH 0x40a00000                     ; 00433d05
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00433d0a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00433d0f
    FLD float ptr [EBP + 0x76]          ; 00433d12
    FADD float ptr [EBX + 0x30c8]       ; 00433d15
    ADD ESP,0x8                         ; 00433d1b
    JMP 0x00433cc0                      ; 00433d1e
        ;   XREF to: 00433cc0 (UNCONDITIONAL_JUMP)  ; LAB_00433cc0
    MOV EAX,[0x00603b28]                ; 00433d20 | g_CDemonSetPtr
        ;   Label: LAB_00433d20
    FLD float ptr [EAX + 0x15ac84]      ; 00433d25 | g_CDemonSetInstance.field112_0x15ac84
    FCOMP double ptr [0x005b8866]       ; 00433d2b | DAT_005b8866
    FNSTSW AX                           ; 00433d31
    SAHF                                ; 00433d33
    JNC 0x00433e53                      ; 00433d34
        ;   XREF to: 00433e53 (CONDITIONAL_JUMP)  ; LAB_00433e53
    MOV EDI,dword ptr [EBX + 0x30cc]    ; 00433d3a
        ;   Label: LAB_00433d3a
    TEST EDI,EDI                        ; 00433d40
    JZ 0x00433e71                       ; 00433d42
        ;   XREF to: 00433e71 (CONDITIONAL_JUMP)  ; LAB_00433e71
    FLD float ptr [EBX + 0x30c8]        ; 00433d48
        ;   Label: LAB_00433d48
    FSUB float ptr [EBP + 0x92]         ; 00433d4e
    FST float ptr [EBX + 0x30c8]        ; 00433d54
    FLDZ                                ; 00433d5a
    FCOMPP                              ; 00433d5c
    FNSTSW AX                           ; 00433d5e
    SAHF                                ; 00433d60
    JBE 0x00433ce2                      ; 00433d61
        ;   XREF to: 00433ce2 (CONDITIONAL_JUMP)  ; LAB_00433ce2
    LEA EAX,[EBX + 0x158]               ; 00433d67
    PUSH EAX                            ; 00433d6d
    MOV dword ptr [EBX + 0x30c8],0x3fc00000 ; 00433d6e
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 00433d78
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00433d7d
    PUSH 0x0                            ; 00433d80
    PUSH 0x5b8854                       ; 00433d82 | = "Bip01 head"
    PUSH EAX                            ; 00433d87
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00433d88
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00433d8d
    CMP EAX,-0x1                        ; 00433d90
    JZ 0x00433ce2                       ; 00433d93
        ;   XREF to: 00433ce2 (CONDITIONAL_JUMP)  ; LAB_00433ce2
    MOV EDI,0x3f000000                  ; 00433d99
    MOV ESI,EAX                         ; 00433d9e
    SHL EAX,0x2                         ; 00433da0
    XOR ECX,ECX                         ; 00433da3
    SUB EAX,ESI                         ; 00433da5
    MOV dword ptr [EBP + -0x2],ECX      ; 00433da7
    SHL EAX,0x4                         ; 00433daa
    LEA ESI,[EBX + 0xfd8]               ; 00433dad
    MOV dword ptr [EBP + 0x6],EDI       ; 00433db3
    ADD EAX,ESI                         ; 00433db6
    MOV ESI,0x3e4ccccd                  ; 00433db8
    PUSH EAX                            ; 00433dbd
    LEA EAX,[EBP + -0x2]                ; 00433dbe
    MOV dword ptr [EBP + 0x2],ESI       ; 00433dc1
    PUSH EAX                            ; 00433dc4
    LEA ESI,[EBP + 0x46]                ; 00433dc5
    LEA EDI,[EBP + 0x22]                ; 00433dc8
    CALL core_xform.cpp_FUN_00583260    ; 00433dcb
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00433dd0
    LEA EAX,[EBP + 0x22]                ; 00433dd3
    LEA ESI,[EBP + 0x46]                ; 00433dd6
    PUSH EAX                            ; 00433dd9
    MOVSD ES:EDI,ESI                    ; 00433dda
    MOVSD ES:EDI,ESI                    ; 00433ddb
    MOVSD ES:EDI,ESI                    ; 00433ddc
    PUSH EBX                            ; 00433ddd
    LEA ESI,[EBP + -0x1a]               ; 00433dde
    CALL core_actor.cpp_FUN_00408b80    ; 00433de1
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00433de6
    LEA EAX,[EBP + 0x52]                ; 00433de9
    LEA EDI,[EBP + 0x52]                ; 00433dec
    PUSH EAX                            ; 00433def
    MOV EAX,[0x00603b28]                ; 00433df0 | g_CDemonSetPtr
    LEA ESI,[EBP + -0x1a]               ; 00433df5
    PUSH EAX                            ; 00433df8 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 00433df9
    MOVSD ES:EDI,ESI                    ; 00433dfa
    MOVSD ES:EDI,ESI                    ; 00433dfb
    CALL core_setcolid.cpp_CDemonSet_isPointInWater_FUN_0053ef60 ; 00433dfc
        ;   XREF to: 0053ef60 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_isPointInWater_FUN_0053ef60(CDemonSet * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00433e01
    TEST EAX,EAX                        ; 00433e04
    JNZ 0x00433ce2                      ; 00433e06
        ;   XREF to: 00433ce2 (CONDITIONAL_JUMP)  ; LAB_00433ce2
    CMP dword ptr [EBX + 0x30cc],0x0    ; 00433e0c
    SETZ AL                             ; 00433e13
    AND EAX,0xff                        ; 00433e16
    MOV dword ptr [EBX + 0x30cc],EAX    ; 00433e1b
    JZ 0x00433f77                       ; 00433e21
        ;   XREF to: 00433f77 (CONDITIONAL_JUMP)  ; LAB_00433f77
    PUSH 0x40400000                     ; 00433e27
    PUSH 0x3fc00000                     ; 00433e2c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00433e31
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00433e36
    FLD float ptr [EBP + 0x76]          ; 00433e39
    FADD float ptr [EBX + 0x30c8]       ; 00433e3c
    ADD ESP,0x8                         ; 00433e42
    FSTP float ptr [EBX + 0x30c8]       ; 00433e45
    LEA ESP,[EBP + 0x7a]                ; 00433e4b
    POP EBP                             ; 00433e4e
    POP EDI                             ; 00433e4f
    POP ESI                             ; 00433e50
    POP EBX                             ; 00433e51
    RET                                 ; 00433e52
    PUSH 0x5b883e                       ; 00433e53 | s_CZombieDog_005b883d+1
        ;   Label: LAB_00433e53
    PUSH EBX                            ; 00433e58
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 00433e59
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00433e5e
    TEST EAX,EAX                        ; 00433e61
    JNZ 0x00433d3a                      ; 00433e63
        ;   XREF to: 00433d3a (CONDITIONAL_JUMP)  ; LAB_00433d3a
    LEA ESP,[EBP + 0x7a]                ; 00433e69
    POP EBP                             ; 00433e6c
    POP EDI                             ; 00433e6d
    POP ESI                             ; 00433e6e
    POP EBX                             ; 00433e6f
    RET                                 ; 00433e70
    FLD float ptr [EBX + 0x30c4]        ; 00433e71
        ;   Label: LAB_00433e71
    FSUB float ptr [EBP + 0x92]         ; 00433e77
    FST float ptr [EBX + 0x30c4]        ; 00433e7d
    FLDZ                                ; 00433e83
    FCOMPP                              ; 00433e85
    FNSTSW AX                           ; 00433e87
    SAHF                                ; 00433e89
    JBE 0x00433d48                      ; 00433e8a
        ;   XREF to: 00433d48 (CONDITIONAL_JUMP)  ; LAB_00433d48
    FLD float ptr [EBX + 0x30c4]        ; 00433e90
    MOV EDX,0xbf000000                  ; 00433e96
    MOV ECX,0x3f800000                  ; 00433e9b
    LEA EAX,[EBP + 0x5e]                ; 00433ea0
    LEA ESI,[EBP + 0x6a]                ; 00433ea3
    FADD float ptr [0x005b886e]         ; 00433ea6 | DAT_005b886e
    PUSH EAX                            ; 00433eac
    FSTP float ptr [EBX + 0x30c4]       ; 00433ead
    PUSH EBX                            ; 00433eb3
    MOV dword ptr [EBP + 0x5e],EDI      ; 00433eb4
    MOV dword ptr [EBP + 0x62],EDX      ; 00433eb7
    MOV dword ptr [EBP + 0x66],ECX      ; 00433eba
    CALL core_actor.cpp_FUN_00408b00    ; 00433ebd
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA EDI,[EBP + 0xa]                 ; 00433ec2
    ADD ESP,0x8                         ; 00433ec5
    LEA EAX,[EBX + 0x158]               ; 00433ec8
    LEA ESI,[EBP + 0x6a]                ; 00433ece
    PUSH EAX                            ; 00433ed1
    MOVSD ES:EDI,ESI                    ; 00433ed2
    MOVSD ES:EDI,ESI                    ; 00433ed3
    MOVSD ES:EDI,ESI                    ; 00433ed4
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 00433ed5
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00433eda
    PUSH 0x0                            ; 00433edd
    PUSH 0x5b8849                       ; 00433edf | = "Bip01 head"
    PUSH EAX                            ; 00433ee4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00433ee5
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00433eea
    CMP EAX,-0x1                        ; 00433eed
    JZ 0x00433d48                       ; 00433ef0
        ;   XREF to: 00433d48 (CONDITIONAL_JUMP)  ; LAB_00433d48
    MOV ESI,EAX                         ; 00433ef6
    SHL EAX,0x2                         ; 00433ef8
    SUB EAX,ESI                         ; 00433efb
    MOV ESI,EAX                         ; 00433efd
    SHL ESI,0x4                         ; 00433eff
    LEA EAX,[EBX + 0xfd8]               ; 00433f02
    MOV EDI,0x3e4ccccd                  ; 00433f08
    ADD EAX,ESI                         ; 00433f0d
    MOV dword ptr [EBP + -0x22],EDI     ; 00433f0f
    PUSH EAX                            ; 00433f12
    MOV EAX,0x3f000000                  ; 00433f13
    XOR ESI,ESI                         ; 00433f18
    MOV dword ptr [EBP + -0x1e],EAX     ; 00433f1a
    LEA EAX,[EBP + -0x26]               ; 00433f1d
    MOV dword ptr [EBP + -0x26],ESI     ; 00433f20
    PUSH EAX                            ; 00433f23
    LEA ESI,[EBP + 0x16]                ; 00433f24
    LEA EDI,[EBP + -0xe]                ; 00433f27
    CALL core_xform.cpp_FUN_00583260    ; 00433f2a
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00433f2f
    LEA EAX,[EBP + -0xe]                ; 00433f32
    LEA ESI,[EBP + 0x16]                ; 00433f35
    PUSH EAX                            ; 00433f38
    MOVSD ES:EDI,ESI                    ; 00433f39
    MOVSD ES:EDI,ESI                    ; 00433f3a
    MOVSD ES:EDI,ESI                    ; 00433f3b
    PUSH EBX                            ; 00433f3c
    LEA ESI,[EBP + 0x2e]                ; 00433f3d
    CALL core_actor.cpp_FUN_00408b80    ; 00433f40
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00433f45
    PUSH 0x411a                         ; 00433f48
    LEA EAX,[EBP + 0xa]                 ; 00433f4d
    PUSH EAX                            ; 00433f50
    PUSH 0x3f000000                     ; 00433f51
    LEA EAX,[EBP + 0x3a]                ; 00433f56
    LEA EDI,[EBP + 0x3a]                ; 00433f59
    PUSH EAX                            ; 00433f5c
    MOV EDX,dword ptr [0x005fc5a0]      ; 00433f5d | DAT_005fc5a0
    LEA ESI,[EBP + 0x2e]                ; 00433f63
    PUSH EDX                            ; 00433f66
    MOVSD ES:EDI,ESI                    ; 00433f67
    MOVSD ES:EDI,ESI                    ; 00433f68
    MOVSD ES:EDI,ESI                    ; 00433f69
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560 ; 00433f6a
        ;   XREF to: 004a2560 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 00433f6f
    JMP 0x00433d48                      ; 00433f72
        ;   XREF to: 00433d48 (UNCONDITIONAL_JUMP)  ; LAB_00433d48
    PUSH 0x3fc00000                     ; 00433f77
        ;   Label: LAB_00433f77
    PUSH 0x3f800000                     ; 00433f7c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00433f81
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00433f86
    FLD float ptr [EBP + 0x76]          ; 00433f89
    FADD float ptr [EBX + 0x30c8]       ; 00433f8c
    ADD ESP,0x8                         ; 00433f92
    FSTP float ptr [EBX + 0x30c8]       ; 00433f95
    LEA ESP,[EBP + 0x7a]                ; 00433f9b
    POP EBP                             ; 00433f9e
    POP EDI                             ; 00433f9f
    POP ESI                             ; 00433fa0
    POP EBX                             ; 00433fa1
    RET                                 ; 00433fa2

