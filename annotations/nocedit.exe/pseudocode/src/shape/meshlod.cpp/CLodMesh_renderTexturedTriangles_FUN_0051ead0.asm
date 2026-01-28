; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0 (CLodMesh *this_ptr,int enable_texture_lookup,int use_atlas_mode)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enable_texture_lookup
; int              Stack[0xc]:4   use_atlas_mode
; Local Variables:
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 at 0051e571
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d94f
;
; Referenced Globals:
;   float FLOAT_00638529 = 65535
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   SMRGLTextureBasic g_TempTextureDescriptor
;   undefined4 DAT_02f31248
;   undefined4 DAT_02f31249
;   undefined4 DAT_02f3124a
;   undefined4 DAT_02f3124b
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
;   engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
;   shape_design.c_findTextureByFilename_FUN_0046dfc0
;   shape_design.c_fixupCramUV_FUN_0046e090
;   shape_design.c_getAtlasMapIndex_FUN_0046e030
;   shape_design.c_getTextureName_FUN_0046e060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ead0
        ;   Label: shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
    PUSH ESI                            ; 0051ead1
    PUSH EDI                            ; 0051ead2
    PUSH EBP                            ; 0051ead3
    SUB ESP,0x68                        ; 0051ead4
    MOV EDX,0x3                         ; 0051ead7
    MOV EBP,0xffffffff                  ; 0051eadc
    XOR ECX,ECX                         ; 0051eae1
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0051eae3
    MOV dword ptr [ESP + 0x14],ECX      ; 0051eae7
    MOV dword ptr [ESP + 0x10],ECX      ; 0051eaeb
    MOV dword ptr [ESP + 0xc],ECX       ; 0051eaef
    MOV dword ptr [ESP + 0x8],ECX       ; 0051eaf3
    MOV dword ptr [ESP + 0x4],EDX       ; 0051eaf7
    MOV dword ptr [ESP + 0x54],EBP      ; 0051eafb
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051eaff
    MOV dword ptr [ESP + 0x5c],ECX      ; 0051eb02
    TEST EDX,EDX                        ; 0051eb06
    JLE 0x0051eb4a                      ; 0051eb08
        ;   XREF to: 0051eb4a (CONDITIONAL_JUMP)  ; LAB_0051eb4a
    MOV dword ptr [ESP + 0x58],ECX      ; 0051eb0a
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0051eb0e
        ;   Label: LAB_0051eb0e
    MOV EBX,dword ptr [ESP + 0x58]      ; 0051eb12
    MOV EAX,dword ptr [EAX + 0xc]       ; 0051eb16
    ADD EBX,EAX                         ; 0051eb19
    MOV EBP,dword ptr [EBX + 0x40]      ; 0051eb1b
    MOV dword ptr [ESP + 0x60],EBX      ; 0051eb1e
    TEST EBP,EBP                        ; 0051eb22
    JZ 0x0051eb52                       ; 0051eb24
        ;   XREF to: 0051eb52 (CONDITIONAL_JUMP)  ; LAB_0051eb52
    MOV EBX,dword ptr [ESP + 0x5c]      ; 0051eb26
        ;   Label: LAB_0051eb26
    INC EBX                             ; 0051eb2a
    MOV ECX,dword ptr [ESP + 0x58]      ; 0051eb2b
    MOV dword ptr [ESP + 0x5c],EBX      ; 0051eb2f
    MOV EAX,EBX                         ; 0051eb33
    MOV EBX,dword ptr [ESP + 0x7c]      ; 0051eb35
    ADD ECX,0x8c                        ; 0051eb39
    MOV ESI,dword ptr [EBX + 0x8]       ; 0051eb3f
    MOV dword ptr [ESP + 0x58],ECX      ; 0051eb42
    CMP EAX,ESI                         ; 0051eb46
    JL 0x0051eb0e                       ; 0051eb48
        ;   XREF to: 0051eb0e (CONDITIONAL_JUMP)  ; LAB_0051eb0e
    ADD ESP,0x68                        ; 0051eb4a
        ;   Label: LAB_0051eb4a
    POP EBP                             ; 0051eb4d
    POP EDI                             ; 0051eb4e
    POP ESI                             ; 0051eb4f
    POP EBX                             ; 0051eb50
    RET                                 ; 0051eb51
    MOV EBP,dword ptr [EBX]             ; 0051eb52
        ;   Label: LAB_0051eb52
    TEST EBP,EBP                        ; 0051eb54
    JL 0x0051eb66                       ; 0051eb56
        ;   XREF to: 0051eb66 (CONDITIONAL_JUMP)  ; LAB_0051eb66
    CMP dword ptr [ESP + 0x80],0x0      ; 0051eb58
    JNZ 0x0051ec67                      ; 0051eb60
        ;   XREF to: 0051ec67 (CONDITIONAL_JUMP)  ; LAB_0051ec67
    MOV EDI,dword ptr [ESP + 0x60]      ; 0051eb66
        ;   Label: LAB_0051eb66
    MOV ESI,EDI                         ; 0051eb6a
    LEA EAX,[EDI + 0xc]                 ; 0051eb6c
    XOR EBX,EBX                         ; 0051eb6f
    MOV dword ptr [ESP + 0x64],EAX      ; 0051eb71
    MOV EAX,dword ptr [ESI + 0x10]      ; 0051eb75
        ;   Label: LAB_0051eb75
    MOV dword ptr [ESP + EBX*0x1 + 0x18],EAX ; 0051eb78
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0051eb7c
    MOV dword ptr [ESP + 0x48],EAX      ; 0051eb7f
    MOV EAX,dword ptr [EDI + 0x20]      ; 0051eb83
    MOV dword ptr [ESP + 0x4c],EAX      ; 0051eb86
    TEST EBP,EBP                        ; 0051eb8a
    JL 0x0051ebab                       ; 0051eb8c
        ;   XREF to: 0051ebab (CONDITIONAL_JUMP)  ; LAB_0051ebab
    CMP dword ptr [ESP + 0x80],0x0      ; 0051eb8e
    JZ 0x0051ebab                       ; 0051eb96
        ;   XREF to: 0051ebab (CONDITIONAL_JUMP)  ; LAB_0051ebab
    LEA EAX,[ESP + 0x4c]                ; 0051eb98
    PUSH EAX                            ; 0051eb9c
    LEA EAX,[ESP + 0x4c]                ; 0051eb9d
    PUSH EAX                            ; 0051eba1
    PUSH EBP                            ; 0051eba2
    CALL shape_design.c_fixupCramUV_FUN_0046e090 ; 0051eba3
        ;   XREF to: 0046e090 (UNCONDITIONAL_CALL)  ; void shape_design.c_fixupCramUV_FUN_0046e090(int atlas_texture_index, float * u_coord, float * v_coord)
    ADD ESP,0xc                         ; 0051eba8
    FLD float ptr [0x00638529]          ; 0051ebab | FLOAT_00638529
        ;   Label: LAB_0051ebab
    FLD float ptr [ESP + 0x48]          ; 0051ebb1
    FMUL ST1                            ; 0051ebb5
    FLD float ptr [ESP + 0x4c]          ; 0051ebb7
    FMULP ST2                           ; 0051ebbb
    MOV ECX,dword ptr [ESP + 0x64]      ; 0051ebbd
    ADD EDI,0x8                         ; 0051ebc1
    ADD EBX,0xc                         ; 0051ebc4
    CALL crt_math.c_round_FUN_005fe6b0  ; 0051ebc7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0051ebcc
    CALL crt_math.c_round_FUN_005fe6b0  ; 0051ebce
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0051ebd3
    FISTP dword ptr [ESP + 0x50]        ; 0051ebd5
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051ebd9
    FISTP dword ptr [ESP + 0x50]        ; 0051ebdd
    MOV dword ptr [ESP + EBX*0x1 + 0x10],EAX ; 0051ebe1
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051ebe5
    ADD ESI,0x4                         ; 0051ebe9
    MOV dword ptr [ESP + EBX*0x1 + 0x14],EAX ; 0051ebec
    CMP ESI,ECX                         ; 0051ebf0
    JNZ 0x0051eb75                      ; 0051ebf2
        ;   XREF to: 0051eb75 (CONDITIONAL_JUMP)  ; LAB_0051eb75
    TEST EBP,EBP                        ; 0051ebf4
    JL 0x0051ec95                       ; 0051ebf6
        ;   XREF to: 0051ec95 (CONDITIONAL_JUMP)  ; LAB_0051ec95
    CMP EBP,dword ptr [ESP + 0x54]      ; 0051ebfc
    JZ 0x0051ec50                       ; 0051ec00
        ;   XREF to: 0051ec50 (CONDITIONAL_JUMP)  ; LAB_0051ec50
    CMP dword ptr [ESP + 0x80],0x0      ; 0051ec02
    JZ 0x0051ec86                       ; 0051ec0a
        ;   XREF to: 0051ec86 (CONDITIONAL_JUMP)  ; LAB_0051ec86
    PUSH EBP                            ; 0051ec0c
    CALL shape_design.c_getAtlasMapIndex_FUN_0046e030 ; 0051ec0d
        ;   XREF to: 0046e030 (UNCONDITIONAL_CALL)  ; int shape_design.c_getAtlasMapIndex_FUN_0046e030(int texture_entry_index)
    ADD ESP,0x4                         ; 0051ec12
    PUSH EAX                            ; 0051ec15
    CALL shape_design.c_getTextureName_FUN_0046e060 ; 0051ec16
        ;   XREF to: 0046e060 (UNCONDITIONAL_CALL)  ; char * shape_design.c_getTextureName_FUN_0046e060(int texture_index)
    ADD ESP,0x4                         ; 0051ec1b
    MOV EDI,0x2f31248                   ; 0051ec1e | DAT_02f31248
    MOV ESI,EAX                         ; 0051ec23
    PUSH EDI                            ; 0051ec25 | DAT_02f31248
    MOV AL,byte ptr [ESI]               ; 0051ec26
        ;   Label: LAB_0051ec26
    MOV byte ptr [EDI],AL               ; 0051ec28 | DAT_02f31248 | DAT_02f3124a
    CMP AL,0x0                          ; 0051ec2a
    JZ 0x0051ec3e                       ; 0051ec2c
        ;   XREF to: 0051ec3e (CONDITIONAL_JUMP)  ; LAB_0051ec3e
    MOV AL,byte ptr [ESI + 0x1]         ; 0051ec2e
    ADD ESI,0x2                         ; 0051ec31
    MOV byte ptr [EDI + 0x1],AL         ; 0051ec34 | DAT_02f31249 | DAT_02f3124b
    ADD EDI,0x2                         ; 0051ec37
    CMP AL,0x0                          ; 0051ec3a
    JNZ 0x0051ec26                      ; 0051ec3c
        ;   XREF to: 0051ec26 (CONDITIONAL_JUMP)  ; LAB_0051ec26
    POP EDI                             ; 0051ec3e
        ;   Label: LAB_0051ec3e
    PUSH 0x2f31240                      ; 0051ec3f | g_TempTextureDescriptor
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 ; 0051ec44
        ;   XREF to: 005dd800 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture)
        ;   Label: LAB_0051ec44
    ADD ESP,0x4                         ; 0051ec49
    MOV dword ptr [ESP + 0x54],EBP      ; 0051ec4c
    MOV EAX,ESP                         ; 0051ec50
        ;   Label: LAB_0051ec50
    PUSH EAX                            ; 0051ec52
    MOV EDX,dword ptr [0x006703ec]      ; 0051ec53 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0051ec59 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0 ; 0051ec5a
        ;   XREF to: 0048b1e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 0051ec5f
    JMP 0x0051eb26                      ; 0051ec62
        ;   XREF to: 0051eb26 (UNCONDITIONAL_JUMP)  ; LAB_0051eb26
    IMUL EBP,EBP,0x48                   ; 0051ec67
        ;   Label: LAB_0051ec67
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0051ec6a
    MOV EAX,dword ptr [EAX + 0x14]      ; 0051ec6e
    ADD EAX,EBP                         ; 0051ec71
    ADD EAX,0x8                         ; 0051ec73
    PUSH EAX                            ; 0051ec76
    CALL shape_design.c_findTextureByFilename_FUN_0046dfc0 ; 0051ec77
        ;   XREF to: 0046dfc0 (UNCONDITIONAL_CALL)  ; int shape_design.c_findTextureByFilename_FUN_0046dfc0(char * filename)
    ADD ESP,0x4                         ; 0051ec7c
    MOV EBP,EAX                         ; 0051ec7f
    JMP 0x0051eb66                      ; 0051ec81
        ;   XREF to: 0051eb66 (UNCONDITIONAL_JUMP)  ; LAB_0051eb66
    IMUL EAX,EBP,0x48                   ; 0051ec86
        ;   Label: LAB_0051ec86
    MOV EBX,dword ptr [ESP + 0x7c]      ; 0051ec89
    MOV EBX,dword ptr [EBX + 0x14]      ; 0051ec8d
    ADD EAX,EBX                         ; 0051ec90
    PUSH EAX                            ; 0051ec92
    JMP 0x0051ec44                      ; 0051ec93
        ;   XREF to: 0051ec44 (UNCONDITIONAL_JUMP)  ; LAB_0051ec44
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0051ec95
        ;   Label: LAB_0051ec95
    AND EAX,0x7f                        ; 0051ec99
    ADD EAX,0x80                        ; 0051ec9c
    NEG EAX                             ; 0051eca1
    PUSH EAX                            ; 0051eca3
    MOV EBX,dword ptr [0x006703ec]      ; 0051eca4 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 0051ecaa | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960 ; 0051ecab
        ;   XREF to: 0048c960 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 0051ecb0
    MOV EAX,ESP                         ; 0051ecb3
    PUSH EAX                            ; 0051ecb5
    MOV ESI,dword ptr [0x006703ec]      ; 0051ecb6 | g_CDemonRendererPtr2
    PUSH ESI                            ; 0051ecbc | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 ; 0051ecbd
        ;   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 0051ecc2
    JMP 0x0051eb26                      ; 0051ecc5
        ;   XREF to: 0051eb26 (UNCONDITIONAL_JUMP)  ; LAB_0051eb26

