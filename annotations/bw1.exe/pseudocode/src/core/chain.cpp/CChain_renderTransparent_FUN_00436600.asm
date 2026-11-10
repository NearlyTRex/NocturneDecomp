; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_chain_cpp_CChain_renderTransparent_FUN_00436600(CChain *this_ptr)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005fd790
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_set.cpp_CDemonSet_computeLighting_FUN_00552a70
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;   engine_special.cpp_FUN_0058043c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436600
        ;   Label: core_chain.cpp_CChain_renderTransparent_FUN_00436600
    PUSH ESI                            ; 00436601
    PUSH EDI                            ; 00436602
    PUSH EBP                            ; 00436603
    SUB ESP,0xc4                        ; 00436604
    MOV EDX,dword ptr [0x00612560]      ; 0043660a | DAT_00612560
    PUSH EDX                            ; 00436610
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 00436611
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00436616
    TEST EAX,EAX                        ; 00436619
    JZ 0x0043662a                       ; 0043661b
        ;   XREF to: 0043662a (CONDITIONAL_JUMP)  ; LAB_0043662a
    XOR EAX,EAX                         ; 0043661d
        ;   Label: LAB_0043661d
    ADD ESP,0xc4                        ; 0043661f
    POP EBP                             ; 00436625
    POP EDI                             ; 00436626
    POP ESI                             ; 00436627
    POP EBX                             ; 00436628
    RET                                 ; 00436629
    MOV ECX,dword ptr [ESP + 0xd8]      ; 0043662a
        ;   Label: LAB_0043662a
    PUSH ECX                            ; 00436631
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 00436632
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00436637
    PUSH 0x0                            ; 0043663a
    MOV EBX,dword ptr [ESP + 0xdc]      ; 0043663c
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00436643
    PUSH EBX                            ; 0043664a
    MOV EAX,dword ptr [EAX + 0x154]     ; 0043664b
    LEA ESI,[ESP + 0x30]                ; 00436651
    LEA EDI,[ESP + 0x48]                ; 00436655
    CALL dword ptr [EAX + 0x1c]         ; 00436659
    MOV ECX,0x6                         ; 0043665c
    ADD ESP,0x4                         ; 00436661
    LEA EAX,[ESP + 0x44]                ; 00436664
    LEA ESI,[ESP + 0x2c]                ; 00436668
    PUSH EAX                            ; 0043666c
    MOVSD.REP ES:EDI,ESI                ; 0043666d
    CALL core_box.cpp_FUN_004207b0      ; 0043666f
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 00436674
    PUSH EBX                            ; 00436677
    MOV dword ptr [EBX + 0x574],EAX     ; 00436678
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0043667e
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    MOV EDI,dword ptr [EBX + 0x574]     ; 00436683
    ADD ESP,0x4                         ; 00436689
    TEST EDI,EDI                        ; 0043668c
    JZ 0x0043661d                       ; 0043668e
        ;   XREF to: 0043661d (CONDITIONAL_JUMP)  ; LAB_0043661d
    LEA EAX,[EBX + 0x16c]               ; 00436690
    PUSH EAX                            ; 00436696
    MOV EBP,dword ptr [0x00612560]      ; 00436697 | DAT_00612560
    PUSH EBP                            ; 0043669d
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 0043669e
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004366a3
    PUSH 0x0                            ; 004366a6
    MOV EAX,[0x00612560]                ; 004366a8 | DAT_00612560
    PUSH EAX                            ; 004366ad
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 004366ae
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    MOV EDX,0x4                         ; 004366b3
    MOV EAX,0x1                         ; 004366b8
    ADD ESP,0x8                         ; 004366bd
    MOV EBX,dword ptr [0x00612560]      ; 004366c0 | DAT_00612560
    XOR ECX,ECX                         ; 004366c6
    PUSH 0xffff                         ; 004366c8
    MOV dword ptr [ESP + 0x8],EDX       ; 004366cd
    MOV dword ptr [ESP + 0x18],ECX      ; 004366d1
    MOV dword ptr [ESP + 0x14],ECX      ; 004366d5
    MOV dword ptr [ESP + 0x10],ECX      ; 004366d9
    MOV dword ptr [ESP + 0xc],ECX       ; 004366dd
    MOV dword ptr [ESP + 0x1c],ECX      ; 004366e1
    MOV dword ptr [ESP + 0x20],EAX      ; 004366e5
    MOV EDX,0x2                         ; 004366e9
    MOV ECX,0x3                         ; 004366ee
    PUSH EBX                            ; 004366f3
    MOV dword ptr [ESP + 0x28],EDX      ; 004366f4
    MOV dword ptr [ESP + 0x2c],ECX      ; 004366f8
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004366fc
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00436701
    XOR ESI,ESI                         ; 00436704
    PUSH ESI                            ; 00436706
    MOV ESI,dword ptr [0x00612560]      ; 00436707 | DAT_00612560
    PUSH ESI                            ; 0043670d
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 0043670e
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00436713
    XOR EBP,EBP                         ; 00436716
    MOV EDI,dword ptr [ESP + 0xd8]      ; 00436718
    MOV ESI,dword ptr [ESP + 0xd8]      ; 0043671f
    ADD EDI,0x28c                       ; 00436726
    ADD ESI,0x2b0                       ; 0043672c
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00436732
        ;   Label: LAB_00436732
    MOV EAX,dword ptr [EAX + 0x158]     ; 00436739
    DEC EAX                             ; 0043673f
    CMP EBP,EAX                         ; 00436740
    JGE 0x00436bc6                      ; 00436742
        ;   XREF to: 00436bc6 (CONDITIONAL_JUMP)  ; LAB_00436bc6
    MOV EAX,[0x00612560]                ; 00436748 | DAT_00612560
    LEA EBX,[ESP + 0x88]                ; 0043674d
    MOV EDX,dword ptr [EAX]             ; 00436754
    MOV EAX,EDI                         ; 00436756
    FLD float ptr [EAX]                 ; 00436758
    FMUL float ptr [0x005fd790]         ; 0043675a | DAT_005fd790
    FISTP dword ptr [EBX]               ; 00436760
    FLD float ptr [EAX + 0x4]           ; 00436762
    FMUL float ptr [0x005fd790]         ; 00436765 | DAT_005fd790
    FISTP dword ptr [EBX + 0x4]         ; 0043676b
    FLD float ptr [EAX + 0x8]           ; 0043676e
    FMUL float ptr [0x005fd790]         ; 00436771 | DAT_005fd790
    FISTP dword ptr [EBX + 0x8]         ; 00436777
    LEA EAX,[ESP + 0x88]                ; 0043677a
    PUSH EAX                            ; 00436781
    PUSH EDX                            ; 00436782
    CALL engine_special.cpp_FUN_0058043c ; 00436783
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 00436788 | DAT_00612560
    MOV EAX,dword ptr [EAX]             ; 0043678d
    ADD ESP,0x8                         ; 0043678f
    LEA EDX,[EAX + 0x30]                ; 00436792
    LEA EBX,[ESP + 0x58]                ; 00436795
    MOV EAX,EDI                         ; 00436799
    FLD float ptr [EAX]                 ; 0043679b
    FMUL float ptr [0x005fd790]         ; 0043679d | DAT_005fd790
    FISTP dword ptr [EBX]               ; 004367a3
    FLD float ptr [EAX + 0x4]           ; 004367a5
    FMUL float ptr [0x005fd790]         ; 004367a8 | DAT_005fd790
    FISTP dword ptr [EBX + 0x4]         ; 004367ae
    FLD float ptr [EAX + 0x8]           ; 004367b1
    FMUL float ptr [0x005fd790]         ; 004367b4 | DAT_005fd790
    FISTP dword ptr [EBX + 0x8]         ; 004367ba
    LEA EAX,[ESP + 0x58]                ; 004367bd
    PUSH EAX                            ; 004367c1
    PUSH EDX                            ; 004367c2
    CALL engine_special.cpp_FUN_0058043c ; 004367c3
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 004367c8 | DAT_00612560
    MOV EAX,dword ptr [EAX]             ; 004367cd
    ADD ESP,0x8                         ; 004367cf
    LEA EDX,[EAX + 0x60]                ; 004367d2
    LEA EBX,[ESP + 0x7c]                ; 004367d5
    MOV EAX,ESI                         ; 004367d9
    FLD float ptr [EAX]                 ; 004367db
    FMUL float ptr [0x005fd790]         ; 004367dd | DAT_005fd790
    FISTP dword ptr [EBX]               ; 004367e3
    FLD float ptr [EAX + 0x4]           ; 004367e5
    FMUL float ptr [0x005fd790]         ; 004367e8 | DAT_005fd790
    FISTP dword ptr [EBX + 0x4]         ; 004367ee
    FLD float ptr [EAX + 0x8]           ; 004367f1
    FMUL float ptr [0x005fd790]         ; 004367f4 | DAT_005fd790
    FISTP dword ptr [EBX + 0x8]         ; 004367fa
    LEA EAX,[ESP + 0x7c]                ; 004367fd
    PUSH EAX                            ; 00436801
    PUSH EDX                            ; 00436802
    CALL engine_special.cpp_FUN_0058043c ; 00436803
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 00436808 | DAT_00612560
    MOV EAX,dword ptr [EAX]             ; 0043680d
    ADD ESP,0x8                         ; 0043680f
    LEA EDX,[EAX + 0x90]                ; 00436812
    LEA EBX,[ESP + 0xac]                ; 00436818
    MOV EAX,ESI                         ; 0043681f
    FLD float ptr [EAX]                 ; 00436821
    FMUL float ptr [0x005fd790]         ; 00436823 | DAT_005fd790
    FISTP dword ptr [EBX]               ; 00436829
    FLD float ptr [EAX + 0x4]           ; 0043682b
    FMUL float ptr [0x005fd790]         ; 0043682e | DAT_005fd790
    FISTP dword ptr [EBX + 0x4]         ; 00436834
    FLD float ptr [EAX + 0x8]           ; 00436837
    FMUL float ptr [0x005fd790]         ; 0043683a | DAT_005fd790
    FISTP dword ptr [EBX + 0x8]         ; 00436840
    LEA EAX,[ESP + 0xac]                ; 00436843
    PUSH EAX                            ; 0043684a
    PUSH EDX                            ; 0043684b
    CALL engine_special.cpp_FUN_0058043c ; 0043684c
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 00436851 | DAT_00612560
    MOV EBX,dword ptr [EAX]             ; 00436856
    SUB dword ptr [EBX + 0x4],0x40      ; 00436858
    MOV EBX,dword ptr [EAX]             ; 0043685c
    ADD dword ptr [EBX + 0x34],0x40     ; 0043685e
    MOV EBX,dword ptr [EAX]             ; 00436862
    ADD dword ptr [EBX + 0x64],0x40     ; 00436864
    MOV EBX,dword ptr [EAX]             ; 00436868
    SUB dword ptr [EBX + 0x94],0x40     ; 0043686a
    MOV EDX,dword ptr [EAX]             ; 00436871
    MOV dword ptr [EDX + 0x10],0x80000000 ; 00436873
    MOV EDX,dword ptr [EAX]             ; 0043687a
    MOV dword ptr [EDX + 0x40],0x80000000 ; 0043687c
    MOV EDX,dword ptr [EAX]             ; 00436883
    MOV dword ptr [EDX + 0x70],0x80000000 ; 00436885
    MOV EDX,dword ptr [EAX]             ; 0043688c
    MOV dword ptr [EDX + 0xa0],0x80000000 ; 0043688e
    MOV EDX,dword ptr [EAX]             ; 00436898
    MOV dword ptr [EDX + 0x18],0x80000  ; 0043689a
    MOV EDX,dword ptr [EAX]             ; 004368a1
    MOV dword ptr [EDX + 0x1c],0x80000  ; 004368a3
    MOV EDX,dword ptr [EAX]             ; 004368aa
    MOV dword ptr [EDX + 0x48],0x80000  ; 004368ac
    MOV EDX,dword ptr [EAX]             ; 004368b3
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 004368b5
    MOV EDX,dword ptr [EAX]             ; 004368bc
    MOV dword ptr [EDX + 0x78],0xf80000 ; 004368be
    MOV EDX,dword ptr [EAX]             ; 004368c5
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 004368c7
    MOV EDX,dword ptr [EAX]             ; 004368ce
    MOV dword ptr [EDX + 0xa8],0xf80000 ; 004368d0
    MOV EAX,dword ptr [EAX]             ; 004368da
    ADD ESP,0x8                         ; 004368dc
    LEA EBX,[ESP + 0x64]                ; 004368df
    MOV dword ptr [EAX + 0xac],0x80000  ; 004368e3
    MOV EAX,EDI                         ; 004368ed
    FLD float ptr [EAX]                 ; 004368ef
    FMUL float ptr [0x005fd790]         ; 004368f1 | DAT_005fd790
    FISTP dword ptr [EBX]               ; 004368f7
    FLD float ptr [EAX + 0x4]           ; 004368f9
    FMUL float ptr [0x005fd790]         ; 004368fc | DAT_005fd790
    FISTP dword ptr [EBX + 0x4]         ; 00436902
    FLD float ptr [EAX + 0x8]           ; 00436905
    FMUL float ptr [0x005fd790]         ; 00436908 | DAT_005fd790
    FISTP dword ptr [EBX + 0x8]         ; 0043690e
    PUSH 0x2                            ; 00436911
    PUSH 0x0                            ; 00436913
    PUSH 0x0                            ; 00436915
    LEA EAX,[ESP + 0x70]                ; 00436917
    PUSH EAX                            ; 0043691b
    MOV EBX,dword ptr [0x00622c18]      ; 0043691c | g_CDemonSetPtr
    PUSH EBX                            ; 00436922
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00552a70 ; 00436923
        ;   XREF to: 00552a70 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00552a70(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 00436928
    LEA EBX,[ESP + 0x64]                ; 0043692b
    MOV EAX,ESI                         ; 0043692f
    FLD float ptr [EAX]                 ; 00436931
    FMUL float ptr [0x005fd790]         ; 00436933 | DAT_005fd790
    FISTP dword ptr [EBX]               ; 00436939
    FLD float ptr [EAX + 0x4]           ; 0043693b
    FMUL float ptr [0x005fd790]         ; 0043693e | DAT_005fd790
    FISTP dword ptr [EBX + 0x4]         ; 00436944
    FLD float ptr [EAX + 0x8]           ; 00436947
    FMUL float ptr [0x005fd790]         ; 0043694a | DAT_005fd790
    FISTP dword ptr [EBX + 0x8]         ; 00436950
    PUSH 0x2                            ; 00436953
    PUSH 0x2                            ; 00436955
    PUSH 0x0                            ; 00436957
    LEA EAX,[ESP + 0x70]                ; 00436959
    PUSH EAX                            ; 0043695d
    MOV EAX,[0x00622c18]                ; 0043695e | g_CDemonSetPtr
    PUSH EAX                            ; 00436963
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00552a70 ; 00436964
        ;   XREF to: 00552a70 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00552a70(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 00436969
    MOV EAX,ESP                         ; 0043696c
    PUSH EAX                            ; 0043696e
    MOV EDX,dword ptr [0x00612560]      ; 0043696f | DAT_00612560
    PUSH EDX                            ; 00436975
    LEA EBX,[ESP + 0x78]                ; 00436976
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 0043697a
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EDX,dword ptr [0x00612560]      ; 0043697f | DAT_00612560
    ADD ESP,0x8                         ; 00436985
    MOV EAX,EDI                         ; 00436988
    MOV EDX,dword ptr [EDX]             ; 0043698a
    FLD float ptr [EAX]                 ; 0043698c
    FMUL float ptr [0x005fd790]         ; 0043698e | DAT_005fd790
    FISTP dword ptr [EBX]               ; 00436994
    FLD float ptr [EAX + 0x4]           ; 00436996
    FMUL float ptr [0x005fd790]         ; 00436999 | DAT_005fd790
    FISTP dword ptr [EBX + 0x4]         ; 0043699f
    FLD float ptr [EAX + 0x8]           ; 004369a2
    FMUL float ptr [0x005fd790]         ; 004369a5 | DAT_005fd790
    FISTP dword ptr [EBX + 0x8]         ; 004369ab
    LEA EAX,[ESP + 0x70]                ; 004369ae
    PUSH EAX                            ; 004369b2
    PUSH EDX                            ; 004369b3
    CALL engine_special.cpp_FUN_0058043c ; 004369b4
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 004369b9 | DAT_00612560
    MOV EAX,dword ptr [EAX]             ; 004369be
    ADD ESP,0x8                         ; 004369c0
    LEA EDX,[EAX + 0x30]                ; 004369c3
    LEA EBX,[ESP + 0xa0]                ; 004369c6
    MOV EAX,EDI                         ; 004369cd
    FLD float ptr [EAX]                 ; 004369cf
    FMUL float ptr [0x005fd790]         ; 004369d1 | DAT_005fd790
    FISTP dword ptr [EBX]               ; 004369d7
    FLD float ptr [EAX + 0x4]           ; 004369d9
    FMUL float ptr [0x005fd790]         ; 004369dc | DAT_005fd790
    FISTP dword ptr [EBX + 0x4]         ; 004369e2
    FLD float ptr [EAX + 0x8]           ; 004369e5
    FMUL float ptr [0x005fd790]         ; 004369e8 | DAT_005fd790
    FISTP dword ptr [EBX + 0x8]         ; 004369ee
    LEA EAX,[ESP + 0xa0]                ; 004369f1
    PUSH EAX                            ; 004369f8
    PUSH EDX                            ; 004369f9
    CALL engine_special.cpp_FUN_0058043c ; 004369fa
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004369ff
    MOV EAX,[0x00612560]                ; 00436a02 | DAT_00612560
    LEA EBX,[ESP + 0xb8]                ; 00436a07
    MOV EDX,dword ptr [EAX]             ; 00436a0e
    MOV EAX,ESI                         ; 00436a10
    FLD float ptr [EAX]                 ; 00436a12
    FMUL float ptr [0x005fd790]         ; 00436a14 | DAT_005fd790
    FISTP dword ptr [EBX]               ; 00436a1a
    FLD float ptr [EAX + 0x4]           ; 00436a1c
    FMUL float ptr [0x005fd790]         ; 00436a1f | DAT_005fd790
    FISTP dword ptr [EBX + 0x4]         ; 00436a25
    FLD float ptr [EAX + 0x8]           ; 00436a28
    FMUL float ptr [0x005fd790]         ; 00436a2b | DAT_005fd790
    FISTP dword ptr [EBX + 0x8]         ; 00436a31
    LEA EAX,[ESP + 0xb8]                ; 00436a34
    PUSH EAX                            ; 00436a3b
    ADD EDX,0x60                        ; 00436a3c
    PUSH EDX                            ; 00436a3f
    CALL engine_special.cpp_FUN_0058043c ; 00436a40
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 00436a45 | DAT_00612560
    LEA EBX,[ESP + 0x9c]                ; 00436a4a
    ADD ESP,0x8                         ; 00436a51
    MOV EDX,dword ptr [EAX]             ; 00436a54
    MOV EAX,ESI                         ; 00436a56
    FLD float ptr [EAX]                 ; 00436a58
    FMUL float ptr [0x005fd790]         ; 00436a5a | DAT_005fd790
    FISTP dword ptr [EBX]               ; 00436a60
    FLD float ptr [EAX + 0x4]           ; 00436a62
    FMUL float ptr [0x005fd790]         ; 00436a65 | DAT_005fd790
    FISTP dword ptr [EBX + 0x4]         ; 00436a6b
    FLD float ptr [EAX + 0x8]           ; 00436a6e
    FMUL float ptr [0x005fd790]         ; 00436a71 | DAT_005fd790
    FISTP dword ptr [EBX + 0x8]         ; 00436a77
    LEA EAX,[ESP + 0x94]                ; 00436a7a
    PUSH EAX                            ; 00436a81
    ADD EDX,0x90                        ; 00436a82
    PUSH EDX                            ; 00436a88
    CALL engine_special.cpp_FUN_0058043c ; 00436a89
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 00436a8e | DAT_00612560
    MOV EBX,dword ptr [EAX]             ; 00436a93
    SUB dword ptr [EBX],0x40            ; 00436a95
    MOV EBX,dword ptr [EAX]             ; 00436a98
    ADD dword ptr [EBX + 0x30],0x40     ; 00436a9a
    MOV EBX,dword ptr [EAX]             ; 00436a9e
    ADD dword ptr [EBX + 0x60],0x40     ; 00436aa0
    MOV EBX,dword ptr [EAX]             ; 00436aa4
    SUB dword ptr [EBX + 0x90],0x40     ; 00436aa6
    MOV EDX,dword ptr [EAX]             ; 00436aad
    MOV dword ptr [EDX + 0x10],0x80000000 ; 00436aaf
    MOV EDX,dword ptr [EAX]             ; 00436ab6
    MOV dword ptr [EDX + 0x40],0x80000000 ; 00436ab8
    MOV EDX,dword ptr [EAX]             ; 00436abf
    MOV dword ptr [EDX + 0x70],0x80000000 ; 00436ac1
    MOV EDX,dword ptr [EAX]             ; 00436ac8
    MOV dword ptr [EDX + 0xa0],0x80000000 ; 00436aca
    MOV EDX,dword ptr [EAX]             ; 00436ad4
    MOV dword ptr [EDX + 0x18],0x80000  ; 00436ad6
    MOV EDX,dword ptr [EAX]             ; 00436add
    MOV dword ptr [EDX + 0x1c],0x80000  ; 00436adf
    MOV EDX,dword ptr [EAX]             ; 00436ae6
    MOV dword ptr [EDX + 0x48],0x80000  ; 00436ae8
    MOV EDX,dword ptr [EAX]             ; 00436aef
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 00436af1
    MOV EDX,dword ptr [EAX]             ; 00436af8
    MOV dword ptr [EDX + 0x78],0xf80000 ; 00436afa
    MOV EDX,dword ptr [EAX]             ; 00436b01
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 00436b03
    MOV EDX,dword ptr [EAX]             ; 00436b0a
    MOV dword ptr [EDX + 0xa8],0xf80000 ; 00436b0c
    MOV EAX,dword ptr [EAX]             ; 00436b16
    ADD ESP,0x8                         ; 00436b18
    LEA EBX,[ESP + 0x64]                ; 00436b1b
    MOV dword ptr [EAX + 0xac],0x80000  ; 00436b1f
    MOV EAX,EDI                         ; 00436b29
    FLD float ptr [EAX]                 ; 00436b2b
    FMUL float ptr [0x005fd790]         ; 00436b2d | DAT_005fd790
    FISTP dword ptr [EBX]               ; 00436b33
    FLD float ptr [EAX + 0x4]           ; 00436b35
    FMUL float ptr [0x005fd790]         ; 00436b38 | DAT_005fd790
    FISTP dword ptr [EBX + 0x4]         ; 00436b3e
    FLD float ptr [EAX + 0x8]           ; 00436b41
    FMUL float ptr [0x005fd790]         ; 00436b44 | DAT_005fd790
    FISTP dword ptr [EBX + 0x8]         ; 00436b4a
    PUSH 0x2                            ; 00436b4d
    PUSH 0x0                            ; 00436b4f
    PUSH 0x0                            ; 00436b51
    LEA EAX,[ESP + 0x70]                ; 00436b53
    PUSH EAX                            ; 00436b57
    MOV ECX,dword ptr [0x00622c18]      ; 00436b58 | g_CDemonSetPtr
    PUSH ECX                            ; 00436b5e
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00552a70 ; 00436b5f
        ;   XREF to: 00552a70 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00552a70(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 00436b64
    LEA EBX,[ESP + 0x64]                ; 00436b67
    MOV EAX,ESI                         ; 00436b6b
    FLD float ptr [EAX]                 ; 00436b6d
    FMUL float ptr [0x005fd790]         ; 00436b6f | DAT_005fd790
    FISTP dword ptr [EBX]               ; 00436b75
    FLD float ptr [EAX + 0x4]           ; 00436b77
    FMUL float ptr [0x005fd790]         ; 00436b7a | DAT_005fd790
    FISTP dword ptr [EBX + 0x4]         ; 00436b80
    FLD float ptr [EAX + 0x8]           ; 00436b83
    FMUL float ptr [0x005fd790]         ; 00436b86 | DAT_005fd790
    FISTP dword ptr [EBX + 0x8]         ; 00436b8c
    PUSH 0x2                            ; 00436b8f
    PUSH 0x2                            ; 00436b91
    PUSH 0x0                            ; 00436b93
    LEA EAX,[ESP + 0x70]                ; 00436b95
    PUSH EAX                            ; 00436b99
    MOV EBX,dword ptr [0x00622c18]      ; 00436b9a | g_CDemonSetPtr
    PUSH EBX                            ; 00436ba0
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00552a70 ; 00436ba1
        ;   XREF to: 00552a70 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00552a70(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 00436ba6
    MOV EAX,ESP                         ; 00436ba9
    PUSH EAX                            ; 00436bab
    MOV EAX,[0x00612560]                ; 00436bac | DAT_00612560
    ADD EDI,0x24                        ; 00436bb1
    PUSH EAX                            ; 00436bb4
    INC EBP                             ; 00436bb5
    ADD ESI,0x24                        ; 00436bb6
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 00436bb9
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00436bbe
    JMP 0x00436732                      ; 00436bc1
        ;   XREF to: 00436732 (UNCONDITIONAL_JUMP)  ; LAB_00436732
    MOV EAX,0x1                         ; 00436bc6
        ;   Label: LAB_00436bc6
    ADD ESP,0xc4                        ; 00436bcb
    POP EBP                             ; 00436bd1
    POP EDI                             ; 00436bd2
    POP ESI                             ; 00436bd3
    POP EBX                             ; 00436bd4
    RET                                 ; 00436bd5

