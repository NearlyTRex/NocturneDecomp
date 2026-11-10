; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_matrix_c_normalizeVector3DFloat_FUN_004e61c0(int *param_1)
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
;   core_ground.cpp_FUN_004d0c30 at 004d0d31
;   core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_0053a6c0 at 0053a8c8
;   engine_light.cpp_calculatePhongLighting_FUN_004e0bb0 at 004e0ccf
;
; Referenced Globals:
;   undefined4 DAT_005c6f72
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e61c0
        ;   Label: engine_matrix.c_normalizeVector3DFloat_FUN_004e61c0
    PUSH EDI                            ; 004e61c1
    PUSH EBP                            ; 004e61c2
    MOV EBP,ESP                         ; 004e61c3
    SUB ESP,0x44                        ; 004e61c5
    MOV EAX,dword ptr [EBP + 0x10]      ; 004e61c8
    MOV dword ptr [EBP + -0x4],ESI      ; 004e61cb
    FILD dword ptr [EAX]                ; 004e61ce
    FSTP double ptr [EBP + -0x24]       ; 004e61d0
    FILD dword ptr [EAX + 0x4]          ; 004e61d3
    FSTP double ptr [EBP + -0x1c]       ; 004e61d6
    FILD dword ptr [EAX + 0x8]          ; 004e61d9
    FSTP double ptr [EBP + -0x14]       ; 004e61dc
    FLD double ptr [EBP + -0x24]        ; 004e61df
    FMUL ST0                            ; 004e61e2
    FLD double ptr [EBP + -0x1c]        ; 004e61e4
    FMUL ST0                            ; 004e61e7
    FADDP                               ; 004e61e9
    FLD double ptr [EBP + -0x14]        ; 004e61eb
    FMUL ST0                            ; 004e61ee
    FADDP                               ; 004e61f0
    FSQRT                               ; 004e61f2
    FSTP double ptr [EBP + -0x2c]       ; 004e61f4
    MOV EDX,dword ptr [EBP + -0x28]     ; 004e61f7
    MOV ECX,dword ptr [EBP + -0x2c]     ; 004e61fa
    TEST EDX,0x7fffffff                 ; 004e61fd
    JNZ 0x004e6209                      ; 004e6203
        ;   XREF to: 004e6209 (CONDITIONAL_JUMP)  ; LAB_004e6209
    TEST ECX,ECX                        ; 004e6205
    JZ 0x004e626f                       ; 004e6207
        ;   XREF to: 004e626f (CONDITIONAL_JUMP)  ; LAB_004e626f
    FLD1                                ; 004e6209
        ;   Label: LAB_004e6209
    FDIV double ptr [EBP + -0x2c]       ; 004e620b
    FLD double ptr [EBP + -0x24]        ; 004e620e
    FMUL ST1                            ; 004e6211
    FLD double ptr [0x005c6f72]         ; 004e6213 | DAT_005c6f72
    FXCH                                ; 004e6219
    FMUL ST1                            ; 004e621b
    FSTP double ptr [EBP + -0x24]       ; 004e621d
    FLD double ptr [EBP + -0x1c]        ; 004e6220
    FMUL ST2                            ; 004e6223
    FMUL ST1                            ; 004e6225
    FSTP double ptr [EBP + -0x1c]       ; 004e6227
    FLD double ptr [EBP + -0x14]        ; 004e622a
    FMULP ST2                           ; 004e622d
    FMULP                               ; 004e622f
    FSTP double ptr [EBP + -0x14]       ; 004e6231
    LEA EBX,[EBP + 0xffffffc8]          ; 004e6234
        ;   Label: LAB_004e6234
    FLD double ptr [EBP + 0xffffffdc]   ; 004e623a
    FISTP dword ptr [EBX]               ; 004e6240
    FLD double ptr [EBP + 0xffffffe4]   ; 004e6242
    FISTP dword ptr [EBX + 0x4]         ; 004e6248
    FLD double ptr [EBP + 0xffffffec]   ; 004e624b
    FISTP dword ptr [EBX + 0x8]         ; 004e6251
    LEA EDI,[EBP + -0x44]               ; 004e6254
    LEA ESI,[EBP + -0x38]               ; 004e6257
    MOVSD ES:EDI,ESI                    ; 004e625a
    MOVSD ES:EDI,ESI                    ; 004e625b
    MOVSD ES:EDI,ESI                    ; 004e625c
    MOV EDI,dword ptr [EBP + -0x4]      ; 004e625d
    LEA ESI,[EBP + -0x44]               ; 004e6260
    MOVSD ES:EDI,ESI                    ; 004e6263
    MOVSD ES:EDI,ESI                    ; 004e6264
    MOVSD ES:EDI,ESI                    ; 004e6265
    MOV EAX,dword ptr [EBP + -0x4]      ; 004e6266
    MOV ESP,EBP                         ; 004e6269
    POP EBP                             ; 004e626b
    POP EDI                             ; 004e626c
    POP EBX                             ; 004e626d
    RET                                 ; 004e626e
    XOR EBX,EBX                         ; 004e626f
        ;   Label: LAB_004e626f
    MOV dword ptr [EBP + -0x14],EBX     ; 004e6271
    MOV dword ptr [EBP + -0x10],EBX     ; 004e6274
    MOV EAX,dword ptr [EBP + -0x14]     ; 004e6277
    MOV dword ptr [EBP + -0x1c],EAX     ; 004e627a
    MOV EAX,dword ptr [EBP + -0x10]     ; 004e627d
    MOV dword ptr [EBP + -0x18],EAX     ; 004e6280
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004e6283
    MOV dword ptr [EBP + -0x24],EAX     ; 004e6286
    MOV EAX,dword ptr [EBP + -0x18]     ; 004e6289
    MOV dword ptr [EBP + -0x20],EAX     ; 004e628c
    JMP 0x004e6234                      ; 004e628f
        ;   XREF to: 004e6234 (UNCONDITIONAL_JUMP)  ; LAB_004e6234

