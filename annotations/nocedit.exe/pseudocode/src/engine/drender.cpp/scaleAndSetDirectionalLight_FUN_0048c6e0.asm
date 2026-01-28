; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_scaleAndSetDirectionalLight_FUN_0048c6e0(CVector3f *light_direction)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   light_direction
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   double g_LightDirectionalScale = 65536
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_light.cpp_setDirectionalLightVector_FUN_005054d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c6e0
        ;   Label: engine_drender.cpp_scaleAndSetDirectionalLight_FUN_0048c6e0
    SUB ESP,0x8                         ; 0048c6e1
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048c6e4
    FLD double ptr [0x00622055]         ; 0048c6e8 | g_LightDirectionalScale
    FLD float ptr [EAX + 0x8]           ; 0048c6ee
    FMUL ST1                            ; 0048c6f1
    FLD float ptr [EAX + 0x4]           ; 0048c6f3
    FMUL ST2                            ; 0048c6f6
    FLD float ptr [EAX]                 ; 0048c6f8
    FMULP ST3                           ; 0048c6fa
    FXCH                                ; 0048c6fc
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c6fe
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0048c703
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c705
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0048c70a
    FISTP dword ptr [ESP]               ; 0048c70c
    FISTP dword ptr [ESP + 0x4]         ; 0048c70f
    MOV EDX,dword ptr [ESP]             ; 0048c713
    MOV ECX,dword ptr [ESP + 0x4]       ; 0048c716
    PUSH EDX                            ; 0048c71a
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c71b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH ECX                            ; 0048c720
    FISTP dword ptr [ESP + 0xc]         ; 0048c721
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048c725
    PUSH EBX                            ; 0048c729
    CALL engine_light.cpp_setDirectionalLightVector_FUN_005054d0 ; 0048c72a
        ;   XREF to: 005054d0 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setDirectionalLightVector_FUN_005054d0(int dir_x, int dir_y, int dir_z)
    ADD ESP,0xc                         ; 0048c72f
    ADD ESP,0x8                         ; 0048c732
    POP EBX                             ; 0048c735
    RET                                 ; 0048c736

