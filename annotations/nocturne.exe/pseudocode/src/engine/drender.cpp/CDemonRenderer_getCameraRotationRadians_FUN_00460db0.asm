; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(CDemonRenderer *this_ptr,CVector3f *output)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[11]:
;   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430 at 0044f477
;   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_0044f9b0 at 0044fe1a
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520 at 00450935
;   core_fire.cpp_CExplosion_render_FUN_00486fe0 at 0048705a
;   core_fire.cpp_CGunFlame_render_FUN_00488580 at 004885fa
;   core_fire.cpp_CLaserBeam_render_FUN_00485a90 at 00485ebb
;   core_fire.cpp_CLightningBolt_render_FUN_00488bf0 at 00488d63
;   core_fire.cpp_CTrail_render_FUN_00489360 at 00489407
;   core_flame.cpp_CFlame_renderTransparent_FUN_0048d5d0 at 0048db48
;   core_set.cpp_CDemonSet_FUN_0050e080 at 0050e0ca
;   ... and 1 more
;
; Referenced Globals:
;   double DOUBLE_0057dc75 = 0.000030517578125
;   double DOUBLE_0057dc7d = 3.14159265350000
;
; Called Functions:
;   engine_matrix.c_getCameraRotation_FUN_004ce790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460db0
        ;   Label: engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
    PUSH ESI                            ; 00460db1
    PUSH EBP                            ; 00460db2
    MOV EBP,ESP                         ; 00460db3
    SUB ESP,0x10                        ; 00460db5
    AND ESP,0xfffffff8                  ; 00460db8
    MOV EBX,dword ptr [EBP + 0x14]      ; 00460dbb
    MOV ESI,ESP                         ; 00460dbe
    CALL engine_matrix.c_getCameraRotation_FUN_004ce790 ; 00460dc0
        ;   XREF to: 004ce790 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_getCameraRotation_FUN_004ce790(CVector3i * output)
    MOV EAX,dword ptr [ESP]             ; 00460dc5
    MOV dword ptr [ESP + 0xc],EAX       ; 00460dc8
    FLD double ptr [0x0057dc75]         ; 00460dcc | DOUBLE_0057dc75
    FILD dword ptr [ESP + 0xc]          ; 00460dd2
    FMUL ST1                            ; 00460dd6
    FLD double ptr [0x0057dc7d]         ; 00460dd8 | DOUBLE_0057dc7d
    FXCH                                ; 00460dde
    FMUL ST1                            ; 00460de0
    FSTP float ptr [EBX]                ; 00460de2
    MOV EAX,dword ptr [ESP + 0x4]       ; 00460de4
    MOV dword ptr [ESP + 0xc],EAX       ; 00460de8
    FILD dword ptr [ESP + 0xc]          ; 00460dec
    FMUL ST2                            ; 00460df0
    FMUL ST1                            ; 00460df2
    FSTP float ptr [EBX + 0x8]          ; 00460df4
    MOV EAX,dword ptr [ESP + 0x8]       ; 00460df7
    MOV dword ptr [ESP + 0xc],EAX       ; 00460dfb
    FILD dword ptr [ESP + 0xc]          ; 00460dff
    FMULP ST2                           ; 00460e03
    FMULP                               ; 00460e05
    MOV EAX,EBX                         ; 00460e07
    FSTP float ptr [EBX + 0x4]          ; 00460e09
    MOV ESP,EBP                         ; 00460e0c
    POP EBP                             ; 00460e0e
    POP ESI                             ; 00460e0f
    POP EBX                             ; 00460e10
    RET                                 ; 00460e11

