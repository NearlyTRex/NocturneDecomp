; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_testCylinderCollision_FUN_00473e10(CDemonRaytrace *this_ptr,SIntersectXZCylinder *cylinder)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setcolid.cpp_FUN_00537030 at 00537083
;
; Referenced Globals:
;   undefined4 DAT_01510da8
;   undefined4 DAT_01510dac
;   undefined4 DAT_01510db0
;   undefined4 DAT_01510db4
;   undefined4 DAT_01510db8
;   undefined4 DAT_01510dbc
;   undefined4 DAT_01510dc0
;   undefined4 DAT_01510dc4
;   undefined4 DAT_01510dc8
;   undefined4 DAT_0265370c
;   undefined4 DAT_02653710
;   undefined4 DAT_02653714
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_00446d20
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473e10
        ;   Label: core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00473e10
    PUSH ESI                            ; 00473e11
    PUSH EDI                            ; 00473e12
    PUSH EBP                            ; 00473e13
    SUB ESP,0x1c                        ; 00473e14
    MOV EBP,dword ptr [ESP + 0x34]      ; 00473e17
    MOV EAX,0x1510dc0                   ; 00473e1b
    CMP EAX,0x265370c                   ; 00473e20
    JNZ 0x00473fb5                      ; 00473e25
        ;   XREF to: 00473fb5 (CONDITIONAL_JUMP)  ; LAB_00473fb5
    MOV EAX,0x1510db4                   ; 00473e2b
        ;   Label: LAB_00473e2b
    CMP EAX,0x1510dc0                   ; 00473e30
    JZ 0x00473e59                       ; 00473e35
        ;   XREF to: 00473e59 (CONDITIONAL_JUMP)  ; LAB_00473e59
    FLD float ptr [0x01510dc0]          ; 00473e37 | DAT_01510dc0
    FLD float ptr [0x01510dc8]          ; 00473e3d | DAT_01510dc8
    MOV EAX,[0x01510dc4]                ; 00473e43 | DAT_01510dc4
    MOV [0x01510db8],EAX                ; 00473e48 | DAT_01510db8
    FSTP float ptr [0x01510dbc]         ; 00473e4d | DAT_01510dbc
    FSTP float ptr [0x01510db4]         ; 00473e53 | DAT_01510db4
    MOV EAX,0x1510da8                   ; 00473e59
        ;   Label: LAB_00473e59
    CMP EAX,0x1510db4                   ; 00473e5e
    JZ 0x00473e87                       ; 00473e63
        ;   XREF to: 00473e87 (CONDITIONAL_JUMP)  ; LAB_00473e87
    FLD float ptr [0x01510db4]          ; 00473e65 | DAT_01510db4
    FLD float ptr [0x01510dbc]          ; 00473e6b | DAT_01510dbc
    MOV EAX,[0x01510db8]                ; 00473e71 | DAT_01510db8
    MOV [0x01510dac],EAX                ; 00473e76 | DAT_01510dac
    FSTP float ptr [0x01510db0]         ; 00473e7b | DAT_01510db0
    FSTP float ptr [0x01510da8]         ; 00473e81 | DAT_01510da8
    FLDZ                                ; 00473e87
        ;   Label: LAB_00473e87
    FCOMP float ptr [EBP + 0x18]        ; 00473e89
    FNSTSW AX                           ; 00473e8c
    SAHF                                ; 00473e8e
    JNC 0x00473fdc                      ; 00473e8f
        ;   XREF to: 00473fdc (CONDITIONAL_JUMP)  ; LAB_00473fdc
    MOV EAX,dword ptr [ESP + 0x30]      ; 00473e95
    FLD float ptr [EBP + 0x10]          ; 00473e99
    FSUB float ptr [EAX + 0x10]         ; 00473e9c
    FSUB float ptr [EBP + 0x20]         ; 00473e9f
    FLD1                                ; 00473ea2
    FDIV float ptr [EAX + 0x28]         ; 00473ea4
    FLD float ptr [EBP + 0x10]          ; 00473ea7
    FADD float ptr [EBP + 0x18]         ; 00473eaa
    FSUB float ptr [EAX + 0x10]         ; 00473ead
        ;   Label: LAB_00473ead
    FADD float ptr [EBP + 0x20]         ; 00473eb0
    FXCH ST2                            ; 00473eb3
    FMUL ST1                            ; 00473eb5
    FXCH ST2                            ; 00473eb7
    FMULP                               ; 00473eb9
    FXCH                                ; 00473ebb
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473ebd
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00473ec2
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473ec4
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8]         ; 00473ec9
    FISTP dword ptr [ESP + 0x4]         ; 00473ecd
    MOV EAX,dword ptr [ESP + 0x30]      ; 00473ed1
    FLD float ptr [EBP + 0x28]          ; 00473ed5
    FSUB float ptr [EAX + 0x14]         ; 00473ed8
    FLD1                                ; 00473edb
    FDIV float ptr [EAX + 0x2c]         ; 00473edd
    FLD float ptr [EBP + 0x24]          ; 00473ee0
    FSUB float ptr [EAX + 0x14]         ; 00473ee3
    FXCH ST2                            ; 00473ee6
    FMUL ST1                            ; 00473ee8
    FXCH ST2                            ; 00473eea
    FMULP                               ; 00473eec
    FLDZ                                ; 00473eee
    FXCH ST2                            ; 00473ef0
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473ef2
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00473ef7
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473ef9
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00473efe
    FISTP dword ptr [ESP + 0xc]         ; 00473f00
    FISTP dword ptr [ESP + 0x10]        ; 00473f04
    FCOMP float ptr [EBP + 0x1c]        ; 00473f08
    FNSTSW AX                           ; 00473f0b
    SAHF                                ; 00473f0d
    JNC 0x00473ff9                      ; 00473f0e
        ;   XREF to: 00473ff9 (CONDITIONAL_JUMP)  ; LAB_00473ff9
    MOV EAX,dword ptr [ESP + 0x30]      ; 00473f14
    FLD float ptr [EBP + 0x14]          ; 00473f18
    FSUB float ptr [EAX + 0x18]         ; 00473f1b
    FSUB float ptr [EBP + 0x20]         ; 00473f1e
    FLD1                                ; 00473f21
    FDIV float ptr [EAX + 0x30]         ; 00473f23
    FLD float ptr [EBP + 0x14]          ; 00473f26
    FADD float ptr [EBP + 0x1c]         ; 00473f29
    FSUB float ptr [EAX + 0x18]         ; 00473f2c
        ;   Label: LAB_00473f2c
    FADD float ptr [EBP + 0x20]         ; 00473f2f
    FXCH ST2                            ; 00473f32
    FMUL ST1                            ; 00473f34
    FXCH ST2                            ; 00473f36
    FMULP                               ; 00473f38
    FXCH                                ; 00473f3a
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473f3c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00473f41
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473f43
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x18]        ; 00473f48
    FISTP dword ptr [ESP + 0x14]        ; 00473f4c
    MOV EDX,dword ptr [ESP + 0x8]       ; 00473f50
    MOV EDI,dword ptr [ESP + 0x4]       ; 00473f54
    CMP EDI,EDX                         ; 00473f58
    JG 0x00473fad                       ; 00473f5a
        ;   XREF to: 00473fad (CONDITIONAL_JUMP)  ; LAB_00473fad
    MOV EBX,dword ptr [ESP + 0x10]      ; 00473f5c
        ;   Label: LAB_00473f5c
    MOV ESI,dword ptr [ESP + 0xc]       ; 00473f60
    CMP ESI,EBX                         ; 00473f64
    JG 0x00473fa4                       ; 00473f66
        ;   XREF to: 00473fa4 (CONDITIONAL_JUMP)  ; LAB_00473fa4
    MOV EDX,dword ptr [ESP + 0x18]      ; 00473f68
        ;   Label: LAB_00473f68
    MOV EBX,dword ptr [ESP + 0x14]      ; 00473f6c
    CMP EBX,EDX                         ; 00473f70
    JG 0x00473f9b                       ; 00473f72
        ;   XREF to: 00473f9b (CONDITIONAL_JUMP)  ; LAB_00473f9b
    PUSH EBX                            ; 00473f74
        ;   Label: LAB_00473f74
    PUSH ESI                            ; 00473f75
    PUSH EDI                            ; 00473f76
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00473f77
    PUSH EAX                            ; 00473f7b
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0 ; 00473f7c
        ;   XREF to: 00472af0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 00473f81
    TEST EAX,EAX                        ; 00473f84
    JZ 0x00473f92                       ; 00473f86
        ;   XREF to: 00473f92 (CONDITIONAL_JUMP)  ; LAB_00473f92
    PUSH EBP                            ; 00473f88
    PUSH EAX                            ; 00473f89
    CALL core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_00446d20 ; 00473f8a
        ;   XREF to: 00446d20 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_00446d20(CDemonCube * this_ptr, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 00473f8f
    MOV ECX,dword ptr [ESP + 0x18]      ; 00473f92
        ;   Label: LAB_00473f92
    INC EBX                             ; 00473f96
    CMP EBX,ECX                         ; 00473f97
    JLE 0x00473f74                      ; 00473f99
        ;   XREF to: 00473f74 (CONDITIONAL_JUMP)  ; LAB_00473f74
    MOV EAX,dword ptr [ESP + 0x10]      ; 00473f9b
        ;   Label: LAB_00473f9b
    INC ESI                             ; 00473f9f
    CMP ESI,EAX                         ; 00473fa0
    JLE 0x00473f68                      ; 00473fa2
        ;   XREF to: 00473f68 (CONDITIONAL_JUMP)  ; LAB_00473f68
    MOV ECX,dword ptr [ESP + 0x8]       ; 00473fa4
        ;   Label: LAB_00473fa4
    INC EDI                             ; 00473fa8
    CMP EDI,ECX                         ; 00473fa9
    JLE 0x00473f5c                      ; 00473fab
        ;   XREF to: 00473f5c (CONDITIONAL_JUMP)  ; LAB_00473f5c
    ADD ESP,0x1c                        ; 00473fad
        ;   Label: LAB_00473fad
    POP EBP                             ; 00473fb0
    POP EDI                             ; 00473fb1
    POP ESI                             ; 00473fb2
    POP EBX                             ; 00473fb3
    RET                                 ; 00473fb4
    FLD float ptr [0x0265370c]          ; 00473fb5 | DAT_0265370c
        ;   Label: LAB_00473fb5
    FLD float ptr [0x02653714]          ; 00473fbb | DAT_02653714
    MOV EAX,[0x02653710]                ; 00473fc1 | DAT_02653710
    MOV [0x01510dc4],EAX                ; 00473fc6 | DAT_01510dc4
    FSTP float ptr [0x01510dc8]         ; 00473fcb | DAT_01510dc8
    FSTP float ptr [0x01510dc0]         ; 00473fd1 | DAT_01510dc0
    JMP 0x00473e2b                      ; 00473fd7
        ;   XREF to: 00473e2b (UNCONDITIONAL_JUMP)  ; LAB_00473e2b
    FLD float ptr [EBP + 0x10]          ; 00473fdc
        ;   Label: LAB_00473fdc
    FADD float ptr [EBP + 0x18]         ; 00473fdf
    MOV EAX,dword ptr [ESP + 0x30]      ; 00473fe2
    FSUB float ptr [EAX + 0x10]         ; 00473fe6
    FSUB float ptr [EBP + 0x20]         ; 00473fe9
    FLD1                                ; 00473fec
    FDIV float ptr [EAX + 0x28]         ; 00473fee
    FLD float ptr [EBP + 0x10]          ; 00473ff1
    JMP 0x00473ead                      ; 00473ff4
        ;   XREF to: 00473ead (UNCONDITIONAL_JUMP)  ; LAB_00473ead
    FLD float ptr [EBP + 0x14]          ; 00473ff9
        ;   Label: LAB_00473ff9
    FADD float ptr [EBP + 0x1c]         ; 00473ffc
    MOV EAX,dword ptr [ESP + 0x30]      ; 00473fff
    FSUB float ptr [EAX + 0x18]         ; 00474003
    FSUB float ptr [EBP + 0x20]         ; 00474006
    FLD1                                ; 00474009
    FDIV float ptr [EAX + 0x30]         ; 0047400b
    FLD float ptr [EBP + 0x14]          ; 0047400e
    JMP 0x00473f2c                      ; 00474011
        ;   XREF to: 00473f2c (UNCONDITIONAL_JUMP)  ; LAB_00473f2c

