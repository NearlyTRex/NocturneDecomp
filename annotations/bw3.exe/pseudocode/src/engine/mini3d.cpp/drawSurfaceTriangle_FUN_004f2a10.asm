; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_drawSurfaceTriangle_FUN_004f2a10(float *v0,float *v1,float *v2)
;
; Parameters:
; float *          Stack[0x4]:4   v0
; float *          Stack[0x8]:4   v1
; float *          Stack[0xc]:4   v2
;
; XREF[1]:
;   engine_mini3d.cpp_polyListSurface_FUN_004f2490 at 004f25e8
;
; Referenced Globals:
;   undefined4 DAT_01d76c5c
;   undefined4 DAT_01d76c60
;   undefined4 DAT_01d76c64
;   undefined4 DAT_01d76c68
;   undefined4 DAT_01d76f68
;   undefined4 DAT_01d76f6c
;   undefined4 DAT_01d76f70
;   undefined4 DAT_01d76f74
;   undefined4 DAT_01d76f78
;   undefined4 DAT_01d7777c
;   undefined4 DAT_01d77780
;   undefined4 DAT_01d77784
;   undefined4 DAT_01d777bc
;   undefined4 DAT_01d777c0
;   undefined4 DAT_01d777c4
;   ... and 13 more
;
; Called Functions:
;   engine_mini3d.cpp_clampClippedPolygon_FUN_004f0d00
;   engine_mini3d.cpp_clipAgainstPlane0_FUN_004f0850
;   engine_mini3d.cpp_clipAgainstPlane1_FUN_004f0980
;   engine_mini3d.cpp_clipAgainstPlane2_FUN_004f0ab0
;   engine_mini3d.cpp_clipAgainstPlane3_FUN_004f0be0
;   engine_mini3d.cpp_fillSurfaceTriangle_FUN_004f27a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2a10
        ;   Label: engine_mini3d.cpp_drawSurfaceTriangle_FUN_004f2a10
    PUSH ESI                            ; 004f2a11
    PUSH EDI                            ; 004f2a12
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f2a13
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f2a17
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f2a1b
    MOV ECX,dword ptr [EBX + 0x10]      ; 004f2a1f
    MOV ESI,dword ptr [EAX + 0x10]      ; 004f2a22
    MOV EDI,dword ptr [EDX + 0x10]      ; 004f2a25
    AND ESI,ECX                         ; 004f2a28
    TEST ESI,EDI                        ; 004f2a2a
    JNZ 0x004f2ac9                      ; 004f2a2c
        ;   XREF to: 004f2ac9 (CONDITIONAL_JUMP)  ; LAB_004f2ac9
    MOV ESI,dword ptr [EAX + 0x10]      ; 004f2a32
    OR ESI,ECX                          ; 004f2a35
    OR ESI,EDI                          ; 004f2a37
    JZ 0x004f2acd                       ; 004f2a39
        ;   XREF to: 004f2acd (CONDITIONAL_JUMP)  ; LAB_004f2acd
    FLD float ptr [EAX]                 ; 004f2a3f
    FLD float ptr [EAX + 0x4]           ; 004f2a41
    FLD float ptr [EAX + 0x8]           ; 004f2a44
    FLD float ptr [EBX]                 ; 004f2a47
    FLD float ptr [EBX + 0x4]           ; 004f2a49
    FLD float ptr [EBX + 0x8]           ; 004f2a4c
    FLD float ptr [EDX]                 ; 004f2a4f
    MOV ESI,0x3                         ; 004f2a51
    FXCH ST6                            ; 004f2a56
    FSTP float ptr [0x01d7777c]         ; 004f2a58 | DAT_01d7777c
    FLD float ptr [EDX + 0x4]           ; 004f2a5e
    FXCH ST5                            ; 004f2a61
    FSTP float ptr [0x01d77780]         ; 004f2a63 | DAT_01d77780
    FLD float ptr [EDX + 0x8]           ; 004f2a69
    FXCH ST4                            ; 004f2a6c
    FSTP float ptr [0x01d77784]         ; 004f2a6e | DAT_01d77784
    FXCH ST2                            ; 004f2a74
    FSTP float ptr [0x01d777bc]         ; 004f2a76 | DAT_01d777bc
    FSTP float ptr [0x01d777c0]         ; 004f2a7c | DAT_01d777c0
    FSTP float ptr [0x01d777c4]         ; 004f2a82 | DAT_01d777c4
    FXCH ST2                            ; 004f2a88
    FSTP float ptr [0x01d777fc]         ; 004f2a8a | DAT_01d777fc
    FSTP float ptr [0x01d77800]         ; 004f2a90 | DAT_01d77800
    FSTP float ptr [0x01d77804]         ; 004f2a96 | DAT_01d77804
    XOR EDI,EDI                         ; 004f2a9c
    MOV dword ptr [0x01d76f68],ESI      ; 004f2a9e | DAT_01d76f68
    MOV dword ptr [0x01d76f6c],EDI      ; 004f2aa4 | DAT_01d76f6c
    MOV dword ptr [0x01d76f70],EDI      ; 004f2aaa | DAT_01d76f70
    MOV dword ptr [0x01d76f74],EDI      ; 004f2ab0 | DAT_01d76f74
    MOV dword ptr [0x01d76f78],EDI      ; 004f2ab6 | DAT_01d76f78
    CALL engine_mini3d.cpp_clipAgainstPlane0_FUN_004f0850 ; 004f2abc
        ;   XREF to: 004f0850 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_clipAgainstPlane0_FUN_004f0850()
    CMP ESI,dword ptr [0x01d76f6c]      ; 004f2ac1 | DAT_01d76f6c
    JLE 0x004f2adc                      ; 004f2ac7
        ;   XREF to: 004f2adc (CONDITIONAL_JUMP)  ; LAB_004f2adc
    POP EDI                             ; 004f2ac9
        ;   Label: LAB_004f2ac9
    POP ESI                             ; 004f2aca
    POP EBX                             ; 004f2acb
    RET                                 ; 004f2acc
    PUSH EDX                            ; 004f2acd
        ;   Label: LAB_004f2acd
    PUSH EBX                            ; 004f2ace
    PUSH EAX                            ; 004f2acf
    CALL engine_mini3d.cpp_fillSurfaceTriangle_FUN_004f27a0 ; 004f2ad0
        ;   XREF to: 004f27a0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillSurfaceTriangle_FUN_004f27a0(float * v0, float * v1, float * v2)
    ADD ESP,0xc                         ; 004f2ad5
    POP EDI                             ; 004f2ad8
    POP ESI                             ; 004f2ad9
    POP EBX                             ; 004f2ada
    RET                                 ; 004f2adb
    CALL engine_mini3d.cpp_clipAgainstPlane1_FUN_004f0980 ; 004f2adc
        ;   XREF to: 004f0980 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_clipAgainstPlane1_FUN_004f0980()
        ;   Label: LAB_004f2adc
    CMP ESI,dword ptr [0x01d76f70]      ; 004f2ae1 | DAT_01d76f70
    JG 0x004f2ac9                       ; 004f2ae7
        ;   XREF to: 004f2ac9 (CONDITIONAL_JUMP)  ; LAB_004f2ac9
    CALL engine_mini3d.cpp_clipAgainstPlane2_FUN_004f0ab0 ; 004f2ae9
        ;   XREF to: 004f0ab0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_clipAgainstPlane2_FUN_004f0ab0()
    CMP ESI,dword ptr [0x01d76f74]      ; 004f2aee | DAT_01d76f74
    JG 0x004f2ac9                       ; 004f2af4
        ;   XREF to: 004f2ac9 (CONDITIONAL_JUMP)  ; LAB_004f2ac9
    CALL engine_mini3d.cpp_clipAgainstPlane3_FUN_004f0be0 ; 004f2af6
        ;   XREF to: 004f0be0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_clipAgainstPlane3_FUN_004f0be0()
    CMP ESI,dword ptr [0x01d76f78]      ; 004f2afb | DAT_01d76f78
    JG 0x004f2ac9                       ; 004f2b01
        ;   XREF to: 004f2ac9 (CONDITIONAL_JUMP)  ; LAB_004f2ac9
    CALL engine_mini3d.cpp_clampClippedPolygon_FUN_004f0d00 ; 004f2b03
        ;   XREF to: 004f0d00 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_clampClippedPolygon_FUN_004f0d00()
    MOV ECX,dword ptr [0x01d76f78]      ; 004f2b08 | DAT_01d76f78
    XOR EDX,EDX                         ; 004f2b0e
    TEST ECX,ECX                        ; 004f2b10
    JLE 0x004f2b70                      ; 004f2b12
        ;   XREF to: 004f2b70 (CONDITIONAL_JUMP)  ; LAB_004f2b70
    FLD float ptr [0x01d76c68]          ; 004f2b14 | DAT_01d76c68
    MOV EAX,0x1d78f7c                   ; 004f2b1a
    FLD float ptr [0x01d76c64]          ; 004f2b1f | DAT_01d76c64
    FLD float ptr [0x01d76c5c]          ; 004f2b25 | DAT_01d76c5c
    FLD float ptr [EAX + 0x8]           ; 004f2b2b | DAT_01d78f84 | DAT_01d78fc4
        ;   Label: LAB_004f2b2b
    FLD1                                ; 004f2b2e
    FDIVRP                              ; 004f2b30
    FLD float ptr [EAX]                 ; 004f2b32 | DAT_01d78f7c | DAT_01d78fbc
    FMUL ST2                            ; 004f2b34
    FLD float ptr [EAX + 0x4]           ; 004f2b36 | DAT_01d78f80 | DAT_01d78fc0
    FMUL float ptr [0x01d76c60]         ; 004f2b39 | DAT_01d76c60
    FXCH ST2                            ; 004f2b3f
    FSTP float ptr [EAX + 0xc]          ; 004f2b41 | DAT_01d78f88 | DAT_01d78fc8
    FMUL float ptr [EAX + 0xc]          ; 004f2b44 | DAT_01d78f88 | DAT_01d78fc8
    FXCH                                ; 004f2b47
    FMUL float ptr [EAX + 0xc]          ; 004f2b49 | DAT_01d78f88 | DAT_01d78fc8
    MOV EBX,dword ptr [0x01d76f78]      ; 004f2b4c | DAT_01d76f78
    ADD EAX,0x40                        ; 004f2b52
    INC EDX                             ; 004f2b55
    FLD ST4                             ; 004f2b56
    FLD ST4                             ; 004f2b58
    FADDP ST3,ST0                       ; 004f2b5a
    FADDP                               ; 004f2b5c
    FXCH                                ; 004f2b5e
    FSTP float ptr [EAX + -0x2c]        ; 004f2b60 | DAT_01d78f90
    FSTP float ptr [EAX + -0x28]        ; 004f2b63 | DAT_01d78f94
    CMP EDX,EBX                         ; 004f2b66
    JL 0x004f2b2b                       ; 004f2b68
        ;   XREF to: 004f2b2b (CONDITIONAL_JUMP)  ; LAB_004f2b2b
    FSTP ST0                            ; 004f2b6a
    FSTP ST0                            ; 004f2b6c
    FSTP ST0                            ; 004f2b6e
    MOV ESI,0x1d78f7c                   ; 004f2b70
        ;   Label: LAB_004f2b70
    MOV EDI,0x1d78f7c                   ; 004f2b75
    XOR EBX,EBX                         ; 004f2b7a
    ADD ESI,0x40                        ; 004f2b7c
    ADD EDI,0x80                        ; 004f2b7f
    MOV EAX,[0x01d76f78]                ; 004f2b85 | DAT_01d76f78
        ;   Label: LAB_004f2b85
    SUB EAX,0x2                         ; 004f2b8a
    CMP EBX,EAX                         ; 004f2b8d
    JGE 0x004f2ac9                      ; 004f2b8f
        ;   XREF to: 004f2ac9 (CONDITIONAL_JUMP)  ; LAB_004f2ac9
    PUSH EDI                            ; 004f2b95
    PUSH ESI                            ; 004f2b96
    PUSH 0x1d78f7c                      ; 004f2b97
    INC EBX                             ; 004f2b9c
    ADD EDI,0x40                        ; 004f2b9d
    CALL engine_mini3d.cpp_fillSurfaceTriangle_FUN_004f27a0 ; 004f2ba0
        ;   XREF to: 004f27a0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillSurfaceTriangle_FUN_004f27a0(float * v0, float * v1, float * v2)
    ADD ESI,0x40                        ; 004f2ba5
    ADD ESP,0xc                         ; 004f2ba8
    JMP 0x004f2b85                      ; 004f2bab
        ;   XREF to: 004f2b85 (UNCONDITIONAL_JUMP)  ; LAB_004f2b85

