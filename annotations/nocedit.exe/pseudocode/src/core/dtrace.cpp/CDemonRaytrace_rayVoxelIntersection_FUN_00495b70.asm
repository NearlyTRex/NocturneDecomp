; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70 (CDemonRaytrace *this_ptr,CVector3f *ray_start,CVector3f *ray_end, CVector3f *out_intersection_point,int *out_intersection_type)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_start
; CVector3f *      Stack[0xc]:4   ray_end
; CVector3f *      Stack[0x10]:4   out_intersection_point
; int *            Stack[0x14]:4   out_intersection_type
; Local Variables:
; undefined8       Stack[-0xb8]:8  local_b8
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined8       Stack[-0x78]:8  local_78
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x68]:4  local_68
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
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_box.cpp_CBox_processPhysics_FUN_0041e350 at 0041e3ef
;   core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0 at 00495abf
;   core_gore.cpp_FUN_004ed240 at 004ed317
;   core_particle.cpp_CParticle_process_FUN_00545760 at 00545862
;   core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340 at 005723b7
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 at 00572580
;   core_tvbat.cpp_CTVBat_process_FUN_005e4210 at 005e4a07
;
; Referenced Globals:
;   float g_VoxelGridSize = 2.684355E+8
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495b70
        ;   Label: core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
    PUSH ESI                            ; 00495b71
    PUSH EDI                            ; 00495b72
    PUSH EBP                            ; 00495b73
    MOV EBP,ESP                         ; 00495b74
    SUB ESP,0xa0                        ; 00495b76
    AND ESP,0xfffffff8                  ; 00495b7c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00495b7f
    MOV EBX,dword ptr [EBP + 0x20]      ; 00495b82
    MOV EAX,dword ptr [EBP + 0x18]      ; 00495b85
    FLD float ptr [EAX]                 ; 00495b88
    MOV EAX,dword ptr [EBP + 0x14]      ; 00495b8a
    FSUB float ptr [EAX + 0x10]         ; 00495b8d
    FDIV float ptr [EAX + 0x28]         ; 00495b90
    MOV EAX,dword ptr [EBP + 0x18]      ; 00495b93
    FLD float ptr [EAX + 0x4]           ; 00495b96
    MOV EAX,dword ptr [EBP + 0x14]      ; 00495b99
    FSUB float ptr [EAX + 0x14]         ; 00495b9c
    FDIV float ptr [EAX + 0x2c]         ; 00495b9f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00495ba2
    FLD float ptr [EAX + 0x8]           ; 00495ba5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00495ba8
    FSUB float ptr [EAX + 0x18]         ; 00495bab
    FDIV float ptr [EAX + 0x30]         ; 00495bae
    FXCH ST2                            ; 00495bb1
    FST float ptr [ESP + 0x8]           ; 00495bb3
    FXCH                                ; 00495bb7
    FSTP float ptr [ESP + 0xc]          ; 00495bb9
    FXCH                                ; 00495bbd
    FSTP float ptr [ESP + 0x4]          ; 00495bbf
    SUB ESP,0x8                         ; 00495bc3
    FSTP double ptr [ESP]               ; 00495bc6
    CALL crt_math.c_floor_FUN_005feb90  ; 00495bc9
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x40],EAX      ; 00495bce
    MOV dword ptr [ESP + 0x44],EDX      ; 00495bd2
    FLD double ptr [ESP + 0x40]         ; 00495bd6
    ADD ESP,0x8                         ; 00495bda
    CALL crt_math.c_round_FUN_005fe6b0  ; 00495bdd
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FLD float ptr [ESP + 0xc]           ; 00495be2
    FXCH                                ; 00495be6
    FISTP dword ptr [ESP + 0x78]        ; 00495be8
    SUB ESP,0x8                         ; 00495bec
    FSTP double ptr [ESP]               ; 00495bef
    CALL crt_math.c_floor_FUN_005feb90  ; 00495bf2
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x40],EAX      ; 00495bf7
    MOV dword ptr [ESP + 0x44],EDX      ; 00495bfb
    FLD double ptr [ESP + 0x40]         ; 00495bff
    ADD ESP,0x8                         ; 00495c03
    CALL crt_math.c_round_FUN_005fe6b0  ; 00495c06
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FLD float ptr [ESP + 0x4]           ; 00495c0b
    FXCH                                ; 00495c0f
    FISTP dword ptr [ESP + 0x74]        ; 00495c11
    SUB ESP,0x8                         ; 00495c15
    FSTP double ptr [ESP]               ; 00495c18
    CALL crt_math.c_floor_FUN_005feb90  ; 00495c1b
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x40],EAX      ; 00495c20
    MOV dword ptr [ESP + 0x44],EDX      ; 00495c24
    FLD double ptr [ESP + 0x40]         ; 00495c28
    ADD ESP,0x8                         ; 00495c2c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00495c2f
    FLD float ptr [ESI]                 ; 00495c32
    FSUB float ptr [EAX + 0x10]         ; 00495c34
    FDIV float ptr [EAX + 0x28]         ; 00495c37
    FLD float ptr [ESI + 0x4]           ; 00495c3a
    FSUB float ptr [EAX + 0x14]         ; 00495c3d
    FDIV float ptr [EAX + 0x2c]         ; 00495c40
    FLD float ptr [ESI + 0x8]           ; 00495c43
    FSUB float ptr [EAX + 0x18]         ; 00495c46
    FDIV float ptr [EAX + 0x30]         ; 00495c49
    FXCH ST3                            ; 00495c4c
    CALL crt_math.c_round_FUN_005fe6b0  ; 00495c4e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x7c]        ; 00495c53
    FXCH                                ; 00495c57
    FSTP float ptr [ESP + 0x1c]         ; 00495c59
    FSTP float ptr [ESP]                ; 00495c5d
    FSTP float ptr [ESP + 0x14]         ; 00495c60
    FLD float ptr [ESP + 0x1c]          ; 00495c64
    SUB ESP,0x8                         ; 00495c68
    FSTP double ptr [ESP]               ; 00495c6b
    CALL crt_math.c_floor_FUN_005feb90  ; 00495c6e
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x40],EAX      ; 00495c73
    MOV dword ptr [ESP + 0x44],EDX      ; 00495c77
    FLD double ptr [ESP + 0x40]         ; 00495c7b
    ADD ESP,0x8                         ; 00495c7f
    CALL crt_math.c_round_FUN_005fe6b0  ; 00495c82
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FLD float ptr [ESP]                 ; 00495c87
    FXCH                                ; 00495c8a
    FISTP dword ptr [ESP + 0x58]        ; 00495c8c
    SUB ESP,0x8                         ; 00495c90
    FSTP double ptr [ESP]               ; 00495c93
    CALL crt_math.c_floor_FUN_005feb90  ; 00495c96
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x40],EAX      ; 00495c9b
    MOV dword ptr [ESP + 0x44],EDX      ; 00495c9f
    FLD double ptr [ESP + 0x40]         ; 00495ca3
    ADD ESP,0x8                         ; 00495ca7
    CALL crt_math.c_round_FUN_005fe6b0  ; 00495caa
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FLD float ptr [ESP + 0x14]          ; 00495caf
    FXCH                                ; 00495cb3
    FISTP dword ptr [ESP + 0x50]        ; 00495cb5
    SUB ESP,0x8                         ; 00495cb9
    FSTP double ptr [ESP]               ; 00495cbc
    CALL crt_math.c_floor_FUN_005feb90  ; 00495cbf
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x40],EAX      ; 00495cc4
    MOV dword ptr [ESP + 0x44],EDX      ; 00495cc8
    FLD double ptr [ESP + 0x40]         ; 00495ccc
    ADD ESP,0x8                         ; 00495cd0
    CALL crt_math.c_round_FUN_005fe6b0  ; 00495cd3
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EDX,dword ptr [ESP + 0x78]      ; 00495cd8
    FISTP dword ptr [ESP + 0x54]        ; 00495cdc
    TEST EDX,EDX                        ; 00495ce0
    JL 0x00495ffa                       ; 00495ce2
        ;   XREF to: 00495ffa (CONDITIONAL_JUMP)  ; LAB_00495ffa
    CMP dword ptr [ESP + 0x74],0x0      ; 00495ce8
        ;   Label: LAB_00495ce8
    JL 0x00496018                       ; 00495ced
        ;   XREF to: 00496018 (CONDITIONAL_JUMP)  ; LAB_00496018
    CMP dword ptr [ESP + 0x7c],0x0      ; 00495cf3
        ;   Label: LAB_00495cf3
    JL 0x00496036                       ; 00495cf8
        ;   XREF to: 00496036 (CONDITIONAL_JUMP)  ; LAB_00496036
    MOV EDX,dword ptr [EBP + 0x14]      ; 00495cfe
        ;   Label: LAB_00495cfe
    MOV EAX,dword ptr [ESP + 0x78]      ; 00495d01
    MOV EDI,dword ptr [EDX + 0x40]      ; 00495d05
    CMP EAX,EDI                         ; 00495d08
    JL 0x00495d16                       ; 00495d0a
        ;   XREF to: 00495d16 (CONDITIONAL_JUMP)  ; LAB_00495d16
    CMP EDI,dword ptr [ESP + 0x58]      ; 00495d0c
    JLE 0x00496005                      ; 00495d10
        ;   XREF to: 00496005 (CONDITIONAL_JUMP)  ; LAB_00496005
    MOV EDX,dword ptr [EBP + 0x14]      ; 00495d16
        ;   Label: LAB_00495d16
    MOV EAX,dword ptr [ESP + 0x74]      ; 00495d19
    MOV EDI,dword ptr [EDX + 0x44]      ; 00495d1d
    CMP EAX,EDI                         ; 00495d20
    JL 0x00495d2e                       ; 00495d22
        ;   XREF to: 00495d2e (CONDITIONAL_JUMP)  ; LAB_00495d2e
    CMP EDI,dword ptr [ESP + 0x50]      ; 00495d24
    JLE 0x00496005                      ; 00495d28
        ;   XREF to: 00496005 (CONDITIONAL_JUMP)  ; LAB_00496005
    MOV EDX,dword ptr [EBP + 0x14]      ; 00495d2e
        ;   Label: LAB_00495d2e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00495d31
    MOV EDI,dword ptr [EDX + 0x48]      ; 00495d35
    CMP EAX,EDI                         ; 00495d38
    JL 0x00495d46                       ; 00495d3a
        ;   XREF to: 00495d46 (CONDITIONAL_JUMP)  ; LAB_00495d46
    CMP EDI,dword ptr [ESP + 0x54]      ; 00495d3c
    JLE 0x00496005                      ; 00495d40
        ;   XREF to: 00496005 (CONDITIONAL_JUMP)  ; LAB_00496005
    MOV EAX,dword ptr [EBP + 0x18]      ; 00495d46
        ;   Label: LAB_00495d46
    FLD float ptr [ESI]                 ; 00495d49
    FSUB float ptr [EAX]                ; 00495d4b
    FSTP float ptr [ESP + 0x20]         ; 00495d4d
    FLD float ptr [ESI + 0x4]           ; 00495d51
    FSUB float ptr [EAX + 0x4]          ; 00495d54
    MOV EDI,dword ptr [ESP + 0x58]      ; 00495d57
    FSTP float ptr [ESP + 0x24]         ; 00495d5b
    FLD float ptr [ESI + 0x8]           ; 00495d5f
    MOV ESI,0x1                         ; 00495d62
    FSUB float ptr [EAX + 0x8]          ; 00495d67
    MOV EAX,dword ptr [ESP + 0x78]      ; 00495d6a
    FSTP float ptr [ESP + 0x28]         ; 00495d6e
    CMP EAX,EDI                         ; 00495d72
    JZ 0x00496054                       ; 00495d74
        ;   XREF to: 00496054 (CONDITIONAL_JUMP)  ; LAB_00496054
    FLD float ptr [ESP + 0x24]          ; 00495d7a
        ;   Label: LAB_00495d7a
    FMUL ST0                            ; 00495d7e
    FLD float ptr [ESP + 0x20]          ; 00495d80
    FMUL ST0                            ; 00495d84
    FADDP                               ; 00495d86
    FLD float ptr [ESP + 0x28]          ; 00495d88
    FMUL ST0                            ; 00495d8c
    FADDP                               ; 00495d8e
    FSQRT                               ; 00495d90
    FST float ptr [ESP + 0x10]          ; 00495d92
    FLDZ                                ; 00495d96
    FCOMPP                              ; 00495d98
    FNSTSW AX                           ; 00495d9a
    SAHF                                ; 00495d9c
    JNC 0x00496005                      ; 00495d9d
        ;   XREF to: 00496005 (CONDITIONAL_JUMP)  ; LAB_00496005
    FLD float ptr [ESP + 0x1c]          ; 00495da3
    FSUB float ptr [ESP + 0x8]          ; 00495da7
    FABS                                ; 00495dab
    FLD float ptr [ESP]                 ; 00495dad
    FSUB float ptr [ESP + 0xc]          ; 00495db0
    FABS                                ; 00495db4
    FLD float ptr [ESP + 0x14]          ; 00495db6
    FSUB float ptr [ESP + 0x4]          ; 00495dba
    FABS                                ; 00495dbe
    FLD float ptr [0x00622b62]          ; 00495dc0 | g_VoxelGridSize
    FDIV float ptr [ESP + 0x10]         ; 00495dc6
    FXCH ST3                            ; 00495dca
    FMUL ST3                            ; 00495dcc
    FXCH ST2                            ; 00495dce
    FMUL ST3                            ; 00495dd0
    FXCH                                ; 00495dd2
    FMULP ST3                           ; 00495dd4
    FXCH                                ; 00495dd6
    CALL crt_math.c_round_FUN_005fe6b0  ; 00495dd8
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x68]        ; 00495ddd
    FLD float ptr [ESP + 0x20]          ; 00495de1
    FXCH                                ; 00495de5
    CALL crt_math.c_round_FUN_005fe6b0  ; 00495de7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x94]        ; 00495dec
    FLDZ                                ; 00495df3
    FXCH ST2                            ; 00495df5
    CALL crt_math.c_round_FUN_005fe6b0  ; 00495df7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x6c]        ; 00495dfc
    FXCH                                ; 00495e00
    FCOMPP                              ; 00495e02
    FNSTSW AX                           ; 00495e04
    SAHF                                ; 00495e06
    JA 0x00496075                       ; 00495e07
        ;   XREF to: 00496075 (CONDITIONAL_JUMP)  ; LAB_00496075
    MOV EAX,dword ptr [ESP + 0x58]      ; 00495e0d
    MOV EDI,dword ptr [ESP + 0x78]      ; 00495e11
    SUB EAX,EDI                         ; 00495e15
    MOV ECX,0x1                         ; 00495e17
    ADD ESI,EAX                         ; 00495e1c
    LEA EAX,[EDI + ECX*0x1]             ; 00495e1e
    MOV dword ptr [ESP + 0x9c],EAX      ; 00495e21
    FILD dword ptr [ESP + 0x9c]         ; 00495e28
    FSUB float ptr [ESP + 0x8]          ; 00495e2f
    MOV dword ptr [ESP + 0x90],ECX      ; 00495e33
    FSTP float ptr [ESP + 0x48]         ; 00495e3a
        ;   Label: LAB_00495e3a
    FLD float ptr [ESP + 0x24]          ; 00495e3e
    FLDZ                                ; 00495e42
    FCOMPP                              ; 00495e44
    FNSTSW AX                           ; 00495e46
    SAHF                                ; 00495e48
    JA 0x004960a6                       ; 00495e49
        ;   XREF to: 004960a6 (CONDITIONAL_JUMP)  ; LAB_004960a6
    MOV EAX,dword ptr [ESP + 0x50]      ; 00495e4f
    MOV EDI,dword ptr [ESP + 0x74]      ; 00495e53
    SUB EAX,EDI                         ; 00495e57
    MOV ECX,0x1                         ; 00495e59
    ADD ESI,EAX                         ; 00495e5e
    LEA EAX,[EDI + ECX*0x1]             ; 00495e60
    MOV dword ptr [ESP + 0x9c],EAX      ; 00495e63
    FILD dword ptr [ESP + 0x9c]         ; 00495e6a
    FSUB float ptr [ESP + 0xc]          ; 00495e71
    MOV dword ptr [ESP + 0x60],ECX      ; 00495e75
    FSTP float ptr [ESP + 0x4c]         ; 00495e79
        ;   Label: LAB_00495e79
    FLD float ptr [ESP + 0x28]          ; 00495e7d
    FLDZ                                ; 00495e81
    FCOMPP                              ; 00495e83
    FNSTSW AX                           ; 00495e85
    SAHF                                ; 00495e87
    JA 0x004960d6                       ; 00495e88
        ;   XREF to: 004960d6 (CONDITIONAL_JUMP)  ; LAB_004960d6
    MOV EAX,dword ptr [ESP + 0x54]      ; 00495e8e
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00495e92
    SUB EAX,EDI                         ; 00495e96
    MOV ECX,0x1                         ; 00495e98
    ADD ESI,EAX                         ; 00495e9d
    LEA EAX,[EDI + ECX*0x1]             ; 00495e9f
    MOV dword ptr [ESP + 0x9c],EAX      ; 00495ea2
    FILD dword ptr [ESP + 0x9c]         ; 00495ea9
    FSUB float ptr [ESP + 0x4]          ; 00495eb0
    MOV dword ptr [ESP + 0x64],ECX      ; 00495eb4
    FSTP float ptr [ESP + 0x70]         ; 00495eb8
        ;   Label: LAB_00495eb8
    MOV EAX,dword ptr [ESP + 0x94]      ; 00495ebc
    MOV dword ptr [ESP + 0x9c],EAX      ; 00495ec3
    FILD dword ptr [ESP + 0x9c]         ; 00495eca
    FLD ST0                             ; 00495ed1
    FMUL float ptr [ESP + 0x48]         ; 00495ed3
    MOV EAX,dword ptr [ESP + 0x68]      ; 00495ed7
    FXCH                                ; 00495edb
    FLD float ptr [ESP + 0x70]          ; 00495edd
    FXCH                                ; 00495ee1
    FMUL ST1                            ; 00495ee3
    MOV dword ptr [ESP + 0x9c],EAX      ; 00495ee5
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00495eec
    FILD dword ptr [ESP + 0x9c]         ; 00495ef0
    MOV dword ptr [ESP + 0x9c],EAX      ; 00495ef7
    FLD ST0                             ; 00495efe
    FMUL float ptr [ESP + 0x4c]         ; 00495f00
    FILD dword ptr [ESP + 0x9c]         ; 00495f04
    FLD ST0                             ; 00495f0b
    FMUL float ptr [ESP + 0x48]         ; 00495f0d
    FXCH                                ; 00495f11
    FMUL float ptr [ESP + 0x4c]         ; 00495f13
    FXCH ST2                            ; 00495f17
    FSUBP ST6,ST0                       ; 00495f19
    FXCH ST2                            ; 00495f1b
    FMULP ST4                           ; 00495f1d
    FXCH ST4                            ; 00495f1f
    CALL crt_math.c_round_FUN_005fe6b0  ; 00495f21
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST4                            ; 00495f26
    FSUBP ST2,ST0                       ; 00495f28
    FXCH ST3                            ; 00495f2a
    FISTP dword ptr [ESP + 0x80]        ; 00495f2c
    CALL crt_math.c_round_FUN_005fe6b0  ; 00495f33
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00495f38
    FSUBP ST2,ST0                       ; 00495f3a
    FISTP dword ptr [ESP + 0x84]        ; 00495f3c
    CALL crt_math.c_round_FUN_005fe6b0  ; 00495f43
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x88]        ; 00495f48
    MOV dword ptr [ESP + 0x18],0x3f800347 ; 00495f4f
        ;   Label: LAB_00495f4f
    MOV ECX,dword ptr [ESP + 0x7c]      ; 00495f57
        ;   Label: LAB_00495f57
    PUSH ECX                            ; 00495f5b
    MOV EDI,dword ptr [ESP + 0x78]      ; 00495f5c
    PUSH EDI                            ; 00495f60
    MOV EAX,dword ptr [ESP + 0x80]      ; 00495f61
    PUSH EAX                            ; 00495f68
    MOV EDX,dword ptr [EBP + 0x14]      ; 00495f69
    PUSH EDX                            ; 00495f6c
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0 ; 00495f6d
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 00495f72
    TEST EAX,EAX                        ; 00495f75
    JNZ 0x00496106                      ; 00495f77
        ;   XREF to: 00496106 (CONDITIONAL_JUMP)  ; LAB_00496106
    DEC ESI                             ; 00495f7d
        ;   Label: LAB_00495f7d
    TEST ESI,ESI                        ; 00495f7e
    JLE 0x004961f6                      ; 00495f80
        ;   XREF to: 004961f6 (CONDITIONAL_JUMP)  ; LAB_004961f6
    MOV ECX,dword ptr [ESP + 0x84]      ; 00495f86
    MOV EAX,dword ptr [ESP + 0x94]      ; 00495f8d
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00495f94
    MOV EDI,dword ptr [ESP + 0x64]      ; 00495f98
    ADD ECX,EAX                         ; 00495f9c
    ADD EDX,EDI                         ; 00495f9e
    MOV EAX,dword ptr [ESP + 0x88]      ; 00495fa0
    SUB EAX,dword ptr [ESP + 0x68]      ; 00495fa7
    CMP dword ptr [ESP + 0x80],0x0      ; 00495fab
    JL 0x0049619c                       ; 00495fb3
        ;   XREF to: 0049619c (CONDITIONAL_JUMP)  ; LAB_0049619c
    MOV EDI,dword ptr [ESP + 0x84]      ; 00495fb9
    TEST EDI,EDI                        ; 00495fc0
    JL 0x004961a7                       ; 00495fc2
        ;   XREF to: 004961a7 (CONDITIONAL_JUMP)  ; LAB_004961a7
    MOV EAX,dword ptr [ESP + 0x60]      ; 00495fc8
    MOV EDX,dword ptr [ESP + 0x74]      ; 00495fcc
    MOV ECX,dword ptr [ESP + 0x80]      ; 00495fd0
    ADD EDX,EAX                         ; 00495fd7
    SUB ECX,dword ptr [ESP + 0x68]      ; 00495fd9
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00495fdd
    MOV dword ptr [ESP + 0x74],EDX      ; 00495fe1
    SUB EDI,EAX                         ; 00495fe5
    MOV dword ptr [ESP + 0x80],ECX      ; 00495fe7
    MOV dword ptr [ESP + 0x84],EDI      ; 00495fee
    JMP 0x00495f57                      ; 00495ff5
        ;   XREF to: 00495f57 (UNCONDITIONAL_JUMP)  ; LAB_00495f57
    CMP dword ptr [ESP + 0x58],0x0      ; 00495ffa
        ;   Label: LAB_00495ffa
    JGE 0x00495ce8                      ; 00495fff
        ;   XREF to: 00495ce8 (CONDITIONAL_JUMP)  ; LAB_00495ce8
    MOV dword ptr [ESP + 0x5c],0xbf800000 ; 00496005
        ;   Label: LAB_00496005
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0049600d
    MOV ESP,EBP                         ; 00496011
    POP EBP                             ; 00496013
    POP EDI                             ; 00496014
    POP ESI                             ; 00496015
    POP EBX                             ; 00496016
    RET                                 ; 00496017
    CMP dword ptr [ESP + 0x50],0x0      ; 00496018
        ;   Label: LAB_00496018
    JGE 0x00495cf3                      ; 0049601d
        ;   XREF to: 00495cf3 (CONDITIONAL_JUMP)  ; LAB_00495cf3
    MOV dword ptr [ESP + 0x5c],0xbf800000 ; 00496023
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0049602b
    MOV ESP,EBP                         ; 0049602f
    POP EBP                             ; 00496031
    POP EDI                             ; 00496032
    POP ESI                             ; 00496033
    POP EBX                             ; 00496034
    RET                                 ; 00496035
    CMP dword ptr [ESP + 0x54],0x0      ; 00496036
        ;   Label: LAB_00496036
    JGE 0x00495cfe                      ; 0049603b
        ;   XREF to: 00495cfe (CONDITIONAL_JUMP)  ; LAB_00495cfe
    MOV dword ptr [ESP + 0x5c],0xbf800000 ; 00496041
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00496049
    MOV ESP,EBP                         ; 0049604d
    POP EBP                             ; 0049604f
    POP EDI                             ; 00496050
    POP ESI                             ; 00496051
    POP EBX                             ; 00496052
    RET                                 ; 00496053
    MOV EAX,dword ptr [ESP + 0x74]      ; 00496054
        ;   Label: LAB_00496054
    CMP EAX,dword ptr [ESP + 0x50]      ; 00496058
    JNZ 0x00495d7a                      ; 0049605c
        ;   XREF to: 00495d7a (CONDITIONAL_JUMP)  ; LAB_00495d7a
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00496062
    CMP EAX,dword ptr [ESP + 0x54]      ; 00496066
    JNZ 0x00495d7a                      ; 0049606a
        ;   XREF to: 00495d7a (CONDITIONAL_JUMP)  ; LAB_00495d7a
    JMP 0x00495f4f                      ; 00496070
        ;   XREF to: 00495f4f (UNCONDITIONAL_JUMP)  ; LAB_00495f4f
    MOV EAX,dword ptr [ESP + 0x78]      ; 00496075
        ;   Label: LAB_00496075
    SUB EAX,dword ptr [ESP + 0x58]      ; 00496079
    ADD ESI,EAX                         ; 0049607d
    MOV EAX,dword ptr [ESP + 0x78]      ; 0049607f
    MOV dword ptr [ESP + 0x9c],EAX      ; 00496083
    MOV EDI,0xffffffff                  ; 0049608a
    FILD dword ptr [ESP + 0x9c]         ; 0049608f
    FSUBR float ptr [ESP + 0x8]         ; 00496096
    MOV dword ptr [ESP + 0x90],EDI      ; 0049609a
    JMP 0x00495e3a                      ; 004960a1
        ;   XREF to: 00495e3a (UNCONDITIONAL_JUMP)  ; LAB_00495e3a
    MOV EAX,0xffffffff                  ; 004960a6
        ;   Label: LAB_004960a6
    MOV EDX,dword ptr [ESP + 0x50]      ; 004960ab
    MOV dword ptr [ESP + 0x60],EAX      ; 004960af
    MOV EAX,dword ptr [ESP + 0x74]      ; 004960b3
    SUB EAX,EDX                         ; 004960b7
    ADD ESI,EAX                         ; 004960b9
    MOV EAX,dword ptr [ESP + 0x74]      ; 004960bb
    MOV dword ptr [ESP + 0x9c],EAX      ; 004960bf
    FILD dword ptr [ESP + 0x9c]         ; 004960c6
    FSUBR float ptr [ESP + 0xc]         ; 004960cd
    JMP 0x00495e79                      ; 004960d1
        ;   XREF to: 00495e79 (UNCONDITIONAL_JUMP)  ; LAB_00495e79
    MOV EAX,0xffffffff                  ; 004960d6
        ;   Label: LAB_004960d6
    MOV EDX,dword ptr [ESP + 0x54]      ; 004960db
    MOV dword ptr [ESP + 0x64],EAX      ; 004960df
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004960e3
    SUB EAX,EDX                         ; 004960e7
    ADD ESI,EAX                         ; 004960e9
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004960eb
    MOV dword ptr [ESP + 0x9c],EAX      ; 004960ef
    FILD dword ptr [ESP + 0x9c]         ; 004960f6
    FSUBR float ptr [ESP + 0x4]         ; 004960fd
    JMP 0x00495eb8                      ; 00496101
        ;   XREF to: 00495eb8 (UNCONDITIONAL_JUMP)  ; LAB_00495eb8
    LEA EDX,[ESP + 0x40]                ; 00496106
        ;   Label: LAB_00496106
    PUSH EDX                            ; 0049610a
    LEA EDX,[ESP + 0x30]                ; 0049610b
    PUSH EDX                            ; 0049610f
    LEA EDX,[ESP + 0x28]                ; 00496110
    PUSH EDX                            ; 00496114
    MOV ECX,dword ptr [EBP + 0x18]      ; 00496115
    PUSH ECX                            ; 00496118
    PUSH EAX                            ; 00496119
    CALL core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0 ; 0049611a
        ;   XREF to: 004578f0 (UNCONDITIONAL_CALL)  ; float core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0(CDemonCube * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * hit_normal, ...)
    MOV dword ptr [ESP + 0xb0],EAX      ; 0049611f
    FLD float ptr [ESP + 0xb0]          ; 00496126
    ADD ESP,0x14                        ; 0049612d
    FST float ptr [ESP + 0x98]          ; 00496130
    FCOMP float ptr [ESP + 0x18]        ; 00496137
    FNSTSW AX                           ; 0049613b
    SAHF                                ; 0049613d
    JNC 0x00496178                      ; 0049613e
        ;   XREF to: 00496178 (CONDITIONAL_JUMP)  ; LAB_00496178
    TEST EBX,EBX                        ; 00496140
    JZ 0x00496160                       ; 00496142
        ;   XREF to: 00496160 (CONDITIONAL_JUMP)  ; LAB_00496160
    LEA EAX,[ESP + 0x2c]                ; 00496144
    CMP EBX,EAX                         ; 00496148
    JZ 0x00496160                       ; 0049614a
        ;   XREF to: 00496160 (CONDITIONAL_JUMP)  ; LAB_00496160
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049614c
    MOV dword ptr [EBX],EAX             ; 00496150
    MOV EAX,dword ptr [ESP + 0x30]      ; 00496152
    MOV dword ptr [EBX + 0x4],EAX       ; 00496156
    MOV EAX,dword ptr [ESP + 0x34]      ; 00496159
    MOV dword ptr [EBX + 0x8],EAX       ; 0049615d
    MOV EDI,dword ptr [EBP + 0x24]      ; 00496160
        ;   Label: LAB_00496160
    TEST EDI,EDI                        ; 00496163
    JZ 0x0049616d                       ; 00496165
        ;   XREF to: 0049616d (CONDITIONAL_JUMP)  ; LAB_0049616d
    MOV EAX,dword ptr [ESP + 0x40]      ; 00496167
    MOV dword ptr [EDI],EAX             ; 0049616b
    MOV EAX,dword ptr [ESP + 0x98]      ; 0049616d
        ;   Label: LAB_0049616d
    MOV dword ptr [ESP + 0x18],EAX      ; 00496174
    FLD float ptr [ESP + 0x18]          ; 00496178
        ;   Label: LAB_00496178
    FLD1                                ; 0049617c
    FCOMPP                              ; 0049617e
    FNSTSW AX                           ; 00496180
    SAHF                                ; 00496182
    JC 0x00495f7d                       ; 00496183
        ;   XREF to: 00495f7d (CONDITIONAL_JUMP)  ; LAB_00495f7d
    MOV EAX,dword ptr [ESP + 0x18]      ; 00496189
    MOV dword ptr [ESP + 0x5c],EAX      ; 0049618d
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00496191
    MOV ESP,EBP                         ; 00496195
    POP EBP                             ; 00496197
    POP EDI                             ; 00496198
    POP ESI                             ; 00496199
    POP EBX                             ; 0049619a
    RET                                 ; 0049619b
    MOV EDI,dword ptr [ESP + 0x88]      ; 0049619c
        ;   Label: LAB_0049619c
    TEST EDI,EDI                        ; 004961a3
    JL 0x004961be                       ; 004961a5
        ;   XREF to: 004961be (CONDITIONAL_JUMP)  ; LAB_004961be
    MOV dword ptr [ESP + 0x88],EAX      ; 004961a7
        ;   Label: LAB_004961a7
    MOV dword ptr [ESP + 0x84],ECX      ; 004961ae
    MOV dword ptr [ESP + 0x7c],EDX      ; 004961b5
    JMP 0x00495f57                      ; 004961b9
        ;   XREF to: 00495f57 (UNCONDITIONAL_JUMP)  ; LAB_00495f57
    MOV EAX,dword ptr [ESP + 0x90]      ; 004961be
        ;   Label: LAB_004961be
    MOV EDX,dword ptr [ESP + 0x78]      ; 004961c5
    MOV ECX,dword ptr [ESP + 0x80]      ; 004961c9
    ADD EDX,EAX                         ; 004961d0
    ADD ECX,dword ptr [ESP + 0x94]      ; 004961d2
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004961d9
    MOV dword ptr [ESP + 0x78],EDX      ; 004961dd
    ADD EDI,EAX                         ; 004961e1
    MOV dword ptr [ESP + 0x80],ECX      ; 004961e3
    MOV dword ptr [ESP + 0x88],EDI      ; 004961ea
    JMP 0x00495f57                      ; 004961f1
        ;   XREF to: 00495f57 (UNCONDITIONAL_JUMP)  ; LAB_00495f57
    MOV EAX,dword ptr [EBP + 0x24]      ; 004961f6
        ;   Label: LAB_004961f6
    TEST EAX,EAX                        ; 004961f9
    JZ 0x00496005                       ; 004961fb
        ;   XREF to: 00496005 (CONDITIONAL_JUMP)  ; LAB_00496005
    MOV dword ptr [EAX],0x1             ; 00496201
    MOV dword ptr [ESP + 0x5c],0xbf800000 ; 00496207
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0049620f
    MOV ESP,EBP                         ; 00496213
    POP EBP                             ; 00496215
    POP EDI                             ; 00496216
    POP ESI                             ; 00496217
    POP EBX                             ; 00496218
    RET                                 ; 00496219

