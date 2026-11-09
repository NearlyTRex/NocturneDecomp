; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004af9f0(CVector3f *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fff94
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_0062905c
;   undefined4 DAT_00629060
;   undefined4 DAT_0062908c
;   undefined4 DAT_00629090
;   undefined4 DAT_01bc120c
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_00552a70
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_matrix.c_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af9f0
        ;   Label: core_fire.cpp_FUN_004af9f0
    PUSH ESI                            ; 004af9f1
    PUSH EDI                            ; 004af9f2
    PUSH EBP                            ; 004af9f3
    SUB ESP,0x58                        ; 004af9f4
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004af9f7
    PUSH ESI                            ; 004af9fb
    MOV EDX,dword ptr [0x00612560]      ; 004af9fc | DAT_00612560
    PUSH EDX                            ; 004afa02 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004afa03
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004afa08
    PUSH 0x0                            ; 004afa0b
    LEA EAX,[ESI + 0x5c]                ; 004afa0d
    PUSH EAX                            ; 004afa10
    MOV ECX,dword ptr [0x00612560]      ; 004afa11 | DAT_00612560
    PUSH ECX                            ; 004afa17 | DAT_01bc120c
    LEA EBX,[ESP + 0x4c]                ; 004afa18
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004afa1c
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004afa21
    LEA EAX,[ESI + 0x80]                ; 004afa24
    MOV EDX,dword ptr [0x00612560]      ; 004afa2a | DAT_00612560
    FLD float ptr [EAX]                 ; 004afa30
    FMUL float ptr [0x005fff94]         ; 004afa32 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004afa38
    FLD float ptr [EAX + 0x4]           ; 004afa3a
    FMUL float ptr [0x005fff94]         ; 004afa3d | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004afa43
    FLD float ptr [EAX + 0x8]           ; 004afa46
    FMUL float ptr [0x005fff94]         ; 004afa49 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004afa4f
    LEA EAX,[ESP + 0x40]                ; 004afa52
    PUSH EAX                            ; 004afa56
    MOV EAX,dword ptr [EDX]             ; 004afa57 | DAT_01bc120c
    PUSH EAX                            ; 004afa59
    CALL engine_special.cpp_FUN_00580173 ; 004afa5a
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x54]                ; 004afa5f
    ADD ESP,0x8                         ; 004afa63
    LEA EAX,[ESI + 0x8c]                ; 004afa66
    MOV EDX,dword ptr [0x00612560]      ; 004afa6c | DAT_00612560
    FLD float ptr [EAX]                 ; 004afa72
    FMUL float ptr [0x005fff94]         ; 004afa74 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004afa7a
    FLD float ptr [EAX + 0x4]           ; 004afa7c
    FMUL float ptr [0x005fff94]         ; 004afa7f | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004afa85
    FLD float ptr [EAX + 0x8]           ; 004afa88
    FMUL float ptr [0x005fff94]         ; 004afa8b | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004afa91
    LEA EAX,[ESP + 0x4c]                ; 004afa94
    PUSH EAX                            ; 004afa98
    MOV EAX,dword ptr [EDX]             ; 004afa99 | DAT_01bc120c
    ADD EAX,0x30                        ; 004afa9b
    PUSH EAX                            ; 004afa9e
    CALL engine_special.cpp_FUN_00580173 ; 004afa9f
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x3c]                ; 004afaa4
    ADD ESP,0x8                         ; 004afaa8
    LEA EAX,[ESI + 0x98]                ; 004afaab
    MOV EDX,dword ptr [0x00612560]      ; 004afab1 | DAT_00612560
    FLD float ptr [EAX]                 ; 004afab7
    FMUL float ptr [0x005fff94]         ; 004afab9 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004afabf
    FLD float ptr [EAX + 0x4]           ; 004afac1
    FMUL float ptr [0x005fff94]         ; 004afac4 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004afaca
    FLD float ptr [EAX + 0x8]           ; 004afacd
    FMUL float ptr [0x005fff94]         ; 004afad0 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004afad6
    LEA EAX,[ESP + 0x34]                ; 004afad9
    PUSH EAX                            ; 004afadd
    MOV EAX,dword ptr [EDX]             ; 004afade | DAT_01bc120c
    ADD EAX,0x60                        ; 004afae0
    PUSH EAX                            ; 004afae3
    CALL engine_special.cpp_FUN_00580173 ; 004afae4
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004afae9
    LEA EAX,[ESI + 0x44]                ; 004afaec
    PUSH EAX                            ; 004afaef
    MOV EBX,dword ptr [0x00612560]      ; 004afaf0 | DAT_00612560
    PUSH EBX                            ; 004afaf6 | DAT_01bc120c
    MOV EDI,0x3                         ; 004afaf7
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004afafc
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004afb01
    XOR EBP,EBP                         ; 004afb04
    MOV dword ptr [ESP + 0x4],EDI       ; 004afb06
    MOV dword ptr [ESP + 0x14],EBP      ; 004afb0a
    MOV dword ptr [ESP + 0x10],EBP      ; 004afb0e
    MOV dword ptr [ESP + 0xc],EBP       ; 004afb12
    MOV dword ptr [ESP + 0x8],EBP       ; 004afb16
    MOV dword ptr [ESP + 0x18],EBP      ; 004afb1a
    MOV EDI,0x1                         ; 004afb1e
    MOV EBP,0x2                         ; 004afb23
    MOV dword ptr [ESP + 0x1c],EDI      ; 004afb28
    MOV dword ptr [ESP + 0x20],EBP      ; 004afb2c
    MOV EAX,dword ptr [ESI + 0x40]      ; 004afb30
    PUSH EAX                            ; 004afb33
    MOV EDX,dword ptr [0x00612560]      ; 004afb34 | DAT_00612560
    PUSH EDX                            ; 004afb3a | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004afb3b
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004afb40
    LEA EBX,[ESP + 0x28]                ; 004afb43
    MOV EAX,ESI                         ; 004afb47
    FLD float ptr [EAX]                 ; 004afb49
    FMUL float ptr [0x005fff94]         ; 004afb4b | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004afb51
    FLD float ptr [EAX + 0x4]           ; 004afb53
    FMUL float ptr [0x005fff94]         ; 004afb56 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004afb5c
    FLD float ptr [EAX + 0x8]           ; 004afb5f
    FMUL float ptr [0x005fff94]         ; 004afb62 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004afb68
    PUSH 0x3                            ; 004afb6b
    PUSH 0x0                            ; 004afb6d
    PUSH 0x0                            ; 004afb6f
    LEA EAX,[ESP + 0x34]                ; 004afb71
    PUSH EAX                            ; 004afb75
    MOV ECX,dword ptr [0x00622c18]      ; 004afb76 | g_CDemonSetPtr
    PUSH ECX                            ; 004afb7c | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00552a70 ; 004afb7d
        ;   XREF to: 00552a70 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00552a70(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    MOV EAX,dword ptr [ESI + 0x68]      ; 004afb82
    MOV [0x0062902c],EAX                ; 004afb85 | DAT_0062902c
    MOV EAX,dword ptr [ESI + 0x74]      ; 004afb8a
    MOV [0x00629030],EAX                ; 004afb8d | DAT_00629030
    MOV EAX,dword ptr [ESI + 0x6c]      ; 004afb92
    MOV EBX,dword ptr [0x00612560]      ; 004afb95 | DAT_00612560
    MOV [0x0062905c],EAX                ; 004afb9b | DAT_0062905c
    MOV EAX,dword ptr [ESI + 0x78]      ; 004afba0
    ADD ESP,0x14                        ; 004afba3
    MOV [0x00629060],EAX                ; 004afba6 | DAT_00629060
    MOV EAX,dword ptr [ESI + 0x70]      ; 004afbab
    PUSH 0x0                            ; 004afbae
    MOV [0x0062908c],EAX                ; 004afbb0 | DAT_0062908c
    MOV EAX,dword ptr [ESI + 0x7c]      ; 004afbb5
    PUSH EBX                            ; 004afbb8 | DAT_01bc120c
    MOV [0x00629090],EAX                ; 004afbb9 | DAT_00629090
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004afbbe
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004afbc3
    MOV EAX,ESP                         ; 004afbc6
    PUSH EAX                            ; 004afbc8
    MOV ESI,dword ptr [0x00612560]      ; 004afbc9 | DAT_00612560
    PUSH ESI                            ; 004afbcf | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 004afbd0
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004afbd5
    MOV EDI,dword ptr [0x00612560]      ; 004afbd8 | DAT_00612560
    PUSH EDI                            ; 004afbde | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004afbdf
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004afbe4
    ADD ESP,0x58                        ; 004afbe7
    POP EBP                             ; 004afbea
    POP EDI                             ; 004afbeb
    POP ESI                             ; 004afbec
    POP EBX                             ; 004afbed
    RET                                 ; 004afbee

