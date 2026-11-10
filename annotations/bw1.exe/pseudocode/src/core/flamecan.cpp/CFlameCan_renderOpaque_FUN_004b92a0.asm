; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_flamecan_cpp_CFlameCan_renderOpaque_FUN_004b92a0(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_matrix.c_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b92a0
        ;   Label: core_flamecan.cpp_CFlameCan_renderOpaque_FUN_004b92a0
    PUSH ESI                            ; 004b92a1
    PUSH EDI                            ; 004b92a2
    SUB ESP,0x30                        ; 004b92a3
    MOV EBX,dword ptr [ESP + 0x40]      ; 004b92a6
    LEA EAX,[EBX + 0x20]                ; 004b92aa
    PUSH EAX                            ; 004b92ad
    MOV EDX,dword ptr [0x00612560]      ; 004b92ae | DAT_00612560
    PUSH EDX                            ; 004b92b4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004b92b5
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004b92ba
    PUSH 0x0                            ; 004b92bd
    LEA EAX,[EBX + 0x30]                ; 004b92bf
    PUSH EAX                            ; 004b92c2
    MOV ECX,dword ptr [0x00612560]      ; 004b92c3 | DAT_00612560
    PUSH ECX                            ; 004b92c9
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004b92ca
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004b92cf
    PUSH 0x0                            ; 004b92d2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004b92d4
    PUSH EBX                            ; 004b92da
    LEA ESI,[ESP + 0x20]                ; 004b92db
    LEA EDI,[ESP + 0x8]                 ; 004b92df
    CALL dword ptr [EAX + 0x1c]         ; 004b92e3
    MOV ECX,0x6                         ; 004b92e6
    ADD ESP,0x4                         ; 004b92eb
    LEA EAX,[ESP + 0x4]                 ; 004b92ee
    LEA ESI,[ESP + 0x1c]                ; 004b92f2
    PUSH EAX                            ; 004b92f6
    MOVSD.REP ES:EDI,ESI                ; 004b92f7
    CALL core_box.cpp_FUN_004207b0      ; 004b92f9
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 004b92fe
    MOV ESI,EAX                         ; 004b9301
    MOV dword ptr [EBX + 0x5e4],EAX     ; 004b9303
    TEST EAX,EAX                        ; 004b9309
    JNZ 0x004b9325                      ; 004b930b
        ;   XREF to: 004b9325 (CONDITIONAL_JUMP)  ; LAB_004b9325
    MOV EBX,dword ptr [0x00612560]      ; 004b930d | DAT_00612560
        ;   Label: LAB_004b930d
    PUSH EBX                            ; 004b9313
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004b9314
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004b9319
    MOV EAX,ESI                         ; 004b931c
    ADD ESP,0x30                        ; 004b931e
    POP EDI                             ; 004b9321
    POP ESI                             ; 004b9322
    POP EBX                             ; 004b9323
    RET                                 ; 004b9324
    PUSH -0x1                           ; 004b9325
        ;   Label: LAB_004b9325
    ADD EBX,0x158                       ; 004b9327
    PUSH 0x0                            ; 004b932d
    PUSH EBX                            ; 004b932f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004b9330
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004b9335
    JMP 0x004b930d                      ; 004b9338
        ;   XREF to: 004b930d (UNCONDITIONAL_JUMP)  ; LAB_004b930d

