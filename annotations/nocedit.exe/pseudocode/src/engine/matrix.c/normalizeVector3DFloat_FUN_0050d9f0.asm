; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack_esi CVector3i * __stack_esi engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0 (CVector3i *input_vector,CVector3i *output_vector)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   input_vector
; Local Variables:
; undefined1       Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[4]:
;   core_ground.cpp_CGround_getNormalAtPosition_FUN_004effb0 at 004f00b1
;   core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0 at 0052a374
;   core_set.cpp_FUN_005702b0 at 005704b8
;   engine_light.cpp_calculatePhongLighting_FUN_00505530 at 0050564f
;
; Referenced Globals:
;   double g_NormalizationScale = 65535
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d9f0
        ;   Label: engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
    PUSH EDI                            ; 0050d9f1
    PUSH EBP                            ; 0050d9f2
    MOV EBP,ESP                         ; 0050d9f3
    SUB ESP,0x44                        ; 0050d9f5
    MOV EAX,dword ptr [EBP + 0x10]      ; 0050d9f8
    MOV dword ptr [EBP + -0x4],ESI      ; 0050d9fb
    FILD dword ptr [EAX]                ; 0050d9fe
    FSTP double ptr [EBP + -0x24]       ; 0050da00
    FILD dword ptr [EAX + 0x4]          ; 0050da03
    FSTP double ptr [EBP + -0x1c]       ; 0050da06
    FILD dword ptr [EAX + 0x8]          ; 0050da09
    FSTP double ptr [EBP + -0x14]       ; 0050da0c
    FLD double ptr [EBP + -0x24]        ; 0050da0f
    FMUL ST0                            ; 0050da12
    FLD double ptr [EBP + -0x1c]        ; 0050da14
    FMUL ST0                            ; 0050da17
    FADDP                               ; 0050da19
    FLD double ptr [EBP + -0x14]        ; 0050da1b
    FMUL ST0                            ; 0050da1e
    FADDP                               ; 0050da20
    FSQRT                               ; 0050da22
    FSTP double ptr [EBP + -0x2c]       ; 0050da24
    MOV EDX,dword ptr [EBP + -0x28]     ; 0050da27
    MOV ECX,dword ptr [EBP + -0x2c]     ; 0050da2a
    TEST EDX,0x7fffffff                 ; 0050da2d
    JNZ 0x0050da39                      ; 0050da33
        ;   XREF to: 0050da39 (CONDITIONAL_JUMP)  ; LAB_0050da39
    TEST ECX,ECX                        ; 0050da35
    JZ 0x0050da9f                       ; 0050da37
        ;   XREF to: 0050da9f (CONDITIONAL_JUMP)  ; LAB_0050da9f
    FLD1                                ; 0050da39
        ;   Label: LAB_0050da39
    FDIV double ptr [EBP + -0x2c]       ; 0050da3b
    FLD double ptr [EBP + -0x24]        ; 0050da3e
    FMUL ST1                            ; 0050da41
    FLD double ptr [0x00635ae5]         ; 0050da43 | g_NormalizationScale
    FXCH                                ; 0050da49
    FMUL ST1                            ; 0050da4b
    FSTP double ptr [EBP + -0x24]       ; 0050da4d
    FLD double ptr [EBP + -0x1c]        ; 0050da50
    FMUL ST2                            ; 0050da53
    FMUL ST1                            ; 0050da55
    FSTP double ptr [EBP + -0x1c]       ; 0050da57
    FLD double ptr [EBP + -0x14]        ; 0050da5a
    FMULP ST2                           ; 0050da5d
    FMULP                               ; 0050da5f
    FSTP double ptr [EBP + -0x14]       ; 0050da61
    LEA EBX,[EBP + 0xffffffc8]          ; 0050da64
        ;   Label: LAB_0050da64
    FLD double ptr [EBP + 0xffffffdc]   ; 0050da6a
    FISTP dword ptr [EBX]               ; 0050da70
    FLD double ptr [EBP + 0xffffffe4]   ; 0050da72
    FISTP dword ptr [EBX + 0x4]         ; 0050da78
    FLD double ptr [EBP + 0xffffffec]   ; 0050da7b
    FISTP dword ptr [EBX + 0x8]         ; 0050da81
    LEA EDI,[EBP + -0x44]               ; 0050da84
    LEA ESI,[EBP + -0x38]               ; 0050da87
    MOVSD ES:EDI,ESI                    ; 0050da8a
    MOVSD ES:EDI,ESI                    ; 0050da8b
    MOVSD ES:EDI,ESI                    ; 0050da8c
    MOV EDI,dword ptr [EBP + -0x4]      ; 0050da8d
    LEA ESI,[EBP + -0x44]               ; 0050da90
    MOVSD ES:EDI,ESI                    ; 0050da93
    MOVSD ES:EDI,ESI                    ; 0050da94
    MOVSD ES:EDI,ESI                    ; 0050da95
    MOV EAX,dword ptr [EBP + -0x4]      ; 0050da96
    MOV ESP,EBP                         ; 0050da99
    POP EBP                             ; 0050da9b
    POP EDI                             ; 0050da9c
    POP EBX                             ; 0050da9d
    RET                                 ; 0050da9e
    XOR EBX,EBX                         ; 0050da9f
        ;   Label: LAB_0050da9f
    MOV dword ptr [EBP + -0x14],EBX     ; 0050daa1
    MOV dword ptr [EBP + -0x10],EBX     ; 0050daa4
    MOV EAX,dword ptr [EBP + -0x14]     ; 0050daa7
    MOV dword ptr [EBP + -0x1c],EAX     ; 0050daaa
    MOV EAX,dword ptr [EBP + -0x10]     ; 0050daad
    MOV dword ptr [EBP + -0x18],EAX     ; 0050dab0
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0050dab3
    MOV dword ptr [EBP + -0x24],EAX     ; 0050dab6
    MOV EAX,dword ptr [EBP + -0x18]     ; 0050dab9
    MOV dword ptr [EBP + -0x20],EAX     ; 0050dabc
    JMP 0x0050da64                      ; 0050dabf
        ;   XREF to: 0050da64 (UNCONDITIONAL_JUMP)  ; LAB_0050da64

