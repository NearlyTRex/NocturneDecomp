; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004542a0(CDemonCamera *this_ptr,SFog *fog_config)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; SFog *           Stack[0x8]:4   fog_config
;
; XREF[2]:
;   core_set.cpp_CDemonSet_initScene_FUN_0054ec60 at 0054eccb
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f723
;
; Referenced Globals:
;   undefined4 DAT_005d79f7
;   undefined4 DAT_005d79ff
;   undefined4 DAT_00611230
;   undefined4 DAT_00611234
;   undefined4 DAT_00611238
;   undefined4 DAT_00b8189c
;   undefined4 DAT_01481e38
;   undefined4 DAT_01481e3c
;   undefined4 DAT_01481e40
;   undefined4 DAT_01481e44
;   undefined4 DAT_01481e48
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_special.cpp_setFogColor_FUN_005828e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004542a0
        ;   Label: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004542a0
    PUSH EBP                            ; 004542a1
    MOV EBP,ESP                         ; 004542a2
    MOV EBX,dword ptr [EBP + 0x10]      ; 004542a4
    MOV EAX,dword ptr [EBX]             ; 004542a7
    MOV [0x00611230],EAX                ; 004542a9 | DAT_00611230
    MOV EAX,dword ptr [EBX + 0x4]       ; 004542ae
    MOV [0x00611234],EAX                ; 004542b1 | DAT_00611234
    MOV EAX,dword ptr [EBX + 0x8]       ; 004542b6
    MOV [0x00611238],EAX                ; 004542b9 | DAT_00611238
    MOV EAX,dword ptr [EAX*0x4 + 0xb8189c] ; 004542be | DAT_00b8189c
    AND EAX,0xff                        ; 004542c5
    PUSH EAX                            ; 004542ca
    MOV EAX,dword ptr [EBX + 0x4]       ; 004542cb
    MOV EAX,dword ptr [EAX*0x4 + 0xb8189c] ; 004542ce | DAT_00b8189c
    AND EAX,0xff                        ; 004542d5
    PUSH EAX                            ; 004542da
    MOV EAX,dword ptr [EBX]             ; 004542db
    MOV EAX,dword ptr [EAX*0x4 + 0xb8189c] ; 004542dd | DAT_00b8189c
    AND EAX,0xff                        ; 004542e4
    PUSH EAX                            ; 004542e9
    CALL engine_special.cpp_setFogColor_FUN_005828e0 ; 004542ea
        ;   XREF to: 005828e0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_setFogColor_FUN_005828e0(int red, int green, int blue)
    FLD double ptr [0x005d79f7]         ; 004542ef | DAT_005d79f7
    FLD float ptr [EBX + 0xc]           ; 004542f5
    FMUL ST1                            ; 004542f8
    FLD float ptr [EBX + 0x10]          ; 004542fa
    FMUL ST2                            ; 004542fd
    FLD float ptr [EBX + 0x14]          ; 004542ff
    FMUL ST3                            ; 00454302
    FLD float ptr [EBX + 0x18]          ; 00454304
    FMUL double ptr [0x005d79ff]        ; 00454307 | DAT_005d79ff
    FLD float ptr [EBX + 0x1c]          ; 0045430d
    FMULP ST5                           ; 00454310
    ADD ESP,0xc                         ; 00454312
    FXCH ST3                            ; 00454315
    CALL crt_math.c_round_FUN_005c03a0  ; 00454317
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 0045431c
    CALL crt_math.c_round_FUN_005c03a0  ; 0045431e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00454323
    CALL crt_math.c_round_FUN_005c03a0  ; 00454325
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST3                            ; 0045432a
    CALL crt_math.c_round_FUN_005c03a0  ; 0045432c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST4                            ; 00454331
    CALL crt_math.c_round_FUN_005c03a0  ; 00454333
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 00454338
    FISTP dword ptr [0x01481e38]        ; 0045433a | DAT_01481e38
    FISTP dword ptr [0x01481e3c]        ; 00454340 | DAT_01481e3c
    FXCH                                ; 00454346
    FISTP dword ptr [0x01481e40]        ; 00454348 | DAT_01481e40
    FXCH                                ; 0045434e
    FISTP dword ptr [0x01481e44]        ; 00454350 | DAT_01481e44
    FISTP dword ptr [0x01481e48]        ; 00454356 | DAT_01481e48
    POP EBP                             ; 0045435c
    POP EBX                             ; 0045435d
    RET                                 ; 0045435e

