; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_FUN_00429b40(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined1       Stack[-0xe8]:1  local_e8
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
; undefined1       Stack[-0x9c]:1  local_9c
; undefined1       Stack[-0x90]:1  local_90
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
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_FUN_00429aa0 at 00429b31
;
; Referenced Globals:
;   TerminatedCString s_headlite_raw_0061709a
;   undefined4 s_eadlite.raw_0061709b
;   undefined4 s_adlite.raw_0061709c
;   undefined4 s_dlite.raw_0061709d
;   double DOUBLE_006170aa = 0.5
;   double DOUBLE_006170b2 = 3.14159265350000
;   double DOUBLE_006170ba = 0.0416666666666667
;   float FLOAT_0065b810 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   undefined4 DAT_00800000
;   undefined4 DAT_00823a78
;   undefined1 DAT_00823a80
;   undefined1 DAT_00823a81
;   undefined1 DAT_00823a82
;   undefined1 DAT_00823a83
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429b40
        ;   Label: core_charactr.cpp_CCharacter_FUN_00429b40
    PUSH ESI                            ; 00429b41
    PUSH EDI                            ; 00429b42
    PUSH EBP                            ; 00429b43
    MOV EBP,ESP                         ; 00429b44
    SUB ESP,0xe4                        ; 00429b46
    AND ESP,0xfffffff8                  ; 00429b4c
    MOV EDX,dword ptr [0x006703ec]      ; 00429b4f | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 00429b55 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00429b56
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00429b5b
    TEST EAX,EAX                        ; 00429b5e
    JZ 0x00429b69                       ; 00429b60
        ;   XREF to: 00429b69 (CONDITIONAL_JUMP)  ; LAB_00429b69
    MOV ESP,EBP                         ; 00429b62
    POP EBP                             ; 00429b64
    POP EDI                             ; 00429b65
    POP ESI                             ; 00429b66
    POP EBX                             ; 00429b67
    RET                                 ; 00429b68
    MOV ESI,0x61709a                    ; 00429b69 | = "headlite.raw"
        ;   Label: LAB_00429b69
    MOV EDI,0x823a80                    ; 00429b6e | DAT_00823a80
    MOV dword ptr [ESP + 0x24],EAX      ; 00429b73
    MOV dword ptr [ESP + 0x20],EAX      ; 00429b77
    MOV dword ptr [ESP + 0x1c],EAX      ; 00429b7b
    MOV dword ptr [ESP + 0x18],EAX      ; 00429b7f
    PUSH EDI                            ; 00429b83 | DAT_00823a80
    MOV AL,byte ptr [ESI]               ; 00429b84 | = "headlite.raw" | s_adlite.raw_0061709c
        ;   Label: LAB_00429b84
    MOV byte ptr [EDI],AL               ; 00429b86 | DAT_00823a80 | DAT_00823a82
    CMP AL,0x0                          ; 00429b88
    JZ 0x00429b9c                       ; 00429b8a
        ;   XREF to: 00429b9c (CONDITIONAL_JUMP)  ; LAB_00429b9c
    MOV AL,byte ptr [ESI + 0x1]         ; 00429b8c | s_eadlite.raw_0061709b | s_dlite.raw_0061709d
    ADD ESI,0x2                         ; 00429b8f
    MOV byte ptr [EDI + 0x1],AL         ; 00429b92 | DAT_00823a81 | DAT_00823a83
    ADD EDI,0x2                         ; 00429b95
    CMP AL,0x0                          ; 00429b98
    JNZ 0x00429b84                      ; 00429b9a
        ;   XREF to: 00429b84 (CONDITIONAL_JUMP)  ; LAB_00429b84
    POP EDI                             ; 00429b9c
        ;   Label: LAB_00429b9c
    PUSH 0x823a78                       ; 00429b9d | DAT_00823a78
    MOV EAX,[0x006703ec]                ; 00429ba2 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 00429ba7 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00429ba8
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00429bad
    XOR EAX,EAX                         ; 00429bb0
    MOV ESI,0x800000                    ; 00429bb2 | DAT_00800000
    MOV EDX,dword ptr [0x006703ec]      ; 00429bb7 | g_CDemonRendererPtr2
        ;   Label: LAB_00429bb7
    MOV EBX,dword ptr [EDX]             ; 00429bbd | g_CDemonRendererInstance
    MOV dword ptr [EBX + EAX*0x1 + 0x18],ESI ; 00429bbf | DAT_00800000
    ADD EAX,0x30                        ; 00429bc3
    MOV EDX,dword ptr [EDX]             ; 00429bc6 | g_CDemonRendererInstance
    MOV dword ptr [EDX + EAX*0x1 + -0x14],ESI ; 00429bc8 | DAT_00800000
    CMP EAX,0x12c0                      ; 00429bcc
    JNZ 0x00429bb7                      ; 00429bd1
        ;   XREF to: 00429bb7 (CONDITIONAL_JUMP)  ; LAB_00429bb7
    MOV EDX,0x267                       ; 00429bd3
    MOV ECX,0x3                         ; 00429bd8
    MOV ESI,0x1                         ; 00429bdd
    MOV EDI,0x2                         ; 00429be2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00429be7
    XOR EBX,EBX                         ; 00429bea
    MOV dword ptr [ESP + 0xcc],EDX      ; 00429bec
    MOV dword ptr [ESP + 0x14],ECX      ; 00429bf3
    MOV dword ptr [ESP + 0x28],EBX      ; 00429bf7
    MOV dword ptr [ESP + 0x2c],ESI      ; 00429bfb
    MOV dword ptr [ESP + 0x30],EDI      ; 00429bff
    MOV dword ptr [ESP + 0x34],ECX      ; 00429c03
    ADD EAX,0x2c5c                      ; 00429c07
    MOV EDX,0x28000                     ; 00429c0c
    MOV dword ptr [ESP + 0xd8],EAX      ; 00429c11
    ADD EAX,0xb4                        ; 00429c18
    MOV dword ptr [ESP + 0xc8],EDX      ; 00429c1d
    MOV dword ptr [ESP + 0xb8],EAX      ; 00429c24
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00429c2b
        ;   Label: LAB_00429c2b
    MOV EDX,EAX                         ; 00429c32
    MOV EBX,0x5                         ; 00429c34
    SAR EDX,0x1f                        ; 00429c39
    IDIV EBX                            ; 00429c3c
    PUSH EAX                            ; 00429c3e
    MOV ECX,dword ptr [0x006703ec]      ; 00429c3f | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 00429c45 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 00429c46
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00429c4b
    XOR ESI,ESI                         ; 00429c4e
    MOV EDI,dword ptr [ESP + 0xd8]      ; 00429c50
    MOV EAX,[0x006703ec]                ; 00429c57 | g_CDemonRendererPtr2
        ;   Label: LAB_00429c57
    MOV EDX,dword ptr [EAX]             ; 00429c5c | g_CDemonRendererInstance
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0x0 ; 00429c5e
    MOV EDX,dword ptr [EAX]             ; 00429c66 | g_CDemonRendererInstance
    MOV dword ptr [EDX + ESI*0x1 + 0x24],0xffff ; 00429c68
    MOV EAX,dword ptr [EAX]             ; 00429c70 | g_CDemonRendererInstance
    PUSH EDI                            ; 00429c72
    MOV dword ptr [ESI + EAX*0x1 + 0x28],0x0 ; 00429c73
    LEA EAX,[ESP + 0x6c]                ; 00429c7b
    PUSH EAX                            ; 00429c7f
    MOV EBX,dword ptr [EBP + 0x14]      ; 00429c80
    PUSH EBX                            ; 00429c83
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 00429c84
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EDX,EAX                         ; 00429c89
    LEA EAX,[ESP + 0x80]                ; 00429c8b
    ADD ESP,0xc                         ; 00429c92
    CMP EAX,EDX                         ; 00429c95
    JZ 0x00429cad                       ; 00429c97
        ;   XREF to: 00429cad (CONDITIONAL_JUMP)  ; LAB_00429cad
    MOV EAX,dword ptr [EDX]             ; 00429c99
    MOV dword ptr [ESP + 0x74],EAX      ; 00429c9b
    MOV EAX,dword ptr [EDX + 0x4]       ; 00429c9f
    MOV dword ptr [ESP + 0x78],EAX      ; 00429ca2
    MOV EAX,dword ptr [EDX + 0x8]       ; 00429ca6
    MOV dword ptr [ESP + 0x7c],EAX      ; 00429ca9
    LEA EBX,[ESP + 0x80]                ; 00429cad
        ;   Label: LAB_00429cad
    LEA EAX,[ESP + 0x74]                ; 00429cb4
    MOV EDX,dword ptr [0x006703ec]      ; 00429cb8 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00429cbe
    FMUL float ptr [0x0065b810]         ; 00429cc0 | FLOAT_0065b810
    FISTP dword ptr [EBX]               ; 00429cc6
    FLD float ptr [EAX + 0x4]           ; 00429cc8
    FMUL float ptr [0x0065b810]         ; 00429ccb | FLOAT_0065b810
    FISTP dword ptr [EBX + 0x4]         ; 00429cd1
    FLD float ptr [EAX + 0x8]           ; 00429cd4
    FMUL float ptr [0x0065b810]         ; 00429cd7 | FLOAT_0065b810
    FISTP dword ptr [EBX + 0x8]         ; 00429cdd
    LEA EAX,[ESP + 0x80]                ; 00429ce0
    PUSH EAX                            ; 00429ce7
    MOV EAX,dword ptr [EDX]             ; 00429ce8 | g_CDemonRendererInstance
    ADD EAX,ESI                         ; 00429cea
    PUSH EAX                            ; 00429cec
    ADD EDI,0xc                         ; 00429ced
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00429cf0
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESI,0x30                        ; 00429cf5
    ADD ESP,0x8                         ; 00429cf8
    CMP ESI,0x90                        ; 00429cfb
    JNZ 0x00429c57                      ; 00429d01
        ;   XREF to: 00429c57 (CONDITIONAL_JUMP)  ; LAB_00429c57
    PUSH 0x267                          ; 00429d07
    LEA EAX,[ESP + 0x14]                ; 00429d0c
    PUSH EAX                            ; 00429d10
    MOV ESI,dword ptr [0x006703ec]      ; 00429d11 | g_CDemonRendererPtr2
    PUSH ESI                            ; 00429d17 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 00429d18
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
    ADD ESP,0xc                         ; 00429d1d
    MOV EDI,dword ptr [ESP + 0xd8]      ; 00429d20
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00429d27
    MOV EDX,dword ptr [ESP + 0xb8]      ; 00429d2e
    ADD EDI,0x24                        ; 00429d35
    ADD EAX,0xffff8000                  ; 00429d38
    MOV dword ptr [ESP + 0xd8],EDI      ; 00429d3d
    MOV dword ptr [ESP + 0xc8],EAX      ; 00429d44
    CMP EDI,EDX                         ; 00429d4b
    JNZ 0x00429c2b                      ; 00429d4d
        ;   XREF to: 00429c2b (CONDITIONAL_JUMP)  ; LAB_00429c2b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00429d53
    ADD EAX,0x2d10                      ; 00429d56
    MOV ECX,0x28000                     ; 00429d5b
    MOV dword ptr [ESP + 0xd4],EAX      ; 00429d60
    ADD EAX,0xb4                        ; 00429d67
    MOV dword ptr [ESP + 0xd0],ECX      ; 00429d6c
    MOV dword ptr [ESP + 0xbc],EAX      ; 00429d73
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00429d7a
        ;   Label: LAB_00429d7a
    MOV EDX,EAX                         ; 00429d81
    MOV EBX,0x5                         ; 00429d83
    SAR EDX,0x1f                        ; 00429d88
    IDIV EBX                            ; 00429d8b
    PUSH EAX                            ; 00429d8d
    MOV EBX,dword ptr [0x006703ec]      ; 00429d8e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 00429d94 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 00429d95
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00429d9a
    XOR ESI,ESI                         ; 00429d9d
    MOV EDI,dword ptr [ESP + 0xd4]      ; 00429d9f
    MOV EAX,[0x006703ec]                ; 00429da6 | g_CDemonRendererPtr2
        ;   Label: LAB_00429da6
    MOV EDX,dword ptr [EAX]             ; 00429dab | g_CDemonRendererInstance
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0x0 ; 00429dad
    MOV EDX,dword ptr [EAX]             ; 00429db5 | g_CDemonRendererInstance
    MOV dword ptr [EDX + ESI*0x1 + 0x24],0x0 ; 00429db7
    MOV EAX,dword ptr [EAX]             ; 00429dbf | g_CDemonRendererInstance
    PUSH EDI                            ; 00429dc1
    MOV dword ptr [ESI + EAX*0x1 + 0x28],0xffff ; 00429dc2
    LEA EAX,[ESP + 0x60]                ; 00429dca
    PUSH EAX                            ; 00429dce
    MOV EAX,dword ptr [EBP + 0x14]      ; 00429dcf
    PUSH EAX                            ; 00429dd2
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 00429dd3
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EDX,EAX                         ; 00429dd8
    LEA EAX,[ESP + 0x80]                ; 00429dda
    ADD ESP,0xc                         ; 00429de1
    CMP EAX,EDX                         ; 00429de4
    JZ 0x00429dfc                       ; 00429de6
        ;   XREF to: 00429dfc (CONDITIONAL_JUMP)  ; LAB_00429dfc
    MOV EAX,dword ptr [EDX]             ; 00429de8
    MOV dword ptr [ESP + 0x74],EAX      ; 00429dea
    MOV EAX,dword ptr [EDX + 0x4]       ; 00429dee
    MOV dword ptr [ESP + 0x78],EAX      ; 00429df1
    MOV EAX,dword ptr [EDX + 0x8]       ; 00429df5
    MOV dword ptr [ESP + 0x7c],EAX      ; 00429df8
    LEA EBX,[ESP + 0x8c]                ; 00429dfc
        ;   Label: LAB_00429dfc
    LEA EAX,[ESP + 0x74]                ; 00429e03
    MOV EDX,dword ptr [0x006703ec]      ; 00429e07 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00429e0d
    FMUL float ptr [0x0065b810]         ; 00429e0f | FLOAT_0065b810
    FISTP dword ptr [EBX]               ; 00429e15
    FLD float ptr [EAX + 0x4]           ; 00429e17
    FMUL float ptr [0x0065b810]         ; 00429e1a | FLOAT_0065b810
    FISTP dword ptr [EBX + 0x4]         ; 00429e20
    FLD float ptr [EAX + 0x8]           ; 00429e23
    FMUL float ptr [0x0065b810]         ; 00429e26 | FLOAT_0065b810
    FISTP dword ptr [EBX + 0x8]         ; 00429e2c
    LEA EAX,[ESP + 0x8c]                ; 00429e2f
    PUSH EAX                            ; 00429e36
    MOV EAX,dword ptr [EDX]             ; 00429e37 | g_CDemonRendererInstance
    ADD EAX,ESI                         ; 00429e39
    PUSH EAX                            ; 00429e3b
    ADD EDI,0xc                         ; 00429e3c
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00429e3f
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESI,0x30                        ; 00429e44
    ADD ESP,0x8                         ; 00429e47
    CMP ESI,0x90                        ; 00429e4a
    JNZ 0x00429da6                      ; 00429e50
        ;   XREF to: 00429da6 (CONDITIONAL_JUMP)  ; LAB_00429da6
    MOV EDX,dword ptr [ESP + 0xcc]      ; 00429e56
    PUSH EDX                            ; 00429e5d
    LEA EAX,[ESP + 0x14]                ; 00429e5e
    PUSH EAX                            ; 00429e62
    MOV ECX,dword ptr [0x006703ec]      ; 00429e63 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 00429e69 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 00429e6a
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
    ADD ESP,0xc                         ; 00429e6f
    MOV EBX,dword ptr [ESP + 0xd4]      ; 00429e72
    MOV ESI,dword ptr [ESP + 0xd0]      ; 00429e79
    MOV EDI,dword ptr [ESP + 0xbc]      ; 00429e80
    ADD EBX,0x24                        ; 00429e87
    ADD ESI,0xffff8000                  ; 00429e8a
    MOV dword ptr [ESP + 0xd4],EBX      ; 00429e90
    MOV dword ptr [ESP + 0xd0],ESI      ; 00429e97
    CMP EBX,EDI                         ; 00429e9e
    JNZ 0x00429d7a                      ; 00429ea0
        ;   XREF to: 00429d7a (CONDITIONAL_JUMP)  ; LAB_00429d7a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00429ea6
    FLD float ptr [EAX + 0x2df0]        ; 00429ea9
    FMUL float ptr [EAX + 0x261c]       ; 00429eaf
    FLD float ptr [EAX + 0x2dec]        ; 00429eb5
    FMUL float ptr [EAX + 0x261c]       ; 00429ebb
    FXCH                                ; 00429ec1
    FSTP float ptr [ESP + 0xc0]         ; 00429ec3
    FCOMP float ptr [ESP + 0xc0]        ; 00429eca
    FNSTSW AX                           ; 00429ed1
    SAHF                                ; 00429ed3
    JBE 0x00429ee6                      ; 00429ed4
        ;   XREF to: 00429ee6 (CONDITIONAL_JUMP)  ; LAB_00429ee6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00429ed6
    MOV EAX,dword ptr [EAX + 0x23a0]    ; 00429ed9
    MOV dword ptr [ESP + 0xc0],EAX      ; 00429edf
    MOV EAX,dword ptr [EBP + 0x14]      ; 00429ee6
        ;   Label: LAB_00429ee6
    FLD float ptr [EAX + 0x2dec]        ; 00429ee9
    FMUL float ptr [EAX + 0x261c]       ; 00429eef
    FLD float ptr [ESP + 0xc0]          ; 00429ef5
    FXCH                                ; 00429efc
    FSTP float ptr [ESP + 0xc]          ; 00429efe
    FCOMP float ptr [ESP + 0xc]         ; 00429f02
    FNSTSW AX                           ; 00429f06
    SAHF                                ; 00429f08
    JC 0x0042a294                       ; 00429f09
        ;   XREF to: 0042a294 (CONDITIONAL_JUMP)  ; LAB_0042a294
    MOV EAX,dword ptr [EBP + 0x14]      ; 00429f0f
        ;   Label: LAB_00429f0f
    FLD float ptr [EAX + 0x2dec]        ; 00429f12
    FMUL float ptr [EAX + 0x261c]       ; 00429f18
    FLD float ptr [EAX + 0x2de0]        ; 00429f1e
    FMUL float ptr [EAX + 0x261c]       ; 00429f24
    MOV ESI,0x30                        ; 00429f2a
    XOR EDI,EDI                         ; 00429f2f
    FSTP float ptr [ESP]                ; 00429f31
    XOR EAX,EAX                         ; 00429f34
    FSTP float ptr [ESP + 0xb4]         ; 00429f36
    MOV dword ptr [ESP + 0xdc],EAX      ; 00429f3d
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00429f44
        ;   Label: LAB_00429f44
    ADD EAX,EAX                         ; 00429f4b
    MOV dword ptr [ESP + 0xe0],EAX      ; 00429f4d
    FILD dword ptr [ESP + 0xe0]         ; 00429f54
    FMUL double ptr [0x006170b2]        ; 00429f5b | DOUBLE_006170b2
    FMUL double ptr [0x006170ba]        ; 00429f61 | DOUBLE_006170ba
    MOV dword ptr [ESP + 0x4],EAX       ; 00429f67
    FLD ST0                             ; 00429f6b
    FSIN                                ; 00429f6d
    FXCH                                ; 00429f6f
    FCOS                                ; 00429f71
    FLD float ptr [ESP]                 ; 00429f73
    FXCH ST2                            ; 00429f76
    FMUL ST2                            ; 00429f78
    FXCH                                ; 00429f7a
    FMULP ST2                           ; 00429f7c
    LEA EBX,[ESP + 0x98]                ; 00429f7e
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00429f85
    MOV EDX,dword ptr [0x006703ec]      ; 00429f8c | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x78],EAX      ; 00429f92
    LEA EAX,[ESP + 0x74]                ; 00429f96
    FSTP float ptr [ESP + 0x74]         ; 00429f9a
    FSTP float ptr [ESP + 0x7c]         ; 00429f9e
    FLD float ptr [EAX]                 ; 00429fa2
    FMUL float ptr [0x0065b810]         ; 00429fa4 | FLOAT_0065b810
    FISTP dword ptr [EBX]               ; 00429faa
    FLD float ptr [EAX + 0x4]           ; 00429fac
    FMUL float ptr [0x0065b810]         ; 00429faf | FLOAT_0065b810
    FISTP dword ptr [EBX + 0x4]         ; 00429fb5
    FLD float ptr [EAX + 0x8]           ; 00429fb8
    FMUL float ptr [0x0065b810]         ; 00429fbb | FLOAT_0065b810
    FISTP dword ptr [EBX + 0x8]         ; 00429fc1
    LEA EAX,[ESP + 0x98]                ; 00429fc4
    PUSH EAX                            ; 00429fcb
    MOV EAX,dword ptr [EDX]             ; 00429fcc | g_CDemonRendererInstance
    ADD EAX,EDI                         ; 00429fce
    PUSH EAX                            ; 00429fd0
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00429fd1
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x006703ec]      ; 00429fd6 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EDX]             ; 00429fdc | g_CDemonRendererInstance
    MOV dword ptr [EDI + EAX*0x1 + 0x20],0xffff ; 00429fde
    MOV EAX,dword ptr [EDX]             ; 00429fe6 | g_CDemonRendererInstance
    MOV dword ptr [EDI + EAX*0x1 + 0x24],0x0 ; 00429fe8
    MOV EAX,dword ptr [EDX]             ; 00429ff0 | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 00429ff2
    MOV dword ptr [EDI + EAX*0x1 + 0x28],0x0 ; 00429ff5
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00429ffd
    MOV dword ptr [ESP + 0x78],EAX      ; 0042a004
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042a008
    INC EAX                             ; 0042a00c
    LEA EBX,[ESP + 0x44]                ; 0042a00d
    MOV dword ptr [ESP + 0xc4],EAX      ; 0042a011
    LEA EAX,[ESP + 0x74]                ; 0042a018
    FLD float ptr [EAX]                 ; 0042a01c
    FMUL float ptr [0x0065b810]         ; 0042a01e | FLOAT_0065b810
    FISTP dword ptr [EBX]               ; 0042a024
    FLD float ptr [EAX + 0x4]           ; 0042a026
    FMUL float ptr [0x0065b810]         ; 0042a029 | FLOAT_0065b810
    FISTP dword ptr [EBX + 0x4]         ; 0042a02f
    FLD float ptr [EAX + 0x8]           ; 0042a032
    FMUL float ptr [0x0065b810]         ; 0042a035 | FLOAT_0065b810
    FISTP dword ptr [EBX + 0x8]         ; 0042a03b
    LEA EAX,[ESP + 0x44]                ; 0042a03e
    PUSH EAX                            ; 0042a042
    MOV EAX,dword ptr [EDX]             ; 0042a043 | g_CDemonRendererInstance
    ADD EAX,ESI                         ; 0042a045
    PUSH EAX                            ; 0042a047
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0042a048
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 0042a04d | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EDX,dword ptr [EAX]             ; 0042a052 | g_CDemonRendererInstance
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff ; 0042a054
    MOV EDX,dword ptr [EAX]             ; 0042a05c | g_CDemonRendererInstance
    MOV dword ptr [EDX + ESI*0x1 + 0x24],0x0 ; 0042a05e
    MOV EDX,dword ptr [EAX]             ; 0042a066 | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 0042a068
    MOV dword ptr [EDX + ESI*0x1 + 0x28],0x0 ; 0042a06b
    CMP dword ptr [ESP + 0xdc],0x0      ; 0042a073
    JLE 0x0042a0d6                      ; 0042a07b
        ;   XREF to: 0042a0d6 (CONDITIONAL_JUMP)  ; LAB_0042a0d6
    MOV EDX,dword ptr [ESP + 0x4]       ; 0042a07d
    SUB EDX,0x2                         ; 0042a081
    MOV dword ptr [ESP + 0x28],EDX      ; 0042a084
    MOV EDX,dword ptr [ESP + 0x4]       ; 0042a088
    MOV ECX,0x4                         ; 0042a08c
    DEC EDX                             ; 0042a091
    PUSH 0x4000                         ; 0042a092
    MOV dword ptr [ESP + 0x30],EDX      ; 0042a097
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0042a09b
    PUSH EAX                            ; 0042a0a2 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x38],EDX      ; 0042a0a3
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042a0a7
    MOV dword ptr [ESP + 0x1c],ECX      ; 0042a0ab
    MOV dword ptr [ESP + 0x3c],EDX      ; 0042a0af
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0042a0b3
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0042a0b8
    MOV EBX,dword ptr [ESP + 0xcc]      ; 0042a0bb
    PUSH EBX                            ; 0042a0c2
    LEA EAX,[ESP + 0x14]                ; 0042a0c3
    PUSH EAX                            ; 0042a0c7
    MOV EAX,[0x006703ec]                ; 0042a0c8 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0042a0cd | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 0042a0ce
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
    ADD ESP,0xc                         ; 0042a0d3
    MOV EDX,dword ptr [ESP + 0xdc]      ; 0042a0d6
        ;   Label: LAB_0042a0d6
    ADD EDI,0x60                        ; 0042a0dd
    INC EDX                             ; 0042a0e0
    ADD ESI,0x60                        ; 0042a0e1
    MOV dword ptr [ESP + 0xdc],EDX      ; 0042a0e4
    CMP EDX,0x18                        ; 0042a0eb
    JLE 0x00429f44                      ; 0042a0ee
        ;   XREF to: 00429f44 (CONDITIONAL_JUMP)  ; LAB_00429f44
    LEA EBX,[ESP + 0x38]                ; 0042a0f4
    MOV EAX,0x3f87558                   ; 0042a0f8 | g_ZeroVector
    MOV EDX,dword ptr [0x006703ec]      ; 0042a0fd | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 0042a103 | g_ZeroVector
    FMUL float ptr [0x0065b810]         ; 0042a105 | FLOAT_0065b810
    FISTP dword ptr [EBX]               ; 0042a10b
    FLD float ptr [EAX + 0x4]           ; 0042a10d | g_ZeroVector.y
    FMUL float ptr [0x0065b810]         ; 0042a110 | FLOAT_0065b810
    FISTP dword ptr [EBX + 0x4]         ; 0042a116
    FLD float ptr [EAX + 0x8]           ; 0042a119 | g_ZeroVector.z
    FMUL float ptr [0x0065b810]         ; 0042a11c | FLOAT_0065b810
    FISTP dword ptr [EBX + 0x8]         ; 0042a122
    LEA EAX,[ESP + 0x38]                ; 0042a125
    PUSH EAX                            ; 0042a129
    MOV EAX,dword ptr [EDX]             ; 0042a12a | g_CDemonRendererInstance
    PUSH EAX                            ; 0042a12c
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0042a12d
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 0042a132 | g_CDemonRendererPtr2
    MOV EDX,dword ptr [EAX]             ; 0042a137 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x20],0xffff   ; 0042a139
    MOV EDX,dword ptr [EAX]             ; 0042a140 | g_CDemonRendererInstance
    XOR EDI,EDI                         ; 0042a142
    MOV dword ptr [EDX + 0x24],0x0      ; 0042a144
    ADD ESP,0x8                         ; 0042a14b
    MOV EAX,dword ptr [EAX]             ; 0042a14e | g_CDemonRendererInstance
    MOV ESI,0x30                        ; 0042a150
    MOV dword ptr [ESP + 0x8],EDI       ; 0042a155
    MOV dword ptr [EAX + 0x28],0x0      ; 0042a159
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042a160
        ;   Label: LAB_0042a160
    MOV dword ptr [ESP + 0xe0],EAX      ; 0042a164
    FILD dword ptr [ESP + 0xe0]         ; 0042a16b
    FMUL double ptr [0x006170b2]        ; 0042a172 | DOUBLE_006170b2
    FMUL double ptr [0x006170ba]        ; 0042a178 | DOUBLE_006170ba
    FLD ST0                             ; 0042a17e
    FSIN                                ; 0042a180
    FXCH                                ; 0042a182
    FCOS                                ; 0042a184
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042a186
    FLD float ptr [EAX + 0x2ddc]        ; 0042a189
    FMULP ST2                           ; 0042a18f
    FLD float ptr [EAX + 0x261c]        ; 0042a191
    FMULP ST2                           ; 0042a197
    FXCH                                ; 0042a199
    FSTP float ptr [ESP + 0x74]         ; 0042a19b
    FMUL float ptr [EAX + 0x2ddc]       ; 0042a19f
    FMUL float ptr [EAX + 0x261c]       ; 0042a1a5
    LEA EBX,[ESP + 0x50]                ; 0042a1ab
    XOR EAX,EAX                         ; 0042a1af
    MOV EDX,dword ptr [0x006703ec]      ; 0042a1b1 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x78],EAX      ; 0042a1b7
    LEA EAX,[ESP + 0x74]                ; 0042a1bb
    FSTP float ptr [ESP + 0x7c]         ; 0042a1bf
    FLD float ptr [EAX]                 ; 0042a1c3
    FMUL float ptr [0x0065b810]         ; 0042a1c5 | FLOAT_0065b810
    FISTP dword ptr [EBX]               ; 0042a1cb
    FLD float ptr [EAX + 0x4]           ; 0042a1cd
    FMUL float ptr [0x0065b810]         ; 0042a1d0 | FLOAT_0065b810
    FISTP dword ptr [EBX + 0x4]         ; 0042a1d6
    FLD float ptr [EAX + 0x8]           ; 0042a1d9
    FMUL float ptr [0x0065b810]         ; 0042a1dc | FLOAT_0065b810
    FISTP dword ptr [EBX + 0x8]         ; 0042a1e2
    LEA EAX,[ESP + 0x50]                ; 0042a1e5
    PUSH EAX                            ; 0042a1e9
    MOV EAX,dword ptr [EDX]             ; 0042a1ea | g_CDemonRendererInstance
    ADD EAX,ESI                         ; 0042a1ec
    PUSH EAX                            ; 0042a1ee
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0042a1ef
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 0042a1f4 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EDX,dword ptr [EAX]             ; 0042a1f9 | g_CDemonRendererInstance
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff ; 0042a1fb
    MOV EDX,dword ptr [EAX]             ; 0042a203 | g_CDemonRendererInstance
    MOV dword ptr [EDX + ESI*0x1 + 0x24],0x0 ; 0042a205
    MOV EDX,dword ptr [EAX]             ; 0042a20d | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 0042a20f
    MOV dword ptr [EDX + ESI*0x1 + 0x28],0x0 ; 0042a212
    TEST EDI,EDI                        ; 0042a21a
    JLE 0x0042a261                      ; 0042a21c
        ;   XREF to: 0042a261 (CONDITIONAL_JUMP)  ; LAB_0042a261
    MOV EDX,0x3                         ; 0042a21e
    PUSH 0x4000                         ; 0042a223
    XOR ECX,ECX                         ; 0042a228
    MOV dword ptr [ESP + 0x18],EDX      ; 0042a22a
    MOV dword ptr [ESP + 0x2c],ECX      ; 0042a22e
    LEA EDX,[EDI + -0x1]                ; 0042a232
    PUSH EAX                            ; 0042a235 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x34],EDX      ; 0042a236
    MOV dword ptr [ESP + 0x38],EDI      ; 0042a23a
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0042a23e
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0042a243
    MOV EBX,dword ptr [ESP + 0xcc]      ; 0042a246
    PUSH EBX                            ; 0042a24d
    LEA EAX,[ESP + 0x14]                ; 0042a24e
    PUSH EAX                            ; 0042a252
    MOV EAX,[0x006703ec]                ; 0042a253 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0042a258 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 0042a259
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
    ADD ESP,0xc                         ; 0042a25e
    MOV EDX,dword ptr [ESP + 0x8]       ; 0042a261
        ;   Label: LAB_0042a261
    INC EDI                             ; 0042a265
    ADD EDX,0x2                         ; 0042a266
    ADD ESI,0x30                        ; 0042a269
    MOV dword ptr [ESP + 0x8],EDX       ; 0042a26c
    CMP EDI,0x18                        ; 0042a270
    JLE 0x0042a160                      ; 0042a273
        ;   XREF to: 0042a160 (CONDITIONAL_JUMP)  ; LAB_0042a160
    PUSH 0xffff                         ; 0042a279
    MOV ECX,dword ptr [0x006703ec]      ; 0042a27e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0042a284 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0042a285
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0042a28a
    MOV ESP,EBP                         ; 0042a28d
    POP EBP                             ; 0042a28f
    POP EDI                             ; 0042a290
    POP ESI                             ; 0042a291
    POP EBX                             ; 0042a292
    RET                                 ; 0042a293
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042a294
        ;   Label: LAB_0042a294
    FLD float ptr [ESP + 0xc]           ; 0042a297
    FLD float ptr [EAX + 0x261c]        ; 0042a29b
    FMUL double ptr [0x006170aa]        ; 0042a2a1 | DOUBLE_006170aa
    FADDP                               ; 0042a2a7
    FSTP float ptr [ESP + 0xc0]         ; 0042a2a9
    JMP 0x00429f0f                      ; 0042a2b0
        ;   XREF to: 00429f0f (UNCONDITIONAL_JUMP)  ; LAB_00429f0f

