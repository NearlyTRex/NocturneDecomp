; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60(CDemonRaytrace *this_ptr,SCapsuleCollision *capsule_data)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; SCapsuleCollision * Stack[0x8]:4   capsule_data
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 at 005734c6
;
; Referenced Globals:
;   CVector3f g_TempNormal0
;   undefined4 g_TempNormal0.y
;   undefined4 g_TempNormal0.z
;   CVector3f g_TempNormal1
;   undefined4 g_TempNormal1.y
;   undefined4 g_TempNormal1.z
;   CVector3f g_TempNormal2
;   undefined4 g_TempNormal2.y
;   undefined4 g_TempNormal2.z
;   CVector3f g_ZeroVector
;   undefined4 g_ZeroVector.y
;   undefined4 g_ZeroVector.z
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_testCapsuleCollision_FUN_00457a90
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496c60
        ;   Label: core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
    PUSH ESI                            ; 00496c61
    PUSH EDI                            ; 00496c62
    PUSH EBP                            ; 00496c63
    SUB ESP,0x1c                        ; 00496c64
    MOV EBP,dword ptr [ESP + 0x34]      ; 00496c67
    MOV EAX,0x15c4818                   ; 00496c6b | g_TempNormal2
    CMP EAX,0x3f87558                   ; 00496c70 | g_ZeroVector
    JNZ 0x00496e05                      ; 00496c75
        ;   XREF to: 00496e05 (CONDITIONAL_JUMP)  ; LAB_00496e05
    MOV EAX,0x15c480c                   ; 00496c7b | g_TempNormal1
        ;   Label: LAB_00496c7b
    CMP EAX,0x15c4818                   ; 00496c80 | g_TempNormal2
    JZ 0x00496ca9                       ; 00496c85
        ;   XREF to: 00496ca9 (CONDITIONAL_JUMP)  ; LAB_00496ca9
    FLD float ptr [0x015c4818]          ; 00496c87 | g_TempNormal2
    FLD float ptr [0x015c4820]          ; 00496c8d | g_TempNormal2.z
    MOV EAX,[0x015c481c]                ; 00496c93 | g_TempNormal2.y
    MOV [0x015c4810],EAX                ; 00496c98 | g_TempNormal1.y
    FSTP float ptr [0x015c4814]         ; 00496c9d | g_TempNormal1.z
    FSTP float ptr [0x015c480c]         ; 00496ca3 | g_TempNormal1
    MOV EAX,0x15c4800                   ; 00496ca9 | g_TempNormal0
        ;   Label: LAB_00496ca9
    CMP EAX,0x15c480c                   ; 00496cae | g_TempNormal1
    JZ 0x00496cd7                       ; 00496cb3
        ;   XREF to: 00496cd7 (CONDITIONAL_JUMP)  ; LAB_00496cd7
    FLD float ptr [0x015c480c]          ; 00496cb5 | g_TempNormal1
    FLD float ptr [0x015c4814]          ; 00496cbb | g_TempNormal1.z
    MOV EAX,[0x015c4810]                ; 00496cc1 | g_TempNormal1.y
    MOV [0x015c4804],EAX                ; 00496cc6 | g_TempNormal0.y
    FSTP float ptr [0x015c4808]         ; 00496ccb | g_TempNormal0.z
    FSTP float ptr [0x015c4800]         ; 00496cd1 | g_TempNormal0
    FLDZ                                ; 00496cd7
        ;   Label: LAB_00496cd7
    FCOMP float ptr [EBP + 0x18]        ; 00496cd9
    FNSTSW AX                           ; 00496cdc
    SAHF                                ; 00496cde
    JNC 0x00496e2c                      ; 00496cdf
        ;   XREF to: 00496e2c (CONDITIONAL_JUMP)  ; LAB_00496e2c
    MOV EAX,dword ptr [ESP + 0x30]      ; 00496ce5
    FLD float ptr [EBP + 0x10]          ; 00496ce9
    FSUB float ptr [EAX + 0x10]         ; 00496cec
    FSUB float ptr [EBP + 0x20]         ; 00496cef
    FLD1                                ; 00496cf2
    FDIV float ptr [EAX + 0x28]         ; 00496cf4
    FLD float ptr [EBP + 0x10]          ; 00496cf7
    FADD float ptr [EBP + 0x18]         ; 00496cfa
    FSUB float ptr [EAX + 0x10]         ; 00496cfd
        ;   Label: LAB_00496cfd
    FADD float ptr [EBP + 0x20]         ; 00496d00
    FXCH ST2                            ; 00496d03
    FMUL ST1                            ; 00496d05
    FXCH ST2                            ; 00496d07
    FMULP                               ; 00496d09
    FXCH                                ; 00496d0b
    CALL crt_math.c_round_FUN_005fe6b0  ; 00496d0d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00496d12
    CALL crt_math.c_round_FUN_005fe6b0  ; 00496d14
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 00496d19
    FISTP dword ptr [ESP + 0x4]         ; 00496d1d
    MOV EAX,dword ptr [ESP + 0x30]      ; 00496d21
    FLD float ptr [EBP + 0x28]          ; 00496d25
    FSUB float ptr [EAX + 0x14]         ; 00496d28
    FLD1                                ; 00496d2b
    FDIV float ptr [EAX + 0x2c]         ; 00496d2d
    FLD float ptr [EBP + 0x24]          ; 00496d30
    FSUB float ptr [EAX + 0x14]         ; 00496d33
    FXCH ST2                            ; 00496d36
    FMUL ST1                            ; 00496d38
    FXCH ST2                            ; 00496d3a
    FMULP                               ; 00496d3c
    FLDZ                                ; 00496d3e
    FXCH ST2                            ; 00496d40
    CALL crt_math.c_round_FUN_005fe6b0  ; 00496d42
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00496d47
    CALL crt_math.c_round_FUN_005fe6b0  ; 00496d49
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00496d4e
    FISTP dword ptr [ESP + 0xc]         ; 00496d50
    FISTP dword ptr [ESP + 0x10]        ; 00496d54
    FCOMP float ptr [EBP + 0x1c]        ; 00496d58
    FNSTSW AX                           ; 00496d5b
    SAHF                                ; 00496d5d
    JNC 0x00496e49                      ; 00496d5e
        ;   XREF to: 00496e49 (CONDITIONAL_JUMP)  ; LAB_00496e49
    MOV EAX,dword ptr [ESP + 0x30]      ; 00496d64
    FLD float ptr [EBP + 0x14]          ; 00496d68
    FSUB float ptr [EAX + 0x18]         ; 00496d6b
    FSUB float ptr [EBP + 0x20]         ; 00496d6e
    FLD1                                ; 00496d71
    FDIV float ptr [EAX + 0x30]         ; 00496d73
    FLD float ptr [EBP + 0x14]          ; 00496d76
    FADD float ptr [EBP + 0x1c]         ; 00496d79
    FSUB float ptr [EAX + 0x18]         ; 00496d7c
        ;   Label: LAB_00496d7c
    FADD float ptr [EBP + 0x20]         ; 00496d7f
    FXCH ST2                            ; 00496d82
    FMUL ST1                            ; 00496d84
    FXCH ST2                            ; 00496d86
    FMULP                               ; 00496d88
    FXCH                                ; 00496d8a
    CALL crt_math.c_round_FUN_005fe6b0  ; 00496d8c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00496d91
    CALL crt_math.c_round_FUN_005fe6b0  ; 00496d93
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x18]        ; 00496d98
    FISTP dword ptr [ESP + 0x14]        ; 00496d9c
    MOV EDX,dword ptr [ESP + 0x8]       ; 00496da0
    MOV EDI,dword ptr [ESP + 0x4]       ; 00496da4
    CMP EDI,EDX                         ; 00496da8
    JG 0x00496dfd                       ; 00496daa
        ;   XREF to: 00496dfd (CONDITIONAL_JUMP)  ; LAB_00496dfd
    MOV EBX,dword ptr [ESP + 0x10]      ; 00496dac
        ;   Label: LAB_00496dac
    MOV ESI,dword ptr [ESP + 0xc]       ; 00496db0
    CMP ESI,EBX                         ; 00496db4
    JG 0x00496df4                       ; 00496db6
        ;   XREF to: 00496df4 (CONDITIONAL_JUMP)  ; LAB_00496df4
    MOV EDX,dword ptr [ESP + 0x18]      ; 00496db8
        ;   Label: LAB_00496db8
    MOV EBX,dword ptr [ESP + 0x14]      ; 00496dbc
    CMP EBX,EDX                         ; 00496dc0
    JG 0x00496deb                       ; 00496dc2
        ;   XREF to: 00496deb (CONDITIONAL_JUMP)  ; LAB_00496deb
    PUSH EBX                            ; 00496dc4
        ;   Label: LAB_00496dc4
    PUSH ESI                            ; 00496dc5
    PUSH EDI                            ; 00496dc6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00496dc7
    PUSH EAX                            ; 00496dcb
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0 ; 00496dcc
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 00496dd1
    TEST EAX,EAX                        ; 00496dd4
    JZ 0x00496de2                       ; 00496dd6
        ;   XREF to: 00496de2 (CONDITIONAL_JUMP)  ; LAB_00496de2
    PUSH EBP                            ; 00496dd8
    PUSH EAX                            ; 00496dd9
    CALL core_dcube.cpp_CDemonCube_testCapsuleCollision_FUN_00457a90 ; 00496dda
        ;   XREF to: 00457a90 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_testCapsuleCollision_FUN_00457a90(CDemonCube * this_ptr, SIntersectXZCylinder * capsule_data)
    ADD ESP,0x8                         ; 00496ddf
    MOV ECX,dword ptr [ESP + 0x18]      ; 00496de2
        ;   Label: LAB_00496de2
    INC EBX                             ; 00496de6
    CMP EBX,ECX                         ; 00496de7
    JLE 0x00496dc4                      ; 00496de9
        ;   XREF to: 00496dc4 (CONDITIONAL_JUMP)  ; LAB_00496dc4
    MOV EAX,dword ptr [ESP + 0x10]      ; 00496deb
        ;   Label: LAB_00496deb
    INC ESI                             ; 00496def
    CMP ESI,EAX                         ; 00496df0
    JLE 0x00496db8                      ; 00496df2
        ;   XREF to: 00496db8 (CONDITIONAL_JUMP)  ; LAB_00496db8
    MOV ECX,dword ptr [ESP + 0x8]       ; 00496df4
        ;   Label: LAB_00496df4
    INC EDI                             ; 00496df8
    CMP EDI,ECX                         ; 00496df9
    JLE 0x00496dac                      ; 00496dfb
        ;   XREF to: 00496dac (CONDITIONAL_JUMP)  ; LAB_00496dac
    ADD ESP,0x1c                        ; 00496dfd
        ;   Label: LAB_00496dfd
    POP EBP                             ; 00496e00
    POP EDI                             ; 00496e01
    POP ESI                             ; 00496e02
    POP EBX                             ; 00496e03
    RET                                 ; 00496e04
    FLD float ptr [0x03f87558]          ; 00496e05 | g_ZeroVector
        ;   Label: LAB_00496e05
    FLD float ptr [0x03f87560]          ; 00496e0b | g_ZeroVector.z
    MOV EAX,[0x03f8755c]                ; 00496e11 | g_ZeroVector.y
    MOV [0x015c481c],EAX                ; 00496e16 | g_TempNormal2.y
    FSTP float ptr [0x015c4820]         ; 00496e1b | g_TempNormal2.z
    FSTP float ptr [0x015c4818]         ; 00496e21 | g_TempNormal2
    JMP 0x00496c7b                      ; 00496e27
        ;   XREF to: 00496c7b (UNCONDITIONAL_JUMP)  ; LAB_00496c7b
    FLD float ptr [EBP + 0x10]          ; 00496e2c
        ;   Label: LAB_00496e2c
    FADD float ptr [EBP + 0x18]         ; 00496e2f
    MOV EAX,dword ptr [ESP + 0x30]      ; 00496e32
    FSUB float ptr [EAX + 0x10]         ; 00496e36
    FSUB float ptr [EBP + 0x20]         ; 00496e39
    FLD1                                ; 00496e3c
    FDIV float ptr [EAX + 0x28]         ; 00496e3e
    FLD float ptr [EBP + 0x10]          ; 00496e41
    JMP 0x00496cfd                      ; 00496e44
        ;   XREF to: 00496cfd (UNCONDITIONAL_JUMP)  ; LAB_00496cfd
    FLD float ptr [EBP + 0x14]          ; 00496e49
        ;   Label: LAB_00496e49
    FADD float ptr [EBP + 0x1c]         ; 00496e4c
    MOV EAX,dword ptr [ESP + 0x30]      ; 00496e4f
    FSUB float ptr [EAX + 0x18]         ; 00496e53
    FSUB float ptr [EBP + 0x20]         ; 00496e56
    FLD1                                ; 00496e59
    FDIV float ptr [EAX + 0x30]         ; 00496e5b
    FLD float ptr [EBP + 0x14]          ; 00496e5e
    JMP 0x00496d7c                      ; 00496e61
        ;   XREF to: 00496d7c (UNCONDITIONAL_JUMP)  ; LAB_00496d7c

