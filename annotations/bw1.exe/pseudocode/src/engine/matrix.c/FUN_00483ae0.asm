; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_00483ae0(void)
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
; XREF[9]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045ea60 at 0045ea90
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_00463460 at 004635e4
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00465060 at 0046518d
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00464190 at 004641d2
;   core_fire.cpp_CGunFlame_render_FUN_004b2ea0 at 004b2f9f
;   core_fire.cpp_CLaserBeam_render_FUN_004b01a0 at 004b029b
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_005545a0 at 005545e6
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460 at 0055547a
;   core_terrain.cpp_CTerrain_render_FUN_0059f3e0 at 0059f40b
;
; Referenced Globals:
;   undefined4 DAT_005db3c4
;
; Called Functions:
;   engine_matrix.c_getCameraOrigin_FUN_00509050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483ae0
        ;   Label: engine_matrix.c_FUN_00483ae0
    PUSH EDI                            ; 00483ae1
    PUSH EBP                            ; 00483ae2
    MOV EBP,ESP                         ; 00483ae3
    SUB ESP,0x1c                        ; 00483ae5
    AND ESP,0xfffffff8                  ; 00483ae8
    MOV EBX,ESI                         ; 00483aeb
    MOV ESI,ESP                         ; 00483aed
    CALL engine_matrix.c_getCameraOrigin_FUN_00509050 ; 00483aef
        ;   XREF to: 00509050 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_getCameraOrigin_FUN_00509050()
    MOV EAX,dword ptr [ESP]             ; 00483af4
    MOV dword ptr [ESP + 0x18],EAX      ; 00483af7
    FILD dword ptr [ESP + 0x18]         ; 00483afb
    MOV EAX,dword ptr [ESP + 0x4]       ; 00483aff
    FLD double ptr [0x005db3c4]         ; 00483b03 | DAT_005db3c4
    FXCH                                ; 00483b09
    FMUL ST1                            ; 00483b0b
    MOV dword ptr [ESP + 0x18],EAX      ; 00483b0d
    MOV EAX,dword ptr [ESP + 0x8]       ; 00483b11
    FILD dword ptr [ESP + 0x18]         ; 00483b15
    MOV dword ptr [ESP + 0x18],EAX      ; 00483b19
    FMUL ST2                            ; 00483b1d
    FILD dword ptr [ESP + 0x18]         ; 00483b1f
    FMULP ST3                           ; 00483b23
    MOV EDI,EBX                         ; 00483b25
    LEA ESI,[ESP + 0xc]                 ; 00483b27
    FXCH                                ; 00483b2b
    FSTP float ptr [ESP + 0xc]          ; 00483b2d
    FSTP float ptr [ESP + 0x10]         ; 00483b31
    FSTP float ptr [ESP + 0x14]         ; 00483b35
    MOVSD ES:EDI,ESI                    ; 00483b39
    MOVSD ES:EDI,ESI                    ; 00483b3a
    MOVSD ES:EDI,ESI                    ; 00483b3b
    MOV EAX,EBX                         ; 00483b3c
    MOV ESP,EBP                         ; 00483b3e
    POP EBP                             ; 00483b40
    POP EDI                             ; 00483b41
    POP EBX                             ; 00483b42
    RET                                 ; 00483b43

