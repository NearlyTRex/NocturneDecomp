; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_matrix.c_getCameraOrigin_FUN_0050e2c0(CVector3i * output)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00453950 at 00453957
;   core_ground.cpp_CGround_render_FUN_004efc90 at 004efc9c
;   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780 at 0048c790
;   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760 at 0048c76b
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
    MOV EDX,dword ptr [0x02d052c4]      ; 0050e2c6 | int g_CameraOriginX
    MOV dword ptr [ESP],EDX             ; 0050e2cc
    MOV EDX,dword ptr [0x02d052c8]      ; 0050e2cf | int g_CameraOriginY
    MOV EDI,ESI                         ; 0050e2d5
    MOV dword ptr [ESP + 0x4],EDX       ; 0050e2d7
    MOV EDX,dword ptr [0x02d052cc]      ; 0050e2db | int g_CameraOriginZ
    MOV ESI,ESP                         ; 0050e2e1
    MOV dword ptr [ESP + 0x8],EDX       ; 0050e2e3
    MOVSD ES:EDI,ESI                    ; 0050e2e7
    MOVSD ES:EDI,ESI                    ; 0050e2e8
    MOVSD ES:EDI,ESI                    ; 0050e2e9
    ADD ESP,0xc                         ; 0050e2ea
    POP EDI                             ; 0050e2ed
    RET                                 ; 0050e2ee

