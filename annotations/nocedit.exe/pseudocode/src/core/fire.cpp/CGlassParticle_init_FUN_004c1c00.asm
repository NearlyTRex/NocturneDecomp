; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGlassParticle_init_FUN_004c1c00(CGlassParticle *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
; STriangleVertices * Stack[0x8]:4   triangle_vertices
; CVector3i *      Stack[0xc]:4   uv_u_per_vertex
; CVector3i *      Stack[0x10]:4   uv_v_per_vertex
; SMRGLTextureBasic * Stack[0x14]:4   texture
; int              Stack[0x18]:4   lifetime
; Local Variables:
; float            Stack[-0xa4]:4  local_a4
; float            Stack[-0xa0]:4  local_a0
; float            Stack[-0x9c]:4  local_9c
; float            Stack[-0x98]:4  local_98
; float            Stack[-0x94]:4  local_94
; float            Stack[-0x90]:4  local_90
; float            Stack[-0x8c]:4  local_8c
; float            Stack[-0x88]:4  local_88
; float            Stack[-0x84]:4  local_84
; CVector3f        Stack[-0x80]:12  local_80
; float            Stack[-0x74]:4  local_74
; float            Stack[-0x70]:4  local_70
; float            Stack[-0x6c]:4  local_6c
; CVector3f        Stack[-0x68]:12  local_68
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; CVector3f        Stack[-0x50]:12  local_50
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00 at 004c7d52
;
; Referenced Globals:
;   float FLOAT_00629ce3 = 3
;   float FLOAT_00629ce7 = 0.3333333
;   double DOUBLE_00629ceb = 10
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_particle.cpp_CParticle_setup_FUN_00545680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1c00
        ;   Label: core_fire.cpp_CGlassParticle_init_FUN_004c1c00
    PUSH ESI                            ; 004c1c01
    PUSH EDI                            ; 004c1c02
    SUB ESP,0x98                        ; 004c1c03
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004c1c09
    MOV ESI,dword ptr [ESP + 0xac]      ; 004c1c10
    MOV ECX,dword ptr [ESP + 0xb0]      ; 004c1c17
    MOV EDI,dword ptr [ESP + 0xb4]      ; 004c1c1e
    LEA EDX,[ESI + 0xc]                 ; 004c1c25
    FLD float ptr [ESI]                 ; 004c1c28
    FADD float ptr [EDX]                ; 004c1c2a
    FSTP float ptr [ESP + 0x30]         ; 004c1c2c
    FLD float ptr [ESI + 0x4]           ; 004c1c30
    FADD float ptr [EDX + 0x4]          ; 004c1c33
    LEA EAX,[ESI + 0x18]                ; 004c1c36
    FSTP float ptr [ESP + 0x34]         ; 004c1c39
    FLD float ptr [ESI + 0x8]           ; 004c1c3d
    FADD float ptr [EDX + 0x8]          ; 004c1c40
    FLD float ptr [ESP + 0x30]          ; 004c1c43
    FXCH                                ; 004c1c47
    FSTP float ptr [ESP + 0x38]         ; 004c1c49
    FADD float ptr [EAX]                ; 004c1c4d
    FST float ptr [ESP + 0x60]          ; 004c1c4f
    FDIV float ptr [0x00629ce3]         ; 004c1c53 | FLOAT_00629ce3
    FLD float ptr [ESP + 0x34]          ; 004c1c59
    FADD float ptr [EAX + 0x4]          ; 004c1c5d
    FLD float ptr [ESP + 0x38]          ; 004c1c60
    FXCH                                ; 004c1c64
    FST float ptr [ESP + 0x64]          ; 004c1c66
    FXCH                                ; 004c1c6a
    FADD float ptr [EAX + 0x8]          ; 004c1c6c
    FXCH                                ; 004c1c6f
    FLD float ptr [0x00629ce7]          ; 004c1c71 | FLOAT_00629ce7
    FXCH                                ; 004c1c77
    FMUL ST1                            ; 004c1c79
    FXCH ST2                            ; 004c1c7b
    FST float ptr [ESP + 0x68]          ; 004c1c7d
    FMULP                               ; 004c1c81
    LEA EDX,[ESP + 0x54]                ; 004c1c83
    LEA EAX,[ESP + 0x24]                ; 004c1c87
    FXCH                                ; 004c1c8b
    FSTP float ptr [ESP + 0x28]         ; 004c1c8d
    FSTP float ptr [ESP + 0x2c]         ; 004c1c91
    FSTP float ptr [ESP + 0x24]         ; 004c1c95
    CMP EDX,EAX                         ; 004c1c99
    JZ 0x004c1cb5                       ; 004c1c9b
        ;   XREF to: 004c1cb5 (CONDITIONAL_JUMP)  ; LAB_004c1cb5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c1c9d
    MOV dword ptr [ESP + 0x54],EAX      ; 004c1ca1
    MOV EAX,dword ptr [ESP + 0x28]      ; 004c1ca5
    MOV dword ptr [ESP + 0x58],EAX      ; 004c1ca9
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004c1cad
    MOV dword ptr [ESP + 0x5c],EAX      ; 004c1cb1
    MOV EAX,dword ptr [ECX]             ; 004c1cb5
        ;   Label: LAB_004c1cb5
    MOV dword ptr [EBX + 0x60],EAX      ; 004c1cb7
    MOV EAX,dword ptr [ECX + 0x4]       ; 004c1cba
    MOV dword ptr [EBX + 0x64],EAX      ; 004c1cbd
    MOV EAX,dword ptr [ECX + 0x8]       ; 004c1cc0
    MOV dword ptr [EBX + 0x68],EAX      ; 004c1cc3
    MOV EAX,dword ptr [EDI]             ; 004c1cc6
    MOV dword ptr [EBX + 0x6c],EAX      ; 004c1cc8
    MOV EAX,dword ptr [EDI + 0x4]       ; 004c1ccb
    MOV dword ptr [EBX + 0x70],EAX      ; 004c1cce
    PUSH 0x40490fdb                     ; 004c1cd1
    MOV EAX,dword ptr [EDI + 0x8]       ; 004c1cd6
    PUSH 0x0                            ; 004c1cd9
    MOV dword ptr [EBX + 0x74],EAX      ; 004c1cdb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c1cde
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c1ce3
    FLD float ptr [ESP + 0x9c]          ; 004c1cea
    ADD ESP,0x8                         ; 004c1cf1
    PUSH 0x40c90fdb                     ; 004c1cf4
    MOV dword ptr [EBX + 0x5c],0x0      ; 004c1cf9
    PUSH 0x0                            ; 004c1d00
    FSTP float ptr [EBX + 0x54]         ; 004c1d02
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c1d05
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c1d0a
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004c1d11
    MOV dword ptr [EBX + 0x58],EAX      ; 004c1d18
    ADD ESP,0x8                         ; 004c1d1b
    FLD float ptr [ESI]                 ; 004c1d1e
    FSUB float ptr [ESP + 0x54]         ; 004c1d20
    FSTP float ptr [ESP + 0x48]         ; 004c1d24
    FLD float ptr [ESI + 0x4]           ; 004c1d28
    FSUB float ptr [ESP + 0x58]         ; 004c1d2b
    LEA EDX,[EBX + 0x78]                ; 004c1d2f
    FSTP float ptr [ESP + 0x4c]         ; 004c1d32
    FLD float ptr [ESI + 0x8]           ; 004c1d36
    FSUB float ptr [ESP + 0x5c]         ; 004c1d39
    LEA EAX,[ESP + 0x48]                ; 004c1d3d
    FSTP float ptr [ESP + 0x50]         ; 004c1d41
    CMP EDX,EAX                         ; 004c1d45
    JZ 0x004c1d5d                       ; 004c1d47
        ;   XREF to: 004c1d5d (CONDITIONAL_JUMP)  ; LAB_004c1d5d
    MOV EAX,dword ptr [ESP + 0x48]      ; 004c1d49
    MOV dword ptr [EDX],EAX             ; 004c1d4d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004c1d4f
    MOV dword ptr [EDX + 0x4],EAX       ; 004c1d53
    MOV EAX,dword ptr [ESP + 0x50]      ; 004c1d56
    MOV dword ptr [EDX + 0x8],EAX       ; 004c1d5a
    LEA EAX,[ESI + 0xc]                 ; 004c1d5d
        ;   Label: LAB_004c1d5d
    FLD float ptr [EAX]                 ; 004c1d60
    FSUB float ptr [ESP + 0x54]         ; 004c1d62
    FSTP float ptr [ESP]                ; 004c1d66
    FLD float ptr [EAX + 0x4]           ; 004c1d69
    FSUB float ptr [ESP + 0x58]         ; 004c1d6c
    LEA EDX,[EBX + 0x84]                ; 004c1d70
    FSTP float ptr [ESP + 0x4]          ; 004c1d76
    FLD float ptr [EAX + 0x8]           ; 004c1d7a
    FSUB float ptr [ESP + 0x5c]         ; 004c1d7d
    MOV EAX,ESP                         ; 004c1d81
    FSTP float ptr [ESP + 0x8]          ; 004c1d83
    CMP EDX,EAX                         ; 004c1d87
    JZ 0x004c1d9e                       ; 004c1d89
        ;   XREF to: 004c1d9e (CONDITIONAL_JUMP)  ; LAB_004c1d9e
    MOV EAX,dword ptr [ESP]             ; 004c1d8b
    MOV dword ptr [EDX],EAX             ; 004c1d8e
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c1d90
    MOV dword ptr [EDX + 0x4],EAX       ; 004c1d94
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c1d97
    MOV dword ptr [EDX + 0x8],EAX       ; 004c1d9b
    FLD float ptr [ESI + 0x18]          ; 004c1d9e
        ;   Label: LAB_004c1d9e
    FSUB float ptr [ESP + 0x54]         ; 004c1da1
    FSTP float ptr [ESP + 0xc]          ; 004c1da5
    FLD float ptr [ESI + 0x1c]          ; 004c1da9
    FSUB float ptr [ESP + 0x58]         ; 004c1dac
    LEA EAX,[ESP + 0xc]                 ; 004c1db0
    FSTP float ptr [ESP + 0x10]         ; 004c1db4
    FLD float ptr [ESI + 0x20]          ; 004c1db8
    FSUB float ptr [ESP + 0x5c]         ; 004c1dbb
    LEA EDX,[EBX + 0x90]                ; 004c1dbf
    FSTP float ptr [ESP + 0x14]         ; 004c1dc5
    CMP EDX,EAX                         ; 004c1dc9
    JZ 0x004c1de1                       ; 004c1dcb
        ;   XREF to: 004c1de1 (CONDITIONAL_JUMP)  ; LAB_004c1de1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c1dcd
    MOV dword ptr [EDX],EAX             ; 004c1dd1
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c1dd3
    MOV dword ptr [EDX + 0x4],EAX       ; 004c1dd7
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c1dda
    MOV dword ptr [EDX + 0x8],EAX       ; 004c1dde
    MOV ECX,0x6                         ; 004c1de1
        ;   Label: LAB_004c1de1
    MOV ESI,dword ptr [ESP + 0xb8]      ; 004c1de6
    LEA EDI,[EBX + 0x3c]                ; 004c1ded
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004c1df0
    MOVSD.REP ES:EDI,ESI                ; 004c1df7
    MOV dword ptr [EBX + 0x38],EAX      ; 004c1df9
    LEA EAX,[EBX + 0x90]                ; 004c1dfc
    LEA EDX,[EBX + 0x78]                ; 004c1e02
    FLD float ptr [EAX]                 ; 004c1e05
    FSUB float ptr [EDX]                ; 004c1e07
    FSTP float ptr [ESP + 0x18]         ; 004c1e09
    FLD float ptr [EAX + 0x4]           ; 004c1e0d
    FSUB float ptr [EDX + 0x4]          ; 004c1e10
    FST float ptr [ESP + 0x1c]          ; 004c1e13
    FMUL float ptr [ESP + 0x1c]         ; 004c1e17
    FLD float ptr [ESP + 0x18]          ; 004c1e1b
    FMUL ST0                            ; 004c1e1f
    FLD float ptr [EAX + 0x8]           ; 004c1e21
    FSUB float ptr [EDX + 0x8]          ; 004c1e24
    FXCH                                ; 004c1e27
    FADDP ST2,ST0                       ; 004c1e29
    FST float ptr [ESP + 0x20]          ; 004c1e2b
    FMUL float ptr [ESP + 0x20]         ; 004c1e2f
    FADDP                               ; 004c1e33
    FSQRT                               ; 004c1e35
    FMUL double ptr [0x00629ceb]        ; 004c1e37 | DOUBLE_00629ceb
    PUSH 0x3fc90fdb                     ; 004c1e3d
    PUSH 0x3f490fdb                     ; 004c1e42
    FSTP float ptr [ESP + 0x84]         ; 004c1e47
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c1e4e
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c1e53
    FLD float ptr [ESP + 0x9c]          ; 004c1e5a
    ADD ESP,0x8                         ; 004c1e61
    PUSH 0x40c90fdb                     ; 004c1e64
    PUSH 0x0                            ; 004c1e69
    FSTP float ptr [ESP + 0x90]         ; 004c1e6b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c1e72
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c1e77
    FLD float ptr [ESP + 0x9c]          ; 004c1e7e
    ADD ESP,0x8                         ; 004c1e85
    FLD ST0                             ; 004c1e88
    FCOS                                ; 004c1e8a
    FLD float ptr [ESP + 0x88]          ; 004c1e8c
    FLD ST0                             ; 004c1e93
    FCOS                                ; 004c1e95
    FXCH ST3                            ; 004c1e97
    FSIN                                ; 004c1e99
    FXCH                                ; 004c1e9b
    FSIN                                ; 004c1e9d
    FLD float ptr [ESP + 0x7c]          ; 004c1e9f
    FMULP ST3                           ; 004c1ea3
    FLD float ptr [ESP + 0x7c]          ; 004c1ea5
    FMULP ST2                           ; 004c1ea9
    FMUL float ptr [ESP + 0x7c]         ; 004c1eab
    FXCH ST2                            ; 004c1eaf
    FMUL ST3                            ; 004c1eb1
    LEA EAX,[ESP + 0x3c]                ; 004c1eb3
    FXCH                                ; 004c1eb7
    FMULP ST3                           ; 004c1eb9
    PUSH EAX                            ; 004c1ebb
    LEA EAX,[ESP + 0x58]                ; 004c1ebc
    FXCH                                ; 004c1ec0
    FSTP float ptr [ESP + 0x44]         ; 004c1ec2
    PUSH EAX                            ; 004c1ec6
    FSTP float ptr [ESP + 0x44]         ; 004c1ec7
    PUSH EBX                            ; 004c1ecb
    FSTP float ptr [ESP + 0x50]         ; 004c1ecc
    CALL core_particle.cpp_CParticle_setup_FUN_00545680 ; 004c1ed0
        ;   XREF to: 00545680 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_00545680(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 004c1ed5
    ADD ESP,0x98                        ; 004c1ed8
    POP EDI                             ; 004c1ede
    POP ESI                             ; 004c1edf
    POP EBX                             ; 004c1ee0
    RET                                 ; 004c1ee1

