; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00442bf0(CDemonCamera *this_ptr,SFog *fog_config)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; SFog *           Stack[0x8]:4   fog_config
;
; XREF[2]:
;   core_set.cpp_CDemonSet_initScene_FUN_0052d980 at 0052d9f0
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e443
;
; Referenced Globals:
;   double g_CameraFogFixedPointScale16 = 65536
;   double g_CameraFogFixedPointScale8 = 256
;   int g_FogColorIndexR = 0x40
;   int g_FogColorIndexG = 0x40
;   int g_FogColorIndexB = 0x40
;   uint[256] g_LightmapTexturePalette
;   undefined4 g_CameraFogGrid.scroll_vector.x
;   undefined4 g_CameraFogGrid.scroll_vector.y
;   undefined4 g_CameraFogGrid.scroll_vector.z
;   undefined4 g_CameraFogGrid.height_threshold
;   undefined4 g_CameraFogGrid.density_multiplier
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_special.cpp_setFogColor_FUN_0055fe90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442bf0
        ;   Label: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00442bf0
    PUSH EBP                            ; 00442bf1
    MOV EBP,ESP                         ; 00442bf2
    MOV EBX,dword ptr [EBP + 0x10]      ; 00442bf4
    MOV EAX,dword ptr [EBX]             ; 00442bf7
    MOV [0x00609fa4],EAX                ; 00442bf9 | g_FogColorIndexR
    MOV EAX,dword ptr [EBX + 0x4]       ; 00442bfe
    MOV [0x00609fa8],EAX                ; 00442c01 | g_FogColorIndexG
    MOV EAX,dword ptr [EBX + 0x8]       ; 00442c06
    MOV [0x00609fac],EAX                ; 00442c09 | g_FogColorIndexB
    MOV EAX,dword ptr [EAX*0x4 + 0xb6639c] ; 00442c0e | g_LightmapTexturePalette
    AND EAX,0xff                        ; 00442c15
    PUSH EAX                            ; 00442c1a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00442c1b
    MOV EAX,dword ptr [EAX*0x4 + 0xb6639c] ; 00442c1e | g_LightmapTexturePalette
    AND EAX,0xff                        ; 00442c25
    PUSH EAX                            ; 00442c2a
    MOV EAX,dword ptr [EBX]             ; 00442c2b
    MOV EAX,dword ptr [EAX*0x4 + 0xb6639c] ; 00442c2d | g_LightmapTexturePalette
    AND EAX,0xff                        ; 00442c34
    PUSH EAX                            ; 00442c39
    CALL engine_special.cpp_setFogColor_FUN_0055fe90 ; 00442c3a
        ;   XREF to: 0055fe90 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_setFogColor_FUN_0055fe90(int red, int green, int blue)
    FLD double ptr [0x005ce72e]         ; 00442c3f | g_CameraFogFixedPointScale16
    FLD float ptr [EBX + 0xc]           ; 00442c45
    FMUL ST1                            ; 00442c48
    FLD float ptr [EBX + 0x10]          ; 00442c4a
    FMUL ST2                            ; 00442c4d
    FLD float ptr [EBX + 0x14]          ; 00442c4f
    FMUL ST3                            ; 00442c52
    FLD float ptr [EBX + 0x18]          ; 00442c54
    FMUL double ptr [0x005ce736]        ; 00442c57 | g_CameraFogFixedPointScale8
    FLD float ptr [EBX + 0x1c]          ; 00442c5d
    FMULP ST5                           ; 00442c60
    ADD ESP,0xc                         ; 00442c62
    FXCH ST3                            ; 00442c65
    CALL crt_math.c_round_FUN_005b7ff0  ; 00442c67
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FXCH ST2                            ; 00442c6c
    CALL crt_math.c_round_FUN_005b7ff0  ; 00442c6e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FXCH                                ; 00442c73
    CALL crt_math.c_round_FUN_005b7ff0  ; 00442c75
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FXCH ST3                            ; 00442c7a
    CALL crt_math.c_round_FUN_005b7ff0  ; 00442c7c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FXCH ST4                            ; 00442c81
    CALL crt_math.c_round_FUN_005b7ff0  ; 00442c83
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FXCH ST2                            ; 00442c88
    FISTP dword ptr [0x01466938]        ; 00442c8a | g_CameraFogGrid.scroll_vector.x
    FISTP dword ptr [0x0146693c]        ; 00442c90 | g_CameraFogGrid.scroll_vector.y
    FXCH                                ; 00442c96
    FISTP dword ptr [0x01466940]        ; 00442c98 | g_CameraFogGrid.scroll_vector.z
    FXCH                                ; 00442c9e
    FISTP dword ptr [0x01466944]        ; 00442ca0 | g_CameraFogGrid.height_threshold
    FISTP dword ptr [0x01466948]        ; 00442ca6 | g_CameraFogGrid.density_multiplier
    POP EBP                             ; 00442cac
    POP EBX                             ; 00442cad
    RET                                 ; 00442cae

