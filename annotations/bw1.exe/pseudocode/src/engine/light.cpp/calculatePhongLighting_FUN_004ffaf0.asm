; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_light_cpp_calculatePhongLighting_FUN_004ffaf0(int world_x,int world_y,int world_z)
;
; Parameters:
; int              Stack[0x4]:4   world_x
; int              Stack[0x8]:4   world_y
; int              Stack[0xc]:4   world_z
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_light.cpp_calculateAndStoreVertexLight_FUN_004ffe10 at 004ffe20
;
; Referenced Globals:
;   int g_AmbientLightLevel = 0x8000
;   int g_SpecularEnabled = 0x1
;   int g_DiffuseLightMultiplier = 0x10000
;   int g_SpecularLightMultiplier = 0x10000
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   int g_LightDirectionX
;   int g_LightDirectionY
;   int g_LightDirectionZ
;   CVector3i g_CachedViewPosition
;   undefined4 g_CachedViewPosition.y
;   undefined4 g_CachedViewPosition.z
;   CVector3i g_NormalizedViewVector
;   undefined4 g_NormalizedViewVector.y
;   ... and 1 more
;
; Called Functions:
;   engine_matrix.c_normalizeVector3DFloat_FUN_00508780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ffaf0
        ;   Label: engine_light.cpp_calculatePhongLighting_FUN_004ffaf0
    PUSH ESI                            ; 004ffaf1
    PUSH EDI                            ; 004ffaf2
    PUSH EBP                            ; 004ffaf3
    SUB ESP,0x14                        ; 004ffaf4
    MOV ESI,dword ptr [ESP + 0x28]      ; 004ffaf7
    MOV EDI,dword ptr [ESP + 0x30]      ; 004ffafb
    MOV EDX,dword ptr [0x01c51d50]      ; 004ffaff | g_LightDirectionX
    MOV EAX,ESI                         ; 004ffb05
    IMUL EDX                            ; 004ffb07
    SHRD EAX,EDX,0x10                   ; 004ffb09
    MOV EDX,dword ptr [0x01c51d54]      ; 004ffb0d | g_LightDirectionY
    MOV ECX,EAX                         ; 004ffb13
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004ffb15
    IMUL EDX                            ; 004ffb19
    SHRD EAX,EDX,0x10                   ; 004ffb1b
    MOV EDX,dword ptr [0x01c51d58]      ; 004ffb1f | g_LightDirectionZ
    ADD ECX,EAX                         ; 004ffb25
    MOV EAX,EDI                         ; 004ffb27
    IMUL EDX                            ; 004ffb29
    SHRD EAX,EDX,0x10                   ; 004ffb2b
    LEA EBX,[ECX + EAX*0x1]             ; 004ffb2f
    MOV ECX,EBX                         ; 004ffb32
    NEG EBX                             ; 004ffb34
    TEST EBX,EBX                        ; 004ffb36
    JL 0x004ffcd2                       ; 004ffb38
        ;   XREF to: 004ffcd2 (CONDITIONAL_JUMP)  ; LAB_004ffcd2
    CMP EBX,0xffff                      ; 004ffb3e
    JLE 0x004ffb4b                      ; 004ffb44
        ;   XREF to: 004ffb4b (CONDITIONAL_JUMP)  ; LAB_004ffb4b
    MOV EBX,0xffff                      ; 004ffb46
    MOV EDX,0xffff                      ; 004ffb4b
        ;   Label: LAB_004ffb4b
    MOV EBP,dword ptr [0x0061f310]      ; 004ffb50 | g_AmbientLightLevel
    MOV EAX,EBX                         ; 004ffb56
    SUB EDX,EBP                         ; 004ffb58
    IMUL EDX                            ; 004ffb5a
    SHRD EAX,EDX,0x10                   ; 004ffb5c
    MOV EBX,dword ptr [0x0061f310]      ; 004ffb60 | g_AmbientLightLevel
    ADD EBX,EAX                         ; 004ffb66
    TEST EBX,EBX                        ; 004ffb68
    JL 0x004ffcd9                       ; 004ffb6a
        ;   XREF to: 004ffcd9 (CONDITIONAL_JUMP)  ; LAB_004ffcd9
    CMP EBX,0xffff                      ; 004ffb70
    JLE 0x004ffb7d                      ; 004ffb76
        ;   XREF to: 004ffb7d (CONDITIONAL_JUMP)  ; LAB_004ffb7d
    MOV EBX,0xffff                      ; 004ffb78
    CMP dword ptr [0x0061f314],0x0      ; 004ffb7d | g_SpecularEnabled
        ;   Label: LAB_004ffb7d
    JZ 0x004ffce0                       ; 004ffb84
        ;   XREF to: 004ffce0 (CONDITIONAL_JUMP)  ; LAB_004ffce0
    MOV EAX,ESI                         ; 004ffb8a
    MOV EDX,ECX                         ; 004ffb8c
    IMUL EDX                            ; 004ffb8e
    SHRD EAX,EDX,0x10                   ; 004ffb90
    LEA EBP,[EAX + EAX*0x1]             ; 004ffb94
    MOV EDX,dword ptr [0x01c51d50]      ; 004ffb97 | g_LightDirectionX
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004ffb9d
    SUB EBP,EDX                         ; 004ffba1
    MOV EDX,ECX                         ; 004ffba3
    IMUL EDX                            ; 004ffba5
    SHRD EAX,EDX,0x10                   ; 004ffba7
    MOV ESI,dword ptr [0x01c51d54]      ; 004ffbab | g_LightDirectionY
    ADD EAX,EAX                         ; 004ffbb1
    SUB EAX,ESI                         ; 004ffbb3
    MOV EDX,ECX                         ; 004ffbb5
    MOV dword ptr [ESP + 0xc],EAX       ; 004ffbb7
    MOV EAX,EDI                         ; 004ffbbb
    IMUL EDX                            ; 004ffbbd
    SHRD EAX,EDX,0x10                   ; 004ffbbf
    MOV EDI,dword ptr [0x01c51d58]      ; 004ffbc3 | g_LightDirectionZ
    ADD EAX,EAX                         ; 004ffbc9
    SUB EAX,EDI                         ; 004ffbcb
    MOV EDX,dword ptr [0x01d1c22c]      ; 004ffbcd | g_CachedViewPosition
    MOV dword ptr [ESP + 0x10],EAX      ; 004ffbd3
    CMP EDX,dword ptr [0x01c51d2c]      ; 004ffbd7 | g_RelativeX
    JZ 0x004ffcf1                       ; 004ffbdd
        ;   XREF to: 004ffcf1 (CONDITIONAL_JUMP)  ; LAB_004ffcf1
    MOV EAX,[0x01c51d2c]                ; 004ffbe3 | g_RelativeX
        ;   Label: LAB_004ffbe3
    PUSH 0x1d1c22c                      ; 004ffbe8 | g_CachedViewPosition
    MOV [0x01d1c22c],EAX                ; 004ffbed | g_CachedViewPosition
    MOV EAX,[0x01c51d30]                ; 004ffbf2 | g_RelativeY
    LEA ESI,[ESP + 0x4]                 ; 004ffbf7
    MOV [0x01d1c230],EAX                ; 004ffbfb | g_CachedViewPosition.y
    MOV EAX,[0x01c51d34]                ; 004ffc00 | g_RelativeZ
    MOV EDI,0x1d1c238                   ; 004ffc05
    MOV [0x01d1c234],EAX                ; 004ffc0a | g_CachedViewPosition.z
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_00508780 ; 004ffc0f
        ;   XREF to: 00508780 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_normalizeVector3DFloat_FUN_00508780(CVector3i * input_vector, CVector3i * output_vector)
    LEA ESI,[ESP + 0x4]                 ; 004ffc14
    ADD ESP,0x4                         ; 004ffc18
    MOVSD ES:EDI,ESI                    ; 004ffc1b | g_NormalizedViewVector
    MOVSD ES:EDI,ESI                    ; 004ffc1c | g_NormalizedViewVector.y
    MOVSD ES:EDI,ESI                    ; 004ffc1d | g_NormalizedViewVector.z
    MOV EDX,dword ptr [0x01d1c238]      ; 004ffc1e | g_NormalizedViewVector
        ;   Label: LAB_004ffc1e
    MOV EAX,EBP                         ; 004ffc24
    IMUL EDX                            ; 004ffc26
    SHRD EAX,EDX,0x10                   ; 004ffc28
    MOV EDX,dword ptr [0x01d1c23c]      ; 004ffc2c | g_NormalizedViewVector.y
    MOV ECX,EAX                         ; 004ffc32
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ffc34
    IMUL EDX                            ; 004ffc38
    SHRD EAX,EDX,0x10                   ; 004ffc3a
    MOV EDX,dword ptr [0x01d1c240]      ; 004ffc3e | g_NormalizedViewVector.z
    ADD ECX,EAX                         ; 004ffc44
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ffc46
    IMUL EDX                            ; 004ffc4a
    SHRD EAX,EDX,0x10                   ; 004ffc4c
    ADD ECX,EAX                         ; 004ffc50
    NEG ECX                             ; 004ffc52
    TEST ECX,ECX                        ; 004ffc54
    JL 0x004ffd1a                       ; 004ffc56
        ;   XREF to: 004ffd1a (CONDITIONAL_JUMP)  ; LAB_004ffd1a
    CMP ECX,0xffff                      ; 004ffc5c
    JLE 0x004ffd1e                      ; 004ffc62
        ;   XREF to: 004ffd1e (CONDITIONAL_JUMP)  ; LAB_004ffd1e
    MOV ECX,0xffff                      ; 004ffc68
    MOV EAX,ECX                         ; 004ffc6d
        ;   Label: LAB_004ffc6d
    MOV EDX,ECX                         ; 004ffc6f
    IMUL EDX                            ; 004ffc71
    SHRD EAX,EDX,0x10                   ; 004ffc73
    MOV EDX,EAX                         ; 004ffc77
    IMUL EDX                            ; 004ffc79
    SHRD EAX,EDX,0x10                   ; 004ffc7b
    MOV EDX,EAX                         ; 004ffc7f
    IMUL EDX                            ; 004ffc81
    SHRD EAX,EDX,0x10                   ; 004ffc83
    MOV EDX,EAX                         ; 004ffc87
    IMUL EDX                            ; 004ffc89
    SHRD EAX,EDX,0x10                   ; 004ffc8b
    MOV EDX,EAX                         ; 004ffc8f
    IMUL EDX                            ; 004ffc91
    SHRD EAX,EDX,0x10                   ; 004ffc93
    MOV ECX,EAX                         ; 004ffc97
    MOV EAX,[0x0061f318]                ; 004ffc99 | g_DiffuseLightMultiplier
        ;   Label: LAB_004ffc99
    MOV EDX,EBX                         ; 004ffc9e
    IMUL EDX                            ; 004ffca0
    SHRD EAX,EDX,0x10                   ; 004ffca2
    MOV EBX,EAX                         ; 004ffca6
    MOV EDX,ECX                         ; 004ffca8
    MOV EAX,[0x0061f31c]                ; 004ffcaa | g_SpecularLightMultiplier
    IMUL EDX                            ; 004ffcaf
    SHRD EAX,EDX,0x10                   ; 004ffcb1
    LEA EDX,[EBX + EAX*0x1]             ; 004ffcb5
    MOV EAX,EDX                         ; 004ffcb8
        ;   Label: LAB_004ffcb8
    SAR EDX,0x1f                        ; 004ffcba
    SHL EDX,0x4                         ; 004ffcbd
    SBB EAX,EDX                         ; 004ffcc0
    SAR EAX,0x4                         ; 004ffcc2
    ADD EAX,0x100                       ; 004ffcc5
    ADD ESP,0x14                        ; 004ffcca
    POP EBP                             ; 004ffccd
    POP EDI                             ; 004ffcce
    POP ESI                             ; 004ffccf
    POP EBX                             ; 004ffcd0
    RET                                 ; 004ffcd1
    XOR EBX,EBX                         ; 004ffcd2
        ;   Label: LAB_004ffcd2
    JMP 0x004ffb4b                      ; 004ffcd4
        ;   XREF to: 004ffb4b (UNCONDITIONAL_JUMP)  ; LAB_004ffb4b
    XOR EBX,EBX                         ; 004ffcd9
        ;   Label: LAB_004ffcd9
    JMP 0x004ffb7d                      ; 004ffcdb
        ;   XREF to: 004ffb7d (UNCONDITIONAL_JUMP)  ; LAB_004ffb7d
    MOV EAX,[0x0061f318]                ; 004ffce0 | g_DiffuseLightMultiplier
        ;   Label: LAB_004ffce0
    MOV EDX,EBX                         ; 004ffce5
    IMUL EDX                            ; 004ffce7
    SHRD EAX,EDX,0x10                   ; 004ffce9
    MOV EDX,EAX                         ; 004ffced
    JMP 0x004ffcb8                      ; 004ffcef
        ;   XREF to: 004ffcb8 (UNCONDITIONAL_JUMP)  ; LAB_004ffcb8
    MOV ECX,dword ptr [0x01d1c230]      ; 004ffcf1 | g_CachedViewPosition.y
        ;   Label: LAB_004ffcf1
    CMP ECX,dword ptr [0x01c51d30]      ; 004ffcf7 | g_RelativeY
    JNZ 0x004ffbe3                      ; 004ffcfd
        ;   XREF to: 004ffbe3 (CONDITIONAL_JUMP)  ; LAB_004ffbe3
    MOV ESI,dword ptr [0x01d1c234]      ; 004ffd03 | g_CachedViewPosition.z
    CMP ESI,dword ptr [0x01c51d34]      ; 004ffd09 | g_RelativeZ
    JNZ 0x004ffbe3                      ; 004ffd0f
        ;   XREF to: 004ffbe3 (CONDITIONAL_JUMP)  ; LAB_004ffbe3
    JMP 0x004ffc1e                      ; 004ffd15
        ;   XREF to: 004ffc1e (UNCONDITIONAL_JUMP)  ; LAB_004ffc1e
    MOV EDX,EBX                         ; 004ffd1a
        ;   Label: LAB_004ffd1a
    JMP 0x004ffcb8                      ; 004ffd1c
        ;   XREF to: 004ffcb8 (UNCONDITIONAL_JUMP)  ; LAB_004ffcb8
    CMP ECX,0xbb80                      ; 004ffd1e
        ;   Label: LAB_004ffd1e
    JG 0x004ffc6d                       ; 004ffd24
        ;   XREF to: 004ffc6d (CONDITIONAL_JUMP)  ; LAB_004ffc6d
    XOR ECX,ECX                         ; 004ffd2a
    JMP 0x004ffc99                      ; 004ffd2c
        ;   XREF to: 004ffc99 (UNCONDITIONAL_JUMP)  ; LAB_004ffc99

