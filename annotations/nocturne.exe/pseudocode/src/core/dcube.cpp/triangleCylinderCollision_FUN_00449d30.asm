; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_dcube_cpp_triangleCylinderCollision_FUN_00449d30(int *param_1,float *param_2,float param_3,float *param_4)
;
; Local Variables:
; undefined8       Stack[-0x88]:8  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_0044b500 at 0044b52f
;
; Referenced Globals:
;   undefined4 DAT_0057bbab
;   undefined4 DAT_0057bbb3
;   undefined4 DAT_014b846c
;   undefined4 DAT_014b8470
;   undefined4 DAT_014b8474
;   undefined4 DAT_014b8478
;
; Called Functions:
;   core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150
;   core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00449bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449d30
        ;   Label: core_dcube.cpp_triangleCylinderCollision_FUN_00449d30
    PUSH ESI                            ; 00449d31
    PUSH EDI                            ; 00449d32
    PUSH EBP                            ; 00449d33
    MOV EBP,ESP                         ; 00449d34
    SUB ESP,0x78                        ; 00449d36
    AND ESP,0xfffffff8                  ; 00449d39
    MOV EBX,dword ptr [EBP + 0x14]      ; 00449d3c
    MOV ESI,dword ptr [EBP + 0x18]      ; 00449d3f
    FLD float ptr [EBX + 0x10]          ; 00449d42
    FCOMP double ptr [0x0057bbab]       ; 00449d45 | DAT_0057bbab
    FNSTSW AX                           ; 00449d4b
    SAHF                                ; 00449d4d
    JA 0x00449faa                       ; 00449d4e
        ;   XREF to: 00449faa (CONDITIONAL_JUMP)  ; LAB_00449faa
    MOV EAX,dword ptr [EBX]             ; 00449d54
    FLD float ptr [EAX]                 ; 00449d56
    FSUB float ptr [ESI]                ; 00449d58
    FSTP float ptr [ESP + 0x30]         ; 00449d5a
    MOV EAX,dword ptr [EBX]             ; 00449d5e
    MOV EAX,dword ptr [EAX + 0x4]       ; 00449d60
    MOV dword ptr [ESP + 0x34],EAX      ; 00449d63
    MOV EAX,dword ptr [EBX]             ; 00449d67
    FLD float ptr [EAX + 0x8]           ; 00449d69
    FSUB float ptr [ESI + 0x8]          ; 00449d6c
    FSTP float ptr [ESP + 0x38]         ; 00449d6f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00449d73
    FLD float ptr [EAX]                 ; 00449d76
    FSUB float ptr [ESI]                ; 00449d78
    FSTP float ptr [ESP + 0x3c]         ; 00449d7a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00449d7e
    MOV EAX,dword ptr [EAX + 0x4]       ; 00449d81
    MOV dword ptr [ESP + 0x40],EAX      ; 00449d84
    MOV EAX,dword ptr [EBX + 0x4]       ; 00449d88
    FLD float ptr [EAX + 0x8]           ; 00449d8b
    FSUB float ptr [ESI + 0x8]          ; 00449d8e
    FSTP float ptr [ESP + 0x44]         ; 00449d91
    MOV EAX,dword ptr [EBX + 0x8]       ; 00449d95
    FLD float ptr [EAX]                 ; 00449d98
    FSUB float ptr [ESI]                ; 00449d9a
    FSTP float ptr [ESP + 0x48]         ; 00449d9c
    MOV EAX,dword ptr [EBX + 0x8]       ; 00449da0
    MOV EAX,dword ptr [EAX + 0x4]       ; 00449da3
    MOV dword ptr [ESP + 0x4c],EAX      ; 00449da6
    MOV EAX,dword ptr [EBX + 0x8]       ; 00449daa
    FLD float ptr [EAX + 0x8]           ; 00449dad
    FSUB float ptr [ESI + 0x8]          ; 00449db0
    FLD float ptr [ESP + 0x34]          ; 00449db3
    FXCH                                ; 00449db7
    FSTP float ptr [ESP + 0x50]         ; 00449db9
    FCOMP float ptr [ESP + 0x40]        ; 00449dbd
    FNSTSW AX                           ; 00449dc1
    SAHF                                ; 00449dc3
    JC 0x00449fb3                       ; 00449dc4
        ;   XREF to: 00449fb3 (CONDITIONAL_JUMP)  ; LAB_00449fb3
    FLD float ptr [ESP + 0x40]          ; 00449dca
        ;   Label: LAB_00449dca
    FCOMP float ptr [ESP + 0x4c]        ; 00449dce
    FNSTSW AX                           ; 00449dd2
    SAHF                                ; 00449dd4
    JNC 0x00449e37                      ; 00449dd5
        ;   XREF to: 00449e37 (CONDITIONAL_JUMP)  ; LAB_00449e37
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00449dd7
    MOV dword ptr [ESP + 0xc],EAX       ; 00449ddb
    MOV EAX,dword ptr [ESP + 0x40]      ; 00449ddf
    MOV dword ptr [ESP + 0x10],EAX      ; 00449de3
    MOV EAX,dword ptr [ESP + 0x44]      ; 00449de7
    LEA EDI,[ESP + 0x3c]                ; 00449deb
    MOV dword ptr [ESP + 0x14],EAX      ; 00449def
    LEA EAX,[ESP + 0x48]                ; 00449df3
    CMP EDI,EAX                         ; 00449df7
    JZ 0x00449e13                       ; 00449df9
        ;   XREF to: 00449e13 (CONDITIONAL_JUMP)  ; LAB_00449e13
    MOV EAX,dword ptr [ESP + 0x48]      ; 00449dfb
    MOV dword ptr [ESP + 0x3c],EAX      ; 00449dff
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00449e03
    MOV dword ptr [ESP + 0x40],EAX      ; 00449e07
    MOV EAX,dword ptr [ESP + 0x50]      ; 00449e0b
    MOV dword ptr [ESP + 0x44],EAX      ; 00449e0f
    LEA EAX,[ESP + 0x48]                ; 00449e13
        ;   Label: LAB_00449e13
    LEA EDI,[ESP + 0xc]                 ; 00449e17
    CMP EAX,EDI                         ; 00449e1b
    JZ 0x00449e37                       ; 00449e1d
        ;   XREF to: 00449e37 (CONDITIONAL_JUMP)  ; LAB_00449e37
    MOV EAX,dword ptr [ESP + 0xc]       ; 00449e1f
    MOV dword ptr [ESP + 0x48],EAX      ; 00449e23
    MOV EAX,dword ptr [ESP + 0x10]      ; 00449e27
    MOV dword ptr [ESP + 0x4c],EAX      ; 00449e2b
    MOV EAX,dword ptr [ESP + 0x14]      ; 00449e2f
    MOV dword ptr [ESP + 0x50],EAX      ; 00449e33
    FLD float ptr [ESP + 0x4c]          ; 00449e37
        ;   Label: LAB_00449e37
    FCOMP float ptr [ESI + 0x4]         ; 00449e3b
    FNSTSW AX                           ; 00449e3e
    SAHF                                ; 00449e40
    JA 0x00449faa                       ; 00449e41
        ;   XREF to: 00449faa (CONDITIONAL_JUMP)  ; LAB_00449faa
    FLD float ptr [ESP + 0x34]          ; 00449e47
    FCOMP float ptr [ESP + 0x40]        ; 00449e4b
    FNSTSW AX                           ; 00449e4f
    SAHF                                ; 00449e51
    JNC 0x00449eb4                      ; 00449e52
        ;   XREF to: 00449eb4 (CONDITIONAL_JUMP)  ; LAB_00449eb4
    MOV EAX,dword ptr [ESP + 0x30]      ; 00449e54
    MOV dword ptr [ESP + 0x24],EAX      ; 00449e58
    MOV EAX,dword ptr [ESP + 0x34]      ; 00449e5c
    MOV dword ptr [ESP + 0x28],EAX      ; 00449e60
    MOV EAX,dword ptr [ESP + 0x38]      ; 00449e64
    LEA EDI,[ESP + 0x30]                ; 00449e68
    MOV dword ptr [ESP + 0x2c],EAX      ; 00449e6c
    LEA EAX,[ESP + 0x3c]                ; 00449e70
    CMP EDI,EAX                         ; 00449e74
    JZ 0x00449e90                       ; 00449e76
        ;   XREF to: 00449e90 (CONDITIONAL_JUMP)  ; LAB_00449e90
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00449e78
    MOV dword ptr [ESP + 0x30],EAX      ; 00449e7c
    MOV EAX,dword ptr [ESP + 0x40]      ; 00449e80
    MOV dword ptr [ESP + 0x34],EAX      ; 00449e84
    MOV EAX,dword ptr [ESP + 0x44]      ; 00449e88
    MOV dword ptr [ESP + 0x38],EAX      ; 00449e8c
    LEA EDI,[ESP + 0x3c]                ; 00449e90
        ;   Label: LAB_00449e90
    LEA EAX,[ESP + 0x24]                ; 00449e94
    CMP EDI,EAX                         ; 00449e98
    JZ 0x00449eb4                       ; 00449e9a
        ;   XREF to: 00449eb4 (CONDITIONAL_JUMP)  ; LAB_00449eb4
    MOV EAX,dword ptr [ESP + 0x24]      ; 00449e9c
    MOV dword ptr [ESP + 0x3c],EAX      ; 00449ea0
    MOV EAX,dword ptr [ESP + 0x28]      ; 00449ea4
    MOV dword ptr [ESP + 0x40],EAX      ; 00449ea8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00449eac
    MOV dword ptr [ESP + 0x44],EAX      ; 00449eb0
    MOV EAX,dword ptr [EBP + 0x20]      ; 00449eb4
        ;   Label: LAB_00449eb4
    FLD float ptr [ESP + 0x34]          ; 00449eb7
    FCOMP float ptr [EAX]               ; 00449ebb
    FNSTSW AX                           ; 00449ebd
    SAHF                                ; 00449ebf
    JC 0x00449faa                       ; 00449ec0
        ;   XREF to: 00449faa (CONDITIONAL_JUMP)  ; LAB_00449faa
    FLD float ptr [ESP + 0x38]          ; 00449ec6
    FMUL ST0                            ; 00449eca
    FLD float ptr [ESP + 0x30]          ; 00449ecc
    FMUL ST0                            ; 00449ed0
    FLD float ptr [EBP + 0x1c]          ; 00449ed2
    FMUL ST0                            ; 00449ed5
    FXCH                                ; 00449ed7
    FADDP ST2,ST0                       ; 00449ed9
    FCOMPP                              ; 00449edb
    FNSTSW AX                           ; 00449edd
    SAHF                                ; 00449edf
    JA 0x0044a01c                       ; 00449ee0
        ;   XREF to: 0044a01c (CONDITIONAL_JUMP)  ; LAB_0044a01c
    MOV EDX,dword ptr [EBP + 0x20]      ; 00449ee6
    PUSH EDX                            ; 00449ee9
    LEA EAX,[ESP + 0x40]                ; 00449eea
    PUSH dword ptr [EBP + 0x1c]         ; 00449eee
    PUSH EAX                            ; 00449ef1
    LEA EAX,[ESP + 0x3c]                ; 00449ef2
    PUSH EAX                            ; 00449ef6
    CALL core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00449bc0 ; 00449ef7
        ;   XREF to: 00449bc0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00449bc0()
    ADD ESP,0x10                        ; 00449efc
    MOV ECX,dword ptr [EBP + 0x20]      ; 00449eff
    PUSH ECX                            ; 00449f02
    MOV EDI,EAX                         ; 00449f03
    LEA EAX,[ESP + 0x4c]                ; 00449f05
    PUSH dword ptr [EBP + 0x1c]         ; 00449f09
    PUSH EAX                            ; 00449f0c
    LEA EAX,[ESP + 0x48]                ; 00449f0d
    PUSH EAX                            ; 00449f11
    CALL core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00449bc0 ; 00449f12
        ;   XREF to: 00449bc0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00449bc0()
    ADD ESP,0x10                        ; 00449f17
    OR EDI,EAX                          ; 00449f1a
    MOV EAX,dword ptr [EBP + 0x20]      ; 00449f1c
    PUSH EAX                            ; 00449f1f
    LEA EAX,[ESP + 0x34]                ; 00449f20
    PUSH dword ptr [EBP + 0x1c]         ; 00449f24
    PUSH EAX                            ; 00449f27
    LEA EAX,[ESP + 0x54]                ; 00449f28
    PUSH EAX                            ; 00449f2c
    CALL core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00449bc0 ; 00449f2d
        ;   XREF to: 00449bc0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00449bc0()
    FLD float ptr [EBX + 0xc]           ; 00449f32
    FMUL ST0                            ; 00449f35
    FLD float ptr [EBX + 0x14]          ; 00449f37
    FMUL ST0                            ; 00449f3a
    FADDP                               ; 00449f3c
    OR EDI,EAX                          ; 00449f3e
    FSQRT                               ; 00449f40
    ADD ESP,0x10                        ; 00449f42
    MOV AH,byte ptr [0x014b8478]        ; 00449f45 | DAT_014b8478
    FSTP double ptr [ESP]               ; 00449f4b
    TEST AH,0x1                         ; 00449f4e
    JZ 0x0044a031                       ; 00449f51
        ;   XREF to: 0044a031 (CONDITIONAL_JUMP)  ; LAB_0044a031
    FLD double ptr [ESP]                ; 00449f57
        ;   Label: LAB_00449f57
    FCOMP double ptr [0x0057bbb3]       ; 00449f5a | DAT_0057bbb3
    FNSTSW AX                           ; 00449f60
    SAHF                                ; 00449f62
    JNC 0x0044a05a                      ; 00449f63
        ;   XREF to: 0044a05a (CONDITIONAL_JUMP)  ; LAB_0044a05a
    TEST EDI,EDI                        ; 00449f69
    JNZ 0x00449fa1                      ; 00449f6b
        ;   XREF to: 00449fa1 (CONDITIONAL_JUMP)  ; LAB_00449fa1
    PUSH 0x14b846c                      ; 00449f6d | DAT_014b846c
    PUSH ESI                            ; 00449f72
    PUSH EBX                            ; 00449f73
    CALL core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150 ; 00449f74
        ;   XREF to: 00449150 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150()
    MOV dword ptr [ESP + 0x80],EAX      ; 00449f79
    FLD float ptr [ESP + 0x80]          ; 00449f80
    FLDZ                                ; 00449f87
    ADD ESP,0xc                         ; 00449f89
    FCOMPP                              ; 00449f8c
    FNSTSW AX                           ; 00449f8e
    SAHF                                ; 00449f90
    JA 0x00449fa1                       ; 00449f91
        ;   XREF to: 00449fa1 (CONDITIONAL_JUMP)  ; LAB_00449fa1
    MOV EBX,dword ptr [EBP + 0x20]      ; 00449f93
    MOV EAX,dword ptr [ESP + 0x34]      ; 00449f96
    MOV EDI,0x1                         ; 00449f9a
    MOV dword ptr [EBX],EAX             ; 00449f9f
    MOV EAX,EDI                         ; 00449fa1
        ;   Label: LAB_00449fa1
    MOV ESP,EBP                         ; 00449fa3
    POP EBP                             ; 00449fa5
    POP EDI                             ; 00449fa6
    POP ESI                             ; 00449fa7
    POP EBX                             ; 00449fa8
    RET                                 ; 00449fa9
    XOR EAX,EAX                         ; 00449faa
        ;   Label: LAB_00449faa
    MOV ESP,EBP                         ; 00449fac
    POP EBP                             ; 00449fae
    POP EDI                             ; 00449faf
    POP ESI                             ; 00449fb0
    POP EBX                             ; 00449fb1
    RET                                 ; 00449fb2
    MOV EAX,dword ptr [ESP + 0x30]      ; 00449fb3
        ;   Label: LAB_00449fb3
    MOV dword ptr [ESP + 0x18],EAX      ; 00449fb7
    MOV EAX,dword ptr [ESP + 0x34]      ; 00449fbb
    MOV dword ptr [ESP + 0x1c],EAX      ; 00449fbf
    MOV EAX,dword ptr [ESP + 0x38]      ; 00449fc3
    LEA EDI,[ESP + 0x30]                ; 00449fc7
    MOV dword ptr [ESP + 0x20],EAX      ; 00449fcb
    LEA EAX,[ESP + 0x3c]                ; 00449fcf
    CMP EDI,EAX                         ; 00449fd3
    JZ 0x00449fef                       ; 00449fd5
        ;   XREF to: 00449fef (CONDITIONAL_JUMP)  ; LAB_00449fef
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00449fd7
    MOV dword ptr [ESP + 0x30],EAX      ; 00449fdb
    MOV EAX,dword ptr [ESP + 0x40]      ; 00449fdf
    MOV dword ptr [ESP + 0x34],EAX      ; 00449fe3
    MOV EAX,dword ptr [ESP + 0x44]      ; 00449fe7
    MOV dword ptr [ESP + 0x38],EAX      ; 00449feb
    LEA EDI,[ESP + 0x3c]                ; 00449fef
        ;   Label: LAB_00449fef
    LEA EAX,[ESP + 0x18]                ; 00449ff3
    CMP EDI,EAX                         ; 00449ff7
    JZ 0x00449dca                       ; 00449ff9
        ;   XREF to: 00449dca (CONDITIONAL_JUMP)  ; LAB_00449dca
    MOV EAX,dword ptr [ESP + 0x18]      ; 00449fff
    MOV dword ptr [ESP + 0x3c],EAX      ; 0044a003
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044a007
    MOV dword ptr [ESP + 0x40],EAX      ; 0044a00b
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044a00f
    MOV dword ptr [ESP + 0x44],EAX      ; 0044a013
    JMP 0x00449dca                      ; 0044a017
        ;   XREF to: 00449dca (UNCONDITIONAL_JUMP)  ; LAB_00449dca
    MOV EBX,dword ptr [EBP + 0x20]      ; 0044a01c
        ;   Label: LAB_0044a01c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0044a01f
    MOV dword ptr [EBX],EAX             ; 0044a023
    MOV EAX,0x1                         ; 0044a025
    MOV ESP,EBP                         ; 0044a02a
    POP EBP                             ; 0044a02c
    POP EDI                             ; 0044a02d
    POP ESI                             ; 0044a02e
    POP EBX                             ; 0044a02f
    RET                                 ; 0044a030
    MOV DL,AH                           ; 0044a031
        ;   Label: LAB_0044a031
    OR DL,0x1                           ; 0044a033
    MOV ECX,0xc2c80000                  ; 0044a036
    MOV byte ptr [0x014b8478],DL        ; 0044a03b | DAT_014b8478
    XOR EDX,EDX                         ; 0044a041
    MOV dword ptr [0x014b8470],ECX      ; 0044a043 | DAT_014b8470
    MOV dword ptr [0x014b846c],EDX      ; 0044a049 | DAT_014b846c
    MOV dword ptr [0x014b8474],EDX      ; 0044a04f | DAT_014b8474
    JMP 0x00449f57                      ; 0044a055
        ;   XREF to: 00449f57 (UNCONDITIONAL_JUMP)  ; LAB_00449f57
    FLD float ptr [EBX + 0xc]           ; 0044a05a
        ;   Label: LAB_0044a05a
    FLD float ptr [EBP + 0x1c]          ; 0044a05d
    FDIV double ptr [ESP]               ; 0044a060
    FXCH                                ; 0044a063
    FMUL ST1                            ; 0044a065
    FADD float ptr [ESI]                ; 0044a067
    FSTP float ptr [ESP + 0x54]         ; 0044a069
    FMUL float ptr [EBX + 0x14]         ; 0044a06d
    FADD float ptr [ESI + 0x8]          ; 0044a070
    FSTP float ptr [ESP + 0x5c]         ; 0044a073
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044a077
    PUSH 0x14b846c                      ; 0044a07a | DAT_014b846c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044a07f
    LEA EAX,[ESP + 0x58]                ; 0044a083
    PUSH EAX                            ; 0044a087
    PUSH EBX                            ; 0044a088
    CALL core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150 ; 0044a089
        ;   XREF to: 00449150 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00449150()
    MOV dword ptr [ESP + 0x80],EAX      ; 0044a08e
    FLD float ptr [ESP + 0x80]          ; 0044a095
    ADD ESP,0xc                         ; 0044a09c
    FST float ptr [ESP + 0x8]           ; 0044a09f
    FLDZ                                ; 0044a0a3
    FCOMPP                              ; 0044a0a5
    FNSTSW AX                           ; 0044a0a7
    SAHF                                ; 0044a0a9
    JA 0x00449fa1                       ; 0044a0aa
        ;   XREF to: 00449fa1 (CONDITIONAL_JUMP)  ; LAB_00449fa1
    FLD float ptr [ESP + 0x8]           ; 0044a0b0
    FMUL float ptr [0x014b8470]         ; 0044a0b4 | DAT_014b8470
    FADD float ptr [ESP + 0x58]         ; 0044a0ba
    MOV EAX,dword ptr [EBP + 0x20]      ; 0044a0be
    FST float ptr [ESP + 0x70]          ; 0044a0c1
    FCOMP float ptr [EAX]               ; 0044a0c5
    FNSTSW AX                           ; 0044a0c7
    SAHF                                ; 0044a0c9
    JBE 0x00449fa1                      ; 0044a0ca
        ;   XREF to: 00449fa1 (CONDITIONAL_JUMP)  ; LAB_00449fa1
    MOV EBX,dword ptr [EBP + 0x20]      ; 0044a0d0
    MOV EAX,dword ptr [ESP + 0x70]      ; 0044a0d3
    MOV EDI,0x1                         ; 0044a0d7
    MOV dword ptr [EBX],EAX             ; 0044a0dc
    MOV EAX,EDI                         ; 0044a0de
    MOV ESP,EBP                         ; 0044a0e0
    POP EBP                             ; 0044a0e2
    POP EDI                             ; 0044a0e3
    POP ESI                             ; 0044a0e4
    POP EBX                             ; 0044a0e5
    RET                                 ; 0044a0e6

