; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; int[1017]        Stack[-0x1000]:4068  aiStackY_1000
; CVector3i        Stack[-0x18]:12  local_18
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 at 0044c671
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 at 00472be1
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   SProjectionParams g_Projection
;   undefined4 g_Projection.neg_half_height_fixed
;   undefined4 g_Projection.center_x_fixed
;   undefined4 g_Projection.center_y_fixed
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix[0][1]
;   undefined4 g_TransformMatrix[0][2]
;   undefined4 g_TransformMatrix[1][0]
;   undefined4 g_TransformMatrix[1][1]
;   undefined4 g_TransformMatrix[1][2]
;   undefined4 g_TransformMatrix[2][0]
;   undefined4 g_TransformMatrix[2][1]
;   undefined4 g_TransformMatrix[2][2]
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20
;   engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0048c760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d1c0
        ;   Label: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0
    PUSH ESI                            ; 0044d1c1
    PUSH EDI                            ; 0044d1c2
    SUB ESP,0xc                         ; 0044d1c3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0044d1c6
    MOV ESI,dword ptr [0x02d052e8]      ; 0044d1ca | g_TransformMatrix
    MOV dword ptr [EBX + 0x178],ESI     ; 0044d1d0
    MOV ESI,dword ptr [0x02d052ec]      ; 0044d1d6 | g_TransformMatrix[0][1]
    MOV dword ptr [EBX + 0x17c],ESI     ; 0044d1dc
    MOV ESI,dword ptr [0x02d052f0]      ; 0044d1e2 | g_TransformMatrix[0][2]
    MOV dword ptr [EBX + 0x180],ESI     ; 0044d1e8
    MOV ESI,dword ptr [0x02d052f4]      ; 0044d1ee | g_TransformMatrix[1][0]
    MOV dword ptr [EBX + 0x184],ESI     ; 0044d1f4
    MOV ESI,dword ptr [0x02d052f8]      ; 0044d1fa | g_TransformMatrix[1][1]
    MOV dword ptr [EBX + 0x188],ESI     ; 0044d200
    MOV ESI,dword ptr [0x02d052fc]      ; 0044d206 | g_TransformMatrix[1][2]
    MOV dword ptr [EBX + 0x18c],ESI     ; 0044d20c
    MOV ESI,dword ptr [0x02d05300]      ; 0044d212 | g_TransformMatrix[2][0]
    MOV dword ptr [EBX + 0x190],ESI     ; 0044d218
    MOV ESI,dword ptr [0x02d05304]      ; 0044d21e | g_TransformMatrix[2][1]
    MOV EDX,dword ptr [0x006703ec]      ; 0044d224 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [EBX + 0x194],ESI     ; 0044d22a
    MOV ESI,dword ptr [0x02d05308]      ; 0044d230 | g_TransformMatrix[2][2]
    PUSH EDX                            ; 0044d236 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x198],ESI     ; 0044d237
    LEA ESI,[ESP + 0x4]                 ; 0044d23d
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0048c760 ; 0044d241
        ;   XREF to: 0048c760 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0048c760(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x4]                 ; 0044d246
    LEA EDI,[EBX + 0x16c]               ; 0044d24a
    ADD ESP,0x4                         ; 0044d250
    JMP 0x0060c7eb                      ; 0044d253
        ;   XREF to: 0060c7eb (UNCONDITIONAL_JUMP)  ; LAB_0060c7eb
    MOV dword ptr [EBX + 0x1c0],ESI     ; 0044d25c
        ;   Label: LAB_0044d25c
    MOV ESI,dword ptr [0x02d0254c]      ; 0044d262 | g_Projection.neg_half_height_fixed
    MOV dword ptr [EBX + 0x1c4],ESI     ; 0044d268
    MOV ESI,dword ptr [0x02d02550]      ; 0044d26e | g_Projection.center_x_fixed
    MOV dword ptr [EBX + 0x1c8],ESI     ; 0044d274
    MOV ESI,dword ptr [0x02d02554]      ; 0044d27a | g_Projection.center_y_fixed
    PUSH EBX                            ; 0044d280
    MOV dword ptr [EBX + 0x1cc],ESI     ; 0044d281
    CALL core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20 ; 0044d287
        ;   XREF to: 0044cf20 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0044d28c
    ADD ESP,0xc                         ; 0044d28f
    POP EDI                             ; 0044d292
    POP ESI                             ; 0044d293
    POP EBX                             ; 0044d294
    RET                                 ; 0044d295
    MOV ECX,dword ptr [ESI]             ; 0060c7eb
        ;   Label: LAB_0060c7eb
    MOV dword ptr [EDI],ECX             ; 0060c7ed
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c7ef
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c7f2
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060c7f5
    MOV dword ptr [EDI + 0x8],ECX       ; 0060c7f8
    ADD ESI,0xc                         ; 0060c7fb
    ADD EDI,0xc                         ; 0060c7fe
    MOV ESI,dword ptr [0x02d02548]      ; 0060c801 | g_Projection
    JMP 0x0044d25c                      ; 0060c807
        ;   XREF to: 0044d25c (UNCONDITIONAL_JUMP)  ; LAB_0044d25c

