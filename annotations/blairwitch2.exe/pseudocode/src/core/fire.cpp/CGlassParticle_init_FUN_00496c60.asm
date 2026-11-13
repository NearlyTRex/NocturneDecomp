; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGlassParticle_init_FUN_00496c60(CGlassParticle *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
; STriangleVertices * Stack[0x8]:4   triangle_vertices
; CVector3i *      Stack[0xc]:4   uv_u_per_vertex
; CVector3i *      Stack[0x10]:4   uv_v_per_vertex
; SMRGLTextureBasic * Stack[0x14]:4   texture
; int              Stack[0x18]:4   lifetime
; Local Variables:
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
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
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createGlassParticle_FUN_0049d450 at 0049d4a2
;
; Referenced Globals:
;   undefined4 DAT_005d5452
;   undefined4 DAT_005d545a
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_particle.cpp_CParticle_setup_FUN_00510e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496c60
        ;   Label: core_fire.cpp_CGlassParticle_init_FUN_00496c60
    PUSH ESI                            ; 00496c61
    PUSH EDI                            ; 00496c62
    PUSH EBP                            ; 00496c63
    MOV EBP,ESP                         ; 00496c64
    SUB ESP,0xec                        ; 00496c66
    AND ESP,0xfffffff8                  ; 00496c6c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00496c6f
    MOV ECX,dword ptr [EBP + 0x20]      ; 00496c72
    MOV EAX,dword ptr [EBP + 0x18]      ; 00496c75
    MOV ESI,EAX                         ; 00496c78
    LEA EDI,[ESP + 0x24]                ; 00496c7a
    FLD float ptr [ESI + 0x4]           ; 00496c7e
    FLD float ptr [ESI + 0x8]           ; 00496c81
    FLD float ptr [ESI]                 ; 00496c84
    LEA ESI,[ESP + 0xc]                 ; 00496c86
    FADD float ptr [EAX + 0xc]          ; 00496c8a
    FXCH ST2                            ; 00496c8d
    FADD float ptr [EAX + 0x10]         ; 00496c8f
    FXCH                                ; 00496c92
    FADD float ptr [EAX + 0x14]         ; 00496c94
    FXCH ST2                            ; 00496c97
    FSTP float ptr [ESP + 0xc]          ; 00496c99
    FSTP float ptr [ESP + 0x10]         ; 00496c9d
    FSTP float ptr [ESP + 0x14]         ; 00496ca1
    MOVSD ES:EDI,ESI                    ; 00496ca5
    MOVSD ES:EDI,ESI                    ; 00496ca6
    MOVSD ES:EDI,ESI                    ; 00496ca7
    FLD float ptr [ESP + 0x24]          ; 00496ca8
    FLD float ptr [ESP + 0x28]          ; 00496cac
    FLD float ptr [ESP + 0x2c]          ; 00496cb0
    LEA EDI,[ESP + 0x60]                ; 00496cb4
    LEA ESI,[ESP + 0x84]                ; 00496cb8
    FXCH ST2                            ; 00496cbf
    FADD float ptr [EAX + 0x18]         ; 00496cc1
    FXCH                                ; 00496cc4
    FADD float ptr [EAX + 0x1c]         ; 00496cc6
    FXCH ST2                            ; 00496cc9
    FADD float ptr [EAX + 0x20]         ; 00496ccb
    FXCH                                ; 00496cce
    FSTP float ptr [ESP + 0x84]         ; 00496cd0
    FXCH                                ; 00496cd7
    FSTP float ptr [ESP + 0x88]         ; 00496cd9
    FSTP float ptr [ESP + 0x8c]         ; 00496ce0
    MOVSD ES:EDI,ESI                    ; 00496ce7
    MOVSD ES:EDI,ESI                    ; 00496ce8
    MOVSD ES:EDI,ESI                    ; 00496ce9
    FLD float ptr [0x005d5452]          ; 00496cea | DAT_005d5452
    FLD float ptr [ESP + 0x60]          ; 00496cf0
    FMUL ST1                            ; 00496cf4
    FLD float ptr [ESP + 0x64]          ; 00496cf6
    FMUL ST2                            ; 00496cfa
    FLD float ptr [ESP + 0x68]          ; 00496cfc
    FMULP ST3                           ; 00496d00
    LEA EDX,[ESP + 0x3c]                ; 00496d02
    LEA EAX,[ESP + 0x78]                ; 00496d06
    LEA EDI,[ESP + 0x78]                ; 00496d0a
    LEA ESI,[ESP + 0x90]                ; 00496d0e
    FXCH                                ; 00496d15
    FSTP float ptr [ESP + 0x90]         ; 00496d17
    FSTP float ptr [ESP + 0x94]         ; 00496d1e
    FSTP float ptr [ESP + 0x98]         ; 00496d25
    MOVSD ES:EDI,ESI                    ; 00496d2c
    MOVSD ES:EDI,ESI                    ; 00496d2d
    MOVSD ES:EDI,ESI                    ; 00496d2e
    CMP EDX,EAX                         ; 00496d2f
    JZ 0x00496d4e                       ; 00496d31
        ;   XREF to: 00496d4e (CONDITIONAL_JUMP)  ; LAB_00496d4e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00496d33
    MOV dword ptr [ESP + 0x3c],EAX      ; 00496d37
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00496d3b
    MOV dword ptr [ESP + 0x40],EAX      ; 00496d3f
    MOV EAX,dword ptr [ESP + 0x80]      ; 00496d43
    MOV dword ptr [ESP + 0x44],EAX      ; 00496d4a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00496d4e
        ;   Label: LAB_00496d4e
    MOV EAX,dword ptr [EAX]             ; 00496d51
    MOV dword ptr [EBX + 0x68],EAX      ; 00496d53
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00496d56
    MOV EAX,dword ptr [EAX + 0x4]       ; 00496d59
    MOV dword ptr [EBX + 0x6c],EAX      ; 00496d5c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00496d5f
    MOV EAX,dword ptr [EAX + 0x8]       ; 00496d62
    MOV dword ptr [EBX + 0x70],EAX      ; 00496d65
    MOV EAX,dword ptr [ECX]             ; 00496d68
    MOV dword ptr [EBX + 0x74],EAX      ; 00496d6a
    MOV EAX,dword ptr [ECX + 0x4]       ; 00496d6d
    MOV dword ptr [EBX + 0x78],EAX      ; 00496d70
    PUSH 0x40490fdb                     ; 00496d73
    MOV EAX,dword ptr [ECX + 0x8]       ; 00496d78
    PUSH 0x0                            ; 00496d7b
    MOV dword ptr [EBX + 0x7c],EAX      ; 00496d7d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00496d80
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf0],EAX      ; 00496d85
    FLD float ptr [ESP + 0xf0]          ; 00496d8c
    ADD ESP,0x8                         ; 00496d93
    LEA EDI,[ESP + 0x9c]                ; 00496d96
    PUSH 0x40c90fdb                     ; 00496d9d
    MOV dword ptr [EBX + 0x64],0x0      ; 00496da2
    PUSH 0x0                            ; 00496da9
    FSTP float ptr [EBX + 0x5c]         ; 00496dab
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00496dae
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf0],EAX      ; 00496db3
    LEA ESI,[ESP + 0x50]                ; 00496dba
    FLD float ptr [ESP + 0xf0]          ; 00496dbe
    ADD ESP,0x8                         ; 00496dc5
    LEA EDX,[EBX + 0x80]                ; 00496dc8
    MOV EAX,dword ptr [EBP + 0x18]      ; 00496dce
    FSTP float ptr [EBX + 0x60]         ; 00496dd1
    FLD float ptr [EAX + 0x4]           ; 00496dd4
    FLD float ptr [EAX + 0x8]           ; 00496dd7
    FLD float ptr [EAX]                 ; 00496dda
    LEA EAX,[ESP + 0x9c]                ; 00496ddc
    FSUB float ptr [ESP + 0x3c]         ; 00496de3
    FXCH ST2                            ; 00496de7
    FSUB float ptr [ESP + 0x40]         ; 00496de9
    FXCH                                ; 00496ded
    FSUB float ptr [ESP + 0x44]         ; 00496def
    FXCH ST2                            ; 00496df3
    FSTP float ptr [ESP + 0x48]         ; 00496df5
    FSTP float ptr [ESP + 0x4c]         ; 00496df9
    FSTP float ptr [ESP + 0x50]         ; 00496dfd
    MOVSD ES:EDI,ESI                    ; 00496e01
    MOVSD ES:EDI,ESI                    ; 00496e02
    MOVSD ES:EDI,ESI                    ; 00496e03
    CMP EDX,EAX                         ; 00496e04
    JZ 0x00496e25                       ; 00496e06
        ;   XREF to: 00496e25 (CONDITIONAL_JUMP)  ; LAB_00496e25
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00496e08
    MOV dword ptr [EDX],EAX             ; 00496e0f
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00496e11
    MOV dword ptr [EDX + 0x4],EAX       ; 00496e18
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00496e1b
    MOV dword ptr [EDX + 0x8],EAX       ; 00496e22
    MOV EAX,dword ptr [EBP + 0x18]      ; 00496e25
        ;   Label: LAB_00496e25
    LEA EDI,[ESP + 0xb4]                ; 00496e28
    LEA ESI,[ESP + 0x30]                ; 00496e2f
    LEA EDX,[EBX + 0x8c]                ; 00496e33
    FLD float ptr [EAX + 0x10]          ; 00496e39
    FLD float ptr [EAX + 0x14]          ; 00496e3c
    FLD float ptr [EAX + 0xc]           ; 00496e3f
    LEA EAX,[ESP + 0xb4]                ; 00496e42
    FSUB float ptr [ESP + 0x3c]         ; 00496e49
    FXCH ST2                            ; 00496e4d
    FSUB float ptr [ESP + 0x40]         ; 00496e4f
    FXCH                                ; 00496e53
    FSUB float ptr [ESP + 0x44]         ; 00496e55
    FXCH ST2                            ; 00496e59
    FSTP float ptr [ESP + 0x30]         ; 00496e5b
    FSTP float ptr [ESP + 0x34]         ; 00496e5f
    FSTP float ptr [ESP + 0x38]         ; 00496e63
    MOVSD ES:EDI,ESI                    ; 00496e67
    MOVSD ES:EDI,ESI                    ; 00496e68
    MOVSD ES:EDI,ESI                    ; 00496e69
    CMP EDX,EAX                         ; 00496e6a
    JZ 0x00496e8b                       ; 00496e6c
        ;   XREF to: 00496e8b (CONDITIONAL_JUMP)  ; LAB_00496e8b
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00496e6e
    MOV dword ptr [EDX],EAX             ; 00496e75
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00496e77
    MOV dword ptr [EDX + 0x4],EAX       ; 00496e7e
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00496e81
    MOV dword ptr [EDX + 0x8],EAX       ; 00496e88
    MOV EAX,dword ptr [EBP + 0x18]      ; 00496e8b
        ;   Label: LAB_00496e8b
    MOV EDI,ESP                         ; 00496e8e
    LEA ESI,[ESP + 0xa8]                ; 00496e90
    LEA EDX,[EBX + 0x98]                ; 00496e97
    FLD float ptr [EAX + 0x1c]          ; 00496e9d
    FLD float ptr [EAX + 0x20]          ; 00496ea0
    FLD float ptr [EAX + 0x18]          ; 00496ea3
    MOV EAX,ESP                         ; 00496ea6
    FSUB float ptr [ESP + 0x3c]         ; 00496ea8
    FXCH ST2                            ; 00496eac
    FSUB float ptr [ESP + 0x40]         ; 00496eae
    FXCH                                ; 00496eb2
    FSUB float ptr [ESP + 0x44]         ; 00496eb4
    FXCH ST2                            ; 00496eb8
    FSTP float ptr [ESP + 0xa8]         ; 00496eba
    FSTP float ptr [ESP + 0xac]         ; 00496ec1
    FSTP float ptr [ESP + 0xb0]         ; 00496ec8
    MOVSD ES:EDI,ESI                    ; 00496ecf
    MOVSD ES:EDI,ESI                    ; 00496ed0
    MOVSD ES:EDI,ESI                    ; 00496ed1
    CMP EDX,EAX                         ; 00496ed2
    JZ 0x00496ee9                       ; 00496ed4
        ;   XREF to: 00496ee9 (CONDITIONAL_JUMP)  ; LAB_00496ee9
    MOV EAX,dword ptr [ESP]             ; 00496ed6
    MOV dword ptr [EDX],EAX             ; 00496ed9
    MOV EAX,dword ptr [ESP + 0x4]       ; 00496edb
    MOV dword ptr [EDX + 0x4],EAX       ; 00496edf
    MOV EAX,dword ptr [ESP + 0x8]       ; 00496ee2
    MOV dword ptr [EDX + 0x8],EAX       ; 00496ee6
    MOV ECX,0x6                         ; 00496ee9
        ;   Label: LAB_00496ee9
    MOV ESI,dword ptr [EBP + 0x24]      ; 00496eee
    LEA EDI,[EBX + 0x44]                ; 00496ef1
    MOV EAX,dword ptr [EBP + 0x28]      ; 00496ef4
    MOVSD.REP ES:EDI,ESI                ; 00496ef7
    LEA EDX,[EBX + 0x98]                ; 00496ef9
    LEA EDI,[ESP + 0x6c]                ; 00496eff
    MOV dword ptr [EBX + 0x40],EAX      ; 00496f03
    LEA ESI,[ESP + 0x18]                ; 00496f06
    FLD float ptr [EDX]                 ; 00496f0a
    FLD float ptr [EDX + 0x4]           ; 00496f0c
    LEA EAX,[EBX + 0x80]                ; 00496f0f
    FLD float ptr [EDX + 0x8]           ; 00496f15
    FXCH ST2                            ; 00496f18
    FSUB float ptr [EAX]                ; 00496f1a
    FXCH                                ; 00496f1c
    FSUB float ptr [EAX + 0x4]          ; 00496f1e
    FXCH ST2                            ; 00496f21
    FSUB float ptr [EAX + 0x8]          ; 00496f23
    FXCH                                ; 00496f26
    FSTP float ptr [ESP + 0x18]         ; 00496f28
    FXCH                                ; 00496f2c
    FSTP float ptr [ESP + 0x1c]         ; 00496f2e
    FSTP float ptr [ESP + 0x20]         ; 00496f32
    MOVSD ES:EDI,ESI                    ; 00496f36
    MOVSD ES:EDI,ESI                    ; 00496f37
    MOVSD ES:EDI,ESI                    ; 00496f38
    FLD float ptr [ESP + 0x70]          ; 00496f39
    FMUL ST0                            ; 00496f3d
    FLD float ptr [ESP + 0x6c]          ; 00496f3f
    FMUL ST0                            ; 00496f43
    FADDP                               ; 00496f45
    FLD float ptr [ESP + 0x74]          ; 00496f47
    FMUL ST0                            ; 00496f4b
    FADDP                               ; 00496f4d
    FSQRT                               ; 00496f4f
    FMUL double ptr [0x005d545a]        ; 00496f51 | DAT_005d545a
    PUSH 0x3fc90fdb                     ; 00496f57
    PUSH 0x3f490fdb                     ; 00496f5c
    FSTP float ptr [ESP + 0xec]         ; 00496f61
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00496f68
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf0],EAX      ; 00496f6d
    FLD float ptr [ESP + 0xf0]          ; 00496f74
    ADD ESP,0x8                         ; 00496f7b
    PUSH 0x40c90fdb                     ; 00496f7e
    PUSH 0x0                            ; 00496f83
    FSTP float ptr [ESP + 0xd8]         ; 00496f85
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00496f8c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf0],EAX      ; 00496f91
    FLD float ptr [ESP + 0xf0]          ; 00496f98
    ADD ESP,0x8                         ; 00496f9f
    FLD ST0                             ; 00496fa2
    FCOS                                ; 00496fa4
    FLD float ptr [ESP + 0xd0]          ; 00496fa6
    FLD ST0                             ; 00496fad
    FCOS                                ; 00496faf
    FXCH ST3                            ; 00496fb1
    FSIN                                ; 00496fb3
    FXCH                                ; 00496fb5
    FSIN                                ; 00496fb7
    FLD float ptr [ESP + 0xe4]          ; 00496fb9
    FXCH ST3                            ; 00496fc0
    FSTP float ptr [ESP + 0xd8]         ; 00496fc2
    FXCH ST2                            ; 00496fc9
    FMUL float ptr [ESP + 0xd8]         ; 00496fcb
    FLD float ptr [ESP + 0xe4]          ; 00496fd2
    FXCH ST2                            ; 00496fd9
    FSTP float ptr [ESP + 0xd4]         ; 00496fdb
    FXCH                                ; 00496fe2
    FMUL float ptr [ESP + 0xd4]         ; 00496fe4
    FLD float ptr [ESP + 0xe4]          ; 00496feb
    FXCH ST3                            ; 00496ff2
    FSTP float ptr [ESP + 0xdc]         ; 00496ff4
    FXCH ST2                            ; 00496ffb
    FMUL float ptr [ESP + 0xdc]         ; 00496ffd
    FXCH ST3                            ; 00497004
    FSTP float ptr [ESP + 0xe0]         ; 00497006
    FMUL float ptr [ESP + 0xe0]         ; 0049700d
    LEA EAX,[ESP + 0x54]                ; 00497014
    FXCH                                ; 00497018
    FMUL float ptr [ESP + 0xe0]         ; 0049701a
    PUSH EAX                            ; 00497021
    LEA EAX,[ESP + 0x40]                ; 00497022
    FXCH ST2                            ; 00497026
    FSTP float ptr [ESP + 0x5c]         ; 00497028
    PUSH EAX                            ; 0049702c
    FSTP float ptr [ESP + 0x5c]         ; 0049702d
    PUSH EBX                            ; 00497031
    FSTP float ptr [ESP + 0x68]         ; 00497032
    CALL core_particle.cpp_CParticle_setup_FUN_00510e00 ; 00497036
        ;   XREF to: 00510e00 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_00510e00(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 0049703b
    MOV ESP,EBP                         ; 0049703e
    POP EBP                             ; 00497040
    POP EDI                             ; 00497041
    POP ESI                             ; 00497042
    POP EBX                             ; 00497043
    RET                                 ; 00497044

