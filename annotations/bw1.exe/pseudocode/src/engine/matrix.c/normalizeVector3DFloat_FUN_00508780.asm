; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_matrix_c_normalizeVector3DFloat_FUN_00508780(int *param_1)
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
;   core_ground.cpp_FUN_004e82a0 at 004e83a1
;   core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_00554d30 at 00554f38
;   engine_light.cpp_calculatePhongLighting_FUN_004ffaf0 at 004ffc0f
;
; Referenced Globals:
;   undefined4 DAT_005e7786
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508780
        ;   Label: engine_matrix.c_normalizeVector3DFloat_FUN_00508780
    PUSH EDI                            ; 00508781
    PUSH EBP                            ; 00508782
    MOV EBP,ESP                         ; 00508783
    SUB ESP,0x44                        ; 00508785
    MOV EAX,dword ptr [EBP + 0x10]      ; 00508788
    MOV dword ptr [EBP + -0x4],ESI      ; 0050878b
    FILD dword ptr [EAX]                ; 0050878e
    FSTP double ptr [EBP + -0x24]       ; 00508790
    FILD dword ptr [EAX + 0x4]          ; 00508793
    FSTP double ptr [EBP + -0x1c]       ; 00508796
    FILD dword ptr [EAX + 0x8]          ; 00508799
    FSTP double ptr [EBP + -0x14]       ; 0050879c
    FLD double ptr [EBP + -0x24]        ; 0050879f
    FMUL ST0                            ; 005087a2
    FLD double ptr [EBP + -0x1c]        ; 005087a4
    FMUL ST0                            ; 005087a7
    FADDP                               ; 005087a9
    FLD double ptr [EBP + -0x14]        ; 005087ab
    FMUL ST0                            ; 005087ae
    FADDP                               ; 005087b0
    FSQRT                               ; 005087b2
    FSTP double ptr [EBP + -0x2c]       ; 005087b4
    MOV EDX,dword ptr [EBP + -0x28]     ; 005087b7
    MOV ECX,dword ptr [EBP + -0x2c]     ; 005087ba
    TEST EDX,0x7fffffff                 ; 005087bd
    JNZ 0x005087c9                      ; 005087c3
        ;   XREF to: 005087c9 (CONDITIONAL_JUMP)  ; LAB_005087c9
    TEST ECX,ECX                        ; 005087c5
    JZ 0x0050882f                       ; 005087c7
        ;   XREF to: 0050882f (CONDITIONAL_JUMP)  ; LAB_0050882f
    FLD1                                ; 005087c9
        ;   Label: LAB_005087c9
    FDIV double ptr [EBP + -0x2c]       ; 005087cb
    FLD double ptr [EBP + -0x24]        ; 005087ce
    FMUL ST1                            ; 005087d1
    FLD double ptr [0x005e7786]         ; 005087d3 | DAT_005e7786
    FXCH                                ; 005087d9
    FMUL ST1                            ; 005087db
    FSTP double ptr [EBP + -0x24]       ; 005087dd
    FLD double ptr [EBP + -0x1c]        ; 005087e0
    FMUL ST2                            ; 005087e3
    FMUL ST1                            ; 005087e5
    FSTP double ptr [EBP + -0x1c]       ; 005087e7
    FLD double ptr [EBP + -0x14]        ; 005087ea
    FMULP ST2                           ; 005087ed
    FMULP                               ; 005087ef
    FSTP double ptr [EBP + -0x14]       ; 005087f1
    LEA EBX,[EBP + 0xffffffc8]          ; 005087f4
        ;   Label: LAB_005087f4
    FLD double ptr [EBP + 0xffffffdc]   ; 005087fa
    FISTP dword ptr [EBX]               ; 00508800
    FLD double ptr [EBP + 0xffffffe4]   ; 00508802
    FISTP dword ptr [EBX + 0x4]         ; 00508808
    FLD double ptr [EBP + 0xffffffec]   ; 0050880b
    FISTP dword ptr [EBX + 0x8]         ; 00508811
    LEA EDI,[EBP + -0x44]               ; 00508814
    LEA ESI,[EBP + -0x38]               ; 00508817
    MOVSD ES:EDI,ESI                    ; 0050881a
    MOVSD ES:EDI,ESI                    ; 0050881b
    MOVSD ES:EDI,ESI                    ; 0050881c
    MOV EDI,dword ptr [EBP + -0x4]      ; 0050881d
    LEA ESI,[EBP + -0x44]               ; 00508820
    MOVSD ES:EDI,ESI                    ; 00508823
    MOVSD ES:EDI,ESI                    ; 00508824
    MOVSD ES:EDI,ESI                    ; 00508825
    MOV EAX,dword ptr [EBP + -0x4]      ; 00508826
    MOV ESP,EBP                         ; 00508829
    POP EBP                             ; 0050882b
    POP EDI                             ; 0050882c
    POP EBX                             ; 0050882d
    RET                                 ; 0050882e
    XOR EBX,EBX                         ; 0050882f
        ;   Label: LAB_0050882f
    MOV dword ptr [EBP + -0x14],EBX     ; 00508831
    MOV dword ptr [EBP + -0x10],EBX     ; 00508834
    MOV EAX,dword ptr [EBP + -0x14]     ; 00508837
    MOV dword ptr [EBP + -0x1c],EAX     ; 0050883a
    MOV EAX,dword ptr [EBP + -0x10]     ; 0050883d
    MOV dword ptr [EBP + -0x18],EAX     ; 00508840
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00508843
    MOV dword ptr [EBP + -0x24],EAX     ; 00508846
    MOV EAX,dword ptr [EBP + -0x18]     ; 00508849
    MOV dword ptr [EBP + -0x20],EAX     ; 0050884c
    JMP 0x005087f4                      ; 0050884f
        ;   XREF to: 005087f4 (UNCONDITIONAL_JUMP)  ; LAB_005087f4

