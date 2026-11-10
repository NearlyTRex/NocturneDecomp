; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CTrail_render_FUN_004b3d20(CTrail *this_ptr)
;
; Parameters:
; CTrail *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x84]:1  local_84
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
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
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
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004b5100 at 004b5422
;
; Referenced Globals:
;   undefined4 DAT_005fff94
;   undefined4 DAT_00612560
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_0062905c
;   undefined4 DAT_00629060
;   undefined4 DAT_00629064
;   undefined4 DAT_00629068
;   undefined4 DAT_0062906c
;   undefined4 DAT_0062908c
;   undefined4 DAT_00629090
;   undefined4 DAT_00629094
;   ... and 8 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00483df0
;   engine_matrix.c_FUN_00483b70
;   engine_matrix.c_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3d20
        ;   Label: core_fire.cpp_CTrail_render_FUN_004b3d20
    PUSH EBP                            ; 004b3d21
    SUB ESP,0x7c                        ; 004b3d22
    MOV EBX,dword ptr [ESP + 0x88]      ; 004b3d25
    FLD float ptr [EBX + 0x10]          ; 004b3d2c
    FLDZ                                ; 004b3d2f
    FCOMPP                              ; 004b3d31
    FNSTSW AX                           ; 004b3d33
    SAHF                                ; 004b3d35
    JC 0x004b3d3e                       ; 004b3d36
        ;   XREF to: 004b3d3e (CONDITIONAL_JUMP)  ; LAB_004b3d3e
    ADD ESP,0x7c                        ; 004b3d38
    POP EBP                             ; 004b3d3b
    POP EBX                             ; 004b3d3c
    RET                                 ; 004b3d3d
    PUSH EDI                            ; 004b3d3e
        ;   Label: LAB_004b3d3e
    PUSH ESI                            ; 004b3d3f
    MOV EDX,dword ptr [EBX + 0x20]      ; 004b3d40
    PUSH EDX                            ; 004b3d43
    MOV ECX,dword ptr [0x00612560]      ; 004b3d44 | DAT_00612560
    PUSH ECX                            ; 004b3d4a | DAT_01bc120c
    MOV ESI,0x4                         ; 004b3d4b
    MOV EBP,0x3                         ; 004b3d50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b3d55
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004b3d5a
    XOR EDI,EDI                         ; 004b3d5d
    MOV dword ptr [ESP + 0xc],ESI       ; 004b3d5f
    MOV dword ptr [ESP + 0x1c],EDI      ; 004b3d63
    MOV dword ptr [ESP + 0x18],EDI      ; 004b3d67
    MOV dword ptr [ESP + 0x14],EDI      ; 004b3d6b
    MOV dword ptr [ESP + 0x10],EDI      ; 004b3d6f
    MOV dword ptr [ESP + 0x20],EDI      ; 004b3d73
    MOV dword ptr [ESP + 0x2c],EBP      ; 004b3d77
    MOV ESI,0x1                         ; 004b3d7b
    MOV EDI,0x2                         ; 004b3d80
    MOV dword ptr [ESP + 0x24],ESI      ; 004b3d85
    MOV dword ptr [ESP + 0x28],EDI      ; 004b3d89
    MOV EAX,[0x00612560]                ; 004b3d8d | DAT_00612560
    PUSH dword ptr [EBX + 0x14]         ; 004b3d92
    PUSH EAX                            ; 004b3d95 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00483df0 ; 004b3d96
        ;   XREF to: 00483df0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00483df0(CDemonRenderer * this_ptr, float render_alpha)
    ADD ESP,0x8                         ; 004b3d9b
    PUSH ESI                            ; 004b3d9e
    MOV EDX,dword ptr [0x00612560]      ; 004b3d9f | DAT_00612560
    PUSH EDX                            ; 004b3da5 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b3da6
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b3dab
    PUSH EBX                            ; 004b3dae
    MOV ECX,dword ptr [0x00612560]      ; 004b3daf | DAT_00612560
    PUSH ECX                            ; 004b3db5 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004b3db6
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004b3dbb
    MOV ESI,dword ptr [0x00612560]      ; 004b3dbe | DAT_00612560
    PUSH ESI                            ; 004b3dc4 | DAT_01bc120c
    LEA ESI,[ESP + 0x4c]                ; 004b3dc5
    LEA EDI,[ESP + 0x58]                ; 004b3dc9
    CALL engine_matrix.c_FUN_00483b70   ; 004b3dcd
        ;   XREF to: 00483b70 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483b70()
    ADD ESP,0x4                         ; 004b3dd2
    LEA ESI,[ESP + 0x48]                ; 004b3dd5
    LEA EAX,[ESP + 0x54]                ; 004b3dd9
    PUSH 0x0                            ; 004b3ddd
    MOVSD ES:EDI,ESI                    ; 004b3ddf
    MOVSD ES:EDI,ESI                    ; 004b3de0
    MOVSD ES:EDI,ESI                    ; 004b3de1
    PUSH EAX                            ; 004b3de2
    MOV EDI,dword ptr [0x00612560]      ; 004b3de3 | DAT_00612560
    PUSH EDI                            ; 004b3de9 | DAT_01bc120c
    XOR EBP,EBP                         ; 004b3dea
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004b3dec
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004b3df1
    MOV dword ptr [ESP + 0x3c],EBP      ; 004b3df4
    MOV dword ptr [ESP + 0x40],EBP      ; 004b3df8
    MOV dword ptr [ESP + 0x44],EBP      ; 004b3dfc
    FLD float ptr [EBX + 0xc]           ; 004b3e00
    FMUL float ptr [EBX + 0x14]         ; 004b3e03
    FSTP float ptr [ESP + 0x3c]         ; 004b3e06
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004b3e0a
    LEA EBX,[ESP + 0x60]                ; 004b3e0e
    MOV dword ptr [ESP + 0x40],EAX      ; 004b3e12
    LEA EAX,[ESP + 0x3c]                ; 004b3e16
    MOV ESI,dword ptr [0x00612560]      ; 004b3e1a | DAT_00612560
    FLD float ptr [EAX]                 ; 004b3e20
    FMUL float ptr [0x005fff94]         ; 004b3e22 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b3e28
    FLD float ptr [EAX + 0x4]           ; 004b3e2a
    FMUL float ptr [0x005fff94]         ; 004b3e2d | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b3e33
    FLD float ptr [EAX + 0x8]           ; 004b3e36
    FMUL float ptr [0x005fff94]         ; 004b3e39 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b3e3f
    LEA EAX,[ESP + 0x60]                ; 004b3e42
    PUSH EAX                            ; 004b3e46
    MOV EAX,dword ptr [ESI]             ; 004b3e47 | DAT_01bc120c
    PUSH EAX                            ; 004b3e49
    CALL engine_special.cpp_FUN_00580173 ; 004b3e4a
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b3e4f
    MOV AH,byte ptr [ESP + 0x3f]        ; 004b3e52
    XOR AH,0x80                         ; 004b3e56
    MOV ESI,dword ptr [0x00612560]      ; 004b3e59 | DAT_00612560
    MOV byte ptr [ESP + 0x3f],AH        ; 004b3e5f
    LEA EBX,[ESP + 0x6c]                ; 004b3e63
    LEA EAX,[ESP + 0x3c]                ; 004b3e67
    FLD float ptr [EAX]                 ; 004b3e6b
    FMUL float ptr [0x005fff94]         ; 004b3e6d | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b3e73
    FLD float ptr [EAX + 0x4]           ; 004b3e75
    FMUL float ptr [0x005fff94]         ; 004b3e78 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b3e7e
    FLD float ptr [EAX + 0x8]           ; 004b3e81
    FMUL float ptr [0x005fff94]         ; 004b3e84 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b3e8a
    LEA EAX,[ESP + 0x6c]                ; 004b3e8d
    PUSH EAX                            ; 004b3e91
    MOV EAX,dword ptr [ESI]             ; 004b3e92 | DAT_01bc120c
    ADD EAX,0x30                        ; 004b3e94
    PUSH EAX                            ; 004b3e97
    CALL engine_special.cpp_FUN_00580173 ; 004b3e98
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b3e9d
    LEA EBX,[ESP + 0x78]                ; 004b3ea0
    MOV DL,byte ptr [ESP + 0x43]        ; 004b3ea4
    LEA EAX,[ESP + 0x3c]                ; 004b3ea8
    XOR DL,0x80                         ; 004b3eac
    MOV ESI,dword ptr [0x00612560]      ; 004b3eaf | DAT_00612560
    MOV byte ptr [ESP + 0x43],DL        ; 004b3eb5
    FLD float ptr [EAX]                 ; 004b3eb9
    FMUL float ptr [0x005fff94]         ; 004b3ebb | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b3ec1
    FLD float ptr [EAX + 0x4]           ; 004b3ec3
    FMUL float ptr [0x005fff94]         ; 004b3ec6 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b3ecc
    FLD float ptr [EAX + 0x8]           ; 004b3ecf
    FMUL float ptr [0x005fff94]         ; 004b3ed2 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b3ed8
    LEA EAX,[ESP + 0x78]                ; 004b3edb
    PUSH EAX                            ; 004b3edf
    MOV EAX,dword ptr [ESI]             ; 004b3ee0 | DAT_01bc120c
    ADD EAX,0x60                        ; 004b3ee2
    PUSH EAX                            ; 004b3ee5
    CALL engine_special.cpp_FUN_00580173 ; 004b3ee6
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b3eeb
    LEA EBX,[ESP + 0x30]                ; 004b3eee
    MOV DH,byte ptr [ESP + 0x3f]        ; 004b3ef2
    LEA EAX,[ESP + 0x3c]                ; 004b3ef6
    XOR DH,0x80                         ; 004b3efa
    MOV ESI,dword ptr [0x00612560]      ; 004b3efd | DAT_00612560
    MOV byte ptr [ESP + 0x3f],DH        ; 004b3f03
    FLD float ptr [EAX]                 ; 004b3f07
    FMUL float ptr [0x005fff94]         ; 004b3f09 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b3f0f
    FLD float ptr [EAX + 0x4]           ; 004b3f11
    FMUL float ptr [0x005fff94]         ; 004b3f14 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b3f1a
    FLD float ptr [EAX + 0x8]           ; 004b3f1d
    FMUL float ptr [0x005fff94]         ; 004b3f20 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b3f26
    LEA EAX,[ESP + 0x30]                ; 004b3f29
    PUSH EAX                            ; 004b3f2d
    MOV EAX,dword ptr [ESI]             ; 004b3f2e | DAT_01bc120c
    ADD EAX,0x90                        ; 004b3f30
    PUSH EAX                            ; 004b3f35
    CALL engine_special.cpp_FUN_00580173 ; 004b3f36
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x80000                     ; 004b3f3b
    MOV EBX,0xf80000                    ; 004b3f40
    LEA EAX,[ESP + 0x10]                ; 004b3f45
    MOV EDX,dword ptr [0x00612560]      ; 004b3f49 | DAT_00612560
    ADD ESP,0x8                         ; 004b3f4f
    MOV dword ptr [0x0062902c],ECX      ; 004b3f52 | DAT_0062902c
    MOV dword ptr [0x00629030],EBX      ; 004b3f58 | DAT_00629030
    MOV dword ptr [0x0062905c],EBX      ; 004b3f5e | DAT_0062905c
    MOV dword ptr [0x00629060],EBX      ; 004b3f64 | DAT_00629060
    MOV dword ptr [0x0062908c],EBX      ; 004b3f6a | DAT_0062908c
    MOV dword ptr [0x00629090],ECX      ; 004b3f70 | DAT_00629090
    MOV dword ptr [0x006290bc],ECX      ; 004b3f76 | DAT_006290bc
    PUSH EAX                            ; 004b3f7c
    MOV dword ptr [0x006290c0],ECX      ; 004b3f7d | DAT_006290c0
    MOV EBX,0xffff                      ; 004b3f83
    PUSH EDX                            ; 004b3f88 | DAT_01bc120c
    MOV dword ptr [0x00629034],EBX      ; 004b3f89 | DAT_00629034
    MOV dword ptr [0x00629038],EBX      ; 004b3f8f | DAT_00629038
    MOV dword ptr [0x0062903c],EBX      ; 004b3f95 | DAT_0062903c
    MOV dword ptr [0x00629064],EBX      ; 004b3f9b | DAT_00629064
    MOV dword ptr [0x00629068],EBX      ; 004b3fa1 | DAT_00629068
    MOV dword ptr [0x0062906c],EBX      ; 004b3fa7 | DAT_0062906c
    MOV dword ptr [0x00629094],EBX      ; 004b3fad | DAT_00629094
    MOV dword ptr [0x00629098],EBX      ; 004b3fb3 | DAT_00629098
    MOV dword ptr [0x0062909c],EBX      ; 004b3fb9 | DAT_0062909c
    MOV dword ptr [0x006290c4],EBX      ; 004b3fbf | DAT_006290c4
    MOV dword ptr [0x006290c8],EBX      ; 004b3fc5 | DAT_006290c8
    MOV dword ptr [0x006290cc],EBX      ; 004b3fcb | DAT_006290cc
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 004b3fd1
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004b3fd6
    MOV ECX,dword ptr [0x00612560]      ; 004b3fd9 | DAT_00612560
    PUSH ECX                            ; 004b3fdf | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004b3fe0
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004b3fe5
    PUSH EBP                            ; 004b3fe8
    MOV EBX,dword ptr [0x00612560]      ; 004b3fe9 | DAT_00612560
    PUSH EBX                            ; 004b3fef | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b3ff0
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b3ff5
    POP ESI                             ; 004b3ff8
    POP EDI                             ; 004b3ff9
    ADD ESP,0x7c                        ; 004b3ffa
    POP EBP                             ; 004b3ffd
    POP EBX                             ; 004b3ffe
    RET                                 ; 004b3fff

