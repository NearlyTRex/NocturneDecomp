; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_00483b70(void)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[10]:
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00464190 at 00464614
;   core_dlight.cpp_FUN_00463820 at 00463876
;   core_fire.cpp_CExplosion_render_FUN_004b1870 at 004b18f2
;   core_fire.cpp_CGunFlame_render_FUN_004b2ea0 at 004b2f26
;   core_fire.cpp_CLaserBeam_render_FUN_004b01a0 at 004b0650
;   core_fire.cpp_CLightningBolt_render_FUN_004b3570 at 004b36e9
;   core_fire.cpp_CTrail_render_FUN_004b3d20 at 004b3dcd
;   core_flame.cpp_CFlame_renderTransparent_FUN_004b8100 at 004b86c9
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460 at 005554be
;   core_weather.cpp_CWeather_renderParticles_FUN_005ae890 at 005ae8c1
;
; Referenced Globals:
;   undefined4 DAT_005db3cc
;   undefined4 DAT_005db3d4
;
; Called Functions:
;   engine_matrix.c_getCameraRotation_FUN_00509080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483b70
        ;   Label: engine_drender.cpp_FUN_00483b70
    PUSH EDI                            ; 00483b71
    PUSH EBP                            ; 00483b72
    MOV EBP,ESP                         ; 00483b73
    SUB ESP,0x1c                        ; 00483b75
    AND ESP,0xfffffff8                  ; 00483b78
    MOV EBX,ESI                         ; 00483b7b
    MOV ESI,ESP                         ; 00483b7d
    CALL engine_matrix.c_getCameraRotation_FUN_00509080 ; 00483b7f
        ;   XREF to: 00509080 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_getCameraRotation_FUN_00509080()
    MOV EAX,dword ptr [ESP]             ; 00483b84
    MOV dword ptr [ESP + 0x18],EAX      ; 00483b87
    FLD double ptr [0x005db3cc]         ; 00483b8b | DAT_005db3cc
    FILD dword ptr [ESP + 0x18]         ; 00483b91
    FMUL ST1                            ; 00483b95
    MOV EAX,dword ptr [ESP + 0x4]       ; 00483b97
    FLD double ptr [0x005db3d4]         ; 00483b9b | DAT_005db3d4
    FXCH                                ; 00483ba1
    FMUL ST1                            ; 00483ba3
    MOV dword ptr [ESP + 0x18],EAX      ; 00483ba5
    MOV EAX,dword ptr [ESP + 0x8]       ; 00483ba9
    FILD dword ptr [ESP + 0x18]         ; 00483bad
    MOV dword ptr [ESP + 0x18],EAX      ; 00483bb1
    FMUL ST3                            ; 00483bb5
    FILD dword ptr [ESP + 0x18]         ; 00483bb7
    FMULP ST4                           ; 00483bbb
    FMUL ST2                            ; 00483bbd
    FXCH ST3                            ; 00483bbf
    FMULP ST2                           ; 00483bc1
    MOV EDI,EBX                         ; 00483bc3
    LEA ESI,[ESP + 0xc]                 ; 00483bc5
    FSTP float ptr [ESP + 0xc]          ; 00483bc9
    FXCH                                ; 00483bcd
    FSTP float ptr [ESP + 0x14]         ; 00483bcf
    FSTP float ptr [ESP + 0x10]         ; 00483bd3
    MOVSD ES:EDI,ESI                    ; 00483bd7
    MOVSD ES:EDI,ESI                    ; 00483bd8
    MOVSD ES:EDI,ESI                    ; 00483bd9
    MOV EAX,EBX                         ; 00483bda
    MOV ESP,EBP                         ; 00483bdc
    POP EBP                             ; 00483bde
    POP EDI                             ; 00483bdf
    POP EBX                             ; 00483be0
    RET                                 ; 00483be1

