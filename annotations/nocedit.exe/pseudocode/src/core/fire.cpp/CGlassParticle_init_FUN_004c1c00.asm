; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CGlassParticle_init_FUN_004c1c00(CGlassParticle * this_ptr, STriangleVertices * triangle_vertices, CVector3f * uv_u_per_vertex, CVector3f * uv_v_per_vertex, SMRGLTextureBasic * texture, int lifetime)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
; STriangleVertices * Stack[0x8]:4   triangle_vertices
; CVector3f *      Stack[0xc]:4   uv_u_per_vertex
; CVector3f *      Stack[0x10]:4   uv_v_per_vertex
; SMRGLTextureBasic * Stack[0x14]:4   texture
; int              Stack[0x18]:4   lifetime
; Local Variables:
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
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00 at 004c7d52
;
; Referenced Globals:
;   float FLOAT_00629ce3 = 3
;   float FLOAT_00629ce7 = 0.3333333
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
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
    FDIV float ptr [0x00629ce3]         ; 004c1c53 | float FLOAT_00629ce3
    FLD float ptr [ESP + 0x34]          ; 004c1c59
    FADD float ptr [EAX + 0x4]          ; 004c1c5d
    FLD float ptr [ESP + 0x38]          ; 004c1c60
    FXCH                                ; 004c1c64
    FST float ptr [ESP + 0x64]          ; 004c1c66
    FXCH                                ; 004c1c6a
    FADD float ptr [EAX + 0x8]          ; 004c1c6c
    FXCH                                ; 004c1c6f
    FLD float ptr [0x00629ce7]          ; 004c1c71 | float FLOAT_00629ce7
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
    JZ 0x004c1cb5                       ; 004c1c9b | LAB_004c1cb5
        ;   XREF to: 004c1cb5 (CONDITIONAL_JUMP)
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
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004c1cde | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)

