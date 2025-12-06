; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_terrain.cpp_CTerrain_render_FUN_005e1f50(CTerrain * this_ptr)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c500
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 at 0056a2d3
;
; Referenced Globals:
;   double DOUBLE_006565a0 = 256
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CGround* g_CGroundPtr = 02db8668
;   CDemonRenderer g_CDemonRendererInstance
;   CGround g_CGroundInstance
;   undefined4 g_CTerrainInstance.initialized
;
; Called Functions:
;   core_ground.cpp_CGround_getHeightAtPosition_FUN_004efd30
;   core_ground.cpp_CGround_render_FUN_004efc90
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
;   engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e1f50
        ;   Label: core_terrain.cpp_CTerrain_render_FUN_005e1f50
    PUSH ESI                            ; 005e1f51
    PUSH EDI                            ; 005e1f52
    PUSH EBP                            ; 005e1f53
    MOV EBP,ESP                         ; 005e1f54
    SUB ESP,0x1c                        ; 005e1f56
    AND ESP,0xfffffff8                  ; 005e1f59
    CMP dword ptr [0x03f874a0],0x0      ; 005e1f5c | g_CTerrainInstance.initialized
    JNZ 0x005e1f6c                      ; 005e1f63 | LAB_005e1f6c
        ;   XREF to: 005e1f6c (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 005e1f65
    POP EBP                             ; 005e1f67
    POP EDI                             ; 005e1f68
    POP ESI                             ; 005e1f69
    POP EBX                             ; 005e1f6a
    RET                                 ; 005e1f6b
    MOV EAX,ESP                         ; 005e1f6c
        ;   Label: LAB_005e1f6c
    PUSH EAX                            ; 005e1f6e
    MOV ECX,dword ptr [0x006703ec]      ; 005e1f6f | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 005e1f75 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780 ; 005e1f76 | float * engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780(CDemonRenderer * this_ptr, float * output)
        ;   XREF to: 0048c780 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e1f7b
    MOV EBX,0x40800                     ; 005e1f7e
    PUSH EBX                            ; 005e1f83
    XOR ESI,ESI                         ; 005e1f84
    PUSH ESI                            ; 005e1f86
    MOV EDI,dword ptr [0x0067cbc8]      ; 005e1f87 | CGround * g_CGroundPtr
    PUSH EDI                            ; 005e1f8d | CGround g_CGroundInstance
    MOV dword ptr [ESP + 0x18],EBX      ; 005e1f8e
    MOV dword ptr [ESP + 0x20],ESI      ; 005e1f92
    CALL core_ground.cpp_CGround_getHeightAtPosition_FUN_004efd30 ; 005e1f96 | int core_ground.cpp_CGround_getHeightAtPosition_FUN_004efd30(CGround * this_ptr, int world_x, int world_z)
        ;   XREF to: 004efd30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005e1f9b
    FLD double ptr [0x006565a0]         ; 005e1f9e | double DOUBLE_006565a0
    FLD float ptr [ESP]                 ; 005e1fa4
    FMUL ST1                            ; 005e1fa7
    FLD float ptr [ESP + 0x4]           ; 005e1fa9
    FMUL ST2                            ; 005e1fad
    FLD float ptr [ESP + 0x8]           ; 005e1faf
    FMULP ST3                           ; 005e1fb3
    MOV EDX,EAX                         ; 005e1fb5
    MOV ECX,dword ptr [ESP + 0xc]       ; 005e1fb7
    MOV EBX,dword ptr [ESP + 0x14]      ; 005e1fbb
    MOV dword ptr [ESP + 0x10],EAX      ; 005e1fbf
    FXCH                                ; 005e1fc3
    CALL crt_math.c_round_FUN_005fe6b0  ; 005e1fc5 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH                                ; 005e1fca
    CALL crt_math.c_round_FUN_005fe6b0  ; 005e1fcc | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH                                ; 005e1fd1
    FISTP dword ptr [ESP + 0x18]        ; 005e1fd3
    MOV EAX,dword ptr [ESP + 0x18]      ; 005e1fd7
    FISTP dword ptr [ESP + 0x18]        ; 005e1fdb
    ADD ECX,EAX                         ; 005e1fdf
    MOV EAX,dword ptr [ESP + 0x18]      ; 005e1fe1
    CALL crt_math.c_round_FUN_005fe6b0  ; 005e1fe5 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    ADD EAX,EDX                         ; 005e1fea
    FISTP dword ptr [ESP + 0x18]        ; 005e1fec
    MOV dword ptr [ESP + 0x10],EAX      ; 005e1ff0
    MOV EAX,dword ptr [ESP + 0x18]      ; 005e1ff4
    MOV dword ptr [ESP + 0xc],ECX       ; 005e1ff8
    ADD EBX,EAX                         ; 005e1ffc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005e1ffe
    MOV dword ptr [ESP + 0x14],EBX      ; 005e2001
    MOV ESI,EBX                         ; 005e2005
    SUB ESI,dword ptr [EAX]             ; 005e2007
    LEA EAX,[ESP + 0xc]                 ; 005e2009
    PUSH EAX                            ; 005e200d
    MOV EDI,dword ptr [0x006703ec]      ; 005e200e | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 005e2014 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x1c],ESI      ; 005e2015
    CALL engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130 ; 005e2019 | void engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130(CDemonRenderer * this_ptr, CVector3i * origin)
        ;   XREF to: 0048c130 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e201e
    MOV EAX,[0x0067cbc8]                ; 005e2021 | CGround g_CGroundInstance | CGround * g_CGroundPtr
    PUSH EAX                            ; 005e2026 | CGround g_CGroundInstance
    CALL core_ground.cpp_CGround_render_FUN_004efc90 ; 005e2027 | void core_ground.cpp_CGround_render_FUN_004efc90(CGround * this_ptr)
        ;   XREF to: 004efc90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e202c
    MOV EAX,ESP                         ; 005e202f
    PUSH EAX                            ; 005e2031
    MOV EDX,dword ptr [0x006703ec]      ; 005e2032 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 005e2038 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 005e2039 | void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3i * point_ptr)
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e203e
    MOV ESP,EBP                         ; 005e2041
    POP EBP                             ; 005e2043
    POP EDI                             ; 005e2044
    POP ESI                             ; 005e2045
    POP EBX                             ; 005e2046
    RET                                 ; 005e2047

