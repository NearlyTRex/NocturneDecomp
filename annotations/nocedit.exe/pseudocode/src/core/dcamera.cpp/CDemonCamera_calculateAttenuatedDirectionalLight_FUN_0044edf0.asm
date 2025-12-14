; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0(CDemonCamera * this_ptr, CVector3i * world_pos, CDemonLight * light_source, CVector3i * light_direction)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   world_pos
; CDemonLight *    Stack[0xc]:4   light_source
; CVector3i *      Stack[0x10]:4   light_direction
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80 at 0056dbe2
;
; Referenced Globals:
;   float g_FixedPointScale = 65536
;   float g_WorldToFloat = 0.00390625
;   int g_LightAttenuationMax
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044edf0
        ;   Label: core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
    PUSH ESI                            ; 0044edf1
    SUB ESP,0x2c                        ; 0044edf2
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0044edf5
    MOV ECX,dword ptr [ESP + 0x44]      ; 0044edf9
    TEST ECX,ECX                        ; 0044edfd
    JNZ 0x0044ee20                      ; 0044edff
        ;   XREF to: 0044ee20 (CONDITIONAL_JUMP)  ; LAB_0044ee20
    MOV EAX,0xaaaa                      ; 0044ee01
    PUSH EAX                            ; 0044ee06
        ;   Label: LAB_0044ee06
    MOV EDX,dword ptr [ESP + 0x44]      ; 0044ee07
    PUSH EDX                            ; 0044ee0b
    PUSH ESI                            ; 0044ee0c
    MOV ECX,dword ptr [ESP + 0x44]      ; 0044ee0d
    PUSH ECX                            ; 0044ee11
    CALL core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790 ; 0044ee12
        ;   XREF to: 0044e790 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790(CDemonCamera * this_ptr, CVector3i * world_pos, CDemonLight * light_source, int intensity)
    ADD ESP,0x10                        ; 0044ee17
    ADD ESP,0x2c                        ; 0044ee1a
    POP ESI                             ; 0044ee1d
    POP EBX                             ; 0044ee1e
    RET                                 ; 0044ee1f
    LEA EBX,[ESP + 0xc]                 ; 0044ee20
        ;   Label: LAB_0044ee20
    MOV EAX,ESI                         ; 0044ee24
    FILD dword ptr [EAX]                ; 0044ee26
    FMUL float ptr [0x0065c644]         ; 0044ee28 | g_WorldToFloat
    FSTP float ptr [EBX]                ; 0044ee2e
    FILD dword ptr [EAX + 0x4]          ; 0044ee30
    FMUL float ptr [0x0065c644]         ; 0044ee33 | g_WorldToFloat
    FSTP float ptr [EBX + 0x4]          ; 0044ee39
    FILD dword ptr [EAX + 0x8]          ; 0044ee3c
    FMUL float ptr [0x0065c644]         ; 0044ee3f | g_WorldToFloat
    FSTP float ptr [EBX + 0x8]          ; 0044ee45
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044ee48
    FLD float ptr [ESP + 0xc]           ; 0044ee4c
    FSUB float ptr [EAX + 0x4]          ; 0044ee50
    FLD float ptr [ESP + 0x10]          ; 0044ee53
    FXCH                                ; 0044ee57
    FSTP float ptr [ESP + 0x18]         ; 0044ee59
    FSUB float ptr [EAX + 0x8]          ; 0044ee5d
    FST float ptr [ESP + 0x1c]          ; 0044ee60
    FMUL float ptr [ESP + 0x1c]         ; 0044ee64
    FLD float ptr [ESP + 0x18]          ; 0044ee68
    FMUL ST0                            ; 0044ee6c
    FLD float ptr [ESP + 0x14]          ; 0044ee6e
    FSUB float ptr [EAX + 0xc]          ; 0044ee72
    FXCH                                ; 0044ee75
    FADDP ST2,ST0                       ; 0044ee77
    FST float ptr [ESP + 0x20]          ; 0044ee79
    FMUL float ptr [ESP + 0x20]         ; 0044ee7d
    FADDP                               ; 0044ee81
    FSTP float ptr [ESP + 0x24]         ; 0044ee83
    MOV EAX,dword ptr [ESP + 0x24]      ; 0044ee87
    MOV EDX,dword ptr [0x02d7a7bc]      ; 0044ee8b | g_LightAttenuationMax
    SAR EAX,0x1                         ; 0044ee91
    SUB EDX,EAX                         ; 0044ee93
    MOV dword ptr [ESP + 0x28],EDX      ; 0044ee95
    FLD float ptr [ESP + 0x18]          ; 0044ee99
    FMUL float ptr [ESP + 0x28]         ; 0044ee9d
    FLD float ptr [ESP + 0x1c]          ; 0044eea1
    FMUL float ptr [ESP + 0x28]         ; 0044eea5
    FLD float ptr [ESP + 0x20]          ; 0044eea9
    FMUL float ptr [ESP + 0x28]         ; 0044eead
    MOV EBX,ESP                         ; 0044eeb1
    LEA EAX,[ESP + 0x18]                ; 0044eeb3
    FXCH ST2                            ; 0044eeb7
    FSTP float ptr [ESP + 0x18]         ; 0044eeb9
    FSTP float ptr [ESP + 0x1c]         ; 0044eebd
    FSTP float ptr [ESP + 0x20]         ; 0044eec1
    FLD float ptr [EAX]                 ; 0044eec5
    FMUL float ptr [0x0065c640]         ; 0044eec7 | g_FixedPointScale
    FISTP dword ptr [EBX]               ; 0044eecd
    FLD float ptr [EAX + 0x4]           ; 0044eecf
    FMUL float ptr [0x0065c640]         ; 0044eed2 | g_FixedPointScale
    FISTP dword ptr [EBX + 0x4]         ; 0044eed8
    FLD float ptr [EAX + 0x8]           ; 0044eedb
    FMUL float ptr [0x0065c640]         ; 0044eede | g_FixedPointScale
    FISTP dword ptr [EBX + 0x8]         ; 0044eee4
    MOV EAX,dword ptr [ESP]             ; 0044eee7
    MOV EDX,dword ptr [ECX]             ; 0044eeea
    IMUL EDX                            ; 0044eeec
    SHRD EAX,EDX,0x10                   ; 0044eeee
    MOV EBX,EAX                         ; 0044eef2
    MOV EDX,dword ptr [ECX + 0x4]       ; 0044eef4
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044eef7
    IMUL EDX                            ; 0044eefb
    SHRD EAX,EDX,0x10                   ; 0044eefd
    MOV EDX,dword ptr [ECX + 0x8]       ; 0044ef01
    ADD EBX,EAX                         ; 0044ef04
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044ef06
    IMUL EDX                            ; 0044ef0a
    SHRD EAX,EDX,0x10                   ; 0044ef0c
    ADD EAX,EBX                         ; 0044ef10
    TEST EAX,EAX                        ; 0044ef12
    JL 0x0044ef1e                       ; 0044ef14
        ;   XREF to: 0044ef1e (CONDITIONAL_JUMP)  ; LAB_0044ef1e
    XOR EAX,EAX                         ; 0044ef16
    ADD ESP,0x2c                        ; 0044ef18
    POP ESI                             ; 0044ef1b
    POP EBX                             ; 0044ef1c
    RET                                 ; 0044ef1d
    NEG EAX                             ; 0044ef1e
        ;   Label: LAB_0044ef1e
    JMP 0x0044ee06                      ; 0044ef20
        ;   XREF to: 0044ee06 (UNCONDITIONAL_JUMP)  ; LAB_0044ee06

