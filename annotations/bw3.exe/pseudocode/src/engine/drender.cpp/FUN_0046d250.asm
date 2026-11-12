; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0046d250(void)
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
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_0045dea0 at 0045e324
;   core_dlight.cpp_FUN_0045d530 at 0045d586
;   core_fire.cpp_CGunFlame_render_FUN_0049e500 at 0049e748
;   core_fire.cpp_CLaserBeam_render_FUN_0049b1d0 at 0049b680
;   core_fire.cpp_CTrail_render_FUN_004a0680 at 004a072d
;   core_fire.cpp_FUN_0049c8e0 at 0049c965
;   core_fire.cpp_FUN_0049f520 at 0049f6ac
;   core_flame.cpp_CFlame_renderTransparent_FUN_004a6090 at 004a6659
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0 at 0053ae4e
;   core_weather.cpp_FUN_0057c890 at 0057c8c3
;
; Referenced Globals:
;   undefined4 DAT_005bc563
;   undefined4 DAT_005bc56b
;
; Called Functions:
;   engine_matrix.c_getCameraRotation_FUN_004e6ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d250
        ;   Label: engine_drender.cpp_FUN_0046d250
    PUSH EDI                            ; 0046d251
    PUSH EBP                            ; 0046d252
    MOV EBP,ESP                         ; 0046d253
    SUB ESP,0x1c                        ; 0046d255
    AND ESP,0xfffffff8                  ; 0046d258
    MOV EBX,ESI                         ; 0046d25b
    MOV ESI,ESP                         ; 0046d25d
    CALL engine_matrix.c_getCameraRotation_FUN_004e6ac0 ; 0046d25f
        ;   XREF to: 004e6ac0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_getCameraRotation_FUN_004e6ac0(CVector3i * output)
    MOV EAX,dword ptr [ESP]             ; 0046d264
    MOV dword ptr [ESP + 0x18],EAX      ; 0046d267
    FLD double ptr [0x005bc563]         ; 0046d26b | DAT_005bc563
    FILD dword ptr [ESP + 0x18]         ; 0046d271
    FMUL ST1                            ; 0046d275
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046d277
    FLD double ptr [0x005bc56b]         ; 0046d27b | DAT_005bc56b
    FXCH                                ; 0046d281
    FMUL ST1                            ; 0046d283
    MOV dword ptr [ESP + 0x18],EAX      ; 0046d285
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046d289
    FILD dword ptr [ESP + 0x18]         ; 0046d28d
    MOV dword ptr [ESP + 0x18],EAX      ; 0046d291
    FMUL ST3                            ; 0046d295
    FILD dword ptr [ESP + 0x18]         ; 0046d297
    FMULP ST4                           ; 0046d29b
    FMUL ST2                            ; 0046d29d
    FXCH ST3                            ; 0046d29f
    FMULP ST2                           ; 0046d2a1
    MOV EDI,EBX                         ; 0046d2a3
    LEA ESI,[ESP + 0xc]                 ; 0046d2a5
    FSTP float ptr [ESP + 0xc]          ; 0046d2a9
    FXCH                                ; 0046d2ad
    FSTP float ptr [ESP + 0x14]         ; 0046d2af
    FSTP float ptr [ESP + 0x10]         ; 0046d2b3
    MOVSD ES:EDI,ESI                    ; 0046d2b7
    MOVSD ES:EDI,ESI                    ; 0046d2b8
    MOVSD ES:EDI,ESI                    ; 0046d2b9
    MOV EAX,EBX                         ; 0046d2ba
    MOV ESP,EBP                         ; 0046d2bc
    POP EBP                             ; 0046d2be
    POP EDI                             ; 0046d2bf
    POP EBX                             ; 0046d2c0
    RET                                 ; 0046d2c1

