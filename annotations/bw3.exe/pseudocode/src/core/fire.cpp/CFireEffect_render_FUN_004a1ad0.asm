; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_render_FUN_004a1ad0(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00535a80 at 00535c72
;   core_set.cpp_FUN_00535da0 at 00536151
;   core_set.cpp_FUN_005365c0 at 005367e5
;   core_set.cpp_FUN_00536990 at 00536ba6
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c74ea0
;   undefined4 DAT_01c74ecc
;   undefined4 DAT_01c8aea0
;   undefined4 DAT_01c8eea8
;   undefined4 g_SparkPool[0].base.lifetime_remaining
;   undefined4 g_SparkPool[0].base.vtable
;   undefined4 g_SparkPool[1].base.lifetime_remaining
;   undefined4 g_SparkPool[1].base.vtable
;   undefined4 CFirefly_ARRAY_01cba2b8[0].base.lifetime_remaining
;   undefined4 CFirefly_ARRAY_01cba2b8[0].base.vtable
;   undefined4 CFirefly_ARRAY_01cba2b8[1].base.lifetime_remaining
;   undefined4 CFirefly_ARRAY_01cba2b8[1].base.vtable
;   ... and 31 more
;
; Called Functions:
;   core_fire.cpp_CBulletHole_render_FUN_00497610
;   core_fire.cpp_CBulletTrail_render_FUN_0049ad20
;   core_fire.cpp_CFireball_setupRenderState_FUN_004995a0
;   core_fire.cpp_CFirefly_setupRenderState_FUN_00498a10
;   core_fire.cpp_CGunFlame_render_FUN_0049e500
;   core_fire.cpp_CLaserBeam_render_FUN_0049b1d0
;   core_fire.cpp_CMuzzleFlash_render_FUN_0049a480
;   core_fire.cpp_CSmokeParticle_render_FUN_00496f60
;   core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00496c60
;   core_fire.cpp_CSpark_setupRenderState_FUN_00497f70
;   core_fire.cpp_CStake_render_FUN_00497dc0
;   core_fire.cpp_CTrail_render_FUN_004a0680
;   core_fire.cpp_FUN_004975a0
;   core_fire.cpp_FUN_0049c8e0
;   core_fire.cpp_FUN_0049d500
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1ad0
        ;   Label: core_fire.cpp_CFireEffect_render_FUN_004a1ad0
    PUSH ESI                            ; 004a1ad1
    PUSH EDI                            ; 004a1ad2
    PUSH EBP                            ; 004a1ad3
    MOV EBP,ESP                         ; 004a1ad4
    AND ESP,0xfffffff8                  ; 004a1ad6
    MOV EDX,dword ptr [0x01c8eea8]      ; 004a1ad9 | DAT_01c8eea8
    XOR ESI,ESI                         ; 004a1adf
    TEST EDX,EDX                        ; 004a1ae1
    JLE 0x004a1b05                      ; 004a1ae3
        ;   XREF to: 004a1b05 (CONDITIONAL_JUMP)  ; LAB_004a1b05
    XOR EBX,EBX                         ; 004a1ae5
    CMP dword ptr [EBX + 0x1c8eeb0],0x0 ; 004a1ae7
        ;   Label: LAB_004a1ae7
    JZ 0x004a1e77                       ; 004a1aee
        ;   XREF to: 004a1e77 (CONDITIONAL_JUMP)  ; LAB_004a1e77
    MOV ECX,dword ptr [0x01c8eea8]      ; 004a1af4 | DAT_01c8eea8
        ;   Label: LAB_004a1af4
    INC ESI                             ; 004a1afa
    ADD EBX,0x260                       ; 004a1afb
    CMP ESI,ECX                         ; 004a1b01
    JL 0x004a1ae7                       ; 004a1b03
        ;   XREF to: 004a1ae7 (CONDITIONAL_JUMP)  ; LAB_004a1ae7
    MOV EBX,0x1cf2784                   ; 004a1b05
        ;   Label: LAB_004a1b05
    LEA ESI,[EBX + 0x1400]              ; 004a1b0a
    FLD float ptr [EBX + 0x24]          ; 004a1b10 | g_RockPool[0].base.lifetime_remaining | g_RockPool[1].base.lifetime_remaining
        ;   Label: LAB_004a1b10
    FLDZ                                ; 004a1b13
    FCOMPP                              ; 004a1b15
    FNSTSW AX                           ; 004a1b17
    SAHF                                ; 004a1b19
    JNC 0x004a1b26                      ; 004a1b1a
        ;   XREF to: 004a1b26 (CONDITIONAL_JUMP)  ; LAB_004a1b26
    PUSH EBX                            ; 004a1b1c
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a1b1d | g_RockPool[0].base.vtable | g_RockPool[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 004a1b20
    ADD ESP,0x4                         ; 004a1b23
    ADD EBX,0x50                        ; 004a1b26
        ;   Label: LAB_004a1b26
    CMP EBX,ESI                         ; 004a1b29
    JNZ 0x004a1b10                      ; 004a1b2b
        ;   XREF to: 004a1b10 (CONDITIONAL_JUMP)  ; LAB_004a1b10
    MOV EBX,0x1cf3b88                   ; 004a1b2d
    LEA ESI,[EBX + 0x1500]              ; 004a1b32
    FLD float ptr [EBX + 0x24]          ; 004a1b38 | CLeaf_ARRAY_01cf3b88[0].base.lifetime_remaining | CLeaf_ARRAY_01cf3b88[1].base.lifetime_remaining
        ;   Label: LAB_004a1b38
    FLDZ                                ; 004a1b3b
    FCOMPP                              ; 004a1b3d
    FNSTSW AX                           ; 004a1b3f
    SAHF                                ; 004a1b41
    JNC 0x004a1b4e                      ; 004a1b42
        ;   XREF to: 004a1b4e (CONDITIONAL_JUMP)  ; LAB_004a1b4e
    PUSH EBX                            ; 004a1b44
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a1b45 | CLeaf_ARRAY_01cf3b88[0].base.vtable | CLeaf_ARRAY_01cf3b88[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 004a1b48
    ADD ESP,0x4                         ; 004a1b4b
    ADD EBX,0x54                        ; 004a1b4e
        ;   Label: LAB_004a1b4e
    CMP EBX,ESI                         ; 004a1b51
    JNZ 0x004a1b38                      ; 004a1b53
        ;   XREF to: 004a1b38 (CONDITIONAL_JUMP)  ; LAB_004a1b38
    MOV EBX,0x1cba2b8                   ; 004a1b55
    LEA ESI,[EBX + 0x1700]              ; 004a1b5a
    FLD float ptr [EBX + 0x24]          ; 004a1b60 | CFirefly_ARRAY_01cba2b8[0].base.lifetime_remaining | CFirefly_ARRAY_01cba2b8[1].base.lifetime_remaining
        ;   Label: LAB_004a1b60
    FLDZ                                ; 004a1b63
    FCOMPP                              ; 004a1b65
    FNSTSW AX                           ; 004a1b67
    SAHF                                ; 004a1b69
    JNC 0x004a1b76                      ; 004a1b6a
        ;   XREF to: 004a1b76 (CONDITIONAL_JUMP)  ; LAB_004a1b76
    PUSH EBX                            ; 004a1b6c
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a1b6d | CFirefly_ARRAY_01cba2b8[0].base.vtable | CFirefly_ARRAY_01cba2b8[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 004a1b70
    ADD ESP,0x4                         ; 004a1b73
    ADD EBX,0x5c                        ; 004a1b76
        ;   Label: LAB_004a1b76
    CMP EBX,ESI                         ; 004a1b79
    JNZ 0x004a1b60                      ; 004a1b7b
        ;   XREF to: 004a1b60 (CONDITIONAL_JUMP)  ; LAB_004a1b60
    PUSH 0x1cefe80                      ; 004a1b7d
    MOV EBX,0x1cefe80                   ; 004a1b82
    CALL core_fire.cpp_CFireball_setupRenderState_FUN_004995a0 ; 004a1b87
        ;   XREF to: 004995a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireball_setupRenderState_FUN_004995a0(CFireball * this_ptr)
    ADD ESP,0x4                         ; 004a1b8c
    LEA ESI,[EBX + 0x2900]              ; 004a1b8f
    FLD float ptr [EBX + 0x24]          ; 004a1b95 | g_FireballPool[0].base.lifetime_remaining | g_FireballPool[1].base.lifetime_remaining
        ;   Label: LAB_004a1b95
    FLDZ                                ; 004a1b98
    FCOMPP                              ; 004a1b9a
    FNSTSW AX                           ; 004a1b9c
    SAHF                                ; 004a1b9e
    JNC 0x004a1bab                      ; 004a1b9f
        ;   XREF to: 004a1bab (CONDITIONAL_JUMP)  ; LAB_004a1bab
    PUSH EBX                            ; 004a1ba1
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a1ba2 | g_FireballPool[0].base.vtable | g_FireballPool[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 004a1ba5
    ADD ESP,0x4                         ; 004a1ba8
    ADD EBX,0xa4                        ; 004a1bab
        ;   Label: LAB_004a1bab
    CMP EBX,ESI                         ; 004a1bb1
    JNZ 0x004a1b95                      ; 004a1bb3
        ;   XREF to: 004a1b95 (CONDITIONAL_JUMP)  ; LAB_004a1b95
    MOV EBX,0x1d028c8                   ; 004a1bb5
    LEA ESI,[EBX + 0x12c0]              ; 004a1bba
    PUSH EBX                            ; 004a1bc0
        ;   Label: LAB_004a1bc0
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a1bc1 | g_ShellPool[0].base.vtable | g_ShellPool[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 004a1bc4
    ADD EBX,0x60                        ; 004a1bc7
    ADD ESP,0x4                         ; 004a1bca
    CMP EBX,ESI                         ; 004a1bcd
    JNZ 0x004a1bc0                      ; 004a1bcf
        ;   XREF to: 004a1bc0 (CONDITIONAL_JUMP)  ; LAB_004a1bc0
    MOV EAX,[0x005f2afc]                ; 004a1bd1 | DAT_005f2afc
    PUSH EAX                            ; 004a1bd6 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 004a1bd7
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004a1bdc
    TEST EAX,EAX                        ; 004a1bdf
    JNZ 0x004a1e70                      ; 004a1be1
        ;   XREF to: 004a1e70 (CONDITIONAL_JUMP)  ; LAB_004a1e70
    PUSH EAX                            ; 004a1be7
    PUSH EAX                            ; 004a1be8
    PUSH EAX                            ; 004a1be9
    PUSH EAX                            ; 004a1bea
    PUSH EAX                            ; 004a1beb
    MOV EDX,dword ptr [0x00603b28]      ; 004a1bec | g_CDemonSetPtr
    PUSH EDX                            ; 004a1bf2
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0 ; 004a1bf3
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 004a1bf8
    PUSH 0x1c8aea8                      ; 004a1bfb
    XOR ESI,ESI                         ; 004a1c00
    CALL core_fire.cpp_FUN_004975a0     ; 004a1c02
        ;   XREF to: 004975a0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004975a0()
    MOV ECX,dword ptr [0x01c8aea0]      ; 004a1c07 | DAT_01c8aea0
    ADD ESP,0x4                         ; 004a1c0d
    TEST ECX,ECX                        ; 004a1c10
    JLE 0x004a1c3d                      ; 004a1c12
        ;   XREF to: 004a1c3d (CONDITIONAL_JUMP)  ; LAB_004a1c3d
    XOR EBX,EBX                         ; 004a1c14
    CMP dword ptr [EBX + 0x1c8aeb8],0x0 ; 004a1c16
        ;   Label: LAB_004a1c16
    JZ 0x004a1c2f                       ; 004a1c1d
        ;   XREF to: 004a1c2f (CONDITIONAL_JUMP)  ; LAB_004a1c2f
    MOV EAX,0x1c8aea8                   ; 004a1c1f
    ADD EAX,EBX                         ; 004a1c24
    PUSH EAX                            ; 004a1c26
    CALL core_fire.cpp_CBulletHole_render_FUN_00497610 ; 004a1c27
        ;   XREF to: 00497610 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_render_FUN_00497610(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 004a1c2c
    MOV EDI,dword ptr [0x01c8aea0]      ; 004a1c2f | DAT_01c8aea0
        ;   Label: LAB_004a1c2f
    INC ESI                             ; 004a1c35
    ADD EBX,0x40                        ; 004a1c36
    CMP ESI,EDI                         ; 004a1c39
    JL 0x004a1c16                       ; 004a1c3b
        ;   XREF to: 004a1c16 (CONDITIONAL_JUMP)  ; LAB_004a1c16
    PUSH 0x1c74ea0                      ; 004a1c3d | DAT_01c74ea0
        ;   Label: LAB_004a1c3d
    MOV EBX,0x1c74ea0                   ; 004a1c42
    CALL core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00496c60 ; 004a1c47
        ;   XREF to: 00496c60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_setupRenderState_FUN_00496c60(CSmokeParticle * this_ptr)
    ADD ESP,0x4                         ; 004a1c4c
    LEA ESI,[EBX + 0x16000]             ; 004a1c4f
    MOV EAX,dword ptr [EBX]             ; 004a1c55 | DAT_01c74ea0 | DAT_01c74ecc
        ;   Label: LAB_004a1c55
    TEST EAX,EAX                        ; 004a1c57
    JZ 0x004a1c64                       ; 004a1c59
        ;   XREF to: 004a1c64 (CONDITIONAL_JUMP)  ; LAB_004a1c64
    PUSH EBX                            ; 004a1c5b | DAT_01c74ea0 | DAT_01c74ecc
    CALL core_fire.cpp_CSmokeParticle_render_FUN_00496f60 ; 004a1c5c
        ;   XREF to: 00496f60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_render_FUN_00496f60(CSmokeParticle * this_ptr)
    ADD ESP,0x4                         ; 004a1c61
    ADD EBX,0x2c                        ; 004a1c64
        ;   Label: LAB_004a1c64
    CMP EBX,ESI                         ; 004a1c67
    JNZ 0x004a1c55                      ; 004a1c69
        ;   XREF to: 004a1c55 (CONDITIONAL_JUMP)  ; LAB_004a1c55
    MOV EBX,0x1cbb9bc                   ; 004a1c6b
    LEA ESI,[EBX + 0x730]               ; 004a1c70
    MOV EAX,dword ptr [EBX]             ; 004a1c76 | DAT_01cbb9bc | DAT_01cbba18
        ;   Label: LAB_004a1c76
    TEST EAX,EAX                        ; 004a1c78
    JZ 0x004a1c85                       ; 004a1c7a
        ;   XREF to: 004a1c85 (CONDITIONAL_JUMP)  ; LAB_004a1c85
    PUSH EBX                            ; 004a1c7c | DAT_01cbb9bc | DAT_01cbba18
    CALL core_fire.cpp_CMuzzleFlash_render_FUN_0049a480 ; 004a1c7d
        ;   XREF to: 0049a480 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CMuzzleFlash_render_FUN_0049a480(CMuzzleFlash * this_ptr)
    ADD ESP,0x4                         ; 004a1c82
    ADD EBX,0x5c                        ; 004a1c85
        ;   Label: LAB_004a1c85
    CMP EBX,ESI                         ; 004a1c88
    JNZ 0x004a1c76                      ; 004a1c8a
        ;   XREF to: 004a1c76 (CONDITIONAL_JUMP)  ; LAB_004a1c76
    MOV EDX,dword ptr [0x01cf5088]      ; 004a1c8c | DAT_01cf5088
    XOR ESI,ESI                         ; 004a1c92
    TEST EDX,EDX                        ; 004a1c94
    JLE 0x004a1cc0                      ; 004a1c96
        ;   XREF to: 004a1cc0 (CONDITIONAL_JUMP)  ; LAB_004a1cc0
    MOV EBX,0x1cf508c                   ; 004a1c98
    PUSH EBX                            ; 004a1c9d
        ;   Label: LAB_004a1c9d
    CALL core_fire.cpp_CLaserBeam_render_FUN_0049b1d0 ; 004a1c9e
        ;   XREF to: 0049b1d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLaserBeam_render_FUN_0049b1d0(CLaserBeam * this_ptr)
    INC ESI                             ; 004a1ca3
    MOV ECX,dword ptr [0x01cf5088]      ; 004a1ca4 | DAT_01cf5088
    ADD ESP,0x4                         ; 004a1caa
    ADD EBX,0x40                        ; 004a1cad
    CMP ESI,ECX                         ; 004a1cb0
    JL 0x004a1c9d                       ; 004a1cb2
        ;   XREF to: 004a1c9d (CONDITIONAL_JUMP)  ; LAB_004a1c9d
    LEA EAX,[EAX]                       ; 004a1cb4
    LEA EDX,[EDX]                       ; 004a1cba
    PUSH 0x1cb4eb4                      ; 004a1cc0
        ;   Label: LAB_004a1cc0
    MOV EBX,0x1cb4eb4                   ; 004a1cc5
    CALL core_fire.cpp_CSpark_setupRenderState_FUN_00497f70 ; 004a1cca
        ;   XREF to: 00497f70 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSpark_setupRenderState_FUN_00497f70(CSpark * this_ptr)
    ADD ESP,0x4                         ; 004a1ccf
    LEA ESI,[EBX + 0x5400]              ; 004a1cd2
    FLD float ptr [EBX + 0x24]          ; 004a1cd8 | g_SparkPool[0].base.lifetime_remaining | g_SparkPool[1].base.lifetime_remaining
        ;   Label: LAB_004a1cd8
    FLDZ                                ; 004a1cdb
    FCOMPP                              ; 004a1cdd
    FNSTSW AX                           ; 004a1cdf
    SAHF                                ; 004a1ce1
    JNC 0x004a1cee                      ; 004a1ce2
        ;   XREF to: 004a1cee (CONDITIONAL_JUMP)  ; LAB_004a1cee
    PUSH EBX                            ; 004a1ce4
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a1ce5 | g_SparkPool[0].base.vtable | g_SparkPool[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 004a1ce8
    ADD ESP,0x4                         ; 004a1ceb
    ADD EBX,0x54                        ; 004a1cee
        ;   Label: LAB_004a1cee
    CMP EBX,ESI                         ; 004a1cf1
    JNZ 0x004a1cd8                      ; 004a1cf3
        ;   XREF to: 004a1cd8 (CONDITIONAL_JUMP)  ; LAB_004a1cd8
    PUSH 0x1cba2b8                      ; 004a1cf5
    MOV EBX,0x1cba2b8                   ; 004a1cfa
    CALL core_fire.cpp_CFirefly_setupRenderState_FUN_00498a10 ; 004a1cff
        ;   XREF to: 00498a10 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFirefly_setupRenderState_FUN_00498a10(CFirefly * this_ptr)
    ADD ESP,0x4                         ; 004a1d04
    LEA ESI,[EBX + 0x1700]              ; 004a1d07
    FLD float ptr [EBX + 0x24]          ; 004a1d0d | CFirefly_ARRAY_01cba2b8[0].base.lifetime_remaining | CFirefly_ARRAY_01cba2b8[1].base.lifetime_remaining
        ;   Label: LAB_004a1d0d
    FLDZ                                ; 004a1d10
    FCOMPP                              ; 004a1d12
    FNSTSW AX                           ; 004a1d14
    SAHF                                ; 004a1d16
    JNC 0x004a1d23                      ; 004a1d17
        ;   XREF to: 004a1d23 (CONDITIONAL_JUMP)  ; LAB_004a1d23
    PUSH EBX                            ; 004a1d19
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a1d1a | CFirefly_ARRAY_01cba2b8[0].base.vtable | CFirefly_ARRAY_01cba2b8[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 004a1d1d
    ADD ESP,0x4                         ; 004a1d20
    ADD EBX,0x5c                        ; 004a1d23
        ;   Label: LAB_004a1d23
    CMP EBX,ESI                         ; 004a1d26
    JNZ 0x004a1d0d                      ; 004a1d28
        ;   XREF to: 004a1d0d (CONDITIONAL_JUMP)  ; LAB_004a1d0d
    MOV EBX,0x1cbc0f0                   ; 004a1d2a
    LEA ESI,[EBX + 0x33c20]             ; 004a1d2f
    FLD float ptr [EBX + 0x24]          ; 004a1d35 | CGlassParticle_ARRAY_01cbc0f0[0].base.lifetime_remaining | CGlassParticle_ARRAY_01cbc0f0[1].base.lifetime_remaining
        ;   Label: LAB_004a1d35
    FLDZ                                ; 004a1d38
    FCOMPP                              ; 004a1d3a
    FNSTSW AX                           ; 004a1d3c
    SAHF                                ; 004a1d3e
    JNC 0x004a1d4b                      ; 004a1d3f
        ;   XREF to: 004a1d4b (CONDITIONAL_JUMP)  ; LAB_004a1d4b
    PUSH EBX                            ; 004a1d41
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a1d42 | CGlassParticle_ARRAY_01cbc0f0[0].base.vtable | CGlassParticle_ARRAY_01cbc0f0[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 004a1d45
    ADD ESP,0x4                         ; 004a1d48
    ADD EBX,0xd4                        ; 004a1d4b
        ;   Label: LAB_004a1d4b
    CMP EBX,ESI                         ; 004a1d51
    JNZ 0x004a1d35                      ; 004a1d53
        ;   XREF to: 004a1d35 (CONDITIONAL_JUMP)  ; LAB_004a1d35
    MOV EBX,0x1cefd14                   ; 004a1d55
    LEA ESI,[EBX + 0x168]               ; 004a1d5a
    MOV EAX,dword ptr [EBX + 0x20]      ; 004a1d60 | DAT_01cefd34 | DAT_01cefd58
        ;   Label: LAB_004a1d60
    TEST EAX,EAX                        ; 004a1d63
    JZ 0x004a1d70                       ; 004a1d65
        ;   XREF to: 004a1d70 (CONDITIONAL_JUMP)  ; LAB_004a1d70
    PUSH EBX                            ; 004a1d67
    CALL core_fire.cpp_CBulletTrail_render_FUN_0049ad20 ; 004a1d68
        ;   XREF to: 0049ad20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletTrail_render_FUN_0049ad20(CBulletTrail * this_ptr)
    ADD ESP,0x4                         ; 004a1d6d
    ADD EBX,0x24                        ; 004a1d70
        ;   Label: LAB_004a1d70
    CMP EBX,ESI                         ; 004a1d73
    JNZ 0x004a1d60                      ; 004a1d75
        ;   XREF to: 004a1d60 (CONDITIONAL_JUMP)  ; LAB_004a1d60
    MOV EBX,0x1cf6090                   ; 004a1d77
    LEA ESI,[EBX + 0x140]               ; 004a1d7c
    PUSH EBX                            ; 004a1d82
        ;   Label: LAB_004a1d82
    CALL core_fire.cpp_FUN_0049c8e0     ; 004a1d83
        ;   XREF to: 0049c8e0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049c8e0()
    ADD EBX,0x20                        ; 004a1d88
    ADD ESP,0x4                         ; 004a1d8b
    CMP EBX,ESI                         ; 004a1d8e
    JNZ 0x004a1d82                      ; 004a1d90
        ;   XREF to: 004a1d82 (CONDITIONAL_JUMP)  ; LAB_004a1d82
    MOV EBX,0x1cf61d4                   ; 004a1d92
    LEA ESI,[EBX + 0x4e20]              ; 004a1d97
    PUSH EBX                            ; 004a1d9d
        ;   Label: LAB_004a1d9d
    CALL core_fire.cpp_FUN_0049d500     ; 004a1d9e
        ;   XREF to: 0049d500 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049d500()
    ADD EBX,0x3e8                       ; 004a1da3
    ADD ESP,0x4                         ; 004a1da9
    CMP EBX,ESI                         ; 004a1dac
    JNZ 0x004a1d9d                      ; 004a1dae
        ;   XREF to: 004a1d9d (CONDITIONAL_JUMP)  ; LAB_004a1d9d
    MOV EBX,0x1cfb8bc                   ; 004a1db0
    LEA ESI,[EBX + 0x55f0]              ; 004a1db5
    PUSH EBX                            ; 004a1dbb
        ;   Label: LAB_004a1dbb
    CALL core_fire.cpp_CGunFlame_render_FUN_0049e500 ; 004a1dbc
        ;   XREF to: 0049e500 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CGunFlame_render_FUN_0049e500(CGunFlame * this_ptr)
    ADD EBX,0x2c                        ; 004a1dc1
    ADD ESP,0x4                         ; 004a1dc4
    CMP EBX,ESI                         ; 004a1dc7
    JNZ 0x004a1dbb                      ; 004a1dc9
        ;   XREF to: 004a1dbb (CONDITIONAL_JUMP)  ; LAB_004a1dbb
    MOV EBX,0x1d00eb0                   ; 004a1dcb
    LEA ESI,[EBX + 0xc00]               ; 004a1dd0
    PUSH EBX                            ; 004a1dd6
        ;   Label: LAB_004a1dd6
    CALL core_fire.cpp_FUN_0049f520     ; 004a1dd7
        ;   XREF to: 0049f520 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049f520()
    ADD EBX,0x30                        ; 004a1ddc
    ADD ESP,0x4                         ; 004a1ddf
    CMP EBX,ESI                         ; 004a1de2
    JNZ 0x004a1dd6                      ; 004a1de4
        ;   XREF to: 004a1dd6 (CONDITIONAL_JUMP)  ; LAB_004a1dd6
    MOV EBX,0x1d01ab4                   ; 004a1de6
    LEA ESI,[EBX + 0xe10]               ; 004a1deb
    PUSH EBX                            ; 004a1df1
        ;   Label: LAB_004a1df1
    CALL core_fire.cpp_CTrail_render_FUN_004a0680 ; 004a1df2
        ;   XREF to: 004a0680 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CTrail_render_FUN_004a0680(CTrail * this_ptr)
    ADD EBX,0x24                        ; 004a1df7
    ADD ESP,0x4                         ; 004a1dfa
    CMP EBX,ESI                         ; 004a1dfd
    JNZ 0x004a1df1                      ; 004a1dff
        ;   XREF to: 004a1df1 (CONDITIONAL_JUMP)  ; LAB_004a1df1
    MOV EBX,0x1d03b8c                   ; 004a1e01
    LEA ESI,[EBX + 0x4000]              ; 004a1e06
    FLD float ptr [EBX + 0x24]          ; 004a1e0c | g_PopcornPool[0].base.lifetime_remaining | g_PopcornPool[1].base.lifetime_remaining
        ;   Label: LAB_004a1e0c
    FLDZ                                ; 004a1e0f
    FCOMPP                              ; 004a1e11
    FNSTSW AX                           ; 004a1e13
    SAHF                                ; 004a1e15
    JNC 0x004a1e22                      ; 004a1e16
        ;   XREF to: 004a1e22 (CONDITIONAL_JUMP)  ; LAB_004a1e22
    PUSH EBX                            ; 004a1e18
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a1e19 | g_PopcornPool[0].base.vtable | g_PopcornPool[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 004a1e1c
    ADD ESP,0x4                         ; 004a1e1f
    ADD EBX,0x40                        ; 004a1e22
        ;   Label: LAB_004a1e22
    CMP EBX,ESI                         ; 004a1e25
    JNZ 0x004a1e0c                      ; 004a1e27
        ;   XREF to: 004a1e0c (CONDITIONAL_JUMP)  ; LAB_004a1e0c
    MOV EBX,0x1d07b90                   ; 004a1e29
    LEA ESI,[EBX + 0x4000]              ; 004a1e2e
    FLD float ptr [EBX + 0x24]          ; 004a1e34 | g_RainDropPool[0].base.lifetime_remaining | g_RainDropPool[1].base.lifetime_remaining
        ;   Label: LAB_004a1e34
    FLDZ                                ; 004a1e37
    FCOMPP                              ; 004a1e39
    FNSTSW AX                           ; 004a1e3b
    SAHF                                ; 004a1e3d
    JNC 0x004a1e4a                      ; 004a1e3e
        ;   XREF to: 004a1e4a (CONDITIONAL_JUMP)  ; LAB_004a1e4a
    PUSH EBX                            ; 004a1e40
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a1e41 | g_RainDropPool[0].base.vtable | g_RainDropPool[1].base.vtable
    CALL dword ptr [EAX + 0x8]          ; 004a1e44
    ADD ESP,0x4                         ; 004a1e47
    ADD EBX,0x40                        ; 004a1e4a
        ;   Label: LAB_004a1e4a
    CMP EBX,ESI                         ; 004a1e4d
    JNZ 0x004a1e34                      ; 004a1e4f
        ;   XREF to: 004a1e34 (CONDITIONAL_JUMP)  ; LAB_004a1e34
    MOV EBX,0x1d0bb94                   ; 004a1e51
    LEA ESI,[EBX + 0x12e8]              ; 004a1e56
    PUSH EBX                            ; 004a1e5c
        ;   Label: LAB_004a1e5c
    ADD EBX,0x1e4                       ; 004a1e5d
    ADD ESP,0x4                         ; 004a1e63
    CMP EBX,ESI                         ; 004a1e66
    JNZ 0x004a1e5c                      ; 004a1e68
        ;   XREF to: 004a1e5c (CONDITIONAL_JUMP)  ; LAB_004a1e5c
    LEA EAX,[EAX]                       ; 004a1e6a
    MOV ESP,EBP                         ; 004a1e70
        ;   Label: LAB_004a1e70
    POP EBP                             ; 004a1e72
    POP EDI                             ; 004a1e73
    POP ESI                             ; 004a1e74
    POP EBX                             ; 004a1e75
    RET                                 ; 004a1e76
    MOV EAX,0x1c8eeb0                   ; 004a1e77
        ;   Label: LAB_004a1e77
    ADD EAX,EBX                         ; 004a1e7c
    PUSH EAX                            ; 004a1e7e
    CALL core_fire.cpp_CStake_render_FUN_00497dc0 ; 004a1e7f
        ;   XREF to: 00497dc0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_render_FUN_00497dc0(CStake * this_ptr)
    ADD ESP,0x4                         ; 004a1e84
    JMP 0x004a1af4                      ; 004a1e87
        ;   XREF to: 004a1af4 (UNCONDITIONAL_JUMP)  ; LAB_004a1af4

