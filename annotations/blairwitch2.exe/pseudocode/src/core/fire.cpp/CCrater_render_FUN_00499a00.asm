; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_render_FUN_00499a00(CCrater *this_ptr)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
; XREF[2]:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_0049cb50 at 0049cc14
;   core_fire.cpp_FUN_00499610 at 0049963a
;
; Referenced Globals:
;   undefined4 DAT_005f64e4
;   undefined4 DAT_0060b280
;   undefined4 DAT_006157b4
;   undefined4 DAT_00622014
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   undefined4 DAT_00622044
;   undefined4 DAT_0062205c
;   undefined4 DAT_00622060
;   undefined4 DAT_00622064
;   undefined4 DAT_00622068
;   undefined4 DAT_0062206c
;   ... and 13 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_special.cpp_FUN_0055d9ec
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00499a00
        ;   Label: core_fire.cpp_CCrater_render_FUN_00499a00
    PUSH EBP                            ; 00499a01
    SUB ESP,0x58                        ; 00499a02
    MOV ESI,dword ptr [ESP + 0x64]      ; 00499a05
    CMP dword ptr [ESI],0x0             ; 00499a09
    JNZ 0x00499a14                      ; 00499a0c
        ;   XREF to: 00499a14 (CONDITIONAL_JUMP)  ; LAB_00499a14
    ADD ESP,0x58                        ; 00499a0e
    POP EBP                             ; 00499a11
    POP ESI                             ; 00499a12
    RET                                 ; 00499a13
    PUSH EDI                            ; 00499a14
        ;   Label: LAB_00499a14
    PUSH EBX                            ; 00499a15
    LEA EAX,[ESI + 0xc]                 ; 00499a16
    PUSH EAX                            ; 00499a19
    MOV ECX,dword ptr [0x0060b280]      ; 00499a1a | DAT_0060b280
    PUSH ECX                            ; 00499a20 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00499a21
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00499a26
    PUSH 0x6157b4                       ; 00499a29 | DAT_006157b4
    MOV EBX,dword ptr [0x0060b280]      ; 00499a2e | DAT_0060b280
    PUSH EBX                            ; 00499a34 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 00499a35
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00499a3a
    LEA EBX,[ESP + 0x30]                ; 00499a3d
    LEA EAX,[ESI + 0x40]                ; 00499a41
    FLD float ptr [EAX]                 ; 00499a44
    FMUL float ptr [0x005f64e4]         ; 00499a46 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00499a4c
    FLD float ptr [EAX + 0x4]           ; 00499a4e
    FMUL float ptr [0x005f64e4]         ; 00499a51 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00499a57
    FLD float ptr [EAX + 0x8]           ; 00499a5a
    FMUL float ptr [0x005f64e4]         ; 00499a5d | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00499a63
    LEA EAX,[ESP + 0x30]                ; 00499a66
    PUSH EAX                            ; 00499a6a
    PUSH 0x622014                       ; 00499a6b | DAT_00622014
    CALL engine_special.cpp_FUN_0055d9ec ; 00499a70
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00499a75
    LEA EBX,[ESP + 0x48]                ; 00499a78
    LEA EAX,[ESI + 0x4c]                ; 00499a7c
    FLD float ptr [EAX]                 ; 00499a7f
    FMUL float ptr [0x005f64e4]         ; 00499a81 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00499a87
    FLD float ptr [EAX + 0x4]           ; 00499a89
    FMUL float ptr [0x005f64e4]         ; 00499a8c | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00499a92
    FLD float ptr [EAX + 0x8]           ; 00499a95
    FMUL float ptr [0x005f64e4]         ; 00499a98 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00499a9e
    LEA EAX,[ESP + 0x48]                ; 00499aa1
    PUSH EAX                            ; 00499aa5
    PUSH 0x622044                       ; 00499aa6 | DAT_00622044
    CALL engine_special.cpp_FUN_0055d9ec ; 00499aab
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00499ab0
    LEA EBX,[ESP + 0x3c]                ; 00499ab3
    LEA EAX,[ESI + 0x58]                ; 00499ab7
    FLD float ptr [EAX]                 ; 00499aba
    FMUL float ptr [0x005f64e4]         ; 00499abc | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00499ac2
    FLD float ptr [EAX + 0x4]           ; 00499ac4
    FMUL float ptr [0x005f64e4]         ; 00499ac7 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00499acd
    FLD float ptr [EAX + 0x8]           ; 00499ad0
    FMUL float ptr [0x005f64e4]         ; 00499ad3 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00499ad9
    LEA EAX,[ESP + 0x3c]                ; 00499adc
    PUSH EAX                            ; 00499ae0
    PUSH 0x622074                       ; 00499ae1 | DAT_00622074
    CALL engine_special.cpp_FUN_0055d9ec ; 00499ae6
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00499aeb
    LEA EAX,[ESI + 0x64]                ; 00499aee
    LEA EBX,[ESP + 0x54]                ; 00499af1
    FLD float ptr [EAX]                 ; 00499af5
    FMUL float ptr [0x005f64e4]         ; 00499af7 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00499afd
    FLD float ptr [EAX + 0x4]           ; 00499aff
    FMUL float ptr [0x005f64e4]         ; 00499b02 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00499b08
    FLD float ptr [EAX + 0x8]           ; 00499b0b
    FMUL float ptr [0x005f64e4]         ; 00499b0e | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00499b14
    LEA EAX,[ESP + 0x54]                ; 00499b17
    PUSH EAX                            ; 00499b1b
    PUSH 0x6220a4                       ; 00499b1c | DAT_006220a4
    MOV ESI,0xffff                      ; 00499b21
    MOV EDI,0xffff                      ; 00499b26
    CALL engine_special.cpp_FUN_0055d9ec ; 00499b2b
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x80000                     ; 00499b30
    MOV EBX,0xf80000                    ; 00499b35
    ADD ESP,0x8                         ; 00499b3a
    MOV dword ptr [0x00622034],ESI      ; 00499b3d | DAT_00622034
    MOV dword ptr [0x00622038],ESI      ; 00499b43 | DAT_00622038
    MOV dword ptr [0x0062203c],ESI      ; 00499b49 | DAT_0062203c
    MOV dword ptr [0x00622064],ESI      ; 00499b4f | DAT_00622064
    MOV dword ptr [0x00622068],ESI      ; 00499b55 | DAT_00622068
    MOV dword ptr [0x0062206c],ESI      ; 00499b5b | DAT_0062206c
    MOV dword ptr [0x00622094],ESI      ; 00499b61 | DAT_00622094
    MOV dword ptr [0x00622098],ESI      ; 00499b67 | DAT_00622098
    MOV dword ptr [0x0062209c],ESI      ; 00499b6d | DAT_0062209c
    MOV dword ptr [0x006220c4],ESI      ; 00499b73 | DAT_006220c4
    MOV dword ptr [0x006220c8],ESI      ; 00499b79 | DAT_006220c8
    MOV dword ptr [0x006220cc],ESI      ; 00499b7f | DAT_006220cc
    MOV dword ptr [0x0062202c],ECX      ; 00499b85 | DAT_0062202c
    MOV dword ptr [0x00622030],EBX      ; 00499b8b | DAT_00622030
    MOV dword ptr [0x0062205c],EBX      ; 00499b91 | DAT_0062205c
    MOV dword ptr [0x00622060],EBX      ; 00499b97 | DAT_00622060
    MOV dword ptr [0x0062208c],EBX      ; 00499b9d | DAT_0062208c
    MOV EAX,ECX                         ; 00499ba3
    MOV dword ptr [0x00622090],ECX      ; 00499ba5 | DAT_00622090
    MOV EDX,ECX                         ; 00499bab
    MOV dword ptr [0x006220bc],ECX      ; 00499bad | DAT_006220bc
    MOV dword ptr [0x006220c0],ECX      ; 00499bb3 | DAT_006220c0
    MOV dword ptr [ESP + 0x14],EDI      ; 00499bb9
    PUSH EDI                            ; 00499bbd
    XOR ESI,ESI                         ; 00499bbe
    MOV EBX,0x3                         ; 00499bc0
    MOV dword ptr [ESP + 0x14],ESI      ; 00499bc5
    MOV dword ptr [ESP + 0x1c],ESI      ; 00499bc9
    XOR EAX,ECX                         ; 00499bcd
    XOR EDX,ECX                         ; 00499bcf
    MOV ECX,0x1                         ; 00499bd1
    MOV ESI,dword ptr [0x0060b280]      ; 00499bd6 | DAT_0060b280
    MOV dword ptr [ESP + 0x10],EBX      ; 00499bdc
    MOV dword ptr [ESP + 0x20],EAX      ; 00499be0
    MOV dword ptr [ESP + 0x24],EDX      ; 00499be4
    MOV EBX,0x2                         ; 00499be8
    PUSH ESI                            ; 00499bed | DAT_01ba5c50
    MOV dword ptr [ESP + 0x2c],ECX      ; 00499bee
    MOV dword ptr [ESP + 0x30],EBX      ; 00499bf2
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00499bf6
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00499bfb
    LEA EAX,[ESP + 0x8]                 ; 00499bfe
    PUSH EAX                            ; 00499c02
    MOV EDI,dword ptr [0x0060b280]      ; 00499c03 | DAT_0060b280
    PUSH EDI                            ; 00499c09 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 00499c0a
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00499c0f
    XOR EBP,EBP                         ; 00499c12
    MOV EDX,0x3                         ; 00499c14
    PUSH 0xffff                         ; 00499c19
    MOV ECX,dword ptr [0x0060b280]      ; 00499c1e | DAT_0060b280
    MOV dword ptr [ESP + 0x24],EBP      ; 00499c24
    PUSH ECX                            ; 00499c28 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x2c],EBX      ; 00499c29
    MOV dword ptr [ESP + 0x30],EDX      ; 00499c2d
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00499c31
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00499c36
    LEA EAX,[ESP + 0x8]                 ; 00499c39
    PUSH EAX                            ; 00499c3d
    MOV EBX,dword ptr [0x0060b280]      ; 00499c3e | DAT_0060b280
    PUSH EBX                            ; 00499c44 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 00499c45
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00499c4a
    POP EBX                             ; 00499c4d
    POP EDI                             ; 00499c4e
    ADD ESP,0x58                        ; 00499c4f
    POP EBP                             ; 00499c52
    POP ESI                             ; 00499c53
    RET                                 ; 00499c54

