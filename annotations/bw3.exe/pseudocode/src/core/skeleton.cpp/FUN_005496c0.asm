; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * core_skeleton_cpp_FUN_005496c0(CDeformableModel *param_1,undefined4 param_2,int param_3,byte param_4)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_0054fb20 at 0054fb40
;
; Referenced Globals:
;   undefined4 DAT_005e4758
;   undefined4 DAT_005f2afc
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0
;   core_xform.cpp_FUN_00584450
;   core_xform.cpp_matrixToEulerAngles_FUN_00583b10
;   engine_3d.c_clipAndDrawLine2D_FUN_00407b30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;   shape_edittool.cpp_FUN_00480f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005496c0
        ;   Label: core_skeleton.cpp_FUN_005496c0
    PUSH ESI                            ; 005496c1
    PUSH EDI                            ; 005496c2
    PUSH EBP                            ; 005496c3
    SUB ESP,0x64                        ; 005496c4
    MOV EDX,dword ptr [ESP + 0x78]      ; 005496c7
    PUSH EDX                            ; 005496cb
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0 ; 005496cc
        ;   XREF to: 005487e0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005496d1
    MOV DL,byte ptr [ESP + 0x84]        ; 005496d4
    MOV dword ptr [ESP + 0x60],EAX      ; 005496db
    TEST DL,0x1                         ; 005496df
    JZ 0x0054980b                       ; 005496e2
        ;   XREF to: 0054980b (CONDITIONAL_JUMP)  ; LAB_0054980b
    MOV ECX,dword ptr [EAX + 0x1de78]   ; 005496e8
    XOR EBP,EBP                         ; 005496ee
    TEST ECX,ECX                        ; 005496f0
    JLE 0x00549790                      ; 005496f2
        ;   XREF to: 00549790 (CONDITIONAL_JUMP)  ; LAB_00549790
    MOV EAX,dword ptr [ESP + 0x80]      ; 005496f8
    MOV dword ptr [ESP + 0x5c],EAX      ; 005496ff
    IMUL EAX,EBP,0x30                   ; 00549703
        ;   Label: LAB_00549703
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00549706
    LEA ESI,[ESP + 0x3c]                ; 0054970a
    PUSH EBX                            ; 0054970e
    LEA EDI,[ESP + 0x28]                ; 0054970f
    MOV dword ptr [ESP + 0x58],EAX      ; 00549713
    CALL core_xform.cpp_FUN_00584450    ; 00549717
        ;   XREF to: 00584450 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00584450()
    LEA ESI,[ESP + 0x40]                ; 0054971c
    ADD ESP,0x4                         ; 00549720
    LEA EBX,[ESP + 0x30]                ; 00549723
    MOVSD ES:EDI,ESI                    ; 00549727
    MOVSD ES:EDI,ESI                    ; 00549728
    MOVSD ES:EDI,ESI                    ; 00549729
    LEA EAX,[ESP + 0x24]                ; 0054972a
    MOV ESI,dword ptr [0x005f2afc]      ; 0054972e | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00549734
    FMUL float ptr [0x005e4758]         ; 00549736 | DAT_005e4758
    FISTP dword ptr [EBX]               ; 0054973c
    FLD float ptr [EAX + 0x4]           ; 0054973e
    FMUL float ptr [0x005e4758]         ; 00549741 | DAT_005e4758
    FISTP dword ptr [EBX + 0x4]         ; 00549747
    FLD float ptr [EAX + 0x8]           ; 0054974a
    FMUL float ptr [0x005e4758]         ; 0054974d | DAT_005e4758
    FISTP dword ptr [EBX + 0x8]         ; 00549753
    LEA EAX,[ESP + 0x30]                ; 00549756
    PUSH EAX                            ; 0054975a
    MOV EAX,dword ptr [ESI]             ; 0054975b
    ADD EAX,dword ptr [ESP + 0x58]      ; 0054975d
    PUSH EAX                            ; 00549761
    CALL engine_special.cpp_FUN_005632a3 ; 00549762
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00549767
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0054976a
    MOV EAX,dword ptr [ESP + 0x60]      ; 0054976e
    INC EBP                             ; 00549772
    ADD EDI,0x30                        ; 00549773
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 00549776
    MOV dword ptr [ESP + 0x5c],EDI      ; 0054977c
    CMP EBP,EDX                         ; 00549780
    JL 0x00549703                       ; 00549782
        ;   XREF to: 00549703 (CONDITIONAL_JUMP)  ; LAB_00549703
    LEA EAX,[EAX]                       ; 00549788
    MOV EDX,EDX                         ; 0054978e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00549790
        ;   Label: LAB_00549790
    MOV [0x01c6b5c0],EAX                ; 00549794 | DAT_01c6b5c0
    MOV EAX,dword ptr [ESP + 0x60]      ; 00549799
    MOV ECX,dword ptr [EAX + 0x1de78]   ; 0054979d
    XOR EBX,EBX                         ; 005497a3
    TEST ECX,ECX                        ; 005497a5
    JLE 0x0054980b                      ; 005497a7
        ;   XREF to: 0054980b (CONDITIONAL_JUMP)  ; LAB_0054980b
    MOV dword ptr [ESP + 0x58],EBX      ; 005497a9
    MOV EBP,EAX                         ; 005497ad
    MOV EAX,dword ptr [EBP + 0x1de9c]   ; 005497af
        ;   Label: LAB_005497af
    TEST EAX,EAX                        ; 005497b5
    JL 0x005497ee                       ; 005497b7
        ;   XREF to: 005497ee (CONDITIONAL_JUMP)  ; LAB_005497ee
    IMUL ESI,EAX,0x30                   ; 005497b9
    MOV EAX,[0x005f2afc]                ; 005497bc | DAT_005f2afc
    MOV ECX,0xc                         ; 005497c1
    SUB ESP,0x30                        ; 005497c6
    MOV EAX,dword ptr [EAX]             ; 005497c9
    MOV EDI,ESP                         ; 005497cb
    ADD ESI,EAX                         ; 005497cd
    MOVSD.REP ES:EDI,ESI                ; 005497cf
    MOV ESI,dword ptr [ESP + 0x88]      ; 005497d1
    MOV ECX,0xc                         ; 005497d8
    SUB ESP,0x30                        ; 005497dd
    ADD ESI,EAX                         ; 005497e0
    MOV EDI,ESP                         ; 005497e2
    MOVSD.REP ES:EDI,ESI                ; 005497e4
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407b30 ; 005497e6
        ;   XREF to: 00407b30 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407b30(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 005497eb
    MOV ESI,dword ptr [ESP + 0x58]      ; 005497ee
        ;   Label: LAB_005497ee
    MOV EAX,dword ptr [ESP + 0x60]      ; 005497f2
    ADD EBP,0x24                        ; 005497f6
    INC EBX                             ; 005497f9
    ADD ESI,0x30                        ; 005497fa
    MOV EDI,dword ptr [EAX + 0x1de78]   ; 005497fd
    MOV dword ptr [ESP + 0x58],ESI      ; 00549803
    CMP EBX,EDI                         ; 00549807
    JL 0x005497af                       ; 00549809
        ;   XREF to: 005497af (CONDITIONAL_JUMP)  ; LAB_005497af
    TEST byte ptr [ESP + 0x84],0x2      ; 0054980b
        ;   Label: LAB_0054980b
    JZ 0x005498c0                       ; 00549813
        ;   XREF to: 005498c0 (CONDITIONAL_JUMP)  ; LAB_005498c0
    MOV EAX,dword ptr [ESP + 0x60]      ; 00549819
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0054981d
    XOR EBX,EBX                         ; 00549823
    TEST EDX,EDX                        ; 00549825
    JLE 0x005498c0                      ; 00549827
        ;   XREF to: 005498c0 (CONDITIONAL_JUMP)  ; LAB_005498c0
    MOV EBP,dword ptr [ESP + 0x80]      ; 0054982d
    PUSH EBP                            ; 00549834
        ;   Label: LAB_00549834
    LEA ESI,[ESP + 0x10]                ; 00549835
    LEA EDI,[ESP + 0x4c]                ; 00549839
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00583b10 ; 0054983d
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00583b10()
    LEA ESI,[ESP + 0x10]                ; 00549842
    ADD ESP,0x4                         ; 00549846
    MOVSD ES:EDI,ESI                    ; 00549849
    MOVSD ES:EDI,ESI                    ; 0054984a
    MOVSD ES:EDI,ESI                    ; 0054984b
    PUSH EBP                            ; 0054984c
    LEA ESI,[ESP + 0x1c]                ; 0054984d
    CALL core_xform.cpp_FUN_00584450    ; 00549851
        ;   XREF to: 00584450 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00584450()
    ADD ESP,0x4                         ; 00549856
    MOV EAX,ESP                         ; 00549859
    PUSH EAX                            ; 0054985b
    LEA EAX,[ESP + 0x4c]                ; 0054985c
    LEA EDI,[ESP + 0x4]                 ; 00549860
    PUSH EAX                            ; 00549864
    MOV ECX,dword ptr [0x005f2afc]      ; 00549865 | DAT_005f2afc
    LEA ESI,[ESP + 0x20]                ; 0054986b
    PUSH ECX                            ; 0054986f
    MOVSD ES:EDI,ESI                    ; 00549870
    MOVSD ES:EDI,ESI                    ; 00549871
    MOVSD ES:EDI,ESI                    ; 00549872
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 00549873
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00549878
    PUSH 0xff                           ; 0054987b
    MOV ESI,dword ptr [0x005fb140]      ; 00549880 | g_CEditorToolsPtr
    PUSH 0x3f000000                     ; 00549886
    PUSH ESI                            ; 0054988b
    CALL shape_edittool.cpp_FUN_00480f00 ; 0054988c
        ;   XREF to: 00480f00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_00480f00(CEditorTools * this_ptr, float scale_factor, int text_color)
    ADD ESP,0xc                         ; 00549891
    MOV EDI,dword ptr [0x005f2afc]      ; 00549894 | DAT_005f2afc
    PUSH EDI                            ; 0054989a
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 0054989b
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 005498a0
    MOV EAX,dword ptr [ESP + 0x60]      ; 005498a3
    INC EBX                             ; 005498a7
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 005498a8
    ADD EBP,0x30                        ; 005498ae
    CMP EBX,EDX                         ; 005498b1
    JL 0x00549834                       ; 005498b3
        ;   XREF to: 00549834 (CONDITIONAL_JUMP)  ; LAB_00549834
    LEA EAX,[EAX]                       ; 005498b9
    NOP                                 ; 005498bf
    ADD ESP,0x64                        ; 005498c0
        ;   Label: LAB_005498c0
    POP EBP                             ; 005498c3
    POP EDI                             ; 005498c4
    POP ESI                             ; 005498c5
    POP EBX                             ; 005498c6
    RET                                 ; 005498c7

