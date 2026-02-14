; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_setcolid_cpp_intersectXZCylinder_FUN_00572e80(SIntersectXZCylinder *cylinder,float ray_x,float ray_z,void *bounds_struct)
;
; Parameters:
; SIntersectXZCylinder * Stack[0x4]:4   cylinder
; float            Stack[0x8]:4   ray_x
; float            Stack[0xc]:4   ray_z
; void *           Stack[0x10]:4   bounds_struct
; Local Variables:
; undefined8       Stack[-0xc8]:8  local_c8
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
;
; Referenced Globals:
;   double g_CylinderMinPenetrationThreshold = -0.00100000000000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572e80
        ;   Label: core_setcolid.cpp_intersectXZCylinder_FUN_00572e80
    PUSH EBP                            ; 00572e81
    MOV EBP,ESP                         ; 00572e82
    SUB ESP,0xc0                        ; 00572e84
    AND ESP,0xfffffff8                  ; 00572e8a
    MOV EDX,dword ptr [EBP + 0xc]       ; 00572e8d
    MOV ECX,dword ptr [EBP + 0x18]      ; 00572e90
    FLD float ptr [EDX + 0x24]          ; 00572e93
    FCOMP float ptr [ECX + 0x14]        ; 00572e96
    FNSTSW AX                           ; 00572e99
    SAHF                                ; 00572e9b
    JBE 0x00572f2c                      ; 00572e9c
        ;   XREF to: 00572f2c (CONDITIONAL_JUMP)  ; LAB_00572f2c
    FLD float ptr [EDX + 0x28]          ; 00572ea2
    FCOMP float ptr [ECX + 0x18]        ; 00572ea5
    FNSTSW AX                           ; 00572ea8
    SAHF                                ; 00572eaa
    JNC 0x00572f2c                      ; 00572eab
        ;   XREF to: 00572f2c (CONDITIONAL_JUMP)  ; LAB_00572f2c
    FLD float ptr [EBP + 0x10]          ; 00572eb1
    FSUB float ptr [EDX + 0x10]         ; 00572eb4
    FST double ptr [ESP + 0x78]         ; 00572eb7
    FMUL double ptr [ESP + 0x78]        ; 00572ebb
    FLD float ptr [ECX + 0x1c]          ; 00572ebf
    FLD float ptr [EBP + 0x14]          ; 00572ec2
    FSUB float ptr [EDX + 0x14]         ; 00572ec5
    FXCH                                ; 00572ec8
    FADD float ptr [EDX + 0x20]         ; 00572eca
    FXCH                                ; 00572ecd
    FST double ptr [ESP + 0x30]         ; 00572ecf
    FMUL double ptr [ESP + 0x30]        ; 00572ed3
    FXCH                                ; 00572ed7
    FST double ptr [ESP + 0x48]         ; 00572ed9
    FMUL double ptr [ESP + 0x48]        ; 00572edd
    FXCH                                ; 00572ee1
    FADDP ST2,ST0                       ; 00572ee3
    FSTP double ptr [ESP + 0x58]        ; 00572ee5
    FST double ptr [ESP + 0x20]         ; 00572ee9
    FCOMP double ptr [ESP + 0x58]       ; 00572eed
    FNSTSW AX                           ; 00572ef1
    SAHF                                ; 00572ef3
    JNC 0x00572f62                      ; 00572ef4
        ;   XREF to: 00572f62 (CONDITIONAL_JUMP)  ; LAB_00572f62
    FLD double ptr [ESP + 0x20]         ; 00572ef6
    FSQRT                               ; 00572efa
    FSUB double ptr [ESP + 0x48]        ; 00572efc
    FST double ptr [ESP + 0x70]         ; 00572f00
    FCOMP double ptr [0x0064625e]       ; 00572f04 | g_CylinderMinPenetrationThreshold
    FNSTSW AX                           ; 00572f0a
    SAHF                                ; 00572f0c
    JBE 0x00572f21                      ; 00572f0d
        ;   XREF to: 00572f21 (CONDITIONAL_JUMP)  ; LAB_00572f21
    MOV ECX,0xd2f1a9fc                  ; 00572f0f
    MOV EBX,0xbf50624d                  ; 00572f14
    MOV dword ptr [ESP + 0x70],ECX      ; 00572f19
    MOV dword ptr [ESP + 0x74],EBX      ; 00572f1d
    FLD float ptr [EDX]                 ; 00572f21
        ;   Label: LAB_00572f21
    FCOMP double ptr [ESP + 0x70]       ; 00572f23
    FNSTSW AX                           ; 00572f27
    SAHF                                ; 00572f29
    JA 0x00572f33                       ; 00572f2a
        ;   XREF to: 00572f33 (CONDITIONAL_JUMP)  ; LAB_00572f33
    XOR EAX,EAX                         ; 00572f2c
        ;   Label: LAB_00572f2c
    MOV ESP,EBP                         ; 00572f2e
    POP EBP                             ; 00572f30
    POP EBX                             ; 00572f31
    RET                                 ; 00572f32
    FLD double ptr [ESP + 0x70]         ; 00572f33
        ;   Label: LAB_00572f33
    FLD double ptr [ESP + 0x78]         ; 00572f37
    FLD double ptr [ESP + 0x30]         ; 00572f3b
    MOV EAX,0x1                         ; 00572f3f
    FXCH                                ; 00572f44
    FCHS                                ; 00572f46
    MOV dword ptr [EDX + 0x8],0x0       ; 00572f48
    FXCH                                ; 00572f4f
    FCHS                                ; 00572f51
    FXCH ST2                            ; 00572f53
    FSTP float ptr [EDX]                ; 00572f55
    FSTP float ptr [EDX + 0x4]          ; 00572f57
    FSTP float ptr [EDX + 0xc]          ; 00572f5a
    MOV ESP,EBP                         ; 00572f5d
    POP EBP                             ; 00572f5f
    POP EBX                             ; 00572f60
    RET                                 ; 00572f61
    FLD double ptr [ESP + 0x78]         ; 00572f62
        ;   Label: LAB_00572f62
    FLD float ptr [EDX + 0x34]          ; 00572f66
    FSTP double ptr [ESP + 0x38]        ; 00572f69
    FMUL double ptr [ESP + 0x38]        ; 00572f6d
    FLD float ptr [EDX + 0x38]          ; 00572f71
    FSTP double ptr [ESP + 0x68]        ; 00572f74
    FLD double ptr [ESP + 0x30]         ; 00572f78
    FMUL double ptr [ESP + 0x68]        ; 00572f7c
    FADDP                               ; 00572f80
    FLDZ                                ; 00572f82
    FXCH                                ; 00572f84
    FSTP double ptr [ESP + 0x60]        ; 00572f86
    FCOMP double ptr [ESP + 0x60]       ; 00572f8a
    FNSTSW AX                           ; 00572f8e
    SAHF                                ; 00572f90
    JNC 0x00572f2c                      ; 00572f91
        ;   XREF to: 00572f2c (CONDITIONAL_JUMP)  ; LAB_00572f2c
    FLD double ptr [ESP + 0x60]         ; 00572f93
    FLD double ptr [ESP + 0x38]         ; 00572f97
    FMUL ST1                            ; 00572f9b
    FLD double ptr [ESP + 0x68]         ; 00572f9d
    FMULP ST2                           ; 00572fa1
    FLD float ptr [EDX + 0x10]          ; 00572fa3
    FSTP double ptr [ESP + 0x10]        ; 00572fa6
    FADD double ptr [ESP + 0x10]        ; 00572faa
    FLD float ptr [EBP + 0x10]          ; 00572fae
    FXCH                                ; 00572fb1
    FSTP double ptr [ESP + 0x18]        ; 00572fb3
    FSUB double ptr [ESP + 0x18]        ; 00572fb7
    FMUL ST0                            ; 00572fbb
    FLD float ptr [EDX + 0x14]          ; 00572fbd
    FSTP double ptr [ESP + 0x8]         ; 00572fc0
    FXCH                                ; 00572fc4
    FADD double ptr [ESP + 0x8]         ; 00572fc6
    FLD float ptr [EBP + 0x14]          ; 00572fca
    FXCH                                ; 00572fcd
    FSTP double ptr [ESP]               ; 00572fcf
    FSUB double ptr [ESP]               ; 00572fd2
    FMUL ST0                            ; 00572fd5
    FADDP                               ; 00572fd7
    FST double ptr [ESP + 0x28]         ; 00572fd9
    FCOMP double ptr [ESP + 0x58]       ; 00572fdd
    FNSTSW AX                           ; 00572fe1
    SAHF                                ; 00572fe3
    JNC 0x00572f2c                      ; 00572fe4
        ;   XREF to: 00572f2c (CONDITIONAL_JUMP)  ; LAB_00572f2c
    FLD float ptr [EDX + 0x18]          ; 00572fea
    FST double ptr [ESP + 0x40]         ; 00572fed
    FABS                                ; 00572ff1
    FLD double ptr [ESP + 0x58]         ; 00572ff3
    FSUB double ptr [ESP + 0x28]        ; 00572ff7
    FSQRT                               ; 00572ffb
    FLD float ptr [EDX + 0x1c]          ; 00572ffd
    FST double ptr [ESP + 0x80]         ; 00573000
    FABS                                ; 00573007
    FLD double ptr [ESP + 0x38]         ; 00573009
    FMUL ST2                            ; 0057300d
    FLD double ptr [ESP + 0x68]         ; 0057300f
    FMULP ST3                           ; 00573013
    FLD double ptr [ESP]                ; 00573015
    FLD double ptr [ESP + 0x18]         ; 00573018
    FSUBRP ST2,ST0                      ; 0057301c
    FSUBRP ST3,ST0                      ; 0057301e
    FSTP double ptr [ESP + 0x90]        ; 00573020
    FXCH                                ; 00573027
    FSTP double ptr [ESP + 0x50]        ; 00573029
    FCOMPP                              ; 0057302d
    FNSTSW AX                           ; 0057302f
    SAHF                                ; 00573031
    JNC 0x00573083                      ; 00573032
        ;   XREF to: 00573083 (CONDITIONAL_JUMP)  ; LAB_00573083
    FLD double ptr [ESP + 0x90]         ; 00573034
    FSUB double ptr [ESP + 0x10]        ; 0057303b
    FDIV double ptr [ESP + 0x40]        ; 0057303f
    FSTP double ptr [ESP + 0x88]        ; 00573043
        ;   Label: LAB_00573043
    FLDZ                                ; 0057304a
    FCOMP double ptr [ESP + 0x88]       ; 0057304c
    FNSTSW AX                           ; 00573053
    SAHF                                ; 00573055
    JA 0x00572f2c                       ; 00573056
        ;   XREF to: 00572f2c (CONDITIONAL_JUMP)  ; LAB_00572f2c
    FLD float ptr [EDX]                 ; 0057305c
    FCOMP double ptr [ESP + 0x88]       ; 0057305e
    FNSTSW AX                           ; 00573065
    SAHF                                ; 00573067
    JBE 0x00572f2c                      ; 00573068
        ;   XREF to: 00572f2c (CONDITIONAL_JUMP)  ; LAB_00572f2c
    FLD1                                ; 0057306e
    FCOMP double ptr [ESP + 0x88]       ; 00573070
    FNSTSW AX                           ; 00573077
    SAHF                                ; 00573079
    JNC 0x00573094                      ; 0057307a
        ;   XREF to: 00573094 (CONDITIONAL_JUMP)  ; LAB_00573094
    XOR EAX,EAX                         ; 0057307c
    MOV ESP,EBP                         ; 0057307e
    POP EBP                             ; 00573080
    POP EBX                             ; 00573081
    RET                                 ; 00573082
    FLD double ptr [ESP + 0x50]         ; 00573083
        ;   Label: LAB_00573083
    FSUB double ptr [ESP + 0x8]         ; 00573087
    FDIV double ptr [ESP + 0x80]        ; 0057308b
    JMP 0x00573043                      ; 00573092
        ;   XREF to: 00573043 (UNCONDITIONAL_JUMP)  ; LAB_00573043
    FLD double ptr [ESP + 0x88]         ; 00573094
        ;   Label: LAB_00573094
    FLD float ptr [EBP + 0x10]          ; 0057309b
    FLD float ptr [EBP + 0x14]          ; 0057309e
    MOV dword ptr [EDX + 0x8],0x0       ; 005730a1
    MOV EAX,0x1                         ; 005730a8
    FXCH ST2                            ; 005730ad
    FSTP float ptr [EDX]                ; 005730af
    FSUBR double ptr [ESP + 0x90]       ; 005730b1
    FXCH                                ; 005730b8
    FSUBR double ptr [ESP + 0x50]       ; 005730ba
    FXCH                                ; 005730be
    FSTP float ptr [EDX + 0x4]          ; 005730c0
    FSTP float ptr [EDX + 0xc]          ; 005730c3
    MOV ESP,EBP                         ; 005730c6
    POP EBP                             ; 005730c8
    POP EBX                             ; 005730c9
    RET                                 ; 005730ca

