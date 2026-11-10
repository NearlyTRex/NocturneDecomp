; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_getCameraOrigin_FUN_00509050(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_004545b0 at 004545b7
;   core_ground.cpp_CGround_render_FUN_004e7f80 at 004e7f8c
;   engine_matrix.c_FUN_00483ac0 at 00483acb
;   engine_matrix.c_FUN_00483ae0 at 00483aef
;
; Referenced Globals:
;   undefined4 DAT_01c51d38
;   undefined4 DAT_01c51d3c
;   undefined4 DAT_01c51d40
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00509050
        ;   Label: engine_matrix.c_getCameraOrigin_FUN_00509050
    SUB ESP,0xc                         ; 00509051
    MOV EAX,ESI                         ; 00509054
    MOV EDX,dword ptr [0x01c51d38]      ; 00509056 | DAT_01c51d38
    MOV dword ptr [ESP],EDX             ; 0050905c
    MOV EDX,dword ptr [0x01c51d3c]      ; 0050905f | DAT_01c51d3c
    MOV EDI,ESI                         ; 00509065
    MOV dword ptr [ESP + 0x4],EDX       ; 00509067
    MOV EDX,dword ptr [0x01c51d40]      ; 0050906b | DAT_01c51d40
    MOV ESI,ESP                         ; 00509071
    MOV dword ptr [ESP + 0x8],EDX       ; 00509073
    MOVSD ES:EDI,ESI                    ; 00509077
    MOVSD ES:EDI,ESI                    ; 00509078
    MOVSD ES:EDI,ESI                    ; 00509079
    ADD ESP,0xc                         ; 0050907a
    POP EDI                             ; 0050907d
    RET                                 ; 0050907e

