; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004503f0(CDemonCamera *this_ptr,SFog *fog_config)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; SFog *           Stack[0x8]:4   fog_config
;
; XREF[2]:
;   core_set.cpp_CDemonSet_initScene_FUN_00534420 at 0053448b
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 00534ee3
;
; Referenced Globals:
;   double g_DOUBLE_005ba05e = 65536
;   double g_DOUBLE_005ba066 = 256
;   int g_INT_005f17e4 = 0x40
;   int g_INT_005f17e8 = 0x40
;   int g_INT_005f17ec = 0x40
;   uint[256] g_UINT_ARRAY_00b9e14c
;   undefined4 g_SFogGrid_0149d6dc.scroll_vector.x
;   undefined4 g_SFogGrid_0149d6dc.scroll_vector.y
;   undefined4 g_SFogGrid_0149d6dc.scroll_vector.z
;   undefined4 g_SFogGrid_0149d6dc.height_threshold
;   undefined4 g_SFogGrid_0149d6dc.density_multiplier
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_special.cpp_setFogColor_FUN_005661b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004503f0
        ;   Label: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004503f0
    PUSH EBP                            ; 004503f1
    MOV EBP,ESP                         ; 004503f2
    MOV EBX,dword ptr [EBP + 0x10]      ; 004503f4
    MOV EAX,dword ptr [EBX]             ; 004503f7
    MOV [0x005f17e4],EAX                ; 004503f9 | g_INT_005f17e4
    MOV EAX,dword ptr [EBX + 0x4]       ; 004503fe
    MOV [0x005f17e8],EAX                ; 00450401 | g_INT_005f17e8
    MOV EAX,dword ptr [EBX + 0x8]       ; 00450406
    MOV [0x005f17ec],EAX                ; 00450409 | g_INT_005f17ec
    MOV EAX,dword ptr [EAX*0x4 + 0xb9e14c] ; 0045040e | g_UINT_ARRAY_00b9e14c
    AND EAX,0xff                        ; 00450415
    PUSH EAX                            ; 0045041a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0045041b
    MOV EAX,dword ptr [EAX*0x4 + 0xb9e14c] ; 0045041e | g_UINT_ARRAY_00b9e14c
    AND EAX,0xff                        ; 00450425
    PUSH EAX                            ; 0045042a
    MOV EAX,dword ptr [EBX]             ; 0045042b
    MOV EAX,dword ptr [EAX*0x4 + 0xb9e14c] ; 0045042d | g_UINT_ARRAY_00b9e14c
    AND EAX,0xff                        ; 00450434
    PUSH EAX                            ; 00450439
    CALL engine_special.cpp_setFogColor_FUN_005661b0 ; 0045043a
        ;   XREF to: 005661b0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_setFogColor_FUN_005661b0(int red, int green, int blue)
    FLD double ptr [0x005ba05e]         ; 0045043f | g_DOUBLE_005ba05e
    FLD float ptr [EBX + 0xc]           ; 00450445
    FMUL ST1                            ; 00450448
    FLD float ptr [EBX + 0x10]          ; 0045044a
    FMUL ST2                            ; 0045044d
    FLD float ptr [EBX + 0x14]          ; 0045044f
    FMUL ST3                            ; 00450452
    FLD float ptr [EBX + 0x18]          ; 00450454
    FMUL double ptr [0x005ba066]        ; 00450457 | g_DOUBLE_005ba066
    FLD float ptr [EBX + 0x1c]          ; 0045045d
    FMULP ST5                           ; 00450460
    ADD ESP,0xc                         ; 00450462
    FXCH ST3                            ; 00450465
    CALL crt_math.c_round_FUN_005a3120  ; 00450467
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FXCH ST2                            ; 0045046c
    CALL crt_math.c_round_FUN_005a3120  ; 0045046e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FXCH                                ; 00450473
    CALL crt_math.c_round_FUN_005a3120  ; 00450475
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FXCH ST3                            ; 0045047a
    CALL crt_math.c_round_FUN_005a3120  ; 0045047c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FXCH ST4                            ; 00450481
    CALL crt_math.c_round_FUN_005a3120  ; 00450483
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FXCH ST2                            ; 00450488
    FISTP dword ptr [0x0149e6e8]        ; 0045048a | g_SFogGrid_0149d6dc.scroll_vector.x
    FISTP dword ptr [0x0149e6ec]        ; 00450490 | g_SFogGrid_0149d6dc.scroll_vector.y
    FXCH                                ; 00450496
    FISTP dword ptr [0x0149e6f0]        ; 00450498 | g_SFogGrid_0149d6dc.scroll_vector.z
    FXCH                                ; 0045049e
    FISTP dword ptr [0x0149e6f4]        ; 004504a0 | g_SFogGrid_0149d6dc.height_threshold
    FISTP dword ptr [0x0149e6f8]        ; 004504a6 | g_SFogGrid_0149d6dc.density_multiplier
    POP EBP                             ; 004504ac
    POP EBX                             ; 004504ad
    RET                                 ; 004504ae

