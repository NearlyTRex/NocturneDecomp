; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_fireProjectile_FUN_005ee830(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined1       Stack[-0x40]:1  local_40
; undefined1       Stack[-0x34]:1  local_34
; undefined1       Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CFireEffect g_CFireEffectInstance
;   undefined4 g_CHeroClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_fire.cpp_CFireEffect_FUN_004c8230
;   core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ee830
        ;   Label: core_weapon.cpp_CWeapon_fireProjectile_FUN_005ee830
    PUSH ESI                            ; 005ee831
    PUSH EDI                            ; 005ee832
    PUSH EBP                            ; 005ee833
    MOV EBP,ESP                         ; 005ee834
    SUB ESP,0xd8                        ; 005ee836
    SUB EBP,0x7e                        ; 005ee83c
    MOV EBX,dword ptr [EBP + 0x92]      ; 005ee83f
    MOV EDX,dword ptr [0x006703ec]      ; 005ee845 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 005ee84b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005ee84c
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005ee851
    TEST EAX,EAX                        ; 005ee854
    JZ 0x005ee861                       ; 005ee856
        ;   XREF to: 005ee861 (CONDITIONAL_JUMP)  ; LAB_005ee861
    LEA ESP,[EBP + 0x7e]                ; 005ee858
    POP EBP                             ; 005ee85b
    POP EDI                             ; 005ee85c
    POP ESI                             ; 005ee85d
    POP EBX                             ; 005ee85e
    NOP                                 ; 005ee85f
    LEA EAX,[EBP + 0x4e]                ; 005ee861
        ;   Label: LAB_005ee861
    PUSH EAX                            ; 005ee864
    MOV EDX,dword ptr [EBX + 0x154]     ; 005ee865
    PUSH EBX                            ; 005ee86b
    CALL dword ptr [EDX + 0xf4]         ; 005ee86c
    ADD ESP,0x8                         ; 005ee872
    PUSH EAX                            ; 005ee875
    LEA EAX,[EBP + 0x66]                ; 005ee876
    PUSH EAX                            ; 005ee879
    PUSH EBX                            ; 005ee87a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005ee87b
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 005ee880
    ADD ESP,0xc                         ; 005ee886
    MOV dword ptr [EBP + 0x7a],EAX      ; 005ee889
    LEA EAX,[EBP + 0x72]                ; 005ee88c
    PUSH EAX                            ; 005ee88f
    LEA EAX,[EBP + 0x5a]                ; 005ee890
    PUSH EAX                            ; 005ee893
    XOR ECX,ECX                         ; 005ee894
    PUSH EBX                            ; 005ee896
    MOV dword ptr [EBP + 0x72],ECX      ; 005ee897
    MOV dword ptr [EBP + 0x76],ECX      ; 005ee89a
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005ee89d
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005ee8a2
    MOV EDI,dword ptr [0x006810c8]      ; 005ee8a5 | g_CDemonSetPtr
    PUSH EDI                            ; 005ee8ab | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 005ee8ac
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005ee8b1
    PUSH EBX                            ; 005ee8b4
    MOV EAX,[0x006810c8]                ; 005ee8b5 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 005ee8ba | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005ee8bb
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EDX,dword ptr [EBX + 0x304]     ; 005ee8c0
    ADD ESP,0x8                         ; 005ee8c6
    TEST EDX,EDX                        ; 005ee8c9
    JZ 0x005ee8dd                       ; 005ee8cb
        ;   XREF to: 005ee8dd (CONDITIONAL_JUMP)  ; LAB_005ee8dd
    PUSH EDX                            ; 005ee8cd
    MOV ESI,dword ptr [0x006810c8]      ; 005ee8ce | g_CDemonSetPtr
    PUSH ESI                            ; 005ee8d4 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005ee8d5
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005ee8da
    LEA EAX,[EBP + -0x6]                ; 005ee8dd
        ;   Label: LAB_005ee8dd
    PUSH EAX                            ; 005ee8e0
    MOV EDI,0x1                         ; 005ee8e1
    CALL core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0 ; 005ee8e6
        ;   XREF to: 004c81f0 (UNCONDITIONAL_CALL)  ; SLaserInfo * core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0(SLaserInfo * this_ptr)
    MOV dword ptr [EBP + 0x2],EDI       ; 005ee8eb
    MOV EAX,dword ptr [EBX + 0x2f4]     ; 005ee8ee
    MOV dword ptr [EBP + 0x6],EAX       ; 005ee8f4
    MOV EAX,dword ptr [EBX + 0x2f8]     ; 005ee8f7
    MOV dword ptr [EBP + 0xa],EAX       ; 005ee8fd
    MOV EAX,dword ptr [EBX + 0x2fc]     ; 005ee900
    ADD ESP,0x4                         ; 005ee906
    MOV dword ptr [EBP + 0xe],EAX       ; 005ee909
    MOV EAX,0x3f800000                  ; 005ee90c
    MOV EDX,dword ptr [0x02db880c]      ; 005ee911 | g_CHeroClassInfo.name_hash
    MOV dword ptr [EBP + -0x6],EAX      ; 005ee917
    PUSH EDX                            ; 005ee91a
    MOV ECX,dword ptr [EBX + 0x304]     ; 005ee91b
    PUSH ECX                            ; 005ee921
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005ee922
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    XOR EBX,EBX                         ; 005ee927
    ADD ESP,0x8                         ; 005ee929
    TEST EAX,EAX                        ; 005ee92c
    SETNZ AL                            ; 005ee92e
    MOV BL,AL                           ; 005ee931
    MOV EAX,dword ptr [EBP + -0x6]      ; 005ee933
    MOV dword ptr [EBP + -0x5a],EAX     ; 005ee936
    MOV EAX,dword ptr [EBP + -0x2]      ; 005ee939
    MOV dword ptr [EBP + -0x56],EAX     ; 005ee93c
    MOV EAX,dword ptr [EBP + 0x2]       ; 005ee93f
    MOV dword ptr [EBP + -0x52],EAX     ; 005ee942
    MOV EAX,dword ptr [EBP + 0x6]       ; 005ee945
    MOV dword ptr [EBP + -0x4e],EAX     ; 005ee948
    MOV EAX,dword ptr [EBP + 0xa]       ; 005ee94b
    MOV dword ptr [EBP + -0x4a],EAX     ; 005ee94e
    MOV EAX,dword ptr [EBP + 0xe]       ; 005ee951
    MOV dword ptr [EBP + -0x46],EAX     ; 005ee954
    MOV EAX,dword ptr [EBP + 0x1a]      ; 005ee957
    MOV dword ptr [EBP + -0x3a],EAX     ; 005ee95a
    MOV EAX,dword ptr [EBP + 0x1e]      ; 005ee95d
    MOV dword ptr [EBP + -0x36],EAX     ; 005ee960
    MOV EAX,dword ptr [EBP + 0x22]      ; 005ee963
    MOV dword ptr [EBP + -0x32],EAX     ; 005ee966
    MOV EAX,dword ptr [EBP + 0x26]      ; 005ee969
    MOV dword ptr [EBP + -0x2e],EAX     ; 005ee96c
    MOV EAX,dword ptr [EBP + 0x2a]      ; 005ee96f
    MOV dword ptr [EBP + -0x2a],EAX     ; 005ee972
    MOV EAX,dword ptr [EBP + 0x2e]      ; 005ee975
    MOV dword ptr [EBP + -0x26],EAX     ; 005ee978
    MOV EAX,dword ptr [EBP + 0x32]      ; 005ee97b
    MOV dword ptr [EBP + -0x22],EAX     ; 005ee97e
    MOV EAX,dword ptr [EBP + 0x36]      ; 005ee981
    MOV dword ptr [EBP + -0x1e],EAX     ; 005ee984
    MOV EAX,dword ptr [EBP + 0x3a]      ; 005ee987
    MOV dword ptr [EBP + -0x1a],EAX     ; 005ee98a
    MOV EAX,dword ptr [EBP + 0x3e]      ; 005ee98d
    MOV dword ptr [EBP + -0x16],EAX     ; 005ee990
    MOV EAX,dword ptr [EBP + 0x42]      ; 005ee993
    MOV dword ptr [EBP + -0x12],EAX     ; 005ee996
    MOV EAX,dword ptr [EBP + 0x46]      ; 005ee999
    MOV dword ptr [EBP + -0xe],EAX      ; 005ee99c
    MOV EAX,dword ptr [EBP + 0x4a]      ; 005ee99f
    PUSH 0x0                            ; 005ee9a2
    MOV dword ptr [EBP + -0xa],EAX      ; 005ee9a4
    LEA EAX,[EBP + -0x5a]               ; 005ee9a7
    PUSH EAX                            ; 005ee9aa
    LEA EAX,[EBP + 0x5a]                ; 005ee9ab
    PUSH EAX                            ; 005ee9ae
    LEA EAX,[EBP + 0x66]                ; 005ee9af
    MOV dword ptr [EBP + 0x16],EDI      ; 005ee9b2
    PUSH EAX                            ; 005ee9b5
    MOV EAX,[0x0067a3d0]                ; 005ee9b6 | g_CFireEffectInstance | g_CFireEffectPtr
    MOV dword ptr [EBP + -0x3e],EDI     ; 005ee9bb
    PUSH EAX                            ; 005ee9be | g_CFireEffectInstance
    MOV dword ptr [EBP + 0x12],EBX      ; 005ee9bf
    MOV dword ptr [EBP + -0x42],EBX     ; 005ee9c2
    CALL core_fire.cpp_CFireEffect_FUN_004c8230 ; 005ee9c5
        ;   XREF to: 004c8230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c8230(CFireEffect * this_ptr)
    ADD ESP,0x14                        ; 005ee9ca
    MOV EDX,dword ptr [0x006810c8]      ; 005ee9cd | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 005ee9d3 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 005ee9d4
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005ee9d9
    LEA ESP,[EBP + 0x7e]                ; 005ee9dc
    POP EBP                             ; 005ee9df
    POP EDI                             ; 005ee9e0
    POP ESI                             ; 005ee9e1
    POP EBX                             ; 005ee9e2
    RET                                 ; 005ee9e3

