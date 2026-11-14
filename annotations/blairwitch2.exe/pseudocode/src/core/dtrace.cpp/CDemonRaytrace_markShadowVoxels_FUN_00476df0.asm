; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_markShadowVoxels_FUN_00476df0(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *extent,CVector3f *light_position)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   offset
; CVector3f *      Stack[0xc]:4   rotation
; CVector3f *      Stack[0x10]:4   extent
; CVector3f *      Stack[0x14]:4   light_position
; Local Variables:
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00538020 at 0053808a
;
; Referenced Globals:
;   undefined4 DAT_005d1d33
;   undefined4 DAT_005d1d3b
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_00477430
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476df0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_markShadowVoxels_FUN_00476df0
    PUSH ESI                            ; 00476df1
    PUSH EDI                            ; 00476df2
    PUSH EBP                            ; 00476df3
    MOV EBP,ESP                         ; 00476df4
    SUB ESP,0xac                        ; 00476df6
    AND ESP,0xfffffff8                  ; 00476dfc
    MOV EBX,dword ptr [EBP + 0x24]      ; 00476dff
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00476e02
    PUSH EDX                            ; 00476e05
    LEA EAX,[ESP + 0x10]                ; 00476e06
    PUSH EAX                            ; 00476e0a
    LEA EDI,[ESP + 0x6c]                ; 00476e0b
    LEA ESI,[ESP + 0x48]                ; 00476e0f
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 00476e13
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBX]                 ; 00476e18
    ADD ESP,0x8                         ; 00476e1a
    FLD float ptr [EBX + 0x4]           ; 00476e1d
    MOV EAX,dword ptr [EBP + 0x20]      ; 00476e20
    FLD float ptr [EBX + 0x8]           ; 00476e23
    FXCH ST2                            ; 00476e26
    FSUB float ptr [EAX]                ; 00476e28
    FXCH                                ; 00476e2a
    FSUB float ptr [EAX + 0x4]          ; 00476e2c
    FXCH ST2                            ; 00476e2f
    FSUB float ptr [EAX + 0x8]          ; 00476e31
    FXCH                                ; 00476e34
    FSTP float ptr [ESP + 0x40]         ; 00476e36
    FXCH                                ; 00476e3a
    FSTP float ptr [ESP + 0x44]         ; 00476e3c
    FSTP float ptr [ESP + 0x48]         ; 00476e40
    MOVSD ES:EDI,ESI                    ; 00476e44
    MOVSD ES:EDI,ESI                    ; 00476e45
    MOVSD ES:EDI,ESI                    ; 00476e46
    MOV EAX,dword ptr [EBP + 0x14]      ; 00476e47
    FLD float ptr [ESP + 0x64]          ; 00476e4a
    FDIV float ptr [EAX + 0x34]         ; 00476e4e
    FLD float ptr [ESP + 0x68]          ; 00476e51
    FDIV float ptr [EAX + 0x38]         ; 00476e55
    FLD float ptr [ESP + 0x6c]          ; 00476e58
    FDIV float ptr [EAX + 0x3c]         ; 00476e5c
    FXCH ST2                            ; 00476e5f
    FLD double ptr [0x005d1d33]         ; 00476e61 | DAT_005d1d33
    FXCH                                ; 00476e67
    FMUL ST1                            ; 00476e69
    FLD1                                ; 00476e6b
    FADDP                               ; 00476e6d
    CALL crt_math.c_round_FUN_005b7ff0  ; 00476e6f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 00476e74
    MOV EAX,dword ptr [ESP + 0x94]      ; 00476e7b
    MOV dword ptr [ESP + 0xa8],EAX      ; 00476e82
    FILD dword ptr [ESP + 0xa8]         ; 00476e89
    FDIVR float ptr [ESP + 0x64]        ; 00476e90
    FXCH ST2                            ; 00476e94
    FMUL ST1                            ; 00476e96
    FLD1                                ; 00476e98
    FADDP                               ; 00476e9a
    CALL crt_math.c_round_FUN_005b7ff0  ; 00476e9c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x98]        ; 00476ea1
    MOV EAX,dword ptr [ESP + 0x98]      ; 00476ea8
    MOV dword ptr [ESP + 0xa8],EAX      ; 00476eaf
    FILD dword ptr [ESP + 0xa8]         ; 00476eb6
    FDIVR float ptr [ESP + 0x68]        ; 00476ebd
    FXCH ST3                            ; 00476ec1
    FMULP                               ; 00476ec3
    FLD1                                ; 00476ec5
    FADDP                               ; 00476ec7
    CALL crt_math.c_round_FUN_005b7ff0  ; 00476ec9
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xa0]        ; 00476ece
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00476ed5
    MOV dword ptr [ESP + 0xa8],EAX      ; 00476edc
    FILD dword ptr [ESP + 0xa8]         ; 00476ee3
    FDIVR float ptr [ESP + 0x6c]        ; 00476eea
    XOR ECX,ECX                         ; 00476eee
    MOV dword ptr [ESP + 0x9c],ECX      ; 00476ef0
    MOV EBX,dword ptr [ESP + 0x94]      ; 00476ef7
    FXCH                                ; 00476efe
    FSTP float ptr [ESP]                ; 00476f00
    FXCH                                ; 00476f03
    FSTP float ptr [ESP + 0x4]          ; 00476f05
    FSTP float ptr [ESP + 0x8]          ; 00476f09
    TEST EBX,EBX                        ; 00476f0d
    JLE 0x004770b4                      ; 00476f0f
        ;   XREF to: 004770b4 (CONDITIONAL_JUMP)  ; LAB_004770b4
    XOR EAX,EAX                         ; 00476f15
        ;   Label: LAB_00476f15
    MOV EDX,dword ptr [ESP + 0x98]      ; 00476f17
    MOV dword ptr [ESP + 0xa4],EAX      ; 00476f1e
    TEST EDX,EDX                        ; 00476f25
    JLE 0x00477096                      ; 00476f27
        ;   XREF to: 00477096 (CONDITIONAL_JUMP)  ; LAB_00477096
    MOV ESI,dword ptr [ESP + 0xa0]      ; 00476f2d
        ;   Label: LAB_00476f2d
    XOR EBX,EBX                         ; 00476f34
    TEST ESI,ESI                        ; 00476f36
    JLE 0x00477078                      ; 00476f38
        ;   XREF to: 00477078 (CONDITIONAL_JUMP)  ; LAB_00477078
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00476f3e
        ;   Label: LAB_00476f3e
    MOV dword ptr [ESP + 0xa8],EAX      ; 00476f45
    FLD float ptr [ESP]                 ; 00476f4c
    FILD dword ptr [ESP + 0xa8]         ; 00476f4f
    FMUL ST1                            ; 00476f56
    MOV EAX,dword ptr [EBP + 0x20]      ; 00476f58
    FADD float ptr [EAX]                ; 00476f5b
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00476f5d
    MOV dword ptr [ESP + 0xa8],EAX      ; 00476f64
    FXCH                                ; 00476f6b
    FLD double ptr [0x005d1d3b]         ; 00476f6d | DAT_005d1d3b
    FXCH                                ; 00476f73
    FMUL ST1                            ; 00476f75
    FLD float ptr [ESP + 0x4]           ; 00476f77
    FILD dword ptr [ESP + 0xa8]         ; 00476f7b
    FMUL ST1                            ; 00476f82
    FXCH ST2                            ; 00476f84
    FADDP ST4,ST0                       ; 00476f86
    MOV EAX,dword ptr [EBP + 0x20]      ; 00476f88
    FXCH ST3                            ; 00476f8b
    FSTP float ptr [ESP + 0x34]         ; 00476f8d
    FADD float ptr [EAX + 0x4]          ; 00476f91
    MOV dword ptr [ESP + 0xa8],EBX      ; 00476f94
    FXCH ST2                            ; 00476f9b
    FMUL ST1                            ; 00476f9d
    FILD dword ptr [ESP + 0xa8]         ; 00476f9f
    FXCH                                ; 00476fa6
    FADDP ST3,ST0                       ; 00476fa8
    FLD float ptr [ESP + 0x8]           ; 00476faa
    FXCH                                ; 00476fae
    FMUL ST1                            ; 00476fb0
    FXCH ST3                            ; 00476fb2
    FSTP float ptr [ESP + 0x38]         ; 00476fb4
    FXCH ST2                            ; 00476fb8
    FADD float ptr [EAX + 0x8]          ; 00476fba
    FXCH ST2                            ; 00476fbd
    FMULP                               ; 00476fbf
    LEA ESI,[ESP + 0x58]                ; 00476fc1
    LEA EAX,[ESP + 0x34]                ; 00476fc5
    LEA EDI,[ESP + 0x7c]                ; 00476fc9
    PUSH EAX                            ; 00476fcd
    LEA EAX,[ESP + 0x10]                ; 00476fce
    FADDP                               ; 00476fd2
    PUSH EAX                            ; 00476fd4
    FSTP float ptr [ESP + 0x44]         ; 00476fd5
    CALL core_dirmat.cpp_FUN_00449530   ; 00476fd9
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x60]                ; 00476fde
    ADD ESP,0x8                         ; 00476fe2
    MOVSD ES:EDI,ESI                    ; 00476fe5
    MOVSD ES:EDI,ESI                    ; 00476fe6
    MOVSD ES:EDI,ESI                    ; 00476fe7
    MOV EAX,dword ptr [EBP + 0x18]      ; 00476fe8
    FLD float ptr [ESP + 0x7c]          ; 00476feb
    FLD float ptr [ESP + 0x80]          ; 00476fef
    FLD float ptr [ESP + 0x84]          ; 00476ff6
    LEA EDI,[ESP + 0x4c]                ; 00476ffd
    LEA ESI,[ESP + 0x70]                ; 00477001
    FXCH ST2                            ; 00477005
    FADD float ptr [EAX]                ; 00477007
    FXCH                                ; 00477009
    FADD float ptr [EAX + 0x4]          ; 0047700b
    FXCH ST2                            ; 0047700e
    FADD float ptr [EAX + 0x8]          ; 00477010
    FXCH                                ; 00477013
    FSTP float ptr [ESP + 0x70]         ; 00477015
    FXCH                                ; 00477019
    FSTP float ptr [ESP + 0x74]         ; 0047701b
    FSTP float ptr [ESP + 0x78]         ; 0047701f
    MOVSD ES:EDI,ESI                    ; 00477023
    MOVSD ES:EDI,ESI                    ; 00477024
    MOVSD ES:EDI,ESI                    ; 00477025
    LEA EAX,[ESP + 0x4c]                ; 00477026
    LEA ESI,[ESP + 0x88]                ; 0047702a
    CMP ESI,EAX                         ; 00477031
    JZ 0x00477056                       ; 00477033
        ;   XREF to: 00477056 (CONDITIONAL_JUMP)  ; LAB_00477056
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00477035
    MOV dword ptr [ESP + 0x88],EAX      ; 00477039
    MOV EAX,dword ptr [ESP + 0x50]      ; 00477040
    MOV dword ptr [ESP + 0x8c],EAX      ; 00477044
    MOV EAX,dword ptr [ESP + 0x54]      ; 0047704b
    MOV dword ptr [ESP + 0x90],EAX      ; 0047704f
    LEA EAX,[ESP + 0x88]                ; 00477056
        ;   Label: LAB_00477056
    PUSH EAX                            ; 0047705d
    MOV EDI,dword ptr [EBP + 0x14]      ; 0047705e
    PUSH EDI                            ; 00477061
    CALL core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_00477430 ; 00477062
        ;   XREF to: 00477430 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_00477430(CDemonRaytrace * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00477067
    INC EBX                             ; 0047706a
    CMP EBX,dword ptr [ESP + 0xa0]      ; 0047706b
    JL 0x00476f3e                       ; 00477072
        ;   XREF to: 00476f3e (CONDITIONAL_JUMP)  ; LAB_00476f3e
    MOV ECX,dword ptr [ESP + 0xa4]      ; 00477078
        ;   Label: LAB_00477078
    INC ECX                             ; 0047707f
    MOV EBX,dword ptr [ESP + 0x98]      ; 00477080
    MOV dword ptr [ESP + 0xa4],ECX      ; 00477087
    CMP ECX,EBX                         ; 0047708e
    JL 0x00476f2d                       ; 00477090
        ;   XREF to: 00476f2d (CONDITIONAL_JUMP)  ; LAB_00476f2d
    MOV ESI,dword ptr [ESP + 0x9c]      ; 00477096
        ;   Label: LAB_00477096
    INC ESI                             ; 0047709d
    MOV EDI,dword ptr [ESP + 0x94]      ; 0047709e
    MOV dword ptr [ESP + 0x9c],ESI      ; 004770a5
    CMP ESI,EDI                         ; 004770ac
    JL 0x00476f15                       ; 004770ae
        ;   XREF to: 00476f15 (CONDITIONAL_JUMP)  ; LAB_00476f15
    MOV ESP,EBP                         ; 004770b4
        ;   Label: LAB_004770b4
    POP EBP                             ; 004770b6
    POP EDI                             ; 004770b7
    POP ESI                             ; 004770b8
    POP EBX                             ; 004770b9
    RET                                 ; 004770ba

