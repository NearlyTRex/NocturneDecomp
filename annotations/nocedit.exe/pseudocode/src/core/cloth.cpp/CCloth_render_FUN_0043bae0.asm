; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_render_FUN_0043bae0(CCloth *this_ptr,int use_joined_light)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   use_joined_light
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; SMRGLPrimitiveQuad * Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_cloth.cpp_CClothList_render_FUN_0043c320 at 0043c376
;   core_cloth.cpp_CCloth_boneEditor_FUN_0043c880 at 0043caf9
;   core_gabriela.cpp_CGabriella_renderOpaque_FUN_004d6140 at 004d6185
;   core_mimic.cpp_CMimic_renderBackground_FUN_005208b0 at 00520918
;   core_mimic.cpp_CMimic_renderMirrored_FUN_005205f0 at 00520708
;   core_svetlana.cpp_CSvetlana_renderOpaque_FUN_005d9bc0 at 005d9d0a
;   core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005e6da0 at 005e6e2e
;
; Referenced Globals:
;   double DOUBLE_0061855a = 65535
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   SMRGLPrimitiveQuad[1000] g_ClothBackfaceBuffer
;   undefined4 DAT_00827504
;   undefined4 DAT_00827518
;   undefined4 DAT_0082751c
;   undefined4 DAT_00827520
;   undefined4 DAT_00827524
;   undefined4 DAT_00827528
;   undefined4 DAT_0082752c
;   undefined4 DAT_00827548
;   undefined4 DAT_0082754c
;   undefined4 DAT_00827590
;   CDemonRenderer g_CDemonRendererInstance
;   ... and 1 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_0056e7c0
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043bae0
        ;   Label: core_cloth.cpp_CCloth_render_FUN_0043bae0
    PUSH ESI                            ; 0043bae1
    PUSH EDI                            ; 0043bae2
    PUSH EBP                            ; 0043bae3
    SUB ESP,0x14                        ; 0043bae4
    MOV EBP,dword ptr [ESP + 0x28]      ; 0043bae7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0043baeb
    MOV EDX,dword ptr [EBP + 0x10c]     ; 0043baef
    PUSH EDX                            ; 0043baf5
    MOV ECX,dword ptr [EBP + 0x104]     ; 0043baf6
    PUSH ECX                            ; 0043bafc
    MOV ESI,dword ptr [0x006810c8]      ; 0043bafd | g_CDemonSetPtr
    PUSH ESI                            ; 0043bb03 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_0056e7c0 ; 0043bb04
        ;   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_0056e7c0(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    ADD ESP,0xc                         ; 0043bb09
    PUSH 0x1                            ; 0043bb0c
    MOV EDI,dword ptr [0x006703ec]      ; 0043bb0e | g_CDemonRendererPtr2
    PUSH EDI                            ; 0043bb14 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0043bb15
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0043bb1a
    PUSH 0xffff                         ; 0043bb1d
    MOV EAX,[0x006703ec]                ; 0043bb22 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0043bb27 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0043bb28
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0043bb2d
    MOV EDX,dword ptr [0x006703ec]      ; 0043bb30 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0043bb36 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0043bb37
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    FLD float ptr [EBP + 0x3ce88]       ; 0043bb3c
    FMUL double ptr [0x0061855a]        ; 0043bb42 | DOUBLE_0061855a
    ADD ESP,0x4                         ; 0043bb48
    CALL crt_math.c_round_FUN_005fe6b0  ; 0043bb4b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x4]         ; 0043bb50
    MOV ECX,dword ptr [ESP + 0x4]       ; 0043bb54
    CMP ECX,0x3e8                       ; 0043bb58
    JL 0x0043bd04                       ; 0043bb5e
        ;   XREF to: 0043bd04 (CONDITIONAL_JUMP)  ; LAB_0043bd04
    CMP ECX,0xf618                      ; 0043bb64
    JL 0x0043bd0c                       ; 0043bb6a
        ;   XREF to: 0043bd0c (CONDITIONAL_JUMP)  ; LAB_0043bd0c
    LEA EAX,[EBP + 0x124]               ; 0043bb70
        ;   Label: LAB_0043bb70
    PUSH EAX                            ; 0043bb76
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 ; 0043bb77
        ;   XREF to: 005dd800 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture)
    MOV EDX,dword ptr [EBP + 0x3ce84]   ; 0043bb7c
    ADD ESP,0x4                         ; 0043bb82
    TEST EDX,EDX                        ; 0043bb85
    JNZ 0x0043bd76                      ; 0043bb87
        ;   XREF to: 0043bd76 (CONDITIONAL_JUMP)  ; LAB_0043bd76
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043bb8d
    PUSH EDX                            ; 0043bb93
    MOV EDX,EAX                         ; 0043bb94
    SAR EDX,0x1f                        ; 0043bb96
    SUB EAX,EDX                         ; 0043bb99
    SAR EAX,0x1                         ; 0043bb9b
    PUSH 0x4                            ; 0043bb9d
    MOV ESI,dword ptr [EBP + 0x10c]     ; 0043bb9f
    PUSH ESI                            ; 0043bba5
    MOV EDI,dword ptr [EBP + 0x114]     ; 0043bba6
    PUSH EDI                            ; 0043bbac
    PUSH EAX                            ; 0043bbad
    MOV EAX,dword ptr [EBP + 0x104]     ; 0043bbae
    PUSH EAX                            ; 0043bbb4
    MOV EDX,dword ptr [0x006810c8]      ; 0043bbb5 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 0043bbbb | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 ; 0043bbbc
        ;   XREF to: 0056eac0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 0043bbc1
    TEST EBX,EBX                        ; 0043bbc4
    JZ 0x0043bc20                       ; 0043bbc6
        ;   XREF to: 0043bc20 (CONDITIONAL_JUMP)  ; LAB_0043bc20
    MOV ECX,dword ptr [EBP + 0x3f028]   ; 0043bbc8
    XOR EBX,EBX                         ; 0043bbce
    TEST ECX,ECX                        ; 0043bbd0
    JLE 0x0043bc20                      ; 0043bbd2
        ;   XREF to: 0043bc20 (CONDITIONAL_JUMP)  ; LAB_0043bc20
    MOV EAX,EBP                         ; 0043bbd4
    MOV EDX,dword ptr [EAX + 0x3f02c]   ; 0043bbd6
        ;   Label: LAB_0043bbd6
    IMUL EDX,EDX,0x30                   ; 0043bbdc
    MOV ECX,dword ptr [0x006703ec]      ; 0043bbdf | g_CDemonRendererPtr2
    MOV ESI,dword ptr [ECX]             ; 0043bbe5 | g_CDemonRendererInstance
    ADD ESI,EDX                         ; 0043bbe7
    MOV dword ptr [ESP],ESI             ; 0043bbe9
    MOV EDI,dword ptr [ESP]             ; 0043bbec
    MOV ESI,dword ptr [EAX + 0x3f98c]   ; 0043bbef
    MOV dword ptr [EDI + 0x20],ESI      ; 0043bbf5
    MOV ESI,dword ptr [ECX]             ; 0043bbf8 | g_CDemonRendererInstance
    MOV EDI,dword ptr [EAX + 0x3fb1c]   ; 0043bbfa
    MOV dword ptr [EDX + ESI*0x1 + 0x24],EDI ; 0043bc00
    MOV ECX,dword ptr [ECX]             ; 0043bc04 | g_CDemonRendererInstance
    ADD EDX,ECX                         ; 0043bc06
    MOV ECX,dword ptr [EAX + 0x3fcac]   ; 0043bc08
    MOV dword ptr [EDX + 0x28],ECX      ; 0043bc0e
    INC EBX                             ; 0043bc11
    MOV ESI,dword ptr [EBP + 0x3f028]   ; 0043bc12
    ADD EAX,0x4                         ; 0043bc18
    CMP EBX,ESI                         ; 0043bc1b
    JL 0x0043bbd6                       ; 0043bc1d
        ;   XREF to: 0043bbd6 (CONDITIONAL_JUMP)  ; LAB_0043bbd6
    NOP                                 ; 0043bc1f
    CMP dword ptr [ESP + 0x4],0xf618    ; 0043bc20
        ;   Label: LAB_0043bc20
    JGE 0x0043bd20                      ; 0043bc28
        ;   XREF to: 0043bd20 (CONDITIONAL_JUMP)  ; LAB_0043bd20
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043bc2e
    MOV EDX,EAX                         ; 0043bc34
    SAR EDX,0x1f                        ; 0043bc36
    SUB EAX,EDX                         ; 0043bc39
    SAR EAX,0x1                         ; 0043bc3b
    PUSH 0x267                          ; 0043bc3d
    PUSH EAX                            ; 0043bc42
    MOV ECX,dword ptr [EBP + 0x114]     ; 0043bc43
    PUSH ECX                            ; 0043bc49
    MOV EBX,dword ptr [0x006810c8]      ; 0043bc4a | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 0043bc50 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 ; 0043bc51
        ;   XREF to: 00570770 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
        ;   Label: LAB_0043bc51
    ADD ESP,0x10                        ; 0043bc56
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043bc59
    MOV EDX,EAX                         ; 0043bc5f
    SAR EDX,0x1f                        ; 0043bc61
    SUB EAX,EDX                         ; 0043bc64
    SAR EAX,0x1                         ; 0043bc66
    PUSH 0x0                            ; 0043bc68
    MOV EDX,EAX                         ; 0043bc6a
    SHL EAX,0x3                         ; 0043bc6c
    MOV ESI,dword ptr [EBP + 0x10c]     ; 0043bc6f
    LEA ECX,[EDX + EAX*0x1]             ; 0043bc75
    PUSH 0x4                            ; 0043bc78
    SHL ECX,0x3                         ; 0043bc7a
    MOV EAX,dword ptr [EBP + 0x114]     ; 0043bc7d
    PUSH ESI                            ; 0043bc83
    ADD EAX,ECX                         ; 0043bc84
    PUSH EAX                            ; 0043bc86
    PUSH EDX                            ; 0043bc87
    MOV EDI,dword ptr [EBP + 0x104]     ; 0043bc88
    PUSH EDI                            ; 0043bc8e
    MOV EAX,[0x006810c8]                ; 0043bc8f | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 0043bc94 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 ; 0043bc95
        ;   XREF to: 0056eac0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 0043bc9a
    CMP dword ptr [ESP + 0x4],0xf618    ; 0043bc9d
    JGE 0x0043bd45                      ; 0043bca5
        ;   XREF to: 0043bd45 (CONDITIONAL_JUMP)  ; LAB_0043bd45
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043bcab
    MOV EDX,EAX                         ; 0043bcb1
    SAR EDX,0x1f                        ; 0043bcb3
    SUB EAX,EDX                         ; 0043bcb6
    SAR EAX,0x1                         ; 0043bcb8
    PUSH 0x267                          ; 0043bcba
    PUSH EAX                            ; 0043bcbf
    MOV EDX,EAX                         ; 0043bcc0
    SHL EAX,0x3                         ; 0043bcc2
    ADD EDX,EAX                         ; 0043bcc5
    SHL EDX,0x3                         ; 0043bcc7
    MOV EAX,dword ptr [EBP + 0x114]     ; 0043bcca
    ADD EAX,EDX                         ; 0043bcd0
    PUSH EAX                            ; 0043bcd2
    MOV EBX,dword ptr [0x006810c8]      ; 0043bcd3 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_0043bcd3
    PUSH EBX                            ; 0043bcd9 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 ; 0043bcda
        ;   XREF to: 00570770 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
        ;   Label: LAB_0043bcda
    ADD ESP,0x10                        ; 0043bcdf
    PUSH 0x0                            ; 0043bce2
    MOV ESI,dword ptr [0x006703ec]      ; 0043bce4 | g_CDemonRendererPtr2
    PUSH ESI                            ; 0043bcea | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0043bceb
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0043bcf0
    PUSH 0x1                            ; 0043bcf3
    MOV EDI,dword ptr [0x006703ec]      ; 0043bcf5 | g_CDemonRendererPtr2
    PUSH EDI                            ; 0043bcfb | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0043bcfc
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0043bd01
    ADD ESP,0x14                        ; 0043bd04
        ;   Label: LAB_0043bd04
    POP EBP                             ; 0043bd07
    POP EDI                             ; 0043bd08
    POP ESI                             ; 0043bd09
    POP EBX                             ; 0043bd0a
    RET                                 ; 0043bd0b
    PUSH ECX                            ; 0043bd0c
        ;   Label: LAB_0043bd0c
    MOV EAX,[0x006703ec]                ; 0043bd0d | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0043bd12 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0043bd13
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0043bd18
    JMP 0x0043bb70                      ; 0043bd1b
        ;   XREF to: 0043bb70 (UNCONDITIONAL_JUMP)  ; LAB_0043bb70
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043bd20
        ;   Label: LAB_0043bd20
    MOV EDX,EAX                         ; 0043bd26
    SAR EDX,0x1f                        ; 0043bd28
    SUB EAX,EDX                         ; 0043bd2b
    SAR EAX,0x1                         ; 0043bd2d
    PUSH -0x1                           ; 0043bd2f
    PUSH EAX                            ; 0043bd31
    MOV EAX,dword ptr [EBP + 0x114]     ; 0043bd32
    PUSH EAX                            ; 0043bd38
    MOV EDX,dword ptr [0x006810c8]      ; 0043bd39 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 0043bd3f | g_CDemonSetInstance
    JMP 0x0043bc51                      ; 0043bd40
        ;   XREF to: 0043bc51 (UNCONDITIONAL_JUMP)  ; LAB_0043bc51
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043bd45
        ;   Label: LAB_0043bd45
    MOV EDX,EAX                         ; 0043bd4b
    SAR EDX,0x1f                        ; 0043bd4d
    SUB EAX,EDX                         ; 0043bd50
    SAR EAX,0x1                         ; 0043bd52
    PUSH -0x1                           ; 0043bd54
    PUSH EAX                            ; 0043bd56
    MOV EDX,EAX                         ; 0043bd57
    SHL EAX,0x3                         ; 0043bd59
    ADD EAX,EDX                         ; 0043bd5c
    SHL EAX,0x3                         ; 0043bd5e
    MOV EDX,dword ptr [EBP + 0x114]     ; 0043bd61
    ADD EAX,EDX                         ; 0043bd67
    PUSH EAX                            ; 0043bd69
    MOV ECX,dword ptr [0x006810c8]      ; 0043bd6a | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 0043bd70 | g_CDemonSetInstance
    JMP 0x0043bcda                      ; 0043bd71
        ;   XREF to: 0043bcda (UNCONDITIONAL_JUMP)  ; LAB_0043bcda
    PUSH 0x0                            ; 0043bd76
        ;   Label: LAB_0043bd76
    PUSH 0x4                            ; 0043bd78
    MOV ECX,dword ptr [EBP + 0x10c]     ; 0043bd7a
    PUSH ECX                            ; 0043bd80
    MOV ESI,dword ptr [EBP + 0x114]     ; 0043bd81
    PUSH ESI                            ; 0043bd87
    MOV EDI,dword ptr [EBP + 0x110]     ; 0043bd88
    PUSH EDI                            ; 0043bd8e
    MOV EAX,dword ptr [EBP + 0x104]     ; 0043bd8f
    PUSH EAX                            ; 0043bd95
    MOV EDX,dword ptr [0x006810c8]      ; 0043bd96 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 0043bd9c | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 ; 0043bd9d
        ;   XREF to: 0056eac0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 0043bda2
    TEST EBX,EBX                        ; 0043bda5
    JZ 0x0043be00                       ; 0043bda7
        ;   XREF to: 0043be00 (CONDITIONAL_JUMP)  ; LAB_0043be00
    MOV ECX,dword ptr [EBP + 0x3f028]   ; 0043bda9
    XOR EBX,EBX                         ; 0043bdaf
    TEST ECX,ECX                        ; 0043bdb1
    JLE 0x0043be00                      ; 0043bdb3
        ;   XREF to: 0043be00 (CONDITIONAL_JUMP)  ; LAB_0043be00
    MOV EAX,EBP                         ; 0043bdb5
    MOV ECX,dword ptr [EAX + 0x3f02c]   ; 0043bdb7
        ;   Label: LAB_0043bdb7
    IMUL ECX,ECX,0x30                   ; 0043bdbd
    MOV EDX,dword ptr [0x006703ec]      ; 0043bdc0 | g_CDemonRendererPtr2
    MOV EDI,dword ptr [EDX]             ; 0043bdc6 | g_CDemonRendererInstance
    MOV ESI,dword ptr [EAX + 0x3f98c]   ; 0043bdc8
    MOV dword ptr [ECX + EDI*0x1 + 0x20],ESI ; 0043bdce
    MOV ESI,dword ptr [EDX]             ; 0043bdd2 | g_CDemonRendererInstance
    ADD ESI,ECX                         ; 0043bdd4
    MOV dword ptr [ESP],ESI             ; 0043bdd6
    MOV EDI,dword ptr [ESP]             ; 0043bdd9
    MOV ESI,dword ptr [EAX + 0x3fb1c]   ; 0043bddc
    MOV dword ptr [EDI + 0x24],ESI      ; 0043bde2
    MOV EDX,dword ptr [EDX]             ; 0043bde5 | g_CDemonRendererInstance
    ADD ECX,EDX                         ; 0043bde7
    MOV EDX,dword ptr [EAX + 0x3fcac]   ; 0043bde9
    MOV dword ptr [ECX + 0x28],EDX      ; 0043bdef
    INC EBX                             ; 0043bdf2
    MOV ESI,dword ptr [EBP + 0x3f028]   ; 0043bdf3
    ADD EAX,0x4                         ; 0043bdf9
    CMP EBX,ESI                         ; 0043bdfc
    JL 0x0043bdb7                       ; 0043bdfe
        ;   XREF to: 0043bdb7 (CONDITIONAL_JUMP)  ; LAB_0043bdb7
    CMP dword ptr [ESP + 0x4],0xf618    ; 0043be00
        ;   Label: LAB_0043be00
    JGE 0x0043bf04                      ; 0043be08
        ;   XREF to: 0043bf04 (CONDITIONAL_JUMP)  ; LAB_0043bf04
    PUSH 0x267                          ; 0043be0e
    MOV EBX,dword ptr [EBP + 0x110]     ; 0043be13
    PUSH EBX                            ; 0043be19
    MOV ESI,dword ptr [EBP + 0x114]     ; 0043be1a
    PUSH ESI                            ; 0043be20
    MOV EDI,dword ptr [0x006810c8]      ; 0043be21 | g_CDemonSetPtr
    PUSH EDI                            ; 0043be27 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 ; 0043be28
        ;   XREF to: 00570770 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
        ;   Label: LAB_0043be28
    ADD ESP,0x10                        ; 0043be2d
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043be30
    MOV dword ptr [ESP + 0x8],EAX       ; 0043be36
    CMP EAX,0x3e8                       ; 0043be3a
    JLE 0x0043be49                      ; 0043be3f
        ;   XREF to: 0043be49 (CONDITIONAL_JUMP)  ; LAB_0043be49
    MOV dword ptr [ESP + 0x8],0x3e8     ; 0043be41
    XOR ECX,ECX                         ; 0043be49
        ;   Label: LAB_0043be49
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043be4b
    MOV dword ptr [ESP + 0xc],ECX       ; 0043be4f
    TEST EBX,EBX                        ; 0043be53
    JLE 0x0043bebf                      ; 0043be55
        ;   XREF to: 0043bebf (CONDITIONAL_JUMP)  ; LAB_0043bebf
    MOV dword ptr [ESP + 0x10],0x827500 ; 0043be57 | g_ClothBackfaceBuffer
    IMUL EAX,dword ptr [ESP + 0xc],0x48 ; 0043be5f
        ;   Label: LAB_0043be5f
    MOV EDX,dword ptr [EBP + 0x114]     ; 0043be64
    ADD EDX,EAX                         ; 0043be6a
    MOV ECX,dword ptr [ESP + 0x10]      ; 0043be6c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0043be70
    MOV dword ptr [ECX + 0x4],EAX       ; 0043be73 | DAT_00827504 | DAT_0082754c
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043be76
    XOR EAX,EAX                         ; 0043be79
    TEST ECX,ECX                        ; 0043be7b
    JLE 0x0043bea3                      ; 0043be7d
        ;   XREF to: 0043bea3 (CONDITIONAL_JUMP)  ; LAB_0043bea3
    MOV ECX,dword ptr [ESP + 0x10]      ; 0043be7f
    MOV EBX,dword ptr [EDX + 0x4]       ; 0043be83
        ;   Label: LAB_0043be83
    SUB EBX,EAX                         ; 0043be86
    DEC EBX                             ; 0043be88
    IMUL EBX,EBX,0xc                    ; 0043be89
    LEA ESI,[EDX + EBX*0x1]             ; 0043be8c
    LEA EDI,[ECX + 0x18]                ; 0043be8f | DAT_00827518
    LEA ESI,[ESI + 0x18]                ; 0043be92
    MOVSD ES:EDI,ESI                    ; 0043be95 | DAT_00827518 | DAT_00827524
    MOVSD ES:EDI,ESI                    ; 0043be96 | DAT_0082751c | DAT_00827528
    MOVSD ES:EDI,ESI                    ; 0043be97 | DAT_00827520 | DAT_0082752c
    INC EAX                             ; 0043be98
    MOV EBX,dword ptr [EDX + 0x4]       ; 0043be99
    ADD ECX,0xc                         ; 0043be9c
    CMP EAX,EBX                         ; 0043be9f
    JL 0x0043be83                       ; 0043bea1
        ;   XREF to: 0043be83 (CONDITIONAL_JUMP)  ; LAB_0043be83
    MOV ESI,dword ptr [ESP + 0x10]      ; 0043bea3
        ;   Label: LAB_0043bea3
    MOV EDI,dword ptr [ESP + 0xc]       ; 0043bea7
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043beab
    ADD ESI,0x48                        ; 0043beaf
    INC EDI                             ; 0043beb2
    MOV dword ptr [ESP + 0x10],ESI      ; 0043beb3 | DAT_00827548 | DAT_00827590
    MOV dword ptr [ESP + 0xc],EDI       ; 0043beb7
    CMP EDI,EDX                         ; 0043bebb
    JL 0x0043be5f                       ; 0043bebd
        ;   XREF to: 0043be5f (CONDITIONAL_JUMP)  ; LAB_0043be5f
    PUSH 0x0                            ; 0043bebf
        ;   Label: LAB_0043bebf
    PUSH 0x4                            ; 0043bec1
    MOV ECX,dword ptr [EBP + 0x10c]     ; 0043bec3
    PUSH ECX                            ; 0043bec9
    PUSH 0x827500                       ; 0043beca | g_ClothBackfaceBuffer
    MOV EBX,dword ptr [ESP + 0x18]      ; 0043becf
    PUSH EBX                            ; 0043bed3
    MOV ESI,dword ptr [EBP + 0x104]     ; 0043bed4
    PUSH ESI                            ; 0043beda
    MOV EDI,dword ptr [0x006810c8]      ; 0043bedb | g_CDemonSetPtr
    PUSH EDI                            ; 0043bee1 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 ; 0043bee2
        ;   XREF to: 0056eac0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 0043bee7
    CMP dword ptr [ESP + 0x4],0xf618    ; 0043beea
    JGE 0x0043bf20                      ; 0043bef2
        ;   XREF to: 0043bf20 (CONDITIONAL_JUMP)  ; LAB_0043bf20
    PUSH 0x267                          ; 0043bef4
    PUSH EBX                            ; 0043bef9
    PUSH 0x827500                       ; 0043befa | g_ClothBackfaceBuffer
    JMP 0x0043bcd3                      ; 0043beff
        ;   XREF to: 0043bcd3 (UNCONDITIONAL_JUMP)  ; LAB_0043bcd3
    PUSH -0x1                           ; 0043bf04
        ;   Label: LAB_0043bf04
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043bf06
    PUSH EAX                            ; 0043bf0c
    MOV EDX,dword ptr [EBP + 0x114]     ; 0043bf0d
    PUSH EDX                            ; 0043bf13
    MOV ECX,dword ptr [0x006810c8]      ; 0043bf14 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 0043bf1a | g_CDemonSetInstance
    JMP 0x0043be28                      ; 0043bf1b
        ;   XREF to: 0043be28 (UNCONDITIONAL_JUMP)  ; LAB_0043be28
    PUSH -0x1                           ; 0043bf20
        ;   Label: LAB_0043bf20
    PUSH EBX                            ; 0043bf22
    PUSH 0x827500                       ; 0043bf23 | g_ClothBackfaceBuffer
    MOV EDX,dword ptr [0x006810c8]      ; 0043bf28 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 0043bf2e | g_CDemonSetInstance
    JMP 0x0043bcda                      ; 0043bf2f
        ;   XREF to: 0043bcda (UNCONDITIONAL_JUMP)  ; LAB_0043bcda

