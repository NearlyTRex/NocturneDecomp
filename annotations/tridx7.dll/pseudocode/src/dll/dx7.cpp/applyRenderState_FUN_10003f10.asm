; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl dll_dx7_cpp_applyRenderState_FUN_10003f10(uint render_flags)
;
; Parameters:
; uint             Stack[0x4]:4   render_flags
;
; XREF[4]:
;   dll_dx7.cpp_APIDLLdrawPolyList2_FUN_10005130 at 1000514f
;   dll_dx7.cpp_APIDLLdrawPolyList_FUN_10004f00 at 10004f1f
;   dll_dx7.cpp_APIDLLdrawPolygon2_FUN_100043c0 at 100043d9
;   dll_dx7.cpp_resetRenderState_FUN_10002d50 at 10002d6c
;
; Referenced Globals:
;   double DOUBLE_100122b8 = 1
;   double DOUBLE_100122c0 = 256
;   int g_DX7CurrentTextureIndex = 0x0
;   int g_PremultiplyColorAndAlpha = 0x0
;   int g_FlyIniPresent = 0x0
;   int g_ZBufferBitDepth = 0x0
;   IDirect3DTexture2* g_CurrentBoundTexture = 00000000
;   IDirect3DDevice3* g_Device = 00000000
;   uint g_PrevRenderFlags = 0x0
;   int g_PrevSystemInitialized = 0x0
;   int g_PrevBlendMode = 0x0
;   int g_PrevRenderingQuality = 0x1
;   SDX7TextureSurfaceSlot[4096] g_TextureSurfaces
;   undefined4 g_ExternalRendererBridge.blend_mode
;   undefined4 g_ExternalRendererBridge.current_lighting
;   ... and 10 more
;
; Called Functions:
;   dll_dx7.cpp_flushBatch_FUN_100047b0
;   dll_dx7.cpp_setRenderStateCached_FUN_100037e0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 10003f10
        ;   Label: dll_dx7.cpp_applyRenderState_FUN_10003f10
    CMP dword ptr [0x1024061c],0x0      ; 10003f13 | g_TextureOpacity
    PUSH ESI                            ; 10003f1a
    MOV ESI,dword ptr [ESP + 0xc]       ; 10003f1b
    JZ 0x10003f2c                       ; 10003f1f
        ;   XREF to: 10003f2c (CONDITIONAL_JUMP)  ; LAB_10003f2c
    TEST ESI,0x1                        ; 10003f21
    JZ 0x10003f2c                       ; 10003f27
        ;   XREF to: 10003f2c (CONDITIONAL_JUMP)  ; LAB_10003f2c
    OR ESI,0x22                         ; 10003f29
    MOV ECX,dword ptr [0x10226918]      ; 10003f2c | g_ExternalRendererBridge.system_initialized
        ;   Label: LAB_10003f2c
    MOV EAX,[0x1001421c]                ; 10003f32 | g_PrevSystemInitialized
    CMP dword ptr [ECX],EAX             ; 10003f37
    JZ 0x10003f90                       ; 10003f39
        ;   XREF to: 10003f90 (CONDITIONAL_JUMP)  ; LAB_10003f90
    CALL dll_dx7.cpp_flushBatch_FUN_100047b0 ; 10003f3b
        ;   XREF to: 100047b0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_flushBatch_FUN_100047b0()
    MOV EAX,[0x10226918]                ; 10003f40 | g_ExternalRendererBridge.system_initialized
    MOV ECX,dword ptr [0x100141e0]      ; 10003f45 | g_Device
    CMP dword ptr [EAX],0x1             ; 10003f4b
    SBB EAX,EAX                         ; 10003f4e
    ADD EAX,0x2                         ; 10003f50
    PUSH EAX                            ; 10003f53
    PUSH 0x10                           ; 10003f54
    PUSH 0x0                            ; 10003f56
    MOV EAX,dword ptr [ECX]             ; 10003f58
    PUSH ECX                            ; 10003f5a
    CALL dword ptr [EAX + 0xa0]         ; 10003f5b
    MOV ECX,dword ptr [0x10226918]      ; 10003f61 | g_ExternalRendererBridge.system_initialized
    CMP dword ptr [ECX],0x1             ; 10003f67
    MOV ECX,dword ptr [0x100141e0]      ; 10003f6a | g_Device
    SBB EAX,EAX                         ; 10003f70
    ADD EAX,0x2                         ; 10003f72
    PUSH EAX                            ; 10003f75
    PUSH 0x11                           ; 10003f76
    PUSH 0x0                            ; 10003f78
    MOV EAX,dword ptr [ECX]             ; 10003f7a
    PUSH ECX                            ; 10003f7c
    CALL dword ptr [EAX + 0xa0]         ; 10003f7d
    MOV ECX,dword ptr [0x10226918]      ; 10003f83 | g_ExternalRendererBridge.system_initialized
    MOV EAX,dword ptr [ECX]             ; 10003f89
    MOV [0x1001421c],EAX                ; 10003f8b | g_PrevSystemInitialized
    MOV EAX,ESI                         ; 10003f90
        ;   Label: LAB_10003f90
    XOR EAX,dword ptr [0x10014218]      ; 10003f92 | g_PrevRenderFlags
    TEST AL,0x20                        ; 10003f98
    JZ 0x10003fb4                       ; 10003f9a
        ;   XREF to: 10003fb4 (CONDITIONAL_JUMP)  ; LAB_10003fb4
    TEST ESI,0x20                       ; 10003f9c
    JZ 0x10003fa8                       ; 10003fa2
        ;   XREF to: 10003fa8 (CONDITIONAL_JUMP)  ; LAB_10003fa8
    PUSH 0x5                            ; 10003fa4
    JMP 0x10003faa                      ; 10003fa6
        ;   XREF to: 10003faa (UNCONDITIONAL_JUMP)  ; LAB_10003faa
    PUSH 0x2                            ; 10003fa8
        ;   Label: LAB_10003fa8
    PUSH 0x13                           ; 10003faa
        ;   Label: LAB_10003faa
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 10003fac
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 10003fb1
    TEST ESI,0x20                       ; 10003fb4
        ;   Label: LAB_10003fb4
    JZ 0x10003fbf                       ; 10003fba
        ;   XREF to: 10003fbf (CONDITIONAL_JUMP)  ; LAB_10003fbf
    AND ESI,0xfffffff7                  ; 10003fbc
    MOV EAX,[0x102268dc]                ; 10003fbf | g_ExternalRendererBridge.blend_mode
        ;   Label: LAB_10003fbf
    MOV ECX,dword ptr [EAX]             ; 10003fc4
    CMP ECX,dword ptr [0x10014220]      ; 10003fc6 | g_PrevBlendMode
    JZ 0x10004019                       ; 10003fcc
        ;   XREF to: 10004019 (CONDITIONAL_JUMP)  ; LAB_10004019
    MOV dword ptr [0x10014220],ECX      ; 10003fce | g_PrevBlendMode
    TEST ECX,ECX                        ; 10003fd4
    JZ 0x10003fdf                       ; 10003fd6
        ;   XREF to: 10003fdf (CONDITIONAL_JUMP)  ; LAB_10003fdf
    CMP ECX,0x1                         ; 10003fd8
    JZ 0x10003ff8                       ; 10003fdb
        ;   XREF to: 10003ff8 (CONDITIONAL_JUMP)  ; LAB_10003ff8
    JMP 0x10004019                      ; 10003fdd
        ;   XREF to: 10004019 (UNCONDITIONAL_JUMP)  ; LAB_10004019
    PUSH 0x6                            ; 10003fdf
        ;   Label: LAB_10003fdf
    PUSH 0x14                           ; 10003fe1
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 10003fe3
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 10003fe8
    CMP dword ptr [0x10014164],0x0      ; 10003feb | g_PremultiplyColorAndAlpha
    JZ 0x10004019                       ; 10003ff2
        ;   XREF to: 10004019 (CONDITIONAL_JUMP)  ; LAB_10004019
    PUSH 0x5                            ; 10003ff4
    JMP 0x1000400f                      ; 10003ff6
        ;   XREF to: 1000400f (UNCONDITIONAL_JUMP)  ; LAB_1000400f
    PUSH 0x2                            ; 10003ff8
        ;   Label: LAB_10003ff8
    PUSH 0x14                           ; 10003ffa
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 10003ffc
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 10004001
    CMP dword ptr [0x10014164],0x0      ; 10004004 | g_PremultiplyColorAndAlpha
    JZ 0x10004019                       ; 1000400b
        ;   XREF to: 10004019 (CONDITIONAL_JUMP)  ; LAB_10004019
    PUSH 0x2                            ; 1000400d
    PUSH 0x13                           ; 1000400f
        ;   Label: LAB_1000400f
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 10004011
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 10004016
    MOV EAX,ESI                         ; 10004019
        ;   Label: LAB_10004019
    XOR EAX,dword ptr [0x10014218]      ; 1000401b | g_PrevRenderFlags
    TEST AL,0x1                         ; 10004021
    JZ 0x10004052                       ; 10004023
        ;   XREF to: 10004052 (CONDITIONAL_JUMP)  ; LAB_10004052
    CALL dll_dx7.cpp_flushBatch_FUN_100047b0 ; 10004025
        ;   XREF to: 100047b0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_flushBatch_FUN_100047b0()
    TEST ESI,0x1                        ; 1000402a
    JZ 0x1000403e                       ; 10004030
        ;   XREF to: 1000403e (CONDITIONAL_JUMP)  ; LAB_1000403e
    MOV dword ptr [0x100141d4],0x0      ; 10004032 | g_CurrentBoundTexture
    JMP 0x10004052                      ; 1000403c
        ;   XREF to: 10004052 (UNCONDITIONAL_JUMP)  ; LAB_10004052
    PUSH 0x1                            ; 1000403e
        ;   Label: LAB_1000403e
    MOV EAX,[0x100141e0]                ; 10004040 | g_Device
    PUSH 0x1                            ; 10004045
    PUSH 0x0                            ; 10004047
    PUSH EAX                            ; 10004049
    MOV EAX,dword ptr [EAX]             ; 1000404a
    CALL dword ptr [EAX + 0xa0]         ; 1000404c
    TEST ESI,0x1                        ; 10004052
        ;   Label: LAB_10004052
    JZ 0x10004122                       ; 10004058
        ;   XREF to: 10004122 (CONDITIONAL_JUMP)  ; LAB_10004122
    MOV EAX,[0x10014138]                ; 1000405e | g_DX7CurrentTextureIndex
    MOV ECX,dword ptr [0x100141d4]      ; 10004063 | g_CurrentBoundTexture
    CMP dword ptr [EAX*0x8 + 0x1020de40],ECX ; 10004069 | g_TextureSurfaces
    JZ 0x10004122                       ; 10004070
        ;   XREF to: 10004122 (CONDITIONAL_JUMP)  ; LAB_10004122
    CALL dll_dx7.cpp_flushBatch_FUN_100047b0 ; 10004076
        ;   XREF to: 100047b0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_flushBatch_FUN_100047b0()
    MOV EAX,[0x10014138]                ; 1000407b | g_DX7CurrentTextureIndex
    PUSH 0x4                            ; 10004080
    PUSH 0x1                            ; 10004082
    MOV ECX,dword ptr [0x100141e0]      ; 10004084 | g_Device
    MOV EAX,dword ptr [EAX*0x8 + 0x1020de40] ; 1000408a | g_TextureSurfaces
    PUSH 0x0                            ; 10004091
    PUSH ECX                            ; 10004093
    MOV [0x100141d4],EAX                ; 10004094 | g_CurrentBoundTexture
    MOV EAX,dword ptr [ECX]             ; 10004099
    CALL dword ptr [EAX + 0xa0]         ; 1000409b
    MOV ECX,dword ptr [0x10226918]      ; 100040a1 | g_ExternalRendererBridge.system_initialized
    CMP dword ptr [ECX],0x1             ; 100040a7
    MOV ECX,dword ptr [0x100141e0]      ; 100040aa | g_Device
    SBB EAX,EAX                         ; 100040b0
    ADD EAX,0x2                         ; 100040b2
    PUSH EAX                            ; 100040b5
    PUSH 0x10                           ; 100040b6
    PUSH 0x0                            ; 100040b8
    MOV EAX,dword ptr [ECX]             ; 100040ba
    PUSH ECX                            ; 100040bc
    CALL dword ptr [EAX + 0xa0]         ; 100040bd
    MOV ECX,dword ptr [0x10226918]      ; 100040c3 | g_ExternalRendererBridge.system_initialized
    CMP dword ptr [ECX],0x1             ; 100040c9
    MOV ECX,dword ptr [0x100141e0]      ; 100040cc | g_Device
    SBB EAX,EAX                         ; 100040d2
    ADD EAX,0x2                         ; 100040d4
    PUSH EAX                            ; 100040d7
    PUSH 0x11                           ; 100040d8
    PUSH 0x0                            ; 100040da
    MOV EAX,dword ptr [ECX]             ; 100040dc
    PUSH ECX                            ; 100040de
    CALL dword ptr [EAX + 0xa0]         ; 100040df
    MOV ECX,dword ptr [0x10226924]      ; 100040e5 | g_ExternalRendererBridge.rendering_quality
    CMP dword ptr [ECX],0x1             ; 100040eb
    MOV ECX,dword ptr [0x100141e0]      ; 100040ee | g_Device
    SBB EAX,EAX                         ; 100040f4
    AND EAX,0xfffffffe                  ; 100040f6
    ADD EAX,0x3                         ; 100040f9
    PUSH EAX                            ; 100040fc
    PUSH 0x12                           ; 100040fd
    PUSH 0x0                            ; 100040ff
    MOV EAX,dword ptr [ECX]             ; 10004101
    PUSH ECX                            ; 10004103
    CALL dword ptr [EAX + 0xa0]         ; 10004104
    MOV ECX,dword ptr [0x100141d4]      ; 1000410a | g_CurrentBoundTexture
    MOV EDX,dword ptr [0x100141e0]      ; 10004110 | g_Device
    PUSH ECX                            ; 10004116
    PUSH 0x0                            ; 10004117
    PUSH EDX                            ; 10004119
    MOV EAX,dword ptr [EDX]             ; 1000411a
    CALL dword ptr [EAX + 0x98]         ; 1000411c
    MOV EAX,[0x10226924]                ; 10004122 | g_ExternalRendererBridge.rendering_quality
        ;   Label: LAB_10004122
    MOV ECX,dword ptr [EAX]             ; 10004127
    CMP dword ptr [0x10014224],ECX      ; 10004129 | g_PrevRenderingQuality
    JZ 0x10004153                       ; 1000412f
        ;   XREF to: 10004153 (CONDITIONAL_JUMP)  ; LAB_10004153
    MOV dword ptr [0x10014224],ECX      ; 10004131 | g_PrevRenderingQuality
    TEST ECX,ECX                        ; 10004137
    JZ 0x1000413f                       ; 10004139
        ;   XREF to: 1000413f (CONDITIONAL_JUMP)  ; LAB_1000413f
    PUSH 0x3                            ; 1000413b
    JMP 0x10004141                      ; 1000413d
        ;   XREF to: 10004141 (UNCONDITIONAL_JUMP)  ; LAB_10004141
    PUSH 0x1                            ; 1000413f
        ;   Label: LAB_1000413f
    PUSH 0x12                           ; 10004141
        ;   Label: LAB_10004141
    MOV EAX,[0x100141e0]                ; 10004143 | g_Device
    PUSH 0x0                            ; 10004148
    PUSH EAX                            ; 1000414a
    MOV EAX,dword ptr [EAX]             ; 1000414b
    CALL dword ptr [EAX + 0xa0]         ; 1000414d
    MOV EAX,ESI                         ; 10004153
        ;   Label: LAB_10004153
    XOR EAX,dword ptr [0x10014218]      ; 10004155 | g_PrevRenderFlags
    TEST AL,0x2                         ; 1000415b
    JZ 0x100041a7                       ; 1000415d
        ;   XREF to: 100041a7 (CONDITIONAL_JUMP)  ; LAB_100041a7
    TEST ESI,0x2                        ; 1000415f
    JZ 0x10004183                       ; 10004165
        ;   XREF to: 10004183 (CONDITIONAL_JUMP)  ; LAB_10004183
    PUSH 0x1                            ; 10004167
    PUSH 0x1b                           ; 10004169
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 1000416b
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 10004170
    PUSH 0x1                            ; 10004173
    PUSH 0xf                            ; 10004175
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 10004177
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 1000417c
    PUSH 0x4                            ; 1000417f
    JMP 0x1000419d                      ; 10004181
        ;   XREF to: 1000419d (UNCONDITIONAL_JUMP)  ; LAB_1000419d
    PUSH 0x0                            ; 10004183
        ;   Label: LAB_10004183
    PUSH 0x1b                           ; 10004185
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 10004187
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 1000418c
    PUSH 0x0                            ; 1000418f
    PUSH 0xf                            ; 10004191
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 10004193
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 10004198
    PUSH 0x2                            ; 1000419b
    PUSH 0x15                           ; 1000419d
        ;   Label: LAB_1000419d
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 1000419f
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 100041a4
    MOV EAX,ESI                         ; 100041a7
        ;   Label: LAB_100041a7
    XOR EAX,dword ptr [0x10014218]      ; 100041a9 | g_PrevRenderFlags
    TEST AL,0x4                         ; 100041af
    JZ 0x100041cb                       ; 100041b1
        ;   XREF to: 100041cb (CONDITIONAL_JUMP)  ; LAB_100041cb
    TEST ESI,0x4                        ; 100041b3
    JZ 0x100041bf                       ; 100041b9
        ;   XREF to: 100041bf (CONDITIONAL_JUMP)  ; LAB_100041bf
    PUSH 0x2                            ; 100041bb
    JMP 0x100041c1                      ; 100041bd
        ;   XREF to: 100041c1 (UNCONDITIONAL_JUMP)  ; LAB_100041c1
    PUSH 0x1                            ; 100041bf
        ;   Label: LAB_100041bf
    PUSH 0x9                            ; 100041c1
        ;   Label: LAB_100041c1
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 100041c3
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 100041c8
    MOV EAX,ESI                         ; 100041cb
        ;   Label: LAB_100041cb
    XOR EAX,dword ptr [0x10014218]      ; 100041cd | g_PrevRenderFlags
    TEST AL,0x8                         ; 100041d3
    JZ 0x100041ef                       ; 100041d5
        ;   XREF to: 100041ef (CONDITIONAL_JUMP)  ; LAB_100041ef
    TEST ESI,0x8                        ; 100041d7
    JZ 0x100041e3                       ; 100041dd
        ;   XREF to: 100041e3 (CONDITIONAL_JUMP)  ; LAB_100041e3
    PUSH 0x1                            ; 100041df
    JMP 0x100041e5                      ; 100041e1
        ;   XREF to: 100041e5 (UNCONDITIONAL_JUMP)  ; LAB_100041e5
    PUSH 0x0                            ; 100041e3
        ;   Label: LAB_100041e3
    PUSH 0x1c                           ; 100041e5
        ;   Label: LAB_100041e5
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 100041e7
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 100041ec
    MOV EAX,ESI                         ; 100041ef
        ;   Label: LAB_100041ef
    XOR EAX,dword ptr [0x10014218]      ; 100041f1 | g_PrevRenderFlags
    TEST AL,0xc0                        ; 100041f7
    JZ 0x10004282                       ; 100041f9
        ;   XREF to: 10004282 (CONDITIONAL_JUMP)  ; LAB_10004282
    TEST ESI,0xc0                       ; 100041ff
    JNZ 0x10004217                      ; 10004205
        ;   XREF to: 10004217 (CONDITIONAL_JUMP)  ; LAB_10004217
    PUSH 0x0                            ; 10004207
    PUSH 0x7                            ; 10004209
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 1000420b
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 10004210
    PUSH 0x0                            ; 10004213
    JMP 0x1000426c                      ; 10004215
        ;   XREF to: 1000426c (UNCONDITIONAL_JUMP)  ; LAB_1000426c
    MOV EAX,ESI                         ; 10004217
        ;   Label: LAB_10004217
    AND EAX,0x40                        ; 10004219
    JZ 0x10004242                       ; 1000421c
        ;   XREF to: 10004242 (CONDITIONAL_JUMP)  ; LAB_10004242
    TEST ESI,0x80                       ; 1000421e
    JZ 0x10004242                       ; 10004224
        ;   XREF to: 10004242 (CONDITIONAL_JUMP)  ; LAB_10004242
    PUSH 0x1                            ; 10004226
    PUSH 0x7                            ; 10004228
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 1000422a
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 1000422f
    PUSH 0x1                            ; 10004232
    PUSH 0xe                            ; 10004234
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 10004236
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 1000423b
    PUSH 0x4                            ; 1000423e
    JMP 0x10004278                      ; 10004240
        ;   XREF to: 10004278 (UNCONDITIONAL_JUMP)  ; LAB_10004278
    PUSH 0x1                            ; 10004242
        ;   Label: LAB_10004242
    TEST EAX,EAX                        ; 10004244
    PUSH 0x7                            ; 10004246
    JZ 0x10004262                       ; 10004248
        ;   XREF to: 10004262 (CONDITIONAL_JUMP)  ; LAB_10004262
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 1000424a
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 1000424f
    PUSH 0x0                            ; 10004252
    PUSH 0xe                            ; 10004254
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 10004256
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 1000425b
    PUSH 0x4                            ; 1000425e
    JMP 0x10004278                      ; 10004260
        ;   XREF to: 10004278 (UNCONDITIONAL_JUMP)  ; LAB_10004278
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 10004262
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
        ;   Label: LAB_10004262
    ADD ESP,0x8                         ; 10004267
    PUSH 0x1                            ; 1000426a
    PUSH 0xe                            ; 1000426c
        ;   Label: LAB_1000426c
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 1000426e
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 10004273
    PUSH 0x8                            ; 10004276
    PUSH 0x17                           ; 10004278
        ;   Label: LAB_10004278
    CALL dll_dx7.cpp_setRenderStateCached_FUN_100037e0 ; 1000427a
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_setRenderStateCached_FUN_100037e0(uint render_state, DWORD value)
    ADD ESP,0x8                         ; 1000427f
    MOV EAX,[0x10226908]                ; 10004282 | g_ExternalRendererBridge.full_screen_quad_depth
        ;   Label: LAB_10004282
    MOV dword ptr [0x10014218],ESI      ; 10004287 | g_PrevRenderFlags
    MOV ECX,dword ptr [EAX]             ; 1000428d
    CMP dword ptr [0x10240624],ECX      ; 1000428f | g_PrevFullScreenQuadDepth
    JZ 0x10004302                       ; 10004295
        ;   XREF to: 10004302 (CONDITIONAL_JUMP)  ; LAB_10004302
    MOV EAX,[0x10226920]                ; 10004297 | g_ExternalRendererBridge.processor_type
    CMP dword ptr [EAX],0x0             ; 1000429c
    JZ 0x100042e8                       ; 1000429f
        ;   XREF to: 100042e8 (CONDITIONAL_JUMP)  ; LAB_100042e8
    CMP dword ptr [0x1001416c],0x0      ; 100042a1 | g_FlyIniPresent
    JZ 0x100042d8                       ; 100042a8
        ;   XREF to: 100042d8 (CONDITIONAL_JUMP)  ; LAB_100042d8
    CMP dword ptr [0x10014170],0x10     ; 100042aa | g_ZBufferBitDepth
    JNZ 0x100042d8                      ; 100042b1
        ;   XREF to: 100042d8 (CONDITIONAL_JUMP)  ; LAB_100042d8
    MOV dword ptr [ESP + 0x4],ECX       ; 100042b3
    FILD dword ptr [ESP + 0x4]          ; 100042b7
    FSTP float ptr [ESP + 0x4]          ; 100042bb
    FLD1                                ; 100042bf
    MOV EDX,dword ptr [ESP + 0x4]       ; 100042c1
    SAR EDX,0x1                         ; 100042c5
    ADD EDX,dword ptr [0x1024062c]      ; 100042c8 | g_FlyModeDepthBias
    MOV dword ptr [ESP + 0x4],EDX       ; 100042ce
    FDIV float ptr [ESP + 0x4]          ; 100042d2
    JMP 0x100042f6                      ; 100042d6
        ;   XREF to: 100042f6 (UNCONDITIONAL_JUMP)  ; LAB_100042f6
    MOV dword ptr [ESP + 0x4],ECX       ; 100042d8
        ;   Label: LAB_100042d8
    FILD dword ptr [ESP + 0x4]          ; 100042dc
    FDIVR double ptr [0x100122b8]       ; 100042e0 | DOUBLE_100122b8
    JMP 0x100042f6                      ; 100042e6
        ;   XREF to: 100042f6 (UNCONDITIONAL_JUMP)  ; LAB_100042f6
    FLD double ptr [0x100122c0]         ; 100042e8 | DOUBLE_100122c0
        ;   Label: LAB_100042e8
    MOV dword ptr [ESP + 0x4],ECX       ; 100042ee
    FIDIV dword ptr [ESP + 0x4]         ; 100042f2
    FSTP float ptr [0x10240614]         ; 100042f6 | g_TextureLodScale
        ;   Label: LAB_100042f6
    MOV dword ptr [0x10240624],ECX      ; 100042fc | g_PrevFullScreenQuadDepth
    TEST ESI,0x10                       ; 10004302
        ;   Label: LAB_10004302
    JZ 0x1000435f                       ; 10004308
        ;   XREF to: 1000435f (CONDITIONAL_JUMP)  ; LAB_1000435f
    MOV EAX,[0x102268e0]                ; 1000430a | g_ExternalRendererBridge.current_lighting
    MOV dword ptr [0x10240610],0x0      ; 1000430f | g_LightingOverflow
    MOV ECX,dword ptr [EAX]             ; 10004319
    SUB ECX,0x100                       ; 1000431b
    SAR ECX,0x4                         ; 10004321
    MOV dword ptr [0x10236908],ECX      ; 10004324 | g_LightingAlpha
    CMP ECX,0xff                        ; 1000432a
    JLE 0x10004373                      ; 10004330
        ;   XREF to: 10004373 (CONDITIONAL_JUMP)  ; LAB_10004373
    SUB ECX,0x100                       ; 10004332
    MOV dword ptr [0x10240610],ECX      ; 10004338 | g_LightingOverflow
    CMP ECX,0xff                        ; 1000433e
    JLE 0x10004350                      ; 10004344
        ;   XREF to: 10004350 (CONDITIONAL_JUMP)  ; LAB_10004350
    MOV dword ptr [0x10240610],0xff     ; 10004346 | g_LightingOverflow
    MOV dword ptr [0x10236908],0xff     ; 10004350 | g_LightingAlpha
        ;   Label: LAB_10004350
    POP ESI                             ; 1000435a
    ADD ESP,0x4                         ; 1000435b
    RET                                 ; 1000435e
    MOV dword ptr [0x10236908],0xff     ; 1000435f | g_LightingAlpha
        ;   Label: LAB_1000435f
    MOV dword ptr [0x10240610],0x0      ; 10004369 | g_LightingOverflow
    POP ESI                             ; 10004373
        ;   Label: LAB_10004373
    ADD ESP,0x4                         ; 10004374
    RET                                 ; 10004377

