; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_FUN_004c7580(CVector3f *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d943a
;   undefined4 DAT_005d9442
;   undefined4 DAT_005d944a
;   undefined4 DAT_005f7ba8
;   undefined4 DAT_0060b280
;   undefined4 DAT_006167f0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   undefined4 DAT_0062205c
;   undefined4 DAT_00622060
;   undefined4 DAT_00622064
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_set.cpp_CDemonSet_computeLighting_FUN_005317c0
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_drender.cpp_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;   engine_special.cpp_FUN_0055d9ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c7580
        ;   Label: core_gore.cpp_FUN_004c7580
    PUSH ESI                            ; 004c7581
    PUSH EDI                            ; 004c7582
    PUSH EBP                            ; 004c7583
    MOV EBP,ESP                         ; 004c7584
    SUB ESP,0x10c                       ; 004c7586
    AND ESP,0xfffffff8                  ; 004c758c
    MOV ESI,dword ptr [0x0060b280]      ; 004c758f | DAT_0060b280
    LEA EBX,[ESP + 0x10]                ; 004c7595
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c7599
    MOV ESI,dword ptr [ESI]             ; 004c759c | DAT_01ba5c50
    FLD float ptr [EAX]                 ; 004c759e
    FMUL float ptr [0x005f7ba8]         ; 004c75a0 | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c75a6
    FLD float ptr [EAX + 0x4]           ; 004c75a8
    FMUL float ptr [0x005f7ba8]         ; 004c75ab | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c75b1
    FLD float ptr [EAX + 0x8]           ; 004c75b4
    FMUL float ptr [0x005f7ba8]         ; 004c75b7 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c75bd
    LEA EAX,[ESP + 0x10]                ; 004c75c0
    PUSH EAX                            ; 004c75c4
    PUSH ESI                            ; 004c75c5
    CALL engine_special.cpp_FUN_0055d9ec ; 004c75c6
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV AH,byte ptr [ESI + 0x13]        ; 004c75cb
    ADD ESP,0x8                         ; 004c75ce
    TEST AH,0x80                        ; 004c75d1
    JZ 0x004c75dd                       ; 004c75d4
        ;   XREF to: 004c75dd (CONDITIONAL_JUMP)  ; LAB_004c75dd
    MOV ESP,EBP                         ; 004c75d6
        ;   Label: LAB_004c75d6
    POP EBP                             ; 004c75d8
    POP EDI                             ; 004c75d9
    POP ESI                             ; 004c75da
    POP EBX                             ; 004c75db
    RET                                 ; 004c75dc
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c75dd
        ;   Label: LAB_004c75dd
    PUSH EDX                            ; 004c75e0
    MOV ECX,dword ptr [0x0060b280]      ; 004c75e1 | DAT_0060b280
    PUSH ECX                            ; 004c75e7 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 004c75e8
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c75ed
    PUSH 0x0                            ; 004c75f0
    PUSH 0x1cb82b0                      ; 004c75f2 | DAT_01cb82b0
    MOV EBX,dword ptr [0x0060b280]      ; 004c75f7 | DAT_0060b280
    PUSH EBX                            ; 004c75fd | DAT_01ba5c50
    MOV ESI,0xbdcccccd                  ; 004c75fe
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300 ; 004c7603
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    LEA EBX,[ESP + 0xac]                ; 004c7608
    MOV EDX,dword ptr [0x0060b280]      ; 004c760f | DAT_0060b280
    ADD ESP,0xc                         ; 004c7615
    XOR EAX,EAX                         ; 004c7618
    MOV dword ptr [ESP + 0x40],ESI      ; 004c761a
    MOV dword ptr [ESP + 0x48],EAX      ; 004c761e
    LEA EAX,[ESP + 0x40]                ; 004c7622
    MOV dword ptr [ESP + 0x44],ESI      ; 004c7626
    FLD float ptr [EAX]                 ; 004c762a
    FMUL float ptr [0x005f7ba8]         ; 004c762c | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c7632
    FLD float ptr [EAX + 0x4]           ; 004c7634
    FMUL float ptr [0x005f7ba8]         ; 004c7637 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c763d
    FLD float ptr [EAX + 0x8]           ; 004c7640
    FMUL float ptr [0x005f7ba8]         ; 004c7643 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c7649
    LEA EAX,[ESP + 0xa0]                ; 004c764c
    PUSH EAX                            ; 004c7653
    MOV EAX,dword ptr [EDX]             ; 004c7654 | DAT_01ba5c50
    PUSH EAX                            ; 004c7656
    CALL engine_special.cpp_FUN_0055d723 ; 004c7657
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0x3dcccccd                  ; 004c765c
    LEA EAX,[ESP + 0x48]                ; 004c7661
    ADD ESP,0x8                         ; 004c7665
    XOR EBX,EBX                         ; 004c7668
    MOV dword ptr [ESP + 0x40],EDX      ; 004c766a
    MOV dword ptr [ESP + 0x44],ESI      ; 004c766e
    MOV dword ptr [ESP + 0x48],EBX      ; 004c7672
    LEA EBX,[ESP + 0x88]                ; 004c7676
    MOV EDX,dword ptr [0x0060b280]      ; 004c767d | DAT_0060b280
    FLD float ptr [EAX]                 ; 004c7683
    FMUL float ptr [0x005f7ba8]         ; 004c7685 | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c768b
    FLD float ptr [EAX + 0x4]           ; 004c768d
    FMUL float ptr [0x005f7ba8]         ; 004c7690 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c7696
    FLD float ptr [EAX + 0x8]           ; 004c7699
    FMUL float ptr [0x005f7ba8]         ; 004c769c | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c76a2
    LEA EAX,[ESP + 0x88]                ; 004c76a5
    PUSH EAX                            ; 004c76ac
    MOV EAX,dword ptr [EDX]             ; 004c76ad | DAT_01ba5c50
    ADD EAX,0x30                        ; 004c76af
    PUSH EAX                            ; 004c76b2
    MOV ESI,0x3dcccccd                  ; 004c76b3
    CALL engine_special.cpp_FUN_0055d723 ; 004c76b8
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0xcc]                ; 004c76bd
    MOV EDX,dword ptr [0x0060b280]      ; 004c76c4 | DAT_0060b280
    ADD ESP,0x8                         ; 004c76ca
    XOR EAX,EAX                         ; 004c76cd
    MOV dword ptr [ESP + 0x40],ESI      ; 004c76cf
    MOV dword ptr [ESP + 0x48],EAX      ; 004c76d3
    LEA EAX,[ESP + 0x40]                ; 004c76d7
    MOV dword ptr [ESP + 0x44],ESI      ; 004c76db
    FLD float ptr [EAX]                 ; 004c76df
    FMUL float ptr [0x005f7ba8]         ; 004c76e1 | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c76e7
    FLD float ptr [EAX + 0x4]           ; 004c76e9
    FMUL float ptr [0x005f7ba8]         ; 004c76ec | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c76f2
    FLD float ptr [EAX + 0x8]           ; 004c76f5
    FMUL float ptr [0x005f7ba8]         ; 004c76f8 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c76fe
    LEA EAX,[ESP + 0xc4]                ; 004c7701
    PUSH EAX                            ; 004c7708
    MOV EAX,dword ptr [EDX]             ; 004c7709 | DAT_01ba5c50
    ADD EAX,0x60                        ; 004c770b
    PUSH EAX                            ; 004c770e
    CALL engine_special.cpp_FUN_0055d723 ; 004c770f
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0xbdcccccd                  ; 004c7714
    LEA EAX,[ESP + 0x48]                ; 004c7719
    ADD ESP,0x8                         ; 004c771d
    XOR EBX,EBX                         ; 004c7720
    MOV dword ptr [ESP + 0x40],EDX      ; 004c7722
    MOV dword ptr [ESP + 0x44],ESI      ; 004c7726
    MOV dword ptr [ESP + 0x48],EBX      ; 004c772a
    LEA EBX,[ESP + 0x28]                ; 004c772e
    MOV EDX,dword ptr [0x0060b280]      ; 004c7732 | DAT_0060b280
    FLD float ptr [EAX]                 ; 004c7738
    FMUL float ptr [0x005f7ba8]         ; 004c773a | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c7740
    FLD float ptr [EAX + 0x4]           ; 004c7742
    FMUL float ptr [0x005f7ba8]         ; 004c7745 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c774b
    FLD float ptr [EAX + 0x8]           ; 004c774e
    FMUL float ptr [0x005f7ba8]         ; 004c7751 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c7757
    LEA EAX,[ESP + 0x28]                ; 004c775a
    PUSH EAX                            ; 004c775e
    MOV EAX,dword ptr [EDX]             ; 004c775f | DAT_01ba5c50
    ADD EAX,0x90                        ; 004c7761
    PUSH EAX                            ; 004c7766
    CALL engine_special.cpp_FUN_0055d723 ; 004c7767
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c776c
    PUSH 0x6167f0                       ; 004c776f | DAT_006167f0
    MOV ESI,dword ptr [0x0060b280]      ; 004c7774 | DAT_0060b280
    PUSH ESI                            ; 004c777a | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004c777b
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c7780
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c7783
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c7786
    LEA EBX,[ESP + 0x70]                ; 004c7789
    MOV EDX,dword ptr [EDX + 0x44]      ; 004c778d
    MOV EAX,dword ptr [EAX + 0x44]      ; 004c7790
    SAR EDX,0x2                         ; 004c7793
    AND EAX,0x3                         ; 004c7796
    AND EDX,0x3                         ; 004c7799
    SHL EAX,0x16                        ; 004c779c
    SHL EDX,0x16                        ; 004c779f
    ADD EAX,0x80000                     ; 004c77a2
    ADD EDX,0x80000                     ; 004c77a7
    MOV [0x0062202c],EAX                ; 004c77ad | DAT_0062202c
    MOV dword ptr [0x00622030],EDX      ; 004c77b2 | DAT_00622030
    LEA ECX,[EAX + 0x300000]            ; 004c77b8
    MOV dword ptr [0x00622060],EDX      ; 004c77be | DAT_00622060
    MOV dword ptr [0x0062205c],ECX      ; 004c77c4 | DAT_0062205c
    MOV dword ptr [0x0062208c],ECX      ; 004c77ca | DAT_0062208c
    ADD EDX,0x300000                    ; 004c77d0
    MOV [0x006220bc],EAX                ; 004c77d6 | DAT_006220bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c77db
    MOV dword ptr [0x00622090],EDX      ; 004c77de | DAT_00622090
    MOV dword ptr [0x006220c0],EDX      ; 004c77e4 | DAT_006220c0
    FLD float ptr [EAX]                 ; 004c77ea
    FMUL float ptr [0x005f7ba8]         ; 004c77ec | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c77f2
    FLD float ptr [EAX + 0x4]           ; 004c77f4
    FMUL float ptr [0x005f7ba8]         ; 004c77f7 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c77fd
    FLD float ptr [EAX + 0x8]           ; 004c7800
    FMUL float ptr [0x005f7ba8]         ; 004c7803 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c7809
    PUSH 0x4                            ; 004c780c
    PUSH 0x0                            ; 004c780e
    PUSH 0x1cb82bc                      ; 004c7810 | DAT_01cb82bc
    LEA EAX,[ESP + 0x7c]                ; 004c7815
    PUSH EAX                            ; 004c7819
    MOV EDI,dword ptr [0x0061b5a8]      ; 004c781a | g_CDemonSetPtr
    PUSH EDI                            ; 004c7820 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_005317c0 ; 004c7821
        ;   XREF to: 005317c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_005317c0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004c7826
    LEA ESI,[ESP + 0xf4]                ; 004c7829
    LEA EAX,[ESP + 0xf0]                ; 004c7830
    PUSH 0xc0                           ; 004c7837
    LEA EDI,[ESP + 0xf0]                ; 004c783c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c7843
    PUSH 0x40                           ; 004c7846
    MOV dword ptr [ESP + 0x104],EAX     ; 004c7848
    MOV EBX,dword ptr [EBX + 0x40]      ; 004c784f
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 004c7852
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c7857
    CMP EBX,0x1                         ; 004c785a
    JNC 0x004c7d86                      ; 004c785d
        ;   XREF to: 004c7d86 (CONDITIONAL_JUMP)  ; LAB_004c7d86
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004c7863
        ;   Label: LAB_004c7863
    MOV dword ptr [ESI],0x2000          ; 004c786a
    MOV dword ptr [EAX],0x0             ; 004c7870
    MOV dword ptr [EDI],0x0             ; 004c7876
    XOR ECX,ECX                         ; 004c787c
        ;   Label: LAB_004c787c
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004c787e
        ;   Label: LAB_004c787e
    MOV EDX,dword ptr [ECX + 0x622034]  ; 004c7885 | DAT_00622034 | DAT_00622064
    IMUL EDX                            ; 004c788b
    SHRD EAX,EDX,0x10                   ; 004c788d
    MOV EDX,dword ptr [ECX + 0x622038]  ; 004c7891 | DAT_00622038 | DAT_00622068
    MOV dword ptr [ECX + 0x622034],EAX  ; 004c7897 | DAT_00622034 | DAT_00622064
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004c789d
    IMUL EDX                            ; 004c78a4
    SHRD EAX,EDX,0x10                   ; 004c78a6
    MOV EDX,dword ptr [ECX + 0x62203c]  ; 004c78aa | DAT_0062203c | DAT_0062206c
    MOV dword ptr [ECX + 0x622038],EAX  ; 004c78b0 | DAT_00622038 | DAT_00622068
    MOV EAX,dword ptr [ESP + 0xec]      ; 004c78b6
    ADD ECX,0x30                        ; 004c78bd
    IMUL EDX                            ; 004c78c0
    SHRD EAX,EDX,0x10                   ; 004c78c2
    MOV dword ptr [ECX + 0x62200c],EAX  ; 004c78c6 | DAT_0062203c | DAT_0062206c
    CMP ECX,0xc0                        ; 004c78cc
    JNZ 0x004c787e                      ; 004c78d2
        ;   XREF to: 004c787e (CONDITIONAL_JUMP)  ; LAB_004c787e
    PUSH 0x0                            ; 004c78d4
    MOV ECX,dword ptr [EBP + 0x14]      ; 004c78d6
    MOV EAX,[0x007bda74]                ; 004c78d9 | DAT_007bda74
    PUSH ECX                            ; 004c78de
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004c78df
    PUSH EAX                            ; 004c78e2
    CALL dword ptr [EDX + 0x4]          ; 004c78e3
    MOV EAX,0xffff                      ; 004c78e6
    MOV EBX,dword ptr [0x01c38aec]      ; 004c78eb | DAT_01c38aec
    ADD ESP,0xc                         ; 004c78f1
    SUB EAX,EBX                         ; 004c78f4
    PUSH EAX                            ; 004c78f6
    MOV ESI,dword ptr [0x0060b280]      ; 004c78f7 | DAT_0060b280
    PUSH ESI                            ; 004c78fd | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 004c78fe
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004c7903
    PUSH 0x1cb8288                      ; 004c7906
    MOV EDI,dword ptr [0x0060b280]      ; 004c790b | DAT_0060b280
    PUSH EDI                            ; 004c7911 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 004c7912
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c7917
    MOV EAX,[0x0060b280]                ; 004c791a | DAT_0060b280
    PUSH EAX                            ; 004c791f | DAT_01ba5c50
    XOR EBX,EBX                         ; 004c7920
    LEA EDI,[ESP + 0x50]                ; 004c7922
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 004c7926
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    MOV EDX,0x3f800000                  ; 004c792b
    ADD ESP,0x4                         ; 004c7930
    MOV ECX,0x3ccccccd                  ; 004c7933
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c7938
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c793b
    MOV dword ptr [ESP + 0xc],EDX       ; 004c793e
    MOVSD ES:EDI,ESI                    ; 004c7942
    MOVSD ES:EDI,ESI                    ; 004c7943
    MOVSD ES:EDI,ESI                    ; 004c7944
    MOV dword ptr [ESP + 0x8],ECX       ; 004c7945
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c7949
    ADD EAX,0x18                        ; 004c794c
    LEA EDI,[ESP + 0x34]                ; 004c794f
    LEA ESI,[ESI + 0xc]                 ; 004c7953
    MOV dword ptr [ESP + 0x108],EBX     ; 004c7956
    MOV dword ptr [ESP + 0x104],EAX     ; 004c795d
    MOVSD ES:EDI,ESI                    ; 004c7964
    MOVSD ES:EDI,ESI                    ; 004c7965
    MOVSD ES:EDI,ESI                    ; 004c7966
    FLD float ptr [ESP + 0x8]           ; 004c7967
        ;   Label: LAB_004c7967
    MOV EAX,dword ptr [ESP + 0x104]     ; 004c796b
    FLD ST0                             ; 004c7972
    FLD double ptr [0x005d943a]         ; 004c7974 | DAT_005d943a
    FXCH                                ; 004c797a
    FMUL ST1                            ; 004c797c
    FLD float ptr [EAX]                 ; 004c797e
    FXCH                                ; 004c7980
    FSTP ST3                            ; 004c7982
    FXCH ST2                            ; 004c7984
    FSTP float ptr [ESP + 0x8]          ; 004c7986
    FXCH                                ; 004c798a
    FMUL float ptr [ESP + 0x8]          ; 004c798c
    FLD float ptr [EAX + 0x4]           ; 004c7990
    FMUL float ptr [ESP + 0x8]          ; 004c7993
    FLD float ptr [EAX + 0x8]           ; 004c7997
    FMUL float ptr [ESP + 0x8]          ; 004c799a
    FLD float ptr [ESP + 0xc]           ; 004c799e
    FLD float ptr [ESP + 0x34]          ; 004c79a2
    LEA EDI,[ESP + 0x7c]                ; 004c79a6
    LEA ESI,[ESP + 0x94]                ; 004c79aa
    FXCH ST4                            ; 004c79b1
    FSTP float ptr [ESP + 0x94]         ; 004c79b3
    FXCH ST2                            ; 004c79ba
    FSTP float ptr [ESP + 0x98]         ; 004c79bc
    FSTP float ptr [ESP + 0x9c]         ; 004c79c3
    MOVSD ES:EDI,ESI                    ; 004c79ca
    MOVSD ES:EDI,ESI                    ; 004c79cb
    MOVSD ES:EDI,ESI                    ; 004c79cc
    FLD ST0                             ; 004c79cd
    FXCH ST2                            ; 004c79cf
    FSUB float ptr [ESP + 0x7c]         ; 004c79d1
    FXCH ST2                            ; 004c79d5
    FMULP ST3                           ; 004c79d7
    FXCH                                ; 004c79d9
    FST float ptr [ESP + 0x34]          ; 004c79db
    FMUL float ptr [ESP + 0x8]          ; 004c79df
    FLD float ptr [ESP + 0x3c]          ; 004c79e3
    FLD float ptr [ESP + 0x38]          ; 004c79e7
    FSUB float ptr [ESP + 0x80]         ; 004c79eb
    FXCH                                ; 004c79f2
    FSUB float ptr [ESP + 0x84]         ; 004c79f4
    FXCH                                ; 004c79fb
    FST float ptr [ESP + 0x38]          ; 004c79fd
    FMUL float ptr [ESP + 0x8]          ; 004c7a01
    FXCH                                ; 004c7a05
    FST float ptr [ESP + 0x3c]          ; 004c7a07
    FMUL float ptr [ESP + 0x8]          ; 004c7a0b
    FLD float ptr [ESP + 0x4c]          ; 004c7a0f
    FLD float ptr [ESP + 0x50]          ; 004c7a13
    LEA EAX,[ESP + 0x4c]                ; 004c7a17
    FXCH ST6                            ; 004c7a1b
    FSTP ST5                            ; 004c7a1d
    FLD float ptr [ESP + 0x54]          ; 004c7a1f
    PUSH EAX                            ; 004c7a23
    LEA EDI,[ESP + 0xb0]                ; 004c7a24
    LEA ESI,[ESP + 0x5c]                ; 004c7a2b
    FXCH ST4                            ; 004c7a2f
    FSTP float ptr [ESP + 0x5c]         ; 004c7a31
    FXCH ST2                            ; 004c7a35
    FSTP float ptr [ESP + 0x60]         ; 004c7a37
    FSTP float ptr [ESP + 0x64]         ; 004c7a3b
    MOVSD ES:EDI,ESI                    ; 004c7a3f
    MOVSD ES:EDI,ESI                    ; 004c7a40
    MOVSD ES:EDI,ESI                    ; 004c7a41
    FXCH ST2                            ; 004c7a42
    FSTP float ptr [ESP + 0x10]         ; 004c7a44
    MOV ESI,dword ptr [0x0060b280]      ; 004c7a48 | DAT_0060b280
    FXCH                                ; 004c7a4e
    FSUB float ptr [ESP + 0xb0]         ; 004c7a50
    FXCH ST2                            ; 004c7a57
    FSUB float ptr [ESP + 0xb4]         ; 004c7a59
    FXCH                                ; 004c7a60
    FSUB float ptr [ESP + 0xb8]         ; 004c7a62
    FXCH ST2                            ; 004c7a69
    FSTP float ptr [ESP + 0x50]         ; 004c7a6b
    FSTP float ptr [ESP + 0x54]         ; 004c7a6f
    PUSH ESI                            ; 004c7a73 | DAT_01ba5c50
    FSTP float ptr [ESP + 0x5c]         ; 004c7a74
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 004c7a78
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c7a7d
    PUSH 0x0                            ; 004c7a80
    PUSH 0x1cb82b0                      ; 004c7a82 | DAT_01cb82b0
    MOV EDI,dword ptr [0x0060b280]      ; 004c7a87 | DAT_0060b280
    PUSH EDI                            ; 004c7a8d | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300 ; 004c7a8e
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004c7a93
    FLD float ptr [ESP + 0xc]           ; 004c7a96
    FST double ptr [ESP]                ; 004c7a9a
    FMUL double ptr [0x005d9442]        ; 004c7a9d | DAT_005d9442
    FSTP float ptr [ESP + 0x40]         ; 004c7aa3
    MOV EAX,dword ptr [ESP + 0x40]      ; 004c7aa7
    MOV dword ptr [ESP + 0x100],EAX     ; 004c7aab
    MOV dword ptr [ESP + 0x44],EAX      ; 004c7ab2
    XOR EAX,EAX                         ; 004c7ab6
    MOV EDX,dword ptr [0x0060b280]      ; 004c7ab8 | DAT_0060b280
    MOV dword ptr [ESP + 0x48],EAX      ; 004c7abe
    LEA EBX,[ESP + 0xd0]                ; 004c7ac2
    LEA EAX,[ESP + 0x40]                ; 004c7ac9
    FLD float ptr [EAX]                 ; 004c7acd
    FMUL float ptr [0x005f7ba8]         ; 004c7acf | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c7ad5
    FLD float ptr [EAX + 0x4]           ; 004c7ad7
    FMUL float ptr [0x005f7ba8]         ; 004c7ada | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c7ae0
    FLD float ptr [EAX + 0x8]           ; 004c7ae3
    FMUL float ptr [0x005f7ba8]         ; 004c7ae6 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c7aec
    LEA EAX,[ESP + 0xd0]                ; 004c7aef
    PUSH EAX                            ; 004c7af6
    MOV EAX,dword ptr [EDX]             ; 004c7af7 | DAT_01ba5c50
    PUSH EAX                            ; 004c7af9
    CALL engine_special.cpp_FUN_0055d723 ; 004c7afa
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c7aff
    FLD double ptr [ESP]                ; 004c7b02
    FMUL double ptr [0x005d944a]        ; 004c7b05 | DAT_005d944a
    LEA EBX,[ESP + 0xb8]                ; 004c7b0b
    FSTP float ptr [ESP + 0xf8]         ; 004c7b12
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004c7b19
    XOR EDX,EDX                         ; 004c7b20
    MOV dword ptr [ESP + 0x40],EAX      ; 004c7b22
    MOV EAX,dword ptr [ESP + 0x100]     ; 004c7b26
    MOV dword ptr [ESP + 0x48],EDX      ; 004c7b2d
    MOV dword ptr [ESP + 0x44],EAX      ; 004c7b31
    LEA EAX,[ESP + 0x40]                ; 004c7b35
    MOV EDX,dword ptr [0x0060b280]      ; 004c7b39 | DAT_0060b280
    FLD float ptr [EAX]                 ; 004c7b3f
    FMUL float ptr [0x005f7ba8]         ; 004c7b41 | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c7b47
    FLD float ptr [EAX + 0x4]           ; 004c7b49
    FMUL float ptr [0x005f7ba8]         ; 004c7b4c | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c7b52
    FLD float ptr [EAX + 0x8]           ; 004c7b55
    FMUL float ptr [0x005f7ba8]         ; 004c7b58 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c7b5e
    LEA EAX,[ESP + 0xb8]                ; 004c7b61
    PUSH EAX                            ; 004c7b68
    MOV EAX,dword ptr [EDX]             ; 004c7b69 | DAT_01ba5c50
    ADD EAX,0x30                        ; 004c7b6b
    PUSH EAX                            ; 004c7b6e
    CALL engine_special.cpp_FUN_0055d723 ; 004c7b6f
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x24]                ; 004c7b74
    ADD ESP,0x8                         ; 004c7b78
    MOV EDX,dword ptr [0x0060b280]      ; 004c7b7b | DAT_0060b280
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004c7b81
    XOR ECX,ECX                         ; 004c7b88
    MOV dword ptr [ESP + 0x40],EAX      ; 004c7b8a
    MOV dword ptr [ESP + 0x44],EAX      ; 004c7b8e
    LEA EAX,[ESP + 0x40]                ; 004c7b92
    MOV dword ptr [ESP + 0x48],ECX      ; 004c7b96
    FLD float ptr [EAX]                 ; 004c7b9a
    FMUL float ptr [0x005f7ba8]         ; 004c7b9c | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c7ba2
    FLD float ptr [EAX + 0x4]           ; 004c7ba4
    FMUL float ptr [0x005f7ba8]         ; 004c7ba7 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c7bad
    FLD float ptr [EAX + 0x8]           ; 004c7bb0
    FMUL float ptr [0x005f7ba8]         ; 004c7bb3 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c7bb9
    LEA EAX,[ESP + 0x1c]                ; 004c7bbc
    PUSH EAX                            ; 004c7bc0
    MOV EAX,dword ptr [EDX]             ; 004c7bc1 | DAT_01ba5c50
    ADD EAX,0x60                        ; 004c7bc3
    PUSH EAX                            ; 004c7bc6
    CALL engine_special.cpp_FUN_0055d723 ; 004c7bc7
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c7bcc
    XOR EBX,EBX                         ; 004c7bcf
    MOV EAX,dword ptr [ESP + 0x100]     ; 004c7bd1
    MOV dword ptr [ESP + 0x48],EBX      ; 004c7bd8
    MOV dword ptr [ESP + 0x40],EAX      ; 004c7bdc
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004c7be0
    LEA EBX,[ESP + 0x64]                ; 004c7be7
    MOV dword ptr [ESP + 0x44],EAX      ; 004c7beb
    LEA EAX,[ESP + 0x40]                ; 004c7bef
    MOV EDX,dword ptr [0x0060b280]      ; 004c7bf3 | DAT_0060b280
    FLD float ptr [EAX]                 ; 004c7bf9
    FMUL float ptr [0x005f7ba8]         ; 004c7bfb | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c7c01
    FLD float ptr [EAX + 0x4]           ; 004c7c03
    FMUL float ptr [0x005f7ba8]         ; 004c7c06 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c7c0c
    FLD float ptr [EAX + 0x8]           ; 004c7c0f
    FMUL float ptr [0x005f7ba8]         ; 004c7c12 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c7c18
    LEA EAX,[ESP + 0x64]                ; 004c7c1b
    PUSH EAX                            ; 004c7c1f
    MOV EAX,dword ptr [EDX]             ; 004c7c20 | DAT_01ba5c50
    ADD EAX,0x90                        ; 004c7c22
    PUSH EAX                            ; 004c7c27
    CALL engine_special.cpp_FUN_0055d723 ; 004c7c28
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c7c2d
    LEA EBX,[ESP + 0x70]                ; 004c7c30
    LEA EAX,[ESP + 0x4c]                ; 004c7c34
    FLD float ptr [EAX]                 ; 004c7c38
    FMUL float ptr [0x005f7ba8]         ; 004c7c3a | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c7c40
    FLD float ptr [EAX + 0x4]           ; 004c7c42
    FMUL float ptr [0x005f7ba8]         ; 004c7c45 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c7c4b
    FLD float ptr [EAX + 0x8]           ; 004c7c4e
    FMUL float ptr [0x005f7ba8]         ; 004c7c51 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c7c57
    PUSH 0x4                            ; 004c7c5a
    PUSH 0x0                            ; 004c7c5c
    PUSH 0x1cb82bc                      ; 004c7c5e | DAT_01cb82bc
    LEA EAX,[ESP + 0x7c]                ; 004c7c63
    PUSH EAX                            ; 004c7c67
    MOV ESI,dword ptr [0x0061b5a8]      ; 004c7c68 | g_CDemonSetPtr
    PUSH ESI                            ; 004c7c6e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_005317c0 ; 004c7c6f
        ;   XREF to: 005317c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_005317c0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004c7c74
    XOR ECX,ECX                         ; 004c7c77
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004c7c79
        ;   Label: LAB_004c7c79
    MOV EDX,dword ptr [ECX + 0x622034]  ; 004c7c80 | DAT_00622034 | DAT_00622064
    IMUL EDX                            ; 004c7c86
    SHRD EAX,EDX,0x10                   ; 004c7c88
    MOV EDX,dword ptr [ECX + 0x622038]  ; 004c7c8c | DAT_00622038 | DAT_00622068
    MOV dword ptr [ECX + 0x622034],EAX  ; 004c7c92 | DAT_00622034 | DAT_00622064
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004c7c98
    IMUL EDX                            ; 004c7c9f
    SHRD EAX,EDX,0x10                   ; 004c7ca1
    MOV EDX,dword ptr [ECX + 0x62203c]  ; 004c7ca5 | DAT_0062203c | DAT_0062206c
    MOV dword ptr [ECX + 0x622038],EAX  ; 004c7cab | DAT_00622038 | DAT_00622068
    MOV EAX,dword ptr [ESP + 0xec]      ; 004c7cb1
    ADD ECX,0x30                        ; 004c7cb8
    IMUL EDX                            ; 004c7cbb
    SHRD EAX,EDX,0x10                   ; 004c7cbd
    MOV dword ptr [ECX + 0x62200c],EAX  ; 004c7cc1 | DAT_0062203c | DAT_0062206c
    CMP ECX,0xc0                        ; 004c7cc7
    JNZ 0x004c7c79                      ; 004c7ccd
        ;   XREF to: 004c7c79 (CONDITIONAL_JUMP)  ; LAB_004c7c79
    PUSH 0x0                            ; 004c7ccf
    MOV EDI,dword ptr [EBP + 0x14]      ; 004c7cd1
    MOV EAX,[0x007bda74]                ; 004c7cd4 | DAT_007bda74
    PUSH EDI                            ; 004c7cd9
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004c7cda
    PUSH EAX                            ; 004c7cdd
    CALL dword ptr [EDX + 0x4]          ; 004c7cde
    MOV EAX,0xffff                      ; 004c7ce1
    MOV EDX,dword ptr [0x01c38aec]      ; 004c7ce6 | DAT_01c38aec
    ADD ESP,0xc                         ; 004c7cec
    SUB EAX,EDX                         ; 004c7cef
    PUSH EAX                            ; 004c7cf1
    MOV ECX,dword ptr [0x0060b280]      ; 004c7cf2 | DAT_0060b280
    PUSH ECX                            ; 004c7cf8 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 004c7cf9
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004c7cfe
    PUSH 0x1cb8288                      ; 004c7d01
    MOV EBX,dword ptr [0x0060b280]      ; 004c7d06 | DAT_0060b280
    PUSH EBX                            ; 004c7d0c | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 004c7d0d
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c7d12
    MOV ESI,dword ptr [0x0060b280]      ; 004c7d15 | DAT_0060b280
    PUSH ESI                            ; 004c7d1b | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 004c7d1c
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 004c7d21
    MOV EDI,dword ptr [ESP + 0x108]     ; 004c7d24
    INC EDI                             ; 004c7d2b
    MOV dword ptr [ESP + 0x108],EDI     ; 004c7d2c
    CMP EDI,0x3                         ; 004c7d33
    JGE 0x004c75d6                      ; 004c7d36
        ;   XREF to: 004c75d6 (CONDITIONAL_JUMP)  ; LAB_004c75d6
    JMP 0x004c7967                      ; 004c7d3c
        ;   XREF to: 004c7967 (UNCONDITIONAL_JUMP)  ; LAB_004c7967
    MOV ESI,0x9a80                      ; 004c7d41
        ;   Label: LAB_004c7d41
    MOV EDI,0xb100                      ; 004c7d46
    MOV EBX,0x9000                      ; 004c7d4b
    MOV dword ptr [ESP + 0xf0],ESI      ; 004c7d50
    MOV dword ptr [ESP + 0xec],EDI      ; 004c7d57
    MOV dword ptr [ESP + 0xf4],EBX      ; 004c7d5e
    JMP 0x004c787c                      ; 004c7d65
        ;   XREF to: 004c787c (UNCONDITIONAL_JUMP)  ; LAB_004c787c
    XOR EAX,EAX                         ; 004c7d6a
        ;   Label: LAB_004c7d6a
    MOV dword ptr [ESP + 0xf0],EAX      ; 004c7d6c
    MOV dword ptr [ESP + 0xec],EAX      ; 004c7d73
    MOV dword ptr [ESP + 0xf4],EAX      ; 004c7d7a
    JMP 0x004c787c                      ; 004c7d81
        ;   XREF to: 004c787c (UNCONDITIONAL_JUMP)  ; LAB_004c787c
    JBE 0x004c7d41                      ; 004c7d86
        ;   XREF to: 004c7d41 (CONDITIONAL_JUMP)  ; LAB_004c7d41
        ;   Label: LAB_004c7d86
    CMP EBX,0x2                         ; 004c7d88
    JZ 0x004c7d6a                       ; 004c7d8b
        ;   XREF to: 004c7d6a (CONDITIONAL_JUMP)  ; LAB_004c7d6a
    JMP 0x004c7863                      ; 004c7d8d
        ;   XREF to: 004c7863 (UNCONDITIONAL_JUMP)  ; LAB_004c7863

