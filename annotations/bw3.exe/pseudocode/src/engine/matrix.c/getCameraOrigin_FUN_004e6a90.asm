; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_getCameraOrigin_FUN_004e6a90(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00450700 at 00450707
;   core_ground.cpp_CGround_render_FUN_004d0910 at 004d091c
;   engine_matrix.c_FUN_0046d1a0 at 0046d1ab
;   engine_matrix.c_FUN_0046d1c0 at 0046d1cf
;
; Referenced Globals:
;   undefined4 DAT_01c6e2d8
;   undefined4 DAT_01c6e2dc
;   undefined4 DAT_01c6e2e0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004e6a90
        ;   Label: engine_matrix.c_getCameraOrigin_FUN_004e6a90
    SUB ESP,0xc                         ; 004e6a91
    MOV EAX,ESI                         ; 004e6a94
    MOV EDX,dword ptr [0x01c6e2d8]      ; 004e6a96 | DAT_01c6e2d8
    MOV dword ptr [ESP],EDX             ; 004e6a9c
    MOV EDX,dword ptr [0x01c6e2dc]      ; 004e6a9f | DAT_01c6e2dc
    MOV EDI,ESI                         ; 004e6aa5
    MOV dword ptr [ESP + 0x4],EDX       ; 004e6aa7
    MOV EDX,dword ptr [0x01c6e2e0]      ; 004e6aab | DAT_01c6e2e0
    MOV ESI,ESP                         ; 004e6ab1
    MOV dword ptr [ESP + 0x8],EDX       ; 004e6ab3
    MOVSD ES:EDI,ESI                    ; 004e6ab7
    MOVSD ES:EDI,ESI                    ; 004e6ab8
    MOVSD ES:EDI,ESI                    ; 004e6ab9
    ADD ESP,0xc                         ; 004e6aba
    POP EDI                             ; 004e6abd
    RET                                 ; 004e6abe

