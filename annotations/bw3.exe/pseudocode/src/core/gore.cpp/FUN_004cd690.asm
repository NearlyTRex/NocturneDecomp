; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_FUN_004cd690(undefined4 *param_1,int param_2)
;
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
;   core_gore.cpp_CGore_renderDecals_FUN_004ce630 at 004ce67f
;
; Referenced Globals:
;   undefined4 DAT_005c4651
;   undefined4 DAT_005c4659
;   undefined4 DAT_005e0e18
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fed4c
;   undefined4 DAT_005fedac
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b064
;   undefined4 DAT_0060b068
;   undefined4 DAT_0060b06c
;   undefined4 DAT_0060b094
;   undefined4 DAT_0060b098
;   undefined4 DAT_0060b09c
;   ... and 9 more
;
; Called Functions:
;   core_gore.cpp_FUN_004cc970
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
;   engine_drender.cpp_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd690
        ;   Label: core_gore.cpp_FUN_004cd690
    PUSH ESI                            ; 004cd691
    PUSH EDI                            ; 004cd692
    PUSH EBP                            ; 004cd693
    SUB ESP,0x7c                        ; 004cd694
    MOV ESI,dword ptr [ESP + 0x90]      ; 004cd697
    MOV EBX,dword ptr [ESP + 0x94]      ; 004cd69e
    MOV EAX,[0x01d5ba14]                ; 004cd6a5 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004cd6aa
    MOV EDX,dword ptr [ESI + 0x10]      ; 004cd6b1
    MOV ECX,dword ptr [EAX + 0x2c]      ; 004cd6b4
    CMP EDX,ECX                         ; 004cd6b7
    JNZ 0x004cd966                      ; 004cd6b9
        ;   XREF to: 004cd966 (CONDITIONAL_JUMP)  ; LAB_004cd966
    FLD float ptr [ESI + 0x28]          ; 004cd6bf
    FMUL double ptr [0x005c4651]        ; 004cd6c2 | DAT_005c4651
    FADD double ptr [0x005c4659]        ; 004cd6c8 | DAT_005c4659
    CALL crt_math.c_round_FUN_005a3120  ; 004cd6ce
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x78]        ; 004cd6d3
    MOV EDI,dword ptr [ESP + 0x78]      ; 004cd6d7
    TEST EDI,EDI                        ; 004cd6db
    JL 0x004cd96e                       ; 004cd6dd
        ;   XREF to: 004cd96e (CONDITIONAL_JUMP)  ; LAB_004cd96e
    CMP EDI,0xf                         ; 004cd6e3
    JLE 0x004cd6fa                      ; 004cd6e6
        ;   XREF to: 004cd6fa (CONDITIONAL_JUMP)  ; LAB_004cd6fa
    MOV dword ptr [ESP + 0x78],0xf      ; 004cd6e8
    TEST EBX,EBX                        ; 004cd6f0
    JZ 0x004cd6fa                       ; 004cd6f2
        ;   XREF to: 004cd6fa (CONDITIONAL_JUMP)  ; LAB_004cd6fa
    MOV dword ptr [ESI],0x1             ; 004cd6f4
    LEA EAX,[ESI + 0x4]                 ; 004cd6fa
        ;   Label: LAB_004cd6fa
    PUSH EAX                            ; 004cd6fd
    MOV ECX,dword ptr [0x005f2afc]      ; 004cd6fe | DAT_005f2afc
    PUSH ECX                            ; 004cd704 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 004cd705
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EDI,dword ptr [ESI + 0x14]      ; 004cd70a
    ADD ESP,0x8                         ; 004cd70d
    CMP EDI,0x1                         ; 004cd710
    JNZ 0x004cd979                      ; 004cd713
        ;   XREF to: 004cd979 (CONDITIONAL_JUMP)  ; LAB_004cd979
    MOV EAX,0xffff                      ; 004cd719
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004cd71e
    MOV [0x01d22e58],EAX                ; 004cd721 | DAT_01d22e58
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd726
    SUB EAX,EDX                         ; 004cd72d
    MOV EBX,0x5fedac                    ; 004cd72f | DAT_005fedac
    SHL EAX,0x7                         ; 004cd734
    MOV EDX,dword ptr [ESP + 0x78]      ; 004cd737
    ADD EBX,EAX                         ; 004cd73b
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd73d
    SUB EAX,EDX                         ; 004cd744
    SHL EAX,0x3                         ; 004cd746
    ADD EAX,EBX                         ; 004cd749
    XOR EDI,EDI                         ; 004cd74b
    PUSH EAX                            ; 004cd74d
    MOV ECX,dword ptr [0x005f2afc]      ; 004cd74e | DAT_005f2afc
    MOV dword ptr [0x01d22e50],EDI      ; 004cd754 | DAT_01d22e50
    PUSH ECX                            ; 004cd75a | DAT_01bdd7e4
    MOV dword ptr [0x01d22e54],EDI      ; 004cd75b | DAT_01d22e54
    MOV dword ptr [0x01d22e5c],EDI      ; 004cd761 | DAT_01d22e5c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004cd767
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004cd76c
    PUSH EDI                            ; 004cd76f
    LEA EAX,[ESI + 0x1c]                ; 004cd770
    PUSH EAX                            ; 004cd773
    MOV EBX,dword ptr [0x005f2afc]      ; 004cd774 | DAT_005f2afc
    PUSH EBX                            ; 004cd77a | DAT_01bdd7e4
    MOV EDI,0xbf000000                  ; 004cd77b
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 004cd780
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    LEA EBX,[ESP + 0x18]                ; 004cd785
    MOV EDX,dword ptr [0x005f2afc]      ; 004cd789 | DAT_005f2afc
    ADD ESP,0xc                         ; 004cd78f
    XOR EAX,EAX                         ; 004cd792
    MOV dword ptr [ESP + 0x24],EDI      ; 004cd794
    MOV dword ptr [ESP + 0x2c],EAX      ; 004cd798
    LEA EAX,[ESP + 0x24]                ; 004cd79c
    MOV dword ptr [ESP + 0x28],EDI      ; 004cd7a0
    FLD float ptr [EAX]                 ; 004cd7a4
    FMUL float ptr [0x005e0e18]         ; 004cd7a6 | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cd7ac
    FLD float ptr [EAX + 0x4]           ; 004cd7ae
    FMUL float ptr [0x005e0e18]         ; 004cd7b1 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cd7b7
    FLD float ptr [EAX + 0x8]           ; 004cd7ba
    FMUL float ptr [0x005e0e18]         ; 004cd7bd | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cd7c3
    LEA EAX,[ESP + 0xc]                 ; 004cd7c6
    PUSH EAX                            ; 004cd7ca
    MOV EAX,dword ptr [EDX]             ; 004cd7cb | DAT_01bdd7e4
    PUSH EAX                            ; 004cd7cd
    CALL engine_special.cpp_FUN_005632a3 ; 004cd7ce
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0x3f000000                  ; 004cd7d3
    LEA EAX,[ESP + 0x2c]                ; 004cd7d8
    ADD ESP,0x8                         ; 004cd7dc
    XOR EBX,EBX                         ; 004cd7df
    MOV dword ptr [ESP + 0x24],EDX      ; 004cd7e1
    MOV dword ptr [ESP + 0x28],EDI      ; 004cd7e5
    MOV dword ptr [ESP + 0x2c],EBX      ; 004cd7e9
    LEA EBX,[ESP + 0x54]                ; 004cd7ed
    MOV EDX,dword ptr [0x005f2afc]      ; 004cd7f1 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004cd7f7
    FMUL float ptr [0x005e0e18]         ; 004cd7f9 | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cd7ff
    FLD float ptr [EAX + 0x4]           ; 004cd801
    FMUL float ptr [0x005e0e18]         ; 004cd804 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cd80a
    FLD float ptr [EAX + 0x8]           ; 004cd80d
    FMUL float ptr [0x005e0e18]         ; 004cd810 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cd816
    LEA EAX,[ESP + 0x54]                ; 004cd819
    PUSH EAX                            ; 004cd81d
    MOV EAX,dword ptr [EDX]             ; 004cd81e | DAT_01bdd7e4
    ADD EAX,0x30                        ; 004cd820
    PUSH EAX                            ; 004cd823
    MOV EDI,0x3f000000                  ; 004cd824
    CALL engine_special.cpp_FUN_005632a3 ; 004cd829
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x20]                ; 004cd82e
    MOV EDX,dword ptr [0x005f2afc]      ; 004cd832 | DAT_005f2afc
    ADD ESP,0x8                         ; 004cd838
    XOR EAX,EAX                         ; 004cd83b
    MOV dword ptr [ESP + 0x24],EDI      ; 004cd83d
    MOV dword ptr [ESP + 0x2c],EAX      ; 004cd841
    LEA EAX,[ESP + 0x24]                ; 004cd845
    MOV dword ptr [ESP + 0x28],EDI      ; 004cd849
    FLD float ptr [EAX]                 ; 004cd84d
    FMUL float ptr [0x005e0e18]         ; 004cd84f | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cd855
    FLD float ptr [EAX + 0x4]           ; 004cd857
    FMUL float ptr [0x005e0e18]         ; 004cd85a | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cd860
    FLD float ptr [EAX + 0x8]           ; 004cd863
    FMUL float ptr [0x005e0e18]         ; 004cd866 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cd86c
    LEA EAX,[ESP + 0x18]                ; 004cd86f
    PUSH EAX                            ; 004cd873
    MOV EAX,dword ptr [EDX]             ; 004cd874 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 004cd876
    PUSH EAX                            ; 004cd879
    CALL engine_special.cpp_FUN_005632a3 ; 004cd87a
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0xbf000000                  ; 004cd87f
    LEA EAX,[ESP + 0x2c]                ; 004cd884
    ADD ESP,0x8                         ; 004cd888
    XOR EBX,EBX                         ; 004cd88b
    MOV dword ptr [ESP + 0x24],EDX      ; 004cd88d
    MOV dword ptr [ESP + 0x28],EDI      ; 004cd891
    MOV dword ptr [ESP + 0x2c],EBX      ; 004cd895
    LEA EBX,[ESP + 0x48]                ; 004cd899
    MOV EDX,dword ptr [0x005f2afc]      ; 004cd89d | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004cd8a3
    FMUL float ptr [0x005e0e18]         ; 004cd8a5 | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cd8ab
    FLD float ptr [EAX + 0x4]           ; 004cd8ad
    FMUL float ptr [0x005e0e18]         ; 004cd8b0 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cd8b6
    FLD float ptr [EAX + 0x8]           ; 004cd8b9
    FMUL float ptr [0x005e0e18]         ; 004cd8bc | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cd8c2
    LEA EAX,[ESP + 0x48]                ; 004cd8c5
    PUSH EAX                            ; 004cd8c9
        ;   Label: LAB_004cd8c9
    MOV EAX,dword ptr [EDX]             ; 004cd8ca | DAT_01bdd7e4
    ADD EAX,0x90                        ; 004cd8cc
    PUSH EAX                            ; 004cd8d1
    CALL engine_special.cpp_FUN_005632a3 ; 004cd8d2
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004cd8d7
    PUSH 0x60b03c                       ; 004cd8da | DAT_0060b03c
    PUSH 0x60b038                       ; 004cd8df | DAT_0060b038
    PUSH 0x60b034                       ; 004cd8e4 | DAT_0060b034
    MOV EDI,dword ptr [ESI + 0x18]      ; 004cd8e9
    PUSH EDI                            ; 004cd8ec
    CALL core_gore.cpp_FUN_004cc970     ; 004cd8ed
        ;   XREF to: 004cc970 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cc970()
    ADD ESP,0x10                        ; 004cd8f2
    PUSH 0x60b06c                       ; 004cd8f5 | DAT_0060b06c
    PUSH 0x60b068                       ; 004cd8fa | DAT_0060b068
    PUSH 0x60b064                       ; 004cd8ff | DAT_0060b064
    MOV EBP,dword ptr [ESI + 0x18]      ; 004cd904
    PUSH EBP                            ; 004cd907
    CALL core_gore.cpp_FUN_004cc970     ; 004cd908
        ;   XREF to: 004cc970 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cc970()
    ADD ESP,0x10                        ; 004cd90d
    PUSH 0x60b09c                       ; 004cd910 | DAT_0060b09c
    PUSH 0x60b098                       ; 004cd915 | DAT_0060b098
    PUSH 0x60b094                       ; 004cd91a | DAT_0060b094
    MOV EAX,dword ptr [ESI + 0x18]      ; 004cd91f
    PUSH EAX                            ; 004cd922
    CALL core_gore.cpp_FUN_004cc970     ; 004cd923
        ;   XREF to: 004cc970 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cc970()
    ADD ESP,0x10                        ; 004cd928
    PUSH 0x60b0cc                       ; 004cd92b | DAT_0060b0cc
    PUSH 0x60b0c8                       ; 004cd930 | DAT_0060b0c8
    PUSH 0x60b0c4                       ; 004cd935 | DAT_0060b0c4
    MOV EDX,dword ptr [ESI + 0x18]      ; 004cd93a
    PUSH EDX                            ; 004cd93d
    CALL core_gore.cpp_FUN_004cc970     ; 004cd93e
        ;   XREF to: 004cc970 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cc970()
    ADD ESP,0x10                        ; 004cd943
    PUSH 0x1d22e48                      ; 004cd946
    MOV ECX,dword ptr [0x005f2afc]      ; 004cd94b | DAT_005f2afc
    PUSH ECX                            ; 004cd951 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730 ; 004cd952
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EBX,dword ptr [ESI + 0x14]      ; 004cd957
    ADD ESP,0x8                         ; 004cd95a
    CMP EBX,0x1                         ; 004cd95d
    JZ 0x004cdb06                       ; 004cd960
        ;   XREF to: 004cdb06 (CONDITIONAL_JUMP)  ; LAB_004cdb06
    ADD ESP,0x7c                        ; 004cd966
        ;   Label: LAB_004cd966
    POP EBP                             ; 004cd969
    POP EDI                             ; 004cd96a
    POP ESI                             ; 004cd96b
    POP EBX                             ; 004cd96c
    RET                                 ; 004cd96d
    XOR EDX,ECX                         ; 004cd96e
        ;   Label: LAB_004cd96e
    MOV dword ptr [ESP + 0x78],EDX      ; 004cd970
    JMP 0x004cd6fa                      ; 004cd974
        ;   XREF to: 004cd6fa (UNCONDITIONAL_JUMP)  ; LAB_004cd6fa
    TEST EBX,EBX                        ; 004cd979
        ;   Label: LAB_004cd979
    JZ 0x004cd983                       ; 004cd97b
        ;   XREF to: 004cd983 (CONDITIONAL_JUMP)  ; LAB_004cd983
    MOV dword ptr [ESI],0x1             ; 004cd97d
    MOV EAX,0xffff                      ; 004cd983
        ;   Label: LAB_004cd983
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004cd988
    MOV [0x01d22e54],EAX                ; 004cd98b | DAT_01d22e54
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd990
    SUB EAX,EDX                         ; 004cd997
    SHL EAX,0x3                         ; 004cd999
    MOV EDI,0xbf000000                  ; 004cd99c
    ADD EAX,0x5fed4c                    ; 004cd9a1 | DAT_005fed4c
    XOR EBP,EBP                         ; 004cd9a6
    PUSH EAX                            ; 004cd9a8
    MOV EBX,dword ptr [0x005f2afc]      ; 004cd9a9 | DAT_005f2afc
    MOV dword ptr [0x01d22e50],EBP      ; 004cd9af | DAT_01d22e50
    PUSH EBX                            ; 004cd9b5 | DAT_01bdd7e4
    MOV dword ptr [0x01d22e58],EBP      ; 004cd9b6 | DAT_01d22e58
    MOV dword ptr [0x01d22e5c],EBP      ; 004cd9bc | DAT_01d22e5c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004cd9c2
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EBX,[ESP + 0x44]                ; 004cd9c7
    LEA EAX,[ESP + 0x74]                ; 004cd9cb
    ADD ESP,0x8                         ; 004cd9cf
    MOV EDX,dword ptr [0x005f2afc]      ; 004cd9d2 | DAT_005f2afc
    MOV dword ptr [ESP + 0x6c],EDI      ; 004cd9d8
    MOV dword ptr [ESP + 0x70],EBP      ; 004cd9dc
    MOV dword ptr [ESP + 0x74],EDI      ; 004cd9e0
    FLD float ptr [EAX]                 ; 004cd9e4
    FMUL float ptr [0x005e0e18]         ; 004cd9e6 | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cd9ec
    FLD float ptr [EAX + 0x4]           ; 004cd9ee
    FMUL float ptr [0x005e0e18]         ; 004cd9f1 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cd9f7
    FLD float ptr [EAX + 0x8]           ; 004cd9fa
    FMUL float ptr [0x005e0e18]         ; 004cd9fd | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cda03
    LEA EAX,[ESP + 0x3c]                ; 004cda06
    PUSH EAX                            ; 004cda0a
    MOV EAX,dword ptr [EDX]             ; 004cda0b | DAT_01bdd7e4
    PUSH EAX                            ; 004cda0d
    CALL engine_special.cpp_FUN_005632a3 ; 004cda0e
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0x3f000000                  ; 004cda13
    LEA EBX,[ESP + 0x68]                ; 004cda18
    ADD ESP,0x8                         ; 004cda1c
    LEA EAX,[ESP + 0x6c]                ; 004cda1f
    MOV dword ptr [ESP + 0x6c],EDX      ; 004cda23
    MOV dword ptr [ESP + 0x70],EBP      ; 004cda27
    MOV dword ptr [ESP + 0x74],EDI      ; 004cda2b
    MOV EDX,dword ptr [0x005f2afc]      ; 004cda2f | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004cda35
    FMUL float ptr [0x005e0e18]         ; 004cda37 | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cda3d
    FLD float ptr [EAX + 0x4]           ; 004cda3f
    FMUL float ptr [0x005e0e18]         ; 004cda42 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cda48
    FLD float ptr [EAX + 0x8]           ; 004cda4b
    FMUL float ptr [0x005e0e18]         ; 004cda4e | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cda54
    LEA EAX,[ESP + 0x60]                ; 004cda57
    PUSH EAX                            ; 004cda5b
    MOV EAX,dword ptr [EDX]             ; 004cda5c | DAT_01bdd7e4
    ADD EAX,0x30                        ; 004cda5e
    PUSH EAX                            ; 004cda61
    MOV EDI,0x3f000000                  ; 004cda62
    CALL engine_special.cpp_FUN_005632a3 ; 004cda67
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x8]                 ; 004cda6c
    LEA EAX,[ESP + 0x74]                ; 004cda70
    ADD ESP,0x8                         ; 004cda74
    MOV EDX,dword ptr [0x005f2afc]      ; 004cda77 | DAT_005f2afc
    MOV dword ptr [ESP + 0x6c],EDI      ; 004cda7d
    MOV dword ptr [ESP + 0x70],EBP      ; 004cda81
    MOV dword ptr [ESP + 0x74],EDI      ; 004cda85
    FLD float ptr [EAX]                 ; 004cda89
    FMUL float ptr [0x005e0e18]         ; 004cda8b | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cda91
    FLD float ptr [EAX + 0x4]           ; 004cda93
    FMUL float ptr [0x005e0e18]         ; 004cda96 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cda9c
    FLD float ptr [EAX + 0x8]           ; 004cda9f
    FMUL float ptr [0x005e0e18]         ; 004cdaa2 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cdaa8
    MOV EAX,ESP                         ; 004cdaab
    PUSH EAX                            ; 004cdaad
    MOV EAX,dword ptr [EDX]             ; 004cdaae | DAT_01bdd7e4
    ADD EAX,0x60                        ; 004cdab0
    PUSH EAX                            ; 004cdab3
    CALL engine_special.cpp_FUN_005632a3 ; 004cdab4
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0xbf000000                  ; 004cdab9
    LEA EBX,[ESP + 0x38]                ; 004cdabe
    ADD ESP,0x8                         ; 004cdac2
    LEA EAX,[ESP + 0x6c]                ; 004cdac5
    MOV dword ptr [ESP + 0x6c],EDX      ; 004cdac9
    MOV dword ptr [ESP + 0x70],EBP      ; 004cdacd
    MOV dword ptr [ESP + 0x74],EDI      ; 004cdad1
    MOV EDX,dword ptr [0x005f2afc]      ; 004cdad5 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004cdadb
    FMUL float ptr [0x005e0e18]         ; 004cdadd | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cdae3
    FLD float ptr [EAX + 0x4]           ; 004cdae5
    FMUL float ptr [0x005e0e18]         ; 004cdae8 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cdaee
    FLD float ptr [EAX + 0x8]           ; 004cdaf1
    FMUL float ptr [0x005e0e18]         ; 004cdaf4 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cdafa
    LEA EAX,[ESP + 0x30]                ; 004cdafd
    JMP 0x004cd8c9                      ; 004cdb01
        ;   XREF to: 004cd8c9 (UNCONDITIONAL_JUMP)  ; LAB_004cd8c9
    MOV ESI,dword ptr [0x005f2afc]      ; 004cdb06 | DAT_005f2afc
        ;   Label: LAB_004cdb06
    PUSH ESI                            ; 004cdb0c | DAT_01bdd7e4
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 004cdb0d
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 004cdb12
    ADD ESP,0x7c                        ; 004cdb15
    POP EBP                             ; 004cdb18
    POP EDI                             ; 004cdb19
    POP ESI                             ; 004cdb1a
    POP EBX                             ; 004cdb1b
    RET                                 ; 004cdb1c

