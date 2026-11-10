; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_getCameraOrigin_FUN_004ea3b0(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00442f00 at 00442f07
;   core_ground.cpp_CGround_render_FUN_004cb700 at 004cb70c
;   engine_matrix.c_FUN_0046b5c0 at 0046b5cb
;   engine_matrix.c_FUN_0046b5e0 at 0046b5ef
;
; Referenced Globals:
;   undefined4 DAT_01c38b78
;   undefined4 DAT_01c38b7c
;   undefined4 DAT_01c38b80
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ea3b0
        ;   Label: engine_matrix.c_getCameraOrigin_FUN_004ea3b0
    SUB ESP,0xc                         ; 004ea3b1
    MOV EAX,ESI                         ; 004ea3b4
    MOV EDX,dword ptr [0x01c38b78]      ; 004ea3b6 | DAT_01c38b78
    MOV dword ptr [ESP],EDX             ; 004ea3bc
    MOV EDX,dword ptr [0x01c38b7c]      ; 004ea3bf | DAT_01c38b7c
    MOV EDI,ESI                         ; 004ea3c5
    MOV dword ptr [ESP + 0x4],EDX       ; 004ea3c7
    MOV EDX,dword ptr [0x01c38b80]      ; 004ea3cb | DAT_01c38b80
    MOV ESI,ESP                         ; 004ea3d1
    MOV dword ptr [ESP + 0x8],EDX       ; 004ea3d3
    MOVSD ES:EDI,ESI                    ; 004ea3d7
    MOVSD ES:EDI,ESI                    ; 004ea3d8
    MOVSD ES:EDI,ESI                    ; 004ea3d9
    ADD ESP,0xc                         ; 004ea3da
    POP EDI                             ; 004ea3dd
    RET                                 ; 004ea3de

