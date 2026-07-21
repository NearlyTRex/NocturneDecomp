; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CToss_render_FUN_00487630(int param_1)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a899
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487630
        ;   Label: core_fire.cpp_CToss_render_FUN_00487630
    MOV EBX,dword ptr [ESP + 0x8]       ; 00487631
    FLD float ptr [EBX + 0x3dc]         ; 00487635
    FLDZ                                ; 0048763b
    FCOMPP                              ; 0048763d
    FNSTSW AX                           ; 0048763f
    SAHF                                ; 00487641
    JC 0x00487646                       ; 00487642
        ;   XREF to: 00487646 (CONDITIONAL_JUMP)  ; LAB_00487646
    POP EBX                             ; 00487644
    RET                                 ; 00487645
    LEA EAX,[EBX + 0x180]               ; 00487646
        ;   Label: LAB_00487646
    PUSH EAX                            ; 0048764c
    MOV EDX,dword ptr [0x005ae704]      ; 0048764d | DAT_005ae704
    PUSH EDX                            ; 00487653 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00487654
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00()
    ADD ESP,0x8                         ; 00487659
    PUSH 0x0                            ; 0048765c
    LEA EAX,[EBX + 0x18c]               ; 0048765e
    PUSH EAX                            ; 00487664
    MOV ECX,dword ptr [0x005ae704]      ; 00487665 | DAT_005ae704
    PUSH ECX                            ; 0048766b | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0048766c
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0()
    ADD ESP,0xc                         ; 00487671
    PUSH -0x1                           ; 00487674
    ADD EBX,0x4                         ; 00487676
    PUSH 0x0                            ; 00487679
    PUSH EBX                            ; 0048767b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0048767c
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    ADD ESP,0xc                         ; 00487681
    MOV EBX,dword ptr [0x005ae704]      ; 00487684 | DAT_005ae704
    PUSH EBX                            ; 0048768a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0048768b
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00487690
    POP EBX                             ; 00487693
    RET                                 ; 00487694

