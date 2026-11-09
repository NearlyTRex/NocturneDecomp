; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_00535a80(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
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
; XREF[3]:
;   core_game.cpp_FUN_004b6f30 at 004b7a7a
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 00534a8c
;   core_set.cpp_FUN_00535da0 at 00535de8
;
; Referenced Globals:
;   undefined4 s_renderStaticLights_3_2f_005d053e+1
;   undefined4 DAT_005d055f
;   undefined4 DAT_005d0567
;   undefined4 DAT_005d056f
;   CConsole* g_CConsolePtr = 007f7ea4
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fc5a0
;   CGame* g_CGamePtr = 01d2130c
;   CGore* g_CGorePtr = 01d22e44
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01549b10
;   undefined4 DAT_01bdd7e4
;   undefined4 g_CGameInstance.field36_0x24
;   undefined4 g_CGameInstance.field560_0x230
;   undefined4 g_CGameInstance.field788_0x314
;   ... and 4 more
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0045c530
;   core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070
;   core_dlight.cpp_CDemonLight_endScene_FUN_0045c7e0
;   core_fire.cpp_FUN_004a1ad0
;   core_gore.cpp_FUN_004ce5b0
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20
;   core_set.cpp_FUN_005346b0
;   core_set.cpp_FUN_00539f30
;   core_set.cpp_FUN_0053adf0
;   engine_console.cpp_FUN_00441ff0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
;   wincore_winrun.cpp_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535a80
        ;   Label: core_set.cpp_FUN_00535a80
    PUSH ESI                            ; 00535a81
    PUSH EDI                            ; 00535a82
    PUSH EBP                            ; 00535a83
    SUB ESP,0x30                        ; 00535a84
    MOV ESI,dword ptr [ESP + 0x44]      ; 00535a87
    MOV EAX,[0x005fe9dc]                ; 00535a8b | g_CGamePtr
    CMP dword ptr [EAX + 0x24],0x0      ; 00535a90 | g_CGameInstance.field36_0x24
    JZ 0x00535b5b                       ; 00535a94
        ;   XREF to: 00535b5b (CONDITIONAL_JUMP)  ; LAB_00535b5b
    CMP dword ptr [EAX + 0x230],0x0     ; 00535a9a | g_CGameInstance.field560_0x230
    JNZ 0x00535b63                      ; 00535aa1
        ;   XREF to: 00535b63 (CONDITIONAL_JUMP)  ; LAB_00535b63
    XOR EBX,EBX                         ; 00535aa7
        ;   Label: LAB_00535aa7
    MOV EBP,dword ptr [0x0203ad1c]      ; 00535aa9 | DAT_0203ad1c
    MOV dword ptr [ESP + 0x18],EBX      ; 00535aaf
    MOV dword ptr [0x0203b37c],EBX      ; 00535ab3 | g_CDemonRaytraceInstance
    TEST EBP,EBP                        ; 00535ab9
    JLE 0x00535afb                      ; 00535abb
        ;   XREF to: 00535afb (CONDITIONAL_JUMP)  ; LAB_00535afb
    MOV dword ptr [ESP + 0x10],EBX      ; 00535abd
    MOV EAX,dword ptr [ESP + 0x10]      ; 00535ac1
        ;   Label: LAB_00535ac1
    MOV EAX,dword ptr [EAX + 0x203ad20] ; 00535ac5
    MOV EDX,dword ptr [EAX + 0x1cb4]    ; 00535acb
    MOV dword ptr [ESP + 0x24],EAX      ; 00535ad1
    TEST EDX,EDX                        ; 00535ad5
    JNZ 0x00535b71                      ; 00535ad7
        ;   XREF to: 00535b71 (CONDITIONAL_JUMP)  ; LAB_00535b71
    MOV EAX,dword ptr [ESP + 0x10]      ; 00535add
        ;   Label: LAB_00535add
    MOV EDX,dword ptr [ESP + 0x18]      ; 00535ae1
    MOV ECX,dword ptr [0x0203ad1c]      ; 00535ae5 | DAT_0203ad1c
    ADD EAX,0x4                         ; 00535aeb
    INC EDX                             ; 00535aee
    MOV dword ptr [ESP + 0x10],EAX      ; 00535aef
    MOV dword ptr [ESP + 0x18],EDX      ; 00535af3
    CMP EDX,ECX                         ; 00535af7
    JL 0x00535ac1                       ; 00535af9
        ;   XREF to: 00535ac1 (CONDITIONAL_JUMP)  ; LAB_00535ac1
    XOR EBX,EBX                         ; 00535afb
        ;   Label: LAB_00535afb
    MOV EDI,dword ptr [0x0203a598]      ; 00535afd | DAT_0203a598
    MOV dword ptr [ESP + 0x1c],EBX      ; 00535b03
    TEST EDI,EDI                        ; 00535b07
    JLE 0x00535b49                      ; 00535b09
        ;   XREF to: 00535b49 (CONDITIONAL_JUMP)  ; LAB_00535b49
    MOV dword ptr [ESP + 0x14],EBX      ; 00535b0b
    MOV EAX,dword ptr [ESP + 0x14]      ; 00535b0f
        ;   Label: LAB_00535b0f
    MOV EAX,dword ptr [EAX + 0x203a59c] ; 00535b13 | DAT_0203a59c
    MOV EDX,dword ptr [EAX + 0x1cb4]    ; 00535b19
    MOV dword ptr [ESP + 0x20],EAX      ; 00535b1f
    TEST EDX,EDX                        ; 00535b23
    JNZ 0x00535c9c                      ; 00535b25
        ;   XREF to: 00535c9c (CONDITIONAL_JUMP)  ; LAB_00535c9c
    MOV EDX,dword ptr [ESP + 0x14]      ; 00535b2b
        ;   Label: LAB_00535b2b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00535b2f
    MOV EBX,dword ptr [0x0203a598]      ; 00535b33 | DAT_0203a598
    ADD EDX,0x4                         ; 00535b39
    INC ECX                             ; 00535b3c
    MOV dword ptr [ESP + 0x14],EDX      ; 00535b3d
    MOV dword ptr [ESP + 0x1c],ECX      ; 00535b41
    CMP ECX,EBX                         ; 00535b45
    JL 0x00535b0f                       ; 00535b47
        ;   XREF to: 00535b0f (CONDITIONAL_JUMP)  ; LAB_00535b0f
    MOV EAX,[0x005fe9dc]                ; 00535b49 | g_CGamePtr
        ;   Label: LAB_00535b49
    CMP dword ptr [EAX + 0x230],0x0     ; 00535b4e | g_CGameInstance.field560_0x230
    JNZ 0x00535d47                      ; 00535b55
        ;   XREF to: 00535d47 (CONDITIONAL_JUMP)  ; LAB_00535d47
    ADD ESP,0x30                        ; 00535b5b
        ;   Label: LAB_00535b5b
    POP EBP                             ; 00535b5e
    POP EDI                             ; 00535b5f
    POP ESI                             ; 00535b60
    POP EBX                             ; 00535b61
    RET                                 ; 00535b62
    CALL wincore_winrun.cpp_FUN_005806a0 ; 00535b63
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005806a0()
        ;   Label: LAB_00535b63
    MOV dword ptr [ESP + 0x8],EAX       ; 00535b68
    JMP 0x00535aa7                      ; 00535b6c
        ;   XREF to: 00535aa7 (UNCONDITIONAL_JUMP)  ; LAB_00535aa7
    PUSH 0x0                            ; 00535b71
        ;   Label: LAB_00535b71
    MOV ECX,dword ptr [ESP + 0x28]      ; 00535b73
    MOV EAX,dword ptr [EAX + 0x140]     ; 00535b77
    PUSH ECX                            ; 00535b7d
    MOV dword ptr [ESP + 0x14],EAX      ; 00535b7e
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_0045c530 ; 00535b82
        ;   XREF to: 0045c530 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_0045c530(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 00535b87
    MOV EBX,dword ptr [ESP + 0x24]      ; 00535b8a
    PUSH EBX                            ; 00535b8e
    CALL core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070 ; 00535b8f
        ;   XREF to: 0045d070 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070(CDemonLight * this_ptr)
    MOV EDI,dword ptr [EBX + 0x1cd0]    ; 00535b94
    ADD ESP,0x4                         ; 00535b9a
    TEST EDI,EDI                        ; 00535b9d
    JZ 0x00535c7a                       ; 00535b9f
        ;   XREF to: 00535c7a (CONDITIONAL_JUMP)  ; LAB_00535c7a
    PUSH 0x0                            ; 00535ba5
    PUSH dword ptr [EBX + 0x140]        ; 00535ba7
    PUSH ESI                            ; 00535bad
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 ; 00535bae
        ;   XREF to: 00533b80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 00535bb3
    PUSH 0x1                            ; 00535bb6
    PUSH ESI                            ; 00535bb8
    CALL core_set.cpp_FUN_00539f30      ; 00535bb9
        ;   XREF to: 00539f30 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00539f30(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 00535bbe
    PUSH 0x0                            ; 00535bc1
    PUSH ESI                            ; 00535bc3
    XOR EBP,EBP                         ; 00535bc4
    CALL core_set.cpp_FUN_005346b0      ; 00535bc6
        ;   XREF to: 005346b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005346b0(CDemonSet * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 00535bcb
    MOV EAX,dword ptr [ESI + 0x15f6fc]  ; 00535bce
    MOV dword ptr [ESP + 0x28],EBP      ; 00535bd4
    TEST EAX,EAX                        ; 00535bd8
    JLE 0x00535c5c                      ; 00535bda
        ;   XREF to: 00535c5c (CONDITIONAL_JUMP)  ; LAB_00535c5c
    MOV EBP,ESI                         ; 00535be0
    MOV EAX,dword ptr [EBP + 0x15f700]  ; 00535be2
        ;   Label: LAB_00535be2
    PUSH EAX                            ; 00535be8
    MOV EDX,dword ptr [EAX + 0x154]     ; 00535be9
    XOR EBX,EBX                         ; 00535bef
    CALL dword ptr [EDX + 0x10]         ; 00535bf1
    MOV EAX,dword ptr [ESI + 0x15acc8]  ; 00535bf4
    ADD ESP,0x4                         ; 00535bfa
    TEST EAX,EAX                        ; 00535bfd
    JLE 0x00535c36                      ; 00535bff
        ;   XREF to: 00535c36 (CONDITIONAL_JUMP)  ; LAB_00535c36
    MOV EDI,EBP                         ; 00535c01
    PUSH 0x0                            ; 00535c03
        ;   Label: LAB_00535c03
    PUSH EBX                            ; 00535c05
    PUSH ESI                            ; 00535c06
    CALL core_set.cpp_FUN_0053adf0      ; 00535c07
        ;   XREF to: 0053adf0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0053adf0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 00535c0c
    MOV EAX,dword ptr [EDI + 0x15f700]  ; 00535c0f
    PUSH EAX                            ; 00535c15
    MOV EDX,dword ptr [EAX + 0x154]     ; 00535c16
    CALL dword ptr [EDX + 0x10]         ; 00535c1c
    ADD ESP,0x4                         ; 00535c1f
    PUSH ESI                            ; 00535c22
    INC EBX                             ; 00535c23
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20 ; 00535c24
        ;   XREF to: 0053af20 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(CDemonSet * this_ptr)
    MOV EDX,dword ptr [ESI + 0x15acc8]  ; 00535c29
    ADD ESP,0x4                         ; 00535c2f
    CMP EBX,EDX                         ; 00535c32
    JL 0x00535c03                       ; 00535c34
        ;   XREF to: 00535c03 (CONDITIONAL_JUMP)  ; LAB_00535c03
    PUSH 0x1                            ; 00535c36
        ;   Label: LAB_00535c36
    MOV EAX,[0x005f2afc]                ; 00535c38 | DAT_005f2afc
    PUSH EAX                            ; 00535c3d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 00535c3e
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00535c43
    MOV EDX,dword ptr [ESP + 0x28]      ; 00535c46
    ADD EBP,0x4                         ; 00535c4a
    INC EDX                             ; 00535c4d
    MOV ECX,dword ptr [ESI + 0x15f6fc]  ; 00535c4e
    MOV dword ptr [ESP + 0x28],EDX      ; 00535c54
    CMP EDX,ECX                         ; 00535c58
    JL 0x00535be2                       ; 00535c5a
        ;   XREF to: 00535be2 (CONDITIONAL_JUMP)  ; LAB_00535be2
    MOV EBX,dword ptr [0x005fed24]      ; 00535c5c | g_CGorePtr
        ;   Label: LAB_00535c5c
    PUSH EBX                            ; 00535c62
    CALL core_gore.cpp_FUN_004ce5b0     ; 00535c63
        ;   XREF to: 004ce5b0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004ce5b0(CGore * this_ptr)
    ADD ESP,0x4                         ; 00535c68
    MOV EDI,dword ptr [0x005fc5a0]      ; 00535c6b | DAT_005fc5a0
    PUSH EDI                            ; 00535c71
    CALL core_fire.cpp_FUN_004a1ad0     ; 00535c72
        ;   XREF to: 004a1ad0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004a1ad0(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 00535c77
    PUSH 0x1                            ; 00535c7a
        ;   Label: LAB_00535c7a
    MOV ECX,dword ptr [ESP + 0x28]      ; 00535c7c
    PUSH ECX                            ; 00535c80
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_0045c7e0 ; 00535c81
        ;   XREF to: 0045c7e0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_0045c7e0(CDemonLight * this_ptr, int restore_viewport_state)
    ADD ESP,0x8                         ; 00535c86
    MOV EDX,dword ptr [ESP + 0x24]      ; 00535c89
    MOV EAX,dword ptr [ESP + 0xc]       ; 00535c8d
    MOV dword ptr [EDX + 0x140],EAX     ; 00535c91
    JMP 0x00535add                      ; 00535c97
        ;   XREF to: 00535add (UNCONDITIONAL_JUMP)  ; LAB_00535add
    PUSH 0x1                            ; 00535c9c
        ;   Label: LAB_00535c9c
    PUSH EAX                            ; 00535c9e
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_0045c530 ; 00535c9f
        ;   XREF to: 0045c530 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_0045c530(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 00535ca4
    PUSH 0x22                           ; 00535ca7
    PUSH ESI                            ; 00535ca9
    CALL core_set.cpp_FUN_00539f30      ; 00535caa
        ;   XREF to: 00539f30 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00539f30(CDemonSet * this_ptr, uint dirty_flags_mask)
    ADD ESP,0x8                         ; 00535caf
    XOR EBP,EBP                         ; 00535cb2
    MOV EAX,dword ptr [ESP + 0x20]      ; 00535cb4
    MOV EBX,dword ptr [ESI + 0x15f6fc]  ; 00535cb8
    MOV [0x01549b10],EAX                ; 00535cbe | DAT_01549b10
    TEST EBX,EBX                        ; 00535cc3
    JLE 0x00535d05                      ; 00535cc5
        ;   XREF to: 00535d05 (CONDITIONAL_JUMP)  ; LAB_00535d05
    MOV EDI,ESI                         ; 00535cc7
    MOV EBX,dword ptr [EDI + 0x15f700]  ; 00535cc9
        ;   Label: LAB_00535cc9
    PUSH EBX                            ; 00535ccf
    MOV EAX,dword ptr [EBX + 0x154]     ; 00535cd0
    CALL dword ptr [EAX + 0x10]         ; 00535cd6
    ADD ESP,0x4                         ; 00535cd9
    TEST EAX,EAX                        ; 00535cdc
    JZ 0x00535d3e                       ; 00535cde
        ;   XREF to: 00535d3e (CONDITIONAL_JUMP)  ; LAB_00535d3e
    OR byte ptr [EBX + 0x144],0x22      ; 00535ce0
    PUSH 0x1                            ; 00535ce7
        ;   Label: LAB_00535ce7
    MOV EAX,[0x005f2afc]                ; 00535ce9 | DAT_005f2afc
    PUSH EAX                            ; 00535cee | DAT_01bdd7e4
    ADD EDI,0x4                         ; 00535cef
    INC EBP                             ; 00535cf2
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 00535cf3
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    MOV EDX,dword ptr [ESI + 0x15f6fc]  ; 00535cf8
    ADD ESP,0x8                         ; 00535cfe
    CMP EBP,EDX                         ; 00535d01
    JL 0x00535cc9                       ; 00535d03
        ;   XREF to: 00535cc9 (CONDITIONAL_JUMP)  ; LAB_00535cc9
    MOV ECX,dword ptr [0x005fed24]      ; 00535d05 | g_CGorePtr
        ;   Label: LAB_00535d05
    PUSH ECX                            ; 00535d0b
    CALL core_gore.cpp_FUN_004ce5b0     ; 00535d0c
        ;   XREF to: 004ce5b0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004ce5b0(CGore * this_ptr)
    ADD ESP,0x4                         ; 00535d11
    MOV EBX,dword ptr [0x005fc5a0]      ; 00535d14 | DAT_005fc5a0
    PUSH EBX                            ; 00535d1a
    CALL core_fire.cpp_FUN_004a1ad0     ; 00535d1b
        ;   XREF to: 004a1ad0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004a1ad0(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 00535d20
    XOR EDI,EDI                         ; 00535d23
    PUSH EDI                            ; 00535d25
    MOV EBP,dword ptr [ESP + 0x24]      ; 00535d26
    PUSH EBP                            ; 00535d2a
    MOV dword ptr [0x01549b10],EDI      ; 00535d2b | DAT_01549b10
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_0045c7e0 ; 00535d31
        ;   XREF to: 0045c7e0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_0045c7e0(CDemonLight * this_ptr, int restore_viewport_state)
    ADD ESP,0x8                         ; 00535d36
    JMP 0x00535b2b                      ; 00535d39
        ;   XREF to: 00535b2b (UNCONDITIONAL_JUMP)  ; LAB_00535b2b
    AND byte ptr [EBX + 0x144],0xfd     ; 00535d3e
        ;   Label: LAB_00535d3e
    JMP 0x00535ce7                      ; 00535d45
        ;   XREF to: 00535ce7 (UNCONDITIONAL_JUMP)  ; LAB_00535ce7
    MOV EDI,dword ptr [ESP + 0x8]       ; 00535d47
        ;   Label: LAB_00535d47
    CALL wincore_winrun.cpp_FUN_005806a0 ; 00535d4b
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005806a0()
    SUB EAX,EDI                         ; 00535d50
    MOV dword ptr [ESP + 0x2c],EAX      ; 00535d52
    FILD dword ptr [ESP + 0x2c]         ; 00535d56
    FMUL double ptr [0x005d055f]        ; 00535d5a | DAT_005d055f
    MOV EAX,[0x005fe9dc]                ; 00535d60 | g_CGamePtr
    FMUL double ptr [0x005d0567]        ; 00535d65 | DAT_005d0567
    FLD float ptr [EAX + 0x314]         ; 00535d6b | g_CGameInstance.field788_0x314
    FXCH                                ; 00535d71
    FMUL double ptr [0x005d056f]        ; 00535d73 | DAT_005d056f
    FDIVRP                              ; 00535d79
    SUB ESP,0x8                         ; 00535d7b
    FSTP double ptr [ESP]               ; 00535d7e
    PUSH 0x5d053f                       ; 00535d81 | s_renderStaticLights_3_2f_005d053e+1
    MOV EBP,dword ptr [0x005f1690]      ; 00535d86 | g_CConsolePtr
    PUSH EBP                            ; 00535d8c | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00535d8d
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x10                        ; 00535d92
    ADD ESP,0x30                        ; 00535d95
    POP EBP                             ; 00535d98
    POP EDI                             ; 00535d99
    POP ESI                             ; 00535d9a
    POP EBX                             ; 00535d9b
    RET                                 ; 00535d9c

