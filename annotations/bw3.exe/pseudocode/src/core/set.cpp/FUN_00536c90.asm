; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_00536c90(CDemonSet *param_1)
;
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
;
; XREF[1]:
;   core_set.cpp_FUN_00535da0 at 005360ac
;
; Referenced Globals:
;   undefined4 DAT_005d05e7
;   undefined4 DAT_005f2afc
;   CGame* g_CGamePtr = 01d2130c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   undefined4 g_CGameInstance.field588_0x24c
;   undefined4 DAT_01d5ba14
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_0207bab8
;   undefined4 DAT_0207babc
;   undefined4 DAT_0207bac0
;
; Called Functions:
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0
;   core_set.cpp_FUN_0053adf0
;   core_set.cpp_FUN_0053b100
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00536c90
        ;   Label: core_set.cpp_FUN_00536c90
    PUSH ESI                            ; 00536c91
    PUSH EDI                            ; 00536c92
    PUSH EBP                            ; 00536c93
    SUB ESP,0x64                        ; 00536c94
    MOV EBP,dword ptr [ESP + 0x78]      ; 00536c97
    XOR EDX,EDX                         ; 00536c9b
    MOV EAX,[0x005fe9dc]                ; 00536c9d | g_CGamePtr
    MOV dword ptr [0x0207babc],EDX      ; 00536ca2 | DAT_0207babc
    MOV EBX,dword ptr [EAX + 0x24c]     ; 00536ca8 | g_CGameInstance.field588_0x24c
    MOV dword ptr [0x0207bab8],EDX      ; 00536cae | DAT_0207bab8
    TEST EBX,EBX                        ; 00536cb4
    JNZ 0x00536d0d                      ; 00536cb6
        ;   XREF to: 00536d0d (CONDITIONAL_JUMP)  ; LAB_00536d0d
    MOV EAX,[0x01d5ba14]                ; 00536cb8 | DAT_01d5ba14
    SHL EAX,0x2                         ; 00536cbd
    MOV ESI,dword ptr [EAX + 0x1d5ba04] ; 00536cc0
    TEST ESI,ESI                        ; 00536cc6
    JZ 0x00536d0d                       ; 00536cc8
        ;   XREF to: 00536d0d (CONDITIONAL_JUMP)  ; LAB_00536d0d
    MOV EDI,dword ptr [ESI + 0x20b68]   ; 00536cca
    MOV EAX,ESI                         ; 00536cd0
    TEST EDI,EDI                        ; 00536cd2
    JZ 0x00536ce1                       ; 00536cd4
        ;   XREF to: 00536ce1 (CONDITIONAL_JUMP)  ; LAB_00536ce1
    MOV EAX,dword ptr [ESI + 0x20b70]   ; 00536cd6
    MOV [0x0207bab8],EAX                ; 00536cdc | DAT_0207bab8
    MOV EAX,[0x01d5ba14]                ; 00536ce1 | DAT_01d5ba14
        ;   Label: LAB_00536ce1
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00536ce6
    FLD float ptr [EAX + 0x20b90]       ; 00536ced
    MOV EDX,dword ptr [EAX + 0x20b8c]   ; 00536cf3
    FCOS                                ; 00536cf9
    FADD double ptr [0x005d05e7]        ; 00536cfb | DAT_005d05e7
    MOV dword ptr [0x0207babc],EDX      ; 00536d01 | DAT_0207babc
    FSTP float ptr [0x0207bac0]         ; 00536d07 | DAT_0207bac0
    MOV EAX,dword ptr [EBP + 0x15f6fc]  ; 00536d0d
        ;   Label: LAB_00536d0d
    DEC EAX                             ; 00536d13
    MOV dword ptr [ESP + 0x4c],EAX      ; 00536d14
    TEST EAX,EAX                        ; 00536d18
    JL 0x00536d57                       ; 00536d1a
        ;   XREF to: 00536d57 (CONDITIONAL_JUMP)  ; LAB_00536d57
    SHL EAX,0x2                         ; 00536d1c
    ADD EAX,EBP                         ; 00536d1f
    MOV dword ptr [ESP + 0x48],EAX      ; 00536d21
    MOV EBX,dword ptr [ESP + 0x48]      ; 00536d25
        ;   Label: LAB_00536d25
    MOV EBX,dword ptr [EBX + 0x15f700]  ; 00536d29
    CMP dword ptr [EBX + 0xf8],0x0      ; 00536d2f
    JNZ 0x00536d5f                      ; 00536d36
        ;   XREF to: 00536d5f (CONDITIONAL_JUMP)  ; LAB_00536d5f
    AND byte ptr [EBX + 0x144],0xfb     ; 00536d38
    MOV EDX,dword ptr [ESP + 0x48]      ; 00536d3f
        ;   Label: LAB_00536d3f
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00536d43
    SUB EDX,0x4                         ; 00536d47
    DEC ECX                             ; 00536d4a
    MOV dword ptr [ESP + 0x48],EDX      ; 00536d4b
    MOV dword ptr [ESP + 0x4c],ECX      ; 00536d4f
    TEST ECX,ECX                        ; 00536d53
    JGE 0x00536d25                      ; 00536d55
        ;   XREF to: 00536d25 (CONDITIONAL_JUMP)  ; LAB_00536d25
    ADD ESP,0x64                        ; 00536d57
        ;   Label: LAB_00536d57
    POP EBP                             ; 00536d5a
    POP EDI                             ; 00536d5b
    POP ESI                             ; 00536d5c
    POP EBX                             ; 00536d5d
    RET                                 ; 00536d5e
    PUSH EBX                            ; 00536d5f
        ;   Label: LAB_00536d5f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00536d60
    LEA ESI,[ESP + 0x1c]                ; 00536d66
    LEA EDI,[ESP + 0x4]                 ; 00536d6a
    CALL dword ptr [EAX + 0x1c]         ; 00536d6e
    MOV ECX,0x6                         ; 00536d71
    LEA ESI,[ESP + 0x1c]                ; 00536d76
    ADD ESP,0x4                         ; 00536d7a
    MOVSD.REP ES:EDI,ESI                ; 00536d7d
    MOV EDX,ESP                         ; 00536d7f
    LEA ESI,[ESP + 0x30]                ; 00536d81
    CMP ESI,EDX                         ; 00536d85
    JZ 0x00536da0                       ; 00536d87
        ;   XREF to: 00536da0 (CONDITIONAL_JUMP)  ; LAB_00536da0
    MOV EAX,dword ptr [ESP]             ; 00536d89
    MOV dword ptr [ESP + 0x30],EAX      ; 00536d8c
    MOV EAX,dword ptr [ESP + 0x4]       ; 00536d90
    MOV dword ptr [ESP + 0x34],EAX      ; 00536d94
    MOV EAX,dword ptr [ESP + 0x8]       ; 00536d98
    MOV dword ptr [ESP + 0x38],EAX      ; 00536d9c
    LEA EAX,[ESP + 0x3c]                ; 00536da0
        ;   Label: LAB_00536da0
    ADD EDX,0xc                         ; 00536da4
    CMP EAX,EDX                         ; 00536da7
    JZ 0x00536dbf                       ; 00536da9
        ;   XREF to: 00536dbf (CONDITIONAL_JUMP)  ; LAB_00536dbf
    MOV EAX,dword ptr [EDX]             ; 00536dab
    MOV dword ptr [ESP + 0x3c],EAX      ; 00536dad
    MOV EAX,dword ptr [EDX + 0x4]       ; 00536db1
    MOV dword ptr [ESP + 0x40],EAX      ; 00536db4
    MOV EAX,dword ptr [EDX + 0x8]       ; 00536db8
    MOV dword ptr [ESP + 0x44],EAX      ; 00536dbb
    LEA EAX,[EBX + 0x3c]                ; 00536dbf
        ;   Label: LAB_00536dbf
    PUSH EAX                            ; 00536dc2
    LEA EAX,[ESP + 0x40]                ; 00536dc3
    PUSH EAX                            ; 00536dc7
    LEA EAX,[ESP + 0x38]                ; 00536dc8
    PUSH EAX                            ; 00536dcc
    LEA EAX,[EBX + 0x30]                ; 00536dcd
    PUSH EAX                            ; 00536dd0
    LEA EAX,[EBX + 0x20]                ; 00536dd1
    PUSH EAX                            ; 00536dd4
    PUSH EBP                            ; 00536dd5
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0 ; 00536dd6
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 00536ddb
    MOV EAX,dword ptr [EBX + 0x108]     ; 00536dde
    MOV dword ptr [ESP + 0x50],EAX      ; 00536de4
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00536de8
    MOV ESI,EBX                         ; 00536dee
    MOV dword ptr [ESP + 0x54],EAX      ; 00536df0
    MOV EAX,dword ptr [EBX + 0x110]     ; 00536df4
    MOV EDI,dword ptr [0x0207bab8]      ; 00536dfa | DAT_0207bab8
    MOV dword ptr [ESP + 0x58],EAX      ; 00536e00
    CMP EBX,EDI                         ; 00536e04
    JNZ 0x00536e44                      ; 00536e06
        ;   XREF to: 00536e44 (CONDITIONAL_JUMP)  ; LAB_00536e44
    MOV EDX,dword ptr [ESP + 0x50]      ; 00536e08
    LEA EDX,[EDX + EDX*0x2]             ; 00536e0c
    MOV EAX,EDX                         ; 00536e0f
    SAR EDX,0x1f                        ; 00536e11
    SUB EAX,EDX                         ; 00536e14
    SAR EAX,0x1                         ; 00536e16
    MOV EDX,dword ptr [ESP + 0x54]      ; 00536e18
    LEA EDX,[EDX + EDX*0x2]             ; 00536e1c
    MOV dword ptr [ESP + 0x50],EAX      ; 00536e1f
    MOV EAX,EDX                         ; 00536e23
    SAR EDX,0x1f                        ; 00536e25
    SUB EAX,EDX                         ; 00536e28
    SAR EAX,0x1                         ; 00536e2a
    MOV EDX,dword ptr [ESP + 0x58]      ; 00536e2c
    LEA EDX,[EDX + EDX*0x2]             ; 00536e30
    MOV dword ptr [ESP + 0x54],EAX      ; 00536e33
    MOV EAX,EDX                         ; 00536e37
    SAR EDX,0x1f                        ; 00536e39
    SUB EAX,EDX                         ; 00536e3c
    SAR EAX,0x1                         ; 00536e3e
    MOV dword ptr [ESP + 0x58],EAX      ; 00536e40
    CMP ESI,dword ptr [0x0207babc]      ; 00536e44 | DAT_0207babc
        ;   Label: LAB_00536e44
    JNZ 0x00536ea5                      ; 00536e4a
        ;   XREF to: 00536ea5 (CONDITIONAL_JUMP)  ; LAB_00536ea5
    MOV EAX,dword ptr [ESP + 0x50]      ; 00536e4c
    MOV dword ptr [ESP + 0x5c],EAX      ; 00536e50
    MOV EAX,dword ptr [ESP + 0x54]      ; 00536e54
    MOV dword ptr [ESP + 0x60],EAX      ; 00536e58
    FILD dword ptr [ESP + 0x60]         ; 00536e5c
    FLD1                                ; 00536e60
    FLD float ptr [0x0207bac0]          ; 00536e62 | DAT_0207bac0
    FXCH                                ; 00536e68
    FDIV ST0,ST1                        ; 00536e6a
    FILD dword ptr [ESP + 0x5c]         ; 00536e6c
    FMULP ST2                           ; 00536e70
    MOV EAX,dword ptr [ESP + 0x58]      ; 00536e72
    MOV dword ptr [ESP + 0x60],EAX      ; 00536e76
    FXCH ST2                            ; 00536e7a
    FMUL ST2                            ; 00536e7c
    FILD dword ptr [ESP + 0x60]         ; 00536e7e
    FMULP ST3                           ; 00536e82
    FXCH                                ; 00536e84
    CALL crt_math.c_round_FUN_005a3120  ; 00536e86
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x50]        ; 00536e8b
    CALL crt_math.c_round_FUN_005a3120  ; 00536e8f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00536e94
    CALL crt_math.c_round_FUN_005a3120  ; 00536e96
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00536e9b
    FISTP dword ptr [ESP + 0x54]        ; 00536e9d
    FISTP dword ptr [ESP + 0x58]        ; 00536ea1
    MOV EDX,dword ptr [ESP + 0x58]      ; 00536ea5
        ;   Label: LAB_00536ea5
    PUSH EDX                            ; 00536ea9
    MOV ECX,dword ptr [ESP + 0x58]      ; 00536eaa
    PUSH ECX                            ; 00536eae
    MOV ESI,dword ptr [ESP + 0x58]      ; 00536eaf
    PUSH ESI                            ; 00536eb3
    MOV EDI,dword ptr [0x00603b28]      ; 00536eb4 | g_CDemonSetPtr
    PUSH EDI                            ; 00536eba | g_CDemonSetInstance
    CALL core_set.cpp_FUN_0053b100      ; 00536ebb
        ;   XREF to: 0053b100 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0053b100(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 00536ec0
    PUSH 0xffff                         ; 00536ec3
    MOV EAX,[0x005f2afc]                ; 00536ec8 | DAT_005f2afc
    PUSH EAX                            ; 00536ecd | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 00536ece
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00536ed3
    MOV EAX,dword ptr [EBX + 0x154]     ; 00536ed6
    PUSH EBX                            ; 00536edc
    CALL dword ptr [EAX + 0x10]         ; 00536edd
    ADD ESP,0x4                         ; 00536ee0
    TEST EAX,EAX                        ; 00536ee3
    JZ 0x00536f75                       ; 00536ee5
        ;   XREF to: 00536f75 (CONDITIONAL_JUMP)  ; LAB_00536f75
    OR byte ptr [EBX + 0x144],0x4       ; 00536eeb
    PUSH 0x1                            ; 00536ef2
        ;   Label: LAB_00536ef2
    MOV EDX,dword ptr [0x005f2afc]      ; 00536ef4 | DAT_005f2afc
    PUSH EDX                            ; 00536efa | DAT_01bdd7e4
    XOR ESI,ESI                         ; 00536efb
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 00536efd
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    MOV ECX,dword ptr [EBP + 0x15acc8]  ; 00536f02
    ADD ESP,0x8                         ; 00536f08
    TEST ECX,ECX                        ; 00536f0b
    JLE 0x00536f58                      ; 00536f0d
        ;   XREF to: 00536f58 (CONDITIONAL_JUMP)  ; LAB_00536f58
    PUSH 0x0                            ; 00536f0f
        ;   Label: LAB_00536f0f
    PUSH ESI                            ; 00536f11
    PUSH EBP                            ; 00536f12
    CALL core_set.cpp_FUN_0053adf0      ; 00536f13
        ;   XREF to: 0053adf0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0053adf0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 00536f18
    MOV EAX,dword ptr [EBX + 0x154]     ; 00536f1b
    PUSH EBX                            ; 00536f21
    CALL dword ptr [EAX + 0x10]         ; 00536f22
    ADD ESP,0x4                         ; 00536f25
    TEST EAX,EAX                        ; 00536f28
    JZ 0x00536f33                       ; 00536f2a
        ;   XREF to: 00536f33 (CONDITIONAL_JUMP)  ; LAB_00536f33
    OR byte ptr [EBX + 0x144],0x4       ; 00536f2c
    PUSH 0x1                            ; 00536f33
        ;   Label: LAB_00536f33
    MOV EDI,dword ptr [0x005f2afc]      ; 00536f35 | DAT_005f2afc
    PUSH EDI                            ; 00536f3b | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 00536f3c
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00536f41
    PUSH EBP                            ; 00536f44
    INC ESI                             ; 00536f45
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20 ; 00536f46
        ;   XREF to: 0053af20 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(CDemonSet * this_ptr)
    MOV EAX,dword ptr [EBP + 0x15acc8]  ; 00536f4b
    ADD ESP,0x4                         ; 00536f51
    CMP ESI,EAX                         ; 00536f54
    JL 0x00536f0f                       ; 00536f56
        ;   XREF to: 00536f0f (CONDITIONAL_JUMP)  ; LAB_00536f0f
    PUSH 0x10000                        ; 00536f58
        ;   Label: LAB_00536f58
    PUSH 0x10000                        ; 00536f5d
    PUSH 0x10000                        ; 00536f62
    PUSH EBP                            ; 00536f67
    CALL core_set.cpp_FUN_0053b100      ; 00536f68
        ;   XREF to: 0053b100 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0053b100(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 00536f6d
    JMP 0x00536d3f                      ; 00536f70
        ;   XREF to: 00536d3f (UNCONDITIONAL_JUMP)  ; LAB_00536d3f
    AND byte ptr [EBX + 0x144],0xfb     ; 00536f75
        ;   Label: LAB_00536f75
    JMP 0x00536ef2                      ; 00536f7c
        ;   XREF to: 00536ef2 (UNCONDITIONAL_JUMP)  ; LAB_00536ef2

