; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_renderConeLightGeometry_FUN_00451b70(undefined4 param_1,undefined4 param_2,float param_3,float param_4)
;
; Local Variables:
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined        Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
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
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x40]:4  local_40
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
; XREF[3]:
;   FUN_004c8200 at 004c8278
;   FUN_0054f510 at 0054f717
;   core_zombie.cpp_FUN_00561940 at 00561a69
;
; Referenced Globals:
;   double DOUBLE_0057c916 = 0.125
;   double DOUBLE_0057c91e = 5.13920855624402E-315
;   double DOUBLE_0057c926 = 3.14159265350000
;   double DOUBLE_0057c92e = 2
;   double DOUBLE_0057c936 = 1024
;   double DOUBLE_0057c93e = 18
;   undefined4 DAT_0059c030
;   undefined4 DAT_005ae458
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451b70
        ;   Label: core_dlight.cpp_renderConeLightGeometry_FUN_00451b70
    PUSH ESI                            ; 00451b71
    PUSH EDI                            ; 00451b72
    PUSH EBP                            ; 00451b73
    MOV EBP,ESP                         ; 00451b74
    SUB ESP,0xac                        ; 00451b76
    AND ESP,0xfffffff8                  ; 00451b7c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00451b7f
    MOV dword ptr [ESP + 0x4],EAX       ; 00451b82
    MOV EDX,dword ptr [0x005ae704]      ; 00451b86 | DAT_005ae704
    PUSH EDX                            ; 00451b8c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00451b8d
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 00451b92
    TEST EAX,EAX                        ; 00451b95
    JZ 0x00451ba0                       ; 00451b97
        ;   XREF to: 00451ba0 (CONDITIONAL_JUMP)  ; LAB_00451ba0
    MOV ESP,EBP                         ; 00451b99
    POP EBP                             ; 00451b9b
    POP EDI                             ; 00451b9c
    POP ESI                             ; 00451b9d
    POP EBX                             ; 00451b9e
    RET                                 ; 00451b9f
    MOV ECX,dword ptr [EBP + 0x14]      ; 00451ba0
        ;   Label: LAB_00451ba0
    PUSH ECX                            ; 00451ba3
    MOV EBX,dword ptr [0x005ae704]      ; 00451ba4 | DAT_005ae704
    PUSH EBX                            ; 00451baa | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00451bab
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00()
    ADD ESP,0x8                         ; 00451bb0
    PUSH 0x0                            ; 00451bb3
    MOV ESI,dword ptr [EBP + 0x18]      ; 00451bb5
    PUSH ESI                            ; 00451bb8
    MOV EDI,dword ptr [0x005ae704]      ; 00451bb9 | DAT_005ae704
    PUSH EDI                            ; 00451bbf | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00451bc0
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0()
    ADD ESP,0xc                         ; 00451bc5
    PUSH 0x5ae458                       ; 00451bc8 | DAT_005ae458
    MOV EAX,[0x005ae704]                ; 00451bcd | DAT_005ae704
    PUSH EAX                            ; 00451bd2 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00451bd3
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0()
    ADD ESP,0x8                         ; 00451bd8
    PUSH 0x1                            ; 00451bdb
    MOV EDX,dword ptr [0x005ae704]      ; 00451bdd | DAT_005ae704
    PUSH EDX                            ; 00451be3 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00451be4
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000()
    ADD ESP,0x8                         ; 00451be9
    FLD1                                ; 00451bec
    FDIV float ptr [EBP + 0x20]         ; 00451bee
    MOV EDI,0x1                         ; 00451bf1
    FSTP float ptr [ESP + 0x90]         ; 00451bf6
    FLD float ptr [ESP + 0x4]           ; 00451bfd
        ;   Label: LAB_00451bfd
    FDIVR double ptr [0x0057c93e]       ; 00451c01 | DOUBLE_0057c93e
    MOV dword ptr [ESP + 0xa8],EDI      ; 00451c07
    FILD dword ptr [ESP + 0xa8]         ; 00451c0e
    FMULP                               ; 00451c15
    FMUL double ptr [0x0057c916]        ; 00451c17 | DOUBLE_0057c916
    FST float ptr [ESP]                 ; 00451c1d
    FLD1                                ; 00451c20
    FPATAN                              ; 00451c22
    FCOS                                ; 00451c24
    FMUL float ptr [EBP + 0x20]         ; 00451c26
    XOR EAX,EAX                         ; 00451c29
    FSTP float ptr [ESP + 0xa4]         ; 00451c2b
    MOV dword ptr [ESP + 0xa8],EAX      ; 00451c32
        ;   Label: LAB_00451c32
    FLD float ptr [0x0057c91e]          ; 00451c39 | DOUBLE_0057c91e
    FILD dword ptr [ESP + 0xa8]         ; 00451c3f
    FMUL ST1                            ; 00451c46
    FLD double ptr [0x0057c926]         ; 00451c48 | DOUBLE_0057c926
    FXCH                                ; 00451c4e
    FMUL ST1                            ; 00451c50
    FLD double ptr [0x0057c92e]         ; 00451c52 | DOUBLE_0057c92e
    FXCH                                ; 00451c58
    FMUL ST1                            ; 00451c5a
    LEA ESI,[EAX + 0x1]                 ; 00451c5c
    FLD ST0                             ; 00451c5f
    FSIN                                ; 00451c61
    MOV dword ptr [ESP + 0xa8],ESI      ; 00451c63
    FILD dword ptr [ESP + 0xa8]         ; 00451c6a
    FMULP ST5                           ; 00451c71
    FXCH ST4                            ; 00451c73
    FMULP ST3                           ; 00451c75
    FXCH ST2                            ; 00451c77
    FMULP                               ; 00451c79
    FLD ST0                             ; 00451c7b
    FSIN                                ; 00451c7d
    FXCH ST2                            ; 00451c7f
    FCOS                                ; 00451c81
    FXCH                                ; 00451c83
    FCOS                                ; 00451c85
    FLD float ptr [ESP]                 ; 00451c87
    FXCH ST4                            ; 00451c8a
    FMUL ST4                            ; 00451c8c
    FXCH ST2                            ; 00451c8e
    FMUL ST4                            ; 00451c90
    FXCH ST3                            ; 00451c92
    FMUL ST4                            ; 00451c94
    FXCH                                ; 00451c96
    FMULP ST4                           ; 00451c98
    FXCH                                ; 00451c9a
    FSTP float ptr [ESP + 0x94]         ; 00451c9c
    FXCH                                ; 00451ca3
    FSTP float ptr [ESP + 0x98]         ; 00451ca5
    FSTP float ptr [ESP + 0x9c]         ; 00451cac
    FSTP float ptr [ESP + 0xa0]         ; 00451cb3
    FLDZ                                ; 00451cba
    FLD float ptr [EBP + 0x20]          ; 00451cbc
    FLD ST0                             ; 00451cbf
    FSUB float ptr [ESP + 0xa4]         ; 00451cc1
    FXCH ST2                            ; 00451cc8
    FMUL float ptr [ESP + 0xa4]         ; 00451cca
    FXCH ST2                            ; 00451cd1
    FLD float ptr [ESP + 0x90]          ; 00451cd3
    FXCH                                ; 00451cda
    FMUL ST1                            ; 00451cdc
    FXCH ST3                            ; 00451cde
    FST float ptr [ESP + 0x80]          ; 00451ce0
    FMUL float ptr [ESP + 0x94]         ; 00451ce7
    FLD float ptr [ESP + 0x80]          ; 00451cee
    FXCH ST3                            ; 00451cf5
    FSUB float ptr [ESP + 0x80]         ; 00451cf7
    FXCH ST3                            ; 00451cfe
    FMUL float ptr [ESP + 0x98]         ; 00451d00
    FXCH ST3                            ; 00451d07
    FMULP ST2                           ; 00451d09
    FXCH ST3                            ; 00451d0b
    FLD double ptr [0x0057c936]         ; 00451d0d | DOUBLE_0057c936
    FXCH                                ; 00451d13
    FMUL ST1                            ; 00451d15
    FXCH ST2                            ; 00451d17
    FMULP                               ; 00451d19
    LEA EBX,[ESP + 0x3c]                ; 00451d1b
    MOV EAX,dword ptr [ESP + 0x80]      ; 00451d1f
    MOV EDX,dword ptr [0x005ae704]      ; 00451d26 | DAT_005ae704
    MOV dword ptr [ESP + 0x38],EAX      ; 00451d2c
    FXCH ST3                            ; 00451d30
    FSTP float ptr [ESP + 0x30]         ; 00451d32
    FXCH                                ; 00451d36
    FSTP float ptr [ESP + 0x34]         ; 00451d38
    LEA EAX,[ESP + 0x30]                ; 00451d3c
    CALL crt_math.c_round_FUN_00563a30  ; 00451d40
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x8c]        ; 00451d45
    CALL crt_math.c_round_FUN_00563a30  ; 00451d4c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x88]        ; 00451d51
    FLD float ptr [EAX]                 ; 00451d58
    FMUL float ptr [0x0059c030]         ; 00451d5a | DAT_0059c030
    FISTP dword ptr [EBX]               ; 00451d60
    FLD float ptr [EAX + 0x4]           ; 00451d62
    FMUL float ptr [0x0059c030]         ; 00451d65 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 00451d6b
    FLD float ptr [EAX + 0x8]           ; 00451d6e
    FMUL float ptr [0x0059c030]         ; 00451d71 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 00451d77
    LEA EAX,[ESP + 0x3c]                ; 00451d7a
    PUSH EAX                            ; 00451d7e
    MOV EAX,dword ptr [EDX]             ; 00451d7f
    PUSH EAX                            ; 00451d81
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00451d82
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 00451d87
    FLD float ptr [ESP + 0x80]          ; 00451d8a
    FMUL float ptr [ESP + 0x9c]         ; 00451d91
    FLD float ptr [ESP + 0x80]          ; 00451d98
    FMUL float ptr [ESP + 0xa0]         ; 00451d9f
    LEA EBX,[ESP + 0x48]                ; 00451da6
    MOV EAX,dword ptr [ESP + 0x80]      ; 00451daa
    MOV EDX,dword ptr [0x005ae704]      ; 00451db1 | DAT_005ae704
    MOV dword ptr [ESP + 0x38],EAX      ; 00451db7
    FXCH                                ; 00451dbb
    FSTP float ptr [ESP + 0x30]         ; 00451dbd
    LEA EAX,[ESP + 0x30]                ; 00451dc1
    FSTP float ptr [ESP + 0x34]         ; 00451dc5
    FLD float ptr [EAX]                 ; 00451dc9
    FMUL float ptr [0x0059c030]         ; 00451dcb | DAT_0059c030
    FISTP dword ptr [EBX]               ; 00451dd1
    FLD float ptr [EAX + 0x4]           ; 00451dd3
    FMUL float ptr [0x0059c030]         ; 00451dd6 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 00451ddc
    FLD float ptr [EAX + 0x8]           ; 00451ddf
    FMUL float ptr [0x0059c030]         ; 00451de2 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 00451de8
    LEA EAX,[ESP + 0x48]                ; 00451deb
    PUSH EAX                            ; 00451def
    MOV EAX,dword ptr [EDX]             ; 00451df0 | DAT_01b4d738
    ADD EAX,0x30                        ; 00451df2
    PUSH EAX                            ; 00451df5
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00451df6
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 00451dfb
    FLD float ptr [ESP + 0xa4]          ; 00451dfe
    FMUL float ptr [ESP + 0x9c]         ; 00451e05
    FLD float ptr [ESP + 0xa4]          ; 00451e0c
    FMUL float ptr [ESP + 0xa0]         ; 00451e13
    LEA EBX,[ESP + 0x54]                ; 00451e1a
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00451e1e
    MOV EDX,dword ptr [0x005ae704]      ; 00451e25 | DAT_005ae704
    MOV dword ptr [ESP + 0x38],EAX      ; 00451e2b
    FXCH                                ; 00451e2f
    FSTP float ptr [ESP + 0x30]         ; 00451e31
    LEA EAX,[ESP + 0x30]                ; 00451e35
    FSTP float ptr [ESP + 0x34]         ; 00451e39
    FLD float ptr [EAX]                 ; 00451e3d
    FMUL float ptr [0x0059c030]         ; 00451e3f | DAT_0059c030
    FISTP dword ptr [EBX]               ; 00451e45
    FLD float ptr [EAX + 0x4]           ; 00451e47
    FMUL float ptr [0x0059c030]         ; 00451e4a | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 00451e50
    FLD float ptr [EAX + 0x8]           ; 00451e53
    FMUL float ptr [0x0059c030]         ; 00451e56 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 00451e5c
    LEA EAX,[ESP + 0x54]                ; 00451e5f
    PUSH EAX                            ; 00451e63
    MOV EAX,dword ptr [EDX]             ; 00451e64 | DAT_01b4d738
    ADD EAX,0x60                        ; 00451e66
    PUSH EAX                            ; 00451e69
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00451e6a
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 00451e6f
    FLD float ptr [ESP + 0xa4]          ; 00451e72
    FMUL float ptr [ESP + 0x94]         ; 00451e79
    FLD float ptr [ESP + 0xa4]          ; 00451e80
    FMUL float ptr [ESP + 0x98]         ; 00451e87
    LEA EBX,[ESP + 0x60]                ; 00451e8e
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00451e92
    MOV EDX,dword ptr [0x005ae704]      ; 00451e99 | DAT_005ae704
    MOV dword ptr [ESP + 0x38],EAX      ; 00451e9f
    FXCH                                ; 00451ea3
    FSTP float ptr [ESP + 0x30]         ; 00451ea5
    LEA EAX,[ESP + 0x30]                ; 00451ea9
    FSTP float ptr [ESP + 0x34]         ; 00451ead
    FLD float ptr [EAX]                 ; 00451eb1
    FMUL float ptr [0x0059c030]         ; 00451eb3 | DAT_0059c030
    FISTP dword ptr [EBX]               ; 00451eb9
    FLD float ptr [EAX + 0x4]           ; 00451ebb
    FMUL float ptr [0x0059c030]         ; 00451ebe | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 00451ec4
    FLD float ptr [EAX + 0x8]           ; 00451ec7
    FMUL float ptr [0x0059c030]         ; 00451eca | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 00451ed0
    LEA EAX,[ESP + 0x60]                ; 00451ed3
    PUSH EAX                            ; 00451ed7
    MOV EAX,dword ptr [EDX]             ; 00451ed8 | DAT_01b4d738
    ADD EAX,0x90                        ; 00451eda
    PUSH EAX                            ; 00451edf
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00451ee0
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 00451ee5
    MOV EDX,dword ptr [0x005ae704]      ; 00451ee8 | DAT_005ae704
    MOV EBX,dword ptr [EDX]             ; 00451eee | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0x88]      ; 00451ef0
    MOV dword ptr [EBX + 0x2c],EAX      ; 00451ef7
    MOV EAX,dword ptr [EDX]             ; 00451efa | DAT_01b4d738
    MOV dword ptr [EAX + 0x28],0xffff   ; 00451efc
    MOV EAX,dword ptr [EDX]             ; 00451f03 | DAT_01b4d738
    MOV dword ptr [EAX + 0x24],0xffff   ; 00451f05
    MOV EAX,dword ptr [EDX]             ; 00451f0c | DAT_01b4d738
    MOV dword ptr [EAX + 0x20],0xffff   ; 00451f0e
    MOV EAX,dword ptr [EDX]             ; 00451f15 | DAT_01b4d738
    MOV dword ptr [EAX + 0x18],0xf80000 ; 00451f17
    MOV EAX,dword ptr [EDX]             ; 00451f1e | DAT_01b4d738
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 00451f20
    MOV EBX,dword ptr [EDX]             ; 00451f27 | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0x88]      ; 00451f29
    MOV dword ptr [EBX + 0x5c],EAX      ; 00451f30
    MOV EAX,dword ptr [EDX]             ; 00451f33 | DAT_01b4d738
    MOV dword ptr [EAX + 0x58],0xffff   ; 00451f35
    MOV EAX,dword ptr [EDX]             ; 00451f3c | DAT_01b4d738
    MOV dword ptr [EAX + 0x54],0xffff   ; 00451f3e
    MOV EAX,dword ptr [EDX]             ; 00451f45 | DAT_01b4d738
    MOV dword ptr [EAX + 0x50],0xffff   ; 00451f47
    MOV EAX,dword ptr [EDX]             ; 00451f4e | DAT_01b4d738
    MOV dword ptr [EAX + 0x48],0x80000  ; 00451f50
    MOV EAX,dword ptr [EDX]             ; 00451f57 | DAT_01b4d738
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 00451f59
    MOV EBX,dword ptr [EDX]             ; 00451f60 | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00451f62
    MOV dword ptr [EBX + 0x8c],EAX      ; 00451f69
    MOV EAX,dword ptr [EDX]             ; 00451f6f | DAT_01b4d738
    MOV dword ptr [EAX + 0x88],0xffff   ; 00451f71
    MOV EAX,dword ptr [EDX]             ; 00451f7b | DAT_01b4d738
    MOV dword ptr [EAX + 0x84],0xffff   ; 00451f7d
    MOV EAX,dword ptr [EDX]             ; 00451f87 | DAT_01b4d738
    MOV dword ptr [EAX + 0x80],0xffff   ; 00451f89
    MOV EAX,dword ptr [EDX]             ; 00451f93 | DAT_01b4d738
    MOV dword ptr [EAX + 0x78],0x80000  ; 00451f95
    MOV EAX,dword ptr [EDX]             ; 00451f9c | DAT_01b4d738
    MOV dword ptr [EAX + 0x7c],0x80000  ; 00451f9e
    MOV EBX,dword ptr [EDX]             ; 00451fa5 | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00451fa7
    MOV dword ptr [EBX + 0xbc],EAX      ; 00451fae
    MOV EAX,dword ptr [EDX]             ; 00451fb4 | DAT_01b4d738
    MOV dword ptr [EAX + 0xb8],0xffff   ; 00451fb6
    MOV EAX,dword ptr [EDX]             ; 00451fc0 | DAT_01b4d738
    MOV dword ptr [EAX + 0xb4],0xffff   ; 00451fc2
    MOV EAX,dword ptr [EDX]             ; 00451fcc | DAT_01b4d738
    MOV dword ptr [EAX + 0xb0],0xffff   ; 00451fce
    MOV EAX,dword ptr [EDX]             ; 00451fd8 | DAT_01b4d738
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 00451fda
    MOV EAX,dword ptr [EDX]             ; 00451fe4 | DAT_01b4d738
    MOV ECX,0x4                         ; 00451fe6
    XOR EBX,EBX                         ; 00451feb
    MOV dword ptr [EAX + 0xac],0x80000  ; 00451fed
    MOV EAX,0x3                         ; 00451ff7
    MOV dword ptr [ESP + 0xc],ECX       ; 00451ffc
    MOV dword ptr [ESP + 0x1c],EBX      ; 00452000
    MOV dword ptr [ESP + 0x18],EBX      ; 00452004
    MOV dword ptr [ESP + 0x14],EBX      ; 00452008
    MOV dword ptr [ESP + 0x10],EBX      ; 0045200c
    MOV dword ptr [ESP + 0x2c],EAX      ; 00452010
    LEA EAX,[ESP + 0x8]                 ; 00452014
    MOV dword ptr [ESP + 0x20],EBX      ; 00452018
    PUSH EAX                            ; 0045201c
    MOV ECX,0x1                         ; 0045201d
    MOV EBX,0x2                         ; 00452022
    PUSH EDX                            ; 00452027 | DAT_01b4d738
    MOV dword ptr [ESP + 0x2c],ECX      ; 00452028
    MOV dword ptr [ESP + 0x30],EBX      ; 0045202c
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080 ; 00452030
        ;   XREF to: 00460080 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080()
    ADD ESP,0x8                         ; 00452035
    MOV EAX,ESI                         ; 00452038
    CMP ESI,0x8                         ; 0045203a
    JL 0x00451c32                       ; 0045203d
        ;   XREF to: 00451c32 (CONDITIONAL_JUMP)  ; LAB_00451c32
    INC EDI                             ; 00452043
    CMP EDI,0x8                         ; 00452044
    JL 0x00451bfd                       ; 00452047
        ;   XREF to: 00451bfd (CONDITIONAL_JUMP)  ; LAB_00451bfd
    MOV EDX,dword ptr [0x005ae704]      ; 0045204d | DAT_005ae704
    PUSH EDX                            ; 00452053 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00452054
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00452059
    PUSH 0x0                            ; 0045205c
    MOV ECX,dword ptr [0x005ae704]      ; 0045205e | DAT_005ae704
    PUSH ECX                            ; 00452064 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00452065
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000()
    ADD ESP,0x8                         ; 0045206a
    MOV ESP,EBP                         ; 0045206d
    POP EBP                             ; 0045206f
    POP EDI                             ; 00452070
    POP ESI                             ; 00452071
    POP EBX                             ; 00452072
    RET                                 ; 00452073

