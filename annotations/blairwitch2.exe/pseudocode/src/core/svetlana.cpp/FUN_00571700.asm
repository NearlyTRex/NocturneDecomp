; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_svetlana_cpp_FUN_00571700(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CGame* g_CGamePtr = 01cb6900
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c38aec
;   undefined4 g_CGameInstance.field528_0x210
;   undefined4 g_CDemonSetInstance.field1420952_0x15ae98
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_charactr.cpp_FUN_004254b0
;   core_cloth.cpp_CCloth_render_FUN_005b0fe0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571700
        ;   Label: core_svetlana.cpp_FUN_00571700
    PUSH ESI                            ; 00571701
    PUSH EBP                            ; 00571702
    SUB ESP,0x78                        ; 00571703
    MOV ESI,dword ptr [ESP + 0x88]      ; 00571706
    MOV EAX,[0x0061b5a8]                ; 0057170d | g_CDemonSetPtr
    MOV EDX,ESI                         ; 00571712
    MOV dword ptr [EAX + 0x15ae98],0x1  ; 00571714 | g_CDemonSetInstance.field1420952_0x15ae98
    XOR EAX,EAX                         ; 0057171e
    INC EAX                             ; 00571720
        ;   Label: LAB_00571720
    MOV ECX,dword ptr [EDX + 0x23f4]    ; 00571721
    ADD EDX,0x4                         ; 00571727
    MOV dword ptr [ESP + EAX*0x4 + -0x4],ECX ; 0057172a
    CMP EAX,0x1e                        ; 0057172e
    JL 0x00571720                       ; 00571731
        ;   XREF to: 00571720 (CONDITIONAL_JUMP)  ; LAB_00571720
    PUSH ESI                            ; 00571733
    CALL core_charactr.cpp_FUN_004254b0 ; 00571734
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004254b0()
    ADD ESP,0x4                         ; 00571739
    MOV EDX,dword ptr [0x0060b280]      ; 0057173c | DAT_0060b280
    PUSH EDX                            ; 00571742 | DAT_01ba5c50
    MOV EBX,EAX                         ; 00571743
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00571745
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0057174a
    TEST EAX,EAX                        ; 0057174d
    JNZ 0x00571800                      ; 0057174f
        ;   XREF to: 00571800 (CONDITIONAL_JUMP)  ; LAB_00571800
    CMP dword ptr [0x01c38aec],0x4000   ; 00571755 | DAT_01c38aec
    JGE 0x00571800                      ; 0057175f
        ;   XREF to: 00571800 (CONDITIONAL_JUMP)  ; LAB_00571800
    MOV EAX,ESI                         ; 00571765
    LEA EDX,[ESI + 0x78]                ; 00571767
    ADD EAX,0x4                         ; 0057176a
        ;   Label: LAB_0057176a
    MOV dword ptr [EAX + 0x23f0],0x0    ; 0057176d
    CMP EAX,EDX                         ; 00571777
    JNZ 0x0057176a                      ; 00571779
        ;   XREF to: 0057176a (CONDITIONAL_JUMP)  ; LAB_0057176a
    PUSH EDI                            ; 0057177b
    MOV EAX,dword ptr [ESI + 0x9acbc]   ; 0057177c
    MOV dword ptr [ESI + EAX*0x4 + 0x23f4],0x1 ; 00571782
    MOV EAX,dword ptr [ESI + 0x9acc0]   ; 0057178d
    PUSH 0x0                            ; 00571793
    MOV EBP,dword ptr [0x0060b280]      ; 00571795 | DAT_0060b280
    MOV dword ptr [ESI + EAX*0x4 + 0x23f4],0x1 ; 0057179b
    MOV EAX,[0x00616494]                ; 005717a6 | g_CGamePtr
    PUSH EBP                            ; 005717ab | DAT_01ba5c50
    MOV EDI,dword ptr [EAX + 0x210]     ; 005717ac | g_CGameInstance.field528_0x210
    MOV dword ptr [EAX + 0x210],0x2     ; 005717b2 | g_CGameInstance.field528_0x210
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 005717bc
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005717c1
    PUSH 0xbb80                         ; 005717c4
    MOV EAX,[0x0060b280]                ; 005717c9 | DAT_0060b280
    PUSH EAX                            ; 005717ce | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 005717cf
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 005717d4
    TEST EBX,EBX                        ; 005717d7
    JNZ 0x0057181c                      ; 005717d9
        ;   XREF to: 0057181c (CONDITIONAL_JUMP)  ; LAB_0057181c
    MOV EAX,[0x00616494]                ; 005717db | g_CGamePtr
        ;   Label: LAB_005717db
    MOV EDX,ESI                         ; 005717e0
    MOV dword ptr [EAX + 0x210],EDI     ; 005717e2 | g_CGameInstance.field528_0x210
    XOR EAX,EAX                         ; 005717e8
    POP EDI                             ; 005717ea
    ADD EDX,0x4                         ; 005717eb
        ;   Label: LAB_005717eb
    MOV ECX,dword ptr [ESP + EAX*0x4]   ; 005717ee
    INC EAX                             ; 005717f1
    MOV dword ptr [EDX + 0x23f0],ECX    ; 005717f2
    CMP EAX,0x1e                        ; 005717f8
    JL 0x005717eb                       ; 005717fb
        ;   XREF to: 005717eb (CONDITIONAL_JUMP)  ; LAB_005717eb
    LEA EAX,[EAX]                       ; 005717fd
    MOV EAX,[0x0061b5a8]                ; 00571800 | g_CDemonSetPtr
        ;   Label: LAB_00571800
    MOV dword ptr [EAX + 0x15ae98],0x0  ; 00571805 | g_CDemonSetInstance.field1420952_0x15ae98
    TEST EBX,EBX                        ; 0057180f
    JNZ 0x00571827                      ; 00571811
        ;   XREF to: 00571827 (CONDITIONAL_JUMP)  ; LAB_00571827
    MOV EAX,EBX                         ; 00571813
    ADD ESP,0x78                        ; 00571815
    POP EBP                             ; 00571818
    POP ESI                             ; 00571819
    POP EBX                             ; 0057181a
    RET                                 ; 0057181b
    PUSH ESI                            ; 0057181c
        ;   Label: LAB_0057181c
    CALL core_charactr.cpp_FUN_004254b0 ; 0057181d
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004254b0()
    ADD ESP,0x4                         ; 00571822
    JMP 0x005717db                      ; 00571825
        ;   XREF to: 005717db (UNCONDITIONAL_JUMP)  ; LAB_005717db
    PUSH ESI                            ; 00571827
        ;   Label: LAB_00571827
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 00571828
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057182d
    PUSH 0x0                            ; 00571830
    LEA EAX,[ESI + 0x25648]             ; 00571832
    PUSH EAX                            ; 00571838
    CALL core_cloth.cpp_CCloth_render_FUN_005b0fe0 ; 00571839
        ;   XREF to: 005b0fe0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_005b0fe0(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
    ADD ESP,0x8                         ; 0057183e
    PUSH 0x0                            ; 00571841
    LEA EAX,[ESI + 0x60178]             ; 00571843
    PUSH EAX                            ; 00571849
    CALL core_cloth.cpp_CCloth_render_FUN_005b0fe0 ; 0057184a
        ;   XREF to: 005b0fe0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_005b0fe0(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
    ADD ESP,0x8                         ; 0057184f
    PUSH ESI                            ; 00571852
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00571853
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00571858
    MOV EAX,EBX                         ; 0057185b
    ADD ESP,0x78                        ; 0057185d
    POP EBP                             ; 00571860
    POP ESI                             ; 00571861
    POP EBX                             ; 00571862
    RET                                 ; 00571863

