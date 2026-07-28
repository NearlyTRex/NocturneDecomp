; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_004474e0(undefined4 param_1,int *param_2)
;
;
; XREF[2]:
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0 at 0050852b
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508ab9
;
; Referenced Globals:
;   double DOUBLE_0057bae3 = 65536
;   double DOUBLE_0057baeb = 256
;   undefined4 DAT_005ad450
;   undefined4 DAT_005ad454
;   undefined4 DAT_005ad458
;   undefined4 DAT_00b0e1fc
;   undefined4 DAT_0140e790
;   undefined4 DAT_0140e794
;   undefined4 DAT_0140e798
;   undefined4 DAT_0140e79c
;   undefined4 DAT_0140e7a0
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_special.cpp_setFogColor_FUN_00532af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004474e0
        ;   Label: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004474e0
    PUSH EBP                            ; 004474e1
    MOV EBP,ESP                         ; 004474e2
    MOV EBX,dword ptr [EBP + 0x10]      ; 004474e4
    MOV EAX,dword ptr [EBX]             ; 004474e7
    MOV [0x005ad450],EAX                ; 004474e9 | DAT_005ad450
    MOV EAX,dword ptr [EBX + 0x4]       ; 004474ee
    MOV [0x005ad454],EAX                ; 004474f1 | DAT_005ad454
    MOV EAX,dword ptr [EBX + 0x8]       ; 004474f6
    MOV [0x005ad458],EAX                ; 004474f9 | DAT_005ad458
    MOV EAX,dword ptr [EAX*0x4 + 0xb0e1fc] ; 004474fe | DAT_00b0e1fc
    AND EAX,0xff                        ; 00447505
    PUSH EAX                            ; 0044750a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044750b
    MOV EAX,dword ptr [EAX*0x4 + 0xb0e1fc] ; 0044750e | DAT_00b0e1fc
    AND EAX,0xff                        ; 00447515
    PUSH EAX                            ; 0044751a
    MOV EAX,dword ptr [EBX]             ; 0044751b
    MOV EAX,dword ptr [EAX*0x4 + 0xb0e1fc] ; 0044751d | DAT_00b0e1fc
    AND EAX,0xff                        ; 00447524
    PUSH EAX                            ; 00447529
    CALL engine_special.cpp_setFogColor_FUN_00532af0 ; 0044752a
        ;   XREF to: 00532af0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_setFogColor_FUN_00532af0(int red, int green, int blue)
    FLD double ptr [0x0057bae3]         ; 0044752f | DOUBLE_0057bae3
    FLD float ptr [EBX + 0xc]           ; 00447535
    FMUL ST1                            ; 00447538
    FLD float ptr [EBX + 0x10]          ; 0044753a
    FMUL ST2                            ; 0044753d
    FLD float ptr [EBX + 0x14]          ; 0044753f
    FMUL ST3                            ; 00447542
    FLD float ptr [EBX + 0x18]          ; 00447544
    FMUL double ptr [0x0057baeb]        ; 00447547 | DOUBLE_0057baeb
    FLD float ptr [EBX + 0x1c]          ; 0044754d
    FMULP ST5                           ; 00447550
    ADD ESP,0xc                         ; 00447552
    FXCH ST3                            ; 00447555
    CALL crt_math.c_round_FUN_00563a30  ; 00447557
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST2                            ; 0044755c
    CALL crt_math.c_round_FUN_00563a30  ; 0044755e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 00447563
    CALL crt_math.c_round_FUN_00563a30  ; 00447565
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST3                            ; 0044756a
    CALL crt_math.c_round_FUN_00563a30  ; 0044756c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST4                            ; 00447571
    CALL crt_math.c_round_FUN_00563a30  ; 00447573
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST2                            ; 00447578
    FISTP dword ptr [0x0140e790]        ; 0044757a | DAT_0140e790
    FISTP dword ptr [0x0140e794]        ; 00447580 | DAT_0140e794
    FXCH                                ; 00447586
    FISTP dword ptr [0x0140e798]        ; 00447588 | DAT_0140e798
    FXCH                                ; 0044758e
    FISTP dword ptr [0x0140e79c]        ; 00447590 | DAT_0140e79c
    FISTP dword ptr [0x0140e7a0]        ; 00447596 | DAT_0140e7a0
    POP EBP                             ; 0044759c
    POP EBX                             ; 0044759d
    RET                                 ; 0044759e

