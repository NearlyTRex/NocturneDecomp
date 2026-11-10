; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gasmask_cpp_CGasMask_renderOpaque_FUN_004c13e0(CGasMask *this_ptr)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_matrix.c_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c13e0
        ;   Label: core_gasmask.cpp_CGasMask_renderOpaque_FUN_004c13e0
    PUSH ESI                            ; 004c13e1
    PUSH EDI                            ; 004c13e2
    SUB ESP,0x30                        ; 004c13e3
    MOV EBX,dword ptr [ESP + 0x40]      ; 004c13e6
    LEA EAX,[EBX + 0x20]                ; 004c13ea
    PUSH EAX                            ; 004c13ed
    MOV EDX,dword ptr [0x0060b280]      ; 004c13ee | DAT_0060b280
    PUSH EDX                            ; 004c13f4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 004c13f5
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c13fa
    PUSH 0x0                            ; 004c13fd
    LEA EAX,[EBX + 0x30]                ; 004c13ff
    PUSH EAX                            ; 004c1402
    MOV ECX,dword ptr [0x0060b280]      ; 004c1403 | DAT_0060b280
    PUSH ECX                            ; 004c1409
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 004c140a
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004c140f
    PUSH 0x0                            ; 004c1412
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c1414
    PUSH EBX                            ; 004c141a
    LEA ESI,[ESP + 0x20]                ; 004c141b
    LEA EDI,[ESP + 0x8]                 ; 004c141f
    CALL dword ptr [EAX + 0x24]         ; 004c1423
    MOV ECX,0x6                         ; 004c1426
    ADD ESP,0x4                         ; 004c142b
    LEA EAX,[ESP + 0x4]                 ; 004c142e
    LEA ESI,[ESP + 0x1c]                ; 004c1432
    PUSH EAX                            ; 004c1436
    MOVSD.REP ES:EDI,ESI                ; 004c1437
    CALL core_box.cpp_FUN_0041a840      ; 004c1439
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 004c143e
    MOV ESI,EAX                         ; 004c1441
    TEST EAX,EAX                        ; 004c1443
    JNZ 0x004c145f                      ; 004c1445
        ;   XREF to: 004c145f (CONDITIONAL_JUMP)  ; LAB_004c145f
    MOV EBX,dword ptr [0x0060b280]      ; 004c1447 | DAT_0060b280
        ;   Label: LAB_004c1447
    PUSH EBX                            ; 004c144d
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 004c144e
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 004c1453
    MOV EAX,ESI                         ; 004c1456
    ADD ESP,0x30                        ; 004c1458
    POP EDI                             ; 004c145b
    POP ESI                             ; 004c145c
    POP EBX                             ; 004c145d
    RET                                 ; 004c145e
    PUSH -0x1                           ; 004c145f
        ;   Label: LAB_004c145f
    ADD EBX,0x2b4                       ; 004c1461
    PUSH 0x0                            ; 004c1467
    PUSH EBX                            ; 004c1469
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 004c146a
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004c146f
    JMP 0x004c1447                      ; 004c1472
        ;   XREF to: 004c1447 (UNCONDITIONAL_JUMP)  ; LAB_004c1447

