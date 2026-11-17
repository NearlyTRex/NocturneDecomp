; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodPool_render_FUN_004c88a0(CBloodPool *this_ptr,int expire_flag)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   expire_flag
; Local Variables:
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
;   core_gore.cpp_CGore_renderDecals_FUN_004c94c0 at 004c955a
;
; Referenced Globals:
;   double g_DOUBLE_005d94da = 8
;   float g_FLOAT_005f7ba8 = 256
;   CDemonRenderer* g_CDemonRenderer_PTR_0060b280 = 01ba5c50
;   SMRGLTextureBasic[116] g_BloodPoolAnimTextures
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].r
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].g
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].b
;   undefined4 g_SRenderVertex_ARRAY_00622014[1].r
;   undefined4 g_SRenderVertex_ARRAY_00622014[1].g
;   undefined4 g_SRenderVertex_ARRAY_00622014[1].b
;   undefined4 g_SRenderVertex_ARRAY_00622014[2].r
;   undefined4 g_SRenderVertex_ARRAY_00622014[2].g
;   undefined4 g_SRenderVertex_ARRAY_00622014[2].b
;   undefined4 g_SRenderVertex_ARRAY_00622014[3].r
;   undefined4 g_SRenderVertex_ARRAY_00622014[3].g
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
;   engine_special.cpp_transformAndProjectPoint_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c88a0
        ;   Label: core_gore.cpp_CBloodPool_render_FUN_004c88a0
    PUSH ESI                            ; 004c88a1
    PUSH EDI                            ; 004c88a2
    PUSH EBP                            ; 004c88a3
    SUB ESP,0x4c                        ; 004c88a4
    MOV ESI,dword ptr [ESP + 0x60]      ; 004c88a7
    FLD float ptr [ESI + 0x18]          ; 004c88ab
    FMUL double ptr [0x005d94da]        ; 004c88ae | g_DOUBLE_005d94da
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c88b4
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FISTP dword ptr [ESP + 0x48]        ; 004c88b9
    MOV EDX,dword ptr [ESP + 0x48]      ; 004c88bd
    TEST EDX,EDX                        ; 004c88c1
    JL 0x004c8bb6                       ; 004c88c3
        ;   XREF to: 004c8bb6 (CONDITIONAL_JUMP)  ; LAB_004c8bb6
    CMP EDX,0x1c                        ; 004c88c9
    JLE 0x004c88e5                      ; 004c88cc
        ;   XREF to: 004c88e5 (CONDITIONAL_JUMP)  ; LAB_004c88e5
    MOV EBX,0x1c                        ; 004c88ce
    MOV EDI,dword ptr [ESP + 0x64]      ; 004c88d3
    MOV dword ptr [ESP + 0x48],EBX      ; 004c88d7
    TEST EDI,EDI                        ; 004c88db
    JZ 0x004c88e5                       ; 004c88dd
        ;   XREF to: 004c88e5 (CONDITIONAL_JUMP)  ; LAB_004c88e5
    MOV dword ptr [ESI],0x1             ; 004c88df
    LEA EAX,[ESI + 0x4]                 ; 004c88e5
        ;   Label: LAB_004c88e5
    PUSH EAX                            ; 004c88e8
    MOV EAX,[0x0060b280]                ; 004c88e9 | g_CDemonRenderer_PTR_0060b280
    PUSH EAX                            ; 004c88ee | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 004c88ef
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    IMUL EAX,dword ptr [ESI + 0x14],0x2b8 ; 004c88f4
    ADD ESP,0x8                         ; 004c88fb
    MOV EDX,0x616e68                    ; 004c88fe | g_BloodPoolAnimTextures
    MOV EBX,dword ptr [ESP + 0x48]      ; 004c8903
    ADD EDX,EAX                         ; 004c8907
    LEA EAX,[EBX*0x4 + 0x0]             ; 004c8909
    SUB EAX,EBX                         ; 004c8910
    SHL EAX,0x3                         ; 004c8912
    ADD EAX,EDX                         ; 004c8915
    PUSH EAX                            ; 004c8917
    MOV ECX,dword ptr [0x0060b280]      ; 004c8918 | g_CDemonRenderer_PTR_0060b280
    MOV EBX,0xbfaa9fbe                  ; 004c891e
    PUSH ECX                            ; 004c8923 | g_CDemonRenderer_01ba5c50
    XOR EDI,EDI                         ; 004c8924
    MOV EBP,EBX                         ; 004c8926
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004c8928
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EAX,[ESP + 0x20]                ; 004c892d
    ADD ESP,0x8                         ; 004c8931
    MOV EDX,dword ptr [0x0060b280]      ; 004c8934 | g_CDemonRenderer_PTR_0060b280
    MOV dword ptr [ESP + 0x18],EBX      ; 004c893a
    MOV dword ptr [ESP + 0x20],EBX      ; 004c893e
    LEA EBX,[ESP + 0xc]                 ; 004c8942
    MOV dword ptr [ESP + 0x1c],EDI      ; 004c8946
    FLD float ptr [EAX]                 ; 004c894a
    FMUL float ptr [0x005f7ba8]         ; 004c894c | g_FLOAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c8952
    FLD float ptr [EAX + 0x4]           ; 004c8954
    FMUL float ptr [0x005f7ba8]         ; 004c8957 | g_FLOAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c895d
    FLD float ptr [EAX + 0x8]           ; 004c8960
    FMUL float ptr [0x005f7ba8]         ; 004c8963 | g_FLOAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c8969
    LEA EAX,[ESP + 0xc]                 ; 004c896c
    PUSH EAX                            ; 004c8970
    MOV EAX,dword ptr [EDX]             ; 004c8971 | g_CDemonRenderer_01ba5c50
    PUSH EAX                            ; 004c8973
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0055d723 ; 004c8974
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3faa9fbe                  ; 004c8979
    LEA EBX,[ESP + 0x8]                 ; 004c897e
    MOV EDX,dword ptr [0x0060b280]      ; 004c8982 | g_CDemonRenderer_PTR_0060b280
    ADD ESP,0x8                         ; 004c8988
    MOV ECX,EBP                         ; 004c898b
    MOV dword ptr [ESP + 0x18],EAX      ; 004c898d
    MOV dword ptr [ESP + 0x1c],EDI      ; 004c8991
    LEA EAX,[ESP + 0x18]                ; 004c8995
    MOV dword ptr [ESP + 0x20],ECX      ; 004c8999
    FLD float ptr [EAX]                 ; 004c899d
    FMUL float ptr [0x005f7ba8]         ; 004c899f | g_FLOAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c89a5
    FLD float ptr [EAX + 0x4]           ; 004c89a7
    FMUL float ptr [0x005f7ba8]         ; 004c89aa | g_FLOAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c89b0
    FLD float ptr [EAX + 0x8]           ; 004c89b3
    FMUL float ptr [0x005f7ba8]         ; 004c89b6 | g_FLOAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c89bc
    MOV EAX,ESP                         ; 004c89bf
    PUSH EAX                            ; 004c89c1
    MOV EAX,dword ptr [EDX]             ; 004c89c2 | g_CDemonRenderer_01ba5c50
    ADD EAX,0x30                        ; 004c89c4
    PUSH EAX                            ; 004c89c7
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0055d723 ; 004c89c8
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3faa9fbe                  ; 004c89cd
    LEA EAX,[ESP + 0x20]                ; 004c89d2
    ADD ESP,0x8                         ; 004c89d6
    MOV EDX,dword ptr [0x0060b280]      ; 004c89d9 | g_CDemonRenderer_PTR_0060b280
    MOV dword ptr [ESP + 0x18],EBX      ; 004c89df
    MOV EBP,EBX                         ; 004c89e3
    MOV dword ptr [ESP + 0x20],EBX      ; 004c89e5
    LEA EBX,[ESP + 0x24]                ; 004c89e9
    MOV dword ptr [ESP + 0x1c],EDI      ; 004c89ed
    FLD float ptr [EAX]                 ; 004c89f1
    FMUL float ptr [0x005f7ba8]         ; 004c89f3 | g_FLOAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c89f9
    FLD float ptr [EAX + 0x4]           ; 004c89fb
    FMUL float ptr [0x005f7ba8]         ; 004c89fe | g_FLOAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c8a04
    FLD float ptr [EAX + 0x8]           ; 004c8a07
    FMUL float ptr [0x005f7ba8]         ; 004c8a0a | g_FLOAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c8a10
    LEA EAX,[ESP + 0x24]                ; 004c8a13
    PUSH EAX                            ; 004c8a17
    MOV EAX,dword ptr [EDX]             ; 004c8a18 | g_CDemonRenderer_01ba5c50
    ADD EAX,0x60                        ; 004c8a1a
    PUSH EAX                            ; 004c8a1d
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0055d723 ; 004c8a1e
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0xbfaa9fbe                  ; 004c8a23
    LEA EBX,[ESP + 0x38]                ; 004c8a28
    MOV EDX,dword ptr [0x0060b280]      ; 004c8a2c | g_CDemonRenderer_PTR_0060b280
    ADD ESP,0x8                         ; 004c8a32
    MOV ECX,EBP                         ; 004c8a35
    MOV dword ptr [ESP + 0x18],EAX      ; 004c8a37
    MOV dword ptr [ESP + 0x1c],EDI      ; 004c8a3b
    LEA EAX,[ESP + 0x18]                ; 004c8a3f
    MOV dword ptr [ESP + 0x20],ECX      ; 004c8a43
    FLD float ptr [EAX]                 ; 004c8a47
    FMUL float ptr [0x005f7ba8]         ; 004c8a49 | g_FLOAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c8a4f
    FLD float ptr [EAX + 0x4]           ; 004c8a51
    FMUL float ptr [0x005f7ba8]         ; 004c8a54 | g_FLOAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c8a5a
    FLD float ptr [EAX + 0x8]           ; 004c8a5d
    FMUL float ptr [0x005f7ba8]         ; 004c8a60 | g_FLOAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c8a66
    LEA EAX,[ESP + 0x30]                ; 004c8a69
    PUSH EAX                            ; 004c8a6d
    MOV EAX,dword ptr [EDX]             ; 004c8a6e | g_CDemonRenderer_01ba5c50
    ADD EAX,0x90                        ; 004c8a70
    PUSH EAX                            ; 004c8a75
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0055d723 ; 004c8a76
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c8a7b
    MOV EBP,0x622034                    ; 004c8a7e | g_SRenderVertex_ARRAY_00622014[0].r
    PUSH 0xc0                           ; 004c8a83
    MOV EDI,0x622038                    ; 004c8a88 | g_SRenderVertex_ARRAY_00622014[0].g
    MOV EBX,dword ptr [ESI + 0x10]      ; 004c8a8d
    PUSH 0x40                           ; 004c8a90
    MOV dword ptr [ESP + 0x44],EDI      ; 004c8a92 | g_SRenderVertex_ARRAY_00622014[0].g
    MOV EDI,0x62203c                    ; 004c8a96 | g_SRenderVertex_ARRAY_00622014[0].b
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 004c8a9b
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c8aa0
    CMP EBX,0x1                         ; 004c8aa3
    JNC 0x004c8c00                      ; 004c8aa6
        ;   XREF to: 004c8c00 (CONDITIONAL_JUMP)  ; LAB_004c8c00
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004c8aac
        ;   Label: LAB_004c8aac
    MOV dword ptr [EBP],0x2000          ; 004c8ab0 | g_SRenderVertex_ARRAY_00622014[0].r
    MOV dword ptr [EAX],0x0             ; 004c8ab7 | g_SRenderVertex_ARRAY_00622014[0].g
    MOV dword ptr [EDI],0x0             ; 004c8abd | g_SRenderVertex_ARRAY_00622014[0].b
    MOV EBP,0x622064                    ; 004c8ac3 | g_SRenderVertex_ARRAY_00622014[1].r
        ;   Label: LAB_004c8ac3
    PUSH 0xc0                           ; 004c8ac8
    MOV EDI,0x622068                    ; 004c8acd | g_SRenderVertex_ARRAY_00622014[1].g
    MOV EAX,0x62206c                    ; 004c8ad2 | g_SRenderVertex_ARRAY_00622014[1].b
    PUSH 0x40                           ; 004c8ad7
    MOV EBX,dword ptr [ESI + 0x10]      ; 004c8ad9
    MOV dword ptr [ESP + 0x4c],EAX      ; 004c8adc | g_SRenderVertex_ARRAY_00622014[1].b
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 004c8ae0
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c8ae5
    CMP EBX,0x1                         ; 004c8ae8
    JNC 0x004c8c4a                      ; 004c8aeb
        ;   XREF to: 004c8c4a (CONDITIONAL_JUMP)  ; LAB_004c8c4a
    MOV dword ptr [EBP],0x2000          ; 004c8af1 | g_SRenderVertex_ARRAY_00622014[1].r
        ;   Label: LAB_004c8af1
    MOV EAX,dword ptr [ESP + 0x44]      ; 004c8af8
    MOV dword ptr [EDI],0x0             ; 004c8afc | g_SRenderVertex_ARRAY_00622014[1].g
    MOV dword ptr [EAX],0x0             ; 004c8b02 | g_SRenderVertex_ARRAY_00622014[1].b
    MOV EBP,0x622094                    ; 004c8b08 | g_SRenderVertex_ARRAY_00622014[2].r
        ;   Label: LAB_004c8b08
    PUSH 0xc0                           ; 004c8b0d
    MOV EDX,0x622098                    ; 004c8b12 | g_SRenderVertex_ARRAY_00622014[2].g
    MOV EDI,0x62209c                    ; 004c8b17 | g_SRenderVertex_ARRAY_00622014[2].b
    PUSH 0x40                           ; 004c8b1c
    MOV EBX,dword ptr [ESI + 0x10]      ; 004c8b1e
    MOV dword ptr [ESP + 0x48],EDX      ; 004c8b21 | g_SRenderVertex_ARRAY_00622014[2].g
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 004c8b25
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c8b2a
    CMP EBX,0x1                         ; 004c8b2d
    JNC 0x004c8c94                      ; 004c8b30
        ;   XREF to: 004c8c94 (CONDITIONAL_JUMP)  ; LAB_004c8c94
    MOV EAX,dword ptr [ESP + 0x40]      ; 004c8b36
        ;   Label: LAB_004c8b36
    MOV dword ptr [EBP],0x2000          ; 004c8b3a | g_SRenderVertex_ARRAY_00622014[2].r
    MOV dword ptr [EAX],0x0             ; 004c8b41 | g_SRenderVertex_ARRAY_00622014[2].g
    MOV dword ptr [EDI],0x0             ; 004c8b47 | g_SRenderVertex_ARRAY_00622014[2].b
    PUSH 0xc0                           ; 004c8b4d
        ;   Label: LAB_004c8b4d
    MOV EBP,0x6220c8                    ; 004c8b52 | g_SRenderVertex_ARRAY_00622014[3].g
    MOV EDI,0x6220cc                    ; 004c8b57 | g_SRenderVertex_ARRAY_00622014[3].b
    PUSH 0x40                           ; 004c8b5c
    MOV EBX,dword ptr [ESI + 0x10]      ; 004c8b5e
    MOV ESI,0x6220c4                    ; 004c8b61 | g_SRenderVertex_ARRAY_00622014[3].r
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 004c8b66
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c8b6b
    CMP EBX,0x1                         ; 004c8b6e
    JC 0x004c8ca0                       ; 004c8b71
        ;   XREF to: 004c8ca0 (CONDITIONAL_JUMP)  ; LAB_004c8ca0
    JBE 0x004c8cb8                      ; 004c8b77
        ;   XREF to: 004c8cb8 (CONDITIONAL_JUMP)  ; LAB_004c8cb8
    CMP EBX,0x2                         ; 004c8b7d
    JNZ 0x004c8ca0                      ; 004c8b80
        ;   XREF to: 004c8ca0 (CONDITIONAL_JUMP)  ; LAB_004c8ca0
    XOR ECX,ECX                         ; 004c8b86
    MOV dword ptr [0x006220c8],ECX      ; 004c8b88 | g_SRenderVertex_ARRAY_00622014[3].g
    MOV dword ptr [0x006220cc],ECX      ; 004c8b8e | g_SRenderVertex_ARRAY_00622014[3].b
    MOV dword ptr [0x006220c4],ECX      ; 004c8b94 | g_SRenderVertex_ARRAY_00622014[3].r
    PUSH 0x1cb8288                      ; 004c8b9a
        ;   Label: LAB_004c8b9a
    MOV EDX,dword ptr [0x0060b280]      ; 004c8b9f | g_CDemonRenderer_PTR_0060b280
    PUSH EDX                            ; 004c8ba5 | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 004c8ba6
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c8bab
    ADD ESP,0x4c                        ; 004c8bae
    POP EBP                             ; 004c8bb1
    POP EDI                             ; 004c8bb2
    POP ESI                             ; 004c8bb3
    POP EBX                             ; 004c8bb4
    RET                                 ; 004c8bb5
    XOR EBP,EBP                         ; 004c8bb6
        ;   Label: LAB_004c8bb6
    MOV dword ptr [ESP + 0x48],EBP      ; 004c8bb8
    JMP 0x004c88e5                      ; 004c8bbc
        ;   XREF to: 004c88e5 (UNCONDITIONAL_JUMP)  ; LAB_004c88e5
    MOV EBX,0x9a80                      ; 004c8bc1
        ;   Label: LAB_004c8bc1
    MOV EDI,0xb100                      ; 004c8bc6
    MOV ECX,0x9000                      ; 004c8bcb
    MOV dword ptr [0x00622038],EBX      ; 004c8bd0 | g_SRenderVertex_ARRAY_00622014[0].g
    MOV dword ptr [0x0062203c],EDI      ; 004c8bd6 | g_SRenderVertex_ARRAY_00622014[0].b
    MOV dword ptr [0x00622034],ECX      ; 004c8bdc | g_SRenderVertex_ARRAY_00622014[0].r
    JMP 0x004c8ac3                      ; 004c8be2
        ;   XREF to: 004c8ac3 (UNCONDITIONAL_JUMP)  ; LAB_004c8ac3
    XOR EBP,EBP                         ; 004c8be7
        ;   Label: LAB_004c8be7
    MOV dword ptr [0x00622038],EBP      ; 004c8be9 | g_SRenderVertex_ARRAY_00622014[0].g
    MOV dword ptr [0x0062203c],EBP      ; 004c8bef | g_SRenderVertex_ARRAY_00622014[0].b
    MOV dword ptr [0x00622034],EBP      ; 004c8bf5 | g_SRenderVertex_ARRAY_00622014[0].r
    JMP 0x004c8ac3                      ; 004c8bfb
        ;   XREF to: 004c8ac3 (UNCONDITIONAL_JUMP)  ; LAB_004c8ac3
    JBE 0x004c8bc1                      ; 004c8c00
        ;   XREF to: 004c8bc1 (CONDITIONAL_JUMP)  ; LAB_004c8bc1
        ;   Label: LAB_004c8c00
    CMP EBX,0x2                         ; 004c8c02
    JZ 0x004c8be7                       ; 004c8c05
        ;   XREF to: 004c8be7 (CONDITIONAL_JUMP)  ; LAB_004c8be7
    JMP 0x004c8aac                      ; 004c8c07
        ;   XREF to: 004c8aac (UNCONDITIONAL_JUMP)  ; LAB_004c8aac
    MOV EBP,0x9a80                      ; 004c8c0c
        ;   Label: LAB_004c8c0c
    MOV EAX,0xb100                      ; 004c8c11
    MOV EDI,0x9000                      ; 004c8c16
    MOV dword ptr [0x00622068],EBP      ; 004c8c1b | g_SRenderVertex_ARRAY_00622014[1].g
    MOV [0x0062206c],EAX                ; 004c8c21 | g_SRenderVertex_ARRAY_00622014[1].b
    MOV dword ptr [0x00622064],EDI      ; 004c8c26 | g_SRenderVertex_ARRAY_00622014[1].r
    JMP 0x004c8b08                      ; 004c8c2c
        ;   XREF to: 004c8b08 (UNCONDITIONAL_JUMP)  ; LAB_004c8b08
    XOR EDX,EDX                         ; 004c8c31
        ;   Label: LAB_004c8c31
    MOV dword ptr [0x00622068],EDX      ; 004c8c33 | g_SRenderVertex_ARRAY_00622014[1].g
    MOV dword ptr [0x0062206c],EDX      ; 004c8c39 | g_SRenderVertex_ARRAY_00622014[1].b
    MOV dword ptr [0x00622064],EDX      ; 004c8c3f | g_SRenderVertex_ARRAY_00622014[1].r
    JMP 0x004c8b08                      ; 004c8c45
        ;   XREF to: 004c8b08 (UNCONDITIONAL_JUMP)  ; LAB_004c8b08
    JBE 0x004c8c0c                      ; 004c8c4a
        ;   XREF to: 004c8c0c (CONDITIONAL_JUMP)  ; LAB_004c8c0c
        ;   Label: LAB_004c8c4a
    CMP EBX,0x2                         ; 004c8c4c
    JZ 0x004c8c31                       ; 004c8c4f
        ;   XREF to: 004c8c31 (CONDITIONAL_JUMP)  ; LAB_004c8c31
    JMP 0x004c8af1                      ; 004c8c51
        ;   XREF to: 004c8af1 (UNCONDITIONAL_JUMP)  ; LAB_004c8af1
    MOV EAX,0x9a80                      ; 004c8c56
        ;   Label: LAB_004c8c56
    MOV EDX,0xb100                      ; 004c8c5b
    MOV EBP,0x9000                      ; 004c8c60
    MOV [0x00622098],EAX                ; 004c8c65 | g_SRenderVertex_ARRAY_00622014[2].g
    MOV dword ptr [0x0062209c],EDX      ; 004c8c6a | g_SRenderVertex_ARRAY_00622014[2].b
    MOV dword ptr [0x00622094],EBP      ; 004c8c70 | g_SRenderVertex_ARRAY_00622014[2].r
    JMP 0x004c8b4d                      ; 004c8c76
        ;   XREF to: 004c8b4d (UNCONDITIONAL_JUMP)  ; LAB_004c8b4d
    XOR ECX,ECX                         ; 004c8c7b
        ;   Label: LAB_004c8c7b
    MOV dword ptr [0x00622098],ECX      ; 004c8c7d | g_SRenderVertex_ARRAY_00622014[2].g
    MOV dword ptr [0x0062209c],ECX      ; 004c8c83 | g_SRenderVertex_ARRAY_00622014[2].b
    MOV dword ptr [0x00622094],ECX      ; 004c8c89 | g_SRenderVertex_ARRAY_00622014[2].r
    JMP 0x004c8b4d                      ; 004c8c8f
        ;   XREF to: 004c8b4d (UNCONDITIONAL_JUMP)  ; LAB_004c8b4d
    JBE 0x004c8c56                      ; 004c8c94
        ;   XREF to: 004c8c56 (CONDITIONAL_JUMP)  ; LAB_004c8c56
        ;   Label: LAB_004c8c94
    CMP EBX,0x2                         ; 004c8c96
    JZ 0x004c8c7b                       ; 004c8c99
        ;   XREF to: 004c8c7b (CONDITIONAL_JUMP)  ; LAB_004c8c7b
    JMP 0x004c8b36                      ; 004c8c9b
        ;   XREF to: 004c8b36 (UNCONDITIONAL_JUMP)  ; LAB_004c8b36
    MOV dword ptr [ESI],0x2000          ; 004c8ca0 | g_SRenderVertex_ARRAY_00622014[3].r
        ;   Label: LAB_004c8ca0
    MOV dword ptr [EBP],0x0             ; 004c8ca6 | g_SRenderVertex_ARRAY_00622014[3].g
    MOV dword ptr [EDI],0x0             ; 004c8cad | g_SRenderVertex_ARRAY_00622014[3].b
    JMP 0x004c8b9a                      ; 004c8cb3
        ;   XREF to: 004c8b9a (UNCONDITIONAL_JUMP)  ; LAB_004c8b9a
    MOV EBP,0x9a80                      ; 004c8cb8
        ;   Label: LAB_004c8cb8
    MOV EAX,0xb100                      ; 004c8cbd
    MOV EDI,0x9000                      ; 004c8cc2
    MOV dword ptr [0x006220c8],EBP      ; 004c8cc7 | g_SRenderVertex_ARRAY_00622014[3].g
    MOV [0x006220cc],EAX                ; 004c8ccd | g_SRenderVertex_ARRAY_00622014[3].b
    MOV dword ptr [0x006220c4],EDI      ; 004c8cd2 | g_SRenderVertex_ARRAY_00622014[3].r
    JMP 0x004c8b9a                      ; 004c8cd8
        ;   XREF to: 004c8b9a (UNCONDITIONAL_JUMP)  ; LAB_004c8b9a

