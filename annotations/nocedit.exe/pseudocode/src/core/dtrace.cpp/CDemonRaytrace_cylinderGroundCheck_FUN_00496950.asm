; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   pos
; float            Stack[0xc]:4   radius
; int *            Stack[0x10]:4   hit_flag
; CVector3f *      Stack[0x14]:4   normal_out
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; CVector3f        Stack[-0x58]:12  CStack_58
; CVector3f        Stack[-0x4c]:12  local_4c
; int              Stack[-0x40]:4  local_40
; CVector3f        Stack[-0x3c]:12  local_3c
; int              Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 at 00571954
;
; Referenced Globals:
;   float FLOAT_00622b72 = 2
;   float FLOAT_00622b76 = -10
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496950
        ;   Label: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
    PUSH ESI                            ; 00496951
    PUSH EDI                            ; 00496952
    PUSH EBP                            ; 00496953
    SUB ESP,0x54                        ; 00496954
    MOV EBP,dword ptr [ESP + 0x68]      ; 00496957
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0049695b
    MOV EAX,dword ptr [ESI]             ; 0049695f
    LEA EBX,[ESI + 0x4]                 ; 00496961
    MOV dword ptr [ESP + 0x18],EAX      ; 00496964
    MOV EAX,dword ptr [EBX]             ; 00496968
    LEA EDX,[ESI + 0x8]                 ; 0049696a
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049696d
    MOV EAX,dword ptr [EDX]             ; 00496971
    MOV dword ptr [ESP + 0x20],EAX      ; 00496973
    MOV EAX,dword ptr [ESI]             ; 00496977
    MOV dword ptr [ESP],EAX             ; 00496979
    MOV EAX,dword ptr [EBX]             ; 0049697c
    FLD float ptr [ESP + 0x1c]          ; 0049697e
    MOV dword ptr [ESP + 0x4],EAX       ; 00496982
    FADD float ptr [0x00622b72]         ; 00496986 | FLOAT_00622b72
    FLD float ptr [ESP + 0x4]           ; 0049698c
    MOV EAX,dword ptr [EDX]             ; 00496990
    FXCH                                ; 00496992
    FST float ptr [ESP + 0x1c]          ; 00496994
    FXCH                                ; 00496998
    FADD float ptr [0x00622b76]         ; 0049699a | FLOAT_00622b76
    MOV dword ptr [ESP + 0x8],EAX       ; 004969a0
    FSTP float ptr [ESP + 0x4]          ; 004969a4
    FSUB float ptr [EBP + 0x14]         ; 004969a8
    FLD1                                ; 004969ab
    FDIV float ptr [EBP + 0x2c]         ; 004969ad
    FLD float ptr [ESP + 0x18]          ; 004969b0
    FSUB float ptr [EBP + 0x10]         ; 004969b4
    FST float ptr [ESP + 0x2c]          ; 004969b7
    FSUB float ptr [ESP + 0x70]         ; 004969bb
    FLD1                                ; 004969bf
    FDIV float ptr [EBP + 0x28]         ; 004969c1
    FLD float ptr [ESP + 0x20]          ; 004969c4
    FSUB float ptr [EBP + 0x18]         ; 004969c8
    FST float ptr [ESP + 0x30]          ; 004969cb
    FSUB float ptr [ESP + 0x70]         ; 004969cf
    FLD1                                ; 004969d3
    FDIV float ptr [EBP + 0x30]         ; 004969d5
    FLD float ptr [ESP + 0x4]           ; 004969d8
    FSUB float ptr [EBP + 0x14]         ; 004969dc
    FXCH ST5                            ; 004969df
    FSTP float ptr [ESP + 0x38]         ; 004969e1
    FXCH ST5                            ; 004969e5
    FMUL float ptr [ESP + 0x38]         ; 004969e7
    FXCH ST4                            ; 004969eb
    FMUL float ptr [ESP + 0x38]         ; 004969ed
    FXCH ST3                            ; 004969f1
    FMUL ST2                            ; 004969f3
    FXCH ST5                            ; 004969f5
    FSTP float ptr [ESP + 0x38]         ; 004969f7
    FMUL float ptr [ESP + 0x38]         ; 004969fb
    FLD float ptr [ESP + 0x2c]          ; 004969ff
    FADD float ptr [ESP + 0x70]         ; 00496a03
    FLD float ptr [ESP + 0x30]          ; 00496a07
    FADD float ptr [ESP + 0x70]         ; 00496a0b
    FXCH                                ; 00496a0f
    FMULP ST3                           ; 00496a11
    FMUL float ptr [ESP + 0x38]         ; 00496a13
    XOR EDI,EDI                         ; 00496a17
    MOV EDX,0xf149f2ca                  ; 00496a19
    FXCH ST4                            ; 00496a1e
    CALL crt_math.c_round_FUN_005fe6b0  ; 00496a20
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST3                            ; 00496a25
    CALL crt_math.c_round_FUN_005fe6b0  ; 00496a27
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST3                            ; 00496a2c
    FISTP dword ptr [ESP + 0x4c]        ; 00496a2e
    FXCH ST2                            ; 00496a32
    FISTP dword ptr [ESP + 0x40]        ; 00496a34
    MOV dword ptr [ESP + 0x28],EDX      ; 00496a38
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00496a3c
    MOV ECX,dword ptr [ESP + 0x40]      ; 00496a40
    FXCH ST3                            ; 00496a44
    CALL crt_math.c_round_FUN_005fe6b0  ; 00496a46
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00496a4b
    CALL crt_math.c_round_FUN_005fe6b0  ; 00496a4d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST3                            ; 00496a52
    CALL crt_math.c_round_FUN_005fe6b0  ; 00496a54
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 00496a59
    CALL crt_math.c_round_FUN_005fe6b0  ; 00496a5b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00496a60
    FISTP dword ptr [ESP + 0x24]        ; 00496a62
    FXCH ST2                            ; 00496a66
    FISTP dword ptr [ESP + 0x48]        ; 00496a68
    FISTP dword ptr [ESP + 0x44]        ; 00496a6c
    FISTP dword ptr [ESP + 0x50]        ; 00496a70
    CMP EAX,ECX                         ; 00496a74
    JL 0x00496b43                       ; 00496a76
        ;   XREF to: 00496b43 (CONDITIONAL_JUMP)  ; LAB_00496b43
    MOV EDX,dword ptr [ESP + 0x44]      ; 00496a7c
        ;   Label: LAB_00496a7c
    MOV ESI,dword ptr [ESP + 0x24]      ; 00496a80
    CMP ESI,EDX                         ; 00496a84
    JG 0x00496ae4                       ; 00496a86
        ;   XREF to: 00496ae4 (CONDITIONAL_JUMP)  ; LAB_00496ae4
    MOV EDX,dword ptr [ESP + 0x50]      ; 00496a88
        ;   Label: LAB_00496a88
    MOV EBX,dword ptr [ESP + 0x48]      ; 00496a8c
    CMP EBX,EDX                         ; 00496a90
    JG 0x00496adb                       ; 00496a92
        ;   XREF to: 00496adb (CONDITIONAL_JUMP)  ; LAB_00496adb
    PUSH EBX                            ; 00496a94
        ;   Label: LAB_00496a94
    MOV EAX,dword ptr [ESP + 0x50]      ; 00496a95
    PUSH EAX                            ; 00496a99
    PUSH ESI                            ; 00496a9a
    PUSH EBP                            ; 00496a9b
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0 ; 00496a9c
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 00496aa1
    TEST EAX,EAX                        ; 00496aa4
    JZ 0x00496ad2                       ; 00496aa6
        ;   XREF to: 00496ad2 (CONDITIONAL_JUMP)  ; LAB_00496ad2
    LEA EDX,[ESP + 0x34]                ; 00496aa8
    PUSH EDX                            ; 00496aac
    LEA EDX,[ESP + 0x10]                ; 00496aad
    PUSH EDX                            ; 00496ab1
    LEA EDX,[ESP + 0x30]                ; 00496ab2
    PUSH EDX                            ; 00496ab6
    LEA EDX,[ESP + 0x24]                ; 00496ab7
    PUSH dword ptr [ESP + 0x7c]         ; 00496abb
    PUSH EDX                            ; 00496abf
    PUSH EAX                            ; 00496ac0
    CALL core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60 ; 00496ac1
        ;   XREF to: 00457b60 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60(CDemonCube * this_ptr, CVector3f * cylinder_position, float cylinder_radius, CVector3f * output_height, ...)
    ADD ESP,0x18                        ; 00496ac6
    TEST EAX,EAX                        ; 00496ac9
    JZ 0x00496ad2                       ; 00496acb
        ;   XREF to: 00496ad2 (CONDITIONAL_JUMP)  ; LAB_00496ad2
    MOV EDI,0x1                         ; 00496acd
    MOV ECX,dword ptr [ESP + 0x50]      ; 00496ad2
        ;   Label: LAB_00496ad2
    INC EBX                             ; 00496ad6
    CMP EBX,ECX                         ; 00496ad7
    JLE 0x00496a94                      ; 00496ad9
        ;   XREF to: 00496a94 (CONDITIONAL_JUMP)  ; LAB_00496a94
    MOV ECX,dword ptr [ESP + 0x44]      ; 00496adb
        ;   Label: LAB_00496adb
    INC ESI                             ; 00496adf
    CMP ESI,ECX                         ; 00496ae0
    JLE 0x00496a88                      ; 00496ae2
        ;   XREF to: 00496a88 (CONDITIONAL_JUMP)  ; LAB_00496a88
    TEST EDI,EDI                        ; 00496ae4
        ;   Label: LAB_00496ae4
    JZ 0x00496b2e                       ; 00496ae6
        ;   XREF to: 00496b2e (CONDITIONAL_JUMP)  ; LAB_00496b2e
    MOV EBX,dword ptr [ESP + 0x78]      ; 00496ae8
    TEST EBX,EBX                        ; 00496aec
    JZ 0x00496b0c                       ; 00496aee
        ;   XREF to: 00496b0c (CONDITIONAL_JUMP)  ; LAB_00496b0c
    LEA EAX,[ESP + 0xc]                 ; 00496af0
    CMP EAX,EBX                         ; 00496af4
    JZ 0x00496b0c                       ; 00496af6
        ;   XREF to: 00496b0c (CONDITIONAL_JUMP)  ; LAB_00496b0c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00496af8
    MOV dword ptr [EBX],EAX             ; 00496afc
    MOV EAX,dword ptr [ESP + 0x10]      ; 00496afe
    MOV dword ptr [EBX + 0x4],EAX       ; 00496b02
    MOV EAX,dword ptr [ESP + 0x14]      ; 00496b05
    MOV dword ptr [EBX + 0x8],EAX       ; 00496b09
    MOV EDI,dword ptr [ESP + 0x74]      ; 00496b0c
        ;   Label: LAB_00496b0c
    TEST EDI,EDI                        ; 00496b10
    JZ 0x00496b1a                       ; 00496b12
        ;   XREF to: 00496b1a (CONDITIONAL_JUMP)  ; LAB_00496b1a
    MOV EAX,dword ptr [ESP + 0x34]      ; 00496b14
    MOV dword ptr [EDI],EAX             ; 00496b18
    MOV EAX,dword ptr [ESP + 0x28]      ; 00496b1a
        ;   Label: LAB_00496b1a
    MOV dword ptr [ESP + 0x3c],EAX      ; 00496b1e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00496b22
    ADD ESP,0x54                        ; 00496b26
    POP EBP                             ; 00496b29
    POP EDI                             ; 00496b2a
    POP ESI                             ; 00496b2b
    POP EBX                             ; 00496b2c
    RET                                 ; 00496b2d
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00496b2e
        ;   Label: LAB_00496b2e
    DEC EBX                             ; 00496b32
    MOV ESI,dword ptr [ESP + 0x40]      ; 00496b33
    MOV dword ptr [ESP + 0x4c],EBX      ; 00496b37
    CMP EBX,ESI                         ; 00496b3b
    JGE 0x00496a7c                      ; 00496b3d
        ;   XREF to: 00496a7c (CONDITIONAL_JUMP)  ; LAB_00496a7c
    MOV EDI,dword ptr [ESP + 0x74]      ; 00496b43
        ;   Label: LAB_00496b43
    TEST EDI,EDI                        ; 00496b47
    JZ 0x00496b51                       ; 00496b49
        ;   XREF to: 00496b51 (CONDITIONAL_JUMP)  ; LAB_00496b51
    MOV dword ptr [EDI],0x1             ; 00496b4b
    MOV EBP,dword ptr [ESP + 0x78]      ; 00496b51
        ;   Label: LAB_00496b51
    TEST EBP,EBP                        ; 00496b55
    JZ 0x00496b6e                       ; 00496b57
        ;   XREF to: 00496b6e (CONDITIONAL_JUMP)  ; LAB_00496b6e
    MOV dword ptr [EBP + 0x4],0x3f800000 ; 00496b59
    MOV dword ptr [EBP + 0x8],0x0       ; 00496b60
    MOV dword ptr [EBP],0x0             ; 00496b67
    MOV EAX,dword ptr [ESP + 0x4]       ; 00496b6e
        ;   Label: LAB_00496b6e
    MOV dword ptr [ESP + 0x3c],EAX      ; 00496b72
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00496b76
    ADD ESP,0x54                        ; 00496b7a
    POP EBP                             ; 00496b7d
    POP EDI                             ; 00496b7e
    POP ESI                             ; 00496b7f
    POP EBX                             ; 00496b80
    RET                                 ; 00496b81

