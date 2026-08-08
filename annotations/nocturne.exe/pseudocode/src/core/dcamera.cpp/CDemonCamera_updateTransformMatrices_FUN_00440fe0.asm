; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290 at 004404fa
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470 at 0044e5d1
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;   SProjectionParams g_Projection
;   undefined4 g_Projection.neg_half_height_fixed
;   undefined4 g_Projection.center_x_fixed
;   undefined4 g_Projection.center_y_fixed
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix.m[0].y
;   undefined4 g_TransformMatrix.m[0].z
;   undefined4 g_TransformMatrix.m[1].x
;   undefined4 g_TransformMatrix.m[1].y
;   undefined4 g_TransformMatrix.m[1].z
;   undefined4 g_TransformMatrix.m[2].x
;   undefined4 g_TransformMatrix.m[2].y
;   undefined4 g_TransformMatrix.m[2].z
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_00440d40
;   engine_drender.cpp_FUN_00460d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440fe0
        ;   Label: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0
    PUSH ESI                            ; 00440fe1
    PUSH EDI                            ; 00440fe2
    SUB ESP,0xc                         ; 00440fe3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00440fe6
    MOV ESI,dword ptr [0x01c039e8]      ; 00440fea | g_TransformMatrix
    MOV dword ptr [EBX + 0x178],ESI     ; 00440ff0
    MOV ESI,dword ptr [0x01c039ec]      ; 00440ff6 | g_TransformMatrix.m[0].y
    MOV dword ptr [EBX + 0x17c],ESI     ; 00440ffc
    MOV ESI,dword ptr [0x01c039f0]      ; 00441002 | g_TransformMatrix.m[0].z
    MOV dword ptr [EBX + 0x180],ESI     ; 00441008
    MOV ESI,dword ptr [0x01c039f4]      ; 0044100e | g_TransformMatrix.m[1].x
    MOV dword ptr [EBX + 0x184],ESI     ; 00441014
    MOV ESI,dword ptr [0x01c039f8]      ; 0044101a | g_TransformMatrix.m[1].y
    MOV dword ptr [EBX + 0x188],ESI     ; 00441020
    MOV ESI,dword ptr [0x01c039fc]      ; 00441026 | g_TransformMatrix.m[1].z
    MOV dword ptr [EBX + 0x18c],ESI     ; 0044102c
    MOV ESI,dword ptr [0x01c03a00]      ; 00441032 | g_TransformMatrix.m[2].x
    MOV dword ptr [EBX + 0x190],ESI     ; 00441038
    MOV ESI,dword ptr [0x01c03a04]      ; 0044103e | g_TransformMatrix.m[2].y
    MOV EDX,dword ptr [0x005ae704]      ; 00441044 | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [EBX + 0x194],ESI     ; 0044104a
    MOV ESI,dword ptr [0x01c03a08]      ; 00441050 | g_TransformMatrix.m[2].z
    PUSH EDX                            ; 00441056 | DAT_01b4d738
    MOV dword ptr [EBX + 0x198],ESI     ; 00441057
    LEA ESI,[ESP + 0x4]                 ; 0044105d
    CALL engine_drender.cpp_FUN_00460d10 ; 00441061
        ;   XREF to: 00460d10 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00460d10()
    LEA ESI,[ESP + 0x4]                 ; 00441066
    LEA EDI,[EBX + 0x16c]               ; 0044106a
    ADD ESP,0x4                         ; 00441070
    MOVSD ES:EDI,ESI                    ; 00441073
    MOVSD ES:EDI,ESI                    ; 00441074
    MOVSD ES:EDI,ESI                    ; 00441075
    MOV ESI,dword ptr [0x01c00c48]      ; 00441076 | g_Projection
    MOV dword ptr [EBX + 0x1c0],ESI     ; 0044107c
    MOV ESI,dword ptr [0x01c00c4c]      ; 00441082 | g_Projection.neg_half_height_fixed
    MOV dword ptr [EBX + 0x1c4],ESI     ; 00441088
    MOV ESI,dword ptr [0x01c00c50]      ; 0044108e | g_Projection.center_x_fixed
    MOV dword ptr [EBX + 0x1c8],ESI     ; 00441094
    MOV ESI,dword ptr [0x01c00c54]      ; 0044109a | g_Projection.center_y_fixed
    PUSH EBX                            ; 004410a0
    MOV dword ptr [EBX + 0x1cc],ESI     ; 004410a1
    CALL core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_00440d40 ; 004410a7
        ;   XREF to: 00440d40 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_00440d40(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 004410ac
    ADD ESP,0xc                         ; 004410af
    POP EDI                             ; 004410b2
    POP ESI                             ; 004410b3
    POP EBX                             ; 004410b4
    RET                                 ; 004410b5

