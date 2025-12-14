; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50(CDemonRaytrace * this_ptr, float fov_or_radius, int render_mode)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   fov_or_radius
; int              Stack[0xc]:4   render_mode
; Local Variables:
; undefined8       Stack[-0x1b0]:8  local_1b0
; undefined8       Stack[-0x1a8]:8  local_1a8
; undefined8       Stack[-0x1a0]:8  local_1a0
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined1       Stack[-0x150]:1  local_150
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; int              Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
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
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
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
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 at 0056a440
;
; Referenced Globals:
;   double DOUBLE_00622bda = 0.00390625
;   float FLOAT_00622be2 = 256
;   double DOUBLE_00622bea = 256
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   int g_CubesTestedCount
;   int g_CubesWithVoxelsCount
;   int g_CubesVisibleCount
;   int g_CubesRenderedCount
;   int g_PVSDrawnCubeCount
;   int g_PVSReadyFlag
;   CVector3f g_DebugCubeBasePoint
;   CMatrix3x3i g_InverseMatrix
;   undefined4 g_InverseMatrix[0][1]
;   undefined4 g_InverseMatrix[0][2]
;   ... and 7 more
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
;   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
;   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497e50
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
    PUSH ESI                            ; 00497e51
    PUSH EDI                            ; 00497e52
    PUSH EBP                            ; 00497e53
    MOV EBP,ESP                         ; 00497e54
    SUB ESP,0x19c                       ; 00497e56
    AND ESP,0xfffffff8                  ; 00497e5c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00497e5f
    CMP dword ptr [0x02ca03a8],0x0      ; 00497e62 | g_PVSReadyFlag
    JZ 0x00497e75                       ; 00497e69
        ;   XREF to: 00497e75 (CONDITIONAL_JUMP)  ; LAB_00497e75
    CMP dword ptr [EBP + 0x1c],0x0      ; 00497e6b
    JNZ 0x0049878f                      ; 00497e6f
        ;   XREF to: 0049878f (CONDITIONAL_JUMP)  ; LAB_0049878f
    XOR ESI,ESI                         ; 00497e75
        ;   Label: LAB_00497e75
    MOV dword ptr [0x02ca0394],ESI      ; 00497e77 | g_CubesTestedCount
    MOV dword ptr [0x02ca0398],ESI      ; 00497e7d | g_CubesWithVoxelsCount
    MOV dword ptr [0x02ca039c],ESI      ; 00497e83 | g_CubesVisibleCount
    MOV dword ptr [0x02ca03a0],ESI      ; 00497e89 | g_CubesRenderedCount
    MOV dword ptr [0x02ca03a4],ESI      ; 00497e8f | g_PVSDrawnCubeCount
    MOV ESI,dword ptr [0x006703e8]      ; 00497e95 | g_CDemonRendererPtr
    PUSH ESI                            ; 00497e9b | g_CDemonRendererInstance
    LEA ESI,[ESP + 0x64]                ; 00497e9c
    LEA EDI,[ESP + 0x7c]                ; 00497ea0
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760 ; 00497ea4
        ;   XREF to: 0048c760 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x64]                ; 00497ea9
    ADD ESP,0x4                         ; 00497ead
    MOVSD ES:EDI,ESI                    ; 00497eb0
    MOVSD ES:EDI,ESI                    ; 00497eb1
    MOVSD ES:EDI,ESI                    ; 00497eb2
    MOV EAX,dword ptr [ESP + 0x78]      ; 00497eb3
    MOV dword ptr [ESP + 0x190],EAX     ; 00497eb7
    FILD dword ptr [ESP + 0x190]        ; 00497ebe
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00497ec5
    FLD double ptr [0x00622bda]         ; 00497ec9 | DOUBLE_00622bda
    FXCH                                ; 00497ecf
    FMUL ST1                            ; 00497ed1
    MOV dword ptr [ESP + 0x190],EAX     ; 00497ed3
    MOV EAX,dword ptr [ESP + 0x80]      ; 00497eda
    FILD dword ptr [ESP + 0x190]        ; 00497ee1
    MOV dword ptr [ESP + 0x190],EAX     ; 00497ee8
    FMUL ST2                            ; 00497eef
    FILD dword ptr [ESP + 0x190]        ; 00497ef1
    FMULP ST3                           ; 00497ef8
    FXCH                                ; 00497efa
    FST float ptr [ESP + 0x54]          ; 00497efc
    FXCH                                ; 00497f00
    FSTP float ptr [ESP + 0x58]         ; 00497f02
    FXCH                                ; 00497f06
    FSTP float ptr [ESP + 0x5c]         ; 00497f08
    FSUB float ptr [EBX + 0x10]         ; 00497f0c
    FDIV float ptr [EBX + 0x28]         ; 00497f0f
    FLD float ptr [ESP + 0x58]          ; 00497f12
    FXCH                                ; 00497f16
    CALL crt_math.c_round_FUN_005fe6b0  ; 00497f18
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x78]        ; 00497f1d
    FSUB float ptr [EBX + 0x14]         ; 00497f21
    FDIV float ptr [EBX + 0x2c]         ; 00497f24
    FLD float ptr [ESP + 0x5c]          ; 00497f27
    FXCH                                ; 00497f2b
    CALL crt_math.c_round_FUN_005fe6b0  ; 00497f2d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x7c]        ; 00497f32
    FSUB float ptr [EBX + 0x18]         ; 00497f36
    FDIV float ptr [EBX + 0x30]         ; 00497f39
    FLD float ptr [EBP + 0x18]          ; 00497f3c
    FMUL float ptr [0x00622be2]         ; 00497f3f | FLOAT_00622be2
    CALL crt_math.c_round_FUN_005fe6b0  ; 00497f45
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x6c]        ; 00497f4a
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00497f4e
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00497f52
    MOV dword ptr [ESP + 0x70],EAX      ; 00497f56
    MOV dword ptr [ESP + 0x74],EAX      ; 00497f5a
    MOV EAX,[0x02f0d364]                ; 00497f5e | g_InverseMatrix
    CALL crt_math.c_round_FUN_005fe6b0  ; 00497f63
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x80]        ; 00497f68
    IMUL EDX                            ; 00497f6f
    SHRD EAX,EDX,0x10                   ; 00497f71
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00497f75
    MOV ECX,EAX                         ; 00497f79
    MOV EAX,[0x02f0d370]                ; 00497f7b | g_InverseMatrix[1][0]
    IMUL EDX                            ; 00497f80
    SHRD EAX,EDX,0x10                   ; 00497f82
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00497f86
    ADD ECX,EAX                         ; 00497f8a
    MOV EAX,[0x02f0d37c]                ; 00497f8c | g_InverseMatrix[2][0]
    IMUL EDX                            ; 00497f91
    SHRD EAX,EDX,0x10                   ; 00497f93
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00497f97
    ADD ECX,EAX                         ; 00497f9b
    MOV EAX,[0x02f0d368]                ; 00497f9d | g_InverseMatrix[0][1]
    MOV dword ptr [ESP + 0x18],ECX      ; 00497fa2
    IMUL EDX                            ; 00497fa6
    SHRD EAX,EDX,0x10                   ; 00497fa8
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00497fac
    MOV ECX,EAX                         ; 00497fb0
    MOV EAX,[0x02f0d374]                ; 00497fb2 | g_InverseMatrix[1][1]
    IMUL EDX                            ; 00497fb7
    SHRD EAX,EDX,0x10                   ; 00497fb9
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00497fbd
    ADD ECX,EAX                         ; 00497fc1
    MOV EAX,[0x02f0d380]                ; 00497fc3 | g_InverseMatrix[2][1]
    IMUL EDX                            ; 00497fc8
    SHRD EAX,EDX,0x10                   ; 00497fca
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00497fce
    ADD ECX,EAX                         ; 00497fd2
    MOV EAX,[0x02f0d36c]                ; 00497fd4 | g_InverseMatrix[0][2]
    MOV dword ptr [ESP + 0x1c],ECX      ; 00497fd9
    IMUL EDX                            ; 00497fdd
    SHRD EAX,EDX,0x10                   ; 00497fdf
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00497fe3
    MOV ECX,EAX                         ; 00497fe7
    MOV EAX,[0x02f0d378]                ; 00497fe9 | g_InverseMatrix[1][2]
    IMUL EDX                            ; 00497fee
    SHRD EAX,EDX,0x10                   ; 00497ff0
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00497ff4
    ADD ECX,EAX                         ; 00497ff8
    MOV EAX,[0x02f0d384]                ; 00497ffa | g_InverseMatrix[2][2]
    IMUL EDX                            ; 00497fff
    SHRD EAX,EDX,0x10                   ; 00498001
    ADD ECX,EAX                         ; 00498005
    MOV dword ptr [ESP + 0x20],ECX      ; 00498007
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0049800b
    NEG EDI                             ; 0049800f
    MOV EAX,[0x02f0d364]                ; 00498011 | g_InverseMatrix
    MOV EDX,EDI                         ; 00498016
    IMUL EDX                            ; 00498018
    SHRD EAX,EDX,0x10                   ; 0049801a
    MOV EDX,dword ptr [ESP + 0x70]      ; 0049801e
    MOV ECX,EAX                         ; 00498022
    MOV EAX,[0x02f0d370]                ; 00498024 | g_InverseMatrix[1][0]
    IMUL EDX                            ; 00498029
    SHRD EAX,EDX,0x10                   ; 0049802b
    MOV EDX,dword ptr [ESP + 0x74]      ; 0049802f
    ADD ECX,EAX                         ; 00498033
    MOV EAX,[0x02f0d37c]                ; 00498035 | g_InverseMatrix[2][0]
    IMUL EDX                            ; 0049803a
    SHRD EAX,EDX,0x10                   ; 0049803c
    MOV EDX,EDI                         ; 00498040
    ADD ECX,EAX                         ; 00498042
    MOV EAX,[0x02f0d368]                ; 00498044 | g_InverseMatrix[0][1]
    MOV dword ptr [ESP + 0x24],ECX      ; 00498049
    IMUL EDX                            ; 0049804d
    SHRD EAX,EDX,0x10                   ; 0049804f
    MOV EDX,dword ptr [ESP + 0x70]      ; 00498053
    MOV ECX,EAX                         ; 00498057
    MOV EAX,[0x02f0d374]                ; 00498059 | g_InverseMatrix[1][1]
    IMUL EDX                            ; 0049805e
    SHRD EAX,EDX,0x10                   ; 00498060
    MOV EDX,dword ptr [ESP + 0x74]      ; 00498064
    ADD ECX,EAX                         ; 00498068
    MOV EAX,[0x02f0d380]                ; 0049806a | g_InverseMatrix[2][1]
    IMUL EDX                            ; 0049806f
    SHRD EAX,EDX,0x10                   ; 00498071
    MOV EDX,EDI                         ; 00498075
    ADD ECX,EAX                         ; 00498077
    MOV EAX,[0x02f0d36c]                ; 00498079 | g_InverseMatrix[0][2]
    MOV dword ptr [ESP + 0x28],ECX      ; 0049807e
    IMUL EDX                            ; 00498082
    SHRD EAX,EDX,0x10                   ; 00498084
    MOV EDX,dword ptr [ESP + 0x70]      ; 00498088
    MOV ECX,EAX                         ; 0049808c
    MOV EAX,[0x02f0d378]                ; 0049808e | g_InverseMatrix[1][2]
    IMUL EDX                            ; 00498093
    SHRD EAX,EDX,0x10                   ; 00498095
    MOV EDX,dword ptr [ESP + 0x74]      ; 00498099
    ADD ECX,EAX                         ; 0049809d
    MOV EAX,[0x02f0d384]                ; 0049809f | g_InverseMatrix[2][2]
    IMUL EDX                            ; 004980a4
    SHRD EAX,EDX,0x10                   ; 004980a6
    ADD ECX,EAX                         ; 004980aa
    MOV EAX,dword ptr [ESP + 0x70]      ; 004980ac
    NEG EAX                             ; 004980b0
    MOV EDX,EDI                         ; 004980b2
    MOV dword ptr [ESP + 0x70],EAX      ; 004980b4
    MOV EAX,[0x02f0d364]                ; 004980b8 | g_InverseMatrix
    MOV dword ptr [ESP + 0x2c],ECX      ; 004980bd
    IMUL EDX                            ; 004980c1
    SHRD EAX,EDX,0x10                   ; 004980c3
    MOV EDX,dword ptr [ESP + 0x70]      ; 004980c7
    MOV ECX,EAX                         ; 004980cb
    MOV EAX,[0x02f0d370]                ; 004980cd | g_InverseMatrix[1][0]
    IMUL EDX                            ; 004980d2
    SHRD EAX,EDX,0x10                   ; 004980d4
    MOV EDX,dword ptr [ESP + 0x74]      ; 004980d8
    ADD ECX,EAX                         ; 004980dc
    MOV EAX,[0x02f0d37c]                ; 004980de | g_InverseMatrix[2][0]
    IMUL EDX                            ; 004980e3
    SHRD EAX,EDX,0x10                   ; 004980e5
    ADD ECX,EAX                         ; 004980e9
    MOV dword ptr [ESP + 0x6c],EDI      ; 004980eb
    MOV dword ptr [ESP + 0x30],ECX      ; 004980ef
    MOV EAX,[0x02f0d368]                ; 004980f3 | g_InverseMatrix[0][1]
    MOV EDX,EDI                         ; 004980f8
    IMUL EDX                            ; 004980fa
    SHRD EAX,EDX,0x10                   ; 004980fc
    MOV EDX,dword ptr [ESP + 0x70]      ; 00498100
    MOV ECX,EAX                         ; 00498104
    MOV EAX,[0x02f0d374]                ; 00498106 | g_InverseMatrix[1][1]
    IMUL EDX                            ; 0049810b
    SHRD EAX,EDX,0x10                   ; 0049810d
    MOV EDX,dword ptr [ESP + 0x74]      ; 00498111
    ADD ECX,EAX                         ; 00498115
    MOV EAX,[0x02f0d380]                ; 00498117 | g_InverseMatrix[2][1]
    IMUL EDX                            ; 0049811c
    SHRD EAX,EDX,0x10                   ; 0049811e
    MOV EDX,EDI                         ; 00498122
    ADD ECX,EAX                         ; 00498124
    MOV EAX,[0x02f0d36c]                ; 00498126 | g_InverseMatrix[0][2]
    MOV dword ptr [ESP + 0x34],ECX      ; 0049812b
    IMUL EDX                            ; 0049812f
    SHRD EAX,EDX,0x10                   ; 00498131
    MOV EDX,dword ptr [ESP + 0x70]      ; 00498135
    MOV ECX,EAX                         ; 00498139
    MOV EAX,[0x02f0d378]                ; 0049813b | g_InverseMatrix[1][2]
    IMUL EDX                            ; 00498140
    SHRD EAX,EDX,0x10                   ; 00498142
    MOV EDX,dword ptr [ESP + 0x74]      ; 00498146
    ADD ECX,EAX                         ; 0049814a
    MOV EAX,[0x02f0d384]                ; 0049814c | g_InverseMatrix[2][2]
    IMUL EDX                            ; 00498151
    SHRD EAX,EDX,0x10                   ; 00498153
    MOV EDX,EDI                         ; 00498157
    ADD ECX,EAX                         ; 00498159
    MOV EAX,[0x02f0d364]                ; 0049815b | g_InverseMatrix
    NEG EDX                             ; 00498160
    MOV dword ptr [ESP + 0x38],ECX      ; 00498162
    MOV dword ptr [ESP + 0x6c],EDX      ; 00498166
    IMUL EDX                            ; 0049816a
    SHRD EAX,EDX,0x10                   ; 0049816c
    MOV EDX,dword ptr [ESP + 0x70]      ; 00498170
    MOV ECX,EAX                         ; 00498174
    MOV EAX,[0x02f0d370]                ; 00498176 | g_InverseMatrix[1][0]
    IMUL EDX                            ; 0049817b
    SHRD EAX,EDX,0x10                   ; 0049817d
    MOV EDX,dword ptr [ESP + 0x74]      ; 00498181
    ADD ECX,EAX                         ; 00498185
    MOV EAX,[0x02f0d37c]                ; 00498187 | g_InverseMatrix[2][0]
    IMUL EDX                            ; 0049818c
    SHRD EAX,EDX,0x10                   ; 0049818e
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00498192
    ADD ECX,EAX                         ; 00498196
    MOV EAX,[0x02f0d368]                ; 00498198 | g_InverseMatrix[0][1]
    MOV dword ptr [ESP + 0x3c],ECX      ; 0049819d
    IMUL EDX                            ; 004981a1
    SHRD EAX,EDX,0x10                   ; 004981a3
    MOV EDX,dword ptr [ESP + 0x70]      ; 004981a7
    MOV ECX,EAX                         ; 004981ab
    MOV EAX,[0x02f0d374]                ; 004981ad | g_InverseMatrix[1][1]
    IMUL EDX                            ; 004981b2
    SHRD EAX,EDX,0x10                   ; 004981b4
    MOV EDX,dword ptr [ESP + 0x74]      ; 004981b8
    ADD ECX,EAX                         ; 004981bc
    MOV EAX,[0x02f0d380]                ; 004981be | g_InverseMatrix[2][1]
    IMUL EDX                            ; 004981c3
    SHRD EAX,EDX,0x10                   ; 004981c5
    ADD ECX,EAX                         ; 004981c9
    MOV dword ptr [ESP + 0x40],ECX      ; 004981cb
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004981cf
    MOV EAX,[0x02f0d36c]                ; 004981d3 | g_InverseMatrix[0][2]
    IMUL EDX                            ; 004981d8
    SHRD EAX,EDX,0x10                   ; 004981da
    MOV EDX,dword ptr [ESP + 0x70]      ; 004981de
    MOV ECX,EAX                         ; 004981e2
    MOV EAX,[0x02f0d378]                ; 004981e4 | g_InverseMatrix[1][2]
    IMUL EDX                            ; 004981e9
    SHRD EAX,EDX,0x10                   ; 004981eb
    MOV EDX,dword ptr [ESP + 0x74]      ; 004981ef
    ADD ECX,EAX                         ; 004981f3
    MOV EAX,[0x02f0d384]                ; 004981f5 | g_InverseMatrix[2][2]
    IMUL EDX                            ; 004981fa
    SHRD EAX,EDX,0x10                   ; 004981fc
    ADD ECX,EAX                         ; 00498200
    MOV dword ptr [ESP + 0x44],ECX      ; 00498202
    XOR ECX,ECX                         ; 00498206
    MOV dword ptr [ESP + 0x48],ECX      ; 00498208
    MOV dword ptr [ESP + 0x4c],ECX      ; 0049820c
    MOV dword ptr [ESP + 0x50],ECX      ; 00498210
    FLD double ptr [0x00622bea]         ; 00498214 | DOUBLE_00622bea
    FLD float ptr [EBX + 0x28]          ; 0049821a
    FMUL ST1                            ; 0049821d
    FLD float ptr [EBX + 0x2c]          ; 0049821f
    FMUL ST2                            ; 00498222
    MOV EAX,0x3e7                       ; 00498224
    FLD float ptr [EBX + 0x30]          ; 00498229
    FMULP ST3                           ; 0049822c
    MOV dword ptr [ESP + 0xa8],EAX      ; 0049822e
    MOV dword ptr [ESP + 0xac],EAX      ; 00498235
    MOV ESI,EAX                         ; 0049823c
    MOV dword ptr [ESP + 0xb0],EAX      ; 0049823e
    MOV ECX,0xfffffc19                  ; 00498245
    XOR ESI,EAX                         ; 0049824a
    MOV EDX,ECX                         ; 0049824c
    MOV EDI,ECX                         ; 0049824e
    FXCH                                ; 00498250
    FSTP double ptr [ESP + 0x10]        ; 00498252
    FSTP double ptr [ESP + 0x8]         ; 00498256
    FSTP double ptr [ESP]               ; 0049825a
    FILD dword ptr [ESP + ESI*0x1 + 0x18] ; 0049825d
        ;   Label: LAB_0049825d
    FDIV double ptr [ESP + 0x10]        ; 00498261
    FILD dword ptr [ESP + ESI*0x1 + 0x1c] ; 00498265
    FDIV double ptr [ESP + 0x8]         ; 00498269
    FILD dword ptr [ESP + ESI*0x1 + 0x20] ; 0049826d
    FDIV double ptr [ESP]               ; 00498271
    MOV EAX,dword ptr [ESP + 0x78]      ; 00498274
    MOV dword ptr [ESP + 0x190],EAX     ; 00498278
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0049827f
    MOV dword ptr [ESP + 0x194],EAX     ; 00498283
    MOV EAX,dword ptr [ESP + 0x80]      ; 0049828a
    MOV dword ptr [ESP + 0x198],EAX     ; 00498291
    FILD dword ptr [ESP + 0x190]        ; 00498298
    FILD dword ptr [ESP + 0x194]        ; 0049829f
    FILD dword ptr [ESP + 0x198]        ; 004982a6
    FXCH ST2                            ; 004982ad
    FADDP ST5,ST0                       ; 004982af
    FADDP ST3,ST0                       ; 004982b1
    FADDP                               ; 004982b3
    FXCH ST2                            ; 004982b5
    CALL crt_math.c_round_FUN_005fe6b0  ; 004982b7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004982bc
    CALL crt_math.c_round_FUN_005fe6b0  ; 004982be
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 004982c3
    CALL crt_math.c_round_FUN_005fe6b0  ; 004982c5
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004982ca
    FISTP dword ptr [ESP + 0x9c]        ; 004982cc
    FXCH                                ; 004982d3
    FISTP dword ptr [ESP + 0xa0]        ; 004982d5
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004982dc
    FISTP dword ptr [ESP + 0xa4]        ; 004982e3
    CMP EAX,dword ptr [ESP + 0xa8]      ; 004982ea
    JGE 0x004982fa                      ; 004982f1
        ;   XREF to: 004982fa (CONDITIONAL_JUMP)  ; LAB_004982fa
    MOV dword ptr [ESP + 0xa8],EAX      ; 004982f3
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004982fa
        ;   Label: LAB_004982fa
    CMP EAX,dword ptr [ESP + 0xac]      ; 00498301
    JGE 0x00498311                      ; 00498308
        ;   XREF to: 00498311 (CONDITIONAL_JUMP)  ; LAB_00498311
    MOV dword ptr [ESP + 0xac],EAX      ; 0049830a
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00498311
        ;   Label: LAB_00498311
    CMP EAX,dword ptr [ESP + 0xb0]      ; 00498318
    JGE 0x00498328                      ; 0049831f
        ;   XREF to: 00498328 (CONDITIONAL_JUMP)  ; LAB_00498328
    MOV dword ptr [ESP + 0xb0],EAX      ; 00498321
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00498328
        ;   Label: LAB_00498328
    CMP ECX,EAX                         ; 0049832f
    JGE 0x00498335                      ; 00498331
        ;   XREF to: 00498335 (CONDITIONAL_JUMP)  ; LAB_00498335
    MOV ECX,EAX                         ; 00498333
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00498335
        ;   Label: LAB_00498335
    CMP EDX,EAX                         ; 0049833c
    JGE 0x00498342                      ; 0049833e
        ;   XREF to: 00498342 (CONDITIONAL_JUMP)  ; LAB_00498342
    MOV EDX,EAX                         ; 00498340
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00498342
        ;   Label: LAB_00498342
    CMP EDI,EAX                         ; 00498349
    JGE 0x0049834f                      ; 0049834b
        ;   XREF to: 0049834f (CONDITIONAL_JUMP)  ; LAB_0049834f
    MOV EDI,EAX                         ; 0049834d
    ADD ESI,0xc                         ; 0049834f
        ;   Label: LAB_0049834f
    CMP ESI,0x3c                        ; 00498352
    JNZ 0x0049825d                      ; 00498355
        ;   XREF to: 0049825d (CONDITIONAL_JUMP)  ; LAB_0049825d
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0049835b
    INC ECX                             ; 00498362
    MOV dword ptr [EBX + 0x54],EAX      ; 00498363
    INC EDX                             ; 00498366
    MOV dword ptr [EBX + 0x60],ECX      ; 00498367
    INC EDI                             ; 0049836a
    MOV dword ptr [EBX + 0x64],EDX      ; 0049836b
    MOV dword ptr [EBX + 0x68],EDI      ; 0049836e
    MOV EAX,dword ptr [ESP + 0xac]      ; 00498371
    MOV dword ptr [EBX + 0x58],EAX      ; 00498378
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0049837b
    MOV EDX,dword ptr [EBX + 0x54]      ; 00498382
    MOV dword ptr [EBX + 0x5c],EAX      ; 00498385
    TEST EDX,EDX                        ; 00498388
    JL 0x0049879f                       ; 0049838a
        ;   XREF to: 0049879f (CONDITIONAL_JUMP)  ; LAB_0049879f
    CMP dword ptr [EBX + 0x58],0x0      ; 00498390
        ;   Label: LAB_00498390
    JL 0x004987ab                       ; 00498394
        ;   XREF to: 004987ab (CONDITIONAL_JUMP)  ; LAB_004987ab
    CMP dword ptr [EBX + 0x5c],0x0      ; 0049839a
        ;   Label: LAB_0049839a
    JL 0x004987b7                       ; 0049839e
        ;   XREF to: 004987b7 (CONDITIONAL_JUMP)  ; LAB_004987b7
    MOV EDI,dword ptr [EBX + 0x40]      ; 004983a4
        ;   Label: LAB_004983a4
    CMP EDI,dword ptr [EBX + 0x60]      ; 004983a7
    JG 0x004983b2                       ; 004983aa
        ;   XREF to: 004983b2 (CONDITIONAL_JUMP)  ; LAB_004983b2
    LEA EAX,[EDI + -0x1]                ; 004983ac
    MOV dword ptr [EBX + 0x60],EAX      ; 004983af
    MOV EDX,dword ptr [EBX + 0x44]      ; 004983b2
        ;   Label: LAB_004983b2
    CMP EDX,dword ptr [EBX + 0x64]      ; 004983b5
    JG 0x004983c0                       ; 004983b8
        ;   XREF to: 004983c0 (CONDITIONAL_JUMP)  ; LAB_004983c0
    LEA EAX,[EDX + -0x1]                ; 004983ba
    MOV dword ptr [EBX + 0x64],EAX      ; 004983bd
    MOV ECX,dword ptr [EBX + 0x48]      ; 004983c0
        ;   Label: LAB_004983c0
    CMP ECX,dword ptr [EBX + 0x68]      ; 004983c3
    JG 0x004983ce                       ; 004983c6
        ;   XREF to: 004983ce (CONDITIONAL_JUMP)  ; LAB_004983ce
    LEA EAX,[ECX + -0x1]                ; 004983c8
    MOV dword ptr [EBX + 0x68],EAX      ; 004983cb
    PUSH 0x2cee5b0                      ; 004983ce | g_DebugCubeBasePoint
        ;   Label: LAB_004983ce
    MOV EDI,dword ptr [0x006703e8]      ; 004983d3 | g_CDemonRendererPtr
    XOR ESI,ESI                         ; 004983d9
    PUSH EDI                            ; 004983db | g_CDemonRendererInstance
    MOV dword ptr [0x030e56b8],ESI      ; 004983dc | g_RenderedTriangleCount
    CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420 ; 004983e2
        ;   XREF to: 0048c420 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420(CDemonRenderer * this_ptr, CVector3f * input_point)
    ADD ESP,0x8                         ; 004983e7
    PUSH 0xff                           ; 004983ea
    PUSH 0xff                           ; 004983ef
    PUSH 0xff                           ; 004983f4
    MOV EAX,[0x006703e8]                ; 004983f9 | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH EAX                            ; 004983fe | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970 ; 004983ff
        ;   XREF to: 0048c970 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    MOV EDX,dword ptr [EBX]             ; 00498404
    ADD ESP,0x10                        ; 00498406
    CMP EDX,0x4                         ; 00498409
    JLE 0x004987c3                      ; 0049840c
        ;   XREF to: 004987c3 (CONDITIONAL_JUMP)  ; LAB_004987c3
    MOV dword ptr [EBX],0x1             ; 00498412
        ;   Label: LAB_00498412
    MOV EAX,[0x02f0d37c]                ; 00498418 | g_InverseMatrix[2][0]
        ;   Label: LAB_00498418
    CDQ                                 ; 0049841d
    XOR EAX,EDX                         ; 0049841e
    SUB EAX,EDX                         ; 00498420
    MOV ECX,EAX                         ; 00498422
    MOV dword ptr [ESP + 0xb4],EAX      ; 00498424
    MOV EAX,[0x02f0d380]                ; 0049842b | g_InverseMatrix[2][1]
    CDQ                                 ; 00498430
    XOR EAX,EDX                         ; 00498431
    SUB EAX,EDX                         ; 00498433
    MOV ESI,EAX                         ; 00498435
    MOV EDI,EAX                         ; 00498437
    MOV EAX,[0x02f0d384]                ; 00498439 | g_InverseMatrix[2][2]
    CDQ                                 ; 0049843e
    XOR EAX,EDX                         ; 0049843f
    SUB EAX,EDX                         ; 00498441
    MOV EDX,EAX                         ; 00498443
    CMP ECX,ESI                         ; 00498445
    JL 0x004987d0                       ; 00498447
        ;   XREF to: 004987d0 (CONDITIONAL_JUMP)  ; LAB_004987d0
    CMP ECX,EAX                         ; 0049844d
    JL 0x004987d0                       ; 0049844f
        ;   XREF to: 004987d0 (CONDITIONAL_JUMP)  ; LAB_004987d0
    MOV EDI,dword ptr [ESP + 0x78]      ; 00498455
    CMP EDI,dword ptr [EBX + 0x60]      ; 00498459
    JG 0x004985e6                       ; 0049845c
        ;   XREF to: 004985e6 (CONDITIONAL_JUMP)  ; LAB_004985e6
    MOV EAX,dword ptr [ESP + 0x80]      ; 00498462
    DEC EAX                             ; 00498469
    MOV dword ptr [ESP + 0x138],EAX     ; 0049846a
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00498471
    DEC EAX                             ; 00498475
    MOV dword ptr [ESP + 0x13c],EAX     ; 00498476
    MOV EAX,EDI                         ; 0049847d
    NEG EAX                             ; 0049847f
    ADD EAX,EDI                         ; 00498481
    MOV dword ptr [ESP + 0x158],EAX     ; 00498483
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0049848a
        ;   Label: LAB_0049848a
    MOV ECX,dword ptr [EBX + 0x64]      ; 0049848e
    MOV dword ptr [ESP + 0x18c],EAX     ; 00498491
    CMP EAX,ECX                         ; 00498498
    JG 0x00498529                       ; 0049849a
        ;   XREF to: 00498529 (CONDITIONAL_JUMP)  ; LAB_00498529
    MOV EAX,dword ptr [ESP + 0x158]     ; 004984a0
    MOV dword ptr [ESP + 0xb8],EAX      ; 004984a7
    MOV dword ptr [ESP + 0xbc],EAX      ; 004984ae
    MOV ESI,dword ptr [ESP + 0x80]      ; 004984b5
        ;   Label: LAB_004984b5
    CMP ESI,dword ptr [EBX + 0x68]      ; 004984bc
    JG 0x004984e4                       ; 004984bf
        ;   XREF to: 004984e4 (CONDITIONAL_JUMP)  ; LAB_004984e4
    MOV ECX,dword ptr [ESP + 0xb8]      ; 004984c1
        ;   Label: LAB_004984c1
    PUSH ECX                            ; 004984c8
    PUSH ESI                            ; 004984c9
    MOV EAX,dword ptr [ESP + 0x194]     ; 004984ca
    PUSH EAX                            ; 004984d1
    PUSH EDI                            ; 004984d2
    PUSH EBX                            ; 004984d3
    INC ESI                             ; 004984d4
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 004984d5
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 004984da
    ADD ESP,0x14                        ; 004984dd
    CMP ESI,EDX                         ; 004984e0
    JLE 0x004984c1                      ; 004984e2
        ;   XREF to: 004984c1 (CONDITIONAL_JUMP)  ; LAB_004984c1
    MOV ESI,dword ptr [ESP + 0x138]     ; 004984e4
        ;   Label: LAB_004984e4
    CMP ESI,dword ptr [EBX + 0x5c]      ; 004984eb
    JL 0x00498513                       ; 004984ee
        ;   XREF to: 00498513 (CONDITIONAL_JUMP)  ; LAB_00498513
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004984f0
        ;   Label: LAB_004984f0
    PUSH EAX                            ; 004984f7
    PUSH ESI                            ; 004984f8
    MOV EDX,dword ptr [ESP + 0x194]     ; 004984f9
    PUSH EDX                            ; 00498500
    PUSH EDI                            ; 00498501
    PUSH EBX                            ; 00498502
    DEC ESI                             ; 00498503
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498504
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 00498509
    ADD ESP,0x14                        ; 0049850c
    CMP ESI,ECX                         ; 0049850f
    JGE 0x004984f0                      ; 00498511
        ;   XREF to: 004984f0 (CONDITIONAL_JUMP)  ; LAB_004984f0
    MOV ESI,dword ptr [ESP + 0x18c]     ; 00498513
        ;   Label: LAB_00498513
    INC ESI                             ; 0049851a
    MOV EDX,dword ptr [EBX + 0x64]      ; 0049851b
    MOV dword ptr [ESP + 0x18c],ESI     ; 0049851e
    CMP ESI,EDX                         ; 00498525
    JLE 0x004984b5                      ; 00498527
        ;   XREF to: 004984b5 (CONDITIONAL_JUMP)  ; LAB_004984b5
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00498529
        ;   Label: LAB_00498529
    MOV ECX,dword ptr [EBX + 0x58]      ; 00498530
    MOV dword ptr [ESP + 0x188],EAX     ; 00498533
    CMP EAX,ECX                         ; 0049853a
    JL 0x004985cb                       ; 0049853c
        ;   XREF to: 004985cb (CONDITIONAL_JUMP)  ; LAB_004985cb
    MOV EAX,dword ptr [ESP + 0x158]     ; 00498542
    MOV dword ptr [ESP + 0xc0],EAX      ; 00498549
    MOV dword ptr [ESP + 0xc4],EAX      ; 00498550
    MOV ESI,dword ptr [ESP + 0x80]      ; 00498557
        ;   Label: LAB_00498557
    CMP ESI,dword ptr [EBX + 0x68]      ; 0049855e
    JG 0x00498586                       ; 00498561
        ;   XREF to: 00498586 (CONDITIONAL_JUMP)  ; LAB_00498586
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00498563
        ;   Label: LAB_00498563
    PUSH EAX                            ; 0049856a
    PUSH ESI                            ; 0049856b
    MOV EDX,dword ptr [ESP + 0x190]     ; 0049856c
    PUSH EDX                            ; 00498573
    PUSH EDI                            ; 00498574
    PUSH EBX                            ; 00498575
    INC ESI                             ; 00498576
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498577
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 0049857c
    ADD ESP,0x14                        ; 0049857f
    CMP ESI,ECX                         ; 00498582
    JLE 0x00498563                      ; 00498584
        ;   XREF to: 00498563 (CONDITIONAL_JUMP)  ; LAB_00498563
    MOV ESI,dword ptr [ESP + 0x138]     ; 00498586
        ;   Label: LAB_00498586
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0049858d
    JL 0x004985b5                       ; 00498590
        ;   XREF to: 004985b5 (CONDITIONAL_JUMP)  ; LAB_004985b5
    MOV ECX,dword ptr [ESP + 0xc4]      ; 00498592
        ;   Label: LAB_00498592
    PUSH ECX                            ; 00498599
    PUSH ESI                            ; 0049859a
    MOV EAX,dword ptr [ESP + 0x190]     ; 0049859b
    PUSH EAX                            ; 004985a2
    PUSH EDI                            ; 004985a3
    PUSH EBX                            ; 004985a4
    DEC ESI                             ; 004985a5
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 004985a6
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 004985ab
    ADD ESP,0x14                        ; 004985ae
    CMP ESI,EDX                         ; 004985b1
    JGE 0x00498592                      ; 004985b3
        ;   XREF to: 00498592 (CONDITIONAL_JUMP)  ; LAB_00498592
    MOV ESI,dword ptr [ESP + 0x188]     ; 004985b5
        ;   Label: LAB_004985b5
    DEC ESI                             ; 004985bc
    MOV EDX,dword ptr [EBX + 0x58]      ; 004985bd
    MOV dword ptr [ESP + 0x188],ESI     ; 004985c0
    CMP ESI,EDX                         ; 004985c7
    JGE 0x00498557                      ; 004985c9
        ;   XREF to: 00498557 (CONDITIONAL_JUMP)  ; LAB_00498557
    MOV ECX,dword ptr [ESP + 0x158]     ; 004985cb
        ;   Label: LAB_004985cb
    INC EDI                             ; 004985d2
    INC ECX                             ; 004985d3
    MOV ESI,dword ptr [EBX + 0x60]      ; 004985d4
    MOV dword ptr [ESP + 0x158],ECX     ; 004985d7
    CMP EDI,ESI                         ; 004985de
    JLE 0x0049848a                      ; 004985e0
        ;   XREF to: 0049848a (CONDITIONAL_JUMP)  ; LAB_0049848a
    MOV EDI,dword ptr [ESP + 0x78]      ; 004985e6
        ;   Label: LAB_004985e6
    MOV EAX,dword ptr [EBX + 0x54]      ; 004985ea
    DEC EDI                             ; 004985ed
    CMP EDI,EAX                         ; 004985ee
    JL 0x0049877e                       ; 004985f0
        ;   XREF to: 0049877e (CONDITIONAL_JUMP)  ; LAB_0049877e
    MOV EAX,dword ptr [ESP + 0x80]      ; 004985f6
    DEC EAX                             ; 004985fd
    MOV dword ptr [ESP + 0x140],EAX     ; 004985fe
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00498605
    DEC EAX                             ; 00498609
    MOV dword ptr [ESP + 0x144],EAX     ; 0049860a
    MOV EAX,EDI                         ; 00498611
    MOV EDX,dword ptr [ESP + 0x78]      ; 00498613
    NEG EAX                             ; 00498617
    ADD EAX,EDX                         ; 00498619
    MOV dword ptr [ESP + 0x15c],EAX     ; 0049861b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00498622
        ;   Label: LAB_00498622
    MOV ECX,dword ptr [EBX + 0x64]      ; 00498626
    MOV dword ptr [ESP + 0x184],EAX     ; 00498629
    CMP EAX,ECX                         ; 00498630
    JG 0x004986c1                       ; 00498632
        ;   XREF to: 004986c1 (CONDITIONAL_JUMP)  ; LAB_004986c1
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00498638
    MOV dword ptr [ESP + 0xc8],EAX      ; 0049863f
    MOV dword ptr [ESP + 0xcc],EAX      ; 00498646
    MOV ESI,dword ptr [ESP + 0x80]      ; 0049864d
        ;   Label: LAB_0049864d
    CMP ESI,dword ptr [EBX + 0x68]      ; 00498654
    JG 0x0049867c                       ; 00498657
        ;   XREF to: 0049867c (CONDITIONAL_JUMP)  ; LAB_0049867c
    MOV ECX,dword ptr [ESP + 0xc8]      ; 00498659
        ;   Label: LAB_00498659
    PUSH ECX                            ; 00498660
    PUSH ESI                            ; 00498661
    MOV EAX,dword ptr [ESP + 0x18c]     ; 00498662
    PUSH EAX                            ; 00498669
    PUSH EDI                            ; 0049866a
    PUSH EBX                            ; 0049866b
    INC ESI                             ; 0049866c
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 0049866d
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 00498672
    ADD ESP,0x14                        ; 00498675
    CMP ESI,EDX                         ; 00498678
    JLE 0x00498659                      ; 0049867a
        ;   XREF to: 00498659 (CONDITIONAL_JUMP)  ; LAB_00498659
    MOV ESI,dword ptr [ESP + 0x140]     ; 0049867c
        ;   Label: LAB_0049867c
    CMP ESI,dword ptr [EBX + 0x5c]      ; 00498683
    JL 0x004986ab                       ; 00498686
        ;   XREF to: 004986ab (CONDITIONAL_JUMP)  ; LAB_004986ab
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00498688
        ;   Label: LAB_00498688
    PUSH EAX                            ; 0049868f
    PUSH ESI                            ; 00498690
    MOV EDX,dword ptr [ESP + 0x18c]     ; 00498691
    PUSH EDX                            ; 00498698
    PUSH EDI                            ; 00498699
    PUSH EBX                            ; 0049869a
    DEC ESI                             ; 0049869b
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 0049869c
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 004986a1
    ADD ESP,0x14                        ; 004986a4
    CMP ESI,ECX                         ; 004986a7
    JGE 0x00498688                      ; 004986a9
        ;   XREF to: 00498688 (CONDITIONAL_JUMP)  ; LAB_00498688
    MOV ESI,dword ptr [ESP + 0x184]     ; 004986ab
        ;   Label: LAB_004986ab
    INC ESI                             ; 004986b2
    MOV EDX,dword ptr [EBX + 0x64]      ; 004986b3
    MOV dword ptr [ESP + 0x184],ESI     ; 004986b6
    CMP ESI,EDX                         ; 004986bd
    JLE 0x0049864d                      ; 004986bf
        ;   XREF to: 0049864d (CONDITIONAL_JUMP)  ; LAB_0049864d
    MOV EAX,dword ptr [ESP + 0x144]     ; 004986c1
        ;   Label: LAB_004986c1
    MOV ECX,dword ptr [EBX + 0x58]      ; 004986c8
    MOV dword ptr [ESP + 0x180],EAX     ; 004986cb
    CMP EAX,ECX                         ; 004986d2
    JL 0x00498763                       ; 004986d4
        ;   XREF to: 00498763 (CONDITIONAL_JUMP)  ; LAB_00498763
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004986da
    MOV dword ptr [ESP + 0xd0],EAX      ; 004986e1
    MOV dword ptr [ESP + 0xd4],EAX      ; 004986e8
    MOV ESI,dword ptr [ESP + 0x80]      ; 004986ef
        ;   Label: LAB_004986ef
    CMP ESI,dword ptr [EBX + 0x68]      ; 004986f6
    JG 0x0049871e                       ; 004986f9
        ;   XREF to: 0049871e (CONDITIONAL_JUMP)  ; LAB_0049871e
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004986fb
        ;   Label: LAB_004986fb
    PUSH EAX                            ; 00498702
    PUSH ESI                            ; 00498703
    MOV EDX,dword ptr [ESP + 0x188]     ; 00498704
    PUSH EDX                            ; 0049870b
    PUSH EDI                            ; 0049870c
    PUSH EBX                            ; 0049870d
    INC ESI                             ; 0049870e
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 0049870f
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 00498714
    ADD ESP,0x14                        ; 00498717
    CMP ESI,ECX                         ; 0049871a
    JLE 0x004986fb                      ; 0049871c
        ;   XREF to: 004986fb (CONDITIONAL_JUMP)  ; LAB_004986fb
    MOV ESI,dword ptr [ESP + 0x140]     ; 0049871e
        ;   Label: LAB_0049871e
    CMP ESI,dword ptr [EBX + 0x5c]      ; 00498725
    JL 0x0049874d                       ; 00498728
        ;   XREF to: 0049874d (CONDITIONAL_JUMP)  ; LAB_0049874d
    MOV ECX,dword ptr [ESP + 0xd4]      ; 0049872a
        ;   Label: LAB_0049872a
    PUSH ECX                            ; 00498731
    PUSH ESI                            ; 00498732
    MOV EAX,dword ptr [ESP + 0x188]     ; 00498733
    PUSH EAX                            ; 0049873a
    PUSH EDI                            ; 0049873b
    PUSH EBX                            ; 0049873c
    DEC ESI                             ; 0049873d
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 0049873e
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 00498743
    ADD ESP,0x14                        ; 00498746
    CMP ESI,EDX                         ; 00498749
    JGE 0x0049872a                      ; 0049874b
        ;   XREF to: 0049872a (CONDITIONAL_JUMP)  ; LAB_0049872a
    MOV ESI,dword ptr [ESP + 0x180]     ; 0049874d
        ;   Label: LAB_0049874d
    DEC ESI                             ; 00498754
    MOV EDX,dword ptr [EBX + 0x58]      ; 00498755
    MOV dword ptr [ESP + 0x180],ESI     ; 00498758
    CMP ESI,EDX                         ; 0049875f
    JGE 0x004986ef                      ; 00498761
        ;   XREF to: 004986ef (CONDITIONAL_JUMP)  ; LAB_004986ef
    MOV ECX,dword ptr [ESP + 0x15c]     ; 00498763
        ;   Label: LAB_00498763
    DEC EDI                             ; 0049876a
    INC ECX                             ; 0049876b
    MOV ESI,dword ptr [EBX + 0x54]      ; 0049876c
    MOV dword ptr [ESP + 0x15c],ECX     ; 0049876f
    CMP EDI,ESI                         ; 00498776
    JGE 0x00498622                      ; 00498778
        ;   XREF to: 00498622 (CONDITIONAL_JUMP)  ; LAB_00498622
    MOV dword ptr [0x02ca03a8],0x1      ; 0049877e | g_PVSReadyFlag
        ;   Label: LAB_0049877e
    MOV ESP,EBP                         ; 00498788
    POP EBP                             ; 0049878a
    POP EDI                             ; 0049878b
    POP ESI                             ; 0049878c
    POP EBX                             ; 0049878d
    RET                                 ; 0049878e
    PUSH EBX                            ; 0049878f
        ;   Label: LAB_0049878f
    CALL core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0 ; 00498790
        ;   XREF to: 004990f0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 00498795
    MOV ESP,EBP                         ; 00498798
    POP EBP                             ; 0049879a
    POP EDI                             ; 0049879b
    POP ESI                             ; 0049879c
    POP EBX                             ; 0049879d
    RET                                 ; 0049879e
    MOV dword ptr [EBX + 0x54],0x0      ; 0049879f
        ;   Label: LAB_0049879f
    JMP 0x00498390                      ; 004987a6
        ;   XREF to: 00498390 (UNCONDITIONAL_JUMP)  ; LAB_00498390
    MOV dword ptr [EBX + 0x58],0x0      ; 004987ab
        ;   Label: LAB_004987ab
    JMP 0x0049839a                      ; 004987b2
        ;   XREF to: 0049839a (UNCONDITIONAL_JUMP)  ; LAB_0049839a
    MOV dword ptr [EBX + 0x5c],0x0      ; 004987b7
        ;   Label: LAB_004987b7
    JMP 0x004983a4                      ; 004987be
        ;   XREF to: 004983a4 (UNCONDITIONAL_JUMP)  ; LAB_004983a4
    TEST EDX,EDX                        ; 004987c3
        ;   Label: LAB_004987c3
    JGE 0x00498418                      ; 004987c5
        ;   XREF to: 00498418 (CONDITIONAL_JUMP)  ; LAB_00498418
    JMP 0x00498412                      ; 004987cb
        ;   XREF to: 00498412 (UNCONDITIONAL_JUMP)  ; LAB_00498412
    CMP EDI,dword ptr [ESP + 0xb4]      ; 004987d0
        ;   Label: LAB_004987d0
    JL 0x00498b19                       ; 004987d7
        ;   XREF to: 00498b19 (CONDITIONAL_JUMP)  ; LAB_00498b19
    CMP EDI,EDX                         ; 004987dd
    JL 0x00498b19                       ; 004987df
        ;   XREF to: 00498b19 (CONDITIONAL_JUMP)  ; LAB_00498b19
    MOV EDI,dword ptr [ESP + 0x7c]      ; 004987e5
    CMP EDI,dword ptr [EBX + 0x64]      ; 004987e9
    JG 0x00498976                       ; 004987ec
        ;   XREF to: 00498976 (CONDITIONAL_JUMP)  ; LAB_00498976
    MOV EAX,dword ptr [ESP + 0x80]      ; 004987f2
    DEC EAX                             ; 004987f9
    MOV dword ptr [ESP + 0x128],EAX     ; 004987fa
    MOV EAX,dword ptr [ESP + 0x78]      ; 00498801
    DEC EAX                             ; 00498805
    MOV dword ptr [ESP + 0x12c],EAX     ; 00498806
    MOV EAX,EDI                         ; 0049880d
    NEG EAX                             ; 0049880f
    ADD EAX,EDI                         ; 00498811
    MOV dword ptr [ESP + 0x150],EAX     ; 00498813
    MOV EAX,dword ptr [ESP + 0x78]      ; 0049881a
        ;   Label: LAB_0049881a
    MOV ECX,dword ptr [EBX + 0x60]      ; 0049881e
    MOV dword ptr [ESP + 0x16c],EAX     ; 00498821
    CMP EAX,ECX                         ; 00498828
    JG 0x004988b9                       ; 0049882a
        ;   XREF to: 004988b9 (CONDITIONAL_JUMP)  ; LAB_004988b9
    MOV EAX,dword ptr [ESP + 0x150]     ; 00498830
    MOV dword ptr [ESP + 0xd8],EAX      ; 00498837
    MOV dword ptr [ESP + 0xdc],EAX      ; 0049883e
    MOV ESI,dword ptr [ESP + 0x80]      ; 00498845
        ;   Label: LAB_00498845
    CMP ESI,dword ptr [EBX + 0x68]      ; 0049884c
    JG 0x00498874                       ; 0049884f
        ;   XREF to: 00498874 (CONDITIONAL_JUMP)  ; LAB_00498874
    MOV ECX,dword ptr [ESP + 0xd8]      ; 00498851
        ;   Label: LAB_00498851
    PUSH ECX                            ; 00498858
    PUSH ESI                            ; 00498859
    PUSH EDI                            ; 0049885a
    MOV EAX,dword ptr [ESP + 0x178]     ; 0049885b
    PUSH EAX                            ; 00498862
    PUSH EBX                            ; 00498863
    INC ESI                             ; 00498864
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498865
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 0049886a
    ADD ESP,0x14                        ; 0049886d
    CMP ESI,EDX                         ; 00498870
    JLE 0x00498851                      ; 00498872
        ;   XREF to: 00498851 (CONDITIONAL_JUMP)  ; LAB_00498851
    MOV ESI,dword ptr [ESP + 0x128]     ; 00498874
        ;   Label: LAB_00498874
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0049887b
    JL 0x004988a3                       ; 0049887e
        ;   XREF to: 004988a3 (CONDITIONAL_JUMP)  ; LAB_004988a3
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00498880
        ;   Label: LAB_00498880
    PUSH EAX                            ; 00498887
    PUSH ESI                            ; 00498888
    PUSH EDI                            ; 00498889
    MOV EDX,dword ptr [ESP + 0x178]     ; 0049888a
    PUSH EDX                            ; 00498891
    PUSH EBX                            ; 00498892
    DEC ESI                             ; 00498893
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498894
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 00498899
    ADD ESP,0x14                        ; 0049889c
    CMP ESI,ECX                         ; 0049889f
    JGE 0x00498880                      ; 004988a1
        ;   XREF to: 00498880 (CONDITIONAL_JUMP)  ; LAB_00498880
    MOV ESI,dword ptr [ESP + 0x16c]     ; 004988a3
        ;   Label: LAB_004988a3
    INC ESI                             ; 004988aa
    MOV EDX,dword ptr [EBX + 0x60]      ; 004988ab
    MOV dword ptr [ESP + 0x16c],ESI     ; 004988ae
    CMP ESI,EDX                         ; 004988b5
    JLE 0x00498845                      ; 004988b7
        ;   XREF to: 00498845 (CONDITIONAL_JUMP)  ; LAB_00498845
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004988b9
        ;   Label: LAB_004988b9
    MOV ECX,dword ptr [EBX + 0x54]      ; 004988c0
    MOV dword ptr [ESP + 0x168],EAX     ; 004988c3
    CMP EAX,ECX                         ; 004988ca
    JL 0x0049895b                       ; 004988cc
        ;   XREF to: 0049895b (CONDITIONAL_JUMP)  ; LAB_0049895b
    MOV EAX,dword ptr [ESP + 0x150]     ; 004988d2
    MOV dword ptr [ESP + 0xe0],EAX      ; 004988d9
    MOV dword ptr [ESP + 0xe4],EAX      ; 004988e0
    MOV ESI,dword ptr [ESP + 0x80]      ; 004988e7
        ;   Label: LAB_004988e7
    CMP ESI,dword ptr [EBX + 0x68]      ; 004988ee
    JG 0x00498916                       ; 004988f1
        ;   XREF to: 00498916 (CONDITIONAL_JUMP)  ; LAB_00498916
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004988f3
        ;   Label: LAB_004988f3
    PUSH EAX                            ; 004988fa
    PUSH ESI                            ; 004988fb
    PUSH EDI                            ; 004988fc
    MOV EDX,dword ptr [ESP + 0x174]     ; 004988fd
    PUSH EDX                            ; 00498904
    PUSH EBX                            ; 00498905
    INC ESI                             ; 00498906
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498907
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 0049890c
    ADD ESP,0x14                        ; 0049890f
    CMP ESI,ECX                         ; 00498912
    JLE 0x004988f3                      ; 00498914
        ;   XREF to: 004988f3 (CONDITIONAL_JUMP)  ; LAB_004988f3
    MOV ESI,dword ptr [ESP + 0x128]     ; 00498916
        ;   Label: LAB_00498916
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0049891d
    JL 0x00498945                       ; 00498920
        ;   XREF to: 00498945 (CONDITIONAL_JUMP)  ; LAB_00498945
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00498922
        ;   Label: LAB_00498922
    PUSH ECX                            ; 00498929
    PUSH ESI                            ; 0049892a
    PUSH EDI                            ; 0049892b
    MOV EAX,dword ptr [ESP + 0x174]     ; 0049892c
    PUSH EAX                            ; 00498933
    PUSH EBX                            ; 00498934
    DEC ESI                             ; 00498935
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498936
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 0049893b
    ADD ESP,0x14                        ; 0049893e
    CMP ESI,EDX                         ; 00498941
    JGE 0x00498922                      ; 00498943
        ;   XREF to: 00498922 (CONDITIONAL_JUMP)  ; LAB_00498922
    MOV ESI,dword ptr [ESP + 0x168]     ; 00498945
        ;   Label: LAB_00498945
    DEC ESI                             ; 0049894c
    MOV EDX,dword ptr [EBX + 0x54]      ; 0049894d
    MOV dword ptr [ESP + 0x168],ESI     ; 00498950
    CMP ESI,EDX                         ; 00498957
    JGE 0x004988e7                      ; 00498959
        ;   XREF to: 004988e7 (CONDITIONAL_JUMP)  ; LAB_004988e7
    MOV ECX,dword ptr [ESP + 0x150]     ; 0049895b
        ;   Label: LAB_0049895b
    INC EDI                             ; 00498962
    INC ECX                             ; 00498963
    MOV ESI,dword ptr [EBX + 0x64]      ; 00498964
    MOV dword ptr [ESP + 0x150],ECX     ; 00498967
    CMP EDI,ESI                         ; 0049896e
    JLE 0x0049881a                      ; 00498970
        ;   XREF to: 0049881a (CONDITIONAL_JUMP)  ; LAB_0049881a
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00498976
        ;   Label: LAB_00498976
    MOV EAX,dword ptr [EBX + 0x58]      ; 0049897a
    DEC EDI                             ; 0049897d
    CMP EDI,EAX                         ; 0049897e
    JL 0x0049877e                       ; 00498980
        ;   XREF to: 0049877e (CONDITIONAL_JUMP)  ; LAB_0049877e
    MOV EAX,dword ptr [ESP + 0x80]      ; 00498986
    DEC EAX                             ; 0049898d
    MOV dword ptr [ESP + 0x130],EAX     ; 0049898e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00498995
    DEC EAX                             ; 00498999
    MOV dword ptr [ESP + 0x134],EAX     ; 0049899a
    MOV EAX,EDI                         ; 004989a1
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004989a3
    NEG EAX                             ; 004989a7
    ADD EAX,EDX                         ; 004989a9
    MOV dword ptr [ESP + 0x154],EAX     ; 004989ab
    MOV EAX,dword ptr [ESP + 0x78]      ; 004989b2
        ;   Label: LAB_004989b2
    MOV ECX,dword ptr [EBX + 0x60]      ; 004989b6
    MOV dword ptr [ESP + 0x164],EAX     ; 004989b9
    CMP EAX,ECX                         ; 004989c0
    JLE 0x00498b02                      ; 004989c2
        ;   XREF to: 00498b02 (CONDITIONAL_JUMP)  ; LAB_00498b02
    MOV EAX,dword ptr [ESP + 0x134]     ; 004989c8
        ;   Label: LAB_004989c8
    MOV ECX,dword ptr [EBX + 0x54]      ; 004989cf
    MOV dword ptr [ESP + 0x160],EAX     ; 004989d2
    CMP EAX,ECX                         ; 004989d9
    JL 0x00498a6a                       ; 004989db
        ;   XREF to: 00498a6a (CONDITIONAL_JUMP)  ; LAB_00498a6a
    MOV EAX,dword ptr [ESP + 0x154]     ; 004989e1
    MOV dword ptr [ESP + 0xf0],EAX      ; 004989e8
    MOV dword ptr [ESP + 0xf4],EAX      ; 004989ef
    MOV ESI,dword ptr [ESP + 0x80]      ; 004989f6
        ;   Label: LAB_004989f6
    CMP ESI,dword ptr [EBX + 0x68]      ; 004989fd
    JG 0x00498a25                       ; 00498a00
        ;   XREF to: 00498a25 (CONDITIONAL_JUMP)  ; LAB_00498a25
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00498a02
        ;   Label: LAB_00498a02
    PUSH EAX                            ; 00498a09
    PUSH ESI                            ; 00498a0a
    PUSH EDI                            ; 00498a0b
    MOV EDX,dword ptr [ESP + 0x16c]     ; 00498a0c
    PUSH EDX                            ; 00498a13
    PUSH EBX                            ; 00498a14
    INC ESI                             ; 00498a15
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498a16
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 00498a1b
    ADD ESP,0x14                        ; 00498a1e
    CMP ESI,ECX                         ; 00498a21
    JLE 0x00498a02                      ; 00498a23
        ;   XREF to: 00498a02 (CONDITIONAL_JUMP)  ; LAB_00498a02
    MOV ESI,dword ptr [ESP + 0x130]     ; 00498a25
        ;   Label: LAB_00498a25
    CMP ESI,dword ptr [EBX + 0x5c]      ; 00498a2c
    JL 0x00498a54                       ; 00498a2f
        ;   XREF to: 00498a54 (CONDITIONAL_JUMP)  ; LAB_00498a54
    MOV ECX,dword ptr [ESP + 0xf4]      ; 00498a31
        ;   Label: LAB_00498a31
    PUSH ECX                            ; 00498a38
    PUSH ESI                            ; 00498a39
    PUSH EDI                            ; 00498a3a
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00498a3b
    PUSH EAX                            ; 00498a42
    PUSH EBX                            ; 00498a43
    DEC ESI                             ; 00498a44
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498a45
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 00498a4a
    ADD ESP,0x14                        ; 00498a4d
    CMP ESI,EDX                         ; 00498a50
    JGE 0x00498a31                      ; 00498a52
        ;   XREF to: 00498a31 (CONDITIONAL_JUMP)  ; LAB_00498a31
    MOV ESI,dword ptr [ESP + 0x160]     ; 00498a54
        ;   Label: LAB_00498a54
    DEC ESI                             ; 00498a5b
    MOV EDX,dword ptr [EBX + 0x54]      ; 00498a5c
    MOV dword ptr [ESP + 0x160],ESI     ; 00498a5f
    CMP ESI,EDX                         ; 00498a66
    JGE 0x004989f6                      ; 00498a68
        ;   XREF to: 004989f6 (CONDITIONAL_JUMP)  ; LAB_004989f6
    MOV ECX,dword ptr [ESP + 0x154]     ; 00498a6a
        ;   Label: LAB_00498a6a
    DEC EDI                             ; 00498a71
    INC ECX                             ; 00498a72
    MOV ESI,dword ptr [EBX + 0x58]      ; 00498a73
    MOV dword ptr [ESP + 0x154],ECX     ; 00498a76
    CMP EDI,ESI                         ; 00498a7d
    JL 0x0049877e                       ; 00498a7f
        ;   XREF to: 0049877e (CONDITIONAL_JUMP)  ; LAB_0049877e
    JMP 0x004989b2                      ; 00498a85
        ;   XREF to: 004989b2 (UNCONDITIONAL_JUMP)  ; LAB_004989b2
    MOV ESI,dword ptr [ESP + 0x164]     ; 00498a8a
        ;   Label: LAB_00498a8a
    INC ESI                             ; 00498a91
    MOV EDX,dword ptr [EBX + 0x60]      ; 00498a92
    MOV dword ptr [ESP + 0x164],ESI     ; 00498a95
    CMP ESI,EDX                         ; 00498a9c
    JG 0x004989c8                       ; 00498a9e
        ;   XREF to: 004989c8 (CONDITIONAL_JUMP)  ; LAB_004989c8
    MOV ESI,dword ptr [ESP + 0x80]      ; 00498aa4
        ;   Label: LAB_00498aa4
    CMP ESI,dword ptr [EBX + 0x68]      ; 00498aab
    JG 0x00498ad3                       ; 00498aae
        ;   XREF to: 00498ad3 (CONDITIONAL_JUMP)  ; LAB_00498ad3
    MOV ECX,dword ptr [ESP + 0xe8]      ; 00498ab0
        ;   Label: LAB_00498ab0
    PUSH ECX                            ; 00498ab7
    PUSH ESI                            ; 00498ab8
    PUSH EDI                            ; 00498ab9
    MOV EAX,dword ptr [ESP + 0x170]     ; 00498aba
    PUSH EAX                            ; 00498ac1
    PUSH EBX                            ; 00498ac2
    INC ESI                             ; 00498ac3
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498ac4
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 00498ac9
    ADD ESP,0x14                        ; 00498acc
    CMP ESI,EDX                         ; 00498acf
    JLE 0x00498ab0                      ; 00498ad1
        ;   XREF to: 00498ab0 (CONDITIONAL_JUMP)  ; LAB_00498ab0
    MOV ESI,dword ptr [ESP + 0x130]     ; 00498ad3
        ;   Label: LAB_00498ad3
    CMP ESI,dword ptr [EBX + 0x5c]      ; 00498ada
    JL 0x00498a8a                       ; 00498add
        ;   XREF to: 00498a8a (CONDITIONAL_JUMP)  ; LAB_00498a8a
        ;   Label: LAB_00498add
    MOV EAX,dword ptr [ESP + 0xec]      ; 00498adf
    PUSH EAX                            ; 00498ae6
    PUSH ESI                            ; 00498ae7
    PUSH EDI                            ; 00498ae8
    MOV EDX,dword ptr [ESP + 0x170]     ; 00498ae9
    PUSH EDX                            ; 00498af0
    PUSH EBX                            ; 00498af1
    DEC ESI                             ; 00498af2
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498af3
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 00498af8
    ADD ESP,0x14                        ; 00498afb
    CMP ESI,ECX                         ; 00498afe
    JMP 0x00498add                      ; 00498b00
        ;   XREF to: 00498add (UNCONDITIONAL_JUMP)  ; LAB_00498add
    MOV EAX,dword ptr [ESP + 0x154]     ; 00498b02
        ;   Label: LAB_00498b02
    MOV dword ptr [ESP + 0xe8],EAX      ; 00498b09
    MOV dword ptr [ESP + 0xec],EAX      ; 00498b10
    JMP 0x00498aa4                      ; 00498b17
        ;   XREF to: 00498aa4 (UNCONDITIONAL_JUMP)  ; LAB_00498aa4
    MOV EDI,dword ptr [ESP + 0x80]      ; 00498b19
        ;   Label: LAB_00498b19
    CMP EDI,dword ptr [EBX + 0x68]      ; 00498b20
    JG 0x00498ca4                       ; 00498b23
        ;   XREF to: 00498ca4 (CONDITIONAL_JUMP)  ; LAB_00498ca4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00498b29
    DEC EAX                             ; 00498b2d
    MOV dword ptr [ESP + 0x118],EAX     ; 00498b2e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00498b35
    DEC EAX                             ; 00498b39
    MOV dword ptr [ESP + 0x11c],EAX     ; 00498b3a
    MOV EAX,EDI                         ; 00498b41
    NEG EAX                             ; 00498b43
    ADD EAX,EDI                         ; 00498b45
    MOV dword ptr [ESP + 0x148],EAX     ; 00498b47
    MOV EAX,dword ptr [ESP + 0x78]      ; 00498b4e
        ;   Label: LAB_00498b4e
    MOV EDX,dword ptr [EBX + 0x60]      ; 00498b52
    MOV dword ptr [ESP + 0x17c],EAX     ; 00498b55
    CMP EAX,EDX                         ; 00498b5c
    JG 0x00498bea                       ; 00498b5e
        ;   XREF to: 00498bea (CONDITIONAL_JUMP)  ; LAB_00498bea
    MOV EAX,dword ptr [ESP + 0x148]     ; 00498b64
    MOV dword ptr [ESP + 0xf8],EAX      ; 00498b6b
    MOV dword ptr [ESP + 0xfc],EAX      ; 00498b72
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00498b79
        ;   Label: LAB_00498b79
    CMP ESI,dword ptr [EBX + 0x64]      ; 00498b7d
    JG 0x00498ba5                       ; 00498b80
        ;   XREF to: 00498ba5 (CONDITIONAL_JUMP)  ; LAB_00498ba5
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00498b82
        ;   Label: LAB_00498b82
    PUSH EAX                            ; 00498b89
    PUSH EDI                            ; 00498b8a
    PUSH ESI                            ; 00498b8b
    MOV EDX,dword ptr [ESP + 0x188]     ; 00498b8c
    PUSH EDX                            ; 00498b93
    PUSH EBX                            ; 00498b94
    INC ESI                             ; 00498b95
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498b96
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x64]      ; 00498b9b
    ADD ESP,0x14                        ; 00498b9e
    CMP ESI,ECX                         ; 00498ba1
    JLE 0x00498b82                      ; 00498ba3
        ;   XREF to: 00498b82 (CONDITIONAL_JUMP)  ; LAB_00498b82
    MOV ESI,dword ptr [ESP + 0x118]     ; 00498ba5
        ;   Label: LAB_00498ba5
    CMP ESI,dword ptr [EBX + 0x58]      ; 00498bac
    JL 0x00498bd4                       ; 00498baf
        ;   XREF to: 00498bd4 (CONDITIONAL_JUMP)  ; LAB_00498bd4
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00498bb1
        ;   Label: LAB_00498bb1
    PUSH ECX                            ; 00498bb8
    PUSH EDI                            ; 00498bb9
    PUSH ESI                            ; 00498bba
    MOV EAX,dword ptr [ESP + 0x188]     ; 00498bbb
    PUSH EAX                            ; 00498bc2
    PUSH EBX                            ; 00498bc3
    DEC ESI                             ; 00498bc4
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498bc5
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x58]      ; 00498bca
    ADD ESP,0x14                        ; 00498bcd
    CMP ESI,EDX                         ; 00498bd0
    JGE 0x00498bb1                      ; 00498bd2
        ;   XREF to: 00498bb1 (CONDITIONAL_JUMP)  ; LAB_00498bb1
    MOV ECX,dword ptr [ESP + 0x17c]     ; 00498bd4
        ;   Label: LAB_00498bd4
    INC ECX                             ; 00498bdb
    MOV ESI,dword ptr [EBX + 0x60]      ; 00498bdc
    MOV dword ptr [ESP + 0x17c],ECX     ; 00498bdf
    CMP ECX,ESI                         ; 00498be6
    JLE 0x00498b79                      ; 00498be8
        ;   XREF to: 00498b79 (CONDITIONAL_JUMP)  ; LAB_00498b79
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00498bea
        ;   Label: LAB_00498bea
    MOV EDX,dword ptr [EBX + 0x54]      ; 00498bf1
    MOV dword ptr [ESP + 0x178],EAX     ; 00498bf4
    CMP EAX,EDX                         ; 00498bfb
    JL 0x00498c89                       ; 00498bfd
        ;   XREF to: 00498c89 (CONDITIONAL_JUMP)  ; LAB_00498c89
    MOV EAX,dword ptr [ESP + 0x148]     ; 00498c03
    MOV dword ptr [ESP + 0x100],EAX     ; 00498c0a
    MOV dword ptr [ESP + 0x104],EAX     ; 00498c11
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00498c18
        ;   Label: LAB_00498c18
    CMP ESI,dword ptr [EBX + 0x64]      ; 00498c1c
    JG 0x00498c44                       ; 00498c1f
        ;   XREF to: 00498c44 (CONDITIONAL_JUMP)  ; LAB_00498c44
    MOV ECX,dword ptr [ESP + 0x100]     ; 00498c21
        ;   Label: LAB_00498c21
    PUSH ECX                            ; 00498c28
    PUSH EDI                            ; 00498c29
    PUSH ESI                            ; 00498c2a
    MOV EAX,dword ptr [ESP + 0x184]     ; 00498c2b
    PUSH EAX                            ; 00498c32
    PUSH EBX                            ; 00498c33
    INC ESI                             ; 00498c34
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498c35
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x64]      ; 00498c3a
    ADD ESP,0x14                        ; 00498c3d
    CMP ESI,EDX                         ; 00498c40
    JLE 0x00498c21                      ; 00498c42
        ;   XREF to: 00498c21 (CONDITIONAL_JUMP)  ; LAB_00498c21
    MOV ESI,dword ptr [ESP + 0x118]     ; 00498c44
        ;   Label: LAB_00498c44
    CMP ESI,dword ptr [EBX + 0x58]      ; 00498c4b
    JL 0x00498c73                       ; 00498c4e
        ;   XREF to: 00498c73 (CONDITIONAL_JUMP)  ; LAB_00498c73
    MOV EAX,dword ptr [ESP + 0x104]     ; 00498c50
        ;   Label: LAB_00498c50
    PUSH EAX                            ; 00498c57
    PUSH EDI                            ; 00498c58
    PUSH ESI                            ; 00498c59
    MOV EDX,dword ptr [ESP + 0x184]     ; 00498c5a
    PUSH EDX                            ; 00498c61
    PUSH EBX                            ; 00498c62
    DEC ESI                             ; 00498c63
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498c64
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x58]      ; 00498c69
    ADD ESP,0x14                        ; 00498c6c
    CMP ESI,ECX                         ; 00498c6f
    JGE 0x00498c50                      ; 00498c71
        ;   XREF to: 00498c50 (CONDITIONAL_JUMP)  ; LAB_00498c50
    MOV ECX,dword ptr [ESP + 0x178]     ; 00498c73
        ;   Label: LAB_00498c73
    DEC ECX                             ; 00498c7a
    MOV ESI,dword ptr [EBX + 0x54]      ; 00498c7b
    MOV dword ptr [ESP + 0x178],ECX     ; 00498c7e
    CMP ECX,ESI                         ; 00498c85
    JGE 0x00498c18                      ; 00498c87
        ;   XREF to: 00498c18 (CONDITIONAL_JUMP)  ; LAB_00498c18
    MOV EAX,dword ptr [ESP + 0x148]     ; 00498c89
        ;   Label: LAB_00498c89
    INC EDI                             ; 00498c90
    INC EAX                             ; 00498c91
    MOV EDX,dword ptr [EBX + 0x68]      ; 00498c92
    MOV dword ptr [ESP + 0x148],EAX     ; 00498c95
    CMP EDI,EDX                         ; 00498c9c
    JLE 0x00498b4e                      ; 00498c9e
        ;   XREF to: 00498b4e (CONDITIONAL_JUMP)  ; LAB_00498b4e
    MOV EDI,dword ptr [ESP + 0x80]      ; 00498ca4
        ;   Label: LAB_00498ca4
    MOV ECX,dword ptr [EBX + 0x5c]      ; 00498cab
    DEC EDI                             ; 00498cae
    CMP EDI,ECX                         ; 00498caf
    JL 0x0049877e                       ; 00498cb1
        ;   XREF to: 0049877e (CONDITIONAL_JUMP)  ; LAB_0049877e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00498cb7
    DEC EAX                             ; 00498cbb
    MOV dword ptr [ESP + 0x120],EAX     ; 00498cbc
    MOV EAX,dword ptr [ESP + 0x78]      ; 00498cc3
    DEC EAX                             ; 00498cc7
    MOV dword ptr [ESP + 0x124],EAX     ; 00498cc8
    MOV EAX,EDI                         ; 00498ccf
    MOV EDX,dword ptr [ESP + 0x80]      ; 00498cd1
    NEG EAX                             ; 00498cd8
    ADD EAX,EDX                         ; 00498cda
    MOV dword ptr [ESP + 0x14c],EAX     ; 00498cdc
    MOV EAX,dword ptr [ESP + 0x78]      ; 00498ce3
        ;   Label: LAB_00498ce3
    MOV ECX,dword ptr [EBX + 0x60]      ; 00498ce7
    MOV dword ptr [ESP + 0x174],EAX     ; 00498cea
    CMP EAX,ECX                         ; 00498cf1
    JLE 0x00498e2d                      ; 00498cf3
        ;   XREF to: 00498e2d (CONDITIONAL_JUMP)  ; LAB_00498e2d
    MOV EAX,dword ptr [ESP + 0x124]     ; 00498cf9
        ;   Label: LAB_00498cf9
    MOV ECX,dword ptr [EBX + 0x54]      ; 00498d00
    MOV dword ptr [ESP + 0x170],EAX     ; 00498d03
    CMP EAX,ECX                         ; 00498d0a
    JL 0x00498d98                       ; 00498d0c
        ;   XREF to: 00498d98 (CONDITIONAL_JUMP)  ; LAB_00498d98
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00498d12
    MOV dword ptr [ESP + 0x110],EAX     ; 00498d19
    MOV dword ptr [ESP + 0x114],EAX     ; 00498d20
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00498d27
        ;   Label: LAB_00498d27
    CMP ESI,dword ptr [EBX + 0x64]      ; 00498d2b
    JG 0x00498d53                       ; 00498d2e
        ;   XREF to: 00498d53 (CONDITIONAL_JUMP)  ; LAB_00498d53
    MOV EAX,dword ptr [ESP + 0x110]     ; 00498d30
        ;   Label: LAB_00498d30
    PUSH EAX                            ; 00498d37
    PUSH EDI                            ; 00498d38
    PUSH ESI                            ; 00498d39
    MOV EDX,dword ptr [ESP + 0x17c]     ; 00498d3a
    PUSH EDX                            ; 00498d41
    PUSH EBX                            ; 00498d42
    INC ESI                             ; 00498d43
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498d44
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x64]      ; 00498d49
    ADD ESP,0x14                        ; 00498d4c
    CMP ESI,ECX                         ; 00498d4f
    JLE 0x00498d30                      ; 00498d51
        ;   XREF to: 00498d30 (CONDITIONAL_JUMP)  ; LAB_00498d30
    MOV ESI,dword ptr [ESP + 0x120]     ; 00498d53
        ;   Label: LAB_00498d53
    CMP ESI,dword ptr [EBX + 0x58]      ; 00498d5a
    JL 0x00498d82                       ; 00498d5d
        ;   XREF to: 00498d82 (CONDITIONAL_JUMP)  ; LAB_00498d82
    MOV ECX,dword ptr [ESP + 0x114]     ; 00498d5f
        ;   Label: LAB_00498d5f
    PUSH ECX                            ; 00498d66
    PUSH EDI                            ; 00498d67
    PUSH ESI                            ; 00498d68
    MOV EAX,dword ptr [ESP + 0x17c]     ; 00498d69
    PUSH EAX                            ; 00498d70
    PUSH EBX                            ; 00498d71
    DEC ESI                             ; 00498d72
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498d73
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x58]      ; 00498d78
    ADD ESP,0x14                        ; 00498d7b
    CMP ESI,EDX                         ; 00498d7e
    JGE 0x00498d5f                      ; 00498d80
        ;   XREF to: 00498d5f (CONDITIONAL_JUMP)  ; LAB_00498d5f
    MOV ESI,dword ptr [ESP + 0x170]     ; 00498d82
        ;   Label: LAB_00498d82
    DEC ESI                             ; 00498d89
    MOV EDX,dword ptr [EBX + 0x54]      ; 00498d8a
    MOV dword ptr [ESP + 0x170],ESI     ; 00498d8d
    CMP ESI,EDX                         ; 00498d94
    JGE 0x00498d27                      ; 00498d96
        ;   XREF to: 00498d27 (CONDITIONAL_JUMP)  ; LAB_00498d27
    MOV ESI,dword ptr [ESP + 0x14c]     ; 00498d98
        ;   Label: LAB_00498d98
    DEC EDI                             ; 00498d9f
    INC ESI                             ; 00498da0
    MOV EAX,dword ptr [EBX + 0x5c]      ; 00498da1
    MOV dword ptr [ESP + 0x14c],ESI     ; 00498da4
    CMP EDI,EAX                         ; 00498dab
    JL 0x0049877e                       ; 00498dad
        ;   XREF to: 0049877e (CONDITIONAL_JUMP)  ; LAB_0049877e
    JMP 0x00498ce3                      ; 00498db3
        ;   XREF to: 00498ce3 (UNCONDITIONAL_JUMP)  ; LAB_00498ce3
    MOV ESI,dword ptr [ESP + 0x174]     ; 00498db8
        ;   Label: LAB_00498db8
    INC ESI                             ; 00498dbf
    MOV EDX,dword ptr [EBX + 0x60]      ; 00498dc0
    MOV dword ptr [ESP + 0x174],ESI     ; 00498dc3
    CMP ESI,EDX                         ; 00498dca
    JG 0x00498cf9                       ; 00498dcc
        ;   XREF to: 00498cf9 (CONDITIONAL_JUMP)  ; LAB_00498cf9
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00498dd2
        ;   Label: LAB_00498dd2
    CMP ESI,dword ptr [EBX + 0x64]      ; 00498dd6
    JG 0x00498dfe                       ; 00498dd9
        ;   XREF to: 00498dfe (CONDITIONAL_JUMP)  ; LAB_00498dfe
    MOV ECX,dword ptr [ESP + 0x108]     ; 00498ddb
        ;   Label: LAB_00498ddb
    PUSH ECX                            ; 00498de2
    PUSH EDI                            ; 00498de3
    PUSH ESI                            ; 00498de4
    MOV EAX,dword ptr [ESP + 0x180]     ; 00498de5
    PUSH EAX                            ; 00498dec
    PUSH EBX                            ; 00498ded
    INC ESI                             ; 00498dee
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498def
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x64]      ; 00498df4
    ADD ESP,0x14                        ; 00498df7
    CMP ESI,EDX                         ; 00498dfa
    JLE 0x00498ddb                      ; 00498dfc
        ;   XREF to: 00498ddb (CONDITIONAL_JUMP)  ; LAB_00498ddb
    MOV ESI,dword ptr [ESP + 0x120]     ; 00498dfe
        ;   Label: LAB_00498dfe
    CMP ESI,dword ptr [EBX + 0x58]      ; 00498e05
    JL 0x00498db8                       ; 00498e08
        ;   XREF to: 00498db8 (CONDITIONAL_JUMP)  ; LAB_00498db8
        ;   Label: LAB_00498e08
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00498e0a
    PUSH EAX                            ; 00498e11
    PUSH EDI                            ; 00498e12
    PUSH ESI                            ; 00498e13
    MOV EDX,dword ptr [ESP + 0x180]     ; 00498e14
    PUSH EDX                            ; 00498e1b
    PUSH EBX                            ; 00498e1c
    DEC ESI                             ; 00498e1d
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 ; 00498e1e
        ;   XREF to: 00497500 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x58]      ; 00498e23
    ADD ESP,0x14                        ; 00498e26
    CMP ESI,ECX                         ; 00498e29
    JMP 0x00498e08                      ; 00498e2b
        ;   XREF to: 00498e08 (UNCONDITIONAL_JUMP)  ; LAB_00498e08
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00498e2d
        ;   Label: LAB_00498e2d
    MOV dword ptr [ESP + 0x108],EAX     ; 00498e34
    MOV dword ptr [ESP + 0x10c],EAX     ; 00498e3b
    JMP 0x00498dd2                      ; 00498e42
        ;   XREF to: 00498dd2 (UNCONDITIONAL_JUMP)  ; LAB_00498dd2

