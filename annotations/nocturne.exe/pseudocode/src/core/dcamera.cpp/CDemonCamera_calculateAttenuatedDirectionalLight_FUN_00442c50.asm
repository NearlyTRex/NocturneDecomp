; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50(CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,CVector3i *light_direction)
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
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0 at 0050b622
;
; Referenced Globals:
;   float FLOAT_0059bde0 = 65536
;   float FLOAT_0059bde4 = 0.00390625
;   int g_FastInvSqrtMagic
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_004425f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442c50
        ;   Label: core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50
    PUSH ESI                            ; 00442c51
    SUB ESP,0x2c                        ; 00442c52
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00442c55
    MOV ECX,dword ptr [ESP + 0x44]      ; 00442c59
    TEST ECX,ECX                        ; 00442c5d
    JNZ 0x00442c80                      ; 00442c5f
        ;   XREF to: 00442c80 (CONDITIONAL_JUMP)  ; LAB_00442c80
    MOV EAX,0xaaaa                      ; 00442c61
    PUSH EAX                            ; 00442c66
        ;   Label: LAB_00442c66
    MOV EDX,dword ptr [ESP + 0x44]      ; 00442c67
    PUSH EDX                            ; 00442c6b
    PUSH ESI                            ; 00442c6c
    MOV ECX,dword ptr [ESP + 0x44]      ; 00442c6d
    PUSH ECX                            ; 00442c71
    CALL core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_004425f0 ; 00442c72
        ;   XREF to: 004425f0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_004425f0(CDemonCamera * this_ptr, CVector3i * world_pos, CDemonLight * light_source, int intensity)
    ADD ESP,0x10                        ; 00442c77
    ADD ESP,0x2c                        ; 00442c7a
    POP ESI                             ; 00442c7d
    POP EBX                             ; 00442c7e
    RET                                 ; 00442c7f
    LEA EBX,[ESP + 0xc]                 ; 00442c80
        ;   Label: LAB_00442c80
    MOV EAX,ESI                         ; 00442c84
    FILD dword ptr [EAX]                ; 00442c86
    FMUL float ptr [0x0059bde4]         ; 00442c88 | FLOAT_0059bde4
    FSTP float ptr [EBX]                ; 00442c8e
    FILD dword ptr [EAX + 0x4]          ; 00442c90
    FMUL float ptr [0x0059bde4]         ; 00442c93 | FLOAT_0059bde4
    FSTP float ptr [EBX + 0x4]          ; 00442c99
    FILD dword ptr [EAX + 0x8]          ; 00442c9c
    FMUL float ptr [0x0059bde4]         ; 00442c9f | FLOAT_0059bde4
    FSTP float ptr [EBX + 0x8]          ; 00442ca5
    MOV EAX,dword ptr [ESP + 0x40]      ; 00442ca8
    FLD float ptr [ESP + 0xc]           ; 00442cac
    FSUB float ptr [EAX + 0x104]        ; 00442cb0
    FLD float ptr [ESP + 0x10]          ; 00442cb6
    FXCH                                ; 00442cba
    FSTP float ptr [ESP + 0x18]         ; 00442cbc
    FSUB float ptr [EAX + 0x108]        ; 00442cc0
    FST float ptr [ESP + 0x1c]          ; 00442cc6
    FMUL float ptr [ESP + 0x1c]         ; 00442cca
    FLD float ptr [ESP + 0x18]          ; 00442cce
    FMUL ST0                            ; 00442cd2
    FLD float ptr [ESP + 0x14]          ; 00442cd4
    FSUB float ptr [EAX + 0x10c]        ; 00442cd8
    FXCH                                ; 00442cde
    FADDP ST2,ST0                       ; 00442ce0
    FST float ptr [ESP + 0x20]          ; 00442ce2
    FMUL float ptr [ESP + 0x20]         ; 00442ce6
    FADDP                               ; 00442cea
    FSTP float ptr [ESP + 0x24]         ; 00442cec
    MOV EAX,dword ptr [ESP + 0x24]      ; 00442cf0
    MOV EDX,dword ptr [0x01c70710]      ; 00442cf4 | g_FastInvSqrtMagic
    SAR EAX,0x1                         ; 00442cfa
    SUB EDX,EAX                         ; 00442cfc
    MOV dword ptr [ESP + 0x28],EDX      ; 00442cfe
    FLD float ptr [ESP + 0x18]          ; 00442d02
    FMUL float ptr [ESP + 0x28]         ; 00442d06
    FLD float ptr [ESP + 0x1c]          ; 00442d0a
    FMUL float ptr [ESP + 0x28]         ; 00442d0e
    FLD float ptr [ESP + 0x20]          ; 00442d12
    FMUL float ptr [ESP + 0x28]         ; 00442d16
    MOV EBX,ESP                         ; 00442d1a
    LEA EAX,[ESP + 0x18]                ; 00442d1c
    FXCH ST2                            ; 00442d20
    FSTP float ptr [ESP + 0x18]         ; 00442d22
    FSTP float ptr [ESP + 0x1c]         ; 00442d26
    FSTP float ptr [ESP + 0x20]         ; 00442d2a
    FLD float ptr [EAX]                 ; 00442d2e
    FMUL float ptr [0x0059bde0]         ; 00442d30 | FLOAT_0059bde0
    FISTP dword ptr [EBX]               ; 00442d36
    FLD float ptr [EAX + 0x4]           ; 00442d38
    FMUL float ptr [0x0059bde0]         ; 00442d3b | FLOAT_0059bde0
    FISTP dword ptr [EBX + 0x4]         ; 00442d41
    FLD float ptr [EAX + 0x8]           ; 00442d44
    FMUL float ptr [0x0059bde0]         ; 00442d47 | FLOAT_0059bde0
    FISTP dword ptr [EBX + 0x8]         ; 00442d4d
    MOV EAX,dword ptr [ESP]             ; 00442d50
    MOV EDX,dword ptr [ECX]             ; 00442d53
    IMUL EDX                            ; 00442d55
    SHRD EAX,EDX,0x10                   ; 00442d57
    MOV EBX,EAX                         ; 00442d5b
    MOV EDX,dword ptr [ECX + 0x4]       ; 00442d5d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00442d60
    IMUL EDX                            ; 00442d64
    SHRD EAX,EDX,0x10                   ; 00442d66
    MOV EDX,dword ptr [ECX + 0x8]       ; 00442d6a
    ADD EBX,EAX                         ; 00442d6d
    MOV EAX,dword ptr [ESP + 0x8]       ; 00442d6f
    IMUL EDX                            ; 00442d73
    SHRD EAX,EDX,0x10                   ; 00442d75
    ADD EAX,EBX                         ; 00442d79
    TEST EAX,EAX                        ; 00442d7b
    JL 0x00442d87                       ; 00442d7d
        ;   XREF to: 00442d87 (CONDITIONAL_JUMP)  ; LAB_00442d87
    XOR EAX,EAX                         ; 00442d7f
    ADD ESP,0x2c                        ; 00442d81
    POP ESI                             ; 00442d84
    POP EBX                             ; 00442d85
    RET                                 ; 00442d86
    NEG EAX                             ; 00442d87
        ;   Label: LAB_00442d87
    JMP 0x00442c66                      ; 00442d89
        ;   XREF to: 00442c66 (UNCONDITIONAL_JUMP)  ; LAB_00442c66

