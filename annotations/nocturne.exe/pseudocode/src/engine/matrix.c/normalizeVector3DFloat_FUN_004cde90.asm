; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack_esi engine_matrix_c_normalizeVector3DFloat_FUN_004cde90(CVector3i *input_vector,CVector3i *output_vector)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   input_vector
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
; XREF[4]:
;   core_ground.cpp_CGround_getNormalAtPosition_FUN_004b2430 at 004b2531
;   core_moon.cpp_CMoon_renderJoystickCalibration_FUN_004df040 at 004df0f4
;   core_set.cpp_FUN_0050d910 at 0050db18
;   engine_light.cpp_calculatePhongLighting_FUN_004c6a70 at 004c6b8f
;
; Referenced Globals:
;   double DOUBLE_00588283 = 65535
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cde90
        ;   Label: engine_matrix.c_normalizeVector3DFloat_FUN_004cde90
    PUSH EDI                            ; 004cde91
    PUSH EBP                            ; 004cde92
    MOV EBP,ESP                         ; 004cde93
    SUB ESP,0x44                        ; 004cde95
    MOV EAX,dword ptr [EBP + 0x10]      ; 004cde98
    MOV dword ptr [EBP + -0x4],ESI      ; 004cde9b
    FILD dword ptr [EAX]                ; 004cde9e
    FSTP double ptr [EBP + -0x24]       ; 004cdea0
    FILD dword ptr [EAX + 0x4]          ; 004cdea3
    FSTP double ptr [EBP + -0x1c]       ; 004cdea6
    FILD dword ptr [EAX + 0x8]          ; 004cdea9
    FSTP double ptr [EBP + -0x14]       ; 004cdeac
    FLD double ptr [EBP + -0x24]        ; 004cdeaf
    FMUL ST0                            ; 004cdeb2
    FLD double ptr [EBP + -0x1c]        ; 004cdeb4
    FMUL ST0                            ; 004cdeb7
    FADDP                               ; 004cdeb9
    FLD double ptr [EBP + -0x14]        ; 004cdebb
    FMUL ST0                            ; 004cdebe
    FADDP                               ; 004cdec0
    FSQRT                               ; 004cdec2
    FSTP double ptr [EBP + -0x2c]       ; 004cdec4
    MOV EDX,dword ptr [EBP + -0x28]     ; 004cdec7
    MOV ECX,dword ptr [EBP + -0x2c]     ; 004cdeca
    TEST EDX,0x7fffffff                 ; 004cdecd
    JNZ 0x004cded9                      ; 004cded3
        ;   XREF to: 004cded9 (CONDITIONAL_JUMP)  ; LAB_004cded9
    TEST ECX,ECX                        ; 004cded5
    JZ 0x004cdf3f                       ; 004cded7
        ;   XREF to: 004cdf3f (CONDITIONAL_JUMP)  ; LAB_004cdf3f
    FLD1                                ; 004cded9
        ;   Label: LAB_004cded9
    FDIV double ptr [EBP + -0x2c]       ; 004cdedb
    FLD double ptr [EBP + -0x24]        ; 004cdede
    FMUL ST1                            ; 004cdee1
    FLD double ptr [0x00588283]         ; 004cdee3 | DOUBLE_00588283
    FXCH                                ; 004cdee9
    FMUL ST1                            ; 004cdeeb
    FSTP double ptr [EBP + -0x24]       ; 004cdeed
    FLD double ptr [EBP + -0x1c]        ; 004cdef0
    FMUL ST2                            ; 004cdef3
    FMUL ST1                            ; 004cdef5
    FSTP double ptr [EBP + -0x1c]       ; 004cdef7
    FLD double ptr [EBP + -0x14]        ; 004cdefa
    FMULP ST2                           ; 004cdefd
    FMULP                               ; 004cdeff
    FSTP double ptr [EBP + -0x14]       ; 004cdf01
    LEA EBX,[EBP + 0xffffffc8]          ; 004cdf04
        ;   Label: LAB_004cdf04
    FLD double ptr [EBP + 0xffffffdc]   ; 004cdf0a
    FISTP dword ptr [EBX]               ; 004cdf10
    FLD double ptr [EBP + 0xffffffe4]   ; 004cdf12
    FISTP dword ptr [EBX + 0x4]         ; 004cdf18
    FLD double ptr [EBP + 0xffffffec]   ; 004cdf1b
    FISTP dword ptr [EBX + 0x8]         ; 004cdf21
    LEA EDI,[EBP + -0x44]               ; 004cdf24
    LEA ESI,[EBP + -0x38]               ; 004cdf27
    MOVSD ES:EDI,ESI                    ; 004cdf2a
    MOVSD ES:EDI,ESI                    ; 004cdf2b
    MOVSD ES:EDI,ESI                    ; 004cdf2c
    MOV EDI,dword ptr [EBP + -0x4]      ; 004cdf2d
    LEA ESI,[EBP + -0x44]               ; 004cdf30
    MOVSD ES:EDI,ESI                    ; 004cdf33
    MOVSD ES:EDI,ESI                    ; 004cdf34
    MOVSD ES:EDI,ESI                    ; 004cdf35
    MOV EAX,dword ptr [EBP + -0x4]      ; 004cdf36
    MOV ESP,EBP                         ; 004cdf39
    POP EBP                             ; 004cdf3b
    POP EDI                             ; 004cdf3c
    POP EBX                             ; 004cdf3d
    RET                                 ; 004cdf3e
    XOR EBX,EBX                         ; 004cdf3f
        ;   Label: LAB_004cdf3f
    MOV dword ptr [EBP + -0x14],EBX     ; 004cdf41
    MOV dword ptr [EBP + -0x10],EBX     ; 004cdf44
    MOV EAX,dword ptr [EBP + -0x14]     ; 004cdf47
    MOV dword ptr [EBP + -0x1c],EAX     ; 004cdf4a
    MOV EAX,dword ptr [EBP + -0x10]     ; 004cdf4d
    MOV dword ptr [EBP + -0x18],EAX     ; 004cdf50
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004cdf53
    MOV dword ptr [EBP + -0x24],EAX     ; 004cdf56
    MOV EAX,dword ptr [EBP + -0x18]     ; 004cdf59
    MOV dword ptr [EBP + -0x20],EAX     ; 004cdf5c
    JMP 0x004cdf04                      ; 004cdf5f
        ;   XREF to: 004cdf04 (UNCONDITIONAL_JUMP)  ; LAB_004cdf04

