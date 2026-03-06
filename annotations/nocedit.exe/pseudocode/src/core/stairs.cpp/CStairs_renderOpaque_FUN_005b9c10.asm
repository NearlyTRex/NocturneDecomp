; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stairs_cpp_CStairs_renderOpaque_FUN_005b9c10(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0xbc]:1  local_bc
;
; Referenced Globals:
;   double DOUBLE_0065305a = 0.5
;   float FLOAT_006634b0 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   SMRGLTextureBasic SMRGLTextureBasic_00684178
;   undefined4 DAT_00800000
;   CDemonRenderer g_CDemonRendererInstance
;   int g_ActiveRenderColor
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b9c10
        ;   Label: core_stairs.cpp_CStairs_renderOpaque_FUN_005b9c10
    SUB ESP,0xe0                        ; 005b9c11
    MOV EAX,[0x0067d550]                ; 005b9c17 | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 005b9c1c | DAT_02f33744
    JNZ 0x005b9c2c                      ; 005b9c20
        ;   XREF to: 005b9c2c (CONDITIONAL_JUMP)  ; LAB_005b9c2c
    XOR EAX,EAX                         ; 005b9c22
        ;   Label: LAB_005b9c22
    ADD ESP,0xe0                        ; 005b9c24
    POP EBP                             ; 005b9c2a
    RET                                 ; 005b9c2b
    MOV ECX,dword ptr [0x006703ec]      ; 005b9c2c | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_005b9c2c
    PUSH ECX                            ; 005b9c32 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005b9c33
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005b9c38
    TEST EAX,EAX                        ; 005b9c3b
    JNZ 0x005b9c22                      ; 005b9c3d
        ;   XREF to: 005b9c22 (CONDITIONAL_JUMP)  ; LAB_005b9c22
    PUSH EDI                            ; 005b9c3f
    PUSH ESI                            ; 005b9c40
    PUSH EBX                            ; 005b9c41
    MOV EBX,dword ptr [ESP + 0xf4]      ; 005b9c42
    PUSH EBX                            ; 005b9c49
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005b9c4a
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 005b9c4f
    LEA EDX,[ESP + 0x34]                ; 005b9c52
    PUSH EDX                            ; 005b9c56
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b9c57
    PUSH EBX                            ; 005b9c5d
    CALL dword ptr [EAX + 0x14]         ; 005b9c5e
    ADD ESP,0x8                         ; 005b9c61
    PUSH EAX                            ; 005b9c64
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005b9c65
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005b9c6a
    MOV dword ptr [ESP + 0xac],EAX      ; 005b9c6d
    TEST EAX,EAX                        ; 005b9c74
    JZ 0x005ba465                       ; 005b9c76
        ;   XREF to: 005ba465 (CONDITIONAL_JUMP)  ; LAB_005ba465
    PUSH 0x684178                       ; 005b9c7c | SMRGLTextureBasic_00684178
    MOV EDI,dword ptr [0x006703ec]      ; 005b9c81 | g_CDemonRendererPtr2
    PUSH EDI                            ; 005b9c87 | g_CDemonRendererInstance
    XOR ESI,ESI                         ; 005b9c88
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 005b9c8a
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EBP,dword ptr [EBX + 0x16c]     ; 005b9c8f
    ADD ESP,0x8                         ; 005b9c95
    TEST EBP,EBP                        ; 005b9c98
    JL 0x005b9ec0                       ; 005b9c9a
        ;   XREF to: 005b9ec0 (CONDITIONAL_JUMP)  ; LAB_005b9ec0
    MOV EBP,0x60                        ; 005b9ca0
    MOV EDI,0x90                        ; 005b9ca5
    MOV dword ptr [ESP + 0xcc],EBP      ; 005b9caa
    MOV dword ptr [ESP + 0xc8],EDI      ; 005b9cb1
    MOV EBP,0x30                        ; 005b9cb8
    XOR EDI,EDI                         ; 005b9cbd
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005b9cbf
        ;   Label: LAB_005b9cbf
    MOV dword ptr [ESP + 0xe8],ESI      ; 005b9cc6
    FLD float ptr [EAX + 0x160]         ; 005b9ccd
    FCHS                                ; 005b9cd3
    FMUL double ptr [0x0065305a]        ; 005b9cd5 | DOUBLE_0065305a
    FILD dword ptr [ESP + 0xe8]         ; 005b9cdb
    FXCH                                ; 005b9ce2
    FSTP float ptr [ESP + 0x58]         ; 005b9ce4
    FLD float ptr [EAX + 0x158]         ; 005b9ce8
    FMUL ST1                            ; 005b9cee
    FSTP float ptr [ESP + 0x5c]         ; 005b9cf0
    FMUL float ptr [EAX + 0x15c]        ; 005b9cf4
    LEA EBX,[ESP + 0x64]                ; 005b9cfa
    MOV EDX,dword ptr [0x006703ec]      ; 005b9cfe | g_CDemonRendererInstance | g_CDemonRendererPtr2
    LEA EAX,[ESP + 0x58]                ; 005b9d04
    FSTP float ptr [ESP + 0x60]         ; 005b9d08
    FLD float ptr [EAX]                 ; 005b9d0c
    FMUL float ptr [0x006634b0]         ; 005b9d0e | FLOAT_006634b0
    FISTP dword ptr [EBX]               ; 005b9d14
    FLD float ptr [EAX + 0x4]           ; 005b9d16
    FMUL float ptr [0x006634b0]         ; 005b9d19 | FLOAT_006634b0
    FISTP dword ptr [EBX + 0x4]         ; 005b9d1f
    FLD float ptr [EAX + 0x8]           ; 005b9d22
    FMUL float ptr [0x006634b0]         ; 005b9d25 | FLOAT_006634b0
    FISTP dword ptr [EBX + 0x8]         ; 005b9d2b
    LEA EAX,[ESP + 0x64]                ; 005b9d2e
    PUSH EAX                            ; 005b9d32
    MOV EAX,dword ptr [EDX]             ; 005b9d33 | g_CDemonRendererInstance
    ADD EAX,EDI                         ; 005b9d35
    PUSH EAX                            ; 005b9d37
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005b9d38
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x78]                ; 005b9d3d
    ADD ESP,0x8                         ; 005b9d41
    MOV EDX,dword ptr [0x006703ec]      ; 005b9d44 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005b9d4a
    FLD float ptr [ESP + 0x60]          ; 005b9d51
    FADD float ptr [EAX + 0x15c]        ; 005b9d55
    LEA EAX,[ESP + 0x58]                ; 005b9d5b
    FSTP float ptr [ESP + 0x60]         ; 005b9d5f
    FLD float ptr [EAX]                 ; 005b9d63
    FMUL float ptr [0x006634b0]         ; 005b9d65 | FLOAT_006634b0
    FISTP dword ptr [EBX]               ; 005b9d6b
    FLD float ptr [EAX + 0x4]           ; 005b9d6d
    FMUL float ptr [0x006634b0]         ; 005b9d70 | FLOAT_006634b0
    FISTP dword ptr [EBX + 0x4]         ; 005b9d76
    FLD float ptr [EAX + 0x8]           ; 005b9d79
    FMUL float ptr [0x006634b0]         ; 005b9d7c | FLOAT_006634b0
    FISTP dword ptr [EBX + 0x8]         ; 005b9d82
    LEA EAX,[ESP + 0x70]                ; 005b9d85
    PUSH EAX                            ; 005b9d89
    MOV EAX,dword ptr [EDX]             ; 005b9d8a | g_CDemonRendererInstance
    ADD EAX,EBP                         ; 005b9d8c
    PUSH EAX                            ; 005b9d8e
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005b9d8f
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0xa8]                ; 005b9d94
    ADD ESP,0x8                         ; 005b9d9b
    MOV EDX,dword ptr [0x006703ec]      ; 005b9d9e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005b9da4
    FLD float ptr [ESP + 0x60]          ; 005b9dab
    FSUB float ptr [EAX + 0x15c]        ; 005b9daf
    FLD float ptr [ESP + 0x58]          ; 005b9db5
    FXCH                                ; 005b9db9
    FSTP float ptr [ESP + 0x60]         ; 005b9dbb
    FADD float ptr [EAX + 0x160]        ; 005b9dbf
    LEA EAX,[ESP + 0x58]                ; 005b9dc5
    FSTP float ptr [ESP + 0x58]         ; 005b9dc9
    FLD float ptr [EAX]                 ; 005b9dcd
    FMUL float ptr [0x006634b0]         ; 005b9dcf | FLOAT_006634b0
    FISTP dword ptr [EBX]               ; 005b9dd5
    FLD float ptr [EAX + 0x4]           ; 005b9dd7
    FMUL float ptr [0x006634b0]         ; 005b9dda | FLOAT_006634b0
    FISTP dword ptr [EBX + 0x4]         ; 005b9de0
    FLD float ptr [EAX + 0x8]           ; 005b9de3
    FMUL float ptr [0x006634b0]         ; 005b9de6 | FLOAT_006634b0
    FISTP dword ptr [EBX + 0x8]         ; 005b9dec
    LEA EAX,[ESP + 0xa0]                ; 005b9def
    PUSH EAX                            ; 005b9df6
    MOV EAX,dword ptr [EDX]             ; 005b9df7 | g_CDemonRendererInstance
    ADD EAX,dword ptr [ESP + 0xd0]      ; 005b9df9
    PUSH EAX                            ; 005b9e00
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005b9e01
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x90]                ; 005b9e06
    ADD ESP,0x8                         ; 005b9e0d
    MOV EDX,dword ptr [0x006703ec]      ; 005b9e10 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005b9e16
    FLD float ptr [ESP + 0x60]          ; 005b9e1d
    FADD float ptr [EAX + 0x15c]        ; 005b9e21
    LEA EAX,[ESP + 0x58]                ; 005b9e27
    FSTP float ptr [ESP + 0x60]         ; 005b9e2b
    FLD float ptr [EAX]                 ; 005b9e2f
    FMUL float ptr [0x006634b0]         ; 005b9e31 | FLOAT_006634b0
    FISTP dword ptr [EBX]               ; 005b9e37
    FLD float ptr [EAX + 0x4]           ; 005b9e39
    FMUL float ptr [0x006634b0]         ; 005b9e3c | FLOAT_006634b0
    FISTP dword ptr [EBX + 0x4]         ; 005b9e42
    FLD float ptr [EAX + 0x8]           ; 005b9e45
    FMUL float ptr [0x006634b0]         ; 005b9e48 | FLOAT_006634b0
    FISTP dword ptr [EBX + 0x8]         ; 005b9e4e
    LEA EAX,[ESP + 0x88]                ; 005b9e51
    MOV ECX,dword ptr [ESP + 0xc8]      ; 005b9e58
    PUSH EAX                            ; 005b9e5f
    MOV EAX,dword ptr [EDX]             ; 005b9e60 | g_CDemonRendererInstance
    ADD EAX,ECX                         ; 005b9e62
    PUSH EAX                            ; 005b9e64
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005b9e65
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005b9e6a
    INC ESI                             ; 005b9e6d
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005b9e6e
    ADD EDI,0xc0                        ; 005b9e75
    ADD EAX,0xc0                        ; 005b9e7b
    MOV EBX,dword ptr [ESP + 0xc8]      ; 005b9e80
    MOV dword ptr [ESP + 0xcc],EAX      ; 005b9e87
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005b9e8e
    ADD EBP,0xc0                        ; 005b9e95
    ADD EBX,0xc0                        ; 005b9e9b
    MOV EDX,dword ptr [EAX + 0x16c]     ; 005b9ea1
    MOV dword ptr [ESP + 0xc8],EBX      ; 005b9ea7
    CMP ESI,EDX                         ; 005b9eae
    JLE 0x005b9cbf                      ; 005b9eb0
        ;   XREF to: 005b9cbf (CONDITIONAL_JUMP)  ; LAB_005b9cbf
    LEA EAX,[EAX]                       ; 005b9eb6
    LEA EDX,[EDX]                       ; 005b9ebc
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005b9ec0
        ;   Label: LAB_005b9ec0
    XOR EBX,EBX                         ; 005b9ec7
    MOV ECX,0x3                         ; 005b9ec9
    MOV dword ptr [ESP + 0xd4],EBX      ; 005b9ece
    MOV ESI,dword ptr [EAX + 0x16c]     ; 005b9ed5
    MOV dword ptr [0x02d02570],ECX      ; 005b9edb | g_ActiveRenderColor
    TEST ESI,ESI                        ; 005b9ee1
    JLE 0x005ba0e0                      ; 005b9ee3
        ;   XREF to: 005ba0e0 (CONDITIONAL_JUMP)  ; LAB_005ba0e0
    MOV EBX,0x120                       ; 005b9ee9
    MOV ESI,0xc0                        ; 005b9eee
    MOV EBP,0x90                        ; 005b9ef3
    MOV EAX,0x60                        ; 005b9ef8
    XOR EDI,EDI                         ; 005b9efd
    MOV dword ptr [ESP + 0xd0],EBX      ; 005b9eff
    MOV dword ptr [ESP + 0xc4],ESI      ; 005b9f06
    MOV dword ptr [ESP + 0xdc],EDI      ; 005b9f0d
    MOV dword ptr [ESP + 0xd8],EAX      ; 005b9f14
    MOV EBX,0x30                        ; 005b9f1b
    MOV ESI,dword ptr [ESP + 0xd8]      ; 005b9f20
        ;   Label: LAB_005b9f20
    MOV EAX,[0x006703ec]                ; 005b9f27 | g_CDemonRendererPtr2
    MOV ECX,0xc                         ; 005b9f2c
    SUB ESP,0x30                        ; 005b9f31
    MOV EAX,dword ptr [EAX]             ; 005b9f34 | g_CDemonRendererInstance
    MOV EDI,ESP                         ; 005b9f36
    ADD ESI,EAX                         ; 005b9f38
    MOVSD.REP ES:EDI,ESI                ; 005b9f3a
    MOV ESI,dword ptr [ESP + 0x10c]     ; 005b9f3c
    MOV ECX,0xc                         ; 005b9f43
    SUB ESP,0x30                        ; 005b9f48
    ADD ESI,EAX                         ; 005b9f4b
    MOV EDI,ESP                         ; 005b9f4d
    MOVSD.REP ES:EDI,ESI                ; 005b9f4f
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 005b9f51
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    MOV EAX,[0x006703ec]                ; 005b9f56 | g_CDemonRendererPtr2
    ADD ESP,0x60                        ; 005b9f5b
    MOV ECX,0xc                         ; 005b9f5e
    SUB ESP,0x30                        ; 005b9f63
    MOV EAX,dword ptr [EAX]             ; 005b9f66 | g_CDemonRendererInstance
    MOV EDI,ESP                         ; 005b9f68
    LEA ESI,[EAX + EBP*0x1]             ; 005b9f6a
    MOVSD.REP ES:EDI,ESI                ; 005b9f6d
    SUB ESP,0x30                        ; 005b9f6f
    MOV ECX,0xc                         ; 005b9f72
    MOV EDI,ESP                         ; 005b9f77
    LEA ESI,[EAX + EBX*0x1]             ; 005b9f79
    MOVSD.REP ES:EDI,ESI                ; 005b9f7c
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 005b9f7e
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    MOV EAX,[0x006703ec]                ; 005b9f83 | g_CDemonRendererPtr2
    ADD ESP,0x60                        ; 005b9f88
    MOV ECX,0xc                         ; 005b9f8b
    SUB ESP,0x30                        ; 005b9f90
    MOV EAX,dword ptr [EAX]             ; 005b9f93 | g_CDemonRendererInstance
    MOV EDI,ESP                         ; 005b9f95
    LEA ESI,[EAX + EBX*0x1]             ; 005b9f97
    MOVSD.REP ES:EDI,ESI                ; 005b9f9a
    MOV ESI,dword ptr [ESP + 0x10c]     ; 005b9f9c
    MOV ECX,0xc                         ; 005b9fa3
    SUB ESP,0x30                        ; 005b9fa8
    ADD ESI,EAX                         ; 005b9fab
    MOV EDI,ESP                         ; 005b9fad
    MOVSD.REP ES:EDI,ESI                ; 005b9faf
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 005b9fb1
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    MOV EAX,[0x006703ec]                ; 005b9fb6 | g_CDemonRendererPtr2
    ADD ESP,0x60                        ; 005b9fbb
    MOV ECX,0xc                         ; 005b9fbe
    SUB ESP,0x30                        ; 005b9fc3
    MOV EAX,dword ptr [EAX]             ; 005b9fc6 | g_CDemonRendererInstance
    MOV EDI,ESP                         ; 005b9fc8
    LEA ESI,[EAX + EBP*0x1]             ; 005b9fca
    MOVSD.REP ES:EDI,ESI                ; 005b9fcd
    MOV ESI,dword ptr [ESP + 0x108]     ; 005b9fcf
    MOV ECX,0xc                         ; 005b9fd6
    SUB ESP,0x30                        ; 005b9fdb
    ADD ESI,EAX                         ; 005b9fde
    MOV EDI,ESP                         ; 005b9fe0
    MOVSD.REP ES:EDI,ESI                ; 005b9fe2
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 005b9fe4
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    MOV EAX,[0x006703ec]                ; 005b9fe9 | g_CDemonRendererPtr2
    ADD ESP,0x60                        ; 005b9fee
    MOV ECX,0xc                         ; 005b9ff1
    MOV ESI,dword ptr [ESP + 0xc4]      ; 005b9ff6
    MOV EAX,dword ptr [EAX]             ; 005b9ffd | g_CDemonRendererInstance
    SUB ESP,0x30                        ; 005b9fff
    ADD ESI,EAX                         ; 005ba002
    MOV EDI,ESP                         ; 005ba004
    MOVSD.REP ES:EDI,ESI                ; 005ba006
    SUB ESP,0x30                        ; 005ba008
    MOV ECX,0xc                         ; 005ba00b
    MOV EDI,ESP                         ; 005ba010
    LEA ESI,[EAX + EBX*0x1]             ; 005ba012
    MOVSD.REP ES:EDI,ESI                ; 005ba015
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 005ba017
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    MOV EAX,[0x006703ec]                ; 005ba01c | g_CDemonRendererPtr2
    ADD ESP,0x60                        ; 005ba021
    MOV ECX,0xc                         ; 005ba024
    MOV ESI,dword ptr [ESP + 0xd0]      ; 005ba029
    MOV EAX,dword ptr [EAX]             ; 005ba030 | g_CDemonRendererInstance
    SUB ESP,0x30                        ; 005ba032
    ADD ESI,EAX                         ; 005ba035
    MOV EDI,ESP                         ; 005ba037
    MOVSD.REP ES:EDI,ESI                ; 005ba039
    SUB ESP,0x30                        ; 005ba03b
    MOV ECX,0xc                         ; 005ba03e
    MOV EDI,ESP                         ; 005ba043
    LEA ESI,[EAX + EBP*0x1]             ; 005ba045
    ADD EBX,0xc0                        ; 005ba048
    MOVSD.REP ES:EDI,ESI                ; 005ba04e
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 005ba050
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 005ba055
    ADD EBP,0xc0                        ; 005ba058
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005ba05e
    MOV EDX,dword ptr [ESP + 0xc4]      ; 005ba065
    MOV ECX,dword ptr [ESP + 0xdc]      ; 005ba06c
    MOV ESI,dword ptr [ESP + 0xd8]      ; 005ba073
    MOV EDI,dword ptr [ESP + 0xd4]      ; 005ba07a
    ADD EAX,0xc0                        ; 005ba081
    ADD EDX,0xc0                        ; 005ba086
    ADD ECX,0xc0                        ; 005ba08c
    ADD ESI,0xc0                        ; 005ba092
    INC EDI                             ; 005ba098
    MOV dword ptr [ESP + 0xd0],EAX      ; 005ba099
    MOV dword ptr [ESP + 0xc4],EDX      ; 005ba0a0
    MOV EDX,dword ptr [ESP + 0xf4]      ; 005ba0a7
    MOV dword ptr [ESP + 0xdc],ECX      ; 005ba0ae
    MOV dword ptr [ESP + 0xd8],ESI      ; 005ba0b5
    MOV ECX,dword ptr [EDX + 0x16c]     ; 005ba0bc
    MOV dword ptr [ESP + 0xd4],EDI      ; 005ba0c2
    CMP EDI,ECX                         ; 005ba0c9
    JL 0x005b9f20                       ; 005ba0cb
        ;   XREF to: 005b9f20 (CONDITIONAL_JUMP)  ; LAB_005b9f20
    LEA EAX,[EAX]                       ; 005ba0d1
    LEA EDX,[EDX]                       ; 005ba0d7
    LEA EAX,[EAX]                       ; 005ba0dd
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ba0e0
        ;   Label: LAB_005ba0e0
    MOV EAX,dword ptr [EAX + 0x16c]     ; 005ba0e7
    SHL EAX,0x2                         ; 005ba0ed
    MOV ECX,0xc                         ; 005ba0f0
    LEA EDX,[EAX + 0x2]                 ; 005ba0f5
    MOV EBX,dword ptr [0x006703ec]      ; 005ba0f8 | g_CDemonRendererPtr2
    LEA EAX,[EDX*0x4 + 0x0]             ; 005ba0fe
    SUB ESP,0x30                        ; 005ba105
    SUB EAX,EDX                         ; 005ba108
    MOV EBX,dword ptr [EBX]             ; 005ba10a | g_CDemonRendererInstance
    SHL EAX,0x4                         ; 005ba10c
    MOV EDI,ESP                         ; 005ba10f
    LEA ESI,[EBX + EAX*0x1]             ; 005ba111
    MOV EDX,dword ptr [ESP + 0x124]     ; 005ba114
    MOVSD.REP ES:EDI,ESI                ; 005ba11b
    MOV EDX,dword ptr [EDX + 0x16c]     ; 005ba11d
    LEA EAX,[EDX*0x4 + 0x0]             ; 005ba123
    SUB ESP,0x30                        ; 005ba12a
    SUB EAX,EDX                         ; 005ba12d
    MOV ECX,0xc                         ; 005ba12f
    SHL EAX,0x6                         ; 005ba134
    MOV EDI,ESP                         ; 005ba137
    LEA ESI,[EBX + EAX*0x1]             ; 005ba139
    MOV EBP,0x8000                      ; 005ba13c
    MOV EBX,0x4                         ; 005ba141
    MOVSD.REP ES:EDI,ESI                ; 005ba146
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 005ba148
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    MOV ECX,0xff00                      ; 005ba14d
    ADD ESP,0x60                        ; 005ba152
    XOR ESI,ESI                         ; 005ba155
    XOR EDI,EDI                         ; 005ba157
    XOR EAX,EAX                         ; 005ba159
    MOV dword ptr [ESP + 0x10],EBX      ; 005ba15b
    MOV dword ptr [ESP + 0x20],ESI      ; 005ba15f
    MOV dword ptr [ESP + 0x1c],ESI      ; 005ba163
    MOV dword ptr [ESP + 0x18],ESI      ; 005ba167
    MOV dword ptr [ESP + 0x14],ESI      ; 005ba16b
    MOV dword ptr [ESP + 0xb0],ESI      ; 005ba16f
    MOV dword ptr [ESP + 0xb4],ECX      ; 005ba176
    XOR EBX,EBX                         ; 005ba17d
    MOV EDX,dword ptr [ESP + 0xf4]      ; 005ba17f
        ;   Label: LAB_005ba17f
    MOV EDX,dword ptr [EDX + 0x16c]     ; 005ba186
    SHL EDX,0x2                         ; 005ba18c
    CMP EBX,EDX                         ; 005ba18f
    JG 0x005ba1d9                       ; 005ba191
        ;   XREF to: 005ba1d9 (CONDITIONAL_JUMP)  ; LAB_005ba1d9
    MOV EDX,dword ptr [0x006703ec]      ; 005ba193 | g_CDemonRendererPtr2
    MOV ECX,dword ptr [EDX]             ; 005ba199 | g_CDemonRendererInstance
    MOV dword ptr [ECX + EAX*0x1 + 0x20],EDI ; 005ba19b
    MOV ECX,dword ptr [EDX]             ; 005ba19f | g_CDemonRendererInstance
    MOV ESI,dword ptr [ESP + 0xb0]      ; 005ba1a1
    MOV dword ptr [ECX + EAX*0x1 + 0x24],ESI ; 005ba1a8
    MOV ECX,dword ptr [EDX]             ; 005ba1ac | g_CDemonRendererInstance
    MOV ESI,dword ptr [ESP + 0xb4]      ; 005ba1ae
    MOV dword ptr [ECX + EAX*0x1 + 0x28],ESI ; 005ba1b5
    MOV ECX,dword ptr [EDX]             ; 005ba1b9 | g_CDemonRendererInstance
    MOV dword ptr [ECX + EAX*0x1 + 0x2c],EBP ; 005ba1bb
    MOV ECX,dword ptr [EDX]             ; 005ba1bf | g_CDemonRendererInstance
    MOV dword ptr [ECX + EAX*0x1 + 0x18],0x800000 ; 005ba1c1 | DAT_00800000
    ADD EAX,0x30                        ; 005ba1c9
    MOV EDX,dword ptr [EDX]             ; 005ba1cc | g_CDemonRendererInstance
    INC EBX                             ; 005ba1ce
    MOV dword ptr [EDX + EAX*0x1 + -0x14],0x800000 ; 005ba1cf | DAT_00800000
    JMP 0x005ba17f                      ; 005ba1d7
        ;   XREF to: 005ba17f (UNCONDITIONAL_JUMP)  ; LAB_005ba17f
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ba1d9
        ;   Label: LAB_005ba1d9
    MOV EDX,dword ptr [EAX + 0x16c]     ; 005ba1e0
    XOR EDI,EDI                         ; 005ba1e6
    TEST EDX,EDX                        ; 005ba1e8
    JLE 0x005ba260                      ; 005ba1ea
        ;   XREF to: 005ba260 (CONDITIONAL_JUMP)  ; LAB_005ba260
    XOR ESI,ESI                         ; 005ba1f0
    MOV dword ptr [ESP + 0x24],ESI      ; 005ba1f2
        ;   Label: LAB_005ba1f2
    LEA EBP,[ESI + 0x1]                 ; 005ba1f6
    LEA EBX,[ESI + 0x3]                 ; 005ba1f9
    LEA EAX,[ESI + 0x2]                 ; 005ba1fc
    MOV dword ptr [ESP + 0x30],EAX      ; 005ba1ff
    LEA EAX,[ESP + 0xc]                 ; 005ba203
    PUSH EAX                            ; 005ba207
    MOV ECX,dword ptr [0x006703ec]      ; 005ba208 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 005ba20e | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x30],EBP      ; 005ba20f
    MOV dword ptr [ESP + 0x34],EBX      ; 005ba213
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 005ba217
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 005ba21c
    LEA EAX,[ESP + 0xc]                 ; 005ba21f
    MOV dword ptr [ESP + 0x24],EBP      ; 005ba223
    MOV dword ptr [ESP + 0x30],EBX      ; 005ba227
    PUSH EAX                            ; 005ba22b
    LEA EBP,[ESI + 0x4]                 ; 005ba22c
    MOV EBX,dword ptr [0x006703ec]      ; 005ba22f | g_CDemonRendererInstance | g_CDemonRendererPtr2
    ADD ESI,0x6                         ; 005ba235
    PUSH EBX                            ; 005ba238 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x30],EBP      ; 005ba239
    MOV dword ptr [ESP + 0x34],ESI      ; 005ba23d
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 005ba241
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 005ba246
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ba249
    INC EDI                             ; 005ba250
    MOV ESI,EBP                         ; 005ba251
    CMP EDI,dword ptr [EAX + 0x16c]     ; 005ba253
    JL 0x005ba1f2                       ; 005ba259
        ;   XREF to: 005ba1f2 (CONDITIONAL_JUMP)  ; LAB_005ba1f2
    LEA EAX,[EAX]                       ; 005ba25b
    MOV ECX,ECX                         ; 005ba25e
    MOV EAX,0x3                         ; 005ba260
        ;   Label: LAB_005ba260
    MOV EBP,0x1                         ; 005ba265
    MOV EDI,0xff00                      ; 005ba26a
    XOR EDX,EDX                         ; 005ba26f
    XOR ESI,ESI                         ; 005ba271
    MOV dword ptr [ESP + 0x10],EAX      ; 005ba273
    MOV dword ptr [ESP + 0x20],EDX      ; 005ba277
    MOV dword ptr [ESP + 0x1c],EDX      ; 005ba27b
    MOV EAX,0x2                         ; 005ba27f
    MOV dword ptr [ESP + 0x18],EDX      ; 005ba284
    MOV dword ptr [ESP + 0x2c],EAX      ; 005ba288
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ba28c
    MOV dword ptr [ESP + 0x14],EDX      ; 005ba293
    ADD EAX,0x170                       ; 005ba297
    MOV dword ptr [ESP + 0x24],EDX      ; 005ba29c
    MOV dword ptr [ESP + 0xb8],EAX      ; 005ba2a0
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ba2a7
    MOV dword ptr [ESP + 0x28],EBP      ; 005ba2ae
    ADD EAX,0x188                       ; 005ba2b2
    MOV dword ptr [ESP + 0xe0],EDX      ; 005ba2b7
    MOV dword ptr [ESP + 0xc0],EAX      ; 005ba2be
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ba2c5
    MOV dword ptr [ESP + 0xe4],EDX      ; 005ba2cc
    ADD EAX,0x17c                       ; 005ba2d3
    MOV EBP,0x8000                      ; 005ba2d8
    MOV dword ptr [ESP + 0xbc],EAX      ; 005ba2dd
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ba2e4
        ;   Label: LAB_005ba2e4
    MOV EAX,dword ptr [EAX + 0x16c]     ; 005ba2eb
    MOV EBX,dword ptr [ESP + 0xe0]      ; 005ba2f1
    ADD EAX,EAX                         ; 005ba2f8
    CMP EAX,EBX                         ; 005ba2fa
    JLE 0x005ba465                      ; 005ba2fc
        ;   XREF to: 005ba465 (CONDITIONAL_JUMP)  ; LAB_005ba465
    IMUL EAX,EBX,0x38                   ; 005ba302
    MOV ECX,dword ptr [ESP + 0xb8]      ; 005ba305
    LEA EBX,[ESP + 0x7c]                ; 005ba30c
    ADD EAX,ECX                         ; 005ba310
    MOV EDX,dword ptr [0x006703ec]      ; 005ba312 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005ba318
    FMUL float ptr [0x006634b0]         ; 005ba31a | FLOAT_006634b0
    FISTP dword ptr [EBX]               ; 005ba320
    FLD float ptr [EAX + 0x4]           ; 005ba322
    FMUL float ptr [0x006634b0]         ; 005ba325 | FLOAT_006634b0
    FISTP dword ptr [EBX + 0x4]         ; 005ba32b
    FLD float ptr [EAX + 0x8]           ; 005ba32e
    FMUL float ptr [0x006634b0]         ; 005ba331 | FLOAT_006634b0
    FISTP dword ptr [EBX + 0x8]         ; 005ba337
    LEA EAX,[ESP + 0x7c]                ; 005ba33a
    PUSH EAX                            ; 005ba33e
    MOV EAX,dword ptr [EDX]             ; 005ba33f | g_CDemonRendererInstance
    PUSH EAX                            ; 005ba341
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ba342
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ba347
    LEA EBX,[ESP + 0x4c]                ; 005ba34a
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005ba34e
    MOV EDX,dword ptr [0x006703ec]      ; 005ba355 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005ba35b
    FMUL float ptr [0x006634b0]         ; 005ba35d | FLOAT_006634b0
    FISTP dword ptr [EBX]               ; 005ba363
    FLD float ptr [EAX + 0x4]           ; 005ba365
    FMUL float ptr [0x006634b0]         ; 005ba368 | FLOAT_006634b0
    FISTP dword ptr [EBX + 0x4]         ; 005ba36e
    FLD float ptr [EAX + 0x8]           ; 005ba371
    FMUL float ptr [0x006634b0]         ; 005ba374 | FLOAT_006634b0
    FISTP dword ptr [EBX + 0x8]         ; 005ba37a
    LEA EAX,[ESP + 0x4c]                ; 005ba37d
    PUSH EAX                            ; 005ba381
    MOV EAX,dword ptr [EDX]             ; 005ba382 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 005ba384
    PUSH EAX                            ; 005ba387
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ba388
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ba38d
    LEA EBX,[ESP + 0x94]                ; 005ba390
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005ba397
    MOV EDX,dword ptr [0x006703ec]      ; 005ba39e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005ba3a4
    FMUL float ptr [0x006634b0]         ; 005ba3a6 | FLOAT_006634b0
    FISTP dword ptr [EBX]               ; 005ba3ac
    FLD float ptr [EAX + 0x4]           ; 005ba3ae
    FMUL float ptr [0x006634b0]         ; 005ba3b1 | FLOAT_006634b0
    FISTP dword ptr [EBX + 0x4]         ; 005ba3b7
    FLD float ptr [EAX + 0x8]           ; 005ba3ba
    FMUL float ptr [0x006634b0]         ; 005ba3bd | FLOAT_006634b0
    FISTP dword ptr [EBX + 0x8]         ; 005ba3c3
    LEA EAX,[ESP + 0x94]                ; 005ba3c6
    PUSH EAX                            ; 005ba3cd
    MOV EAX,dword ptr [EDX]             ; 005ba3ce | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 005ba3d0
    PUSH EAX                            ; 005ba3d3
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ba3d4
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ba3d9
    XOR EAX,EAX                         ; 005ba3dc
    MOV EBX,dword ptr [ESP + 0xe4]      ; 005ba3de
    MOV EDX,dword ptr [0x006703ec]      ; 005ba3e5 | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_005ba3e5
    MOV ECX,dword ptr [EDX]             ; 005ba3eb | g_CDemonRendererInstance
    MOV dword ptr [ECX + EAX*0x1 + 0x20],ESI ; 005ba3ed
    MOV ECX,dword ptr [EDX]             ; 005ba3f1 | g_CDemonRendererInstance
    MOV dword ptr [ECX + EAX*0x1 + 0x24],EDI ; 005ba3f3
    MOV ECX,dword ptr [EDX]             ; 005ba3f7 | g_CDemonRendererInstance
    MOV dword ptr [ECX + EAX*0x1 + 0x28],EBX ; 005ba3f9
    MOV ECX,dword ptr [EDX]             ; 005ba3fd | g_CDemonRendererInstance
    MOV dword ptr [ECX + EAX*0x1 + 0x2c],EBP ; 005ba3ff
    MOV ECX,dword ptr [EDX]             ; 005ba403 | g_CDemonRendererInstance
    MOV dword ptr [ECX + EAX*0x1 + 0x18],0x800000 ; 005ba405 | DAT_00800000
    ADD EAX,0x30                        ; 005ba40d
    MOV ECX,dword ptr [EDX]             ; 005ba410 | g_CDemonRendererInstance
    MOV dword ptr [ECX + EAX*0x1 + -0x14],0x800000 ; 005ba412 | DAT_00800000
    CMP EAX,0x90                        ; 005ba41a
    JNZ 0x005ba3e5                      ; 005ba41f
        ;   XREF to: 005ba3e5 (CONDITIONAL_JUMP)  ; LAB_005ba3e5
    LEA EAX,[ESP + 0xc]                 ; 005ba421
    PUSH EAX                            ; 005ba425
    PUSH EDX                            ; 005ba426 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 005ba427
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 005ba42c
    MOV EBX,dword ptr [ESP + 0xc0]      ; 005ba42f
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005ba436
    MOV EDX,dword ptr [ESP + 0xe0]      ; 005ba43d
    ADD EBX,0x38                        ; 005ba444
    ADD EAX,0x38                        ; 005ba447
    INC EDX                             ; 005ba44a
    MOV dword ptr [ESP + 0xc0],EBX      ; 005ba44b
    MOV dword ptr [ESP + 0xbc],EAX      ; 005ba452
    MOV dword ptr [ESP + 0xe0],EDX      ; 005ba459
    JMP 0x005ba2e4                      ; 005ba460
        ;   XREF to: 005ba2e4 (UNCONDITIONAL_JUMP)  ; LAB_005ba2e4
    MOV ECX,dword ptr [ESP + 0xf4]      ; 005ba465
        ;   Label: LAB_005ba465
    PUSH ECX                            ; 005ba46c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005ba46d
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005ba472
    MOV EAX,dword ptr [ESP + 0xac]      ; 005ba475
    POP EBX                             ; 005ba47c
    POP ESI                             ; 005ba47d
    POP EDI                             ; 005ba47e
    ADD ESP,0xe0                        ; 005ba47f
    POP EBP                             ; 005ba485
    RET                                 ; 005ba486

