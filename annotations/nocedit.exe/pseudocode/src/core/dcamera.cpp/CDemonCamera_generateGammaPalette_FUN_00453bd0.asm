; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0(CDemonCamera *this_ptr,int gamma_value)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   gamma_value
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0 at 0044c101
;   core_set.cpp_CDemonSet_setGamma_FUN_00570d60 at 00570d73
;
; Referenced Globals:
;   double g_CameraGammaMultiplier = 0.0000152587890625
;   double g_CameraNormalizer = 0.00392156862745098
;   double g_CameraOutputScale = 255
;   int g_FogColorIndexR = 0x40
;   int g_FogColorIndexG = 0x40
;   int g_FogColorIndexB = 0x40
;   uint[256] g_LightmapTexturePalette
;   undefined4 g_LightmapTexturePalette[64]
;
; Called Functions:
;   crt_math.c_pow_FUN_005ffd76
;   crt_math.c_round_FUN_005fe6b0
;   wincore_windll.cpp_setFogColor_FUN_005b7b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453bd0
        ;   Label: core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0
    PUSH EBP                            ; 00453bd1
    MOV EBP,ESP                         ; 00453bd2
    SUB ESP,0xc                         ; 00453bd4
    MOV EAX,dword ptr [EBP + 0x10]      ; 00453bd7
    MOV dword ptr [EBP + -0x4],EAX      ; 00453bda
    FILD dword ptr [EBP + -0x4]         ; 00453bdd
    FMUL double ptr [0x0061a45a]        ; 00453be0 | g_CameraGammaMultiplier
    XOR EDX,EDX                         ; 00453be6
    XOR ECX,ECX                         ; 00453be8
    FSTP float ptr [EBP + -0x8]         ; 00453bea
    FLD double ptr [0x0061a46a]         ; 00453bed | g_CameraOutputScale
    FLD float ptr [EBP + -0x8]          ; 00453bf3
    FLD double ptr [0x0061a462]         ; 00453bf6 | g_CameraNormalizer
    MOV dword ptr [EBP + -0x4],EDX      ; 00453bfc
        ;   Label: LAB_00453bfc
    FILD dword ptr [EBP + -0x4]         ; 00453bff
    FMUL ST1                            ; 00453c02
    FLD ST2                             ; 00453c04
    FXCH                                ; 00453c06
    CALL crt_math.c_pow_FUN_005ffd76    ; 00453c08
        ;   XREF to: 005ffd76 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_pow_FUN_005ffd76(float10 base, float10 exp)
    FMUL ST3                            ; 00453c0d
    CALL crt_math.c_round_FUN_005fe6b0  ; 00453c0f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0xc]        ; 00453c14
    MOV EAX,dword ptr [EBP + -0xc]      ; 00453c17
    MOV EBX,dword ptr [EBP + -0xc]      ; 00453c1a
    SHL EAX,0x8                         ; 00453c1d
    OR EAX,EBX                          ; 00453c20
    SHL EBX,0x10                        ; 00453c22
    OR EBX,EAX                          ; 00453c25
    MOV EAX,dword ptr [EBP + -0xc]      ; 00453c27
    SHL EAX,0x18                        ; 00453c2a
    ADD ECX,0x4                         ; 00453c2d
    OR EAX,EBX                          ; 00453c30
    INC EDX                             ; 00453c32
    MOV dword ptr [ECX + 0xc19df8],EAX  ; 00453c33 | g_LightmapTexturePalette
    CMP EDX,0x100                       ; 00453c39
    JL 0x00453bfc                       ; 00453c3f
        ;   XREF to: 00453bfc (CONDITIONAL_JUMP)  ; LAB_00453bfc
    MOV EAX,[0x0066ed0c]                ; 00453c41 | g_FogColorIndexB
    MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc] ; 00453c46 | g_LightmapTexturePalette[64]
    AND EAX,0xff                        ; 00453c4d
    PUSH EAX                            ; 00453c52
    MOV EAX,[0x0066ed08]                ; 00453c53 | g_FogColorIndexG
    MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc] ; 00453c58 | g_LightmapTexturePalette[64]
    AND EAX,0xff                        ; 00453c5f
    PUSH EAX                            ; 00453c64
    MOV EAX,[0x0066ed04]                ; 00453c65 | g_FogColorIndexR
    MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc] ; 00453c6a | g_LightmapTexturePalette[64]
    FSTP ST0                            ; 00453c71
    AND EAX,0xff                        ; 00453c73
    FSTP ST0                            ; 00453c78
    PUSH EAX                            ; 00453c7a
    FSTP ST0                            ; 00453c7b
    CALL wincore_windll.cpp_setFogColor_FUN_005b7b80 ; 00453c7d
        ;   XREF to: 005b7b80 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_setFogColor_FUN_005b7b80(int red, int green, int blue)
    ADD ESP,0xc                         ; 00453c82
    MOV ESP,EBP                         ; 00453c85
    POP EBP                             ; 00453c87
    POP EBX                             ; 00453c88
    RET                                 ; 00453c89

