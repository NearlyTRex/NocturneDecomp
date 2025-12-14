; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3i * core_mirror.cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50(CVector3i * output, SMirrorReflection * reflection, CVector3i * point_a, CVector3i * point_b)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   output
; SMirrorReflection * Stack[0x8]:4   reflection
; CVector3i *      Stack[0xc]:4   point_a
; CVector3i *      Stack[0x10]:4   point_b
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80 at 0056dd84
;
; Referenced Globals:
;   float g_MirrorFloatToInt = 65536
;   float g_MirrorIntToFloat_Coarse = 0.00390625
;   float g_MirrorIntToFloat_Fine = 0.00001525879
;
; Called Functions:
;   core_mirror.cpp_applyMirrorTransform_FUN_005222f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522a50
        ;   Label: core_mirror.cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50
    PUSH EDI                            ; 00522a51
    PUSH EBP                            ; 00522a52
    SUB ESP,0x54                        ; 00522a53
    MOV EAX,dword ptr [ESP + 0x68]      ; 00522a56
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00522a5a
    MOV EBP,ESI                         ; 00522a5e
    MOV ESI,dword ptr [ESP + 0x64]      ; 00522a60
    LEA EBX,[ESP + 0x3c]                ; 00522a64
    FILD dword ptr [EAX]                ; 00522a68
    FMUL float ptr [0x006616e8]         ; 00522a6a | g_MirrorIntToFloat_Coarse
    FSTP float ptr [EBX]                ; 00522a70
    FILD dword ptr [EAX + 0x4]          ; 00522a72
    FMUL float ptr [0x006616e8]         ; 00522a75 | g_MirrorIntToFloat_Coarse
    FSTP float ptr [EBX + 0x4]          ; 00522a7b
    FILD dword ptr [EAX + 0x8]          ; 00522a7e
    FMUL float ptr [0x006616e8]         ; 00522a81 | g_MirrorIntToFloat_Coarse
    FSTP float ptr [EBX + 0x8]          ; 00522a87
    LEA EBX,[ESP + 0xc]                 ; 00522a8a
    MOV EAX,EDX                         ; 00522a8e
    FILD dword ptr [EAX]                ; 00522a90
    FMUL float ptr [0x006616ec]         ; 00522a92 | g_MirrorIntToFloat_Fine
    FSTP float ptr [EBX]                ; 00522a98
    FILD dword ptr [EAX + 0x4]          ; 00522a9a
    FMUL float ptr [0x006616ec]         ; 00522a9d | g_MirrorIntToFloat_Fine
    FSTP float ptr [EBX + 0x4]          ; 00522aa3
    FILD dword ptr [EAX + 0x8]          ; 00522aa6
    FMUL float ptr [0x006616ec]         ; 00522aa9 | g_MirrorIntToFloat_Fine
    FSTP float ptr [EBX + 0x8]          ; 00522aaf
    FLD float ptr [ESP + 0xc]           ; 00522ab2
    FLD float ptr [ESP + 0x10]          ; 00522ab6
    FLD float ptr [ESP + 0x14]          ; 00522aba
    MOV EAX,ESP                         ; 00522abe
    LEA EDX,[ESP + 0xc]                 ; 00522ac0
    FXCH ST2                            ; 00522ac4
    FADD float ptr [ESP + 0x3c]         ; 00522ac6
    FXCH                                ; 00522aca
    FADD float ptr [ESP + 0x40]         ; 00522acc
    FXCH ST2                            ; 00522ad0
    FADD float ptr [ESP + 0x44]         ; 00522ad2
    FXCH                                ; 00522ad6
    FSTP float ptr [ESP]                ; 00522ad8
    FXCH                                ; 00522adb
    FSTP float ptr [ESP + 0x4]          ; 00522add
    FSTP float ptr [ESP + 0x8]          ; 00522ae1
    CMP EDX,EAX                         ; 00522ae5
    JZ 0x00522b00                       ; 00522ae7
        ;   XREF to: 00522b00 (CONDITIONAL_JUMP)  ; LAB_00522b00
    MOV EAX,dword ptr [ESP]             ; 00522ae9
    MOV dword ptr [ESP + 0xc],EAX       ; 00522aec
    MOV EAX,dword ptr [ESP + 0x4]       ; 00522af0
    MOV dword ptr [ESP + 0x10],EAX      ; 00522af4
    MOV EAX,dword ptr [ESP + 0x8]       ; 00522af8
    MOV dword ptr [ESP + 0x14],EAX      ; 00522afc
    LEA EAX,[ESP + 0x3c]                ; 00522b00
        ;   Label: LAB_00522b00
    PUSH EAX                            ; 00522b04
    LEA EAX,[ESP + 0x1c]                ; 00522b05
    PUSH EAX                            ; 00522b09
    PUSH ESI                            ; 00522b0a
    CALL core_mirror.cpp_applyMirrorTransform_FUN_005222f0 ; 00522b0b
        ;   XREF to: 005222f0 (UNCONDITIONAL_CALL)  ; CVector3f * core_mirror.cpp_applyMirrorTransform_FUN_005222f0(SMirrorReflection * reflection, CVector3f * output_buffer, CVector3f * input_vector)
    MOV EDX,EAX                         ; 00522b10
    LEA EAX,[ESP + 0x48]                ; 00522b12
    ADD ESP,0xc                         ; 00522b16
    CMP EAX,EDX                         ; 00522b19
    JZ 0x00522b31                       ; 00522b1b
        ;   XREF to: 00522b31 (CONDITIONAL_JUMP)  ; LAB_00522b31
    MOV EAX,dword ptr [EDX]             ; 00522b1d
    MOV dword ptr [ESP + 0x3c],EAX      ; 00522b1f
    MOV EAX,dword ptr [EDX + 0x4]       ; 00522b23
    MOV dword ptr [ESP + 0x40],EAX      ; 00522b26
    MOV EAX,dword ptr [EDX + 0x8]       ; 00522b2a
    MOV dword ptr [ESP + 0x44],EAX      ; 00522b2d
    LEA EAX,[ESP + 0xc]                 ; 00522b31
        ;   Label: LAB_00522b31
    PUSH EAX                            ; 00522b35
    LEA EAX,[ESP + 0x4c]                ; 00522b36
    PUSH EAX                            ; 00522b3a
    PUSH ESI                            ; 00522b3b
    CALL core_mirror.cpp_applyMirrorTransform_FUN_005222f0 ; 00522b3c
        ;   XREF to: 005222f0 (UNCONDITIONAL_CALL)  ; CVector3f * core_mirror.cpp_applyMirrorTransform_FUN_005222f0(SMirrorReflection * reflection, CVector3f * output_buffer, CVector3f * input_vector)
    MOV EDX,EAX                         ; 00522b41
    LEA EAX,[ESP + 0x18]                ; 00522b43
    ADD ESP,0xc                         ; 00522b47
    CMP EAX,EDX                         ; 00522b4a
    JZ 0x00522b62                       ; 00522b4c
        ;   XREF to: 00522b62 (CONDITIONAL_JUMP)  ; LAB_00522b62
    MOV EAX,dword ptr [EDX]             ; 00522b4e
    MOV dword ptr [ESP + 0xc],EAX       ; 00522b50
    MOV EAX,dword ptr [EDX + 0x4]       ; 00522b54
    MOV dword ptr [ESP + 0x10],EAX      ; 00522b57
    MOV EAX,dword ptr [EDX + 0x8]       ; 00522b5b
    MOV dword ptr [ESP + 0x14],EAX      ; 00522b5e
    FLD float ptr [ESP + 0xc]           ; 00522b62
        ;   Label: LAB_00522b62
    FLD float ptr [ESP + 0x10]          ; 00522b66
    FLD float ptr [ESP + 0x14]          ; 00522b6a
    LEA EAX,[ESP + 0x30]                ; 00522b6e
    LEA EDX,[ESP + 0xc]                 ; 00522b72
    FXCH ST2                            ; 00522b76
    FSUB float ptr [ESP + 0x3c]         ; 00522b78
    FXCH                                ; 00522b7c
    FSUB float ptr [ESP + 0x40]         ; 00522b7e
    FXCH ST2                            ; 00522b82
    FSUB float ptr [ESP + 0x44]         ; 00522b84
    FXCH ST2                            ; 00522b88
    FSTP float ptr [ESP + 0x34]         ; 00522b8a
    FXCH                                ; 00522b8e
    FSTP float ptr [ESP + 0x38]         ; 00522b90
    FSTP float ptr [ESP + 0x30]         ; 00522b94
    CMP EDX,EAX                         ; 00522b98
    JZ 0x00522bb4                       ; 00522b9a
        ;   XREF to: 00522bb4 (CONDITIONAL_JUMP)  ; LAB_00522bb4
    MOV EAX,dword ptr [ESP + 0x30]      ; 00522b9c
    MOV dword ptr [ESP + 0xc],EAX       ; 00522ba0
    MOV EAX,dword ptr [ESP + 0x34]      ; 00522ba4
    MOV dword ptr [ESP + 0x10],EAX      ; 00522ba8
    MOV EAX,dword ptr [ESP + 0x38]      ; 00522bac
    MOV dword ptr [ESP + 0x14],EAX      ; 00522bb0
    LEA EBX,[ESP + 0x24]                ; 00522bb4
        ;   Label: LAB_00522bb4
    LEA EAX,[ESP + 0xc]                 ; 00522bb8
    LEA ESI,[ESP + 0x24]                ; 00522bbc
    MOV EDI,EBP                         ; 00522bc0
    FLD float ptr [EAX]                 ; 00522bc2
    FMUL float ptr [0x006616e4]         ; 00522bc4 | g_MirrorFloatToInt
    FISTP dword ptr [EBX]               ; 00522bca
    FLD float ptr [EAX + 0x4]           ; 00522bcc
    FMUL float ptr [0x006616e4]         ; 00522bcf | g_MirrorFloatToInt
    FISTP dword ptr [EBX + 0x4]         ; 00522bd5
    FLD float ptr [EAX + 0x8]           ; 00522bd8
    FMUL float ptr [0x006616e4]         ; 00522bdb | g_MirrorFloatToInt
    FISTP dword ptr [EBX + 0x8]         ; 00522be1
    MOVSD ES:EDI,ESI                    ; 00522be4
    MOVSD ES:EDI,ESI                    ; 00522be5
    MOVSD ES:EDI,ESI                    ; 00522be6
    MOV EAX,EBP                         ; 00522be7
    ADD ESP,0x54                        ; 00522be9
    POP EBP                             ; 00522bec
    POP EDI                             ; 00522bed
    POP EBX                             ; 00522bee
    RET                                 ; 00522bef

