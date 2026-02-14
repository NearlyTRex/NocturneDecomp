; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dtrace_cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20(CDemonRaytrace *this_ptr,CVector3f *offset_vector,CVector3f *start_position,CVector3f *end_position,void *light_data)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   offset_vector
; CVector3f *      Stack[0xc]:4   start_position
; CVector3f *      Stack[0x10]:4   end_position
; void *           Stack[0x14]:4   light_data
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
;   core_setcolid.cpp_CDemonSet_FUN_00574440 at 0057449a
;
; Referenced Globals:
;   double g_VoxelStepMultiplier = 2
;   double g_VoxelSampleOffset = 0.5
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499c20
        ;   Label: core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20
    PUSH ESI                            ; 00499c21
    PUSH EDI                            ; 00499c22
    PUSH EBP                            ; 00499c23
    MOV EBP,ESP                         ; 00499c24
    SUB ESP,0x88                        ; 00499c26
    AND ESP,0xfffffff8                  ; 00499c2c
    MOV EDI,dword ptr [EBP + 0x18]      ; 00499c2f
    MOV ESI,dword ptr [EBP + 0x20]      ; 00499c32
    MOV EBX,dword ptr [EBP + 0x24]      ; 00499c35
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00499c38
    PUSH EDX                            ; 00499c3b
    LEA EAX,[ESP + 0x10]                ; 00499c3c
    PUSH EAX                            ; 00499c40
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00499c41
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBX]                 ; 00499c46
    FSUB float ptr [ESI]                ; 00499c48
    ADD ESP,0x8                         ; 00499c4a
    FSTP float ptr [ESP + 0x40]         ; 00499c4d
    FLD float ptr [EBX + 0x4]           ; 00499c51
    FSUB float ptr [ESI + 0x4]          ; 00499c54
    MOV EAX,dword ptr [EBP + 0x14]      ; 00499c57
    FSTP float ptr [ESP + 0x44]         ; 00499c5a
    FLD float ptr [EBX + 0x8]           ; 00499c5e
    FSUB float ptr [ESI + 0x8]          ; 00499c61
    FLD float ptr [ESP + 0x40]          ; 00499c64
    FXCH                                ; 00499c68
    FSTP float ptr [ESP + 0x48]         ; 00499c6a
    FDIV float ptr [EAX + 0x34]         ; 00499c6e
    FLD float ptr [ESP + 0x44]          ; 00499c71
    FDIV float ptr [EAX + 0x38]         ; 00499c75
    FLD float ptr [ESP + 0x48]          ; 00499c78
    FDIV float ptr [EAX + 0x3c]         ; 00499c7c
    FXCH ST2                            ; 00499c7f
    FLD double ptr [0x00622d5a]         ; 00499c81 | g_VoxelStepMultiplier
    FXCH                                ; 00499c87
    FMUL ST1                            ; 00499c89
    FLD1                                ; 00499c8b
    FADDP                               ; 00499c8d
    CALL crt_math.c_round_FUN_005fe6b0  ; 00499c8f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x70]        ; 00499c94
    MOV EAX,dword ptr [ESP + 0x70]      ; 00499c98
    MOV dword ptr [ESP + 0x84],EAX      ; 00499c9c
    FILD dword ptr [ESP + 0x84]         ; 00499ca3
    FDIVR float ptr [ESP + 0x40]        ; 00499caa
    FXCH ST2                            ; 00499cae
    FMUL ST1                            ; 00499cb0
    FLD1                                ; 00499cb2
    FADDP                               ; 00499cb4
    CALL crt_math.c_round_FUN_005fe6b0  ; 00499cb6
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x74]        ; 00499cbb
    MOV EAX,dword ptr [ESP + 0x74]      ; 00499cbf
    MOV dword ptr [ESP + 0x84],EAX      ; 00499cc3
    FILD dword ptr [ESP + 0x84]         ; 00499cca
    FDIVR float ptr [ESP + 0x44]        ; 00499cd1
    FXCH ST3                            ; 00499cd5
    FMULP                               ; 00499cd7
    FLD1                                ; 00499cd9
    FADDP                               ; 00499cdb
    CALL crt_math.c_round_FUN_005fe6b0  ; 00499cdd
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x7c]        ; 00499ce2
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00499ce6
    MOV dword ptr [ESP + 0x84],EAX      ; 00499cea
    FILD dword ptr [ESP + 0x84]         ; 00499cf1
    FDIVR float ptr [ESP + 0x48]        ; 00499cf8
    XOR ECX,ECX                         ; 00499cfc
    MOV dword ptr [ESP + 0x78],ECX      ; 00499cfe
    MOV EBX,dword ptr [ESP + 0x70]      ; 00499d02
    FXCH                                ; 00499d06
    FSTP float ptr [ESP]                ; 00499d08
    FXCH                                ; 00499d0b
    FSTP float ptr [ESP + 0x4]          ; 00499d0d
    FSTP float ptr [ESP + 0x8]          ; 00499d11
    TEST EBX,EBX                        ; 00499d15
    JLE 0x00499e69                      ; 00499d17
        ;   XREF to: 00499e69 (CONDITIONAL_JUMP)  ; LAB_00499e69
    XOR ECX,ECX                         ; 00499d1d
        ;   Label: LAB_00499d1d
    MOV EBX,dword ptr [ESP + 0x74]      ; 00499d1f
    MOV dword ptr [ESP + 0x80],ECX      ; 00499d23
    TEST EBX,EBX                        ; 00499d2a
    JLE 0x00499e54                      ; 00499d2c
        ;   XREF to: 00499e54 (CONDITIONAL_JUMP)  ; LAB_00499e54
    MOV ECX,dword ptr [ESP + 0x7c]      ; 00499d32
        ;   Label: LAB_00499d32
    XOR EBX,EBX                         ; 00499d36
    TEST ECX,ECX                        ; 00499d38
    JLE 0x00499e39                      ; 00499d3a
        ;   XREF to: 00499e39 (CONDITIONAL_JUMP)  ; LAB_00499e39
    MOV EAX,dword ptr [ESP + 0x78]      ; 00499d40
        ;   Label: LAB_00499d40
    MOV dword ptr [ESP + 0x84],EAX      ; 00499d44
    FILD dword ptr [ESP + 0x84]         ; 00499d4b
    MOV EAX,dword ptr [ESP + 0x80]      ; 00499d52
    FLD float ptr [ESP]                 ; 00499d59
    FXCH                                ; 00499d5c
    FMUL ST1                            ; 00499d5e
    MOV dword ptr [ESP + 0x84],EAX      ; 00499d60
    FILD dword ptr [ESP + 0x84]         ; 00499d67
    FXCH                                ; 00499d6e
    FADD float ptr [ESI]                ; 00499d70
    FXCH                                ; 00499d72
    FLD float ptr [ESP + 0x4]           ; 00499d74
    FXCH                                ; 00499d78
    FMUL ST1                            ; 00499d7a
    FXCH ST3                            ; 00499d7c
    FLD double ptr [0x00622d62]         ; 00499d7e | g_VoxelSampleOffset
    FXCH                                ; 00499d84
    FMUL ST1                            ; 00499d86
    MOV dword ptr [ESP + 0x84],EBX      ; 00499d88
    FADDP ST3,ST0                       ; 00499d8f
    FILD dword ptr [ESP + 0x84]         ; 00499d91
    FXCH ST3                            ; 00499d98
    FSTP float ptr [ESP + 0x58]         ; 00499d9a
    FXCH ST3                            ; 00499d9e
    FADD float ptr [ESI + 0x4]          ; 00499da0
    FXCH ST2                            ; 00499da3
    FLD float ptr [ESP + 0x8]           ; 00499da5
    FXCH                                ; 00499da9
    FMUL ST1                            ; 00499dab
    FXCH ST2                            ; 00499dad
    FMUL ST4                            ; 00499daf
    LEA EAX,[ESP + 0x58]                ; 00499db1
    FADDP ST3,ST0                       ; 00499db5
    PUSH EAX                            ; 00499db7
    FXCH ST2                            ; 00499db8
    FSTP float ptr [ESP + 0x60]         ; 00499dba
    FADD float ptr [ESI + 0x8]          ; 00499dbe
    LEA EAX,[ESP + 0x68]                ; 00499dc1
    FXCH                                ; 00499dc5
    FMULP ST2                           ; 00499dc7
    PUSH EAX                            ; 00499dc9
    LEA EAX,[ESP + 0x14]                ; 00499dca
    FADDP                               ; 00499dce
    PUSH EAX                            ; 00499dd0
    FSTP float ptr [ESP + 0x6c]         ; 00499dd1
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00499dd5
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EAX]                 ; 00499dda
    FADD float ptr [EDI]                ; 00499ddc
    ADD ESP,0xc                         ; 00499dde
    FSTP float ptr [ESP + 0x34]         ; 00499de1
    FLD float ptr [EAX + 0x4]           ; 00499de5
    FADD float ptr [EDI + 0x4]          ; 00499de8
    LEA EDX,[ESP + 0x4c]                ; 00499deb
    FSTP float ptr [ESP + 0x38]         ; 00499def
    FLD float ptr [EAX + 0x8]           ; 00499df3
    FADD float ptr [EDI + 0x8]          ; 00499df6
    LEA EAX,[ESP + 0x34]                ; 00499df9
    FSTP float ptr [ESP + 0x3c]         ; 00499dfd
    CMP EDX,EAX                         ; 00499e01
    JZ 0x00499e1d                       ; 00499e03
        ;   XREF to: 00499e1d (CONDITIONAL_JUMP)  ; LAB_00499e1d
    MOV EAX,dword ptr [ESP + 0x34]      ; 00499e05
    MOV dword ptr [ESP + 0x4c],EAX      ; 00499e09
    MOV EAX,dword ptr [ESP + 0x38]      ; 00499e0d
    MOV dword ptr [ESP + 0x50],EAX      ; 00499e11
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00499e15
    MOV dword ptr [ESP + 0x54],EAX      ; 00499e19
    LEA EAX,[ESP + 0x4c]                ; 00499e1d
        ;   Label: LAB_00499e1d
    PUSH EAX                            ; 00499e21
    MOV EAX,dword ptr [EBP + 0x14]      ; 00499e22
    PUSH EAX                            ; 00499e25
    CALL core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160 ; 00499e26
        ;   XREF to: 0049a160 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160(CDemonRaytrace * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00499e2b
    INC EBX                             ; 00499e2e
    CMP EBX,dword ptr [ESP + 0x7c]      ; 00499e2f
    JL 0x00499d40                       ; 00499e33
        ;   XREF to: 00499d40 (CONDITIONAL_JUMP)  ; LAB_00499d40
    MOV EAX,dword ptr [ESP + 0x80]      ; 00499e39
        ;   Label: LAB_00499e39
    INC EAX                             ; 00499e40
    MOV EDX,dword ptr [ESP + 0x74]      ; 00499e41
    MOV dword ptr [ESP + 0x80],EAX      ; 00499e45
    CMP EAX,EDX                         ; 00499e4c
    JL 0x00499d32                       ; 00499e4e
        ;   XREF to: 00499d32 (CONDITIONAL_JUMP)  ; LAB_00499d32
    MOV EAX,dword ptr [ESP + 0x78]      ; 00499e54
        ;   Label: LAB_00499e54
    INC EAX                             ; 00499e58
    MOV EDX,dword ptr [ESP + 0x70]      ; 00499e59
    MOV dword ptr [ESP + 0x78],EAX      ; 00499e5d
    CMP EAX,EDX                         ; 00499e61
    JL 0x00499d1d                       ; 00499e63
        ;   XREF to: 00499d1d (CONDITIONAL_JUMP)  ; LAB_00499d1d
    MOV ESP,EBP                         ; 00499e69
        ;   Label: LAB_00499e69
    POP EBP                             ; 00499e6b
    POP EDI                             ; 00499e6c
    POP ESI                             ; 00499e6d
    POP EBX                             ; 00499e6e
    RET                                 ; 00499e6f

