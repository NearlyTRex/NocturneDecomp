; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_00541a60(CDeformableModel *this_ptr,int lod_index,int *part_visibility_flags,int *texture_set_indices,int render_flags,int skip_texture_capture)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; int *            Stack[0xc]:4   part_visibility_flags
; int *            Stack[0x10]:4   texture_set_indices
; int              Stack[0x14]:4   render_flags
; int              Stack[0x18]:4   skip_texture_capture
; Local Variables:
; undefined4       Stack[-0x130]:4  local_130
; undefined        Stack[-0x12c]:1  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
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
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_00547370 at 005473a9
;
; Referenced Globals:
;   undefined4 DAT_005e6e07
;   undefined4 DAT_005e6e0f
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d04fb8
;   undefined4 DAT_01d04fbc
;   undefined4 DAT_01d04fc0
;   undefined4 DAT_01d04fc4
;   undefined4 DAT_01d04fc8
;   undefined4 DAT_01d04fcc
;   undefined4 DAT_01d04fd0
;   undefined4 DAT_01d04fd4
;   undefined4 DAT_01d04fd8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541a60
        ;   Label: core_skeleton.cpp_CDeformableModel_renderParts_FUN_00541a60
    PUSH ESI                            ; 00541a61
    PUSH EDI                            ; 00541a62
    PUSH EBP                            ; 00541a63
    MOV EBP,ESP                         ; 00541a64
    SUB ESP,0x120                       ; 00541a66
    AND ESP,0xfffffff8                  ; 00541a6c
    MOV EDX,dword ptr [0x0060b280]      ; 00541a6f | DAT_0060b280
    PUSH EDX                            ; 00541a75 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00541a76
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00541a7b
    MOV dword ptr [ESP + 0xac],EAX      ; 00541a7e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00541a85
    MOV ECX,dword ptr [EBP + 0x14]      ; 00541a88
    SHL EAX,0x3                         ; 00541a8b
    ADD EAX,ECX                         ; 00541a8e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00541a90
    MOV dword ptr [ESP + 0xb0],EAX      ; 00541a93
    TEST EAX,EAX                        ; 00541a9a
    JZ 0x00541aa2                       ; 00541a9c
        ;   XREF to: 00541aa2 (CONDITIONAL_JUMP)  ; LAB_00541aa2
    AND byte ptr [EBP + 0x24],0xfe      ; 00541a9e
    PUSH 0x1                            ; 00541aa2
        ;   Label: LAB_00541aa2
    MOV ESI,dword ptr [0x0060b280]      ; 00541aa4 | DAT_0060b280
    PUSH ESI                            ; 00541aaa | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 00541aab
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00541ab0
    XOR EDI,EDI                         ; 00541ab3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00541ab5
    MOV dword ptr [ESP + 0x80],EDI      ; 00541ab8
    MOV EDX,dword ptr [EAX + 0xc00]     ; 00541abf
    MOV dword ptr [ESP + 0x74],EDI      ; 00541ac5
    TEST EDX,EDX                        ; 00541ac9
    JLE 0x00541bdf                      ; 00541acb
        ;   XREF to: 00541bdf (CONDITIONAL_JUMP)  ; LAB_00541bdf
    MOV EAX,dword ptr [EBP + 0x18]      ; 00541ad1
    MOV EDX,dword ptr [EBP + 0x14]      ; 00541ad4
    SHL EAX,0x2                         ; 00541ad7
    ADD EDX,EAX                         ; 00541ada
    MOV EDI,dword ptr [EBP + 0x14]      ; 00541adc
    MOV dword ptr [ESP + 0xa0],EDX      ; 00541adf
    MOV EDX,dword ptr [EBP + 0x14]      ; 00541ae6
    ADD EAX,EDI                         ; 00541ae9
    ADD EDX,0xc0                        ; 00541aeb
    MOV dword ptr [ESP + 0x68],EAX      ; 00541af1
    MOV dword ptr [ESP + 0x9c],EDX      ; 00541af5
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00541afc
    MOV EAX,dword ptr [EBP + 0x20]      ; 00541b03
    MOV dword ptr [ESP + 0x90],EDX      ; 00541b06
    MOV dword ptr [ESP + 0x84],EDX      ; 00541b0d
    MOV dword ptr [ESP + 0x88],EDX      ; 00541b14
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00541b1b
    MOV dword ptr [ESP + 0x78],EAX      ; 00541b1e
    MOV dword ptr [ESP + 0x6c],EDX      ; 00541b22
    MOV EAX,dword ptr [ESP + 0x68]      ; 00541b26
        ;   Label: LAB_00541b26
    MOV EDI,dword ptr [ESP + 0x80]      ; 00541b2a
    MOV EDX,dword ptr [EAX + 0xc24]     ; 00541b31
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00541b37
    ADD EDI,EDX                         ; 00541b3b
    TEST byte ptr [EAX],0x1             ; 00541b3d
    JZ 0x00541b9d                       ; 00541b40
        ;   XREF to: 00541b9d (CONDITIONAL_JUMP)  ; LAB_00541b9d
    CMP dword ptr [ESP + 0xac],0x0      ; 00541b42
    JZ 0x00541d5c                       ; 00541b4a
        ;   XREF to: 00541d5c (CONDITIONAL_JUMP)  ; LAB_00541d5c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00541b50
        ;   Label: LAB_00541b50
    CMP dword ptr [EAX + 0xbc],0x1      ; 00541b53
    JNZ 0x0054222a                      ; 00541b5a
        ;   XREF to: 0054222a (CONDITIONAL_JUMP)  ; LAB_0054222a
    CMP dword ptr [ESP + 0xac],0x0      ; 00541b60
        ;   Label: LAB_00541b60
    JZ 0x00542333                       ; 00541b68
        ;   XREF to: 00542333 (CONDITIONAL_JUMP)  ; LAB_00542333
    MOV ESI,dword ptr [EBP + 0x24]      ; 00541b6e
        ;   Label: LAB_00541b6e
    MOV EDX,dword ptr [ESP + 0x80]      ; 00541b71
    MOV EAX,EDI                         ; 00541b78
    PUSH ESI                            ; 00541b7a
    SUB EAX,EDX                         ; 00541b7b
    PUSH EAX                            ; 00541b7d
    IMUL EAX,EDX,0x12                   ; 00541b7e
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00541b81
    MOV EDX,dword ptr [EDX + 0x7c]      ; 00541b88
    ADD EAX,EDX                         ; 00541b8b
    PUSH EAX                            ; 00541b8d
    MOV EBX,dword ptr [0x0061b5a8]      ; 00541b8e | g_CDemonSetPtr
    PUSH EBX                            ; 00541b94 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040 ; 00541b95
        ;   XREF to: 00534040 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040(CDemonSet * this_ptr, SInputFace * faces, int count, int flags)
    ADD ESP,0x10                        ; 00541b9a
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00541b9d
        ;   Label: LAB_00541b9d
    MOV EBX,dword ptr [ESP + 0x68]      ; 00541ba1
    MOV ESI,dword ptr [ESP + 0x78]      ; 00541ba5
    MOV EDX,dword ptr [EBP + 0x14]      ; 00541ba9
    MOV dword ptr [ESP + 0x80],EDI      ; 00541bac
    MOV EDI,dword ptr [ESP + 0x74]      ; 00541bb3
    ADD ECX,0x4                         ; 00541bb7
    ADD EBX,0x60                        ; 00541bba
    ADD ESI,0x4                         ; 00541bbd
    MOV dword ptr [ESP + 0x6c],ECX      ; 00541bc0
    MOV dword ptr [ESP + 0x68],EBX      ; 00541bc4
    MOV dword ptr [ESP + 0x78],ESI      ; 00541bc8
    INC EDI                             ; 00541bcc
    MOV ECX,dword ptr [EDX + 0xc00]     ; 00541bcd
    MOV dword ptr [ESP + 0x74],EDI      ; 00541bd3
    CMP EDI,ECX                         ; 00541bd7
    JL 0x00541b26                       ; 00541bd9
        ;   XREF to: 00541b26 (CONDITIONAL_JUMP)  ; LAB_00541b26
    MOV EAX,dword ptr [EBP + 0x14]      ; 00541bdf
        ;   Label: LAB_00541bdf
    XOR EBX,EBX                         ; 00541be2
    MOV ESI,dword ptr [EAX + 0xc00]     ; 00541be4
    MOV dword ptr [ESP + 0x7c],EBX      ; 00541bea
    TEST ESI,ESI                        ; 00541bee
    JLE 0x00541d33                      ; 00541bf0
        ;   XREF to: 00541d33 (CONDITIONAL_JUMP)  ; LAB_00541d33
    ADD EAX,0xc0                        ; 00541bf6
    MOV ESI,dword ptr [EBP + 0x14]      ; 00541bfb
    MOV dword ptr [ESP + 0x8c],EAX      ; 00541bfe
    MOV EAX,dword ptr [EBP + 0x18]      ; 00541c05
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00541c08
    SHL EAX,0x2                         ; 00541c0b
    MOV EBX,dword ptr [EBP + 0x14]      ; 00541c0e
    ADD ESI,EAX                         ; 00541c11
    ADD EAX,EBX                         ; 00541c13
    MOV dword ptr [ESP + 0x64],EDX      ; 00541c15
    MOV dword ptr [ESP + 0x70],EAX      ; 00541c19
    MOV EDX,dword ptr [ESP + 0x70]      ; 00541c1d
        ;   Label: LAB_00541c1d
    MOV EAX,dword ptr [ESP + 0x80]      ; 00541c21
    MOV EDI,dword ptr [EDX + 0xc38]     ; 00541c28
    ADD EAX,EDI                         ; 00541c2e
    MOV dword ptr [ESP + 0xa8],EAX      ; 00541c30
    MOV EAX,0xffffffff                  ; 00541c37
    MOV EDX,dword ptr [ESP + 0x64]      ; 00541c3c
    MOV dword ptr [ESP + 0xcc],EAX      ; 00541c40
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00541c47
    MOV BL,byte ptr [EDX]               ; 00541c4b
    SHL EAX,0x2                         ; 00541c4d
    TEST BL,0x1                         ; 00541c50
    JZ 0x00541cf5                       ; 00541c53
        ;   XREF to: 00541cf5 (CONDITIONAL_JUMP)  ; LAB_00541cf5
    MOV ECX,dword ptr [ESP + 0xa8]      ; 00541c59
    MOV EBX,dword ptr [ESP + 0x80]      ; 00541c60
    CMP EBX,ECX                         ; 00541c67
    JGE 0x00541cf5                      ; 00541c69
        ;   XREF to: 00541cf5 (CONDITIONAL_JUMP)  ; LAB_00541cf5
    MOV EDX,dword ptr [EBP + 0x20]      ; 00541c6f
    ADD EDX,EAX                         ; 00541c72
    IMUL EAX,EBX,0x12                   ; 00541c74
    MOV dword ptr [ESP + 0xe8],EAX      ; 00541c77
    LEA EAX,[EBX*0x4 + 0x0]             ; 00541c7e
    MOV dword ptr [ESP + 0x94],EDX      ; 00541c85
    MOV dword ptr [ESP + 0xe4],EAX      ; 00541c8c
    MOV EDX,dword ptr [ESP + 0xe8]      ; 00541c93
        ;   Label: LAB_00541c93
    MOV EAX,dword ptr [ESI + 0x7c]      ; 00541c9a
    MOV EDI,dword ptr [ESI + 0x54]      ; 00541c9d
    ADD EDX,EAX                         ; 00541ca0
    MOV EAX,EBX                         ; 00541ca2
    SUB EAX,EDI                         ; 00541ca4
    MOV EDI,dword ptr [ESI + 0xa4]      ; 00541ca6
    MOV dword ptr [ESP + 0xc4],EDX      ; 00541cac
    MOV EAX,dword ptr [EDI + EAX*0x4]   ; 00541cb3
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00541cb6
    SHL EAX,0x2                         ; 00541cb9
    ADD EAX,EDX                         ; 00541cbc
    TEST byte ptr [EAX],0x1             ; 00541cbe
    JZ 0x00542382                       ; 00541cc1
        ;   XREF to: 00542382 (CONDITIONAL_JUMP)  ; LAB_00542382
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00541cc7
        ;   Label: LAB_00541cc7
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00541cce
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00541cd5
    INC EBX                             ; 00541cdc
    ADD EDI,0x12                        ; 00541cdd
    ADD EAX,0x4                         ; 00541ce0
    MOV dword ptr [ESP + 0xe8],EDI      ; 00541ce3
    MOV dword ptr [ESP + 0xe4],EAX      ; 00541cea
    CMP EBX,EDX                         ; 00541cf1
    JL 0x00541c93                       ; 00541cf3
        ;   XREF to: 00541c93 (CONDITIONAL_JUMP)  ; LAB_00541c93
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00541cf5
        ;   Label: LAB_00541cf5
    MOV EBX,dword ptr [ESP + 0x64]      ; 00541cfc
    MOV EDI,dword ptr [ESP + 0x70]      ; 00541d00
    MOV EDX,dword ptr [EBP + 0x14]      ; 00541d04
    MOV dword ptr [ESP + 0x80],EAX      ; 00541d07
    ADD EBX,0x4                         ; 00541d0e
    ADD EDI,0x60                        ; 00541d11
    MOV ECX,dword ptr [EDX + 0xc00]     ; 00541d14
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00541d1a
    MOV dword ptr [ESP + 0x64],EBX      ; 00541d1e
    INC EAX                             ; 00541d22
    MOV dword ptr [ESP + 0x70],EDI      ; 00541d23
    MOV dword ptr [ESP + 0x7c],EAX      ; 00541d27
    CMP EAX,ECX                         ; 00541d2b
    JL 0x00541c1d                       ; 00541d2d
        ;   XREF to: 00541c1d (CONDITIONAL_JUMP)  ; LAB_00541c1d
    PUSH 0x0                            ; 00541d33
        ;   Label: LAB_00541d33
    MOV EDX,dword ptr [0x0060b280]      ; 00541d35 | DAT_0060b280
    PUSH EDX                            ; 00541d3b | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 00541d3c
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00541d41
    PUSH 0x1                            ; 00541d44
    MOV ECX,dword ptr [0x0060b280]      ; 00541d46 | DAT_0060b280
    PUSH ECX                            ; 00541d4c | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 00541d4d
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00541d52
    MOV ESP,EBP                         ; 00541d55
    POP EBP                             ; 00541d57
    POP EDI                             ; 00541d58
    POP ESI                             ; 00541d59
    POP EBX                             ; 00541d5a
    RET                                 ; 00541d5b
    CMP dword ptr [ESP + 0xb0],0x0      ; 00541d5c
        ;   Label: LAB_00541d5c
    JZ 0x00541b50                       ; 00541d64
        ;   XREF to: 00541b50 (CONDITIONAL_JUMP)  ; LAB_00541b50
    PUSH 0x1                            ; 00541d6a
    MOV ESI,dword ptr [0x0060b280]      ; 00541d6c | DAT_0060b280
    PUSH ESI                            ; 00541d72 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 00541d73
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00541d78
    MOV EAX,dword ptr [ESP + 0x80]      ; 00541d7b
    CMP EDI,EAX                         ; 00541d82
    JLE 0x00541b9d                      ; 00541d84
        ;   XREF to: 00541b9d (CONDITIONAL_JUMP)  ; LAB_00541b9d
    IMUL EAX,EAX,0x12                   ; 00541d8a
    MOV dword ptr [ESP + 0xec],EAX      ; 00541d8d
    IMUL EAX,EDI,0x12                   ; 00541d94
    MOV dword ptr [ESP + 0xa4],EAX      ; 00541d97
    MOV EAX,dword ptr [ESP + 0x88]      ; 00541d9e
        ;   Label: LAB_00541d9e
    MOV ESI,dword ptr [EAX + 0x7c]      ; 00541da5
    ADD ESI,dword ptr [ESP + 0xec]      ; 00541da8
    XOR ECX,ECX                         ; 00541daf
    MOV CX,word ptr [ESI + 0x2]         ; 00541db1
    IMUL ECX,ECX,0x30                   ; 00541db5
    XOR EAX,EAX                         ; 00541db8
    MOV AX,word ptr [ESI]               ; 00541dba
    IMUL EDX,EAX,0x30                   ; 00541dbd
    MOV EAX,[0x0060b280]                ; 00541dc0 | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 00541dc5 | DAT_01ba5c50
    ADD EDX,EAX                         ; 00541dc7
    LEA EBX,[EAX + ECX*0x1]             ; 00541dc9
    XOR ECX,ECX                         ; 00541dcc
    MOV CX,word ptr [ESI + 0x4]         ; 00541dce
    IMUL ECX,ECX,0x30                   ; 00541dd2
    ADD EAX,ECX                         ; 00541dd5
    MOV ECX,dword ptr [EDX + 0x4]       ; 00541dd7
    IMUL ECX,dword ptr [0x01d04fc4]     ; 00541dda | DAT_01d04fc4
    MOV dword ptr [ESP + 0x100],ECX     ; 00541de1
    MOV ECX,dword ptr [EDX]             ; 00541de8
    IMUL ECX,dword ptr [0x01d04fb8]     ; 00541dea | DAT_01d04fb8
    ADD ECX,dword ptr [ESP + 0x100]     ; 00541df1
    MOV dword ptr [ESP + 0x104],ECX     ; 00541df8
    MOV ECX,dword ptr [EDX + 0x8]       ; 00541dff
    IMUL ECX,dword ptr [0x01d04fd0]     ; 00541e02 | DAT_01d04fd0
    MOV dword ptr [ESP + 0x100],ECX     ; 00541e09
    MOV ECX,dword ptr [ESP + 0x104]     ; 00541e10
    ADD ECX,dword ptr [ESP + 0x100]     ; 00541e17
    MOV dword ptr [ESP + 0x100],ECX     ; 00541e1e
    MOV ECX,dword ptr [EDX + 0x4]       ; 00541e25
    IMUL ECX,dword ptr [0x01d04fc8]     ; 00541e28 | DAT_01d04fc8
    MOV dword ptr [ESP + 0x104],ECX     ; 00541e2f
    MOV ECX,dword ptr [EDX]             ; 00541e36
    IMUL ECX,dword ptr [0x01d04fbc]     ; 00541e38 | DAT_01d04fbc
    ADD ECX,dword ptr [ESP + 0x104]     ; 00541e3f
    MOV dword ptr [ESP + 0x108],ECX     ; 00541e46
    MOV ECX,dword ptr [EDX + 0x8]       ; 00541e4d
    IMUL ECX,dword ptr [0x01d04fd4]     ; 00541e50 | DAT_01d04fd4
    MOV dword ptr [ESP + 0x104],ECX     ; 00541e57
    MOV ECX,dword ptr [ESP + 0x108]     ; 00541e5e
    ADD ECX,dword ptr [ESP + 0x104]     ; 00541e65
    MOV dword ptr [ESP + 0x104],ECX     ; 00541e6c
    MOV ECX,dword ptr [EDX + 0x4]       ; 00541e73
    IMUL ECX,dword ptr [0x01d04fcc]     ; 00541e76 | DAT_01d04fcc
    MOV dword ptr [ESP + 0x108],ECX     ; 00541e7d
    MOV ECX,dword ptr [EDX]             ; 00541e84
    IMUL ECX,dword ptr [0x01d04fc0]     ; 00541e86 | DAT_01d04fc0
    ADD ECX,dword ptr [ESP + 0x108]     ; 00541e8d
    MOV EDX,dword ptr [EDX + 0x8]       ; 00541e94
    MOV dword ptr [ESP + 0x108],ECX     ; 00541e97
    IMUL EDX,dword ptr [0x01d04fd8]     ; 00541e9e | DAT_01d04fd8
    ADD EDX,dword ptr [ESP + 0x108]     ; 00541ea5
    MOV ECX,dword ptr [0x01d04fc4]      ; 00541eac | DAT_01d04fc4
    MOV dword ptr [ESP + 0x108],EDX     ; 00541eb2
    IMUL ECX,dword ptr [EBX + 0x4]      ; 00541eb9
    MOV EDX,dword ptr [EBX]             ; 00541ebd
    IMUL EDX,dword ptr [0x01d04fb8]     ; 00541ebf | DAT_01d04fb8
    ADD EDX,ECX                         ; 00541ec6
    MOV ECX,dword ptr [0x01d04fd0]      ; 00541ec8 | DAT_01d04fd0
    MOV dword ptr [ESP + 0x10c],EDX     ; 00541ece
    MOV EDX,dword ptr [EBX + 0x8]       ; 00541ed5
    IMUL EDX,ECX                        ; 00541ed8
    ADD EDX,dword ptr [ESP + 0x10c]     ; 00541edb
    MOV ECX,dword ptr [0x01d04fc8]      ; 00541ee2 | DAT_01d04fc8
    MOV dword ptr [ESP + 0x10c],EDX     ; 00541ee8
    MOV EDX,dword ptr [EBX + 0x4]       ; 00541eef
    IMUL EDX,ECX                        ; 00541ef2
    MOV ECX,dword ptr [EBX]             ; 00541ef5
    IMUL ECX,dword ptr [0x01d04fbc]     ; 00541ef7 | DAT_01d04fbc
    ADD EDX,ECX                         ; 00541efe
    MOV ECX,dword ptr [EBX + 0x8]       ; 00541f00
    IMUL ECX,dword ptr [0x01d04fd4]     ; 00541f03 | DAT_01d04fd4
    ADD EDX,ECX                         ; 00541f0a
    MOV ECX,dword ptr [0x01d04fcc]      ; 00541f0c | DAT_01d04fcc
    MOV dword ptr [ESP + 0x110],EDX     ; 00541f12
    MOV EDX,dword ptr [EBX + 0x4]       ; 00541f19
    IMUL EDX,ECX                        ; 00541f1c
    MOV ECX,dword ptr [EBX]             ; 00541f1f
    IMUL ECX,dword ptr [0x01d04fc0]     ; 00541f21 | DAT_01d04fc0
    ADD ECX,EDX                         ; 00541f28
    MOV EDX,dword ptr [EBX + 0x8]       ; 00541f2a
    IMUL EDX,dword ptr [0x01d04fd8]     ; 00541f2d | DAT_01d04fd8
    ADD EDX,ECX                         ; 00541f34
    MOV EBX,dword ptr [0x01d04fc4]      ; 00541f36 | DAT_01d04fc4
    MOV dword ptr [ESP + 0x114],EDX     ; 00541f3c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00541f43
    IMUL EDX,EBX                        ; 00541f46
    MOV ECX,dword ptr [0x01d04fb8]      ; 00541f49 | DAT_01d04fb8
    MOV EBX,dword ptr [EAX]             ; 00541f4f
    IMUL EBX,ECX                        ; 00541f51
    MOV ECX,dword ptr [0x01d04fd0]      ; 00541f54 | DAT_01d04fd0
    ADD EBX,EDX                         ; 00541f5a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00541f5c
    IMUL EDX,ECX                        ; 00541f5f
    ADD EDX,EBX                         ; 00541f62
    MOV dword ptr [ESP + 0x118],EDX     ; 00541f64
    MOV EBX,dword ptr [EAX + 0x4]       ; 00541f6b
    IMUL EBX,dword ptr [0x01d04fc8]     ; 00541f6e | DAT_01d04fc8
    MOV ECX,dword ptr [0x01d04fbc]      ; 00541f75 | DAT_01d04fbc
    MOV EDX,dword ptr [EAX]             ; 00541f7b
    IMUL EDX,ECX                        ; 00541f7d
    MOV ECX,dword ptr [0x01d04fd4]      ; 00541f80 | DAT_01d04fd4
    ADD EBX,EDX                         ; 00541f86
    MOV EDX,dword ptr [EAX + 0x8]       ; 00541f88
    IMUL EDX,ECX                        ; 00541f8b
    ADD EBX,EDX                         ; 00541f8e
    MOV EDX,dword ptr [0x01d04fcc]      ; 00541f90 | DAT_01d04fcc
    MOV dword ptr [ESP + 0x11c],EBX     ; 00541f96
    MOV EBX,dword ptr [EAX + 0x4]       ; 00541f9d
    IMUL EBX,EDX                        ; 00541fa0
    MOV ECX,dword ptr [0x01d04fc0]      ; 00541fa3 | DAT_01d04fc0
    MOV EDX,dword ptr [EAX]             ; 00541fa9
    IMUL EDX,ECX                        ; 00541fab
    MOV EAX,dword ptr [EAX + 0x8]       ; 00541fae
    ADD EBX,EDX                         ; 00541fb1
    IMUL EAX,dword ptr [0x01d04fd8]     ; 00541fb3 | DAT_01d04fd8
    FILD dword ptr [ESP + 0x100]        ; 00541fba
    FILD dword ptr [ESP + 0x104]        ; 00541fc1
    FILD dword ptr [ESP + 0x108]        ; 00541fc8
    FSTP float ptr [ESP + 0xb8]         ; 00541fcf
    FILD dword ptr [ESP + 0x10c]        ; 00541fd6
    FST float ptr [ESP + 0xdc]          ; 00541fdd
    FSUBRP ST2,ST0                      ; 00541fe4
    FILD dword ptr [ESP + 0x110]        ; 00541fe6
    FST float ptr [ESP + 0xd0]          ; 00541fed
    FSUBRP                              ; 00541ff4
    FXCH                                ; 00541ff6
    FSTP float ptr [ESP + 0xe0]         ; 00541ff8
    FSTP float ptr [ESP + 0xd8]         ; 00541fff
    FILD dword ptr [ESP + 0x114]        ; 00542006
    FSTP float ptr [ESP + 0xd4]         ; 0054200d
    FILD dword ptr [ESP + 0x118]        ; 00542014
    FSTP float ptr [ESP + 0xb4]         ; 0054201b
    ADD EBX,EAX                         ; 00542022
    FILD dword ptr [ESP + 0x11c]        ; 00542024
    MOV dword ptr [ESP + 0x11c],EBX     ; 0054202b
    FSTP float ptr [ESP + 0xbc]         ; 00542032
    FILD dword ptr [ESP + 0x11c]        ; 00542039
    FSTP float ptr [ESP + 0xc0]         ; 00542040
    FLD float ptr [ESP + 0xd8]          ; 00542047
    FLD float ptr [ESP + 0xd4]          ; 0054204e
    FLD float ptr [ESP + 0xc0]          ; 00542055
    FSUB ST0,ST1                        ; 0054205c
    FSTP float ptr [ESP + 0x60]         ; 0054205e
    FXCH                                ; 00542062
    FMUL float ptr [ESP + 0x60]         ; 00542064
    FLD float ptr [ESP + 0xbc]          ; 00542068
    FSUB float ptr [ESP + 0xd0]         ; 0054206f
    FLD float ptr [ESP + 0xe0]          ; 00542076
    FMUL ST1                            ; 0054207d
    FLD float ptr [ESP + 0xb4]          ; 0054207f
    FXCH ST4                            ; 00542086
    FSUB float ptr [ESP + 0xb8]         ; 00542088
    FXCH ST4                            ; 0054208f
    FSUB float ptr [ESP + 0xdc]         ; 00542091
    FLD ST0                             ; 00542098
    FMUL ST5                            ; 0054209a
    FXCH ST3                            ; 0054209c
    FMULP ST5                           ; 0054209e
    FMUL float ptr [ESP + 0xd8]         ; 005420a0
    FLD float ptr [ESP + 0xe0]          ; 005420a7
    FXCH ST5                            ; 005420ae
    FSUBP ST4,ST0                       ; 005420b0
    FXCH ST4                            ; 005420b2
    FMUL float ptr [ESP + 0x60]         ; 005420b4
    FXCH ST3                            ; 005420b8
    FSTP float ptr [ESP + 0xfc]         ; 005420ba
    FXCH ST2                            ; 005420c1
    FSUBP                               ; 005420c3
    FLD float ptr [ESP + 0xfc]          ; 005420c5
    FMUL ST0                            ; 005420cc
    FXCH                                ; 005420ce
    FST float ptr [ESP + 0xf4]          ; 005420d0
    FMUL float ptr [ESP + 0xf4]         ; 005420d7
    FXCH ST3                            ; 005420de
    FSUBP ST2,ST0                       ; 005420e0
    FADDP ST2,ST0                       ; 005420e2
    FST float ptr [ESP + 0xf8]          ; 005420e4
    FMUL float ptr [ESP + 0xf8]         ; 005420eb
    FADDP                               ; 005420f2
    FLDZ                                ; 005420f4
    FXCH                                ; 005420f6
    FSTP float ptr [ESP]                ; 005420f8
    FCOMP float ptr [ESP]               ; 005420fb
    FNSTSW AX                           ; 005420fe
    SAHF                                ; 00542100
    JNC 0x0054221e                      ; 00542101
        ;   XREF to: 0054221e (CONDITIONAL_JUMP)  ; LAB_0054221e
    FLD float ptr [ESP]                 ; 00542107
    FSQRT                               ; 0054210a
    FDIVR double ptr [0x005e6e0f]       ; 0054210c | DAT_005e6e0f
    FSTP float ptr [ESP]                ; 00542112
    FLD float ptr [ESP]                 ; 00542115
        ;   Label: LAB_00542115
    FLD float ptr [ESP + 0xfc]          ; 00542118
    FMUL ST1                            ; 0054211f
    FLD float ptr [ESP + 0xf4]          ; 00542121
    FMUL ST2                            ; 00542128
    FLD float ptr [ESP + 0xf8]          ; 0054212a
    FMULP ST3                           ; 00542131
    FXCH                                ; 00542133
    FSTP float ptr [ESP + 0xfc]         ; 00542135
    FSTP float ptr [ESP + 0xf4]         ; 0054213c
    FST float ptr [ESP + 0xf8]          ; 00542143
    FLD float ptr [ESP + 0xf4]          ; 0054214a
    FLD float ptr [ESP + 0xfc]          ; 00542151
    FXCH ST2                            ; 00542158
    FLD float ptr [0x005e6e07]          ; 0054215a | DAT_005e6e07
    FXCH                                ; 00542160
    FADD ST0,ST1                        ; 00542162
    FXCH ST2                            ; 00542164
    FADD ST0,ST1                        ; 00542166
    FXCH ST3                            ; 00542168
    FADDP                               ; 0054216a
    FXCH                                ; 0054216c
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054216e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 00542173
    CALL crt_math.c_round_FUN_005b7ff0  ; 00542175
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 0054217a
    FISTP dword ptr [ESP + 0x104]       ; 0054217c
    FXCH                                ; 00542183
    FISTP dword ptr [ESP + 0x100]       ; 00542185
    MOV EAX,dword ptr [ESP + 0x104]     ; 0054218c
    MOV EDX,dword ptr [ESP + 0x100]     ; 00542193
    PUSH EAX                            ; 0054219a
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054219b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH EDX                            ; 005421a0
    FISTP dword ptr [ESP + 0x108]       ; 005421a1
    MOV ECX,dword ptr [ESP + 0x108]     ; 005421a8
    PUSH ECX                            ; 005421af
    MOV EBX,dword ptr [0x0060b280]      ; 005421b0 | DAT_0060b280
    PUSH EBX                            ; 005421b6 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0 ; 005421b7
        ;   XREF to: 0046b7f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    MOV EAX,0x3                         ; 005421bc
    ADD ESP,0x10                        ; 005421c1
    MOV dword ptr [ESP + 0x8],EAX       ; 005421c4
    XOR EAX,EAX                         ; 005421c8
    MOV AX,word ptr [ESI]               ; 005421ca
    MOV dword ptr [ESP + 0x1c],EAX      ; 005421cd
    XOR EAX,EAX                         ; 005421d1
    MOV AX,word ptr [ESI + 0x2]         ; 005421d3
    MOV dword ptr [ESP + 0x28],EAX      ; 005421d7
    XOR EAX,EAX                         ; 005421db
    MOV AX,word ptr [ESI + 0x4]         ; 005421dd
    MOV dword ptr [ESP + 0x34],EAX      ; 005421e1
    LEA EAX,[ESP + 0x4]                 ; 005421e5
    PUSH EAX                            ; 005421e9
    MOV EDX,dword ptr [0x0060b280]      ; 005421ea | DAT_0060b280
    PUSH EDX                            ; 005421f0 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0 ; 005421f1
        ;   XREF to: 004696f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 005421f6
    MOV ECX,dword ptr [ESP + 0xec]      ; 005421f9
    ADD ECX,0x12                        ; 00542200
    MOV EBX,dword ptr [ESP + 0xa4]      ; 00542203
    MOV dword ptr [ESP + 0xec],ECX      ; 0054220a
    CMP ECX,EBX                         ; 00542211
    JGE 0x00541b9d                      ; 00542213
        ;   XREF to: 00541b9d (CONDITIONAL_JUMP)  ; LAB_00541b9d
    JMP 0x00541d9e                      ; 00542219
        ;   XREF to: 00541d9e (UNCONDITIONAL_JUMP)  ; LAB_00541d9e
    MOV dword ptr [ESP],0x42fe0000      ; 0054221e
        ;   Label: LAB_0054221e
    JMP 0x00542115                      ; 00542225
        ;   XREF to: 00542115 (UNCONDITIONAL_JUMP)  ; LAB_00542115
    CMP dword ptr [ESP + 0xac],0x0      ; 0054222a
        ;   Label: LAB_0054222a
    JNZ 0x00541b60                      ; 00542232
        ;   XREF to: 00541b60 (CONDITIONAL_JUMP)  ; LAB_00541b60
    CMP dword ptr [EBP + 0x28],0x0      ; 00542238
    JNZ 0x00541b60                      ; 0054223c
        ;   XREF to: 00541b60 (CONDITIONAL_JUMP)  ; LAB_00541b60
    CMP dword ptr [ESP + 0xb0],0x0      ; 00542242
    JNZ 0x00541b60                      ; 0054224a
        ;   XREF to: 00541b60 (CONDITIONAL_JUMP)  ; LAB_00541b60
    MOV dword ptr [ESP + 0xc8],0xffffffff ; 00542250
    MOV EAX,dword ptr [ESP + 0x80]      ; 0054225b
    MOV dword ptr [ESP + 0xf0],EAX      ; 00542262
    CMP EDI,EAX                         ; 00542269
    JLE 0x00541b9d                      ; 0054226b
        ;   XREF to: 00541b9d (CONDITIONAL_JUMP)  ; LAB_00541b9d
    MOV EAX,dword ptr [ESP + 0x78]      ; 00542271
    MOV dword ptr [ESP + 0x98],EAX      ; 00542275
    MOV EDX,dword ptr [ESP + 0x84]      ; 0054227c
        ;   Label: LAB_0054227c
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00542283
    MOV EDX,dword ptr [EDX + 0x90]      ; 0054228a
    LEA EBX,[EAX + 0x1]                 ; 00542290
    MOV ESI,dword ptr [EDX + EAX*0x4]   ; 00542293
    CMP EBX,EDI                         ; 00542296
    JGE 0x005422b8                      ; 00542298
        ;   XREF to: 005422b8 (CONDITIONAL_JUMP)  ; LAB_005422b8
    MOV EDX,dword ptr [ESP + 0x90]      ; 0054229a
    LEA EAX,[EBX*0x4 + 0x0]             ; 005422a1
    MOV EDX,dword ptr [EDX + 0x90]      ; 005422a8
    ADD EAX,EDX                         ; 005422ae
    CMP ESI,dword ptr [EAX]             ; 005422b0
        ;   Label: LAB_005422b0
    JZ 0x00542371                       ; 005422b2
        ;   XREF to: 00542371 (CONDITIONAL_JUMP)  ; LAB_00542371
    CMP ESI,dword ptr [ESP + 0xc8]      ; 005422b8
        ;   Label: LAB_005422b8
    JZ 0x005422f0                       ; 005422bf
        ;   XREF to: 005422f0 (CONDITIONAL_JUMP)  ; LAB_005422f0
    MOV EAX,dword ptr [ESP + 0x98]      ; 005422c1
    IMUL EAX,dword ptr [EAX],0x240      ; 005422c8
    IMUL EDX,ESI,0x48                   ; 005422ce
    ADD EAX,dword ptr [ESP + 0x9c]      ; 005422d1
    ADD EAX,EDX                         ; 005422d8
    PUSH EAX                            ; 005422da
    MOV EAX,[0x0060b280]                ; 005422db | DAT_0060b280
    PUSH EAX                            ; 005422e0 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 005422e1
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 005422e6
    MOV dword ptr [ESP + 0xc8],ESI      ; 005422e9
    MOV EAX,dword ptr [EBP + 0x24]      ; 005422f0
        ;   Label: LAB_005422f0
    MOV EDX,dword ptr [ESP + 0xf0]      ; 005422f3
    PUSH EAX                            ; 005422fa
    MOV EAX,EBX                         ; 005422fb
    SUB EAX,EDX                         ; 005422fd
    PUSH EAX                            ; 005422ff
    IMUL EAX,EDX,0x12                   ; 00542300
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00542303
    MOV EDX,dword ptr [EDX + 0x7c]      ; 0054230a
    ADD EAX,EDX                         ; 0054230d
    PUSH EAX                            ; 0054230f
    MOV ESI,dword ptr [0x0061b5a8]      ; 00542310 | g_CDemonSetPtr
    PUSH ESI                            ; 00542316 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040 ; 00542317
        ;   XREF to: 00534040 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040(CDemonSet * this_ptr, SInputFace * faces, int count, int flags)
    ADD ESP,0x10                        ; 0054231c
    MOV dword ptr [ESP + 0xf0],EBX      ; 0054231f
    CMP EBX,EDI                         ; 00542326
    JL 0x0054227c                       ; 00542328
        ;   XREF to: 0054227c (CONDITIONAL_JUMP)  ; LAB_0054227c
    JMP 0x00541b9d                      ; 0054232e
        ;   XREF to: 00541b9d (UNCONDITIONAL_JUMP)  ; LAB_00541b9d
    CMP dword ptr [EBP + 0x28],0x0      ; 00542333
        ;   Label: LAB_00542333
    JNZ 0x00541b6e                      ; 00542337
        ;   XREF to: 00541b6e (CONDITIONAL_JUMP)  ; LAB_00541b6e
    CMP dword ptr [ESP + 0xb0],0x0      ; 0054233d
    JNZ 0x00541b6e                      ; 00542345
        ;   XREF to: 00541b6e (CONDITIONAL_JUMP)  ; LAB_00541b6e
    MOV EAX,dword ptr [ESP + 0x78]      ; 0054234b
    IMUL EAX,dword ptr [EAX],0x240      ; 0054234f
    ADD EAX,dword ptr [ESP + 0x9c]      ; 00542355
    PUSH EAX                            ; 0054235c
    MOV EBX,dword ptr [0x0060b280]      ; 0054235d | DAT_0060b280
    PUSH EBX                            ; 00542363 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 00542364
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00542369
    JMP 0x00541b6e                      ; 0054236c
        ;   XREF to: 00541b6e (UNCONDITIONAL_JUMP)  ; LAB_00541b6e
    INC EBX                             ; 00542371
        ;   Label: LAB_00542371
    ADD EAX,0x4                         ; 00542372
    CMP EBX,EDI                         ; 00542375
    JL 0x005422b0                       ; 00542377
        ;   XREF to: 005422b0 (CONDITIONAL_JUMP)  ; LAB_005422b0
    JMP 0x005422b8                      ; 0054237d
        ;   XREF to: 005422b8 (UNCONDITIONAL_JUMP)  ; LAB_005422b8
    CMP dword ptr [ESP + 0xac],0x0      ; 00542382
        ;   Label: LAB_00542382
    JNZ 0x005423e7                      ; 0054238a
        ;   XREF to: 005423e7 (CONDITIONAL_JUMP)  ; LAB_005423e7
    CMP dword ptr [EBP + 0x28],0x0      ; 0054238c
    JNZ 0x005423e7                      ; 00542390
        ;   XREF to: 005423e7 (CONDITIONAL_JUMP)  ; LAB_005423e7
    CMP dword ptr [ESP + 0xb0],0x0      ; 00542392
    JNZ 0x005423e7                      ; 0054239a
        ;   XREF to: 005423e7 (CONDITIONAL_JUMP)  ; LAB_005423e7
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0054239c
    MOV EAX,dword ptr [ESI + 0x90]      ; 005423a3
    ADD EAX,EDX                         ; 005423a9
    MOV ECX,dword ptr [ESP + 0xcc]      ; 005423ab
    MOV EDI,dword ptr [EAX]             ; 005423b2
    CMP EDI,ECX                         ; 005423b4
    JZ 0x005423e7                       ; 005423b6
        ;   XREF to: 005423e7 (CONDITIONAL_JUMP)  ; LAB_005423e7
    MOV EAX,dword ptr [ESP + 0x94]      ; 005423b8
    IMUL EAX,dword ptr [EAX],0x240      ; 005423bf
    IMUL EDX,EDI,0x48                   ; 005423c5
    ADD EAX,dword ptr [ESP + 0x8c]      ; 005423c8
    ADD EAX,EDX                         ; 005423cf
    PUSH EAX                            ; 005423d1
    MOV EAX,[0x0060b280]                ; 005423d2 | DAT_0060b280
    PUSH EAX                            ; 005423d7 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 005423d8
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 005423dd
    MOV dword ptr [ESP + 0xcc],EDI      ; 005423e0
    MOV EDX,dword ptr [EBP + 0x24]      ; 005423e7
        ;   Label: LAB_005423e7
    PUSH EDX                            ; 005423ea
    PUSH 0x1                            ; 005423eb
    MOV ECX,dword ptr [ESP + 0xcc]      ; 005423ed
    PUSH ECX                            ; 005423f4
    MOV EDI,dword ptr [0x0061b5a8]      ; 005423f5 | g_CDemonSetPtr
    PUSH EDI                            ; 005423fb | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040 ; 005423fc
        ;   XREF to: 00534040 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040(CDemonSet * this_ptr, SInputFace * faces, int count, int flags)
    ADD ESP,0x10                        ; 00542401
    JMP 0x00541cc7                      ; 00542404
        ;   XREF to: 00541cc7 (UNCONDITIONAL_JUMP)  ; LAB_00541cc7

