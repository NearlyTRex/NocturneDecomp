; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10(CDemonRaytrace * this_ptr, CVector3f * offset_vector, void * light_data, CVector3f * start_position, CVector3f * end_position)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   offset_vector
; void *           Stack[0xc]:4   light_data
; CVector3f *      Stack[0x10]:4   start_position
; CVector3f *      Stack[0x14]:4   end_position
; Local Variables:
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined1       Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
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
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_FUN_005744d0 at 0057452a
;
; Referenced Globals:
;   double g_VoxelStepMultiplier2 = 2
;   double g_VoxelSampleOffset2 = 0.5
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499f10
        ;   Label: core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10
    PUSH ESI                            ; 00499f11
    PUSH EDI                            ; 00499f12
    PUSH EBP                            ; 00499f13
    MOV EBP,ESP                         ; 00499f14
    SUB ESP,0x88                        ; 00499f16
    AND ESP,0xfffffff8                  ; 00499f1c
    MOV EDI,dword ptr [EBP + 0x18]      ; 00499f1f
    MOV ESI,dword ptr [EBP + 0x20]      ; 00499f22
    MOV EBX,dword ptr [EBP + 0x24]      ; 00499f25
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00499f28
    PUSH EDX                            ; 00499f2b
    LEA EAX,[ESP + 0x10]                ; 00499f2c
    PUSH EAX                            ; 00499f30
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00499f31 | void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)
    FLD float ptr [EBX]                 ; 00499f36
    FSUB float ptr [ESI]                ; 00499f38
    ADD ESP,0x8                         ; 00499f3a
    FSTP float ptr [ESP + 0x40]         ; 00499f3d
    FLD float ptr [EBX + 0x4]           ; 00499f41
    FSUB float ptr [ESI + 0x4]          ; 00499f44
    MOV EAX,dword ptr [EBP + 0x14]      ; 00499f47
    FSTP float ptr [ESP + 0x44]         ; 00499f4a
    FLD float ptr [EBX + 0x8]           ; 00499f4e
    FSUB float ptr [ESI + 0x8]          ; 00499f51
    FLD float ptr [ESP + 0x40]          ; 00499f54
    FXCH                                ; 00499f58
    FSTP float ptr [ESP + 0x48]         ; 00499f5a
    FDIV float ptr [EAX + 0x34]         ; 00499f5e
    FLD float ptr [ESP + 0x44]          ; 00499f61
    FDIV float ptr [EAX + 0x38]         ; 00499f65
    FLD float ptr [ESP + 0x48]          ; 00499f68
    FDIV float ptr [EAX + 0x3c]         ; 00499f6c
    FXCH ST2                            ; 00499f6f
    FLD double ptr [0x00622d6a]         ; 00499f71 | double g_VoxelStepMultiplier2
    FXCH                                ; 00499f77
    FMUL ST1                            ; 00499f79
    FLD1                                ; 00499f7b
    FADDP                               ; 00499f7d
    CALL crt_math.c_round_FUN_005fe6b0  ; 00499f7f | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x70]        ; 00499f84
    MOV EAX,dword ptr [ESP + 0x70]      ; 00499f88
    MOV dword ptr [ESP + 0x84],EAX      ; 00499f8c
    FILD dword ptr [ESP + 0x84]         ; 00499f93
    FDIVR float ptr [ESP + 0x40]        ; 00499f9a
    FXCH ST2                            ; 00499f9e
    FMUL ST1                            ; 00499fa0
    FLD1                                ; 00499fa2
    FADDP                               ; 00499fa4
    CALL crt_math.c_round_FUN_005fe6b0  ; 00499fa6 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x74]        ; 00499fab
    MOV EAX,dword ptr [ESP + 0x74]      ; 00499faf
    MOV dword ptr [ESP + 0x84],EAX      ; 00499fb3
    FILD dword ptr [ESP + 0x84]         ; 00499fba
    FDIVR float ptr [ESP + 0x44]        ; 00499fc1
    FXCH ST3                            ; 00499fc5
    FMULP                               ; 00499fc7
    FLD1                                ; 00499fc9
    FADDP                               ; 00499fcb
    CALL crt_math.c_round_FUN_005fe6b0  ; 00499fcd | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x7c]        ; 00499fd2
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00499fd6
    MOV dword ptr [ESP + 0x84],EAX      ; 00499fda
    FILD dword ptr [ESP + 0x84]         ; 00499fe1
    FDIVR float ptr [ESP + 0x48]        ; 00499fe8
    XOR ECX,ECX                         ; 00499fec
    MOV dword ptr [ESP + 0x78],ECX      ; 00499fee
    MOV EBX,dword ptr [ESP + 0x70]      ; 00499ff2
    FXCH                                ; 00499ff6
    FSTP float ptr [ESP]                ; 00499ff8
    FXCH                                ; 00499ffb
    FSTP float ptr [ESP + 0x4]          ; 00499ffd
    FSTP float ptr [ESP + 0x8]          ; 0049a001
    TEST EBX,EBX                        ; 0049a005
    JLE 0x0049a159                      ; 0049a007 | LAB_0049a159
        ;   XREF to: 0049a159 (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 0049a00d
        ;   Label: LAB_0049a00d
    MOV EBX,dword ptr [ESP + 0x74]      ; 0049a00f
    MOV dword ptr [ESP + 0x80],ECX      ; 0049a013
    TEST EBX,EBX                        ; 0049a01a
    JLE 0x0049a144                      ; 0049a01c | LAB_0049a144
        ;   XREF to: 0049a144 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x7c]      ; 0049a022
        ;   Label: LAB_0049a022
    XOR EBX,EBX                         ; 0049a026
    TEST ECX,ECX                        ; 0049a028
    JLE 0x0049a129                      ; 0049a02a | LAB_0049a129
        ;   XREF to: 0049a129 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x78]      ; 0049a030
        ;   Label: LAB_0049a030
    MOV dword ptr [ESP + 0x84],EAX      ; 0049a034
    FILD dword ptr [ESP + 0x84]         ; 0049a03b
    MOV EAX,dword ptr [ESP + 0x80]      ; 0049a042
    FLD float ptr [ESP]                 ; 0049a049
    FXCH                                ; 0049a04c
    FMUL ST1                            ; 0049a04e
    MOV dword ptr [ESP + 0x84],EAX      ; 0049a050
    FILD dword ptr [ESP + 0x84]         ; 0049a057
    FXCH                                ; 0049a05e
    FADD float ptr [ESI]                ; 0049a060
    FXCH                                ; 0049a062
    FLD float ptr [ESP + 0x4]           ; 0049a064
    FXCH                                ; 0049a068
    FMUL ST1                            ; 0049a06a
    FXCH ST3                            ; 0049a06c
    FLD double ptr [0x00622d72]         ; 0049a06e | double g_VoxelSampleOffset2
    FXCH                                ; 0049a074
    FMUL ST1                            ; 0049a076
    MOV dword ptr [ESP + 0x84],EBX      ; 0049a078
    FADDP ST3,ST0                       ; 0049a07f
    FILD dword ptr [ESP + 0x84]         ; 0049a081
    FXCH ST3                            ; 0049a088
    FSTP float ptr [ESP + 0x58]         ; 0049a08a
    FXCH ST3                            ; 0049a08e
    FADD float ptr [ESI + 0x4]          ; 0049a090
    FXCH ST2                            ; 0049a093
    FLD float ptr [ESP + 0x8]           ; 0049a095
    FXCH                                ; 0049a099
    FMUL ST1                            ; 0049a09b
    FXCH ST2                            ; 0049a09d
    FMUL ST4                            ; 0049a09f
    LEA EAX,[ESP + 0x58]                ; 0049a0a1
    FADDP ST3,ST0                       ; 0049a0a5
    PUSH EAX                            ; 0049a0a7
    FXCH ST2                            ; 0049a0a8
    FSTP float ptr [ESP + 0x60]         ; 0049a0aa
    FADD float ptr [ESI + 0x8]          ; 0049a0ae
    LEA EAX,[ESP + 0x68]                ; 0049a0b1
    FXCH                                ; 0049a0b5
    FMULP ST2                           ; 0049a0b7
    PUSH EAX                            ; 0049a0b9
    LEA EAX,[ESP + 0x14]                ; 0049a0ba
    FADDP                               ; 0049a0be
    PUSH EAX                            ; 0049a0c0
    FSTP float ptr [ESP + 0x6c]         ; 0049a0c1
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0049a0c5 | CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
    FLD float ptr [EAX]                 ; 0049a0ca
    FADD float ptr [EDI]                ; 0049a0cc
    ADD ESP,0xc                         ; 0049a0ce
    FSTP float ptr [ESP + 0x34]         ; 0049a0d1
    FLD float ptr [EAX + 0x4]           ; 0049a0d5
    FADD float ptr [EDI + 0x4]          ; 0049a0d8
    LEA EDX,[ESP + 0x4c]                ; 0049a0db
    FSTP float ptr [ESP + 0x38]         ; 0049a0df
    FLD float ptr [EAX + 0x8]           ; 0049a0e3
    FADD float ptr [EDI + 0x8]          ; 0049a0e6
    LEA EAX,[ESP + 0x34]                ; 0049a0e9
    FSTP float ptr [ESP + 0x3c]         ; 0049a0ed
    CMP EDX,EAX                         ; 0049a0f1
    JZ 0x0049a10d                       ; 0049a0f3 | LAB_0049a10d
        ;   XREF to: 0049a10d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x34]      ; 0049a0f5
    MOV dword ptr [ESP + 0x4c],EAX      ; 0049a0f9
    MOV EAX,dword ptr [ESP + 0x38]      ; 0049a0fd
    MOV dword ptr [ESP + 0x50],EAX      ; 0049a101
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0049a105
    MOV dword ptr [ESP + 0x54],EAX      ; 0049a109
    LEA EAX,[ESP + 0x4c]                ; 0049a10d
        ;   Label: LAB_0049a10d
    PUSH EAX                            ; 0049a111
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049a112
    PUSH EAX                            ; 0049a115
    CALL core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280 ; 0049a116 | void core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280(CDemonRaytrace * this_ptr, CVector3f * world_position)
        ;   XREF to: 0049a280 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049a11b
    INC EBX                             ; 0049a11e
    CMP EBX,dword ptr [ESP + 0x7c]      ; 0049a11f
    JL 0x0049a030                       ; 0049a123 | LAB_0049a030
        ;   XREF to: 0049a030 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x80]      ; 0049a129
        ;   Label: LAB_0049a129
    INC EAX                             ; 0049a130
    MOV EDX,dword ptr [ESP + 0x74]      ; 0049a131
    MOV dword ptr [ESP + 0x80],EAX      ; 0049a135
    CMP EAX,EDX                         ; 0049a13c
    JL 0x0049a022                       ; 0049a13e | LAB_0049a022
        ;   XREF to: 0049a022 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x78]      ; 0049a144
        ;   Label: LAB_0049a144
    INC EAX                             ; 0049a148
    MOV EDX,dword ptr [ESP + 0x70]      ; 0049a149
    MOV dword ptr [ESP + 0x78],EAX      ; 0049a14d
    CMP EAX,EDX                         ; 0049a151
    JL 0x0049a00d                       ; 0049a153 | LAB_0049a00d
        ;   XREF to: 0049a00d (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 0049a159
        ;   Label: LAB_0049a159
    POP EBP                             ; 0049a15b
    POP EDI                             ; 0049a15c
    POP ESI                             ; 0049a15d
    POP EBX                             ; 0049a15e
    RET                                 ; 0049a15f

