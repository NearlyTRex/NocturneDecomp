; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_goggles_cpp_CGoggles_renderOpaque_FUN_004cc760(CGoggles *this_ptr)
;
; Parameters:
; CGoggles *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_matrix.c_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc760
        ;   Label: core_goggles.cpp_CGoggles_renderOpaque_FUN_004cc760
    PUSH ESI                            ; 004cc761
    PUSH EDI                            ; 004cc762
    SUB ESP,0x30                        ; 004cc763
    MOV EBX,dword ptr [ESP + 0x40]      ; 004cc766
    LEA EAX,[EBX + 0x20]                ; 004cc76a
    PUSH EAX                            ; 004cc76d
    MOV EDX,dword ptr [0x005f2afc]      ; 004cc76e | DAT_005f2afc
    PUSH EDX                            ; 004cc774
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 004cc775
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004cc77a
    PUSH 0x0                            ; 004cc77d
    LEA EAX,[EBX + 0x30]                ; 004cc77f
    PUSH EAX                            ; 004cc782
    MOV ECX,dword ptr [0x005f2afc]      ; 004cc783 | DAT_005f2afc
    PUSH ECX                            ; 004cc789
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 004cc78a
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004cc78f
    PUSH 0x0                            ; 004cc792
    MOV EAX,dword ptr [EBX + 0x154]     ; 004cc794
    PUSH EBX                            ; 004cc79a
    LEA ESI,[ESP + 0x20]                ; 004cc79b
    LEA EDI,[ESP + 0x8]                 ; 004cc79f
    CALL dword ptr [EAX + 0x1c]         ; 004cc7a3
    MOV ECX,0x6                         ; 004cc7a6
    ADD ESP,0x4                         ; 004cc7ab
    LEA EAX,[ESP + 0x4]                 ; 004cc7ae
    LEA ESI,[ESP + 0x1c]                ; 004cc7b2
    PUSH EAX                            ; 004cc7b6
    MOVSD.REP ES:EDI,ESI                ; 004cc7b7
    CALL core_box.cpp_FUN_0041daf0      ; 004cc7b9
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 004cc7be
    MOV ESI,EAX                         ; 004cc7c1
    TEST EAX,EAX                        ; 004cc7c3
    JNZ 0x004cc7df                      ; 004cc7c5
        ;   XREF to: 004cc7df (CONDITIONAL_JUMP)  ; LAB_004cc7df
    MOV EBX,dword ptr [0x005f2afc]      ; 004cc7c7 | DAT_005f2afc
        ;   Label: LAB_004cc7c7
    PUSH EBX                            ; 004cc7cd
    CALL engine_matrix.c_pop_FUN_0046d080 ; 004cc7ce
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 004cc7d3
    MOV EAX,ESI                         ; 004cc7d6
    ADD ESP,0x30                        ; 004cc7d8
    POP EDI                             ; 004cc7db
    POP ESI                             ; 004cc7dc
    POP EBX                             ; 004cc7dd
    RET                                 ; 004cc7de
    PUSH -0x1                           ; 004cc7df
        ;   Label: LAB_004cc7df
    ADD EBX,0x158                       ; 004cc7e1
    PUSH 0x0                            ; 004cc7e7
    PUSH EBX                            ; 004cc7e9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 004cc7ea
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004cc7ef
    JMP 0x004cc7c7                      ; 004cc7f2
        ;   XREF to: 004cc7c7 (UNCONDITIONAL_JUMP)  ; LAB_004cc7c7

