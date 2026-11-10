; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLightningBolt_render_FUN_0049abd0(CLightningBolt *this_ptr)
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xe8]:1  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
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
; undefined        Stack[-0x54]:1  local_54
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0049c780 at 0049ca97
;
; Referenced Globals:
;   undefined4 DAT_005d572a
;   undefined4 DAT_005d5732
;   undefined4 DAT_005f64e4
;   undefined4 DAT_0060b280
;   undefined4 DAT_006157cc
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   undefined4 DAT_0062205c
;   undefined4 DAT_00622060
;   undefined4 DAT_00622064
;   undefined4 DAT_00622068
;   undefined4 DAT_0062206c
;   ... and 11 more
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   crt_stdlib.c_rand_FUN_005b849c
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
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

    PUSH EBP                            ; 0049abd0
        ;   Label: core_fire.cpp_CLightningBolt_render_FUN_0049abd0
    SUB ESP,0xe4                        ; 0049abd1
    MOV EBP,dword ptr [ESP + 0xec]      ; 0049abd7
    FLD float ptr [EBP + 0x14]          ; 0049abde
    FLDZ                                ; 0049abe1
    FCOMPP                              ; 0049abe3
    FNSTSW AX                           ; 0049abe5
    SAHF                                ; 0049abe7
    JC 0x0049abf2                       ; 0049abe8
        ;   XREF to: 0049abf2 (CONDITIONAL_JUMP)  ; LAB_0049abf2
    ADD ESP,0xe4                        ; 0049abea
    POP EBP                             ; 0049abf0
    RET                                 ; 0049abf1
    PUSH EDI                            ; 0049abf2
        ;   Label: LAB_0049abf2
    PUSH ESI                            ; 0049abf3
    PUSH EBX                            ; 0049abf4
    CALL crt_stdlib.c_rand_FUN_005b849c ; 0049abf5
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    MOV EDX,EAX                         ; 0049abfa
    MOV EBX,0x6                         ; 0049abfc
    SAR EDX,0x1f                        ; 0049ac01
    IDIV EBX                            ; 0049ac04
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049ac06
    SUB EAX,EDX                         ; 0049ac0d
    SHL EAX,0x3                         ; 0049ac0f
    ADD EAX,0x6157cc                    ; 0049ac12 | DAT_006157cc
    PUSH EAX                            ; 0049ac17
    MOV EDX,dword ptr [0x0060b280]      ; 0049ac18 | DAT_0060b280
    PUSH EDX                            ; 0049ac1e | DAT_01ba5c50
    MOV ESI,0x3                         ; 0049ac1f
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0049ac24
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV ECX,0x4                         ; 0049ac29
    ADD ESP,0x8                         ; 0049ac2e
    XOR EBX,EBX                         ; 0049ac31
    MOV dword ptr [ESP + 0x10],ECX      ; 0049ac33
    MOV dword ptr [ESP + 0x20],EBX      ; 0049ac37
    MOV dword ptr [ESP + 0x1c],EBX      ; 0049ac3b
    MOV dword ptr [ESP + 0x18],EBX      ; 0049ac3f
    MOV dword ptr [ESP + 0x14],EBX      ; 0049ac43
    MOV dword ptr [ESP + 0x24],EBX      ; 0049ac47
    MOV dword ptr [ESP + 0x30],ESI      ; 0049ac4b
    MOV ECX,0x1                         ; 0049ac4f
    MOV EBX,0x2                         ; 0049ac54
    MOV dword ptr [ESP + 0x28],ECX      ; 0049ac59
    MOV dword ptr [ESP + 0x2c],EBX      ; 0049ac5d
    CALL crt_stdlib.c_rand_FUN_005b849c ; 0049ac61
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    TEST AL,0x1                         ; 0049ac66
    JZ 0x0049af4c                       ; 0049ac68
        ;   XREF to: 0049af4c (CONDITIONAL_JUMP)  ; LAB_0049af4c
    MOV EDX,0x80000                     ; 0049ac6e
    MOV EBX,0xf80000                    ; 0049ac73
    MOV dword ptr [0x00622030],EDX      ; 0049ac78 | DAT_00622030
    MOV dword ptr [0x0062205c],EBX      ; 0049ac7e | DAT_0062205c
    MOV dword ptr [0x00622060],EDX      ; 0049ac84 | DAT_00622060
    MOV dword ptr [0x0062208c],EBX      ; 0049ac8a | DAT_0062208c
    MOV dword ptr [0x00622090],EBX      ; 0049ac90 | DAT_00622090
    MOV dword ptr [0x006220bc],EDX      ; 0049ac96 | DAT_006220bc
    MOV dword ptr [0x006220c0],EBX      ; 0049ac9c | DAT_006220c0
    MOV dword ptr [0x0062202c],EDX      ; 0049aca2 | DAT_0062202c
    MOV EBX,0xffff                      ; 0049aca8
        ;   Label: LAB_0049aca8
    MOV dword ptr [0x00622034],EBX      ; 0049acad | DAT_00622034
    MOV dword ptr [0x00622038],EBX      ; 0049acb3 | DAT_00622038
    MOV dword ptr [0x0062203c],EBX      ; 0049acb9 | DAT_0062203c
    MOV dword ptr [0x00622064],EBX      ; 0049acbf | DAT_00622064
    MOV dword ptr [0x00622068],EBX      ; 0049acc5 | DAT_00622068
    MOV dword ptr [0x0062206c],EBX      ; 0049accb | DAT_0062206c
    MOV dword ptr [0x00622094],EBX      ; 0049acd1 | DAT_00622094
    MOV dword ptr [0x00622098],EBX      ; 0049acd7 | DAT_00622098
    MOV dword ptr [0x0062209c],EBX      ; 0049acdd | DAT_0062209c
    MOV dword ptr [0x006220c4],EBX      ; 0049ace3 | DAT_006220c4
    MOV dword ptr [0x006220c8],EBX      ; 0049ace9 | DAT_006220c8
    PUSH EBX                            ; 0049acef
    MOV dword ptr [0x006220cc],EBX      ; 0049acf0 | DAT_006220cc
    MOV EBX,dword ptr [0x0060b280]      ; 0049acf6 | DAT_0060b280
    PUSH EBX                            ; 0049acfc | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 0049acfd
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0049ad02
    PUSH 0x1                            ; 0049ad05
    MOV ESI,dword ptr [0x0060b280]      ; 0049ad07 | DAT_0060b280
    PUSH ESI                            ; 0049ad0d | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0049ad0e
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049ad13
    MOV EDI,dword ptr [EBP]             ; 0049ad16
    LEA ESI,[EBP + 0x4]                 ; 0049ad19
    TEST EDI,EDI                        ; 0049ad1c
    JNZ 0x0049af96                      ; 0049ad1e
        ;   XREF to: 0049af96 (CONDITIONAL_JUMP)  ; LAB_0049af96
    PUSH ESI                            ; 0049ad24
    MOV EBX,dword ptr [0x0060b280]      ; 0049ad25 | DAT_0060b280
    PUSH EBX                            ; 0049ad2b | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0049ad2c
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0049ad31
    MOV ESI,dword ptr [0x0060b280]      ; 0049ad34 | DAT_0060b280
    PUSH ESI                            ; 0049ad3a | DAT_01ba5c50
    LEA ESI,[ESP + 0xa4]                ; 0049ad3b
    LEA EDI,[ESP + 0xd4]                ; 0049ad42
    CALL engine_matrix.c_FUN_0046b670   ; 0049ad49
        ;   XREF to: 0046b670 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046b670()
    LEA ESI,[ESP + 0xa4]                ; 0049ad4e
    ADD ESP,0x4                         ; 0049ad55
    MOVSD ES:EDI,ESI                    ; 0049ad58
    MOVSD ES:EDI,ESI                    ; 0049ad59
    MOVSD ES:EDI,ESI                    ; 0049ad5a
    XOR EDI,EDI                         ; 0049ad5b
    PUSH EDI                            ; 0049ad5d
    LEA EAX,[ESP + 0xd4]                ; 0049ad5e
    PUSH EAX                            ; 0049ad65
    MOV EAX,[0x0060b280]                ; 0049ad66 | DAT_0060b280
    PUSH EAX                            ; 0049ad6b | DAT_01ba5c50
    MOV dword ptr [ESP + 0xdc],EDI      ; 0049ad6c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0049ad73
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0049ad78
    MOV dword ptr [ESP + 0xc4],EDI      ; 0049ad7b
    MOV dword ptr [ESP + 0xc8],EDI      ; 0049ad82
    MOV dword ptr [ESP + 0xcc],EDI      ; 0049ad89
    FLD float ptr [EBP + 0x18]          ; 0049ad90
    FLDZ                                ; 0049ad93
    FCOMPP                              ; 0049ad95
    FNSTSW AX                           ; 0049ad97
    SAHF                                ; 0049ad99
    JC 0x0049af87                       ; 0049ad9a
        ;   XREF to: 0049af87 (CONDITIONAL_JUMP)  ; LAB_0049af87
    FLD float ptr [EBP + 0x10]          ; 0049ada0
    FMUL double ptr [0x005d5732]        ; 0049ada3 | DAT_005d5732
    FSTP float ptr [ESP + 0xc4]         ; 0049ada9
    MOV EAX,dword ptr [EBP + 0x10]      ; 0049adb0
        ;   Label: LAB_0049adb0
    LEA EBX,[ESP + 0x94]                ; 0049adb3
    MOV dword ptr [ESP + 0xc8],EAX      ; 0049adba
    LEA EAX,[ESP + 0xc4]                ; 0049adc1
    MOV EDX,dword ptr [0x0060b280]      ; 0049adc8 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049adce
    FMUL float ptr [0x005f64e4]         ; 0049add0 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049add6
    FLD float ptr [EAX + 0x4]           ; 0049add8
    FMUL float ptr [0x005f64e4]         ; 0049addb | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049ade1
    FLD float ptr [EAX + 0x8]           ; 0049ade4
    FMUL float ptr [0x005f64e4]         ; 0049ade7 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049aded
    LEA EAX,[ESP + 0x94]                ; 0049adf0
    PUSH EAX                            ; 0049adf7
    MOV EAX,dword ptr [EDX]             ; 0049adf8 | DAT_01ba5c50
    PUSH EAX                            ; 0049adfa
    CALL engine_special.cpp_FUN_0055d723 ; 0049adfb
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049ae00
    MOV AH,byte ptr [ESP + 0xc7]        ; 0049ae03
    XOR AH,0x80                         ; 0049ae0a
    LEA EBX,[ESP + 0x40]                ; 0049ae0d
    MOV byte ptr [ESP + 0xc7],AH        ; 0049ae11
    LEA EAX,[ESP + 0xc4]                ; 0049ae18
    MOV EDX,dword ptr [0x0060b280]      ; 0049ae1f | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049ae25
    FMUL float ptr [0x005f64e4]         ; 0049ae27 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049ae2d
    FLD float ptr [EAX + 0x4]           ; 0049ae2f
    FMUL float ptr [0x005f64e4]         ; 0049ae32 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049ae38
    FLD float ptr [EAX + 0x8]           ; 0049ae3b
    FMUL float ptr [0x005f64e4]         ; 0049ae3e | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049ae44
    LEA EAX,[ESP + 0x40]                ; 0049ae47
    PUSH EAX                            ; 0049ae4b
    MOV EAX,dword ptr [EDX]             ; 0049ae4c | DAT_01ba5c50
    ADD EAX,0x30                        ; 0049ae4e
    PUSH EAX                            ; 0049ae51
    XOR ESI,ESI                         ; 0049ae52
    CALL engine_special.cpp_FUN_0055d723 ; 0049ae54
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0xb4]                ; 0049ae59
    LEA EAX,[ESP + 0xcc]                ; 0049ae60
    ADD ESP,0x8                         ; 0049ae67
    MOV EDX,dword ptr [0x0060b280]      ; 0049ae6a | DAT_0060b280
    MOV dword ptr [ESP + 0xc8],ESI      ; 0049ae70
    FLD float ptr [EAX]                 ; 0049ae77
    FMUL float ptr [0x005f64e4]         ; 0049ae79 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049ae7f
    FLD float ptr [EAX + 0x4]           ; 0049ae81
    FMUL float ptr [0x005f64e4]         ; 0049ae84 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049ae8a
    FLD float ptr [EAX + 0x8]           ; 0049ae8d
    FMUL float ptr [0x005f64e4]         ; 0049ae90 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049ae96
    LEA EAX,[ESP + 0xac]                ; 0049ae99
    PUSH EAX                            ; 0049aea0
    MOV EAX,dword ptr [EDX]             ; 0049aea1 | DAT_01ba5c50
    ADD EAX,0x60                        ; 0049aea3
    PUSH EAX                            ; 0049aea6
    CALL engine_special.cpp_FUN_0055d723 ; 0049aea7
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049aeac
    MOV DL,byte ptr [ESP + 0xc7]        ; 0049aeaf
    LEA EBX,[ESP + 0xdc]                ; 0049aeb6
    XOR DL,0x80                         ; 0049aebd
    LEA EAX,[ESP + 0xc4]                ; 0049aec0
    MOV byte ptr [ESP + 0xc7],DL        ; 0049aec7
    MOV EDX,dword ptr [0x0060b280]      ; 0049aece | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049aed4
    FMUL float ptr [0x005f64e4]         ; 0049aed6 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049aedc
    FLD float ptr [EAX + 0x4]           ; 0049aede
    FMUL float ptr [0x005f64e4]         ; 0049aee1 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049aee7
    FLD float ptr [EAX + 0x8]           ; 0049aeea
    FMUL float ptr [0x005f64e4]         ; 0049aeed | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049aef3
    LEA EAX,[ESP + 0xdc]                ; 0049aef6
    PUSH EAX                            ; 0049aefd
    MOV EAX,dword ptr [EDX]             ; 0049aefe | DAT_01ba5c50
    ADD EAX,0x90                        ; 0049af00
    PUSH EAX                            ; 0049af05
    CALL engine_special.cpp_FUN_0055d723 ; 0049af06
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049af0b
    LEA EAX,[ESP + 0xc]                 ; 0049af0e
    PUSH EAX                            ; 0049af12
    MOV EDI,dword ptr [0x0060b280]      ; 0049af13 | DAT_0060b280
    PUSH EDI                            ; 0049af19 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 0049af1a
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0049af1f
    MOV EBP,dword ptr [0x0060b280]      ; 0049af22 | DAT_0060b280
    PUSH EBP                            ; 0049af28 | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 0049af29
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0049af2e
    PUSH 0x0                            ; 0049af31
        ;   Label: LAB_0049af31
    MOV EAX,[0x0060b280]                ; 0049af33 | DAT_0060b280
    PUSH EAX                            ; 0049af38 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0049af39
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049af3e
    POP EBX                             ; 0049af41
    POP ESI                             ; 0049af42
    POP EDI                             ; 0049af43
    ADD ESP,0xe4                        ; 0049af44
    POP EBP                             ; 0049af4a
    RET                                 ; 0049af4b
    MOV EAX,0x80000                     ; 0049af4c
        ;   Label: LAB_0049af4c
    MOV EDI,0xf80000                    ; 0049af51
    MOV [0x00622030],EAX                ; 0049af56 | DAT_00622030
    MOV [0x0062205c],EAX                ; 0049af5b | DAT_0062205c
    MOV [0x00622060],EAX                ; 0049af60 | DAT_00622060
    MOV [0x0062208c],EAX                ; 0049af65 | DAT_0062208c
    MOV dword ptr [0x00622090],EDI      ; 0049af6a | DAT_00622090
    MOV dword ptr [0x006220bc],EDI      ; 0049af70 | DAT_006220bc
    MOV dword ptr [0x006220c0],EDI      ; 0049af76 | DAT_006220c0
    MOV dword ptr [0x0062202c],EDI      ; 0049af7c | DAT_0062202c
    JMP 0x0049aca8                      ; 0049af82
        ;   XREF to: 0049aca8 (UNCONDITIONAL_JUMP)  ; LAB_0049aca8
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049af87
        ;   Label: LAB_0049af87
    MOV dword ptr [ESP + 0xc4],EAX      ; 0049af8a
    JMP 0x0049adb0                      ; 0049af91
        ;   XREF to: 0049adb0 (UNCONDITIONAL_JUMP)  ; LAB_0049adb0
    MOV EAX,[0x0060b280]                ; 0049af96 | DAT_0060b280
        ;   Label: LAB_0049af96
    LEA EBX,[ESP + 0x58]                ; 0049af9b
    MOV EDX,dword ptr [EAX]             ; 0049af9f | DAT_01ba5c50
    MOV EAX,ESI                         ; 0049afa1
    FLD float ptr [EAX]                 ; 0049afa3
    FMUL float ptr [0x005f64e4]         ; 0049afa5 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049afab
    FLD float ptr [EAX + 0x4]           ; 0049afad
    FMUL float ptr [0x005f64e4]         ; 0049afb0 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049afb6
    FLD float ptr [EAX + 0x8]           ; 0049afb9
    FMUL float ptr [0x005f64e4]         ; 0049afbc | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049afc2
    LEA EAX,[ESP + 0x58]                ; 0049afc5
    PUSH EAX                            ; 0049afc9
    PUSH EDX                            ; 0049afca
    CALL engine_special.cpp_FUN_0055d9ec ; 0049afcb
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 0049afd0 | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 0049afd5 | DAT_01ba5c50
    ADD ESP,0x8                         ; 0049afd7
    LEA EDX,[EAX + 0x30]                ; 0049afda
    LEA EBX,[ESP + 0x88]                ; 0049afdd
    MOV EAX,ESI                         ; 0049afe4
    FLD float ptr [EAX]                 ; 0049afe6
    FMUL float ptr [0x005f64e4]         ; 0049afe8 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049afee
    FLD float ptr [EAX + 0x4]           ; 0049aff0
    FMUL float ptr [0x005f64e4]         ; 0049aff3 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049aff9
    FLD float ptr [EAX + 0x8]           ; 0049affc
    FMUL float ptr [0x005f64e4]         ; 0049afff | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b005
    LEA EAX,[ESP + 0x88]                ; 0049b008
    PUSH EAX                            ; 0049b00f
    PUSH EDX                            ; 0049b010
    CALL engine_special.cpp_FUN_0055d9ec ; 0049b011
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 0049b016 | DAT_0060b280
    LEA EDI,[EBP + 0x1c]                ; 0049b01b
    MOV EAX,dword ptr [EAX]             ; 0049b01e | DAT_01ba5c50
    ADD ESP,0x8                         ; 0049b020
    LEA EDX,[EAX + 0x60]                ; 0049b023
    LEA EBX,[ESP + 0xb8]                ; 0049b026
    MOV EAX,EDI                         ; 0049b02d
    FLD float ptr [EAX]                 ; 0049b02f
    FMUL float ptr [0x005f64e4]         ; 0049b031 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049b037
    FLD float ptr [EAX + 0x4]           ; 0049b039
    FMUL float ptr [0x005f64e4]         ; 0049b03c | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049b042
    FLD float ptr [EAX + 0x8]           ; 0049b045
    FMUL float ptr [0x005f64e4]         ; 0049b048 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b04e
    LEA EAX,[ESP + 0xb8]                ; 0049b051
    PUSH EAX                            ; 0049b058
    PUSH EDX                            ; 0049b059
    CALL engine_special.cpp_FUN_0055d9ec ; 0049b05a
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 0049b05f | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 0049b064 | DAT_01ba5c50
    ADD ESP,0x8                         ; 0049b066
    LEA EDX,[EAX + 0x90]                ; 0049b069
    LEA EBX,[ESP + 0x64]                ; 0049b06f
    MOV EAX,EDI                         ; 0049b073
    FLD float ptr [EAX]                 ; 0049b075
    FMUL float ptr [0x005f64e4]         ; 0049b077 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049b07d
    FLD float ptr [EAX + 0x4]           ; 0049b07f
    FMUL float ptr [0x005f64e4]         ; 0049b082 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049b088
    FLD float ptr [EAX + 0x8]           ; 0049b08b
    FMUL float ptr [0x005f64e4]         ; 0049b08e | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b094
    LEA EAX,[ESP + 0x64]                ; 0049b097
    PUSH EAX                            ; 0049b09b
    PUSH EDX                            ; 0049b09c
    CALL engine_special.cpp_FUN_0055d9ec ; 0049b09d
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x18]          ; 0049b0a2
    MOV EDX,dword ptr [0x0060b280]      ; 0049b0a5 | DAT_0060b280
    FLD double ptr [0x005d572a]         ; 0049b0ab | DAT_005d572a
    FXCH                                ; 0049b0b1
    FMUL ST1                            ; 0049b0b3
    MOV EAX,dword ptr [EDX]             ; 0049b0b5 | DAT_01ba5c50
    FLD float ptr [EBP + 0x28]          ; 0049b0b7
    ADD ESP,0x8                         ; 0049b0ba
    MOV dword ptr [EAX + 0x10],0x80000000 ; 0049b0bd
    FXCH                                ; 0049b0c4
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049b0c6
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EBX,dword ptr [EDX]             ; 0049b0cb
    FISTP dword ptr [ESP + 0xec]        ; 0049b0cd
    MOV EAX,dword ptr [ESP + 0xec]      ; 0049b0d4
    SUB dword ptr [EBX + 0x4],EAX       ; 0049b0db
    MOV EAX,dword ptr [EDX]             ; 0049b0de
    MOV dword ptr [EAX + 0x40],0x80000000 ; 0049b0e0
    MOV EBX,dword ptr [EDX]             ; 0049b0e7
    MOV EAX,dword ptr [ESP + 0xec]      ; 0049b0e9
    ADD dword ptr [EBX + 0x34],EAX      ; 0049b0f0
    MOV EAX,dword ptr [EDX]             ; 0049b0f3
    FMULP                               ; 0049b0f5
    MOV dword ptr [EAX + 0x70],0x80000000 ; 0049b0f7
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049b0fe
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EBX,dword ptr [EDX]             ; 0049b103
    FISTP dword ptr [ESP + 0xe8]        ; 0049b105
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0049b10c
    ADD dword ptr [EBX + 0x64],EAX      ; 0049b113
    MOV EAX,dword ptr [EDX]             ; 0049b116
    MOV dword ptr [EAX + 0xa0],0x80000000 ; 0049b118
    MOV EBX,dword ptr [EDX]             ; 0049b122
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0049b124
    MOV ECX,dword ptr [EBX + 0x94]      ; 0049b12b
    SUB ECX,EAX                         ; 0049b131
    LEA EAX,[ESP + 0xc]                 ; 0049b133
    PUSH EAX                            ; 0049b137
    PUSH EDX                            ; 0049b138
    MOV dword ptr [EBX + 0x94],ECX      ; 0049b139
    LEA EBX,[ESP + 0x54]                ; 0049b13f
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 0049b143
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EDX,dword ptr [0x0060b280]      ; 0049b148 | DAT_0060b280
    ADD ESP,0x8                         ; 0049b14e
    MOV EAX,ESI                         ; 0049b151
    MOV EDX,dword ptr [EDX]             ; 0049b153 | DAT_01ba5c50
    FLD float ptr [EAX]                 ; 0049b155
    FMUL float ptr [0x005f64e4]         ; 0049b157 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049b15d
    FLD float ptr [EAX + 0x4]           ; 0049b15f
    FMUL float ptr [0x005f64e4]         ; 0049b162 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049b168
    FLD float ptr [EAX + 0x8]           ; 0049b16b
    FMUL float ptr [0x005f64e4]         ; 0049b16e | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b174
    LEA EAX,[ESP + 0x4c]                ; 0049b177
    PUSH EAX                            ; 0049b17b
    PUSH EDX                            ; 0049b17c
    CALL engine_special.cpp_FUN_0055d9ec ; 0049b17d
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 0049b182 | DAT_0060b280
    LEA EBX,[ESP + 0x84]                ; 0049b187
    ADD ESP,0x8                         ; 0049b18e
    MOV EDX,dword ptr [EAX]             ; 0049b191 | DAT_01ba5c50
    MOV EAX,ESI                         ; 0049b193
    FLD float ptr [EAX]                 ; 0049b195
    FMUL float ptr [0x005f64e4]         ; 0049b197 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049b19d
    FLD float ptr [EAX + 0x4]           ; 0049b19f
    FMUL float ptr [0x005f64e4]         ; 0049b1a2 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049b1a8
    FLD float ptr [EAX + 0x8]           ; 0049b1ab
    FMUL float ptr [0x005f64e4]         ; 0049b1ae | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b1b4
    LEA EAX,[ESP + 0x7c]                ; 0049b1b7
    PUSH EAX                            ; 0049b1bb
    ADD EDX,0x30                        ; 0049b1bc
    PUSH EDX                            ; 0049b1bf
    CALL engine_special.cpp_FUN_0055d9ec ; 0049b1c0
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 0049b1c5 | DAT_0060b280
    LEA EBX,[ESP + 0x3c]                ; 0049b1ca
    ADD ESP,0x8                         ; 0049b1ce
    MOV EDX,dword ptr [EAX]             ; 0049b1d1 | DAT_01ba5c50
    MOV EAX,EDI                         ; 0049b1d3
    FLD float ptr [EAX]                 ; 0049b1d5
    FMUL float ptr [0x005f64e4]         ; 0049b1d7 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049b1dd
    FLD float ptr [EAX + 0x4]           ; 0049b1df
    FMUL float ptr [0x005f64e4]         ; 0049b1e2 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049b1e8
    FLD float ptr [EAX + 0x8]           ; 0049b1eb
    FMUL float ptr [0x005f64e4]         ; 0049b1ee | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b1f4
    LEA EAX,[ESP + 0x34]                ; 0049b1f7
    PUSH EAX                            ; 0049b1fb
    ADD EDX,0x60                        ; 0049b1fc
    PUSH EDX                            ; 0049b1ff
    CALL engine_special.cpp_FUN_0055d9ec ; 0049b200
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 0049b205 | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 0049b20a | DAT_01ba5c50
    ADD ESP,0x8                         ; 0049b20c
    LEA EDX,[EAX + 0x90]                ; 0049b20f
    LEA EBX,[ESP + 0x70]                ; 0049b215
    MOV EAX,EDI                         ; 0049b219
    FLD float ptr [EAX]                 ; 0049b21b
    FMUL float ptr [0x005f64e4]         ; 0049b21d | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049b223
    FLD float ptr [EAX + 0x4]           ; 0049b225
    FMUL float ptr [0x005f64e4]         ; 0049b228 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049b22e
    FLD float ptr [EAX + 0x8]           ; 0049b231
    FMUL float ptr [0x005f64e4]         ; 0049b234 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b23a
    LEA EAX,[ESP + 0x70]                ; 0049b23d
    PUSH EAX                            ; 0049b241
    PUSH EDX                            ; 0049b242
    CALL engine_special.cpp_FUN_0055d9ec ; 0049b243
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049b248
    MOV ESI,dword ptr [0x0060b280]      ; 0049b24b | DAT_0060b280
    MOV EAX,dword ptr [ESI]             ; 0049b251 | DAT_01ba5c50
    MOV dword ptr [EAX + 0x10],0x80000000 ; 0049b253
    MOV EDX,dword ptr [ESI]             ; 0049b25a | DAT_01ba5c50
    MOV EAX,dword ptr [ESP + 0xec]      ; 0049b25c
    SUB dword ptr [EDX],EAX             ; 0049b263
    MOV EAX,dword ptr [ESI]             ; 0049b265 | DAT_01ba5c50
    MOV dword ptr [EAX + 0x40],0x80000000 ; 0049b267
    MOV EDX,dword ptr [ESI]             ; 0049b26e | DAT_01ba5c50
    MOV EAX,dword ptr [ESP + 0xec]      ; 0049b270
    ADD dword ptr [EDX + 0x30],EAX      ; 0049b277
    MOV EAX,dword ptr [ESI]             ; 0049b27a | DAT_01ba5c50
    MOV dword ptr [EAX + 0x70],0x80000000 ; 0049b27c
    MOV EDX,dword ptr [ESI]             ; 0049b283 | DAT_01ba5c50
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0049b285
    ADD dword ptr [EDX + 0x60],EAX      ; 0049b28c
    MOV EAX,dword ptr [ESI]             ; 0049b28f | DAT_01ba5c50
    MOV dword ptr [EAX + 0xa0],0x80000000 ; 0049b291
    MOV EDX,dword ptr [ESI]             ; 0049b29b | DAT_01ba5c50
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0049b29d
    MOV ECX,dword ptr [EDX + 0x90]      ; 0049b2a4
    SUB ECX,EAX                         ; 0049b2aa
    LEA EAX,[ESP + 0xc]                 ; 0049b2ac
    PUSH EAX                            ; 0049b2b0
    PUSH ESI                            ; 0049b2b1 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x90],ECX      ; 0049b2b2
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 0049b2b8
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0049b2bd
    JMP 0x0049af31                      ; 0049b2c0
        ;   XREF to: 0049af31 (UNCONDITIONAL_JUMP)  ; LAB_0049af31

