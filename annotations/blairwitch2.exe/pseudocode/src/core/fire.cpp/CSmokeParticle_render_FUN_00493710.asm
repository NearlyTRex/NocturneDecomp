; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_00493710(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
; Local Variables:
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
;   core_fire.cpp_CFireEffect_render_FUN_0049c780 at 0049c90c
;
; Referenced Globals:
;   TerminatedCString s_core_fire_cpp_005d5346
;   TerminatedCString s_CSmokeParticle_render_Fr_005d5357
;   undefined4 DAT_005f64e4
;   undefined4 DAT_0060b280
;   undefined4 DAT_00614d34
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_0062205c
;   undefined4 DAT_00622060
;   undefined4 DAT_0062208c
;   undefined4 DAT_00622090
;   undefined4 DAT_006220bc
;   undefined4 DAT_006220c0
;   undefined4 DAT_007bda74
;   ... and 7 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_set.cpp_CDemonSet_computeLighting_FUN_005317c0
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_matrix.c_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;   engine_special.cpp_FUN_0055d9ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493710
        ;   Label: core_fire.cpp_CSmokeParticle_render_FUN_00493710
    PUSH ESI                            ; 00493711
    PUSH EDI                            ; 00493712
    PUSH EBP                            ; 00493713
    SUB ESP,0x60                        ; 00493714
    MOV EDI,dword ptr [ESP + 0x74]      ; 00493717
    MOV ESI,dword ptr [0x0060b280]      ; 0049371b | DAT_0060b280
    LEA EBX,[ESP + 0xc]                 ; 00493721
    LEA EAX,[EDI + 0x4]                 ; 00493725
    MOV ESI,dword ptr [ESI]             ; 00493728 | DAT_01ba5c50
    FLD float ptr [EAX]                 ; 0049372a
    FMUL float ptr [0x005f64e4]         ; 0049372c | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00493732
    FLD float ptr [EAX + 0x4]           ; 00493734
    FMUL float ptr [0x005f64e4]         ; 00493737 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049373d
    FLD float ptr [EAX + 0x8]           ; 00493740
    FMUL float ptr [0x005f64e4]         ; 00493743 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00493749
    LEA EAX,[ESP + 0xc]                 ; 0049374c
    PUSH EAX                            ; 00493750
    PUSH ESI                            ; 00493751
    CALL engine_special.cpp_FUN_0055d9ec ; 00493752
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00493757
    PUSH ESI                            ; 0049375a
    MOV EDX,dword ptr [0x0060b280]      ; 0049375b | DAT_0060b280
    PUSH EDX                            ; 00493761 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0 ; 00493762
        ;   XREF to: 0046cad0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 00493767
    TEST EAX,EAX                        ; 0049376a
    JZ 0x00493a36                       ; 0049376c
        ;   XREF to: 00493a36 (CONDITIONAL_JUMP)  ; LAB_00493a36
    FLD float ptr [EDI + 0x18]          ; 00493772
    CALL crt_math.c_round_FUN_005b7ff0  ; 00493775
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x58]        ; 0049377a
    MOV ECX,dword ptr [ESP + 0x58]      ; 0049377e
    TEST ECX,ECX                        ; 00493782
    JL 0x0049378b                       ; 00493784
        ;   XREF to: 0049378b (CONDITIONAL_JUMP)  ; LAB_0049378b
    CMP ECX,0x28                        ; 00493786
    JL 0x004937ae                       ; 00493789
        ;   XREF to: 004937ae (CONDITIONAL_JUMP)  ; LAB_004937ae
    MOV ESI,0x5d5346                    ; 0049378b | = "..\\core\\fire.cpp"
        ;   Label: LAB_0049378b
    MOV EBP,0x11d                       ; 00493790
    PUSH 0x5d5357                       ; 00493795 | = "CSmokeParticle::render - Frame out of..."
    MOV dword ptr [0x01d046a0],ESI      ; 0049379a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004937a0 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004937a6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004937ab
    MOV EBX,dword ptr [ESP + 0x58]      ; 004937ae
        ;   Label: LAB_004937ae
    LEA EAX,[EBX*0x4 + 0x0]             ; 004937b2
    SUB EAX,EBX                         ; 004937b9
    SHL EAX,0x3                         ; 004937bb
    ADD EAX,0x614d34                    ; 004937be | DAT_00614d34
    PUSH EAX                            ; 004937c3
    MOV EAX,[0x0060b280]                ; 004937c4 | DAT_0060b280
    PUSH EAX                            ; 004937c9 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004937ca
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004937cf
    LEA ESI,[EDI + 0x4]                 ; 004937d2
    PUSH ESI                            ; 004937d5
    MOV EDX,dword ptr [0x0060b280]      ; 004937d6 | DAT_0060b280
    PUSH EDX                            ; 004937dc | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 004937dd
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004937e2
    PUSH 0x0                            ; 004937e5
    PUSH 0x1c3deb8                      ; 004937e7 | DAT_01c3deb8
    MOV ECX,dword ptr [0x0060b280]      ; 004937ec | DAT_0060b280
    PUSH ECX                            ; 004937f2 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300 ; 004937f3
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004937f8
    MOV EAX,dword ptr [EDI + 0x14]      ; 004937fb
    XOR EBX,EBX                         ; 004937fe
    MOV dword ptr [ESP + 0x5c],EAX      ; 00493800
    MOV dword ptr [ESP + 0x20],EBX      ; 00493804
    FLD float ptr [ESP + 0x5c]          ; 00493808
    FCHS                                ; 0049380c
    FSTP float ptr [ESP + 0x18]         ; 0049380e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00493812
    LEA EBX,[ESP + 0x48]                ; 00493816
    MOV dword ptr [ESP + 0x54],EAX      ; 0049381a
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049381e
    LEA EAX,[ESP + 0x18]                ; 00493822
    MOV EDX,dword ptr [0x0060b280]      ; 00493826 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049382c
    FMUL float ptr [0x005f64e4]         ; 0049382e | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00493834
    FLD float ptr [EAX + 0x4]           ; 00493836
    FMUL float ptr [0x005f64e4]         ; 00493839 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049383f
    FLD float ptr [EAX + 0x8]           ; 00493842
    FMUL float ptr [0x005f64e4]         ; 00493845 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049384b
    LEA EAX,[ESP + 0x48]                ; 0049384e
    PUSH EAX                            ; 00493852
    MOV EAX,dword ptr [EDX]             ; 00493853 | DAT_01ba5c50
    PUSH EAX                            ; 00493855
    CALL engine_special.cpp_FUN_0055d723 ; 00493856
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049385b
    XOR EBP,EBP                         ; 0049385e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00493860
    MOV EBX,ESP                         ; 00493864
    MOV dword ptr [ESP + 0x18],EAX      ; 00493866
    MOV EAX,dword ptr [ESP + 0x54]      ; 0049386a
    MOV EDX,dword ptr [0x0060b280]      ; 0049386e | DAT_0060b280
    MOV dword ptr [ESP + 0x1c],EAX      ; 00493874
    LEA EAX,[ESP + 0x18]                ; 00493878
    MOV dword ptr [ESP + 0x20],EBP      ; 0049387c
    FLD float ptr [EAX]                 ; 00493880
    FMUL float ptr [0x005f64e4]         ; 00493882 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00493888
    FLD float ptr [EAX + 0x4]           ; 0049388a
    FMUL float ptr [0x005f64e4]         ; 0049388d | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00493893
    FLD float ptr [EAX + 0x8]           ; 00493896
    FMUL float ptr [0x005f64e4]         ; 00493899 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049389f
    MOV EAX,ESP                         ; 004938a2
    PUSH EAX                            ; 004938a4
    MOV EAX,dword ptr [EDX]             ; 004938a5 | DAT_01ba5c50
    ADD EAX,0x30                        ; 004938a7
    PUSH EAX                            ; 004938aa
    CALL engine_special.cpp_FUN_0055d723 ; 004938ab
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004938b0
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004938b3
    MOV dword ptr [ESP + 0x20],EBP      ; 004938b7
    MOV dword ptr [ESP + 0x18],EAX      ; 004938bb
    MOV dword ptr [ESP + 0x1c],EAX      ; 004938bf
    LEA EBX,[ESP + 0x3c]                ; 004938c3
    LEA EAX,[ESP + 0x18]                ; 004938c7
    MOV EDX,dword ptr [0x0060b280]      ; 004938cb | DAT_0060b280
    FLD float ptr [EAX]                 ; 004938d1
    FMUL float ptr [0x005f64e4]         ; 004938d3 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 004938d9
    FLD float ptr [EAX + 0x4]           ; 004938db
    FMUL float ptr [0x005f64e4]         ; 004938de | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 004938e4
    FLD float ptr [EAX + 0x8]           ; 004938e7
    FMUL float ptr [0x005f64e4]         ; 004938ea | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 004938f0
    LEA EAX,[ESP + 0x3c]                ; 004938f3
    PUSH EAX                            ; 004938f7
    MOV EAX,dword ptr [EDX]             ; 004938f8 | DAT_01ba5c50
    ADD EAX,0x60                        ; 004938fa
    PUSH EAX                            ; 004938fd
    CALL engine_special.cpp_FUN_0055d723 ; 004938fe
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00493903
    MOV EAX,dword ptr [ESP + 0x54]      ; 00493906
    LEA EBX,[ESP + 0x24]                ; 0049390a
    MOV dword ptr [ESP + 0x18],EAX      ; 0049390e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00493912
    MOV EDX,dword ptr [0x0060b280]      ; 00493916 | DAT_0060b280
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049391c
    LEA EAX,[ESP + 0x18]                ; 00493920
    MOV dword ptr [ESP + 0x20],EBP      ; 00493924
    FLD float ptr [EAX]                 ; 00493928
    FMUL float ptr [0x005f64e4]         ; 0049392a | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00493930
    FLD float ptr [EAX + 0x4]           ; 00493932
    FMUL float ptr [0x005f64e4]         ; 00493935 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049393b
    FLD float ptr [EAX + 0x8]           ; 0049393e
    FMUL float ptr [0x005f64e4]         ; 00493941 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00493947
    LEA EAX,[ESP + 0x24]                ; 0049394a
    PUSH EAX                            ; 0049394e
    MOV EAX,dword ptr [EDX]             ; 0049394f | DAT_01ba5c50
    ADD EAX,0x90                        ; 00493951
    PUSH EAX                            ; 00493956
    CALL engine_special.cpp_FUN_0055d723 ; 00493957
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x80000                     ; 0049395c
    MOV EBX,0xf80000                    ; 00493961
    ADD ESP,0x8                         ; 00493966
    MOV EAX,ESI                         ; 00493969
    MOV dword ptr [0x0062202c],ECX      ; 0049396b | DAT_0062202c
    MOV dword ptr [0x00622030],EBX      ; 00493971 | DAT_00622030
    MOV dword ptr [0x0062205c],EBX      ; 00493977 | DAT_0062205c
    MOV dword ptr [0x00622060],EBX      ; 0049397d | DAT_00622060
    MOV dword ptr [0x0062208c],EBX      ; 00493983 | DAT_0062208c
    MOV dword ptr [0x00622090],ECX      ; 00493989 | DAT_00622090
    MOV dword ptr [0x006220bc],ECX      ; 0049398f | DAT_006220bc
    LEA EBX,[ESP + 0x30]                ; 00493995
    MOV dword ptr [0x006220c0],ECX      ; 00493999 | DAT_006220c0
    FLD float ptr [EAX]                 ; 0049399f
    FMUL float ptr [0x005f64e4]         ; 004939a1 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 004939a7
    FLD float ptr [EAX + 0x4]           ; 004939a9
    FMUL float ptr [0x005f64e4]         ; 004939ac | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 004939b2
    FLD float ptr [EAX + 0x8]           ; 004939b5
    FMUL float ptr [0x005f64e4]         ; 004939b8 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 004939be
    PUSH 0x4                            ; 004939c1
    PUSH EBP                            ; 004939c3
    PUSH 0x1c3dec4                      ; 004939c4 | DAT_01c3dec4
    LEA EAX,[ESP + 0x3c]                ; 004939c9
    PUSH EAX                            ; 004939cd
    MOV EAX,[0x0061b5a8]                ; 004939ce | g_CDemonSetPtr
    PUSH EAX                            ; 004939d3 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_005317c0 ; 004939d4
        ;   XREF to: 005317c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_005317c0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004939d9
    PUSH EBP                            ; 004939dc
    MOV EAX,[0x007bda74]                ; 004939dd | DAT_007bda74
    PUSH ESI                            ; 004939e2
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004939e3
    PUSH EAX                            ; 004939e6
    CALL dword ptr [EDX + 0x4]          ; 004939e7
    MOV EAX,0xffff                      ; 004939ea
    MOV EDX,dword ptr [0x01c38aec]      ; 004939ef | DAT_01c38aec
    ADD ESP,0xc                         ; 004939f5
    SUB EAX,EDX                         ; 004939f8
    MOV EDX,dword ptr [EDI + 0x28]      ; 004939fa
    IMUL EDX                            ; 004939fd
    SHRD EAX,EDX,0x10                   ; 004939ff
    PUSH EAX                            ; 00493a03
    MOV ECX,dword ptr [0x0060b280]      ; 00493a04 | DAT_0060b280
    PUSH ECX                            ; 00493a0a | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00493a0b
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00493a10
    PUSH 0x1c3ded0                      ; 00493a13
    MOV EBX,dword ptr [0x0060b280]      ; 00493a18 | DAT_0060b280
    PUSH EBX                            ; 00493a1e | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 00493a1f
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00493a24
    MOV ESI,dword ptr [0x0060b280]      ; 00493a27 | DAT_0060b280
    PUSH ESI                            ; 00493a2d | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 00493a2e
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00493a33
    ADD ESP,0x60                        ; 00493a36
        ;   Label: LAB_00493a36
    POP EBP                             ; 00493a39
    POP EDI                             ; 00493a3a
    POP ESI                             ; 00493a3b
    POP EBX                             ; 00493a3c
    RET                                 ; 00493a3d

