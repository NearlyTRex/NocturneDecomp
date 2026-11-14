; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0046d1c0(void)
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
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045abd0 at 0045ac00
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0045d170 at 0045d2f4
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0045ed70 at 0045ee9d
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_0045dea0 at 0045dee2
;   core_fire.cpp_CGunFlame_render_FUN_0049e500 at 0049e598
;   core_fire.cpp_CLaserBeam_render_FUN_0049b1d0 at 0049b2cb
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_00539f30 at 00539f76
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0 at 0053ae0a
;   core_terrain.cpp_CTerrain_render_FUN_005723d0 at 005723fb
;
; Referenced Globals:
;   undefined4 DAT_005bc55b
;
; Called Functions:
;   engine_matrix.c_getCameraOrigin_FUN_004e6a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d1c0
        ;   Label: engine_drender.cpp_FUN_0046d1c0
    PUSH EDI                            ; 0046d1c1
    PUSH EBP                            ; 0046d1c2
    MOV EBP,ESP                         ; 0046d1c3
    SUB ESP,0x1c                        ; 0046d1c5
    AND ESP,0xfffffff8                  ; 0046d1c8
    MOV EBX,ESI                         ; 0046d1cb
    MOV ESI,ESP                         ; 0046d1cd
    CALL engine_matrix.c_getCameraOrigin_FUN_004e6a90 ; 0046d1cf
        ;   XREF to: 004e6a90 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_getCameraOrigin_FUN_004e6a90(CVector3i * output)
    MOV EAX,dword ptr [ESP]             ; 0046d1d4
    MOV dword ptr [ESP + 0x18],EAX      ; 0046d1d7
    FILD dword ptr [ESP + 0x18]         ; 0046d1db
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046d1df
    FLD double ptr [0x005bc55b]         ; 0046d1e3 | DAT_005bc55b
    FXCH                                ; 0046d1e9
    FMUL ST1                            ; 0046d1eb
    MOV dword ptr [ESP + 0x18],EAX      ; 0046d1ed
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046d1f1
    FILD dword ptr [ESP + 0x18]         ; 0046d1f5
    MOV dword ptr [ESP + 0x18],EAX      ; 0046d1f9
    FMUL ST2                            ; 0046d1fd
    FILD dword ptr [ESP + 0x18]         ; 0046d1ff
    FMULP ST3                           ; 0046d203
    MOV EDI,EBX                         ; 0046d205
    LEA ESI,[ESP + 0xc]                 ; 0046d207
    FXCH                                ; 0046d20b
    FSTP float ptr [ESP + 0xc]          ; 0046d20d
    FSTP float ptr [ESP + 0x10]         ; 0046d211
    FSTP float ptr [ESP + 0x14]         ; 0046d215
    MOVSD ES:EDI,ESI                    ; 0046d219
    MOVSD ES:EDI,ESI                    ; 0046d21a
    MOVSD ES:EDI,ESI                    ; 0046d21b
    MOV EAX,EBX                         ; 0046d21c
    MOV ESP,EBP                         ; 0046d21e
    POP EBP                             ; 0046d220
    POP EDI                             ; 0046d221
    POP EBX                             ; 0046d222
    RET                                 ; 0046d223

