; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_ckptutil.c_drawLineAA_FUN_00433c90(int x0, int y0, int x1, int y1, int color)
;
; Parameters:
; int              Stack[0x4]:4   x0
; int              Stack[0x8]:4   y0
; int              Stack[0xc]:4   x1
; int              Stack[0x10]:4   y1
; int              Stack[0x14]:4   color
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined8       Stack[-0x3c]:8  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00488410 at 00488494
;   shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470 at 0045d536
;
; Referenced Globals:
;   int g_LineClippingDisabled = 0x1
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0
;   cockpit_ckptutil.c_putPixel_FUN_004345c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433c90
        ;   Label: cockpit_ckptutil.c_drawLineAA_FUN_00433c90
    PUSH ESI                            ; 00433c91
    PUSH EDI                            ; 00433c92
    PUSH EBP                            ; 00433c93
    MOV EBP,ESP                         ; 00433c94
    SUB ESP,0x30                        ; 00433c96
    AND ESP,0xfffffff8                  ; 00433c99
    MOV ESI,dword ptr [EBP + 0x14]      ; 00433c9c
    MOV EBX,dword ptr [EBP + 0x18]      ; 00433c9f
    MOV EDX,0x3b800000                  ; 00433ca2
    MOV ECX,dword ptr [EBP + 0x20]      ; 00433ca7
    MOV dword ptr [ESP],EDX             ; 00433caa
    CMP EBX,ECX                         ; 00433cad
    JG 0x00433d57                       ; 00433caf | LAB_00433d57
        ;   XREF to: 00433d57 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0066e800],0x0      ; 00433cb5 | int g_LineClippingDisabled
        ;   Label: LAB_00433cb5
    JNZ 0x00433d0a                      ; 00433cbc | LAB_00433d0a
        ;   XREF to: 00433d0a (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x02d02558]      ; 00433cbe | int g_ClipLeft
    JGE 0x00433cd5                      ; 00433cc4 | LAB_00433cd5
        ;   XREF to: 00433cd5 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00433cc6
    CMP EAX,dword ptr [0x02d02558]      ; 00433cc9 | int g_ClipLeft
    JL 0x00433d50                       ; 00433ccf | LAB_00433d50
        ;   XREF to: 00433d50 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x02d02560]      ; 00433cd5 | int g_ClipRight
        ;   Label: LAB_00433cd5
    CMP ESI,ECX                         ; 00433cdb
    JLE 0x00433ce8                      ; 00433cdd | LAB_00433ce8
        ;   XREF to: 00433ce8 (CONDITIONAL_JUMP)
    CMP ECX,dword ptr [EBP + 0x1c]      ; 00433cdf
    JL 0x00433d50                       ; 00433ce2 | LAB_00433d50
        ;   XREF to: 00433d50 (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [0x02d0255c]      ; 00433ce8 | int g_ClipTop
        ;   Label: LAB_00433ce8
    JGE 0x00433cfb                      ; 00433cee | LAB_00433cfb
        ;   XREF to: 00433cfb (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x20]      ; 00433cf0
    CMP EAX,dword ptr [0x02d0255c]      ; 00433cf3 | int g_ClipTop
    JL 0x00433d50                       ; 00433cf9 | LAB_00433d50
        ;   XREF to: 00433d50 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x02d02564]      ; 00433cfb | int g_ClipBottom
        ;   Label: LAB_00433cfb
    CMP EBX,ECX                         ; 00433d01
    JLE 0x00433d0a                      ; 00433d03 | LAB_00433d0a
        ;   XREF to: 00433d0a (CONDITIONAL_JUMP)
    CMP ECX,dword ptr [EBP + 0x20]      ; 00433d05
    JL 0x00433d50                       ; 00433d08 | LAB_00433d50
        ;   XREF to: 00433d50 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x24]      ; 00433d0a
        ;   Label: LAB_00433d0a
    PUSH EAX                            ; 00433d0d
    PUSH EBX                            ; 00433d0e
    PUSH ESI                            ; 00433d0f
    CALL cockpit_ckptutil.c_putPixel_FUN_004345c0 ; 00433d10 | void cockpit_ckptutil.c_putPixel_FUN_004345c0(int x, int y, int color)
        ;   XREF to: 004345c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00433d15
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00433d18
    SUB EAX,ESI                         ; 00433d1b
    MOV dword ptr [ESP + 0x28],EAX      ; 00433d1d
    TEST EAX,EAX                        ; 00433d21
    JL 0x00433d6b                       ; 00433d23 | LAB_00433d6b
        ;   XREF to: 00433d6b (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x24],0x1      ; 00433d25
    MOV EAX,dword ptr [EBP + 0x20]      ; 00433d2d
        ;   Label: LAB_00433d2d
    SUB EAX,EBX                         ; 00433d30
    MOV dword ptr [ESP + 0x2c],EAX      ; 00433d32
    JNZ 0x00433d94                      ; 00433d36 | LAB_00433d94
        ;   XREF to: 00433d94 (CONDITIONAL_JUMP)
    MOV EDI,0xffffffff                  ; 00433d38
    MOV ECX,dword ptr [ESP + 0x28]      ; 00433d3d
        ;   Label: LAB_00433d3d
    ADD ECX,EDI                         ; 00433d41
    MOV dword ptr [ESP + 0x28],ECX      ; 00433d43
    CMP EDI,ECX                         ; 00433d47
    JNZ 0x00433d7e                      ; 00433d49 | LAB_00433d7e
        ;   XREF to: 00433d7e (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 00433d4b
    MOV ECX,ECX                         ; 00433d4e
    MOV ESP,EBP                         ; 00433d50
        ;   Label: LAB_00433d50
    POP EBP                             ; 00433d52
    POP EDI                             ; 00433d53
    POP ESI                             ; 00433d54
    POP EBX                             ; 00433d55
    RET                                 ; 00433d56
    MOV EAX,EBX                         ; 00433d57
        ;   Label: LAB_00433d57
    MOV EBX,ECX                         ; 00433d59
    MOV dword ptr [EBP + 0x20],EAX      ; 00433d5b
    MOV EAX,ESI                         ; 00433d5e
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00433d60
    MOV dword ptr [EBP + 0x1c],EAX      ; 00433d63
    JMP 0x00433cb5                      ; 00433d66 | LAB_00433cb5
        ;   XREF to: 00433cb5 (UNCONDITIONAL_JUMP)
    MOV EDI,EAX                         ; 00433d6b
        ;   Label: LAB_00433d6b
    MOV ECX,0xffffffff                  ; 00433d6d
    NEG EDI                             ; 00433d72
    MOV dword ptr [ESP + 0x24],ECX      ; 00433d74
    MOV dword ptr [ESP + 0x28],EDI      ; 00433d78
    JMP 0x00433d2d                      ; 00433d7c | LAB_00433d2d
        ;   XREF to: 00433d2d (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBP + 0x24]      ; 00433d7e
        ;   Label: LAB_00433d7e
    PUSH ECX                            ; 00433d81
    MOV EDX,dword ptr [ESP + 0x28]      ; 00433d82
    PUSH EBX                            ; 00433d86
    ADD ESI,EDX                         ; 00433d87
    PUSH ESI                            ; 00433d89
    CALL cockpit_ckptutil.c_putPixel_FUN_004345c0 ; 00433d8a | void cockpit_ckptutil.c_putPixel_FUN_004345c0(int x, int y, int color)
        ;   XREF to: 004345c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00433d8f
    JMP 0x00433d3d                      ; 00433d92 | LAB_00433d3d
        ;   XREF to: 00433d3d (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x28]      ; 00433d94
        ;   Label: LAB_00433d94
    TEST ECX,ECX                        ; 00433d98
    JNZ 0x00433dbd                      ; 00433d9a | LAB_00433dbd
        ;   XREF to: 00433dbd (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x24]      ; 00433d9c
    PUSH EDI                            ; 00433d9f
        ;   Label: LAB_00433d9f
    INC EBX                             ; 00433da0
    PUSH EBX                            ; 00433da1
    PUSH ESI                            ; 00433da2
    CALL cockpit_ckptutil.c_putPixel_FUN_004345c0 ; 00433da3 | void cockpit_ckptutil.c_putPixel_FUN_004345c0(int x, int y, int color)
        ;   XREF to: 004345c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00433da8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00433dab
    DEC EAX                             ; 00433daf
    MOV dword ptr [ESP + 0x2c],EAX      ; 00433db0
    JNZ 0x00433d9f                      ; 00433db4 | LAB_00433d9f
        ;   XREF to: 00433d9f (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 00433db6
    POP EBP                             ; 00433db8
    POP EDI                             ; 00433db9
    POP ESI                             ; 00433dba
    POP EBX                             ; 00433dbb
    RET                                 ; 00433dbc
    CMP ECX,EAX                         ; 00433dbd
        ;   Label: LAB_00433dbd
    JNZ 0x00433de8                      ; 00433dbf | LAB_00433de8
        ;   XREF to: 00433de8 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x24]      ; 00433dc1
    MOV EAX,dword ptr [EBP + 0x24]      ; 00433dc5
        ;   Label: LAB_00433dc5
    PUSH EAX                            ; 00433dc8
    INC EBX                             ; 00433dc9
    PUSH EBX                            ; 00433dca
    ADD ESI,EDI                         ; 00433dcb
    PUSH ESI                            ; 00433dcd
    CALL cockpit_ckptutil.c_putPixel_FUN_004345c0 ; 00433dce | void cockpit_ckptutil.c_putPixel_FUN_004345c0(int x, int y, int color)
        ;   XREF to: 004345c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00433dd3
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00433dd6
    DEC EDX                             ; 00433dda
    MOV dword ptr [ESP + 0x2c],EDX      ; 00433ddb
    JNZ 0x00433dc5                      ; 00433ddf | LAB_00433dc5
        ;   XREF to: 00433dc5 (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 00433de1
    POP EBP                             ; 00433de3
    POP EDI                             ; 00433de4
    POP ESI                             ; 00433de5
    POP EBX                             ; 00433de6
    RET                                 ; 00433de7
    XOR EDI,EDI                         ; 00433de8
        ;   Label: LAB_00433de8
    CMP ECX,EAX                         ; 00433dea
    JLE 0x00433e89                      ; 00433dec | LAB_00433e89
        ;   XREF to: 00433e89 (CONDITIONAL_JUMP)
    SHL EAX,0x10                        ; 00433df2
    XOR EDX,EDX                         ; 00433df5
    DIV ECX                             ; 00433df7
    MOV dword ptr [ESP + 0x20],EAX      ; 00433df9
    MOV ECX,dword ptr [ESP + 0x28]      ; 00433dfd
        ;   Label: LAB_00433dfd
    DEC ECX                             ; 00433e01
    MOV dword ptr [ESP + 0x28],ECX      ; 00433e02
    JZ 0x00433f27                       ; 00433e06 | LAB_00433f27
        ;   XREF to: 00433f27 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x20]      ; 00433e0c
    MOV EAX,EDI                         ; 00433e10
    ADD EDI,EDX                         ; 00433e12
    AND EDI,0xffff                      ; 00433e14
    CMP EDI,EAX                         ; 00433e1a
    JBE 0x00433e86                      ; 00433e1c | LAB_00433e86
        ;   XREF to: 00433e86 (CONDITIONAL_JUMP)
    MOV EAX,EDI                         ; 00433e1e
        ;   Label: LAB_00433e1e
    XOR EDX,EDX                         ; 00433e20
    SHR EAX,0x8                         ; 00433e22
    MOV dword ptr [ESP + 0x8],EDX       ; 00433e25
    MOV dword ptr [ESP + 0x4],EAX       ; 00433e29
    FILD qword ptr [ESP + 0x4]          ; 00433e2d
    FLD1                                ; 00433e31
    FADDP                               ; 00433e33
    FLD float ptr [ESP]                 ; 00433e35
    FMUL ST1                            ; 00433e38
    MOV ECX,dword ptr [ESP + 0x24]      ; 00433e3a
    XOR AL,0xff                         ; 00433e3e
    MOV dword ptr [ESP + 0x8],EDX       ; 00433e40
    MOV dword ptr [ESP + 0x4],EAX       ; 00433e44
    MOV EAX,dword ptr [EBP + 0x24]      ; 00433e48
    ADD ESI,ECX                         ; 00433e4b
    PUSH EAX                            ; 00433e4d
    FXCH                                ; 00433e4e
    FSTP float ptr [ESP + 0x10]         ; 00433e50
    PUSH dword ptr [ESP + 0x10]         ; 00433e54
    FILD qword ptr [ESP + 0xc]          ; 00433e58
    PUSH EBX                            ; 00433e5c
    FMULP                               ; 00433e5d
    PUSH ESI                            ; 00433e5f
    FSTP float ptr [ESP + 0x20]         ; 00433e60
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0 ; 00433e64 | void cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0(int x, int y, float blend_factor, int palette_index)
        ;   XREF to: 004342f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00433e69
    MOV EDX,dword ptr [EBP + 0x24]      ; 00433e6c
    PUSH EDX                            ; 00433e6f
    LEA EAX,[EBX + 0x1]                 ; 00433e70
    PUSH dword ptr [ESP + 0x14]         ; 00433e73
    PUSH EAX                            ; 00433e77
    PUSH ESI                            ; 00433e78
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0 ; 00433e79 | void cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0(int x, int y, float blend_factor, int palette_index)
        ;   XREF to: 004342f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00433e7e
    JMP 0x00433dfd                      ; 00433e81 | LAB_00433dfd
        ;   XREF to: 00433dfd (UNCONDITIONAL_JUMP)
    INC EBX                             ; 00433e86
        ;   Label: LAB_00433e86
    JMP 0x00433e1e                      ; 00433e87 | LAB_00433e1e
        ;   XREF to: 00433e1e (UNCONDITIONAL_JUMP)
    MOV EAX,ECX                         ; 00433e89
        ;   Label: LAB_00433e89
    XOR EDX,EDX                         ; 00433e8b
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00433e8d
    SHL EAX,0x10                        ; 00433e91
    DIV ECX                             ; 00433e94
    MOV dword ptr [ESP + 0x1c],EAX      ; 00433e96
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00433e9a
        ;   Label: LAB_00433e9a
    DEC EAX                             ; 00433e9e
    MOV dword ptr [ESP + 0x2c],EAX      ; 00433e9f
    JZ 0x00433f27                       ; 00433ea3 | LAB_00433f27
        ;   XREF to: 00433f27 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00433ea9
    MOV EAX,EDI                         ; 00433ead
    ADD EDI,ECX                         ; 00433eaf
    AND EDI,0xffff                      ; 00433eb1
    CMP EDI,EAX                         ; 00433eb7
    JBE 0x00433f21                      ; 00433eb9 | LAB_00433f21
        ;   XREF to: 00433f21 (CONDITIONAL_JUMP)
    MOV EAX,EDI                         ; 00433ebb
        ;   Label: LAB_00433ebb
    XOR EDX,EDX                         ; 00433ebd
    SHR EAX,0x8                         ; 00433ebf
    MOV dword ptr [ESP + 0x8],EDX       ; 00433ec2
    MOV dword ptr [ESP + 0x4],EAX       ; 00433ec6
    FILD qword ptr [ESP + 0x4]          ; 00433eca
    FLD1                                ; 00433ece
    FADDP                               ; 00433ed0
    FLD float ptr [ESP]                 ; 00433ed2
    FMUL ST1                            ; 00433ed5
    XOR AL,0xff                         ; 00433ed7
    INC EBX                             ; 00433ed9
    MOV dword ptr [ESP + 0x4],EAX       ; 00433eda
    MOV EAX,dword ptr [EBP + 0x24]      ; 00433ede
    MOV dword ptr [ESP + 0x8],EDX       ; 00433ee1
    PUSH EAX                            ; 00433ee5
    FXCH                                ; 00433ee6
    FSTP float ptr [ESP + 0x18]         ; 00433ee8
    PUSH dword ptr [ESP + 0x18]         ; 00433eec
    FILD qword ptr [ESP + 0xc]          ; 00433ef0
    PUSH EBX                            ; 00433ef4
    FMULP                               ; 00433ef5
    PUSH ESI                            ; 00433ef7
    FSTP float ptr [ESP + 0x28]         ; 00433ef8
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0 ; 00433efc | void cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0(int x, int y, float blend_factor, int palette_index)
        ;   XREF to: 004342f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00433f01
    MOV EDX,dword ptr [EBP + 0x24]      ; 00433f04
    PUSH EDX                            ; 00433f07
    PUSH dword ptr [ESP + 0x1c]         ; 00433f08
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00433f0c
    PUSH EBX                            ; 00433f10
    ADD EAX,ESI                         ; 00433f11
    PUSH EAX                            ; 00433f13
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0 ; 00433f14 | void cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0(int x, int y, float blend_factor, int palette_index)
        ;   XREF to: 004342f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00433f19
    JMP 0x00433e9a                      ; 00433f1c | LAB_00433e9a
        ;   XREF to: 00433e9a (UNCONDITIONAL_JUMP)
    ADD ESI,dword ptr [ESP + 0x24]      ; 00433f21
        ;   Label: LAB_00433f21
    JMP 0x00433ebb                      ; 00433f25 | LAB_00433ebb
        ;   XREF to: 00433ebb (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBP + 0x24]      ; 00433f27
        ;   Label: LAB_00433f27
    PUSH ECX                            ; 00433f2a
    MOV EBX,dword ptr [EBP + 0x20]      ; 00433f2b
    PUSH EBX                            ; 00433f2e
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00433f2f
    PUSH ESI                            ; 00433f32
    CALL cockpit_ckptutil.c_putPixel_FUN_004345c0 ; 00433f33 | void cockpit_ckptutil.c_putPixel_FUN_004345c0(int x, int y, int color)
        ;   XREF to: 004345c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00433f38
    MOV ESP,EBP                         ; 00433f3b
    POP EBP                             ; 00433f3d
    POP EDI                             ; 00433f3e
    POP ESI                             ; 00433f3f
    POP EBX                             ; 00433f40
    RET                                 ; 00433f41

