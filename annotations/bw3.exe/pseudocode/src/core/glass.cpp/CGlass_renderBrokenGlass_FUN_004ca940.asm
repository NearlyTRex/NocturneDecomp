; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004ca940(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x30]:1  local_30
;
; XREF[2]:
;   core_glass.cpp_CGlass_renderBackground_FUN_004cab40 at 004cacea
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 at 00533cfe
;
; Referenced Globals:
;   undefined4 DAT_005e0bc0
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046bf90
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004ca940
        ;   Label: core_glass.cpp_CGlass_renderBrokenGlass_FUN_004ca940
    PUSH EDI                            ; 004ca941
    PUSH EBP                            ; 004ca942
    SUB ESP,0x3c                        ; 004ca943
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004ca946
    PUSH EDX                            ; 004ca94a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 004ca94b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ca950
    PUSH 0x0                            ; 004ca953
    MOV ECX,dword ptr [ESP + 0x50]      ; 004ca955
    MOV EAX,dword ptr [ESP + 0x50]      ; 004ca959
    PUSH ECX                            ; 004ca95d
    MOV EAX,dword ptr [EAX + 0x154]     ; 004ca95e
    LEA ESI,[ESP + 0x20]                ; 004ca964
    LEA EDI,[ESP + 0x8]                 ; 004ca968
    CALL dword ptr [EAX + 0x1c]         ; 004ca96c
    MOV ECX,0x6                         ; 004ca96f
    ADD ESP,0x4                         ; 004ca974
    LEA EAX,[ESP + 0x4]                 ; 004ca977
    LEA ESI,[ESP + 0x1c]                ; 004ca97b
    PUSH EAX                            ; 004ca97f
    MOVSD.REP ES:EDI,ESI                ; 004ca980
    CALL core_box.cpp_FUN_0041daf0      ; 004ca982
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 004ca987
    TEST EAX,EAX                        ; 004ca98a
    JZ 0x004cab15                       ; 004ca98c
        ;   XREF to: 004cab15 (CONDITIONAL_JUMP)  ; LAB_004cab15
    PUSH EBX                            ; 004ca992
    MOV EBX,dword ptr [0x005f2afc]      ; 004ca993 | DAT_005f2afc
    PUSH EBX                            ; 004ca999 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 004ca99a
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004ca99f
    MOV EBX,dword ptr [ESP + 0x50]      ; 004ca9a2
    ADD EBX,0x3a4                       ; 004ca9a6
    TEST EAX,EAX                        ; 004ca9ac
    JZ 0x004cab29                       ; 004ca9ae
        ;   XREF to: 004cab29 (CONDITIONAL_JUMP)  ; LAB_004cab29
    PUSH 0x0                            ; 004ca9b4
    MOV EDI,dword ptr [0x005f2afc]      ; 004ca9b6 | DAT_005f2afc
    PUSH EDI                            ; 004ca9bc | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520 ; 004ca9bd
        ;   XREF to: 0046d520 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 004ca9c2
    PUSH EBX                            ; 004ca9c5
    MOV EBP,dword ptr [0x005f2afc]      ; 004ca9c6 | DAT_005f2afc
    PUSH EBP                            ; 004ca9cc | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004ca9cd
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004ca9d2
    PUSH 0x1                            ; 004ca9d5
    MOV EAX,[0x005f2afc]                ; 004ca9d7 | DAT_005f2afc
    PUSH EAX                            ; 004ca9dc | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520 ; 004ca9dd
        ;   XREF to: 0046d520 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 004ca9e2
        ;   Label: LAB_004ca9e2
    MOV EAX,dword ptr [ESP + 0x50]      ; 004ca9e5
    MOV EDX,dword ptr [EAX + 0xb64]     ; 004ca9e9
    XOR EBP,EBP                         ; 004ca9ef
    TEST EDX,EDX                        ; 004ca9f1
    JLE 0x004caa80                      ; 004ca9f3
        ;   XREF to: 004caa80 (CONDITIONAL_JUMP)  ; LAB_004caa80
    LEA EDI,[EAX + 0x3bc]               ; 004ca9f9
    XOR ESI,ESI                         ; 004ca9ff
    LEA EBX,[ESP + 0x34]                ; 004caa01
        ;   Label: LAB_004caa01
    MOV EAX,EDI                         ; 004caa05
    MOV EDX,dword ptr [0x005f2afc]      ; 004caa07 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004caa0d
    FMUL float ptr [0x005e0bc0]         ; 004caa0f | DAT_005e0bc0
    FISTP dword ptr [EBX]               ; 004caa15
    FLD float ptr [EAX + 0x4]           ; 004caa17
    FMUL float ptr [0x005e0bc0]         ; 004caa1a | DAT_005e0bc0
    FISTP dword ptr [EBX + 0x4]         ; 004caa20
    FLD float ptr [EAX + 0x8]           ; 004caa23
    FMUL float ptr [0x005e0bc0]         ; 004caa26 | DAT_005e0bc0
    FISTP dword ptr [EBX + 0x8]         ; 004caa2c
    LEA EAX,[ESP + 0x34]                ; 004caa2f
    PUSH EAX                            ; 004caa33
    MOV EAX,dword ptr [EDX]             ; 004caa34 | DAT_01bdd7e4
    ADD EAX,ESI                         ; 004caa36
    PUSH EAX                            ; 004caa38
    CALL engine_special.cpp_FUN_005632a3 ; 004caa39
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 004caa3e | DAT_005f2afc
    MOV EDX,dword ptr [EAX]             ; 004caa43 | DAT_01bdd7e4
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff ; 004caa45
    MOV EBX,dword ptr [EAX]             ; 004caa4d | DAT_01bdd7e4
    MOV dword ptr [ESI + EBX*0x1 + 0x24],0xffff ; 004caa4f
    MOV EAX,dword ptr [EAX]             ; 004caa57 | DAT_01bdd7e4
    ADD ESP,0x8                         ; 004caa59
    MOV dword ptr [ESI + EAX*0x1 + 0x28],0xffff ; 004caa5c
    MOV EAX,dword ptr [ESP + 0x50]      ; 004caa64
    INC EBP                             ; 004caa68
    ADD EDI,0xc                         ; 004caa69
    MOV EBX,dword ptr [EAX + 0xb64]     ; 004caa6c
    ADD ESI,0x30                        ; 004caa72
    CMP EBP,EBX                         ; 004caa75
    JL 0x004caa01                       ; 004caa77
        ;   XREF to: 004caa01 (CONDITIONAL_JUMP)  ; LAB_004caa01
    LEA EAX,[EAX]                       ; 004caa79
    NOP                                 ; 004caa7f
    MOV EAX,dword ptr [ESP + 0x50]      ; 004caa80
        ;   Label: LAB_004caa80
    MOV ESI,dword ptr [EAX + 0x1ac]     ; 004caa84
    PUSH ESI                            ; 004caa8a
    MOV EDI,dword ptr [0x005f2afc]      ; 004caa8b | DAT_005f2afc
    PUSH EDI                            ; 004caa91 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 004caa92
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004caa97
    MOV EAX,dword ptr [ESP + 0x50]      ; 004caa9a
    MOV EBP,dword ptr [EAX + 0xb68]     ; 004caa9e
    XOR EBX,EBX                         ; 004caaa4
    TEST EBP,EBP                        ; 004caaa6
    JLE 0x004cab00                      ; 004caaa8
        ;   XREF to: 004cab00 (CONDITIONAL_JUMP)  ; LAB_004cab00
    LEA EDI,[EAX + 0x6dc]               ; 004caaaa
    MOV ESI,EAX                         ; 004caab0
    MOV dword ptr [ESI + 0x6e4],0x0     ; 004caab2
        ;   Label: LAB_004caab2
    PUSH EDI                            ; 004caabc
    MOV dword ptr [ESI + 0x6e8],0x0     ; 004caabd
    MOV EAX,[0x005f2afc]                ; 004caac7 | DAT_005f2afc
    MOV dword ptr [ESI + 0x6ec],0x0     ; 004caacc
    PUSH EAX                            ; 004caad6 | DAT_01bdd7e4
    MOV dword ptr [ESI + 0x6f0],0x0     ; 004caad7
    CALL engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046bf90 ; 004caae1
        ;   XREF to: 0046bf90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046bf90(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 004caae6
    MOV EAX,dword ptr [ESP + 0x50]      ; 004caae9
    ADD ESI,0x48                        ; 004caaed
    INC EBX                             ; 004caaf0
    MOV EDX,dword ptr [EAX + 0xb68]     ; 004caaf1
    ADD EDI,0x48                        ; 004caaf7
    CMP EBX,EDX                         ; 004caafa
    JL 0x004caab2                       ; 004caafc
        ;   XREF to: 004caab2 (CONDITIONAL_JUMP)  ; LAB_004caab2
    MOV EAX,EAX                         ; 004caafe
    MOV ECX,dword ptr [ESP + 0x50]      ; 004cab00
        ;   Label: LAB_004cab00
    PUSH ECX                            ; 004cab04
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 004cab05
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cab0a
    POP EBX                             ; 004cab0d
    ADD ESP,0x3c                        ; 004cab0e
    POP EBP                             ; 004cab11
    POP EDI                             ; 004cab12
    POP ESI                             ; 004cab13
    RET                                 ; 004cab14
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004cab15
        ;   Label: LAB_004cab15
    PUSH ECX                            ; 004cab19
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 004cab1a
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cab1f
    ADD ESP,0x3c                        ; 004cab22
    POP EBP                             ; 004cab25
    POP EDI                             ; 004cab26
    POP ESI                             ; 004cab27
    RET                                 ; 004cab28
    PUSH EBX                            ; 004cab29
        ;   Label: LAB_004cab29
    MOV ESI,dword ptr [0x005f2afc]      ; 004cab2a | DAT_005f2afc
    PUSH ESI                            ; 004cab30 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004cab31
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    JMP 0x004ca9e2                      ; 004cab36
        ;   XREF to: 004ca9e2 (UNCONDITIONAL_JUMP)  ; LAB_004ca9e2

