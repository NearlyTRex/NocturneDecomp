; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
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
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[71]:
;   core_ammo.cpp_CAmmo_renderOpaque_FUN_0040ec30 at 0040ec57
;   core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_0040f2b0 at 0040f2d9
;   core_anvil.cpp_CAnvil_renderOpaque_FUN_0040f740 at 0040f797
;   core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_0040ff80 at 0040ffb2
;   core_baron.cpp_CBaron_renderTransparent_FUN_004110f0 at 00411205
;   core_bat.cpp_CBat_renderOpaque_FUN_00411e30 at 00411e57
;   core_batman.cpp_CBatman_renderOpaque_FUN_00414340 at 004143c4
;   core_battery.cpp_CBattery_renderOpaque_FUN_00414e70 at 00414eb6
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_00415760 at 0041579a
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00416300 at 0041638c
;   ... and 61 more
;
; Referenced Globals:
;   float FLOAT_005797c5 = 0.5
;   undefined4 DAT_0059aa80
;   undefined4 DAT_0059aa88
;   undefined4 DAT_005ae704
;   undefined4 DAT_006b028c
;   undefined4 DAT_006b0290
;   undefined4 DAT_006b0294
;   undefined4 DAT_007f7370
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c038f4
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0
;   core_box.cpp_FUN_0041d050
;   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ceb0
        ;   Label: core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
    PUSH EDI                            ; 0041ceb1
    SUB ESP,0x6c                        ; 0041ceb2
    MOV EBX,dword ptr [ESP + 0x78]      ; 0041ceb5
    PUSH EBX                            ; 0041ceb9
    CALL core_box.cpp_FUN_0041d050      ; 0041ceba
        ;   XREF to: 0041d050 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041d050()
    ADD ESP,0x4                         ; 0041cebf
    CMP EAX,-0x1                        ; 0041cec2
    JZ 0x0041ced1                       ; 0041cec5
        ;   XREF to: 0041ced1 (CONDITIONAL_JUMP)  ; LAB_0041ced1
    TEST EAX,EAX                        ; 0041cec7
    JNZ 0x0041ced5                      ; 0041cec9
        ;   XREF to: 0041ced5 (CONDITIONAL_JUMP)  ; LAB_0041ced5
    ADD ESP,0x6c                        ; 0041cecb
        ;   Label: LAB_0041cecb
    POP EDI                             ; 0041cece
    POP EBX                             ; 0041cecf
    RET                                 ; 0041ced0
    XOR EAX,EAX                         ; 0041ced1
        ;   Label: LAB_0041ced1
    JMP 0x0041cecb                      ; 0041ced3
        ;   XREF to: 0041cecb (UNCONDITIONAL_JUMP)  ; LAB_0041cecb
    MOV EDX,dword ptr [0x005ae704]      ; 0041ced5 | DAT_005ae704
        ;   Label: LAB_0041ced5
    PUSH EDX                            ; 0041cedb | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0041cedc
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041cee1
    TEST EAX,EAX                        ; 0041cee4
    JNZ 0x0041d030                      ; 0041cee6
        ;   XREF to: 0041d030 (CONDITIONAL_JUMP)  ; LAB_0041d030
    LEA EAX,[EBX + 0xc]                 ; 0041ceec
    FLD float ptr [EBX]                 ; 0041ceef
    FADD float ptr [EAX]                ; 0041cef1
    FST float ptr [ESP + 0x30]          ; 0041cef3
    FLD float ptr [EBX + 0x4]           ; 0041cef7
    FADD float ptr [EAX + 0x4]          ; 0041cefa
    FXCH                                ; 0041cefd
    FLD float ptr [0x005797c5]          ; 0041ceff | FLOAT_005797c5
    FXCH                                ; 0041cf05
    FMUL ST1                            ; 0041cf07
    FXCH ST2                            ; 0041cf09
    FST float ptr [ESP + 0x34]          ; 0041cf0b
    FLD float ptr [EBX + 0x8]           ; 0041cf0f
    FADD float ptr [EAX + 0x8]          ; 0041cf12
    FXCH                                ; 0041cf15
    FMUL ST2                            ; 0041cf17
    FXCH                                ; 0041cf19
    FST float ptr [ESP + 0x38]          ; 0041cf1b
    FMULP ST2                           ; 0041cf1f
    LEA EBX,[ESP + 0x54]                ; 0041cf21
    FXCH ST2                            ; 0041cf25
    FSTP float ptr [ESP + 0x3c]         ; 0041cf27
    FXCH                                ; 0041cf2b
    FSTP float ptr [ESP + 0x40]         ; 0041cf2d
    LEA EAX,[ESP + 0x3c]                ; 0041cf31
    FSTP float ptr [ESP + 0x44]         ; 0041cf35
    CMP EBX,EAX                         ; 0041cf39
    JZ 0x0041cf55                       ; 0041cf3b
        ;   XREF to: 0041cf55 (CONDITIONAL_JUMP)  ; LAB_0041cf55
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041cf3d
    MOV dword ptr [ESP + 0x54],EAX      ; 0041cf41
    MOV EAX,dword ptr [ESP + 0x40]      ; 0041cf45
    MOV dword ptr [ESP + 0x58],EAX      ; 0041cf49
    MOV EAX,dword ptr [ESP + 0x44]      ; 0041cf4d
    MOV dword ptr [ESP + 0x5c],EAX      ; 0041cf51
    MOV EAX,0x6b028c                    ; 0041cf55 | DAT_006b028c
        ;   Label: LAB_0041cf55
    LEA EBX,[ESP + 0x60]                ; 0041cf5a
    FILD dword ptr [EAX]                ; 0041cf5e | DAT_006b028c
    FMUL float ptr [0x0059aa88]         ; 0041cf60 | DAT_0059aa88
    FSTP float ptr [EBX]                ; 0041cf66
    FILD dword ptr [EAX + 0x4]          ; 0041cf68 | DAT_006b0290
    FMUL float ptr [0x0059aa88]         ; 0041cf6b | DAT_0059aa88
    FSTP float ptr [EBX + 0x4]          ; 0041cf71
    FILD dword ptr [EAX + 0x8]          ; 0041cf74 | DAT_006b0294
    FMUL float ptr [0x0059aa88]         ; 0041cf77 | DAT_0059aa88
    FSTP float ptr [EBX + 0x8]          ; 0041cf7d
    LEA EBX,[ESP + 0x48]                ; 0041cf80
    LEA EAX,[ESP + 0x54]                ; 0041cf84
    FLD float ptr [EAX]                 ; 0041cf88
    FMUL float ptr [0x0059aa80]         ; 0041cf8a | DAT_0059aa80
    FISTP dword ptr [EBX]               ; 0041cf90
    FLD float ptr [EAX + 0x4]           ; 0041cf92
    FMUL float ptr [0x0059aa80]         ; 0041cf95 | DAT_0059aa80
    FISTP dword ptr [EBX + 0x4]         ; 0041cf9b
    FLD float ptr [EAX + 0x8]           ; 0041cf9e
    FMUL float ptr [0x0059aa80]         ; 0041cfa1 | DAT_0059aa80
    FISTP dword ptr [EBX + 0x8]         ; 0041cfa7
    LEA EAX,[ESP + 0x48]                ; 0041cfaa
    PUSH EAX                            ; 0041cfae
    LEA EAX,[ESP + 0x4]                 ; 0041cfaf
    PUSH EAX                            ; 0041cfb3
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0041cfb4
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0041cfb9
    MOV EBX,dword ptr [0x007f7370]      ; 0041cfbc | DAT_007f7370
    FLD float ptr [ESP + 0x60]          ; 0041cfc2
    FLD float ptr [ESP + 0x64]          ; 0041cfc6
    FLD float ptr [ESP + 0x68]          ; 0041cfca
    FXCH ST2                            ; 0041cfce
    FADD float ptr [ESP + 0x54]         ; 0041cfd0
    FXCH                                ; 0041cfd4
    FADD float ptr [ESP + 0x58]         ; 0041cfd6
    FXCH ST2                            ; 0041cfda
    FADD float ptr [ESP + 0x5c]         ; 0041cfdc
    FXCH                                ; 0041cfe0
    FSTP float ptr [ESP + 0x60]         ; 0041cfe2
    FXCH                                ; 0041cfe6
    FSTP float ptr [ESP + 0x64]         ; 0041cfe8
    FSTP float ptr [ESP + 0x68]         ; 0041cfec
    TEST EBX,EBX                        ; 0041cff0
    JZ 0x0041d01f                       ; 0041cff2
        ;   XREF to: 0041d01f (CONDITIONAL_JUMP)  ; LAB_0041d01f
    MOV EAX,ESP                         ; 0041cff4
    PUSH EAX                            ; 0041cff6
    LEA EAX,[ESP + 0x64]                ; 0041cff7
    PUSH EAX                            ; 0041cffb
    PUSH 0x1fb8508                      ; 0041cffc
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670 ; 0041d001
        ;   XREF to: 00447670 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    MOV EDI,dword ptr [0x01c038f4]      ; 0041d006 | DAT_01c038f4
    ADD ESP,0xc                         ; 0041d00c
    CMP EDI,0xfde8                      ; 0041d00f
    JLE 0x0041d025                      ; 0041d015
        ;   XREF to: 0041d025 (CONDITIONAL_JUMP)  ; LAB_0041d025
    XOR EAX,EAX                         ; 0041d017
    ADD ESP,0x6c                        ; 0041d019
    POP EDI                             ; 0041d01c
    POP EBX                             ; 0041d01d
    RET                                 ; 0041d01e
    MOV dword ptr [0x01c038f4],EBX      ; 0041d01f | DAT_01c038f4
        ;   Label: LAB_0041d01f
    MOV EAX,0x1                         ; 0041d025
        ;   Label: LAB_0041d025
    ADD ESP,0x6c                        ; 0041d02a
    POP EDI                             ; 0041d02d
    POP EBX                             ; 0041d02e
    RET                                 ; 0041d02f
    CMP dword ptr [ESP + 0x7c],0x0      ; 0041d030
        ;   Label: LAB_0041d030
    JNZ 0x0041d025                      ; 0041d035
        ;   XREF to: 0041d025 (CONDITIONAL_JUMP)  ; LAB_0041d025
    PUSH EBX                            ; 0041d037
    CALL core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0 ; 0041d038
        ;   XREF to: 0041cce0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0041d03d
    TEST EAX,EAX                        ; 0041d040
    JNZ 0x0041d025                      ; 0041d042
        ;   XREF to: 0041d025 (CONDITIONAL_JUMP)  ; LAB_0041d025
    ADD ESP,0x6c                        ; 0041d044
    POP EDI                             ; 0041d047
    POP EBX                             ; 0041d048
    RET                                 ; 0041d049

