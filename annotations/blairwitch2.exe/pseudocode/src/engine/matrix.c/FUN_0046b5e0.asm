; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_0046b5e0(void)
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
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00448900 at 00448930
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0044ac60 at 0044ade4
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0044c830 at 0044c95d
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_0044b960 at 0044b9a2
;   core_fire.cpp_CGunFlame_render_FUN_0049a500 at 0049a5ff
;   core_fire.cpp_CLaserBeam_render_FUN_00497800 at 004978fb
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_005332f0 at 00533336
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0 at 005341ca
;   core_terrain.cpp_CTerrain_render_FUN_0057b860 at 0057b88b
;
; Referenced Globals:
;   undefined4 DAT_005d15cb
;
; Called Functions:
;   engine_matrix.c_getCameraOrigin_FUN_004ea3b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b5e0
        ;   Label: engine_matrix.c_FUN_0046b5e0
    PUSH EDI                            ; 0046b5e1
    PUSH EBP                            ; 0046b5e2
    MOV EBP,ESP                         ; 0046b5e3
    SUB ESP,0x1c                        ; 0046b5e5
    AND ESP,0xfffffff8                  ; 0046b5e8
    MOV EBX,ESI                         ; 0046b5eb
    MOV ESI,ESP                         ; 0046b5ed
    CALL engine_matrix.c_getCameraOrigin_FUN_004ea3b0 ; 0046b5ef
        ;   XREF to: 004ea3b0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_getCameraOrigin_FUN_004ea3b0()
    MOV EAX,dword ptr [ESP]             ; 0046b5f4
    MOV dword ptr [ESP + 0x18],EAX      ; 0046b5f7
    FILD dword ptr [ESP + 0x18]         ; 0046b5fb
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046b5ff
    FLD double ptr [0x005d15cb]         ; 0046b603 | DAT_005d15cb
    FXCH                                ; 0046b609
    FMUL ST1                            ; 0046b60b
    MOV dword ptr [ESP + 0x18],EAX      ; 0046b60d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046b611
    FILD dword ptr [ESP + 0x18]         ; 0046b615
    MOV dword ptr [ESP + 0x18],EAX      ; 0046b619
    FMUL ST2                            ; 0046b61d
    FILD dword ptr [ESP + 0x18]         ; 0046b61f
    FMULP ST3                           ; 0046b623
    MOV EDI,EBX                         ; 0046b625
    LEA ESI,[ESP + 0xc]                 ; 0046b627
    FXCH                                ; 0046b62b
    FSTP float ptr [ESP + 0xc]          ; 0046b62d
    FSTP float ptr [ESP + 0x10]         ; 0046b631
    FSTP float ptr [ESP + 0x14]         ; 0046b635
    MOVSD ES:EDI,ESI                    ; 0046b639
    MOVSD ES:EDI,ESI                    ; 0046b63a
    MOVSD ES:EDI,ESI                    ; 0046b63b
    MOV EAX,EBX                         ; 0046b63c
    MOV ESP,EBP                         ; 0046b63e
    POP EBP                             ; 0046b640
    POP EDI                             ; 0046b641
    POP EBX                             ; 0046b642
    RET                                 ; 0046b643

