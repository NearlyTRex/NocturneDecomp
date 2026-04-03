; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stairs_cpp_CStairs_renderOpaque_FUN_005b9c10(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; Local Variables:
; SMRGLPrimitiveQuadIndex Stack[-0xe4]:40  local_e4
; CBoundingBox3D   Stack[-0xbc]:24  local_bc
; CVector3i        Stack[-0x9c]:12  local_9c
; float            Stack[-0x90]:4  local_90
; float            Stack[-0x8c]:4  local_8c
; float            Stack[-0x88]:4  local_88
; CVector3i        Stack[-0x84]:12  local_84
; CVector3i        Stack[-0x78]:12  local_78
; CVector3i        Stack[-0x6c]:12  local_6c
; int              Stack[-0x50]:4  local_50
; int              Stack[-0x4c]:4  local_4c
; CVector3i        Stack[-0x48]:12  local_48
; int              Stack[-0x3c]:4  local_3c
; char *           Stack[-0x30]:4  local_30
; float *          Stack[-0x2c]:4  local_2c
; UOrientationVector * Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; int              Stack[-0x10]:4  local_10
; int              Stack[-0xc]:4  local_c
; int              Stack[-0x8]:4  local_8
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
;   undefined4 g_CDemonMissionInstance.is_in_editor
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
    CMP dword ptr [EAX + 0x4],0x0       ; 005b9c1c | g_CDemonMissionInstance.is_in_editor
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
    JMP 0x006031b4                      ; 005b9f20
        ;   XREF to: 006031b4 (UNCONDITIONAL_JUMP)  ; LAB_006031b4
        ;   Label: LAB_005b9f20
    MOVSD.REP ES:EDI,ESI                ; 005b9f3a
        ;   Label: LAB_005b9f3a
    JMP 0x00603219                      ; 005b9f3c
        ;   XREF to: 00603219 (UNCONDITIONAL_JUMP)  ; LAB_00603219
    MOVSD.REP ES:EDI,ESI                ; 005b9f4f
        ;   Label: LAB_005b9f4f
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 005b9f51
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    MOV EAX,[0x006703ec]                ; 005b9f56 | g_CDemonRendererPtr2
    ADD ESP,0x60                        ; 005b9f5b
    JMP 0x00603277                      ; 005b9f5e
        ;   XREF to: 00603277 (UNCONDITIONAL_JUMP)  ; LAB_00603277
    MOVSD.REP ES:EDI,ESI                ; 005b9f6d
        ;   Label: LAB_005b9f6d
    JMP 0x006032d1                      ; 005b9f6f
        ;   XREF to: 006032d1 (UNCONDITIONAL_JUMP)  ; LAB_006032d1
    MOVSD.REP ES:EDI,ESI                ; 005b9f7c
        ;   Label: LAB_005b9f7c
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 005b9f7e
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    MOV EAX,[0x006703ec]                ; 005b9f83 | g_CDemonRendererPtr2
    ADD ESP,0x60                        ; 005b9f88
    JMP 0x00603329                      ; 005b9f8b
        ;   XREF to: 00603329 (UNCONDITIONAL_JUMP)  ; LAB_00603329
    MOVSD.REP ES:EDI,ESI                ; 005b9f9a
        ;   Label: LAB_005b9f9a
    JMP 0x00603383                      ; 005b9f9c
        ;   XREF to: 00603383 (UNCONDITIONAL_JUMP)  ; LAB_00603383
    MOVSD.REP ES:EDI,ESI                ; 005b9faf
        ;   Label: LAB_005b9faf
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 005b9fb1
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    MOV EAX,[0x006703ec]                ; 005b9fb6 | g_CDemonRendererPtr2
    ADD ESP,0x60                        ; 005b9fbb
    JMP 0x006033e1                      ; 005b9fbe
        ;   XREF to: 006033e1 (UNCONDITIONAL_JUMP)  ; LAB_006033e1
    MOVSD.REP ES:EDI,ESI                ; 005b9fcd
        ;   Label: LAB_005b9fcd
    JMP 0x0060343b                      ; 005b9fcf
        ;   XREF to: 0060343b (UNCONDITIONAL_JUMP)  ; LAB_0060343b
    MOVSD.REP ES:EDI,ESI                ; 005b9fe2
        ;   Label: LAB_005b9fe2
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 005b9fe4
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    MOV EAX,[0x006703ec]                ; 005b9fe9 | g_CDemonRendererPtr2
    ADD ESP,0x60                        ; 005b9fee
    JMP 0x00603499                      ; 005b9ff1
        ;   XREF to: 00603499 (UNCONDITIONAL_JUMP)  ; LAB_00603499
    MOVSD.REP ES:EDI,ESI                ; 005ba006
        ;   Label: LAB_005ba006
    JMP 0x006034f9                      ; 005ba008
        ;   XREF to: 006034f9 (UNCONDITIONAL_JUMP)  ; LAB_006034f9
    MOVSD.REP ES:EDI,ESI                ; 005ba015
        ;   Label: LAB_005ba015
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 005ba017
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    MOV EAX,[0x006703ec]                ; 005ba01c | g_CDemonRendererPtr2
    ADD ESP,0x60                        ; 005ba021
    JMP 0x00603551                      ; 005ba024
        ;   XREF to: 00603551 (UNCONDITIONAL_JUMP)  ; LAB_00603551
    MOVSD.REP ES:EDI,ESI                ; 005ba039
        ;   Label: LAB_005ba039
    JMP 0x006035b1                      ; 005ba03b
        ;   XREF to: 006035b1 (UNCONDITIONAL_JUMP)  ; LAB_006035b1
    MOVSD.REP ES:EDI,ESI                ; 005ba04e
        ;   Label: LAB_005ba04e
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
    JMP 0x0060360f                      ; 005ba12a
        ;   XREF to: 0060360f (UNCONDITIONAL_JUMP)  ; LAB_0060360f
    MOVSD.REP ES:EDI,ESI                ; 005ba146
        ;   Label: LAB_005ba146
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
    MOV ESI,dword ptr [ESP + 0xd8]      ; 006031b4
        ;   Label: LAB_006031b4
    MOV EAX,[0x006703ec]                ; 006031bb | g_CDemonRendererPtr2
    MOV ECX,0xc                         ; 006031c0
    SUB ESP,0x30                        ; 006031c5
    MOV EAX,dword ptr [EAX]             ; 006031c8
    MOV EDI,ESP                         ; 006031ca
    ADD ESI,EAX                         ; 006031cc
    MOV ECX,dword ptr [ESI]             ; 006031ce
    MOV dword ptr [EDI],ECX             ; 006031d0
    MOV ECX,dword ptr [ESI + 0x4]       ; 006031d2
    MOV dword ptr [EDI + 0x4],ECX       ; 006031d5
    MOV ECX,dword ptr [ESI + 0x8]       ; 006031d8
    MOV dword ptr [EDI + 0x8],ECX       ; 006031db
    MOV ECX,dword ptr [ESI + 0xc]       ; 006031de
    MOV dword ptr [EDI + 0xc],ECX       ; 006031e1
    MOV ECX,dword ptr [ESI + 0x10]      ; 006031e4
    MOV dword ptr [EDI + 0x10],ECX      ; 006031e7
    MOV ECX,dword ptr [ESI + 0x14]      ; 006031ea
    MOV dword ptr [EDI + 0x14],ECX      ; 006031ed
    MOV ECX,dword ptr [ESI + 0x18]      ; 006031f0
    MOV dword ptr [EDI + 0x18],ECX      ; 006031f3
    MOV ECX,dword ptr [ESI + 0x1c]      ; 006031f6
    MOV dword ptr [EDI + 0x1c],ECX      ; 006031f9
    MOV ECX,dword ptr [ESI + 0x20]      ; 006031fc
    MOV dword ptr [EDI + 0x20],ECX      ; 006031ff
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603202
    MOV dword ptr [EDI + 0x24],ECX      ; 00603205
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603208
    MOV dword ptr [EDI + 0x28],ECX      ; 0060320b
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060320e
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603211
    JMP 0x005b9f3a                      ; 00603214
        ;   XREF to: 005b9f3a (UNCONDITIONAL_JUMP)  ; LAB_005b9f3a
    MOV ESI,dword ptr [ESP + 0x10c]     ; 00603219
        ;   Label: LAB_00603219
    MOV ECX,0xc                         ; 00603220
    SUB ESP,0x30                        ; 00603225
    ADD ESI,EAX                         ; 00603228
    MOV EDI,ESP                         ; 0060322a
    MOV ECX,dword ptr [ESI]             ; 0060322c
    MOV dword ptr [EDI],ECX             ; 0060322e
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603230
    MOV dword ptr [EDI + 0x4],ECX       ; 00603233
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603236
    MOV dword ptr [EDI + 0x8],ECX       ; 00603239
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060323c
    MOV dword ptr [EDI + 0xc],ECX       ; 0060323f
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603242
    MOV dword ptr [EDI + 0x10],ECX      ; 00603245
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603248
    MOV dword ptr [EDI + 0x14],ECX      ; 0060324b
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060324e
    MOV dword ptr [EDI + 0x18],ECX      ; 00603251
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603254
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603257
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060325a
    MOV dword ptr [EDI + 0x20],ECX      ; 0060325d
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603260
    MOV dword ptr [EDI + 0x24],ECX      ; 00603263
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603266
    MOV dword ptr [EDI + 0x28],ECX      ; 00603269
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060326c
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060326f
    JMP 0x005b9f4f                      ; 00603272
        ;   XREF to: 005b9f4f (UNCONDITIONAL_JUMP)  ; LAB_005b9f4f
    MOV ECX,0xc                         ; 00603277
        ;   Label: LAB_00603277
    SUB ESP,0x30                        ; 0060327c
    MOV EAX,dword ptr [EAX]             ; 0060327f
    MOV EDI,ESP                         ; 00603281
    LEA ESI,[EAX + EBP*0x1]             ; 00603283
    MOV ECX,dword ptr [ESI]             ; 00603286
    MOV dword ptr [EDI],ECX             ; 00603288
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060328a
    MOV dword ptr [EDI + 0x4],ECX       ; 0060328d
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603290
    MOV dword ptr [EDI + 0x8],ECX       ; 00603293
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603296
    MOV dword ptr [EDI + 0xc],ECX       ; 00603299
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060329c
    MOV dword ptr [EDI + 0x10],ECX      ; 0060329f
    MOV ECX,dword ptr [ESI + 0x14]      ; 006032a2
    MOV dword ptr [EDI + 0x14],ECX      ; 006032a5
    MOV ECX,dword ptr [ESI + 0x18]      ; 006032a8
    MOV dword ptr [EDI + 0x18],ECX      ; 006032ab
    MOV ECX,dword ptr [ESI + 0x1c]      ; 006032ae
    MOV dword ptr [EDI + 0x1c],ECX      ; 006032b1
    MOV ECX,dword ptr [ESI + 0x20]      ; 006032b4
    MOV dword ptr [EDI + 0x20],ECX      ; 006032b7
    MOV ECX,dword ptr [ESI + 0x24]      ; 006032ba
    MOV dword ptr [EDI + 0x24],ECX      ; 006032bd
    MOV ECX,dword ptr [ESI + 0x28]      ; 006032c0
    MOV dword ptr [EDI + 0x28],ECX      ; 006032c3
    MOV ECX,dword ptr [ESI + 0x2c]      ; 006032c6
    MOV dword ptr [EDI + 0x2c],ECX      ; 006032c9
    JMP 0x005b9f6d                      ; 006032cc
        ;   XREF to: 005b9f6d (UNCONDITIONAL_JUMP)  ; LAB_005b9f6d
    SUB ESP,0x30                        ; 006032d1
        ;   Label: LAB_006032d1
    MOV ECX,0xc                         ; 006032d4
    MOV EDI,ESP                         ; 006032d9
    LEA ESI,[EAX + EBX*0x1]             ; 006032db
    MOV ECX,dword ptr [ESI]             ; 006032de
    MOV dword ptr [EDI],ECX             ; 006032e0
    MOV ECX,dword ptr [ESI + 0x4]       ; 006032e2
    MOV dword ptr [EDI + 0x4],ECX       ; 006032e5
    MOV ECX,dword ptr [ESI + 0x8]       ; 006032e8
    MOV dword ptr [EDI + 0x8],ECX       ; 006032eb
    MOV ECX,dword ptr [ESI + 0xc]       ; 006032ee
    MOV dword ptr [EDI + 0xc],ECX       ; 006032f1
    MOV ECX,dword ptr [ESI + 0x10]      ; 006032f4
    MOV dword ptr [EDI + 0x10],ECX      ; 006032f7
    MOV ECX,dword ptr [ESI + 0x14]      ; 006032fa
    MOV dword ptr [EDI + 0x14],ECX      ; 006032fd
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603300
    MOV dword ptr [EDI + 0x18],ECX      ; 00603303
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603306
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603309
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060330c
    MOV dword ptr [EDI + 0x20],ECX      ; 0060330f
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603312
    MOV dword ptr [EDI + 0x24],ECX      ; 00603315
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603318
    MOV dword ptr [EDI + 0x28],ECX      ; 0060331b
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060331e
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603321
    JMP 0x005b9f7c                      ; 00603324
        ;   XREF to: 005b9f7c (UNCONDITIONAL_JUMP)  ; LAB_005b9f7c
    MOV ECX,0xc                         ; 00603329
        ;   Label: LAB_00603329
    SUB ESP,0x30                        ; 0060332e
    MOV EAX,dword ptr [EAX]             ; 00603331
    MOV EDI,ESP                         ; 00603333
    LEA ESI,[EAX + EBX*0x1]             ; 00603335
    MOV ECX,dword ptr [ESI]             ; 00603338
    MOV dword ptr [EDI],ECX             ; 0060333a
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060333c
    MOV dword ptr [EDI + 0x4],ECX       ; 0060333f
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603342
    MOV dword ptr [EDI + 0x8],ECX       ; 00603345
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603348
    MOV dword ptr [EDI + 0xc],ECX       ; 0060334b
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060334e
    MOV dword ptr [EDI + 0x10],ECX      ; 00603351
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603354
    MOV dword ptr [EDI + 0x14],ECX      ; 00603357
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060335a
    MOV dword ptr [EDI + 0x18],ECX      ; 0060335d
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603360
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603363
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603366
    MOV dword ptr [EDI + 0x20],ECX      ; 00603369
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060336c
    MOV dword ptr [EDI + 0x24],ECX      ; 0060336f
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603372
    MOV dword ptr [EDI + 0x28],ECX      ; 00603375
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603378
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060337b
    JMP 0x005b9f9a                      ; 0060337e
        ;   XREF to: 005b9f9a (UNCONDITIONAL_JUMP)  ; LAB_005b9f9a
    MOV ESI,dword ptr [ESP + 0x10c]     ; 00603383
        ;   Label: LAB_00603383
    MOV ECX,0xc                         ; 0060338a
    SUB ESP,0x30                        ; 0060338f
    ADD ESI,EAX                         ; 00603392
    MOV EDI,ESP                         ; 00603394
    MOV ECX,dword ptr [ESI]             ; 00603396
    MOV dword ptr [EDI],ECX             ; 00603398
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060339a
    MOV dword ptr [EDI + 0x4],ECX       ; 0060339d
    MOV ECX,dword ptr [ESI + 0x8]       ; 006033a0
    MOV dword ptr [EDI + 0x8],ECX       ; 006033a3
    MOV ECX,dword ptr [ESI + 0xc]       ; 006033a6
    MOV dword ptr [EDI + 0xc],ECX       ; 006033a9
    MOV ECX,dword ptr [ESI + 0x10]      ; 006033ac
    MOV dword ptr [EDI + 0x10],ECX      ; 006033af
    MOV ECX,dword ptr [ESI + 0x14]      ; 006033b2
    MOV dword ptr [EDI + 0x14],ECX      ; 006033b5
    MOV ECX,dword ptr [ESI + 0x18]      ; 006033b8
    MOV dword ptr [EDI + 0x18],ECX      ; 006033bb
    MOV ECX,dword ptr [ESI + 0x1c]      ; 006033be
    MOV dword ptr [EDI + 0x1c],ECX      ; 006033c1
    MOV ECX,dword ptr [ESI + 0x20]      ; 006033c4
    MOV dword ptr [EDI + 0x20],ECX      ; 006033c7
    MOV ECX,dword ptr [ESI + 0x24]      ; 006033ca
    MOV dword ptr [EDI + 0x24],ECX      ; 006033cd
    MOV ECX,dword ptr [ESI + 0x28]      ; 006033d0
    MOV dword ptr [EDI + 0x28],ECX      ; 006033d3
    MOV ECX,dword ptr [ESI + 0x2c]      ; 006033d6
    MOV dword ptr [EDI + 0x2c],ECX      ; 006033d9
    JMP 0x005b9faf                      ; 006033dc
        ;   XREF to: 005b9faf (UNCONDITIONAL_JUMP)  ; LAB_005b9faf
    MOV ECX,0xc                         ; 006033e1
        ;   Label: LAB_006033e1
    SUB ESP,0x30                        ; 006033e6
    MOV EAX,dword ptr [EAX]             ; 006033e9
    MOV EDI,ESP                         ; 006033eb
    LEA ESI,[EAX + EBP*0x1]             ; 006033ed
    MOV ECX,dword ptr [ESI]             ; 006033f0
    MOV dword ptr [EDI],ECX             ; 006033f2
    MOV ECX,dword ptr [ESI + 0x4]       ; 006033f4
    MOV dword ptr [EDI + 0x4],ECX       ; 006033f7
    MOV ECX,dword ptr [ESI + 0x8]       ; 006033fa
    MOV dword ptr [EDI + 0x8],ECX       ; 006033fd
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603400
    MOV dword ptr [EDI + 0xc],ECX       ; 00603403
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603406
    MOV dword ptr [EDI + 0x10],ECX      ; 00603409
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060340c
    MOV dword ptr [EDI + 0x14],ECX      ; 0060340f
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603412
    MOV dword ptr [EDI + 0x18],ECX      ; 00603415
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603418
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060341b
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060341e
    MOV dword ptr [EDI + 0x20],ECX      ; 00603421
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603424
    MOV dword ptr [EDI + 0x24],ECX      ; 00603427
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060342a
    MOV dword ptr [EDI + 0x28],ECX      ; 0060342d
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603430
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603433
    JMP 0x005b9fcd                      ; 00603436
        ;   XREF to: 005b9fcd (UNCONDITIONAL_JUMP)  ; LAB_005b9fcd
    MOV ESI,dword ptr [ESP + 0x108]     ; 0060343b
        ;   Label: LAB_0060343b
    MOV ECX,0xc                         ; 00603442
    SUB ESP,0x30                        ; 00603447
    ADD ESI,EAX                         ; 0060344a
    MOV EDI,ESP                         ; 0060344c
    MOV ECX,dword ptr [ESI]             ; 0060344e
    MOV dword ptr [EDI],ECX             ; 00603450
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603452
    MOV dword ptr [EDI + 0x4],ECX       ; 00603455
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603458
    MOV dword ptr [EDI + 0x8],ECX       ; 0060345b
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060345e
    MOV dword ptr [EDI + 0xc],ECX       ; 00603461
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603464
    MOV dword ptr [EDI + 0x10],ECX      ; 00603467
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060346a
    MOV dword ptr [EDI + 0x14],ECX      ; 0060346d
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603470
    MOV dword ptr [EDI + 0x18],ECX      ; 00603473
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603476
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603479
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060347c
    MOV dword ptr [EDI + 0x20],ECX      ; 0060347f
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603482
    MOV dword ptr [EDI + 0x24],ECX      ; 00603485
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603488
    MOV dword ptr [EDI + 0x28],ECX      ; 0060348b
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060348e
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603491
    JMP 0x005b9fe2                      ; 00603494
        ;   XREF to: 005b9fe2 (UNCONDITIONAL_JUMP)  ; LAB_005b9fe2
    MOV ECX,0xc                         ; 00603499
        ;   Label: LAB_00603499
    MOV ESI,dword ptr [ESP + 0xc4]      ; 0060349e
    MOV EAX,dword ptr [EAX]             ; 006034a5
    SUB ESP,0x30                        ; 006034a7
    ADD ESI,EAX                         ; 006034aa
    MOV EDI,ESP                         ; 006034ac
    MOV ECX,dword ptr [ESI]             ; 006034ae
    MOV dword ptr [EDI],ECX             ; 006034b0
    MOV ECX,dword ptr [ESI + 0x4]       ; 006034b2
    MOV dword ptr [EDI + 0x4],ECX       ; 006034b5
    MOV ECX,dword ptr [ESI + 0x8]       ; 006034b8
    MOV dword ptr [EDI + 0x8],ECX       ; 006034bb
    MOV ECX,dword ptr [ESI + 0xc]       ; 006034be
    MOV dword ptr [EDI + 0xc],ECX       ; 006034c1
    MOV ECX,dword ptr [ESI + 0x10]      ; 006034c4
    MOV dword ptr [EDI + 0x10],ECX      ; 006034c7
    MOV ECX,dword ptr [ESI + 0x14]      ; 006034ca
    MOV dword ptr [EDI + 0x14],ECX      ; 006034cd
    MOV ECX,dword ptr [ESI + 0x18]      ; 006034d0
    MOV dword ptr [EDI + 0x18],ECX      ; 006034d3
    MOV ECX,dword ptr [ESI + 0x1c]      ; 006034d6
    MOV dword ptr [EDI + 0x1c],ECX      ; 006034d9
    MOV ECX,dword ptr [ESI + 0x20]      ; 006034dc
    MOV dword ptr [EDI + 0x20],ECX      ; 006034df
    MOV ECX,dword ptr [ESI + 0x24]      ; 006034e2
    MOV dword ptr [EDI + 0x24],ECX      ; 006034e5
    MOV ECX,dword ptr [ESI + 0x28]      ; 006034e8
    MOV dword ptr [EDI + 0x28],ECX      ; 006034eb
    MOV ECX,dword ptr [ESI + 0x2c]      ; 006034ee
    MOV dword ptr [EDI + 0x2c],ECX      ; 006034f1
    JMP 0x005ba006                      ; 006034f4
        ;   XREF to: 005ba006 (UNCONDITIONAL_JUMP)  ; LAB_005ba006
    SUB ESP,0x30                        ; 006034f9
        ;   Label: LAB_006034f9
    MOV ECX,0xc                         ; 006034fc
    MOV EDI,ESP                         ; 00603501
    LEA ESI,[EAX + EBX*0x1]             ; 00603503
    MOV ECX,dword ptr [ESI]             ; 00603506
    MOV dword ptr [EDI],ECX             ; 00603508
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060350a
    MOV dword ptr [EDI + 0x4],ECX       ; 0060350d
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603510
    MOV dword ptr [EDI + 0x8],ECX       ; 00603513
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603516
    MOV dword ptr [EDI + 0xc],ECX       ; 00603519
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060351c
    MOV dword ptr [EDI + 0x10],ECX      ; 0060351f
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603522
    MOV dword ptr [EDI + 0x14],ECX      ; 00603525
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603528
    MOV dword ptr [EDI + 0x18],ECX      ; 0060352b
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060352e
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603531
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603534
    MOV dword ptr [EDI + 0x20],ECX      ; 00603537
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060353a
    MOV dword ptr [EDI + 0x24],ECX      ; 0060353d
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603540
    MOV dword ptr [EDI + 0x28],ECX      ; 00603543
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603546
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603549
    JMP 0x005ba015                      ; 0060354c
        ;   XREF to: 005ba015 (UNCONDITIONAL_JUMP)  ; LAB_005ba015
    MOV ECX,0xc                         ; 00603551
        ;   Label: LAB_00603551
    MOV ESI,dword ptr [ESP + 0xd0]      ; 00603556
    MOV EAX,dword ptr [EAX]             ; 0060355d
    SUB ESP,0x30                        ; 0060355f
    ADD ESI,EAX                         ; 00603562
    MOV EDI,ESP                         ; 00603564
    MOV ECX,dword ptr [ESI]             ; 00603566
    MOV dword ptr [EDI],ECX             ; 00603568
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060356a
    MOV dword ptr [EDI + 0x4],ECX       ; 0060356d
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603570
    MOV dword ptr [EDI + 0x8],ECX       ; 00603573
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603576
    MOV dword ptr [EDI + 0xc],ECX       ; 00603579
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060357c
    MOV dword ptr [EDI + 0x10],ECX      ; 0060357f
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603582
    MOV dword ptr [EDI + 0x14],ECX      ; 00603585
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603588
    MOV dword ptr [EDI + 0x18],ECX      ; 0060358b
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060358e
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603591
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603594
    MOV dword ptr [EDI + 0x20],ECX      ; 00603597
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060359a
    MOV dword ptr [EDI + 0x24],ECX      ; 0060359d
    MOV ECX,dword ptr [ESI + 0x28]      ; 006035a0
    MOV dword ptr [EDI + 0x28],ECX      ; 006035a3
    MOV ECX,dword ptr [ESI + 0x2c]      ; 006035a6
    MOV dword ptr [EDI + 0x2c],ECX      ; 006035a9
    JMP 0x005ba039                      ; 006035ac
        ;   XREF to: 005ba039 (UNCONDITIONAL_JUMP)  ; LAB_005ba039
    SUB ESP,0x30                        ; 006035b1
        ;   Label: LAB_006035b1
    MOV ECX,0xc                         ; 006035b4
    MOV EDI,ESP                         ; 006035b9
    LEA ESI,[EAX + EBP*0x1]             ; 006035bb
    ADD EBX,0xc0                        ; 006035be
    MOV ECX,dword ptr [ESI]             ; 006035c4
    MOV dword ptr [EDI],ECX             ; 006035c6
    MOV ECX,dword ptr [ESI + 0x4]       ; 006035c8
    MOV dword ptr [EDI + 0x4],ECX       ; 006035cb
    MOV ECX,dword ptr [ESI + 0x8]       ; 006035ce
    MOV dword ptr [EDI + 0x8],ECX       ; 006035d1
    MOV ECX,dword ptr [ESI + 0xc]       ; 006035d4
    MOV dword ptr [EDI + 0xc],ECX       ; 006035d7
    MOV ECX,dword ptr [ESI + 0x10]      ; 006035da
    MOV dword ptr [EDI + 0x10],ECX      ; 006035dd
    MOV ECX,dword ptr [ESI + 0x14]      ; 006035e0
    MOV dword ptr [EDI + 0x14],ECX      ; 006035e3
    MOV ECX,dword ptr [ESI + 0x18]      ; 006035e6
    MOV dword ptr [EDI + 0x18],ECX      ; 006035e9
    MOV ECX,dword ptr [ESI + 0x1c]      ; 006035ec
    MOV dword ptr [EDI + 0x1c],ECX      ; 006035ef
    MOV ECX,dword ptr [ESI + 0x20]      ; 006035f2
    MOV dword ptr [EDI + 0x20],ECX      ; 006035f5
    MOV ECX,dword ptr [ESI + 0x24]      ; 006035f8
    MOV dword ptr [EDI + 0x24],ECX      ; 006035fb
    MOV ECX,dword ptr [ESI + 0x28]      ; 006035fe
    MOV dword ptr [EDI + 0x28],ECX      ; 00603601
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603604
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603607
    JMP 0x005ba04e                      ; 0060360a
        ;   XREF to: 005ba04e (UNCONDITIONAL_JUMP)  ; LAB_005ba04e
    SUB ESP,0x30                        ; 0060360f
        ;   Label: LAB_0060360f
    SUB EAX,EDX                         ; 00603612
    MOV ECX,0xc                         ; 00603614
    SHL EAX,0x6                         ; 00603619
    MOV EDI,ESP                         ; 0060361c
    LEA ESI,[EBX + EAX*0x1]             ; 0060361e
    MOV EBP,0x8000                      ; 00603621
    MOV EBX,0x4                         ; 00603626
    MOV ECX,dword ptr [ESI]             ; 0060362b
    MOV dword ptr [EDI],ECX             ; 0060362d
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060362f
    MOV dword ptr [EDI + 0x4],ECX       ; 00603632
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603635
    MOV dword ptr [EDI + 0x8],ECX       ; 00603638
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060363b
    MOV dword ptr [EDI + 0xc],ECX       ; 0060363e
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603641
    MOV dword ptr [EDI + 0x10],ECX      ; 00603644
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603647
    MOV dword ptr [EDI + 0x14],ECX      ; 0060364a
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060364d
    MOV dword ptr [EDI + 0x18],ECX      ; 00603650
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603653
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603656
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603659
    MOV dword ptr [EDI + 0x20],ECX      ; 0060365c
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060365f
    MOV dword ptr [EDI + 0x24],ECX      ; 00603662
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603665
    MOV dword ptr [EDI + 0x28],ECX      ; 00603668
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060366b
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060366e
    JMP 0x005ba146                      ; 00603671
        ;   XREF to: 005ba146 (UNCONDITIONAL_JUMP)  ; LAB_005ba146

