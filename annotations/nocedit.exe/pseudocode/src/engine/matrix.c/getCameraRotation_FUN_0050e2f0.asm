; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_matrix_c_getCameraRotation_FUN_0050e2f0(CVector3i *output)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800 at 0048c810
;   engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0 at 0048c7eb
;
; Referenced Globals:
;   int g_CameraRotationPitch
;   int g_CameraRotationYaw
;   int g_CameraRotationRoll
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0050e2f0
        ;   Label: engine_matrix.c_getCameraRotation_FUN_0050e2f0
    SUB ESP,0xc                         ; 0050e2f1
    MOV EAX,ESI                         ; 0050e2f4
    MOV EDX,dword ptr [0x02d052d0]      ; 0050e2f6 | g_CameraRotationPitch
    MOV dword ptr [ESP],EDX             ; 0050e2fc
    MOV EDX,dword ptr [0x02d052d4]      ; 0050e2ff | g_CameraRotationYaw
    MOV EDI,ESI                         ; 0050e305
    MOV dword ptr [ESP + 0x4],EDX       ; 0050e307
    MOV EDX,dword ptr [0x02d052d8]      ; 0050e30b | g_CameraRotationRoll
    MOV ESI,ESP                         ; 0050e311
    MOV dword ptr [ESP + 0x8],EDX       ; 0050e313
    MOVSD ES:EDI,ESI                    ; 0050e317
    MOVSD ES:EDI,ESI                    ; 0050e318
    MOVSD ES:EDI,ESI                    ; 0050e319
    ADD ESP,0xc                         ; 0050e31a
    POP EDI                             ; 0050e31d
    RET                                 ; 0050e31e

