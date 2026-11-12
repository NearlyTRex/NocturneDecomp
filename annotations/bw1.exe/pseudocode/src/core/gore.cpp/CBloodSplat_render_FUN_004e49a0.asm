; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004e49a0(CBloodSplat *this_ptr,int expire_flag)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   expire_flag
; Local Variables:
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
;   core_gore.cpp_CGore_renderDecals_FUN_004e5cd0 at 004e5d1f
;
; Referenced Globals:
;   undefined4 DAT_005e403d
;   undefined4 DAT_005e4045
;   undefined4 DAT_006016a8
;   undefined4 DAT_00612560
;   undefined4 DAT_0061dccc
;   undefined4 DAT_0061dd2c
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_00629064
;   undefined4 DAT_00629068
;   undefined4 DAT_0062906c
;   undefined4 DAT_00629094
;   undefined4 DAT_00629098
;   undefined4 DAT_0062909c
;   ... and 8 more
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
;   engine_drender.cpp_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e49a0
        ;   Label: core_gore.cpp_CBloodSplat_render_FUN_004e49a0
    PUSH ESI                            ; 004e49a1
    PUSH EDI                            ; 004e49a2
    PUSH EBP                            ; 004e49a3
    SUB ESP,0x7c                        ; 004e49a4
    MOV ESI,dword ptr [ESP + 0x90]      ; 004e49a7
    MOV EBX,dword ptr [ESP + 0x94]      ; 004e49ae
    FLD float ptr [ESI + 0x24]          ; 004e49b5
    FMUL double ptr [0x005e403d]        ; 004e49b8 | DAT_005e403d
    FADD double ptr [0x005e4045]        ; 004e49be | DAT_005e4045
    CALL crt_math.c_round_FUN_005c03a0  ; 004e49c4
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x78]        ; 004e49c9
    MOV EDX,dword ptr [ESP + 0x78]      ; 004e49cd
    TEST EDX,EDX                        ; 004e49d1
    JL 0x004e4ca8                       ; 004e49d3
        ;   XREF to: 004e4ca8 (CONDITIONAL_JUMP)  ; LAB_004e4ca8
    CMP EDX,0xf                         ; 004e49d9
    JLE 0x004e49f0                      ; 004e49dc
        ;   XREF to: 004e49f0 (CONDITIONAL_JUMP)  ; LAB_004e49f0
    MOV dword ptr [ESP + 0x78],0xf      ; 004e49de
    TEST EBX,EBX                        ; 004e49e6
    JZ 0x004e49f0                       ; 004e49e8
        ;   XREF to: 004e49f0 (CONDITIONAL_JUMP)  ; LAB_004e49f0
    MOV dword ptr [ESI],0x1             ; 004e49ea
    LEA EAX,[ESI + 0x4]                 ; 004e49f0
        ;   Label: LAB_004e49f0
    PUSH EAX                            ; 004e49f3
    MOV EAX,[0x00612560]                ; 004e49f4 | DAT_00612560
    PUSH EAX                            ; 004e49f9 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004e49fa
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EDX,dword ptr [ESI + 0x10]      ; 004e49ff
    ADD ESP,0x8                         ; 004e4a02
    CMP EDX,0x1                         ; 004e4a05
    JNZ 0x004e4cb3                      ; 004e4a08
        ;   XREF to: 004e4cb3 (CONDITIONAL_JUMP)  ; LAB_004e4cb3
    XOR EDX,EDX                         ; 004e4a0e
    MOV EBX,0xffff                      ; 004e4a10
    MOV dword ptr [0x01cd0e48],EDX      ; 004e4a15 | DAT_01cd0e48
    MOV dword ptr [0x01cd0e50],EBX      ; 004e4a1b | DAT_01cd0e50
    MOV EBX,dword ptr [ESI + 0x28]      ; 004e4a21
    MOV dword ptr [0x01cd0e4c],EDX      ; 004e4a24 | DAT_01cd0e4c
    LEA EAX,[EBX*0x4 + 0x0]             ; 004e4a2a
    MOV dword ptr [0x01cd0e54],EDX      ; 004e4a31 | DAT_01cd0e54
    SUB EAX,EBX                         ; 004e4a37
    MOV EDX,0x61dd2c                    ; 004e4a39 | DAT_0061dd2c
    SHL EAX,0x7                         ; 004e4a3e
    MOV EBX,dword ptr [ESP + 0x78]      ; 004e4a41
    ADD EDX,EAX                         ; 004e4a45
    LEA EAX,[EBX*0x4 + 0x0]             ; 004e4a47
    SUB EAX,EBX                         ; 004e4a4e
    SHL EAX,0x3                         ; 004e4a50
    ADD EAX,EDX                         ; 004e4a53
    PUSH EAX                            ; 004e4a55
    MOV EBP,dword ptr [0x00612560]      ; 004e4a56 | DAT_00612560
    PUSH EBP                            ; 004e4a5c | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e4a5d
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004e4a62
    XOR EDI,EDI                         ; 004e4a65
    PUSH EDI                            ; 004e4a67
    LEA EAX,[ESI + 0x18]                ; 004e4a68
    PUSH EAX                            ; 004e4a6b
    MOV EAX,[0x00612560]                ; 004e4a6c | DAT_00612560
    PUSH EAX                            ; 004e4a71 | DAT_01bc120c
    XOR EBX,EBX                         ; 004e4a72
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004e4a74
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    MOV EDX,0xbf000000                  ; 004e4a79
    ADD ESP,0xc                         ; 004e4a7e
    LEA EAX,[ESP + 0x18]                ; 004e4a81
    MOV dword ptr [ESP + 0x18],EDX      ; 004e4a85
    MOV dword ptr [ESP + 0x1c],EDX      ; 004e4a89
    MOV dword ptr [ESP + 0x20],EBX      ; 004e4a8d
    LEA EBX,[ESP + 0x24]                ; 004e4a91
    MOV EDX,dword ptr [0x00612560]      ; 004e4a95 | DAT_00612560
    FLD float ptr [EAX]                 ; 004e4a9b
    FMUL float ptr [0x006016a8]         ; 004e4a9d | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e4aa3
    FLD float ptr [EAX + 0x4]           ; 004e4aa5
    FMUL float ptr [0x006016a8]         ; 004e4aa8 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e4aae
    FLD float ptr [EAX + 0x8]           ; 004e4ab1
    FMUL float ptr [0x006016a8]         ; 004e4ab4 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e4aba
    LEA EAX,[ESP + 0x24]                ; 004e4abd
    PUSH EAX                            ; 004e4ac1
    MOV EAX,dword ptr [EDX]             ; 004e4ac2 | DAT_01bc120c
    PUSH EAX                            ; 004e4ac4
    MOV EBP,0xbf000000                  ; 004e4ac5
    MOV EDI,0x3f000000                  ; 004e4aca
    CALL engine_special.cpp_FUN_00580173 ; 004e4acf
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x44]                ; 004e4ad4
    MOV EDX,dword ptr [0x00612560]      ; 004e4ad8 | DAT_00612560
    ADD ESP,0x8                         ; 004e4ade
    XOR EAX,EAX                         ; 004e4ae1
    MOV dword ptr [ESP + 0x18],EDI      ; 004e4ae3
    MOV dword ptr [ESP + 0x20],EAX      ; 004e4ae7
    LEA EAX,[ESP + 0x18]                ; 004e4aeb
    MOV dword ptr [ESP + 0x1c],EBP      ; 004e4aef
    FLD float ptr [EAX]                 ; 004e4af3
    FMUL float ptr [0x006016a8]         ; 004e4af5 | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e4afb
    FLD float ptr [EAX + 0x4]           ; 004e4afd
    FMUL float ptr [0x006016a8]         ; 004e4b00 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e4b06
    FLD float ptr [EAX + 0x8]           ; 004e4b09
    FMUL float ptr [0x006016a8]         ; 004e4b0c | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e4b12
    LEA EAX,[ESP + 0x3c]                ; 004e4b15
    PUSH EAX                            ; 004e4b19
    MOV EAX,dword ptr [EDX]             ; 004e4b1a | DAT_01bc120c
    ADD EAX,0x30                        ; 004e4b1c
    PUSH EAX                            ; 004e4b1f
    CALL engine_special.cpp_FUN_00580173 ; 004e4b20
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    LEA EAX,[ESP + 0x20]                ; 004e4b25
    MOV EDX,dword ptr [0x00612560]      ; 004e4b29 | DAT_00612560
    ADD ESP,0x8                         ; 004e4b2f
    XOR EBX,EBX                         ; 004e4b32
    MOV dword ptr [ESP + 0x18],EDI      ; 004e4b34
    MOV dword ptr [ESP + 0x20],EBX      ; 004e4b38
    LEA EBX,[ESP + 0x54]                ; 004e4b3c
    MOV dword ptr [ESP + 0x1c],EDI      ; 004e4b40
    FLD float ptr [EAX]                 ; 004e4b44
    FMUL float ptr [0x006016a8]         ; 004e4b46 | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e4b4c
    FLD float ptr [EAX + 0x4]           ; 004e4b4e
    FMUL float ptr [0x006016a8]         ; 004e4b51 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e4b57
    FLD float ptr [EAX + 0x8]           ; 004e4b5a
    FMUL float ptr [0x006016a8]         ; 004e4b5d | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e4b63
    LEA EAX,[ESP + 0x54]                ; 004e4b66
    PUSH EAX                            ; 004e4b6a
    MOV EAX,dword ptr [EDX]             ; 004e4b6b | DAT_01bc120c
    ADD EAX,0x60                        ; 004e4b6d
    PUSH EAX                            ; 004e4b70
    CALL engine_special.cpp_FUN_00580173 ; 004e4b71
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x14]                ; 004e4b76
    MOV EDX,dword ptr [0x00612560]      ; 004e4b7a | DAT_00612560
    ADD ESP,0x8                         ; 004e4b80
    XOR EAX,EAX                         ; 004e4b83
    MOV dword ptr [ESP + 0x18],EBP      ; 004e4b85
    MOV dword ptr [ESP + 0x20],EAX      ; 004e4b89
    LEA EAX,[ESP + 0x18]                ; 004e4b8d
    MOV dword ptr [ESP + 0x1c],EDI      ; 004e4b91
    FLD float ptr [EAX]                 ; 004e4b95
    FMUL float ptr [0x006016a8]         ; 004e4b97 | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e4b9d
    FLD float ptr [EAX + 0x4]           ; 004e4b9f
    FMUL float ptr [0x006016a8]         ; 004e4ba2 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e4ba8
    FLD float ptr [EAX + 0x8]           ; 004e4bab
    FMUL float ptr [0x006016a8]         ; 004e4bae | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e4bb4
    LEA EAX,[ESP + 0xc]                 ; 004e4bb7
    PUSH EAX                            ; 004e4bbb
        ;   Label: LAB_004e4bbb
    MOV EAX,dword ptr [EDX]             ; 004e4bbc | DAT_01bc120c
    ADD EAX,0x90                        ; 004e4bbe
    PUSH EAX                            ; 004e4bc3
    CALL engine_special.cpp_FUN_00580173 ; 004e4bc4
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004e4bc9
    MOV EBX,0x629034                    ; 004e4bcc | DAT_00629034
    MOV EDX,0x629038                    ; 004e4bd1 | DAT_00629038
    MOV EAX,dword ptr [ESI + 0x14]      ; 004e4bd6
    MOV ECX,0x62903c                    ; 004e4bd9 | DAT_0062903c
    CMP EAX,0x1                         ; 004e4bde
    JNC 0x004e4e81                      ; 004e4be1
        ;   XREF to: 004e4e81 (CONDITIONAL_JUMP)  ; LAB_004e4e81
    MOV dword ptr [EBX],0x2000          ; 004e4be7 | DAT_00629034
        ;   Label: LAB_004e4be7
    MOV dword ptr [EDX],0x0             ; 004e4bed | DAT_00629038
    MOV dword ptr [ECX],0x0             ; 004e4bf3 | DAT_0062903c
    MOV ECX,0x629064                    ; 004e4bf9 | DAT_00629064
        ;   Label: LAB_004e4bf9
    MOV EBX,0x629068                    ; 004e4bfe | DAT_00629068
    MOV EAX,dword ptr [ESI + 0x14]      ; 004e4c03
    MOV EDX,0x62906c                    ; 004e4c06 | DAT_0062906c
    CMP EAX,0x1                         ; 004e4c0b
    JNC 0x004e4ec4                      ; 004e4c0e
        ;   XREF to: 004e4ec4 (CONDITIONAL_JUMP)  ; LAB_004e4ec4
    MOV dword ptr [ECX],0x2000          ; 004e4c14 | DAT_00629064
        ;   Label: LAB_004e4c14
    MOV dword ptr [EBX],0x0             ; 004e4c1a | DAT_00629068
    MOV dword ptr [EDX],0x0             ; 004e4c20 | DAT_0062906c
    MOV EDX,0x629094                    ; 004e4c26 | DAT_00629094
        ;   Label: LAB_004e4c26
    MOV ECX,0x629098                    ; 004e4c2b | DAT_00629098
    MOV EAX,dword ptr [ESI + 0x14]      ; 004e4c30
    MOV EBX,0x62909c                    ; 004e4c33 | DAT_0062909c
    CMP EAX,0x1                         ; 004e4c38
    JNC 0x004e4f07                      ; 004e4c3b
        ;   XREF to: 004e4f07 (CONDITIONAL_JUMP)  ; LAB_004e4f07
    MOV dword ptr [EDX],0x2000          ; 004e4c41 | DAT_00629094
        ;   Label: LAB_004e4c41
    MOV dword ptr [ECX],0x0             ; 004e4c47 | DAT_00629098
    MOV dword ptr [EBX],0x0             ; 004e4c4d | DAT_0062909c
    MOV EBX,0x6290c4                    ; 004e4c53 | DAT_006290c4
        ;   Label: LAB_004e4c53
    MOV ECX,0x6290c8                    ; 004e4c58 | DAT_006290c8
    MOV EAX,dword ptr [ESI + 0x14]      ; 004e4c5d
    MOV EDX,0x6290cc                    ; 004e4c60 | DAT_006290cc
    CMP EAX,0x1                         ; 004e4c65
    JNC 0x004e4f4a                      ; 004e4c68
        ;   XREF to: 004e4f4a (CONDITIONAL_JUMP)  ; LAB_004e4f4a
    MOV dword ptr [EBX],0x2000          ; 004e4c6e | DAT_006290c4
        ;   Label: LAB_004e4c6e
    MOV dword ptr [ECX],0x0             ; 004e4c74 | DAT_006290c8
    MOV dword ptr [EDX],0x0             ; 004e4c7a | DAT_006290cc
    PUSH 0x1cd0e40                      ; 004e4c80
        ;   Label: LAB_004e4c80
    MOV EDX,dword ptr [0x00612560]      ; 004e4c85 | DAT_00612560
    PUSH EDX                            ; 004e4c8b | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 004e4c8c
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV ECX,dword ptr [ESI + 0x10]      ; 004e4c91
    ADD ESP,0x8                         ; 004e4c94
    CMP ECX,0x1                         ; 004e4c97
    JZ 0x004e4f56                       ; 004e4c9a
        ;   XREF to: 004e4f56 (CONDITIONAL_JUMP)  ; LAB_004e4f56
    ADD ESP,0x7c                        ; 004e4ca0
    POP EBP                             ; 004e4ca3
    POP EDI                             ; 004e4ca4
    POP ESI                             ; 004e4ca5
    POP EBX                             ; 004e4ca6
    RET                                 ; 004e4ca7
    XOR EBP,EBP                         ; 004e4ca8
        ;   Label: LAB_004e4ca8
    MOV dword ptr [ESP + 0x78],EBP      ; 004e4caa
    JMP 0x004e49f0                      ; 004e4cae
        ;   XREF to: 004e49f0 (UNCONDITIONAL_JUMP)  ; LAB_004e49f0
    TEST EBX,EBX                        ; 004e4cb3
        ;   Label: LAB_004e4cb3
    JZ 0x004e4cbd                       ; 004e4cb5
        ;   XREF to: 004e4cbd (CONDITIONAL_JUMP)  ; LAB_004e4cbd
    MOV dword ptr [ESI],0x1             ; 004e4cb7
    MOV dword ptr [0x01cd0e4c],0xffff   ; 004e4cbd | DAT_01cd0e4c
        ;   Label: LAB_004e4cbd
    MOV EBX,dword ptr [ESI + 0x28]      ; 004e4cc7
    LEA EAX,[EBX*0x4 + 0x0]             ; 004e4cca
    SUB EAX,EBX                         ; 004e4cd1
    XOR ECX,ECX                         ; 004e4cd3
    SHL EAX,0x3                         ; 004e4cd5
    XOR EDI,EDI                         ; 004e4cd8
    ADD EAX,0x61dccc                    ; 004e4cda | DAT_0061dccc
    MOV dword ptr [0x01cd0e48],ECX      ; 004e4cdf | DAT_01cd0e48
    PUSH EAX                            ; 004e4ce5
    MOV EAX,[0x00612560]                ; 004e4ce6 | DAT_00612560
    MOV dword ptr [0x01cd0e50],ECX      ; 004e4ceb | DAT_01cd0e50
    PUSH EAX                            ; 004e4cf1 | DAT_01bc120c
    MOV dword ptr [0x01cd0e54],ECX      ; 004e4cf2 | DAT_01cd0e54
    LEA EBX,[ESP + 0x74]                ; 004e4cf8
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e4cfc
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EDX,0xbf000000                  ; 004e4d01
    ADD ESP,0x8                         ; 004e4d06
    LEA EAX,[ESP + 0x48]                ; 004e4d09
    MOV dword ptr [ESP + 0x48],EDX      ; 004e4d0d
    MOV dword ptr [ESP + 0x4c],EDI      ; 004e4d11
    MOV dword ptr [ESP + 0x50],EDX      ; 004e4d15
    MOV EDX,dword ptr [0x00612560]      ; 004e4d19 | DAT_00612560
    FLD float ptr [EAX]                 ; 004e4d1f
    FMUL float ptr [0x006016a8]         ; 004e4d21 | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e4d27
    FLD float ptr [EAX + 0x4]           ; 004e4d29
    FMUL float ptr [0x006016a8]         ; 004e4d2c | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e4d32
    FLD float ptr [EAX + 0x8]           ; 004e4d35
    FMUL float ptr [0x006016a8]         ; 004e4d38 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e4d3e
    LEA EAX,[ESP + 0x6c]                ; 004e4d41
    PUSH EAX                            ; 004e4d45
    MOV EAX,dword ptr [EDX]             ; 004e4d46 | DAT_01bc120c
    PUSH EAX                            ; 004e4d48
    XOR EBP,EBP                         ; 004e4d49
    MOV EDI,0x3f000000                  ; 004e4d4b
    CALL engine_special.cpp_FUN_00580173 ; 004e4d50
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0xbf000000                  ; 004e4d55
    LEA EBX,[ESP + 0x8]                 ; 004e4d5a
    ADD ESP,0x8                         ; 004e4d5e
    MOV EDX,dword ptr [0x00612560]      ; 004e4d61 | DAT_00612560
    MOV dword ptr [ESP + 0x48],EDI      ; 004e4d67
    MOV dword ptr [ESP + 0x50],EAX      ; 004e4d6b
    LEA EAX,[ESP + 0x48]                ; 004e4d6f
    MOV dword ptr [ESP + 0x4c],EBP      ; 004e4d73
    FLD float ptr [EAX]                 ; 004e4d77
    FMUL float ptr [0x006016a8]         ; 004e4d79 | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e4d7f
    FLD float ptr [EAX + 0x4]           ; 004e4d81
    FMUL float ptr [0x006016a8]         ; 004e4d84 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e4d8a
    FLD float ptr [EAX + 0x8]           ; 004e4d8d
    FMUL float ptr [0x006016a8]         ; 004e4d90 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e4d96
    MOV EAX,ESP                         ; 004e4d99
    PUSH EAX                            ; 004e4d9b
    MOV EAX,dword ptr [EDX]             ; 004e4d9c | DAT_01bc120c
    ADD EAX,0x30                        ; 004e4d9e
    PUSH EAX                            ; 004e4da1
    CALL engine_special.cpp_FUN_00580173 ; 004e4da2
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x38]                ; 004e4da7
    LEA EAX,[ESP + 0x50]                ; 004e4dab
    MOV EDX,dword ptr [0x00612560]      ; 004e4daf | DAT_00612560
    ADD ESP,0x8                         ; 004e4db5
    XOR ECX,ECX                         ; 004e4db8
    MOV dword ptr [ESP + 0x48],EDI      ; 004e4dba
    MOV dword ptr [ESP + 0x4c],ECX      ; 004e4dbe
    MOV dword ptr [ESP + 0x50],EDI      ; 004e4dc2
    FLD float ptr [EAX]                 ; 004e4dc6
    FMUL float ptr [0x006016a8]         ; 004e4dc8 | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e4dce
    FLD float ptr [EAX + 0x4]           ; 004e4dd0
    FMUL float ptr [0x006016a8]         ; 004e4dd3 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e4dd9
    FLD float ptr [EAX + 0x8]           ; 004e4ddc
    FMUL float ptr [0x006016a8]         ; 004e4ddf | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e4de5
    LEA EAX,[ESP + 0x30]                ; 004e4de8
    PUSH EAX                            ; 004e4dec
    MOV EAX,dword ptr [EDX]             ; 004e4ded | DAT_01bc120c
    ADD EAX,0x60                        ; 004e4def
    PUSH EAX                            ; 004e4df2
    MOV EDI,0xbf000000                  ; 004e4df3
    CALL engine_special.cpp_FUN_00580173 ; 004e4df8
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3f000000                  ; 004e4dfd
    LEA EBX,[ESP + 0x68]                ; 004e4e02
    ADD ESP,0x8                         ; 004e4e06
    MOV EDX,dword ptr [0x00612560]      ; 004e4e09 | DAT_00612560
    MOV dword ptr [ESP + 0x48],EDI      ; 004e4e0f
    MOV dword ptr [ESP + 0x50],EAX      ; 004e4e13
    LEA EAX,[ESP + 0x48]                ; 004e4e17
    MOV dword ptr [ESP + 0x4c],EBP      ; 004e4e1b
    FLD float ptr [EAX]                 ; 004e4e1f
    FMUL float ptr [0x006016a8]         ; 004e4e21 | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e4e27
    FLD float ptr [EAX + 0x4]           ; 004e4e29
    FMUL float ptr [0x006016a8]         ; 004e4e2c | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e4e32
    FLD float ptr [EAX + 0x8]           ; 004e4e35
    FMUL float ptr [0x006016a8]         ; 004e4e38 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e4e3e
    LEA EAX,[ESP + 0x60]                ; 004e4e41
    JMP 0x004e4bbb                      ; 004e4e45
        ;   XREF to: 004e4bbb (UNCONDITIONAL_JUMP)  ; LAB_004e4bbb
    MOV EBP,0x7f80                      ; 004e4e4a
        ;   Label: LAB_004e4e4a
    XOR EDI,EDI                         ; 004e4e4f
    MOV dword ptr [0x00629038],EBP      ; 004e4e51 | DAT_00629038
    MOV dword ptr [0x0062903c],EDI      ; 004e4e57 | DAT_0062903c
    MOV dword ptr [0x00629034],EDI      ; 004e4e5d | DAT_00629034
    JMP 0x004e4bf9                      ; 004e4e63
        ;   XREF to: 004e4bf9 (UNCONDITIONAL_JUMP)  ; LAB_004e4bf9
    XOR EDX,EDX                         ; 004e4e68
        ;   Label: LAB_004e4e68
    MOV dword ptr [0x00629038],EDX      ; 004e4e6a | DAT_00629038
    MOV dword ptr [0x0062903c],EDX      ; 004e4e70 | DAT_0062903c
    MOV dword ptr [0x00629034],EDX      ; 004e4e76 | DAT_00629034
    JMP 0x004e4bf9                      ; 004e4e7c
        ;   XREF to: 004e4bf9 (UNCONDITIONAL_JUMP)  ; LAB_004e4bf9
    JBE 0x004e4e4a                      ; 004e4e81
        ;   XREF to: 004e4e4a (CONDITIONAL_JUMP)  ; LAB_004e4e4a
        ;   Label: LAB_004e4e81
    CMP EAX,0x2                         ; 004e4e83
    JZ 0x004e4e68                       ; 004e4e86
        ;   XREF to: 004e4e68 (CONDITIONAL_JUMP)  ; LAB_004e4e68
    JMP 0x004e4be7                      ; 004e4e88
        ;   XREF to: 004e4be7 (UNCONDITIONAL_JUMP)  ; LAB_004e4be7
    MOV EBP,0x7f80                      ; 004e4e8d
        ;   Label: LAB_004e4e8d
    XOR EDI,EDI                         ; 004e4e92
    MOV dword ptr [0x00629068],EBP      ; 004e4e94 | DAT_00629068
    MOV dword ptr [0x0062906c],EDI      ; 004e4e9a | DAT_0062906c
    MOV dword ptr [0x00629064],EDI      ; 004e4ea0 | DAT_00629064
    JMP 0x004e4c26                      ; 004e4ea6
        ;   XREF to: 004e4c26 (UNCONDITIONAL_JUMP)  ; LAB_004e4c26
    XOR EDX,EDX                         ; 004e4eab
        ;   Label: LAB_004e4eab
    MOV dword ptr [0x00629068],EDX      ; 004e4ead | DAT_00629068
    MOV dword ptr [0x0062906c],EDX      ; 004e4eb3 | DAT_0062906c
    MOV dword ptr [0x00629064],EDX      ; 004e4eb9 | DAT_00629064
    JMP 0x004e4c26                      ; 004e4ebf
        ;   XREF to: 004e4c26 (UNCONDITIONAL_JUMP)  ; LAB_004e4c26
    JBE 0x004e4e8d                      ; 004e4ec4
        ;   XREF to: 004e4e8d (CONDITIONAL_JUMP)  ; LAB_004e4e8d
        ;   Label: LAB_004e4ec4
    CMP EAX,0x2                         ; 004e4ec6
    JZ 0x004e4eab                       ; 004e4ec9
        ;   XREF to: 004e4eab (CONDITIONAL_JUMP)  ; LAB_004e4eab
    JMP 0x004e4c14                      ; 004e4ecb
        ;   XREF to: 004e4c14 (UNCONDITIONAL_JUMP)  ; LAB_004e4c14
    MOV EBP,0x7f80                      ; 004e4ed0
        ;   Label: LAB_004e4ed0
    XOR EDI,EDI                         ; 004e4ed5
    MOV dword ptr [0x00629098],EBP      ; 004e4ed7 | DAT_00629098
    MOV dword ptr [0x0062909c],EDI      ; 004e4edd | DAT_0062909c
    MOV dword ptr [0x00629094],EDI      ; 004e4ee3 | DAT_00629094
    JMP 0x004e4c53                      ; 004e4ee9
        ;   XREF to: 004e4c53 (UNCONDITIONAL_JUMP)  ; LAB_004e4c53
    XOR EDX,EDX                         ; 004e4eee
        ;   Label: LAB_004e4eee
    MOV dword ptr [0x00629098],EDX      ; 004e4ef0 | DAT_00629098
    MOV dword ptr [0x0062909c],EDX      ; 004e4ef6 | DAT_0062909c
    MOV dword ptr [0x00629094],EDX      ; 004e4efc | DAT_00629094
    JMP 0x004e4c53                      ; 004e4f02
        ;   XREF to: 004e4c53 (UNCONDITIONAL_JUMP)  ; LAB_004e4c53
    JBE 0x004e4ed0                      ; 004e4f07
        ;   XREF to: 004e4ed0 (CONDITIONAL_JUMP)  ; LAB_004e4ed0
        ;   Label: LAB_004e4f07
    CMP EAX,0x2                         ; 004e4f09
    JZ 0x004e4eee                       ; 004e4f0c
        ;   XREF to: 004e4eee (CONDITIONAL_JUMP)  ; LAB_004e4eee
    JMP 0x004e4c41                      ; 004e4f0e
        ;   XREF to: 004e4c41 (UNCONDITIONAL_JUMP)  ; LAB_004e4c41
    MOV EBP,0x7f80                      ; 004e4f13
        ;   Label: LAB_004e4f13
    XOR EDI,EDI                         ; 004e4f18
    MOV dword ptr [0x006290c8],EBP      ; 004e4f1a | DAT_006290c8
    MOV dword ptr [0x006290cc],EDI      ; 004e4f20 | DAT_006290cc
    MOV dword ptr [0x006290c4],EDI      ; 004e4f26 | DAT_006290c4
    JMP 0x004e4c80                      ; 004e4f2c
        ;   XREF to: 004e4c80 (UNCONDITIONAL_JUMP)  ; LAB_004e4c80
    XOR EDX,EDX                         ; 004e4f31
        ;   Label: LAB_004e4f31
    MOV dword ptr [0x006290c8],EDX      ; 004e4f33 | DAT_006290c8
    MOV dword ptr [0x006290cc],EDX      ; 004e4f39 | DAT_006290cc
    MOV dword ptr [0x006290c4],EDX      ; 004e4f3f | DAT_006290c4
    JMP 0x004e4c80                      ; 004e4f45
        ;   XREF to: 004e4c80 (UNCONDITIONAL_JUMP)  ; LAB_004e4c80
    JBE 0x004e4f13                      ; 004e4f4a
        ;   XREF to: 004e4f13 (CONDITIONAL_JUMP)  ; LAB_004e4f13
        ;   Label: LAB_004e4f4a
    CMP EAX,0x2                         ; 004e4f4c
    JZ 0x004e4f31                       ; 004e4f4f
        ;   XREF to: 004e4f31 (CONDITIONAL_JUMP)  ; LAB_004e4f31
    JMP 0x004e4c6e                      ; 004e4f51
        ;   XREF to: 004e4c6e (UNCONDITIONAL_JUMP)  ; LAB_004e4c6e
    MOV EBX,dword ptr [0x00612560]      ; 004e4f56 | DAT_00612560
        ;   Label: LAB_004e4f56
    PUSH EBX                            ; 004e4f5c | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 004e4f5d
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004e4f62
    ADD ESP,0x7c                        ; 004e4f65
    POP EBP                             ; 004e4f68
    POP EDI                             ; 004e4f69
    POP ESI                             ; 004e4f6a
    POP EBX                             ; 004e4f6b
    RET                                 ; 004e4f6c

