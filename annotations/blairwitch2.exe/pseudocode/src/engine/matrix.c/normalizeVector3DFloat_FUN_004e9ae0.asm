; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_matrix_c_normalizeVector3DFloat_FUN_004e9ae0(int *param_1)
;
; Local Variables:
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_ground.cpp_FUN_004cba20 at 004cbb21
;   core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_00533a80 at 00533c88
;   engine_light.cpp_calculatePhongLighting_FUN_004e2660 at 004e277f
;
; Referenced Globals:
;   undefined4 DAT_005dc836
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e9ae0
        ;   Label: engine_matrix.c_normalizeVector3DFloat_FUN_004e9ae0
    PUSH EDI                            ; 004e9ae1
    PUSH EBP                            ; 004e9ae2
    MOV EBP,ESP                         ; 004e9ae3
    SUB ESP,0x44                        ; 004e9ae5
    MOV EAX,dword ptr [EBP + 0x10]      ; 004e9ae8
    MOV dword ptr [EBP + -0x4],ESI      ; 004e9aeb
    FILD dword ptr [EAX]                ; 004e9aee
    FSTP double ptr [EBP + -0x24]       ; 004e9af0
    FILD dword ptr [EAX + 0x4]          ; 004e9af3
    FSTP double ptr [EBP + -0x1c]       ; 004e9af6
    FILD dword ptr [EAX + 0x8]          ; 004e9af9
    FSTP double ptr [EBP + -0x14]       ; 004e9afc
    FLD double ptr [EBP + -0x24]        ; 004e9aff
    FMUL ST0                            ; 004e9b02
    FLD double ptr [EBP + -0x1c]        ; 004e9b04
    FMUL ST0                            ; 004e9b07
    FADDP                               ; 004e9b09
    FLD double ptr [EBP + -0x14]        ; 004e9b0b
    FMUL ST0                            ; 004e9b0e
    FADDP                               ; 004e9b10
    FSQRT                               ; 004e9b12
    FSTP double ptr [EBP + -0x2c]       ; 004e9b14
    MOV EDX,dword ptr [EBP + -0x28]     ; 004e9b17
    MOV ECX,dword ptr [EBP + -0x2c]     ; 004e9b1a
    TEST EDX,0x7fffffff                 ; 004e9b1d
    JNZ 0x004e9b29                      ; 004e9b23
        ;   XREF to: 004e9b29 (CONDITIONAL_JUMP)  ; LAB_004e9b29
    TEST ECX,ECX                        ; 004e9b25
    JZ 0x004e9b8f                       ; 004e9b27
        ;   XREF to: 004e9b8f (CONDITIONAL_JUMP)  ; LAB_004e9b8f
    FLD1                                ; 004e9b29
        ;   Label: LAB_004e9b29
    FDIV double ptr [EBP + -0x2c]       ; 004e9b2b
    FLD double ptr [EBP + -0x24]        ; 004e9b2e
    FMUL ST1                            ; 004e9b31
    FLD double ptr [0x005dc836]         ; 004e9b33 | DAT_005dc836
    FXCH                                ; 004e9b39
    FMUL ST1                            ; 004e9b3b
    FSTP double ptr [EBP + -0x24]       ; 004e9b3d
    FLD double ptr [EBP + -0x1c]        ; 004e9b40
    FMUL ST2                            ; 004e9b43
    FMUL ST1                            ; 004e9b45
    FSTP double ptr [EBP + -0x1c]       ; 004e9b47
    FLD double ptr [EBP + -0x14]        ; 004e9b4a
    FMULP ST2                           ; 004e9b4d
    FMULP                               ; 004e9b4f
    FSTP double ptr [EBP + -0x14]       ; 004e9b51
    LEA EBX,[EBP + 0xffffffc8]          ; 004e9b54
        ;   Label: LAB_004e9b54
    FLD double ptr [EBP + 0xffffffdc]   ; 004e9b5a
    FISTP dword ptr [EBX]               ; 004e9b60
    FLD double ptr [EBP + 0xffffffe4]   ; 004e9b62
    FISTP dword ptr [EBX + 0x4]         ; 004e9b68
    FLD double ptr [EBP + 0xffffffec]   ; 004e9b6b
    FISTP dword ptr [EBX + 0x8]         ; 004e9b71
    LEA EDI,[EBP + -0x44]               ; 004e9b74
    LEA ESI,[EBP + -0x38]               ; 004e9b77
    MOVSD ES:EDI,ESI                    ; 004e9b7a
    MOVSD ES:EDI,ESI                    ; 004e9b7b
    MOVSD ES:EDI,ESI                    ; 004e9b7c
    MOV EDI,dword ptr [EBP + -0x4]      ; 004e9b7d
    LEA ESI,[EBP + -0x44]               ; 004e9b80
    MOVSD ES:EDI,ESI                    ; 004e9b83
    MOVSD ES:EDI,ESI                    ; 004e9b84
    MOVSD ES:EDI,ESI                    ; 004e9b85
    MOV EAX,dword ptr [EBP + -0x4]      ; 004e9b86
    MOV ESP,EBP                         ; 004e9b89
    POP EBP                             ; 004e9b8b
    POP EDI                             ; 004e9b8c
    POP EBX                             ; 004e9b8d
    RET                                 ; 004e9b8e
    XOR EBX,EBX                         ; 004e9b8f
        ;   Label: LAB_004e9b8f
    MOV dword ptr [EBP + -0x14],EBX     ; 004e9b91
    MOV dword ptr [EBP + -0x10],EBX     ; 004e9b94
    MOV EAX,dword ptr [EBP + -0x14]     ; 004e9b97
    MOV dword ptr [EBP + -0x1c],EAX     ; 004e9b9a
    MOV EAX,dword ptr [EBP + -0x10]     ; 004e9b9d
    MOV dword ptr [EBP + -0x18],EAX     ; 004e9ba0
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004e9ba3
    MOV dword ptr [EBP + -0x24],EAX     ; 004e9ba6
    MOV EAX,dword ptr [EBP + -0x18]     ; 004e9ba9
    MOV dword ptr [EBP + -0x20],EAX     ; 004e9bac
    JMP 0x004e9b54                      ; 004e9baf
        ;   XREF to: 004e9b54 (UNCONDITIONAL_JUMP)  ; LAB_004e9b54

