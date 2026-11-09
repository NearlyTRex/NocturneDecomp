; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_FUN_0058ad40(CWeather *this_ptr)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xfc]:1  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
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
; undefined        Stack[-0x74]:1  local_74
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
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_set.cpp_FUN_0052f2a0 at 0052f6a6
;
; Referenced Globals:
;   undefined4 DAT_005fe090
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0061e8f8
;   undefined4 DAT_0061e910
;   undefined4 DAT_0061e928
;   undefined4 DAT_00780000
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_02661fb8
;   undefined4 DAT_02661fbc
;   undefined4 DAT_02661fc0
;   undefined4 DAT_02661fc4
;   undefined4 DAT_02661fc8
;   undefined4 DAT_02661fcc
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_005317c0
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_matrix.c_FUN_0046b670
;   engine_matrix.c_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;   engine_special.cpp_FUN_0055d9ec
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0058ad40
        ;   Label: core_weather.cpp_FUN_0058ad40
    PUSH EDI                            ; 0058ad41
    PUSH EBP                            ; 0058ad42
    SUB ESP,0xf0                        ; 0058ad43
    MOV EAX,dword ptr [ESP + 0x100]     ; 0058ad49
    CMP dword ptr [EAX],0x0             ; 0058ad50
    JNZ 0x0058ad5f                      ; 0058ad53
        ;   XREF to: 0058ad5f (CONDITIONAL_JUMP)  ; LAB_0058ad5f
    ADD ESP,0xf0                        ; 0058ad55
    POP EBP                             ; 0058ad5b
    POP EDI                             ; 0058ad5c
    POP ESI                             ; 0058ad5d
    RET                                 ; 0058ad5e
    MOV ECX,dword ptr [0x0060b280]      ; 0058ad5f | DAT_0060b280
        ;   Label: LAB_0058ad5f
    PUSH ECX                            ; 0058ad65 | DAT_01ba5c50
    LEA ESI,[ESP + 0x8c]                ; 0058ad66
    LEA EDI,[ESP + 0x2c]                ; 0058ad6d
    CALL engine_matrix.c_FUN_0046b670   ; 0058ad71
        ;   XREF to: 0046b670 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046b670()
    ADD ESP,0x4                         ; 0058ad76
    LEA ESI,[ESP + 0x88]                ; 0058ad79
    MOV EAX,dword ptr [ESP + 0x100]     ; 0058ad80
    MOVSD ES:EDI,ESI                    ; 0058ad87
    MOVSD ES:EDI,ESI                    ; 0058ad88
    MOVSD ES:EDI,ESI                    ; 0058ad89
    CMP dword ptr [EAX],0x1             ; 0058ad8a
    JNZ 0x0058ad95                      ; 0058ad8d
        ;   XREF to: 0058ad95 (CONDITIONAL_JUMP)  ; LAB_0058ad95
    XOR ESI,ESI                         ; 0058ad8f
    MOV dword ptr [ESP + 0x28],ESI      ; 0058ad91
    MOV EAX,dword ptr [ESP + 0x100]     ; 0058ad95
        ;   Label: LAB_0058ad95
    CMP dword ptr [EAX],0x1             ; 0058ad9c
    JNZ 0x0058b24e                      ; 0058ad9f
        ;   XREF to: 0058b24e (CONDITIONAL_JUMP)  ; LAB_0058b24e
    PUSH 0x61e8f8                       ; 0058ada5 | DAT_0061e8f8
    MOV EAX,[0x0060b280]                ; 0058adaa | DAT_0060b280
    PUSH EAX                            ; 0058adaf | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0058adb0
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x0060b280]                ; 0058adb5 | DAT_0060b280
    MOV EDX,dword ptr [EAX]             ; 0058adba | DAT_01ba5c50
    MOV dword ptr [EDX + 0x18],0x80000  ; 0058adbc
    MOV EDX,dword ptr [EAX]             ; 0058adc3 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x1c],0x80000  ; 0058adc5
    MOV EDX,dword ptr [EAX]             ; 0058adcc | DAT_01ba5c50
    MOV dword ptr [EDX + 0x48],0x780000 ; 0058adce | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 0058add5 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x4c],0x80000  ; 0058add7
    MOV EDX,dword ptr [EAX]             ; 0058adde | DAT_01ba5c50
    MOV dword ptr [EDX + 0x78],0x780000 ; 0058ade0 | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 0058ade7 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 0058ade9
    MOV EDX,dword ptr [EAX]             ; 0058adf0 | DAT_01ba5c50
    MOV dword ptr [EDX + 0xa8],0x80000  ; 0058adf2
    MOV EAX,dword ptr [EAX]             ; 0058adfc | DAT_01ba5c50
    ADD ESP,0x8                         ; 0058adfe
    MOV dword ptr [EAX + 0xac],0xf80000 ; 0058ae01
    PUSH 0x0                            ; 0058ae0b
        ;   Label: LAB_0058ae0b
    PUSH 0x0                            ; 0058ae0d
    PUSH 0x0                            ; 0058ae0f
    PUSH 0x0                            ; 0058ae11
    PUSH 0x0                            ; 0058ae13
    MOV EDX,dword ptr [0x0061b5a8]      ; 0058ae15 | g_CDemonSetPtr
    PUSH EDX                            ; 0058ae1b
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980 ; 0058ae1c
        ;   XREF to: 00530980 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 0058ae21
    MOV ECX,0x3dcccccd                  ; 0058ae24
    MOV EAX,dword ptr [ESP + 0x100]     ; 0058ae29
    MOV dword ptr [ESP + 0xe0],ECX      ; 0058ae30
    MOV ESI,dword ptr [EAX]             ; 0058ae37
    MOV dword ptr [ESP + 0xe4],ECX      ; 0058ae39
    CMP ESI,0x1                         ; 0058ae40
    JZ 0x0058b267                       ; 0058ae43
        ;   XREF to: 0058b267 (CONDITIONAL_JUMP)  ; LAB_0058b267
    PUSH EBX                            ; 0058ae49
        ;   Label: LAB_0058ae49
    MOV EAX,0x4                         ; 0058ae4a
    MOV EBP,0x1                         ; 0058ae4f
    MOV ECX,dword ptr [0x0060b280]      ; 0058ae54 | DAT_0060b280
    XOR EDX,EDX                         ; 0058ae5a
    MOV dword ptr [ESP + 0x8],EAX       ; 0058ae5c
    MOV dword ptr [ESP + 0x18],EDX      ; 0058ae60
    MOV dword ptr [ESP + 0x14],EDX      ; 0058ae64
    MOV dword ptr [ESP + 0x10],EDX      ; 0058ae68
    MOV dword ptr [ESP + 0xc],EDX       ; 0058ae6c
    MOV dword ptr [ESP + 0x1c],EDX      ; 0058ae70
    MOV dword ptr [ESP + 0x20],EBP      ; 0058ae74
    PUSH EBP                            ; 0058ae78
    MOV EAX,0x2                         ; 0058ae79
    MOV EDX,0x3                         ; 0058ae7e
    PUSH ECX                            ; 0058ae83 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x2c],EAX      ; 0058ae84
    MOV dword ptr [ESP + 0x30],EDX      ; 0058ae88
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0058ae8c
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0058ae91
    PUSH 0x8000                         ; 0058ae94
    MOV EBX,dword ptr [0x0060b280]      ; 0058ae99 | DAT_0060b280
    PUSH EBX                            ; 0058ae9f | DAT_01ba5c50
    MOV ESI,0x2661fb8                   ; 0058aea0
    XOR EDI,EDI                         ; 0058aea5
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 0058aea7
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0058aeac
    MOV EBP,dword ptr [0x0060b280]      ; 0058aeaf | DAT_0060b280
        ;   Label: LAB_0058aeaf
    LEA EBX,[ESP + 0x5c]                ; 0058aeb5
    MOV EAX,ESI                         ; 0058aeb9
    MOV EBP,dword ptr [EBP]             ; 0058aebb | DAT_01ba5c50
    FLD float ptr [EAX]                 ; 0058aebe | DAT_02661fb8 | DAT_02661fc4
    FMUL float ptr [0x005fe090]         ; 0058aec0 | DAT_005fe090
    FISTP dword ptr [EBX]               ; 0058aec6
    FLD float ptr [EAX + 0x4]           ; 0058aec8 | DAT_02661fbc | DAT_02661fc8
    FMUL float ptr [0x005fe090]         ; 0058aecb | DAT_005fe090
    FISTP dword ptr [EBX + 0x4]         ; 0058aed1
    FLD float ptr [EAX + 0x8]           ; 0058aed4 | DAT_02661fc0 | DAT_02661fcc
    FMUL float ptr [0x005fe090]         ; 0058aed7 | DAT_005fe090
    FISTP dword ptr [EBX + 0x8]         ; 0058aedd
    LEA EAX,[ESP + 0x5c]                ; 0058aee0
    PUSH EAX                            ; 0058aee4
    PUSH EBP                            ; 0058aee5
    CALL engine_special.cpp_FUN_0055d9ec ; 0058aee6
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0058aeeb
    PUSH EBP                            ; 0058aeee
    MOV EBP,dword ptr [0x0060b280]      ; 0058aeef | DAT_0060b280
    PUSH EBP                            ; 0058aef5 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0 ; 0058aef6
        ;   XREF to: 0046cad0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 0058aefb
    TEST EAX,EAX                        ; 0058aefe
    JZ 0x0058b163                       ; 0058af00
        ;   XREF to: 0058b163 (CONDITIONAL_JUMP)  ; LAB_0058b163
    PUSH ESI                            ; 0058af06 | DAT_02661fb8
    MOV EAX,[0x0060b280]                ; 0058af07 | DAT_0060b280
    PUSH EAX                            ; 0058af0c | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0058af0d
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0058af12
    PUSH 0x0                            ; 0058af15
    LEA EAX,[ESP + 0x30]                ; 0058af17
    PUSH EAX                            ; 0058af1b
    MOV EDX,dword ptr [0x0060b280]      ; 0058af1c | DAT_0060b280
    PUSH EDX                            ; 0058af22 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0058af23
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0058af28
    LEA EBX,[ESP + 0xb0]                ; 0058af2b
    MOV EAX,ESI                         ; 0058af32
    FLD float ptr [EAX]                 ; 0058af34 | DAT_02661fb8
    FMUL float ptr [0x005fe090]         ; 0058af36 | DAT_005fe090
    FISTP dword ptr [EBX]               ; 0058af3c
    FLD float ptr [EAX + 0x4]           ; 0058af3e | DAT_02661fbc
    FMUL float ptr [0x005fe090]         ; 0058af41 | DAT_005fe090
    FISTP dword ptr [EBX + 0x4]         ; 0058af47
    FLD float ptr [EAX + 0x8]           ; 0058af4a | DAT_02661fc0
    FMUL float ptr [0x005fe090]         ; 0058af4d | DAT_005fe090
    FISTP dword ptr [EBX + 0x8]         ; 0058af53
    PUSH 0x4                            ; 0058af56
    PUSH 0x0                            ; 0058af58
    PUSH 0x0                            ; 0058af5a
    LEA EAX,[ESP + 0xbc]                ; 0058af5c
    PUSH EAX                            ; 0058af63
    MOV ECX,dword ptr [0x0061b5a8]      ; 0058af64 | g_CDemonSetPtr
    PUSH ECX                            ; 0058af6a
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_005317c0 ; 0058af6b
        ;   XREF to: 005317c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_005317c0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 0058af70
    MOV EAX,dword ptr [ESP + 0x104]     ; 0058af73
    CMP dword ptr [EAX],0x2             ; 0058af7a
    JNZ 0x0058afeb                      ; 0058af7d
        ;   XREF to: 0058afeb (CONDITIONAL_JUMP)  ; LAB_0058afeb
    MOV EAX,[0x0060b280]                ; 0058af7f | DAT_0060b280
    MOV EBX,EDI                         ; 0058af84
    MOV EBP,EDI                         ; 0058af86
    AND EBX,0x3                         ; 0058af88
    AND EBP,0xc                         ; 0058af8b
    MOV EDX,dword ptr [EAX]             ; 0058af8e | DAT_01ba5c50
    SHL EBX,0x16                        ; 0058af90
    SAR EBP,0x2                         ; 0058af93
    LEA ECX,[EBX + 0x80000]             ; 0058af96
    SHL EBP,0x16                        ; 0058af9c
    MOV dword ptr [EDX + 0x18],ECX      ; 0058af9f
    MOV dword ptr [ESP + 0xe0],ECX      ; 0058afa2
    MOV ECX,dword ptr [EAX]             ; 0058afa9 | DAT_01ba5c50
    LEA EDX,[EBP + 0x80000]             ; 0058afab
    MOV dword ptr [ECX + 0x1c],EDX      ; 0058afb1
    MOV ECX,dword ptr [EAX]             ; 0058afb4 | DAT_01ba5c50
    ADD EBX,0x380000                    ; 0058afb6
    MOV dword ptr [ECX + 0x48],EBX      ; 0058afbc
    MOV ECX,dword ptr [EAX]             ; 0058afbf | DAT_01ba5c50
    MOV dword ptr [ECX + 0x4c],EDX      ; 0058afc1
    MOV EDX,dword ptr [EAX]             ; 0058afc4 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x78],EBX      ; 0058afc6
    MOV EDX,dword ptr [EAX]             ; 0058afc9 | DAT_01ba5c50
    ADD EBP,0x380000                    ; 0058afcb
    MOV dword ptr [EDX + 0x7c],EBP      ; 0058afd1
    MOV EDX,dword ptr [EAX]             ; 0058afd4 | DAT_01ba5c50
    MOV ECX,dword ptr [ESP + 0xe0]      ; 0058afd6
    MOV dword ptr [EDX + 0xa8],ECX      ; 0058afdd
    MOV EAX,dword ptr [EAX]             ; 0058afe3 | DAT_01ba5c50
    MOV dword ptr [EAX + 0xac],EBP      ; 0058afe5
    FLD float ptr [ESP + 0xe8]          ; 0058afeb
        ;   Label: LAB_0058afeb
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0058aff2
    LEA EBX,[ESP + 0xd4]                ; 0058aff9
    MOV EDX,dword ptr [0x0060b280]      ; 0058b000 | DAT_0060b280
    FCHS                                ; 0058b006
    XOR EBP,EBP                         ; 0058b008
    FSTP float ptr [ESP + 0x48]         ; 0058b00a
    MOV dword ptr [ESP + 0x44],EAX      ; 0058b00e
    LEA EAX,[ESP + 0x44]                ; 0058b012
    MOV dword ptr [ESP + 0x4c],EBP      ; 0058b016
    FLD float ptr [EAX]                 ; 0058b01a
    FMUL float ptr [0x005fe090]         ; 0058b01c | DAT_005fe090
    FISTP dword ptr [EBX]               ; 0058b022
    FLD float ptr [EAX + 0x4]           ; 0058b024
    FMUL float ptr [0x005fe090]         ; 0058b027 | DAT_005fe090
    FISTP dword ptr [EBX + 0x4]         ; 0058b02d
    FLD float ptr [EAX + 0x8]           ; 0058b030
    FMUL float ptr [0x005fe090]         ; 0058b033 | DAT_005fe090
    FISTP dword ptr [EBX + 0x8]         ; 0058b039
    LEA EAX,[ESP + 0xd4]                ; 0058b03c
    PUSH EAX                            ; 0058b043
    MOV EAX,dword ptr [EDX]             ; 0058b044 | DAT_01ba5c50
    PUSH EAX                            ; 0058b046
    CALL engine_special.cpp_FUN_0055d723 ; 0058b047
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0058b04c
    MOV AH,byte ptr [ESP + 0x47]        ; 0058b04f
    XOR AH,0x80                         ; 0058b053
    LEA EBX,[ESP + 0x50]                ; 0058b056
    MOV byte ptr [ESP + 0x47],AH        ; 0058b05a
    LEA EAX,[ESP + 0x44]                ; 0058b05e
    MOV EDX,dword ptr [0x0060b280]      ; 0058b062 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0058b068
    FMUL float ptr [0x005fe090]         ; 0058b06a | DAT_005fe090
    FISTP dword ptr [EBX]               ; 0058b070
    FLD float ptr [EAX + 0x4]           ; 0058b072
    FMUL float ptr [0x005fe090]         ; 0058b075 | DAT_005fe090
    FISTP dword ptr [EBX + 0x4]         ; 0058b07b
    FLD float ptr [EAX + 0x8]           ; 0058b07e
    FMUL float ptr [0x005fe090]         ; 0058b081 | DAT_005fe090
    FISTP dword ptr [EBX + 0x8]         ; 0058b087
    LEA EAX,[ESP + 0x50]                ; 0058b08a
    PUSH EAX                            ; 0058b08e
    MOV EAX,dword ptr [EDX]             ; 0058b08f | DAT_01ba5c50
    ADD EAX,0x30                        ; 0058b091
    PUSH EAX                            ; 0058b094
    CALL engine_special.cpp_FUN_0055d723 ; 0058b095
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0058b09a
    MOV DL,byte ptr [ESP + 0x4b]        ; 0058b09d
    LEA EBX,[ESP + 0x74]                ; 0058b0a1
    XOR DL,0x80                         ; 0058b0a5
    LEA EAX,[ESP + 0x44]                ; 0058b0a8
    MOV byte ptr [ESP + 0x4b],DL        ; 0058b0ac
    MOV EDX,dword ptr [0x0060b280]      ; 0058b0b0 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0058b0b6
    FMUL float ptr [0x005fe090]         ; 0058b0b8 | DAT_005fe090
    FISTP dword ptr [EBX]               ; 0058b0be
    FLD float ptr [EAX + 0x4]           ; 0058b0c0
    FMUL float ptr [0x005fe090]         ; 0058b0c3 | DAT_005fe090
    FISTP dword ptr [EBX + 0x4]         ; 0058b0c9
    FLD float ptr [EAX + 0x8]           ; 0058b0cc
    FMUL float ptr [0x005fe090]         ; 0058b0cf | DAT_005fe090
    FISTP dword ptr [EBX + 0x8]         ; 0058b0d5
    LEA EAX,[ESP + 0x74]                ; 0058b0d8
    PUSH EAX                            ; 0058b0dc
    MOV EAX,dword ptr [EDX]             ; 0058b0dd | DAT_01ba5c50
    ADD EAX,0x60                        ; 0058b0df
    PUSH EAX                            ; 0058b0e2
    CALL engine_special.cpp_FUN_0055d723 ; 0058b0e3
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0058b0e8
    MOV DH,byte ptr [ESP + 0x47]        ; 0058b0eb
    LEA EBX,[ESP + 0x98]                ; 0058b0ef
    XOR DH,0x80                         ; 0058b0f6
    LEA EAX,[ESP + 0x44]                ; 0058b0f9
    MOV byte ptr [ESP + 0x47],DH        ; 0058b0fd
    MOV EDX,dword ptr [0x0060b280]      ; 0058b101 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0058b107
    FMUL float ptr [0x005fe090]         ; 0058b109 | DAT_005fe090
    FISTP dword ptr [EBX]               ; 0058b10f
    FLD float ptr [EAX + 0x4]           ; 0058b111
    FMUL float ptr [0x005fe090]         ; 0058b114 | DAT_005fe090
    FISTP dword ptr [EBX + 0x4]         ; 0058b11a
    FLD float ptr [EAX + 0x8]           ; 0058b11d
    FMUL float ptr [0x005fe090]         ; 0058b120 | DAT_005fe090
    FISTP dword ptr [EBX + 0x8]         ; 0058b126
    LEA EAX,[ESP + 0x98]                ; 0058b129
    PUSH EAX                            ; 0058b130
    MOV EAX,dword ptr [EDX]             ; 0058b131 | DAT_01ba5c50
    ADD EAX,0x90                        ; 0058b133
    PUSH EAX                            ; 0058b138
    CALL engine_special.cpp_FUN_0055d723 ; 0058b139
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0058b13e
    LEA EAX,[ESP + 0x4]                 ; 0058b141
    PUSH EAX                            ; 0058b145
    MOV EAX,[0x0060b280]                ; 0058b146 | DAT_0060b280
    PUSH EAX                            ; 0058b14b | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 0058b14c
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0058b151
    MOV EDX,dword ptr [0x0060b280]      ; 0058b154 | DAT_0060b280
    PUSH EDX                            ; 0058b15a | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 0058b15b
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0058b160
    INC EDI                             ; 0058b163
        ;   Label: LAB_0058b163
    ADD ESI,0xc                         ; 0058b164
    CMP EDI,0xc8                        ; 0058b167
    JL 0x0058aeaf                       ; 0058b16d
        ;   XREF to: 0058aeaf (CONDITIONAL_JUMP)  ; LAB_0058aeaf
    MOV EAX,dword ptr [ESP + 0x104]     ; 0058b173
    CMP dword ptr [EAX],0x1             ; 0058b17a
    JNZ 0x0058b232                      ; 0058b17d
        ;   XREF to: 0058b232 (CONDITIONAL_JUMP)  ; LAB_0058b232
    PUSH 0x61e910                       ; 0058b183 | DAT_0061e910
    MOV EBX,dword ptr [0x0060b280]      ; 0058b188 | DAT_0060b280
    PUSH EBX                            ; 0058b18e | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0058b18f
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x0060b280]                ; 0058b194 | DAT_0060b280
    MOV EDX,dword ptr [EAX]             ; 0058b199 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x18],0x80000  ; 0058b19b
    MOV EDX,dword ptr [EAX]             ; 0058b1a2 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x1c],0x80000  ; 0058b1a4
    MOV EDX,dword ptr [EAX]             ; 0058b1ab | DAT_01ba5c50
    MOV dword ptr [EDX + 0x48],0x780000 ; 0058b1ad | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 0058b1b4 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x4c],0x80000  ; 0058b1b6
    MOV EDX,dword ptr [EAX]             ; 0058b1bd | DAT_01ba5c50
    MOV dword ptr [EDX + 0x78],0x780000 ; 0058b1bf | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 0058b1c6 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 0058b1c8
    MOV EDX,dword ptr [EAX]             ; 0058b1cf | DAT_01ba5c50
    XOR EBP,EBP                         ; 0058b1d1
    MOV dword ptr [EDX + 0xa8],0x80000  ; 0058b1d3
    ADD ESP,0x8                         ; 0058b1dd
    MOV EAX,dword ptr [EAX]             ; 0058b1e0 | DAT_01ba5c50
    MOV dword ptr [ESP + 0xf0],EBP      ; 0058b1e2
    MOV dword ptr [ESP + 0xec],EBP      ; 0058b1e9
    MOV dword ptr [EAX + 0xac],0xf80000 ; 0058b1f0
    CMP byte ptr [EBP + 0x2662c38],0x0  ; 0058b1fa
        ;   Label: LAB_0058b1fa
    JNZ 0x0058b284                      ; 0058b201
        ;   XREF to: 0058b284 (CONDITIONAL_JUMP)  ; LAB_0058b284
    MOV EBX,dword ptr [ESP + 0xec]      ; 0058b207
        ;   Label: LAB_0058b207
    MOV ECX,dword ptr [ESP + 0xf0]      ; 0058b20e
    INC EBP                             ; 0058b215
    ADD EBX,0xc                         ; 0058b216
    ADD ECX,0x4                         ; 0058b219
    MOV dword ptr [ESP + 0xec],EBX      ; 0058b21c
    MOV dword ptr [ESP + 0xf0],ECX      ; 0058b223
    CMP EBP,0xc8                        ; 0058b22a
    JL 0x0058b1fa                       ; 0058b230
        ;   XREF to: 0058b1fa (CONDITIONAL_JUMP)  ; LAB_0058b1fa
    PUSH 0x0                            ; 0058b232
        ;   Label: LAB_0058b232
    MOV ESI,dword ptr [0x0060b280]      ; 0058b234 | DAT_0060b280
    PUSH ESI                            ; 0058b23a | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0058b23b
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0058b240
    POP EBX                             ; 0058b243
    ADD ESP,0xf0                        ; 0058b244
    POP EBP                             ; 0058b24a
    POP EDI                             ; 0058b24b
    POP ESI                             ; 0058b24c
    RET                                 ; 0058b24d
    PUSH 0x61e928                       ; 0058b24e | DAT_0061e928
        ;   Label: LAB_0058b24e
    MOV EBP,dword ptr [0x0060b280]      ; 0058b253 | DAT_0060b280
    PUSH EBP                            ; 0058b259 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0058b25a
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0058b25f
    JMP 0x0058ae0b                      ; 0058b262
        ;   XREF to: 0058ae0b (UNCONDITIONAL_JUMP)  ; LAB_0058ae0b
    MOV EBP,0xbecccccd                  ; 0058b267
        ;   Label: LAB_0058b267
    MOV EDI,0x3d4ccccd                  ; 0058b26c
    MOV dword ptr [ESP + 0xe4],EBP      ; 0058b271
    MOV dword ptr [ESP + 0xe0],EDI      ; 0058b278
    JMP 0x0058ae49                      ; 0058b27f
        ;   XREF to: 0058ae49 (UNCONDITIONAL_JUMP)  ; LAB_0058ae49
    MOV ESI,dword ptr [ESP + 0xec]      ; 0058b284
        ;   Label: LAB_0058b284
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0058b28b
    LEA EDI,[ESP + 0x38]                ; 0058b292
    LEA ESI,[ESI + 0x2661fb8]           ; 0058b296
    MOV EAX,dword ptr [EAX + 0x2662918] ; 0058b29c
    MOVSD ES:EDI,ESI                    ; 0058b2a2 | DAT_02661fc4
    MOVSD ES:EDI,ESI                    ; 0058b2a3 | DAT_02661fc8
    MOVSD ES:EDI,ESI                    ; 0058b2a4 | DAT_02661fcc
    MOV dword ptr [ESP + 0x3c],EAX      ; 0058b2a5
    LEA EAX,[ESP + 0x38]                ; 0058b2a9
    PUSH EAX                            ; 0058b2ad
    MOV EAX,[0x0060b280]                ; 0058b2ae | DAT_0060b280
    PUSH EAX                            ; 0058b2b3 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0058b2b4
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0058b2b9
    PUSH 0x0                            ; 0058b2bc
    LEA EAX,[ESP + 0x30]                ; 0058b2be
    PUSH EAX                            ; 0058b2c2
    MOV EDX,dword ptr [0x0060b280]      ; 0058b2c3 | DAT_0060b280
    PUSH EDX                            ; 0058b2c9 | DAT_01ba5c50
    XOR EBX,EBX                         ; 0058b2ca
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0058b2cc
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    MOV ECX,0x3e4ccccd                  ; 0058b2d1
    LEA EAX,[ESP + 0xc8]                ; 0058b2d6
    ADD ESP,0xc                         ; 0058b2dd
    MOV EDX,dword ptr [0x0060b280]      ; 0058b2e0 | DAT_0060b280
    MOV dword ptr [ESP + 0xc0],EBX      ; 0058b2e6
    MOV dword ptr [ESP + 0xc4],EBX      ; 0058b2ed
    LEA EBX,[ESP + 0x80]                ; 0058b2f4
    MOV dword ptr [ESP + 0xbc],ECX      ; 0058b2fb
    FLD float ptr [EAX]                 ; 0058b302
    FMUL float ptr [0x005fe090]         ; 0058b304 | DAT_005fe090
    FISTP dword ptr [EBX]               ; 0058b30a
    FLD float ptr [EAX + 0x4]           ; 0058b30c
    FMUL float ptr [0x005fe090]         ; 0058b30f | DAT_005fe090
    FISTP dword ptr [EBX + 0x4]         ; 0058b315
    FLD float ptr [EAX + 0x8]           ; 0058b318
    FMUL float ptr [0x005fe090]         ; 0058b31b | DAT_005fe090
    FISTP dword ptr [EBX + 0x8]         ; 0058b321
    LEA EAX,[ESP + 0x80]                ; 0058b324
    PUSH EAX                            ; 0058b32b
    MOV EAX,dword ptr [EDX]             ; 0058b32c | DAT_01ba5c50
    PUSH EAX                            ; 0058b32e
    CALL engine_special.cpp_FUN_0055d723 ; 0058b32f
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0058b334
    MOV BH,byte ptr [ESP + 0xbf]        ; 0058b337
    XOR BH,0x80                         ; 0058b33e
    LEA EAX,[ESP + 0xbc]                ; 0058b341
    MOV byte ptr [ESP + 0xbf],BH        ; 0058b348
    LEA EBX,[ESP + 0xa4]                ; 0058b34f
    MOV EDX,dword ptr [0x0060b280]      ; 0058b356 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0058b35c
    FMUL float ptr [0x005fe090]         ; 0058b35e | DAT_005fe090
    FISTP dword ptr [EBX]               ; 0058b364
    FLD float ptr [EAX + 0x4]           ; 0058b366
    FMUL float ptr [0x005fe090]         ; 0058b369 | DAT_005fe090
    FISTP dword ptr [EBX + 0x4]         ; 0058b36f
    FLD float ptr [EAX + 0x8]           ; 0058b372
    FMUL float ptr [0x005fe090]         ; 0058b375 | DAT_005fe090
    FISTP dword ptr [EBX + 0x8]         ; 0058b37b
    LEA EAX,[ESP + 0xa4]                ; 0058b37e
    PUSH EAX                            ; 0058b385
    MOV EAX,dword ptr [EDX]             ; 0058b386 | DAT_01ba5c50
    ADD EAX,0x30                        ; 0058b388
    PUSH EAX                            ; 0058b38b
    MOV EDI,0x3ecccccd                  ; 0058b38c
    CALL engine_special.cpp_FUN_0055d723 ; 0058b391
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0xd0]                ; 0058b396
    LEA EAX,[ESP + 0xc4]                ; 0058b39d
    ADD ESP,0x8                         ; 0058b3a4
    MOV EDX,dword ptr [0x0060b280]      ; 0058b3a7 | DAT_0060b280
    MOV dword ptr [ESP + 0xc0],EDI      ; 0058b3ad
    FLD float ptr [EAX]                 ; 0058b3b4
    FMUL float ptr [0x005fe090]         ; 0058b3b6 | DAT_005fe090
    FISTP dword ptr [EBX]               ; 0058b3bc
    FLD float ptr [EAX + 0x4]           ; 0058b3be
    FMUL float ptr [0x005fe090]         ; 0058b3c1 | DAT_005fe090
    FISTP dword ptr [EBX + 0x4]         ; 0058b3c7
    FLD float ptr [EAX + 0x8]           ; 0058b3ca
    FMUL float ptr [0x005fe090]         ; 0058b3cd | DAT_005fe090
    FISTP dword ptr [EBX + 0x8]         ; 0058b3d3
    LEA EAX,[ESP + 0xc8]                ; 0058b3d6
    PUSH EAX                            ; 0058b3dd
    MOV EAX,dword ptr [EDX]             ; 0058b3de | DAT_01ba5c50
    ADD EAX,0x60                        ; 0058b3e0
    PUSH EAX                            ; 0058b3e3
    CALL engine_special.cpp_FUN_0055d723 ; 0058b3e4
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0058b3e9
    LEA EBX,[ESP + 0x68]                ; 0058b3ec
    MOV CL,byte ptr [ESP + 0xbf]        ; 0058b3f0
    LEA EAX,[ESP + 0xbc]                ; 0058b3f7
    XOR CL,0x80                         ; 0058b3fe
    MOV EDX,dword ptr [0x0060b280]      ; 0058b401 | DAT_0060b280
    MOV byte ptr [ESP + 0xbf],CL        ; 0058b407
    FLD float ptr [EAX]                 ; 0058b40e
    FMUL float ptr [0x005fe090]         ; 0058b410 | DAT_005fe090
    FISTP dword ptr [EBX]               ; 0058b416
    FLD float ptr [EAX + 0x4]           ; 0058b418
    FMUL float ptr [0x005fe090]         ; 0058b41b | DAT_005fe090
    FISTP dword ptr [EBX + 0x4]         ; 0058b421
    FLD float ptr [EAX + 0x8]           ; 0058b424
    FMUL float ptr [0x005fe090]         ; 0058b427 | DAT_005fe090
    FISTP dword ptr [EBX + 0x8]         ; 0058b42d
    LEA EAX,[ESP + 0x68]                ; 0058b430
    PUSH EAX                            ; 0058b434
    MOV EAX,dword ptr [EDX]             ; 0058b435 | DAT_01ba5c50
    ADD EAX,0x90                        ; 0058b437
    PUSH EAX                            ; 0058b43c
    CALL engine_special.cpp_FUN_0055d723 ; 0058b43d
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0058b442
    LEA EAX,[ESP + 0x4]                 ; 0058b445
    PUSH EAX                            ; 0058b449
    MOV EAX,[0x0060b280]                ; 0058b44a | DAT_0060b280
    PUSH EAX                            ; 0058b44f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 0058b450
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0058b455
    MOV EDX,dword ptr [0x0060b280]      ; 0058b458 | DAT_0060b280
    PUSH EDX                            ; 0058b45e | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 0058b45f
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0058b464
    JMP 0x0058b207                      ; 0058b467
        ;   XREF to: 0058b207 (UNCONDITIONAL_JUMP)  ; LAB_0058b207

