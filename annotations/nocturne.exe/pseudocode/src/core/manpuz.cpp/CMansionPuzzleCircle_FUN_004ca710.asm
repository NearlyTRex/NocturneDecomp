; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_004ca710(CMansionPuzzleCircle *this_ptr,int param_2)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_renderOpaque_FUN_004c9be0 at 004c9c71
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004ca710
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_FUN_004ca710
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ca714
    SUB EAX,EDX                         ; 004ca71b
    SHL EAX,0x3                         ; 004ca71d
    ADD EDX,EAX                         ; 004ca720
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ca722
    SHL EDX,0x2                         ; 004ca726
    ADD EAX,0x5e8                       ; 004ca729
    ADD EAX,EDX                         ; 004ca72e
    CMP dword ptr [EAX],0x0             ; 004ca730
    JNZ 0x004ca736                      ; 004ca733
        ;   XREF to: 004ca736 (CONDITIONAL_JUMP)  ; LAB_004ca736
    RET                                 ; 004ca735
    PUSH EBX                            ; 004ca736
        ;   Label: LAB_004ca736
    LEA EDX,[EAX + 0xc]                 ; 004ca737
    PUSH EDX                            ; 004ca73a
    ADD EAX,0x18                        ; 004ca73b
    PUSH EAX                            ; 004ca73e
    MOV ECX,dword ptr [0x005ae704]      ; 004ca73f | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004ca745 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 004ca746
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 004ca74b
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ca74e
    PUSH -0x1                           ; 004ca752
    ADD EAX,0x150                       ; 004ca754
    PUSH 0x0                            ; 004ca759
    PUSH EAX                            ; 004ca75b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 004ca75c
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004ca761
    MOV EBX,dword ptr [0x005ae704]      ; 004ca764 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 004ca76a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 004ca76b
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 004ca770
    POP EBX                             ; 004ca773
    LEA EAX,[EAX]                       ; 004ca774
    LEA EDX,[EDX]                       ; 004ca77a
    RET                                 ; 004ca780

