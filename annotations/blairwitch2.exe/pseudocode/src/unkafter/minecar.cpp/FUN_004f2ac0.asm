; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_minecar_cpp_FUN_004f2ac0(float param_1,float param_2,float param_3,float param_4)
;
;
; XREF[4]:
;   engine_mini3d.cpp_FUN_004f5dec at 004f5e34
;   shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047e780 at 0047e7cb
;   shape_edittool.cpp_FUN_0047e2b0 at 0047e6a0
;   shape_edittool.cpp_FUN_0047e870 at 0047e956
;
; Referenced Globals:
;   undefined4 DAT_005ddae8
;   undefined4 DAT_005ddaec
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d0986c
;   undefined4 DAT_01d09870
;   undefined4 DAT_01d09874
;   undefined4 DAT_01d09878
;   undefined4 DAT_01d0987c
;   undefined4 DAT_01d09880
;   undefined4 DAT_01d09884
;   undefined4 DAT_01d09888
;   undefined4 DAT_01d098dc
;   undefined4 DAT_01d098e0
;   undefined4 DAT_01d0c398
;   undefined4 DAT_01d0d2b4
;   ... and 1 more
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f53d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f2ac0
        ;   Label: unkafter_minecar.cpp_FUN_004f2ac0
    SUB ESP,0x8                         ; 004f2ac1
    FLD float ptr [ESP + 0x1c]          ; 004f2ac4
    FLD float ptr [ESP + 0x18]          ; 004f2ac8
    FSUB float ptr [ESP + 0x10]         ; 004f2acc
    FXCH                                ; 004f2ad0
    FSUB float ptr [ESP + 0x14]         ; 004f2ad2
    FXCH                                ; 004f2ad6
    FLD float ptr [0x005ddae8]          ; 004f2ad8 | DAT_005ddae8
    FXCH                                ; 004f2ade
    FMUL ST1                            ; 004f2ae0
    FXCH ST2                            ; 004f2ae2
    FMULP                               ; 004f2ae4
    FLD float ptr [ESP + 0x10]          ; 004f2ae6
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f2aea
    FLD float ptr [ESP + 0x14]          ; 004f2aee
    MOV [0x01d0986c],EAX                ; 004f2af2 | DAT_01d0986c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f2af7
    MOV EDX,dword ptr [0x01d0d2b4]      ; 004f2afb | DAT_01d0d2b4
    MOV [0x01d09870],EAX                ; 004f2b01 | DAT_01d09870
    FLD ST3                             ; 004f2b06
    FLD ST3                             ; 004f2b08
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f2b0a
    FCHS                                ; 004f2b0e
    FLD1                                ; 004f2b10
    FXCH ST4                            ; 004f2b12
    FADDP ST6,ST0                       ; 004f2b14
    FXCH ST2                            ; 004f2b16
    FADDP ST4,ST0                       ; 004f2b18
    MOV [0x01d09874],EAX                ; 004f2b1a | DAT_01d09874
    FXCH ST4                            ; 004f2b1f
    FSTP float ptr [0x01d09884]         ; 004f2b21 | DAT_01d09884
    FXCH ST3                            ; 004f2b27
    FADD float ptr [0x005ddaec]         ; 004f2b29 | DAT_005ddaec
    FXCH ST2                            ; 004f2b2f
    FSTP float ptr [0x01d09888]         ; 004f2b31 | DAT_01d09888
    FXCH                                ; 004f2b37
    FSTP float ptr [0x01d0987c]         ; 004f2b39 | DAT_01d0987c
    FADDP                               ; 004f2b3f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f2b41
    FSTP float ptr [0x01d09880]         ; 004f2b45 | DAT_01d09880
    MOV [0x01d09878],EAX                ; 004f2b4b | DAT_01d09878
    TEST EDX,EDX                        ; 004f2b50
    JNZ 0x004f2b88                      ; 004f2b52
        ;   XREF to: 004f2b88 (CONDITIONAL_JUMP)  ; LAB_004f2b88
    CMP dword ptr [0x0264bc74],0x0      ; 004f2b54 | DAT_0264bc74
    JZ 0x004f2b88                       ; 004f2b5b
        ;   XREF to: 004f2b88 (CONDITIONAL_JUMP)  ; LAB_004f2b88
    CMP dword ptr [0x01c37788],0x0      ; 004f2b5d | DAT_01c37788
    JZ 0x004f2b88                       ; 004f2b64
        ;   XREF to: 004f2b88 (CONDITIONAL_JUMP)  ; LAB_004f2b88
    PUSH dword ptr [0x01d098e0]         ; 004f2b66 | DAT_01d098e0
    PUSH dword ptr [0x01d098dc]         ; 004f2b6c | DAT_01d098dc
    PUSH EAX                            ; 004f2b72
    PUSH dword ptr [ESP + 0x24]         ; 004f2b73
    PUSH dword ptr [ESP + 0x24]         ; 004f2b77
    PUSH dword ptr [ESP + 0x24]         ; 004f2b7b
    CALL dword ptr [0x0264bc74]         ; 004f2b7f | DAT_0264bc74
    ADD ESP,0x18                        ; 004f2b85
    MOV ESI,0x1                         ; 004f2b88
        ;   Label: LAB_004f2b88
    CALL engine_mini3d.cpp_FUN_004f53d0 ; 004f2b8d
        ;   XREF to: 004f53d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f53d0()
    MOV dword ptr [0x01d0c398],ESI      ; 004f2b92 | DAT_01d0c398
    ADD ESP,0x8                         ; 004f2b98
    POP ESI                             ; 004f2b9b
    RET                                 ; 004f2b9c

