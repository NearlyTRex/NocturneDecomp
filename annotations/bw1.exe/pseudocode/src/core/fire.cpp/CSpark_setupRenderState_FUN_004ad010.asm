; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSpark_setupRenderState_FUN_004ad010(CSpark *this_ptr)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004b5100 at 004b52fa
;
; Referenced Globals:
;   double g_DOUBLE_005df1e4 = -65536
;   CDemonRenderer* g_CDemonRenderer_PTR_00612560 = 01bc120c
;   undefined4 g_SRenderVertex_ARRAY_00629014[0].u
;   undefined4 g_SRenderVertex_ARRAY_00629014[0].v
;   undefined4 g_SRenderVertex_ARRAY_00629014[1].u
;   undefined4 g_SRenderVertex_ARRAY_00629014[1].v
;   undefined4 g_SRenderVertex_ARRAY_00629014[2].u
;   undefined4 g_SRenderVertex_ARRAY_00629014[2].v
;   undefined4 g_SRenderVertex_ARRAY_00629014[3].u
;   undefined4 g_SRenderVertex_ARRAY_00629014[3].v
;   CDemonCamera* g_CDemonCamera_PTR_007c6120
;   CDemonRenderer g_CDemonRenderer_01bc120c
;   CVector3i g_CVector3i_01c57078
;   undefined4 g_CVector3i_01c57078.y
;   undefined4 g_CVector3i_01c57078.z
;   ... and 12 more
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ad010
        ;   Label: core_fire.cpp_CSpark_setupRenderState_FUN_004ad010
    PUSH ESI                            ; 004ad011
    PUSH EDI                            ; 004ad012
    SUB ESP,0x5c                        ; 004ad013
    MOV EDX,0x4                         ; 004ad016
    MOV EAX,0x1                         ; 004ad01b
    MOV EBX,0x80000                     ; 004ad020
    MOV ESI,0xf80000                    ; 004ad025
    MOV EDI,0x1c57078                   ; 004ad02a
    XOR ECX,ECX                         ; 004ad02f
    MOV dword ptr [0x01c57094],EDX      ; 004ad031 | g_SMRGLHeaderPrimitive_01c57090.base.count
    MOV dword ptr [0x01c57098],ECX      ; 004ad037 | g_SMRGLHeaderPrimitive_01c57090.surface_normal.A
    MOV dword ptr [0x01c5709c],ECX      ; 004ad03d | g_SMRGLHeaderPrimitive_01c57090.surface_normal.B
    MOV dword ptr [0x01c570a0],ECX      ; 004ad043 | g_SMRGLHeaderPrimitive_01c57090.surface_normal.C
    MOV dword ptr [0x01c570a4],ECX      ; 004ad049 | g_SMRGLHeaderPrimitive_01c57090.surface_normal.D
    MOV dword ptr [0x01c570a8],ECX      ; 004ad04f | g_INT_01c570a8
    MOV [0x01c570ac],EAX                ; 004ad055 | g_INT_01c570ac
    MOV dword ptr [0x0062902c],EBX      ; 004ad05a | g_SRenderVertex_ARRAY_00629014[0].u
    MOV dword ptr [0x00629030],ESI      ; 004ad060 | g_SRenderVertex_ARRAY_00629014[0].v
    MOV dword ptr [0x0062905c],ESI      ; 004ad066 | g_SRenderVertex_ARRAY_00629014[1].u
    MOV dword ptr [0x00629060],ESI      ; 004ad06c | g_SRenderVertex_ARRAY_00629014[1].v
    MOV dword ptr [0x0062908c],ESI      ; 004ad072 | g_SRenderVertex_ARRAY_00629014[2].u
    MOV dword ptr [0x00629090],EBX      ; 004ad078 | g_SRenderVertex_ARRAY_00629014[2].v
    MOV dword ptr [0x006290bc],EBX      ; 004ad07e | g_SRenderVertex_ARRAY_00629014[3].u
    MOV dword ptr [0x006290c0],EBX      ; 004ad084 | g_SRenderVertex_ARRAY_00629014[3].v
    MOV EDX,0x2                         ; 004ad08a
    MOV ECX,0x3                         ; 004ad08f
    MOV ESI,dword ptr [0x00612560]      ; 004ad094 | g_CDemonRenderer_PTR_00612560
    MOV dword ptr [0x01c570b0],EDX      ; 004ad09a | g_INT_01c570b0
    PUSH ESI                            ; 004ad0a0 | g_CDemonRenderer_01bc120c
    LEA ESI,[ESP + 0x54]                ; 004ad0a1
    MOV dword ptr [0x01c570b4],ECX      ; 004ad0a5 | g_INT_01c570b4
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50 ; 004ad0ab
        ;   XREF to: 00483b50 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 004ad0b0
    ADD ESP,0x4                         ; 004ad0b4
    MOVSD ES:EDI,ESI                    ; 004ad0b7 | g_CVector3i_01c57078
    MOVSD ES:EDI,ESI                    ; 004ad0b8 | g_CVector3i_01c57078.y
    MOVSD ES:EDI,ESI                    ; 004ad0b9 | g_CVector3i_01c57078.z
    MOV ESI,dword ptr [0x007c6120]      ; 004ad0ba | g_CDemonCamera_PTR_007c6120
    MOV ECX,0xa                         ; 004ad0c0
    XOR EDI,EDI                         ; 004ad0c5
    LEA ESI,[ESI + 0x10]                ; 004ad0c7
    MOV dword ptr [0x01c5707c],EDI      ; 004ad0ca | g_CVector3i_01c57078.y
    LEA EDI,[ESP + 0x28]                ; 004ad0d0
    MOVSD.REP ES:EDI,ESI                ; 004ad0d4
    MOV ECX,0xa                         ; 004ad0d6
    MOV EDI,ESP                         ; 004ad0db
    LEA ESI,[ESP + 0x28]                ; 004ad0dd
    MOVSD.REP ES:EDI,ESI                ; 004ad0e1
    FLD double ptr [0x005df1e4]         ; 004ad0e3 | g_DOUBLE_005df1e4
    FLD float ptr [ESP + 0x8]           ; 004ad0e9
    FMUL ST1                            ; 004ad0ed
    FLD float ptr [ESP + 0x14]          ; 004ad0ef
    FMUL ST2                            ; 004ad0f3
    FLD float ptr [ESP + 0x20]          ; 004ad0f5
    FMULP ST3                           ; 004ad0f9
    FXCH                                ; 004ad0fb
    CALL crt_math.c_round_FUN_005c03a0  ; 004ad0fd
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FXCH                                ; 004ad102
    CALL crt_math.c_round_FUN_005c03a0  ; 004ad104
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FXCH ST2                            ; 004ad109
    CALL crt_math.c_round_FUN_005c03a0  ; 004ad10b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FXCH                                ; 004ad110
    FISTP dword ptr [0x01c57084]        ; 004ad112 | g_CVector3i_01c57084
    FXCH                                ; 004ad118
    FISTP dword ptr [0x01c57088]        ; 004ad11a | g_CVector3i_01c57084.y
    FISTP dword ptr [0x01c5708c]        ; 004ad120 | g_CVector3i_01c57084.z
    ADD ESP,0x5c                        ; 004ad126
    POP EDI                             ; 004ad129
    POP ESI                             ; 004ad12a
    POP EBX                             ; 004ad12b
    RET                                 ; 004ad12c

