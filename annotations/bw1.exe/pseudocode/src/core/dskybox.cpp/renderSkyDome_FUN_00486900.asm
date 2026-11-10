; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dskybox_cpp_renderSkyDome_FUN_00486900(SMRGLSkyTexture *sky_texture,char *texture_name,int brightness_factor)
;
; Parameters:
; SMRGLSkyTexture * Stack[0x4]:4   sky_texture
; char *           Stack[0x8]:4   texture_name
; int              Stack[0xc]:4   brightness_factor
; Local Variables:
; undefined        Stack[-0xcc]:1  local_cc
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
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; XREF[2]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0 at 0054e5d3
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054faf8
;
; Referenced Globals:
;   IMAGE_DOS_HEADER IMAGE_DOS_HEADER_00400000
;   undefined4 DAT_005db724
;   undefined4 DAT_005db72c
;   undefined4 DAT_005db734
;   undefined4 DAT_005db73c
;   undefined4 DAT_00612560
;   undefined4 DAT_006144d4
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01bef1fc
;   undefined4 DAT_01bef200
;   undefined4 DAT_01bef204
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dskybox.cpp_generateSkyDomeVertex_FUN_004867c0
;   core_dtrace.cpp_FUN_0048f210
;   core_dtrace.cpp_FUN_0048f230
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486900
        ;   Label: core_dskybox.cpp_renderSkyDome_FUN_00486900
    PUSH ESI                            ; 00486901
    PUSH EDI                            ; 00486902
    PUSH EBP                            ; 00486903
    SUB ESP,0xbc                        ; 00486904
    MOV EBP,dword ptr [ESP + 0xd0]      ; 0048690a
    MOV ESI,dword ptr [ESP + 0xd4]      ; 00486911
    LEA EDI,[EBP + 0xc]                 ; 00486918
    PUSH EDI                            ; 0048691b
    MOV AL,byte ptr [ESI]               ; 0048691c
        ;   Label: LAB_0048691c
    MOV byte ptr [EDI],AL               ; 0048691e
    CMP AL,0x0                          ; 00486920
    JZ 0x00486934                       ; 00486922
        ;   XREF to: 00486934 (CONDITIONAL_JUMP)  ; LAB_00486934
    MOV AL,byte ptr [ESI + 0x1]         ; 00486924
    ADD ESI,0x2                         ; 00486927
    MOV byte ptr [EDI + 0x1],AL         ; 0048692a
    ADD EDI,0x2                         ; 0048692d
    CMP AL,0x0                          ; 00486930
    JNZ 0x0048691c                      ; 00486932
        ;   XREF to: 0048691c (CONDITIONAL_JUMP)  ; LAB_0048691c
    POP EDI                             ; 00486934
        ;   Label: LAB_00486934
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00486935
    PUSH 0x1fe5c1c                      ; 0048693c | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0x4c]                ; 00486941
    MOV dword ptr [EBP],EAX             ; 00486945
    LEA EDI,[ESP + 0x7c]                ; 00486948
    CALL core_dtrace.cpp_FUN_0048f210   ; 0048694c
        ;   XREF to: 0048f210 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048f210()
    LEA ESI,[ESP + 0x4c]                ; 00486951
    ADD ESP,0x4                         ; 00486955
    MOVSD ES:EDI,ESI                    ; 00486958
    MOVSD ES:EDI,ESI                    ; 00486959
    MOVSD ES:EDI,ESI                    ; 0048695a
    PUSH 0x1fe5c1c                      ; 0048695b | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0x58]                ; 00486960
    LEA EDI,[ESP + 0x64]                ; 00486964
    CALL core_dtrace.cpp_FUN_0048f230   ; 00486968
        ;   XREF to: 0048f230 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048f230()
    LEA ESI,[ESP + 0x58]                ; 0048696d
    ADD ESP,0x4                         ; 00486971
    MOVSD ES:EDI,ESI                    ; 00486974
    MOVSD ES:EDI,ESI                    ; 00486975
    MOVSD ES:EDI,ESI                    ; 00486976
    FLD float ptr [ESP + 0x78]          ; 00486977
    FADD float ptr [ESP + 0x60]         ; 0048697b
    FLD double ptr [0x005db724]         ; 0048697f | DAT_005db724
    FXCH                                ; 00486985
    FMUL ST1                            ; 00486987
    FLD float ptr [ESP + 0x80]          ; 00486989
    FLD float ptr [ESP + 0x60]          ; 00486990
    FSUB float ptr [ESP + 0x78]         ; 00486994
    FXCH                                ; 00486998
    FADD float ptr [ESP + 0x68]         ; 0048699a
    FXCH                                ; 0048699e
    FMUL ST3                            ; 004869a0
    FXCH                                ; 004869a2
    FMULP ST3                           ; 004869a4
    FMUL double ptr [0x005db72c]        ; 004869a6 | DAT_005db72c
    FLDZ                                ; 004869ac
    XOR EDX,EDX                         ; 004869ae
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004869b0
    MOV dword ptr [0x006144d4],EDX      ; 004869b4 | DAT_006144d4
    MOV [0x01bef200],EAX                ; 004869ba | DAT_01bef200
    FXCH ST2                            ; 004869bf
    FSTP float ptr [0x01bef1fc]         ; 004869c1 | DAT_01bef1fc
    FXCH ST2                            ; 004869c7
    FSTP float ptr [0x01bef204]         ; 004869c9 | DAT_01bef204
    FXCH                                ; 004869cf
    FSTP float ptr [ESP + 0xa0]         ; 004869d1
    FCOMP float ptr [ESP + 0xa0]        ; 004869d8
    FNSTSW AX                           ; 004869df
    SAHF                                ; 004869e1
    JC 0x00486dcf                       ; 004869e2
        ;   XREF to: 00486dcf (CONDITIONAL_JUMP)  ; LAB_00486dcf
    FLD float ptr [ESP + 0x64]          ; 004869e8
        ;   Label: LAB_004869e8
    FSUB float ptr [ESP + 0x7c]         ; 004869ec
    FMUL double ptr [0x005db72c]        ; 004869f0 | DAT_005db72c
    FST float ptr [ESP + 0x9c]          ; 004869f6
    FCOMP float ptr [0x006144d4]        ; 004869fd | DAT_006144d4
    FNSTSW AX                           ; 00486a03
    SAHF                                ; 00486a05
    JBE 0x00486a14                      ; 00486a06
        ;   XREF to: 00486a14 (CONDITIONAL_JUMP)  ; LAB_00486a14
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00486a08
    MOV [0x006144d4],EAX                ; 00486a0f | DAT_006144d4
    FLD float ptr [ESP + 0x68]          ; 00486a14
        ;   Label: LAB_00486a14
    FSUB float ptr [ESP + 0x80]         ; 00486a18
    FMUL double ptr [0x005db724]        ; 00486a1f | DAT_005db724
    FMUL double ptr [0x005db72c]        ; 00486a25 | DAT_005db72c
    FST float ptr [ESP + 0x98]          ; 00486a2b
    FCOMP float ptr [0x006144d4]        ; 00486a32 | DAT_006144d4
    FNSTSW AX                           ; 00486a38
    SAHF                                ; 00486a3a
    JBE 0x00486a49                      ; 00486a3b
        ;   XREF to: 00486a49 (CONDITIONAL_JUMP)  ; LAB_00486a49
    MOV EAX,dword ptr [ESP + 0x98]      ; 00486a3d
    MOV [0x006144d4],EAX                ; 00486a44 | DAT_006144d4
    PUSH 0x1bef1fc                      ; 00486a49 | DAT_01bef1fc
        ;   Label: LAB_00486a49
    MOV ECX,dword ptr [0x00612560]      ; 00486a4e | DAT_00612560
    PUSH ECX                            ; 00486a54 | DAT_01bc120c
    MOV EBX,0x4                         ; 00486a55
    XOR ESI,ESI                         ; 00486a5a
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 00486a5c
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV ECX,dword ptr [0x00612560]      ; 00486a61 | DAT_00612560
    ADD ESP,0x8                         ; 00486a67
    LEA EAX,[EBX + EBP*0x1]             ; 00486a6a
    MOV dword ptr [ESP + 0x4],EBX       ; 00486a6d
    PUSH EAX                            ; 00486a71
    MOV dword ptr [ESP + 0x18],ESI      ; 00486a72
    MOV dword ptr [ESP + 0x14],ESI      ; 00486a76
    PUSH ECX                            ; 00486a7a | DAT_01bc120c
    MOV dword ptr [ESP + 0x14],ESI      ; 00486a7b
    MOV dword ptr [ESP + 0x10],ESI      ; 00486a7f
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 00486a83
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    FLD double ptr [0x005db734]         ; 00486a88 | DAT_005db734
    FSIN                                ; 00486a8e
    ADD ESP,0x8                         ; 00486a90
    FLD float ptr [0x006144d4]          ; 00486a93 | DAT_006144d4
    FXCH                                ; 00486a99
    FMUL ST1                            ; 00486a9b
    FLD double ptr [0x005db73c]         ; 00486a9d | DAT_005db73c
    FXCH                                ; 00486aa3
    FMUL ST1                            ; 00486aa5
    FXCH ST2                            ; 00486aa7
    FMULP                               ; 00486aa9
    FXCH                                ; 00486aab
    CALL crt_math.c_round_FUN_005c03a0  ; 00486aad
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x6c]        ; 00486ab2
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00486ab6
    MOV ECX,dword ptr [0x00612560]      ; 00486aba | DAT_00612560
    MOV dword ptr [ESP + 0x74],EAX      ; 00486ac0
    LEA EAX,[ESP + 0x6c]                ; 00486ac4
    CALL crt_math.c_round_FUN_005c03a0  ; 00486ac8
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EAX                            ; 00486acd
    FISTP dword ptr [ESP + 0x74]        ; 00486ace
    MOV EAX,dword ptr [ECX]             ; 00486ad2
    PUSH EAX                            ; 00486ad4
    CALL engine_special.cpp_FUN_00580173 ; 00486ad5
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00486ada
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00486add
    LEA EAX,[ESP + 0x6c]                ; 00486ae1
    NEG EBX                             ; 00486ae5
    MOV ECX,dword ptr [0x00612560]      ; 00486ae7 | DAT_00612560
    MOV dword ptr [ESP + 0x6c],EBX      ; 00486aed
    PUSH EAX                            ; 00486af1
    MOV EAX,dword ptr [ECX]             ; 00486af2 | DAT_01bc120c
    ADD EAX,0x30                        ; 00486af4
    PUSH EAX                            ; 00486af7
    CALL engine_special.cpp_FUN_00580173 ; 00486af8
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00486afd
    MOV ESI,dword ptr [ESP + 0x74]      ; 00486b00
    LEA EAX,[ESP + 0x6c]                ; 00486b04
    NEG ESI                             ; 00486b08
    MOV ECX,dword ptr [0x00612560]      ; 00486b0a | DAT_00612560
    MOV dword ptr [ESP + 0x74],ESI      ; 00486b10
    PUSH EAX                            ; 00486b14
    MOV EAX,dword ptr [ECX]             ; 00486b15 | DAT_01bc120c
    ADD EAX,0x60                        ; 00486b17
    PUSH EAX                            ; 00486b1a
    CALL engine_special.cpp_FUN_00580173 ; 00486b1b
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00486b20
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00486b23
    NEG EDI                             ; 00486b27
    MOV EAX,[0x00612560]                ; 00486b29 | DAT_00612560
    MOV dword ptr [ESP + 0x6c],EDI      ; 00486b2e
    LEA ECX,[ESP + 0x6c]                ; 00486b32
    MOV EAX,dword ptr [EAX]             ; 00486b36 | DAT_01bc120c
    PUSH ECX                            ; 00486b38
    ADD EAX,0x90                        ; 00486b39
    PUSH EAX                            ; 00486b3e
    CALL engine_special.cpp_FUN_00580173 ; 00486b3f
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00486b44
    MOV EAX,[0x00612560]                ; 00486b47 | DAT_00612560
    MOV EBX,dword ptr [EAX]             ; 00486b4c | DAT_01bc120c
    MOV ECX,dword ptr [EBP]             ; 00486b4e
    MOV dword ptr [EBX + 0x20],ECX      ; 00486b51
    MOV EBX,dword ptr [EAX]             ; 00486b54 | DAT_01bc120c
    MOV dword ptr [EBX + 0x24],ECX      ; 00486b56
    MOV ECX,dword ptr [EAX]             ; 00486b59 | DAT_01bc120c
    MOV EBX,dword ptr [EBP]             ; 00486b5b
    MOV dword ptr [ECX + 0x28],EBX      ; 00486b5e
    MOV ECX,dword ptr [EAX]             ; 00486b61 | DAT_01bc120c
    MOV dword ptr [ECX + 0x2c],0x0      ; 00486b63
    MOV ECX,dword ptr [EAX]             ; 00486b6a | DAT_01bc120c
    MOV EBX,dword ptr [EBP]             ; 00486b6c
    MOV dword ptr [ECX + 0x50],EBX      ; 00486b6f
    MOV ECX,dword ptr [EAX]             ; 00486b72 | DAT_01bc120c
    MOV dword ptr [ECX + 0x54],EBX      ; 00486b74
    MOV EBX,dword ptr [EAX]             ; 00486b77 | DAT_01bc120c
    MOV ECX,dword ptr [EBP]             ; 00486b79
    MOV dword ptr [EBX + 0x58],ECX      ; 00486b7c
    MOV ECX,dword ptr [EAX]             ; 00486b7f | DAT_01bc120c
    MOV dword ptr [ECX + 0x5c],0x0      ; 00486b81
    MOV EBX,dword ptr [EAX]             ; 00486b88 | DAT_01bc120c
    MOV ECX,dword ptr [EBP]             ; 00486b8a
    MOV dword ptr [EBX + 0x80],ECX      ; 00486b8d
    MOV EBX,dword ptr [EAX]             ; 00486b93 | DAT_01bc120c
    MOV dword ptr [EBX + 0x84],ECX      ; 00486b95
    MOV EBX,dword ptr [EAX]             ; 00486b9b | DAT_01bc120c
    MOV dword ptr [EBX + 0x88],ECX      ; 00486b9d
    MOV ECX,dword ptr [EAX]             ; 00486ba3 | DAT_01bc120c
    MOV dword ptr [ECX + 0x8c],0x0      ; 00486ba5
    MOV EBX,dword ptr [EAX]             ; 00486baf | DAT_01bc120c
    MOV ECX,dword ptr [EBP]             ; 00486bb1
    MOV dword ptr [EBX + 0xb0],ECX      ; 00486bb4
    MOV EBX,dword ptr [EAX]             ; 00486bba | DAT_01bc120c
    MOV dword ptr [EBX + 0xb4],ECX      ; 00486bbc
    MOV EBX,dword ptr [EAX]             ; 00486bc2 | DAT_01bc120c
    MOV ESI,0x1                         ; 00486bc4
    MOV dword ptr [EBX + 0xb8],ECX      ; 00486bc9
    MOV EDI,0x3                         ; 00486bcf
    MOV ECX,dword ptr [EAX]             ; 00486bd4 | DAT_01bc120c
    PUSH 0x2c5                          ; 00486bd6
    XOR EDX,EDX                         ; 00486bdb
    MOV dword ptr [ECX + 0xbc],0x0      ; 00486bdd
    MOV ECX,0x80000                     ; 00486be7
    MOV dword ptr [ESP + 0x1c],EDX      ; 00486bec
    MOV dword ptr [ESP + 0x28],ESI      ; 00486bf0
    MOV dword ptr [ESP + 0x20],ECX      ; 00486bf4
    MOV EBX,ECX                         ; 00486bf8
    MOV dword ptr [ESP + 0x24],ECX      ; 00486bfa
    MOV dword ptr [ESP + 0x2c],ECX      ; 00486bfe
    MOV dword ptr [ESP + 0x30],ECX      ; 00486c02
    MOV ECX,0x2                         ; 00486c06
    MOV dword ptr [ESP + 0x40],EDI      ; 00486c0b
    MOV dword ptr [ESP + 0x34],ECX      ; 00486c0f
    LEA ECX,[ESP + 0x4]                 ; 00486c13
    XOR EDI,EDI                         ; 00486c17
    PUSH ECX                            ; 00486c19
    MOV dword ptr [ESP + 0x3c],EBX      ; 00486c1a
    MOV dword ptr [ESP + 0x40],EBX      ; 00486c1e
    PUSH EAX                            ; 00486c22 | DAT_01bc120c
    MOV dword ptr [ESP + 0x4c],EBX      ; 00486c23
    MOV dword ptr [ESP + 0x50],EBX      ; 00486c27
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210 ; 00486c2b
        ;   XREF to: 00482210 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 00486c30
    MOV dword ptr [ESP + 0xa8],EDI      ; 00486c33
    MOV ESI,dword ptr [ESP + 0xa8]      ; 00486c3a
        ;   Label: LAB_00486c3a
    XOR EBX,EBX                         ; 00486c41
    PUSH ESI                            ; 00486c43
        ;   Label: LAB_00486c43
    PUSH EBX                            ; 00486c44
    PUSH EDI                            ; 00486c45
    PUSH EBP                            ; 00486c46
    INC ESI                             ; 00486c47
    INC EBX                             ; 00486c48
    CALL core_dskybox.cpp_generateSkyDomeVertex_FUN_004867c0 ; 00486c49
        ;   XREF to: 004867c0 (UNCONDITIONAL_CALL)  ; undefined core_dskybox.cpp_generateSkyDomeVertex_FUN_004867c0()
    ADD ESP,0x10                        ; 00486c4e
    CMP EBX,0x4                         ; 00486c51
    JL 0x00486c43                       ; 00486c54
        ;   XREF to: 00486c43 (CONDITIONAL_JUMP)  ; LAB_00486c43
    MOV ESI,dword ptr [ESP + 0xa8]      ; 00486c56
    ADD ESI,0x4                         ; 00486c5d
    INC EDI                             ; 00486c60
    MOV dword ptr [ESP + 0xa8],ESI      ; 00486c61
    CMP EDI,0x10                        ; 00486c68
    JLE 0x00486c3a                      ; 00486c6b
        ;   XREF to: 00486c3a (CONDITIONAL_JUMP)  ; LAB_00486c3a
    XOR EDI,EDI                         ; 00486c6d
    MOV dword ptr [ESP + 0xac],EDI      ; 00486c6f
    MOV dword ptr [ESP + 0xa4],EDI      ; 00486c76
    MOV EAX,dword ptr [ESP + 0xac]      ; 00486c7d
        ;   Label: LAB_00486c7d
    MOV dword ptr [ESP + 0xb0],EAX      ; 00486c84
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00486c8b
    MOV EDX,EAX                         ; 00486c92
    SAR EDX,0x1f                        ; 00486c94
    SHL EDX,0x2                         ; 00486c97
    SBB EAX,EDX                         ; 00486c9a
    SAR EAX,0x2                         ; 00486c9c
    MOV ESI,0x1000000                   ; 00486c9f
    AND EAX,0xffffff                    ; 00486ca4
    XOR EBX,EBX                         ; 00486ca9
    MOV dword ptr [ESP + 0xb8],EAX      ; 00486cab
    ADD EAX,0x400000                    ; 00486cb2 | IMAGE_DOS_HEADER_00400000
    XOR EDI,EDI                         ; 00486cb7
    MOV dword ptr [ESP + 0xb4],EAX      ; 00486cb9
    MOV ECX,dword ptr [ESP + 0xb0]      ; 00486cc0
        ;   Label: LAB_00486cc0
    ADD ECX,EDI                         ; 00486cc7
    LEA EAX,[ECX + 0x1]                 ; 00486cc9
    MOV dword ptr [ESP + 0x8c],EAX      ; 00486ccc
    LEA EAX,[ECX + 0x5]                 ; 00486cd3
    MOV EDX,EBX                         ; 00486cd6
    MOV dword ptr [ESP + 0x90],EAX      ; 00486cd8
    LEA EAX,[ECX + 0x4]                 ; 00486cdf
    SAR EDX,0x1f                        ; 00486ce2
    MOV dword ptr [ESP + 0x94],EAX      ; 00486ce5
    MOV EAX,EBX                         ; 00486cec
    SHL EDX,0x2                         ; 00486cee
    SBB EAX,EDX                         ; 00486cf1
    SAR EAX,0x2                         ; 00486cf3
    MOV EBP,EAX                         ; 00486cf6
    MOV EDX,ESI                         ; 00486cf8
    MOV EAX,ESI                         ; 00486cfa
    SAR EDX,0x1f                        ; 00486cfc
    SHL EDX,0x2                         ; 00486cff
    SBB EAX,EDX                         ; 00486d02
    SAR EAX,0x2                         ; 00486d04
    MOV dword ptr [ESP + 0x18],ECX      ; 00486d07
    MOV ECX,dword ptr [ESP + 0xb8]      ; 00486d0b
    MOV dword ptr [ESP + 0x1c],ECX      ; 00486d12
    MOV ECX,dword ptr [ESP + 0x8c]      ; 00486d16
    PUSH 0x2c5                          ; 00486d1d
    MOV dword ptr [ESP + 0x28],ECX      ; 00486d22
    MOV ECX,dword ptr [ESP + 0xbc]      ; 00486d26
    INC EDI                             ; 00486d2d
    MOV dword ptr [ESP + 0x2c],ECX      ; 00486d2e
    MOV ECX,dword ptr [ESP + 0x94]      ; 00486d32
    ADD EBX,0x1000000                   ; 00486d39
    MOV dword ptr [ESP + 0x34],ECX      ; 00486d3f
    MOV ECX,dword ptr [ESP + 0xb8]      ; 00486d43
    XOR EAX,0xffffff                    ; 00486d4a
    MOV dword ptr [ESP + 0x38],ECX      ; 00486d4f
    MOV dword ptr [ESP + 0x30],EAX      ; 00486d53
    MOV dword ptr [ESP + 0x3c],EAX      ; 00486d57
    MOV EAX,dword ptr [ESP + 0x98]      ; 00486d5b
    MOV dword ptr [ESP + 0x44],ECX      ; 00486d62
    MOV dword ptr [ESP + 0x40],EAX      ; 00486d66
    LEA EAX,[ESP + 0x4]                 ; 00486d6a
    XOR EBP,0xffffff                    ; 00486d6e
    PUSH EAX                            ; 00486d74
    MOV EAX,[0x00612560]                ; 00486d75 | DAT_00612560
    MOV dword ptr [ESP + 0x28],EBP      ; 00486d7a
    PUSH EAX                            ; 00486d7e | DAT_01bc120c
    MOV dword ptr [ESP + 0x50],EBP      ; 00486d7f
    ADD ESI,0x1000000                   ; 00486d83
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210 ; 00486d89
        ;   XREF to: 00482210 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 00486d8e
    CMP EDI,0x3                         ; 00486d91
    JL 0x00486cc0                       ; 00486d94
        ;   XREF to: 00486cc0 (CONDITIONAL_JUMP)  ; LAB_00486cc0
    MOV EDX,dword ptr [ESP + 0xac]      ; 00486d9a
    MOV AH,byte ptr [ESP + 0xa7]        ; 00486da1
    ADD EDX,0x4                         ; 00486da8
    INC AH                              ; 00486dab
    MOV dword ptr [ESP + 0xac],EDX      ; 00486dad
    MOV byte ptr [ESP + 0xa7],AH        ; 00486db4
    CMP EDX,0x40                        ; 00486dbb
    JNZ 0x00486c7d                      ; 00486dbe
        ;   XREF to: 00486c7d (CONDITIONAL_JUMP)  ; LAB_00486c7d
    ADD ESP,0xbc                        ; 00486dc4
    POP EBP                             ; 00486dca
    POP EDI                             ; 00486dcb
    POP ESI                             ; 00486dcc
    POP EBX                             ; 00486dcd
    RET                                 ; 00486dce
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00486dcf
        ;   Label: LAB_00486dcf
    MOV [0x006144d4],EAX                ; 00486dd6 | DAT_006144d4
    JMP 0x004869e8                      ; 00486ddb
        ;   XREF to: 004869e8 (UNCONDITIONAL_JUMP)  ; LAB_004869e8

