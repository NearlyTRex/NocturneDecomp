; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __esi engine_matrix_c_getCameraOrigin_FUN_0050e2c0(CVector3i *output)
;
;
; XREF[4]:
;   core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00453950 at 00453957
;   core_ground.cpp_CGround_render_FUN_004efc90 at 004efc9c
;   engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0048c760 at 0048c76b
;   engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_0048c780 at 0048c790
;
; Referenced Globals:
;   int g_CameraOriginX
;   int g_CameraOriginY
;   int g_CameraOriginZ
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0050e2c0
        ;   Label: engine_matrix.c_getCameraOrigin_FUN_0050e2c0
    SUB ESP,0xc                         ; 0050e2c1
    MOV EAX,ESI                         ; 0050e2c4
    MOV EDX,dword ptr [0x02d052c4]      ; 0050e2c6 | g_CameraOriginX
    MOV dword ptr [ESP],EDX             ; 0050e2cc
    MOV EDX,dword ptr [0x02d052c8]      ; 0050e2cf | g_CameraOriginY
    MOV EDI,ESI                         ; 0050e2d5
    MOV dword ptr [ESP + 0x4],EDX       ; 0050e2d7
    MOV EDX,dword ptr [0x02d052cc]      ; 0050e2db | g_CameraOriginZ
    MOV ESI,ESP                         ; 0050e2e1
    MOV dword ptr [ESP + 0x8],EDX       ; 0050e2e3
    MOVSD ES:EDI,ESI                    ; 0050e2e7
    MOVSD ES:EDI,ESI                    ; 0050e2e8
    MOVSD ES:EDI,ESI                    ; 0050e2e9
    ADD ESP,0xc                         ; 0050e2ea
    POP EDI                             ; 0050e2ed
    RET                                 ; 0050e2ee

