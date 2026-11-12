; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_vehicle_cpp_CVehicle_renderOpaque_FUN_005a8670(CVehicle *this_ptr)
;
; Parameters:
; CVehicle *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_01bc120c
;   undefined4 g_CGameInstance.goggles_active
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_actor.cpp_FUN_00408b40
;   core_box.cpp_CBoundingBox3D_render_FUN_00421670
;   core_box.cpp_FUN_004207b0
;   core_dlight.cpp_renderConeLightGeometry_FUN_00465890
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8670
        ;   Label: core_vehicle.cpp_CVehicle_renderOpaque_FUN_005a8670
    PUSH ESI                            ; 005a8671
    PUSH EDI                            ; 005a8672
    PUSH EBP                            ; 005a8673
    SUB ESP,0xb0                        ; 005a8674
    MOV EDX,dword ptr [ESP + 0xc4]      ; 005a867a
    PUSH EDX                            ; 005a8681
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 005a8682
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005a8687
    PUSH 0x0                            ; 005a868a
    MOV ECX,dword ptr [ESP + 0xc8]      ; 005a868c
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005a8693
    PUSH ECX                            ; 005a869a
    MOV EAX,dword ptr [EAX + 0x154]     ; 005a869b
    LEA ESI,[ESP + 0x38]                ; 005a86a1
    LEA EDI,[ESP + 0x8]                 ; 005a86a5
    CALL dword ptr [EAX + 0x1c]         ; 005a86a9
    MOV ECX,0x6                         ; 005a86ac
    ADD ESP,0x4                         ; 005a86b1
    LEA EAX,[ESP + 0x4]                 ; 005a86b4
    LEA ESI,[ESP + 0x34]                ; 005a86b8
    PUSH EAX                            ; 005a86bc
    MOVSD.REP ES:EDI,ESI                ; 005a86bd
    CALL core_box.cpp_FUN_004207b0      ; 005a86bf
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 005a86c4
    MOV EBX,dword ptr [ESP + 0xc4]      ; 005a86c7
    MOV dword ptr [ESP + 0xa8],EAX      ; 005a86ce
    MOV dword ptr [EBX + 0x106c],EAX    ; 005a86d5
    TEST EAX,EAX                        ; 005a86db
    JZ 0x005a8750                       ; 005a86dd
        ;   XREF to: 005a8750 (CONDITIONAL_JUMP)  ; LAB_005a8750
    MOV EBX,dword ptr [0x00612560]      ; 005a86df | DAT_00612560
    PUSH EBX                            ; 005a86e5 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 005a86e6
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005a86eb
    TEST EAX,EAX                        ; 005a86ee
    JZ 0x005a8786                       ; 005a86f0
        ;   XREF to: 005a8786 (CONDITIONAL_JUMP)  ; LAB_005a8786
    MOV EAX,[0x0061d95c]                ; 005a86f6 | g_CGamePtr
    CMP dword ptr [EAX + 0x25c],0x0     ; 005a86fb | g_CGameInstance.goggles_active
    JNZ 0x005a8786                      ; 005a8702
        ;   XREF to: 005a8786 (CONDITIONAL_JUMP)  ; LAB_005a8786
    MOV EBP,dword ptr [ESP + 0xc4]      ; 005a8708
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005a870f
    PUSH EBP                            ; 005a8716
    MOV EAX,dword ptr [EAX + 0x154]     ; 005a8717
    LEA ESI,[ESP + 0x4c]                ; 005a871d
    LEA EDI,[ESP + 0x1c]                ; 005a8721
    CALL dword ptr [EAX + 0x1c]         ; 005a8725
    MOV ECX,0x6                         ; 005a8728
    ADD ESP,0x4                         ; 005a872d
    LEA EAX,[ESP + 0x18]                ; 005a8730
    LEA ESI,[ESP + 0x48]                ; 005a8734
    PUSH EAX                            ; 005a8738
    MOVSD.REP ES:EDI,ESI                ; 005a8739
    CALL core_box.cpp_CBoundingBox3D_render_FUN_00421670 ; 005a873b
        ;   XREF to: 00421670 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_render_FUN_00421670(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005a8740
    LEA EAX,[EAX]                       ; 005a8743
    LEA EDX,[EDX]                       ; 005a8749
    NOP                                 ; 005a874f
    MOV ECX,dword ptr [ESP + 0xc4]      ; 005a8750
        ;   Label: LAB_005a8750
    PUSH ECX                            ; 005a8757
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 005a8758
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005a875d
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005a8760
    CMP dword ptr [EAX + 0x106c],0x0    ; 005a8767
    JNZ 0x005a886c                      ; 005a876e
        ;   XREF to: 005a886c (CONDITIONAL_JUMP)  ; LAB_005a886c
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005a8774
        ;   Label: LAB_005a8774
    ADD ESP,0xb0                        ; 005a877b
    POP EBP                             ; 005a8781
    POP EDI                             ; 005a8782
    POP ESI                             ; 005a8783
    POP EBX                             ; 005a8784
    RET                                 ; 005a8785
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005a8786
        ;   Label: LAB_005a8786
    PUSH -0x1                           ; 005a878d
    ADD EAX,0x158                       ; 005a878f
    PUSH 0x0                            ; 005a8794
    PUSH EAX                            ; 005a8796
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 005a8797
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005a879c
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005a879f
    MOV EDI,dword ptr [EAX + 0x938]     ; 005a87a6
    XOR ESI,ESI                         ; 005a87ac
    TEST EDI,EDI                        ; 005a87ae
    JLE 0x005a8750                      ; 005a87b0
        ;   XREF to: 005a8750 (CONDITIONAL_JUMP)  ; LAB_005a8750
    LEA EBX,[EAX + 0x950]               ; 005a87b2
    LEA EBP,[EAX + 0xacc]               ; 005a87b8
    MOV EDI,dword ptr [ESP + 0xc4]      ; 005a87be
    ADD EAX,0xae4                       ; 005a87c5
    ADD EDI,0xad8                       ; 005a87ca
    MOV dword ptr [ESP + 0xac],EAX      ; 005a87d0
    PUSH EDI                            ; 005a87d7
        ;   Label: LAB_005a87d7
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005a87d8
    PUSH EAX                            ; 005a87df
    MOV EDX,dword ptr [0x00612560]      ; 005a87e0 | DAT_00612560
    PUSH EDX                            ; 005a87e6 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 005a87e7
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 005a87ec
    PUSH 0x0                            ; 005a87ef
    PUSH EBP                            ; 005a87f1
    MOV ECX,dword ptr [0x00612560]      ; 005a87f2 | DAT_00612560
    PUSH ECX                            ; 005a87f8 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 005a87f9
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 005a87fe
    PUSH -0x1                           ; 005a8801
    PUSH 0x0                            ; 005a8803
    PUSH EBX                            ; 005a8805
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 005a8806
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005a880b
    MOV EAX,[0x00612560]                ; 005a880e | DAT_00612560
    PUSH EAX                            ; 005a8813 | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 005a8814
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 005a8819
    MOV EDX,dword ptr [0x00612560]      ; 005a881c | DAT_00612560
    PUSH EDX                            ; 005a8822 | DAT_01bc120c
    INC ESI                             ; 005a8823
    ADD EDI,0x1b4                       ; 005a8824
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 005a882a
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 005a882f
    ADD EBP,0x1b4                       ; 005a8832
    MOV ECX,dword ptr [ESP + 0xac]      ; 005a8838
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005a883f
    ADD EBX,0x1b4                       ; 005a8846
    ADD ECX,0x1b4                       ; 005a884c
    MOV EDX,dword ptr [EAX + 0x938]     ; 005a8852
    MOV dword ptr [ESP + 0xac],ECX      ; 005a8858
    CMP ESI,EDX                         ; 005a885f
    JL 0x005a87d7                       ; 005a8861
        ;   XREF to: 005a87d7 (CONDITIONAL_JUMP)  ; LAB_005a87d7
    JMP 0x005a8750                      ; 005a8867
        ;   XREF to: 005a8750 (UNCONDITIONAL_JUMP)  ; LAB_005a8750
    MOV ESI,dword ptr [0x00612560]      ; 005a886c | DAT_00612560
        ;   Label: LAB_005a886c
    PUSH ESI                            ; 005a8872 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 005a8873
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005a8878
    TEST EAX,EAX                        ; 005a887b
    JNZ 0x005a8774                      ; 005a887d
        ;   XREF to: 005a8774 (CONDITIONAL_JUMP)  ; LAB_005a8774
    MOV EDI,0x3f91eb85                  ; 005a8883
    MOV EBP,0xbe27ef9e                  ; 005a8888
    MOV EAX,0x40c00000                  ; 005a888d
    MOV EDX,0xbf91eb85                  ; 005a8892
    MOV ESI,dword ptr [ESP + 0xc4]      ; 005a8897
    MOV dword ptr [ESP + 0x80],EAX      ; 005a889e
    MOV dword ptr [ESP + 0x98],EAX      ; 005a88a5
    LEA EAX,[ESP + 0x78]                ; 005a88ac
    MOV dword ptr [ESP + 0x78],EDI      ; 005a88b0
    PUSH EAX                            ; 005a88b4
    MOV dword ptr [ESP + 0x80],EBP      ; 005a88b5
    MOV dword ptr [ESP + 0x94],EDX      ; 005a88bc
    PUSH ESI                            ; 005a88c3
    LEA ESI,[ESP + 0xa4]                ; 005a88c4
    MOV dword ptr [ESP + 0x9c],EBP      ; 005a88cb
    CALL core_actor.cpp_FUN_00408b40    ; 005a88d2
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005a88d7
    PUSH 0x41200000                     ; 005a88da
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005a88df
    PUSH 0x42600000                     ; 005a88e6
    ADD EAX,0x30                        ; 005a88eb
    LEA EDI,[ESP + 0x8c]                ; 005a88ee
    PUSH EAX                            ; 005a88f5
    LEA EAX,[ESP + 0x90]                ; 005a88f6
    LEA ESI,[ESP + 0xa8]                ; 005a88fd
    PUSH EAX                            ; 005a8904
    MOVSD ES:EDI,ESI                    ; 005a8905
    MOVSD ES:EDI,ESI                    ; 005a8906
    MOVSD ES:EDI,ESI                    ; 005a8907
    CALL core_dlight.cpp_renderConeLightGeometry_FUN_00465890 ; 005a8908
        ;   XREF to: 00465890 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_renderConeLightGeometry_FUN_00465890(CVector3f * position, CVector3f * rotation, float fov, float falloff)
    ADD ESP,0x10                        ; 005a890d
    LEA EAX,[ESP + 0x90]                ; 005a8910
    PUSH EAX                            ; 005a8917
    MOV EDI,dword ptr [ESP + 0xc8]      ; 005a8918
    PUSH EDI                            ; 005a891f
    LEA ESI,[ESP + 0x74]                ; 005a8920
    LEA EBX,[ESP + 0x68]                ; 005a8924
    CALL core_actor.cpp_FUN_00408b40    ; 005a8928
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA EDI,[ESP + 0x68]                ; 005a892d
    LEA ESI,[ESP + 0x74]                ; 005a8931
    ADD ESP,0x8                         ; 005a8935
    LEA EAX,[ESP + 0x84]                ; 005a8938
    MOVSD ES:EDI,ESI                    ; 005a893f
    MOVSD ES:EDI,ESI                    ; 005a8940
    MOVSD ES:EDI,ESI                    ; 005a8941
    CMP EAX,EBX                         ; 005a8942
    JZ 0x005a8967                       ; 005a8944
        ;   XREF to: 005a8967 (CONDITIONAL_JUMP)  ; LAB_005a8967
    MOV EAX,dword ptr [ESP + 0x60]      ; 005a8946
    MOV dword ptr [ESP + 0x84],EAX      ; 005a894a
    MOV EAX,dword ptr [ESP + 0x64]      ; 005a8951
    MOV dword ptr [ESP + 0x88],EAX      ; 005a8955
    MOV EAX,dword ptr [ESP + 0x68]      ; 005a895c
    MOV dword ptr [ESP + 0x8c],EAX      ; 005a8960
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005a8967
        ;   Label: LAB_005a8967
    PUSH 0x41200000                     ; 005a896e
    ADD EAX,0x30                        ; 005a8973
    PUSH 0x42600000                     ; 005a8976
    PUSH EAX                            ; 005a897b
    LEA EAX,[ESP + 0x90]                ; 005a897c
    PUSH EAX                            ; 005a8983
    CALL core_dlight.cpp_renderConeLightGeometry_FUN_00465890 ; 005a8984
        ;   XREF to: 00465890 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_renderConeLightGeometry_FUN_00465890(CVector3f * position, CVector3f * rotation, float fov, float falloff)
    ADD ESP,0x10                        ; 005a8989
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005a898c
    ADD ESP,0xb0                        ; 005a8993
    POP EBP                             ; 005a8999
    POP EDI                             ; 005a899a
    POP ESI                             ; 005a899b
    POP EBX                             ; 005a899c
    RET                                 ; 005a899d

