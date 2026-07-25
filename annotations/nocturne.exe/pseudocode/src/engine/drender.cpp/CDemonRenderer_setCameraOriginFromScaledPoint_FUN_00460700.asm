; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700(undefined4 param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[13]:
;   FUN_00511d80 at 00511e29
;   FUN_005125a0 at 00512d93
;   FUN_00513720 at 005137b1
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290 at 00440498
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470 at 0044e50b
;   core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40 at 004c0d6d
;   core_level.cpp_CLevelLoader_update_FUN_004c59e0 at 004c5a4b
;   core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610 at 004d6620
;   core_moon.cpp_CMoon_renderJoystickCalibration_FUN_004df040 at 004df05d
;   core_moon.cpp_CMoon_render_FUN_004dec50 at 004dec77
;   ... and 3 more
;
; Referenced Globals:
;   double DOUBLE_0057dc05 = 256
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_matrix.c_setCameraOrigin_FUN_004ce710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460700
        ;   Label: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
    SUB ESP,0x8                         ; 00460701
    MOV EAX,dword ptr [ESP + 0x14]      ; 00460704
    FLD double ptr [0x0057dc05]         ; 00460708 | DOUBLE_0057dc05
    FLD float ptr [EAX + 0x8]           ; 0046070e
    FMUL ST1                            ; 00460711
    FLD float ptr [EAX + 0x4]           ; 00460713
    FMUL ST2                            ; 00460716
    FLD float ptr [EAX]                 ; 00460718
    FMULP ST3                           ; 0046071a
    FXCH                                ; 0046071c
    CALL crt_math.c_round_FUN_00563a30  ; 0046071e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 00460723
    CALL crt_math.c_round_FUN_00563a30  ; 00460725
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 0046072a
    FISTP dword ptr [ESP]               ; 0046072c
    FISTP dword ptr [ESP + 0x4]         ; 0046072f
    MOV EDX,dword ptr [ESP]             ; 00460733
    MOV ECX,dword ptr [ESP + 0x4]       ; 00460736
    PUSH EDX                            ; 0046073a
    CALL crt_math.c_round_FUN_00563a30  ; 0046073b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH ECX                            ; 00460740
    FISTP dword ptr [ESP + 0xc]         ; 00460741
    MOV EBX,dword ptr [ESP + 0xc]       ; 00460745
    PUSH EBX                            ; 00460749
    CALL engine_matrix.c_setCameraOrigin_FUN_004ce710 ; 0046074a
        ;   XREF to: 004ce710 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_setCameraOrigin_FUN_004ce710()
    ADD ESP,0xc                         ; 0046074f
    ADD ESP,0x8                         ; 00460752
    POP EBX                             ; 00460755
    RET                                 ; 00460756

