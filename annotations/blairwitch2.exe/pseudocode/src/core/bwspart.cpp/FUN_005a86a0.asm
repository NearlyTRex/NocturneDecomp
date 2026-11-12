; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_bwspart_cpp_FUN_005a86a0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0x84]:1  local_84
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
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_bwspart.cpp_CSimpleParticleSystem_render_FUN_005a8290 at 005a82e8
;
; Referenced Globals:
;   undefined4 DAT_005f0833
;   undefined4 DAT_006002bc
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061ec00
;   undefined4 DAT_007bda74
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c38aec
;
; Called Functions:
;   core_bwspart.cpp_CSimpleParticleSystem_updateFade_FUN_005a8250
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_FUN_0046b650
;   engine_drender.cpp_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;   engine_special.cpp_FUN_0055d9ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a86a0
        ;   Label: core_bwspart.cpp_FUN_005a86a0
    PUSH ESI                            ; 005a86a1
    PUSH EDI                            ; 005a86a2
    PUSH EBP                            ; 005a86a3
    MOV EBP,ESP                         ; 005a86a4
    SUB ESP,0xa0                        ; 005a86a6
    AND ESP,0xfffffff8                  ; 005a86ac
    MOV EDX,dword ptr [0x0060b280]      ; 005a86af | DAT_0060b280
    PUSH EDX                            ; 005a86b5 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 005a86b6
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005a86bb
    TEST EAX,EAX                        ; 005a86be
    JZ 0x005a86d1                       ; 005a86c0
        ;   XREF to: 005a86d1 (CONDITIONAL_JUMP)  ; LAB_005a86d1
    MOV ESP,EBP                         ; 005a86c2
        ;   Label: LAB_005a86c2
    POP EBP                             ; 005a86c4
    POP EDI                             ; 005a86c5
    POP ESI                             ; 005a86c6
    POP EBX                             ; 005a86c7
    LEA EAX,[EAX]                       ; 005a86c8
    MOV EDX,EDX                         ; 005a86ce
    RET                                 ; 005a86d0
    MOV ESI,dword ptr [EBP + 0x14]      ; 005a86d1
        ;   Label: LAB_005a86d1
    MOV EDI,dword ptr [0x0060b280]      ; 005a86d4 | DAT_0060b280
    ADD ESI,0x24                        ; 005a86da
    LEA EBX,[ESP + 0x68]                ; 005a86dd
    MOV EAX,ESI                         ; 005a86e1
    MOV EDI,dword ptr [EDI]             ; 005a86e3 | DAT_01ba5c50
    FLD float ptr [EAX]                 ; 005a86e5
    FMUL float ptr [0x006002bc]         ; 005a86e7 | DAT_006002bc
    FISTP dword ptr [EBX]               ; 005a86ed
    FLD float ptr [EAX + 0x4]           ; 005a86ef
    FMUL float ptr [0x006002bc]         ; 005a86f2 | DAT_006002bc
    FISTP dword ptr [EBX + 0x4]         ; 005a86f8
    FLD float ptr [EAX + 0x8]           ; 005a86fb
    FMUL float ptr [0x006002bc]         ; 005a86fe | DAT_006002bc
    FISTP dword ptr [EBX + 0x8]         ; 005a8704
    LEA EAX,[ESP + 0x68]                ; 005a8707
    PUSH EAX                            ; 005a870b
    PUSH EDI                            ; 005a870c
    CALL engine_special.cpp_FUN_0055d9ec ; 005a870d
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005a8712
    PUSH EDI                            ; 005a8715
    MOV ECX,dword ptr [0x0060b280]      ; 005a8716 | DAT_0060b280
    PUSH ECX                            ; 005a871c | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0 ; 005a871d
        ;   XREF to: 0046cad0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 005a8722
    TEST EAX,EAX                        ; 005a8725
    JZ 0x005a86c2                       ; 005a8727
        ;   XREF to: 005a86c2 (CONDITIONAL_JUMP)  ; LAB_005a86c2
    PUSH ESI                            ; 005a8729
    MOV EBX,dword ptr [0x0060b280]      ; 005a872a | DAT_0060b280
    PUSH EBX                            ; 005a8730 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 005a8731
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005a8736
    MOV ESI,dword ptr [0x0060b280]      ; 005a8739 | DAT_0060b280
    PUSH ESI                            ; 005a873f | DAT_01ba5c50
    LEA ESI,[ESP + 0x78]                ; 005a8740
    LEA EDI,[ESP + 0x30]                ; 005a8744
    CALL engine_drender.cpp_FUN_0046b650 ; 005a8748
        ;   XREF to: 0046b650 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b650()
    ADD ESP,0x4                         ; 005a874d
    LEA ESI,[ESP + 0x74]                ; 005a8750
    LEA EAX,[ESP + 0x2c]                ; 005a8754
    PUSH 0x0                            ; 005a8758
    MOVSD ES:EDI,ESI                    ; 005a875a
    MOVSD ES:EDI,ESI                    ; 005a875b
    MOVSD ES:EDI,ESI                    ; 005a875c
    PUSH EAX                            ; 005a875d
    MOV EDI,dword ptr [0x0060b280]      ; 005a875e | DAT_0060b280
    PUSH EDI                            ; 005a8764 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300 ; 005a8765
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 005a876a
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a876d
    MOV EAX,dword ptr [EAX + 0x18]      ; 005a8770
    MOV dword ptr [ESP],EAX             ; 005a8773
    MOV dword ptr [ESP + 0x98],EAX      ; 005a8776
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a877d
    FLD float ptr [EAX + 0x8]           ; 005a8780
    FLDZ                                ; 005a8783
    FCOMPP                              ; 005a8785
    FNSTSW AX                           ; 005a8787
    SAHF                                ; 005a8789
    JNC 0x005a87b1                      ; 005a878a
        ;   XREF to: 005a87b1 (CONDITIONAL_JUMP)  ; LAB_005a87b1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a878c
    FLD float ptr [EAX + 0x8]           ; 005a878f
    FDIV float ptr [EAX + 0x4]          ; 005a8792
    FLD1                                ; 005a8795
    FSUBRP                              ; 005a8797
    FLD float ptr [EAX + 0x1c]          ; 005a8799
    FSUB float ptr [ESP]                ; 005a879c
    FMULP                               ; 005a879f
    FADD float ptr [ESP]                ; 005a87a1
    FSTP float ptr [ESP]                ; 005a87a4
    MOV EAX,dword ptr [ESP]             ; 005a87a7
    MOV dword ptr [ESP + 0x98],EAX      ; 005a87aa
    FLD float ptr [ESP + 0x98]          ; 005a87b1
        ;   Label: LAB_005a87b1
    FLD float ptr [ESP]                 ; 005a87b8
    FCHS                                ; 005a87bb
    FXCH                                ; 005a87bd
    FCHS                                ; 005a87bf
    FXCH                                ; 005a87c1
    FSTP float ptr [ESP + 0x94]         ; 005a87c3
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a87ca
    FSTP float ptr [ESP + 0x9c]         ; 005a87d1
    MOV dword ptr [ESP + 0x44],EAX      ; 005a87d8
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005a87dc
    MOV dword ptr [ESP + 0x48],EAX      ; 005a87e3
    XOR EAX,EAX                         ; 005a87e7
    LEA EBX,[ESP + 0x5c]                ; 005a87e9
    MOV dword ptr [ESP + 0x4c],EAX      ; 005a87ed
    LEA EAX,[ESP + 0x44]                ; 005a87f1
    MOV EDX,dword ptr [0x0060b280]      ; 005a87f5 | DAT_0060b280
    FLD float ptr [EAX]                 ; 005a87fb
    FMUL float ptr [0x006002bc]         ; 005a87fd | DAT_006002bc
    FISTP dword ptr [EBX]               ; 005a8803
    FLD float ptr [EAX + 0x4]           ; 005a8805
    FMUL float ptr [0x006002bc]         ; 005a8808 | DAT_006002bc
    FISTP dword ptr [EBX + 0x4]         ; 005a880e
    FLD float ptr [EAX + 0x8]           ; 005a8811
    FMUL float ptr [0x006002bc]         ; 005a8814 | DAT_006002bc
    FISTP dword ptr [EBX + 0x8]         ; 005a881a
    LEA EAX,[ESP + 0x5c]                ; 005a881d
    PUSH EAX                            ; 005a8821
    MOV EAX,dword ptr [EDX]             ; 005a8822 | DAT_01ba5c50
    PUSH EAX                            ; 005a8824
    CALL engine_special.cpp_FUN_0055d723 ; 005a8825
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005a882a
    LEA EBX,[ESP + 0x80]                ; 005a882d
    MOV EAX,dword ptr [ESP]             ; 005a8834
    XOR EDX,EDX                         ; 005a8837
    MOV dword ptr [ESP + 0x44],EAX      ; 005a8839
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005a883d
    MOV dword ptr [ESP + 0x4c],EDX      ; 005a8844
    MOV dword ptr [ESP + 0x48],EAX      ; 005a8848
    LEA EAX,[ESP + 0x44]                ; 005a884c
    MOV EDX,dword ptr [0x0060b280]      ; 005a8850 | DAT_0060b280
    FLD float ptr [EAX]                 ; 005a8856
    FMUL float ptr [0x006002bc]         ; 005a8858 | DAT_006002bc
    FISTP dword ptr [EBX]               ; 005a885e
    FLD float ptr [EAX + 0x4]           ; 005a8860
    FMUL float ptr [0x006002bc]         ; 005a8863 | DAT_006002bc
    FISTP dword ptr [EBX + 0x4]         ; 005a8869
    FLD float ptr [EAX + 0x8]           ; 005a886c
    FMUL float ptr [0x006002bc]         ; 005a886f | DAT_006002bc
    FISTP dword ptr [EBX + 0x8]         ; 005a8875
    LEA EAX,[ESP + 0x80]                ; 005a8878
    PUSH EAX                            ; 005a887f
    MOV EAX,dword ptr [EDX]             ; 005a8880 | DAT_01ba5c50
    ADD EAX,0x30                        ; 005a8882
    PUSH EAX                            ; 005a8885
    CALL engine_special.cpp_FUN_0055d723 ; 005a8886
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005a888b
    LEA EBX,[ESP + 0x38]                ; 005a888e
    MOV EAX,dword ptr [ESP]             ; 005a8892
    MOV EDX,dword ptr [0x0060b280]      ; 005a8895 | DAT_0060b280
    MOV dword ptr [ESP + 0x44],EAX      ; 005a889b
    MOV EAX,dword ptr [ESP + 0x98]      ; 005a889f
    XOR ECX,ECX                         ; 005a88a6
    MOV dword ptr [ESP + 0x48],EAX      ; 005a88a8
    LEA EAX,[ESP + 0x44]                ; 005a88ac
    MOV dword ptr [ESP + 0x4c],ECX      ; 005a88b0
    FLD float ptr [EAX]                 ; 005a88b4
    FMUL float ptr [0x006002bc]         ; 005a88b6 | DAT_006002bc
    FISTP dword ptr [EBX]               ; 005a88bc
    FLD float ptr [EAX + 0x4]           ; 005a88be
    FMUL float ptr [0x006002bc]         ; 005a88c1 | DAT_006002bc
    FISTP dword ptr [EBX + 0x4]         ; 005a88c7
    FLD float ptr [EAX + 0x8]           ; 005a88ca
    FMUL float ptr [0x006002bc]         ; 005a88cd | DAT_006002bc
    FISTP dword ptr [EBX + 0x8]         ; 005a88d3
    LEA EAX,[ESP + 0x38]                ; 005a88d6
    PUSH EAX                            ; 005a88da
    MOV EAX,dword ptr [EDX]             ; 005a88db | DAT_01ba5c50
    ADD EAX,0x60                        ; 005a88dd
    PUSH EAX                            ; 005a88e0
    CALL engine_special.cpp_FUN_0055d723 ; 005a88e1
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005a88e6
    XOR EBX,EBX                         ; 005a88e9
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a88eb
    MOV dword ptr [ESP + 0x4c],EBX      ; 005a88f2
    MOV dword ptr [ESP + 0x44],EAX      ; 005a88f6
    MOV EAX,dword ptr [ESP + 0x98]      ; 005a88fa
    LEA EBX,[ESP + 0x50]                ; 005a8901
    MOV dword ptr [ESP + 0x48],EAX      ; 005a8905
    LEA EAX,[ESP + 0x44]                ; 005a8909
    MOV EDX,dword ptr [0x0060b280]      ; 005a890d | DAT_0060b280
    FLD float ptr [EAX]                 ; 005a8913
    FMUL float ptr [0x006002bc]         ; 005a8915 | DAT_006002bc
    FISTP dword ptr [EBX]               ; 005a891b
    FLD float ptr [EAX + 0x4]           ; 005a891d
    FMUL float ptr [0x006002bc]         ; 005a8920 | DAT_006002bc
    FISTP dword ptr [EBX + 0x4]         ; 005a8926
    FLD float ptr [EAX + 0x8]           ; 005a8929
    FMUL float ptr [0x006002bc]         ; 005a892c | DAT_006002bc
    FISTP dword ptr [EBX + 0x8]         ; 005a8932
    LEA EAX,[ESP + 0x50]                ; 005a8935
    PUSH EAX                            ; 005a8939
    MOV EAX,dword ptr [EDX]             ; 005a893a | DAT_01ba5c50
    ADD EAX,0x90                        ; 005a893c
    PUSH EAX                            ; 005a8941
    CALL engine_special.cpp_FUN_0055d723 ; 005a8942
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005a8947
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a894a
    MOV EDX,dword ptr [EAX + 0x20]      ; 005a894d
    LEA EAX,[EDX*0x4 + 0x0]             ; 005a8950
    SUB EAX,EDX                         ; 005a8957
    SHL EAX,0x3                         ; 005a8959
    ADD EAX,0x61ec00                    ; 005a895c | DAT_0061ec00
    PUSH EAX                            ; 005a8961
    MOV ESI,dword ptr [0x0060b280]      ; 005a8962 | DAT_0060b280
    PUSH ESI                            ; 005a8968 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 005a8969
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 005a896e
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a8971
    PUSH 0x0                            ; 005a8974
    ADD EDX,0x24                        ; 005a8976
    MOV EAX,[0x007bda74]                ; 005a8979 | DAT_007bda74
    PUSH EDX                            ; 005a897e
    MOV EBX,dword ptr [EAX + 0x3c]      ; 005a897f
    PUSH EAX                            ; 005a8982
    CALL dword ptr [EBX + 0x4]          ; 005a8983
    MOV EAX,0xffff                      ; 005a8986
    MOV EDI,dword ptr [0x01c38aec]      ; 005a898b | DAT_01c38aec
    ADD ESP,0xc                         ; 005a8991
    SUB EAX,EDI                         ; 005a8994
    MOV dword ptr [ESP + 0x8c],EAX      ; 005a8996
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a899d
    FLD float ptr [EAX + 0x8]           ; 005a89a0
    FDIV float ptr [EAX + 0x4]          ; 005a89a3
    FLD1                                ; 005a89a6
    FSUBRP                              ; 005a89a8
    FLD float ptr [EAX + 0x10]          ; 005a89aa
    FSUB float ptr [EAX + 0xc]          ; 005a89ad
    FMULP                               ; 005a89b0
    MOV EDX,dword ptr [EAX + 0x54]      ; 005a89b2
    FADD float ptr [EAX + 0xc]          ; 005a89b5
    PUSH EDX                            ; 005a89b8
    FSTP float ptr [ESP + 0x94]         ; 005a89b9
    CALL core_bwspart.cpp_CSimpleParticleSystem_updateFade_FUN_005a8250 ; 005a89c0
        ;   XREF to: 005a8250 (UNCONDITIONAL_CALL)  ; undefined4 core_bwspart.cpp_CSimpleParticleSystem_updateFade_FUN_005a8250(CSimpleParticleSystem * this_ptr)
    MOV dword ptr [ESP + 0xa0],EAX      ; 005a89c5
    FLD float ptr [ESP + 0xa0]          ; 005a89cc
    ADD ESP,0x4                         ; 005a89d3
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005a89d6
    FMUL float ptr [ESP + 0x90]         ; 005a89dd
    MOV dword ptr [ESP + 0x9c],EAX      ; 005a89e4
    MOV EDX,dword ptr [0x0060b280]      ; 005a89eb | DAT_0060b280
    FILD dword ptr [ESP + 0x9c]         ; 005a89f1
    FMULP                               ; 005a89f8
    MOV EBX,dword ptr [EDX]             ; 005a89fa | DAT_01ba5c50
    CALL crt_math.c_round_FUN_005b7ff0  ; 005a89fc
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8c]        ; 005a8a01
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005a8a08
    MOV dword ptr [EBX + 0x2c],EAX      ; 005a8a0f
    MOV EBX,dword ptr [EDX]             ; 005a8a12
    MOV dword ptr [EBX + 0x5c],EAX      ; 005a8a14
    MOV EBX,dword ptr [EDX]             ; 005a8a17
    MOV dword ptr [EBX + 0x8c],EAX      ; 005a8a19
    MOV EBX,dword ptr [EDX]             ; 005a8a1f
    MOV dword ptr [EBX + 0xbc],EAX      ; 005a8a21
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a8a27
    FLD float ptr [0x005f0833]          ; 005a8a2a | DAT_005f0833
    FLD float ptr [EAX + 0x48]          ; 005a8a30
    FMUL ST1                            ; 005a8a33
    MOV EBX,dword ptr [EDX]             ; 005a8a35
    CALL crt_math.c_round_FUN_005b7ff0  ; 005a8a37
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 005a8a3c
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a8a43
    MOV dword ptr [EBX + 0x20],EAX      ; 005a8a4a
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a8a4d
    FLD float ptr [EAX + 0x48]          ; 005a8a50
    FMUL ST1                            ; 005a8a53
    MOV EBX,dword ptr [EDX]             ; 005a8a55
    CALL crt_math.c_round_FUN_005b7ff0  ; 005a8a57
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 005a8a5c
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a8a63
    MOV dword ptr [EBX + 0x50],EAX      ; 005a8a6a
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a8a6d
    FLD float ptr [EAX + 0x48]          ; 005a8a70
    FMUL ST1                            ; 005a8a73
    MOV EBX,dword ptr [EDX]             ; 005a8a75
    CALL crt_math.c_round_FUN_005b7ff0  ; 005a8a77
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 005a8a7c
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a8a83
    MOV dword ptr [EBX + 0x80],EAX      ; 005a8a8a
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a8a90
    FLD float ptr [EAX + 0x48]          ; 005a8a93
    FMUL ST1                            ; 005a8a96
    MOV EBX,dword ptr [EDX]             ; 005a8a98
    CALL crt_math.c_round_FUN_005b7ff0  ; 005a8a9a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 005a8a9f
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a8aa6
    MOV dword ptr [EBX + 0xb0],EAX      ; 005a8aad
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a8ab3
    FMUL float ptr [EAX + 0x4c]         ; 005a8ab6
    MOV EBX,dword ptr [EDX]             ; 005a8ab9
    CALL crt_math.c_round_FUN_005b7ff0  ; 005a8abb
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 005a8ac0
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a8ac7
    MOV dword ptr [EBX + 0x24],EAX      ; 005a8ace
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a8ad1
    FLD float ptr [0x005f0833]          ; 005a8ad4 | DAT_005f0833
    FLD float ptr [EAX + 0x4c]          ; 005a8ada
    FMUL ST1                            ; 005a8add
    MOV EBX,dword ptr [EDX]             ; 005a8adf
    CALL crt_math.c_round_FUN_005b7ff0  ; 005a8ae1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 005a8ae6
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a8aed
    MOV dword ptr [EBX + 0x54],EAX      ; 005a8af4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a8af7
    FLD float ptr [EAX + 0x4c]          ; 005a8afa
    FMUL ST1                            ; 005a8afd
    MOV EBX,dword ptr [EDX]             ; 005a8aff
    CALL crt_math.c_round_FUN_005b7ff0  ; 005a8b01
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 005a8b06
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a8b0d
    MOV dword ptr [EBX + 0x84],EAX      ; 005a8b14
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a8b1a
    FLD float ptr [EAX + 0x4c]          ; 005a8b1d
    FMUL ST1                            ; 005a8b20
    MOV EBX,dword ptr [EDX]             ; 005a8b22
    CALL crt_math.c_round_FUN_005b7ff0  ; 005a8b24
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 005a8b29
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a8b30
    MOV dword ptr [EBX + 0xb4],EAX      ; 005a8b37
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a8b3d
    FLD float ptr [EAX + 0x50]          ; 005a8b40
    FMUL ST1                            ; 005a8b43
    MOV EBX,dword ptr [EDX]             ; 005a8b45
    CALL crt_math.c_round_FUN_005b7ff0  ; 005a8b47
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 005a8b4c
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a8b53
    MOV dword ptr [EBX + 0x28],EAX      ; 005a8b5a
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a8b5d
    FLD float ptr [EAX + 0x50]          ; 005a8b60
    FMUL ST1                            ; 005a8b63
    MOV EBX,dword ptr [EDX]             ; 005a8b65
    CALL crt_math.c_round_FUN_005b7ff0  ; 005a8b67
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 005a8b6c
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a8b73
    MOV dword ptr [EBX + 0x58],EAX      ; 005a8b7a
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a8b7d
    FLD float ptr [EAX + 0x50]          ; 005a8b80
    FMUL ST1                            ; 005a8b83
    MOV EBX,dword ptr [EDX]             ; 005a8b85
    CALL crt_math.c_round_FUN_005b7ff0  ; 005a8b87
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 005a8b8c
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a8b93
    MOV dword ptr [EBX + 0x88],EAX      ; 005a8b9a
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a8ba0
    FMUL float ptr [EAX + 0x50]         ; 005a8ba3
    MOV EBX,dword ptr [EDX]             ; 005a8ba6
    CALL crt_math.c_round_FUN_005b7ff0  ; 005a8ba8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x94]        ; 005a8bad
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a8bb4
    MOV dword ptr [EBX + 0xb8],EAX      ; 005a8bbb
    MOV EAX,dword ptr [EDX]             ; 005a8bc1
    MOV dword ptr [EAX + 0x18],0x0      ; 005a8bc3
    MOV EAX,dword ptr [EDX]             ; 005a8bca
    MOV dword ptr [EAX + 0x1c],0xff0000 ; 005a8bcc
    MOV EAX,dword ptr [EDX]             ; 005a8bd3
    MOV dword ptr [EAX + 0x48],0xff0000 ; 005a8bd5
    MOV EAX,dword ptr [EDX]             ; 005a8bdc
    MOV dword ptr [EAX + 0x4c],0xff0000 ; 005a8bde
    MOV EAX,dword ptr [EDX]             ; 005a8be5
    MOV dword ptr [EAX + 0x78],0xff0000 ; 005a8be7
    MOV EAX,dword ptr [EDX]             ; 005a8bee
    MOV dword ptr [EAX + 0x7c],0x0      ; 005a8bf0
    MOV EAX,dword ptr [EDX]             ; 005a8bf7
    PUSH 0x1                            ; 005a8bf9
    MOV dword ptr [EAX + 0xa8],0x0      ; 005a8bfb
    MOV ESI,0x3                         ; 005a8c05
    MOV EAX,dword ptr [EDX]             ; 005a8c0a
    PUSH EDX                            ; 005a8c0c
    XOR EBX,EBX                         ; 005a8c0d
    MOV dword ptr [EAX + 0xac],0x0      ; 005a8c0f
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 005a8c19
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    MOV ECX,0x4                         ; 005a8c1e
    LEA EAX,[ESP + 0xc]                 ; 005a8c23
    ADD ESP,0x8                         ; 005a8c27
    MOV EDI,dword ptr [0x0060b280]      ; 005a8c2a | DAT_0060b280
    MOV dword ptr [ESP + 0x8],ECX       ; 005a8c30
    MOV dword ptr [ESP + 0x18],EBX      ; 005a8c34
    MOV dword ptr [ESP + 0x14],EBX      ; 005a8c38
    MOV dword ptr [ESP + 0x10],EBX      ; 005a8c3c
    MOV dword ptr [ESP + 0xc],EBX       ; 005a8c40
    MOV dword ptr [ESP + 0x1c],EBX      ; 005a8c44
    MOV dword ptr [ESP + 0x28],ESI      ; 005a8c48
    PUSH EAX                            ; 005a8c4c
    MOV ECX,0x1                         ; 005a8c4d
    MOV EBX,0x2                         ; 005a8c52
    PUSH EDI                            ; 005a8c57 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x28],ECX      ; 005a8c58
    MOV dword ptr [ESP + 0x2c],EBX      ; 005a8c5c
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 005a8c60
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 005a8c65
    PUSH 0x0                            ; 005a8c68
    MOV EAX,[0x0060b280]                ; 005a8c6a | DAT_0060b280
    PUSH EAX                            ; 005a8c6f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 005a8c70
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005a8c75
    MOV EDX,dword ptr [0x0060b280]      ; 005a8c78 | DAT_0060b280
    PUSH EDX                            ; 005a8c7e | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 005a8c7f
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 005a8c84
    MOV ESP,EBP                         ; 005a8c87
    POP EBP                             ; 005a8c89
    POP EDI                             ; 005a8c8a
    POP ESI                             ; 005a8c8b
    POP EBX                             ; 005a8c8c
    RET                                 ; 005a8c8d

