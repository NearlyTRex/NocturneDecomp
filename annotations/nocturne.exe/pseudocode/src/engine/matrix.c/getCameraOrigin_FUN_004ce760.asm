; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __esi engine_matrix_c_getCameraOrigin_FUN_004ce760(CVector3i *output)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_004477f0 at 004477f7
;   core_ground.cpp_CGround_render_FUN_004b2110 at 004b211c
;   engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_00460d10 at 00460d1b
;   engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30 at 00460d40
;
; Referenced Globals:
;   int g_CameraOriginX
;   int g_CameraOriginY
;   int g_CameraOriginZ
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ce760
        ;   Label: engine_matrix.c_getCameraOrigin_FUN_004ce760
    SUB ESP,0xc                         ; 004ce761
    MOV EAX,ESI                         ; 004ce764
    MOV EDX,dword ptr [0x01c039c4]      ; 004ce766 | g_CameraOriginX
    MOV dword ptr [ESP],EDX             ; 004ce76c
    MOV EDX,dword ptr [0x01c039c8]      ; 004ce76f | g_CameraOriginY
    MOV EDI,ESI                         ; 004ce775
    MOV dword ptr [ESP + 0x4],EDX       ; 004ce777
    MOV EDX,dword ptr [0x01c039cc]      ; 004ce77b | g_CameraOriginZ
    MOV ESI,ESP                         ; 004ce781
    MOV dword ptr [ESP + 0x8],EDX       ; 004ce783
    MOVSD ES:EDI,ESI                    ; 004ce787
    MOVSD ES:EDI,ESI                    ; 004ce788
    MOVSD ES:EDI,ESI                    ; 004ce789
    ADD ESP,0xc                         ; 004ce78a
    POP EDI                             ; 004ce78d
    RET                                 ; 004ce78e

