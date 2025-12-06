; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640(CDemonCamera * this_ptr, SFog * fog_config)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; SFog *           Stack[0x8]:4   fog_config
;
; XREF[2]:
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 at 0056aa7b
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b370
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
;   crt_math.c_round_FUN_005fe6b0
;   wincore_windll.cpp_setFogColor_FUN_005b7b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453640
        ;   Label: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640
    PUSH EBP                            ; 00453641
    MOV EBP,ESP                         ; 00453642
    MOV EBX,dword ptr [EBP + 0x10]      ; 00453644
    MOV EAX,dword ptr [EBX]             ; 00453647
    MOV [0x0066ed04],EAX                ; 00453649 | int g_FogColorIndexR
    MOV EAX,dword ptr [EBX + 0x4]       ; 0045364e
    MOV [0x0066ed08],EAX                ; 00453651 | int g_FogColorIndexG
    MOV EAX,dword ptr [EBX + 0x8]       ; 00453656
    MOV [0x0066ed0c],EAX                ; 00453659 | int g_FogColorIndexB
    MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc] ; 0045365e | uint[256] g_LightmapTexturePalette
    AND EAX,0xff                        ; 00453665
    PUSH EAX                            ; 0045366a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0045366b
    MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc] ; 0045366e | uint[256] g_LightmapTexturePalette
    AND EAX,0xff                        ; 00453675
    PUSH EAX                            ; 0045367a
    MOV EAX,dword ptr [EBX]             ; 0045367b
    MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc] ; 0045367d | uint[256] g_LightmapTexturePalette
    AND EAX,0xff                        ; 00453684
    PUSH EAX                            ; 00453689
    CALL wincore_windll.cpp_setFogColor_FUN_005b7b80 ; 0045368a | int wincore_windll.cpp_setFogColor_FUN_005b7b80(int red, int green, int blue)
        ;   XREF to: 005b7b80 (UNCONDITIONAL_CALL)
    FLD double ptr [0x0061a442]         ; 0045368f | double g_CameraFogFixedPointScale16
    FLD float ptr [EBX + 0xc]           ; 00453695
    FMUL ST1                            ; 00453698
    FLD float ptr [EBX + 0x10]          ; 0045369a
    FMUL ST2                            ; 0045369d
    FLD float ptr [EBX + 0x14]          ; 0045369f
    FMUL ST3                            ; 004536a2
    FLD float ptr [EBX + 0x18]          ; 004536a4
    FMUL double ptr [0x0061a44a]        ; 004536a7 | double g_CameraFogFixedPointScale8
    FLD float ptr [EBX + 0x1c]          ; 004536ad
    FMULP ST5                           ; 004536b0
    ADD ESP,0xc                         ; 004536b2
    FXCH ST3                            ; 004536b5
    CALL crt_math.c_round_FUN_005fe6b0  ; 004536b7 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH ST2                            ; 004536bc
    CALL crt_math.c_round_FUN_005fe6b0  ; 004536be | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH                                ; 004536c3
    CALL crt_math.c_round_FUN_005fe6b0  ; 004536c5 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH ST3                            ; 004536ca
    CALL crt_math.c_round_FUN_005fe6b0  ; 004536cc | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH ST4                            ; 004536d1
    CALL crt_math.c_round_FUN_005fe6b0  ; 004536d3 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH ST2                            ; 004536d8
    FISTP dword ptr [0x0151a390]        ; 004536da | g_CameraFogGrid.scroll_vector.x
    FISTP dword ptr [0x0151a394]        ; 004536e0 | g_CameraFogGrid.scroll_vector.y
    FXCH                                ; 004536e6
    FISTP dword ptr [0x0151a398]        ; 004536e8 | g_CameraFogGrid.scroll_vector.z
    FXCH                                ; 004536ee
    FISTP dword ptr [0x0151a39c]        ; 004536f0 | g_CameraFogGrid.height_threshold
    FISTP dword ptr [0x0151a3a0]        ; 004536f6 | g_CameraFogGrid.density_multiplier
    POP EBP                             ; 004536fc
    POP EBX                             ; 004536fd
    RET                                 ; 004536fe

