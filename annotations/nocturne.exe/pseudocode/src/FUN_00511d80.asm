; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00511d80(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
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
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_00590bc5
;   undefined4 DAT_00590bcd
;   undefined4 DAT_005a1a70
;   undefined4 DAT_005a1a88
;   undefined4 DAT_005a1a8c
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b9354
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01bd4260
;   undefined4 DAT_01c777d4
;   undefined4 DAT_020845f4
;   undefined4 DAT_020845f8
;   undefined4 DAT_020845f9
;   undefined4 DAT_020875f8
;   undefined4 DAT_020875fc
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70
;   core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00514980
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
;   engine_matrix.c_projectTransformedPoint_FUN_004cd260
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511d80
        ;   Label: FUN_00511d80
    PUSH ESI                            ; 00511d81
    PUSH EDI                            ; 00511d82
    PUSH EBP                            ; 00511d83
    MOV EBP,ESP                         ; 00511d84
    SUB ESP,0xc8                        ; 00511d86
    AND ESP,0xfffffff8                  ; 00511d8c
    MOV EAX,dword ptr [EBP + 0x24]      ; 00511d8f
    MOV EDX,dword ptr [EAX + 0x19c]     ; 00511d92
    TEST EDX,EDX                        ; 00511d98
    JZ 0x00511def                       ; 00511d9a
        ;   XREF to: 00511def (CONDITIONAL_JUMP)  ; LAB_00511def
    LEA ESI,[EAX + 0x100]               ; 00511d9c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00511da2
    FLD float ptr [ESI]                 ; 00511da5
    FSUB float ptr [EBX + 0x20]         ; 00511da7
    FMUL ST0                            ; 00511daa
    FLD float ptr [ESI + 0x4]           ; 00511dac
    FSUB float ptr [EBX + 0x24]         ; 00511daf
    FMUL ST0                            ; 00511db2
    FLD float ptr [ESI + 0x8]           ; 00511db4
    FXCH                                ; 00511db7
    FADDP ST2,ST0                       ; 00511db9
    FSUB float ptr [EBX + 0x28]         ; 00511dbb
    FMUL ST0                            ; 00511dbe
    FLD float ptr [0x005a1a88]          ; 00511dc0 | DAT_005a1a88
    FMUL ST0                            ; 00511dc6
    FXCH                                ; 00511dc8
    FADDP ST2,ST0                       ; 00511dca
    ADD EBX,0x20                        ; 00511dcc
    FXCH                                ; 00511dcf
    FCOMPP                              ; 00511dd1
    FNSTSW AX                           ; 00511dd3
    SAHF                                ; 00511dd5
    JBE 0x00511df8                      ; 00511dd6
        ;   XREF to: 00511df8 (CONDITIONAL_JUMP)  ; LAB_00511df8
    XOR EBX,EBX                         ; 00511dd8
    MOV dword ptr [ESP + 0x88],EBX      ; 00511dda
    MOV EAX,dword ptr [ESP + 0x88]      ; 00511de1
        ;   Label: LAB_00511de1
    MOV ESP,EBP                         ; 00511de8
    POP EBP                             ; 00511dea
    POP EDI                             ; 00511deb
    POP ESI                             ; 00511dec
    POP EBX                             ; 00511ded
    RET                                 ; 00511dee
    MOV dword ptr [ESP + 0x88],EDX      ; 00511def
        ;   Label: LAB_00511def
    JMP 0x00511de1                      ; 00511df6
        ;   XREF to: 00511de1 (UNCONDITIONAL_JUMP)  ; LAB_00511de1
    PUSH dword ptr [EBP + 0x28]         ; 00511df8
        ;   Label: LAB_00511df8
    PUSH EBX                            ; 00511dfb
    MOV EDI,dword ptr [EBP + 0x24]      ; 00511dfc
    PUSH EDI                            ; 00511dff
    CALL core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00514980 ; 00511e00
        ;   XREF to: 00514980 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00514980()
    ADD ESP,0xc                         ; 00511e05
    TEST EAX,EAX                        ; 00511e08
    JNZ 0x00511e21                      ; 00511e0a
        ;   XREF to: 00511e21 (CONDITIONAL_JUMP)  ; LAB_00511e21
    MOV dword ptr [ESP + 0x88],EAX      ; 00511e0c
    MOV EAX,dword ptr [ESP + 0x88]      ; 00511e13
    MOV ESP,EBP                         ; 00511e1a
    POP EBP                             ; 00511e1c
    POP EDI                             ; 00511e1d
    POP ESI                             ; 00511e1e
    POP EBX                             ; 00511e1f
    RET                                 ; 00511e20
    PUSH ESI                            ; 00511e21
        ;   Label: LAB_00511e21
    MOV EDX,dword ptr [0x005ae704]      ; 00511e22 | DAT_005ae704
    PUSH EDX                            ; 00511e28 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700 ; 00511e29
        ;   XREF to: 00460700 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700()
    ADD ESP,0x8                         ; 00511e2e
    MOV ECX,dword ptr [0x005ae704]      ; 00511e31 | DAT_005ae704
    PUSH dword ptr [EDI + 0x140]        ; 00511e37
    PUSH ECX                            ; 00511e3d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00 ; 00511e3e
        ;   XREF to: 00460c00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00()
    ADD ESP,0x8                         ; 00511e43
    LEA EAX,[EDI + 0x10c]               ; 00511e46
    PUSH EAX                            ; 00511e4c
    MOV ESI,dword ptr [0x005ae704]      ; 00511e4d | DAT_005ae704
    PUSH ESI                            ; 00511e53 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780 ; 00511e54
        ;   XREF to: 00460780 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780()
    ADD ESP,0x8                         ; 00511e59
    MOV EDI,0x800000ff                  ; 00511e5c
    PUSH EBX                            ; 00511e61
    MOV EDX,dword ptr [0x005ae704]      ; 00511e62 | DAT_005ae704
    XOR EAX,EAX                         ; 00511e68
    PUSH EDX                            ; 00511e6a | DAT_01b4d738
    MOV dword ptr [ESP + 0xa8],EDI      ; 00511e6b
    MOV dword ptr [ESP + 0x9c],EAX      ; 00511e72
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00511e79
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00()
    ADD ESP,0x8                         ; 00511e7e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511e81
    MOV EAX,dword ptr [EAX + 0x30]      ; 00511e84
    MOV dword ptr [ESP + 0x44],EAX      ; 00511e87
    MOV EAX,dword ptr [EBP + 0x14]      ; 00511e8b
    MOV EAX,dword ptr [EAX + 0x38]      ; 00511e8e
    MOV dword ptr [ESP + 0x4c],EAX      ; 00511e91
    MOV EAX,dword ptr [EBP + 0x24]      ; 00511e95
    MOV EAX,dword ptr [EAX + 0x110]     ; 00511e98
    PUSH 0x0                            ; 00511e9e
    MOV dword ptr [ESP + 0x4c],EAX      ; 00511ea0
    LEA EAX,[ESP + 0x48]                ; 00511ea4
    PUSH EAX                            ; 00511ea8
    MOV ECX,dword ptr [0x005ae704]      ; 00511ea9 | DAT_005ae704
    PUSH ECX                            ; 00511eaf | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00511eb0
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0()
    ADD ESP,0xc                         ; 00511eb5
    XOR ESI,ESI                         ; 00511eb8
    MOV EDI,dword ptr [EBP + 0x18]      ; 00511eba
    MOV EAX,[0x005ae704]                ; 00511ebd | DAT_005ae704
        ;   Label: LAB_00511ebd
    MOV EAX,dword ptr [EAX]             ; 00511ec2 | DAT_01b4d738
    PUSH EDI                            ; 00511ec4
    ADD EAX,ESI                         ; 00511ec5
    PUSH EAX                            ; 00511ec7
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00511ec8
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    MOV EAX,[0x005ae704]                ; 00511ecd | DAT_005ae704
    ADD ESI,0x30                        ; 00511ed2
    ADD ESP,0x8                         ; 00511ed5
    MOV EAX,dword ptr [EAX]             ; 00511ed8 | DAT_01b4d738
    ADD EDI,0xc                         ; 00511eda
    MOV ECX,dword ptr [ESP + 0xa0]      ; 00511edd
    MOV EDX,dword ptr [ESI + EAX*0x1 + -0x20] ; 00511ee4
    MOV EBX,dword ptr [ESP + 0x94]      ; 00511ee8
    AND ECX,EDX                         ; 00511eef
    OR EBX,EDX                          ; 00511ef1
    MOV dword ptr [ESP + 0xa0],ECX      ; 00511ef3
    MOV dword ptr [ESP + 0x94],EBX      ; 00511efa
    CMP ESI,0x180                       ; 00511f01
    JNZ 0x00511ebd                      ; 00511f07
        ;   XREF to: 00511ebd (CONDITIONAL_JUMP)  ; LAB_00511ebd
    TEST byte ptr [ESP + 0xa3],0x80     ; 00511f09
    JZ 0x00511f21                       ; 00511f11
        ;   XREF to: 00511f21 (CONDITIONAL_JUMP)  ; LAB_00511f21
    TEST byte ptr [ESP + 0xa0],0xff     ; 00511f13
    JNZ 0x0051238f                      ; 00511f1b
        ;   XREF to: 0051238f (CONDITIONAL_JUMP)  ; LAB_0051238f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00511f21
        ;   Label: LAB_00511f21
    XOR ESI,ESI                         ; 00511f24
    XOR EDX,EDX                         ; 00511f26
    LEA EBX,[EAX + 0x1b0]               ; 00511f28
    MOV dword ptr [ESP + 0xb4],ESI      ; 00511f2e
    MOV ECX,dword ptr [ESP + 0xb4]      ; 00511f35
        ;   Label: LAB_00511f35
    MOV dword ptr [ESP + EDX*0x1 + 0x2c],EAX ; 00511f3c
    ADD EDX,0x4                         ; 00511f40
    INC ECX                             ; 00511f43
    ADD EAX,0x48                        ; 00511f44
    MOV dword ptr [ESP + 0xb4],ECX      ; 00511f47
    CMP EAX,EBX                         ; 00511f4e
    JNZ 0x00511f35                      ; 00511f50
        ;   XREF to: 00511f35 (CONDITIONAL_JUMP)  ; LAB_00511f35
    MOV EBX,dword ptr [EBP + 0x14]      ; 00511f52
    PUSH EBX                            ; 00511f55
    XOR ESI,ESI                         ; 00511f56
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00511f58
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 00511f5d
    MOV dword ptr [ESP + 0xbc],ESI      ; 00511f60
    MOV EAX,[0x005ae704]                ; 00511f67 | DAT_005ae704
        ;   Label: LAB_00511f67
    MOV EDI,dword ptr [ESP + 0xbc]      ; 00511f6c
    MOV ESI,dword ptr [EAX]             ; 00511f73 | DAT_01b4d738
    ADD ESI,EDI                         ; 00511f75
    MOV EAX,dword ptr [ESI + 0x8]       ; 00511f77
    TEST EAX,EAX                        ; 00511f7a
    JLE 0x00511fab                      ; 00511f7c
        ;   XREF to: 00511fab (CONDITIONAL_JUMP)  ; LAB_00511fab
    LEA EDI,[EAX + 0x80]                ; 00511f7e
    MOV EBX,EAX                         ; 00511f84
    MOV EDX,EDI                         ; 00511f86
    MOV EAX,dword ptr [ESI]             ; 00511f88
    IMUL EDX                            ; 00511f8a
    IDIV EBX                            ; 00511f8c
    MOV dword ptr [ESI],EAX             ; 00511f8e
    MOV EDX,EDI                         ; 00511f90
    MOV EBX,dword ptr [ESI + 0x8]       ; 00511f92
    MOV EAX,dword ptr [ESI + 0x4]       ; 00511f95
    IMUL EDX                            ; 00511f98
    IDIV EBX                            ; 00511f9a
    MOV dword ptr [ESI + 0x4],EAX       ; 00511f9c
    PUSH ESI                            ; 00511f9f
    MOV dword ptr [ESI + 0x8],EDI       ; 00511fa0
    CALL engine_matrix.c_projectTransformedPoint_FUN_004cd260 ; 00511fa3
        ;   XREF to: 004cd260 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_projectTransformedPoint_FUN_004cd260()
    ADD ESP,0x4                         ; 00511fa8
    MOV EDX,dword ptr [ESP + 0xbc]      ; 00511fab
        ;   Label: LAB_00511fab
    ADD EDX,0x30                        ; 00511fb2
    MOV dword ptr [ESP + 0xbc],EDX      ; 00511fb5
    CMP EDX,0x180                       ; 00511fbc
    JNZ 0x00511f67                      ; 00511fc2
        ;   XREF to: 00511f67 (CONDITIONAL_JUMP)  ; LAB_00511f67
    MOV EBX,0x3f800000                  ; 00511fc4
    XOR EAX,EAX                         ; 00511fc9
    MOV dword ptr [ESP],EBX             ; 00511fcb
    MOV EDX,dword ptr [0x005ae704]      ; 00511fce | DAT_005ae704
        ;   Label: LAB_00511fce
    MOV EDX,dword ptr [EDX]             ; 00511fd4 | DAT_01b4d738
    ADD EDX,EAX                         ; 00511fd6
    TEST byte ptr [EDX + 0x13],0x80     ; 00511fd8
    JZ 0x00511ff4                       ; 00511fdc
        ;   XREF to: 00511ff4 (CONDITIONAL_JUMP)  ; LAB_00511ff4
    CMP dword ptr [EDX + 0x8],0x0       ; 00511fde
    JLE 0x005123b2                      ; 00511fe2
        ;   XREF to: 005123b2 (CONDITIONAL_JUMP)  ; LAB_005123b2
    FLD float ptr [ESP]                 ; 00511fe8
    FMUL double ptr [0x00590bc5]        ; 00511feb | DAT_00590bc5
    FSTP float ptr [ESP]                ; 00511ff1
        ;   Label: LAB_00511ff1
    ADD EAX,0x30                        ; 00511ff4
        ;   Label: LAB_00511ff4
    CMP EAX,0x180                       ; 00511ff7
    JNZ 0x00511fce                      ; 00511ffc
        ;   XREF to: 00511fce (CONDITIONAL_JUMP)  ; LAB_00511fce
    XOR EDI,EDI                         ; 00511ffe
    MOV EDX,dword ptr [0x026639ec]      ; 00512000 | DAT_026639ec
    MOV dword ptr [ESP + 0xb0],EDI      ; 00512006
    MOV dword ptr [ESP + 0x9c],EDI      ; 0051200d
    TEST EDX,EDX                        ; 00512014
    JLE 0x005121e7                      ; 00512016
        ;   XREF to: 005121e7 (CONDITIONAL_JUMP)  ; LAB_005121e7
    FLD float ptr [0x005a1a8c]          ; 0051201c | DAT_005a1a8c
    FMUL ST0                            ; 00512022
    MOV EDX,dword ptr [EBP + 0x20]      ; 00512024
    MOV EBX,0x2665930                   ; 00512027
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051202c
    MOV dword ptr [ESP + 0xa8],EDI      ; 00512033
    SUB EAX,EDX                         ; 0051203a
    MOV EDX,0x20875f8                   ; 0051203c
    SHL EAX,0xc                         ; 00512041
    MOV dword ptr [ESP + 0xac],EBX      ; 00512044
    ADD EDX,EAX                         ; 0051204b
    MOV EAX,dword ptr [EBP + 0x24]      ; 0051204d
    FSTP float ptr [ESP + 0x90]         ; 00512050
    ADD EAX,0x100                       ; 00512057
    MOV dword ptr [ESP + 0x8c],EDX      ; 0051205c
    MOV dword ptr [ESP + 0xa4],EAX      ; 00512063
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0051206a
        ;   Label: LAB_0051206a
    MOV EAX,dword ptr [EAX + 0x26639f0] ; 00512071 | DAT_026639f0
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00512077
    FLD float ptr [EAX + 0x20]          ; 0051207e
    FSUB float ptr [EDX]                ; 00512081
    FMUL ST0                            ; 00512083
    FLD float ptr [EAX + 0x24]          ; 00512085
    FSUB float ptr [EDX + 0x4]          ; 00512088
    FMUL ST0                            ; 0051208b
    FLD float ptr [EAX + 0x28]          ; 0051208d
    FXCH                                ; 00512090
    FADDP ST2,ST0                       ; 00512092
    FSUB float ptr [EDX + 0x8]          ; 00512094
    FMUL ST0                            ; 00512097
    FADDP                               ; 00512099
    MOV dword ptr [ESP + 0xb8],EAX      ; 0051209b
    FCOMP float ptr [ESP + 0x90]        ; 005120a2
    FNSTSW AX                           ; 005120a9
    SAHF                                ; 005120ab
    JA 0x005121a8                       ; 005120ac
        ;   XREF to: 005121a8 (CONDITIONAL_JUMP)  ; LAB_005121a8
    MOV ESI,dword ptr [ESP + 0xb8]      ; 005120b2
    PUSH ESI                            ; 005120b9
    MOV EDI,0x800000ff                  ; 005120ba
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 005120bf
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    MOV ESI,0x180                       ; 005120c4
    ADD ESP,0x4                         ; 005120c9
    XOR EAX,EAX                         ; 005120cc
    MOV dword ptr [ESP + 0x84],EDI      ; 005120ce
    MOV dword ptr [ESP + 0xc0],EAX      ; 005120d5
    MOV EAX,dword ptr [ESP + 0xac]      ; 005120dc
    XOR EDI,EDI                         ; 005120e3
    MOV dword ptr [ESP + 0x80],EAX      ; 005120e5
    PUSH EDI                            ; 005120ec
        ;   Label: LAB_005120ec
    LEA EAX,[ESP + 0x54]                ; 005120ed
    PUSH EAX                            ; 005120f1
    MOV EBX,dword ptr [ESP + 0x88]      ; 005120f2
    PUSH EBX                            ; 005120f9
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70 ; 005120fa
        ;   XREF to: 0041cc70 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70()
    LEA EBX,[ESP + 0x68]                ; 005120ff
    ADD ESP,0xc                         ; 00512103
    LEA EAX,[ESP + 0x50]                ; 00512106
    MOV EDX,dword ptr [0x005ae704]      ; 0051210a | DAT_005ae704
    FLD float ptr [EAX]                 ; 00512110
    FMUL float ptr [0x005a1a70]         ; 00512112 | DAT_005a1a70
    FISTP dword ptr [EBX]               ; 00512118
    FLD float ptr [EAX + 0x4]           ; 0051211a
    FMUL float ptr [0x005a1a70]         ; 0051211d | DAT_005a1a70
    FISTP dword ptr [EBX + 0x4]         ; 00512123
    FLD float ptr [EAX + 0x8]           ; 00512126
    FMUL float ptr [0x005a1a70]         ; 00512129 | DAT_005a1a70
    FISTP dword ptr [EBX + 0x8]         ; 0051212f
    LEA EAX,[ESP + 0x5c]                ; 00512132
    PUSH EAX                            ; 00512136
    MOV EAX,dword ptr [EDX]             ; 00512137 | DAT_01b4d738
    ADD EAX,ESI                         ; 00512139
    PUSH EAX                            ; 0051213b
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 0051213c
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    MOV EAX,[0x005ae704]                ; 00512141 | DAT_005ae704
    ADD ESI,0x30                        ; 00512146
    ADD ESP,0x8                         ; 00512149
    MOV EAX,dword ptr [EAX]             ; 0051214c | DAT_01b4d738
    INC EDI                             ; 0051214e
    MOV ECX,dword ptr [ESP + 0x84]      ; 0051214f
    MOV EDX,dword ptr [ESI + EAX*0x1 + -0x20] ; 00512156
    MOV EBX,dword ptr [ESP + 0xc0]      ; 0051215a
    AND ECX,EDX                         ; 00512161
    OR EBX,EDX                          ; 00512163
    MOV dword ptr [ESP + 0x84],ECX      ; 00512165
    MOV dword ptr [ESP + 0xc0],EBX      ; 0051216c
    CMP EDI,0x8                         ; 00512173
    JL 0x005120ec                       ; 00512176
        ;   XREF to: 005120ec (CONDITIONAL_JUMP)  ; LAB_005120ec
    MOV ESI,dword ptr [ESP + 0xb8]      ; 0051217c
    PUSH ESI                            ; 00512183
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00512184
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 00512189
    TEST byte ptr [ESP + 0x87],0x80     ; 0051218c
    JZ 0x005123c0                       ; 00512194
        ;   XREF to: 005123c0 (CONDITIONAL_JUMP)  ; LAB_005123c0
    TEST byte ptr [ESP + 0x84],0xff     ; 0051219a
    JZ 0x005123c0                       ; 005121a2
        ;   XREF to: 005123c0 (CONDITIONAL_JUMP)  ; LAB_005123c0
    MOV ECX,dword ptr [ESP + 0xa8]      ; 005121a8
        ;   Label: LAB_005121a8
    MOV EBX,dword ptr [ESP + 0xac]      ; 005121af
    MOV ESI,dword ptr [ESP + 0xb0]      ; 005121b6
    MOV EDI,dword ptr [0x026639ec]      ; 005121bd | DAT_026639ec
    ADD ECX,0x4                         ; 005121c3
    ADD EBX,0x18                        ; 005121c6
    INC ESI                             ; 005121c9
    MOV dword ptr [ESP + 0xa8],ECX      ; 005121ca
    MOV dword ptr [ESP + 0xac],EBX      ; 005121d1
    MOV dword ptr [ESP + 0xb0],ESI      ; 005121d8
    CMP ESI,EDI                         ; 005121df
    JL 0x0051206a                       ; 005121e1
        ;   XREF to: 0051206a (CONDITIONAL_JUMP)  ; LAB_0051206a
    PUSH 0x0                            ; 005121e7
        ;   Label: LAB_005121e7
    MOV EAX,[0x005ae704]                ; 005121e9 | DAT_005ae704
    PUSH EAX                            ; 005121ee | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 005121ef
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0()
    ADD ESP,0x8                         ; 005121f4
    CMP dword ptr [ESP + 0x9c],0x0      ; 005121f7
    JNZ 0x00512230                      ; 005121ff
        ;   XREF to: 00512230 (CONDITIONAL_JUMP)  ; LAB_00512230
    MOV EDX,dword ptr [EBP + 0x20]      ; 00512201
    LEA EAX,[EDX*0x4 + 0x0]             ; 00512204
    SUB EAX,EDX                         ; 0051220b
    MOV ESI,0x20875f8                   ; 0051220d
    SHL EAX,0xc                         ; 00512212
    ADD ESI,EAX                         ; 00512215
    XOR EAX,EAX                         ; 00512217
    MOV dword ptr [EAX + 0x1bd4260],ESI ; 00512219 | DAT_01bd4260
        ;   Label: LAB_00512219
    ADD EAX,0x4                         ; 0051221f
    ADD ESI,0x100                       ; 00512222
    CMP EAX,0xc0                        ; 00512228
    JNZ 0x00512219                      ; 0051222d
        ;   XREF to: 00512219 (CONDITIONAL_JUMP)  ; LAB_00512219
    NOP                                 ; 0051222f
    PUSH 0x1                            ; 00512230
        ;   Label: LAB_00512230
    MOV EDX,dword ptr [0x005ae704]      ; 00512232 | DAT_005ae704
    PUSH EDX                            ; 00512238 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 00512239
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0()
    ADD ESP,0x8                         ; 0051223e
    TEST byte ptr [ESP + 0x97],0x80     ; 00512241
    SETNZ AL                            ; 00512249
    AND EAX,0xff                        ; 0051224c
    PUSH EAX                            ; 00512251
    MOV ECX,dword ptr [0x005ae704]      ; 00512252 | DAT_005ae704
    PUSH ECX                            ; 00512258 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 00512259
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050()
    ADD ESP,0x8                         ; 0051225e
    XOR EBX,EBX                         ; 00512261
    MOV ESI,dword ptr [ESP + 0xb4]      ; 00512263
    MOV dword ptr [ESP + 0x98],EBX      ; 0051226a
    TEST ESI,ESI                        ; 00512271
    JLE 0x005122b0                      ; 00512273
        ;   XREF to: 005122b0 (CONDITIONAL_JUMP)  ; LAB_005122b0
    SHL ESI,0x2                         ; 00512275
    MOV EDI,dword ptr [ESP + EBX*0x1 + 0x2c] ; 00512278
        ;   Label: LAB_00512278
    PUSH EDI                            ; 0051227c
    MOV EAX,[0x005ae704]                ; 0051227d | DAT_005ae704
    PUSH EAX                            ; 00512282 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090 ; 00512283
        ;   XREF to: 0045f090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090()
    ADD ESP,0x8                         ; 00512288
    MOV EDX,dword ptr [ESP + 0x98]      ; 0051228b
    ADD EDX,EAX                         ; 00512292
    ADD EBX,0x4                         ; 00512294
    MOV dword ptr [ESP + 0x98],EDX      ; 00512297
    CMP EBX,ESI                         ; 0051229e
    JL 0x00512278                       ; 005122a0
        ;   XREF to: 00512278 (CONDITIONAL_JUMP)  ; LAB_00512278
    LEA EAX,[EAX]                       ; 005122a2
    LEA EDX,[EDX]                       ; 005122a8
    MOV EAX,EAX                         ; 005122ae
    MOV EAX,[0x005b9354]                ; 005122b0 | DAT_005b9354
        ;   Label: LAB_005122b0
    CMP dword ptr [EAX + 0x1e8],0x0     ; 005122b5 | DAT_01c777d4
    JZ 0x00512340                       ; 005122bc
        ;   XREF to: 00512340 (CONDITIONAL_JUMP)  ; LAB_00512340
    MOV EDX,dword ptr [EBP + 0x20]      ; 005122c2
    LEA EAX,[EDX*0x4 + 0x0]             ; 005122c5
    SUB EAX,EDX                         ; 005122cc
    MOV EBX,0x23755f8                   ; 005122ce
    SHL EAX,0xc                         ; 005122d3
    XOR EDX,EDX                         ; 005122d6
    ADD EBX,EAX                         ; 005122d8
    MOV ECX,0x100                       ; 005122da
        ;   Label: LAB_005122da
    MOV EDI,EBX                         ; 005122df
    MOV ESI,dword ptr [EDX + 0x1bd4260] ; 005122e1 | DAT_01bd4260
    ADD EDX,0x4                         ; 005122e7
    PUSH EDI                            ; 005122ea
    MOV EAX,ECX                         ; 005122eb
    SHR ECX,0x2                         ; 005122ed
    MOVSD.REP ES:EDI,ESI                ; 005122f0 | DAT_020875f8 | DAT_020875fc | DAT_020876f8
    MOV CL,AL                           ; 005122f2
    AND CL,0x3                          ; 005122f4
    MOVSB.REP ES:EDI,ESI                ; 005122f7 | DAT_020875fc | DAT_020875fd
    POP EDI                             ; 005122f9
    MOV dword ptr [EDX + 0x1bd425c],EBX ; 005122fa | DAT_01bd4260
    ADD EBX,0x100                       ; 00512300
    CMP EDX,0xc0                        ; 00512306
    JNZ 0x005122da                      ; 0051230c
        ;   XREF to: 005122da (CONDITIONAL_JUMP)  ; LAB_005122da
    MOV ESI,dword ptr [ESP + 0xb4]      ; 0051230e
    XOR EBX,EBX                         ; 00512315
    TEST ESI,ESI                        ; 00512317
    JLE 0x00512340                      ; 00512319
        ;   XREF to: 00512340 (CONDITIONAL_JUMP)  ; LAB_00512340
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0051231b
    PUSH ESI                            ; 0051231e
        ;   Label: LAB_0051231e
    MOV EDI,dword ptr [0x005ae704]      ; 0051231f | DAT_005ae704
    PUSH EDI                            ; 00512325 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0 ; 00512326
        ;   XREF to: 0045eee0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0()
    ADD ESP,0x8                         ; 0051232b
    INC EBX                             ; 0051232e
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0051232f
    ADD ESI,0x48                        ; 00512336
    CMP EBX,EAX                         ; 00512339
    JL 0x0051231e                       ; 0051233b
        ;   XREF to: 0051231e (CONDITIONAL_JUMP)  ; LAB_0051231e
    LEA EAX,[EAX]                       ; 0051233d
    PUSH 0x1                            ; 00512340
        ;   Label: LAB_00512340
    MOV EDX,dword ptr [0x005ae704]      ; 00512342 | DAT_005ae704
    PUSH EDX                            ; 00512348 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 00512349
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050()
    ADD ESP,0x8                         ; 0051234e
    PUSH 0x0                            ; 00512351
    MOV ECX,dword ptr [0x005ae704]      ; 00512353 | DAT_005ae704
    PUSH ECX                            ; 00512359 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 0051235a
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0()
    ADD ESP,0x8                         ; 0051235f
    MOV EAX,dword ptr [ESP + 0x98]      ; 00512362
    MOV dword ptr [ESP + 0xc4],EAX      ; 00512369
    FILD dword ptr [ESP + 0xc4]         ; 00512370
    FMUL float ptr [ESP]                ; 00512377
    FSTP float ptr [ESP + 0x88]         ; 0051237a
    MOV EAX,dword ptr [ESP + 0x88]      ; 00512381
    MOV ESP,EBP                         ; 00512388
    POP EBP                             ; 0051238a
    POP EDI                             ; 0051238b
    POP ESI                             ; 0051238c
    POP EBX                             ; 0051238d
    RET                                 ; 0051238e
    MOV EDI,dword ptr [EBP + 0x14]      ; 0051238f
        ;   Label: LAB_0051238f
    PUSH EDI                            ; 00512392
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00512393
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 00512398
    XOR EAX,EAX                         ; 0051239b
    MOV dword ptr [ESP + 0x88],EAX      ; 0051239d
    MOV EAX,dword ptr [ESP + 0x88]      ; 005123a4
    MOV ESP,EBP                         ; 005123ab
    POP EBP                             ; 005123ad
    POP EDI                             ; 005123ae
    POP ESI                             ; 005123af
    POP EBX                             ; 005123b0
    RET                                 ; 005123b1
    FLD float ptr [ESP]                 ; 005123b2
        ;   Label: LAB_005123b2
    FMUL double ptr [0x00590bcd]        ; 005123b5 | DAT_00590bcd
    JMP 0x00511ff1                      ; 005123bb
        ;   XREF to: 00511ff1 (UNCONDITIONAL_JUMP)  ; LAB_00511ff1
    CMP dword ptr [ESP + 0x9c],0x0      ; 005123c0
        ;   Label: LAB_005123c0
    JNZ 0x00512422                      ; 005123c8
        ;   XREF to: 00512422 (CONDITIONAL_JUMP)  ; LAB_00512422
    MOV EAX,0x1                         ; 005123ca
    MOV ECX,0x3000                      ; 005123cf
    MOV ESI,dword ptr [ESP + 0x8c]      ; 005123d4
    MOV EDI,0x20845f4                   ; 005123db
    MOV dword ptr [ESP + 0x9c],EAX      ; 005123e0
    PUSH EDI                            ; 005123e7 | DAT_020845f4
    MOV EAX,ECX                         ; 005123e8
    SHR ECX,0x2                         ; 005123ea
    MOVSD.REP ES:EDI,ESI                ; 005123ed | DAT_020875f8 | DAT_020845f4 | DAT_020875fc
    MOV CL,AL                           ; 005123ef
    AND CL,0x3                          ; 005123f1
    MOVSB.REP ES:EDI,ESI                ; 005123f4 | DAT_020875fc | DAT_020845f8 | DAT_020875fd
    POP EDI                             ; 005123f6
    MOV ESI,EDI                         ; 005123f7
    XOR EAX,EAX                         ; 005123f9
    MOV dword ptr [EAX + 0x1bd4260],ESI ; 005123fb | DAT_01bd4260 | DAT_020845f4
        ;   Label: LAB_005123fb
    ADD EAX,0x4                         ; 00512401
    ADD ESI,0x100                       ; 00512404
    CMP EAX,0xc0                        ; 0051240a
    JNZ 0x005123fb                      ; 0051240f
        ;   XREF to: 005123fb (CONDITIONAL_JUMP)  ; LAB_005123fb
    PUSH 0x1                            ; 00512411
    MOV EDX,dword ptr [0x005ae704]      ; 00512413 | DAT_005ae704
    PUSH EDX                            ; 00512419 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 0051241a
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0()
    ADD ESP,0x8                         ; 0051241f
    MOV ECX,0x4                         ; 00512422
        ;   Label: LAB_00512422
    MOV AH,byte ptr [ESP + 0xc3]        ; 00512427
    MOV dword ptr [ESP + 0x8],ECX       ; 0051242e
    TEST AH,0x80                        ; 00512432
    SETNZ AL                            ; 00512435
    AND EAX,0xff                        ; 00512438
    PUSH EAX                            ; 0051243d
    MOV EBX,dword ptr [0x005ae704]      ; 0051243e | DAT_005ae704
    PUSH EBX                            ; 00512444 | DAT_01b4d738
    MOV ESI,0x8                         ; 00512445
    MOV EDI,0xc                         ; 0051244a
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 0051244f
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050()
    MOV EAX,0xe                         ; 00512454
    MOV EDX,0xa                         ; 00512459
    MOV EBX,0x9                         ; 0051245e
    ADD ESP,0x8                         ; 00512463
    MOV ECX,dword ptr [0x005ae704]      ; 00512466 | DAT_005ae704
    MOV dword ptr [ESP + 0x24],EAX      ; 0051246c
    LEA EAX,[ESP + 0x4]                 ; 00512470
    MOV dword ptr [ESP + 0x1c],ESI      ; 00512474
    PUSH EAX                            ; 00512478
    MOV dword ptr [ESP + 0x24],EDI      ; 00512479
    MOV dword ptr [ESP + 0x2c],EDX      ; 0051247d
    PUSH ECX                            ; 00512481 | DAT_01b4d738
    MOV ESI,0xb                         ; 00512482
    MOV EDI,0xf                         ; 00512487
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60 ; 0051248c
        ;   XREF to: 0045ee60 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60()
    MOV EAX,0xd                         ; 00512491
    ADD ESP,0x8                         ; 00512496
    MOV EDX,dword ptr [0x005ae704]      ; 00512499 | DAT_005ae704
    MOV dword ptr [ESP + 0x28],EAX      ; 0051249f
    LEA EAX,[ESP + 0x4]                 ; 005124a3
    MOV dword ptr [ESP + 0x1c],EBX      ; 005124a7
    PUSH EAX                            ; 005124ab
    MOV dword ptr [ESP + 0x24],ESI      ; 005124ac
    MOV dword ptr [ESP + 0x28],EDI      ; 005124b0
    PUSH EDX                            ; 005124b4 | DAT_01b4d738
    MOV ESI,0xd                         ; 005124b5
    MOV EDI,0xc                         ; 005124ba
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60 ; 005124bf
        ;   XREF to: 0045ee60 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60()
    MOV ECX,0x8                         ; 005124c4
    ADD ESP,0x8                         ; 005124c9
    LEA EAX,[ESP + 0x4]                 ; 005124cc
    MOV dword ptr [ESP + 0x1c],ECX      ; 005124d0
    MOV dword ptr [ESP + 0x20],EBX      ; 005124d4
    MOV dword ptr [ESP + 0x24],ESI      ; 005124d8
    PUSH EAX                            ; 005124dc
    MOV EAX,[0x005ae704]                ; 005124dd | DAT_005ae704
    MOV dword ptr [ESP + 0x2c],EDI      ; 005124e2
    PUSH EAX                            ; 005124e6 | DAT_01b4d738
    MOV EBX,0xf                         ; 005124e7
    MOV ESI,0xb                         ; 005124ec
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60 ; 005124f1
        ;   XREF to: 0045ee60 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60()
    MOV EDX,0xa                         ; 005124f6
    MOV ECX,0xe                         ; 005124fb
    LEA EAX,[ESP + 0xc]                 ; 00512500
    ADD ESP,0x8                         ; 00512504
    MOV EDI,dword ptr [0x005ae704]      ; 00512507 | DAT_005ae704
    MOV dword ptr [ESP + 0x1c],EDX      ; 0051250d
    PUSH EAX                            ; 00512511
    MOV dword ptr [ESP + 0x24],ECX      ; 00512512
    MOV dword ptr [ESP + 0x28],EBX      ; 00512516
    PUSH EDI                            ; 0051251a | DAT_01b4d738
    MOV dword ptr [ESP + 0x30],ESI      ; 0051251b
    MOV EBX,0x9                         ; 0051251f
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60 ; 00512524
        ;   XREF to: 0045ee60 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60()
    MOV EAX,0x8                         ; 00512529
    ADD ESP,0x8                         ; 0051252e
    MOV EDX,0xa                         ; 00512531
    MOV dword ptr [ESP + 0x1c],EAX      ; 00512536
    LEA EAX,[ESP + 0x4]                 ; 0051253a
    MOV dword ptr [ESP + 0x24],ESI      ; 0051253e
    PUSH EAX                            ; 00512542
    MOV ESI,dword ptr [0x005ae704]      ; 00512543 | DAT_005ae704
    MOV EDI,0xc                         ; 00512549
    PUSH ESI                            ; 0051254e | DAT_01b4d738
    MOV dword ptr [ESP + 0x28],EDX      ; 0051254f
    MOV dword ptr [ESP + 0x30],EBX      ; 00512553
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60 ; 00512557
        ;   XREF to: 0045ee60 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60()
    MOV EAX,0xd                         ; 0051255c
    ADD ESP,0x8                         ; 00512561
    MOV EDX,0xf                         ; 00512564
    MOV dword ptr [ESP + 0x20],EAX      ; 00512569
    LEA EAX,[ESP + 0x4]                 ; 0051256d
    MOV ECX,0xe                         ; 00512571
    PUSH EAX                            ; 00512576
    MOV EBX,dword ptr [0x005ae704]      ; 00512577 | DAT_005ae704
    MOV dword ptr [ESP + 0x20],EDI      ; 0051257d
    PUSH EBX                            ; 00512581 | DAT_01b4d738
    MOV dword ptr [ESP + 0x2c],EDX      ; 00512582
    MOV dword ptr [ESP + 0x30],ECX      ; 00512586
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60 ; 0051258a
        ;   XREF to: 0045ee60 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60()
    ADD ESP,0x8                         ; 0051258f
    JMP 0x005121a8                      ; 00512592
        ;   XREF to: 005121a8 (UNCONDITIONAL_JUMP)  ; LAB_005121a8

